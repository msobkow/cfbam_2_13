#pragma once

// Description: C++18 DbIO interface for Param.

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
#include <cfbam/CFBamParamBuff.hpp>
#include <cfbam/CFBamParamPKey.hpp>
#include <cfbam/CFBamParamHBuff.hpp>
#include <cfbam/CFBamParamHPKey.hpp>
#include <cfbam/CFBamParamByUNameIdxKey.hpp>
#include <cfbam/CFBamParamByValTentIdxKey.hpp>
#include <cfbam/CFBamParamByServerMethodIdxKey.hpp>
#include <cfbam/CFBamParamByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamParamByServerTypeIdxKey.hpp>
#include <cfbam/CFBamParamByPrevIdxKey.hpp>
#include <cfbam/CFBamParamByNextIdxKey.hpp>
#include <cfbam/CFBamParamByContPrevIdxKey.hpp>
#include <cfbam/CFBamParamByContNextIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamParamObj;

	class ICFBamParamTable
	{
	public:
		ICFBamParamTable();
		virtual ~ICFBamParamTable();

		virtual cfbam::CFBamParamBuff* createParam( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamParamBuff* Buff ) = 0;

		virtual cfbam::CFBamParamBuff* updateParam( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamParamBuff* Buff ) = 0;

		virtual void deleteParam( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamParamBuff* Buff ) = 0;
		virtual void deleteParamByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteParamByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamPKey* argKey ) = 0;
		virtual void deleteParamByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argServerMethodId,
			const std::string& argName ) = 0;

		virtual void deleteParamByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByUNameIdxKey* argKey ) = 0;
		virtual void deleteParamByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteParamByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByValTentIdxKey* argKey ) = 0;
		virtual void deleteParamByServerMethodIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argServerMethodId ) = 0;

		virtual void deleteParamByServerMethodIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByServerMethodIdxKey* argKey ) = 0;
		virtual void deleteParamByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteParamByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteParamByServerTypeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argTypeTenantId,
			const int64_t* argTypeId ) = 0;

		virtual void deleteParamByServerTypeIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByServerTypeIdxKey* argKey ) = 0;
		virtual void deleteParamByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId ) = 0;

		virtual void deleteParamByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByPrevIdxKey* argKey ) = 0;
		virtual void deleteParamByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId ) = 0;

		virtual void deleteParamByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByNextIdxKey* argKey ) = 0;
		virtual void deleteParamByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argServerMethodId,
			const int64_t* argPrevId ) = 0;

		virtual void deleteParamByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByContPrevIdxKey* argKey ) = 0;
		virtual void deleteParamByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argServerMethodId,
			const int64_t* argNextId ) = 0;

		virtual void deleteParamByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByContNextIdxKey* argKey ) = 0;

		virtual cfbam::CFBamParamBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamPKey* PKey ) = 0;

		virtual cfbam::CFBamParamBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamParamBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual cfbam::CFBamParamBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByServerMethodIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByServerTypeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* TypeTenantId,
			const int64_t* TypeId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* NextId ) = 0;

		virtual cfbam::CFBamParamBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamPKey* PKey ) = 0;

		virtual cfbam::CFBamParamBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamParamBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual cfbam::CFBamParamBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByServerMethodIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByServerTypeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* TypeTenantId,
			const int64_t* TypeId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* NextId ) = 0;

		virtual cfbam::CFBamParamBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual cfbam::CFBamParamBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
