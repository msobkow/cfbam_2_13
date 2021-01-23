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
#include <cfbamcustmsscf/CFBamCustMssCFValueObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindColumnInComponentsRelation.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindColumnInComponentsRelation::CLASS_NAME( "CFBamMssCFBindColumnInComponentsRelation" );
	const std::string CFBamCustMssCFGenBindColumnInComponentsRelation::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindColumnInComponentsRelation::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindColumnInComponentsRelation::S_SupportedClasses( "ICFBamValueObj, ICFBamIndexColObj" );
	const std::string CFBamCustMssCFGenBindColumnInComponentsRelation::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindColumnInComponentsRelation::S_No( "no" );

	CFBamCustMssCFGenBindColumnInComponentsRelation::CFBamCustMssCFGenBindColumnInComponentsRelation()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindColumnInComponentsRelation::CFBamCustMssCFGenBindColumnInComponentsRelation(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindColumnInComponentsRelation::~CFBamCustMssCFGenBindColumnInComponentsRelation()
	{
	}

	std::string CFBamCustMssCFGenBindColumnInComponentsRelation::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		std::string ret;

		if( genDef->implementsClassCode( cfbam::CFBamValueBuff::CLASS_CODE ) ) {
			cfbam::ICFBamValueObj* valueDef = dynamic_cast<cfbam::ICFBamValueObj*>( genDef );
			std::vector<cfbam::ICFBamRelationObj*> componentsRelations = cfbam::CFBamCustMssCFValueObj::getColumnInComponentsRelations( valueDef );
			if( ! componentsRelations.empty() ) {
				ret = S_Yes;
			}
			else {
				ret = S_No;
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamIndexColObj* indexCol = dynamic_cast<cfbam::ICFBamIndexColObj*>( genDef );
			cfbam::ICFBamValueObj* valueDef = indexCol->getRequiredLookupColumn();
			std::vector<cfbam::ICFBamRelationObj*> componentsRelations = cfbam::CFBamCustMssCFValueObj::getColumnInComponentsRelations( valueDef );
			if( ! componentsRelations.empty() ) {
				ret = S_Yes;
			}
			else {
				ret = S_No;
			}
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_SupportedClasses );
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}
}
