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
#include <cfbamcustmsscf/CFBamCustMssCFTableObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasContainer.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindHasContainer::CLASS_NAME( "CFBamMssCFBindHasContainer" );
	const std::string CFBamCustMssCFGenBindHasContainer::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindHasContainer::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindHasContainer::S_CouldNotResolveTable( "Could not resolve Table for " );
	const std::string CFBamCustMssCFGenBindHasContainer::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindHasContainer::S_No( "no" );

	CFBamCustMssCFGenBindHasContainer::CFBamCustMssCFGenBindHasContainer()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindHasContainer::CFBamCustMssCFGenBindHasContainer(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindHasContainer::~CFBamCustMssCFGenBindHasContainer()
	{
	}

	std::string CFBamCustMssCFGenBindHasContainer::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		std::string ret;
		cfbam::ICFBamTableObj* tableDef = NULL;

		while( ( tableDef == NULL ) && ( genDef != NULL ) ) {
			if( genDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
				tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( genDef );
			}
			else if ( genDef->implementsClassCode( cfint::CFIntTldBuff::CLASS_CODE ) ) {
				genDef = NULL;
			}
			else {
				genDef = genDef->getObjScope();
			}
		}

		if( tableDef == NULL ) {
			throw cflib::CFLibRuntimeException( S_CouldNotResolveTable + genContext->getGenDef()->getObjFullName() );
		}

		cfbam::ICFBamRelationObj* containerRelation = cfbam::CFBamCustMssCFTableObj::getInheritedContainerRelation( tableDef );
		if( containerRelation != NULL ) {
			ret = S_Yes;
		}
		else {
			ret = S_No;
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}
}
