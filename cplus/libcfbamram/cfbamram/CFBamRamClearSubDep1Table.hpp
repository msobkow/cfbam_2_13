#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for ClearSubDep1.

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
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamsaxloader/CFBamSaxLoader.hpp>

namespace cfbam {

	class CFBamRamClearSubDep1Table
	: public virtual cfbam::ICFBamClearSubDep1Table
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>* dictByPKey;
		std::map<cfbam::CFBamClearSubDep1ByClearTopDepIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearSubDep1Buff*>*>* dictByClearTopDepIdx;
		std::map<cfbam::CFBamClearSubDep1ByUNameIdxKey,
			cfbam::CFBamClearSubDep1Buff*>* dictByUNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamClearSubDep1Table( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamClearSubDep1Table();

		virtual cfbam::CFBamClearSubDep1Buff* createClearSubDep1( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep1Buff* Buff );

		virtual cfbam::CFBamClearSubDep1Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamClearSubDep1Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> readDerivedByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> readDerivedByClearTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearTopDepTenantId,
			const int64_t ClearTopDepId );

		virtual cfbam::CFBamClearSubDep1Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearTopDepTenantId,
			const int64_t ClearTopDepId,
			const std::string& Name );

		virtual cfbam::CFBamClearSubDep1Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamClearSubDep1Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamClearSubDep1Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamClearSubDep1Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> readBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> readBuffByClearTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearTopDepTenantId,
			const int64_t ClearTopDepId );

		virtual cfbam::CFBamClearSubDep1Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearTopDepTenantId,
			const int64_t ClearTopDepId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> pageBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> pageBuffByClearTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearTopDepTenantId,
			const int64_t ClearTopDepId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamClearSubDep1Buff* updateClearSubDep1( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep1Buff* Buff );

		virtual void deleteClearSubDep1( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep1Buff* Buff );
		virtual void deleteClearSubDep1ByClearTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearTopDepTenantId,
			const int64_t argClearTopDepId );

		virtual void deleteClearSubDep1ByClearTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey* argKey );

		virtual void deleteClearSubDep1ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearTopDepTenantId,
			const int64_t argClearTopDepId,
			const std::string& argName );

		virtual void deleteClearSubDep1ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearSubDep1ByUNameIdxKey* argKey );

		virtual void deleteClearSubDep1ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId );

		virtual void deleteClearSubDep1ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearDepByClearDepIdxKey* argKey );

		virtual void deleteClearSubDep1ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteClearSubDep1ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearDepByDefSchemaIdxKey* argKey );

		virtual void deleteClearSubDep1ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteClearSubDep1ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteClearSubDep1ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteClearSubDep1ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
