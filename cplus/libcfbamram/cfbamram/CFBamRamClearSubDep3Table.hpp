#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for ClearSubDep3.

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

	class CFBamRamClearSubDep3Table
	: public virtual cfbam::ICFBamClearSubDep3Table
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>* dictByPKey;
		std::map<cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearSubDep3Buff*>*>* dictByClearSubDep2Idx;
		std::map<cfbam::CFBamClearSubDep3ByUNameIdxKey,
			cfbam::CFBamClearSubDep3Buff*>* dictByUNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamClearSubDep3Table( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamClearSubDep3Table();

		virtual cfbam::CFBamClearSubDep3Buff* createClearSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep3Buff* Buff );

		virtual cfbam::CFBamClearSubDep3Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamClearSubDep3Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readDerivedByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readDerivedByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id );

		virtual cfbam::CFBamClearSubDep3Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id,
			const std::string& Name );

		virtual cfbam::CFBamClearSubDep3Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamClearSubDep3Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamClearSubDep3Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamClearSubDep3Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> readBuffByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id );

		virtual cfbam::CFBamClearSubDep3Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> pageBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> pageBuffByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamClearSubDep3Buff* updateClearSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep3Buff* Buff );

		virtual void deleteClearSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearSubDep3Buff* Buff );
		virtual void deleteClearSubDep3ByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearSubDep2TenantId,
			const int64_t argClearSubDep2Id );

		virtual void deleteClearSubDep3ByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey* argKey );

		virtual void deleteClearSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearSubDep2TenantId,
			const int64_t argClearSubDep2Id,
			const std::string& argName );

		virtual void deleteClearSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearSubDep3ByUNameIdxKey* argKey );

		virtual void deleteClearSubDep3ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId );

		virtual void deleteClearSubDep3ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearDepByClearDepIdxKey* argKey );

		virtual void deleteClearSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteClearSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearDepByDefSchemaIdxKey* argKey );

		virtual void deleteClearSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteClearSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteClearSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteClearSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
