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
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasDelSubDep.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindHasDelSubDep::CLASS_NAME( "CFBamMssCFBindHasDelSubDep" );
	const std::string CFBamCustMssCFGenBindHasDelSubDep::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindHasDelSubDep::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindHasDelSubDep::S_ClassList( "ICFBamDelTopDepObj, ICFBamDelSubDep1Obj, ICFBamDelSubDep2Obj, ICFBamDelSubDep3Obj" );
	const std::string CFBamCustMssCFGenBindHasDelSubDep::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindHasDelSubDep::S_No( "no" );

	CFBamCustMssCFGenBindHasDelSubDep::CFBamCustMssCFGenBindHasDelSubDep()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindHasDelSubDep::CFBamCustMssCFGenBindHasDelSubDep(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindHasDelSubDep::~CFBamCustMssCFGenBindHasDelSubDep()
	{
	}

	std::string CFBamCustMssCFGenBindHasDelSubDep::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		std::string ret = S_No;

		if( genDef->implementsClassCode( cfbam::CFBamDelTopDepBuff::CLASS_CODE ) ) {
			cfbam::ICFBamDelTopDepObj* topDep = dynamic_cast<cfbam::ICFBamDelTopDepObj*>( genDef );
			std::vector<cfbam::ICFBamDelSubDep1Obj*> compo = topDep->getOptionalComponentsDelDep();
			if( ! compo.empty() ) {
				ret = S_Yes;
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) ) {
			cfbam::ICFBamDelSubDep1Obj* subDep = dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( genDef );
			std::vector<cfbam::ICFBamDelSubDep2Obj*> compo = subDep->getOptionalComponentsDelDep();
			if( ! compo.empty() ) {
				ret = S_Yes;
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamDelSubDep2Buff::CLASS_CODE ) ) {
			cfbam::ICFBamDelSubDep2Obj* subDep = dynamic_cast<cfbam::ICFBamDelSubDep2Obj*>( genDef );
			std::vector<cfbam::ICFBamDelSubDep3Obj*> compo = subDep->getOptionalComponentsDelDep();
			if( ! compo.empty() ) {
				ret = S_Yes;
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamDelSubDep3Buff::CLASS_CODE ) ) {
			ret = S_No;
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ClassList );
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}
}
