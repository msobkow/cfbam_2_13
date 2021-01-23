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
#include <cfbamcustmsscf/CFBamCustMssCFGenBindColumnInPrimaryIndex.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindColumnInPrimaryIndex::CLASS_NAME( "CFBamMssCFBindColumnInPrimaryIndex" );
	const std::string CFBamCustMssCFGenBindColumnInPrimaryIndex::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindColumnInPrimaryIndex::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindColumnInPrimaryIndex::S_SupportedClasses( "ICFBamAtomDefObj, ICFBamTableColObj" );
	const std::string CFBamCustMssCFGenBindColumnInPrimaryIndex::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindColumnInPrimaryIndex::S_No( "no" );

	CFBamCustMssCFGenBindColumnInPrimaryIndex::CFBamCustMssCFGenBindColumnInPrimaryIndex()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindColumnInPrimaryIndex::CFBamCustMssCFGenBindColumnInPrimaryIndex(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindColumnInPrimaryIndex::~CFBamCustMssCFGenBindColumnInPrimaryIndex()
	{
	}

	std::string CFBamCustMssCFGenBindColumnInPrimaryIndex::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		cfbam::ICFBamTableObj* scopeTable = NULL;

		if( genDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamTableColObj* tableCol = dynamic_cast<cfbam::ICFBamTableColObj*>( genDef );
			scopeTable = tableCol->getRequiredContainerTable();
		}
		else if( genDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
			cfbam::ICFBamAtomObj* atom = dynamic_cast<cfbam::ICFBamAtomObj*>( genDef );
			cfbam::ICFBamScopeObj* container = atom->getRequiredContainerScope();
			if( container->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
				scopeTable = dynamic_cast<cfbam::ICFBamTableObj*>( container );
			}
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_SupportedClasses );
		}

		std::string ret;

		ret = S_No;

		if( scopeTable != NULL ) {
			cfbam::ICFBamIndexObj* primaryIndex = cfbam::CFBamCustMssCFTableObj::getPrimaryKeyIndex( scopeTable );
			if( primaryIndex != NULL ) {
				std::vector<cfbam::ICFBamIndexColObj*> indexColumns = primaryIndex->getOptionalComponentsColumns();
				cfbam::ICFBamIndexColObj* indexCol;
				for( auto iterIndexColumns = indexColumns.begin(); iterIndexColumns != indexColumns.end(); iterIndexColumns ++ ) {
					indexCol = *iterIndexColumns;
					if( indexCol != NULL ) {
						if( genDef == indexCol->getRequiredLookupColumn() ) {
							ret = S_Yes;
							break;
						}
					}
				}
			}
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}
}
