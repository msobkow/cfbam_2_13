
// Description: C++18 Implementation for an in-memory RAM DbIO for ClearSubDep2.

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

	const std::string CFBamRamClearSubDep2Table::CLASS_NAME( "CFBamRamClearSubDep2Table" );

	CFBamRamClearSubDep2Table::CFBamRamClearSubDep2Table( ICFBamSchema* argSchema )
	: cfbam::ICFBamClearSubDep2Table()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep2Buff*>();
		dictByClearSubDep1Idx = new std::map<cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearSubDep2Buff*>*>();
		dictByUNameIdx = new std::map<cfbam::CFBamClearSubDep2ByUNameIdxKey, cfbam::CFBamClearSubDep2Buff*>();
	}

	CFBamRamClearSubDep2Table::~CFBamRamClearSubDep2Table() {
		if( dictByClearSubDep1Idx != NULL ) {
			for( auto iterDict = dictByClearSubDep1Idx->begin(); iterDict != dictByClearSubDep1Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByClearSubDep1Idx;
			dictByClearSubDep1Idx = NULL;
		}
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfbam::CFBamClearSubDep2Buff* CFBamRamClearSubDep2Table::createClearSubDep2( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamClearSubDep2Buff* Buff )
	{
		static const std::string S_ProcName( "createClearSubDep2" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey keyClearSubDep1Idx;
		keyClearSubDep1Idx.setRequiredClearSubDep1TenantId( Buff->getRequiredClearSubDep1TenantId() );
		keyClearSubDep1Idx.setRequiredClearSubDep1Id( Buff->getRequiredClearSubDep1Id() );
		cfbam::CFBamClearSubDep2ByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredClearSubDep1TenantId( Buff->getRequiredClearSubDep1TenantId() );
		keyUNameIdx.setRequiredClearSubDep1Id( Buff->getRequiredClearSubDep1Id() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ClearSubDep2UNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamClearSubDep1Buff* chk = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( schema->getTableClearSubDep1()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClearSubDep1TenantId(),
						Buff->getRequiredClearSubDep1Id() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ClearSubDep1 to table ClearSubDep1" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamClearSubDep2Buff* buff = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( schema->getTableClearDep()->createClearDep( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep2Buff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep2Buff*>* subdictClearSubDep1Idx;
		auto searchDictByClearSubDep1Idx = dictByClearSubDep1Idx->find( keyClearSubDep1Idx );
		if( searchDictByClearSubDep1Idx != dictByClearSubDep1Idx->end() ) {
			subdictClearSubDep1Idx = searchDictByClearSubDep1Idx->second;
		}
		else {
			subdictClearSubDep1Idx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep2Buff*>();
			dictByClearSubDep1Idx->insert( std::map<cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamClearSubDep2Buff*>*>::value_type( keyClearSubDep1Idx, subdictClearSubDep1Idx ) );
		}
		subdictClearSubDep1Idx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep2Buff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamClearSubDep2ByUNameIdxKey, cfbam::CFBamClearSubDep2Buff*>::value_type( keyUNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamClearSubDep2Buff* CFBamRamClearSubDep2Table::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamClearSubDep2Buff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamClearSubDep2Buff* CFBamRamClearSubDep2Table::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamClearSubDep2Buff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator end = dictByPKey->end();
		cfbam::CFBamClearSubDep2Buff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::readDerivedByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readDerivedByClearDepIdx" );
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*> buffList = schema->getTableClearDep()->readDerivedByClearDepIdx( Authorization,
			TenantId,
			RelationId );
		cfbam::CFBamClearDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*> buffList = schema->getTableClearDep()->readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		cfbam::CFBamClearDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::readDerivedByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id )
	{
		static const std::string S_ProcName( "readDerivedByClearSubDep1Idx" );
		cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey key;
		key.setRequiredClearSubDep1TenantId( ClearSubDep1TenantId );
		key.setRequiredClearSubDep1Id( ClearSubDep1Id );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> recVec;
		cfbam::CFBamClearSubDep2Buff* clone;
		auto searchDictByClearSubDep1Idx = dictByClearSubDep1Idx->find( key );
		if( searchDictByClearSubDep1Idx != dictByClearSubDep1Idx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamClearSubDep2Buff*>* subdictClearSubDep1Idx = searchDictByClearSubDep1Idx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearSubDep2Buff*>::iterator iter = subdictClearSubDep1Idx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearSubDep2Buff*>::iterator end = subdictClearSubDep1Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamClearSubDep2Buff* CFBamRamClearSubDep2Table::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamClearSubDep2ByUNameIdxKey key;
		key.setRequiredClearSubDep1TenantId( ClearSubDep1TenantId );
		key.setRequiredClearSubDep1Id( ClearSubDep1Id );
		key.setRequiredName( Name );
		cfbam::CFBamClearSubDep2Buff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamClearSubDep2Buff* CFBamRamClearSubDep2Table::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamClearSubDep2Buff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamClearSubDep2Buff* CFBamRamClearSubDep2Table::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamClearSubDep2Buff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff ) );
	}

	cfbam::CFBamClearSubDep2Buff* CFBamRamClearSubDep2Table::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamClearSubDep2Buff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamClearSubDep2Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamClearSubDep2Buff* CFBamRamClearSubDep2Table::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamClearSubDep2Buff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamClearSubDep2Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::readBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readBuffByClearDepIdx" );
		cfbam::CFBamClearSubDep2Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> buffList = readDerivedByClearDepIdx( Authorization,
			TenantId,
			RelationId );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamClearDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamClearSubDep2Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamClearDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::readBuffByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id )
	{
		static const std::string S_ProcName( "readBuffByClearSubDep1Idx" );
		cfbam::CFBamClearSubDep2Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> buffList = readDerivedByClearSubDep1Idx( Authorization,
			ClearSubDep1TenantId,
			ClearSubDep1Id );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamClearSubDep2Buff* CFBamRamClearSubDep2Table::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamClearSubDep2Buff* buff = readDerivedByUNameIdx( Authorization,
			ClearSubDep1TenantId,
			ClearSubDep1Id,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::pageBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByClearDepIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> CFBamRamClearSubDep2Table::pageBuffByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByClearSubDep1Idx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamClearSubDep2Buff* CFBamRamClearSubDep2Table::updateClearSubDep2( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamClearSubDep2Buff* Buff )
	{
		static const std::string S_ProcName( "updateClearSubDep2" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in ClearSubDep2 for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamClearSubDep2Buff* existing = searchExisting->second;

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
		cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey existingKeyClearSubDep1Idx;
		existingKeyClearSubDep1Idx.setRequiredClearSubDep1TenantId( existing->getRequiredClearSubDep1TenantId() );
		existingKeyClearSubDep1Idx.setRequiredClearSubDep1Id( existing->getRequiredClearSubDep1Id() );
		cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey newKeyClearSubDep1Idx;
		newKeyClearSubDep1Idx.setRequiredClearSubDep1TenantId( Buff->getRequiredClearSubDep1TenantId() );
		newKeyClearSubDep1Idx.setRequiredClearSubDep1Id( Buff->getRequiredClearSubDep1Id() );
		cfbam::CFBamClearSubDep2ByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredClearSubDep1TenantId( existing->getRequiredClearSubDep1TenantId() );
		existingKeyUNameIdx.setRequiredClearSubDep1Id( existing->getRequiredClearSubDep1Id() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamClearSubDep2ByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredClearSubDep1TenantId( Buff->getRequiredClearSubDep1TenantId() );
		newKeyUNameIdx.setRequiredClearSubDep1Id( Buff->getRequiredClearSubDep1Id() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ClearSubDep2UNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamClearDepBuff* chk = dynamic_cast<cfbam::CFBamClearDepBuff*>( schema->getTableClearDep()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table ClearDep" );
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
				cfbam::CFBamClearSubDep1Buff* chk = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( schema->getTableClearSubDep1()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClearSubDep1TenantId(),
						Buff->getRequiredClearSubDep1Id() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ClearSubDep1 to table ClearSubDep1" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( schema->getTableClearDep()->updateClearDep( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep2Buff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep2Buff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamClearSubDep2Buff*>* subdictClearSubDep1Idx;
		auto searchDictByClearSubDep1Idx = dictByClearSubDep1Idx->find( existingKeyClearSubDep1Idx );
		if( searchDictByClearSubDep1Idx != dictByClearSubDep1Idx->end() ) {
			subdictClearSubDep1Idx = searchDictByClearSubDep1Idx->second;
			auto searchSubDict = subdictClearSubDep1Idx->find( pkey );
			if( searchSubDict != subdictClearSubDep1Idx->end() ) {
				subdictClearSubDep1Idx->erase( searchSubDict );
			}
			if( subdictClearSubDep1Idx->size() <= 0 ) {
				delete subdictClearSubDep1Idx;
				dictByClearSubDep1Idx->erase( searchDictByClearSubDep1Idx );
			}
			subdictClearSubDep1Idx = NULL;
		}
		auto searchNewKeyDictByClearSubDep1Idx = dictByClearSubDep1Idx->find( newKeyClearSubDep1Idx );
		if( searchNewKeyDictByClearSubDep1Idx != dictByClearSubDep1Idx->end() ) {
			subdictClearSubDep1Idx = searchNewKeyDictByClearSubDep1Idx->second;
		}
		else {
			subdictClearSubDep1Idx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep2Buff*>();
			dictByClearSubDep1Idx->insert( std::map<cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamClearSubDep2Buff*>*>::value_type( newKeyClearSubDep1Idx, subdictClearSubDep1Idx ) );
		}
		subdictClearSubDep1Idx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep2Buff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamClearSubDep2ByUNameIdxKey, cfbam::CFBamClearSubDep2Buff*>::value_type( newKeyUNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamClearSubDep2Buff* buff;
		if( existing->getClassCode() == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamClearSubDep2Buff* Buff )
	{
		static const std::string S_ProcName( "deleteClearSubDep2" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamClearSubDep2Buff* existing = searchExisting->second;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> arrCheckClearDep = schema->getTableClearSubDep3()->readDerivedByClearSubDep2Idx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		if( arrCheckClearDep.size() > 0 ) {
			schema->getTableClearSubDep3()->deleteClearSubDep3ByClearSubDep2Idx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		}
		cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey keyClearSubDep1Idx;
		keyClearSubDep1Idx.setRequiredClearSubDep1TenantId( existing->getRequiredClearSubDep1TenantId() );
		keyClearSubDep1Idx.setRequiredClearSubDep1Id( existing->getRequiredClearSubDep1Id() );
		cfbam::CFBamClearSubDep2ByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredClearSubDep1TenantId( existing->getRequiredClearSubDep1TenantId() );
		keyUNameIdx.setRequiredClearSubDep1Id( existing->getRequiredClearSubDep1Id() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep2Buff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByClearSubDep1Idx = dictByClearSubDep1Idx->find( keyClearSubDep1Idx );
		if( searchDictByClearSubDep1Idx != dictByClearSubDep1Idx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamClearSubDep2Buff*>* subdictClearSubDep1Idx = searchDictByClearSubDep1Idx->second;
			auto searchSubDict = subdictClearSubDep1Idx->find( pkey );
			if( searchSubDict != subdictClearSubDep1Idx->end() ) {
				subdictClearSubDep1Idx->erase( searchSubDict );
			}
			subdictClearSubDep1Idx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		schema->getTableClearDep()->deleteClearDep( Authorization,
			Buff );
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2ByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearSubDep1TenantId,
			const int64_t argClearSubDep1Id )
	{
		cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey key;
		key.setRequiredClearSubDep1TenantId( argClearSubDep1TenantId );
		key.setRequiredClearSubDep1Id( argClearSubDep1Id );
		deleteClearSubDep2ByClearSubDep1Idx( Authorization, &key );
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2ByClearSubDep1Idx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey* argKey )
	{
		cfbam::CFBamClearSubDep2Buff* cur = NULL;
		cfbam::CFBamClearSubDep2Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep2()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep2( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearSubDep1TenantId,
			const int64_t argClearSubDep1Id,
			const std::string& argName )
	{
		cfbam::CFBamClearSubDep2ByUNameIdxKey key;
		key.setRequiredClearSubDep1TenantId( argClearSubDep1TenantId );
		key.setRequiredClearSubDep1Id( argClearSubDep1Id );
		key.setRequiredName( argName );
		deleteClearSubDep2ByUNameIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamClearSubDep2ByUNameIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep2Buff* cur = NULL;
		cfbam::CFBamClearSubDep2Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep2()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep2( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId )
	{
		cfbam::CFBamClearDepByClearDepIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredRelationId( argRelationId );
		deleteClearSubDep2ByClearDepIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamClearDepByClearDepIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep2Buff* cur = NULL;
		cfbam::CFBamClearSubDep2Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamClearDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep2()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep2( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamClearDepByDefSchemaIdxKey key;
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
		deleteClearSubDep2ByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamClearDepByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep2Buff* cur = NULL;
		cfbam::CFBamClearSubDep2Buff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamClearDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep2()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep2( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteClearSubDep2ByIdIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamClearSubDep2Buff* cur = NULL;
		cfbam::CFBamClearSubDep2Buff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep2()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep2( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteClearSubDep2ByTenantIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep2Table::deleteClearSubDep2ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep2Buff* cur = NULL;
		cfbam::CFBamClearSubDep2Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep2Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep2()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep2( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep2Table::releasePreparedStatements() {
	}

}
