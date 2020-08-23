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
#include <cfbamcustmsscf/CFBamCustMssCFGenBindColumnInChainPrev.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindColumnInChainPrev::CLASS_NAME( "CFBamMssCFBindColumnInChainPrev" );
	const std::string CFBamCustMssCFGenBindColumnInChainPrev::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindColumnInChainPrev::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindColumnInChainPrev::S_GenContextGenDefScope( "genContext.GenDef.Scope" );
	const std::string CFBamCustMssCFGenBindColumnInChainPrev::S_ICFBamTableObj( "ICFBamTableObj" );
	const std::string CFBamCustMssCFGenBindColumnInChainPrev::S_ICFBamValueObj( "ICFBamValueObj" );
	const std::string CFBamCustMssCFGenBindColumnInChainPrev::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindColumnInChainPrev::S_No( "no" );

	CFBamCustMssCFGenBindColumnInChainPrev::CFBamCustMssCFGenBindColumnInChainPrev()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindColumnInChainPrev::CFBamCustMssCFGenBindColumnInChainPrev(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindColumnInChainPrev::~CFBamCustMssCFGenBindColumnInChainPrev()
	{
	}

	std::string CFBamCustMssCFGenBindColumnInChainPrev::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		cfbam::ICFBamValueObj* value = NULL;
		cfbam::ICFBamTableObj* table = NULL;

		if( genDef->implementsClassCode( cfbam::CFBamValueBuff::CLASS_CODE ) ) {
			value = dynamic_cast<cfbam::ICFBamValueObj*>( genDef );
			cfbam::ICFBamScopeObj* scope = value->getRequiredContainerScope();
			if( ( scope != NULL ) && ( scope->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) ) {
				table = dynamic_cast<cfbam::ICFBamTableObj*>( scope );
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_GenContextGenDefScope,
					genDef,
					S_ICFBamTableObj );
			}
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ICFBamValueObj );
		}

		cfbam::ICFBamChainObj* chain = NULL;

		std::vector<cfbam::ICFBamChainObj*> optionalChildrenChains = table->getOptionalComponentsChains();
		if( ! optionalChildrenChains.empty() ) {
			chain = optionalChildrenChains.front();
		}

		std::string ret( S_No );

		if( chain != NULL ) {
			cfbam::ICFBamRelationObj* prevRelation = chain->getRequiredLookupPrevRel();
			cfbam::ICFBamIndexObj* prevIndex = prevRelation->getRequiredLookupFromIndex();
			std::vector<cfbam::ICFBamIndexColObj*> indexColumns = prevIndex->getOptionalComponentsColumns();
			cfbam::ICFBamIndexColObj* indexCol;
			for( auto iterIndexColumns = indexColumns.begin(); iterIndexColumns != indexColumns.end(); iterIndexColumns ++ ) {
				indexCol = *iterIndexColumns;
				if( indexCol != NULL ) {
					if( value == indexCol->getRequiredLookupColumn() ) {
						ret = S_Yes;
					}
				}
			}
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}
}
