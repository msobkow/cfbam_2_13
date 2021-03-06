#pragma once

// Description: C++18 specification of a CFBam schema pool.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow
 *	
 *		This file is part of MSS Code Factory.
 *	
 *		MSS Code Factory is available under dual commercial license from Mark Stephen
 *		Sobkow, or under the terms of the GNU General Public License, Version 3
 *		or later.
 *	
 *	    MSS Code Factory is free software: you can redistribute it and/or modify
 *	    it under the terms of the GNU General Public License as published by
 *	    the Free Software Foundation, either version 3 of the License, or
 *	    (at your option) any later version.
 *	
 *	    MSS Code Factory is distributed in the hope that it will be useful,
 *	    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	    GNU General Public License for more details.
 *	
 *	    You should have received a copy of the GNU General Public License
 *	    along with MSS Code Factory.  If not, see <https://www.gnu.org/licenses/>.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */
#include <cflib/ICFLibPublic.hpp>
#include <cfsec/CFSecSchemaPool.hpp>
#include <cfsec/CFSecConfigurationFile.hpp>
#include <cfbam/ICFBamSchema.hpp>
#include <cfbam/CFBamSchema.hpp>
#include <cfsec/ICFSecSchema.hpp>
#include <cfsec/CFSecSchema.hpp>
#include <cfint/ICFIntSchema.hpp>
#include <cfint/CFIntSchema.hpp>

namespace cfbam {

	class CFBamSchemaPool : public cfsec::CFSecSchemaPool
	{
	public:
		static const std::string CLASS_NAME;
	public:
		CFBamSchemaPool();
		virtual ~CFBamSchemaPool();

		virtual void setConfigurationFile( cfsec::CFSecConfigurationFile* value );

		static void setSchemaPool( cfsec::CFSecSchemaPool* pool );

	};

}
