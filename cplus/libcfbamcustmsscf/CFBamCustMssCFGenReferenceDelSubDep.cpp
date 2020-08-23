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
#include <cfbamcustmsscf/CFBamCustMssCFEngine.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFTableObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceDelSubDep.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenReferenceDelSubDep::CLASS_NAME( "CFBamCustMssCFGenReferenceDelSubDep" );
	const std::string CFBamCustMssCFGenReferenceDelSubDep::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenReferenceDelSubDep::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenReferenceDelSubDep::S_ICFBamTableObj( "ICFBamTableObj" );
	const std::string CFBamCustMssCFGenReferenceDelSubDep::S_DelDepObjs( "ICFBamDelTopDepObj, ICFBamDelSubDep1Obj, ICFBamDelSubDep2Obj, ICFBamDelSubDep3Obj" );

	CFBamCustMssCFGenReferenceDelSubDep::CFBamCustMssCFGenReferenceDelSubDep()
	: cfcore::MssCFGenReferenceObj()
	{
	}

	CFBamCustMssCFGenReferenceDelSubDep::CFBamCustMssCFGenReferenceDelSubDep(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenReferenceObj( dynamic_cast<cfcore::MssCFEngine*>( argSchema ), toolset, scopeDefClassName, genDefClassName, itemName, "Id16Gen" )
	{
	}

	CFBamCustMssCFGenReferenceDelSubDep::~CFBamCustMssCFGenReferenceDelSubDep() {
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFGenReferenceDelSubDep::dereference( cfcore::MssCFGenContext* genContext ) {
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

		if( genDef->implementsClassCode( cfbam::CFBamDelTopDepBuff::CLASS_CODE ) ) {
			cfbam::ICFBamDelTopDepObj* topDep = dynamic_cast<cfbam::ICFBamDelTopDepObj*>( genDef );
			std::vector<cfbam::ICFBamDelSubDep1Obj*> clearDeps = topDep->getOptionalComponentsDelDep();
			for( auto iterDelDeps = clearDeps.begin(); iterDelDeps != clearDeps.end(); iterDelDeps ++ ) {
				ret = *iterDelDeps;
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) ) {
			cfbam::ICFBamDelSubDep1Obj* subDep = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( genDef );
			std::vector<cfbam::ICFBamDelSubDep2Obj*> clearDeps = subDep->getOptionalComponentsDelDep();
			for( auto iterDelDeps = clearDeps.begin(); iterDelDeps != clearDeps.end(); iterDelDeps ++ ) {
				ret = *iterDelDeps;
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamDelSubDep2Buff::CLASS_CODE ) ) {
			cfbam::ICFBamDelSubDep2Obj* subDep = dynamic_cast<cfbam::ICFBamDelSubDep2Obj*>( genDef );
			std::vector<cfbam::ICFBamDelSubDep3Obj*> clearDeps = subDep->getOptionalComponentsDelDep();
			for( auto iterDelDeps = clearDeps.begin(); iterDelDeps != clearDeps.end(); iterDelDeps ++ ) {
				ret = *iterDelDeps;
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamDelSubDep3Buff::CLASS_CODE ) ) {
			ret = NULL;
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_DelDepObjs );
		}

		return( ret );
	}
}
