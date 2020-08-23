
// Description: C++18 Implementation for an in-memory RAM DbIO for PopTopDep.

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

	const std::string CFBamRamPopTopDepTable::CLASS_NAME( "CFBamRamPopTopDepTable" );

	CFBamRamPopTopDepTable::CFBamRamPopTopDepTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamPopTopDepTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopTopDepBuff*>();
		dictByContRelIdx = new std::map<cfbam::CFBamPopTopDepByContRelIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopTopDepBuff*>*>();
		dictByUNameIdx = new std::map<cfbam::CFBamPopTopDepByUNameIdxKey, cfbam::CFBamPopTopDepBuff*>();
	}

	CFBamRamPopTopDepTable::~CFBamRamPopTopDepTable() {
		if( dictByContRelIdx != NULL ) {
			for( auto iterDict = dictByContRelIdx->begin(); iterDict != dictByContRelIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByContRelIdx;
			dictByContRelIdx = NULL;
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

	cfbam::CFBamPopTopDepBuff* CFBamRamPopTopDepTable::createPopTopDep( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamPopTopDepBuff* Buff )
	{
		static const std::string S_ProcName( "createPopTopDep" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamPopTopDepByContRelIdxKey keyContRelIdx;
		keyContRelIdx.setRequiredContRelationTenantId( Buff->getRequiredContRelationTenantId() );
		keyContRelIdx.setRequiredContRelationId( Buff->getRequiredContRelationId() );
		cfbam::CFBamPopTopDepByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredContRelationTenantId( Buff->getRequiredContRelationTenantId() );
		keyUNameIdx.setRequiredContRelationId( Buff->getRequiredContRelationId() );
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
			std::string Msg( "Duplicate key detected for index PopTopDepUNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamRelationBuff* chk = dynamic_cast<cfbam::CFBamRelationBuff*>( schema->getTableRelation()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredContRelationTenantId(),
						Buff->getRequiredContRelationId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ContRelation to table Relation" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamPopTopDepBuff* buff = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( schema->getTablePopDep()->createPopDep( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopTopDepBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopTopDepBuff*>* subdictContRelIdx;
		auto searchDictByContRelIdx = dictByContRelIdx->find( keyContRelIdx );
		if( searchDictByContRelIdx != dictByContRelIdx->end() ) {
			subdictContRelIdx = searchDictByContRelIdx->second;
		}
		else {
			subdictContRelIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopTopDepBuff*>();
			dictByContRelIdx->insert( std::map<cfbam::CFBamPopTopDepByContRelIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamPopTopDepBuff*>*>::value_type( keyContRelIdx, subdictContRelIdx ) );
		}
		subdictContRelIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopTopDepBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamPopTopDepByUNameIdxKey, cfbam::CFBamPopTopDepBuff*>::value_type( keyUNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamPopTopDepBuff* CFBamRamPopTopDepTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamPopTopDepBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamPopTopDepBuff* CFBamRamPopTopDepTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamPopTopDepBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamPopTopDepBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamPopTopDepBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readDerivedByRelationIdx" );
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> buffList = schema->getTablePopDep()->readDerivedByRelationIdx( Authorization,
			RelationTenantId,
			RelationId );
		cfbam::CFBamPopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamPopTopDepBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> buffList = schema->getTablePopDep()->readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		cfbam::CFBamPopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamPopTopDepBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::readDerivedByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId )
	{
		static const std::string S_ProcName( "readDerivedByContRelIdx" );
		cfbam::CFBamPopTopDepByContRelIdxKey key;
		key.setRequiredContRelationTenantId( ContRelationTenantId );
		key.setRequiredContRelationId( ContRelationId );
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> recVec;
		cfbam::CFBamPopTopDepBuff* clone;
		auto searchDictByContRelIdx = dictByContRelIdx->find( key );
		if( searchDictByContRelIdx != dictByContRelIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamPopTopDepBuff*>* subdictContRelIdx = searchDictByContRelIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopTopDepBuff*>::iterator iter = subdictContRelIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopTopDepBuff*>::iterator end = subdictContRelIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamPopTopDepBuff* CFBamRamPopTopDepTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamPopTopDepByUNameIdxKey key;
		key.setRequiredContRelationTenantId( ContRelationTenantId );
		key.setRequiredContRelationId( ContRelationId );
		key.setRequiredName( Name );
		cfbam::CFBamPopTopDepBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamPopTopDepBuff* CFBamRamPopTopDepTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamPopTopDepBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamPopTopDepBuff* CFBamRamPopTopDepTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamPopTopDepBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff ) );
	}

	cfbam::CFBamPopTopDepBuff* CFBamRamPopTopDepTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamPopTopDepBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamPopTopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamPopTopDepBuff* CFBamRamPopTopDepTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamPopTopDepBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamPopTopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readBuffByRelationIdx" );
		cfbam::CFBamPopTopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> buffList = readDerivedByRelationIdx( Authorization,
			RelationTenantId,
			RelationId );
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamPopDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamPopTopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamPopDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::readBuffByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId )
	{
		static const std::string S_ProcName( "readBuffByContRelIdx" );
		cfbam::CFBamPopTopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> buffList = readDerivedByContRelIdx( Authorization,
			ContRelationTenantId,
			ContRelationId );
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamPopTopDepBuff* CFBamRamPopTopDepTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamPopTopDepBuff* buff = readDerivedByUNameIdx( Authorization,
			ContRelationTenantId,
			ContRelationId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::pageBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByRelationIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> CFBamRamPopTopDepTable::pageBuffByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByContRelIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamPopTopDepBuff* CFBamRamPopTopDepTable::updatePopTopDep( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamPopTopDepBuff* Buff )
	{
		static const std::string S_ProcName( "updatePopTopDep" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in PopTopDep for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamPopTopDepBuff* existing = searchExisting->second;

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
		cfbam::CFBamPopTopDepByContRelIdxKey existingKeyContRelIdx;
		existingKeyContRelIdx.setRequiredContRelationTenantId( existing->getRequiredContRelationTenantId() );
		existingKeyContRelIdx.setRequiredContRelationId( existing->getRequiredContRelationId() );
		cfbam::CFBamPopTopDepByContRelIdxKey newKeyContRelIdx;
		newKeyContRelIdx.setRequiredContRelationTenantId( Buff->getRequiredContRelationTenantId() );
		newKeyContRelIdx.setRequiredContRelationId( Buff->getRequiredContRelationId() );
		cfbam::CFBamPopTopDepByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredContRelationTenantId( existing->getRequiredContRelationTenantId() );
		existingKeyUNameIdx.setRequiredContRelationId( existing->getRequiredContRelationId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamPopTopDepByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredContRelationTenantId( Buff->getRequiredContRelationTenantId() );
		newKeyUNameIdx.setRequiredContRelationId( Buff->getRequiredContRelationId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index PopTopDepUNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamRelationBuff* chk = dynamic_cast<cfbam::CFBamRelationBuff*>( schema->getTableRelation()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredContRelationTenantId(),
						Buff->getRequiredContRelationId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ContRelation to table Relation" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( schema->getTablePopDep()->updatePopDep( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopTopDepBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopTopDepBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamPopTopDepBuff*>* subdictContRelIdx;
		auto searchDictByContRelIdx = dictByContRelIdx->find( existingKeyContRelIdx );
		if( searchDictByContRelIdx != dictByContRelIdx->end() ) {
			subdictContRelIdx = searchDictByContRelIdx->second;
			auto searchSubDict = subdictContRelIdx->find( pkey );
			if( searchSubDict != subdictContRelIdx->end() ) {
				subdictContRelIdx->erase( searchSubDict );
			}
			if( subdictContRelIdx->size() <= 0 ) {
				delete subdictContRelIdx;
				dictByContRelIdx->erase( searchDictByContRelIdx );
			}
			subdictContRelIdx = NULL;
		}
		auto searchNewKeyDictByContRelIdx = dictByContRelIdx->find( newKeyContRelIdx );
		if( searchNewKeyDictByContRelIdx != dictByContRelIdx->end() ) {
			subdictContRelIdx = searchNewKeyDictByContRelIdx->second;
		}
		else {
			subdictContRelIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopTopDepBuff*>();
			dictByContRelIdx->insert( std::map<cfbam::CFBamPopTopDepByContRelIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamPopTopDepBuff*>*>::value_type( newKeyContRelIdx, subdictContRelIdx ) );
		}
		subdictContRelIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopTopDepBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamPopTopDepByUNameIdxKey, cfbam::CFBamPopTopDepBuff*>::value_type( newKeyUNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamPopTopDepBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamPopTopDepBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamPopTopDepTable::deletePopTopDep( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamPopTopDepBuff* Buff )
	{
		static const std::string S_ProcName( "deletePopTopDep" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamPopTopDepBuff* existing = searchExisting->second;
		std::TCFLibOwningVector<cfbam::CFBamPopSubDep1Buff*> arrCheckPopDep = schema->getTablePopSubDep1()->readDerivedByPopTopDepIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		if( arrCheckPopDep.size() > 0 ) {
			schema->getTablePopSubDep1()->deletePopSubDep1ByPopTopDepIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		}
		cfbam::CFBamPopTopDepByContRelIdxKey keyContRelIdx;
		keyContRelIdx.setRequiredContRelationTenantId( existing->getRequiredContRelationTenantId() );
		keyContRelIdx.setRequiredContRelationId( existing->getRequiredContRelationId() );
		cfbam::CFBamPopTopDepByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredContRelationTenantId( existing->getRequiredContRelationTenantId() );
		keyUNameIdx.setRequiredContRelationId( existing->getRequiredContRelationId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamPopTopDepBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByContRelIdx = dictByContRelIdx->find( keyContRelIdx );
		if( searchDictByContRelIdx != dictByContRelIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamPopTopDepBuff*>* subdictContRelIdx = searchDictByContRelIdx->second;
			auto searchSubDict = subdictContRelIdx->find( pkey );
			if( searchSubDict != subdictContRelIdx->end() ) {
				subdictContRelIdx->erase( searchSubDict );
			}
			subdictContRelIdx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		schema->getTablePopDep()->deletePopDep( Authorization,
			Buff );
	}

	void CFBamRamPopTopDepTable::deletePopTopDepByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argContRelationTenantId,
			const int64_t argContRelationId )
	{
		cfbam::CFBamPopTopDepByContRelIdxKey key;
		key.setRequiredContRelationTenantId( argContRelationTenantId );
		key.setRequiredContRelationId( argContRelationId );
		deletePopTopDepByContRelIdx( Authorization, &key );
	}

	void CFBamRamPopTopDepTable::deletePopTopDepByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamPopTopDepByContRelIdxKey* argKey )
	{
		cfbam::CFBamPopTopDepBuff* cur = NULL;
		cfbam::CFBamPopTopDepBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamPopTopDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopTopDep( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopTopDepTable::deletePopTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argContRelationTenantId,
			const int64_t argContRelationId,
			const std::string& argName )
	{
		cfbam::CFBamPopTopDepByUNameIdxKey key;
		key.setRequiredContRelationTenantId( argContRelationTenantId );
		key.setRequiredContRelationId( argContRelationId );
		key.setRequiredName( argName );
		deletePopTopDepByUNameIdx( Authorization, &key );
	}

	void CFBamRamPopTopDepTable::deletePopTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamPopTopDepByUNameIdxKey* argKey )
	{
		cfbam::CFBamPopTopDepBuff* cur = NULL;
		cfbam::CFBamPopTopDepBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamPopTopDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopTopDep( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopTopDepTable::deletePopTopDepByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId )
	{
		cfbam::CFBamPopDepByRelationIdxKey key;
		key.setRequiredRelationTenantId( argRelationTenantId );
		key.setRequiredRelationId( argRelationId );
		deletePopTopDepByRelationIdx( Authorization, &key );
	}

	void CFBamRamPopTopDepTable::deletePopTopDepByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamPopDepByRelationIdxKey* argKey )
	{
		cfbam::CFBamPopTopDepBuff* cur = NULL;
		cfbam::CFBamPopTopDepBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamPopDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopTopDep( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopTopDepTable::deletePopTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deletePopTopDepByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamPopTopDepTable::deletePopTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamPopDepByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamPopTopDepBuff* cur = NULL;
		cfbam::CFBamPopTopDepBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamPopDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopTopDep( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopTopDepTable::deletePopTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deletePopTopDepByIdIdx( Authorization, &key );
	}

	void CFBamRamPopTopDepTable::deletePopTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamPopTopDepBuff* cur = NULL;
		cfbam::CFBamPopTopDepBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopTopDep( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamPopTopDepTable::deletePopTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deletePopTopDepByTenantIdx( Authorization, &key );
	}

	void CFBamRamPopTopDepTable::deletePopTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamPopTopDepBuff* cur = NULL;
		cfbam::CFBamPopTopDepBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamPopTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTablePopTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deletePopTopDep( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamPopTopDepTable::releasePreparedStatements() {
	}

}
