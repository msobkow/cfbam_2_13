#pragma once

// Description: C++18 DbIO interface for ServerObjFunc.

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
#include <cfbam/CFBamServerObjFuncBuff.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamServerObjFuncHBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamServerMethodByUNameIdxKey.hpp>
#include <cfbam/CFBamServerMethodByMethTableIdxKey.hpp>
#include <cfbam/CFBamServerMethodByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamServerObjFuncByRetTblIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamServerObjFuncObj;

	class ICFBamServerObjFuncTable
	{
	public:
		ICFBamServerObjFuncTable();
		virtual ~ICFBamServerObjFuncTable();

		virtual cfbam::CFBamServerObjFuncBuff* createServerObjFunc( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamServerObjFuncBuff* Buff ) = 0;

		virtual cfbam::CFBamServerObjFuncBuff* updateServerObjFunc( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamServerObjFuncBuff* Buff ) = 0;

		virtual void deleteServerObjFunc( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamServerObjFuncBuff* Buff ) = 0;
		virtual void deleteServerObjFuncByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argRetTenantId,
			const int64_t* argRetTableId ) = 0;

		virtual void deleteServerObjFuncByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamServerObjFuncByRetTblIdxKey* argKey ) = 0;
		virtual void deleteServerObjFuncByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId,
			const std::string& argName ) = 0;

		virtual void deleteServerObjFuncByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamServerMethodByUNameIdxKey* argKey ) = 0;
		virtual void deleteServerObjFuncByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId ) = 0;

		virtual void deleteServerObjFuncByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamServerMethodByMethTableIdxKey* argKey ) = 0;
		virtual void deleteServerObjFuncByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteServerObjFuncByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamServerMethodByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteServerObjFuncByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteServerObjFuncByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey ) = 0;
		virtual void deleteServerObjFuncByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteServerObjFuncByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey ) = 0;

		virtual cfbam::CFBamServerObjFuncBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamServerObjFuncBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamServerObjFuncBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual cfbam::CFBamServerObjFuncBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> readDerivedByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> readDerivedByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RetTenantId,
			const int64_t* RetTableId ) = 0;

		virtual cfbam::CFBamServerObjFuncBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamServerObjFuncBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamServerObjFuncBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual cfbam::CFBamServerObjFuncBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> readBuffByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> readBuffByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RetTenantId,
			const int64_t* RetTableId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
