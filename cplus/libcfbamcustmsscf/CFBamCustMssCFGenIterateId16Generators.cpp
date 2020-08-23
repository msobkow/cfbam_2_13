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
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateId16Generators.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenIterateId16Generators::CLASS_NAME( "CFBamCustMssCFGenIterateId16Generators" );
	const std::string CFBamCustMssCFGenIterateId16Generators::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenIterateId16Generators::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenIterateId16Generators::S_ICFBamSchemaDefObj( "ICFBamSchemaDefObj" );

	CFBamCustMssCFGenIterateId16Generators::CFBamCustMssCFGenIterateId16Generators()
	: cfcore::MssCFGenIteratorObj()
	{
	}

	CFBamCustMssCFGenIterateId16Generators::CFBamCustMssCFGenIterateId16Generators(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenIteratorObj( dynamic_cast<cfcore::MssCFEngine*>( argSchema ), toolset, scopeDefClassName, genDefClassName, itemName, "TableDef" )
	{
	}

	CFBamCustMssCFGenIterateId16Generators::~CFBamCustMssCFGenIterateId16Generators() {
	}

	std::vector<cflib::ICFLibAnyObj*>* CFBamCustMssCFGenIterateId16Generators::enumerateDetails( cfcore::MssCFGenContext* genContext ) {
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

		if( ! genDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ICFBamSchemaDefObj );
		}

		cfbam::ICFBamSchemaDefObj* schemaDefObj = dynamic_cast<cfbam::ICFBamSchemaDefObj*>( genDef );

		std::vector<cfbam::ICFBamValueObj*> schemaTypes = schemaDefObj->getOptionalComponentsTypes();

		cfbam::ICFBamValueObj* valueObj;
		cfbam::ICFBamId16GenObj* genObj;
		std::vector<cflib::ICFLibAnyObj*>* list = new std::vector<cflib::ICFLibAnyObj*>();

		for( auto iterSchemaTypes = schemaTypes.begin(); iterSchemaTypes != schemaTypes.end(); iterSchemaTypes ++ ) {
			valueObj = *iterSchemaTypes;
			if( valueObj->implementsClassCode( cfbam::CFBamId16GenBuff::CLASS_CODE ) ) {
				genObj = dynamic_cast<cfbam::ICFBamId16GenObj*>( valueObj );
				if( NULL == genObj->getOptionalLookupDispenser() ) {
					list->push_back( genObj );
				}
			}
		}

		return( list );
	}
}
