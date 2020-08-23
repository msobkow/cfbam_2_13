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
#include <cfbamcustmsscf/CFBamCustMssCFAnyObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindPackageName.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindPackageName::CLASS_NAME( "CFBamMssCFBindPackageName" );
	const std::string CFBamCustMssCFGenBindPackageName::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindPackageName::S_GenContextGenDef( "genContext.GenDef" );

	CFBamCustMssCFGenBindPackageName::CFBamCustMssCFGenBindPackageName()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindPackageName::CFBamCustMssCFGenBindPackageName(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindPackageName::~CFBamCustMssCFGenBindPackageName()
	{
	}

	std::string CFBamCustMssCFGenBindPackageName::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		cflib::ICFLibAnyObj* pkg = cfbam::CFBamCustMssCFAnyObj::getPackage( genDef );

		std::string ret;

		if( pkg != NULL ) {
			ret = pkg->getObjName();
			std::replace( ret.begin(), ret.end(), '.', '-' );
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}

		return( ret );
	}
}
