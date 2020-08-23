
// Description: C++18 Implementation for an in-memory RAM DbIO for SubProject.

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

	const std::string CFBamRamSubProjectTable::CLASS_NAME( "CFBamRamSubProjectTable" );

	CFBamRamSubProjectTable::CFBamRamSubProjectTable( ICFBamSchema* argSchema )
	: cfint::ICFIntSubProjectTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>();
		dictByTenantIdx = new std::map<cfint::CFIntSubProjectByTenantIdxKey,
			std::map<cfint::CFIntSubProjectPKey,
				cfint::CFIntSubProjectBuff*>*>();
		dictByTopProjectIdx = new std::map<cfint::CFIntSubProjectByTopProjectIdxKey,
			std::map<cfint::CFIntSubProjectPKey,
				cfint::CFIntSubProjectBuff*>*>();
		dictByNameIdx = new std::map<cfint::CFIntSubProjectByNameIdxKey, cfint::CFIntSubProjectBuff*>();
	}

	CFBamRamSubProjectTable::~CFBamRamSubProjectTable() {
		if( dictByTenantIdx != NULL ) {
			for( auto iterDict = dictByTenantIdx->begin(); iterDict != dictByTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantIdx;
			dictByTenantIdx = NULL;
		}
		if( dictByTopProjectIdx != NULL ) {
			for( auto iterDict = dictByTopProjectIdx->begin(); iterDict != dictByTopProjectIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTopProjectIdx;
			dictByTopProjectIdx = NULL;
		}
		if( dictByNameIdx != NULL ) {
			delete dictByNameIdx;
			dictByNameIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfint::CFIntSubProjectBuff* elt;
			std::map<cfint::CFIntSubProjectPKey,
				cfint::CFIntSubProjectBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfint::CFIntSubProjectPKey,
					cfint::CFIntSubProjectBuff*>::iterator cur = dictByPKey->begin();
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

	cfint::CFIntSubProjectBuff* CFBamRamSubProjectTable::createSubProject( const cfsec::CFSecAuthorization* Authorization,
		cfint::CFIntSubProjectBuff* Buff )
	{
		static const std::string S_ProcName( "createSubProject" );
		cfint::CFIntSubProjectPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( dynamic_cast<CFBamRamTenantTable*>( schema->getTableTenant() )->nextSubProjectIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfint::CFIntSubProjectByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfint::CFIntSubProjectByTopProjectIdxKey keyTopProjectIdx;
		keyTopProjectIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyTopProjectIdx.setRequiredTopProjectId( Buff->getRequiredTopProjectId() );
		cfint::CFIntSubProjectByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyNameIdx.setRequiredTopProjectId( Buff->getRequiredTopProjectId() );
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
			std::string Msg( "Duplicate key detected for index SubProjectNameIdx " + keyNameIdx.toString() );
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
				cfint::CFIntTopProjectBuff* chk = dynamic_cast<cfint::CFIntTopProjectBuff*>( schema->getTableTopProject()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTopProjectId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ParentTopProject to table TopProject" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfint::CFIntSubProjectBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>::value_type( pkey, buff ) );

		std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>();
			dictByTenantIdx->insert( std::map<cfint::CFIntSubProjectByTenantIdxKey,
				std::map<cfint::CFIntSubProjectPKey,
					cfint::CFIntSubProjectBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>::value_type( pkey, buff ) );

		std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>* subdictTopProjectIdx;
		auto searchDictByTopProjectIdx = dictByTopProjectIdx->find( keyTopProjectIdx );
		if( searchDictByTopProjectIdx != dictByTopProjectIdx->end() ) {
			subdictTopProjectIdx = searchDictByTopProjectIdx->second;
		}
		else {
			subdictTopProjectIdx = new std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>();
			dictByTopProjectIdx->insert( std::map<cfint::CFIntSubProjectByTopProjectIdxKey,
				std::map<cfint::CFIntSubProjectPKey,
					cfint::CFIntSubProjectBuff*>*>::value_type( keyTopProjectIdx, subdictTopProjectIdx ) );
		}
		subdictTopProjectIdx->insert( std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>::value_type( pkey, buff ) );

		dictByNameIdx->insert( std::map<cfint::CFIntSubProjectByNameIdxKey, cfint::CFIntSubProjectBuff*>::value_type( keyNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfint::CFIntSubProjectBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfint::CFIntSubProjectBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfint::CFIntSubProjectBuff* CFBamRamSubProjectTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntSubProjectPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfint::CFIntSubProjectBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfint::CFIntSubProjectBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntSubProjectBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfint::CFIntSubProjectBuff* CFBamRamSubProjectTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntSubProjectPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfint::CFIntSubProjectBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfint::CFIntSubProjectBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntSubProjectBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> CFBamRamSubProjectTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> retVec;
		std::map<cfint::CFIntSubProjectPKey,
			cfint::CFIntSubProjectBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntSubProjectPKey,
			cfint::CFIntSubProjectBuff*>::iterator end = dictByPKey->end();
		cfint::CFIntSubProjectBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfint::CFIntSubProjectBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> CFBamRamSubProjectTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfint::CFIntSubProjectByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> recVec;
		cfint::CFIntSubProjectBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfint::CFIntSubProjectPKey,
				 cfint::CFIntSubProjectBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfint::CFIntSubProjectPKey,
				cfint::CFIntSubProjectBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfint::CFIntSubProjectPKey,
				cfint::CFIntSubProjectBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfint::CFIntSubProjectBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> CFBamRamSubProjectTable::readDerivedByTopProjectIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TopProjectId )
	{
		static const std::string S_ProcName( "readDerivedByTopProjectIdx" );
		cfint::CFIntSubProjectByTopProjectIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTopProjectId( TopProjectId );
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> recVec;
		cfint::CFIntSubProjectBuff* clone;
		auto searchDictByTopProjectIdx = dictByTopProjectIdx->find( key );
		if( searchDictByTopProjectIdx != dictByTopProjectIdx->end() ) {
			std::map<cfint::CFIntSubProjectPKey,
				 cfint::CFIntSubProjectBuff*>* subdictTopProjectIdx = searchDictByTopProjectIdx->second;
			std::map<cfint::CFIntSubProjectPKey,
				cfint::CFIntSubProjectBuff*>::iterator iter = subdictTopProjectIdx->begin();
			std::map<cfint::CFIntSubProjectPKey,
				cfint::CFIntSubProjectBuff*>::iterator end = subdictTopProjectIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfint::CFIntSubProjectBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfint::CFIntSubProjectBuff* CFBamRamSubProjectTable::readDerivedByNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TopProjectId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByNameIdx" );
		cfint::CFIntSubProjectByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTopProjectId( TopProjectId );
		key.setRequiredName( Name );
		cfint::CFIntSubProjectBuff* buff;
		auto searchDictByNameIdx = dictByNameIdx->find( key );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			buff = dynamic_cast<cfint::CFIntSubProjectBuff*>( searchDictByNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntSubProjectBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfint::CFIntSubProjectBuff* CFBamRamSubProjectTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfint::CFIntSubProjectPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfint::CFIntSubProjectBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfint::CFIntSubProjectBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfint::CFIntSubProjectBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfint::CFIntSubProjectBuff* CFBamRamSubProjectTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntSubProjectPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfint::CFIntSubProjectBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfint::CFIntSubProjectBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfint::CFIntSubProjectBuff*>( buff ) );
	}

	cfint::CFIntSubProjectBuff* CFBamRamSubProjectTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntSubProjectPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfint::CFIntSubProjectBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfint::CFIntSubProjectBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> CFBamRamSubProjectTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfint::CFIntSubProjectBuff* buff;
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> filteredList;
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfint::CFIntSubProjectBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfint::CFIntSubProjectBuff* CFBamRamSubProjectTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfint::CFIntSubProjectBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfint::CFIntSubProjectBuff::CLASS_CODE ) {
			return( dynamic_cast<cfint::CFIntSubProjectBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> CFBamRamSubProjectTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfint::CFIntSubProjectBuff* buff;
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> filteredList;
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfint::CFIntSubProjectBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> CFBamRamSubProjectTable::readBuffByTopProjectIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TopProjectId )
	{
		static const std::string S_ProcName( "readBuffByTopProjectIdx" );
		cfint::CFIntSubProjectBuff* buff;
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> filteredList;
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> buffList = readDerivedByTopProjectIdx( Authorization,
			TenantId,
			TopProjectId );
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfint::CFIntSubProjectBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfint::CFIntSubProjectBuff* CFBamRamSubProjectTable::readBuffByNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TopProjectId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByNameIdx" );
		cfint::CFIntSubProjectBuff* buff = readDerivedByNameIdx( Authorization,
			TenantId,
			TopProjectId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfint::CFIntSubProjectBuff::CLASS_CODE ) {
			return( dynamic_cast<cfint::CFIntSubProjectBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfint::CFIntSubProjectBuff* CFBamRamSubProjectTable::readBuffByLookupNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TopProjectId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupNameIdx" );
		cfint::CFIntSubProjectBuff* buff = readBuffByNameIdx( Authorization,
			TenantId,
			TopProjectId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfint::CFIntSubProjectBuff::CLASS_CODE ) {
			return( dynamic_cast<cfint::CFIntSubProjectBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfint::CFIntSubProjectBuff* CFBamRamSubProjectTable::readDerivedByLookupNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TopProjectId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupNameIdx" );
		cfint::CFIntSubProjectBuff* buff = readDerivedByNameIdx( Authorization,
			TenantId,
			TopProjectId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfint::CFIntSubProjectBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfint::CFIntSubProjectBuff* CFBamRamSubProjectTable::updateSubProject( const cfsec::CFSecAuthorization* Authorization,
		cfint::CFIntSubProjectBuff* Buff )
	{
		static const std::string S_ProcName( "updateSubProject" );
		cfint::CFIntSubProjectPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in SubProject for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfint::CFIntSubProjectBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for SubProject primary key " );
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
		cfint::CFIntSubProjectByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfint::CFIntSubProjectByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfint::CFIntSubProjectByTopProjectIdxKey existingKeyTopProjectIdx;
		existingKeyTopProjectIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyTopProjectIdx.setRequiredTopProjectId( existing->getRequiredTopProjectId() );
		cfint::CFIntSubProjectByTopProjectIdxKey newKeyTopProjectIdx;
		newKeyTopProjectIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyTopProjectIdx.setRequiredTopProjectId( Buff->getRequiredTopProjectId() );
		cfint::CFIntSubProjectByNameIdxKey existingKeyNameIdx;
		existingKeyNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyNameIdx.setRequiredTopProjectId( existing->getRequiredTopProjectId() );
		existingKeyNameIdx.setRequiredName( existing->getRequiredName() );
		cfint::CFIntSubProjectByNameIdxKey newKeyNameIdx;
		newKeyNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyNameIdx.setRequiredTopProjectId( Buff->getRequiredTopProjectId() );
		newKeyNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyNameIdx != newKeyNameIdx ) {
			auto searchDictByNameIdx = dictByNameIdx->find( newKeyNameIdx );
			if( searchDictByNameIdx != dictByNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SubProjectNameIdx " + newKeyNameIdx.toString() );
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
				cfint::CFIntTopProjectBuff* chk = dynamic_cast<cfint::CFIntTopProjectBuff*>( schema->getTableTopProject()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTopProjectId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ParentTopProject to table TopProject" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfint::CFIntSubProjectBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfint::CFIntSubProjectBuff" );
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

		dictByPKey->insert( std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>::value_type( pkey, existing ) );

		std::map<cfint::CFIntSubProjectPKey,
			 cfint::CFIntSubProjectBuff*>* subdictTenantIdx;
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
			subdictTenantIdx = new std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>();
			dictByTenantIdx->insert( std::map<cfint::CFIntSubProjectByTenantIdxKey,
				std::map<cfint::CFIntSubProjectPKey,
					cfint::CFIntSubProjectBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>::value_type( pkey, existing ) );

		std::map<cfint::CFIntSubProjectPKey,
			 cfint::CFIntSubProjectBuff*>* subdictTopProjectIdx;
		auto searchDictByTopProjectIdx = dictByTopProjectIdx->find( existingKeyTopProjectIdx );
		if( searchDictByTopProjectIdx != dictByTopProjectIdx->end() ) {
			subdictTopProjectIdx = searchDictByTopProjectIdx->second;
			auto searchSubDict = subdictTopProjectIdx->find( pkey );
			if( searchSubDict != subdictTopProjectIdx->end() ) {
				subdictTopProjectIdx->erase( searchSubDict );
			}
			if( subdictTopProjectIdx->size() <= 0 ) {
				delete subdictTopProjectIdx;
				dictByTopProjectIdx->erase( searchDictByTopProjectIdx );
			}
			subdictTopProjectIdx = NULL;
		}
		auto searchNewKeyDictByTopProjectIdx = dictByTopProjectIdx->find( newKeyTopProjectIdx );
		if( searchNewKeyDictByTopProjectIdx != dictByTopProjectIdx->end() ) {
			subdictTopProjectIdx = searchNewKeyDictByTopProjectIdx->second;
		}
		else {
			subdictTopProjectIdx = new std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>();
			dictByTopProjectIdx->insert( std::map<cfint::CFIntSubProjectByTopProjectIdxKey,
				std::map<cfint::CFIntSubProjectPKey,
					cfint::CFIntSubProjectBuff*>*>::value_type( newKeyTopProjectIdx, subdictTopProjectIdx ) );
		}
		subdictTopProjectIdx->insert( std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>::value_type( pkey, existing ) );

		auto removalDictByNameIdx = dictByNameIdx->find( existingKeyNameIdx );
		if( removalDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( removalDictByNameIdx );
		}
		dictByNameIdx->insert( std::map<cfint::CFIntSubProjectByNameIdxKey, cfint::CFIntSubProjectBuff*>::value_type( newKeyNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfint::CFIntSubProjectBuff* buff;
		if( existing->getClassCode() == cfint::CFIntSubProjectBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfint::CFIntSubProjectBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamSubProjectTable::deleteSubProject( const cfsec::CFSecAuthorization* Authorization,
		cfint::CFIntSubProjectBuff* Buff )
	{
		static const std::string S_ProcName( "deleteSubProject" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfint::CFIntSubProjectPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfint::CFIntSubProjectBuff* existing = searchExisting->second;
		schema->getTableMajorVersion()->deleteMajorVersionBySubProjectIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		cfint::CFIntSubProjectByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfint::CFIntSubProjectByTopProjectIdxKey keyTopProjectIdx;
		keyTopProjectIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyTopProjectIdx.setRequiredTopProjectId( existing->getRequiredTopProjectId() );
		cfint::CFIntSubProjectByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyNameIdx.setRequiredTopProjectId( existing->getRequiredTopProjectId() );
		keyNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfint::CFIntSubProjectPKey, cfint::CFIntSubProjectBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfint::CFIntSubProjectPKey,
				 cfint::CFIntSubProjectBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictByTopProjectIdx = dictByTopProjectIdx->find( keyTopProjectIdx );
		if( searchDictByTopProjectIdx != dictByTopProjectIdx->end() ) {
			std::map<cfint::CFIntSubProjectPKey,
				 cfint::CFIntSubProjectBuff*>* subdictTopProjectIdx = searchDictByTopProjectIdx->second;
			auto searchSubDict = subdictTopProjectIdx->find( pkey );
			if( searchSubDict != subdictTopProjectIdx->end() ) {
				subdictTopProjectIdx->erase( searchSubDict );
			}
			subdictTopProjectIdx = NULL;
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

	void CFBamRamSubProjectTable::deleteSubProjectByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfint::CFIntSubProjectPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteSubProjectByIdIdx( Authorization, &key );
	}

	void CFBamRamSubProjectTable::deleteSubProjectByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntSubProjectPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfint::CFIntSubProjectBuff* cur = NULL;
		cfint::CFIntSubProjectBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> matchSet;
		std::map<cfint::CFIntSubProjectPKey,
			cfint::CFIntSubProjectBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntSubProjectPKey,
			cfint::CFIntSubProjectBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntSubProjectBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntSubProjectBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSubProject()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSubProject( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamSubProjectTable::deleteSubProjectByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfint::CFIntSubProjectByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteSubProjectByTenantIdx( Authorization, &key );
	}

	void CFBamRamSubProjectTable::deleteSubProjectByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntSubProjectByTenantIdxKey* argKey )
	{
		cfint::CFIntSubProjectBuff* cur = NULL;
		cfint::CFIntSubProjectBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> matchSet;
		std::map<cfint::CFIntSubProjectPKey,
			cfint::CFIntSubProjectBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntSubProjectPKey,
			cfint::CFIntSubProjectBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntSubProjectBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntSubProjectBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSubProject()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSubProject( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSubProjectTable::deleteSubProjectByTopProjectIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTopProjectId )
	{
		cfint::CFIntSubProjectByTopProjectIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTopProjectId( argTopProjectId );
		deleteSubProjectByTopProjectIdx( Authorization, &key );
	}

	void CFBamRamSubProjectTable::deleteSubProjectByTopProjectIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntSubProjectByTopProjectIdxKey* argKey )
	{
		cfint::CFIntSubProjectBuff* cur = NULL;
		cfint::CFIntSubProjectBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> matchSet;
		std::map<cfint::CFIntSubProjectPKey,
			cfint::CFIntSubProjectBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntSubProjectPKey,
			cfint::CFIntSubProjectBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntSubProjectBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntSubProjectBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSubProject()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSubProject( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSubProjectTable::deleteSubProjectByNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTopProjectId,
			const std::string& argName )
	{
		cfint::CFIntSubProjectByNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTopProjectId( argTopProjectId );
		key.setRequiredName( argName );
		deleteSubProjectByNameIdx( Authorization, &key );
	}

	void CFBamRamSubProjectTable::deleteSubProjectByNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfint::CFIntSubProjectByNameIdxKey* argKey )
	{
		cfint::CFIntSubProjectBuff* cur = NULL;
		cfint::CFIntSubProjectBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*> matchSet;
		std::map<cfint::CFIntSubProjectPKey,
			cfint::CFIntSubProjectBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfint::CFIntSubProjectPKey,
			cfint::CFIntSubProjectBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfint::CFIntSubProjectBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfint::CFIntSubProjectBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfint::CFIntSubProjectBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSubProject()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSubProject( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSubProjectTable::releasePreparedStatements() {
	}

}
