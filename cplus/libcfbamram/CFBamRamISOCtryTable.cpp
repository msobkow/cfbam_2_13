
// Description: C++18 Implementation for an in-memory RAM DbIO for ISOCtry.

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

	const std::string CFBamRamISOCtryTable::CLASS_NAME( "CFBamRamISOCtryTable" );

	CFBamRamISOCtryTable::CFBamRamISOCtryTable( ICFBamSchema* argSchema )
	: cfsec::ICFSecISOCtryTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfsec::CFSecISOCtryPKey, cfsec::CFSecISOCtryBuff*>();
		dictByISOCodeIdx = new std::map<cfsec::CFSecISOCtryByISOCodeIdxKey, cfsec::CFSecISOCtryBuff*>();
		dictByNameIdx = new std::map<cfsec::CFSecISOCtryByNameIdxKey, cfsec::CFSecISOCtryBuff*>();
	}

	CFBamRamISOCtryTable::~CFBamRamISOCtryTable() {
		if( dictByISOCodeIdx != NULL ) {
			delete dictByISOCodeIdx;
			dictByISOCodeIdx = NULL;
		}
		if( dictByNameIdx != NULL ) {
			delete dictByNameIdx;
			dictByNameIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfsec::CFSecISOCtryBuff* elt;
			std::map<cfsec::CFSecISOCtryPKey,
				cfsec::CFSecISOCtryBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfsec::CFSecISOCtryPKey,
					cfsec::CFSecISOCtryBuff*>::iterator cur = dictByPKey->begin();
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

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::createISOCtry( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOCtryBuff* Buff )
	{
		static const std::string S_ProcName( "createISOCtry" );
		cfsec::CFSecISOCtryPKey pkey;
		pkey.setRequiredISOCtryId( schema->nextISOCtryIdGen() );
		Buff->setRequiredISOCtryId( pkey.getRequiredISOCtryId() );
		cfsec::CFSecISOCtryByISOCodeIdxKey keyISOCodeIdx;
		keyISOCodeIdx.setRequiredISOCode( Buff->getRequiredISOCode() );
		cfsec::CFSecISOCtryByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredName( Buff->getRequiredName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByISOCodeIdx = dictByISOCodeIdx->find( keyISOCodeIdx );
		if( searchDictByISOCodeIdx != dictByISOCodeIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ISOCtryCodeIdx " + keyISOCodeIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		auto searchDictByNameIdx = dictByNameIdx->find( keyNameIdx );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ISOCtryNameIdx " + keyNameIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfsec::CFSecISOCtryBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfsec::CFSecISOCtryPKey, cfsec::CFSecISOCtryBuff*>::value_type( pkey, buff ) );

		dictByISOCodeIdx->insert( std::map<cfsec::CFSecISOCtryByISOCodeIdxKey, cfsec::CFSecISOCtryBuff*>::value_type( keyISOCodeIdx, buff ) );

		dictByNameIdx->insert( std::map<cfsec::CFSecISOCtryByNameIdxKey, cfsec::CFSecISOCtryBuff*>::value_type( keyNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfsec::CFSecISOCtryBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfsec::CFSecISOCtryBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCtryBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfsec::CFSecISOCtryBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCtryBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*> CFBamRamISOCtryTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*> retVec;
		std::map<cfsec::CFSecISOCtryPKey,
			cfsec::CFSecISOCtryBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOCtryPKey,
			cfsec::CFSecISOCtryBuff*>::iterator end = dictByPKey->end();
		cfsec::CFSecISOCtryBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfsec::CFSecISOCtryBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::readDerivedByISOCodeIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& ISOCode )
	{
		static const std::string S_ProcName( "readDerivedByISOCodeIdx" );
		cfsec::CFSecISOCtryByISOCodeIdxKey key;
		key.setRequiredISOCode( ISOCode );
		cfsec::CFSecISOCtryBuff* buff;
		auto searchDictByISOCodeIdx = dictByISOCodeIdx->find( key );
		if( searchDictByISOCodeIdx != dictByISOCodeIdx->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCtryBuff*>( searchDictByISOCodeIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::readDerivedByNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByNameIdx" );
		cfsec::CFSecISOCtryByNameIdxKey key;
		key.setRequiredName( Name );
		cfsec::CFSecISOCtryBuff* buff;
		auto searchDictByNameIdx = dictByNameIdx->find( key );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCtryBuff*>( searchDictByNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCtryId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfsec::CFSecISOCtryPKey key;
		key.setRequiredISOCtryId( ISOCtryId );
		cfsec::CFSecISOCtryBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCtryBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfsec::CFSecISOCtryBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfsec::CFSecISOCtryBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff ) );
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfsec::CFSecISOCtryBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*> CFBamRamISOCtryTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfsec::CFSecISOCtryBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecISOCtryBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCtryId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfsec::CFSecISOCtryBuff* buff = readDerivedByIdIdx( Authorization,
			ISOCtryId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOCtryBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::readBuffByISOCodeIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& ISOCode )
	{
		static const std::string S_ProcName( "readBuffByISOCodeIdx" );
		cfsec::CFSecISOCtryBuff* buff = readDerivedByISOCodeIdx( Authorization,
			ISOCode );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOCtryBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::readBuffByNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByNameIdx" );
		cfsec::CFSecISOCtryBuff* buff = readDerivedByNameIdx( Authorization,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOCtryBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::readBuffByLookupISOCodeIdx( const cfsec::CFSecAuthorization* Authorization, const std::string& ISOCode,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupISOCodeIdx" );
		cfsec::CFSecISOCtryBuff* buff = readBuffByISOCodeIdx( Authorization,
			ISOCode );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOCtryBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::readDerivedByLookupISOCodeIdx( const cfsec::CFSecAuthorization* Authorization, const std::string& ISOCode,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupISOCodeIdx" );
		cfsec::CFSecISOCtryBuff* buff = readDerivedByISOCodeIdx( Authorization,
			ISOCode );
		if( buff != NULL ) {
			return( dynamic_cast<cfsec::CFSecISOCtryBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfsec::CFSecISOCtryBuff* CFBamRamISOCtryTable::updateISOCtry( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOCtryBuff* Buff )
	{
		static const std::string S_ProcName( "updateISOCtry" );
		cfsec::CFSecISOCtryPKey pkey;
		pkey.setRequiredISOCtryId( Buff->getRequiredISOCtryId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in ISOCtry for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfsec::CFSecISOCtryBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for ISOCtry primary key " );
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
		cfsec::CFSecISOCtryByISOCodeIdxKey existingKeyISOCodeIdx;
		existingKeyISOCodeIdx.setRequiredISOCode( existing->getRequiredISOCode() );
		cfsec::CFSecISOCtryByISOCodeIdxKey newKeyISOCodeIdx;
		newKeyISOCodeIdx.setRequiredISOCode( Buff->getRequiredISOCode() );
		cfsec::CFSecISOCtryByNameIdxKey existingKeyNameIdx;
		existingKeyNameIdx.setRequiredName( existing->getRequiredName() );
		cfsec::CFSecISOCtryByNameIdxKey newKeyNameIdx;
		newKeyNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyISOCodeIdx != newKeyISOCodeIdx ) {
			auto searchDictByISOCodeIdx = dictByISOCodeIdx->find( newKeyISOCodeIdx );
			if( searchDictByISOCodeIdx != dictByISOCodeIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ISOCtryCodeIdx " + newKeyISOCodeIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		if( existingKeyNameIdx != newKeyNameIdx ) {
			auto searchDictByNameIdx = dictByNameIdx->find( newKeyNameIdx );
			if( searchDictByNameIdx != dictByNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ISOCtryNameIdx " + newKeyNameIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		// Update is valid
		std::map<cfsec::CFSecISOCtryPKey, cfsec::CFSecISOCtryBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfsec::CFSecISOCtryBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfsec::CFSecISOCtryBuff" );
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

		dictByPKey->insert( std::map<cfsec::CFSecISOCtryPKey, cfsec::CFSecISOCtryBuff*>::value_type( pkey, existing ) );

		auto removalDictByISOCodeIdx = dictByISOCodeIdx->find( existingKeyISOCodeIdx );
		if( removalDictByISOCodeIdx != dictByISOCodeIdx->end() ) {
			dictByISOCodeIdx->erase( removalDictByISOCodeIdx );
		}
		dictByISOCodeIdx->insert( std::map<cfsec::CFSecISOCtryByISOCodeIdxKey, cfsec::CFSecISOCtryBuff*>::value_type( newKeyISOCodeIdx, existing ) );

		auto removalDictByNameIdx = dictByNameIdx->find( existingKeyNameIdx );
		if( removalDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( removalDictByNameIdx );
		}
		dictByNameIdx->insert( std::map<cfsec::CFSecISOCtryByNameIdxKey, cfsec::CFSecISOCtryBuff*>::value_type( newKeyNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfsec::CFSecISOCtryBuff* buff;
		if( existing->getClassCode() == cfsec::CFSecISOCtryBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfsec::CFSecISOCtryBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamISOCtryTable::deleteISOCtry( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOCtryBuff* Buff )
	{
		static const std::string S_ProcName( "deleteISOCtry" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfsec::CFSecISOCtryPKey pkey;
		pkey.setRequiredISOCtryId( Buff->getRequiredISOCtryId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfsec::CFSecISOCtryBuff* existing = searchExisting->second;
		schema->getTableISOCtryLang()->deleteISOCtryLangByCtryIdx( Authorization,
			existing->getRequiredISOCtryId() );
		schema->getTableISOCtryCcy()->deleteISOCtryCcyByCtryIdx( Authorization,
			existing->getRequiredISOCtryId() );
		cfsec::CFSecISOCtryByISOCodeIdxKey keyISOCodeIdx;
		keyISOCodeIdx.setRequiredISOCode( existing->getRequiredISOCode() );
		cfsec::CFSecISOCtryByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfsec::CFSecISOCtryPKey, cfsec::CFSecISOCtryBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByISOCodeIdx = dictByISOCodeIdx->find( keyISOCodeIdx );
		if( searchDictByISOCodeIdx != dictByISOCodeIdx->end() ) {
			dictByISOCodeIdx->erase( searchDictByISOCodeIdx );
		}

		auto searchDictByNameIdx = dictByNameIdx->find( keyNameIdx );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( searchDictByNameIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamISOCtryTable::deleteISOCtryByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t argISOCtryId )
	{
		cfsec::CFSecISOCtryPKey key;
		key.setRequiredISOCtryId( argISOCtryId );
		deleteISOCtryByIdIdx( Authorization, &key );
	}

	void CFBamRamISOCtryTable::deleteISOCtryByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfsec::CFSecISOCtryBuff* cur = NULL;
		cfsec::CFSecISOCtryBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*> matchSet;
		std::map<cfsec::CFSecISOCtryPKey,
			cfsec::CFSecISOCtryBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOCtryPKey,
			cfsec::CFSecISOCtryBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOCtryBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOCtryBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOCtry()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOCtryId() );
			rereadCur = cur;
			deleteISOCtry( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamISOCtryTable::deleteISOCtryByISOCodeIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& argISOCode )
	{
		cfsec::CFSecISOCtryByISOCodeIdxKey key;
		key.setRequiredISOCode( argISOCode );
		deleteISOCtryByISOCodeIdx( Authorization, &key );
	}

	void CFBamRamISOCtryTable::deleteISOCtryByISOCodeIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryByISOCodeIdxKey* argKey )
	{
		cfsec::CFSecISOCtryBuff* cur = NULL;
		cfsec::CFSecISOCtryBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*> matchSet;
		std::map<cfsec::CFSecISOCtryPKey,
			cfsec::CFSecISOCtryBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOCtryPKey,
			cfsec::CFSecISOCtryBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOCtryBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOCtryBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOCtry()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOCtryId() );
			rereadCur = cur;
			deleteISOCtry( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamISOCtryTable::deleteISOCtryByNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& argName )
	{
		cfsec::CFSecISOCtryByNameIdxKey key;
		key.setRequiredName( argName );
		deleteISOCtryByNameIdx( Authorization, &key );
	}

	void CFBamRamISOCtryTable::deleteISOCtryByNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCtryByNameIdxKey* argKey )
	{
		cfsec::CFSecISOCtryBuff* cur = NULL;
		cfsec::CFSecISOCtryBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*> matchSet;
		std::map<cfsec::CFSecISOCtryPKey,
			cfsec::CFSecISOCtryBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOCtryPKey,
			cfsec::CFSecISOCtryBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOCtryBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOCtryBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCtryBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOCtry()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOCtryId() );
			rereadCur = cur;
			deleteISOCtry( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamISOCtryTable::releasePreparedStatements() {
	}

}
