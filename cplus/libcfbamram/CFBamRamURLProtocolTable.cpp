
// Description: C++18 Implementation for an in-memory RAM DbIO for URLProtocol.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFInt 2.13 Internet Essentials
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

	const std::string CFBamRamURLProtocolTable::CLASS_NAME( "CFBamRamURLProtocolTable" );

	CFBamRamURLProtocolTable::CFBamRamURLProtocolTable( ICFBamSchema* argSchema )
	: cfint::ICFIntURLProtocolTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfint::CFIntURLProtocolPKey, cfint::CFIntURLProtocolBuff*>();
		dictByUNameIdx = new std::map<cfint::CFIntURLProtocolByUNameIdxKey, cfint::CFIntURLProtocolBuff*>();
		dictByIsSecureIdx = new std::map<cfint::CFIntURLProtocolByIsSecureIdxKey,
			std::map<cfint::CFIntURLProtocolPKey,
				cfint::CFIntURLProtocolBuff*>*>();
	}

	CFBamRamURLProtocolTable::~CFBamRamURLProtocolTable() {
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByIsSecureIdx != NULL ) {
			for( auto iterDict = dictByIsSecureIdx->begin(); iterDict != dictByIsSecureIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByIsSecureIdx;
			dictByIsSecureIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfint::CFIntURLProtocolBuff* elt;
			std::map<cfint::CFIntURLProtocolPKey,
				cfint::CFIntURLProtocolBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfint::CFIntURLProtocolPKey,
					cfint::CFIntURLProtocolBuff*>::iterator cur = dictByPKey->begin();
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

	cfint::CFIntURLProtocolBuff* CFBamRamURLProtocolTable::createURLProtocol( const cfsec::CFSecAuthorization* Authorization,
		cfint::CFIntURLProtocolBuff* Buff )
	{
		static const std::string S_ProcName( "createURLProtocol" );
		cfint::CFIntURLProtocolPKey pkey;
		pkey.setRequiredURLProtocolId( schema->nextURLProtocolIdGen() );
		Buff->setRequiredURLProtocolId( pkey.getRequiredURLProtocolId() );
		cfint::CFIntURLProtocolByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfint::CFIntURLProtocolByIsSecureIdxKey keyIsSecureIdx;
		keyIsSecureIdx.setRequiredIsSecure( Buff->getRequiredIsSecure() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index URLProtocolUNameIdx " + keyUNameIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfint::CFIntURLProtocolBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfint::CFIntURLProtocolPKey, cfint::CFIntURLProtocolBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfint::CFIntURLProtocolByUNameIdxKey, cfint::CFIntURLProtocolBuff*>::value_type( keyUNameIdx, buff ) );

		std::map<cfint::CFIntURLProtocolPKey, cfint::CFIntURLProtocolBuff*>* subdictIsSecureIdx;
		auto searchDictByIsSecureIdx = dictByIsSecureIdx->find( keyIsSecureIdx );
		if( searchDictByIsSecureIdx != dictByIsSecureIdx->end() ) {
			subdictIsSecureIdx = searchDictByIsSecureIdx->second;
		}
		else {
			subdictIsSecureIdx = new std::map<cfint::CFIntURLProtocolPKey, cfint::CFIntURLProtocolBuff*>();
			dictByIsSecureIdx->insert( std::map<cfint::CFIntURLProtocolByIsSecureIdxKey,
				std::map<cfint::CFIntURLProtocolPKey,
					cfint::CFIntURLProtocolBuff*>*>::value_type( keyIsSecureIdx, subdictIsSecureIdx ) );
		}
		subdictIsSecureIdx->insert( std::map<cfint::CFIntURLProtocolPKey, cfint::CFIntURLProtocolBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfint::CFIntURLProtocolBuff* CFBamRamURLProtocolTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntURLProtocolPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfint::CFIntURLProtocolBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfint::CFIntURLProtocolBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfint::CFIntURLProtocolBuff* CFBamRamURLProtocolTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntURLProtocolPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfint::CFIntURLProtocolBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfint::CFIntURLProtocolBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> CFBamRamURLProtocolTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> retVec;
		std::map<cfint::CFIntURLProtocolPKey,
			cfint::CFIntURLProtocolBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntURLProtocolPKey,
			cfint::CFIntURLProtocolBuff*>::iterator end = dictByPKey->end();
		cfint::CFIntURLProtocolBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfint::CFIntURLProtocolBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfint::CFIntURLProtocolBuff* CFBamRamURLProtocolTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfint::CFIntURLProtocolByUNameIdxKey key;
		key.setRequiredName( Name );
		cfint::CFIntURLProtocolBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfint::CFIntURLProtocolBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> CFBamRamURLProtocolTable::readDerivedByIsSecureIdx( const cfsec::CFSecAuthorization* Authorization,
			const bool IsSecure )
	{
		static const std::string S_ProcName( "readDerivedByIsSecureIdx" );
		cfint::CFIntURLProtocolByIsSecureIdxKey key;
		key.setRequiredIsSecure( IsSecure );
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> recVec;
		cfint::CFIntURLProtocolBuff* clone;
		auto searchDictByIsSecureIdx = dictByIsSecureIdx->find( key );
		if( searchDictByIsSecureIdx != dictByIsSecureIdx->end() ) {
			std::map<cfint::CFIntURLProtocolPKey,
				 cfint::CFIntURLProtocolBuff*>* subdictIsSecureIdx = searchDictByIsSecureIdx->second;
			std::map<cfint::CFIntURLProtocolPKey,
				cfint::CFIntURLProtocolBuff*>::iterator iter = subdictIsSecureIdx->begin();
			std::map<cfint::CFIntURLProtocolPKey,
				cfint::CFIntURLProtocolBuff*>::iterator end = subdictIsSecureIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfint::CFIntURLProtocolBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfint::CFIntURLProtocolBuff* CFBamRamURLProtocolTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int32_t URLProtocolId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfint::CFIntURLProtocolPKey key;
		key.setRequiredURLProtocolId( URLProtocolId );
		cfint::CFIntURLProtocolBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfint::CFIntURLProtocolBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfint::CFIntURLProtocolBuff* CFBamRamURLProtocolTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntURLProtocolPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfint::CFIntURLProtocolBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff ) );
	}

	cfint::CFIntURLProtocolBuff* CFBamRamURLProtocolTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntURLProtocolPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfint::CFIntURLProtocolBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> CFBamRamURLProtocolTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfint::CFIntURLProtocolBuff* buff;
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> filteredList;
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfint::CFIntURLProtocolBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfint::CFIntURLProtocolBuff* CFBamRamURLProtocolTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int32_t URLProtocolId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfint::CFIntURLProtocolBuff* buff = readDerivedByIdIdx( Authorization,
			URLProtocolId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
			return( dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfint::CFIntURLProtocolBuff* CFBamRamURLProtocolTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfint::CFIntURLProtocolBuff* buff = readDerivedByUNameIdx( Authorization,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
			return( dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> CFBamRamURLProtocolTable::readBuffByIsSecureIdx( const cfsec::CFSecAuthorization* Authorization,
			const bool IsSecure )
	{
		static const std::string S_ProcName( "readBuffByIsSecureIdx" );
		cfint::CFIntURLProtocolBuff* buff;
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> filteredList;
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> buffList = readDerivedByIsSecureIdx( Authorization,
			IsSecure );
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfint::CFIntURLProtocolBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfint::CFIntURLProtocolBuff* CFBamRamURLProtocolTable::readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfint::CFIntURLProtocolBuff* buff = readBuffByUNameIdx( Authorization,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
			return( dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfint::CFIntURLProtocolBuff* CFBamRamURLProtocolTable::readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfint::CFIntURLProtocolBuff* buff = readDerivedByUNameIdx( Authorization,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfint::CFIntURLProtocolBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfint::CFIntURLProtocolBuff* CFBamRamURLProtocolTable::updateURLProtocol( const cfsec::CFSecAuthorization* Authorization,
		cfint::CFIntURLProtocolBuff* Buff )
	{
		static const std::string S_ProcName( "updateURLProtocol" );
		cfint::CFIntURLProtocolPKey pkey;
		pkey.setRequiredURLProtocolId( Buff->getRequiredURLProtocolId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in URLProtocol for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfint::CFIntURLProtocolBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for URLProtocol primary key " );
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
		cfint::CFIntURLProtocolByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfint::CFIntURLProtocolByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfint::CFIntURLProtocolByIsSecureIdxKey existingKeyIsSecureIdx;
		existingKeyIsSecureIdx.setRequiredIsSecure( existing->getRequiredIsSecure() );
		cfint::CFIntURLProtocolByIsSecureIdxKey newKeyIsSecureIdx;
		newKeyIsSecureIdx.setRequiredIsSecure( Buff->getRequiredIsSecure() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index URLProtocolUNameIdx " + newKeyUNameIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		// Update is valid
		std::map<cfint::CFIntURLProtocolPKey, cfint::CFIntURLProtocolBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfint::CFIntURLProtocolBuff" );
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

		dictByPKey->insert( std::map<cfint::CFIntURLProtocolPKey, cfint::CFIntURLProtocolBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfint::CFIntURLProtocolByUNameIdxKey, cfint::CFIntURLProtocolBuff*>::value_type( newKeyUNameIdx, existing ) );

		std::map<cfint::CFIntURLProtocolPKey,
			 cfint::CFIntURLProtocolBuff*>* subdictIsSecureIdx;
		auto searchDictByIsSecureIdx = dictByIsSecureIdx->find( existingKeyIsSecureIdx );
		if( searchDictByIsSecureIdx != dictByIsSecureIdx->end() ) {
			subdictIsSecureIdx = searchDictByIsSecureIdx->second;
			auto searchSubDict = subdictIsSecureIdx->find( pkey );
			if( searchSubDict != subdictIsSecureIdx->end() ) {
				subdictIsSecureIdx->erase( searchSubDict );
			}
			if( subdictIsSecureIdx->size() <= 0 ) {
				delete subdictIsSecureIdx;
				dictByIsSecureIdx->erase( searchDictByIsSecureIdx );
			}
			subdictIsSecureIdx = NULL;
		}
		auto searchNewKeyDictByIsSecureIdx = dictByIsSecureIdx->find( newKeyIsSecureIdx );
		if( searchNewKeyDictByIsSecureIdx != dictByIsSecureIdx->end() ) {
			subdictIsSecureIdx = searchNewKeyDictByIsSecureIdx->second;
		}
		else {
			subdictIsSecureIdx = new std::map<cfint::CFIntURLProtocolPKey, cfint::CFIntURLProtocolBuff*>();
			dictByIsSecureIdx->insert( std::map<cfint::CFIntURLProtocolByIsSecureIdxKey,
				std::map<cfint::CFIntURLProtocolPKey,
					cfint::CFIntURLProtocolBuff*>*>::value_type( newKeyIsSecureIdx, subdictIsSecureIdx ) );
		}
		subdictIsSecureIdx->insert( std::map<cfint::CFIntURLProtocolPKey, cfint::CFIntURLProtocolBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfint::CFIntURLProtocolBuff* buff;
		if( existing->getClassCode() == cfint::CFIntURLProtocolBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfint::CFIntURLProtocolBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamURLProtocolTable::deleteURLProtocol( const cfsec::CFSecAuthorization* Authorization,
		cfint::CFIntURLProtocolBuff* Buff )
	{
		static const std::string S_ProcName( "deleteURLProtocol" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfint::CFIntURLProtocolPKey pkey;
		pkey.setRequiredURLProtocolId( Buff->getRequiredURLProtocolId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfint::CFIntURLProtocolBuff* existing = searchExisting->second;
		cfint::CFIntURLProtocolByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfint::CFIntURLProtocolByIsSecureIdxKey keyIsSecureIdx;
		keyIsSecureIdx.setRequiredIsSecure( existing->getRequiredIsSecure() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfint::CFIntURLProtocolPKey, cfint::CFIntURLProtocolBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		auto searchDictByIsSecureIdx = dictByIsSecureIdx->find( keyIsSecureIdx );
		if( searchDictByIsSecureIdx != dictByIsSecureIdx->end() ) {
			std::map<cfint::CFIntURLProtocolPKey,
				 cfint::CFIntURLProtocolBuff*>* subdictIsSecureIdx = searchDictByIsSecureIdx->second;
			auto searchSubDict = subdictIsSecureIdx->find( pkey );
			if( searchSubDict != subdictIsSecureIdx->end() ) {
				subdictIsSecureIdx->erase( searchSubDict );
			}
			subdictIsSecureIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamURLProtocolTable::deleteURLProtocolByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int32_t argURLProtocolId )
	{
		cfint::CFIntURLProtocolPKey key;
		key.setRequiredURLProtocolId( argURLProtocolId );
		deleteURLProtocolByIdIdx( Authorization, &key );
	}

	void CFBamRamURLProtocolTable::deleteURLProtocolByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntURLProtocolPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfint::CFIntURLProtocolBuff* cur = NULL;
		cfint::CFIntURLProtocolBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> matchSet;
		std::map<cfint::CFIntURLProtocolPKey,
			cfint::CFIntURLProtocolBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntURLProtocolPKey,
			cfint::CFIntURLProtocolBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntURLProtocolBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntURLProtocolBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableURLProtocol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredURLProtocolId() );
			rereadCur = cur;
			deleteURLProtocol( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamURLProtocolTable::deleteURLProtocolByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const std::string& argName )
	{
		cfint::CFIntURLProtocolByUNameIdxKey key;
		key.setRequiredName( argName );
		deleteURLProtocolByUNameIdx( Authorization, &key );
	}

	void CFBamRamURLProtocolTable::deleteURLProtocolByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntURLProtocolByUNameIdxKey* argKey )
	{
		cfint::CFIntURLProtocolBuff* cur = NULL;
		cfint::CFIntURLProtocolBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> matchSet;
		std::map<cfint::CFIntURLProtocolPKey,
			cfint::CFIntURLProtocolBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntURLProtocolPKey,
			cfint::CFIntURLProtocolBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntURLProtocolBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntURLProtocolBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableURLProtocol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredURLProtocolId() );
			rereadCur = cur;
			deleteURLProtocol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamURLProtocolTable::deleteURLProtocolByIsSecureIdx( const cfsec::CFSecAuthorization* Authorization,
			const bool argIsSecure )
	{
		cfint::CFIntURLProtocolByIsSecureIdxKey key;
		key.setRequiredIsSecure( argIsSecure );
		deleteURLProtocolByIsSecureIdx( Authorization, &key );
	}

	void CFBamRamURLProtocolTable::deleteURLProtocolByIsSecureIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntURLProtocolByIsSecureIdxKey* argKey )
	{
		cfint::CFIntURLProtocolBuff* cur = NULL;
		cfint::CFIntURLProtocolBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*> matchSet;
		std::map<cfint::CFIntURLProtocolPKey,
			cfint::CFIntURLProtocolBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntURLProtocolPKey,
			cfint::CFIntURLProtocolBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntURLProtocolBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntURLProtocolBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntURLProtocolBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableURLProtocol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredURLProtocolId() );
			rereadCur = cur;
			deleteURLProtocol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamURLProtocolTable::releasePreparedStatements() {
	}

}
