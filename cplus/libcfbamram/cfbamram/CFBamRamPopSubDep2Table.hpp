#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for PopSubDep2.

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

	class CFBamRamPopSubDep2Table
	: public virtual cfbam::ICFBamPopSubDep2Table
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep2Buff*>* dictByPKey;
		std::map<cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopSubDep2Buff*>*>* dictByPopSubDep1Idx;
		std::map<cfbam::CFBamPopSubDep2ByUNameIdxKey,
			cfbam::CFBamPopSubDep2Buff*>* dictByUNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamPopSubDep2Table( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamPopSubDep2Table();

		virtual cfbam::CFBamPopSubDep2Buff* createPopSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopSubDep2Buff* Buff );

		virtual cfbam::CFBamPopSubDep2Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamPopSubDep2Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readDerivedByPopSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep1TenantId,
			const int64_t PopSubDep1Id );

		virtual cfbam::CFBamPopSubDep2Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep1TenantId,
			const int64_t PopSubDep1Id,
			const std::string& Name );

		virtual cfbam::CFBamPopSubDep2Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamPopSubDep2Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamPopSubDep2Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamPopSubDep2Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> readBuffByPopSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep1TenantId,
			const int64_t PopSubDep1Id );

		virtual cfbam::CFBamPopSubDep2Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep1TenantId,
			const int64_t PopSubDep1Id,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> pageBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> pageBuffByPopSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep1TenantId,
			const int64_t PopSubDep1Id,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamPopSubDep2Buff* updatePopSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopSubDep2Buff* Buff );

		virtual void deletePopSubDep2( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopSubDep2Buff* Buff );
		virtual void deletePopSubDep2ByPopSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPopSubDep1TenantId,
			const int64_t argPopSubDep1Id );

		virtual void deletePopSubDep2ByPopSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey* argKey );

		virtual void deletePopSubDep2ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPopSubDep1TenantId,
			const int64_t argPopSubDep1Id,
			const std::string& argName );

		virtual void deletePopSubDep2ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopSubDep2ByUNameIdxKey* argKey );

		virtual void deletePopSubDep2ByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId );

		virtual void deletePopSubDep2ByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByRelationIdxKey* argKey );

		virtual void deletePopSubDep2ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deletePopSubDep2ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByDefSchemaIdxKey* argKey );

		virtual void deletePopSubDep2ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deletePopSubDep2ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deletePopSubDep2ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deletePopSubDep2ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
