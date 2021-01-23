
// Description: C++18 Implementation for an in-memory RAM DbIO for DelDep.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFBam 2.13 Business Application Model
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

	const std::string CFBamRamDelDepTable::CLASS_NAME( "CFBamRamDelDepTable" );

	CFBamRamDelDepTable::CFBamRamDelDepTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamDelDepTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>();
		dictByDefSchemaIdx = new std::map<cfbam::CFBamDelDepByDefSchemaIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelDepBuff*>*>();
		dictByDelDepIdx = new std::map<cfbam::CFBamDelDepByDelDepIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelDepBuff*>*>();
	}

	CFBamRamDelDepTable::~CFBamRamDelDepTable() {
		if( dictByDefSchemaIdx != NULL ) {
			for( auto iterDict = dictByDefSchemaIdx->begin(); iterDict != dictByDefSchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDefSchemaIdx;
			dictByDefSchemaIdx = NULL;
		}
		if( dictByDelDepIdx != NULL ) {
			for( auto iterDict = dictByDelDepIdx->begin(); iterDict != dictByDelDepIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDelDepIdx;
			dictByDelDepIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfbam::CFBamDelDepBuff* CFBamRamDelDepTable::createDelDep( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamDelDepBuff* Buff )
	{
		static const std::string S_ProcName( "createDelDep" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamDelDepByDefSchemaIdxKey keyDefSchemaIdx;
		if( Buff->isOptionalDefSchemaTenantIdNull() ) {
			keyDefSchemaIdx.setOptionalDefSchemaTenantIdNull();
		}
		else {
			keyDefSchemaIdx.setOptionalDefSchemaTenantIdValue( Buff->getOptionalDefSchemaTenantIdValue() );
		}
		if( Buff->isOptionalDefSchemaIdNull() ) {
			keyDefSchemaIdx.setOptionalDefSchemaIdNull();
		}
		else {
			keyDefSchemaIdx.setOptionalDefSchemaIdValue( Buff->getOptionalDefSchemaIdValue() );
		}
		cfbam::CFBamDelDepByDelDepIdxKey keyDelDepIdx;
		keyDelDepIdx.setRequiredRelationTenantId( Buff->getRequiredRelationTenantId() );
		keyDelDepIdx.setRequiredRelationId( Buff->getRequiredRelationId() );
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
			allNull = false;
			if( ! allNull ) {
				cfbam::CFBamRelationBuff* chk = dynamic_cast<cfbam::CFBamRelationBuff*>( schema->getTableRelation()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredRelationTenantId(),
						Buff->getRequiredRelationId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship Relation to table Relation" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamDelDepBuff* buff = dynamic_cast<cfbam::CFBamDelDepBuff*>( schema->getTableScope()->createScope( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamDelDepByDefSchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamDelDepBuff*>*>::value_type( keyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>* subdictDelDepIdx;
		auto searchDictByDelDepIdx = dictByDelDepIdx->find( keyDelDepIdx );
		if( searchDictByDelDepIdx != dictByDelDepIdx->end() ) {
			subdictDelDepIdx = searchDictByDelDepIdx->second;
		}
		else {
			subdictDelDepIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>();
			dictByDelDepIdx->insert( std::map<cfbam::CFBamDelDepByDelDepIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamDelDepBuff*>*>::value_type( keyDelDepIdx, subdictDelDepIdx ) );
		}
		subdictDelDepIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamDelDepBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamDelDepBuff* CFBamRamDelDepTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamDelDepBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamDelDepBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamDelDepBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamDelDepBuff* CFBamRamDelDepTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamDelDepBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamDelDepBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamDelDepBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> CFBamRamDelDepTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelDepBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamDelDepBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamDelDepBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> CFBamRamDelDepTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamDelDepBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelDepBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> CFBamRamDelDepTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		cfbam::CFBamDelDepByDefSchemaIdxKey key;
		if( DefSchemaTenantId == NULL ) {
			key.setOptionalDefSchemaTenantIdNull();
		}
		else {
			key.setOptionalDefSchemaTenantIdValue( *DefSchemaTenantId );
		}
		if( DefSchemaId == NULL ) {
			key.setOptionalDefSchemaIdNull();
		}
		else {
			key.setOptionalDefSchemaIdValue( *DefSchemaId );
		}
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> recVec;
		cfbam::CFBamDelDepBuff* clone;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( key );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamDelDepBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelDepBuff*>::iterator iter = subdictDefSchemaIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelDepBuff*>::iterator end = subdictDefSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamDelDepBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> CFBamRamDelDepTable::readDerivedByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readDerivedByDelDepIdx" );
		cfbam::CFBamDelDepByDelDepIdxKey key;
		key.setRequiredRelationTenantId( RelationTenantId );
		key.setRequiredRelationId( RelationId );
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> recVec;
		cfbam::CFBamDelDepBuff* clone;
		auto searchDictByDelDepIdx = dictByDelDepIdx->find( key );
		if( searchDictByDelDepIdx != dictByDelDepIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamDelDepBuff*>* subdictDelDepIdx = searchDictByDelDepIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelDepBuff*>::iterator iter = subdictDelDepIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelDepBuff*>::iterator end = subdictDelDepIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamDelDepBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamDelDepBuff* CFBamRamDelDepTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamDelDepBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamDelDepBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamDelDepBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamDelDepBuff* CFBamRamDelDepTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamDelDepBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamDelDepBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamDelDepBuff*>( buff ) );
	}

	cfbam::CFBamDelDepBuff* CFBamRamDelDepTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamDelDepBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamDelDepBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> CFBamRamDelDepTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamDelDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamDelDepBuff* CFBamRamDelDepTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamDelDepBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamDelDepBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> CFBamRamDelDepTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamDelDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> CFBamRamDelDepTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamDelDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> CFBamRamDelDepTable::readBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readBuffByDelDepIdx" );
		cfbam::CFBamDelDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> buffList = readDerivedByDelDepIdx( Authorization,
			RelationTenantId,
			RelationId );
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> CFBamRamDelDepTable::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> CFBamRamDelDepTable::pageBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDelDepIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamDelDepBuff* CFBamRamDelDepTable::updateDelDep( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamDelDepBuff* Buff )
	{
		static const std::string S_ProcName( "updateDelDep" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in DelDep for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamDelDepBuff* existing = searchExisting->second;

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
		cfbam::CFBamDelDepByDefSchemaIdxKey existingKeyDefSchemaIdx;
		if( existing->isOptionalDefSchemaTenantIdNull() ) {
			existingKeyDefSchemaIdx.setOptionalDefSchemaTenantIdNull();
		}
		else {
			existingKeyDefSchemaIdx.setOptionalDefSchemaTenantIdValue( existing->getOptionalDefSchemaTenantIdValue() );
		}
		if( existing->isOptionalDefSchemaIdNull() ) {
			existingKeyDefSchemaIdx.setOptionalDefSchemaIdNull();
		}
		else {
			existingKeyDefSchemaIdx.setOptionalDefSchemaIdValue( existing->getOptionalDefSchemaIdValue() );
		}
		cfbam::CFBamDelDepByDefSchemaIdxKey newKeyDefSchemaIdx;
		if( Buff->isOptionalDefSchemaTenantIdNull() ) {
			newKeyDefSchemaIdx.setOptionalDefSchemaTenantIdNull();
		}
		else {
			newKeyDefSchemaIdx.setOptionalDefSchemaTenantIdValue( Buff->getOptionalDefSchemaTenantIdValue() );
		}
		if( Buff->isOptionalDefSchemaIdNull() ) {
			newKeyDefSchemaIdx.setOptionalDefSchemaIdNull();
		}
		else {
			newKeyDefSchemaIdx.setOptionalDefSchemaIdValue( Buff->getOptionalDefSchemaIdValue() );
		}
		cfbam::CFBamDelDepByDelDepIdxKey existingKeyDelDepIdx;
		existingKeyDelDepIdx.setRequiredRelationTenantId( existing->getRequiredRelationTenantId() );
		existingKeyDelDepIdx.setRequiredRelationId( existing->getRequiredRelationId() );
		cfbam::CFBamDelDepByDelDepIdxKey newKeyDelDepIdx;
		newKeyDelDepIdx.setRequiredRelationTenantId( Buff->getRequiredRelationTenantId() );
		newKeyDelDepIdx.setRequiredRelationId( Buff->getRequiredRelationId() );
		// Check unique indexes

		// Validate foreign keys

		{
			bool allNull = true;

			if( allNull ) {
				cfbam::CFBamScopeBuff* chk = dynamic_cast<cfbam::CFBamScopeBuff*>( schema->getTableScope()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table Scope" );
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
				cfbam::CFBamRelationBuff* chk = dynamic_cast<cfbam::CFBamRelationBuff*>( schema->getTableRelation()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredRelationTenantId(),
						Buff->getRequiredRelationId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship Relation to table Relation" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamDelDepBuff*>( schema->getTableScope()->updateScope( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamDelDepBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( existingKeyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			if( subdictDefSchemaIdx->size() <= 0 ) {
				delete subdictDefSchemaIdx;
				dictByDefSchemaIdx->erase( searchDictByDefSchemaIdx );
			}
			subdictDefSchemaIdx = NULL;
		}
		auto searchNewKeyDictByDefSchemaIdx = dictByDefSchemaIdx->find( newKeyDefSchemaIdx );
		if( searchNewKeyDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchNewKeyDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamDelDepByDefSchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamDelDepBuff*>*>::value_type( newKeyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamDelDepBuff*>* subdictDelDepIdx;
		auto searchDictByDelDepIdx = dictByDelDepIdx->find( existingKeyDelDepIdx );
		if( searchDictByDelDepIdx != dictByDelDepIdx->end() ) {
			subdictDelDepIdx = searchDictByDelDepIdx->second;
			auto searchSubDict = subdictDelDepIdx->find( pkey );
			if( searchSubDict != subdictDelDepIdx->end() ) {
				subdictDelDepIdx->erase( searchSubDict );
			}
			if( subdictDelDepIdx->size() <= 0 ) {
				delete subdictDelDepIdx;
				dictByDelDepIdx->erase( searchDictByDelDepIdx );
			}
			subdictDelDepIdx = NULL;
		}
		auto searchNewKeyDictByDelDepIdx = dictByDelDepIdx->find( newKeyDelDepIdx );
		if( searchNewKeyDictByDelDepIdx != dictByDelDepIdx->end() ) {
			subdictDelDepIdx = searchNewKeyDictByDelDepIdx->second;
		}
		else {
			subdictDelDepIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>();
			dictByDelDepIdx->insert( std::map<cfbam::CFBamDelDepByDelDepIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamDelDepBuff*>*>::value_type( newKeyDelDepIdx, subdictDelDepIdx ) );
		}
		subdictDelDepIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamDelDepBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamDelDepBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamDelDepTable::deleteDelDep( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamDelDepBuff* Buff )
	{
		static const std::string S_ProcName( "deleteDelDep" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamDelDepBuff* existing = searchExisting->second;
		cfbam::CFBamDelDepByDefSchemaIdxKey keyDefSchemaIdx;
		if( existing->isOptionalDefSchemaTenantIdNull() ) {
			keyDefSchemaIdx.setOptionalDefSchemaTenantIdNull();
		}
		else {
			keyDefSchemaIdx.setOptionalDefSchemaTenantIdValue( existing->getOptionalDefSchemaTenantIdValue() );
		}
		if( existing->isOptionalDefSchemaIdNull() ) {
			keyDefSchemaIdx.setOptionalDefSchemaIdNull();
		}
		else {
			keyDefSchemaIdx.setOptionalDefSchemaIdValue( existing->getOptionalDefSchemaIdValue() );
		}
		cfbam::CFBamDelDepByDelDepIdxKey keyDelDepIdx;
		keyDelDepIdx.setRequiredRelationTenantId( existing->getRequiredRelationTenantId() );
		keyDelDepIdx.setRequiredRelationId( existing->getRequiredRelationId() );
		// Validate reverse foreign keys

		{
			cfbam::CFBamDelSubDep1Buff* refIdIdx = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( schema->getTableDelSubDep1()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table DelSubDep1 for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamDelSubDep2Buff* refIdIdx = dynamic_cast<cfbam::CFBamDelSubDep2Buff*>( schema->getTableDelSubDep2()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table DelSubDep2 for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamDelSubDep3Buff* refIdIdx = dynamic_cast<cfbam::CFBamDelSubDep3Buff*>( schema->getTableDelSubDep3()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table DelSubDep3 for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamDelTopDepBuff* refIdIdx = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table DelTopDep for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelDepBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamDelDepBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			subdictDefSchemaIdx = NULL;
		}

		auto searchDictByDelDepIdx = dictByDelDepIdx->find( keyDelDepIdx );
		if( searchDictByDelDepIdx != dictByDelDepIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamDelDepBuff*>* subdictDelDepIdx = searchDictByDelDepIdx->second;
			auto searchSubDict = subdictDelDepIdx->find( pkey );
			if( searchSubDict != subdictDelDepIdx->end() ) {
				subdictDelDepIdx->erase( searchSubDict );
			}
			subdictDelDepIdx = NULL;
		}

		schema->getTableScope()->deleteScope( Authorization,
			Buff );
	}

	void CFBamRamDelDepTable::deleteDelDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamDelDepByDefSchemaIdxKey key;
		if( argDefSchemaTenantId == NULL ) {
			key.setOptionalDefSchemaTenantIdNull();
		}
		else {
			key.setOptionalDefSchemaTenantIdValue( *argDefSchemaTenantId );
		}
		if( argDefSchemaId == NULL ) {
			key.setOptionalDefSchemaIdNull();
		}
		else {
			key.setOptionalDefSchemaIdValue( *argDefSchemaId );
		}
		deleteDelDepByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamDelDepTable::deleteDelDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamDelDepByDefSchemaIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteDelDepByDefSchemaIdx" );
		cfbam::CFBamDelDepBuff* cur = NULL;
		cfbam::CFBamDelDepBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalDefSchemaTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalDefSchemaIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamDelDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
				schema->getTableDelDep()->deleteDelDep( Authorization, cur );
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

	void CFBamRamDelDepTable::deleteDelDepByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId )
	{
		cfbam::CFBamDelDepByDelDepIdxKey key;
		key.setRequiredRelationTenantId( argRelationTenantId );
		key.setRequiredRelationId( argRelationId );
		deleteDelDepByDelDepIdx( Authorization, &key );
	}

	void CFBamRamDelDepTable::deleteDelDepByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamDelDepByDelDepIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteDelDepByDelDepIdx" );
		cfbam::CFBamDelDepBuff* cur = NULL;
		cfbam::CFBamDelDepBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamDelDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
				schema->getTableDelDep()->deleteDelDep( Authorization, cur );
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

	void CFBamRamDelDepTable::deleteDelDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteDelDepByIdIdx( Authorization, &key );
	}

	void CFBamRamDelDepTable::deleteDelDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		static const std::string S_ProcName( "deleteDelDepByIdIdx" );
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamDelDepBuff* cur = NULL;
		cfbam::CFBamDelDepBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
				schema->getTableDelDep()->deleteDelDep( Authorization, cur );
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

	void CFBamRamDelDepTable::deleteDelDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteDelDepByTenantIdx( Authorization, &key );
	}

	void CFBamRamDelDepTable::deleteDelDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteDelDepByTenantIdx" );
		cfbam::CFBamDelDepBuff* cur = NULL;
		cfbam::CFBamDelDepBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
				schema->getTableDelDep()->deleteDelDep( Authorization, cur );
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

	void CFBamRamDelDepTable::releasePreparedStatements() {
	}

}
