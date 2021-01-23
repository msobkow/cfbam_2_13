
// Description: C++18 Implementation for an in-memory RAM DbIO for Cluster.

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

	const std::string CFBamRamClusterTable::CLASS_NAME( "CFBamRamClusterTable" );

	CFBamRamClusterTable::CFBamRamClusterTable( ICFBamSchema* argSchema )
	: cfsec::ICFSecClusterTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfsec::CFSecClusterPKey, cfsec::CFSecClusterBuff*>();
		id32Generator = new std::map<CFBamRamClusterId32Gen, CFBamRamClusterId32Gen*>();
		id64Generator = new std::map<CFBamRamClusterId64Gen, CFBamRamClusterId64Gen*>();
		dictByUDomNameIdx = new std::map<cfsec::CFSecClusterByUDomNameIdxKey, cfsec::CFSecClusterBuff*>();
		dictByUDescrIdx = new std::map<cfsec::CFSecClusterByUDescrIdxKey, cfsec::CFSecClusterBuff*>();
	}

	CFBamRamClusterTable::~CFBamRamClusterTable() {
		if( dictByUDomNameIdx != NULL ) {
			delete dictByUDomNameIdx;
			dictByUDomNameIdx = NULL;
		}
		if( dictByUDescrIdx != NULL ) {
			delete dictByUDescrIdx;
			dictByUDescrIdx = NULL;
		}
		if( id32Generator != NULL ) {
			cfbam::CFBamRamClusterId32Gen* elt;
			std::map<CFBamRamClusterId32Gen,
				CFBamRamClusterId32Gen*>::iterator end = id32Generator->end();
			for( std::map<CFBamRamClusterId32Gen,
					CFBamRamClusterId32Gen*>::iterator cur = id32Generator->begin();
				cur != end;
				cur ++ )
			{
				if( cur->second != NULL ) {
					delete cur->second;
					cur->second = NULL;
				}
			}
			delete id32Generator;
			id32Generator = NULL;
		}
		if( id64Generator != NULL ) {
			cfbam::CFBamRamClusterId64Gen* elt;
			std::map<CFBamRamClusterId64Gen,
				CFBamRamClusterId64Gen*>::iterator end = id64Generator->end();
			for( std::map<CFBamRamClusterId64Gen,
					CFBamRamClusterId64Gen*>::iterator cur = id64Generator->begin();
				cur != end;
				cur ++ )
			{
				if( cur->second != NULL ) {
					delete cur->second;
					cur->second = NULL;
				}
			}
			delete id64Generator;
			id64Generator = NULL;
		}
		if( dictByPKey != NULL ) {
			cfsec::CFSecClusterBuff* elt;
			std::map<cfsec::CFSecClusterPKey,
				cfsec::CFSecClusterBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfsec::CFSecClusterPKey,
					cfsec::CFSecClusterBuff*>::iterator cur = dictByPKey->begin();
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

	int32_t CFBamRamClusterTable::generateNextId32( int64_t argId,
		int16_t argSliceId )
	{
		cfbam::CFBamRamClusterId32Gen* key = new cfbam::CFBamRamClusterId32Gen();
		key->setRequiredId( argId );
		key->setRequiredSliceId( argSliceId );

		cfbam::CFBamRamClusterId32Gen* useGen;
		auto genSearch = id32Generator->find( *key );
		if( genSearch != id32Generator->end() ) {
			useGen = genSearch->second;
			delete key;
			key = NULL;
		}
		else {
			id32Generator->insert( std::map<CFBamRamClusterId32Gen, CFBamRamClusterId32Gen*>::value_type( *key, key ) );
			useGen = key;
			key = NULL;
		}

		int32_t retNext = useGen->getNextId();

		return( retNext );
	}

	int64_t CFBamRamClusterTable::generateNextId64( int64_t argId,
		int16_t argSliceId )
	{
		cfbam::CFBamRamClusterId64Gen* key = new cfbam::CFBamRamClusterId64Gen();
		key->setRequiredId( argId );
		key->setRequiredSliceId( argSliceId );

		cfbam::CFBamRamClusterId64Gen* useGen;
		auto genSearch = id64Generator->find( *key );
		if( genSearch != id64Generator->end() ) {
			useGen = genSearch->second;
			delete key;
			key = NULL;
		}
		else {
			id64Generator->insert( std::map<CFBamRamClusterId64Gen, CFBamRamClusterId64Gen*>::value_type( *key, key ) );
			useGen = key;
			key = NULL;
		}

		int64_t retNext = useGen->getNextId();

		return( retNext );
	}

	int32_t CFBamRamClusterTable::nextSecAppIdGen( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* pkey )
	{
		int32_t retval = nextSecAppIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int32_t CFBamRamClusterTable::nextSecAppIdGen( const cfsec::CFSecAuthorization* Authorization,
		int64_t argId )
	{
		int32_t retNext = generateNextId32( argId,
			(int16_t)107 );
		return( retNext );
	}

	int32_t CFBamRamClusterTable::nextSecFormIdGen( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* pkey )
	{
		int32_t retval = nextSecFormIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int32_t CFBamRamClusterTable::nextSecFormIdGen( const cfsec::CFSecAuthorization* Authorization,
		int64_t argId )
	{
		int32_t retNext = generateNextId32( argId,
			(int16_t)108 );
		return( retNext );
	}

	int32_t CFBamRamClusterTable::nextSecGroupIdGen( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* pkey )
	{
		int32_t retval = nextSecGroupIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int32_t CFBamRamClusterTable::nextSecGroupIdGen( const cfsec::CFSecAuthorization* Authorization,
		int64_t argId )
	{
		int32_t retNext = generateNextId32( argId,
			(int16_t)109 );
		return( retNext );
	}

	int64_t CFBamRamClusterTable::nextHostNodeIdGen( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* pkey )
	{
		int64_t retval = nextHostNodeIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFBamRamClusterTable::nextHostNodeIdGen( const cfsec::CFSecAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)116 );
		return( retNext );
	}

	int64_t CFBamRamClusterTable::nextSecGroupFormIdGen( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* pkey )
	{
		int64_t retval = nextSecGroupFormIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFBamRamClusterTable::nextSecGroupFormIdGen( const cfsec::CFSecAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)112 );
		return( retNext );
	}

	int64_t CFBamRamClusterTable::nextSecGrpIncIdGen( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* pkey )
	{
		int64_t retval = nextSecGrpIncIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFBamRamClusterTable::nextSecGrpIncIdGen( const cfsec::CFSecAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)111 );
		return( retNext );
	}

	int64_t CFBamRamClusterTable::nextSecGrpMembIdGen( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* pkey )
	{
		int64_t retval = nextSecGrpMembIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFBamRamClusterTable::nextSecGrpMembIdGen( const cfsec::CFSecAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)110 );
		return( retNext );
	}

	int64_t CFBamRamClusterTable::nextServiceIdGen( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* pkey )
	{
		int64_t retval = nextServiceIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFBamRamClusterTable::nextServiceIdGen( const cfsec::CFSecAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)115 );
		return( retNext );
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::createCluster( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecClusterBuff* Buff )
	{
		static const std::string S_ProcName( "createCluster" );
		cfsec::CFSecClusterPKey pkey;
		pkey.setRequiredId( schema->nextClusterIdGen() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfsec::CFSecClusterByUDomNameIdxKey keyUDomNameIdx;
		keyUDomNameIdx.setRequiredFullDomName( Buff->getRequiredFullDomName() );
		cfsec::CFSecClusterByUDescrIdxKey keyUDescrIdx;
		keyUDescrIdx.setRequiredDescription( Buff->getRequiredDescription() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUDomNameIdx = dictByUDomNameIdx->find( keyUDomNameIdx );
		if( searchDictByUDomNameIdx != dictByUDomNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ClusterUDomNameIdx " + keyUDomNameIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		auto searchDictByUDescrIdx = dictByUDescrIdx->find( keyUDescrIdx );
		if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ClusterUDescrNameIdx " + keyUDescrIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfsec::CFSecClusterBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfsec::CFSecClusterPKey, cfsec::CFSecClusterBuff*>::value_type( pkey, buff ) );

		dictByUDomNameIdx->insert( std::map<cfsec::CFSecClusterByUDomNameIdxKey, cfsec::CFSecClusterBuff*>::value_type( keyUDomNameIdx, buff ) );

		dictByUDescrIdx->insert( std::map<cfsec::CFSecClusterByUDescrIdxKey, cfsec::CFSecClusterBuff*>::value_type( keyUDescrIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfsec::CFSecClusterBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfsec::CFSecClusterBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecClusterBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecClusterBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfsec::CFSecClusterBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecClusterBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecClusterBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfsec::CFSecClusterBuff*> CFBamRamClusterTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*> retVec;
		std::map<cfsec::CFSecClusterPKey,
			cfsec::CFSecClusterBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecClusterPKey,
			cfsec::CFSecClusterBuff*>::iterator end = dictByPKey->end();
		cfsec::CFSecClusterBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfsec::CFSecClusterBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::readDerivedByUDomNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& FullDomName )
	{
		static const std::string S_ProcName( "readDerivedByUDomNameIdx" );
		cfsec::CFSecClusterByUDomNameIdxKey key;
		key.setRequiredFullDomName( FullDomName );
		cfsec::CFSecClusterBuff* buff;
		auto searchDictByUDomNameIdx = dictByUDomNameIdx->find( key );
		if( searchDictByUDomNameIdx != dictByUDomNameIdx->end() ) {
			buff = dynamic_cast<cfsec::CFSecClusterBuff*>( searchDictByUDomNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecClusterBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::readDerivedByUDescrIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& Description )
	{
		static const std::string S_ProcName( "readDerivedByUDescrIdx" );
		cfsec::CFSecClusterByUDescrIdxKey key;
		key.setRequiredDescription( Description );
		cfsec::CFSecClusterBuff* buff;
		auto searchDictByUDescrIdx = dictByUDescrIdx->find( key );
		if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
			buff = dynamic_cast<cfsec::CFSecClusterBuff*>( searchDictByUDescrIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecClusterBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfsec::CFSecClusterPKey key;
		key.setRequiredId( Id );
		cfsec::CFSecClusterBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecClusterBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecClusterBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfsec::CFSecClusterBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfsec::CFSecClusterBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfsec::CFSecClusterBuff*>( buff ) );
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfsec::CFSecClusterBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfsec::CFSecClusterBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfsec::CFSecClusterBuff*> CFBamRamClusterTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfsec::CFSecClusterBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecClusterBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfsec::CFSecClusterBuff*> CFBamRamClusterTable::pageAllBuff( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfsec::CFSecClusterBuff* buff = readDerivedByIdIdx( Authorization,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecClusterBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::readBuffByUDomNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& FullDomName )
	{
		static const std::string S_ProcName( "readBuffByUDomNameIdx" );
		cfsec::CFSecClusterBuff* buff = readDerivedByUDomNameIdx( Authorization,
			FullDomName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecClusterBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::readBuffByUDescrIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& Description )
	{
		static const std::string S_ProcName( "readBuffByUDescrIdx" );
		cfsec::CFSecClusterBuff* buff = readDerivedByUDescrIdx( Authorization,
			Description );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecClusterBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::readBuffByLookupUDomNameIdx( const cfsec::CFSecAuthorization* Authorization, const std::string& FullDomName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUDomNameIdx" );
		cfsec::CFSecClusterBuff* buff = readBuffByUDomNameIdx( Authorization,
			FullDomName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecClusterBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::readDerivedByLookupUDomNameIdx( const cfsec::CFSecAuthorization* Authorization, const std::string& FullDomName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUDomNameIdx" );
		cfsec::CFSecClusterBuff* buff = readDerivedByUDomNameIdx( Authorization,
			FullDomName );
		if( buff != NULL ) {
			return( dynamic_cast<cfsec::CFSecClusterBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfsec::CFSecClusterBuff* CFBamRamClusterTable::updateCluster( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecClusterBuff* Buff )
	{
		static const std::string S_ProcName( "updateCluster" );
		cfsec::CFSecClusterPKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in Cluster for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfsec::CFSecClusterBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for Cluster primary key " );
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
		cfsec::CFSecClusterByUDomNameIdxKey existingKeyUDomNameIdx;
		existingKeyUDomNameIdx.setRequiredFullDomName( existing->getRequiredFullDomName() );
		cfsec::CFSecClusterByUDomNameIdxKey newKeyUDomNameIdx;
		newKeyUDomNameIdx.setRequiredFullDomName( Buff->getRequiredFullDomName() );
		cfsec::CFSecClusterByUDescrIdxKey existingKeyUDescrIdx;
		existingKeyUDescrIdx.setRequiredDescription( existing->getRequiredDescription() );
		cfsec::CFSecClusterByUDescrIdxKey newKeyUDescrIdx;
		newKeyUDescrIdx.setRequiredDescription( Buff->getRequiredDescription() );
		// Check unique indexes

		if( existingKeyUDomNameIdx != newKeyUDomNameIdx ) {
			auto searchDictByUDomNameIdx = dictByUDomNameIdx->find( newKeyUDomNameIdx );
			if( searchDictByUDomNameIdx != dictByUDomNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ClusterUDomNameIdx " + newKeyUDomNameIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		if( existingKeyUDescrIdx != newKeyUDescrIdx ) {
			auto searchDictByUDescrIdx = dictByUDescrIdx->find( newKeyUDescrIdx );
			if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ClusterUDescrNameIdx " + newKeyUDescrIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		// Update is valid
		std::map<cfsec::CFSecClusterPKey, cfsec::CFSecClusterBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfsec::CFSecClusterBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfsec::CFSecClusterBuff" );
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

		dictByPKey->insert( std::map<cfsec::CFSecClusterPKey, cfsec::CFSecClusterBuff*>::value_type( pkey, existing ) );

		auto removalDictByUDomNameIdx = dictByUDomNameIdx->find( existingKeyUDomNameIdx );
		if( removalDictByUDomNameIdx != dictByUDomNameIdx->end() ) {
			dictByUDomNameIdx->erase( removalDictByUDomNameIdx );
		}
		dictByUDomNameIdx->insert( std::map<cfsec::CFSecClusterByUDomNameIdxKey, cfsec::CFSecClusterBuff*>::value_type( newKeyUDomNameIdx, existing ) );

		auto removalDictByUDescrIdx = dictByUDescrIdx->find( existingKeyUDescrIdx );
		if( removalDictByUDescrIdx != dictByUDescrIdx->end() ) {
			dictByUDescrIdx->erase( removalDictByUDescrIdx );
		}
		dictByUDescrIdx->insert( std::map<cfsec::CFSecClusterByUDescrIdxKey, cfsec::CFSecClusterBuff*>::value_type( newKeyUDescrIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfsec::CFSecClusterBuff* buff;
		if( existing->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfsec::CFSecClusterBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamClusterTable::deleteCluster( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecClusterBuff* Buff )
	{
		static const std::string S_ProcName( "deleteCluster" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfsec::CFSecClusterPKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfsec::CFSecClusterBuff* existing = searchExisting->second;
		cfsec::CFSecSecGroupBuff* buffDelSecGroupForms;
		std::TCFLibOwningVector<cfsec::CFSecSecGroupBuff*> arrDelSecGroupForms = schema->getTableSecGroup()->readDerivedByClusterIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfsec::CFSecSecGroupBuff*>::iterator iterArrDelSecGroupForms = arrDelSecGroupForms.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGroupBuff*>::iterator endArrDelSecGroupForms = arrDelSecGroupForms.end();
		while( iterArrDelSecGroupForms != endArrDelSecGroupForms ) {
			buffDelSecGroupForms = *iterArrDelSecGroupForms;
			iterArrDelSecGroupForms ++;
			schema->getTableSecGroupForm()->deleteSecGroupFormByGroupIdx( Authorization,
				buffDelSecGroupForms->getRequiredClusterId(),
				buffDelSecGroupForms->getRequiredSecGroupId() );
		}
		cfsec::CFSecSecGroupBuff* buffDelSecGrpIncByGroup;
		std::TCFLibOwningVector<cfsec::CFSecSecGroupBuff*> arrDelSecGrpIncByGroup = schema->getTableSecGroup()->readDerivedByClusterIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfsec::CFSecSecGroupBuff*>::iterator iterArrDelSecGrpIncByGroup = arrDelSecGrpIncByGroup.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGroupBuff*>::iterator endArrDelSecGrpIncByGroup = arrDelSecGrpIncByGroup.end();
		while( iterArrDelSecGrpIncByGroup != endArrDelSecGrpIncByGroup ) {
			buffDelSecGrpIncByGroup = *iterArrDelSecGrpIncByGroup;
			iterArrDelSecGrpIncByGroup ++;
			schema->getTableSecGrpInc()->deleteSecGrpIncByIncludeIdx( Authorization,
				buffDelSecGrpIncByGroup->getRequiredClusterId(),
				buffDelSecGrpIncByGroup->getRequiredSecGroupId() );
		}
		cfsec::CFSecSecGroupBuff* buffDelSecGrpMembs;
		std::TCFLibOwningVector<cfsec::CFSecSecGroupBuff*> arrDelSecGrpMembs = schema->getTableSecGroup()->readDerivedByClusterIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfsec::CFSecSecGroupBuff*>::iterator iterArrDelSecGrpMembs = arrDelSecGrpMembs.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGroupBuff*>::iterator endArrDelSecGrpMembs = arrDelSecGrpMembs.end();
		while( iterArrDelSecGrpMembs != endArrDelSecGrpMembs ) {
			buffDelSecGrpMembs = *iterArrDelSecGrpMembs;
			iterArrDelSecGrpMembs ++;
			schema->getTableSecGrpMemb()->deleteSecGrpMembByGroupIdx( Authorization,
				buffDelSecGrpMembs->getRequiredClusterId(),
				buffDelSecGrpMembs->getRequiredSecGroupId() );
		}
		cfsec::CFSecSecGroupBuff* buffDelSecGrpIncs;
		std::TCFLibOwningVector<cfsec::CFSecSecGroupBuff*> arrDelSecGrpIncs = schema->getTableSecGroup()->readDerivedByClusterIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfsec::CFSecSecGroupBuff*>::iterator iterArrDelSecGrpIncs = arrDelSecGrpIncs.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecGroupBuff*>::iterator endArrDelSecGrpIncs = arrDelSecGrpIncs.end();
		while( iterArrDelSecGrpIncs != endArrDelSecGrpIncs ) {
			buffDelSecGrpIncs = *iterArrDelSecGrpIncs;
			iterArrDelSecGrpIncs ++;
			schema->getTableSecGrpInc()->deleteSecGrpIncByGroupIdx( Authorization,
				buffDelSecGrpIncs->getRequiredClusterId(),
				buffDelSecGrpIncs->getRequiredSecGroupId() );
		}
		schema->getTableSecGroup()->deleteSecGroupByClusterIdx( Authorization,
			existing->getRequiredId() );
		cfsec::CFSecSecAppBuff* buffDelSecAppForms;
		std::TCFLibOwningVector<cfsec::CFSecSecAppBuff*> arrDelSecAppForms = schema->getTableSecApp()->readDerivedByClusterIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfsec::CFSecSecAppBuff*>::iterator iterArrDelSecAppForms = arrDelSecAppForms.begin();
		std::TCFLibOwningVector<cfsec::CFSecSecAppBuff*>::iterator endArrDelSecAppForms = arrDelSecAppForms.end();
		while( iterArrDelSecAppForms != endArrDelSecAppForms ) {
			buffDelSecAppForms = *iterArrDelSecAppForms;
			iterArrDelSecAppForms ++;
			schema->getTableSecForm()->deleteSecFormBySecAppIdx( Authorization,
				buffDelSecAppForms->getRequiredClusterId(),
				buffDelSecAppForms->getRequiredSecAppId() );
		}
		schema->getTableSecApp()->deleteSecAppByClusterIdx( Authorization,
			existing->getRequiredId() );
		schema->getTableTenant()->deleteTenantByClusterIdx( Authorization,
			existing->getRequiredId() );
		schema->getTableHostNode()->deleteHostNodeByClusterIdx( Authorization,
			existing->getRequiredId() );
		cfsec::CFSecClusterByUDomNameIdxKey keyUDomNameIdx;
		keyUDomNameIdx.setRequiredFullDomName( existing->getRequiredFullDomName() );
		cfsec::CFSecClusterByUDescrIdxKey keyUDescrIdx;
		keyUDescrIdx.setRequiredDescription( existing->getRequiredDescription() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfsec::CFSecClusterPKey, cfsec::CFSecClusterBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByUDomNameIdx = dictByUDomNameIdx->find( keyUDomNameIdx );
		if( searchDictByUDomNameIdx != dictByUDomNameIdx->end() ) {
			dictByUDomNameIdx->erase( searchDictByUDomNameIdx );
		}

		auto searchDictByUDescrIdx = dictByUDescrIdx->find( keyUDescrIdx );
		if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
			dictByUDescrIdx->erase( searchDictByUDescrIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamClusterTable::deleteClusterByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argId )
	{
		cfsec::CFSecClusterPKey key;
		key.setRequiredId( argId );
		deleteClusterByIdIdx( Authorization, &key );
	}

	void CFBamRamClusterTable::deleteClusterByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfsec::CFSecClusterBuff* cur = NULL;
		cfsec::CFSecClusterBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*> matchSet;
		std::map<cfsec::CFSecClusterPKey,
			cfsec::CFSecClusterBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecClusterPKey,
			cfsec::CFSecClusterBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecClusterBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecClusterBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableCluster()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteCluster( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamClusterTable::deleteClusterByUDomNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& argFullDomName )
	{
		cfsec::CFSecClusterByUDomNameIdxKey key;
		key.setRequiredFullDomName( argFullDomName );
		deleteClusterByUDomNameIdx( Authorization, &key );
	}

	void CFBamRamClusterTable::deleteClusterByUDomNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterByUDomNameIdxKey* argKey )
	{
		cfsec::CFSecClusterBuff* cur = NULL;
		cfsec::CFSecClusterBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*> matchSet;
		std::map<cfsec::CFSecClusterPKey,
			cfsec::CFSecClusterBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecClusterPKey,
			cfsec::CFSecClusterBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecClusterBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecClusterBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableCluster()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteCluster( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClusterTable::deleteClusterByUDescrIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& argDescription )
	{
		cfsec::CFSecClusterByUDescrIdxKey key;
		key.setRequiredDescription( argDescription );
		deleteClusterByUDescrIdx( Authorization, &key );
	}

	void CFBamRamClusterTable::deleteClusterByUDescrIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecClusterByUDescrIdxKey* argKey )
	{
		cfsec::CFSecClusterBuff* cur = NULL;
		cfsec::CFSecClusterBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*> matchSet;
		std::map<cfsec::CFSecClusterPKey,
			cfsec::CFSecClusterBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecClusterPKey,
			cfsec::CFSecClusterBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecClusterBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecClusterBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecClusterBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableCluster()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteCluster( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClusterTable::releasePreparedStatements() {
	}

}
