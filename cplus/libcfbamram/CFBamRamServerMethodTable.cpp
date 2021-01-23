
// Description: C++18 Implementation for an in-memory RAM DbIO for ServerMethod.

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

	const std::string CFBamRamServerMethodTable::CLASS_NAME( "CFBamRamServerMethodTable" );

	CFBamRamServerMethodTable::CFBamRamServerMethodTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamServerMethodTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>();
		dictByUNameIdx = new std::map<cfbam::CFBamServerMethodByUNameIdxKey, cfbam::CFBamServerMethodBuff*>();
		dictByMethTableIdx = new std::map<cfbam::CFBamServerMethodByMethTableIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamServerMethodBuff*>*>();
		dictByDefSchemaIdx = new std::map<cfbam::CFBamServerMethodByDefSchemaIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamServerMethodBuff*>*>();
	}

	CFBamRamServerMethodTable::~CFBamRamServerMethodTable() {
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByMethTableIdx != NULL ) {
			for( auto iterDict = dictByMethTableIdx->begin(); iterDict != dictByMethTableIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByMethTableIdx;
			dictByMethTableIdx = NULL;
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

	cfbam::CFBamServerMethodBuff* CFBamRamServerMethodTable::createServerMethod( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamServerMethodBuff* Buff )
	{
		static const std::string S_ProcName( "createServerMethod" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamServerMethodByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUNameIdx.setRequiredTableId( Buff->getRequiredTableId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamServerMethodByMethTableIdxKey keyMethTableIdx;
		keyMethTableIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyMethTableIdx.setRequiredTableId( Buff->getRequiredTableId() );
		cfbam::CFBamServerMethodByDefSchemaIdxKey keyDefSchemaIdx;
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
			std::string Msg( "Duplicate key detected for index ServerMethodUNameIdx " + keyUNameIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship ForTable to table Table" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamServerMethodBuff* buff = dynamic_cast<cfbam::CFBamServerMethodBuff*>( schema->getTableScope()->createScope( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamServerMethodByUNameIdxKey, cfbam::CFBamServerMethodBuff*>::value_type( keyUNameIdx, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>* subdictMethTableIdx;
		auto searchDictByMethTableIdx = dictByMethTableIdx->find( keyMethTableIdx );
		if( searchDictByMethTableIdx != dictByMethTableIdx->end() ) {
			subdictMethTableIdx = searchDictByMethTableIdx->second;
		}
		else {
			subdictMethTableIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>();
			dictByMethTableIdx->insert( std::map<cfbam::CFBamServerMethodByMethTableIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamServerMethodBuff*>*>::value_type( keyMethTableIdx, subdictMethTableIdx ) );
		}
		subdictMethTableIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamServerMethodByDefSchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamServerMethodBuff*>*>::value_type( keyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamServerMethodBuff* CFBamRamServerMethodTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamServerMethodBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamServerMethodBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamServerMethodBuff* CFBamRamServerMethodTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamServerMethodBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamServerMethodBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> CFBamRamServerMethodTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerMethodBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerMethodBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamServerMethodBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamServerMethodBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> CFBamRamServerMethodTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamServerMethodBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	cfbam::CFBamServerMethodBuff* CFBamRamServerMethodTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamServerMethodByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::CFBamServerMethodBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamServerMethodBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> CFBamRamServerMethodTable::readDerivedByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readDerivedByMethTableIdx" );
		cfbam::CFBamServerMethodByMethTableIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> recVec;
		cfbam::CFBamServerMethodBuff* clone;
		auto searchDictByMethTableIdx = dictByMethTableIdx->find( key );
		if( searchDictByMethTableIdx != dictByMethTableIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamServerMethodBuff*>* subdictMethTableIdx = searchDictByMethTableIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamServerMethodBuff*>::iterator iter = subdictMethTableIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamServerMethodBuff*>::iterator end = subdictMethTableIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamServerMethodBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> CFBamRamServerMethodTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		cfbam::CFBamServerMethodByDefSchemaIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> recVec;
		cfbam::CFBamServerMethodBuff* clone;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( key );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamServerMethodBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamServerMethodBuff*>::iterator iter = subdictDefSchemaIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamServerMethodBuff*>::iterator end = subdictDefSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamServerMethodBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamServerMethodBuff* CFBamRamServerMethodTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamServerMethodBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamServerMethodBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamServerMethodBuff* CFBamRamServerMethodTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamServerMethodBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff ) );
	}

	cfbam::CFBamServerMethodBuff* CFBamRamServerMethodTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamServerMethodBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> CFBamRamServerMethodTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamServerMethodBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamServerMethodBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamServerMethodBuff* CFBamRamServerMethodTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamServerMethodBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> CFBamRamServerMethodTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamServerMethodBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamServerMethodBuff* CFBamRamServerMethodTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamServerMethodBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> CFBamRamServerMethodTable::readBuffByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readBuffByMethTableIdx" );
		cfbam::CFBamServerMethodBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> buffList = readDerivedByMethTableIdx( Authorization,
			TenantId,
			TableId );
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamServerMethodBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> CFBamRamServerMethodTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamServerMethodBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamServerMethodBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamServerMethodBuff* CFBamRamServerMethodTable::readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfbam::CFBamServerMethodBuff* buff = readBuffByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamServerMethodBuff* CFBamRamServerMethodTable::readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfbam::CFBamServerMethodBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfbam::CFBamServerMethodBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> CFBamRamServerMethodTable::pageBuffByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByMethTableIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> CFBamRamServerMethodTable::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamServerMethodBuff* CFBamRamServerMethodTable::updateServerMethod( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamServerMethodBuff* Buff )
	{
		static const std::string S_ProcName( "updateServerMethod" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in ServerMethod for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamServerMethodBuff* existing = searchExisting->second;

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
		cfbam::CFBamServerMethodByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUNameIdx.setRequiredTableId( existing->getRequiredTableId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamServerMethodByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUNameIdx.setRequiredTableId( Buff->getRequiredTableId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamServerMethodByMethTableIdxKey existingKeyMethTableIdx;
		existingKeyMethTableIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyMethTableIdx.setRequiredTableId( existing->getRequiredTableId() );
		cfbam::CFBamServerMethodByMethTableIdxKey newKeyMethTableIdx;
		newKeyMethTableIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyMethTableIdx.setRequiredTableId( Buff->getRequiredTableId() );
		cfbam::CFBamServerMethodByDefSchemaIdxKey existingKeyDefSchemaIdx;
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
		cfbam::CFBamServerMethodByDefSchemaIdxKey newKeyDefSchemaIdx;
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
				std::string Msg( "Duplicate key detected for index ServerMethodUNameIdx " + newKeyUNameIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship ForTable to table Table" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamServerMethodBuff*>( schema->getTableScope()->updateScope( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamServerMethodByUNameIdxKey, cfbam::CFBamServerMethodBuff*>::value_type( newKeyUNameIdx, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamServerMethodBuff*>* subdictMethTableIdx;
		auto searchDictByMethTableIdx = dictByMethTableIdx->find( existingKeyMethTableIdx );
		if( searchDictByMethTableIdx != dictByMethTableIdx->end() ) {
			subdictMethTableIdx = searchDictByMethTableIdx->second;
			auto searchSubDict = subdictMethTableIdx->find( pkey );
			if( searchSubDict != subdictMethTableIdx->end() ) {
				subdictMethTableIdx->erase( searchSubDict );
			}
			if( subdictMethTableIdx->size() <= 0 ) {
				delete subdictMethTableIdx;
				dictByMethTableIdx->erase( searchDictByMethTableIdx );
			}
			subdictMethTableIdx = NULL;
		}
		auto searchNewKeyDictByMethTableIdx = dictByMethTableIdx->find( newKeyMethTableIdx );
		if( searchNewKeyDictByMethTableIdx != dictByMethTableIdx->end() ) {
			subdictMethTableIdx = searchNewKeyDictByMethTableIdx->second;
		}
		else {
			subdictMethTableIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>();
			dictByMethTableIdx->insert( std::map<cfbam::CFBamServerMethodByMethTableIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamServerMethodBuff*>*>::value_type( newKeyMethTableIdx, subdictMethTableIdx ) );
		}
		subdictMethTableIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamServerMethodBuff*>* subdictDefSchemaIdx;
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
			subdictDefSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamServerMethodByDefSchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamServerMethodBuff*>*>::value_type( newKeyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamServerMethodBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamServerMethodBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamServerMethodTable::deleteServerMethod( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamServerMethodBuff* Buff )
	{
		static const std::string S_ProcName( "deleteServerMethod" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamServerMethodBuff* existing = searchExisting->second;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> arrCheckParams = schema->getTableParam()->readDerivedByServerMethodIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		if( arrCheckParams.size() > 0 ) {
			schema->getTableParam()->deleteParamByServerMethodIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		}
		cfbam::CFBamServerMethodByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUNameIdx.setRequiredTableId( existing->getRequiredTableId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamServerMethodByMethTableIdxKey keyMethTableIdx;
		keyMethTableIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyMethTableIdx.setRequiredTableId( existing->getRequiredTableId() );
		cfbam::CFBamServerMethodByDefSchemaIdxKey keyDefSchemaIdx;
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

		{
			cfbam::CFBamServerObjFuncBuff* refIdIdx = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( schema->getTableServerObjFunc()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table ServerObjFunc for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamServerProcBuff* refIdIdx = dynamic_cast<cfbam::CFBamServerProcBuff*>( schema->getTableServerProc()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table ServerProc for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamServerListFuncBuff* refIdIdx = dynamic_cast<cfbam::CFBamServerListFuncBuff*>( schema->getTableServerListFunc()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table ServerListFunc for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerMethodBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		auto searchDictByMethTableIdx = dictByMethTableIdx->find( keyMethTableIdx );
		if( searchDictByMethTableIdx != dictByMethTableIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamServerMethodBuff*>* subdictMethTableIdx = searchDictByMethTableIdx->second;
			auto searchSubDict = subdictMethTableIdx->find( pkey );
			if( searchSubDict != subdictMethTableIdx->end() ) {
				subdictMethTableIdx->erase( searchSubDict );
			}
			subdictMethTableIdx = NULL;
		}

		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamServerMethodBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			subdictDefSchemaIdx = NULL;
		}

		schema->getTableScope()->deleteScope( Authorization,
			Buff );
	}

	void CFBamRamServerMethodTable::deleteServerMethodByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId,
			const std::string& argName )
	{
		cfbam::CFBamServerMethodByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTableId( argTableId );
		key.setRequiredName( argName );
		deleteServerMethodByUNameIdx( Authorization, &key );
	}

	void CFBamRamServerMethodTable::deleteServerMethodByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamServerMethodByUNameIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteServerMethodByUNameIdx" );
		cfbam::CFBamServerMethodBuff* cur = NULL;
		cfbam::CFBamServerMethodBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerMethodBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerMethodBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableServerMethod()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
				schema->getTableServerMethod()->deleteServerMethod( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
				schema->getTableServerObjFunc()->deleteServerObjFunc( Authorization, dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
				schema->getTableServerProc()->deleteServerProc( Authorization, dynamic_cast<cfbam::CFBamServerProcBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
				schema->getTableServerListFunc()->deleteServerListFunc( Authorization, dynamic_cast<cfbam::CFBamServerListFuncBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamServerMethodTable::deleteServerMethodByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId )
	{
		cfbam::CFBamServerMethodByMethTableIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTableId( argTableId );
		deleteServerMethodByMethTableIdx( Authorization, &key );
	}

	void CFBamRamServerMethodTable::deleteServerMethodByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamServerMethodByMethTableIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteServerMethodByMethTableIdx" );
		cfbam::CFBamServerMethodBuff* cur = NULL;
		cfbam::CFBamServerMethodBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerMethodBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerMethodBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableServerMethod()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
				schema->getTableServerMethod()->deleteServerMethod( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
				schema->getTableServerObjFunc()->deleteServerObjFunc( Authorization, dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
				schema->getTableServerProc()->deleteServerProc( Authorization, dynamic_cast<cfbam::CFBamServerProcBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
				schema->getTableServerListFunc()->deleteServerListFunc( Authorization, dynamic_cast<cfbam::CFBamServerListFuncBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamServerMethodTable::deleteServerMethodByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamServerMethodByDefSchemaIdxKey key;
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
		deleteServerMethodByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamServerMethodTable::deleteServerMethodByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamServerMethodByDefSchemaIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteServerMethodByDefSchemaIdx" );
		cfbam::CFBamServerMethodBuff* cur = NULL;
		cfbam::CFBamServerMethodBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerMethodBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerMethodBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableServerMethod()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
				schema->getTableServerMethod()->deleteServerMethod( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
				schema->getTableServerObjFunc()->deleteServerObjFunc( Authorization, dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
				schema->getTableServerProc()->deleteServerProc( Authorization, dynamic_cast<cfbam::CFBamServerProcBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
				schema->getTableServerListFunc()->deleteServerListFunc( Authorization, dynamic_cast<cfbam::CFBamServerListFuncBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamServerMethodTable::deleteServerMethodByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteServerMethodByIdIdx( Authorization, &key );
	}

	void CFBamRamServerMethodTable::deleteServerMethodByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		static const std::string S_ProcName( "deleteServerMethodByIdIdx" );
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamServerMethodBuff* cur = NULL;
		cfbam::CFBamServerMethodBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerMethodBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerMethodBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableServerMethod()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
				schema->getTableServerMethod()->deleteServerMethod( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
				schema->getTableServerObjFunc()->deleteServerObjFunc( Authorization, dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
				schema->getTableServerProc()->deleteServerProc( Authorization, dynamic_cast<cfbam::CFBamServerProcBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
				schema->getTableServerListFunc()->deleteServerListFunc( Authorization, dynamic_cast<cfbam::CFBamServerListFuncBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamServerMethodTable::deleteServerMethodByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteServerMethodByTenantIdx( Authorization, &key );
	}

	void CFBamRamServerMethodTable::deleteServerMethodByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteServerMethodByTenantIdx" );
		cfbam::CFBamServerMethodBuff* cur = NULL;
		cfbam::CFBamServerMethodBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerMethodBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerMethodBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableServerMethod()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
				schema->getTableServerMethod()->deleteServerMethod( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
				schema->getTableServerObjFunc()->deleteServerObjFunc( Authorization, dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
				schema->getTableServerProc()->deleteServerProc( Authorization, dynamic_cast<cfbam::CFBamServerProcBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
				schema->getTableServerListFunc()->deleteServerListFunc( Authorization, dynamic_cast<cfbam::CFBamServerListFuncBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamServerMethodTable::releasePreparedStatements() {
	}

}
