
// Description: C++18 Implementation for an in-memory RAM DbIO for ISOCtryCcy.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
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

	const std::string CFBamRamISOCtryCcyTable::CLASS_NAME( "CFBamRamISOCtryCcyTable" );

	CFBamRamISOCtryCcyTable::CFBamRamISOCtryCcyTable( ICFBamSchema* argSchema )
	: cfsec::ICFSecISOCtryCcyTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>();
		dictByCtryIdx = new std::map<cfsec::CFSecISOCtryCcyByCtryIdxKey,
			std::map<cfsec::CFSecISOCtryCcyPKey,
				cfsec::CFSecISOCtryCcyBuff*>*>();
		dictByCcyIdx = new std::map<cfsec::CFSecISOCtryCcyByCcyIdxKey,
			std::map<cfsec::CFSecISOCtryCcyPKey,
				cfsec::CFSecISOCtryCcyBuff*>*>();
	}

	CFBamRamISOCtryCcyTable::~CFBamRamISOCtryCcyTable() {
		if( dictByCtryIdx != NULL ) {
			for( auto iterDict = dictByCtryIdx->begin(); iterDict != dictByCtryIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByCtryIdx;
			dictByCtryIdx = NULL;
		}
		if( dictByCcyIdx != NULL ) {
			for( auto iterDict = dictByCcyIdx->begin(); iterDict != dictByCcyIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByCcyIdx;
			dictByCcyIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfsec::CFSecISOCtryCcyBuff* elt;
			std::map<cfsec::CFSecISOCtryCcyPKey,
				cfsec::CFSecISOCtryCcyBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfsec::CFSecISOCtryCcyPKey,
					cfsec::CFSecISOCtryCcyBuff*>::iterator cur = dictByPKey->begin();
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

	cfsec::CFSecISOCtryCcyBuff* CFBamRamISOCtryCcyTable::createISOCtryCcy( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOCtryCcyBuff* Buff )
	{
		static const std::string S_ProcName( "createISOCtryCcy" );
		cfsec::CFSecISOCtryCcyPKey pkey;
		pkey.setRequiredISOCtryId( Buff->getRequiredISOCtryId() );
		pkey.setRequiredISOCcyId( Buff->getRequiredISOCcyId() );
		Buff->setRequiredISOCtryId( pkey.getRequiredISOCtryId() );
		Buff->setRequiredISOCcyId( pkey.getRequiredISOCcyId() );
		cfsec::CFSecISOCtryCcyByCtryIdxKey keyCtryIdx;
		keyCtryIdx.setRequiredISOCtryId( Buff->getRequiredISOCtryId() );
		cfsec::CFSecISOCtryCcyByCcyIdxKey keyCcyIdx;
		keyCcyIdx.setRequiredISOCcyId( Buff->getRequiredISOCcyId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		// Validate foreign keys

		{
			bool allNull = true;
			allNull = false;
			if( ! allNull ) {
				cfsec::CFSecISOCtryBuff* chk = dynamic_cast<cfsec::CFSecISOCtryBuff*>( schema->getTableISOCtry()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredISOCtryId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ISOCtryCcyCtry to table ISOCtry" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfsec::CFSecISOCtryCcyBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>* subdictCtryIdx;
		auto searchDictByCtryIdx = dictByCtryIdx->find( keyCtryIdx );
		if( searchDictByCtryIdx != dictByCtryIdx->end() ) {
			subdictCtryIdx = searchDictByCtryIdx->second;
		}
		else {
			subdictCtryIdx = new std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>();
			dictByCtryIdx->insert( std::map<cfsec::CFSecISOCtryCcyByCtryIdxKey,
				std::map<cfsec::CFSecISOCtryCcyPKey,
					cfsec::CFSecISOCtryCcyBuff*>*>::value_type( keyCtryIdx, subdictCtryIdx ) );
		}
		subdictCtryIdx->insert( std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>::value_type( pkey, buff ) );

		std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>* subdictCcyIdx;
		auto searchDictByCcyIdx = dictByCcyIdx->find( keyCcyIdx );
		if( searchDictByCcyIdx != dictByCcyIdx->end() ) {
			subdictCcyIdx = searchDictByCcyIdx->second;
		}
		else {
			subdictCcyIdx = new std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>();
			dictByCcyIdx->insert( std::map<cfsec::CFSecISOCtryCcyByCcyIdxKey,
				std::map<cfsec::CFSecISOCtryCcyPKey,
					cfsec::CFSecISOCtryCcyBuff*>*>::value_type( keyCcyIdx, subdictCcyIdx ) );
		}
		subdictCcyIdx->insert( std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfsec::CFSecISOCtryCcyBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfsec::CFSecISOCtryCcyBuff* CFBamRamISOCtryCcyTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryCcyPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfsec::CFSecISOCtryCcyBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOCtryCcyBuff* CFBamRamISOCtryCcyTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryCcyPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfsec::CFSecISOCtryCcyBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> CFBamRamISOCtryCcyTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> retVec;
		std::map<cfsec::CFSecISOCtryCcyPKey,
			cfsec::CFSecISOCtryCcyBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOCtryCcyPKey,
			cfsec::CFSecISOCtryCcyBuff*>::iterator end = dictByPKey->end();
		cfsec::CFSecISOCtryCcyBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> CFBamRamISOCtryCcyTable::readDerivedByCtryIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCtryId )
	{
		static const std::string S_ProcName( "readDerivedByCtryIdx" );
		cfsec::CFSecISOCtryCcyByCtryIdxKey key;
		key.setRequiredISOCtryId( ISOCtryId );
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> recVec;
		cfsec::CFSecISOCtryCcyBuff* clone;
		auto searchDictByCtryIdx = dictByCtryIdx->find( key );
		if( searchDictByCtryIdx != dictByCtryIdx->end() ) {
			std::map<cfsec::CFSecISOCtryCcyPKey,
				 cfsec::CFSecISOCtryCcyBuff*>* subdictCtryIdx = searchDictByCtryIdx->second;
			std::map<cfsec::CFSecISOCtryCcyPKey,
				cfsec::CFSecISOCtryCcyBuff*>::iterator iter = subdictCtryIdx->begin();
			std::map<cfsec::CFSecISOCtryCcyPKey,
				cfsec::CFSecISOCtryCcyBuff*>::iterator end = subdictCtryIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> CFBamRamISOCtryCcyTable::readDerivedByCcyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCcyId )
	{
		static const std::string S_ProcName( "readDerivedByCcyIdx" );
		cfsec::CFSecISOCtryCcyByCcyIdxKey key;
		key.setRequiredISOCcyId( ISOCcyId );
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> recVec;
		cfsec::CFSecISOCtryCcyBuff* clone;
		auto searchDictByCcyIdx = dictByCcyIdx->find( key );
		if( searchDictByCcyIdx != dictByCcyIdx->end() ) {
			std::map<cfsec::CFSecISOCtryCcyPKey,
				 cfsec::CFSecISOCtryCcyBuff*>* subdictCcyIdx = searchDictByCcyIdx->second;
			std::map<cfsec::CFSecISOCtryCcyPKey,
				cfsec::CFSecISOCtryCcyBuff*>::iterator iter = subdictCcyIdx->begin();
			std::map<cfsec::CFSecISOCtryCcyPKey,
				cfsec::CFSecISOCtryCcyBuff*>::iterator end = subdictCcyIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfsec::CFSecISOCtryCcyBuff* CFBamRamISOCtryCcyTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCtryId,
			const int16_t ISOCcyId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfsec::CFSecISOCtryCcyPKey key;
		key.setRequiredISOCtryId( ISOCtryId );
		key.setRequiredISOCcyId( ISOCcyId );
		cfsec::CFSecISOCtryCcyBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOCtryCcyBuff* CFBamRamISOCtryCcyTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryCcyPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfsec::CFSecISOCtryCcyBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfsec::CFSecISOCtryCcyBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( buff ) );
	}

	cfsec::CFSecISOCtryCcyBuff* CFBamRamISOCtryCcyTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryCcyPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfsec::CFSecISOCtryCcyBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> CFBamRamISOCtryCcyTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfsec::CFSecISOCtryCcyBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecISOCtryCcyBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecISOCtryCcyBuff* CFBamRamISOCtryCcyTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCtryId,
			const int16_t ISOCcyId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfsec::CFSecISOCtryCcyBuff* buff = readDerivedByIdIdx( Authorization,
			ISOCtryId,
			ISOCcyId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOCtryCcyBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> CFBamRamISOCtryCcyTable::readBuffByCtryIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCtryId )
	{
		static const std::string S_ProcName( "readBuffByCtryIdx" );
		cfsec::CFSecISOCtryCcyBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> buffList = readDerivedByCtryIdx( Authorization,
			ISOCtryId );
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecISOCtryCcyBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> CFBamRamISOCtryCcyTable::readBuffByCcyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCcyId )
	{
		static const std::string S_ProcName( "readBuffByCcyIdx" );
		cfsec::CFSecISOCtryCcyBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> buffList = readDerivedByCcyIdx( Authorization,
			ISOCcyId );
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecISOCtryCcyBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecISOCtryCcyBuff* CFBamRamISOCtryCcyTable::updateISOCtryCcy( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOCtryCcyBuff* Buff )
	{
		static const std::string S_ProcName( "updateISOCtryCcy" );
		cfsec::CFSecISOCtryCcyPKey pkey;
		pkey.setRequiredISOCtryId( Buff->getRequiredISOCtryId() );
		pkey.setRequiredISOCcyId( Buff->getRequiredISOCcyId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in ISOCtryCcy for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfsec::CFSecISOCtryCcyBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for ISOCtryCcy primary key " );
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
		cfsec::CFSecISOCtryCcyByCtryIdxKey existingKeyCtryIdx;
		existingKeyCtryIdx.setRequiredISOCtryId( existing->getRequiredISOCtryId() );
		cfsec::CFSecISOCtryCcyByCtryIdxKey newKeyCtryIdx;
		newKeyCtryIdx.setRequiredISOCtryId( Buff->getRequiredISOCtryId() );
		cfsec::CFSecISOCtryCcyByCcyIdxKey existingKeyCcyIdx;
		existingKeyCcyIdx.setRequiredISOCcyId( existing->getRequiredISOCcyId() );
		cfsec::CFSecISOCtryCcyByCcyIdxKey newKeyCcyIdx;
		newKeyCcyIdx.setRequiredISOCcyId( Buff->getRequiredISOCcyId() );
		// Check unique indexes

		// Validate foreign keys

		{
			bool allNull = true;

			if( allNull ) {
				cfsec::CFSecISOCtryBuff* chk = dynamic_cast<cfsec::CFSecISOCtryBuff*>( schema->getTableISOCtry()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredISOCtryId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ISOCtryCcyCtry to table ISOCtry" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfsec::CFSecISOCtryCcyBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfsec::CFSecISOCtryCcyBuff" );
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

		dictByPKey->insert( std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecISOCtryCcyPKey,
			 cfsec::CFSecISOCtryCcyBuff*>* subdictCtryIdx;
		auto searchDictByCtryIdx = dictByCtryIdx->find( existingKeyCtryIdx );
		if( searchDictByCtryIdx != dictByCtryIdx->end() ) {
			subdictCtryIdx = searchDictByCtryIdx->second;
			auto searchSubDict = subdictCtryIdx->find( pkey );
			if( searchSubDict != subdictCtryIdx->end() ) {
				subdictCtryIdx->erase( searchSubDict );
			}
			if( subdictCtryIdx->size() <= 0 ) {
				delete subdictCtryIdx;
				dictByCtryIdx->erase( searchDictByCtryIdx );
			}
			subdictCtryIdx = NULL;
		}
		auto searchNewKeyDictByCtryIdx = dictByCtryIdx->find( newKeyCtryIdx );
		if( searchNewKeyDictByCtryIdx != dictByCtryIdx->end() ) {
			subdictCtryIdx = searchNewKeyDictByCtryIdx->second;
		}
		else {
			subdictCtryIdx = new std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>();
			dictByCtryIdx->insert( std::map<cfsec::CFSecISOCtryCcyByCtryIdxKey,
				std::map<cfsec::CFSecISOCtryCcyPKey,
					cfsec::CFSecISOCtryCcyBuff*>*>::value_type( newKeyCtryIdx, subdictCtryIdx ) );
		}
		subdictCtryIdx->insert( std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>::value_type( pkey, existing ) );

		std::map<cfsec::CFSecISOCtryCcyPKey,
			 cfsec::CFSecISOCtryCcyBuff*>* subdictCcyIdx;
		auto searchDictByCcyIdx = dictByCcyIdx->find( existingKeyCcyIdx );
		if( searchDictByCcyIdx != dictByCcyIdx->end() ) {
			subdictCcyIdx = searchDictByCcyIdx->second;
			auto searchSubDict = subdictCcyIdx->find( pkey );
			if( searchSubDict != subdictCcyIdx->end() ) {
				subdictCcyIdx->erase( searchSubDict );
			}
			if( subdictCcyIdx->size() <= 0 ) {
				delete subdictCcyIdx;
				dictByCcyIdx->erase( searchDictByCcyIdx );
			}
			subdictCcyIdx = NULL;
		}
		auto searchNewKeyDictByCcyIdx = dictByCcyIdx->find( newKeyCcyIdx );
		if( searchNewKeyDictByCcyIdx != dictByCcyIdx->end() ) {
			subdictCcyIdx = searchNewKeyDictByCcyIdx->second;
		}
		else {
			subdictCcyIdx = new std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>();
			dictByCcyIdx->insert( std::map<cfsec::CFSecISOCtryCcyByCcyIdxKey,
				std::map<cfsec::CFSecISOCtryCcyPKey,
					cfsec::CFSecISOCtryCcyBuff*>*>::value_type( newKeyCcyIdx, subdictCcyIdx ) );
		}
		subdictCcyIdx->insert( std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfsec::CFSecISOCtryCcyBuff* buff;
		if( existing->getClassCode() == cfsec::CFSecISOCtryCcyBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamISOCtryCcyTable::deleteISOCtryCcy( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOCtryCcyBuff* Buff )
	{
		static const std::string S_ProcName( "deleteISOCtryCcy" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfsec::CFSecISOCtryCcyPKey pkey;
		pkey.setRequiredISOCtryId( Buff->getRequiredISOCtryId() );
		pkey.setRequiredISOCcyId( Buff->getRequiredISOCcyId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfsec::CFSecISOCtryCcyBuff* existing = searchExisting->second;
		cfsec::CFSecISOCtryCcyByCtryIdxKey keyCtryIdx;
		keyCtryIdx.setRequiredISOCtryId( existing->getRequiredISOCtryId() );
		cfsec::CFSecISOCtryCcyByCcyIdxKey keyCcyIdx;
		keyCcyIdx.setRequiredISOCcyId( existing->getRequiredISOCcyId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfsec::CFSecISOCtryCcyPKey, cfsec::CFSecISOCtryCcyBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByCtryIdx = dictByCtryIdx->find( keyCtryIdx );
		if( searchDictByCtryIdx != dictByCtryIdx->end() ) {
			std::map<cfsec::CFSecISOCtryCcyPKey,
				 cfsec::CFSecISOCtryCcyBuff*>* subdictCtryIdx = searchDictByCtryIdx->second;
			auto searchSubDict = subdictCtryIdx->find( pkey );
			if( searchSubDict != subdictCtryIdx->end() ) {
				subdictCtryIdx->erase( searchSubDict );
			}
			subdictCtryIdx = NULL;
		}

		auto searchDictByCcyIdx = dictByCcyIdx->find( keyCcyIdx );
		if( searchDictByCcyIdx != dictByCcyIdx->end() ) {
			std::map<cfsec::CFSecISOCtryCcyPKey,
				 cfsec::CFSecISOCtryCcyBuff*>* subdictCcyIdx = searchDictByCcyIdx->second;
			auto searchSubDict = subdictCcyIdx->find( pkey );
			if( searchSubDict != subdictCcyIdx->end() ) {
				subdictCcyIdx->erase( searchSubDict );
			}
			subdictCcyIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamISOCtryCcyTable::deleteISOCtryCcyByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t argISOCtryId,
			const int16_t argISOCcyId )
	{
		cfsec::CFSecISOCtryCcyPKey key;
		key.setRequiredISOCtryId( argISOCtryId );
		key.setRequiredISOCcyId( argISOCcyId );
		deleteISOCtryCcyByIdIdx( Authorization, &key );
	}

	void CFBamRamISOCtryCcyTable::deleteISOCtryCcyByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryCcyPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfsec::CFSecISOCtryCcyBuff* cur = NULL;
		cfsec::CFSecISOCtryCcyBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> matchSet;
		std::map<cfsec::CFSecISOCtryCcyPKey,
			cfsec::CFSecISOCtryCcyBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOCtryCcyPKey,
			cfsec::CFSecISOCtryCcyBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOCtryCcy()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOCtryId(),
				cur->getRequiredISOCcyId() );
			rereadCur = cur;
			deleteISOCtryCcy( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamISOCtryCcyTable::deleteISOCtryCcyByCtryIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t argISOCtryId )
	{
		cfsec::CFSecISOCtryCcyByCtryIdxKey key;
		key.setRequiredISOCtryId( argISOCtryId );
		deleteISOCtryCcyByCtryIdx( Authorization, &key );
	}

	void CFBamRamISOCtryCcyTable::deleteISOCtryCcyByCtryIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryCcyByCtryIdxKey* argKey )
	{
		cfsec::CFSecISOCtryCcyBuff* cur = NULL;
		cfsec::CFSecISOCtryCcyBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> matchSet;
		std::map<cfsec::CFSecISOCtryCcyPKey,
			cfsec::CFSecISOCtryCcyBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOCtryCcyPKey,
			cfsec::CFSecISOCtryCcyBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOCtryCcy()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOCtryId(),
				cur->getRequiredISOCcyId() );
			rereadCur = cur;
			deleteISOCtryCcy( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamISOCtryCcyTable::deleteISOCtryCcyByCcyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t argISOCcyId )
	{
		cfsec::CFSecISOCtryCcyByCcyIdxKey key;
		key.setRequiredISOCcyId( argISOCcyId );
		deleteISOCtryCcyByCcyIdx( Authorization, &key );
	}

	void CFBamRamISOCtryCcyTable::deleteISOCtryCcyByCcyIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryCcyByCcyIdxKey* argKey )
	{
		cfsec::CFSecISOCtryCcyBuff* cur = NULL;
		cfsec::CFSecISOCtryCcyBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> matchSet;
		std::map<cfsec::CFSecISOCtryCcyPKey,
			cfsec::CFSecISOCtryCcyBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOCtryCcyPKey,
			cfsec::CFSecISOCtryCcyBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOCtryCcyBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOCtryCcy()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOCtryId(),
				cur->getRequiredISOCcyId() );
			rereadCur = cur;
			deleteISOCtryCcy( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamISOCtryCcyTable::releasePreparedStatements() {
	}

}
