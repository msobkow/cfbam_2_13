
// Description: C++18 Implementation for an in-memory RAM DbIO for ISOTZone.

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

	const std::string CFBamRamISOTZoneTable::CLASS_NAME( "CFBamRamISOTZoneTable" );

	CFBamRamISOTZoneTable::CFBamRamISOTZoneTable( ICFBamSchema* argSchema )
	: cfsec::ICFSecISOTZoneTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>();
		dictByOffsetIdx = new std::map<cfsec::CFSecISOTZoneByOffsetIdxKey,
			std::map<cfsec::CFSecISOTZonePKey,
				cfsec::CFSecISOTZoneBuff*>*>();
		dictByUTZNameIdx = new std::map<cfsec::CFSecISOTZoneByUTZNameIdxKey, cfsec::CFSecISOTZoneBuff*>();
		dictByIso8601Idx = new std::map<cfsec::CFSecISOTZoneByIso8601IdxKey,
			std::map<cfsec::CFSecISOTZonePKey,
				cfsec::CFSecISOTZoneBuff*>*>();
	}

	CFBamRamISOTZoneTable::~CFBamRamISOTZoneTable() {
		if( dictByOffsetIdx != NULL ) {
			for( auto iterDict = dictByOffsetIdx->begin(); iterDict != dictByOffsetIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByOffsetIdx;
			dictByOffsetIdx = NULL;
		}
		if( dictByUTZNameIdx != NULL ) {
			delete dictByUTZNameIdx;
			dictByUTZNameIdx = NULL;
		}
		if( dictByIso8601Idx != NULL ) {
			for( auto iterDict = dictByIso8601Idx->begin(); iterDict != dictByIso8601Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByIso8601Idx;
			dictByIso8601Idx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfsec::CFSecISOTZoneBuff* elt;
			std::map<cfsec::CFSecISOTZonePKey,
				cfsec::CFSecISOTZoneBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfsec::CFSecISOTZonePKey,
					cfsec::CFSecISOTZoneBuff*>::iterator cur = dictByPKey->begin();
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

	cfsec::CFSecISOTZoneBuff* CFBamRamISOTZoneTable::createISOTZone( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOTZoneBuff* Buff )
	{
		static const std::string S_ProcName( "createISOTZone" );
		cfsec::CFSecISOTZonePKey pkey;
		pkey.setRequiredISOTZoneId( schema->nextISOTZoneIdGen() );
		Buff->setRequiredISOTZoneId( pkey.getRequiredISOTZoneId() );
		cfsec::CFSecISOTZoneByOffsetIdxKey keyOffsetIdx;
		keyOffsetIdx.setRequiredTZHourOffset( Buff->getRequiredTZHourOffset() );
		keyOffsetIdx.setRequiredTZMinOffset( Buff->getRequiredTZMinOffset() );
		cfsec::CFSecISOTZoneByUTZNameIdxKey keyUTZNameIdx;
		keyUTZNameIdx.setRequiredTZName( Buff->getRequiredTZName() );
		cfsec::CFSecISOTZoneByIso8601IdxKey keyIso8601Idx;
		keyIso8601Idx.setRequiredIso8601( Buff->getRequiredIso8601() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUTZNameIdx = dictByUTZNameIdx->find( keyUTZNameIdx );
		if( searchDictByUTZNameIdx != dictByUTZNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ISOTZoneUTZNameIdx " + keyUTZNameIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfsec::CFSecISOTZoneBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>* subdictOffsetIdx;
		auto searchDictByOffsetIdx = dictByOffsetIdx->find( keyOffsetIdx );
		if( searchDictByOffsetIdx != dictByOffsetIdx->end() ) {
			subdictOffsetIdx = searchDictByOffsetIdx->second;
		}
		else {
			subdictOffsetIdx = new std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>();
			dictByOffsetIdx->insert( std::map<cfsec::CFSecISOTZoneByOffsetIdxKey,
				std::map<cfsec::CFSecISOTZonePKey,
					cfsec::CFSecISOTZoneBuff*>*>::value_type( keyOffsetIdx, subdictOffsetIdx ) );
		}
		subdictOffsetIdx->insert( std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>::value_type( pkey, buff ) );

		dictByUTZNameIdx->insert( std::map<cfsec::CFSecISOTZoneByUTZNameIdxKey, cfsec::CFSecISOTZoneBuff*>::value_type( keyUTZNameIdx, buff ) );

		std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>* subdictIso8601Idx;
		auto searchDictByIso8601Idx = dictByIso8601Idx->find( keyIso8601Idx );
		if( searchDictByIso8601Idx != dictByIso8601Idx->end() ) {
			subdictIso8601Idx = searchDictByIso8601Idx->second;
		}
		else {
			subdictIso8601Idx = new std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>();
			dictByIso8601Idx->insert( std::map<cfsec::CFSecISOTZoneByIso8601IdxKey,
				std::map<cfsec::CFSecISOTZonePKey,
					cfsec::CFSecISOTZoneBuff*>*>::value_type( keyIso8601Idx, subdictIso8601Idx ) );
		}
		subdictIso8601Idx->insert( std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfsec::CFSecISOTZoneBuff* CFBamRamISOTZoneTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOTZonePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfsec::CFSecISOTZoneBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOTZoneBuff* CFBamRamISOTZoneTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOTZonePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfsec::CFSecISOTZoneBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> CFBamRamISOTZoneTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> retVec;
		std::map<cfsec::CFSecISOTZonePKey,
			cfsec::CFSecISOTZoneBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOTZonePKey,
			cfsec::CFSecISOTZoneBuff*>::iterator end = dictByPKey->end();
		cfsec::CFSecISOTZoneBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> CFBamRamISOTZoneTable::readDerivedByOffsetIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t TZHourOffset,
			const int16_t TZMinOffset )
	{
		static const std::string S_ProcName( "readDerivedByOffsetIdx" );
		cfsec::CFSecISOTZoneByOffsetIdxKey key;
		key.setRequiredTZHourOffset( TZHourOffset );
		key.setRequiredTZMinOffset( TZMinOffset );
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> recVec;
		cfsec::CFSecISOTZoneBuff* clone;
		auto searchDictByOffsetIdx = dictByOffsetIdx->find( key );
		if( searchDictByOffsetIdx != dictByOffsetIdx->end() ) {
			std::map<cfsec::CFSecISOTZonePKey,
				 cfsec::CFSecISOTZoneBuff*>* subdictOffsetIdx = searchDictByOffsetIdx->second;
			std::map<cfsec::CFSecISOTZonePKey,
				cfsec::CFSecISOTZoneBuff*>::iterator iter = subdictOffsetIdx->begin();
			std::map<cfsec::CFSecISOTZonePKey,
				cfsec::CFSecISOTZoneBuff*>::iterator end = subdictOffsetIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfsec::CFSecISOTZoneBuff* CFBamRamISOTZoneTable::readDerivedByUTZNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& TZName )
	{
		static const std::string S_ProcName( "readDerivedByUTZNameIdx" );
		cfsec::CFSecISOTZoneByUTZNameIdxKey key;
		key.setRequiredTZName( TZName );
		cfsec::CFSecISOTZoneBuff* buff;
		auto searchDictByUTZNameIdx = dictByUTZNameIdx->find( key );
		if( searchDictByUTZNameIdx != dictByUTZNameIdx->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( searchDictByUTZNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> CFBamRamISOTZoneTable::readDerivedByIso8601Idx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& Iso8601 )
	{
		static const std::string S_ProcName( "readDerivedByIso8601Idx" );
		cfsec::CFSecISOTZoneByIso8601IdxKey key;
		key.setRequiredIso8601( Iso8601 );
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> recVec;
		cfsec::CFSecISOTZoneBuff* clone;
		auto searchDictByIso8601Idx = dictByIso8601Idx->find( key );
		if( searchDictByIso8601Idx != dictByIso8601Idx->end() ) {
			std::map<cfsec::CFSecISOTZonePKey,
				 cfsec::CFSecISOTZoneBuff*>* subdictIso8601Idx = searchDictByIso8601Idx->second;
			std::map<cfsec::CFSecISOTZonePKey,
				cfsec::CFSecISOTZoneBuff*>::iterator iter = subdictIso8601Idx->begin();
			std::map<cfsec::CFSecISOTZonePKey,
				cfsec::CFSecISOTZoneBuff*>::iterator end = subdictIso8601Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfsec::CFSecISOTZoneBuff* CFBamRamISOTZoneTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOTZoneId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfsec::CFSecISOTZonePKey key;
		key.setRequiredISOTZoneId( ISOTZoneId );
		cfsec::CFSecISOTZoneBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOTZoneBuff* CFBamRamISOTZoneTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOTZonePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfsec::CFSecISOTZoneBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff ) );
	}

	cfsec::CFSecISOTZoneBuff* CFBamRamISOTZoneTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOTZonePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfsec::CFSecISOTZoneBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> CFBamRamISOTZoneTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfsec::CFSecISOTZoneBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecISOTZoneBuff* CFBamRamISOTZoneTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOTZoneId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfsec::CFSecISOTZoneBuff* buff = readDerivedByIdIdx( Authorization,
			ISOTZoneId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> CFBamRamISOTZoneTable::readBuffByOffsetIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t TZHourOffset,
			const int16_t TZMinOffset )
	{
		static const std::string S_ProcName( "readBuffByOffsetIdx" );
		cfsec::CFSecISOTZoneBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> buffList = readDerivedByOffsetIdx( Authorization,
			TZHourOffset,
			TZMinOffset );
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecISOTZoneBuff* CFBamRamISOTZoneTable::readBuffByUTZNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& TZName )
	{
		static const std::string S_ProcName( "readBuffByUTZNameIdx" );
		cfsec::CFSecISOTZoneBuff* buff = readDerivedByUTZNameIdx( Authorization,
			TZName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> CFBamRamISOTZoneTable::readBuffByIso8601Idx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& Iso8601 )
	{
		static const std::string S_ProcName( "readBuffByIso8601Idx" );
		cfsec::CFSecISOTZoneBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> buffList = readDerivedByIso8601Idx( Authorization,
			Iso8601 );
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecISOTZoneBuff* CFBamRamISOTZoneTable::readBuffByLookupUTZNameIdx( const cfsec::CFSecAuthorization* Authorization, const std::string& TZName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUTZNameIdx" );
		cfsec::CFSecISOTZoneBuff* buff = readBuffByUTZNameIdx( Authorization,
			TZName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecISOTZoneBuff* CFBamRamISOTZoneTable::readDerivedByLookupUTZNameIdx( const cfsec::CFSecAuthorization* Authorization, const std::string& TZName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUTZNameIdx" );
		cfsec::CFSecISOTZoneBuff* buff = readDerivedByUTZNameIdx( Authorization,
			TZName );
		if( buff != NULL ) {
			return( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfsec::CFSecISOTZoneBuff* CFBamRamISOTZoneTable::updateISOTZone( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOTZoneBuff* Buff )
	{
		static const std::string S_ProcName( "updateISOTZone" );
		cfsec::CFSecISOTZonePKey pkey;
		pkey.setRequiredISOTZoneId( Buff->getRequiredISOTZoneId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in ISOTZone for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfsec::CFSecISOTZoneBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for ISOTZone primary key " );
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
		cfsec::CFSecISOTZoneByOffsetIdxKey existingKeyOffsetIdx;
		existingKeyOffsetIdx.setRequiredTZHourOffset( existing->getRequiredTZHourOffset() );
		existingKeyOffsetIdx.setRequiredTZMinOffset( existing->getRequiredTZMinOffset() );
		cfsec::CFSecISOTZoneByOffsetIdxKey newKeyOffsetIdx;
		newKeyOffsetIdx.setRequiredTZHourOffset( Buff->getRequiredTZHourOffset() );
		newKeyOffsetIdx.setRequiredTZMinOffset( Buff->getRequiredTZMinOffset() );
		cfsec::CFSecISOTZoneByUTZNameIdxKey existingKeyUTZNameIdx;
		existingKeyUTZNameIdx.setRequiredTZName( existing->getRequiredTZName() );
		cfsec::CFSecISOTZoneByUTZNameIdxKey newKeyUTZNameIdx;
		newKeyUTZNameIdx.setRequiredTZName( Buff->getRequiredTZName() );
		cfsec::CFSecISOTZoneByIso8601IdxKey existingKeyIso8601Idx;
		existingKeyIso8601Idx.setRequiredIso8601( existing->getRequiredIso8601() );
		cfsec::CFSecISOTZoneByIso8601IdxKey newKeyIso8601Idx;
		newKeyIso8601Idx.setRequiredIso8601( Buff->getRequiredIso8601() );
		// Check unique indexes

		if( existingKeyUTZNameIdx != newKeyUTZNameIdx ) {
			auto searchDictByUTZNameIdx = dictByUTZNameIdx->find( newKeyUTZNameIdx );
			if( searchDictByUTZNameIdx != dictByUTZNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ISOTZoneUTZNameIdx " + newKeyUTZNameIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		// Update is valid
		std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfsec::CFSecISOTZoneBuff" );
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

		dictByPKey->insert( std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecISOTZonePKey,
			 cfsec::CFSecISOTZoneBuff*>* subdictOffsetIdx;
		auto searchDictByOffsetIdx = dictByOffsetIdx->find( existingKeyOffsetIdx );
		if( searchDictByOffsetIdx != dictByOffsetIdx->end() ) {
			subdictOffsetIdx = searchDictByOffsetIdx->second;
			auto searchSubDict = subdictOffsetIdx->find( pkey );
			if( searchSubDict != subdictOffsetIdx->end() ) {
				subdictOffsetIdx->erase( searchSubDict );
			}
			if( subdictOffsetIdx->size() <= 0 ) {
				delete subdictOffsetIdx;
				dictByOffsetIdx->erase( searchDictByOffsetIdx );
			}
			subdictOffsetIdx = NULL;
		}
		auto searchNewKeyDictByOffsetIdx = dictByOffsetIdx->find( newKeyOffsetIdx );
		if( searchNewKeyDictByOffsetIdx != dictByOffsetIdx->end() ) {
			subdictOffsetIdx = searchNewKeyDictByOffsetIdx->second;
		}
		else {
			subdictOffsetIdx = new std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>();
			dictByOffsetIdx->insert( std::map<cfsec::CFSecISOTZoneByOffsetIdxKey,
				std::map<cfsec::CFSecISOTZonePKey,
					cfsec::CFSecISOTZoneBuff*>*>::value_type( newKeyOffsetIdx, subdictOffsetIdx ) );
		}
		subdictOffsetIdx->insert( std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>::value_type( pkey, existing ) );

		auto removalDictByUTZNameIdx = dictByUTZNameIdx->find( existingKeyUTZNameIdx );
		if( removalDictByUTZNameIdx != dictByUTZNameIdx->end() ) {
			dictByUTZNameIdx->erase( removalDictByUTZNameIdx );
		}
		dictByUTZNameIdx->insert( std::map<cfsec::CFSecISOTZoneByUTZNameIdxKey, cfsec::CFSecISOTZoneBuff*>::value_type( newKeyUTZNameIdx, existing ) );

		std::map<cfsec::CFSecISOTZonePKey,
			 cfsec::CFSecISOTZoneBuff*>* subdictIso8601Idx;
		auto searchDictByIso8601Idx = dictByIso8601Idx->find( existingKeyIso8601Idx );
		if( searchDictByIso8601Idx != dictByIso8601Idx->end() ) {
			subdictIso8601Idx = searchDictByIso8601Idx->second;
			auto searchSubDict = subdictIso8601Idx->find( pkey );
			if( searchSubDict != subdictIso8601Idx->end() ) {
				subdictIso8601Idx->erase( searchSubDict );
			}
			if( subdictIso8601Idx->size() <= 0 ) {
				delete subdictIso8601Idx;
				dictByIso8601Idx->erase( searchDictByIso8601Idx );
			}
			subdictIso8601Idx = NULL;
		}
		auto searchNewKeyDictByIso8601Idx = dictByIso8601Idx->find( newKeyIso8601Idx );
		if( searchNewKeyDictByIso8601Idx != dictByIso8601Idx->end() ) {
			subdictIso8601Idx = searchNewKeyDictByIso8601Idx->second;
		}
		else {
			subdictIso8601Idx = new std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>();
			dictByIso8601Idx->insert( std::map<cfsec::CFSecISOTZoneByIso8601IdxKey,
				std::map<cfsec::CFSecISOTZonePKey,
					cfsec::CFSecISOTZoneBuff*>*>::value_type( newKeyIso8601Idx, subdictIso8601Idx ) );
		}
		subdictIso8601Idx->insert( std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfsec::CFSecISOTZoneBuff* buff;
		if( existing->getClassCode() == cfsec::CFSecISOTZoneBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfsec::CFSecISOTZoneBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamISOTZoneTable::deleteISOTZone( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOTZoneBuff* Buff )
	{
		static const std::string S_ProcName( "deleteISOTZone" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfsec::CFSecISOTZonePKey pkey;
		pkey.setRequiredISOTZoneId( Buff->getRequiredISOTZoneId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfsec::CFSecISOTZoneBuff* existing = searchExisting->second;
		cfsec::CFSecISOTZoneByOffsetIdxKey keyOffsetIdx;
		keyOffsetIdx.setRequiredTZHourOffset( existing->getRequiredTZHourOffset() );
		keyOffsetIdx.setRequiredTZMinOffset( existing->getRequiredTZMinOffset() );
		cfsec::CFSecISOTZoneByUTZNameIdxKey keyUTZNameIdx;
		keyUTZNameIdx.setRequiredTZName( existing->getRequiredTZName() );
		cfsec::CFSecISOTZoneByIso8601IdxKey keyIso8601Idx;
		keyIso8601Idx.setRequiredIso8601( existing->getRequiredIso8601() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfsec::CFSecISOTZonePKey, cfsec::CFSecISOTZoneBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByOffsetIdx = dictByOffsetIdx->find( keyOffsetIdx );
		if( searchDictByOffsetIdx != dictByOffsetIdx->end() ) {
			std::map<cfsec::CFSecISOTZonePKey,
				 cfsec::CFSecISOTZoneBuff*>* subdictOffsetIdx = searchDictByOffsetIdx->second;
			auto searchSubDict = subdictOffsetIdx->find( pkey );
			if( searchSubDict != subdictOffsetIdx->end() ) {
				subdictOffsetIdx->erase( searchSubDict );
			}
			subdictOffsetIdx = NULL;
		}

		auto searchDictByUTZNameIdx = dictByUTZNameIdx->find( keyUTZNameIdx );
		if( searchDictByUTZNameIdx != dictByUTZNameIdx->end() ) {
			dictByUTZNameIdx->erase( searchDictByUTZNameIdx );
		}

		auto searchDictByIso8601Idx = dictByIso8601Idx->find( keyIso8601Idx );
		if( searchDictByIso8601Idx != dictByIso8601Idx->end() ) {
			std::map<cfsec::CFSecISOTZonePKey,
				 cfsec::CFSecISOTZoneBuff*>* subdictIso8601Idx = searchDictByIso8601Idx->second;
			auto searchSubDict = subdictIso8601Idx->find( pkey );
			if( searchSubDict != subdictIso8601Idx->end() ) {
				subdictIso8601Idx->erase( searchSubDict );
			}
			subdictIso8601Idx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamISOTZoneTable::deleteISOTZoneByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t argISOTZoneId )
	{
		cfsec::CFSecISOTZonePKey key;
		key.setRequiredISOTZoneId( argISOTZoneId );
		deleteISOTZoneByIdIdx( Authorization, &key );
	}

	void CFBamRamISOTZoneTable::deleteISOTZoneByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOTZonePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfsec::CFSecISOTZoneBuff* cur = NULL;
		cfsec::CFSecISOTZoneBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> matchSet;
		std::map<cfsec::CFSecISOTZonePKey,
			cfsec::CFSecISOTZoneBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOTZonePKey,
			cfsec::CFSecISOTZoneBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOTZoneBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOTZone()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOTZoneId() );
			rereadCur = cur;
			deleteISOTZone( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamISOTZoneTable::deleteISOTZoneByOffsetIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t argTZHourOffset,
			const int16_t argTZMinOffset )
	{
		cfsec::CFSecISOTZoneByOffsetIdxKey key;
		key.setRequiredTZHourOffset( argTZHourOffset );
		key.setRequiredTZMinOffset( argTZMinOffset );
		deleteISOTZoneByOffsetIdx( Authorization, &key );
	}

	void CFBamRamISOTZoneTable::deleteISOTZoneByOffsetIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOTZoneByOffsetIdxKey* argKey )
	{
		cfsec::CFSecISOTZoneBuff* cur = NULL;
		cfsec::CFSecISOTZoneBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> matchSet;
		std::map<cfsec::CFSecISOTZonePKey,
			cfsec::CFSecISOTZoneBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOTZonePKey,
			cfsec::CFSecISOTZoneBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOTZoneBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOTZone()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOTZoneId() );
			rereadCur = cur;
			deleteISOTZone( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamISOTZoneTable::deleteISOTZoneByUTZNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& argTZName )
	{
		cfsec::CFSecISOTZoneByUTZNameIdxKey key;
		key.setRequiredTZName( argTZName );
		deleteISOTZoneByUTZNameIdx( Authorization, &key );
	}

	void CFBamRamISOTZoneTable::deleteISOTZoneByUTZNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOTZoneByUTZNameIdxKey* argKey )
	{
		cfsec::CFSecISOTZoneBuff* cur = NULL;
		cfsec::CFSecISOTZoneBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> matchSet;
		std::map<cfsec::CFSecISOTZonePKey,
			cfsec::CFSecISOTZoneBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOTZonePKey,
			cfsec::CFSecISOTZoneBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOTZoneBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOTZone()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOTZoneId() );
			rereadCur = cur;
			deleteISOTZone( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamISOTZoneTable::deleteISOTZoneByIso8601Idx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& argIso8601 )
	{
		cfsec::CFSecISOTZoneByIso8601IdxKey key;
		key.setRequiredIso8601( argIso8601 );
		deleteISOTZoneByIso8601Idx( Authorization, &key );
	}

	void CFBamRamISOTZoneTable::deleteISOTZoneByIso8601Idx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOTZoneByIso8601IdxKey* argKey )
	{
		cfsec::CFSecISOTZoneBuff* cur = NULL;
		cfsec::CFSecISOTZoneBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*> matchSet;
		std::map<cfsec::CFSecISOTZonePKey,
			cfsec::CFSecISOTZoneBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOTZonePKey,
			cfsec::CFSecISOTZoneBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOTZoneBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOTZoneBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOTZoneBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOTZone()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOTZoneId() );
			rereadCur = cur;
			deleteISOTZone( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamISOTZoneTable::releasePreparedStatements() {
	}

}
