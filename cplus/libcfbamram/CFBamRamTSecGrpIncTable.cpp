
// Description: C++18 Implementation for an in-memory RAM DbIO for TSecGrpInc.

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

	const std::string CFBamRamTSecGrpIncTable::CLASS_NAME( "CFBamRamTSecGrpIncTable" );

	CFBamRamTSecGrpIncTable::CFBamRamTSecGrpIncTable( ICFBamSchema* argSchema )
	: cfsec::ICFSecTSecGrpIncTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>();
		dictByTenantIdx = new std::map<cfsec::CFSecTSecGrpIncByTenantIdxKey,
			std::map<cfsec::CFSecTSecGrpIncPKey,
				cfsec::CFSecTSecGrpIncBuff*>*>();
		dictByGroupIdx = new std::map<cfsec::CFSecTSecGrpIncByGroupIdxKey,
			std::map<cfsec::CFSecTSecGrpIncPKey,
				cfsec::CFSecTSecGrpIncBuff*>*>();
		dictByIncludeIdx = new std::map<cfsec::CFSecTSecGrpIncByIncludeIdxKey,
			std::map<cfsec::CFSecTSecGrpIncPKey,
				cfsec::CFSecTSecGrpIncBuff*>*>();
		dictByUIncludeIdx = new std::map<cfsec::CFSecTSecGrpIncByUIncludeIdxKey, cfsec::CFSecTSecGrpIncBuff*>();
	}

	CFBamRamTSecGrpIncTable::~CFBamRamTSecGrpIncTable() {
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
		if( dictByIncludeIdx != NULL ) {
			for( auto iterDict = dictByIncludeIdx->begin(); iterDict != dictByIncludeIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByIncludeIdx;
			dictByIncludeIdx = NULL;
		}
		if( dictByUIncludeIdx != NULL ) {
			delete dictByUIncludeIdx;
			dictByUIncludeIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfsec::CFSecTSecGrpIncBuff* elt;
			std::map<cfsec::CFSecTSecGrpIncPKey,
				cfsec::CFSecTSecGrpIncBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfsec::CFSecTSecGrpIncPKey,
					cfsec::CFSecTSecGrpIncBuff*>::iterator cur = dictByPKey->begin();
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

	cfsec::CFSecTSecGrpIncBuff* CFBamRamTSecGrpIncTable::createTSecGrpInc( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecTSecGrpIncBuff* Buff )
	{
		static const std::string S_ProcName( "createTSecGrpInc" );
		cfsec::CFSecTSecGrpIncPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGrpIncId( dynamic_cast<CFBamRamTenantTable*>( schema->getTableTenant() )->nextTSecGrpIncIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredTSecGrpIncId( pkey.getRequiredTSecGrpIncId() );
		cfsec::CFSecTSecGrpIncByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfsec::CFSecTSecGrpIncByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyGroupIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		cfsec::CFSecTSecGrpIncByIncludeIdxKey keyIncludeIdx;
		keyIncludeIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyIncludeIdx.setRequiredIncludeGroupId( Buff->getRequiredIncludeGroupId() );
		cfsec::CFSecTSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
		keyUIncludeIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUIncludeIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		keyUIncludeIdx.setRequiredIncludeGroupId( Buff->getRequiredIncludeGroupId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUIncludeIdx = dictByUIncludeIdx->find( keyUIncludeIdx );
		if( searchDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
			std::string Msg( "Duplicate key detected for index TSecGrpIncUIncludeIdx " + keyUIncludeIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship TSecGrpIncTenant to table Tenant" );
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
					std::string Msg( "Could not resolve Container relationship TSecGrpIncGroup to table TSecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfsec::CFSecTSecGrpIncBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>();
			dictByTenantIdx->insert( std::map<cfsec::CFSecTSecGrpIncByTenantIdxKey,
				std::map<cfsec::CFSecTSecGrpIncPKey,
					cfsec::CFSecTSecGrpIncBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>* subdictGroupIdx;
		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			subdictGroupIdx = searchDictByGroupIdx->second;
		}
		else {
			subdictGroupIdx = new std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>();
			dictByGroupIdx->insert( std::map<cfsec::CFSecTSecGrpIncByGroupIdxKey,
				std::map<cfsec::CFSecTSecGrpIncPKey,
					cfsec::CFSecTSecGrpIncBuff*>*>::value_type( keyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>* subdictIncludeIdx;
		auto searchDictByIncludeIdx = dictByIncludeIdx->find( keyIncludeIdx );
		if( searchDictByIncludeIdx != dictByIncludeIdx->end() ) {
			subdictIncludeIdx = searchDictByIncludeIdx->second;
		}
		else {
			subdictIncludeIdx = new std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>();
			dictByIncludeIdx->insert( std::map<cfsec::CFSecTSecGrpIncByIncludeIdxKey,
				std::map<cfsec::CFSecTSecGrpIncPKey,
					cfsec::CFSecTSecGrpIncBuff*>*>::value_type( keyIncludeIdx, subdictIncludeIdx ) );
		}
		subdictIncludeIdx->insert( std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>::value_type( pkey, buff ) );

		dictByUIncludeIdx->insert( std::map<cfsec::CFSecTSecGrpIncByUIncludeIdxKey, cfsec::CFSecTSecGrpIncBuff*>::value_type( keyUIncludeIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfsec::CFSecTSecGrpIncBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfsec::CFSecTSecGrpIncBuff* CFBamRamTSecGrpIncTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpIncPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfsec::CFSecTSecGrpIncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecTSecGrpIncBuff* CFBamRamTSecGrpIncTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpIncPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfsec::CFSecTSecGrpIncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> CFBamRamTSecGrpIncTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> retVec;
		std::map<cfsec::CFSecTSecGrpIncPKey,
			cfsec::CFSecTSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecTSecGrpIncPKey,
			cfsec::CFSecTSecGrpIncBuff*>::iterator end = dictByPKey->end();
		cfsec::CFSecTSecGrpIncBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> CFBamRamTSecGrpIncTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfsec::CFSecTSecGrpIncByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> recVec;
		cfsec::CFSecTSecGrpIncBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfsec::CFSecTSecGrpIncPKey,
				 cfsec::CFSecTSecGrpIncBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfsec::CFSecTSecGrpIncPKey,
				cfsec::CFSecTSecGrpIncBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfsec::CFSecTSecGrpIncPKey,
				cfsec::CFSecTSecGrpIncBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> CFBamRamTSecGrpIncTable::readDerivedByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		static const std::string S_ProcName( "readDerivedByGroupIdx" );
		cfsec::CFSecTSecGrpIncByGroupIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> recVec;
		cfsec::CFSecTSecGrpIncBuff* clone;
		auto searchDictByGroupIdx = dictByGroupIdx->find( key );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfsec::CFSecTSecGrpIncPKey,
				 cfsec::CFSecTSecGrpIncBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			std::map<cfsec::CFSecTSecGrpIncPKey,
				cfsec::CFSecTSecGrpIncBuff*>::iterator iter = subdictGroupIdx->begin();
			std::map<cfsec::CFSecTSecGrpIncPKey,
				cfsec::CFSecTSecGrpIncBuff*>::iterator end = subdictGroupIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> CFBamRamTSecGrpIncTable::readDerivedByIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readDerivedByIncludeIdx" );
		cfsec::CFSecTSecGrpIncByIncludeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> recVec;
		cfsec::CFSecTSecGrpIncBuff* clone;
		auto searchDictByIncludeIdx = dictByIncludeIdx->find( key );
		if( searchDictByIncludeIdx != dictByIncludeIdx->end() ) {
			std::map<cfsec::CFSecTSecGrpIncPKey,
				 cfsec::CFSecTSecGrpIncBuff*>* subdictIncludeIdx = searchDictByIncludeIdx->second;
			std::map<cfsec::CFSecTSecGrpIncPKey,
				cfsec::CFSecTSecGrpIncBuff*>::iterator iter = subdictIncludeIdx->begin();
			std::map<cfsec::CFSecTSecGrpIncPKey,
				cfsec::CFSecTSecGrpIncBuff*>::iterator end = subdictIncludeIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfsec::CFSecTSecGrpIncBuff* CFBamRamTSecGrpIncTable::readDerivedByUIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readDerivedByUIncludeIdx" );
		cfsec::CFSecTSecGrpIncByUIncludeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		cfsec::CFSecTSecGrpIncBuff* buff;
		auto searchDictByUIncludeIdx = dictByUIncludeIdx->find( key );
		if( searchDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
			buff = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( searchDictByUIncludeIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecTSecGrpIncBuff* CFBamRamTSecGrpIncTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpIncId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfsec::CFSecTSecGrpIncPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGrpIncId( TSecGrpIncId );
		cfsec::CFSecTSecGrpIncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecTSecGrpIncBuff* CFBamRamTSecGrpIncTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpIncPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfsec::CFSecTSecGrpIncBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfsec::CFSecTSecGrpIncBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff ) );
	}

	cfsec::CFSecTSecGrpIncBuff* CFBamRamTSecGrpIncTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpIncPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfsec::CFSecTSecGrpIncBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> CFBamRamTSecGrpIncTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfsec::CFSecTSecGrpIncBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecTSecGrpIncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> CFBamRamTSecGrpIncTable::pageAllBuff( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfsec::CFSecTSecGrpIncBuff* CFBamRamTSecGrpIncTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpIncId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfsec::CFSecTSecGrpIncBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			TSecGrpIncId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecTSecGrpIncBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> CFBamRamTSecGrpIncTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfsec::CFSecTSecGrpIncBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecTSecGrpIncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> CFBamRamTSecGrpIncTable::readBuffByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		static const std::string S_ProcName( "readBuffByGroupIdx" );
		cfsec::CFSecTSecGrpIncBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> buffList = readDerivedByGroupIdx( Authorization,
			TenantId,
			TSecGroupId );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecTSecGrpIncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> CFBamRamTSecGrpIncTable::readBuffByIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readBuffByIncludeIdx" );
		cfsec::CFSecTSecGrpIncBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> buffList = readDerivedByIncludeIdx( Authorization,
			TenantId,
			IncludeGroupId );
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecTSecGrpIncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecTSecGrpIncBuff* CFBamRamTSecGrpIncTable::readBuffByUIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readBuffByUIncludeIdx" );
		cfsec::CFSecTSecGrpIncBuff* buff = readDerivedByUIncludeIdx( Authorization,
			TenantId,
			TSecGroupId,
			IncludeGroupId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecTSecGrpIncBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> CFBamRamTSecGrpIncTable::pageBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId )
	{
		static const std::string S_ProcName( "pageBuffByTenantIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> CFBamRamTSecGrpIncTable::pageBuffByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId )
	{
		static const std::string S_ProcName( "pageBuffByGroupIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> CFBamRamTSecGrpIncTable::pageBuffByIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t IncludeGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId )
	{
		static const std::string S_ProcName( "pageBuffByIncludeIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfsec::CFSecTSecGrpIncBuff* CFBamRamTSecGrpIncTable::updateTSecGrpInc( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecTSecGrpIncBuff* Buff )
	{
		static const std::string S_ProcName( "updateTSecGrpInc" );
		cfsec::CFSecTSecGrpIncPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGrpIncId( Buff->getRequiredTSecGrpIncId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in TSecGrpInc for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfsec::CFSecTSecGrpIncBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for TSecGrpInc primary key " );
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
		cfsec::CFSecTSecGrpIncByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfsec::CFSecTSecGrpIncByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfsec::CFSecTSecGrpIncByGroupIdxKey existingKeyGroupIdx;
		existingKeyGroupIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyGroupIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		cfsec::CFSecTSecGrpIncByGroupIdxKey newKeyGroupIdx;
		newKeyGroupIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyGroupIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		cfsec::CFSecTSecGrpIncByIncludeIdxKey existingKeyIncludeIdx;
		existingKeyIncludeIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyIncludeIdx.setRequiredIncludeGroupId( existing->getRequiredIncludeGroupId() );
		cfsec::CFSecTSecGrpIncByIncludeIdxKey newKeyIncludeIdx;
		newKeyIncludeIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyIncludeIdx.setRequiredIncludeGroupId( Buff->getRequiredIncludeGroupId() );
		cfsec::CFSecTSecGrpIncByUIncludeIdxKey existingKeyUIncludeIdx;
		existingKeyUIncludeIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUIncludeIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		existingKeyUIncludeIdx.setRequiredIncludeGroupId( existing->getRequiredIncludeGroupId() );
		cfsec::CFSecTSecGrpIncByUIncludeIdxKey newKeyUIncludeIdx;
		newKeyUIncludeIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUIncludeIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		newKeyUIncludeIdx.setRequiredIncludeGroupId( Buff->getRequiredIncludeGroupId() );
		// Check unique indexes

		if( existingKeyUIncludeIdx != newKeyUIncludeIdx ) {
			auto searchDictByUIncludeIdx = dictByUIncludeIdx->find( newKeyUIncludeIdx );
			if( searchDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
				std::string Msg( "Duplicate key detected for index TSecGrpIncUIncludeIdx " + newKeyUIncludeIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship TSecGrpIncTenant to table Tenant" );
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
					std::string Msg( "Could not resolve Container relationship TSecGrpIncGroup to table TSecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfsec::CFSecTSecGrpIncBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfsec::CFSecTSecGrpIncBuff" );
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

		dictByPKey->insert( std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecTSecGrpIncPKey,
			 cfsec::CFSecTSecGrpIncBuff*>* subdictTenantIdx;
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
			subdictTenantIdx = new std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>();
			dictByTenantIdx->insert( std::map<cfsec::CFSecTSecGrpIncByTenantIdxKey,
				std::map<cfsec::CFSecTSecGrpIncPKey,
					cfsec::CFSecTSecGrpIncBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecTSecGrpIncPKey,
			 cfsec::CFSecTSecGrpIncBuff*>* subdictGroupIdx;
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
			subdictGroupIdx = new std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>();
			dictByGroupIdx->insert( std::map<cfsec::CFSecTSecGrpIncByGroupIdxKey,
				std::map<cfsec::CFSecTSecGrpIncPKey,
					cfsec::CFSecTSecGrpIncBuff*>*>::value_type( newKeyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecTSecGrpIncPKey,
			 cfsec::CFSecTSecGrpIncBuff*>* subdictIncludeIdx;
		auto searchDictByIncludeIdx = dictByIncludeIdx->find( existingKeyIncludeIdx );
		if( searchDictByIncludeIdx != dictByIncludeIdx->end() ) {
			subdictIncludeIdx = searchDictByIncludeIdx->second;
			auto searchSubDict = subdictIncludeIdx->find( pkey );
			if( searchSubDict != subdictIncludeIdx->end() ) {
				subdictIncludeIdx->erase( searchSubDict );
			}
			if( subdictIncludeIdx->size() <= 0 ) {
				delete subdictIncludeIdx;
				dictByIncludeIdx->erase( searchDictByIncludeIdx );
			}
			subdictIncludeIdx = NULL;
		}
		auto searchNewKeyDictByIncludeIdx = dictByIncludeIdx->find( newKeyIncludeIdx );
		if( searchNewKeyDictByIncludeIdx != dictByIncludeIdx->end() ) {
			subdictIncludeIdx = searchNewKeyDictByIncludeIdx->second;
		}
		else {
			subdictIncludeIdx = new std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>();
			dictByIncludeIdx->insert( std::map<cfsec::CFSecTSecGrpIncByIncludeIdxKey,
				std::map<cfsec::CFSecTSecGrpIncPKey,
					cfsec::CFSecTSecGrpIncBuff*>*>::value_type( newKeyIncludeIdx, subdictIncludeIdx ) );
		}
		subdictIncludeIdx->insert( std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>::value_type( pkey, existing ) );

		auto removalDictByUIncludeIdx = dictByUIncludeIdx->find( existingKeyUIncludeIdx );
		if( removalDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
			dictByUIncludeIdx->erase( removalDictByUIncludeIdx );
		}
		dictByUIncludeIdx->insert( std::map<cfsec::CFSecTSecGrpIncByUIncludeIdxKey, cfsec::CFSecTSecGrpIncBuff*>::value_type( newKeyUIncludeIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfsec::CFSecTSecGrpIncBuff* buff;
		if( existing->getClassCode() == cfsec::CFSecTSecGrpIncBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamTSecGrpIncTable::deleteTSecGrpInc( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecTSecGrpIncBuff* Buff )
	{
		static const std::string S_ProcName( "deleteTSecGrpInc" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfsec::CFSecTSecGrpIncPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGrpIncId( Buff->getRequiredTSecGrpIncId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfsec::CFSecTSecGrpIncBuff* existing = searchExisting->second;
		cfsec::CFSecTSecGrpIncByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfsec::CFSecTSecGrpIncByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyGroupIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		cfsec::CFSecTSecGrpIncByIncludeIdxKey keyIncludeIdx;
		keyIncludeIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyIncludeIdx.setRequiredIncludeGroupId( existing->getRequiredIncludeGroupId() );
		cfsec::CFSecTSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
		keyUIncludeIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUIncludeIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		keyUIncludeIdx.setRequiredIncludeGroupId( existing->getRequiredIncludeGroupId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfsec::CFSecTSecGrpIncPKey, cfsec::CFSecTSecGrpIncBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfsec::CFSecTSecGrpIncPKey,
				 cfsec::CFSecTSecGrpIncBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfsec::CFSecTSecGrpIncPKey,
				 cfsec::CFSecTSecGrpIncBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			auto searchSubDict = subdictGroupIdx->find( pkey );
			if( searchSubDict != subdictGroupIdx->end() ) {
				subdictGroupIdx->erase( searchSubDict );
			}
			subdictGroupIdx = NULL;
		}

		auto searchDictByIncludeIdx = dictByIncludeIdx->find( keyIncludeIdx );
		if( searchDictByIncludeIdx != dictByIncludeIdx->end() ) {
			std::map<cfsec::CFSecTSecGrpIncPKey,
				 cfsec::CFSecTSecGrpIncBuff*>* subdictIncludeIdx = searchDictByIncludeIdx->second;
			auto searchSubDict = subdictIncludeIdx->find( pkey );
			if( searchSubDict != subdictIncludeIdx->end() ) {
				subdictIncludeIdx->erase( searchSubDict );
			}
			subdictIncludeIdx = NULL;
		}

		auto searchDictByUIncludeIdx = dictByUIncludeIdx->find( keyUIncludeIdx );
		if( searchDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
			dictByUIncludeIdx->erase( searchDictByUIncludeIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamTSecGrpIncTable::deleteTSecGrpIncByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTSecGrpIncId )
	{
		cfsec::CFSecTSecGrpIncPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGrpIncId( argTSecGrpIncId );
		deleteTSecGrpIncByIdIdx( Authorization, &key );
	}

	void CFBamRamTSecGrpIncTable::deleteTSecGrpIncByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpIncPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfsec::CFSecTSecGrpIncBuff* cur = NULL;
		cfsec::CFSecTSecGrpIncBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> matchSet;
		std::map<cfsec::CFSecTSecGrpIncPKey,
			cfsec::CFSecTSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecTSecGrpIncPKey,
			cfsec::CFSecTSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpIncId() );
			rereadCur = cur;
			deleteTSecGrpInc( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamTSecGrpIncTable::deleteTSecGrpIncByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfsec::CFSecTSecGrpIncByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteTSecGrpIncByTenantIdx( Authorization, &key );
	}

	void CFBamRamTSecGrpIncTable::deleteTSecGrpIncByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpIncByTenantIdxKey* argKey )
	{
		cfsec::CFSecTSecGrpIncBuff* cur = NULL;
		cfsec::CFSecTSecGrpIncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> matchSet;
		std::map<cfsec::CFSecTSecGrpIncPKey,
			cfsec::CFSecTSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecTSecGrpIncPKey,
			cfsec::CFSecTSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpIncId() );
			rereadCur = cur;
			deleteTSecGrpInc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTSecGrpIncTable::deleteTSecGrpIncByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId )
	{
		cfsec::CFSecTSecGrpIncByGroupIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGroupId( argTSecGroupId );
		deleteTSecGrpIncByGroupIdx( Authorization, &key );
	}

	void CFBamRamTSecGrpIncTable::deleteTSecGrpIncByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpIncByGroupIdxKey* argKey )
	{
		cfsec::CFSecTSecGrpIncBuff* cur = NULL;
		cfsec::CFSecTSecGrpIncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> matchSet;
		std::map<cfsec::CFSecTSecGrpIncPKey,
			cfsec::CFSecTSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecTSecGrpIncPKey,
			cfsec::CFSecTSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpIncId() );
			rereadCur = cur;
			deleteTSecGrpInc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTSecGrpIncTable::deleteTSecGrpIncByIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argIncludeGroupId )
	{
		cfsec::CFSecTSecGrpIncByIncludeIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredIncludeGroupId( argIncludeGroupId );
		deleteTSecGrpIncByIncludeIdx( Authorization, &key );
	}

	void CFBamRamTSecGrpIncTable::deleteTSecGrpIncByIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpIncByIncludeIdxKey* argKey )
	{
		cfsec::CFSecTSecGrpIncBuff* cur = NULL;
		cfsec::CFSecTSecGrpIncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> matchSet;
		std::map<cfsec::CFSecTSecGrpIncPKey,
			cfsec::CFSecTSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecTSecGrpIncPKey,
			cfsec::CFSecTSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpIncId() );
			rereadCur = cur;
			deleteTSecGrpInc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTSecGrpIncTable::deleteTSecGrpIncByUIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId,
			const int32_t argIncludeGroupId )
	{
		cfsec::CFSecTSecGrpIncByUIncludeIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGroupId( argTSecGroupId );
		key.setRequiredIncludeGroupId( argIncludeGroupId );
		deleteTSecGrpIncByUIncludeIdx( Authorization, &key );
	}

	void CFBamRamTSecGrpIncTable::deleteTSecGrpIncByUIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecTSecGrpIncByUIncludeIdxKey* argKey )
	{
		cfsec::CFSecTSecGrpIncBuff* cur = NULL;
		cfsec::CFSecTSecGrpIncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*> matchSet;
		std::map<cfsec::CFSecTSecGrpIncPKey,
			cfsec::CFSecTSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecTSecGrpIncPKey,
			cfsec::CFSecTSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecTSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecTSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpIncId() );
			rereadCur = cur;
			deleteTSecGrpInc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTSecGrpIncTable::releasePreparedStatements() {
	}

}
