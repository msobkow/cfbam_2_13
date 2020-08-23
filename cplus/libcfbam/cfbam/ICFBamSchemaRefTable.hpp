#pragma once

// Description: C++18 DbIO interface for SchemaRef.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */


#include <cflib/ICFLibPublic.hpp>
#include <cfsec/CFSecAuthorization.hpp>
#include <cfbam/CFBamHPKey.hpp>
#include <cfbam/CFBamSchemaRefBuff.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamSchemaRefHBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamSchemaRefBySchemaIdxKey.hpp>
#include <cfbam/CFBamSchemaRefByUNameIdxKey.hpp>
#include <cfbam/CFBamSchemaRefByRefSchemaIdxKey.hpp>
#include <cfbam/CFBamSchemaRefByPrevIdxKey.hpp>
#include <cfbam/CFBamSchemaRefByNextIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamSchemaRefObj;

	class ICFBamSchemaRefTable
	{
	public:
		ICFBamSchemaRefTable();
		virtual ~ICFBamSchemaRefTable();

		virtual cfbam::CFBamSchemaRefBuff* createSchemaRef( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamSchemaRefBuff* Buff ) = 0;

		virtual cfbam::CFBamSchemaRefBuff* updateSchemaRef( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamSchemaRefBuff* Buff ) = 0;

		virtual void deleteSchemaRef( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamSchemaRefBuff* Buff ) = 0;
		virtual void deleteSchemaRefBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaId ) = 0;

		virtual void deleteSchemaRefBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaRefBySchemaIdxKey* argKey ) = 0;
		virtual void deleteSchemaRefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaId,
			const std::string& argName ) = 0;

		virtual void deleteSchemaRefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaRefByUNameIdxKey* argKey ) = 0;
		virtual void deleteSchemaRefByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argRefSchemaTenantId,
			const int64_t* argRefSchemaId ) = 0;

		virtual void deleteSchemaRefByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaRefByRefSchemaIdxKey* argKey ) = 0;
		virtual void deleteSchemaRefByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId ) = 0;

		virtual void deleteSchemaRefByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaRefByPrevIdxKey* argKey ) = 0;
		virtual void deleteSchemaRefByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId ) = 0;

		virtual void deleteSchemaRefByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaRefByNextIdxKey* argKey ) = 0;
		virtual void deleteSchemaRefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteSchemaRefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey ) = 0;
		virtual void deleteSchemaRefByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteSchemaRefByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey ) = 0;

		virtual cfbam::CFBamSchemaRefBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamSchemaRefBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamSchemaRefBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readDerivedBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId ) = 0;

		virtual cfbam::CFBamSchemaRefBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readDerivedByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RefSchemaTenantId,
			const int64_t* RefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual cfbam::CFBamSchemaRefBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamSchemaRefBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamSchemaRefBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readBuffBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId ) = 0;

		virtual cfbam::CFBamSchemaRefBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readBuffByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RefSchemaTenantId,
			const int64_t* RefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual cfbam::CFBamSchemaRefBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual cfbam::CFBamSchemaRefBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
