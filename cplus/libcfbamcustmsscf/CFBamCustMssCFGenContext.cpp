// Description: C++18 MSS Code Factory library implementation for CFBam Custom MssCF.

/*
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
 */

#include <cfbamcustmsscf/CFBamCustMssCFGenContext.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenContext::CLASS_NAME( "CFBamCustMssCFGenContext" );

	ICFBamSchemaDefObj* CFBamCustMssCFGenContext::manufacturingSchema = NULL;

	/**
	 *	Construct an expansion context for the stack that pushes a sub class and definition.
	 */
	CFBamCustMssCFGenContext::CFBamCustMssCFGenContext(
		const std::string& generatingBuild,
		cfcore::MssCFGenContext* genContext,
		const std::string& subClassGenDefName,
		cflib::ICFLibAnyObj* subObject )
	: cfcore::MssCFGenContext( generatingBuild,
		genContext,
		genContext->getGenEngine()->fixGenDefName( subClassGenDefName ),
		subObject )
	{
		if( ( subObject != NULL ) && subObject->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
			if( manufacturingSchema == NULL ) {
				manufacturingSchema = dynamic_cast<ICFBamSchemaDefObj*>( subObject );
			}
		}
	}

	/**
	 *	Construct an instance.  Only invoked to create binding entries.
	 */
	CFBamCustMssCFGenContext::CFBamCustMssCFGenContext(
		const std::string& generatingBuild,
		cfcore::MssCFEngine* engine,
		const std::string& argRootGenDir,
		const std::string& toolset,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenContext( generatingBuild,
		engine,
		argRootGenDir,
		toolset,
		engine->fixGenDefName( scopeDefClassName ),
		engine->fixGenDefName( genDefClassName ),
		itemName )
	{
	}

	/**
	 *	Construct an expansion context for the stack.
	 */
	CFBamCustMssCFGenContext::CFBamCustMssCFGenContext(
		const std::string& generatingBuild,
		cfcore::MssCFEngine* engine,
		const std::string& argRootGenDir,
		const std::string& toolset,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName,
		cflib::ICFLibAnyObj* argGenDef,
		cflib::ICFLibAnyObj* argScopeDef )
	: cfcore::MssCFGenContext( generatingBuild,
		engine,
		argRootGenDir,
		toolset,
		engine->fixGenDefName( scopeDefClassName ),
		engine->fixGenDefName( genDefClassName ),
		itemName,
		argGenDef,
		argScopeDef )
	{
		if( argGenDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
			if( manufacturingSchema == NULL ) {
				manufacturingSchema = dynamic_cast<ICFBamSchemaDefObj*>( argGenDef );
			}
		}
		else if( ( argScopeDef != NULL ) && ( argScopeDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) ) {
			if( manufacturingSchema == NULL ) {
				manufacturingSchema = dynamic_cast<ICFBamSchemaDefObj*>( argScopeDef );
			}
		}
	}

	CFBamCustMssCFGenContext::~CFBamCustMssCFGenContext() {
	}

	/**
	 *	Build a reference context
	 */
	cfcore::MssCFGenContext* CFBamCustMssCFGenContext::buildRefContext( cflib::ICFLibAnyObj* genDef ) {
		if( genDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
			if( manufacturingSchema == NULL ) {
				manufacturingSchema = dynamic_cast<ICFBamSchemaDefObj*>( genDef );
			}
		}
		return( cfcore::MssCFGenContext::buildRefContext( genDef ) );
	}

	void CFBamCustMssCFGenContext::setManufacturingSchema( ICFBamSchemaDefObj* value ) {
		manufacturingSchema = value;
	}
	
	cfbam::ICFBamSchemaDefObj* CFBamCustMssCFGenContext::getManufacturingSchema() {
		return( manufacturingSchema );
	}
}
