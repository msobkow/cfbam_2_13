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
#include <cfbamcustmsscf/CFBamCustMssCFGenBindInheritsText.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindInheritsText::CLASS_NAME( "CFBamMssCFBindInheritsText" );
	const std::string CFBamCustMssCFGenBindInheritsText::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindInheritsText::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindInheritsText::S_ICFBamTableObj( "ICFBamTableObj" );
	const std::string CFBamCustMssCFGenBindInheritsText::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindInheritsText::S_No( "no" );

	CFBamCustMssCFGenBindInheritsText::CFBamCustMssCFGenBindInheritsText()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindInheritsText::CFBamCustMssCFGenBindInheritsText(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindInheritsText::~CFBamCustMssCFGenBindInheritsText()
	{
	}

	std::string CFBamCustMssCFGenBindInheritsText::expandBody( cfcore::MssCFGenContext* genContext ) {
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
					if( columnDef->implementsClassCode( cfbam::CFBamTextColBuff::CLASS_CODE ) ) {
						ret = S_Yes;
						break;
					}
					else if( columnDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
						tableCol = dynamic_cast<cfbam::ICFBamTableColObj*>( columnDef );
						if( tableCol->getRequiredParentDataType()->implementsClassCode( cfbam::CFBamTextTypeBuff::CLASS_CODE ) ) {
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
