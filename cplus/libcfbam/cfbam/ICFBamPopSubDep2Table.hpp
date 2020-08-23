#pragma once

// Description: C++18 DbIO interface for PopSubDep2.

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
#include <cfbam/CFBamPopSubDep2Buff.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamPopSubDep2HBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamPopDepByRelationIdxKey.hpp>
#include <cfbam/CFBamPopDepByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamPopSubDep2ByPopSubDep1IdxKey.hpp>
#include <cfbam/CFBamPopSubDep2ByUNameIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamPopSubDep2Obj;

	class ICFBamPopSubDep2Table
	{
	public:
		ICFBamPopSubDep2Table();
		virtual ~ICFBamPopSubDep2Table();

		virtual cfbam::CFBamPopSubDep2Buff* createPopSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopSubDep2Buff* Buff ) = 0;

		virtual cfbam::CFBamPopSubDep2Buff* updatePopSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopSubDep2Buff* Buff ) = 0;

		virtual void deletePopSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopSubDep2Buff* Buff ) = 0;
		virtual void deletePopSubDep2ByPopSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPopSubDep1TenantId,
			const int64_t argPopSubDep1Id ) = 0;

		virtual void deletePopSubDep2ByPopSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey* argKey ) = 0;
		virtual void deletePopSubDep2ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPopSubDep1TenantId,
			const int64_t argPopSubDep1Id,
			const std::string& argName ) = 0;

		virtual void deletePopSubDep2ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopSubDep2ByUNameIdxKey* argKey ) = 0;
		virtual void deletePopSubDep2ByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId ) = 0;

		virtual void deletePopSubDep2ByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByRelationIdxKey* argKey ) = 0;
		virtual void deletePopSubDep2ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deletePopSubDep2ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByDefSchemaIdxKey* argKey ) = 0;
		virtual void deletePopSubDep2ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deletePopSubDep2ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey ) = 0;
		virtual void deletePopSubDep2ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deletePopSubDep2ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey ) = 0;

		virtual cfbam::CFBamPopSubDep2Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamPopSubDep2Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamPopSubDep2Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readDerivedByPopSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep1TenantId,
			const int64_t PopSubDep1Id ) = 0;

		virtual cfbam::CFBamPopSubDep2Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep1TenantId,
			const int64_t PopSubDep1Id,
			const std::string& Name ) = 0;

		virtual cfbam::CFBamPopSubDep2Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamPopSubDep2Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamPopSubDep2Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readBuffByPopSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep1TenantId,
			const int64_t PopSubDep1Id ) = 0;

		virtual cfbam::CFBamPopSubDep2Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep1TenantId,
			const int64_t PopSubDep1Id,
			const std::string& Name ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
