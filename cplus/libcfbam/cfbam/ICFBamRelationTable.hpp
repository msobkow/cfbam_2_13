#pragma once

// Description: C++18 DbIO interface for Relation.

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
#include <cfbam/CFBamRelationBuff.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamRelationHBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamRelationByUNameIdxKey.hpp>
#include <cfbam/CFBamRelationByRelnTenantIdxKey.hpp>
#include <cfbam/CFBamRelationByRelTableIdxKey.hpp>
#include <cfbam/CFBamRelationByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamRelationByFromKeyIdxKey.hpp>
#include <cfbam/CFBamRelationByToTblIdxKey.hpp>
#include <cfbam/CFBamRelationByToKeyIdxKey.hpp>
#include <cfbam/CFBamRelationByNarrowedIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamRelationObj;

	class ICFBamRelationTable
	{
	public:
		ICFBamRelationTable();
		virtual ~ICFBamRelationTable();

		virtual cfbam::CFBamRelationBuff* createRelation( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamRelationBuff* Buff ) = 0;

		virtual cfbam::CFBamRelationBuff* updateRelation( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamRelationBuff* Buff ) = 0;

		virtual void deleteRelation( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamRelationBuff* Buff ) = 0;
		virtual void deleteRelationByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId,
			const std::string& argName ) = 0;

		virtual void deleteRelationByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByUNameIdxKey* argKey ) = 0;
		virtual void deleteRelationByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteRelationByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByRelnTenantIdxKey* argKey ) = 0;
		virtual void deleteRelationByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId ) = 0;

		virtual void deleteRelationByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByRelTableIdxKey* argKey ) = 0;
		virtual void deleteRelationByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteRelationByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteRelationByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argFromIndexId ) = 0;

		virtual void deleteRelationByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByFromKeyIdxKey* argKey ) = 0;
		virtual void deleteRelationByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argToTableId ) = 0;

		virtual void deleteRelationByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByToTblIdxKey* argKey ) = 0;
		virtual void deleteRelationByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argToIndexId ) = 0;

		virtual void deleteRelationByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByToKeyIdxKey* argKey ) = 0;
		virtual void deleteRelationByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNarrowedTenantId,
			const int64_t* argNarrowedId ) = 0;

		virtual void deleteRelationByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByNarrowedIdxKey* argKey ) = 0;
		virtual void deleteRelationByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteRelationByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey ) = 0;
		virtual void deleteRelationByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteRelationByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey ) = 0;

		virtual cfbam::CFBamRelationBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamRelationBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamRelationBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual cfbam::CFBamRelationBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromIndexId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToTableId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToIndexId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NarrowedTenantId,
			const int64_t* NarrowedId ) = 0;

		virtual cfbam::CFBamRelationBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamRelationBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamRelationBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual cfbam::CFBamRelationBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromIndexId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToTableId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToIndexId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NarrowedTenantId,
			const int64_t* NarrowedId ) = 0;

		virtual cfbam::CFBamRelationBuff* readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfbam::CFBamRelationBuff* readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
