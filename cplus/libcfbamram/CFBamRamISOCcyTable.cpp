
// Description: C++18 Implementation for an in-memory RAM DbIO for ISOCcy.

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

	const std::string CFBamRamISOCcyTable::CLASS_NAME( "CFBamRamISOCcyTable" );

	CFBamRamISOCcyTable::CFBamRamISOCcyTable( ICFBamSchema* argSchema )
	: cfsec::ICFSecISOCcyTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfsec::CFSecISOCcyPKey, cfsec::CFSecISOCcyBuff*>();
		dictByCcyCdIdx = new std::map<cfsec::CFSecISOCcyByCcyCdIdxKey, cfsec::CFSecISOCcyBuff*>();
		dictByCcyNmIdx = new std::map<cfsec::CFSecISOCcyByCcyNmIdxKey, cfsec::CFSecISOCcyBuff*>();
	}

	CFBamRamISOCcyTable::~CFBamRamISOCcyTable() {
		if( dictByCcyCdIdx != NULL ) {
			delete dictByCcyCdIdx;
			dictByCcyCdIdx = NULL;
		}
		if( dictByCcyNmIdx != NULL ) {
			delete dictByCcyNmIdx;
			dictByCcyNmIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfsec::CFSecISOCcyBuff* elt;
			std::map<cfsec::CFSecISOCcyPKey,
				cfsec::CFSecISOCcyBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfsec::CFSecISOCcyPKey,
					cfsec::CFSecISOCcyBuff*>::iterator cur = dictByPKey->begin();
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

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::createISOCcy( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOCcyBuff* Buff )
	{
		static const std::string S_ProcName( "createISOCcy" );
		cfsec::CFSecISOCcyPKey pkey;
		pkey.setRequiredISOCcyId( schema->nextISOCcyIdGen() );
		Buff->setRequiredISOCcyId( pkey.getRequiredISOCcyId() );
		cfsec::CFSecISOCcyByCcyCdIdxKey keyCcyCdIdx;
		keyCcyCdIdx.setRequiredISOCode( Buff->getRequiredISOCode() );
		cfsec::CFSecISOCcyByCcyNmIdxKey keyCcyNmIdx;
		keyCcyNmIdx.setRequiredName( Buff->getRequiredName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByCcyCdIdx = dictByCcyCdIdx->find( keyCcyCdIdx );
		if( searchDictByCcyCdIdx != dictByCcyCdIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ISOCcyCodeIdx " + keyCcyCdIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		auto searchDictByCcyNmIdx = dictByCcyNmIdx->find( keyCcyNmIdx );
		if( searchDictByCcyNmIdx != dictByCcyNmIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ISOCcyNameIdx " + keyCcyNmIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfsec::CFSecISOCcyBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfsec::CFSecISOCcyPKey, cfsec::CFSecISOCcyBuff*>::value_type( pkey, buff ) );

		dictByCcyCdIdx->insert( std::map<cfsec::CFSecISOCcyByCcyCdIdxKey, cfsec::CFSecISOCcyBuff*>::value_type( keyCcyCdIdx, buff ) );

		dictByCcyNmIdx->insert( std::map<cfsec::CFSecISOCcyByCcyNmIdxKey, cfsec::CFSecISOCcyBuff*>::value_type( keyCcyNmIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfsec::CFSecISOCcyBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCcyPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfsec::CFSecISOCcyBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCcyPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfsec::CFSecISOCcyBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*> CFBamRamISOCcyTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*> retVec;
		std::map<cfsec::CFSecISOCcyPKey,
			cfsec::CFSecISOCcyBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOCcyPKey,
			cfsec::CFSecISOCcyBuff*>::iterator end = dictByPKey->end();
		cfsec::CFSecISOCcyBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfsec::CFSecISOCcyBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::readDerivedByCcyCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& ISOCode )
	{
		static const std::string S_ProcName( "readDerivedByCcyCdIdx" );
		cfsec::CFSecISOCcyByCcyCdIdxKey key;
		key.setRequiredISOCode( ISOCode );
		cfsec::CFSecISOCcyBuff* buff;
		auto searchDictByCcyCdIdx = dictByCcyCdIdx->find( key );
		if( searchDictByCcyCdIdx != dictByCcyCdIdx->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( searchDictByCcyCdIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::readDerivedByCcyNmIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByCcyNmIdx" );
		cfsec::CFSecISOCcyByCcyNmIdxKey key;
		key.setRequiredName( Name );
		cfsec::CFSecISOCcyBuff* buff;
		auto searchDictByCcyNmIdx = dictByCcyNmIdx->find( key );
		if( searchDictByCcyNmIdx != dictByCcyNmIdx->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( searchDictByCcyNmIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCcyId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfsec::CFSecISOCcyPKey key;
		key.setRequiredISOCcyId( ISOCcyId );
		cfsec::CFSecISOCcyBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCcyPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfsec::CFSecISOCcyBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfsec::CFSecISOCcyBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff ) );
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCcyPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfsec::CFSecISOCcyBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*> CFBamRamISOCcyTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfsec::CFSecISOCcyBuff* buff;
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*> filteredList;
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfsec::CFSecISOCcyBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCcyId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfsec::CFSecISOCcyBuff* buff = readDerivedByIdIdx( Authorization,
			ISOCcyId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOCcyBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::readBuffByCcyCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& ISOCode )
	{
		static const std::string S_ProcName( "readBuffByCcyCdIdx" );
		cfsec::CFSecISOCcyBuff* buff = readDerivedByCcyCdIdx( Authorization,
			ISOCode );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOCcyBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::readBuffByCcyNmIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByCcyNmIdx" );
		cfsec::CFSecISOCcyBuff* buff = readDerivedByCcyNmIdx( Authorization,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOCcyBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::readBuffByLookupCcyCdIdx( const cfsec::CFSecAuthorization* Authorization, const std::string& ISOCode,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupCcyCdIdx" );
		cfsec::CFSecISOCcyBuff* buff = readBuffByCcyCdIdx( Authorization,
			ISOCode );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfsec::CFSecISOCcyBuff::CLASS_CODE ) {
			return( dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::readDerivedByLookupCcyCdIdx( const cfsec::CFSecAuthorization* Authorization, const std::string& ISOCode,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupCcyCdIdx" );
		cfsec::CFSecISOCcyBuff* buff = readDerivedByCcyCdIdx( Authorization,
			ISOCode );
		if( buff != NULL ) {
			return( dynamic_cast<cfsec::CFSecISOCcyBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfsec::CFSecISOCcyBuff* CFBamRamISOCcyTable::updateISOCcy( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOCcyBuff* Buff )
	{
		static const std::string S_ProcName( "updateISOCcy" );
		cfsec::CFSecISOCcyPKey pkey;
		pkey.setRequiredISOCcyId( Buff->getRequiredISOCcyId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in ISOCcy for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfsec::CFSecISOCcyBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for ISOCcy primary key " );
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
		cfsec::CFSecISOCcyByCcyCdIdxKey existingKeyCcyCdIdx;
		existingKeyCcyCdIdx.setRequiredISOCode( existing->getRequiredISOCode() );
		cfsec::CFSecISOCcyByCcyCdIdxKey newKeyCcyCdIdx;
		newKeyCcyCdIdx.setRequiredISOCode( Buff->getRequiredISOCode() );
		cfsec::CFSecISOCcyByCcyNmIdxKey existingKeyCcyNmIdx;
		existingKeyCcyNmIdx.setRequiredName( existing->getRequiredName() );
		cfsec::CFSecISOCcyByCcyNmIdxKey newKeyCcyNmIdx;
		newKeyCcyNmIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyCcyCdIdx != newKeyCcyCdIdx ) {
			auto searchDictByCcyCdIdx = dictByCcyCdIdx->find( newKeyCcyCdIdx );
			if( searchDictByCcyCdIdx != dictByCcyCdIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ISOCcyCodeIdx " + newKeyCcyCdIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		if( existingKeyCcyNmIdx != newKeyCcyNmIdx ) {
			auto searchDictByCcyNmIdx = dictByCcyNmIdx->find( newKeyCcyNmIdx );
			if( searchDictByCcyNmIdx != dictByCcyNmIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ISOCcyNameIdx " + newKeyCcyNmIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		// Update is valid
		std::map<cfsec::CFSecISOCcyPKey, cfsec::CFSecISOCcyBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfsec::CFSecISOCcyBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfsec::CFSecISOCcyBuff" );
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

		dictByPKey->insert( std::map<cfsec::CFSecISOCcyPKey, cfsec::CFSecISOCcyBuff*>::value_type( pkey, existing ) );

		auto removalDictByCcyCdIdx = dictByCcyCdIdx->find( existingKeyCcyCdIdx );
		if( removalDictByCcyCdIdx != dictByCcyCdIdx->end() ) {
			dictByCcyCdIdx->erase( removalDictByCcyCdIdx );
		}
		dictByCcyCdIdx->insert( std::map<cfsec::CFSecISOCcyByCcyCdIdxKey, cfsec::CFSecISOCcyBuff*>::value_type( newKeyCcyCdIdx, existing ) );

		auto removalDictByCcyNmIdx = dictByCcyNmIdx->find( existingKeyCcyNmIdx );
		if( removalDictByCcyNmIdx != dictByCcyNmIdx->end() ) {
			dictByCcyNmIdx->erase( removalDictByCcyNmIdx );
		}
		dictByCcyNmIdx->insert( std::map<cfsec::CFSecISOCcyByCcyNmIdxKey, cfsec::CFSecISOCcyBuff*>::value_type( newKeyCcyNmIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfsec::CFSecISOCcyBuff* buff;
		if( existing->getClassCode() == cfsec::CFSecISOCcyBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfsec::CFSecISOCcyBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamISOCcyTable::deleteISOCcy( const cfsec::CFSecAuthorization* Authorization,
		cfsec::CFSecISOCcyBuff* Buff )
	{
		static const std::string S_ProcName( "deleteISOCcy" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfsec::CFSecISOCcyPKey pkey;
		pkey.setRequiredISOCcyId( Buff->getRequiredISOCcyId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfsec::CFSecISOCcyBuff* existing = searchExisting->second;
		std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> arrCheckISOCcyCountries = schema->getTableISOCtryCcy()->readDerivedByCcyIdx( Authorization,
			existing->getRequiredISOCcyId() );
		if( arrCheckISOCcyCountries.size() > 0 ) {
			schema->getTableISOCtryCcy()->deleteISOCtryCcyByCcyIdx( Authorization,
			existing->getRequiredISOCcyId() );
		}
		cfsec::CFSecISOCcyByCcyCdIdxKey keyCcyCdIdx;
		keyCcyCdIdx.setRequiredISOCode( existing->getRequiredISOCode() );
		cfsec::CFSecISOCcyByCcyNmIdxKey keyCcyNmIdx;
		keyCcyNmIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfsec::CFSecISOCcyPKey, cfsec::CFSecISOCcyBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByCcyCdIdx = dictByCcyCdIdx->find( keyCcyCdIdx );
		if( searchDictByCcyCdIdx != dictByCcyCdIdx->end() ) {
			dictByCcyCdIdx->erase( searchDictByCcyCdIdx );
		}

		auto searchDictByCcyNmIdx = dictByCcyNmIdx->find( keyCcyNmIdx );
		if( searchDictByCcyNmIdx != dictByCcyNmIdx->end() ) {
			dictByCcyNmIdx->erase( searchDictByCcyNmIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamISOCcyTable::deleteISOCcyByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t argISOCcyId )
	{
		cfsec::CFSecISOCcyPKey key;
		key.setRequiredISOCcyId( argISOCcyId );
		deleteISOCcyByIdIdx( Authorization, &key );
	}

	void CFBamRamISOCcyTable::deleteISOCcyByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCcyPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfsec::CFSecISOCcyBuff* cur = NULL;
		cfsec::CFSecISOCcyBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*> matchSet;
		std::map<cfsec::CFSecISOCcyPKey,
			cfsec::CFSecISOCcyBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOCcyPKey,
			cfsec::CFSecISOCcyBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOCcyBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOCcyBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOCcy()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOCcyId() );
			rereadCur = cur;
			deleteISOCcy( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamISOCcyTable::deleteISOCcyByCcyCdIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& argISOCode )
	{
		cfsec::CFSecISOCcyByCcyCdIdxKey key;
		key.setRequiredISOCode( argISOCode );
		deleteISOCcyByCcyCdIdx( Authorization, &key );
	}

	void CFBamRamISOCcyTable::deleteISOCcyByCcyCdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCcyByCcyCdIdxKey* argKey )
	{
		cfsec::CFSecISOCcyBuff* cur = NULL;
		cfsec::CFSecISOCcyBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*> matchSet;
		std::map<cfsec::CFSecISOCcyPKey,
			cfsec::CFSecISOCcyBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOCcyPKey,
			cfsec::CFSecISOCcyBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOCcyBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOCcyBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOCcy()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOCcyId() );
			rereadCur = cur;
			deleteISOCcy( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamISOCcyTable::deleteISOCcyByCcyNmIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& argName )
	{
		cfsec::CFSecISOCcyByCcyNmIdxKey key;
		key.setRequiredName( argName );
		deleteISOCcyByCcyNmIdx( Authorization, &key );
	}

	void CFBamRamISOCcyTable::deleteISOCcyByCcyNmIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfsec::CFSecISOCcyByCcyNmIdxKey* argKey )
	{
		cfsec::CFSecISOCcyBuff* cur = NULL;
		cfsec::CFSecISOCcyBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*> matchSet;
		std::map<cfsec::CFSecISOCcyPKey,
			cfsec::CFSecISOCcyBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfsec::CFSecISOCcyPKey,
			cfsec::CFSecISOCcyBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfsec::CFSecISOCcyBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfsec::CFSecISOCcyBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfsec::CFSecISOCcyBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableISOCcy()->readDerivedByIdIdx( Authorization,
				cur->getRequiredISOCcyId() );
			rereadCur = cur;
			deleteISOCcy( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamISOCcyTable::releasePreparedStatements() {
	}

}
