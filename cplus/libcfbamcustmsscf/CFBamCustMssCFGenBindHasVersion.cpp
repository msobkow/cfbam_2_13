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
#include <cfbamcustmsscf/CFBamCustMssCFAnyObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasVersion.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindHasVersion::CLASS_NAME( "CFBamMssCFBindHasVersion" );
	const std::string CFBamCustMssCFGenBindHasVersion::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindHasVersion::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindHasVersion::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindHasVersion::S_No( "no" );

	CFBamCustMssCFGenBindHasVersion::CFBamCustMssCFGenBindHasVersion()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindHasVersion::CFBamCustMssCFGenBindHasVersion(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindHasVersion::~CFBamCustMssCFGenBindHasVersion()
	{
	}

	std::string CFBamCustMssCFGenBindHasVersion::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		std::string ret = cfbam::CFBamCustMssCFAnyObj::getVersionString( genDef );
		if( ret.length() == 0 ) {
			ret = S_No;
		}
		else {
			ret = S_Yes;
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}
}
