
// Description: C++18 Implementation for an in-memory RAM DbIO for TopDomain.

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

	const std::string CFBamRamTopDomainTable::CLASS_NAME( "CFBamRamTopDomainTable" );

	CFBamRamTopDomainTable::CFBamRamTopDomainTable( ICFBamSchema* argSchema )
	: cfint::ICFIntTopDomainTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>();
		dictByTenantIdx = new std::map<cfint::CFIntTopDomainByTenantIdxKey,
			std::map<cfint::CFIntTopDomainPKey,
				cfint::CFIntTopDomainBuff*>*>();
		dictByTldIdx = new std::map<cfint::CFIntTopDomainByTldIdxKey,
			std::map<cfint::CFIntTopDomainPKey,
				cfint::CFIntTopDomainBuff*>*>();
		dictByNameIdx = new std::map<cfint::CFIntTopDomainByNameIdxKey, cfint::CFIntTopDomainBuff*>();
	}

	CFBamRamTopDomainTable::~CFBamRamTopDomainTable() {
		if( dictByTenantIdx != NULL ) {
			for( auto iterDict = dictByTenantIdx->begin(); iterDict != dictByTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantIdx;
			dictByTenantIdx = NULL;
		}
		if( dictByTldIdx != NULL ) {
			for( auto iterDict = dictByTldIdx->begin(); iterDict != dictByTldIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTldIdx;
			dictByTldIdx = NULL;
		}
		if( dictByNameIdx != NULL ) {
			delete dictByNameIdx;
			dictByNameIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfint::CFIntTopDomainBuff* elt;
			std::map<cfint::CFIntTopDomainPKey,
				cfint::CFIntTopDomainBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfint::CFIntTopDomainPKey,
					cfint::CFIntTopDomainBuff*>::iterator cur = dictByPKey->begin();
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

	cfint::CFIntTopDomainBuff* CFBamRamTopDomainTable::createTopDomain( const cfsec::CFSecAuthorization* Authorization,
		cfint::CFIntTopDomainBuff* Buff )
	{
		static const std::string S_ProcName( "createTopDomain" );
		cfint::CFIntTopDomainPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( dynamic_cast<CFBamRamTenantTable*>( schema->getTableTenant() )->nextTopDomainIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfint::CFIntTopDomainByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfint::CFIntTopDomainByTldIdxKey keyTldIdx;
		keyTldIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyTldIdx.setRequiredTldId( Buff->getRequiredTldId() );
		cfint::CFIntTopDomainByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyNameIdx.setRequiredTldId( Buff->getRequiredTldId() );
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
			std::string Msg( "Duplicate key detected for index TopDomNameIdx " + keyNameIdx.toString() );
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
				cfint::CFIntTldBuff* chk = dynamic_cast<cfint::CFIntTldBuff*>( schema->getTableTld()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTldId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ParentTld to table Tld" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfint::CFIntTopDomainBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>::value_type( pkey, buff ) );

		std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>();
			dictByTenantIdx->insert( std::map<cfint::CFIntTopDomainByTenantIdxKey,
				std::map<cfint::CFIntTopDomainPKey,
					cfint::CFIntTopDomainBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>::value_type( pkey, buff ) );

		std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>* subdictTldIdx;
		auto searchDictByTldIdx = dictByTldIdx->find( keyTldIdx );
		if( searchDictByTldIdx != dictByTldIdx->end() ) {
			subdictTldIdx = searchDictByTldIdx->second;
		}
		else {
			subdictTldIdx = new std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>();
			dictByTldIdx->insert( std::map<cfint::CFIntTopDomainByTldIdxKey,
				std::map<cfint::CFIntTopDomainPKey,
					cfint::CFIntTopDomainBuff*>*>::value_type( keyTldIdx, subdictTldIdx ) );
		}
		subdictTldIdx->insert( std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>::value_type( pkey, buff ) );

		dictByNameIdx->insert( std::map<cfint::CFIntTopDomainByNameIdxKey, cfint::CFIntTopDomainBuff*>::value_type( keyNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfint::CFIntTopDomainBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfint::CFIntTopDomainBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfint::CFIntTopDomainBuff* CFBamRamTopDomainTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntTopDomainPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfint::CFIntTopDomainBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfint::CFIntTopDomainBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntTopDomainBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfint::CFIntTopDomainBuff* CFBamRamTopDomainTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntTopDomainPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfint::CFIntTopDomainBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfint::CFIntTopDomainBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntTopDomainBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> CFBamRamTopDomainTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> retVec;
		std::map<cfint::CFIntTopDomainPKey,
			cfint::CFIntTopDomainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntTopDomainPKey,
			cfint::CFIntTopDomainBuff*>::iterator end = dictByPKey->end();
		cfint::CFIntTopDomainBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfint::CFIntTopDomainBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> CFBamRamTopDomainTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfint::CFIntTopDomainByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> recVec;
		cfint::CFIntTopDomainBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfint::CFIntTopDomainPKey,
				 cfint::CFIntTopDomainBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfint::CFIntTopDomainPKey,
				cfint::CFIntTopDomainBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfint::CFIntTopDomainPKey,
				cfint::CFIntTopDomainBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfint::CFIntTopDomainBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> CFBamRamTopDomainTable::readDerivedByTldIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TldId )
	{
		static const std::string S_ProcName( "readDerivedByTldIdx" );
		cfint::CFIntTopDomainByTldIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTldId( TldId );
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> recVec;
		cfint::CFIntTopDomainBuff* clone;
		auto searchDictByTldIdx = dictByTldIdx->find( key );
		if( searchDictByTldIdx != dictByTldIdx->end() ) {
			std::map<cfint::CFIntTopDomainPKey,
				 cfint::CFIntTopDomainBuff*>* subdictTldIdx = searchDictByTldIdx->second;
			std::map<cfint::CFIntTopDomainPKey,
				cfint::CFIntTopDomainBuff*>::iterator iter = subdictTldIdx->begin();
			std::map<cfint::CFIntTopDomainPKey,
				cfint::CFIntTopDomainBuff*>::iterator end = subdictTldIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfint::CFIntTopDomainBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfint::CFIntTopDomainBuff* CFBamRamTopDomainTable::readDerivedByNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TldId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByNameIdx" );
		cfint::CFIntTopDomainByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTldId( TldId );
		key.setRequiredName( Name );
		cfint::CFIntTopDomainBuff* buff;
		auto searchDictByNameIdx = dictByNameIdx->find( key );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			buff = dynamic_cast<cfint::CFIntTopDomainBuff*>( searchDictByNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntTopDomainBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfint::CFIntTopDomainBuff* CFBamRamTopDomainTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfint::CFIntTopDomainPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfint::CFIntTopDomainBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfint::CFIntTopDomainBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntTopDomainBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfint::CFIntTopDomainBuff* CFBamRamTopDomainTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntTopDomainPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfint::CFIntTopDomainBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfint::CFIntTopDomainBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfint::CFIntTopDomainBuff*>( buff ) );
	}

	cfint::CFIntTopDomainBuff* CFBamRamTopDomainTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntTopDomainPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfint::CFIntTopDomainBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfint::CFIntTopDomainBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> CFBamRamTopDomainTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfint::CFIntTopDomainBuff* buff;
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> filteredList;
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfint::CFIntTopDomainBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfint::CFIntTopDomainBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfint::CFIntTopDomainBuff* CFBamRamTopDomainTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfint::CFIntTopDomainBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfint::CFIntTopDomainBuff::CLASS_CODE ) {
			return( dynamic_cast<cfint::CFIntTopDomainBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> CFBamRamTopDomainTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfint::CFIntTopDomainBuff* buff;
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> filteredList;
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfint::CFIntTopDomainBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfint::CFIntTopDomainBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> CFBamRamTopDomainTable::readBuffByTldIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TldId )
	{
		static const std::string S_ProcName( "readBuffByTldIdx" );
		cfint::CFIntTopDomainBuff* buff;
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> filteredList;
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> buffList = readDerivedByTldIdx( Authorization,
			TenantId,
			TldId );
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfint::CFIntTopDomainBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfint::CFIntTopDomainBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfint::CFIntTopDomainBuff* CFBamRamTopDomainTable::readBuffByNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TldId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByNameIdx" );
		cfint::CFIntTopDomainBuff* buff = readDerivedByNameIdx( Authorization,
			TenantId,
			TldId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfint::CFIntTopDomainBuff::CLASS_CODE ) {
			return( dynamic_cast<cfint::CFIntTopDomainBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfint::CFIntTopDomainBuff* CFBamRamTopDomainTable::readBuffByLookupNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TldId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupNameIdx" );
		cfint::CFIntTopDomainBuff* buff = readBuffByNameIdx( Authorization,
			TenantId,
			TldId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfint::CFIntTopDomainBuff::CLASS_CODE ) {
			return( dynamic_cast<cfint::CFIntTopDomainBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfint::CFIntTopDomainBuff* CFBamRamTopDomainTable::readDerivedByLookupNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TldId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupNameIdx" );
		cfint::CFIntTopDomainBuff* buff = readDerivedByNameIdx( Authorization,
			TenantId,
			TldId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfint::CFIntTopDomainBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfint::CFIntTopDomainBuff* CFBamRamTopDomainTable::updateTopDomain( const cfsec::CFSecAuthorization* Authorization,
		cfint::CFIntTopDomainBuff* Buff )
	{
		static const std::string S_ProcName( "updateTopDomain" );
		cfint::CFIntTopDomainPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in TopDomain for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfint::CFIntTopDomainBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for TopDomain primary key " );
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
		cfint::CFIntTopDomainByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfint::CFIntTopDomainByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfint::CFIntTopDomainByTldIdxKey existingKeyTldIdx;
		existingKeyTldIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyTldIdx.setRequiredTldId( existing->getRequiredTldId() );
		cfint::CFIntTopDomainByTldIdxKey newKeyTldIdx;
		newKeyTldIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyTldIdx.setRequiredTldId( Buff->getRequiredTldId() );
		cfint::CFIntTopDomainByNameIdxKey existingKeyNameIdx;
		existingKeyNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyNameIdx.setRequiredTldId( existing->getRequiredTldId() );
		existingKeyNameIdx.setRequiredName( existing->getRequiredName() );
		cfint::CFIntTopDomainByNameIdxKey newKeyNameIdx;
		newKeyNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyNameIdx.setRequiredTldId( Buff->getRequiredTldId() );
		newKeyNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyNameIdx != newKeyNameIdx ) {
			auto searchDictByNameIdx = dictByNameIdx->find( newKeyNameIdx );
			if( searchDictByNameIdx != dictByNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index TopDomNameIdx " + newKeyNameIdx.toString() );
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
				cfint::CFIntTldBuff* chk = dynamic_cast<cfint::CFIntTldBuff*>( schema->getTableTld()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTldId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ParentTld to table Tld" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfint::CFIntTopDomainBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfint::CFIntTopDomainBuff" );
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

		dictByPKey->insert( std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>::value_type( pkey, existing ) );

		std::map<cfint::CFIntTopDomainPKey,
			 cfint::CFIntTopDomainBuff*>* subdictTenantIdx;
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
			subdictTenantIdx = new std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>();
			dictByTenantIdx->insert( std::map<cfint::CFIntTopDomainByTenantIdxKey,
				std::map<cfint::CFIntTopDomainPKey,
					cfint::CFIntTopDomainBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>::value_type( pkey, existing ) );

		std::map<cfint::CFIntTopDomainPKey,
			 cfint::CFIntTopDomainBuff*>* subdictTldIdx;
		auto searchDictByTldIdx = dictByTldIdx->find( existingKeyTldIdx );
		if( searchDictByTldIdx != dictByTldIdx->end() ) {
			subdictTldIdx = searchDictByTldIdx->second;
			auto searchSubDict = subdictTldIdx->find( pkey );
			if( searchSubDict != subdictTldIdx->end() ) {
				subdictTldIdx->erase( searchSubDict );
			}
			if( subdictTldIdx->size() <= 0 ) {
				delete subdictTldIdx;
				dictByTldIdx->erase( searchDictByTldIdx );
			}
			subdictTldIdx = NULL;
		}
		auto searchNewKeyDictByTldIdx = dictByTldIdx->find( newKeyTldIdx );
		if( searchNewKeyDictByTldIdx != dictByTldIdx->end() ) {
			subdictTldIdx = searchNewKeyDictByTldIdx->second;
		}
		else {
			subdictTldIdx = new std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>();
			dictByTldIdx->insert( std::map<cfint::CFIntTopDomainByTldIdxKey,
				std::map<cfint::CFIntTopDomainPKey,
					cfint::CFIntTopDomainBuff*>*>::value_type( newKeyTldIdx, subdictTldIdx ) );
		}
		subdictTldIdx->insert( std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>::value_type( pkey, existing ) );

		auto removalDictByNameIdx = dictByNameIdx->find( existingKeyNameIdx );
		if( removalDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( removalDictByNameIdx );
		}
		dictByNameIdx->insert( std::map<cfint::CFIntTopDomainByNameIdxKey, cfint::CFIntTopDomainBuff*>::value_type( newKeyNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfint::CFIntTopDomainBuff* buff;
		if( existing->getClassCode() == cfint::CFIntTopDomainBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfint::CFIntTopDomainBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamTopDomainTable::deleteTopDomain( const cfsec::CFSecAuthorization* Authorization,
		cfint::CFIntTopDomainBuff* Buff )
	{
		static const std::string S_ProcName( "deleteTopDomain" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfint::CFIntTopDomainPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfint::CFIntTopDomainBuff* existing = searchExisting->second;
		schema->getTableTopProject()->deleteTopProjectByTopDomainIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		schema->getTableLicense()->deleteLicenseByDomainIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		cfint::CFIntTopDomainByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfint::CFIntTopDomainByTldIdxKey keyTldIdx;
		keyTldIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyTldIdx.setRequiredTldId( existing->getRequiredTldId() );
		cfint::CFIntTopDomainByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyNameIdx.setRequiredTldId( existing->getRequiredTldId() );
		keyNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfint::CFIntTopDomainPKey, cfint::CFIntTopDomainBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfint::CFIntTopDomainPKey,
				 cfint::CFIntTopDomainBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictByTldIdx = dictByTldIdx->find( keyTldIdx );
		if( searchDictByTldIdx != dictByTldIdx->end() ) {
			std::map<cfint::CFIntTopDomainPKey,
				 cfint::CFIntTopDomainBuff*>* subdictTldIdx = searchDictByTldIdx->second;
			auto searchSubDict = subdictTldIdx->find( pkey );
			if( searchSubDict != subdictTldIdx->end() ) {
				subdictTldIdx->erase( searchSubDict );
			}
			subdictTldIdx = NULL;
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

	void CFBamRamTopDomainTable::deleteTopDomainByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfint::CFIntTopDomainPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteTopDomainByIdIdx( Authorization, &key );
	}

	void CFBamRamTopDomainTable::deleteTopDomainByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntTopDomainPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfint::CFIntTopDomainBuff* cur = NULL;
		cfint::CFIntTopDomainBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> matchSet;
		std::map<cfint::CFIntTopDomainPKey,
			cfint::CFIntTopDomainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntTopDomainPKey,
			cfint::CFIntTopDomainBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntTopDomainBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntTopDomainBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTopDomain()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTopDomain( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamTopDomainTable::deleteTopDomainByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfint::CFIntTopDomainByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteTopDomainByTenantIdx( Authorization, &key );
	}

	void CFBamRamTopDomainTable::deleteTopDomainByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntTopDomainByTenantIdxKey* argKey )
	{
		cfint::CFIntTopDomainBuff* cur = NULL;
		cfint::CFIntTopDomainBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> matchSet;
		std::map<cfint::CFIntTopDomainPKey,
			cfint::CFIntTopDomainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntTopDomainPKey,
			cfint::CFIntTopDomainBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntTopDomainBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntTopDomainBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTopDomain()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTopDomain( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTopDomainTable::deleteTopDomainByTldIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTldId )
	{
		cfint::CFIntTopDomainByTldIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTldId( argTldId );
		deleteTopDomainByTldIdx( Authorization, &key );
	}

	void CFBamRamTopDomainTable::deleteTopDomainByTldIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntTopDomainByTldIdxKey* argKey )
	{
		cfint::CFIntTopDomainBuff* cur = NULL;
		cfint::CFIntTopDomainBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> matchSet;
		std::map<cfint::CFIntTopDomainPKey,
			cfint::CFIntTopDomainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntTopDomainPKey,
			cfint::CFIntTopDomainBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntTopDomainBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntTopDomainBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTopDomain()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTopDomain( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTopDomainTable::deleteTopDomainByNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTldId,
			const std::string& argName )
	{
		cfint::CFIntTopDomainByNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTldId( argTldId );
		key.setRequiredName( argName );
		deleteTopDomainByNameIdx( Authorization, &key );
	}

	void CFBamRamTopDomainTable::deleteTopDomainByNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntTopDomainByNameIdxKey* argKey )
	{
		cfint::CFIntTopDomainBuff* cur = NULL;
		cfint::CFIntTopDomainBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*> matchSet;
		std::map<cfint::CFIntTopDomainPKey,
			cfint::CFIntTopDomainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntTopDomainPKey,
			cfint::CFIntTopDomainBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntTopDomainBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntTopDomainBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntTopDomainBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTopDomain()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTopDomain( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamTopDomainTable::releasePreparedStatements() {
	}

}
