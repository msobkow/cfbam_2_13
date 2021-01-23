
// Description: C++18 Implementation for an in-memory RAM DbIO for ClearSubDep1.

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

	const std::string CFBamRamClearSubDep1Table::CLASS_NAME( "CFBamRamClearSubDep1Table" );

	CFBamRamClearSubDep1Table::CFBamRamClearSubDep1Table( ICFBamSchema* argSchema )
	: cfbam::ICFBamClearSubDep1Table()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep1Buff*>();
		dictByClearTopDepIdx = new std::map<cfbam::CFBamClearSubDep1ByClearTopDepIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearSubDep1Buff*>*>();
		dictByUNameIdx = new std::map<cfbam::CFBamClearSubDep1ByUNameIdxKey, cfbam::CFBamClearSubDep1Buff*>();
	}

	CFBamRamClearSubDep1Table::~CFBamRamClearSubDep1Table() {
		if( dictByClearTopDepIdx != NULL ) {
			for( auto iterDict = dictByClearTopDepIdx->begin(); iterDict != dictByClearTopDepIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByClearTopDepIdx;
			dictByClearTopDepIdx = NULL;
		}
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfbam::CFBamClearSubDep1Buff* CFBamRamClearSubDep1Table::createClearSubDep1( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamClearSubDep1Buff* Buff )
	{
		static const std::string S_ProcName( "createClearSubDep1" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamClearSubDep1ByClearTopDepIdxKey keyClearTopDepIdx;
		keyClearTopDepIdx.setRequiredClearTopDepTenantId( Buff->getRequiredClearTopDepTenantId() );
		keyClearTopDepIdx.setRequiredClearTopDepId( Buff->getRequiredClearTopDepId() );
		cfbam::CFBamClearSubDep1ByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredClearTopDepTenantId( Buff->getRequiredClearTopDepTenantId() );
		keyUNameIdx.setRequiredClearTopDepId( Buff->getRequiredClearTopDepId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ClearSubDep1UNameIdx " + keyUNameIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		{
			bool allNull = true;
			allNull = false;
			allNull = false;
			if( ! allNull ) {
				cfbam::CFBamClearTopDepBuff* chk = dynamic_cast<cfbam::CFBamClearTopDepBuff*>( schema->getTableClearTopDep()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClearTopDepTenantId(),
						Buff->getRequiredClearTopDepId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ClearTopDep to table ClearTopDep" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamClearSubDep1Buff* buff = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( schema->getTableClearDep()->createClearDep( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep1Buff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep1Buff*>* subdictClearTopDepIdx;
		auto searchDictByClearTopDepIdx = dictByClearTopDepIdx->find( keyClearTopDepIdx );
		if( searchDictByClearTopDepIdx != dictByClearTopDepIdx->end() ) {
			subdictClearTopDepIdx = searchDictByClearTopDepIdx->second;
		}
		else {
			subdictClearTopDepIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep1Buff*>();
			dictByClearTopDepIdx->insert( std::map<cfbam::CFBamClearSubDep1ByClearTopDepIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamClearSubDep1Buff*>*>::value_type( keyClearTopDepIdx, subdictClearTopDepIdx ) );
		}
		subdictClearTopDepIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep1Buff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamClearSubDep1ByUNameIdxKey, cfbam::CFBamClearSubDep1Buff*>::value_type( keyUNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamClearSubDep1Buff* CFBamRamClearSubDep1Table::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamClearSubDep1Buff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamClearSubDep1Buff* CFBamRamClearSubDep1Table::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamClearSubDep1Buff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator end = dictByPKey->end();
		cfbam::CFBamClearSubDep1Buff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::readDerivedByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readDerivedByClearDepIdx" );
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*> buffList = schema->getTableClearDep()->readDerivedByClearDepIdx( Authorization,
			TenantId,
			RelationId );
		cfbam::CFBamClearDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*> buffList = schema->getTableClearDep()->readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		cfbam::CFBamClearDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::readDerivedByClearTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearTopDepTenantId,
			const int64_t ClearTopDepId )
	{
		static const std::string S_ProcName( "readDerivedByClearTopDepIdx" );
		cfbam::CFBamClearSubDep1ByClearTopDepIdxKey key;
		key.setRequiredClearTopDepTenantId( ClearTopDepTenantId );
		key.setRequiredClearTopDepId( ClearTopDepId );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> recVec;
		cfbam::CFBamClearSubDep1Buff* clone;
		auto searchDictByClearTopDepIdx = dictByClearTopDepIdx->find( key );
		if( searchDictByClearTopDepIdx != dictByClearTopDepIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamClearSubDep1Buff*>* subdictClearTopDepIdx = searchDictByClearTopDepIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearSubDep1Buff*>::iterator iter = subdictClearTopDepIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearSubDep1Buff*>::iterator end = subdictClearTopDepIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamClearSubDep1Buff* CFBamRamClearSubDep1Table::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearTopDepTenantId,
			const int64_t ClearTopDepId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamClearSubDep1ByUNameIdxKey key;
		key.setRequiredClearTopDepTenantId( ClearTopDepTenantId );
		key.setRequiredClearTopDepId( ClearTopDepId );
		key.setRequiredName( Name );
		cfbam::CFBamClearSubDep1Buff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamClearSubDep1Buff* CFBamRamClearSubDep1Table::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamClearSubDep1Buff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamClearSubDep1Buff* CFBamRamClearSubDep1Table::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamClearSubDep1Buff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff ) );
	}

	cfbam::CFBamClearSubDep1Buff* CFBamRamClearSubDep1Table::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamClearSubDep1Buff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamClearSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamClearSubDep1Buff* CFBamRamClearSubDep1Table::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamClearSubDep1Buff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamClearSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::readBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readBuffByClearDepIdx" );
		cfbam::CFBamClearSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> buffList = readDerivedByClearDepIdx( Authorization,
			TenantId,
			RelationId );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamClearDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamClearSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamClearDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::readBuffByClearTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearTopDepTenantId,
			const int64_t ClearTopDepId )
	{
		static const std::string S_ProcName( "readBuffByClearTopDepIdx" );
		cfbam::CFBamClearSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> buffList = readDerivedByClearTopDepIdx( Authorization,
			ClearTopDepTenantId,
			ClearTopDepId );
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamClearSubDep1Buff* CFBamRamClearSubDep1Table::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearTopDepTenantId,
			const int64_t ClearTopDepId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamClearSubDep1Buff* buff = readDerivedByUNameIdx( Authorization,
			ClearTopDepTenantId,
			ClearTopDepId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::pageBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByClearDepIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> CFBamRamClearSubDep1Table::pageBuffByClearTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClearTopDepTenantId,
			const int64_t ClearTopDepId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByClearTopDepIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamClearSubDep1Buff* CFBamRamClearSubDep1Table::updateClearSubDep1( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamClearSubDep1Buff* Buff )
	{
		static const std::string S_ProcName( "updateClearSubDep1" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in ClearSubDep1 for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamClearSubDep1Buff* existing = searchExisting->second;

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
		cfbam::CFBamClearSubDep1ByClearTopDepIdxKey existingKeyClearTopDepIdx;
		existingKeyClearTopDepIdx.setRequiredClearTopDepTenantId( existing->getRequiredClearTopDepTenantId() );
		existingKeyClearTopDepIdx.setRequiredClearTopDepId( existing->getRequiredClearTopDepId() );
		cfbam::CFBamClearSubDep1ByClearTopDepIdxKey newKeyClearTopDepIdx;
		newKeyClearTopDepIdx.setRequiredClearTopDepTenantId( Buff->getRequiredClearTopDepTenantId() );
		newKeyClearTopDepIdx.setRequiredClearTopDepId( Buff->getRequiredClearTopDepId() );
		cfbam::CFBamClearSubDep1ByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredClearTopDepTenantId( existing->getRequiredClearTopDepTenantId() );
		existingKeyUNameIdx.setRequiredClearTopDepId( existing->getRequiredClearTopDepId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamClearSubDep1ByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredClearTopDepTenantId( Buff->getRequiredClearTopDepTenantId() );
		newKeyUNameIdx.setRequiredClearTopDepId( Buff->getRequiredClearTopDepId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ClearSubDep1UNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamClearDepBuff* chk = dynamic_cast<cfbam::CFBamClearDepBuff*>( schema->getTableClearDep()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table ClearDep" );
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
				cfbam::CFBamClearTopDepBuff* chk = dynamic_cast<cfbam::CFBamClearTopDepBuff*>( schema->getTableClearTopDep()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClearTopDepTenantId(),
						Buff->getRequiredClearTopDepId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ClearTopDep to table ClearTopDep" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( schema->getTableClearDep()->updateClearDep( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep1Buff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep1Buff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamClearSubDep1Buff*>* subdictClearTopDepIdx;
		auto searchDictByClearTopDepIdx = dictByClearTopDepIdx->find( existingKeyClearTopDepIdx );
		if( searchDictByClearTopDepIdx != dictByClearTopDepIdx->end() ) {
			subdictClearTopDepIdx = searchDictByClearTopDepIdx->second;
			auto searchSubDict = subdictClearTopDepIdx->find( pkey );
			if( searchSubDict != subdictClearTopDepIdx->end() ) {
				subdictClearTopDepIdx->erase( searchSubDict );
			}
			if( subdictClearTopDepIdx->size() <= 0 ) {
				delete subdictClearTopDepIdx;
				dictByClearTopDepIdx->erase( searchDictByClearTopDepIdx );
			}
			subdictClearTopDepIdx = NULL;
		}
		auto searchNewKeyDictByClearTopDepIdx = dictByClearTopDepIdx->find( newKeyClearTopDepIdx );
		if( searchNewKeyDictByClearTopDepIdx != dictByClearTopDepIdx->end() ) {
			subdictClearTopDepIdx = searchNewKeyDictByClearTopDepIdx->second;
		}
		else {
			subdictClearTopDepIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep1Buff*>();
			dictByClearTopDepIdx->insert( std::map<cfbam::CFBamClearSubDep1ByClearTopDepIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamClearSubDep1Buff*>*>::value_type( newKeyClearTopDepIdx, subdictClearTopDepIdx ) );
		}
		subdictClearTopDepIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep1Buff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamClearSubDep1ByUNameIdxKey, cfbam::CFBamClearSubDep1Buff*>::value_type( newKeyUNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamClearSubDep1Buff* buff;
		if( existing->getClassCode() == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamClearSubDep1Buff* Buff )
	{
		static const std::string S_ProcName( "deleteClearSubDep1" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamClearSubDep1Buff* existing = searchExisting->second;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> arrCheckClearDep = schema->getTableClearSubDep2()->readDerivedByClearSubDep1Idx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		if( arrCheckClearDep.size() > 0 ) {
			schema->getTableClearSubDep2()->deleteClearSubDep2ByClearSubDep1Idx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		}
		cfbam::CFBamClearSubDep1ByClearTopDepIdxKey keyClearTopDepIdx;
		keyClearTopDepIdx.setRequiredClearTopDepTenantId( existing->getRequiredClearTopDepTenantId() );
		keyClearTopDepIdx.setRequiredClearTopDepId( existing->getRequiredClearTopDepId() );
		cfbam::CFBamClearSubDep1ByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredClearTopDepTenantId( existing->getRequiredClearTopDepTenantId() );
		keyUNameIdx.setRequiredClearTopDepId( existing->getRequiredClearTopDepId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamClearSubDep1Buff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByClearTopDepIdx = dictByClearTopDepIdx->find( keyClearTopDepIdx );
		if( searchDictByClearTopDepIdx != dictByClearTopDepIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamClearSubDep1Buff*>* subdictClearTopDepIdx = searchDictByClearTopDepIdx->second;
			auto searchSubDict = subdictClearTopDepIdx->find( pkey );
			if( searchSubDict != subdictClearTopDepIdx->end() ) {
				subdictClearTopDepIdx->erase( searchSubDict );
			}
			subdictClearTopDepIdx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		schema->getTableClearDep()->deleteClearDep( Authorization,
			Buff );
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1ByClearTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearTopDepTenantId,
			const int64_t argClearTopDepId )
	{
		cfbam::CFBamClearSubDep1ByClearTopDepIdxKey key;
		key.setRequiredClearTopDepTenantId( argClearTopDepTenantId );
		key.setRequiredClearTopDepId( argClearTopDepId );
		deleteClearSubDep1ByClearTopDepIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1ByClearTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep1Buff* cur = NULL;
		cfbam::CFBamClearSubDep1Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClearTopDepTenantId,
			const int64_t argClearTopDepId,
			const std::string& argName )
	{
		cfbam::CFBamClearSubDep1ByUNameIdxKey key;
		key.setRequiredClearTopDepTenantId( argClearTopDepTenantId );
		key.setRequiredClearTopDepId( argClearTopDepId );
		key.setRequiredName( argName );
		deleteClearSubDep1ByUNameIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamClearSubDep1ByUNameIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep1Buff* cur = NULL;
		cfbam::CFBamClearSubDep1Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId )
	{
		cfbam::CFBamClearDepByClearDepIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredRelationId( argRelationId );
		deleteClearSubDep1ByClearDepIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1ByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamClearDepByClearDepIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep1Buff* cur = NULL;
		cfbam::CFBamClearSubDep1Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamClearDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamClearDepByDefSchemaIdxKey key;
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
		deleteClearSubDep1ByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamClearDepByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep1Buff* cur = NULL;
		cfbam::CFBamClearSubDep1Buff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamClearDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteClearSubDep1ByIdIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamClearSubDep1Buff* cur = NULL;
		cfbam::CFBamClearSubDep1Buff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep1( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteClearSubDep1ByTenantIdx( Authorization, &key );
	}

	void CFBamRamClearSubDep1Table::deleteClearSubDep1ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamClearSubDep1Buff* cur = NULL;
		cfbam::CFBamClearSubDep1Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamClearSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamClearSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableClearSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteClearSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamClearSubDep1Table::releasePreparedStatements() {
	}

}
