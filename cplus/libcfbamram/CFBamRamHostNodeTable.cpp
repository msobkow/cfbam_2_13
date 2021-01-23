
// Description: C++18 Implementation for an in-memory RAM DbIO for HostNode.

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

	const std::string CFBamRamHostNodeTable::CLASS_NAME( "CFBamRamHostNodeTable" );

	CFBamRamHostNodeTable::CFBamRamHostNodeTable( ICFBamSchema* argSchema )
	: cfsec::ICFSecHostNodeTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfsec::CFSecHostNodePKey, cfsec::CFSecHostNodeBuff*>();
		dictByClusterIdx = new std::map<cfsec::CFSecHostNodeByClusterIdxKey,
			std::map<cfsec::CFSecHostNodePKey,
				cfsec::CFSecHostNodeBuff*>*>();
		dictByUDescrIdx = new std::map<cfsec::CFSecHostNodeByUDescrIdxKey, cfsec::CFSecHostNodeBuff*>();
		dictByHostNameIdx = new std::map<cfsec::CFSecHostNodeByHostNameIdxKey, cfsec::CFSecHostNodeBuff*>();
	}

	CFBamRamHostNodeTable::~CFBamRamHostNodeTable() {
		if( dictByClusterIdx != NULL ) {
			for( auto iterDict = dictByClusterIdx->begin(); iterDict != dictByClusterIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByClusterIdx;
			dictByClusterIdx = NULL;
		}
		if( dictByUDescrIdx != NULL ) {
			delete dictByUDescrIdx;
			dictByUDescrIdx = NULL;
		}
		if( dictByHostNameIdx != NULL ) {
			delete dictByHostNameIdx;
			dictByHostNameIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfsec::CFSecHostNodeBuff* elt;
			std::map<cfsec::CFSecHostNodePKey,
				cfsec::CFSecHostNodeBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfsec::CFSecHostNodePKey,
					cfsec::CFSecHostNodeBuff*>::iterator cur = dictByPKey->begin();
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

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::createHostNode( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecHostNodeBuff* Buff )
	{
		static const std::string S_ProcName( "createHostNode" );
		cfsec::CFSecHostNodePKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredHostNodeId( dynamic_cast<CFBamRamClusterTable*>( schema->getTableCluster() )->nextHostNodeIdGen( Authorization,
			Buff->getRequiredClusterId() ) );
		Buff->setRequiredClusterId( pkey.getRequiredClusterId() );
		Buff->setRequiredHostNodeId( pkey.getRequiredHostNodeId() );
		cfsec::CFSecHostNodeByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfsec::CFSecHostNodeByUDescrIdxKey keyUDescrIdx;
		keyUDescrIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyUDescrIdx.setRequiredDescription( Buff->getRequiredDescription() );
		cfsec::CFSecHostNodeByHostNameIdxKey keyHostNameIdx;
		keyHostNameIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyHostNameIdx.setRequiredHostName( Buff->getRequiredHostName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUDescrIdx = dictByUDescrIdx->find( keyUDescrIdx );
		if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
			std::string Msg( "Duplicate key detected for index HostNodeUDescrIdx " + keyUDescrIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		auto searchDictByHostNameIdx = dictByHostNameIdx->find( keyHostNameIdx );
		if( searchDictByHostNameIdx != dictByHostNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index HostNodeUHostNameIdx " + keyHostNameIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship HostNodeCluster to table Cluster" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfsec::CFSecHostNodeBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfsec::CFSecHostNodePKey, cfsec::CFSecHostNodeBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecHostNodePKey, cfsec::CFSecHostNodeBuff*>* subdictClusterIdx;
		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchDictByClusterIdx->second;
		}
		else {
			subdictClusterIdx = new std::map<cfsec::CFSecHostNodePKey, cfsec::CFSecHostNodeBuff*>();
			dictByClusterIdx->insert( std::map<cfsec::CFSecHostNodeByClusterIdxKey,
				std::map<cfsec::CFSecHostNodePKey,
					cfsec::CFSecHostNodeBuff*>*>::value_type( keyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfsec::CFSecHostNodePKey, cfsec::CFSecHostNodeBuff*>::value_type( pkey, buff ) );

		dictByUDescrIdx->insert( std::map<cfsec::CFSecHostNodeByUDescrIdxKey, cfsec::CFSecHostNodeBuff*>::value_type( keyUDescrIdx, buff ) );

		dictByHostNameIdx->insert( std::map<cfsec::CFSecHostNodeByHostNameIdxKey, cfsec::CFSecHostNodeBuff*>::value_type( keyHostNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfsec::CFSecHostNodeBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecHostNodePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfsec::CFSecHostNodeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecHostNodePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfsec::CFSecHostNodeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> CFBamRamHostNodeTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> retVec;
		std::map<cfsec::CFSecHostNodePKey,
			cfsec::CFSecHostNodeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecHostNodePKey,
			cfsec::CFSecHostNodeBuff*>::iterator end = dictByPKey->end();
		cfsec::CFSecHostNodeBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfsec::CFSecHostNodeBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> CFBamRamHostNodeTable::readDerivedByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readDerivedByClusterIdx" );
		cfsec::CFSecHostNodeByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> recVec;
		cfsec::CFSecHostNodeBuff* clone;
		auto searchDictByClusterIdx = dictByClusterIdx->find( key );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfsec::CFSecHostNodePKey,
				 cfsec::CFSecHostNodeBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			std::map<cfsec::CFSecHostNodePKey,
				cfsec::CFSecHostNodeBuff*>::iterator iter = subdictClusterIdx->begin();
			std::map<cfsec::CFSecHostNodePKey,
				cfsec::CFSecHostNodeBuff*>::iterator end = subdictClusterIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecHostNodeBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::readDerivedByUDescrIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Description )
	{
		static const std::string S_ProcName( "readDerivedByUDescrIdx" );
		cfsec::CFSecHostNodeByUDescrIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredDescription( Description );
		cfsec::CFSecHostNodeBuff* buff;
		auto searchDictByUDescrIdx = dictByUDescrIdx->find( key );
		if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
			buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( searchDictByUDescrIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::readDerivedByHostNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& HostName )
	{
		static const std::string S_ProcName( "readDerivedByHostNameIdx" );
		cfsec::CFSecHostNodeByHostNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredHostName( HostName );
		cfsec::CFSecHostNodeBuff* buff;
		auto searchDictByHostNameIdx = dictByHostNameIdx->find( key );
		if( searchDictByHostNameIdx != dictByHostNameIdx->end() ) {
			buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( searchDictByHostNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t HostNodeId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfsec::CFSecHostNodePKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredHostNodeId( HostNodeId );
		cfsec::CFSecHostNodeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecHostNodePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfsec::CFSecHostNodeBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfsec::CFSecHostNodeBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff ) );
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecHostNodePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfsec::CFSecHostNodeBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> CFBamRamHostNodeTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfsec::CFSecHostNodeBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecHostNodeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> CFBamRamHostNodeTable::pageAllBuff( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorHostNodeId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t HostNodeId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfsec::CFSecHostNodeBuff* buff = readDerivedByIdIdx( Authorization,
			ClusterId,
			HostNodeId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecHostNodeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> CFBamRamHostNodeTable::readBuffByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readBuffByClusterIdx" );
		cfsec::CFSecHostNodeBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> buffList = readDerivedByClusterIdx( Authorization,
			ClusterId );
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecHostNodeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::readBuffByUDescrIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Description )
	{
		static const std::string S_ProcName( "readBuffByUDescrIdx" );
		cfsec::CFSecHostNodeBuff* buff = readDerivedByUDescrIdx( Authorization,
			ClusterId,
			Description );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecHostNodeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::readBuffByHostNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& HostName )
	{
		static const std::string S_ProcName( "readBuffByHostNameIdx" );
		cfsec::CFSecHostNodeBuff* buff = readDerivedByHostNameIdx( Authorization,
			ClusterId,
			HostName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecHostNodeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::readBuffByLookupHostNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId, const std::string& HostName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupHostNameIdx" );
		cfsec::CFSecHostNodeBuff* buff = readBuffByHostNameIdx( Authorization,
			ClusterId,
			HostName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecHostNodeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::readDerivedByLookupHostNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId, const std::string& HostName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupHostNameIdx" );
		cfsec::CFSecHostNodeBuff* buff = readDerivedByHostNameIdx( Authorization,
			ClusterId,
			HostName );
		if( buff != NULL ) {
			return( dynamic_cast<cfsec::CFSecHostNodeBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> CFBamRamHostNodeTable::pageBuffByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorHostNodeId )
	{
		static const std::string S_ProcName( "pageBuffByClusterIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfsec::CFSecHostNodeBuff* CFBamRamHostNodeTable::updateHostNode( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecHostNodeBuff* Buff )
	{
		static const std::string S_ProcName( "updateHostNode" );
		cfsec::CFSecHostNodePKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredHostNodeId( Buff->getRequiredHostNodeId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in HostNode for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfsec::CFSecHostNodeBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for HostNode primary key " );
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
		cfsec::CFSecHostNodeByClusterIdxKey existingKeyClusterIdx;
		existingKeyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfsec::CFSecHostNodeByClusterIdxKey newKeyClusterIdx;
		newKeyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfsec::CFSecHostNodeByUDescrIdxKey existingKeyUDescrIdx;
		existingKeyUDescrIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyUDescrIdx.setRequiredDescription( existing->getRequiredDescription() );
		cfsec::CFSecHostNodeByUDescrIdxKey newKeyUDescrIdx;
		newKeyUDescrIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyUDescrIdx.setRequiredDescription( Buff->getRequiredDescription() );
		cfsec::CFSecHostNodeByHostNameIdxKey existingKeyHostNameIdx;
		existingKeyHostNameIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyHostNameIdx.setRequiredHostName( existing->getRequiredHostName() );
		cfsec::CFSecHostNodeByHostNameIdxKey newKeyHostNameIdx;
		newKeyHostNameIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyHostNameIdx.setRequiredHostName( Buff->getRequiredHostName() );
		// Check unique indexes

		if( existingKeyUDescrIdx != newKeyUDescrIdx ) {
			auto searchDictByUDescrIdx = dictByUDescrIdx->find( newKeyUDescrIdx );
			if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
				std::string Msg( "Duplicate key detected for index HostNodeUDescrIdx " + newKeyUDescrIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		if( existingKeyHostNameIdx != newKeyHostNameIdx ) {
			auto searchDictByHostNameIdx = dictByHostNameIdx->find( newKeyHostNameIdx );
			if( searchDictByHostNameIdx != dictByHostNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index HostNodeUHostNameIdx " + newKeyHostNameIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship HostNodeCluster to table Cluster" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfsec::CFSecHostNodePKey, cfsec::CFSecHostNodeBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfsec::CFSecHostNodeBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfsec::CFSecHostNodeBuff" );
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

		dictByPKey->insert( std::map<cfsec::CFSecHostNodePKey, cfsec::CFSecHostNodeBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecHostNodePKey,
			 cfsec::CFSecHostNodeBuff*>* subdictClusterIdx;
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
			subdictClusterIdx = new std::map<cfsec::CFSecHostNodePKey, cfsec::CFSecHostNodeBuff*>();
			dictByClusterIdx->insert( std::map<cfsec::CFSecHostNodeByClusterIdxKey,
				std::map<cfsec::CFSecHostNodePKey,
					cfsec::CFSecHostNodeBuff*>*>::value_type( newKeyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfsec::CFSecHostNodePKey, cfsec::CFSecHostNodeBuff*>::value_type( pkey, existing ) );

		auto removalDictByUDescrIdx = dictByUDescrIdx->find( existingKeyUDescrIdx );
		if( removalDictByUDescrIdx != dictByUDescrIdx->end() ) {
			dictByUDescrIdx->erase( removalDictByUDescrIdx );
		}
		dictByUDescrIdx->insert( std::map<cfsec::CFSecHostNodeByUDescrIdxKey, cfsec::CFSecHostNodeBuff*>::value_type( newKeyUDescrIdx, existing ) );

		auto removalDictByHostNameIdx = dictByHostNameIdx->find( existingKeyHostNameIdx );
		if( removalDictByHostNameIdx != dictByHostNameIdx->end() ) {
			dictByHostNameIdx->erase( removalDictByHostNameIdx );
		}
		dictByHostNameIdx->insert( std::map<cfsec::CFSecHostNodeByHostNameIdxKey, cfsec::CFSecHostNodeBuff*>::value_type( newKeyHostNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfsec::CFSecHostNodeBuff* buff;
		if( existing->getClassCode() == cfsec::CFSecHostNodeBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfsec::CFSecHostNodeBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamHostNodeTable::deleteHostNode( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecHostNodeBuff* Buff )
	{
		static const std::string S_ProcName( "deleteHostNode" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfsec::CFSecHostNodePKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredHostNodeId( Buff->getRequiredHostNodeId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfsec::CFSecHostNodeBuff* existing = searchExisting->second;
		schema->getTableService()->deleteServiceByHostIdx( Authorization,
			existing->getRequiredClusterId(),
			existing->getRequiredHostNodeId() );
		cfsec::CFSecHostNodeByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfsec::CFSecHostNodeByUDescrIdxKey keyUDescrIdx;
		keyUDescrIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyUDescrIdx.setRequiredDescription( existing->getRequiredDescription() );
		cfsec::CFSecHostNodeByHostNameIdxKey keyHostNameIdx;
		keyHostNameIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyHostNameIdx.setRequiredHostName( existing->getRequiredHostName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfsec::CFSecHostNodePKey, cfsec::CFSecHostNodeBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfsec::CFSecHostNodePKey,
				 cfsec::CFSecHostNodeBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			auto searchSubDict = subdictClusterIdx->find( pkey );
			if( searchSubDict != subdictClusterIdx->end() ) {
				subdictClusterIdx->erase( searchSubDict );
			}
			subdictClusterIdx = NULL;
		}

		auto searchDictByUDescrIdx = dictByUDescrIdx->find( keyUDescrIdx );
		if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
			dictByUDescrIdx->erase( searchDictByUDescrIdx );
		}

		auto searchDictByHostNameIdx = dictByHostNameIdx->find( keyHostNameIdx );
		if( searchDictByHostNameIdx != dictByHostNameIdx->end() ) {
			dictByHostNameIdx->erase( searchDictByHostNameIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamHostNodeTable::deleteHostNodeByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argHostNodeId )
	{
		cfsec::CFSecHostNodePKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredHostNodeId( argHostNodeId );
		deleteHostNodeByIdIdx( Authorization, &key );
	}

	void CFBamRamHostNodeTable::deleteHostNodeByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecHostNodePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfsec::CFSecHostNodeBuff* cur = NULL;
		cfsec::CFSecHostNodeBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> matchSet;
		std::map<cfsec::CFSecHostNodePKey,
			cfsec::CFSecHostNodeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecHostNodePKey,
			cfsec::CFSecHostNodeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecHostNodeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecHostNodeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableHostNode()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredHostNodeId() );
			rereadCur = cur;
			deleteHostNode( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamHostNodeTable::deleteHostNodeByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClusterId )
	{
		cfsec::CFSecHostNodeByClusterIdxKey key;
		key.setRequiredClusterId( argClusterId );
		deleteHostNodeByClusterIdx( Authorization, &key );
	}

	void CFBamRamHostNodeTable::deleteHostNodeByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecHostNodeByClusterIdxKey* argKey )
	{
		cfsec::CFSecHostNodeBuff* cur = NULL;
		cfsec::CFSecHostNodeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> matchSet;
		std::map<cfsec::CFSecHostNodePKey,
			cfsec::CFSecHostNodeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecHostNodePKey,
			cfsec::CFSecHostNodeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecHostNodeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecHostNodeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableHostNode()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredHostNodeId() );
			rereadCur = cur;
			deleteHostNode( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamHostNodeTable::deleteHostNodeByUDescrIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argDescription )
	{
		cfsec::CFSecHostNodeByUDescrIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredDescription( argDescription );
		deleteHostNodeByUDescrIdx( Authorization, &key );
	}

	void CFBamRamHostNodeTable::deleteHostNodeByUDescrIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecHostNodeByUDescrIdxKey* argKey )
	{
		cfsec::CFSecHostNodeBuff* cur = NULL;
		cfsec::CFSecHostNodeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> matchSet;
		std::map<cfsec::CFSecHostNodePKey,
			cfsec::CFSecHostNodeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecHostNodePKey,
			cfsec::CFSecHostNodeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecHostNodeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecHostNodeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableHostNode()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredHostNodeId() );
			rereadCur = cur;
			deleteHostNode( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamHostNodeTable::deleteHostNodeByHostNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argHostName )
	{
		cfsec::CFSecHostNodeByHostNameIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredHostName( argHostName );
		deleteHostNodeByHostNameIdx( Authorization, &key );
	}

	void CFBamRamHostNodeTable::deleteHostNodeByHostNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecHostNodeByHostNameIdxKey* argKey )
	{
		cfsec::CFSecHostNodeBuff* cur = NULL;
		cfsec::CFSecHostNodeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*> matchSet;
		std::map<cfsec::CFSecHostNodePKey,
			cfsec::CFSecHostNodeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecHostNodePKey,
			cfsec::CFSecHostNodeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecHostNodeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecHostNodeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecHostNodeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableHostNode()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredHostNodeId() );
			rereadCur = cur;
			deleteHostNode( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamHostNodeTable::releasePreparedStatements() {
	}

}
