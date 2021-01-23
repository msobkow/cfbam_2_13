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
#include <cfbamcustmsscf/CFBamCustMssCFTableObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasSubObjectLookup.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindHasSubObjectLookup::CLASS_NAME( "CFBamMssCFBindHasSubObjectLookup" );
	const std::string CFBamCustMssCFGenBindHasSubObjectLookup::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindHasSubObjectLookup::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindHasSubObjectLookup::S_ICFBamTableObj( "ICFBamTableObj" );
	const std::string CFBamCustMssCFGenBindHasSubObjectLookup::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindHasSubObjectLookup::S_No( "no" );

	CFBamCustMssCFGenBindHasSubObjectLookup::CFBamCustMssCFGenBindHasSubObjectLookup()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindHasSubObjectLookup::CFBamCustMssCFGenBindHasSubObjectLookup(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindHasSubObjectLookup::~CFBamCustMssCFGenBindHasSubObjectLookup()
	{
	}

	std::string CFBamCustMssCFGenBindHasSubObjectLookup::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		genContext->setExpansionIsNull();

		if( ! genDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ICFBamTableObj );
		}

		cfbam::ICFBamTableObj* tableObj = dynamic_cast<cfbam::ICFBamTableObj*>( genDef );

		cfbam::ICFBamRelationObj* relationDef = NULL;
		std::vector<cfbam::ICFBamRelationObj*> scanRelations;
		std::vector<cfbam::ICFBamRelationObj*> tableRelations;
		cfbam::ICFBamRelationObj* scannedRelation;
		cfbam::ICFBamTableObj* targetTable;
		cfbam::ICFBamTableObj* scanTable;
		cfbam::ICFBamSchema::RelationTypeEnum relationType;
		cfbam::ICFBamRelationObj* superRelation;

		std::string ret = S_No;

		tableRelations = tableObj->getOptionalComponentsRelation();
		for( auto iterTableRelations = tableRelations.begin(); iterTableRelations != tableRelations.end(); iterTableRelations ++ ) {
			relationDef = *iterTableRelations;
			relationType = relationDef->getRequiredRelationType();
			if( relationType == cfbam::ICFBamSchema::RelationTypeEnum::Lookup ) {
				targetTable = relationDef->getRequiredLookupToTable();
				scanTable = relationDef->getRequiredContainerFromTable();
				while( scanTable != NULL ) {
					scanRelations = scanTable->getOptionalComponentsRelation();
					for( auto iterScanRelations = scanRelations.begin(); iterScanRelations != scanRelations.end(); iterScanRelations ++ ) {
						scannedRelation = *iterScanRelations;
						relationType = scannedRelation->getRequiredRelationType();
						if( ( relationType == cfbam::ICFBamSchema::RelationTypeEnum::Components )
						 || ( relationType == cfbam::ICFBamSchema::RelationTypeEnum::Children )
						 || ( relationType == cfbam::ICFBamSchema::RelationTypeEnum::Components ) )
						{
							if( targetTable == scannedRelation->getRequiredLookupToTable() ) {
								ret = S_Yes;
								genContext->clearExpansionIsNull();
								return( ret );
							}
						}
					}

					superRelation = cfbam::CFBamCustMssCFTableObj::getSuperClassRelation( scanTable );
					if( superRelation != NULL ) {
						scanTable = superRelation->getRequiredLookupToTable();
					}
					else {
						scanTable = NULL;
					}
				}
			}
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}
}
