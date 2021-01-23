#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for DelSubDep3.

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

	class CFBamRamDelSubDep3Table
	: public virtual cfbam::ICFBamDelSubDep3Table
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep3Buff*>* dictByPKey;
		std::map<cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelSubDep3Buff*>*>* dictByDelSubDep2Idx;
		std::map<cfbam::CFBamDelSubDep3ByUNameIdxKey,
			cfbam::CFBamDelSubDep3Buff*>* dictByUNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamDelSubDep3Table( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamDelSubDep3Table();

		virtual cfbam::CFBamDelSubDep3Buff* createDelSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelSubDep3Buff* Buff );

		virtual cfbam::CFBamDelSubDep3Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamDelSubDep3Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readDerivedByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readDerivedByDelSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep2TenantId,
			const int64_t DelSubDep2Id );

		virtual cfbam::CFBamDelSubDep3Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep2TenantId,
			const int64_t DelSubDep2Id,
			const std::string& Name );

		virtual cfbam::CFBamDelSubDep3Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamDelSubDep3Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamDelSubDep3Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamDelSubDep3Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> readBuffByDelSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep2TenantId,
			const int64_t DelSubDep2Id );

		virtual cfbam::CFBamDelSubDep3Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep2TenantId,
			const int64_t DelSubDep2Id,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> pageBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep3Buff*> pageBuffByDelSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep2TenantId,
			const int64_t DelSubDep2Id,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamDelSubDep3Buff* updateDelSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelSubDep3Buff* Buff );

		virtual void deleteDelSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelSubDep3Buff* Buff );
		virtual void deleteDelSubDep3ByDelSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argDelSubDep2TenantId,
			const int64_t argDelSubDep2Id );

		virtual void deleteDelSubDep3ByDelSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey* argKey );

		virtual void deleteDelSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argDelSubDep2TenantId,
			const int64_t argDelSubDep2Id,
			const std::string& argName );

		virtual void deleteDelSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelSubDep3ByUNameIdxKey* argKey );

		virtual void deleteDelSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteDelSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelDepByDefSchemaIdxKey* argKey );

		virtual void deleteDelSubDep3ByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId );

		virtual void deleteDelSubDep3ByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelDepByDelDepIdxKey* argKey );

		virtual void deleteDelSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteDelSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteDelSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteDelSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
