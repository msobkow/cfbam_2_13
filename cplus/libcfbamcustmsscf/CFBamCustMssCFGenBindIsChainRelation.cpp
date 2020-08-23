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
#include <cfbamcustmsscf/CFBamCustMssCFGenBindIsChainRelation.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindIsChainRelation::CLASS_NAME( "CFBamMssCFBindIsChainRelation" );
	const std::string CFBamCustMssCFGenBindIsChainRelation::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindIsChainRelation::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindIsChainRelation::S_ICFBamRelationObj( "ICFBamRelationObj" );
	const std::string CFBamCustMssCFGenBindIsChainRelation::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindIsChainRelation::S_No( "no" );

	CFBamCustMssCFGenBindIsChainRelation::CFBamCustMssCFGenBindIsChainRelation()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindIsChainRelation::CFBamCustMssCFGenBindIsChainRelation(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindIsChainRelation::~CFBamCustMssCFGenBindIsChainRelation()
	{
	}

	std::string CFBamCustMssCFGenBindIsChainRelation::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		if( ! genDef->implementsClassCode( cfbam::CFBamRelationBuff::CLASS_CODE ) ) {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ICFBamRelationObj );
		}

		cfbam::ICFBamRelationObj* relnToCheck = dynamic_cast<cfbam::ICFBamRelationObj*>( genDef );

		std::string ret = S_No;

		genContext->clearExpansionIsNull();

		cfbam::ICFBamTableObj* tableToCheck = relnToCheck->getRequiredContainerFromTable();
		cfbam::ICFBamChainObj* chain = NULL;
		std::vector<cfbam::ICFBamChainObj*> optionalChildrenChains = tableToCheck->getOptionalComponentsChains();
		if( ! optionalChildrenChains.empty() ) {
			cfbam::ICFBamChainObj* chain = optionalChildrenChains.front();
			cfbam::ICFBamRelationObj* nextRelation = chain->getRequiredLookupNextRel();
			cfbam::ICFBamRelationObj* prevRelation = chain->getRequiredLookupPrevRel();
			if( ( relnToCheck == nextRelation ) || ( relnToCheck == prevRelation ) ) {
				ret = S_Yes;
			}
		}

		return( ret );
	}
}
