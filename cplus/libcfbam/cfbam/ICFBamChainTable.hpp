#pragma once

// Description: C++18 DbIO interface for Chain.

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
#include <cfbam/CFBamChainBuff.hpp>
#include <cfbam/CFBamChainPKey.hpp>
#include <cfbam/CFBamChainHBuff.hpp>
#include <cfbam/CFBamChainHPKey.hpp>
#include <cfbam/CFBamChainByTenantIdxKey.hpp>
#include <cfbam/CFBamChainByChainTableIdxKey.hpp>
#include <cfbam/CFBamChainByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamChainByUNameIdxKey.hpp>
#include <cfbam/CFBamChainByPrevRelIdxKey.hpp>
#include <cfbam/CFBamChainByNextRelIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamChainObj;

	class ICFBamChainTable
	{
	public:
		ICFBamChainTable();
		virtual ~ICFBamChainTable();

		virtual cfbam::CFBamChainBuff* createChain( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamChainBuff* Buff ) = 0;

		virtual cfbam::CFBamChainBuff* updateChain( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamChainBuff* Buff ) = 0;

		virtual void deleteChain( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamChainBuff* Buff ) = 0;
		virtual void deleteChainByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteChainByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainPKey* argKey ) = 0;
		virtual void deleteChainByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteChainByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainByTenantIdxKey* argKey ) = 0;
		virtual void deleteChainByChainTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId ) = 0;

		virtual void deleteChainByChainTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainByChainTableIdxKey* argKey ) = 0;
		virtual void deleteChainByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteChainByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteChainByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId,
			const std::string& argName ) = 0;

		virtual void deleteChainByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainByUNameIdxKey* argKey ) = 0;
		virtual void deleteChainByPrevRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPrevRelationTenantId,
			const int64_t argPrevRelationId ) = 0;

		virtual void deleteChainByPrevRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainByPrevRelIdxKey* argKey ) = 0;
		virtual void deleteChainByNextRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argNextRelationTenantId,
			const int64_t argNextRelationId ) = 0;

		virtual void deleteChainByNextRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainByNextRelIdxKey* argKey ) = 0;

		virtual cfbam::CFBamChainBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainPKey* PKey ) = 0;

		virtual cfbam::CFBamChainBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamChainBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readDerivedByChainTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual cfbam::CFBamChainBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readDerivedByPrevRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PrevRelationTenantId,
			const int64_t PrevRelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readDerivedByNextRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t NextRelationTenantId,
			const int64_t NextRelationId ) = 0;

		virtual cfbam::CFBamChainBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainPKey* PKey ) = 0;

		virtual cfbam::CFBamChainBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamChainBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readBuffByChainTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual cfbam::CFBamChainBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readBuffByPrevRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PrevRelationTenantId,
			const int64_t PrevRelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readBuffByNextRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t NextRelationTenantId,
			const int64_t NextRelationId ) = 0;

		virtual cfbam::CFBamChainBuff* readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfbam::CFBamChainBuff* readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
