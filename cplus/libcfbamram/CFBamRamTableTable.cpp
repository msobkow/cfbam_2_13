
// Description: C++18 Implementation for an in-memory RAM DbIO for Table.

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
#include <cfbamram/CFBamRamAtomTable.hpp>
#include <cfbamram/CFBamRamBlobColTable.hpp>
#include <cfbamram/CFBamRamBlobDefTable.hpp>
#include <cfbamram/CFBamRamBlobTypeTable.hpp>
#include <cfbamram/CFBamRamBoolColTable.hpp>
#include <cfbamram/CFBamRamBoolDefTable.hpp>
#include <cfbamram/CFBamRamBoolTypeTable.hpp>
#include <cfbamram/CFBamRamChainTable.hpp>
#include <cfbamram/CFBamRamClearDepTable.hpp>
#include <cfbamram/CFBamRamClearSubDep1Table.hpp>
#include <cfbamram/CFBamRamClearSubDep2Table.hpp>
#include <cfbamram/CFBamRamClearSubDep3Table.hpp>
#include <cfbamram/CFBamRamClearTopDepTable.hpp>
#include <cfbamram/CFBamRamClusterTable.hpp>
#include <cfbamram/CFBamRamDateColTable.hpp>
#include <cfbamram/CFBamRamDateDefTable.hpp>
#include <cfbamram/CFBamRamDateTypeTable.hpp>
#include <cfbamram/CFBamRamDelDepTable.hpp>
#include <cfbamram/CFBamRamDelSubDep1Table.hpp>
#include <cfbamram/CFBamRamDelSubDep2Table.hpp>
#include <cfbamram/CFBamRamDelSubDep3Table.hpp>
#include <cfbamram/CFBamRamDelTopDepTable.hpp>
#include <cfbamram/CFBamRamDoubleColTable.hpp>
#include <cfbamram/CFBamRamDoubleDefTable.hpp>
#include <cfbamram/CFBamRamDoubleTypeTable.hpp>
#include <cfbamram/CFBamRamEnumDefTable.hpp>
#include <cfbamram/CFBamRamEnumTagTable.hpp>
#include <cfbamram/CFBamRamEnumTypeTable.hpp>
#include <cfbamram/CFBamRamFloatColTable.hpp>
#include <cfbamram/CFBamRamFloatDefTable.hpp>
#include <cfbamram/CFBamRamFloatTypeTable.hpp>
#include <cfbamram/CFBamRamHostNodeTable.hpp>
#include <cfbamram/CFBamRamISOCcyTable.hpp>
#include <cfbamram/CFBamRamISOCtryTable.hpp>
#include <cfbamram/CFBamRamISOCtryCcyTable.hpp>
#include <cfbamram/CFBamRamISOCtryLangTable.hpp>
#include <cfbamram/CFBamRamISOLangTable.hpp>
#include <cfbamram/CFBamRamISOTZoneTable.hpp>
#include <cfbamram/CFBamRamId16GenTable.hpp>
#include <cfbamram/CFBamRamId32GenTable.hpp>
#include <cfbamram/CFBamRamId64GenTable.hpp>
#include <cfbamram/CFBamRamIndexTable.hpp>
#include <cfbamram/CFBamRamIndexColTable.hpp>
#include <cfbamram/CFBamRamInt16ColTable.hpp>
#include <cfbamram/CFBamRamInt16DefTable.hpp>
#include <cfbamram/CFBamRamInt16TypeTable.hpp>
#include <cfbamram/CFBamRamInt32ColTable.hpp>
#include <cfbamram/CFBamRamInt32DefTable.hpp>
#include <cfbamram/CFBamRamInt32TypeTable.hpp>
#include <cfbamram/CFBamRamInt64ColTable.hpp>
#include <cfbamram/CFBamRamInt64DefTable.hpp>
#include <cfbamram/CFBamRamInt64TypeTable.hpp>
#include <cfbamram/CFBamRamLicenseTable.hpp>
#include <cfbamram/CFBamRamMajorVersionTable.hpp>
#include <cfbamram/CFBamRamMimeTypeTable.hpp>
#include <cfbamram/CFBamRamMinorVersionTable.hpp>
#include <cfbamram/CFBamRamNmTokenColTable.hpp>
#include <cfbamram/CFBamRamNmTokenDefTable.hpp>
#include <cfbamram/CFBamRamNmTokenTypeTable.hpp>
#include <cfbamram/CFBamRamNmTokensColTable.hpp>
#include <cfbamram/CFBamRamNmTokensDefTable.hpp>
#include <cfbamram/CFBamRamNmTokensTypeTable.hpp>
#include <cfbamram/CFBamRamNumberColTable.hpp>
#include <cfbamram/CFBamRamNumberDefTable.hpp>
#include <cfbamram/CFBamRamNumberTypeTable.hpp>
#include <cfbamram/CFBamRamParamTable.hpp>
#include <cfbamram/CFBamRamPopDepTable.hpp>
#include <cfbamram/CFBamRamPopSubDep1Table.hpp>
#include <cfbamram/CFBamRamPopSubDep2Table.hpp>
#include <cfbamram/CFBamRamPopSubDep3Table.hpp>
#include <cfbamram/CFBamRamPopTopDepTable.hpp>
#include <cfbamram/CFBamRamRelationTable.hpp>
#include <cfbamram/CFBamRamRelationColTable.hpp>
#include <cfbamram/CFBamRamSchemaDefTable.hpp>
#include <cfbamram/CFBamRamSchemaRefTable.hpp>
#include <cfbamram/CFBamRamScopeTable.hpp>
#include <cfbamram/CFBamRamSecAppTable.hpp>
#include <cfbamram/CFBamRamSecDeviceTable.hpp>
#include <cfbamram/CFBamRamSecFormTable.hpp>
#include <cfbamram/CFBamRamSecGroupTable.hpp>
#include <cfbamram/CFBamRamSecGroupFormTable.hpp>
#include <cfbamram/CFBamRamSecGrpIncTable.hpp>
#include <cfbamram/CFBamRamSecGrpMembTable.hpp>
#include <cfbamram/CFBamRamSecSessionTable.hpp>
#include <cfbamram/CFBamRamSecUserTable.hpp>
#include <cfbamram/CFBamRamServerListFuncTable.hpp>
#include <cfbamram/CFBamRamServerMethodTable.hpp>
#include <cfbamram/CFBamRamServerObjFuncTable.hpp>
#include <cfbamram/CFBamRamServerProcTable.hpp>
#include <cfbamram/CFBamRamServiceTable.hpp>
#include <cfbamram/CFBamRamServiceTypeTable.hpp>
#include <cfbamram/CFBamRamStringColTable.hpp>
#include <cfbamram/CFBamRamStringDefTable.hpp>
#include <cfbamram/CFBamRamStringTypeTable.hpp>
#include <cfbamram/CFBamRamSubProjectTable.hpp>
#include <cfbamram/CFBamRamSysClusterTable.hpp>
#include <cfbamram/CFBamRamTSecGroupTable.hpp>
#include <cfbamram/CFBamRamTSecGrpIncTable.hpp>
#include <cfbamram/CFBamRamTSecGrpMembTable.hpp>
#include <cfbamram/CFBamRamTZDateColTable.hpp>
#include <cfbamram/CFBamRamTZDateDefTable.hpp>
#include <cfbamram/CFBamRamTZDateTypeTable.hpp>
#include <cfbamram/CFBamRamTZTimeColTable.hpp>
#include <cfbamram/CFBamRamTZTimeDefTable.hpp>
#include <cfbamram/CFBamRamTZTimeTypeTable.hpp>
#include <cfbamram/CFBamRamTZTimestampColTable.hpp>
#include <cfbamram/CFBamRamTZTimestampDefTable.hpp>
#include <cfbamram/CFBamRamTZTimestampTypeTable.hpp>
#include <cfbamram/CFBamRamTableTable.hpp>
#include <cfbamram/CFBamRamTableColTable.hpp>
#include <cfbamram/CFBamRamTenantTable.hpp>
#include <cfbamram/CFBamRamTextColTable.hpp>
#include <cfbamram/CFBamRamTextDefTable.hpp>
#include <cfbamram/CFBamRamTextTypeTable.hpp>
#include <cfbamram/CFBamRamTimeColTable.hpp>
#include <cfbamram/CFBamRamTimeDefTable.hpp>
#include <cfbamram/CFBamRamTimeTypeTable.hpp>
#include <cfbamram/CFBamRamTimestampColTable.hpp>
#include <cfbamram/CFBamRamTimestampDefTable.hpp>
#include <cfbamram/CFBamRamTimestampTypeTable.hpp>
#include <cfbamram/CFBamRamTldTable.hpp>
#include <cfbamram/CFBamRamTokenColTable.hpp>
#include <cfbamram/CFBamRamTokenDefTable.hpp>
#include <cfbamram/CFBamRamTokenTypeTable.hpp>
#include <cfbamram/CFBamRamTopDomainTable.hpp>
#include <cfbamram/CFBamRamTopProjectTable.hpp>
#include <cfbamram/CFBamRamUInt16ColTable.hpp>
#include <cfbamram/CFBamRamUInt16DefTable.hpp>
#include <cfbamram/CFBamRamUInt16TypeTable.hpp>
#include <cfbamram/CFBamRamUInt32ColTable.hpp>
#include <cfbamram/CFBamRamUInt32DefTable.hpp>
#include <cfbamram/CFBamRamUInt32TypeTable.hpp>
#include <cfbamram/CFBamRamUInt64ColTable.hpp>
#include <cfbamram/CFBamRamUInt64DefTable.hpp>
#include <cfbamram/CFBamRamUInt64TypeTable.hpp>
#include <cfbamram/CFBamRamURLProtocolTable.hpp>
#include <cfbamram/CFBamRamUuidColTable.hpp>
#include <cfbamram/CFBamRamUuidDefTable.hpp>
#include <cfbamram/CFBamRamUuidGenTable.hpp>
#include <cfbamram/CFBamRamUuidTypeTable.hpp>
#include <cfbamram/CFBamRamValueTable.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamRamTableTable::CLASS_NAME( "CFBamRamTableTable" );

	CFBamRamTableTable::CFBamRamTableTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamTableTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
		dictBySchemaDefIdx = new std::map<cfbam::CFBamTableBySchemaDefIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>*>();
		dictByDefSchemaIdx = new std::map<cfbam::CFBamTableByDefSchemaIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>*>();
		dictByUNameIdx = new std::map<cfbam::CFBamTableByUNameIdxKey, cfbam::CFBamTableBuff*>();
		dictBySchemaCdIdx = new std::map<cfbam::CFBamTableBySchemaCdIdxKey, cfbam::CFBamTableBuff*>();
		dictByPrimaryIndexIdx = new std::map<cfbam::CFBamTableByPrimaryIndexIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>*>();
		dictByLookupIndexIdx = new std::map<cfbam::CFBamTableByLookupIndexIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>*>();
		dictByAltIndexIdx = new std::map<cfbam::CFBamTableByAltIndexIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>*>();
		dictByQualTableIdx = new std::map<cfbam::CFBamTableByQualTableIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>*>();
	}

	CFBamRamTableTable::~CFBamRamTableTable() {
		if( dictBySchemaDefIdx != NULL ) {
			for( auto iterDict = dictBySchemaDefIdx->begin(); iterDict != dictBySchemaDefIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictBySchemaDefIdx;
			dictBySchemaDefIdx = NULL;
		}
		if( dictByDefSchemaIdx != NULL ) {
			for( auto iterDict = dictByDefSchemaIdx->begin(); iterDict != dictByDefSchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDefSchemaIdx;
			dictByDefSchemaIdx = NULL;
		}
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictBySchemaCdIdx != NULL ) {
			delete dictBySchemaCdIdx;
			dictBySchemaCdIdx = NULL;
		}
		if( dictByPrimaryIndexIdx != NULL ) {
			for( auto iterDict = dictByPrimaryIndexIdx->begin(); iterDict != dictByPrimaryIndexIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByPrimaryIndexIdx;
			dictByPrimaryIndexIdx = NULL;
		}
		if( dictByLookupIndexIdx != NULL ) {
			for( auto iterDict = dictByLookupIndexIdx->begin(); iterDict != dictByLookupIndexIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByLookupIndexIdx;
			dictByLookupIndexIdx = NULL;
		}
		if( dictByAltIndexIdx != NULL ) {
			for( auto iterDict = dictByAltIndexIdx->begin(); iterDict != dictByAltIndexIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByAltIndexIdx;
			dictByAltIndexIdx = NULL;
		}
		if( dictByQualTableIdx != NULL ) {
			for( auto iterDict = dictByQualTableIdx->begin(); iterDict != dictByQualTableIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByQualTableIdx;
			dictByQualTableIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::createTable( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamTableBuff* Buff )
	{
		static const std::string S_ProcName( "createTable" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamTableBySchemaDefIdxKey keySchemaDefIdx;
		keySchemaDefIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keySchemaDefIdx.setRequiredSchemaDefId( Buff->getRequiredSchemaDefId() );
		cfbam::CFBamTableByDefSchemaIdxKey keyDefSchemaIdx;
		if( Buff->isOptionalDefSchemaTenantIdNull() ) {
			keyDefSchemaIdx.setOptionalDefSchemaTenantIdNull();
		}
		else {
			keyDefSchemaIdx.setOptionalDefSchemaTenantIdValue( Buff->getOptionalDefSchemaTenantIdValue() );
		}
		if( Buff->isOptionalDefSchemaIdNull() ) {
			keyDefSchemaIdx.setOptionalDefSchemaIdNull();
		}
		else {
			keyDefSchemaIdx.setOptionalDefSchemaIdValue( Buff->getOptionalDefSchemaIdValue() );
		}
		cfbam::CFBamTableByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUNameIdx.setRequiredSchemaDefId( Buff->getRequiredSchemaDefId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamTableBySchemaCdIdxKey keySchemaCdIdx;
		keySchemaCdIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keySchemaCdIdx.setRequiredSchemaDefId( Buff->getRequiredSchemaDefId() );
		keySchemaCdIdx.setRequiredTableClassCode( Buff->getRequiredTableClassCode() );
		cfbam::CFBamTableByPrimaryIndexIdxKey keyPrimaryIndexIdx;
		if( Buff->isOptionalPrimaryIndexTenantIdNull() ) {
			keyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdNull();
		}
		else {
			keyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdValue( Buff->getOptionalPrimaryIndexTenantIdValue() );
		}
		if( Buff->isOptionalPrimaryIndexIdNull() ) {
			keyPrimaryIndexIdx.setOptionalPrimaryIndexIdNull();
		}
		else {
			keyPrimaryIndexIdx.setOptionalPrimaryIndexIdValue( Buff->getOptionalPrimaryIndexIdValue() );
		}
		cfbam::CFBamTableByLookupIndexIdxKey keyLookupIndexIdx;
		if( Buff->isOptionalLookupIndexTenantIdNull() ) {
			keyLookupIndexIdx.setOptionalLookupIndexTenantIdNull();
		}
		else {
			keyLookupIndexIdx.setOptionalLookupIndexTenantIdValue( Buff->getOptionalLookupIndexTenantIdValue() );
		}
		if( Buff->isOptionalLookupIndexIdNull() ) {
			keyLookupIndexIdx.setOptionalLookupIndexIdNull();
		}
		else {
			keyLookupIndexIdx.setOptionalLookupIndexIdValue( Buff->getOptionalLookupIndexIdValue() );
		}
		cfbam::CFBamTableByAltIndexIdxKey keyAltIndexIdx;
		if( Buff->isOptionalAltIndexTenantIdNull() ) {
			keyAltIndexIdx.setOptionalAltIndexTenantIdNull();
		}
		else {
			keyAltIndexIdx.setOptionalAltIndexTenantIdValue( Buff->getOptionalAltIndexTenantIdValue() );
		}
		if( Buff->isOptionalAltIndexIdNull() ) {
			keyAltIndexIdx.setOptionalAltIndexIdNull();
		}
		else {
			keyAltIndexIdx.setOptionalAltIndexIdValue( Buff->getOptionalAltIndexIdValue() );
		}
		cfbam::CFBamTableByQualTableIdxKey keyQualTableIdx;
		if( Buff->isOptionalQualifyingTenantIdNull() ) {
			keyQualTableIdx.setOptionalQualifyingTenantIdNull();
		}
		else {
			keyQualTableIdx.setOptionalQualifyingTenantIdValue( Buff->getOptionalQualifyingTenantIdValue() );
		}
		if( Buff->isOptionalQualifyingTableIdNull() ) {
			keyQualTableIdx.setOptionalQualifyingTableIdNull();
		}
		else {
			keyQualTableIdx.setOptionalQualifyingTableIdValue( Buff->getOptionalQualifyingTableIdValue() );
		}
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index TableUNameIdx " + keyUNameIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		auto searchDictBySchemaCdIdx = dictBySchemaCdIdx->find( keySchemaCdIdx );
		if( searchDictBySchemaCdIdx != dictBySchemaCdIdx->end() ) {
			std::string Msg( "Duplicate key detected for index TableSchemaCodeIdx " + keySchemaCdIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		{
			bool allNull = true;
			allNull = false;
			allNull = false;
			if( ! allNull ) {
				cfbam::CFBamSchemaDefBuff* chk = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredSchemaDefId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship SchemaDef to table SchemaDef" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamTableBuff* buff = dynamic_cast<cfbam::CFBamTableBuff*>( schema->getTableScope()->createScope( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>* subdictSchemaDefIdx;
		auto searchDictBySchemaDefIdx = dictBySchemaDefIdx->find( keySchemaDefIdx );
		if( searchDictBySchemaDefIdx != dictBySchemaDefIdx->end() ) {
			subdictSchemaDefIdx = searchDictBySchemaDefIdx->second;
		}
		else {
			subdictSchemaDefIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
			dictBySchemaDefIdx->insert( std::map<cfbam::CFBamTableBySchemaDefIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamTableBuff*>*>::value_type( keySchemaDefIdx, subdictSchemaDefIdx ) );
		}
		subdictSchemaDefIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamTableByDefSchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamTableBuff*>*>::value_type( keyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamTableByUNameIdxKey, cfbam::CFBamTableBuff*>::value_type( keyUNameIdx, buff ) );

		dictBySchemaCdIdx->insert( std::map<cfbam::CFBamTableBySchemaCdIdxKey, cfbam::CFBamTableBuff*>::value_type( keySchemaCdIdx, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>* subdictPrimaryIndexIdx;
		auto searchDictByPrimaryIndexIdx = dictByPrimaryIndexIdx->find( keyPrimaryIndexIdx );
		if( searchDictByPrimaryIndexIdx != dictByPrimaryIndexIdx->end() ) {
			subdictPrimaryIndexIdx = searchDictByPrimaryIndexIdx->second;
		}
		else {
			subdictPrimaryIndexIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
			dictByPrimaryIndexIdx->insert( std::map<cfbam::CFBamTableByPrimaryIndexIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamTableBuff*>*>::value_type( keyPrimaryIndexIdx, subdictPrimaryIndexIdx ) );
		}
		subdictPrimaryIndexIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>* subdictLookupIndexIdx;
		auto searchDictByLookupIndexIdx = dictByLookupIndexIdx->find( keyLookupIndexIdx );
		if( searchDictByLookupIndexIdx != dictByLookupIndexIdx->end() ) {
			subdictLookupIndexIdx = searchDictByLookupIndexIdx->second;
		}
		else {
			subdictLookupIndexIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
			dictByLookupIndexIdx->insert( std::map<cfbam::CFBamTableByLookupIndexIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamTableBuff*>*>::value_type( keyLookupIndexIdx, subdictLookupIndexIdx ) );
		}
		subdictLookupIndexIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>* subdictAltIndexIdx;
		auto searchDictByAltIndexIdx = dictByAltIndexIdx->find( keyAltIndexIdx );
		if( searchDictByAltIndexIdx != dictByAltIndexIdx->end() ) {
			subdictAltIndexIdx = searchDictByAltIndexIdx->second;
		}
		else {
			subdictAltIndexIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
			dictByAltIndexIdx->insert( std::map<cfbam::CFBamTableByAltIndexIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamTableBuff*>*>::value_type( keyAltIndexIdx, subdictAltIndexIdx ) );
		}
		subdictAltIndexIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>* subdictQualTableIdx;
		auto searchDictByQualTableIdx = dictByQualTableIdx->find( keyQualTableIdx );
		if( searchDictByQualTableIdx != dictByQualTableIdx->end() ) {
			subdictQualTableIdx = searchDictByQualTableIdx->second;
		}
		else {
			subdictQualTableIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
			dictByQualTableIdx->insert( std::map<cfbam::CFBamTableByQualTableIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamTableBuff*>*>::value_type( keyQualTableIdx, subdictQualTableIdx ) );
		}
		subdictQualTableIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamTableBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamTableBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamTableBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamTableBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() );
			}
			else {
				dictByPKey->erase( searchDictByPKey );
				buff = NULL;
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamTableBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamTableBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readDerivedBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId )
	{
		static const std::string S_ProcName( "readDerivedBySchemaDefIdx" );
		cfbam::CFBamTableBySchemaDefIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> recVec;
		cfbam::CFBamTableBuff* clone;
		auto searchDictBySchemaDefIdx = dictBySchemaDefIdx->find( key );
		if( searchDictBySchemaDefIdx != dictBySchemaDefIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamTableBuff*>* subdictSchemaDefIdx = searchDictBySchemaDefIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>::iterator iter = subdictSchemaDefIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>::iterator end = subdictSchemaDefIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamTableBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		cfbam::CFBamTableByDefSchemaIdxKey key;
		if( DefSchemaTenantId == NULL ) {
			key.setOptionalDefSchemaTenantIdNull();
		}
		else {
			key.setOptionalDefSchemaTenantIdValue( *DefSchemaTenantId );
		}
		if( DefSchemaId == NULL ) {
			key.setOptionalDefSchemaIdNull();
		}
		else {
			key.setOptionalDefSchemaIdValue( *DefSchemaId );
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> recVec;
		cfbam::CFBamTableBuff* clone;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( key );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamTableBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>::iterator iter = subdictDefSchemaIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>::iterator end = subdictDefSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamTableBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamTableByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		key.setRequiredName( Name );
		cfbam::CFBamTableBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamTableBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::readDerivedBySchemaCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& TableClassCode )
	{
		static const std::string S_ProcName( "readDerivedBySchemaCdIdx" );
		cfbam::CFBamTableBySchemaCdIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		key.setRequiredTableClassCode( TableClassCode );
		cfbam::CFBamTableBuff* buff;
		auto searchDictBySchemaCdIdx = dictBySchemaCdIdx->find( key );
		if( searchDictBySchemaCdIdx != dictBySchemaCdIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamTableBuff*>( searchDictBySchemaCdIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readDerivedByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrimaryIndexTenantId,
			const int64_t* PrimaryIndexId )
	{
		static const std::string S_ProcName( "readDerivedByPrimaryIndexIdx" );
		cfbam::CFBamTableByPrimaryIndexIdxKey key;
		if( PrimaryIndexTenantId == NULL ) {
			key.setOptionalPrimaryIndexTenantIdNull();
		}
		else {
			key.setOptionalPrimaryIndexTenantIdValue( *PrimaryIndexTenantId );
		}
		if( PrimaryIndexId == NULL ) {
			key.setOptionalPrimaryIndexIdNull();
		}
		else {
			key.setOptionalPrimaryIndexIdValue( *PrimaryIndexId );
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> recVec;
		cfbam::CFBamTableBuff* clone;
		auto searchDictByPrimaryIndexIdx = dictByPrimaryIndexIdx->find( key );
		if( searchDictByPrimaryIndexIdx != dictByPrimaryIndexIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamTableBuff*>* subdictPrimaryIndexIdx = searchDictByPrimaryIndexIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>::iterator iter = subdictPrimaryIndexIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>::iterator end = subdictPrimaryIndexIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamTableBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readDerivedByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* LookupIndexTenantId,
			const int64_t* LookupIndexId )
	{
		static const std::string S_ProcName( "readDerivedByLookupIndexIdx" );
		cfbam::CFBamTableByLookupIndexIdxKey key;
		if( LookupIndexTenantId == NULL ) {
			key.setOptionalLookupIndexTenantIdNull();
		}
		else {
			key.setOptionalLookupIndexTenantIdValue( *LookupIndexTenantId );
		}
		if( LookupIndexId == NULL ) {
			key.setOptionalLookupIndexIdNull();
		}
		else {
			key.setOptionalLookupIndexIdValue( *LookupIndexId );
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> recVec;
		cfbam::CFBamTableBuff* clone;
		auto searchDictByLookupIndexIdx = dictByLookupIndexIdx->find( key );
		if( searchDictByLookupIndexIdx != dictByLookupIndexIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamTableBuff*>* subdictLookupIndexIdx = searchDictByLookupIndexIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>::iterator iter = subdictLookupIndexIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>::iterator end = subdictLookupIndexIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamTableBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readDerivedByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* AltIndexTenantId,
			const int64_t* AltIndexId )
	{
		static const std::string S_ProcName( "readDerivedByAltIndexIdx" );
		cfbam::CFBamTableByAltIndexIdxKey key;
		if( AltIndexTenantId == NULL ) {
			key.setOptionalAltIndexTenantIdNull();
		}
		else {
			key.setOptionalAltIndexTenantIdValue( *AltIndexTenantId );
		}
		if( AltIndexId == NULL ) {
			key.setOptionalAltIndexIdNull();
		}
		else {
			key.setOptionalAltIndexIdValue( *AltIndexId );
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> recVec;
		cfbam::CFBamTableBuff* clone;
		auto searchDictByAltIndexIdx = dictByAltIndexIdx->find( key );
		if( searchDictByAltIndexIdx != dictByAltIndexIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamTableBuff*>* subdictAltIndexIdx = searchDictByAltIndexIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>::iterator iter = subdictAltIndexIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>::iterator end = subdictAltIndexIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamTableBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readDerivedByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* QualifyingTenantId,
			const int64_t* QualifyingTableId )
	{
		static const std::string S_ProcName( "readDerivedByQualTableIdx" );
		cfbam::CFBamTableByQualTableIdxKey key;
		if( QualifyingTenantId == NULL ) {
			key.setOptionalQualifyingTenantIdNull();
		}
		else {
			key.setOptionalQualifyingTenantIdValue( *QualifyingTenantId );
		}
		if( QualifyingTableId == NULL ) {
			key.setOptionalQualifyingTableIdNull();
		}
		else {
			key.setOptionalQualifyingTableIdValue( *QualifyingTableId );
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> recVec;
		cfbam::CFBamTableBuff* clone;
		auto searchDictByQualTableIdx = dictByQualTableIdx->find( key );
		if( searchDictByQualTableIdx != dictByQualTableIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamTableBuff*>* subdictQualTableIdx = searchDictByQualTableIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>::iterator iter = subdictQualTableIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamTableBuff*>::iterator end = subdictQualTableIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamTableBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamTableBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamTableBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamTableBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamTableBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamTableBuff*>( buff ) );
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamTableBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamTableBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamTableBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamTableBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamTableBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamTableBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readBuffBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId )
	{
		static const std::string S_ProcName( "readBuffBySchemaDefIdx" );
		cfbam::CFBamTableBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = readDerivedBySchemaDefIdx( Authorization,
			TenantId,
			SchemaDefId );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamTableBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamTableBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			SchemaDefId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamTableBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::readBuffBySchemaCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& TableClassCode )
	{
		static const std::string S_ProcName( "readBuffBySchemaCdIdx" );
		cfbam::CFBamTableBuff* buff = readDerivedBySchemaCdIdx( Authorization,
			TenantId,
			SchemaDefId,
			TableClassCode );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamTableBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readBuffByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrimaryIndexTenantId,
			const int64_t* PrimaryIndexId )
	{
		static const std::string S_ProcName( "readBuffByPrimaryIndexIdx" );
		cfbam::CFBamTableBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = readDerivedByPrimaryIndexIdx( Authorization,
			PrimaryIndexTenantId,
			PrimaryIndexId );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readBuffByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* LookupIndexTenantId,
			const int64_t* LookupIndexId )
	{
		static const std::string S_ProcName( "readBuffByLookupIndexIdx" );
		cfbam::CFBamTableBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = readDerivedByLookupIndexIdx( Authorization,
			LookupIndexTenantId,
			LookupIndexId );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readBuffByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* AltIndexTenantId,
			const int64_t* AltIndexId )
	{
		static const std::string S_ProcName( "readBuffByAltIndexIdx" );
		cfbam::CFBamTableBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = readDerivedByAltIndexIdx( Authorization,
			AltIndexTenantId,
			AltIndexId );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::readBuffByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* QualifyingTenantId,
			const int64_t* QualifyingTableId )
	{
		static const std::string S_ProcName( "readBuffByQualTableIdx" );
		cfbam::CFBamTableBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = readDerivedByQualTableIdx( Authorization,
			QualifyingTenantId,
			QualifyingTableId );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfbam::CFBamTableBuff* buff = readBuffByUNameIdx( Authorization,
			TenantId,
			SchemaDefId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamTableBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfbam::CFBamTableBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			SchemaDefId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfbam::CFBamTableBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::pageBuffBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffBySchemaDefIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::pageBuffByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrimaryIndexTenantId,
			const int64_t* PrimaryIndexId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByPrimaryIndexIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::pageBuffByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* LookupIndexTenantId,
			const int64_t* LookupIndexId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByLookupIndexIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::pageBuffByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* AltIndexTenantId,
			const int64_t* AltIndexId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByAltIndexIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamTableBuff*> CFBamRamTableTable::pageBuffByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* QualifyingTenantId,
			const int64_t* QualifyingTableId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByQualTableIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamTableBuff* CFBamRamTableTable::updateTable( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamTableBuff* Buff )
	{
		static const std::string S_ProcName( "updateTable" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in Table for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamTableBuff* existing = searchExisting->second;

		if( existing == NULL ) {
			delete Buff;
			static const std::string S_Existing( "existing" );
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_Existing );
		}

		// Make sure the buffer classes match

		if( existing->getClassCode() != Buff->getClassCode() ) {
			static const std::string S_DoesNotMatchExisting( " does not match existing " );
			std::string Msg( "Buffer class " );
			Msg.append( cflib::CFLib::formatClassCode( Buff->getClassCode() ) );
			Msg.append( S_DoesNotMatchExisting );
			Msg.append( cflib::CFLib::formatClassCode( existing->getClassCode() ) );
			delete Buff;
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				Msg );
		}
		cfbam::CFBamTableBySchemaDefIdxKey existingKeySchemaDefIdx;
		existingKeySchemaDefIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeySchemaDefIdx.setRequiredSchemaDefId( existing->getRequiredSchemaDefId() );
		cfbam::CFBamTableBySchemaDefIdxKey newKeySchemaDefIdx;
		newKeySchemaDefIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeySchemaDefIdx.setRequiredSchemaDefId( Buff->getRequiredSchemaDefId() );
		cfbam::CFBamTableByDefSchemaIdxKey existingKeyDefSchemaIdx;
		if( existing->isOptionalDefSchemaTenantIdNull() ) {
			existingKeyDefSchemaIdx.setOptionalDefSchemaTenantIdNull();
		}
		else {
			existingKeyDefSchemaIdx.setOptionalDefSchemaTenantIdValue( existing->getOptionalDefSchemaTenantIdValue() );
		}
		if( existing->isOptionalDefSchemaIdNull() ) {
			existingKeyDefSchemaIdx.setOptionalDefSchemaIdNull();
		}
		else {
			existingKeyDefSchemaIdx.setOptionalDefSchemaIdValue( existing->getOptionalDefSchemaIdValue() );
		}
		cfbam::CFBamTableByDefSchemaIdxKey newKeyDefSchemaIdx;
		if( Buff->isOptionalDefSchemaTenantIdNull() ) {
			newKeyDefSchemaIdx.setOptionalDefSchemaTenantIdNull();
		}
		else {
			newKeyDefSchemaIdx.setOptionalDefSchemaTenantIdValue( Buff->getOptionalDefSchemaTenantIdValue() );
		}
		if( Buff->isOptionalDefSchemaIdNull() ) {
			newKeyDefSchemaIdx.setOptionalDefSchemaIdNull();
		}
		else {
			newKeyDefSchemaIdx.setOptionalDefSchemaIdValue( Buff->getOptionalDefSchemaIdValue() );
		}
		cfbam::CFBamTableByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUNameIdx.setRequiredSchemaDefId( existing->getRequiredSchemaDefId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamTableByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUNameIdx.setRequiredSchemaDefId( Buff->getRequiredSchemaDefId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamTableBySchemaCdIdxKey existingKeySchemaCdIdx;
		existingKeySchemaCdIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeySchemaCdIdx.setRequiredSchemaDefId( existing->getRequiredSchemaDefId() );
		existingKeySchemaCdIdx.setRequiredTableClassCode( existing->getRequiredTableClassCode() );
		cfbam::CFBamTableBySchemaCdIdxKey newKeySchemaCdIdx;
		newKeySchemaCdIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeySchemaCdIdx.setRequiredSchemaDefId( Buff->getRequiredSchemaDefId() );
		newKeySchemaCdIdx.setRequiredTableClassCode( Buff->getRequiredTableClassCode() );
		cfbam::CFBamTableByPrimaryIndexIdxKey existingKeyPrimaryIndexIdx;
		if( existing->isOptionalPrimaryIndexTenantIdNull() ) {
			existingKeyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdNull();
		}
		else {
			existingKeyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdValue( existing->getOptionalPrimaryIndexTenantIdValue() );
		}
		if( existing->isOptionalPrimaryIndexIdNull() ) {
			existingKeyPrimaryIndexIdx.setOptionalPrimaryIndexIdNull();
		}
		else {
			existingKeyPrimaryIndexIdx.setOptionalPrimaryIndexIdValue( existing->getOptionalPrimaryIndexIdValue() );
		}
		cfbam::CFBamTableByPrimaryIndexIdxKey newKeyPrimaryIndexIdx;
		if( Buff->isOptionalPrimaryIndexTenantIdNull() ) {
			newKeyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdNull();
		}
		else {
			newKeyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdValue( Buff->getOptionalPrimaryIndexTenantIdValue() );
		}
		if( Buff->isOptionalPrimaryIndexIdNull() ) {
			newKeyPrimaryIndexIdx.setOptionalPrimaryIndexIdNull();
		}
		else {
			newKeyPrimaryIndexIdx.setOptionalPrimaryIndexIdValue( Buff->getOptionalPrimaryIndexIdValue() );
		}
		cfbam::CFBamTableByLookupIndexIdxKey existingKeyLookupIndexIdx;
		if( existing->isOptionalLookupIndexTenantIdNull() ) {
			existingKeyLookupIndexIdx.setOptionalLookupIndexTenantIdNull();
		}
		else {
			existingKeyLookupIndexIdx.setOptionalLookupIndexTenantIdValue( existing->getOptionalLookupIndexTenantIdValue() );
		}
		if( existing->isOptionalLookupIndexIdNull() ) {
			existingKeyLookupIndexIdx.setOptionalLookupIndexIdNull();
		}
		else {
			existingKeyLookupIndexIdx.setOptionalLookupIndexIdValue( existing->getOptionalLookupIndexIdValue() );
		}
		cfbam::CFBamTableByLookupIndexIdxKey newKeyLookupIndexIdx;
		if( Buff->isOptionalLookupIndexTenantIdNull() ) {
			newKeyLookupIndexIdx.setOptionalLookupIndexTenantIdNull();
		}
		else {
			newKeyLookupIndexIdx.setOptionalLookupIndexTenantIdValue( Buff->getOptionalLookupIndexTenantIdValue() );
		}
		if( Buff->isOptionalLookupIndexIdNull() ) {
			newKeyLookupIndexIdx.setOptionalLookupIndexIdNull();
		}
		else {
			newKeyLookupIndexIdx.setOptionalLookupIndexIdValue( Buff->getOptionalLookupIndexIdValue() );
		}
		cfbam::CFBamTableByAltIndexIdxKey existingKeyAltIndexIdx;
		if( existing->isOptionalAltIndexTenantIdNull() ) {
			existingKeyAltIndexIdx.setOptionalAltIndexTenantIdNull();
		}
		else {
			existingKeyAltIndexIdx.setOptionalAltIndexTenantIdValue( existing->getOptionalAltIndexTenantIdValue() );
		}
		if( existing->isOptionalAltIndexIdNull() ) {
			existingKeyAltIndexIdx.setOptionalAltIndexIdNull();
		}
		else {
			existingKeyAltIndexIdx.setOptionalAltIndexIdValue( existing->getOptionalAltIndexIdValue() );
		}
		cfbam::CFBamTableByAltIndexIdxKey newKeyAltIndexIdx;
		if( Buff->isOptionalAltIndexTenantIdNull() ) {
			newKeyAltIndexIdx.setOptionalAltIndexTenantIdNull();
		}
		else {
			newKeyAltIndexIdx.setOptionalAltIndexTenantIdValue( Buff->getOptionalAltIndexTenantIdValue() );
		}
		if( Buff->isOptionalAltIndexIdNull() ) {
			newKeyAltIndexIdx.setOptionalAltIndexIdNull();
		}
		else {
			newKeyAltIndexIdx.setOptionalAltIndexIdValue( Buff->getOptionalAltIndexIdValue() );
		}
		cfbam::CFBamTableByQualTableIdxKey existingKeyQualTableIdx;
		if( existing->isOptionalQualifyingTenantIdNull() ) {
			existingKeyQualTableIdx.setOptionalQualifyingTenantIdNull();
		}
		else {
			existingKeyQualTableIdx.setOptionalQualifyingTenantIdValue( existing->getOptionalQualifyingTenantIdValue() );
		}
		if( existing->isOptionalQualifyingTableIdNull() ) {
			existingKeyQualTableIdx.setOptionalQualifyingTableIdNull();
		}
		else {
			existingKeyQualTableIdx.setOptionalQualifyingTableIdValue( existing->getOptionalQualifyingTableIdValue() );
		}
		cfbam::CFBamTableByQualTableIdxKey newKeyQualTableIdx;
		if( Buff->isOptionalQualifyingTenantIdNull() ) {
			newKeyQualTableIdx.setOptionalQualifyingTenantIdNull();
		}
		else {
			newKeyQualTableIdx.setOptionalQualifyingTenantIdValue( Buff->getOptionalQualifyingTenantIdValue() );
		}
		if( Buff->isOptionalQualifyingTableIdNull() ) {
			newKeyQualTableIdx.setOptionalQualifyingTableIdNull();
		}
		else {
			newKeyQualTableIdx.setOptionalQualifyingTableIdValue( Buff->getOptionalQualifyingTableIdValue() );
		}
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index TableUNameIdx " + newKeyUNameIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		if( existingKeySchemaCdIdx != newKeySchemaCdIdx ) {
			auto searchDictBySchemaCdIdx = dictBySchemaCdIdx->find( newKeySchemaCdIdx );
			if( searchDictBySchemaCdIdx != dictBySchemaCdIdx->end() ) {
				std::string Msg( "Duplicate key detected for index TableSchemaCodeIdx " + newKeySchemaCdIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		{
			bool allNull = true;

			if( allNull ) {
				cfbam::CFBamScopeBuff* chk = dynamic_cast<cfbam::CFBamScopeBuff*>( schema->getTableScope()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table Scope" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		{
			bool allNull = true;

			if( allNull ) {
				cfbam::CFBamSchemaDefBuff* chk = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredSchemaDefId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship SchemaDef to table SchemaDef" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamTableBuff*>( schema->getTableScope()->updateScope( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamTableBuff*>* subdictSchemaDefIdx;
		auto searchDictBySchemaDefIdx = dictBySchemaDefIdx->find( existingKeySchemaDefIdx );
		if( searchDictBySchemaDefIdx != dictBySchemaDefIdx->end() ) {
			subdictSchemaDefIdx = searchDictBySchemaDefIdx->second;
			auto searchSubDict = subdictSchemaDefIdx->find( pkey );
			if( searchSubDict != subdictSchemaDefIdx->end() ) {
				subdictSchemaDefIdx->erase( searchSubDict );
			}
			if( subdictSchemaDefIdx->size() <= 0 ) {
				delete subdictSchemaDefIdx;
				dictBySchemaDefIdx->erase( searchDictBySchemaDefIdx );
			}
			subdictSchemaDefIdx = NULL;
		}
		auto searchNewKeyDictBySchemaDefIdx = dictBySchemaDefIdx->find( newKeySchemaDefIdx );
		if( searchNewKeyDictBySchemaDefIdx != dictBySchemaDefIdx->end() ) {
			subdictSchemaDefIdx = searchNewKeyDictBySchemaDefIdx->second;
		}
		else {
			subdictSchemaDefIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
			dictBySchemaDefIdx->insert( std::map<cfbam::CFBamTableBySchemaDefIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamTableBuff*>*>::value_type( newKeySchemaDefIdx, subdictSchemaDefIdx ) );
		}
		subdictSchemaDefIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamTableBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( existingKeyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			if( subdictDefSchemaIdx->size() <= 0 ) {
				delete subdictDefSchemaIdx;
				dictByDefSchemaIdx->erase( searchDictByDefSchemaIdx );
			}
			subdictDefSchemaIdx = NULL;
		}
		auto searchNewKeyDictByDefSchemaIdx = dictByDefSchemaIdx->find( newKeyDefSchemaIdx );
		if( searchNewKeyDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchNewKeyDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamTableByDefSchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamTableBuff*>*>::value_type( newKeyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamTableByUNameIdxKey, cfbam::CFBamTableBuff*>::value_type( newKeyUNameIdx, existing ) );

		auto removalDictBySchemaCdIdx = dictBySchemaCdIdx->find( existingKeySchemaCdIdx );
		if( removalDictBySchemaCdIdx != dictBySchemaCdIdx->end() ) {
			dictBySchemaCdIdx->erase( removalDictBySchemaCdIdx );
		}
		dictBySchemaCdIdx->insert( std::map<cfbam::CFBamTableBySchemaCdIdxKey, cfbam::CFBamTableBuff*>::value_type( newKeySchemaCdIdx, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamTableBuff*>* subdictPrimaryIndexIdx;
		auto searchDictByPrimaryIndexIdx = dictByPrimaryIndexIdx->find( existingKeyPrimaryIndexIdx );
		if( searchDictByPrimaryIndexIdx != dictByPrimaryIndexIdx->end() ) {
			subdictPrimaryIndexIdx = searchDictByPrimaryIndexIdx->second;
			auto searchSubDict = subdictPrimaryIndexIdx->find( pkey );
			if( searchSubDict != subdictPrimaryIndexIdx->end() ) {
				subdictPrimaryIndexIdx->erase( searchSubDict );
			}
			if( subdictPrimaryIndexIdx->size() <= 0 ) {
				delete subdictPrimaryIndexIdx;
				dictByPrimaryIndexIdx->erase( searchDictByPrimaryIndexIdx );
			}
			subdictPrimaryIndexIdx = NULL;
		}
		auto searchNewKeyDictByPrimaryIndexIdx = dictByPrimaryIndexIdx->find( newKeyPrimaryIndexIdx );
		if( searchNewKeyDictByPrimaryIndexIdx != dictByPrimaryIndexIdx->end() ) {
			subdictPrimaryIndexIdx = searchNewKeyDictByPrimaryIndexIdx->second;
		}
		else {
			subdictPrimaryIndexIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
			dictByPrimaryIndexIdx->insert( std::map<cfbam::CFBamTableByPrimaryIndexIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamTableBuff*>*>::value_type( newKeyPrimaryIndexIdx, subdictPrimaryIndexIdx ) );
		}
		subdictPrimaryIndexIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamTableBuff*>* subdictLookupIndexIdx;
		auto searchDictByLookupIndexIdx = dictByLookupIndexIdx->find( existingKeyLookupIndexIdx );
		if( searchDictByLookupIndexIdx != dictByLookupIndexIdx->end() ) {
			subdictLookupIndexIdx = searchDictByLookupIndexIdx->second;
			auto searchSubDict = subdictLookupIndexIdx->find( pkey );
			if( searchSubDict != subdictLookupIndexIdx->end() ) {
				subdictLookupIndexIdx->erase( searchSubDict );
			}
			if( subdictLookupIndexIdx->size() <= 0 ) {
				delete subdictLookupIndexIdx;
				dictByLookupIndexIdx->erase( searchDictByLookupIndexIdx );
			}
			subdictLookupIndexIdx = NULL;
		}
		auto searchNewKeyDictByLookupIndexIdx = dictByLookupIndexIdx->find( newKeyLookupIndexIdx );
		if( searchNewKeyDictByLookupIndexIdx != dictByLookupIndexIdx->end() ) {
			subdictLookupIndexIdx = searchNewKeyDictByLookupIndexIdx->second;
		}
		else {
			subdictLookupIndexIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
			dictByLookupIndexIdx->insert( std::map<cfbam::CFBamTableByLookupIndexIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamTableBuff*>*>::value_type( newKeyLookupIndexIdx, subdictLookupIndexIdx ) );
		}
		subdictLookupIndexIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamTableBuff*>* subdictAltIndexIdx;
		auto searchDictByAltIndexIdx = dictByAltIndexIdx->find( existingKeyAltIndexIdx );
		if( searchDictByAltIndexIdx != dictByAltIndexIdx->end() ) {
			subdictAltIndexIdx = searchDictByAltIndexIdx->second;
			auto searchSubDict = subdictAltIndexIdx->find( pkey );
			if( searchSubDict != subdictAltIndexIdx->end() ) {
				subdictAltIndexIdx->erase( searchSubDict );
			}
			if( subdictAltIndexIdx->size() <= 0 ) {
				delete subdictAltIndexIdx;
				dictByAltIndexIdx->erase( searchDictByAltIndexIdx );
			}
			subdictAltIndexIdx = NULL;
		}
		auto searchNewKeyDictByAltIndexIdx = dictByAltIndexIdx->find( newKeyAltIndexIdx );
		if( searchNewKeyDictByAltIndexIdx != dictByAltIndexIdx->end() ) {
			subdictAltIndexIdx = searchNewKeyDictByAltIndexIdx->second;
		}
		else {
			subdictAltIndexIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
			dictByAltIndexIdx->insert( std::map<cfbam::CFBamTableByAltIndexIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamTableBuff*>*>::value_type( newKeyAltIndexIdx, subdictAltIndexIdx ) );
		}
		subdictAltIndexIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamTableBuff*>* subdictQualTableIdx;
		auto searchDictByQualTableIdx = dictByQualTableIdx->find( existingKeyQualTableIdx );
		if( searchDictByQualTableIdx != dictByQualTableIdx->end() ) {
			subdictQualTableIdx = searchDictByQualTableIdx->second;
			auto searchSubDict = subdictQualTableIdx->find( pkey );
			if( searchSubDict != subdictQualTableIdx->end() ) {
				subdictQualTableIdx->erase( searchSubDict );
			}
			if( subdictQualTableIdx->size() <= 0 ) {
				delete subdictQualTableIdx;
				dictByQualTableIdx->erase( searchDictByQualTableIdx );
			}
			subdictQualTableIdx = NULL;
		}
		auto searchNewKeyDictByQualTableIdx = dictByQualTableIdx->find( newKeyQualTableIdx );
		if( searchNewKeyDictByQualTableIdx != dictByQualTableIdx->end() ) {
			subdictQualTableIdx = searchNewKeyDictByQualTableIdx->second;
		}
		else {
			subdictQualTableIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>();
			dictByQualTableIdx->insert( std::map<cfbam::CFBamTableByQualTableIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamTableBuff*>*>::value_type( newKeyQualTableIdx, subdictQualTableIdx ) );
		}
		subdictQualTableIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamTableBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamTableBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamTableBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamTableTable::deleteTable( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamTableBuff* Buff )
	{
		static const std::string S_ProcName( "deleteTable" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamTableBuff* existing = searchExisting->second;
					{
						cfbam::CFBamTableBuff* buff = schema->getTableTable()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() );
						buff->setOptionalPrimaryIndexTenantIdNull();
						buff->setOptionalPrimaryIndexIdNull();
						cfbam::CFBamTableBuff* editBuff = NULL;
						classCode = buff->getClassCode();
						if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
							editBuff = dynamic_cast<cfbam::CFBamTableBuff*>( schema->getTableTable()->updateTable( Authorization, buff ) );
						}
						else {
							if( buff != NULL ) {
								delete buff;
								buff = NULL;
							}
							std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
							throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
								S_ProcName,
								S_Msg );
						}
						if( editBuff != NULL ) {
							delete editBuff;
							editBuff = NULL;
						}
					}
		cfbam::CFBamTableBuff* editSubobj = NULL;
		cfbam::CFBamTableBuff* subobj = schema->getTableTable()->readDerivedByIdIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
			subobj->setOptionalLookupIndexTenantIdNull();
			subobj->setOptionalLookupIndexIdNull();
			subobj->setOptionalAltIndexTenantIdNull();
			subobj->setOptionalAltIndexIdNull();
			subobj->setOptionalPrimaryIndexTenantIdNull();
			subobj->setOptionalPrimaryIndexIdNull();
		classCode = subobj->getClassCode();
		if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
			editSubobj = dynamic_cast<cfbam::CFBamTableBuff*>( schema->getTableTable()->updateTable( Authorization, subobj ) );
		}
		else {
			delete subobj;
			subobj = NULL;
			std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_Msg );
		}
		// existing was not deleted by the update, so we won't be deleting that
		// unless we're in the base class.  But we may as well delete editSubobj
		// now because we always have to get rid of it.
		delete editSubobj;
		editSubobj = NULL;
		schema->getTableServerMethod()->deleteServerMethodByMethTableIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		schema->getTableDelTopDep()->deleteDelTopDepByDelTopDepTblIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		schema->getTableClearTopDep()->deleteClearTopDepByClrTopDepTblIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		schema->getTableChain()->deleteChainByChainTableIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		cfbam::CFBamRelationBuff* buffDelTableRelationPopDep;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> arrDelTableRelationPopDep = schema->getTableRelation()->readDerivedByRelTableIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterArrDelTableRelationPopDep = arrDelTableRelationPopDep.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endArrDelTableRelationPopDep = arrDelTableRelationPopDep.end();
		while( iterArrDelTableRelationPopDep != endArrDelTableRelationPopDep ) {
			buffDelTableRelationPopDep = *iterArrDelTableRelationPopDep;
			iterArrDelTableRelationPopDep ++;
			schema->getTablePopTopDep()->deletePopTopDepByContRelIdx( Authorization,
				buffDelTableRelationPopDep->getRequiredTenantId(),
				buffDelTableRelationPopDep->getRequiredId() );
		}
		cfbam::CFBamRelationBuff* buffDelTableRelationCol;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> arrDelTableRelationCol = schema->getTableRelation()->readDerivedByRelTableIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterArrDelTableRelationCol = arrDelTableRelationCol.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endArrDelTableRelationCol = arrDelTableRelationCol.end();
		while( iterArrDelTableRelationCol != endArrDelTableRelationCol ) {
			buffDelTableRelationCol = *iterArrDelTableRelationCol;
			iterArrDelTableRelationCol ++;
			schema->getTableRelationCol()->deleteRelationColByRelationIdx( Authorization,
				buffDelTableRelationCol->getRequiredTenantId(),
				buffDelTableRelationCol->getRequiredId() );
		}
		schema->getTableRelation()->deleteRelationByRelTableIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		cfbam::CFBamIndexBuff* buffDelTableIndexRefRelFmCol;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> arrDelTableIndexRefRelFmCol = schema->getTableIndex()->readDerivedByIdxTableIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterArrDelTableIndexRefRelFmCol = arrDelTableIndexRefRelFmCol.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator endArrDelTableIndexRefRelFmCol = arrDelTableIndexRefRelFmCol.end();
		while( iterArrDelTableIndexRefRelFmCol != endArrDelTableIndexRefRelFmCol ) {
			buffDelTableIndexRefRelFmCol = *iterArrDelTableIndexRefRelFmCol;
			iterArrDelTableIndexRefRelFmCol ++;
			cfbam::CFBamIndexColBuff* buffColumns;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> arrColumns = schema->getTableIndexCol()->readDerivedByIndexIdx( Authorization,
				buffDelTableIndexRefRelFmCol->getRequiredTenantId(),
				buffDelTableIndexRefRelFmCol->getRequiredId() );
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterArrColumns = arrColumns.begin();
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endArrColumns = arrColumns.end();
			while( iterArrColumns != endArrColumns ) {
				buffColumns = *iterArrColumns;
				iterArrColumns ++;
			schema->getTableRelationCol()->deleteRelationColByFromColIdx( Authorization,
				buffColumns->getRequiredTenantId(),
				buffColumns->getRequiredId() );
			}
		}
		cfbam::CFBamIndexBuff* buffDelTableIndexRefRelToCol;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> arrDelTableIndexRefRelToCol = schema->getTableIndex()->readDerivedByIdxTableIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterArrDelTableIndexRefRelToCol = arrDelTableIndexRefRelToCol.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator endArrDelTableIndexRefRelToCol = arrDelTableIndexRefRelToCol.end();
		while( iterArrDelTableIndexRefRelToCol != endArrDelTableIndexRefRelToCol ) {
			buffDelTableIndexRefRelToCol = *iterArrDelTableIndexRefRelToCol;
			iterArrDelTableIndexRefRelToCol ++;
			cfbam::CFBamIndexColBuff* buffColumns;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> arrColumns = schema->getTableIndexCol()->readDerivedByIndexIdx( Authorization,
				buffDelTableIndexRefRelToCol->getRequiredTenantId(),
				buffDelTableIndexRefRelToCol->getRequiredId() );
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterArrColumns = arrColumns.begin();
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endArrColumns = arrColumns.end();
			while( iterArrColumns != endArrColumns ) {
				buffColumns = *iterArrColumns;
				iterArrColumns ++;
			schema->getTableRelationCol()->deleteRelationColByToColIdx( Authorization,
				buffColumns->getRequiredTenantId(),
				buffColumns->getRequiredId() );
			}
		}
		cfbam::CFBamIndexBuff* buffDelTableIndexCol;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> arrDelTableIndexCol = schema->getTableIndex()->readDerivedByIdxTableIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterArrDelTableIndexCol = arrDelTableIndexCol.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator endArrDelTableIndexCol = arrDelTableIndexCol.end();
		while( iterArrDelTableIndexCol != endArrDelTableIndexCol ) {
			buffDelTableIndexCol = *iterArrDelTableIndexCol;
			iterArrDelTableIndexCol ++;
			schema->getTableIndexCol()->deleteIndexColByIndexIdx( Authorization,
				buffDelTableIndexCol->getRequiredTenantId(),
				buffDelTableIndexCol->getRequiredId() );
		}
		schema->getTableIndex()->deleteIndexByIdxTableIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		cfbam::CFBamValueBuff* buffDelTableRefIndexColumns;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> arrDelTableRefIndexColumns = schema->getTableValue()->readDerivedByScopeIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterArrDelTableRefIndexColumns = arrDelTableRefIndexColumns.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endArrDelTableRefIndexColumns = arrDelTableRefIndexColumns.end();
		while( iterArrDelTableRefIndexColumns != endArrDelTableRefIndexColumns ) {
			buffDelTableRefIndexColumns = *iterArrDelTableRefIndexColumns;
			iterArrDelTableRefIndexColumns ++;
			schema->getTableIndexCol()->deleteIndexColByColIdx( Authorization,
				buffDelTableRefIndexColumns->getRequiredTenantId(),
				buffDelTableRefIndexColumns->getRequiredId() );
		}
		schema->getTableValue()->deleteValueByScopeIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		schema->getTableId64Gen()->deleteId64GenByDispIdx( Authorization,
			existing->getRequiredTenantIdReference(),
			existing->getRequiredIdReference() );
		schema->getTableId32Gen()->deleteId32GenByDispIdx( Authorization,
			existing->getRequiredTenantIdReference(),
			existing->getRequiredIdReference() );
		schema->getTableId16Gen()->deleteId16GenByDispIdx( Authorization,
			existing->getRequiredTenantIdReference(),
			existing->getRequiredIdReference() );
		cfbam::CFBamTableBySchemaDefIdxKey keySchemaDefIdx;
		keySchemaDefIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keySchemaDefIdx.setRequiredSchemaDefId( existing->getRequiredSchemaDefId() );
		cfbam::CFBamTableByDefSchemaIdxKey keyDefSchemaIdx;
		if( existing->isOptionalDefSchemaTenantIdNull() ) {
			keyDefSchemaIdx.setOptionalDefSchemaTenantIdNull();
		}
		else {
			keyDefSchemaIdx.setOptionalDefSchemaTenantIdValue( existing->getOptionalDefSchemaTenantIdValue() );
		}
		if( existing->isOptionalDefSchemaIdNull() ) {
			keyDefSchemaIdx.setOptionalDefSchemaIdNull();
		}
		else {
			keyDefSchemaIdx.setOptionalDefSchemaIdValue( existing->getOptionalDefSchemaIdValue() );
		}
		cfbam::CFBamTableByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUNameIdx.setRequiredSchemaDefId( existing->getRequiredSchemaDefId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamTableBySchemaCdIdxKey keySchemaCdIdx;
		keySchemaCdIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keySchemaCdIdx.setRequiredSchemaDefId( existing->getRequiredSchemaDefId() );
		keySchemaCdIdx.setRequiredTableClassCode( existing->getRequiredTableClassCode() );
		cfbam::CFBamTableByPrimaryIndexIdxKey keyPrimaryIndexIdx;
		if( existing->isOptionalPrimaryIndexTenantIdNull() ) {
			keyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdNull();
		}
		else {
			keyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdValue( existing->getOptionalPrimaryIndexTenantIdValue() );
		}
		if( existing->isOptionalPrimaryIndexIdNull() ) {
			keyPrimaryIndexIdx.setOptionalPrimaryIndexIdNull();
		}
		else {
			keyPrimaryIndexIdx.setOptionalPrimaryIndexIdValue( existing->getOptionalPrimaryIndexIdValue() );
		}
		cfbam::CFBamTableByLookupIndexIdxKey keyLookupIndexIdx;
		if( existing->isOptionalLookupIndexTenantIdNull() ) {
			keyLookupIndexIdx.setOptionalLookupIndexTenantIdNull();
		}
		else {
			keyLookupIndexIdx.setOptionalLookupIndexTenantIdValue( existing->getOptionalLookupIndexTenantIdValue() );
		}
		if( existing->isOptionalLookupIndexIdNull() ) {
			keyLookupIndexIdx.setOptionalLookupIndexIdNull();
		}
		else {
			keyLookupIndexIdx.setOptionalLookupIndexIdValue( existing->getOptionalLookupIndexIdValue() );
		}
		cfbam::CFBamTableByAltIndexIdxKey keyAltIndexIdx;
		if( existing->isOptionalAltIndexTenantIdNull() ) {
			keyAltIndexIdx.setOptionalAltIndexTenantIdNull();
		}
		else {
			keyAltIndexIdx.setOptionalAltIndexTenantIdValue( existing->getOptionalAltIndexTenantIdValue() );
		}
		if( existing->isOptionalAltIndexIdNull() ) {
			keyAltIndexIdx.setOptionalAltIndexIdNull();
		}
		else {
			keyAltIndexIdx.setOptionalAltIndexIdValue( existing->getOptionalAltIndexIdValue() );
		}
		cfbam::CFBamTableByQualTableIdxKey keyQualTableIdx;
		if( existing->isOptionalQualifyingTenantIdNull() ) {
			keyQualTableIdx.setOptionalQualifyingTenantIdNull();
		}
		else {
			keyQualTableIdx.setOptionalQualifyingTenantIdValue( existing->getOptionalQualifyingTenantIdValue() );
		}
		if( existing->isOptionalQualifyingTableIdNull() ) {
			keyQualTableIdx.setOptionalQualifyingTableIdNull();
		}
		else {
			keyQualTableIdx.setOptionalQualifyingTableIdValue( existing->getOptionalQualifyingTableIdValue() );
		}
		// Validate reverse foreign keys

		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> derivedByToTblIdx = schema->getTableRelation()->readDerivedByToTblIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() );
		if( derivedByToTblIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship ToTable from table Relation for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamTableBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictBySchemaDefIdx = dictBySchemaDefIdx->find( keySchemaDefIdx );
		if( searchDictBySchemaDefIdx != dictBySchemaDefIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamTableBuff*>* subdictSchemaDefIdx = searchDictBySchemaDefIdx->second;
			auto searchSubDict = subdictSchemaDefIdx->find( pkey );
			if( searchSubDict != subdictSchemaDefIdx->end() ) {
				subdictSchemaDefIdx->erase( searchSubDict );
			}
			subdictSchemaDefIdx = NULL;
		}

		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamTableBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			subdictDefSchemaIdx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		auto searchDictBySchemaCdIdx = dictBySchemaCdIdx->find( keySchemaCdIdx );
		if( searchDictBySchemaCdIdx != dictBySchemaCdIdx->end() ) {
			dictBySchemaCdIdx->erase( searchDictBySchemaCdIdx );
		}

		auto searchDictByPrimaryIndexIdx = dictByPrimaryIndexIdx->find( keyPrimaryIndexIdx );
		if( searchDictByPrimaryIndexIdx != dictByPrimaryIndexIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamTableBuff*>* subdictPrimaryIndexIdx = searchDictByPrimaryIndexIdx->second;
			auto searchSubDict = subdictPrimaryIndexIdx->find( pkey );
			if( searchSubDict != subdictPrimaryIndexIdx->end() ) {
				subdictPrimaryIndexIdx->erase( searchSubDict );
			}
			subdictPrimaryIndexIdx = NULL;
		}

		auto searchDictByLookupIndexIdx = dictByLookupIndexIdx->find( keyLookupIndexIdx );
		if( searchDictByLookupIndexIdx != dictByLookupIndexIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamTableBuff*>* subdictLookupIndexIdx = searchDictByLookupIndexIdx->second;
			auto searchSubDict = subdictLookupIndexIdx->find( pkey );
			if( searchSubDict != subdictLookupIndexIdx->end() ) {
				subdictLookupIndexIdx->erase( searchSubDict );
			}
			subdictLookupIndexIdx = NULL;
		}

		auto searchDictByAltIndexIdx = dictByAltIndexIdx->find( keyAltIndexIdx );
		if( searchDictByAltIndexIdx != dictByAltIndexIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamTableBuff*>* subdictAltIndexIdx = searchDictByAltIndexIdx->second;
			auto searchSubDict = subdictAltIndexIdx->find( pkey );
			if( searchSubDict != subdictAltIndexIdx->end() ) {
				subdictAltIndexIdx->erase( searchSubDict );
			}
			subdictAltIndexIdx = NULL;
		}

		auto searchDictByQualTableIdx = dictByQualTableIdx->find( keyQualTableIdx );
		if( searchDictByQualTableIdx != dictByQualTableIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamTableBuff*>* subdictQualTableIdx = searchDictByQualTableIdx->second;
			auto searchSubDict = subdictQualTableIdx->find( pkey );
			if( searchSubDict != subdictQualTableIdx->end() ) {
				subdictQualTableIdx->erase( searchSubDict );
			}
			subdictQualTableIdx = NULL;
		}

		schema->getTableScope()->deleteScope( Authorization,
			Buff );
	}

	void CFBamRamTableTable::deleteTableBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaDefId )
	{
		cfbam::CFBamTableBySchemaDefIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredSchemaDefId( argSchemaDefId );
		deleteTableBySchemaDefIdx( Authorization, &key );
	}

	void CFBamRamTableTable::deleteTableBySchemaDefIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamTableBySchemaDefIdxKey* argKey )
	{
		cfbam::CFBamTableBuff* cur = NULL;
		cfbam::CFBamTableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamTableBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTable()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTableTable::deleteTableByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamTableByDefSchemaIdxKey key;
		if( argDefSchemaTenantId == NULL ) {
			key.setOptionalDefSchemaTenantIdNull();
		}
		else {
			key.setOptionalDefSchemaTenantIdValue( *argDefSchemaTenantId );
		}
		if( argDefSchemaId == NULL ) {
			key.setOptionalDefSchemaIdNull();
		}
		else {
			key.setOptionalDefSchemaIdValue( *argDefSchemaId );
		}
		deleteTableByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamTableTable::deleteTableByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamTableByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamTableBuff* cur = NULL;
		cfbam::CFBamTableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalDefSchemaTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalDefSchemaIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamTableBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTable()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTableTable::deleteTableByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaDefId,
			const std::string& argName )
	{
		cfbam::CFBamTableByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredSchemaDefId( argSchemaDefId );
		key.setRequiredName( argName );
		deleteTableByUNameIdx( Authorization, &key );
	}

	void CFBamRamTableTable::deleteTableByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamTableByUNameIdxKey* argKey )
	{
		cfbam::CFBamTableBuff* cur = NULL;
		cfbam::CFBamTableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamTableBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTable()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTableTable::deleteTableBySchemaCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaDefId,
			const std::string& argTableClassCode )
	{
		cfbam::CFBamTableBySchemaCdIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredSchemaDefId( argSchemaDefId );
		key.setRequiredTableClassCode( argTableClassCode );
		deleteTableBySchemaCdIdx( Authorization, &key );
	}

	void CFBamRamTableTable::deleteTableBySchemaCdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamTableBySchemaCdIdxKey* argKey )
	{
		cfbam::CFBamTableBuff* cur = NULL;
		cfbam::CFBamTableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamTableBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTable()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTableTable::deleteTableByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrimaryIndexTenantId,
			const int64_t* argPrimaryIndexId )
	{
		cfbam::CFBamTableByPrimaryIndexIdxKey key;
		if( argPrimaryIndexTenantId == NULL ) {
			key.setOptionalPrimaryIndexTenantIdNull();
		}
		else {
			key.setOptionalPrimaryIndexTenantIdValue( *argPrimaryIndexTenantId );
		}
		if( argPrimaryIndexId == NULL ) {
			key.setOptionalPrimaryIndexIdNull();
		}
		else {
			key.setOptionalPrimaryIndexIdValue( *argPrimaryIndexId );
		}
		deleteTableByPrimaryIndexIdx( Authorization, &key );
	}

	void CFBamRamTableTable::deleteTableByPrimaryIndexIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamTableByPrimaryIndexIdxKey* argKey )
	{
		cfbam::CFBamTableBuff* cur = NULL;
		cfbam::CFBamTableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalPrimaryIndexTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalPrimaryIndexIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamTableBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTable()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTableTable::deleteTableByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argLookupIndexTenantId,
			const int64_t* argLookupIndexId )
	{
		cfbam::CFBamTableByLookupIndexIdxKey key;
		if( argLookupIndexTenantId == NULL ) {
			key.setOptionalLookupIndexTenantIdNull();
		}
		else {
			key.setOptionalLookupIndexTenantIdValue( *argLookupIndexTenantId );
		}
		if( argLookupIndexId == NULL ) {
			key.setOptionalLookupIndexIdNull();
		}
		else {
			key.setOptionalLookupIndexIdValue( *argLookupIndexId );
		}
		deleteTableByLookupIndexIdx( Authorization, &key );
	}

	void CFBamRamTableTable::deleteTableByLookupIndexIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamTableByLookupIndexIdxKey* argKey )
	{
		cfbam::CFBamTableBuff* cur = NULL;
		cfbam::CFBamTableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalLookupIndexTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalLookupIndexIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamTableBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTable()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTableTable::deleteTableByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argAltIndexTenantId,
			const int64_t* argAltIndexId )
	{
		cfbam::CFBamTableByAltIndexIdxKey key;
		if( argAltIndexTenantId == NULL ) {
			key.setOptionalAltIndexTenantIdNull();
		}
		else {
			key.setOptionalAltIndexTenantIdValue( *argAltIndexTenantId );
		}
		if( argAltIndexId == NULL ) {
			key.setOptionalAltIndexIdNull();
		}
		else {
			key.setOptionalAltIndexIdValue( *argAltIndexId );
		}
		deleteTableByAltIndexIdx( Authorization, &key );
	}

	void CFBamRamTableTable::deleteTableByAltIndexIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamTableByAltIndexIdxKey* argKey )
	{
		cfbam::CFBamTableBuff* cur = NULL;
		cfbam::CFBamTableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalAltIndexTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalAltIndexIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamTableBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTable()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTableTable::deleteTableByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argQualifyingTenantId,
			const int64_t* argQualifyingTableId )
	{
		cfbam::CFBamTableByQualTableIdxKey key;
		if( argQualifyingTenantId == NULL ) {
			key.setOptionalQualifyingTenantIdNull();
		}
		else {
			key.setOptionalQualifyingTenantIdValue( *argQualifyingTenantId );
		}
		if( argQualifyingTableId == NULL ) {
			key.setOptionalQualifyingTableIdNull();
		}
		else {
			key.setOptionalQualifyingTableIdValue( *argQualifyingTableId );
		}
		deleteTableByQualTableIdx( Authorization, &key );
	}

	void CFBamRamTableTable::deleteTableByQualTableIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamTableByQualTableIdxKey* argKey )
	{
		cfbam::CFBamTableBuff* cur = NULL;
		cfbam::CFBamTableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalQualifyingTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalQualifyingTableIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamTableBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTable()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTableTable::deleteTableByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteTableByIdIdx( Authorization, &key );
	}

	void CFBamRamTableTable::deleteTableByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamTableBuff* cur = NULL;
		cfbam::CFBamTableBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTable()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTable( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamTableTable::deleteTableByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteTableByTenantIdx( Authorization, &key );
	}

	void CFBamRamTableTable::deleteTableByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamTableBuff* cur = NULL;
		cfbam::CFBamTableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamTableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamTableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTable()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTableTable::releasePreparedStatements() {
	}

}
