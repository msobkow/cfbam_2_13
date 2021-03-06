
// Description: C++18 Implementation for an in-memory RAM DbIO for SecGrpInc.

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

	const std::string CFBamRamSecGrpIncTable::CLASS_NAME( "CFBamRamSecGrpIncTable" );

	CFBamRamSecGrpIncTable::CFBamRamSecGrpIncTable( ICFBamSchema* argSchema )
	: cfsec::ICFSecSecGrpIncTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>();
		dictByClusterIdx = new std::map<cfsec::CFSecSecGrpIncByClusterIdxKey,
			std::map<cfsec::CFSecSecGrpIncPKey,
				cfsec::CFSecSecGrpIncBuff*>*>();
		dictByGroupIdx = new std::map<cfsec::CFSecSecGrpIncByGroupIdxKey,
			std::map<cfsec::CFSecSecGrpIncPKey,
				cfsec::CFSecSecGrpIncBuff*>*>();
		dictByIncludeIdx = new std::map<cfsec::CFSecSecGrpIncByIncludeIdxKey,
			std::map<cfsec::CFSecSecGrpIncPKey,
				cfsec::CFSecSecGrpIncBuff*>*>();
		dictByUIncludeIdx = new std::map<cfsec::CFSecSecGrpIncByUIncludeIdxKey, cfsec::CFSecSecGrpIncBuff*>();
	}

	CFBamRamSecGrpIncTable::~CFBamRamSecGrpIncTable() {
		if( dictByClusterIdx != NULL ) {
			for( auto iterDict = dictByClusterIdx->begin(); iterDict != dictByClusterIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByClusterIdx;
			dictByClusterIdx = NULL;
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
			cfsec::CFSecSecGrpIncBuff* elt;
			std::map<cfsec::CFSecSecGrpIncPKey,
				cfsec::CFSecSecGrpIncBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfsec::CFSecSecGrpIncPKey,
					cfsec::CFSecSecGrpIncBuff*>::iterator cur = dictByPKey->begin();
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

	cfsec::CFSecSecGrpIncBuff* CFBamRamSecGrpIncTable::createSecGrpInc( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecSecGrpIncBuff* Buff )
	{
		static const std::string S_ProcName( "createSecGrpInc" );
		cfsec::CFSecSecGrpIncPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecGrpIncId( dynamic_cast<CFBamRamClusterTable*>( schema->getTableCluster() )->nextSecGrpIncIdGen( Authorization,
			Buff->getRequiredClusterId() ) );
		Buff->setRequiredClusterId( pkey.getRequiredClusterId() );
		Buff->setRequiredSecGrpIncId( pkey.getRequiredSecGrpIncId() );
		cfsec::CFSecSecGrpIncByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfsec::CFSecSecGrpIncByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyGroupIdx.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
		cfsec::CFSecSecGrpIncByIncludeIdxKey keyIncludeIdx;
		keyIncludeIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyIncludeIdx.setRequiredIncludeGroupId( Buff->getRequiredIncludeGroupId() );
		cfsec::CFSecSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
		keyUIncludeIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyUIncludeIdx.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
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
			std::string Msg( "Duplicate key detected for index SecGrpIncUIncludeIdx " + keyUIncludeIdx.toString() );
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
				cfsec::CFSecClusterBuff* chk = dynamic_cast<cfsec::CFSecClusterBuff*>( schema->getTableCluster()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClusterId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Owner relationship SecGrpIncCluster to table Cluster" );
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
				cfsec::CFSecSecGroupBuff* chk = dynamic_cast<cfsec::CFSecSecGroupBuff*>( schema->getTableSecGroup()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClusterId(),
						Buff->getRequiredSecGroupId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship SecGrpIncGroup to table SecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfsec::CFSecSecGrpIncBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>* subdictClusterIdx;
		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchDictByClusterIdx->second;
		}
		else {
			subdictClusterIdx = new std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>();
			dictByClusterIdx->insert( std::map<cfsec::CFSecSecGrpIncByClusterIdxKey,
				std::map<cfsec::CFSecSecGrpIncPKey,
					cfsec::CFSecSecGrpIncBuff*>*>::value_type( keyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>* subdictGroupIdx;
		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			subdictGroupIdx = searchDictByGroupIdx->second;
		}
		else {
			subdictGroupIdx = new std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>();
			dictByGroupIdx->insert( std::map<cfsec::CFSecSecGrpIncByGroupIdxKey,
				std::map<cfsec::CFSecSecGrpIncPKey,
					cfsec::CFSecSecGrpIncBuff*>*>::value_type( keyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>* subdictIncludeIdx;
		auto searchDictByIncludeIdx = dictByIncludeIdx->find( keyIncludeIdx );
		if( searchDictByIncludeIdx != dictByIncludeIdx->end() ) {
			subdictIncludeIdx = searchDictByIncludeIdx->second;
		}
		else {
			subdictIncludeIdx = new std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>();
			dictByIncludeIdx->insert( std::map<cfsec::CFSecSecGrpIncByIncludeIdxKey,
				std::map<cfsec::CFSecSecGrpIncPKey,
					cfsec::CFSecSecGrpIncBuff*>*>::value_type( keyIncludeIdx, subdictIncludeIdx ) );
		}
		subdictIncludeIdx->insert( std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>::value_type( pkey, buff ) );

		dictByUIncludeIdx->insert( std::map<cfsec::CFSecSecGrpIncByUIncludeIdxKey, cfsec::CFSecSecGrpIncBuff*>::value_type( keyUIncludeIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfsec::CFSecSecGrpIncBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfsec::CFSecSecGrpIncBuff* CFBamRamSecGrpIncTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecSecGrpIncPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfsec::CFSecSecGrpIncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecSecGrpIncBuff* CFBamRamSecGrpIncTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecSecGrpIncPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfsec::CFSecSecGrpIncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> CFBamRamSecGrpIncTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> retVec;
		std::map<cfsec::CFSecSecGrpIncPKey,
			cfsec::CFSecSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecSecGrpIncPKey,
			cfsec::CFSecSecGrpIncBuff*>::iterator end = dictByPKey->end();
		cfsec::CFSecSecGrpIncBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> CFBamRamSecGrpIncTable::readDerivedByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readDerivedByClusterIdx" );
		cfsec::CFSecSecGrpIncByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> recVec;
		cfsec::CFSecSecGrpIncBuff* clone;
		auto searchDictByClusterIdx = dictByClusterIdx->find( key );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfsec::CFSecSecGrpIncPKey,
				 cfsec::CFSecSecGrpIncBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			std::map<cfsec::CFSecSecGrpIncPKey,
				cfsec::CFSecSecGrpIncBuff*>::iterator iter = subdictClusterIdx->begin();
			std::map<cfsec::CFSecSecGrpIncPKey,
				cfsec::CFSecSecGrpIncBuff*>::iterator end = subdictClusterIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> CFBamRamSecGrpIncTable::readDerivedByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		static const std::string S_ProcName( "readDerivedByGroupIdx" );
		cfsec::CFSecSecGrpIncByGroupIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> recVec;
		cfsec::CFSecSecGrpIncBuff* clone;
		auto searchDictByGroupIdx = dictByGroupIdx->find( key );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfsec::CFSecSecGrpIncPKey,
				 cfsec::CFSecSecGrpIncBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			std::map<cfsec::CFSecSecGrpIncPKey,
				cfsec::CFSecSecGrpIncBuff*>::iterator iter = subdictGroupIdx->begin();
			std::map<cfsec::CFSecSecGrpIncPKey,
				cfsec::CFSecSecGrpIncBuff*>::iterator end = subdictGroupIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> CFBamRamSecGrpIncTable::readDerivedByIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readDerivedByIncludeIdx" );
		cfsec::CFSecSecGrpIncByIncludeIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> recVec;
		cfsec::CFSecSecGrpIncBuff* clone;
		auto searchDictByIncludeIdx = dictByIncludeIdx->find( key );
		if( searchDictByIncludeIdx != dictByIncludeIdx->end() ) {
			std::map<cfsec::CFSecSecGrpIncPKey,
				 cfsec::CFSecSecGrpIncBuff*>* subdictIncludeIdx = searchDictByIncludeIdx->second;
			std::map<cfsec::CFSecSecGrpIncPKey,
				cfsec::CFSecSecGrpIncBuff*>::iterator iter = subdictIncludeIdx->begin();
			std::map<cfsec::CFSecSecGrpIncPKey,
				cfsec::CFSecSecGrpIncBuff*>::iterator end = subdictIncludeIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfsec::CFSecSecGrpIncBuff* CFBamRamSecGrpIncTable::readDerivedByUIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readDerivedByUIncludeIdx" );
		cfsec::CFSecSecGrpIncByUIncludeIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		cfsec::CFSecSecGrpIncBuff* buff;
		auto searchDictByUIncludeIdx = dictByUIncludeIdx->find( key );
		if( searchDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
			buff = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( searchDictByUIncludeIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecSecGrpIncBuff* CFBamRamSecGrpIncTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGrpIncId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfsec::CFSecSecGrpIncPKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGrpIncId( SecGrpIncId );
		cfsec::CFSecSecGrpIncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecSecGrpIncBuff* CFBamRamSecGrpIncTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecSecGrpIncPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfsec::CFSecSecGrpIncBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfsec::CFSecSecGrpIncBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff ) );
	}

	cfsec::CFSecSecGrpIncBuff* CFBamRamSecGrpIncTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecSecGrpIncPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfsec::CFSecSecGrpIncBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> CFBamRamSecGrpIncTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfsec::CFSecSecGrpIncBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecSecGrpIncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> CFBamRamSecGrpIncTable::pageAllBuff( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfsec::CFSecSecGrpIncBuff* CFBamRamSecGrpIncTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGrpIncId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfsec::CFSecSecGrpIncBuff* buff = readDerivedByIdIdx( Authorization,
			ClusterId,
			SecGrpIncId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecSecGrpIncBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> CFBamRamSecGrpIncTable::readBuffByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readBuffByClusterIdx" );
		cfsec::CFSecSecGrpIncBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> buffList = readDerivedByClusterIdx( Authorization,
			ClusterId );
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecSecGrpIncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> CFBamRamSecGrpIncTable::readBuffByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		static const std::string S_ProcName( "readBuffByGroupIdx" );
		cfsec::CFSecSecGrpIncBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> buffList = readDerivedByGroupIdx( Authorization,
			ClusterId,
			SecGroupId );
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecSecGrpIncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> CFBamRamSecGrpIncTable::readBuffByIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readBuffByIncludeIdx" );
		cfsec::CFSecSecGrpIncBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> buffList = readDerivedByIncludeIdx( Authorization,
			ClusterId,
			IncludeGroupId );
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecSecGrpIncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecSecGrpIncBuff* CFBamRamSecGrpIncTable::readBuffByUIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readBuffByUIncludeIdx" );
		cfsec::CFSecSecGrpIncBuff* buff = readDerivedByUIncludeIdx( Authorization,
			ClusterId,
			SecGroupId,
			IncludeGroupId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecSecGrpIncBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> CFBamRamSecGrpIncTable::pageBuffByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId )
	{
		static const std::string S_ProcName( "pageBuffByClusterIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> CFBamRamSecGrpIncTable::pageBuffByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId )
	{
		static const std::string S_ProcName( "pageBuffByGroupIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> CFBamRamSecGrpIncTable::pageBuffByIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t IncludeGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId )
	{
		static const std::string S_ProcName( "pageBuffByIncludeIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfsec::CFSecSecGrpIncBuff* CFBamRamSecGrpIncTable::updateSecGrpInc( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecSecGrpIncBuff* Buff )
	{
		static const std::string S_ProcName( "updateSecGrpInc" );
		cfsec::CFSecSecGrpIncPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecGrpIncId( Buff->getRequiredSecGrpIncId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in SecGrpInc for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfsec::CFSecSecGrpIncBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for SecGrpInc primary key " );
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
		cfsec::CFSecSecGrpIncByClusterIdxKey existingKeyClusterIdx;
		existingKeyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfsec::CFSecSecGrpIncByClusterIdxKey newKeyClusterIdx;
		newKeyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfsec::CFSecSecGrpIncByGroupIdxKey existingKeyGroupIdx;
		existingKeyGroupIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyGroupIdx.setRequiredSecGroupId( existing->getRequiredSecGroupId() );
		cfsec::CFSecSecGrpIncByGroupIdxKey newKeyGroupIdx;
		newKeyGroupIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyGroupIdx.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
		cfsec::CFSecSecGrpIncByIncludeIdxKey existingKeyIncludeIdx;
		existingKeyIncludeIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyIncludeIdx.setRequiredIncludeGroupId( existing->getRequiredIncludeGroupId() );
		cfsec::CFSecSecGrpIncByIncludeIdxKey newKeyIncludeIdx;
		newKeyIncludeIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyIncludeIdx.setRequiredIncludeGroupId( Buff->getRequiredIncludeGroupId() );
		cfsec::CFSecSecGrpIncByUIncludeIdxKey existingKeyUIncludeIdx;
		existingKeyUIncludeIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyUIncludeIdx.setRequiredSecGroupId( existing->getRequiredSecGroupId() );
		existingKeyUIncludeIdx.setRequiredIncludeGroupId( existing->getRequiredIncludeGroupId() );
		cfsec::CFSecSecGrpIncByUIncludeIdxKey newKeyUIncludeIdx;
		newKeyUIncludeIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyUIncludeIdx.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
		newKeyUIncludeIdx.setRequiredIncludeGroupId( Buff->getRequiredIncludeGroupId() );
		// Check unique indexes

		if( existingKeyUIncludeIdx != newKeyUIncludeIdx ) {
			auto searchDictByUIncludeIdx = dictByUIncludeIdx->find( newKeyUIncludeIdx );
			if( searchDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SecGrpIncUIncludeIdx " + newKeyUIncludeIdx.toString() );
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
				cfsec::CFSecClusterBuff* chk = dynamic_cast<cfsec::CFSecClusterBuff*>( schema->getTableCluster()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClusterId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Owner relationship SecGrpIncCluster to table Cluster" );
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
				cfsec::CFSecSecGroupBuff* chk = dynamic_cast<cfsec::CFSecSecGroupBuff*>( schema->getTableSecGroup()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClusterId(),
						Buff->getRequiredSecGroupId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship SecGrpIncGroup to table SecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfsec::CFSecSecGrpIncBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfsec::CFSecSecGrpIncBuff" );
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

		dictByPKey->insert( std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecSecGrpIncPKey,
			 cfsec::CFSecSecGrpIncBuff*>* subdictClusterIdx;
		auto searchDictByClusterIdx = dictByClusterIdx->find( existingKeyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchDictByClusterIdx->second;
			auto searchSubDict = subdictClusterIdx->find( pkey );
			if( searchSubDict != subdictClusterIdx->end() ) {
				subdictClusterIdx->erase( searchSubDict );
			}
			if( subdictClusterIdx->size() <= 0 ) {
				delete subdictClusterIdx;
				dictByClusterIdx->erase( searchDictByClusterIdx );
			}
			subdictClusterIdx = NULL;
		}
		auto searchNewKeyDictByClusterIdx = dictByClusterIdx->find( newKeyClusterIdx );
		if( searchNewKeyDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchNewKeyDictByClusterIdx->second;
		}
		else {
			subdictClusterIdx = new std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>();
			dictByClusterIdx->insert( std::map<cfsec::CFSecSecGrpIncByClusterIdxKey,
				std::map<cfsec::CFSecSecGrpIncPKey,
					cfsec::CFSecSecGrpIncBuff*>*>::value_type( newKeyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecSecGrpIncPKey,
			 cfsec::CFSecSecGrpIncBuff*>* subdictGroupIdx;
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
			subdictGroupIdx = new std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>();
			dictByGroupIdx->insert( std::map<cfsec::CFSecSecGrpIncByGroupIdxKey,
				std::map<cfsec::CFSecSecGrpIncPKey,
					cfsec::CFSecSecGrpIncBuff*>*>::value_type( newKeyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecSecGrpIncPKey,
			 cfsec::CFSecSecGrpIncBuff*>* subdictIncludeIdx;
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
			subdictIncludeIdx = new std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>();
			dictByIncludeIdx->insert( std::map<cfsec::CFSecSecGrpIncByIncludeIdxKey,
				std::map<cfsec::CFSecSecGrpIncPKey,
					cfsec::CFSecSecGrpIncBuff*>*>::value_type( newKeyIncludeIdx, subdictIncludeIdx ) );
		}
		subdictIncludeIdx->insert( std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>::value_type( pkey, existing ) );

		auto removalDictByUIncludeIdx = dictByUIncludeIdx->find( existingKeyUIncludeIdx );
		if( removalDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
			dictByUIncludeIdx->erase( removalDictByUIncludeIdx );
		}
		dictByUIncludeIdx->insert( std::map<cfsec::CFSecSecGrpIncByUIncludeIdxKey, cfsec::CFSecSecGrpIncBuff*>::value_type( newKeyUIncludeIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfsec::CFSecSecGrpIncBuff* buff;
		if( existing->getClassCode() == cfsec::CFSecSecGrpIncBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamSecGrpIncTable::deleteSecGrpInc( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecSecGrpIncBuff* Buff )
	{
		static const std::string S_ProcName( "deleteSecGrpInc" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfsec::CFSecSecGrpIncPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecGrpIncId( Buff->getRequiredSecGrpIncId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfsec::CFSecSecGrpIncBuff* existing = searchExisting->second;
		cfsec::CFSecSecGrpIncByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfsec::CFSecSecGrpIncByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyGroupIdx.setRequiredSecGroupId( existing->getRequiredSecGroupId() );
		cfsec::CFSecSecGrpIncByIncludeIdxKey keyIncludeIdx;
		keyIncludeIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyIncludeIdx.setRequiredIncludeGroupId( existing->getRequiredIncludeGroupId() );
		cfsec::CFSecSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
		keyUIncludeIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyUIncludeIdx.setRequiredSecGroupId( existing->getRequiredSecGroupId() );
		keyUIncludeIdx.setRequiredIncludeGroupId( existing->getRequiredIncludeGroupId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfsec::CFSecSecGrpIncPKey, cfsec::CFSecSecGrpIncBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfsec::CFSecSecGrpIncPKey,
				 cfsec::CFSecSecGrpIncBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			auto searchSubDict = subdictClusterIdx->find( pkey );
			if( searchSubDict != subdictClusterIdx->end() ) {
				subdictClusterIdx->erase( searchSubDict );
			}
			subdictClusterIdx = NULL;
		}

		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfsec::CFSecSecGrpIncPKey,
				 cfsec::CFSecSecGrpIncBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			auto searchSubDict = subdictGroupIdx->find( pkey );
			if( searchSubDict != subdictGroupIdx->end() ) {
				subdictGroupIdx->erase( searchSubDict );
			}
			subdictGroupIdx = NULL;
		}

		auto searchDictByIncludeIdx = dictByIncludeIdx->find( keyIncludeIdx );
		if( searchDictByIncludeIdx != dictByIncludeIdx->end() ) {
			std::map<cfsec::CFSecSecGrpIncPKey,
				 cfsec::CFSecSecGrpIncBuff*>* subdictIncludeIdx = searchDictByIncludeIdx->second;
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

	void CFBamRamSecGrpIncTable::deleteSecGrpIncByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argSecGrpIncId )
	{
		cfsec::CFSecSecGrpIncPKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecGrpIncId( argSecGrpIncId );
		deleteSecGrpIncByIdIdx( Authorization, &key );
	}

	void CFBamRamSecGrpIncTable::deleteSecGrpIncByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecSecGrpIncPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfsec::CFSecSecGrpIncBuff* cur = NULL;
		cfsec::CFSecSecGrpIncBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> matchSet;
		std::map<cfsec::CFSecSecGrpIncPKey,
			cfsec::CFSecSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecSecGrpIncPKey,
			cfsec::CFSecSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGrpIncId() );
			rereadCur = cur;
			deleteSecGrpInc( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamSecGrpIncTable::deleteSecGrpIncByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClusterId )
	{
		cfsec::CFSecSecGrpIncByClusterIdxKey key;
		key.setRequiredClusterId( argClusterId );
		deleteSecGrpIncByClusterIdx( Authorization, &key );
	}

	void CFBamRamSecGrpIncTable::deleteSecGrpIncByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecSecGrpIncByClusterIdxKey* argKey )
	{
		cfsec::CFSecSecGrpIncBuff* cur = NULL;
		cfsec::CFSecSecGrpIncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> matchSet;
		std::map<cfsec::CFSecSecGrpIncPKey,
			cfsec::CFSecSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecSecGrpIncPKey,
			cfsec::CFSecSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGrpIncId() );
			rereadCur = cur;
			deleteSecGrpInc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSecGrpIncTable::deleteSecGrpIncByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId )
	{
		cfsec::CFSecSecGrpIncByGroupIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecGroupId( argSecGroupId );
		deleteSecGrpIncByGroupIdx( Authorization, &key );
	}

	void CFBamRamSecGrpIncTable::deleteSecGrpIncByGroupIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecSecGrpIncByGroupIdxKey* argKey )
	{
		cfsec::CFSecSecGrpIncBuff* cur = NULL;
		cfsec::CFSecSecGrpIncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> matchSet;
		std::map<cfsec::CFSecSecGrpIncPKey,
			cfsec::CFSecSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecSecGrpIncPKey,
			cfsec::CFSecSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGrpIncId() );
			rereadCur = cur;
			deleteSecGrpInc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSecGrpIncTable::deleteSecGrpIncByIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argIncludeGroupId )
	{
		cfsec::CFSecSecGrpIncByIncludeIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredIncludeGroupId( argIncludeGroupId );
		deleteSecGrpIncByIncludeIdx( Authorization, &key );
	}

	void CFBamRamSecGrpIncTable::deleteSecGrpIncByIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecSecGrpIncByIncludeIdxKey* argKey )
	{
		cfsec::CFSecSecGrpIncBuff* cur = NULL;
		cfsec::CFSecSecGrpIncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> matchSet;
		std::map<cfsec::CFSecSecGrpIncPKey,
			cfsec::CFSecSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecSecGrpIncPKey,
			cfsec::CFSecSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGrpIncId() );
			rereadCur = cur;
			deleteSecGrpInc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSecGrpIncTable::deleteSecGrpIncByUIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId,
			const int32_t argIncludeGroupId )
	{
		cfsec::CFSecSecGrpIncByUIncludeIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecGroupId( argSecGroupId );
		key.setRequiredIncludeGroupId( argIncludeGroupId );
		deleteSecGrpIncByUIncludeIdx( Authorization, &key );
	}

	void CFBamRamSecGrpIncTable::deleteSecGrpIncByUIncludeIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecSecGrpIncByUIncludeIdxKey* argKey )
	{
		cfsec::CFSecSecGrpIncBuff* cur = NULL;
		cfsec::CFSecSecGrpIncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*> matchSet;
		std::map<cfsec::CFSecSecGrpIncPKey,
			cfsec::CFSecSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecSecGrpIncPKey,
			cfsec::CFSecSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGrpIncId() );
			rereadCur = cur;
			deleteSecGrpInc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSecGrpIncTable::releasePreparedStatements() {
	}

}
