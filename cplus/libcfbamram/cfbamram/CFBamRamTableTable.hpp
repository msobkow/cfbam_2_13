#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for Table.

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
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamsaxloader/CFBamSaxLoader.hpp>

namespace cfbam {

	class CFBamRamTableTable
	: public virtual cfbam::ICFBamTableTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>* dictByPKey;
		std::map<cfbam::CFBamTableBySchemaDefIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>*>* dictBySchemaDefIdx;
		std::map<cfbam::CFBamTableByDefSchemaIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>*>* dictByDefSchemaIdx;
		std::map<cfbam::CFBamTableByUNameIdxKey,
			cfbam::CFBamTableBuff*>* dictByUNameIdx;
		std::map<cfbam::CFBamTableBySchemaCdIdxKey,
			cfbam::CFBamTableBuff*>* dictBySchemaCdIdx;
		std::map<cfbam::CFBamTableByPrimaryIndexIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>*>* dictByPrimaryIndexIdx;
		std::map<cfbam::CFBamTableByLookupIndexIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>*>* dictByLookupIndexIdx;
		std::map<cfbam::CFBamTableByAltIndexIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>*>* dictByAltIndexIdx;
		std::map<cfbam::CFBamTableByQualTableIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>*>* dictByQualTableIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamTableTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamTableTable();

		virtual cfbam::CFBamTableBuff* createTable( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamTableBuff* Buff );

		virtual cfbam::CFBamTableBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamTableBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual cfbam::CFBamTableBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& Name );

		virtual cfbam::CFBamTableBuff* readDerivedBySchemaCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& TableClassCode );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrimaryIndexTenantId,
			const int64_t* PrimaryIndexId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* LookupIndexTenantId,
			const int64_t* LookupIndexId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* AltIndexTenantId,
			const int64_t* AltIndexId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readDerivedByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* QualifyingTenantId,
			const int64_t* QualifyingTableId );

		virtual cfbam::CFBamTableBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamTableBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamTableBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamTableBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual cfbam::CFBamTableBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& Name );

		virtual cfbam::CFBamTableBuff* readBuffBySchemaCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& TableClassCode );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrimaryIndexTenantId,
			const int64_t* PrimaryIndexId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* LookupIndexTenantId,
			const int64_t* LookupIndexId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* AltIndexTenantId,
			const int64_t* AltIndexId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> readBuffByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* QualifyingTenantId,
			const int64_t* QualifyingTableId );

		virtual cfbam::CFBamTableBuff* readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId, const std::string& Name,
			bool forceRead = false );

		virtual cfbam::CFBamTableBuff* readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId, const std::string& Name,
			bool forceRead = false );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> pageBuffBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> pageBuffByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrimaryIndexTenantId,
			const int64_t* PrimaryIndexId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> pageBuffByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* LookupIndexTenantId,
			const int64_t* LookupIndexId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> pageBuffByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* AltIndexTenantId,
			const int64_t* AltIndexId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamTableBuff*> pageBuffByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* QualifyingTenantId,
			const int64_t* QualifyingTableId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamTableBuff* updateTable( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamTableBuff* Buff );

		virtual void deleteTable( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamTableBuff* Buff );
		virtual void deleteTableBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaDefId );

		virtual void deleteTableBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableBySchemaDefIdxKey* argKey );

		virtual void deleteTableByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteTableByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableByDefSchemaIdxKey* argKey );

		virtual void deleteTableByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaDefId,
			const std::string& argName );

		virtual void deleteTableByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableByUNameIdxKey* argKey );

		virtual void deleteTableBySchemaCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaDefId,
			const std::string& argTableClassCode );

		virtual void deleteTableBySchemaCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableBySchemaCdIdxKey* argKey );

		virtual void deleteTableByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrimaryIndexTenantId,
			const int64_t* argPrimaryIndexId );

		virtual void deleteTableByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableByPrimaryIndexIdxKey* argKey );

		virtual void deleteTableByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argLookupIndexTenantId,
			const int64_t* argLookupIndexId );

		virtual void deleteTableByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableByLookupIndexIdxKey* argKey );

		virtual void deleteTableByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argAltIndexTenantId,
			const int64_t* argAltIndexId );

		virtual void deleteTableByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableByAltIndexIdxKey* argKey );

		virtual void deleteTableByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argQualifyingTenantId,
			const int64_t* argQualifyingTableId );

		virtual void deleteTableByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamTableByQualTableIdxKey* argKey );

		virtual void deleteTableByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteTableByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteTableByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteTableByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
