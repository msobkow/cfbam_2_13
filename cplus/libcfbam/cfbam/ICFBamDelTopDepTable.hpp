#pragma once

// Description: C++18 DbIO interface for DelTopDep.

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
#include <cfsec/CFSecAuthorization.hpp>
#include <cfbam/CFBamHPKey.hpp>
#include <cfbam/CFBamDelTopDepBuff.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamDelTopDepHBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamDelDepByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamDelDepByDelDepIdxKey.hpp>
#include <cfbam/CFBamDelTopDepByDelTopDepTblIdxKey.hpp>
#include <cfbam/CFBamDelTopDepByUNameIdxKey.hpp>
#include <cfbam/CFBamDelTopDepByPrevIdxKey.hpp>
#include <cfbam/CFBamDelTopDepByNextIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamDelTopDepObj;

	class ICFBamDelTopDepTable
	{
	public:
		ICFBamDelTopDepTable();
		virtual ~ICFBamDelTopDepTable();

		virtual cfbam::CFBamDelTopDepBuff* createDelTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelTopDepBuff* Buff ) = 0;

		virtual cfbam::CFBamDelTopDepBuff* updateDelTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelTopDepBuff* Buff ) = 0;

		virtual void deleteDelTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelTopDepBuff* Buff ) = 0;
		virtual void deleteDelTopDepByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTableTenantId,
			const int64_t argTableId ) = 0;

		virtual void deleteDelTopDepByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey* argKey ) = 0;
		virtual void deleteDelTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTableTenantId,
			const int64_t argTableId,
			const std::string& argName ) = 0;

		virtual void deleteDelTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelTopDepByUNameIdxKey* argKey ) = 0;
		virtual void deleteDelTopDepByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId ) = 0;

		virtual void deleteDelTopDepByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelTopDepByPrevIdxKey* argKey ) = 0;
		virtual void deleteDelTopDepByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId ) = 0;

		virtual void deleteDelTopDepByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelTopDepByNextIdxKey* argKey ) = 0;
		virtual void deleteDelTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteDelTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelDepByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteDelTopDepByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId ) = 0;

		virtual void deleteDelTopDepByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelDepByDelDepIdxKey* argKey ) = 0;
		virtual void deleteDelTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteDelTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey ) = 0;
		virtual void deleteDelTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteDelTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey ) = 0;

		virtual cfbam::CFBamDelTopDepBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamDelTopDepBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamDelTopDepBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readDerivedByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readDerivedByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId ) = 0;

		virtual cfbam::CFBamDelTopDepBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual cfbam::CFBamDelTopDepBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamDelTopDepBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamDelTopDepBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readBuffByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId ) = 0;

		virtual cfbam::CFBamDelTopDepBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual cfbam::CFBamDelTopDepBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual cfbam::CFBamDelTopDepBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
