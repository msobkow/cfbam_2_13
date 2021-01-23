
// Description: C++18 Implementation for an in-memory RAM DbIO for ISOLang.

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

	const std::string CFBamRamISOLangTable::CLASS_NAME( "CFBamRamISOLangTable" );

	CFBamRamISOLangTable::CFBamRamISOLangTable( ICFBamSchema* argSchema )
	: cfsec::ICFSecISOLangTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfsec::CFSecISOLangPKey, cfsec::CFSecISOLangBuff*>();
		dictByCode3Idx = new std::map<cfsec::CFSecISOLangByCode3IdxKey, cfsec::CFSecISOLangBuff*>();
		dictByCode2Idx = new std::map<cfsec::CFSecISOLangByCode2IdxKey,
			std::map<cfsec::CFSecISOLangPKey,
				cfsec::CFSecISOLangBuff*>*>();
	}

	CFBamRamISOLangTable::~CFBamRamISOLangTable() {
		if( dictByCode3Idx != NULL ) {
			delete dictByCode3Idx;
			dictByCode3Idx = NULL;
		}
		if( dictByCode2Idx != NULL ) {
			for( auto iterDict = dictByCode2Idx->begin(); iterDict != dictByCode2Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByCode2Idx;
			dictByCode2Idx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfsec::CFSecISOLangBuff* elt;
			std::map<cfsec::CFSecISOLangPKey,
				cfsec::CFSecISOLangBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfsec::CFSecISOLangPKey,
					cfsec::CFSecISOLangBuff*>::iterator cur = dictByPKey->begin();
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

	cfsec::CFSecISOLangBuff* CFBamRamISOLangTable::createISOLang( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOLangBuff* Buff )
	{
		static const std::string S_ProcName( "createISOLang" );
		cfsec::CFSecISOLangPKey pkey;
		pkey.setRequiredISOLangId( schema->nextISOLangIdGen() );
		Buff->setRequiredISOLangId( pkey.getRequiredISOLangId() );
		cfsec::CFSecISOLangByCode3IdxKey keyCode3Idx;
		keyCode3Idx.setRequiredISO6392Code( Buff->getRequiredISO6392Code() );
		cfsec::CFSecISOLangByCode2IdxKey keyCode2Idx;
		if( Buff->isOptionalISO6391CodeNull() ) {
			keyCode2Idx.setOptionalISO6391CodeNull();
		}
		else {
			keyCode2Idx.setOptionalISO6391CodeValue( Buff->getOptionalISO6391CodeValue() );
		}
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByCode3Idx = dictByCode3Idx->find( keyCode3Idx );
		if( searchDictByCode3Idx != dictByCode3Idx->end() ) {
			std::string Msg( "Duplicate key detected for index ISOLang6392Idx " + keyCode3Idx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfsec::CFSecISOLangBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfsec::CFSecISOLangPKey, cfsec::CFSecISOLangBuff*>::value_type( pkey, buff ) );

		dictByCode3Idx->insert( std::map<cfsec::CFSecISOLangByCode3IdxKey, cfsec::CFSecISOLangBuff*>::value_type( keyCode3Idx, buff ) );

		std::map<cfsec::CFSecISOLangPKey, cfsec::CFSecISOLangBuff*>* subdictCode2Idx;
		auto searchDictByCode2Idx = dictByCode2Idx->find( keyCode2Idx );
		if( searchDictByCode2Idx != dictByCode2Idx->end() ) {
			subdictCode2Idx = searchDictByCode2Idx->second;
		}
		else {
			subdictCode2Idx = new std::map<cfsec::CFSecISOLangPKey, cfsec::CFSecISOLangBuff*>();
			dictByCode2Idx->insert( std::map<cfsec::CFSecISOLangByCode2IdxKey,
				std::map<cfsec::CFSecISOLangPKey,
					cfsec::CFSecISOLangBuff*>*>::value_type( keyCode2Idx, subdictCode2Idx ) );
		}
		subdictCode2Idx->insert( std::map<cfsec::CFSecISOLangPKey, cfsec::CFSecISOLangBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfsec::CFSecISOLangBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfsec::CFSecISOLangBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfsec::CFSecISOLangBuff* CFBamRamISOLangTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOLangPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfsec::CFSecISOLangBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOLangBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOLangBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOLangBuff* CFBamRamISOLangTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOLangPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfsec::CFSecISOLangBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOLangBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOLangBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> CFBamRamISOLangTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> retVec;
		std::map<cfsec::CFSecISOLangPKey,
			cfsec::CFSecISOLangBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOLangPKey,
			cfsec::CFSecISOLangBuff*>::iterator end = dictByPKey->end();
		cfsec::CFSecISOLangBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfsec::CFSecISOLangBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfsec::CFSecISOLangBuff* CFBamRamISOLangTable::readDerivedByCode3Idx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& ISO6392Code )
	{
		static const std::string S_ProcName( "readDerivedByCode3Idx" );
		cfsec::CFSecISOLangByCode3IdxKey key;
		key.setRequiredISO6392Code( ISO6392Code );
		cfsec::CFSecISOLangBuff* buff;
		auto searchDictByCode3Idx = dictByCode3Idx->find( key );
		if( searchDictByCode3Idx != dictByCode3Idx->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOLangBuff*>( searchDictByCode3Idx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOLangBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> CFBamRamISOLangTable::readDerivedByCode2Idx( const cfsec::CFSecAuthorization* Authorization,
			const std::string* ISO6391Code )
	{
		static const std::string S_ProcName( "readDerivedByCode2Idx" );
		cfsec::CFSecISOLangByCode2IdxKey key;
		if( ISO6391Code == NULL ) {
			key.setOptionalISO6391CodeNull();
		}
		else {
			key.setOptionalISO6391CodeValue( *ISO6391Code );
		}
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> recVec;
		cfsec::CFSecISOLangBuff* clone;
		auto searchDictByCode2Idx = dictByCode2Idx->find( key );
		if( searchDictByCode2Idx != dictByCode2Idx->end() ) {
			std::map<cfsec::CFSecISOLangPKey,
				 cfsec::CFSecISOLangBuff*>* subdictCode2Idx = searchDictByCode2Idx->second;
			std::map<cfsec::CFSecISOLangPKey,
				cfsec::CFSecISOLangBuff*>::iterator iter = subdictCode2Idx->begin();
			std::map<cfsec::CFSecISOLangPKey,
				cfsec::CFSecISOLangBuff*>::iterator end = subdictCode2Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfsec::CFSecISOLangBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfsec::CFSecISOLangBuff* CFBamRamISOLangTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOLangId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfsec::CFSecISOLangPKey key;
		key.setRequiredISOLangId( ISOLangId );
		cfsec::CFSecISOLangBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOLangBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOLangBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOLangBuff* CFBamRamISOLangTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOLangPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfsec::CFSecISOLangBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfsec::CFSecISOLangBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfsec::CFSecISOLangBuff*>( buff ) );
	}

	cfsec::CFSecISOLangBuff* CFBamRamISOLangTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOLangPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfsec::CFSecISOLangBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfsec::CFSecISOLangBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> CFBamRamISOLangTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfsec::CFSecISOLangBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecISOLangBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecISOLangBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecISOLangBuff* CFBamRamISOLangTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOLangId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfsec::CFSecISOLangBuff* buff = readDerivedByIdIdx( Authorization,
			ISOLangId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOLangBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOLangBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecISOLangBuff* CFBamRamISOLangTable::readBuffByCode3Idx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& ISO6392Code )
	{
		static const std::string S_ProcName( "readBuffByCode3Idx" );
		cfsec::CFSecISOLangBuff* buff = readDerivedByCode3Idx( Authorization,
			ISO6392Code );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOLangBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOLangBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> CFBamRamISOLangTable::readBuffByCode2Idx( const cfsec::CFSecAuthorization* Authorization,
			const std::string* ISO6391Code )
	{
		static const std::string S_ProcName( "readBuffByCode2Idx" );
		cfsec::CFSecISOLangBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> buffList = readDerivedByCode2Idx( Authorization,
			ISO6391Code );
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecISOLangBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecISOLangBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecISOLangBuff* CFBamRamISOLangTable::readBuffByLookupCode3Idx( const cfsec::CFSecAuthorization* Authorization, const std::string& ISO6392Code,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupCode3Idx" );
		cfsec::CFSecISOLangBuff* buff = readBuffByCode3Idx( Authorization,
			ISO6392Code );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOLangBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOLangBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecISOLangBuff* CFBamRamISOLangTable::readDerivedByLookupCode3Idx( const cfsec::CFSecAuthorization* Authorization, const std::string& ISO6392Code,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupCode3Idx" );
		cfsec::CFSecISOLangBuff* buff = readDerivedByCode3Idx( Authorization,
			ISO6392Code );
		if( buff != NULL ) {
			return( dynamic_cast<cfsec::CFSecISOLangBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfsec::CFSecISOLangBuff* CFBamRamISOLangTable::updateISOLang( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOLangBuff* Buff )
	{
		static const std::string S_ProcName( "updateISOLang" );
		cfsec::CFSecISOLangPKey pkey;
		pkey.setRequiredISOLangId( Buff->getRequiredISOLangId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in ISOLang for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfsec::CFSecISOLangBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for ISOLang primary key " );
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
		cfsec::CFSecISOLangByCode3IdxKey existingKeyCode3Idx;
		existingKeyCode3Idx.setRequiredISO6392Code( existing->getRequiredISO6392Code() );
		cfsec::CFSecISOLangByCode3IdxKey newKeyCode3Idx;
		newKeyCode3Idx.setRequiredISO6392Code( Buff->getRequiredISO6392Code() );
		cfsec::CFSecISOLangByCode2IdxKey existingKeyCode2Idx;
		if( existing->isOptionalISO6391CodeNull() ) {
			existingKeyCode2Idx.setOptionalISO6391CodeNull();
		}
		else {
			existingKeyCode2Idx.setOptionalISO6391CodeValue( existing->getOptionalISO6391CodeValue() );
		}
		cfsec::CFSecISOLangByCode2IdxKey newKeyCode2Idx;
		if( Buff->isOptionalISO6391CodeNull() ) {
			newKeyCode2Idx.setOptionalISO6391CodeNull();
		}
		else {
			newKeyCode2Idx.setOptionalISO6391CodeValue( Buff->getOptionalISO6391CodeValue() );
		}
		// Check unique indexes

		if( existingKeyCode3Idx != newKeyCode3Idx ) {
			auto searchDictByCode3Idx = dictByCode3Idx->find( newKeyCode3Idx );
			if( searchDictByCode3Idx != dictByCode3Idx->end() ) {
				std::string Msg( "Duplicate key detected for index ISOLang6392Idx " + newKeyCode3Idx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		// Update is valid
		std::map<cfsec::CFSecISOLangPKey, cfsec::CFSecISOLangBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfsec::CFSecISOLangBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfsec::CFSecISOLangBuff" );
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

		dictByPKey->insert( std::map<cfsec::CFSecISOLangPKey, cfsec::CFSecISOLangBuff*>::value_type( pkey, existing ) );

		auto removalDictByCode3Idx = dictByCode3Idx->find( existingKeyCode3Idx );
		if( removalDictByCode3Idx != dictByCode3Idx->end() ) {
			dictByCode3Idx->erase( removalDictByCode3Idx );
		}
		dictByCode3Idx->insert( std::map<cfsec::CFSecISOLangByCode3IdxKey, cfsec::CFSecISOLangBuff*>::value_type( newKeyCode3Idx, existing ) );

		std::map<cfsec::CFSecISOLangPKey,
			 cfsec::CFSecISOLangBuff*>* subdictCode2Idx;
		auto searchDictByCode2Idx = dictByCode2Idx->find( existingKeyCode2Idx );
		if( searchDictByCode2Idx != dictByCode2Idx->end() ) {
			subdictCode2Idx = searchDictByCode2Idx->second;
			auto searchSubDict = subdictCode2Idx->find( pkey );
			if( searchSubDict != subdictCode2Idx->end() ) {
				subdictCode2Idx->erase( searchSubDict );
			}
			if( subdictCode2Idx->size() <= 0 ) {
				delete subdictCode2Idx;
				dictByCode2Idx->erase( searchDictByCode2Idx );
			}
			subdictCode2Idx = NULL;
		}
		auto searchNewKeyDictByCode2Idx = dictByCode2Idx->find( newKeyCode2Idx );
		if( searchNewKeyDictByCode2Idx != dictByCode2Idx->end() ) {
			subdictCode2Idx = searchNewKeyDictByCode2Idx->second;
		}
		else {
			subdictCode2Idx = new std::map<cfsec::CFSecISOLangPKey, cfsec::CFSecISOLangBuff*>();
			dictByCode2Idx->insert( std::map<cfsec::CFSecISOLangByCode2IdxKey,
				std::map<cfsec::CFSecISOLangPKey,
					cfsec::CFSecISOLangBuff*>*>::value_type( newKeyCode2Idx, subdictCode2Idx ) );
		}
		subdictCode2Idx->insert( std::map<cfsec::CFSecISOLangPKey, cfsec::CFSecISOLangBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfsec::CFSecISOLangBuff* buff;
		if( existing->getClassCode() == cfsec::CFSecISOLangBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfsec::CFSecISOLangBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamISOLangTable::deleteISOLang( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOLangBuff* Buff )
	{
		static const std::string S_ProcName( "deleteISOLang" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfsec::CFSecISOLangPKey pkey;
		pkey.setRequiredISOLangId( Buff->getRequiredISOLangId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfsec::CFSecISOLangBuff* existing = searchExisting->second;
		std::TCFLibOwningVector<cfsec::CFSecISOCtryLangBuff*> arrCheckISOLangCountries = schema->getTableISOCtryLang()->readDerivedByLangIdx( Authorization,
			existing->getRequiredISOLangId() );
		if( arrCheckISOLangCountries.size() > 0 ) {
			schema->getTableISOCtryLang()->deleteISOCtryLangByLangIdx( Authorization,
			existing->getRequiredISOLangId() );
		}
		cfsec::CFSecISOLangByCode3IdxKey keyCode3Idx;
		keyCode3Idx.setRequiredISO6392Code( existing->getRequiredISO6392Code() );
		cfsec::CFSecISOLangByCode2IdxKey keyCode2Idx;
		if( existing->isOptionalISO6391CodeNull() ) {
			keyCode2Idx.setOptionalISO6391CodeNull();
		}
		else {
			keyCode2Idx.setOptionalISO6391CodeValue( existing->getOptionalISO6391CodeValue() );
		}
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfsec::CFSecISOLangPKey, cfsec::CFSecISOLangBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByCode3Idx = dictByCode3Idx->find( keyCode3Idx );
		if( searchDictByCode3Idx != dictByCode3Idx->end() ) {
			dictByCode3Idx->erase( searchDictByCode3Idx );
		}

		auto searchDictByCode2Idx = dictByCode2Idx->find( keyCode2Idx );
		if( searchDictByCode2Idx != dictByCode2Idx->end() ) {
			std::map<cfsec::CFSecISOLangPKey,
				 cfsec::CFSecISOLangBuff*>* subdictCode2Idx = searchDictByCode2Idx->second;
			auto searchSubDict = subdictCode2Idx->find( pkey );
			if( searchSubDict != subdictCode2Idx->end() ) {
				subdictCode2Idx->erase( searchSubDict );
			}
			subdictCode2Idx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamISOLangTable::deleteISOLangByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t argISOLangId )
	{
		cfsec::CFSecISOLangPKey key;
		key.setRequiredISOLangId( argISOLangId );
		deleteISOLangByIdIdx( Authorization, &key );
	}

	void CFBamRamISOLangTable::deleteISOLangByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOLangPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfsec::CFSecISOLangBuff* cur = NULL;
		cfsec::CFSecISOLangBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> matchSet;
		std::map<cfsec::CFSecISOLangPKey,
			cfsec::CFSecISOLangBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOLangPKey,
			cfsec::CFSecISOLangBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOLangBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOLangBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOLang()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOLangId() );
			rereadCur = cur;
			deleteISOLang( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamISOLangTable::deleteISOLangByCode3Idx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& argISO6392Code )
	{
		cfsec::CFSecISOLangByCode3IdxKey key;
		key.setRequiredISO6392Code( argISO6392Code );
		deleteISOLangByCode3Idx( Authorization, &key );
	}

	void CFBamRamISOLangTable::deleteISOLangByCode3Idx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOLangByCode3IdxKey* argKey )
	{
		cfsec::CFSecISOLangBuff* cur = NULL;
		cfsec::CFSecISOLangBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> matchSet;
		std::map<cfsec::CFSecISOLangPKey,
			cfsec::CFSecISOLangBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOLangPKey,
			cfsec::CFSecISOLangBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOLangBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOLangBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOLang()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOLangId() );
			rereadCur = cur;
			deleteISOLang( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamISOLangTable::deleteISOLangByCode2Idx( const cfsec::CFSecAuthorization* Authorization,
			const std::string* argISO6391Code )
	{
		cfsec::CFSecISOLangByCode2IdxKey key;
		if( argISO6391Code == NULL ) {
			key.setOptionalISO6391CodeNull();
		}
		else {
			key.setOptionalISO6391CodeValue( *argISO6391Code );
		}
		deleteISOLangByCode2Idx( Authorization, &key );
	}

	void CFBamRamISOLangTable::deleteISOLangByCode2Idx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOLangByCode2IdxKey* argKey )
	{
		cfsec::CFSecISOLangBuff* cur = NULL;
		cfsec::CFSecISOLangBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalISO6391CodeNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*> matchSet;
		std::map<cfsec::CFSecISOLangPKey,
			cfsec::CFSecISOLangBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOLangPKey,
			cfsec::CFSecISOLangBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOLangBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOLangBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOLangBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOLang()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOLangId() );
			rereadCur = cur;
			deleteISOLang( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamISOLangTable::releasePreparedStatements() {
	}

}
