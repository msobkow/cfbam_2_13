#pragma once

// Description: C++18 DbIO interface for DelSubDep3.

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
#include <cfbam/CFBamDelSubDep3Buff.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamDelSubDep3HBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamDelDepByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamDelDepByDelDepIdxKey.hpp>
#include <cfbam/CFBamDelSubDep3ByDelSubDep2IdxKey.hpp>
#include <cfbam/CFBamDelSubDep3ByUNameIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamDelSubDep3Obj;

	class ICFBamDelSubDep3Table
	{
	public:
		ICFBamDelSubDep3Table();
		virtual ~ICFBamDelSubDep3Table();

		virtual cfbam::CFBamDelSubDep3Buff* createDelSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelSubDep3Buff* Buff ) = 0;

		virtual cfbam::CFBamDelSubDep3Buff* updateDelSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelSubDep3Buff* Buff ) = 0;

		virtual void deleteDelSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelSubDep3Buff* Buff ) = 0;
		virtual void deleteDelSubDep3ByDelSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argDelSubDep2TenantId,
			const int64_t argDelSubDep2Id ) = 0;

		virtual void deleteDelSubDep3ByDelSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey* argKey ) = 0;
		virtual void deleteDelSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argDelSubDep2TenantId,
			const int64_t argDelSubDep2Id,
			const std::string& argName ) = 0;

		virtual void deleteDelSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelSubDep3ByUNameIdxKey* argKey ) = 0;
		virtual void deleteDelSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteDelSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelDepByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteDelSubDep3ByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId ) = 0;

		virtual void deleteDelSubDep3ByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelDepByDelDepIdxKey* argKey ) = 0;
		virtual void deleteDelSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteDelSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey ) = 0;
		virtual void deleteDelSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteDelSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey ) = 0;

		virtual cfbam::CFBamDelSubDep3Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamDelSubDep3Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamDelSubDep3Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readDerivedByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readDerivedByDelSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep2TenantId,
			const int64_t DelSubDep2Id ) = 0;

		virtual cfbam::CFBamDelSubDep3Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep2TenantId,
			const int64_t DelSubDep2Id,
			const std::string& Name ) = 0;

		virtual cfbam::CFBamDelSubDep3Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamDelSubDep3Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamDelSubDep3Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readBuffByDelSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep2TenantId,
			const int64_t DelSubDep2Id ) = 0;

		virtual cfbam::CFBamDelSubDep3Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep2TenantId,
			const int64_t DelSubDep2Id,
			const std::string& Name ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
