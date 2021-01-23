#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for PopSubDep1.

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

	class CFBamRamPopSubDep1Table
	: public virtual cfbam::ICFBamPopSubDep1Table
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>* dictByPKey;
		std::map<cfbam::CFBamPopSubDep1ByPopTopDepIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopSubDep1Buff*>*>* dictByPopTopDepIdx;
		std::map<cfbam::CFBamPopSubDep1ByUNameIdxKey,
			cfbam::CFBamPopSubDep1Buff*>* dictByUNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamPopSubDep1Table( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamPopSubDep1Table();

		virtual cfbam::CFBamPopSubDep1Buff* createPopSubDep1( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopSubDep1Buff* Buff );

		virtual cfbam::CFBamPopSubDep1Buff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamPopSubDep1Buff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> readDerivedByPopTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopTopDepTenantId,
			const int64_t PopTopDepId );

		virtual cfbam::CFBamPopSubDep1Buff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopTopDepTenantId,
			const int64_t PopTopDepId,
			const std::string& Name );

		virtual cfbam::CFBamPopSubDep1Buff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamPopSubDep1Buff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamPopSubDep1Buff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamPopSubDep1Buff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> readBuffByPopTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopTopDepTenantId,
			const int64_t PopTopDepId );

		virtual cfbam::CFBamPopSubDep1Buff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopTopDepTenantId,
			const int64_t PopTopDepId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> pageBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> pageBuffByPopTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopTopDepTenantId,
			const int64_t PopTopDepId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamPopSubDep1Buff* updatePopSubDep1( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopSubDep1Buff* Buff );

		virtual void deletePopSubDep1( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopSubDep1Buff* Buff );
		virtual void deletePopSubDep1ByPopTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPopTopDepTenantId,
			const int64_t argPopTopDepId );

		virtual void deletePopSubDep1ByPopTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopSubDep1ByPopTopDepIdxKey* argKey );

		virtual void deletePopSubDep1ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPopTopDepTenantId,
			const int64_t argPopTopDepId,
			const std::string& argName );

		virtual void deletePopSubDep1ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopSubDep1ByUNameIdxKey* argKey );

		virtual void deletePopSubDep1ByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId );

		virtual void deletePopSubDep1ByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByRelationIdxKey* argKey );

		virtual void deletePopSubDep1ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deletePopSubDep1ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByDefSchemaIdxKey* argKey );

		virtual void deletePopSubDep1ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deletePopSubDep1ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deletePopSubDep1ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deletePopSubDep1ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
