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
#include <cfbamcustmsscf/CFBamCustMssCFGenBindIsBaseTable.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindIsBaseTable::CLASS_NAME( "CFBamMssCFBindIsBaseTable" );
	const std::string CFBamCustMssCFGenBindIsBaseTable::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindIsBaseTable::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindIsBaseTable::S_ICFBamTableObj( "ICFBamTableObj" );
	const std::string CFBamCustMssCFGenBindIsBaseTable::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindIsBaseTable::S_No( "no" );

	CFBamCustMssCFGenBindIsBaseTable::CFBamCustMssCFGenBindIsBaseTable()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindIsBaseTable::CFBamCustMssCFGenBindIsBaseTable(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindIsBaseTable::~CFBamCustMssCFGenBindIsBaseTable()
	{
	}

	std::string CFBamCustMssCFGenBindIsBaseTable::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		if( ! genDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ICFBamTableObj );
		}

		cfbam::ICFBamTableObj* tableObj = dynamic_cast<cfbam::ICFBamTableObj*>( genDef );

		std::string ret;
		genContext->clearExpansionIsNull();

		cfbam::ICFBamRelationObj* superClassRelation = cfbam::CFBamCustMssCFTableObj::getSuperClassRelation( tableObj );
		if( superClassRelation != NULL ) {
			ret = S_No;
			return( ret );
		}
		
		std::vector<cfbam::ICFBamRelationObj*> subClassRelations = cfbam::CFBamCustMssCFTableObj::getSubClassRelations( tableObj );
		if( subClassRelations.empty() ) {
			ret = S_No;
			return( ret );
		}

		ret = S_Yes;

		return( ret );
	}
}
