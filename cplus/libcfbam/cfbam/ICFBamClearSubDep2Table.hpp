#pragma once

// Description: C++18 DbIO interface for ClearSubDep2.

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
#include <cfbam/CFBamClearSubDep2Buff.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamClearSubDep2HBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamClearDepByClearDepIdxKey.hpp>
#include <cfbam/CFBamClearDepByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamClearSubDep2ByClearSubDep1IdxKey.hpp>
#include <cfbam/CFBamClearSubDep2ByUNameIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamClearSubDep2Obj;

	class ICFBamClearSubDep2Table
	{
	public:
		ICFBamClearSubDep2Table();
		virtual ~ICFBamClearSubDep2Table();

		virtual cfbam::CFBamClearSubDep2Buff* createClearSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep2Buff* Buff ) = 0;

		virtual cfbam::CFBamClearSubDep2Buff* updateClearSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep2Buff* Buff ) = 0;

		virtual void deleteClearSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep2Buff* Buff ) = 0;
		virtual void deleteClearSubDep2ByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearSubDep1TenantId,
			const int64_t argClearSubDep1Id ) = 0;

		virtual void deleteClearSubDep2ByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey* argKey ) = 0;
		virtual void deleteClearSubDep2ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearSubDep1TenantId,
			const int64_t argClearSubDep1Id,
			const std::string& argName ) = 0;

		virtual void deleteClearSubDep2ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearSubDep2ByUNameIdxKey* argKey ) = 0;
		virtual void deleteClearSubDep2ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId ) = 0;

		virtual void deleteClearSubDep2ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearDepByClearDepIdxKey* argKey ) = 0;
		virtual void deleteClearSubDep2ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteClearSubDep2ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearDepByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteClearSubDep2ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteClearSubDep2ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey ) = 0;
		virtual void deleteClearSubDep2ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteClearSubDep2ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey ) = 0;

		virtual cfbam::CFBamClearSubDep2Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamClearSubDep2Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamClearSubDep2Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readDerivedByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readDerivedByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id ) = 0;

		virtual cfbam::CFBamClearSubDep2Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
			const std::string& Name ) = 0;

		virtual cfbam::CFBamClearSubDep2Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamClearSubDep2Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamClearSubDep2Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readBuffByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id ) = 0;

		virtual cfbam::CFBamClearSubDep2Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
			const std::string& Name ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
