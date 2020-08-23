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
#include <cfbamcustmsscf/CFBamCustMssCFGenContext.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceManufacturingSchema.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenReferenceManufacturingSchema::CLASS_NAME( "CFBamCustMssCFGenReferenceManufacturingSchema" );
	const std::string CFBamCustMssCFGenReferenceManufacturingSchema::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenReferenceManufacturingSchema::S_GenContextManufacturingSchema( "genContext.ManufacturingSchema" );

	CFBamCustMssCFGenReferenceManufacturingSchema::CFBamCustMssCFGenReferenceManufacturingSchema()
	: cfcore::MssCFGenReferenceObj()
	{
	}

	CFBamCustMssCFGenReferenceManufacturingSchema::CFBamCustMssCFGenReferenceManufacturingSchema(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenReferenceObj( dynamic_cast<cfcore::MssCFEngine*>( argSchema ), toolset, scopeDefClassName, genDefClassName, itemName, "Id16Gen" )
	{
	}

	CFBamCustMssCFGenReferenceManufacturingSchema::~CFBamCustMssCFGenReferenceManufacturingSchema() {
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFGenReferenceManufacturingSchema::dereference( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "dereference" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}

		cfbam::ICFBamSchemaDefObj* manufacturingSchema = dynamic_cast<cfbam::CFBamCustMssCFGenContext*>( genContext )->getManufacturingSchema();
		if( manufacturingSchema == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_GenContextManufacturingSchema );
		}

		return ( manufacturingSchema );
	}
}
