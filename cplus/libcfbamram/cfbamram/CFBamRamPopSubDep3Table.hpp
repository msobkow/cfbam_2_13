#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for PopSubDep3.

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

	class CFBamRamPopSubDep3Table
	: public virtual cfbam::ICFBamPopSubDep3Table
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>* dictByPKey;
		std::map<cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopSubDep3Buff*>*>* dictByPopSubDep2Idx;
		std::map<cfbam::CFBamPopSubDep3ByUNameIdxKey,
			cfbam::CFBamPopSubDep3Buff*>* dictByUNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamPopSubDep3Table( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamPopSubDep3Table();

		virtual cfbam::CFBamPopSubDep3Buff* createPopSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopSubDep3Buff* Buff );

		virtual cfbam::CFBamPopSubDep3Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamPopSubDep3Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> readDerivedByPopSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep2TenantId,
			const int64_t PopSubDep2Id );

		virtual cfbam::CFBamPopSubDep3Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep2TenantId,
			const int64_t PopSubDep2Id,
			const std::string& Name );

		virtual cfbam::CFBamPopSubDep3Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamPopSubDep3Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamPopSubDep3Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamPopSubDep3Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> readBuffByPopSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep2TenantId,
			const int64_t PopSubDep2Id );

		virtual cfbam::CFBamPopSubDep3Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep2TenantId,
			const int64_t PopSubDep2Id,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> pageBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> pageBuffByPopSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep2TenantId,
			const int64_t PopSubDep2Id,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamPopSubDep3Buff* updatePopSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopSubDep3Buff* Buff );

		virtual void deletePopSubDep3( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopSubDep3Buff* Buff );
		virtual void deletePopSubDep3ByPopSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPopSubDep2TenantId,
			const int64_t argPopSubDep2Id );

		virtual void deletePopSubDep3ByPopSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey* argKey );

		virtual void deletePopSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPopSubDep2TenantId,
			const int64_t argPopSubDep2Id,
			const std::string& argName );

		virtual void deletePopSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopSubDep3ByUNameIdxKey* argKey );

		virtual void deletePopSubDep3ByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId );

		virtual void deletePopSubDep3ByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByRelationIdxKey* argKey );

		virtual void deletePopSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deletePopSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByDefSchemaIdxKey* argKey );

		virtual void deletePopSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deletePopSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deletePopSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deletePopSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
