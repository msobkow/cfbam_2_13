#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for DelSubDep1.

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

	class CFBamRamDelSubDep1Table
	: public virtual cfbam::ICFBamDelSubDep1Table
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>* dictByPKey;
		std::map<cfbam::CFBamDelSubDep1ByDelTopDepIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelSubDep1Buff*>*>* dictByDelTopDepIdx;
		std::map<cfbam::CFBamDelSubDep1ByUNameIdxKey,
			cfbam::CFBamDelSubDep1Buff*>* dictByUNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamDelSubDep1Table( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamDelSubDep1Table();

		virtual cfbam::CFBamDelSubDep1Buff* createDelSubDep1( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelSubDep1Buff* Buff );

		virtual cfbam::CFBamDelSubDep1Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamDelSubDep1Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> readDerivedByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> readDerivedByDelTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId );

		virtual cfbam::CFBamDelSubDep1Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId,
			const std::string& Name );

		virtual cfbam::CFBamDelSubDep1Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamDelSubDep1Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamDelSubDep1Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamDelSubDep1Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> readBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> readBuffByDelTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId );

		virtual cfbam::CFBamDelSubDep1Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> pageBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> pageBuffByDelTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamDelSubDep1Buff* updateDelSubDep1( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelSubDep1Buff* Buff );

		virtual void deleteDelSubDep1( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelSubDep1Buff* Buff );
		virtual void deleteDelSubDep1ByDelTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argDelTopDepTenantId,
			const int64_t argDelTopDepId );

		virtual void deleteDelSubDep1ByDelTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey* argKey );

		virtual void deleteDelSubDep1ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argDelTopDepTenantId,
			const int64_t argDelTopDepId,
			const std::string& argName );

		virtual void deleteDelSubDep1ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelSubDep1ByUNameIdxKey* argKey );

		virtual void deleteDelSubDep1ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteDelSubDep1ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelDepByDefSchemaIdxKey* argKey );

		virtual void deleteDelSubDep1ByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId );

		virtual void deleteDelSubDep1ByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelDepByDelDepIdxKey* argKey );

		virtual void deleteDelSubDep1ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteDelSubDep1ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteDelSubDep1ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteDelSubDep1ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
