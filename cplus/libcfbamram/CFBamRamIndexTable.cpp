
// Description: C++18 Implementation for an in-memory RAM DbIO for Index.

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

	const std::string CFBamRamIndexTable::CLASS_NAME( "CFBamRamIndexTable" );

	CFBamRamIndexTable::CFBamRamIndexTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamIndexTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>();
		dictByUNameIdx = new std::map<cfbam::CFBamIndexByUNameIdxKey, cfbam::CFBamIndexBuff*>();
		dictByIndexTenantIdx = new std::map<cfbam::CFBamIndexByIndexTenantIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamIndexBuff*>*>();
		dictByIdxTableIdx = new std::map<cfbam::CFBamIndexByIdxTableIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamIndexBuff*>*>();
		dictByDefSchemaIdx = new std::map<cfbam::CFBamIndexByDefSchemaIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamIndexBuff*>*>();
	}

	CFBamRamIndexTable::~CFBamRamIndexTable() {
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByIndexTenantIdx != NULL ) {
			for( auto iterDict = dictByIndexTenantIdx->begin(); iterDict != dictByIndexTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByIndexTenantIdx;
			dictByIndexTenantIdx = NULL;
		}
		if( dictByIdxTableIdx != NULL ) {
			for( auto iterDict = dictByIdxTableIdx->begin(); iterDict != dictByIdxTableIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByIdxTableIdx;
			dictByIdxTableIdx = NULL;
		}
		if( dictByDefSchemaIdx != NULL ) {
			for( auto iterDict = dictByDefSchemaIdx->begin(); iterDict != dictByDefSchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDefSchemaIdx;
			dictByDefSchemaIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfbam::CFBamIndexBuff* CFBamRamIndexTable::createIndex( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamIndexBuff* Buff )
	{
		static const std::string S_ProcName( "createIndex" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamIndexByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUNameIdx.setRequiredTableId( Buff->getRequiredTableId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamIndexByIndexTenantIdxKey keyIndexTenantIdx;
		keyIndexTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamIndexByIdxTableIdxKey keyIdxTableIdx;
		keyIdxTableIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyIdxTableIdx.setRequiredTableId( Buff->getRequiredTableId() );
		cfbam::CFBamIndexByDefSchemaIdxKey keyDefSchemaIdx;
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
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index IndexUNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamTableBuff* chk = dynamic_cast<cfbam::CFBamTableBuff*>( schema->getTableTable()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTableId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Table to table Table" );
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
			allNull = false;
			if( ! allNull ) {
				cfsec::CFSecTenantBuff* chk = dynamic_cast<cfsec::CFSecTenantBuff*>( schema->getTableTenant()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Owner relationship IndexTenant to table Tenant" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamIndexBuff* buff = dynamic_cast<cfbam::CFBamIndexBuff*>( schema->getTableScope()->createScope( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamIndexByUNameIdxKey, cfbam::CFBamIndexBuff*>::value_type( keyUNameIdx, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>* subdictIndexTenantIdx;
		auto searchDictByIndexTenantIdx = dictByIndexTenantIdx->find( keyIndexTenantIdx );
		if( searchDictByIndexTenantIdx != dictByIndexTenantIdx->end() ) {
			subdictIndexTenantIdx = searchDictByIndexTenantIdx->second;
		}
		else {
			subdictIndexTenantIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>();
			dictByIndexTenantIdx->insert( std::map<cfbam::CFBamIndexByIndexTenantIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamIndexBuff*>*>::value_type( keyIndexTenantIdx, subdictIndexTenantIdx ) );
		}
		subdictIndexTenantIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>* subdictIdxTableIdx;
		auto searchDictByIdxTableIdx = dictByIdxTableIdx->find( keyIdxTableIdx );
		if( searchDictByIdxTableIdx != dictByIdxTableIdx->end() ) {
			subdictIdxTableIdx = searchDictByIdxTableIdx->second;
		}
		else {
			subdictIdxTableIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>();
			dictByIdxTableIdx->insert( std::map<cfbam::CFBamIndexByIdxTableIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamIndexBuff*>*>::value_type( keyIdxTableIdx, subdictIdxTableIdx ) );
		}
		subdictIdxTableIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamIndexByDefSchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamIndexBuff*>*>::value_type( keyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamIndexBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamIndexBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamIndexBuff* CFBamRamIndexTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamIndexBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamIndexBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamIndexBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamIndexBuff* CFBamRamIndexTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamIndexBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamIndexBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamIndexBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamIndexBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamIndexBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamIndexBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	cfbam::CFBamIndexBuff* CFBamRamIndexTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamIndexByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::CFBamIndexBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamIndexBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamIndexBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::readDerivedByIndexTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByIndexTenantIdx" );
		cfbam::CFBamIndexByIndexTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> recVec;
		cfbam::CFBamIndexBuff* clone;
		auto searchDictByIndexTenantIdx = dictByIndexTenantIdx->find( key );
		if( searchDictByIndexTenantIdx != dictByIndexTenantIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamIndexBuff*>* subdictIndexTenantIdx = searchDictByIndexTenantIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamIndexBuff*>::iterator iter = subdictIndexTenantIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamIndexBuff*>::iterator end = subdictIndexTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamIndexBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::readDerivedByIdxTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readDerivedByIdxTableIdx" );
		cfbam::CFBamIndexByIdxTableIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> recVec;
		cfbam::CFBamIndexBuff* clone;
		auto searchDictByIdxTableIdx = dictByIdxTableIdx->find( key );
		if( searchDictByIdxTableIdx != dictByIdxTableIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamIndexBuff*>* subdictIdxTableIdx = searchDictByIdxTableIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamIndexBuff*>::iterator iter = subdictIdxTableIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamIndexBuff*>::iterator end = subdictIdxTableIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamIndexBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		cfbam::CFBamIndexByDefSchemaIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> recVec;
		cfbam::CFBamIndexBuff* clone;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( key );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamIndexBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamIndexBuff*>::iterator iter = subdictDefSchemaIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamIndexBuff*>::iterator end = subdictDefSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamIndexBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamIndexBuff* CFBamRamIndexTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamIndexBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamIndexBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamIndexBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamIndexBuff* CFBamRamIndexTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamIndexBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamIndexBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamIndexBuff*>( buff ) );
	}

	cfbam::CFBamIndexBuff* CFBamRamIndexTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamIndexBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamIndexBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamIndexBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamIndexBuff* CFBamRamIndexTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamIndexBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamIndexBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamIndexBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamIndexBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamIndexBuff* CFBamRamIndexTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamIndexBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamIndexBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamIndexBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::readBuffByIndexTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByIndexTenantIdx" );
		cfbam::CFBamIndexBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> buffList = readDerivedByIndexTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::readBuffByIdxTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readBuffByIdxTableIdx" );
		cfbam::CFBamIndexBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> buffList = readDerivedByIdxTableIdx( Authorization,
			TenantId,
			TableId );
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamIndexBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamIndexBuff* CFBamRamIndexTable::readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfbam::CFBamIndexBuff* buff = readBuffByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamIndexBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamIndexBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamIndexBuff* CFBamRamIndexTable::readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfbam::CFBamIndexBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfbam::CFBamIndexBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::pageBuffByIndexTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByIndexTenantIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::pageBuffByIdxTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByIdxTableIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> CFBamRamIndexTable::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamIndexBuff* CFBamRamIndexTable::updateIndex( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamIndexBuff* Buff )
	{
		static const std::string S_ProcName( "updateIndex" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in Index for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamIndexBuff* existing = searchExisting->second;

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
		cfbam::CFBamIndexByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUNameIdx.setRequiredTableId( existing->getRequiredTableId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamIndexByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUNameIdx.setRequiredTableId( Buff->getRequiredTableId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamIndexByIndexTenantIdxKey existingKeyIndexTenantIdx;
		existingKeyIndexTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamIndexByIndexTenantIdxKey newKeyIndexTenantIdx;
		newKeyIndexTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamIndexByIdxTableIdxKey existingKeyIdxTableIdx;
		existingKeyIdxTableIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyIdxTableIdx.setRequiredTableId( existing->getRequiredTableId() );
		cfbam::CFBamIndexByIdxTableIdxKey newKeyIdxTableIdx;
		newKeyIdxTableIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyIdxTableIdx.setRequiredTableId( Buff->getRequiredTableId() );
		cfbam::CFBamIndexByDefSchemaIdxKey existingKeyDefSchemaIdx;
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
		cfbam::CFBamIndexByDefSchemaIdxKey newKeyDefSchemaIdx;
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
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index IndexUNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamTableBuff* chk = dynamic_cast<cfbam::CFBamTableBuff*>( schema->getTableTable()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTableId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Table to table Table" );
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
				cfsec::CFSecTenantBuff* chk = dynamic_cast<cfsec::CFSecTenantBuff*>( schema->getTableTenant()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Owner relationship IndexTenant to table Tenant" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamIndexBuff*>( schema->getTableScope()->updateScope( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamIndexByUNameIdxKey, cfbam::CFBamIndexBuff*>::value_type( newKeyUNameIdx, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamIndexBuff*>* subdictIndexTenantIdx;
		auto searchDictByIndexTenantIdx = dictByIndexTenantIdx->find( existingKeyIndexTenantIdx );
		if( searchDictByIndexTenantIdx != dictByIndexTenantIdx->end() ) {
			subdictIndexTenantIdx = searchDictByIndexTenantIdx->second;
			auto searchSubDict = subdictIndexTenantIdx->find( pkey );
			if( searchSubDict != subdictIndexTenantIdx->end() ) {
				subdictIndexTenantIdx->erase( searchSubDict );
			}
			if( subdictIndexTenantIdx->size() <= 0 ) {
				delete subdictIndexTenantIdx;
				dictByIndexTenantIdx->erase( searchDictByIndexTenantIdx );
			}
			subdictIndexTenantIdx = NULL;
		}
		auto searchNewKeyDictByIndexTenantIdx = dictByIndexTenantIdx->find( newKeyIndexTenantIdx );
		if( searchNewKeyDictByIndexTenantIdx != dictByIndexTenantIdx->end() ) {
			subdictIndexTenantIdx = searchNewKeyDictByIndexTenantIdx->second;
		}
		else {
			subdictIndexTenantIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>();
			dictByIndexTenantIdx->insert( std::map<cfbam::CFBamIndexByIndexTenantIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamIndexBuff*>*>::value_type( newKeyIndexTenantIdx, subdictIndexTenantIdx ) );
		}
		subdictIndexTenantIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamIndexBuff*>* subdictIdxTableIdx;
		auto searchDictByIdxTableIdx = dictByIdxTableIdx->find( existingKeyIdxTableIdx );
		if( searchDictByIdxTableIdx != dictByIdxTableIdx->end() ) {
			subdictIdxTableIdx = searchDictByIdxTableIdx->second;
			auto searchSubDict = subdictIdxTableIdx->find( pkey );
			if( searchSubDict != subdictIdxTableIdx->end() ) {
				subdictIdxTableIdx->erase( searchSubDict );
			}
			if( subdictIdxTableIdx->size() <= 0 ) {
				delete subdictIdxTableIdx;
				dictByIdxTableIdx->erase( searchDictByIdxTableIdx );
			}
			subdictIdxTableIdx = NULL;
		}
		auto searchNewKeyDictByIdxTableIdx = dictByIdxTableIdx->find( newKeyIdxTableIdx );
		if( searchNewKeyDictByIdxTableIdx != dictByIdxTableIdx->end() ) {
			subdictIdxTableIdx = searchNewKeyDictByIdxTableIdx->second;
		}
		else {
			subdictIdxTableIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>();
			dictByIdxTableIdx->insert( std::map<cfbam::CFBamIndexByIdxTableIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamIndexBuff*>*>::value_type( newKeyIdxTableIdx, subdictIdxTableIdx ) );
		}
		subdictIdxTableIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamIndexBuff*>* subdictDefSchemaIdx;
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
			subdictDefSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamIndexByDefSchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamIndexBuff*>*>::value_type( newKeyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamIndexBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamIndexBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamIndexBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamIndexTable::deleteIndex( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamIndexBuff* Buff )
	{
		static const std::string S_ProcName( "deleteIndex" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamIndexBuff* existing = searchExisting->second;
		cfbam::CFBamIndexColBuff* buffDelIndexRefRelFromCols;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> arrDelIndexRefRelFromCols = schema->getTableIndexCol()->readDerivedByIndexIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterArrDelIndexRefRelFromCols = arrDelIndexRefRelFromCols.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endArrDelIndexRefRelFromCols = arrDelIndexRefRelFromCols.end();
		while( iterArrDelIndexRefRelFromCols != endArrDelIndexRefRelFromCols ) {
			buffDelIndexRefRelFromCols = *iterArrDelIndexRefRelFromCols;
			iterArrDelIndexRefRelFromCols ++;
			schema->getTableRelationCol()->deleteRelationColByFromColIdx( Authorization,
				buffDelIndexRefRelFromCols->getRequiredTenantId(),
				buffDelIndexRefRelFromCols->getRequiredId() );
		}
		cfbam::CFBamIndexColBuff* buffDelIndexRefRelToCols;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> arrDelIndexRefRelToCols = schema->getTableIndexCol()->readDerivedByIndexIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterArrDelIndexRefRelToCols = arrDelIndexRefRelToCols.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endArrDelIndexRefRelToCols = arrDelIndexRefRelToCols.end();
		while( iterArrDelIndexRefRelToCols != endArrDelIndexRefRelToCols ) {
			buffDelIndexRefRelToCols = *iterArrDelIndexRefRelToCols;
			iterArrDelIndexRefRelToCols ++;
			schema->getTableRelationCol()->deleteRelationColByToColIdx( Authorization,
				buffDelIndexRefRelToCols->getRequiredTenantId(),
				buffDelIndexRefRelToCols->getRequiredId() );
		}
		schema->getTableIndexCol()->deleteIndexColByIndexIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		cfbam::CFBamIndexByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUNameIdx.setRequiredTableId( existing->getRequiredTableId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamIndexByIndexTenantIdxKey keyIndexTenantIdx;
		keyIndexTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamIndexByIdxTableIdxKey keyIdxTableIdx;
		keyIdxTableIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyIdxTableIdx.setRequiredTableId( existing->getRequiredTableId() );
		cfbam::CFBamIndexByDefSchemaIdxKey keyDefSchemaIdx;
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
		// Validate reverse foreign keys

		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> derivedByFromKeyIdx = schema->getTableRelation()->readDerivedByFromKeyIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() );
		if( derivedByFromKeyIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship FromIndex from table Relation for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> derivedByToKeyIdx = schema->getTableRelation()->readDerivedByToKeyIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() );
		if( derivedByToKeyIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship ToIndex from table Relation for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamIndexBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		auto searchDictByIndexTenantIdx = dictByIndexTenantIdx->find( keyIndexTenantIdx );
		if( searchDictByIndexTenantIdx != dictByIndexTenantIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamIndexBuff*>* subdictIndexTenantIdx = searchDictByIndexTenantIdx->second;
			auto searchSubDict = subdictIndexTenantIdx->find( pkey );
			if( searchSubDict != subdictIndexTenantIdx->end() ) {
				subdictIndexTenantIdx->erase( searchSubDict );
			}
			subdictIndexTenantIdx = NULL;
		}

		auto searchDictByIdxTableIdx = dictByIdxTableIdx->find( keyIdxTableIdx );
		if( searchDictByIdxTableIdx != dictByIdxTableIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamIndexBuff*>* subdictIdxTableIdx = searchDictByIdxTableIdx->second;
			auto searchSubDict = subdictIdxTableIdx->find( pkey );
			if( searchSubDict != subdictIdxTableIdx->end() ) {
				subdictIdxTableIdx->erase( searchSubDict );
			}
			subdictIdxTableIdx = NULL;
		}

		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamIndexBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			subdictDefSchemaIdx = NULL;
		}

		schema->getTableScope()->deleteScope( Authorization,
			Buff );
	}

	void CFBamRamIndexTable::deleteIndexByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId,
			const std::string& argName )
	{
		cfbam::CFBamIndexByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTableId( argTableId );
		key.setRequiredName( argName );
		deleteIndexByUNameIdx( Authorization, &key );
	}

	void CFBamRamIndexTable::deleteIndexByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexByUNameIdxKey* argKey )
	{
		cfbam::CFBamIndexBuff* cur = NULL;
		cfbam::CFBamIndexBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndex()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndex( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexTable::deleteIndexByIndexTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamIndexByIndexTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteIndexByIndexTenantIdx( Authorization, &key );
	}

	void CFBamRamIndexTable::deleteIndexByIndexTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexByIndexTenantIdxKey* argKey )
	{
		cfbam::CFBamIndexBuff* cur = NULL;
		cfbam::CFBamIndexBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndex()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndex( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexTable::deleteIndexByIdxTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId )
	{
		cfbam::CFBamIndexByIdxTableIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTableId( argTableId );
		deleteIndexByIdxTableIdx( Authorization, &key );
	}

	void CFBamRamIndexTable::deleteIndexByIdxTableIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexByIdxTableIdxKey* argKey )
	{
		cfbam::CFBamIndexBuff* cur = NULL;
		cfbam::CFBamIndexBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndex()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndex( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexTable::deleteIndexByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamIndexByDefSchemaIdxKey key;
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
		deleteIndexByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamIndexTable::deleteIndexByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamIndexBuff* cur = NULL;
		cfbam::CFBamIndexBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndex()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndex( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexTable::deleteIndexByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteIndexByIdIdx( Authorization, &key );
	}

	void CFBamRamIndexTable::deleteIndexByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamIndexBuff* cur = NULL;
		cfbam::CFBamIndexBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndex()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndex( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamIndexTable::deleteIndexByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteIndexByTenantIdx( Authorization, &key );
	}

	void CFBamRamIndexTable::deleteIndexByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamIndexBuff* cur = NULL;
		cfbam::CFBamIndexBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamIndexBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndex()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndex( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexTable::releasePreparedStatements() {
	}

}
