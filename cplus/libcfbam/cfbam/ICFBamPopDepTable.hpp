#pragma once

// Description: C++18 DbIO interface for PopDep.

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
#include <cfsec/CFSecAuthorization.hpp>
#include <cfbam/CFBamHPKey.hpp>
#include <cfbam/CFBamPopDepBuff.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamPopDepHBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamPopDepByRelationIdxKey.hpp>
#include <cfbam/CFBamPopDepByDefSchemaIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamPopDepObj;

	class ICFBamPopDepTable
	{
	public:
		ICFBamPopDepTable();
		virtual ~ICFBamPopDepTable();

		virtual cfbam::CFBamPopDepBuff* createPopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopDepBuff* Buff ) = 0;

		virtual cfbam::CFBamPopDepBuff* updatePopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopDepBuff* Buff ) = 0;

		virtual void deletePopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopDepBuff* Buff ) = 0;
		virtual void deletePopDepByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId ) = 0;

		virtual void deletePopDepByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByRelationIdxKey* argKey ) = 0;
		virtual void deletePopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deletePopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByDefSchemaIdxKey* argKey ) = 0;
		virtual void deletePopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deletePopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey ) = 0;
		virtual void deletePopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deletePopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey ) = 0;

		virtual cfbam::CFBamPopDepBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamPopDepBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamPopDepBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual cfbam::CFBamPopDepBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamPopDepBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamPopDepBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
