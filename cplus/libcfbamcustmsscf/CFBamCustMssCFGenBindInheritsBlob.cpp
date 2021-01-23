/*
 *	CFBamCustMssCF
 *
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
 *	Contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindInheritsBlob.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindInheritsBlob::CLASS_NAME( "CFBamMssCFBindInheritsBlob" );
	const std::string CFBamCustMssCFGenBindInheritsBlob::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindInheritsBlob::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindInheritsBlob::S_ICFBamTableObj( "ICFBamTableObj" );
	const std::string CFBamCustMssCFGenBindInheritsBlob::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindInheritsBlob::S_No( "no" );

	CFBamCustMssCFGenBindInheritsBlob::CFBamCustMssCFGenBindInheritsBlob()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindInheritsBlob::CFBamCustMssCFGenBindInheritsBlob(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindInheritsBlob::~CFBamCustMssCFGenBindInheritsBlob()
	{
	}

	std::string CFBamCustMssCFGenBindInheritsBlob::expandBody( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expandBody" );
		cflib::ICFLibAnyObj* genDef;

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}

		genDef = genContext->getGenDef();
		if( genDef == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_GenContextGenDef );
		}

		std::string ret;

		ret = S_No;

		if( genDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			cfbam::ICFBamTableObj* tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( genDef );
			cfbam::ICFBamTableObj* superDef;
			cfbam::ICFBamValueObj* columnDef;
			cfbam::ICFBamTableColObj* tableCol;
			cfbam::ICFBamRelationObj* relation;
			std::vector<cfbam::ICFBamValueObj*> tableColumns;
			std::vector<cfbam::ICFBamRelationObj*> tableRelations;
			while( tableDef != NULL ) {
				tableColumns = tableDef->getOptionalComponentsColumns();
				for( auto iterTableColumns = tableColumns.begin(); iterTableColumns != tableColumns.end(); iterTableColumns ++ ) {
					columnDef = *iterTableColumns;
					if( columnDef->implementsClassCode( cfbam::CFBamBlobColBuff::CLASS_CODE ) ) {
						ret = S_Yes;
						break;
					}
					else if( columnDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
						tableCol = dynamic_cast<cfbam::ICFBamTableColObj*>( columnDef );
						if( tableCol->getRequiredParentDataType()->implementsClassCode( cfbam::CFBamBlobTypeBuff::CLASS_CODE ) ) {
							ret = S_Yes;
							break;
						}
					}
				}
				superDef = NULL;
				tableRelations = tableDef->getOptionalComponentsRelation();
				for( auto iterTableRelations = tableRelations.begin(); ( superDef == NULL ) && ( iterTableRelations != tableRelations.end() ); iterTableRelations ++ ) {
					relation = *iterTableRelations;
					if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
						superDef = relation->getRequiredLookupToTable();
					}
				}
				tableDef = superDef;
			}
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ICFBamTableObj );
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}
}
