#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for DelSubDep2.

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
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamsaxloader/CFBamSaxLoader.hpp>

namespace cfbam {

	class CFBamRamDelSubDep2Table
	: public virtual cfbam::ICFBamDelSubDep2Table
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep2Buff*>* dictByPKey;
		std::map<cfbam::CFBamDelSubDep2ByContDelDep1IdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelSubDep2Buff*>*>* dictByContDelDep1Idx;
		std::map<cfbam::CFBamDelSubDep2ByUNameIdxKey,
			cfbam::CFBamDelSubDep2Buff*>* dictByUNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamDelSubDep2Table( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamDelSubDep2Table();

		virtual cfbam::CFBamDelSubDep2Buff* createDelSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelSubDep2Buff* Buff );

		virtual cfbam::CFBamDelSubDep2Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamDelSubDep2Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> readDerivedByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> readDerivedByContDelDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep1TenantId,
			const int64_t DelSubDep1Id );

		virtual cfbam::CFBamDelSubDep2Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep1TenantId,
			const int64_t DelSubDep1Id,
			const std::string& Name );

		virtual cfbam::CFBamDelSubDep2Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamDelSubDep2Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamDelSubDep2Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamDelSubDep2Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> readBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> readBuffByContDelDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep1TenantId,
			const int64_t DelSubDep1Id );

		virtual cfbam::CFBamDelSubDep2Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep1TenantId,
			const int64_t DelSubDep1Id,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> pageBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> pageBuffByContDelDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelSubDep1TenantId,
			const int64_t DelSubDep1Id,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamDelSubDep2Buff* updateDelSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelSubDep2Buff* Buff );

		virtual void deleteDelSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelSubDep2Buff* Buff );
		virtual void deleteDelSubDep2ByContDelDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argDelSubDep1TenantId,
			const int64_t argDelSubDep1Id );

		virtual void deleteDelSubDep2ByContDelDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey* argKey );

		virtual void deleteDelSubDep2ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argDelSubDep1TenantId,
			const int64_t argDelSubDep1Id,
			const std::string& argName );

		virtual void deleteDelSubDep2ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelSubDep2ByUNameIdxKey* argKey );

		virtual void deleteDelSubDep2ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteDelSubDep2ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelDepByDefSchemaIdxKey* argKey );

		virtual void deleteDelSubDep2ByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId );

		virtual void deleteDelSubDep2ByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelDepByDelDepIdxKey* argKey );

		virtual void deleteDelSubDep2ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteDelSubDep2ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteDelSubDep2ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteDelSubDep2ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
