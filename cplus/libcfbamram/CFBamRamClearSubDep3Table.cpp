
// Description: C++18 Implementation for an in-memory RAM DbIO for ClearSubDep3.

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

	const std::string CFBamRamClearSubDep3Table::CLASS_NAME( "CFBamRamClearSubDep3Table" );

	CFBamRamClearSubDep3Table::CFBamRamClearSubDep3Table( ICFBamSchema* argSchema )
	: cfbam::ICFBamClearSubDep3Table()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep3Buff*>();
		dictByClearSubDep2Idx = new std::map<cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearSubDep3Buff*>*>();
		dictByUNameIdx = new std::map<cfbam::CFBamClearSubDep3ByUNameIdxKey, cfbam::CFBamClearSubDep3Buff*>();
	}

	CFBamRamClearSubDep3Table::~CFBamRamClearSubDep3Table() {
		if( dictByClearSubDep2Idx != NULL ) {
			for( auto iterDict = dictByClearSubDep2Idx->begin(); iterDict != dictByClearSubDep2Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByClearSubDep2Idx;
			dictByClearSubDep2Idx = NULL;
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

	cfbam::CFBamClearSubDep3Buff* CFBamRamClearSubDep3Table::createClearSubDep3( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamClearSubDep3Buff* Buff )
	{
		static const std::string S_ProcName( "createClearSubDep3" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey keyClearSubDep2Idx;
		keyClearSubDep2Idx.setRequiredClearSubDep2TenantId( Buff->getRequiredClearSubDep2TenantId() );
		keyClearSubDep2Idx.setRequiredClearSubDep2Id( Buff->getRequiredClearSubDep2Id() );
		cfbam::CFBamClearSubDep3ByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredClearSubDep2TenantId( Buff->getRequiredClearSubDep2TenantId() );
		keyUNameIdx.setRequiredClearSubDep2Id( Buff->getRequiredClearSubDep2Id() );
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
			std::string Msg( "Duplicate key detected for index ClearSubDep3UNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamClearSubDep2Buff* chk = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( schema->getTableClearSubDep2()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClearSubDep2TenantId(),
						Buff->getRequiredClearSubDep2Id() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ClearSubDep2 to table ClearSubDep2" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamClearSubDep3Buff* buff = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( schema->getTableClearDep()->createClearDep( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep3Buff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep3Buff*>* subdictClearSubDep2Idx;
		auto searchDictByClearSubDep2Idx = dictByClearSubDep2Idx->find( keyClearSubDep2Idx );
		if( searchDictByClearSubDep2Idx != dictByClearSubDep2Idx->end() ) {
			subdictClearSubDep2Idx = searchDictByClearSubDep2Idx->second;
		}
		else {
			subdictClearSubDep2Idx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep3Buff*>();
			dictByClearSubDep2Idx->insert( std::map<cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamClearSubDep3Buff*>*>::value_type( keyClearSubDep2Idx, subdictClearSubDep2Idx ) );
		}
		subdictClearSubDep2Idx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep3Buff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamClearSubDep3ByUNameIdxKey, cfbam::CFBamClearSubDep3Buff*>::value_type( keyUNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamClearSubDep3Buff* CFBamRamClearSubDep3Table::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamClearSubDep3Buff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamClearSubDep3Buff* CFBamRamClearSubDep3Table::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamClearSubDep3Buff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator end = dictByPKey->end();
		cfbam::CFBamClearSubDep3Buff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::readDerivedByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readDerivedByClearDepIdx" );
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*> buffList = schema->getTableClearDep()->readDerivedByClearDepIdx( Authorization,
			TenantId,
			RelationId );
		cfbam::CFBamClearDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*> buffList = schema->getTableClearDep()->readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		cfbam::CFBamClearDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::readDerivedByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id )
	{
		static const std::string S_ProcName( "readDerivedByClearSubDep2Idx" );
		cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey key;
		key.setRequiredClearSubDep2TenantId( ClearSubDep2TenantId );
		key.setRequiredClearSubDep2Id( ClearSubDep2Id );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> recVec;
		cfbam::CFBamClearSubDep3Buff* clone;
		auto searchDictByClearSubDep2Idx = dictByClearSubDep2Idx->find( key );
		if( searchDictByClearSubDep2Idx != dictByClearSubDep2Idx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamClearSubDep3Buff*>* subdictClearSubDep2Idx = searchDictByClearSubDep2Idx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearSubDep3Buff*>::iterator iter = subdictClearSubDep2Idx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearSubDep3Buff*>::iterator end = subdictClearSubDep2Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamClearSubDep3Buff* CFBamRamClearSubDep3Table::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamClearSubDep3ByUNameIdxKey key;
		key.setRequiredClearSubDep2TenantId( ClearSubDep2TenantId );
		key.setRequiredClearSubDep2Id( ClearSubDep2Id );
		key.setRequiredName( Name );
		cfbam::CFBamClearSubDep3Buff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamClearSubDep3Buff* CFBamRamClearSubDep3Table::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamClearSubDep3Buff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamClearSubDep3Buff* CFBamRamClearSubDep3Table::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamClearSubDep3Buff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff ) );
	}

	cfbam::CFBamClearSubDep3Buff* CFBamRamClearSubDep3Table::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamClearSubDep3Buff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamClearSubDep3Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamClearSubDep3Buff* CFBamRamClearSubDep3Table::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamClearSubDep3Buff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamClearSubDep3Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::readBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readBuffByClearDepIdx" );
		cfbam::CFBamClearSubDep3Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> buffList = readDerivedByClearDepIdx( Authorization,
			TenantId,
			RelationId );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamClearDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamClearSubDep3Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamClearDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::readBuffByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id )
	{
		static const std::string S_ProcName( "readBuffByClearSubDep2Idx" );
		cfbam::CFBamClearSubDep3Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> buffList = readDerivedByClearSubDep2Idx( Authorization,
			ClearSubDep2TenantId,
			ClearSubDep2Id );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamClearSubDep3Buff* CFBamRamClearSubDep3Table::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamClearSubDep3Buff* buff = readDerivedByUNameIdx( Authorization,
			ClearSubDep2TenantId,
			ClearSubDep2Id,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::pageBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByClearDepIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> CFBamRamClearSubDep3Table::pageBuffByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearSubDep2TenantId,
			const int64_t ClearSubDep2Id,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByClearSubDep2Idx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamClearSubDep3Buff* CFBamRamClearSubDep3Table::updateClearSubDep3( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamClearSubDep3Buff* Buff )
	{
		static const std::string S_ProcName( "updateClearSubDep3" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in ClearSubDep3 for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamClearSubDep3Buff* existing = searchExisting->second;

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
		cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey existingKeyClearSubDep2Idx;
		existingKeyClearSubDep2Idx.setRequiredClearSubDep2TenantId( existing->getRequiredClearSubDep2TenantId() );
		existingKeyClearSubDep2Idx.setRequiredClearSubDep2Id( existing->getRequiredClearSubDep2Id() );
		cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey newKeyClearSubDep2Idx;
		newKeyClearSubDep2Idx.setRequiredClearSubDep2TenantId( Buff->getRequiredClearSubDep2TenantId() );
		newKeyClearSubDep2Idx.setRequiredClearSubDep2Id( Buff->getRequiredClearSubDep2Id() );
		cfbam::CFBamClearSubDep3ByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredClearSubDep2TenantId( existing->getRequiredClearSubDep2TenantId() );
		existingKeyUNameIdx.setRequiredClearSubDep2Id( existing->getRequiredClearSubDep2Id() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamClearSubDep3ByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredClearSubDep2TenantId( Buff->getRequiredClearSubDep2TenantId() );
		newKeyUNameIdx.setRequiredClearSubDep2Id( Buff->getRequiredClearSubDep2Id() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ClearSubDep3UNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamClearSubDep2Buff* chk = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( schema->getTableClearSubDep2()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClearSubDep2TenantId(),
						Buff->getRequiredClearSubDep2Id() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ClearSubDep2 to table ClearSubDep2" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( schema->getTableClearDep()->updateClearDep( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep3Buff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep3Buff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamClearSubDep3Buff*>* subdictClearSubDep2Idx;
		auto searchDictByClearSubDep2Idx = dictByClearSubDep2Idx->find( existingKeyClearSubDep2Idx );
		if( searchDictByClearSubDep2Idx != dictByClearSubDep2Idx->end() ) {
			subdictClearSubDep2Idx = searchDictByClearSubDep2Idx->second;
			auto searchSubDict = subdictClearSubDep2Idx->find( pkey );
			if( searchSubDict != subdictClearSubDep2Idx->end() ) {
				subdictClearSubDep2Idx->erase( searchSubDict );
			}
			if( subdictClearSubDep2Idx->size() <= 0 ) {
				delete subdictClearSubDep2Idx;
				dictByClearSubDep2Idx->erase( searchDictByClearSubDep2Idx );
			}
			subdictClearSubDep2Idx = NULL;
		}
		auto searchNewKeyDictByClearSubDep2Idx = dictByClearSubDep2Idx->find( newKeyClearSubDep2Idx );
		if( searchNewKeyDictByClearSubDep2Idx != dictByClearSubDep2Idx->end() ) {
			subdictClearSubDep2Idx = searchNewKeyDictByClearSubDep2Idx->second;
		}
		else {
			subdictClearSubDep2Idx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep3Buff*>();
			dictByClearSubDep2Idx->insert( std::map<cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamClearSubDep3Buff*>*>::value_type( newKeyClearSubDep2Idx, subdictClearSubDep2Idx ) );
		}
		subdictClearSubDep2Idx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep3Buff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamClearSubDep3ByUNameIdxKey, cfbam::CFBamClearSubDep3Buff*>::value_type( newKeyUNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamClearSubDep3Buff* buff;
		if( existing->getClassCode() == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamClearSubDep3Buff* Buff )
	{
		static const std::string S_ProcName( "deleteClearSubDep3" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamClearSubDep3Buff* existing = searchExisting->second;
		cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey keyClearSubDep2Idx;
		keyClearSubDep2Idx.setRequiredClearSubDep2TenantId( existing->getRequiredClearSubDep2TenantId() );
		keyClearSubDep2Idx.setRequiredClearSubDep2Id( existing->getRequiredClearSubDep2Id() );
		cfbam::CFBamClearSubDep3ByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredClearSubDep2TenantId( existing->getRequiredClearSubDep2TenantId() );
		keyUNameIdx.setRequiredClearSubDep2Id( existing->getRequiredClearSubDep2Id() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep3Buff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByClearSubDep2Idx = dictByClearSubDep2Idx->find( keyClearSubDep2Idx );
		if( searchDictByClearSubDep2Idx != dictByClearSubDep2Idx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamClearSubDep3Buff*>* subdictClearSubDep2Idx = searchDictByClearSubDep2Idx->second;
			auto searchSubDict = subdictClearSubDep2Idx->find( pkey );
			if( searchSubDict != subdictClearSubDep2Idx->end() ) {
				subdictClearSubDep2Idx->erase( searchSubDict );
			}
			subdictClearSubDep2Idx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		schema->getTableClearDep()->deleteClearDep( Authorization,
			Buff );
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3ByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearSubDep2TenantId,
			const int64_t argClearSubDep2Id )
	{
		cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey key;
		key.setRequiredClearSubDep2TenantId( argClearSubDep2TenantId );
		key.setRequiredClearSubDep2Id( argClearSubDep2Id );
		deleteClearSubDep3ByClearSubDep2Idx( Authorization, &key );
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3ByClearSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey* argKey )
	{
		cfbam::CFBamClearSubDep3Buff* cur = NULL;
		cfbam::CFBamClearSubDep3Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep3()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep3( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearSubDep2TenantId,
			const int64_t argClearSubDep2Id,
			const std::string& argName )
	{
		cfbam::CFBamClearSubDep3ByUNameIdxKey key;
		key.setRequiredClearSubDep2TenantId( argClearSubDep2TenantId );
		key.setRequiredClearSubDep2Id( argClearSubDep2Id );
		key.setRequiredName( argName );
		deleteClearSubDep3ByUNameIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamClearSubDep3ByUNameIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep3Buff* cur = NULL;
		cfbam::CFBamClearSubDep3Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep3()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep3( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId )
	{
		cfbam::CFBamClearDepByClearDepIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredRelationId( argRelationId );
		deleteClearSubDep3ByClearDepIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamClearDepByClearDepIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep3Buff* cur = NULL;
		cfbam::CFBamClearSubDep3Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamClearDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep3()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep3( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteClearSubDep3ByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamClearDepByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep3Buff* cur = NULL;
		cfbam::CFBamClearSubDep3Buff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamClearDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep3()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep3( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteClearSubDep3ByIdIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamClearSubDep3Buff* cur = NULL;
		cfbam::CFBamClearSubDep3Buff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep3()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep3( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteClearSubDep3ByTenantIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep3Table::deleteClearSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep3Buff* cur = NULL;
		cfbam::CFBamClearSubDep3Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep3Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep3Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep3()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep3( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep3Table::releasePreparedStatements() {
	}

}
