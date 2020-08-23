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
 *	Contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFTableObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindPrimaryKeyIsConstEnum.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindPrimaryKeyIsConstEnum::CLASS_NAME( "CFBamMssCFBindPrimaryKeyIsConstEnum" );
	const std::string CFBamCustMssCFGenBindPrimaryKeyIsConstEnum::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindPrimaryKeyIsConstEnum::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindPrimaryKeyIsConstEnum::S_ICFBamTableObj( "ICFBamTableObj" );
	const std::string CFBamCustMssCFGenBindPrimaryKeyIsConstEnum::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindPrimaryKeyIsConstEnum::S_No( "no" );

	CFBamCustMssCFGenBindPrimaryKeyIsConstEnum::CFBamCustMssCFGenBindPrimaryKeyIsConstEnum()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindPrimaryKeyIsConstEnum::CFBamCustMssCFGenBindPrimaryKeyIsConstEnum(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindPrimaryKeyIsConstEnum::~CFBamCustMssCFGenBindPrimaryKeyIsConstEnum()
	{
	}

	std::string CFBamCustMssCFGenBindPrimaryKeyIsConstEnum::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		if( ! genDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ICFBamTableObj );
		}

		cfbam::ICFBamTableObj* tableObj = dynamic_cast<cfbam::ICFBamTableObj*>( genDef );

		std::string ret = S_No;

		genContext->clearExpansionIsNull();

		cfbam::ICFBamIndexObj* primaryIndex = cfbam::CFBamCustMssCFTableObj::getPrimaryKeyIndex( tableObj );
		if( primaryIndex != NULL ) {
			std::vector<cfbam::ICFBamIndexColObj*> indexColumnMap = primaryIndex->getOptionalComponentsColumns();
			if( ! indexColumnMap.empty() ) {
				auto iterIndexColumn = indexColumnMap.begin();
				cfbam::ICFBamIndexColObj* indexCol = *iterIndexColumn;
				iterIndexColumn ++;
				if( iterIndexColumn == indexColumnMap.end() ) {
					cfbam::ICFBamValueObj* indexedColumn = indexCol->getRequiredLookupColumn();
					if( indexedColumn->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
						cfbam::ICFBamTableColObj* tableCol = dynamic_cast<cfbam::ICFBamTableColObj*>( indexedColumn );
						if( ! tableCol->getGenerateId() ) {
							cfbam::ICFBamValueObj* dataDef = tableCol->getRequiredParentDataType();
							if( dataDef->implementsClassCode( cfbam::CFBamEnumDefBuff::CLASS_CODE ) ) {
								ret = S_Yes;
							}
						}
					}
				}
			}
		}

		return( ret );
	}
}
