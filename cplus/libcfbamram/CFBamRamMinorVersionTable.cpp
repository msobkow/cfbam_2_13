
// Description: C++18 Implementation for an in-memory RAM DbIO for MinorVersion.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFInt 2.13 Internet Essentials
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

	const std::string CFBamRamMinorVersionTable::CLASS_NAME( "CFBamRamMinorVersionTable" );

	CFBamRamMinorVersionTable::CFBamRamMinorVersionTable( ICFBamSchema* argSchema )
	: cfint::ICFIntMinorVersionTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>();
		dictByTenantIdx = new std::map<cfint::CFIntMinorVersionByTenantIdxKey,
			std::map<cfint::CFIntMinorVersionPKey,
				cfint::CFIntMinorVersionBuff*>*>();
		dictByMajorVerIdx = new std::map<cfint::CFIntMinorVersionByMajorVerIdxKey,
			std::map<cfint::CFIntMinorVersionPKey,
				cfint::CFIntMinorVersionBuff*>*>();
		dictByNameIdx = new std::map<cfint::CFIntMinorVersionByNameIdxKey, cfint::CFIntMinorVersionBuff*>();
	}

	CFBamRamMinorVersionTable::~CFBamRamMinorVersionTable() {
		if( dictByTenantIdx != NULL ) {
			for( auto iterDict = dictByTenantIdx->begin(); iterDict != dictByTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantIdx;
			dictByTenantIdx = NULL;
		}
		if( dictByMajorVerIdx != NULL ) {
			for( auto iterDict = dictByMajorVerIdx->begin(); iterDict != dictByMajorVerIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByMajorVerIdx;
			dictByMajorVerIdx = NULL;
		}
		if( dictByNameIdx != NULL ) {
			delete dictByNameIdx;
			dictByNameIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfint::CFIntMinorVersionBuff* elt;
			std::map<cfint::CFIntMinorVersionPKey,
				cfint::CFIntMinorVersionBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfint::CFIntMinorVersionPKey,
					cfint::CFIntMinorVersionBuff*>::iterator cur = dictByPKey->begin();
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

	cfint::CFIntMinorVersionBuff* CFBamRamMinorVersionTable::createMinorVersion( const cfsec::CFSecAuthorization* Authorization,
		cfint::CFIntMinorVersionBuff* Buff )
	{
		static const std::string S_ProcName( "createMinorVersion" );
		cfint::CFIntMinorVersionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( dynamic_cast<CFBamRamTenantTable*>( schema->getTableTenant() )->nextMinorVersionIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfint::CFIntMinorVersionByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfint::CFIntMinorVersionByMajorVerIdxKey keyMajorVerIdx;
		keyMajorVerIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyMajorVerIdx.setRequiredMajorVersionId( Buff->getRequiredMajorVersionId() );
		cfint::CFIntMinorVersionByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyNameIdx.setRequiredMajorVersionId( Buff->getRequiredMajorVersionId() );
		keyNameIdx.setRequiredName( Buff->getRequiredName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByNameIdx = dictByNameIdx->find( keyNameIdx );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index MinorVersionNameIdx " + keyNameIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship Tenant to table Tenant" );
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
				cfint::CFIntMajorVersionBuff* chk = dynamic_cast<cfint::CFIntMajorVersionBuff*>( schema->getTableMajorVersion()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredMajorVersionId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ParentMajorVersion to table MajorVersion" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfint::CFIntMinorVersionBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>::value_type( pkey, buff ) );

		std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>();
			dictByTenantIdx->insert( std::map<cfint::CFIntMinorVersionByTenantIdxKey,
				std::map<cfint::CFIntMinorVersionPKey,
					cfint::CFIntMinorVersionBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>::value_type( pkey, buff ) );

		std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>* subdictMajorVerIdx;
		auto searchDictByMajorVerIdx = dictByMajorVerIdx->find( keyMajorVerIdx );
		if( searchDictByMajorVerIdx != dictByMajorVerIdx->end() ) {
			subdictMajorVerIdx = searchDictByMajorVerIdx->second;
		}
		else {
			subdictMajorVerIdx = new std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>();
			dictByMajorVerIdx->insert( std::map<cfint::CFIntMinorVersionByMajorVerIdxKey,
				std::map<cfint::CFIntMinorVersionPKey,
					cfint::CFIntMinorVersionBuff*>*>::value_type( keyMajorVerIdx, subdictMajorVerIdx ) );
		}
		subdictMajorVerIdx->insert( std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>::value_type( pkey, buff ) );

		dictByNameIdx->insert( std::map<cfint::CFIntMinorVersionByNameIdxKey, cfint::CFIntMinorVersionBuff*>::value_type( keyNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfint::CFIntMinorVersionBuff* CFBamRamMinorVersionTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntMinorVersionPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfint::CFIntMinorVersionBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfint::CFIntMinorVersionBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfint::CFIntMinorVersionBuff* CFBamRamMinorVersionTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntMinorVersionPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfint::CFIntMinorVersionBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfint::CFIntMinorVersionBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> CFBamRamMinorVersionTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> retVec;
		std::map<cfint::CFIntMinorVersionPKey,
			cfint::CFIntMinorVersionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntMinorVersionPKey,
			cfint::CFIntMinorVersionBuff*>::iterator end = dictByPKey->end();
		cfint::CFIntMinorVersionBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfint::CFIntMinorVersionBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> CFBamRamMinorVersionTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfint::CFIntMinorVersionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> recVec;
		cfint::CFIntMinorVersionBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfint::CFIntMinorVersionPKey,
				 cfint::CFIntMinorVersionBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfint::CFIntMinorVersionPKey,
				cfint::CFIntMinorVersionBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfint::CFIntMinorVersionPKey,
				cfint::CFIntMinorVersionBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfint::CFIntMinorVersionBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> CFBamRamMinorVersionTable::readDerivedByMajorVerIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MajorVersionId )
	{
		static const std::string S_ProcName( "readDerivedByMajorVerIdx" );
		cfint::CFIntMinorVersionByMajorVerIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMajorVersionId( MajorVersionId );
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> recVec;
		cfint::CFIntMinorVersionBuff* clone;
		auto searchDictByMajorVerIdx = dictByMajorVerIdx->find( key );
		if( searchDictByMajorVerIdx != dictByMajorVerIdx->end() ) {
			std::map<cfint::CFIntMinorVersionPKey,
				 cfint::CFIntMinorVersionBuff*>* subdictMajorVerIdx = searchDictByMajorVerIdx->second;
			std::map<cfint::CFIntMinorVersionPKey,
				cfint::CFIntMinorVersionBuff*>::iterator iter = subdictMajorVerIdx->begin();
			std::map<cfint::CFIntMinorVersionPKey,
				cfint::CFIntMinorVersionBuff*>::iterator end = subdictMajorVerIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfint::CFIntMinorVersionBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfint::CFIntMinorVersionBuff* CFBamRamMinorVersionTable::readDerivedByNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MajorVersionId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByNameIdx" );
		cfint::CFIntMinorVersionByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMajorVersionId( MajorVersionId );
		key.setRequiredName( Name );
		cfint::CFIntMinorVersionBuff* buff;
		auto searchDictByNameIdx = dictByNameIdx->find( key );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			buff = dynamic_cast<cfint::CFIntMinorVersionBuff*>( searchDictByNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfint::CFIntMinorVersionBuff* CFBamRamMinorVersionTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfint::CFIntMinorVersionPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfint::CFIntMinorVersionBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfint::CFIntMinorVersionBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfint::CFIntMinorVersionBuff* CFBamRamMinorVersionTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntMinorVersionPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfint::CFIntMinorVersionBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff ) );
	}

	cfint::CFIntMinorVersionBuff* CFBamRamMinorVersionTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntMinorVersionPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfint::CFIntMinorVersionBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> CFBamRamMinorVersionTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfint::CFIntMinorVersionBuff* buff;
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> filteredList;
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfint::CFIntMinorVersionBuff* CFBamRamMinorVersionTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfint::CFIntMinorVersionBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
			return( dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> CFBamRamMinorVersionTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfint::CFIntMinorVersionBuff* buff;
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> filteredList;
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> CFBamRamMinorVersionTable::readBuffByMajorVerIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MajorVersionId )
	{
		static const std::string S_ProcName( "readBuffByMajorVerIdx" );
		cfint::CFIntMinorVersionBuff* buff;
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> filteredList;
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> buffList = readDerivedByMajorVerIdx( Authorization,
			TenantId,
			MajorVersionId );
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfint::CFIntMinorVersionBuff* CFBamRamMinorVersionTable::readBuffByNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MajorVersionId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByNameIdx" );
		cfint::CFIntMinorVersionBuff* buff = readDerivedByNameIdx( Authorization,
			TenantId,
			MajorVersionId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
			return( dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfint::CFIntMinorVersionBuff* CFBamRamMinorVersionTable::readBuffByLookupNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MajorVersionId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupNameIdx" );
		cfint::CFIntMinorVersionBuff* buff = readBuffByNameIdx( Authorization,
			TenantId,
			MajorVersionId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
			return( dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfint::CFIntMinorVersionBuff* CFBamRamMinorVersionTable::readDerivedByLookupNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MajorVersionId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupNameIdx" );
		cfint::CFIntMinorVersionBuff* buff = readDerivedByNameIdx( Authorization,
			TenantId,
			MajorVersionId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfint::CFIntMinorVersionBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfint::CFIntMinorVersionBuff* CFBamRamMinorVersionTable::updateMinorVersion( const cfsec::CFSecAuthorization* Authorization,
		cfint::CFIntMinorVersionBuff* Buff )
	{
		static const std::string S_ProcName( "updateMinorVersion" );
		cfint::CFIntMinorVersionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in MinorVersion for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfint::CFIntMinorVersionBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for MinorVersion primary key " );
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
		cfint::CFIntMinorVersionByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfint::CFIntMinorVersionByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfint::CFIntMinorVersionByMajorVerIdxKey existingKeyMajorVerIdx;
		existingKeyMajorVerIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyMajorVerIdx.setRequiredMajorVersionId( existing->getRequiredMajorVersionId() );
		cfint::CFIntMinorVersionByMajorVerIdxKey newKeyMajorVerIdx;
		newKeyMajorVerIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyMajorVerIdx.setRequiredMajorVersionId( Buff->getRequiredMajorVersionId() );
		cfint::CFIntMinorVersionByNameIdxKey existingKeyNameIdx;
		existingKeyNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyNameIdx.setRequiredMajorVersionId( existing->getRequiredMajorVersionId() );
		existingKeyNameIdx.setRequiredName( existing->getRequiredName() );
		cfint::CFIntMinorVersionByNameIdxKey newKeyNameIdx;
		newKeyNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyNameIdx.setRequiredMajorVersionId( Buff->getRequiredMajorVersionId() );
		newKeyNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyNameIdx != newKeyNameIdx ) {
			auto searchDictByNameIdx = dictByNameIdx->find( newKeyNameIdx );
			if( searchDictByNameIdx != dictByNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index MinorVersionNameIdx " + newKeyNameIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship Tenant to table Tenant" );
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
				cfint::CFIntMajorVersionBuff* chk = dynamic_cast<cfint::CFIntMajorVersionBuff*>( schema->getTableMajorVersion()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredMajorVersionId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ParentMajorVersion to table MajorVersion" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfint::CFIntMinorVersionBuff" );
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

		dictByPKey->insert( std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>::value_type( pkey, existing ) );

		std::map<cfint::CFIntMinorVersionPKey,
			 cfint::CFIntMinorVersionBuff*>* subdictTenantIdx;
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
			subdictTenantIdx = new std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>();
			dictByTenantIdx->insert( std::map<cfint::CFIntMinorVersionByTenantIdxKey,
				std::map<cfint::CFIntMinorVersionPKey,
					cfint::CFIntMinorVersionBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>::value_type( pkey, existing ) );

		std::map<cfint::CFIntMinorVersionPKey,
			 cfint::CFIntMinorVersionBuff*>* subdictMajorVerIdx;
		auto searchDictByMajorVerIdx = dictByMajorVerIdx->find( existingKeyMajorVerIdx );
		if( searchDictByMajorVerIdx != dictByMajorVerIdx->end() ) {
			subdictMajorVerIdx = searchDictByMajorVerIdx->second;
			auto searchSubDict = subdictMajorVerIdx->find( pkey );
			if( searchSubDict != subdictMajorVerIdx->end() ) {
				subdictMajorVerIdx->erase( searchSubDict );
			}
			if( subdictMajorVerIdx->size() <= 0 ) {
				delete subdictMajorVerIdx;
				dictByMajorVerIdx->erase( searchDictByMajorVerIdx );
			}
			subdictMajorVerIdx = NULL;
		}
		auto searchNewKeyDictByMajorVerIdx = dictByMajorVerIdx->find( newKeyMajorVerIdx );
		if( searchNewKeyDictByMajorVerIdx != dictByMajorVerIdx->end() ) {
			subdictMajorVerIdx = searchNewKeyDictByMajorVerIdx->second;
		}
		else {
			subdictMajorVerIdx = new std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>();
			dictByMajorVerIdx->insert( std::map<cfint::CFIntMinorVersionByMajorVerIdxKey,
				std::map<cfint::CFIntMinorVersionPKey,
					cfint::CFIntMinorVersionBuff*>*>::value_type( newKeyMajorVerIdx, subdictMajorVerIdx ) );
		}
		subdictMajorVerIdx->insert( std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>::value_type( pkey, existing ) );

		auto removalDictByNameIdx = dictByNameIdx->find( existingKeyNameIdx );
		if( removalDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( removalDictByNameIdx );
		}
		dictByNameIdx->insert( std::map<cfint::CFIntMinorVersionByNameIdxKey, cfint::CFIntMinorVersionBuff*>::value_type( newKeyNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfint::CFIntMinorVersionBuff* buff;
		if( existing->getClassCode() == cfint::CFIntMinorVersionBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfint::CFIntMinorVersionBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamMinorVersionTable::deleteMinorVersion( const cfsec::CFSecAuthorization* Authorization,
		cfint::CFIntMinorVersionBuff* Buff )
	{
		static const std::string S_ProcName( "deleteMinorVersion" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfint::CFIntMinorVersionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfint::CFIntMinorVersionBuff* existing = searchExisting->second;
		schema->getTableSchemaDef()->deleteSchemaDefByMinorVersionIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		cfint::CFIntMinorVersionByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfint::CFIntMinorVersionByMajorVerIdxKey keyMajorVerIdx;
		keyMajorVerIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyMajorVerIdx.setRequiredMajorVersionId( existing->getRequiredMajorVersionId() );
		cfint::CFIntMinorVersionByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyNameIdx.setRequiredMajorVersionId( existing->getRequiredMajorVersionId() );
		keyNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfint::CFIntMinorVersionPKey, cfint::CFIntMinorVersionBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfint::CFIntMinorVersionPKey,
				 cfint::CFIntMinorVersionBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictByMajorVerIdx = dictByMajorVerIdx->find( keyMajorVerIdx );
		if( searchDictByMajorVerIdx != dictByMajorVerIdx->end() ) {
			std::map<cfint::CFIntMinorVersionPKey,
				 cfint::CFIntMinorVersionBuff*>* subdictMajorVerIdx = searchDictByMajorVerIdx->second;
			auto searchSubDict = subdictMajorVerIdx->find( pkey );
			if( searchSubDict != subdictMajorVerIdx->end() ) {
				subdictMajorVerIdx->erase( searchSubDict );
			}
			subdictMajorVerIdx = NULL;
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

	void CFBamRamMinorVersionTable::deleteMinorVersionByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfint::CFIntMinorVersionPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteMinorVersionByIdIdx( Authorization, &key );
	}

	void CFBamRamMinorVersionTable::deleteMinorVersionByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntMinorVersionPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfint::CFIntMinorVersionBuff* cur = NULL;
		cfint::CFIntMinorVersionBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> matchSet;
		std::map<cfint::CFIntMinorVersionPKey,
			cfint::CFIntMinorVersionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntMinorVersionPKey,
			cfint::CFIntMinorVersionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntMinorVersionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntMinorVersionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableMinorVersion()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteMinorVersion( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamMinorVersionTable::deleteMinorVersionByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfint::CFIntMinorVersionByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteMinorVersionByTenantIdx( Authorization, &key );
	}

	void CFBamRamMinorVersionTable::deleteMinorVersionByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntMinorVersionByTenantIdxKey* argKey )
	{
		cfint::CFIntMinorVersionBuff* cur = NULL;
		cfint::CFIntMinorVersionBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> matchSet;
		std::map<cfint::CFIntMinorVersionPKey,
			cfint::CFIntMinorVersionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntMinorVersionPKey,
			cfint::CFIntMinorVersionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntMinorVersionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntMinorVersionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableMinorVersion()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteMinorVersion( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamMinorVersionTable::deleteMinorVersionByMajorVerIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argMajorVersionId )
	{
		cfint::CFIntMinorVersionByMajorVerIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredMajorVersionId( argMajorVersionId );
		deleteMinorVersionByMajorVerIdx( Authorization, &key );
	}

	void CFBamRamMinorVersionTable::deleteMinorVersionByMajorVerIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntMinorVersionByMajorVerIdxKey* argKey )
	{
		cfint::CFIntMinorVersionBuff* cur = NULL;
		cfint::CFIntMinorVersionBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> matchSet;
		std::map<cfint::CFIntMinorVersionPKey,
			cfint::CFIntMinorVersionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntMinorVersionPKey,
			cfint::CFIntMinorVersionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntMinorVersionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntMinorVersionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableMinorVersion()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteMinorVersion( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamMinorVersionTable::deleteMinorVersionByNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argMajorVersionId,
			const std::string& argName )
	{
		cfint::CFIntMinorVersionByNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredMajorVersionId( argMajorVersionId );
		key.setRequiredName( argName );
		deleteMinorVersionByNameIdx( Authorization, &key );
	}

	void CFBamRamMinorVersionTable::deleteMinorVersionByNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntMinorVersionByNameIdxKey* argKey )
	{
		cfint::CFIntMinorVersionBuff* cur = NULL;
		cfint::CFIntMinorVersionBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*> matchSet;
		std::map<cfint::CFIntMinorVersionPKey,
			cfint::CFIntMinorVersionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntMinorVersionPKey,
			cfint::CFIntMinorVersionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntMinorVersionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntMinorVersionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntMinorVersionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableMinorVersion()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteMinorVersion( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamMinorVersionTable::releasePreparedStatements() {
	}

}
