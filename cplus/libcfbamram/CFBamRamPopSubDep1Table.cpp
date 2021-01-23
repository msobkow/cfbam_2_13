
// Description: C++18 Implementation for an in-memory RAM DbIO for PopSubDep1.

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

	const std::string CFBamRamPopSubDep1Table::CLASS_NAME( "CFBamRamPopSubDep1Table" );

	CFBamRamPopSubDep1Table::CFBamRamPopSubDep1Table( ICFBamSchema* argSchema )
	: cfbam::ICFBamPopSubDep1Table()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep1Buff*>();
		dictByPopTopDepIdx = new std::map<cfbam::CFBamPopSubDep1ByPopTopDepIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopSubDep1Buff*>*>();
		dictByUNameIdx = new std::map<cfbam::CFBamPopSubDep1ByUNameIdxKey, cfbam::CFBamPopSubDep1Buff*>();
	}

	CFBamRamPopSubDep1Table::~CFBamRamPopSubDep1Table() {
		if( dictByPopTopDepIdx != NULL ) {
			for( auto iterDict = dictByPopTopDepIdx->begin(); iterDict != dictByPopTopDepIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByPopTopDepIdx;
			dictByPopTopDepIdx = NULL;
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

	cfbam::CFBamPopSubDep1Buff* CFBamRamPopSubDep1Table::createPopSubDep1( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamPopSubDep1Buff* Buff )
	{
		static const std::string S_ProcName( "createPopSubDep1" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamPopSubDep1ByPopTopDepIdxKey keyPopTopDepIdx;
		keyPopTopDepIdx.setRequiredPopTopDepTenantId( Buff->getRequiredPopTopDepTenantId() );
		keyPopTopDepIdx.setRequiredPopTopDepId( Buff->getRequiredPopTopDepId() );
		cfbam::CFBamPopSubDep1ByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredPopTopDepTenantId( Buff->getRequiredPopTopDepTenantId() );
		keyUNameIdx.setRequiredPopTopDepId( Buff->getRequiredPopTopDepId() );
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
			std::string Msg( "Duplicate key detected for index PopSubDep1UNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamPopTopDepBuff* chk = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( schema->getTablePopTopDep()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredPopTopDepTenantId(),
						Buff->getRequiredPopTopDepId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship PopTopDep to table PopTopDep" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamPopSubDep1Buff* buff = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( schema->getTablePopDep()->createPopDep( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep1Buff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep1Buff*>* subdictPopTopDepIdx;
		auto searchDictByPopTopDepIdx = dictByPopTopDepIdx->find( keyPopTopDepIdx );
		if( searchDictByPopTopDepIdx != dictByPopTopDepIdx->end() ) {
			subdictPopTopDepIdx = searchDictByPopTopDepIdx->second;
		}
		else {
			subdictPopTopDepIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep1Buff*>();
			dictByPopTopDepIdx->insert( std::map<cfbam::CFBamPopSubDep1ByPopTopDepIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamPopSubDep1Buff*>*>::value_type( keyPopTopDepIdx, subdictPopTopDepIdx ) );
		}
		subdictPopTopDepIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep1Buff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamPopSubDep1ByUNameIdxKey, cfbam::CFBamPopSubDep1Buff*>::value_type( keyUNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamPopSubDep1Buff* CFBamRamPopSubDep1Table::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamPopSubDep1Buff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamPopSubDep1Buff* CFBamRamPopSubDep1Table::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamPopSubDep1Buff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator end = dictByPKey->end();
		cfbam::CFBamPopSubDep1Buff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readDerivedByRelationIdx" );
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> buffList = schema->getTablePopDep()->readDerivedByRelationIdx( Authorization,
			RelationTenantId,
			RelationId );
		cfbam::CFBamPopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> buffList = schema->getTablePopDep()->readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		cfbam::CFBamPopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::readDerivedByPopTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopTopDepTenantId,
			const int64_t PopTopDepId )
	{
		static const std::string S_ProcName( "readDerivedByPopTopDepIdx" );
		cfbam::CFBamPopSubDep1ByPopTopDepIdxKey key;
		key.setRequiredPopTopDepTenantId( PopTopDepTenantId );
		key.setRequiredPopTopDepId( PopTopDepId );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> recVec;
		cfbam::CFBamPopSubDep1Buff* clone;
		auto searchDictByPopTopDepIdx = dictByPopTopDepIdx->find( key );
		if( searchDictByPopTopDepIdx != dictByPopTopDepIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamPopSubDep1Buff*>* subdictPopTopDepIdx = searchDictByPopTopDepIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopSubDep1Buff*>::iterator iter = subdictPopTopDepIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopSubDep1Buff*>::iterator end = subdictPopTopDepIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamPopSubDep1Buff* CFBamRamPopSubDep1Table::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopTopDepTenantId,
			const int64_t PopTopDepId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamPopSubDep1ByUNameIdxKey key;
		key.setRequiredPopTopDepTenantId( PopTopDepTenantId );
		key.setRequiredPopTopDepId( PopTopDepId );
		key.setRequiredName( Name );
		cfbam::CFBamPopSubDep1Buff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamPopSubDep1Buff* CFBamRamPopSubDep1Table::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamPopSubDep1Buff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamPopSubDep1Buff* CFBamRamPopSubDep1Table::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamPopSubDep1Buff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff ) );
	}

	cfbam::CFBamPopSubDep1Buff* CFBamRamPopSubDep1Table::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamPopSubDep1Buff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamPopSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamPopSubDep1Buff* CFBamRamPopSubDep1Table::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamPopSubDep1Buff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamPopSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readBuffByRelationIdx" );
		cfbam::CFBamPopSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> buffList = readDerivedByRelationIdx( Authorization,
			RelationTenantId,
			RelationId );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamPopDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamPopSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamPopDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::readBuffByPopTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopTopDepTenantId,
			const int64_t PopTopDepId )
	{
		static const std::string S_ProcName( "readBuffByPopTopDepIdx" );
		cfbam::CFBamPopSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> buffList = readDerivedByPopTopDepIdx( Authorization,
			PopTopDepTenantId,
			PopTopDepId );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamPopSubDep1Buff* CFBamRamPopSubDep1Table::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopTopDepTenantId,
			const int64_t PopTopDepId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamPopSubDep1Buff* buff = readDerivedByUNameIdx( Authorization,
			PopTopDepTenantId,
			PopTopDepId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::pageBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByRelationIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> CFBamRamPopSubDep1Table::pageBuffByPopTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopTopDepTenantId,
			const int64_t PopTopDepId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByPopTopDepIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamPopSubDep1Buff* CFBamRamPopSubDep1Table::updatePopSubDep1( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamPopSubDep1Buff* Buff )
	{
		static const std::string S_ProcName( "updatePopSubDep1" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in PopSubDep1 for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamPopSubDep1Buff* existing = searchExisting->second;

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
		cfbam::CFBamPopSubDep1ByPopTopDepIdxKey existingKeyPopTopDepIdx;
		existingKeyPopTopDepIdx.setRequiredPopTopDepTenantId( existing->getRequiredPopTopDepTenantId() );
		existingKeyPopTopDepIdx.setRequiredPopTopDepId( existing->getRequiredPopTopDepId() );
		cfbam::CFBamPopSubDep1ByPopTopDepIdxKey newKeyPopTopDepIdx;
		newKeyPopTopDepIdx.setRequiredPopTopDepTenantId( Buff->getRequiredPopTopDepTenantId() );
		newKeyPopTopDepIdx.setRequiredPopTopDepId( Buff->getRequiredPopTopDepId() );
		cfbam::CFBamPopSubDep1ByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredPopTopDepTenantId( existing->getRequiredPopTopDepTenantId() );
		existingKeyUNameIdx.setRequiredPopTopDepId( existing->getRequiredPopTopDepId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamPopSubDep1ByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredPopTopDepTenantId( Buff->getRequiredPopTopDepTenantId() );
		newKeyUNameIdx.setRequiredPopTopDepId( Buff->getRequiredPopTopDepId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index PopSubDep1UNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamPopDepBuff* chk = dynamic_cast<cfbam::CFBamPopDepBuff*>( schema->getTablePopDep()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table PopDep" );
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
				cfbam::CFBamPopTopDepBuff* chk = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( schema->getTablePopTopDep()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredPopTopDepTenantId(),
						Buff->getRequiredPopTopDepId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship PopTopDep to table PopTopDep" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( schema->getTablePopDep()->updatePopDep( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep1Buff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep1Buff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamPopSubDep1Buff*>* subdictPopTopDepIdx;
		auto searchDictByPopTopDepIdx = dictByPopTopDepIdx->find( existingKeyPopTopDepIdx );
		if( searchDictByPopTopDepIdx != dictByPopTopDepIdx->end() ) {
			subdictPopTopDepIdx = searchDictByPopTopDepIdx->second;
			auto searchSubDict = subdictPopTopDepIdx->find( pkey );
			if( searchSubDict != subdictPopTopDepIdx->end() ) {
				subdictPopTopDepIdx->erase( searchSubDict );
			}
			if( subdictPopTopDepIdx->size() <= 0 ) {
				delete subdictPopTopDepIdx;
				dictByPopTopDepIdx->erase( searchDictByPopTopDepIdx );
			}
			subdictPopTopDepIdx = NULL;
		}
		auto searchNewKeyDictByPopTopDepIdx = dictByPopTopDepIdx->find( newKeyPopTopDepIdx );
		if( searchNewKeyDictByPopTopDepIdx != dictByPopTopDepIdx->end() ) {
			subdictPopTopDepIdx = searchNewKeyDictByPopTopDepIdx->second;
		}
		else {
			subdictPopTopDepIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep1Buff*>();
			dictByPopTopDepIdx->insert( std::map<cfbam::CFBamPopSubDep1ByPopTopDepIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamPopSubDep1Buff*>*>::value_type( newKeyPopTopDepIdx, subdictPopTopDepIdx ) );
		}
		subdictPopTopDepIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep1Buff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamPopSubDep1ByUNameIdxKey, cfbam::CFBamPopSubDep1Buff*>::value_type( newKeyUNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamPopSubDep1Buff* buff;
		if( existing->getClassCode() == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamPopSubDep1Buff* Buff )
	{
		static const std::string S_ProcName( "deletePopSubDep1" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamPopSubDep1Buff* existing = searchExisting->second;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep2Buff*> arrCheckPopDep = schema->getTablePopSubDep2()->readDerivedByPopSubDep1Idx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		if( arrCheckPopDep.size() > 0 ) {
			schema->getTablePopSubDep2()->deletePopSubDep2ByPopSubDep1Idx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		}
		cfbam::CFBamPopSubDep1ByPopTopDepIdxKey keyPopTopDepIdx;
		keyPopTopDepIdx.setRequiredPopTopDepTenantId( existing->getRequiredPopTopDepTenantId() );
		keyPopTopDepIdx.setRequiredPopTopDepId( existing->getRequiredPopTopDepId() );
		cfbam::CFBamPopSubDep1ByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredPopTopDepTenantId( existing->getRequiredPopTopDepTenantId() );
		keyUNameIdx.setRequiredPopTopDepId( existing->getRequiredPopTopDepId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep1Buff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByPopTopDepIdx = dictByPopTopDepIdx->find( keyPopTopDepIdx );
		if( searchDictByPopTopDepIdx != dictByPopTopDepIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamPopSubDep1Buff*>* subdictPopTopDepIdx = searchDictByPopTopDepIdx->second;
			auto searchSubDict = subdictPopTopDepIdx->find( pkey );
			if( searchSubDict != subdictPopTopDepIdx->end() ) {
				subdictPopTopDepIdx->erase( searchSubDict );
			}
			subdictPopTopDepIdx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		schema->getTablePopDep()->deletePopDep( Authorization,
			Buff );
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1ByPopTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPopTopDepTenantId,
			const int64_t argPopTopDepId )
	{
		cfbam::CFBamPopSubDep1ByPopTopDepIdxKey key;
		key.setRequiredPopTopDepTenantId( argPopTopDepTenantId );
		key.setRequiredPopTopDepId( argPopTopDepId );
		deletePopSubDep1ByPopTopDepIdx( Authorization, &key );
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1ByPopTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamPopSubDep1ByPopTopDepIdxKey* argKey )
	{
		cfbam::CFBamPopSubDep1Buff* cur = NULL;
		cfbam::CFBamPopSubDep1Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPopTopDepTenantId,
			const int64_t argPopTopDepId,
			const std::string& argName )
	{
		cfbam::CFBamPopSubDep1ByUNameIdxKey key;
		key.setRequiredPopTopDepTenantId( argPopTopDepTenantId );
		key.setRequiredPopTopDepId( argPopTopDepId );
		key.setRequiredName( argName );
		deletePopSubDep1ByUNameIdx( Authorization, &key );
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamPopSubDep1ByUNameIdxKey* argKey )
	{
		cfbam::CFBamPopSubDep1Buff* cur = NULL;
		cfbam::CFBamPopSubDep1Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1ByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId )
	{
		cfbam::CFBamPopDepByRelationIdxKey key;
		key.setRequiredRelationTenantId( argRelationTenantId );
		key.setRequiredRelationId( argRelationId );
		deletePopSubDep1ByRelationIdx( Authorization, &key );
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1ByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamPopDepByRelationIdxKey* argKey )
	{
		cfbam::CFBamPopSubDep1Buff* cur = NULL;
		cfbam::CFBamPopSubDep1Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamPopDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamPopDepByDefSchemaIdxKey key;
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
		deletePopSubDep1ByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamPopDepByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamPopSubDep1Buff* cur = NULL;
		cfbam::CFBamPopSubDep1Buff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamPopDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deletePopSubDep1ByIdIdx( Authorization, &key );
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamPopSubDep1Buff* cur = NULL;
		cfbam::CFBamPopSubDep1Buff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopSubDep1( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deletePopSubDep1ByTenantIdx( Authorization, &key );
	}

	void CFBamRamPopSubDep1Table::deletePopSubDep1ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamPopSubDep1Buff* cur = NULL;
		cfbam::CFBamPopSubDep1Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopSubDep1Table::releasePreparedStatements() {
	}

}
