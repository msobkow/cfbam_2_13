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
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateDispensedId32Generators.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenIterateDispensedId32Generators::CLASS_NAME( "CFBamCustMssCFGenIterateDispensedId32Generators" );
	const std::string CFBamCustMssCFGenIterateDispensedId32Generators::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenIterateDispensedId32Generators::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenIterateDispensedId32Generators::S_ICFBamTableObj( "ICFBamTableObj" );

	CFBamCustMssCFGenIterateDispensedId32Generators::CFBamCustMssCFGenIterateDispensedId32Generators()
	: cfcore::MssCFGenIteratorObj()
	{
	}

	CFBamCustMssCFGenIterateDispensedId32Generators::CFBamCustMssCFGenIterateDispensedId32Generators(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenIteratorObj( dynamic_cast<cfcore::MssCFEngine*>( argSchema ), toolset, scopeDefClassName, genDefClassName, itemName, "Id32Gen" )
	{
	}

	CFBamCustMssCFGenIterateDispensedId32Generators::~CFBamCustMssCFGenIterateDispensedId32Generators() {
	}

	std::vector<cflib::ICFLibAnyObj*>* CFBamCustMssCFGenIterateDispensedId32Generators::enumerateDetails( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "enumerateDetails" );

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

		int64_t tenantId = tableObj->getRequiredTenantId();
		int64_t id = tableObj->getRequiredId();

		std::vector<cfbam::ICFBamId32GenObj*> id32Generators = tableObj->getSchema()->getId32GenTableObj()->readId32GenByDispIdx( &tenantId,
			&id );

		std::vector<cflib::ICFLibAnyObj*>* list = new std::vector<cflib::ICFLibAnyObj*>();

		for( auto iterGenerators = id32Generators.begin(); iterGenerators != id32Generators.end(); iterGenerators ++ ) {
			list->push_back( *iterGenerators );
		}

		return( list );
	}
}
