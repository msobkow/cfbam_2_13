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
#include <cfbamcustmsscf/CFBamCustMssCFGenReferencePopSubDep.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenReferencePopSubDep::CLASS_NAME( "CFBamCustMssCFGenReferencePopSubDep" );
	const std::string CFBamCustMssCFGenReferencePopSubDep::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenReferencePopSubDep::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenReferencePopSubDep::S_PopDepObjs( "ICFBamPopTopDepObj, ICFBamPopSubDep1Obj, ICFBamPopSubDep2Obj, ICFBamPopSubDep3Obj" );

	CFBamCustMssCFGenReferencePopSubDep::CFBamCustMssCFGenReferencePopSubDep()
	: cfcore::MssCFGenReferenceObj()
	{
	}

	CFBamCustMssCFGenReferencePopSubDep::CFBamCustMssCFGenReferencePopSubDep(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenReferenceObj( dynamic_cast<cfcore::MssCFEngine*>( argSchema ), toolset, scopeDefClassName, genDefClassName, itemName, "Id16Gen" )
	{
	}

	CFBamCustMssCFGenReferencePopSubDep::~CFBamCustMssCFGenReferencePopSubDep() {
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFGenReferencePopSubDep::dereference( cfcore::MssCFGenContext* genContext ) {
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

		cflib::ICFLibAnyObj* ret = NULL;

		if( genDef->implementsClassCode( cfbam::CFBamPopTopDepBuff::CLASS_CODE ) ) {
			cfbam::ICFBamPopTopDepObj* topDep = dynamic_cast<cfbam::ICFBamPopTopDepObj*>( genDef );
			std::vector<cfbam::ICFBamPopSubDep1Obj*> popDeps = topDep->getOptionalComponentsPopDep();
			if( ! popDeps.empty() ) {
				ret = popDeps.back();
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) ) {
			cfbam::ICFBamPopSubDep1Obj* subDep = dynamic_cast<cfbam::ICFBamPopSubDep1Obj*>( genDef );
			std::vector<cfbam::ICFBamPopSubDep2Obj*> popDeps = subDep->getOptionalComponentsPopDep();
			if( ! popDeps.empty() ) {
				ret = popDeps.back();
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamPopSubDep2Buff::CLASS_CODE ) ) {
			cfbam::ICFBamPopSubDep2Obj* subDep = dynamic_cast<cfbam::ICFBamPopSubDep2Obj*>( genDef );
			std::vector<cfbam::ICFBamPopSubDep3Obj*> popDeps = subDep->getOptionalComponentsPopDep();
			if( ! popDeps.empty() ) {
				ret = popDeps.back();
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) ) {
			ret = NULL;
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_PopDepObjs );
		}

		return( ret );
	}
}
