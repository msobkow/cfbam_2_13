#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for ClearSubDep2.

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

	class CFBamRamClearSubDep2Table
	: public virtual cfbam::ICFBamClearSubDep2Table
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>* dictByPKey;
		std::map<cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearSubDep2Buff*>*>* dictByClearSubDep1Idx;
		std::map<cfbam::CFBamClearSubDep2ByUNameIdxKey,
			cfbam::CFBamClearSubDep2Buff*>* dictByUNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamClearSubDep2Table( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamClearSubDep2Table();

		virtual cfbam::CFBamClearSubDep2Buff* createClearSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep2Buff* Buff );

		virtual cfbam::CFBamClearSubDep2Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamClearSubDep2Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readDerivedByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readDerivedByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id );

		virtual cfbam::CFBamClearSubDep2Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
			const std::string& Name );

		virtual cfbam::CFBamClearSubDep2Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamClearSubDep2Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamClearSubDep2Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamClearSubDep2Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> readBuffByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id );

		virtual cfbam::CFBamClearSubDep2Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> pageBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> pageBuffByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamClearSubDep2Buff* updateClearSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep2Buff* Buff );

		virtual void deleteClearSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep2Buff* Buff );
		virtual void deleteClearSubDep2ByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearSubDep1TenantId,
			const int64_t argClearSubDep1Id );

		virtual void deleteClearSubDep2ByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey* argKey );

		virtual void deleteClearSubDep2ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearSubDep1TenantId,
			const int64_t argClearSubDep1Id,
			const std::string& argName );

		virtual void deleteClearSubDep2ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearSubDep2ByUNameIdxKey* argKey );

		virtual void deleteClearSubDep2ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId );

		virtual void deleteClearSubDep2ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearDepByClearDepIdxKey* argKey );

		virtual void deleteClearSubDep2ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteClearSubDep2ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearDepByDefSchemaIdxKey* argKey );

		virtual void deleteClearSubDep2ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteClearSubDep2ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteClearSubDep2ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteClearSubDep2ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
