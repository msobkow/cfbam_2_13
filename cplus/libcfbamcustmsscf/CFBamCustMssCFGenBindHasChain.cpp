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
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasChain.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindHasChain::CLASS_NAME( "CFBamMssCFBindHasChain" );
	const std::string CFBamCustMssCFGenBindHasChain::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindHasChain::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindHasChain::S_ICFBamTableObj( "ICFBamTableObj" );
	const std::string CFBamCustMssCFGenBindHasChain::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindHasChain::S_No( "no" );

	CFBamCustMssCFGenBindHasChain::CFBamCustMssCFGenBindHasChain()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindHasChain::CFBamCustMssCFGenBindHasChain(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindHasChain::~CFBamCustMssCFGenBindHasChain()
	{
	}

	std::string CFBamCustMssCFGenBindHasChain::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		cfbam::ICFBamTableObj* curTable = dynamic_cast<cfbam::ICFBamTableObj*>( genDef );
		cfbam::ICFBamChainObj* chain = NULL;
		cfbam::ICFBamRelationObj* superClassRelation;
		std::vector<cfbam::ICFBamChainObj*> childrenChains;
		while( ( chain == NULL ) && ( curTable != NULL ) ) {
			childrenChains = curTable->getOptionalComponentsChains();
			if( ! childrenChains.empty() ) {
				chain = childrenChains.front();
			}
			else {
				superClassRelation = cfbam::CFBamCustMssCFTableObj::getSuperClassRelation( curTable );
				if( superClassRelation != NULL ) {
					curTable = superClassRelation->getRequiredLookupToTable();
				}
				else {
					curTable = NULL;
				}
			}
		}

		std::string ret = S_No;

		if( chain != NULL ) {
			ret = S_Yes;
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}
}
