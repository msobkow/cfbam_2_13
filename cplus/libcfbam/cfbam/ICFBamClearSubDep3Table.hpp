#pragma once

// Description: C++18 DbIO interface for ClearSubDep3.

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
#include <cfbam/CFBamClearSubDep3Buff.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamClearSubDep3HBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamClearDepByClearDepIdxKey.hpp>
#include <cfbam/CFBamClearDepByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamClearSubDep3ByClearSubDep2IdxKey.hpp>
#include <cfbam/CFBamClearSubDep3ByUNameIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamClearSubDep3Obj;

	class ICFBamClearSubDep3Table
	{
	public:
		ICFBamClearSubDep3Table();
		virtual ~ICFBamClearSubDep3Table();

		virtual cfbam::CFBamClearSubDep3Buff* createClearSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep3Buff* Buff ) = 0;

		virtual cfbam::CFBamClearSubDep3Buff* updateClearSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep3Buff* Buff ) = 0;

		virtual void deleteClearSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep3Buff* Buff ) = 0;
		virtual void deleteClearSubDep3ByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearSubDep2TenantId,
			const int64_t argClearSubDep2Id ) = 0;

		virtual void deleteClearSubDep3ByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey* argKey ) = 0;
		virtual void deleteClearSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearSubDep2TenantId,
			const int64_t argClearSubDep2Id,
			const std::string& argName ) = 0;

		virtual void deleteClearSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearSubDep3ByUNameIdxKey* argKey ) = 0;
		virtual void deleteClearSubDep3ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId ) = 0;

		virtual void deleteClearSubDep3ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearDepByClearDepIdxKey* argKey ) = 0;
		virtual void deleteClearSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteClearSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearDepByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteClearSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteClearSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey ) = 0;
		virtual void deleteClearSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteClearSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey ) = 0;

		virtual cfbam::CFBamClearSubDep3Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamClearSubDep3Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamClearSubDep3Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readDerivedByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readDerivedByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id ) = 0;

		virtual cfbam::CFBamClearSubDep3Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id,
			const std::string& Name ) = 0;

		virtual cfbam::CFBamClearSubDep3Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamClearSubDep3Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamClearSubDep3Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readBuffByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id ) = 0;

		virtual cfbam::CFBamClearSubDep3Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id,
			const std::string& Name ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
