#pragma once

// Description: C++18 DbIO interface for UuidGen.

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
#include <cfbam/CFBamUuidGenBuff.hpp>
#include <cfbam/CFBamValuePKey.hpp>
#include <cfbam/CFBamUuidGenHBuff.hpp>
#include <cfbam/CFBamValueHPKey.hpp>
#include <cfbam/CFBamValueByUNameIdxKey.hpp>
#include <cfbam/CFBamValueByValTentIdxKey.hpp>
#include <cfbam/CFBamValueByScopeIdxKey.hpp>
#include <cfbam/CFBamValueByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamValueByPrevIdxKey.hpp>
#include <cfbam/CFBamValueByNextIdxKey.hpp>
#include <cfbam/CFBamValueByContPrevIdxKey.hpp>
#include <cfbam/CFBamValueByContNextIdxKey.hpp>
#include <cfbam/CFBamUuidTypeBySchemaIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamUuidGenObj;

	class ICFBamUuidGenTable
	{
	public:
		ICFBamUuidGenTable();
		virtual ~ICFBamUuidGenTable();

		virtual cfbam::CFBamUuidGenBuff* createUuidGen( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamUuidGenBuff* Buff ) = 0;

		virtual cfbam::CFBamUuidGenBuff* updateUuidGen( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamUuidGenBuff* Buff ) = 0;

		virtual void deleteUuidGen( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamUuidGenBuff* Buff ) = 0;
		virtual void deleteUuidGenBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaDefId ) = 0;

		virtual void deleteUuidGenBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamUuidTypeBySchemaIdxKey* argKey ) = 0;
		virtual void deleteUuidGenByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteUuidGenByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* argKey ) = 0;
		virtual void deleteUuidGenByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const std::string& argName ) = 0;

		virtual void deleteUuidGenByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByUNameIdxKey* argKey ) = 0;
		virtual void deleteUuidGenByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteUuidGenByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByValTentIdxKey* argKey ) = 0;
		virtual void deleteUuidGenByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId ) = 0;

		virtual void deleteUuidGenByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByScopeIdxKey* argKey ) = 0;
		virtual void deleteUuidGenByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteUuidGenByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteUuidGenByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId ) = 0;

		virtual void deleteUuidGenByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByPrevIdxKey* argKey ) = 0;
		virtual void deleteUuidGenByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId ) = 0;

		virtual void deleteUuidGenByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByNextIdxKey* argKey ) = 0;
		virtual void deleteUuidGenByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const int64_t* argPrevId ) = 0;

		virtual void deleteUuidGenByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByContPrevIdxKey* argKey ) = 0;
		virtual void deleteUuidGenByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const int64_t* argNextId ) = 0;

		virtual void deleteUuidGenByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByContNextIdxKey* argKey ) = 0;

		virtual cfbam::CFBamUuidGenBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey ) = 0;

		virtual cfbam::CFBamUuidGenBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamUuidGenBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual cfbam::CFBamUuidGenBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readDerivedByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readDerivedByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readDerivedByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readDerivedByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readDerivedBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId ) = 0;

		virtual cfbam::CFBamUuidGenBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey ) = 0;

		virtual cfbam::CFBamUuidGenBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamUuidGenBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual cfbam::CFBamUuidGenBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readBuffByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readBuffByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readBuffByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readBuffByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamUuidGenBuff*> readBuffBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId ) = 0;

		virtual cfbam::CFBamUuidGenBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual cfbam::CFBamUuidGenBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
