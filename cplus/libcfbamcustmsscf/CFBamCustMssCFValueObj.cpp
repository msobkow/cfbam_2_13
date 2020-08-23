// Description: C++18 MSS Code Factory library implementation for CFBam Custom MssCF.

/*
 *	MSS Code Factory CFBam 2.13 CustMssCF
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	This file is part of MSS Code Factory.
 *	
 *	MSS Code Factory is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *	
 *	MSS Code Factory is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *	
 *	You should have received a copy of the GNU General Public License
 *	along with MSS Code Factory.  If not, see https://www.gnu.org/licenses/.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 */

#include <cfbamcustmsscf/CFBamCustMssCFValueObj.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFValueObj::CLASS_NAME( "CFBamCustMssCFValueObj" );

	CFBamCustMssCFValueObj::CFBamCustMssCFValueObj() {
	}

	CFBamCustMssCFValueObj::~CFBamCustMssCFValueObj() {
	}

	std::vector<ICFBamRelationObj*> CFBamCustMssCFValueObj::getAffectedRelations( ICFBamValueObj* valueDef ) {
		static const std::string S_ProcName( "getAffectedRelations" );
		static const std::string S_ValueDefScope( "valueDef.getRequiredContainerScope" );
		std::vector<ICFBamRelationObj*> list;
		ICFBamScopeObj* container = valueDef->getRequiredContainerScope();
		ICFBamTableObj* tableDef = NULL;
		if( container == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_ValueDefScope );
		}
		else if( container->implementsClassCode( CFBamTableBuff::CLASS_CODE ) ) {
			tableDef = dynamic_cast<ICFBamTableObj*>( container );
		}
		else {
			static const std::string S_Msg( "RequiredContainerScope is not an ICFBamTableObj" );
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_Msg );
		}
		ICFBamRelationObj* relationDef = NULL;
		ICFBamRelationColObj* relationColDef = NULL;
		ICFBamIndexColObj* indexCol = NULL;
		std::vector<ICFBamRelationObj*> relations = tableDef->getOptionalComponentsRelation();
		auto iterRel = relations.begin();
		auto endRel = relations.end();
		while( iterRel != endRel ) {
			relationDef = *iterRel;
			std::vector<ICFBamRelationColObj*> relationCols = relationDef->getOptionalComponentsColumns();
			auto iterCol = relationCols.begin();
			auto endCol = relationCols.end();
			while( iterCol != endCol ) {
				relationColDef = *iterCol;
				indexCol = relationColDef->getRequiredLookupFromCol();
				if( indexCol->getRequiredLookupColumn() == valueDef ) {
					list.push_back( relationDef );
				}
				iterCol ++;
			}
			iterRel ++;
		}
		return( list );
	}

	std::vector<ICFBamRelationObj*> CFBamCustMssCFValueObj::getColumnInComponentsRelations( ICFBamValueObj* valueDef ) {
		static const std::string S_ProcName( "getColumnInComponentsRelations" );
		static const std::string S_ValueDefScope( "valueDef.getRequiredContainerScope" );
		std::vector<ICFBamRelationObj*> list;
		ICFBamScopeObj* container = valueDef->getRequiredContainerScope();
		ICFBamTableObj* tableDef = NULL;
		if( container == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_ValueDefScope );
		}
		else if( container->implementsClassCode( CFBamTableBuff::CLASS_CODE ) ) {
			tableDef = dynamic_cast<ICFBamTableObj*>( container );
		}
		else {
			static const std::string S_Msg( "RequiredContainerScope is not an ICFBamTableObj" );
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_Msg );
		}
		ICFBamRelationColObj* relationCol = NULL;
		ICFBamRelationObj* relation = NULL;
		ICFBamIndexColObj* indexCol = NULL;
		std::vector<ICFBamRelationColObj*> relationColumns;
		std::string relationTypeName;
		std::vector<ICFBamRelationObj*> relations = tableDef->getOptionalComponentsRelation();
		auto iterRel = relations.begin();
		auto endRel = relations.end();
		while( iterRel != endRel ) {
			relation = *iterRel;
			if( relation->getRequiredRelationType() == ICFBamSchema::RelationTypeEnum::Components ) {
				relationColumns = relation->getOptionalComponentsColumns();
				auto iterRelCol = relationColumns.begin();
				auto endRelCol = relationColumns.end();
				while( iterRelCol != endRelCol ) {
					relationCol = *iterRelCol;
					indexCol = relationCol->getRequiredLookupFromCol();
					if( valueDef == indexCol->getRequiredLookupColumn() ) {
						list.push_back( relation );
						break;
					}
					iterRelCol ++;
				}
			}
			iterRel ++;
		}
		return( list );
	}
}
