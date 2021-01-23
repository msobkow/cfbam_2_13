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
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasPopDep.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindHasPopDep::CLASS_NAME( "CFBamMssCFBindHasPopDep" );
	const std::string CFBamCustMssCFGenBindHasPopDep::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindHasPopDep::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindHasPopDep::S_ICFBamRelationObj( "ICFBamRelationObj" );
	const std::string CFBamCustMssCFGenBindHasPopDep::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindHasPopDep::S_No( "no" );

	CFBamCustMssCFGenBindHasPopDep::CFBamCustMssCFGenBindHasPopDep()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindHasPopDep::CFBamCustMssCFGenBindHasPopDep(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindHasPopDep::~CFBamCustMssCFGenBindHasPopDep()
	{
	}

	std::string CFBamCustMssCFGenBindHasPopDep::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		if( ! genDef->implementsClassCode( cfbam::CFBamRelationBuff::CLASS_CODE ) ) {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ICFBamRelationObj );
		}

		cfbam::ICFBamRelationObj* curRelation = dynamic_cast<cfbam::ICFBamRelationObj*>( genDef );

		std::string ret = S_No;

		std::vector<cfbam::ICFBamPopTopDepObj*> popDeps = curRelation->getOptionalComponentsPopDep();
		if( ! popDeps.empty() ) {
			ret = S_Yes;
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}
}
