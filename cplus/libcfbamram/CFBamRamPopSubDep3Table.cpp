
// Description: C++18 Implementation for an in-memory RAM DbIO for PopSubDep3.

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

	const std::string CFBamRamPopSubDep3Table::CLASS_NAME( "CFBamRamPopSubDep3Table" );

	CFBamRamPopSubDep3Table::CFBamRamPopSubDep3Table( ICFBamSchema* argSchema )
	: cfbam::ICFBamPopSubDep3Table()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep3Buff*>();
		dictByPopSubDep2Idx = new std::map<cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopSubDep3Buff*>*>();
		dictByUNameIdx = new std::map<cfbam::CFBamPopSubDep3ByUNameIdxKey, cfbam::CFBamPopSubDep3Buff*>();
	}

	CFBamRamPopSubDep3Table::~CFBamRamPopSubDep3Table() {
		if( dictByPopSubDep2Idx != NULL ) {
			for( auto iterDict = dictByPopSubDep2Idx->begin(); iterDict != dictByPopSubDep2Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByPopSubDep2Idx;
			dictByPopSubDep2Idx = NULL;
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

	cfbam::CFBamPopSubDep3Buff* CFBamRamPopSubDep3Table::createPopSubDep3( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamPopSubDep3Buff* Buff )
	{
		static const std::string S_ProcName( "createPopSubDep3" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey keyPopSubDep2Idx;
		keyPopSubDep2Idx.setRequiredPopSubDep2TenantId( Buff->getRequiredPopSubDep2TenantId() );
		keyPopSubDep2Idx.setRequiredPopSubDep2Id( Buff->getRequiredPopSubDep2Id() );
		cfbam::CFBamPopSubDep3ByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredPopSubDep2TenantId( Buff->getRequiredPopSubDep2TenantId() );
		keyUNameIdx.setRequiredPopSubDep2Id( Buff->getRequiredPopSubDep2Id() );
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
			std::string Msg( "Duplicate key detected for index PopSubDep3UNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamPopSubDep2Buff* chk = dynamic_cast<cfbam::CFBamPopSubDep2Buff*>( schema->getTablePopSubDep2()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredPopSubDep2TenantId(),
						Buff->getRequiredPopSubDep2Id() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship PopSubDep2 to table PopSubDep2" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamPopSubDep3Buff* buff = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( schema->getTablePopDep()->createPopDep( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep3Buff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep3Buff*>* subdictPopSubDep2Idx;
		auto searchDictByPopSubDep2Idx = dictByPopSubDep2Idx->find( keyPopSubDep2Idx );
		if( searchDictByPopSubDep2Idx != dictByPopSubDep2Idx->end() ) {
			subdictPopSubDep2Idx = searchDictByPopSubDep2Idx->second;
		}
		else {
			subdictPopSubDep2Idx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep3Buff*>();
			dictByPopSubDep2Idx->insert( std::map<cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamPopSubDep3Buff*>*>::value_type( keyPopSubDep2Idx, subdictPopSubDep2Idx ) );
		}
		subdictPopSubDep2Idx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep3Buff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamPopSubDep3ByUNameIdxKey, cfbam::CFBamPopSubDep3Buff*>::value_type( keyUNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamPopSubDep3Buff* CFBamRamPopSubDep3Table::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamPopSubDep3Buff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamPopSubDep3Buff* CFBamRamPopSubDep3Table::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamPopSubDep3Buff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator end = dictByPKey->end();
		cfbam::CFBamPopSubDep3Buff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readDerivedByRelationIdx" );
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> buffList = schema->getTablePopDep()->readDerivedByRelationIdx( Authorization,
			RelationTenantId,
			RelationId );
		cfbam::CFBamPopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> buffList = schema->getTablePopDep()->readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		cfbam::CFBamPopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::readDerivedByPopSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep2TenantId,
			const int64_t PopSubDep2Id )
	{
		static const std::string S_ProcName( "readDerivedByPopSubDep2Idx" );
		cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey key;
		key.setRequiredPopSubDep2TenantId( PopSubDep2TenantId );
		key.setRequiredPopSubDep2Id( PopSubDep2Id );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> recVec;
		cfbam::CFBamPopSubDep3Buff* clone;
		auto searchDictByPopSubDep2Idx = dictByPopSubDep2Idx->find( key );
		if( searchDictByPopSubDep2Idx != dictByPopSubDep2Idx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamPopSubDep3Buff*>* subdictPopSubDep2Idx = searchDictByPopSubDep2Idx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopSubDep3Buff*>::iterator iter = subdictPopSubDep2Idx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopSubDep3Buff*>::iterator end = subdictPopSubDep2Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamPopSubDep3Buff* CFBamRamPopSubDep3Table::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep2TenantId,
			const int64_t PopSubDep2Id,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamPopSubDep3ByUNameIdxKey key;
		key.setRequiredPopSubDep2TenantId( PopSubDep2TenantId );
		key.setRequiredPopSubDep2Id( PopSubDep2Id );
		key.setRequiredName( Name );
		cfbam::CFBamPopSubDep3Buff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamPopSubDep3Buff* CFBamRamPopSubDep3Table::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamPopSubDep3Buff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamPopSubDep3Buff* CFBamRamPopSubDep3Table::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamPopSubDep3Buff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff ) );
	}

	cfbam::CFBamPopSubDep3Buff* CFBamRamPopSubDep3Table::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamPopSubDep3Buff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamPopSubDep3Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamPopSubDep3Buff* CFBamRamPopSubDep3Table::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamPopSubDep3Buff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamPopSubDep3Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readBuffByRelationIdx" );
		cfbam::CFBamPopSubDep3Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> buffList = readDerivedByRelationIdx( Authorization,
			RelationTenantId,
			RelationId );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamPopDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamPopSubDep3Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamPopDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::readBuffByPopSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep2TenantId,
			const int64_t PopSubDep2Id )
	{
		static const std::string S_ProcName( "readBuffByPopSubDep2Idx" );
		cfbam::CFBamPopSubDep3Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> buffList = readDerivedByPopSubDep2Idx( Authorization,
			PopSubDep2TenantId,
			PopSubDep2Id );
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamPopSubDep3Buff* CFBamRamPopSubDep3Table::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep2TenantId,
			const int64_t PopSubDep2Id,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamPopSubDep3Buff* buff = readDerivedByUNameIdx( Authorization,
			PopSubDep2TenantId,
			PopSubDep2Id,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::pageBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByRelationIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> CFBamRamPopSubDep3Table::pageBuffByPopSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PopSubDep2TenantId,
			const int64_t PopSubDep2Id,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByPopSubDep2Idx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamPopSubDep3Buff* CFBamRamPopSubDep3Table::updatePopSubDep3( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamPopSubDep3Buff* Buff )
	{
		static const std::string S_ProcName( "updatePopSubDep3" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in PopSubDep3 for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamPopSubDep3Buff* existing = searchExisting->second;

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
		cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey existingKeyPopSubDep2Idx;
		existingKeyPopSubDep2Idx.setRequiredPopSubDep2TenantId( existing->getRequiredPopSubDep2TenantId() );
		existingKeyPopSubDep2Idx.setRequiredPopSubDep2Id( existing->getRequiredPopSubDep2Id() );
		cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey newKeyPopSubDep2Idx;
		newKeyPopSubDep2Idx.setRequiredPopSubDep2TenantId( Buff->getRequiredPopSubDep2TenantId() );
		newKeyPopSubDep2Idx.setRequiredPopSubDep2Id( Buff->getRequiredPopSubDep2Id() );
		cfbam::CFBamPopSubDep3ByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredPopSubDep2TenantId( existing->getRequiredPopSubDep2TenantId() );
		existingKeyUNameIdx.setRequiredPopSubDep2Id( existing->getRequiredPopSubDep2Id() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamPopSubDep3ByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredPopSubDep2TenantId( Buff->getRequiredPopSubDep2TenantId() );
		newKeyUNameIdx.setRequiredPopSubDep2Id( Buff->getRequiredPopSubDep2Id() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index PopSubDep3UNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamPopSubDep2Buff* chk = dynamic_cast<cfbam::CFBamPopSubDep2Buff*>( schema->getTablePopSubDep2()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredPopSubDep2TenantId(),
						Buff->getRequiredPopSubDep2Id() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship PopSubDep2 to table PopSubDep2" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( schema->getTablePopDep()->updatePopDep( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep3Buff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep3Buff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamPopSubDep3Buff*>* subdictPopSubDep2Idx;
		auto searchDictByPopSubDep2Idx = dictByPopSubDep2Idx->find( existingKeyPopSubDep2Idx );
		if( searchDictByPopSubDep2Idx != dictByPopSubDep2Idx->end() ) {
			subdictPopSubDep2Idx = searchDictByPopSubDep2Idx->second;
			auto searchSubDict = subdictPopSubDep2Idx->find( pkey );
			if( searchSubDict != subdictPopSubDep2Idx->end() ) {
				subdictPopSubDep2Idx->erase( searchSubDict );
			}
			if( subdictPopSubDep2Idx->size() <= 0 ) {
				delete subdictPopSubDep2Idx;
				dictByPopSubDep2Idx->erase( searchDictByPopSubDep2Idx );
			}
			subdictPopSubDep2Idx = NULL;
		}
		auto searchNewKeyDictByPopSubDep2Idx = dictByPopSubDep2Idx->find( newKeyPopSubDep2Idx );
		if( searchNewKeyDictByPopSubDep2Idx != dictByPopSubDep2Idx->end() ) {
			subdictPopSubDep2Idx = searchNewKeyDictByPopSubDep2Idx->second;
		}
		else {
			subdictPopSubDep2Idx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep3Buff*>();
			dictByPopSubDep2Idx->insert( std::map<cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamPopSubDep3Buff*>*>::value_type( newKeyPopSubDep2Idx, subdictPopSubDep2Idx ) );
		}
		subdictPopSubDep2Idx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep3Buff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamPopSubDep3ByUNameIdxKey, cfbam::CFBamPopSubDep3Buff*>::value_type( newKeyUNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamPopSubDep3Buff* buff;
		if( existing->getClassCode() == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamPopSubDep3Buff* Buff )
	{
		static const std::string S_ProcName( "deletePopSubDep3" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamPopSubDep3Buff* existing = searchExisting->second;
		cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey keyPopSubDep2Idx;
		keyPopSubDep2Idx.setRequiredPopSubDep2TenantId( existing->getRequiredPopSubDep2TenantId() );
		keyPopSubDep2Idx.setRequiredPopSubDep2Id( existing->getRequiredPopSubDep2Id() );
		cfbam::CFBamPopSubDep3ByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredPopSubDep2TenantId( existing->getRequiredPopSubDep2TenantId() );
		keyUNameIdx.setRequiredPopSubDep2Id( existing->getRequiredPopSubDep2Id() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopSubDep3Buff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByPopSubDep2Idx = dictByPopSubDep2Idx->find( keyPopSubDep2Idx );
		if( searchDictByPopSubDep2Idx != dictByPopSubDep2Idx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamPopSubDep3Buff*>* subdictPopSubDep2Idx = searchDictByPopSubDep2Idx->second;
			auto searchSubDict = subdictPopSubDep2Idx->find( pkey );
			if( searchSubDict != subdictPopSubDep2Idx->end() ) {
				subdictPopSubDep2Idx->erase( searchSubDict );
			}
			subdictPopSubDep2Idx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		schema->getTablePopDep()->deletePopDep( Authorization,
			Buff );
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3ByPopSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPopSubDep2TenantId,
			const int64_t argPopSubDep2Id )
	{
		cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey key;
		key.setRequiredPopSubDep2TenantId( argPopSubDep2TenantId );
		key.setRequiredPopSubDep2Id( argPopSubDep2Id );
		deletePopSubDep3ByPopSubDep2Idx( Authorization, &key );
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3ByPopSubDep2Idx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey* argKey )
	{
		cfbam::CFBamPopSubDep3Buff* cur = NULL;
		cfbam::CFBamPopSubDep3Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopSubDep3()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopSubDep3( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPopSubDep2TenantId,
			const int64_t argPopSubDep2Id,
			const std::string& argName )
	{
		cfbam::CFBamPopSubDep3ByUNameIdxKey key;
		key.setRequiredPopSubDep2TenantId( argPopSubDep2TenantId );
		key.setRequiredPopSubDep2Id( argPopSubDep2Id );
		key.setRequiredName( argName );
		deletePopSubDep3ByUNameIdx( Authorization, &key );
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamPopSubDep3ByUNameIdxKey* argKey )
	{
		cfbam::CFBamPopSubDep3Buff* cur = NULL;
		cfbam::CFBamPopSubDep3Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopSubDep3()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopSubDep3( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3ByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId )
	{
		cfbam::CFBamPopDepByRelationIdxKey key;
		key.setRequiredRelationTenantId( argRelationTenantId );
		key.setRequiredRelationId( argRelationId );
		deletePopSubDep3ByRelationIdx( Authorization, &key );
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3ByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamPopDepByRelationIdxKey* argKey )
	{
		cfbam::CFBamPopSubDep3Buff* cur = NULL;
		cfbam::CFBamPopSubDep3Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamPopDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopSubDep3()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopSubDep3( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deletePopSubDep3ByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamPopDepByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamPopSubDep3Buff* cur = NULL;
		cfbam::CFBamPopSubDep3Buff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamPopDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopSubDep3()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopSubDep3( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deletePopSubDep3ByIdIdx( Authorization, &key );
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamPopSubDep3Buff* cur = NULL;
		cfbam::CFBamPopSubDep3Buff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopSubDep3()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopSubDep3( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deletePopSubDep3ByTenantIdx( Authorization, &key );
	}

	void CFBamRamPopSubDep3Table::deletePopSubDep3ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamPopSubDep3Buff* cur = NULL;
		cfbam::CFBamPopSubDep3Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopSubDep3Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopSubDep3Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep3Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopSubDep3()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopSubDep3( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopSubDep3Table::releasePreparedStatements() {
	}

}
