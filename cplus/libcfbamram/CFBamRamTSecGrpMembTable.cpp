
// Description: C++18 Implementation for an in-memory RAM DbIO for TSecGrpMemb.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
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

	const std::string CFBamRamTSecGrpMembTable::CLASS_NAME( "CFBamRamTSecGrpMembTable" );

	CFBamRamTSecGrpMembTable::CFBamRamTSecGrpMembTable( ICFBamSchema* argSchema )
	: cfsec::ICFSecTSecGrpMembTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>();
		dictByTenantIdx = new std::map<cfsec::CFSecTSecGrpMembByTenantIdxKey,
			std::map<cfsec::CFSecTSecGrpMembPKey,
				cfsec::CFSecTSecGrpMembBuff*>*>();
		dictByGroupIdx = new std::map<cfsec::CFSecTSecGrpMembByGroupIdxKey,
			std::map<cfsec::CFSecTSecGrpMembPKey,
				cfsec::CFSecTSecGrpMembBuff*>*>();
		dictByUserIdx = new std::map<cfsec::CFSecTSecGrpMembByUserIdxKey,
			std::map<cfsec::CFSecTSecGrpMembPKey,
				cfsec::CFSecTSecGrpMembBuff*>*>();
		dictByUUserIdx = new std::map<cfsec::CFSecTSecGrpMembByUUserIdxKey, cfsec::CFSecTSecGrpMembBuff*>();
	}

	CFBamRamTSecGrpMembTable::~CFBamRamTSecGrpMembTable() {
		if( dictByTenantIdx != NULL ) {
			for( auto iterDict = dictByTenantIdx->begin(); iterDict != dictByTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantIdx;
			dictByTenantIdx = NULL;
		}
		if( dictByGroupIdx != NULL ) {
			for( auto iterDict = dictByGroupIdx->begin(); iterDict != dictByGroupIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByGroupIdx;
			dictByGroupIdx = NULL;
		}
		if( dictByUserIdx != NULL ) {
			for( auto iterDict = dictByUserIdx->begin(); iterDict != dictByUserIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByUserIdx;
			dictByUserIdx = NULL;
		}
		if( dictByUUserIdx != NULL ) {
			delete dictByUUserIdx;
			dictByUUserIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfsec::CFSecTSecGrpMembBuff* elt;
			std::map<cfsec::CFSecTSecGrpMembPKey,
				cfsec::CFSecTSecGrpMembBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfsec::CFSecTSecGrpMembPKey,
					cfsec::CFSecTSecGrpMembBuff*>::iterator cur = dictByPKey->begin();
				cur != end;
				cur ++ )
			{
				elt = cur->second;
				if( elt != NULL ) {
					delete elt;
					elt = NULL;
					cur->second = NULL;
				}
			}
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfsec::CFSecTSecGrpMembBuff* CFBamRamTSecGrpMembTable::createTSecGrpMemb( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecTSecGrpMembBuff* Buff )
	{
		static const std::string S_ProcName( "createTSecGrpMemb" );
		cfsec::CFSecTSecGrpMembPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGrpMembId( dynamic_cast<CFBamRamTenantTable*>( schema->getTableTenant() )->nextTSecGrpMembIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredTSecGrpMembId( pkey.getRequiredTSecGrpMembId() );
		cfsec::CFSecTSecGrpMembByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfsec::CFSecTSecGrpMembByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyGroupIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		cfsec::CFSecTSecGrpMembByUserIdxKey keyUserIdx;
		keyUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		cfsec::CFSecTSecGrpMembByUUserIdxKey keyUUserIdx;
		keyUUserIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUUserIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		keyUUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUUserIdx = dictByUUserIdx->find( keyUUserIdx );
		if( searchDictByUUserIdx != dictByUUserIdx->end() ) {
			std::string Msg( "Duplicate key detected for index TSecGrpMembUUserIdx " + keyUUserIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		{
			bool allNull = true;
			allNull = false;
			if( ! allNull ) {
				cfsec::CFSecTenantBuff* chk = dynamic_cast<cfsec::CFSecTenantBuff*>( schema->getTableTenant()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Owner relationship TSecGrpMembTenant to table Tenant" );
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
			allNull = false;
			if( ! allNull ) {
				cfsec::CFSecTSecGroupBuff* chk = dynamic_cast<cfsec::CFSecTSecGroupBuff*>( schema->getTableTSecGroup()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTSecGroupId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship TSecGrpMembGroup to table TSecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfsec::CFSecTSecGrpMembBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>();
			dictByTenantIdx->insert( std::map<cfsec::CFSecTSecGrpMembByTenantIdxKey,
				std::map<cfsec::CFSecTSecGrpMembPKey,
					cfsec::CFSecTSecGrpMembBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>* subdictGroupIdx;
		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			subdictGroupIdx = searchDictByGroupIdx->second;
		}
		else {
			subdictGroupIdx = new std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>();
			dictByGroupIdx->insert( std::map<cfsec::CFSecTSecGrpMembByGroupIdxKey,
				std::map<cfsec::CFSecTSecGrpMembPKey,
					cfsec::CFSecTSecGrpMembBuff*>*>::value_type( keyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>* subdictUserIdx;
		auto searchDictByUserIdx = dictByUserIdx->find( keyUserIdx );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			subdictUserIdx = searchDictByUserIdx->second;
		}
		else {
			subdictUserIdx = new std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>();
			dictByUserIdx->insert( std::map<cfsec::CFSecTSecGrpMembByUserIdxKey,
				std::map<cfsec::CFSecTSecGrpMembPKey,
					cfsec::CFSecTSecGrpMembBuff*>*>::value_type( keyUserIdx, subdictUserIdx ) );
		}
		subdictUserIdx->insert( std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>::value_type( pkey, buff ) );

		dictByUUserIdx->insert( std::map<cfsec::CFSecTSecGrpMembByUUserIdxKey, cfsec::CFSecTSecGrpMembBuff*>::value_type( keyUUserIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfsec::CFSecTSecGrpMembBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfsec::CFSecTSecGrpMembBuff* CFBamRamTSecGrpMembTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpMembPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfsec::CFSecTSecGrpMembBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecTSecGrpMembBuff* CFBamRamTSecGrpMembTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpMembPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfsec::CFSecTSecGrpMembBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> CFBamRamTSecGrpMembTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> retVec;
		std::map<cfsec::CFSecTSecGrpMembPKey,
			cfsec::CFSecTSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecTSecGrpMembPKey,
			cfsec::CFSecTSecGrpMembBuff*>::iterator end = dictByPKey->end();
		cfsec::CFSecTSecGrpMembBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> CFBamRamTSecGrpMembTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfsec::CFSecTSecGrpMembByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> recVec;
		cfsec::CFSecTSecGrpMembBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfsec::CFSecTSecGrpMembPKey,
				 cfsec::CFSecTSecGrpMembBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfsec::CFSecTSecGrpMembPKey,
				cfsec::CFSecTSecGrpMembBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfsec::CFSecTSecGrpMembPKey,
				cfsec::CFSecTSecGrpMembBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> CFBamRamTSecGrpMembTable::readDerivedByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		static const std::string S_ProcName( "readDerivedByGroupIdx" );
		cfsec::CFSecTSecGrpMembByGroupIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> recVec;
		cfsec::CFSecTSecGrpMembBuff* clone;
		auto searchDictByGroupIdx = dictByGroupIdx->find( key );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfsec::CFSecTSecGrpMembPKey,
				 cfsec::CFSecTSecGrpMembBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			std::map<cfsec::CFSecTSecGrpMembPKey,
				cfsec::CFSecTSecGrpMembBuff*>::iterator iter = subdictGroupIdx->begin();
			std::map<cfsec::CFSecTSecGrpMembPKey,
				cfsec::CFSecTSecGrpMembBuff*>::iterator end = subdictGroupIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> CFBamRamTSecGrpMembTable::readDerivedByUserIdx( const cfsec::CFSecAuthorization* Authorization,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readDerivedByUserIdx" );
		cfsec::CFSecTSecGrpMembByUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> recVec;
		cfsec::CFSecTSecGrpMembBuff* clone;
		auto searchDictByUserIdx = dictByUserIdx->find( key );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			std::map<cfsec::CFSecTSecGrpMembPKey,
				 cfsec::CFSecTSecGrpMembBuff*>* subdictUserIdx = searchDictByUserIdx->second;
			std::map<cfsec::CFSecTSecGrpMembPKey,
				cfsec::CFSecTSecGrpMembBuff*>::iterator iter = subdictUserIdx->begin();
			std::map<cfsec::CFSecTSecGrpMembPKey,
				cfsec::CFSecTSecGrpMembBuff*>::iterator end = subdictUserIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfsec::CFSecTSecGrpMembBuff* CFBamRamTSecGrpMembTable::readDerivedByUUserIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readDerivedByUUserIdx" );
		cfsec::CFSecTSecGrpMembByUUserIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		key.setRequiredSecUserId( SecUserId );
		cfsec::CFSecTSecGrpMembBuff* buff;
		auto searchDictByUUserIdx = dictByUUserIdx->find( key );
		if( searchDictByUUserIdx != dictByUUserIdx->end() ) {
			buff = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( searchDictByUUserIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecTSecGrpMembBuff* CFBamRamTSecGrpMembTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpMembId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfsec::CFSecTSecGrpMembPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGrpMembId( TSecGrpMembId );
		cfsec::CFSecTSecGrpMembBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecTSecGrpMembBuff* CFBamRamTSecGrpMembTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpMembPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfsec::CFSecTSecGrpMembBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfsec::CFSecTSecGrpMembBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff ) );
	}

	cfsec::CFSecTSecGrpMembBuff* CFBamRamTSecGrpMembTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpMembPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfsec::CFSecTSecGrpMembBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> CFBamRamTSecGrpMembTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfsec::CFSecTSecGrpMembBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecTSecGrpMembBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> CFBamRamTSecGrpMembTable::pageAllBuff( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfsec::CFSecTSecGrpMembBuff* CFBamRamTSecGrpMembTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpMembId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfsec::CFSecTSecGrpMembBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			TSecGrpMembId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecTSecGrpMembBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> CFBamRamTSecGrpMembTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfsec::CFSecTSecGrpMembBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecTSecGrpMembBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> CFBamRamTSecGrpMembTable::readBuffByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		static const std::string S_ProcName( "readBuffByGroupIdx" );
		cfsec::CFSecTSecGrpMembBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> buffList = readDerivedByGroupIdx( Authorization,
			TenantId,
			TSecGroupId );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecTSecGrpMembBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> CFBamRamTSecGrpMembTable::readBuffByUserIdx( const cfsec::CFSecAuthorization* Authorization,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readBuffByUserIdx" );
		cfsec::CFSecTSecGrpMembBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> buffList = readDerivedByUserIdx( Authorization,
			SecUserId );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecTSecGrpMembBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecTSecGrpMembBuff* CFBamRamTSecGrpMembTable::readBuffByUUserIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readBuffByUUserIdx" );
		cfsec::CFSecTSecGrpMembBuff* buff = readDerivedByUUserIdx( Authorization,
			TenantId,
			TSecGroupId,
			SecUserId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecTSecGrpMembBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> CFBamRamTSecGrpMembTable::pageBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId )
	{
		static const std::string S_ProcName( "pageBuffByTenantIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> CFBamRamTSecGrpMembTable::pageBuffByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId )
	{
		static const std::string S_ProcName( "pageBuffByGroupIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> CFBamRamTSecGrpMembTable::pageBuffByUserIdx( const cfsec::CFSecAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId )
	{
		static const std::string S_ProcName( "pageBuffByUserIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfsec::CFSecTSecGrpMembBuff* CFBamRamTSecGrpMembTable::updateTSecGrpMemb( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecTSecGrpMembBuff* Buff )
	{
		static const std::string S_ProcName( "updateTSecGrpMemb" );
		cfsec::CFSecTSecGrpMembPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGrpMembId( Buff->getRequiredTSecGrpMembId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in TSecGrpMemb for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfsec::CFSecTSecGrpMembBuff* existing = searchExisting->second;

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
		if( existing->getRequiredRevision() != Buff->getRequiredRevision() ) {
			std::string Msg( "Collision detected for TSecGrpMemb primary key " );
			Msg.append( pkey.toString() );
			Msg.append( " existing revision " );
			Msg.append( std::to_string( existing->getRequiredRevision() ) );
			Msg.append( " argument buffer revision " );
			Msg.append( std::to_string( Buff->getRequiredRevision() ) );
			delete Buff;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}
		cfsec::CFSecTSecGrpMembByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfsec::CFSecTSecGrpMembByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfsec::CFSecTSecGrpMembByGroupIdxKey existingKeyGroupIdx;
		existingKeyGroupIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyGroupIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		cfsec::CFSecTSecGrpMembByGroupIdxKey newKeyGroupIdx;
		newKeyGroupIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyGroupIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		cfsec::CFSecTSecGrpMembByUserIdxKey existingKeyUserIdx;
		existingKeyUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		cfsec::CFSecTSecGrpMembByUserIdxKey newKeyUserIdx;
		newKeyUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		cfsec::CFSecTSecGrpMembByUUserIdxKey existingKeyUUserIdx;
		existingKeyUUserIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUUserIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		existingKeyUUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		cfsec::CFSecTSecGrpMembByUUserIdxKey newKeyUUserIdx;
		newKeyUUserIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUUserIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		newKeyUUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		// Check unique indexes

		if( existingKeyUUserIdx != newKeyUUserIdx ) {
			auto searchDictByUUserIdx = dictByUUserIdx->find( newKeyUUserIdx );
			if( searchDictByUUserIdx != dictByUUserIdx->end() ) {
				std::string Msg( "Duplicate key detected for index TSecGrpMembUUserIdx " + newKeyUUserIdx.toString() );
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
				cfsec::CFSecTenantBuff* chk = dynamic_cast<cfsec::CFSecTenantBuff*>( schema->getTableTenant()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Owner relationship TSecGrpMembTenant to table Tenant" );
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
				cfsec::CFSecTSecGroupBuff* chk = dynamic_cast<cfsec::CFSecTSecGroupBuff*>( schema->getTableTSecGroup()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTSecGroupId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship TSecGrpMembGroup to table TSecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfsec::CFSecTSecGrpMembBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfsec::CFSecTSecGrpMembBuff" );
			std::string Msg( "Unsupported buffer class " );
			Msg.append( cflib::CFLib::formatClassCode( Buff->getClassCode() ) );
			Msg.append( S_IsNotA );
			delete Buff;
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				Msg );
		}
		*existing = *Buff;
		existing->setRequiredRevision( existing->getRequiredRevision() + 1 );

		dictByPKey->insert( std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecTSecGrpMembPKey,
			 cfsec::CFSecTSecGrpMembBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( existingKeyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			if( subdictTenantIdx->size() <= 0 ) {
				delete subdictTenantIdx;
				dictByTenantIdx->erase( searchDictByTenantIdx );
			}
			subdictTenantIdx = NULL;
		}
		auto searchNewKeyDictByTenantIdx = dictByTenantIdx->find( newKeyTenantIdx );
		if( searchNewKeyDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchNewKeyDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>();
			dictByTenantIdx->insert( std::map<cfsec::CFSecTSecGrpMembByTenantIdxKey,
				std::map<cfsec::CFSecTSecGrpMembPKey,
					cfsec::CFSecTSecGrpMembBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecTSecGrpMembPKey,
			 cfsec::CFSecTSecGrpMembBuff*>* subdictGroupIdx;
		auto searchDictByGroupIdx = dictByGroupIdx->find( existingKeyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			subdictGroupIdx = searchDictByGroupIdx->second;
			auto searchSubDict = subdictGroupIdx->find( pkey );
			if( searchSubDict != subdictGroupIdx->end() ) {
				subdictGroupIdx->erase( searchSubDict );
			}
			if( subdictGroupIdx->size() <= 0 ) {
				delete subdictGroupIdx;
				dictByGroupIdx->erase( searchDictByGroupIdx );
			}
			subdictGroupIdx = NULL;
		}
		auto searchNewKeyDictByGroupIdx = dictByGroupIdx->find( newKeyGroupIdx );
		if( searchNewKeyDictByGroupIdx != dictByGroupIdx->end() ) {
			subdictGroupIdx = searchNewKeyDictByGroupIdx->second;
		}
		else {
			subdictGroupIdx = new std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>();
			dictByGroupIdx->insert( std::map<cfsec::CFSecTSecGrpMembByGroupIdxKey,
				std::map<cfsec::CFSecTSecGrpMembPKey,
					cfsec::CFSecTSecGrpMembBuff*>*>::value_type( newKeyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecTSecGrpMembPKey,
			 cfsec::CFSecTSecGrpMembBuff*>* subdictUserIdx;
		auto searchDictByUserIdx = dictByUserIdx->find( existingKeyUserIdx );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			subdictUserIdx = searchDictByUserIdx->second;
			auto searchSubDict = subdictUserIdx->find( pkey );
			if( searchSubDict != subdictUserIdx->end() ) {
				subdictUserIdx->erase( searchSubDict );
			}
			if( subdictUserIdx->size() <= 0 ) {
				delete subdictUserIdx;
				dictByUserIdx->erase( searchDictByUserIdx );
			}
			subdictUserIdx = NULL;
		}
		auto searchNewKeyDictByUserIdx = dictByUserIdx->find( newKeyUserIdx );
		if( searchNewKeyDictByUserIdx != dictByUserIdx->end() ) {
			subdictUserIdx = searchNewKeyDictByUserIdx->second;
		}
		else {
			subdictUserIdx = new std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>();
			dictByUserIdx->insert( std::map<cfsec::CFSecTSecGrpMembByUserIdxKey,
				std::map<cfsec::CFSecTSecGrpMembPKey,
					cfsec::CFSecTSecGrpMembBuff*>*>::value_type( newKeyUserIdx, subdictUserIdx ) );
		}
		subdictUserIdx->insert( std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>::value_type( pkey, existing ) );

		auto removalDictByUUserIdx = dictByUUserIdx->find( existingKeyUUserIdx );
		if( removalDictByUUserIdx != dictByUUserIdx->end() ) {
			dictByUUserIdx->erase( removalDictByUUserIdx );
		}
		dictByUUserIdx->insert( std::map<cfsec::CFSecTSecGrpMembByUUserIdxKey, cfsec::CFSecTSecGrpMembBuff*>::value_type( newKeyUUserIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfsec::CFSecTSecGrpMembBuff* buff;
		if( existing->getClassCode() == cfsec::CFSecTSecGrpMembBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamTSecGrpMembTable::deleteTSecGrpMemb( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecTSecGrpMembBuff* Buff )
	{
		static const std::string S_ProcName( "deleteTSecGrpMemb" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfsec::CFSecTSecGrpMembPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGrpMembId( Buff->getRequiredTSecGrpMembId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfsec::CFSecTSecGrpMembBuff* existing = searchExisting->second;
		cfsec::CFSecTSecGrpMembByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfsec::CFSecTSecGrpMembByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyGroupIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		cfsec::CFSecTSecGrpMembByUserIdxKey keyUserIdx;
		keyUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		cfsec::CFSecTSecGrpMembByUUserIdxKey keyUUserIdx;
		keyUUserIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUUserIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		keyUUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfsec::CFSecTSecGrpMembPKey, cfsec::CFSecTSecGrpMembBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfsec::CFSecTSecGrpMembPKey,
				 cfsec::CFSecTSecGrpMembBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfsec::CFSecTSecGrpMembPKey,
				 cfsec::CFSecTSecGrpMembBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			auto searchSubDict = subdictGroupIdx->find( pkey );
			if( searchSubDict != subdictGroupIdx->end() ) {
				subdictGroupIdx->erase( searchSubDict );
			}
			subdictGroupIdx = NULL;
		}

		auto searchDictByUserIdx = dictByUserIdx->find( keyUserIdx );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			std::map<cfsec::CFSecTSecGrpMembPKey,
				 cfsec::CFSecTSecGrpMembBuff*>* subdictUserIdx = searchDictByUserIdx->second;
			auto searchSubDict = subdictUserIdx->find( pkey );
			if( searchSubDict != subdictUserIdx->end() ) {
				subdictUserIdx->erase( searchSubDict );
			}
			subdictUserIdx = NULL;
		}

		auto searchDictByUUserIdx = dictByUUserIdx->find( keyUUserIdx );
		if( searchDictByUUserIdx != dictByUUserIdx->end() ) {
			dictByUUserIdx->erase( searchDictByUUserIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamTSecGrpMembTable::deleteTSecGrpMembByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTSecGrpMembId )
	{
		cfsec::CFSecTSecGrpMembPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGrpMembId( argTSecGrpMembId );
		deleteTSecGrpMembByIdIdx( Authorization, &key );
	}

	void CFBamRamTSecGrpMembTable::deleteTSecGrpMembByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpMembPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfsec::CFSecTSecGrpMembBuff* cur = NULL;
		cfsec::CFSecTSecGrpMembBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> matchSet;
		std::map<cfsec::CFSecTSecGrpMembPKey,
			cfsec::CFSecTSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecTSecGrpMembPKey,
			cfsec::CFSecTSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpMembId() );
			rereadCur = cur;
			deleteTSecGrpMemb( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamTSecGrpMembTable::deleteTSecGrpMembByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfsec::CFSecTSecGrpMembByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteTSecGrpMembByTenantIdx( Authorization, &key );
	}

	void CFBamRamTSecGrpMembTable::deleteTSecGrpMembByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpMembByTenantIdxKey* argKey )
	{
		cfsec::CFSecTSecGrpMembBuff* cur = NULL;
		cfsec::CFSecTSecGrpMembBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> matchSet;
		std::map<cfsec::CFSecTSecGrpMembPKey,
			cfsec::CFSecTSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecTSecGrpMembPKey,
			cfsec::CFSecTSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpMembId() );
			rereadCur = cur;
			deleteTSecGrpMemb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTSecGrpMembTable::deleteTSecGrpMembByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId )
	{
		cfsec::CFSecTSecGrpMembByGroupIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGroupId( argTSecGroupId );
		deleteTSecGrpMembByGroupIdx( Authorization, &key );
	}

	void CFBamRamTSecGrpMembTable::deleteTSecGrpMembByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpMembByGroupIdxKey* argKey )
	{
		cfsec::CFSecTSecGrpMembBuff* cur = NULL;
		cfsec::CFSecTSecGrpMembBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> matchSet;
		std::map<cfsec::CFSecTSecGrpMembPKey,
			cfsec::CFSecTSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecTSecGrpMembPKey,
			cfsec::CFSecTSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpMembId() );
			rereadCur = cur;
			deleteTSecGrpMemb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTSecGrpMembTable::deleteTSecGrpMembByUserIdx( const cfsec::CFSecAuthorization* Authorization,
			const uuid_ptr_t argSecUserId )
	{
		cfsec::CFSecTSecGrpMembByUserIdxKey key;
		key.setRequiredSecUserId( argSecUserId );
		deleteTSecGrpMembByUserIdx( Authorization, &key );
	}

	void CFBamRamTSecGrpMembTable::deleteTSecGrpMembByUserIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpMembByUserIdxKey* argKey )
	{
		cfsec::CFSecTSecGrpMembBuff* cur = NULL;
		cfsec::CFSecTSecGrpMembBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> matchSet;
		std::map<cfsec::CFSecTSecGrpMembPKey,
			cfsec::CFSecTSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecTSecGrpMembPKey,
			cfsec::CFSecTSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpMembId() );
			rereadCur = cur;
			deleteTSecGrpMemb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTSecGrpMembTable::deleteTSecGrpMembByUUserIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId,
			const uuid_ptr_t argSecUserId )
	{
		cfsec::CFSecTSecGrpMembByUUserIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGroupId( argTSecGroupId );
		key.setRequiredSecUserId( argSecUserId );
		deleteTSecGrpMembByUUserIdx( Authorization, &key );
	}

	void CFBamRamTSecGrpMembTable::deleteTSecGrpMembByUUserIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpMembByUUserIdxKey* argKey )
	{
		cfsec::CFSecTSecGrpMembBuff* cur = NULL;
		cfsec::CFSecTSecGrpMembBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*> matchSet;
		std::map<cfsec::CFSecTSecGrpMembPKey,
			cfsec::CFSecTSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecTSecGrpMembPKey,
			cfsec::CFSecTSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecTSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpMembId() );
			rereadCur = cur;
			deleteTSecGrpMemb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTSecGrpMembTable::releasePreparedStatements() {
	}

}
