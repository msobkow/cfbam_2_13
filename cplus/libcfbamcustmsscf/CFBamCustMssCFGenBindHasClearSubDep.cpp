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
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasClearSubDep.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindHasClearSubDep::CLASS_NAME( "CFBamMssCFBindHasClearSubDep" );
	const std::string CFBamCustMssCFGenBindHasClearSubDep::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindHasClearSubDep::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindHasClearSubDep::S_ClassList( "ICFBamClearTopDepObj, ICFBamClearSubDep1Obj, ICFBamClearSubDep2Obj, ICFBamClearSubDep3Obj" );
	const std::string CFBamCustMssCFGenBindHasClearSubDep::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindHasClearSubDep::S_No( "no" );

	CFBamCustMssCFGenBindHasClearSubDep::CFBamCustMssCFGenBindHasClearSubDep()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindHasClearSubDep::CFBamCustMssCFGenBindHasClearSubDep(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindHasClearSubDep::~CFBamCustMssCFGenBindHasClearSubDep()
	{
	}

	std::string CFBamCustMssCFGenBindHasClearSubDep::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		if( genDef->implementsClassCode( cfbam::CFBamClearTopDepBuff::CLASS_CODE ) ) {
			cfbam::ICFBamClearTopDepObj* topDep = dynamic_cast<cfbam::ICFBamClearTopDepObj*>( genDef );
			std::vector<cfbam::ICFBamClearSubDep1Obj*> compo = topDep->getOptionalComponentsClearDep();
			if( ! compo.empty() ) {
				ret = S_Yes;
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) ) {
			cfbam::ICFBamClearSubDep1Obj* subDep = dynamic_cast<cfbam::ICFBamClearSubDep1Obj*>( genDef );
			std::vector<cfbam::ICFBamClearSubDep2Obj*> compo = subDep->getOptionalComponentsClearDep();
			if( ! compo.empty() ) {
				ret = S_Yes;
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) ) {
			cfbam::ICFBamClearSubDep2Obj* subDep = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( genDef );
			std::vector<cfbam::ICFBamClearSubDep3Obj*> compo = subDep->getOptionalComponentsClearDep();
			if( ! compo.empty() ) {
				ret = S_Yes;
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) ) {
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
