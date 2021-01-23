#pragma once

// Description: C++18 DbIO interface for RelationCol.

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
#include <cfbam/CFBamRelationColBuff.hpp>
#include <cfbam/CFBamRelationColPKey.hpp>
#include <cfbam/CFBamRelationColHBuff.hpp>
#include <cfbam/CFBamRelationColHPKey.hpp>
#include <cfbam/CFBamRelationColByUNameIdxKey.hpp>
#include <cfbam/CFBamRelationColByRelColTenantIdxKey.hpp>
#include <cfbam/CFBamRelationColByRelationIdxKey.hpp>
#include <cfbam/CFBamRelationColByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamRelationColByFromColIdxKey.hpp>
#include <cfbam/CFBamRelationColByToColIdxKey.hpp>
#include <cfbam/CFBamRelationColByPrevIdxKey.hpp>
#include <cfbam/CFBamRelationColByNextIdxKey.hpp>
#include <cfbam/CFBamRelationColByRelPrevIdxKey.hpp>
#include <cfbam/CFBamRelationColByRelNextIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamRelationColObj;

	class ICFBamRelationColTable
	{
	public:
		ICFBamRelationColTable();
		virtual ~ICFBamRelationColTable();

		virtual cfbam::CFBamRelationColBuff* createRelationCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamRelationColBuff* Buff ) = 0;

		virtual cfbam::CFBamRelationColBuff* updateRelationCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamRelationColBuff* Buff ) = 0;

		virtual void deleteRelationCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamRelationColBuff* Buff ) = 0;
		virtual void deleteRelationColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteRelationColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColPKey* argKey ) = 0;
		virtual void deleteRelationColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId,
			const std::string& argName ) = 0;

		virtual void deleteRelationColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByUNameIdxKey* argKey ) = 0;
		virtual void deleteRelationColByRelColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteRelationColByRelColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByRelColTenantIdxKey* argKey ) = 0;
		virtual void deleteRelationColByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId ) = 0;

		virtual void deleteRelationColByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByRelationIdxKey* argKey ) = 0;
		virtual void deleteRelationColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteRelationColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteRelationColByFromColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argFromColId ) = 0;

		virtual void deleteRelationColByFromColIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByFromColIdxKey* argKey ) = 0;
		virtual void deleteRelationColByToColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argToColId ) = 0;

		virtual void deleteRelationColByToColIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByToColIdxKey* argKey ) = 0;
		virtual void deleteRelationColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId ) = 0;

		virtual void deleteRelationColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByPrevIdxKey* argKey ) = 0;
		virtual void deleteRelationColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId ) = 0;

		virtual void deleteRelationColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByNextIdxKey* argKey ) = 0;
		virtual void deleteRelationColByRelPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId,
			const int64_t* argPrevId ) = 0;

		virtual void deleteRelationColByRelPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByRelPrevIdxKey* argKey ) = 0;
		virtual void deleteRelationColByRelNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId,
			const int64_t* argNextId ) = 0;

		virtual void deleteRelationColByRelNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByRelNextIdxKey* argKey ) = 0;

		virtual cfbam::CFBamRelationColBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColPKey* PKey ) = 0;

		virtual cfbam::CFBamRelationColBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamRelationColBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual cfbam::CFBamRelationColBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByRelColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByFromColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromColId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByToColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToColId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByRelPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByRelNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* NextId ) = 0;

		virtual cfbam::CFBamRelationColBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColPKey* PKey ) = 0;

		virtual cfbam::CFBamRelationColBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamRelationColBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual cfbam::CFBamRelationColBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByRelColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByFromColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromColId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByToColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToColId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByRelPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByRelNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* NextId ) = 0;

		virtual cfbam::CFBamRelationColBuff* readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfbam::CFBamRelationColBuff* readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfbam::CFBamRelationColBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual cfbam::CFBamRelationColBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
