
// Description: C++18 Implementation for an in-memory RAM DbIO for Scope.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
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

	const std::string CFBamRamScopeTable::CLASS_NAME( "CFBamRamScopeTable" );

	CFBamRamScopeTable::CFBamRamScopeTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamScopeTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamScopeBuff*>();
		dictByTenantIdx = new std::map<cfbam::CFBamScopeByTenantIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamScopeBuff*>*>();
	}

	CFBamRamScopeTable::~CFBamRamScopeTable() {
		if( dictByTenantIdx != NULL ) {
			for( auto iterDict = dictByTenantIdx->begin(); iterDict != dictByTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantIdx;
			dictByTenantIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfbam::CFBamScopeBuff* elt;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamScopeBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamScopeBuff*>::iterator cur = dictByPKey->begin();
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

	cfbam::CFBamScopeBuff* CFBamRamScopeTable::createScope( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamScopeBuff* Buff )
	{
		static const std::string S_ProcName( "createScope" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( dynamic_cast<CFBamRamTenantTable*>( schema->getTableTenant() )->nextScopeIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfbam::CFBamScopeByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
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

		// Proceed with adding the new record
		cfbam::CFBamScopeBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamScopeBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamScopeBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamScopeBuff*>();
			dictByTenantIdx->insert( std::map<cfbam::CFBamScopeByTenantIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamScopeBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamScopeBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamScopeBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamScopeBuff* CFBamRamScopeTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamScopeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamScopeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamScopeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamScopeBuff* CFBamRamScopeTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamScopeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamScopeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamScopeBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> CFBamRamScopeTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamScopeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamScopeBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamScopeBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamScopeBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> CFBamRamScopeTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> recVec;
		cfbam::CFBamScopeBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamScopeBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamScopeBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamScopeBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamScopeBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamScopeBuff* CFBamRamScopeTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamScopeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamScopeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamScopeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamScopeBuff* CFBamRamScopeTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamScopeBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamScopeBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamScopeBuff*>( buff ) );
	}

	cfbam::CFBamScopeBuff* CFBamRamScopeTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamScopeBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamScopeBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> CFBamRamScopeTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamScopeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamScopeBuff* CFBamRamScopeTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamScopeBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamScopeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> CFBamRamScopeTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamScopeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamScopeBuff* CFBamRamScopeTable::updateScope( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamScopeBuff* Buff )
	{
		static const std::string S_ProcName( "updateScope" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in Scope for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamScopeBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for Scope primary key " );
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
		cfbam::CFBamScopeByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamScopeByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		// Check unique indexes

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

		// Update is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamScopeBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		const classcode_t hasClassCode = existing->getClassCode();
		if( hasClassCode == cfbam::CFBamScopeBuff::CLASS_CODE ) {
			*existing = *Buff;
		}
		else if( hasClassCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamSchemaDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamSchemaDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamSchemaRefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamSchemaRefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamServerMethodBuff*>( existing ) = *dynamic_cast<cfbam::CFBamServerMethodBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( existing ) = *dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamServerProcBuff*>( existing ) = *dynamic_cast<cfbam::CFBamServerProcBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamServerListFuncBuff*>( existing ) = *dynamic_cast<cfbam::CFBamServerListFuncBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTableBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTableBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamClearDepBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamClearDepBuff*>( existing ) = *dynamic_cast<cfbam::CFBamClearDepBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( existing ) = *dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( existing ) = *dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( existing ) = *dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamClearTopDepBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamClearTopDepBuff*>( existing ) = *dynamic_cast<cfbam::CFBamClearTopDepBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamDelDepBuff*>( existing ) = *dynamic_cast<cfbam::CFBamDelDepBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( existing ) = *dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamDelSubDep2Buff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamDelSubDep2Buff*>( existing ) = *dynamic_cast<cfbam::CFBamDelSubDep2Buff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamDelSubDep3Buff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamDelSubDep3Buff*>( existing ) = *dynamic_cast<cfbam::CFBamDelSubDep3Buff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamDelTopDepBuff*>( existing ) = *dynamic_cast<cfbam::CFBamDelTopDepBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamIndexBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamIndexBuff*>( existing ) = *dynamic_cast<cfbam::CFBamIndexBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamPopDepBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamPopDepBuff*>( existing ) = *dynamic_cast<cfbam::CFBamPopDepBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( existing ) = *dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamPopSubDep2Buff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamPopSubDep2Buff*>( existing ) = *dynamic_cast<cfbam::CFBamPopSubDep2Buff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( existing ) = *dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamPopTopDepBuff*>( existing ) = *dynamic_cast<cfbam::CFBamPopTopDepBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamRelationBuff*>( existing ) = *dynamic_cast<cfbam::CFBamRelationBuff*>( Buff );
		}
		else {
			const static std::string S_DoesNotDerive( " does not derive from cfbam::CFBamScopeBuff" );
			std::string Msg( "Unsupported buffer class " );
			Msg.append( cflib::CFLib::formatClassCode( hasClassCode ) );
			Msg.append( S_DoesNotDerive );
			delete Buff;
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				Msg );
		}
		existing->setRequiredRevision( existing->getRequiredRevision() + 1 );

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamScopeBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamScopeBuff*>* subdictTenantIdx;
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
			subdictTenantIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamScopeBuff*>();
			dictByTenantIdx->insert( std::map<cfbam::CFBamScopeByTenantIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamScopeBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamScopeBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamScopeBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamScopeBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamScopeTable::deleteScope( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamScopeBuff* Buff )
	{
		static const std::string S_ProcName( "deleteScope" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamScopeBuff* existing = searchExisting->second;
		cfbam::CFBamScopeByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		// Validate reverse foreign keys

		{
			cfbam::CFBamSchemaDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table SchemaDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamSchemaRefBuff* refIdIdx = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( schema->getTableSchemaRef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table SchemaRef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamServerMethodBuff* refIdIdx = dynamic_cast<cfbam::CFBamServerMethodBuff*>( schema->getTableServerMethod()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table ServerMethod for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamTableBuff* refIdIdx = dynamic_cast<cfbam::CFBamTableBuff*>( schema->getTableTable()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table Table for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamClearDepBuff* refIdIdx = dynamic_cast<cfbam::CFBamClearDepBuff*>( schema->getTableClearDep()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table ClearDep for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamDelDepBuff* refIdIdx = dynamic_cast<cfbam::CFBamDelDepBuff*>( schema->getTableDelDep()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table DelDep for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamIndexBuff* refIdIdx = dynamic_cast<cfbam::CFBamIndexBuff*>( schema->getTableIndex()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table Index for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamPopDepBuff* refIdIdx = dynamic_cast<cfbam::CFBamPopDepBuff*>( schema->getTablePopDep()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table PopDep for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamRelationBuff* refIdIdx = dynamic_cast<cfbam::CFBamRelationBuff*>( schema->getTableRelation()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table Relation for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamScopeBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamScopeBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamScopeTable::deleteScopeByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteScopeByIdIdx( Authorization, &key );
	}

	void CFBamRamScopeTable::deleteScopeByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		static const std::string S_ProcName( "deleteScopeByIdIdx" );
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamScopeBuff* cur = NULL;
		cfbam::CFBamScopeBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamScopeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamScopeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamScopeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableScope()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamScopeBuff::CLASS_CODE ) {
				schema->getTableScope()->deleteScope( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
				schema->getTableSchemaDef()->deleteSchemaDef( Authorization, dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				schema->getTableSchemaRef()->deleteSchemaRef( Authorization, dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
				schema->getTableServerMethod()->deleteServerMethod( Authorization, dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
				schema->getTableServerObjFunc()->deleteServerObjFunc( Authorization, dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
				schema->getTableServerProc()->deleteServerProc( Authorization, dynamic_cast<cfbam::CFBamServerProcBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
				schema->getTableServerListFunc()->deleteServerListFunc( Authorization, dynamic_cast<cfbam::CFBamServerListFuncBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
				schema->getTableTable()->deleteTable( Authorization, dynamic_cast<cfbam::CFBamTableBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamClearDepBuff::CLASS_CODE ) {
				schema->getTableClearDep()->deleteClearDep( Authorization, dynamic_cast<cfbam::CFBamClearDepBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
				schema->getTableClearSubDep1()->deleteClearSubDep1( Authorization, dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
				schema->getTableClearSubDep2()->deleteClearSubDep2( Authorization, dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
				schema->getTableClearSubDep3()->deleteClearSubDep3( Authorization, dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamClearTopDepBuff::CLASS_CODE ) {
				schema->getTableClearTopDep()->deleteClearTopDep( Authorization, dynamic_cast<cfbam::CFBamClearTopDepBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
				schema->getTableDelDep()->deleteDelDep( Authorization, dynamic_cast<cfbam::CFBamDelDepBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
				schema->getTableDelSubDep1()->deleteDelSubDep1( Authorization, dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDelSubDep2Buff::CLASS_CODE ) {
				schema->getTableDelSubDep2()->deleteDelSubDep2( Authorization, dynamic_cast<cfbam::CFBamDelSubDep2Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDelSubDep3Buff::CLASS_CODE ) {
				schema->getTableDelSubDep3()->deleteDelSubDep3( Authorization, dynamic_cast<cfbam::CFBamDelSubDep3Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				schema->getTableDelTopDep()->deleteDelTopDep( Authorization, dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamIndexBuff::CLASS_CODE ) {
				schema->getTableIndex()->deleteIndex( Authorization, dynamic_cast<cfbam::CFBamIndexBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamPopDepBuff::CLASS_CODE ) {
				schema->getTablePopDep()->deletePopDep( Authorization, dynamic_cast<cfbam::CFBamPopDepBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
				schema->getTablePopSubDep1()->deletePopSubDep1( Authorization, dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamPopSubDep2Buff::CLASS_CODE ) {
				schema->getTablePopSubDep2()->deletePopSubDep2( Authorization, dynamic_cast<cfbam::CFBamPopSubDep2Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
				schema->getTablePopSubDep3()->deletePopSubDep3( Authorization, dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
				schema->getTablePopTopDep()->deletePopTopDep( Authorization, dynamic_cast<cfbam::CFBamPopTopDepBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
				schema->getTableRelation()->deleteRelation( Authorization, dynamic_cast<cfbam::CFBamRelationBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamScopeTable::deleteScopeByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteScopeByTenantIdx( Authorization, &key );
	}

	void CFBamRamScopeTable::deleteScopeByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteScopeByTenantIdx" );
		cfbam::CFBamScopeBuff* cur = NULL;
		cfbam::CFBamScopeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamScopeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamScopeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamScopeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableScope()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamScopeBuff::CLASS_CODE ) {
				schema->getTableScope()->deleteScope( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
				schema->getTableSchemaDef()->deleteSchemaDef( Authorization, dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				schema->getTableSchemaRef()->deleteSchemaRef( Authorization, dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
				schema->getTableServerMethod()->deleteServerMethod( Authorization, dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
				schema->getTableServerObjFunc()->deleteServerObjFunc( Authorization, dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
				schema->getTableServerProc()->deleteServerProc( Authorization, dynamic_cast<cfbam::CFBamServerProcBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
				schema->getTableServerListFunc()->deleteServerListFunc( Authorization, dynamic_cast<cfbam::CFBamServerListFuncBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
				schema->getTableTable()->deleteTable( Authorization, dynamic_cast<cfbam::CFBamTableBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamClearDepBuff::CLASS_CODE ) {
				schema->getTableClearDep()->deleteClearDep( Authorization, dynamic_cast<cfbam::CFBamClearDepBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
				schema->getTableClearSubDep1()->deleteClearSubDep1( Authorization, dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
				schema->getTableClearSubDep2()->deleteClearSubDep2( Authorization, dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
				schema->getTableClearSubDep3()->deleteClearSubDep3( Authorization, dynamic_cast<cfbam::CFBamClearSubDep3Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamClearTopDepBuff::CLASS_CODE ) {
				schema->getTableClearTopDep()->deleteClearTopDep( Authorization, dynamic_cast<cfbam::CFBamClearTopDepBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
				schema->getTableDelDep()->deleteDelDep( Authorization, dynamic_cast<cfbam::CFBamDelDepBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
				schema->getTableDelSubDep1()->deleteDelSubDep1( Authorization, dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDelSubDep2Buff::CLASS_CODE ) {
				schema->getTableDelSubDep2()->deleteDelSubDep2( Authorization, dynamic_cast<cfbam::CFBamDelSubDep2Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDelSubDep3Buff::CLASS_CODE ) {
				schema->getTableDelSubDep3()->deleteDelSubDep3( Authorization, dynamic_cast<cfbam::CFBamDelSubDep3Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				schema->getTableDelTopDep()->deleteDelTopDep( Authorization, dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamIndexBuff::CLASS_CODE ) {
				schema->getTableIndex()->deleteIndex( Authorization, dynamic_cast<cfbam::CFBamIndexBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamPopDepBuff::CLASS_CODE ) {
				schema->getTablePopDep()->deletePopDep( Authorization, dynamic_cast<cfbam::CFBamPopDepBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
				schema->getTablePopSubDep1()->deletePopSubDep1( Authorization, dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamPopSubDep2Buff::CLASS_CODE ) {
				schema->getTablePopSubDep2()->deletePopSubDep2( Authorization, dynamic_cast<cfbam::CFBamPopSubDep2Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
				schema->getTablePopSubDep3()->deletePopSubDep3( Authorization, dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
				schema->getTablePopTopDep()->deletePopTopDep( Authorization, dynamic_cast<cfbam::CFBamPopTopDepBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
				schema->getTableRelation()->deleteRelation( Authorization, dynamic_cast<cfbam::CFBamRelationBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamScopeTable::releasePreparedStatements() {
	}

}
