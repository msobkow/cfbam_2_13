
// Description: C++18 Implementation for an in-memory RAM DbIO for ServerObjFunc.

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

	const std::string CFBamRamServerObjFuncTable::CLASS_NAME( "CFBamRamServerObjFuncTable" );

	CFBamRamServerObjFuncTable::CFBamRamServerObjFuncTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamServerObjFuncTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerObjFuncBuff*>();
		dictByRetTblIdx = new std::map<cfbam::CFBamServerObjFuncByRetTblIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamServerObjFuncBuff*>*>();
	}

	CFBamRamServerObjFuncTable::~CFBamRamServerObjFuncTable() {
		if( dictByRetTblIdx != NULL ) {
			for( auto iterDict = dictByRetTblIdx->begin(); iterDict != dictByRetTblIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByRetTblIdx;
			dictByRetTblIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfbam::CFBamServerObjFuncBuff* CFBamRamServerObjFuncTable::createServerObjFunc( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamServerObjFuncBuff* Buff )
	{
		static const std::string S_ProcName( "createServerObjFunc" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamServerObjFuncByRetTblIdxKey keyRetTblIdx;
		if( Buff->isOptionalRetTenantIdNull() ) {
			keyRetTblIdx.setOptionalRetTenantIdNull();
		}
		else {
			keyRetTblIdx.setOptionalRetTenantIdValue( Buff->getOptionalRetTenantIdValue() );
		}
		if( Buff->isOptionalRetTableIdNull() ) {
			keyRetTblIdx.setOptionalRetTableIdNull();
		}
		else {
			keyRetTblIdx.setOptionalRetTableIdValue( Buff->getOptionalRetTableIdValue() );
		}
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfbam::CFBamServerObjFuncBuff* buff = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( schema->getTableServerMethod()->createServerMethod( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerObjFuncBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerObjFuncBuff*>* subdictRetTblIdx;
		auto searchDictByRetTblIdx = dictByRetTblIdx->find( keyRetTblIdx );
		if( searchDictByRetTblIdx != dictByRetTblIdx->end() ) {
			subdictRetTblIdx = searchDictByRetTblIdx->second;
		}
		else {
			subdictRetTblIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerObjFuncBuff*>();
			dictByRetTblIdx->insert( std::map<cfbam::CFBamServerObjFuncByRetTblIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamServerObjFuncBuff*>*>::value_type( keyRetTblIdx, subdictRetTblIdx ) );
		}
		subdictRetTblIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerObjFuncBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamServerObjFuncBuff* CFBamRamServerObjFuncTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamServerObjFuncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamServerObjFuncBuff* CFBamRamServerObjFuncTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamServerObjFuncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamServerObjFuncBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	cfbam::CFBamServerObjFuncBuff* CFBamRamServerObjFuncTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamServerMethodBuff* buff = schema->getTableServerMethod()->readDerivedByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->implementsClassCode( cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) ) {
			return( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::readDerivedByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readDerivedByMethTableIdx" );
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> buffList = schema->getTableServerMethod()->readDerivedByMethTableIdx( Authorization,
			TenantId,
			TableId );
		cfbam::CFBamServerMethodBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*> buffList = schema->getTableServerMethod()->readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		cfbam::CFBamServerMethodBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerMethodBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::readDerivedByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RetTenantId,
			const int64_t* RetTableId )
	{
		static const std::string S_ProcName( "readDerivedByRetTblIdx" );
		cfbam::CFBamServerObjFuncByRetTblIdxKey key;
		if( RetTenantId == NULL ) {
			key.setOptionalRetTenantIdNull();
		}
		else {
			key.setOptionalRetTenantIdValue( *RetTenantId );
		}
		if( RetTableId == NULL ) {
			key.setOptionalRetTableIdNull();
		}
		else {
			key.setOptionalRetTableIdValue( *RetTableId );
		}
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> recVec;
		cfbam::CFBamServerObjFuncBuff* clone;
		auto searchDictByRetTblIdx = dictByRetTblIdx->find( key );
		if( searchDictByRetTblIdx != dictByRetTblIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamServerObjFuncBuff*>* subdictRetTblIdx = searchDictByRetTblIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamServerObjFuncBuff*>::iterator iter = subdictRetTblIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamServerObjFuncBuff*>::iterator end = subdictRetTblIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamServerObjFuncBuff* CFBamRamServerObjFuncTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamServerObjFuncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamServerObjFuncBuff* CFBamRamServerObjFuncTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamServerObjFuncBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff ) );
	}

	cfbam::CFBamServerObjFuncBuff* CFBamRamServerObjFuncTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamServerObjFuncBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamServerObjFuncBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamServerObjFuncBuff* CFBamRamServerObjFuncTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamServerObjFuncBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamServerObjFuncBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamServerObjFuncBuff* CFBamRamServerObjFuncTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamServerObjFuncBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::readBuffByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readBuffByMethTableIdx" );
		cfbam::CFBamServerObjFuncBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> buffList = readDerivedByMethTableIdx( Authorization,
			TenantId,
			TableId );
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamServerMethodBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamServerObjFuncBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamServerMethodBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::readBuffByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RetTenantId,
			const int64_t* RetTableId )
	{
		static const std::string S_ProcName( "readBuffByRetTblIdx" );
		cfbam::CFBamServerObjFuncBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> buffList = readDerivedByRetTblIdx( Authorization,
			RetTenantId,
			RetTableId );
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::pageBuffByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByMethTableIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> CFBamRamServerObjFuncTable::pageBuffByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RetTenantId,
			const int64_t* RetTableId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByRetTblIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamServerObjFuncBuff* CFBamRamServerObjFuncTable::updateServerObjFunc( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamServerObjFuncBuff* Buff )
	{
		static const std::string S_ProcName( "updateServerObjFunc" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in ServerObjFunc for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamServerObjFuncBuff* existing = searchExisting->second;

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
		cfbam::CFBamServerObjFuncByRetTblIdxKey existingKeyRetTblIdx;
		if( existing->isOptionalRetTenantIdNull() ) {
			existingKeyRetTblIdx.setOptionalRetTenantIdNull();
		}
		else {
			existingKeyRetTblIdx.setOptionalRetTenantIdValue( existing->getOptionalRetTenantIdValue() );
		}
		if( existing->isOptionalRetTableIdNull() ) {
			existingKeyRetTblIdx.setOptionalRetTableIdNull();
		}
		else {
			existingKeyRetTblIdx.setOptionalRetTableIdValue( existing->getOptionalRetTableIdValue() );
		}
		cfbam::CFBamServerObjFuncByRetTblIdxKey newKeyRetTblIdx;
		if( Buff->isOptionalRetTenantIdNull() ) {
			newKeyRetTblIdx.setOptionalRetTenantIdNull();
		}
		else {
			newKeyRetTblIdx.setOptionalRetTenantIdValue( Buff->getOptionalRetTenantIdValue() );
		}
		if( Buff->isOptionalRetTableIdNull() ) {
			newKeyRetTblIdx.setOptionalRetTableIdNull();
		}
		else {
			newKeyRetTblIdx.setOptionalRetTableIdValue( Buff->getOptionalRetTableIdValue() );
		}
		// Check unique indexes

		// Validate foreign keys

		{
			bool allNull = true;

			if( allNull ) {
				cfbam::CFBamServerMethodBuff* chk = dynamic_cast<cfbam::CFBamServerMethodBuff*>( schema->getTableServerMethod()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table ServerMethod" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( schema->getTableServerMethod()->updateServerMethod( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerObjFuncBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerObjFuncBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamServerObjFuncBuff*>* subdictRetTblIdx;
		auto searchDictByRetTblIdx = dictByRetTblIdx->find( existingKeyRetTblIdx );
		if( searchDictByRetTblIdx != dictByRetTblIdx->end() ) {
			subdictRetTblIdx = searchDictByRetTblIdx->second;
			auto searchSubDict = subdictRetTblIdx->find( pkey );
			if( searchSubDict != subdictRetTblIdx->end() ) {
				subdictRetTblIdx->erase( searchSubDict );
			}
			if( subdictRetTblIdx->size() <= 0 ) {
				delete subdictRetTblIdx;
				dictByRetTblIdx->erase( searchDictByRetTblIdx );
			}
			subdictRetTblIdx = NULL;
		}
		auto searchNewKeyDictByRetTblIdx = dictByRetTblIdx->find( newKeyRetTblIdx );
		if( searchNewKeyDictByRetTblIdx != dictByRetTblIdx->end() ) {
			subdictRetTblIdx = searchNewKeyDictByRetTblIdx->second;
		}
		else {
			subdictRetTblIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerObjFuncBuff*>();
			dictByRetTblIdx->insert( std::map<cfbam::CFBamServerObjFuncByRetTblIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamServerObjFuncBuff*>*>::value_type( newKeyRetTblIdx, subdictRetTblIdx ) );
		}
		subdictRetTblIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerObjFuncBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamServerObjFuncBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFunc( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamServerObjFuncBuff* Buff )
	{
		static const std::string S_ProcName( "deleteServerObjFunc" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamServerObjFuncBuff* existing = searchExisting->second;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> arrCheckParams = schema->getTableParam()->readDerivedByServerMethodIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		if( arrCheckParams.size() > 0 ) {
			schema->getTableParam()->deleteParamByServerMethodIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		}
		cfbam::CFBamServerObjFuncByRetTblIdxKey keyRetTblIdx;
		if( existing->isOptionalRetTenantIdNull() ) {
			keyRetTblIdx.setOptionalRetTenantIdNull();
		}
		else {
			keyRetTblIdx.setOptionalRetTenantIdValue( existing->getOptionalRetTenantIdValue() );
		}
		if( existing->isOptionalRetTableIdNull() ) {
			keyRetTblIdx.setOptionalRetTableIdNull();
		}
		else {
			keyRetTblIdx.setOptionalRetTableIdValue( existing->getOptionalRetTableIdValue() );
		}
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamServerObjFuncBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByRetTblIdx = dictByRetTblIdx->find( keyRetTblIdx );
		if( searchDictByRetTblIdx != dictByRetTblIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamServerObjFuncBuff*>* subdictRetTblIdx = searchDictByRetTblIdx->second;
			auto searchSubDict = subdictRetTblIdx->find( pkey );
			if( searchSubDict != subdictRetTblIdx->end() ) {
				subdictRetTblIdx->erase( searchSubDict );
			}
			subdictRetTblIdx = NULL;
		}

		schema->getTableServerMethod()->deleteServerMethod( Authorization,
			Buff );
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFuncByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argRetTenantId,
			const int64_t* argRetTableId )
	{
		cfbam::CFBamServerObjFuncByRetTblIdxKey key;
		if( argRetTenantId == NULL ) {
			key.setOptionalRetTenantIdNull();
		}
		else {
			key.setOptionalRetTenantIdValue( *argRetTenantId );
		}
		if( argRetTableId == NULL ) {
			key.setOptionalRetTableIdNull();
		}
		else {
			key.setOptionalRetTableIdValue( *argRetTableId );
		}
		deleteServerObjFuncByRetTblIdx( Authorization, &key );
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFuncByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamServerObjFuncByRetTblIdxKey* argKey )
	{
		cfbam::CFBamServerObjFuncBuff* cur = NULL;
		cfbam::CFBamServerObjFuncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalRetTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalRetTableIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableServerObjFunc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteServerObjFunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFuncByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId,
			const std::string& argName )
	{
		cfbam::CFBamServerMethodByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTableId( argTableId );
		key.setRequiredName( argName );
		deleteServerObjFuncByUNameIdx( Authorization, &key );
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFuncByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamServerMethodByUNameIdxKey* argKey )
	{
		cfbam::CFBamServerObjFuncBuff* cur = NULL;
		cfbam::CFBamServerObjFuncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableServerObjFunc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteServerObjFunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFuncByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId )
	{
		cfbam::CFBamServerMethodByMethTableIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTableId( argTableId );
		deleteServerObjFuncByMethTableIdx( Authorization, &key );
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFuncByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamServerMethodByMethTableIdxKey* argKey )
	{
		cfbam::CFBamServerObjFuncBuff* cur = NULL;
		cfbam::CFBamServerObjFuncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableServerObjFunc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteServerObjFunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFuncByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamServerMethodByDefSchemaIdxKey key;
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
		deleteServerObjFuncByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFuncByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamServerMethodByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamServerObjFuncBuff* cur = NULL;
		cfbam::CFBamServerObjFuncBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamServerMethodBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableServerObjFunc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteServerObjFunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFuncByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteServerObjFuncByIdIdx( Authorization, &key );
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFuncByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamServerObjFuncBuff* cur = NULL;
		cfbam::CFBamServerObjFuncBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableServerObjFunc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteServerObjFunc( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFuncByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteServerObjFuncByTenantIdx( Authorization, &key );
	}

	void CFBamRamServerObjFuncTable::deleteServerObjFuncByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamServerObjFuncBuff* cur = NULL;
		cfbam::CFBamServerObjFuncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerObjFuncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamServerObjFuncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamServerObjFuncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableServerObjFunc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteServerObjFunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamServerObjFuncTable::releasePreparedStatements() {
	}

}
