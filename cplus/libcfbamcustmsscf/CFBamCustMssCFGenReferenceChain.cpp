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
#include <cfbamcustmsscf/CFBamCustMssCFEngine.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFTableObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceChain.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenReferenceChain::CLASS_NAME( "CFBamCustMssCFGenReferenceChain" );
	const std::string CFBamCustMssCFGenReferenceChain::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenReferenceChain::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenReferenceChain::S_ICFBamTableObj( "ICFBamTableObj" );

	CFBamCustMssCFGenReferenceChain::CFBamCustMssCFGenReferenceChain()
	: cfcore::MssCFGenReferenceObj()
	{
	}

	CFBamCustMssCFGenReferenceChain::CFBamCustMssCFGenReferenceChain(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenReferenceObj( dynamic_cast<cfcore::MssCFEngine*>( argSchema ), toolset, scopeDefClassName, genDefClassName, itemName, "Id16Gen" )
	{
	}

	CFBamCustMssCFGenReferenceChain::~CFBamCustMssCFGenReferenceChain() {
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFGenReferenceChain::dereference( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "dereference" );

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

		cfbam::ICFBamTableObj* curTable = dynamic_cast<cfbam::ICFBamTableObj*>( genDef );

		cfbam::ICFBamChainObj* ret = NULL;
		std::vector<cfbam::ICFBamChainObj*> optionalChildrenChains;
		cfbam::ICFBamRelationObj* superClassRelation;
		while( ( ret == NULL ) && ( curTable != NULL ) ) {
			optionalChildrenChains = curTable->getOptionalComponentsChains();
			if( ! optionalChildrenChains.empty() ) {
				ret = *(optionalChildrenChains.begin());
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

		return( ret );
	}
}
