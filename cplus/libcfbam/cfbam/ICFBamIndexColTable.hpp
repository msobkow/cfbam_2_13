#pragma once

// Description: C++18 DbIO interface for IndexCol.

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
#include <cfbam/CFBamIndexColBuff.hpp>
#include <cfbam/CFBamIndexColPKey.hpp>
#include <cfbam/CFBamIndexColHBuff.hpp>
#include <cfbam/CFBamIndexColHPKey.hpp>
#include <cfbam/CFBamIndexColByUNameIdxKey.hpp>
#include <cfbam/CFBamIndexColByIdxColTenantIdxKey.hpp>
#include <cfbam/CFBamIndexColByIndexIdxKey.hpp>
#include <cfbam/CFBamIndexColByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamIndexColByColIdxKey.hpp>
#include <cfbam/CFBamIndexColByPrevIdxKey.hpp>
#include <cfbam/CFBamIndexColByNextIdxKey.hpp>
#include <cfbam/CFBamIndexColByIdxPrevIdxKey.hpp>
#include <cfbam/CFBamIndexColByIdxNextIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamIndexColObj;

	class ICFBamIndexColTable
	{
	public:
		ICFBamIndexColTable();
		virtual ~ICFBamIndexColTable();

		virtual cfbam::CFBamIndexColBuff* createIndexCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamIndexColBuff* Buff ) = 0;

		virtual cfbam::CFBamIndexColBuff* updateIndexCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamIndexColBuff* Buff ) = 0;

		virtual void deleteIndexCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamIndexColBuff* Buff ) = 0;
		virtual void deleteIndexColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteIndexColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColPKey* argKey ) = 0;
		virtual void deleteIndexColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argIndexId,
			const std::string& argName ) = 0;

		virtual void deleteIndexColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByUNameIdxKey* argKey ) = 0;
		virtual void deleteIndexColByIdxColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteIndexColByIdxColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByIdxColTenantIdxKey* argKey ) = 0;
		virtual void deleteIndexColByIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argIndexId ) = 0;

		virtual void deleteIndexColByIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByIndexIdxKey* argKey ) = 0;
		virtual void deleteIndexColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteIndexColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteIndexColByColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argColumnId ) = 0;

		virtual void deleteIndexColByColIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByColIdxKey* argKey ) = 0;
		virtual void deleteIndexColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId ) = 0;

		virtual void deleteIndexColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByPrevIdxKey* argKey ) = 0;
		virtual void deleteIndexColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId ) = 0;

		virtual void deleteIndexColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByNextIdxKey* argKey ) = 0;
		virtual void deleteIndexColByIdxPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argIndexId,
			const int64_t* argPrevId ) = 0;

		virtual void deleteIndexColByIdxPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByIdxPrevIdxKey* argKey ) = 0;
		virtual void deleteIndexColByIdxNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argIndexId,
			const int64_t* argNextId ) = 0;

		virtual void deleteIndexColByIdxNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByIdxNextIdxKey* argKey ) = 0;

		virtual cfbam::CFBamIndexColBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColPKey* PKey ) = 0;

		virtual cfbam::CFBamIndexColBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamIndexColBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual cfbam::CFBamIndexColBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByIdxColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ColumnId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByIdxPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByIdxNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* NextId ) = 0;

		virtual cfbam::CFBamIndexColBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColPKey* PKey ) = 0;

		virtual cfbam::CFBamIndexColBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamIndexColBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual cfbam::CFBamIndexColBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByIdxColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ColumnId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByIdxPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByIdxNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* NextId ) = 0;

		virtual cfbam::CFBamIndexColBuff* readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfbam::CFBamIndexColBuff* readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfbam::CFBamIndexColBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual cfbam::CFBamIndexColBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
