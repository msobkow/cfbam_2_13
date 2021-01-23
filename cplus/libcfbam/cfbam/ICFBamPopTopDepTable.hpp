#pragma once

// Description: C++18 DbIO interface for PopTopDep.

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
#include <cfbam/CFBamPopTopDepBuff.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamPopTopDepHBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamPopDepByRelationIdxKey.hpp>
#include <cfbam/CFBamPopDepByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamPopTopDepByContRelIdxKey.hpp>
#include <cfbam/CFBamPopTopDepByUNameIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamPopTopDepObj;

	class ICFBamPopTopDepTable
	{
	public:
		ICFBamPopTopDepTable();
		virtual ~ICFBamPopTopDepTable();

		virtual cfbam::CFBamPopTopDepBuff* createPopTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopTopDepBuff* Buff ) = 0;

		virtual cfbam::CFBamPopTopDepBuff* updatePopTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopTopDepBuff* Buff ) = 0;

		virtual void deletePopTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopTopDepBuff* Buff ) = 0;
		virtual void deletePopTopDepByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argContRelationTenantId,
			const int64_t argContRelationId ) = 0;

		virtual void deletePopTopDepByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopTopDepByContRelIdxKey* argKey ) = 0;
		virtual void deletePopTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argContRelationTenantId,
			const int64_t argContRelationId,
			const std::string& argName ) = 0;

		virtual void deletePopTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopTopDepByUNameIdxKey* argKey ) = 0;
		virtual void deletePopTopDepByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId ) = 0;

		virtual void deletePopTopDepByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByRelationIdxKey* argKey ) = 0;
		virtual void deletePopTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deletePopTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByDefSchemaIdxKey* argKey ) = 0;
		virtual void deletePopTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deletePopTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey ) = 0;
		virtual void deletePopTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deletePopTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey ) = 0;

		virtual cfbam::CFBamPopTopDepBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamPopTopDepBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamPopTopDepBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readDerivedByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId ) = 0;

		virtual cfbam::CFBamPopTopDepBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId,
			const std::string& Name ) = 0;

		virtual cfbam::CFBamPopTopDepBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamPopTopDepBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamPopTopDepBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readBuffByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId ) = 0;

		virtual cfbam::CFBamPopTopDepBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId,
			const std::string& Name ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
