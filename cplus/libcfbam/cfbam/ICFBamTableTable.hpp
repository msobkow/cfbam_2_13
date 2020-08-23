#pragma once

// Description: C++18 DbIO interface for Table.

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
#include <cfbam/CFBamTableBuff.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamTableHBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamTableBySchemaDefIdxKey.hpp>
#include <cfbam/CFBamTableByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamTableByUNameIdxKey.hpp>
#include <cfbam/CFBamTableBySchemaCdIdxKey.hpp>
#include <cfbam/CFBamTableByPrimaryIndexIdxKey.hpp>
#include <cfbam/CFBamTableByLookupIndexIdxKey.hpp>
#include <cfbam/CFBamTableByAltIndexIdxKey.hpp>
#include <cfbam/CFBamTableByQualTableIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamTableObj;

	class ICFBamTableTable
	{
	public:
		ICFBamTableTable();
		virtual ~ICFBamTableTable();

		virtual cfbam::CFBamTableBuff* createTable( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamTableBuff* Buff ) = 0;

		virtual cfbam::CFBamTableBuff* updateTable( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamTableBuff* Buff ) = 0;

		virtual void deleteTable( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamTableBuff* Buff ) = 0;
		virtual void deleteTableBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaDefId ) = 0;

		virtual void deleteTableBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableBySchemaDefIdxKey* argKey ) = 0;
		virtual void deleteTableByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteTableByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteTableByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaDefId,
			const std::string& argName ) = 0;

		virtual void deleteTableByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableByUNameIdxKey* argKey ) = 0;
		virtual void deleteTableBySchemaCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaDefId,
			const std::string& argTableClassCode ) = 0;

		virtual void deleteTableBySchemaCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableBySchemaCdIdxKey* argKey ) = 0;
		virtual void deleteTableByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrimaryIndexTenantId,
			const int64_t* argPrimaryIndexId ) = 0;

		virtual void deleteTableByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableByPrimaryIndexIdxKey* argKey ) = 0;
		virtual void deleteTableByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argLookupIndexTenantId,
			const int64_t* argLookupIndexId ) = 0;

		virtual void deleteTableByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableByLookupIndexIdxKey* argKey ) = 0;
		virtual void deleteTableByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argAltIndexTenantId,
			const int64_t* argAltIndexId ) = 0;

		virtual void deleteTableByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableByAltIndexIdxKey* argKey ) = 0;
		virtual void deleteTableByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argQualifyingTenantId,
			const int64_t* argQualifyingTableId ) = 0;

		virtual void deleteTableByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableByQualTableIdxKey* argKey ) = 0;
		virtual void deleteTableByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteTableByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey ) = 0;
		virtual void deleteTableByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteTableByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey ) = 0;

		virtual cfbam::CFBamTableBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamTableBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamTableBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual cfbam::CFBamTableBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& Name ) = 0;

		virtual cfbam::CFBamTableBuff* readDerivedBySchemaCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& TableClassCode ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrimaryIndexTenantId,
			const int64_t* PrimaryIndexId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* LookupIndexTenantId,
			const int64_t* LookupIndexId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* AltIndexTenantId,
			const int64_t* AltIndexId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* QualifyingTenantId,
			const int64_t* QualifyingTableId ) = 0;

		virtual cfbam::CFBamTableBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamTableBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamTableBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual cfbam::CFBamTableBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& Name ) = 0;

		virtual cfbam::CFBamTableBuff* readBuffBySchemaCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& TableClassCode ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrimaryIndexTenantId,
			const int64_t* PrimaryIndexId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* LookupIndexTenantId,
			const int64_t* LookupIndexId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* AltIndexTenantId,
			const int64_t* AltIndexId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* QualifyingTenantId,
			const int64_t* QualifyingTableId ) = 0;

		virtual cfbam::CFBamTableBuff* readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfbam::CFBamTableBuff* readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
