
// Description: C++18 Implementation for an in-memory RAM DbIO for DelSubDep1.

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

	const std::string CFBamRamDelSubDep1Table::CLASS_NAME( "CFBamRamDelSubDep1Table" );

	CFBamRamDelSubDep1Table::CFBamRamDelSubDep1Table( ICFBamSchema* argSchema )
	: cfbam::ICFBamDelSubDep1Table()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelSubDep1Buff*>();
		dictByDelTopDepIdx = new std::map<cfbam::CFBamDelSubDep1ByDelTopDepIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelSubDep1Buff*>*>();
		dictByUNameIdx = new std::map<cfbam::CFBamDelSubDep1ByUNameIdxKey, cfbam::CFBamDelSubDep1Buff*>();
	}

	CFBamRamDelSubDep1Table::~CFBamRamDelSubDep1Table() {
		if( dictByDelTopDepIdx != NULL ) {
			for( auto iterDict = dictByDelTopDepIdx->begin(); iterDict != dictByDelTopDepIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDelTopDepIdx;
			dictByDelTopDepIdx = NULL;
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

	cfbam::CFBamDelSubDep1Buff* CFBamRamDelSubDep1Table::createDelSubDep1( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamDelSubDep1Buff* Buff )
	{
		static const std::string S_ProcName( "createDelSubDep1" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamDelSubDep1ByDelTopDepIdxKey keyDelTopDepIdx;
		keyDelTopDepIdx.setRequiredDelTopDepTenantId( Buff->getRequiredDelTopDepTenantId() );
		keyDelTopDepIdx.setRequiredDelTopDepId( Buff->getRequiredDelTopDepId() );
		cfbam::CFBamDelSubDep1ByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredDelTopDepTenantId( Buff->getRequiredDelTopDepTenantId() );
		keyUNameIdx.setRequiredDelTopDepId( Buff->getRequiredDelTopDepId() );
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
			std::string Msg( "Duplicate key detected for index DelSubDep1UNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamDelTopDepBuff* chk = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredDelTopDepTenantId(),
						Buff->getRequiredDelTopDepId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship DelTopDep to table DelTopDep" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamDelSubDep1Buff* buff = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( schema->getTableDelDep()->createDelDep( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelSubDep1Buff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelSubDep1Buff*>* subdictDelTopDepIdx;
		auto searchDictByDelTopDepIdx = dictByDelTopDepIdx->find( keyDelTopDepIdx );
		if( searchDictByDelTopDepIdx != dictByDelTopDepIdx->end() ) {
			subdictDelTopDepIdx = searchDictByDelTopDepIdx->second;
		}
		else {
			subdictDelTopDepIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelSubDep1Buff*>();
			dictByDelTopDepIdx->insert( std::map<cfbam::CFBamDelSubDep1ByDelTopDepIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamDelSubDep1Buff*>*>::value_type( keyDelTopDepIdx, subdictDelTopDepIdx ) );
		}
		subdictDelTopDepIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelSubDep1Buff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamDelSubDep1ByUNameIdxKey, cfbam::CFBamDelSubDep1Buff*>::value_type( keyUNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamDelSubDep1Buff* CFBamRamDelSubDep1Table::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamDelSubDep1Buff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamDelSubDep1Buff* CFBamRamDelSubDep1Table::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamDelSubDep1Buff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator end = dictByPKey->end();
		cfbam::CFBamDelSubDep1Buff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> buffList = schema->getTableDelDep()->readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		cfbam::CFBamDelDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::readDerivedByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readDerivedByDelDepIdx" );
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> buffList = schema->getTableDelDep()->readDerivedByDelDepIdx( Authorization,
			RelationTenantId,
			RelationId );
		cfbam::CFBamDelDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::readDerivedByDelTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId )
	{
		static const std::string S_ProcName( "readDerivedByDelTopDepIdx" );
		cfbam::CFBamDelSubDep1ByDelTopDepIdxKey key;
		key.setRequiredDelTopDepTenantId( DelTopDepTenantId );
		key.setRequiredDelTopDepId( DelTopDepId );
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> recVec;
		cfbam::CFBamDelSubDep1Buff* clone;
		auto searchDictByDelTopDepIdx = dictByDelTopDepIdx->find( key );
		if( searchDictByDelTopDepIdx != dictByDelTopDepIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamDelSubDep1Buff*>* subdictDelTopDepIdx = searchDictByDelTopDepIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelSubDep1Buff*>::iterator iter = subdictDelTopDepIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelSubDep1Buff*>::iterator end = subdictDelTopDepIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamDelSubDep1Buff* CFBamRamDelSubDep1Table::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamDelSubDep1ByUNameIdxKey key;
		key.setRequiredDelTopDepTenantId( DelTopDepTenantId );
		key.setRequiredDelTopDepId( DelTopDepId );
		key.setRequiredName( Name );
		cfbam::CFBamDelSubDep1Buff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamDelSubDep1Buff* CFBamRamDelSubDep1Table::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamDelSubDep1Buff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamDelSubDep1Buff* CFBamRamDelSubDep1Table::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamDelSubDep1Buff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff ) );
	}

	cfbam::CFBamDelSubDep1Buff* CFBamRamDelSubDep1Table::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamDelSubDep1Buff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamDelSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamDelSubDep1Buff* CFBamRamDelSubDep1Table::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamDelSubDep1Buff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamDelSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamDelSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::readBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readBuffByDelDepIdx" );
		cfbam::CFBamDelSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> buffList = readDerivedByDelDepIdx( Authorization,
			RelationTenantId,
			RelationId );
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::readBuffByDelTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId )
	{
		static const std::string S_ProcName( "readBuffByDelTopDepIdx" );
		cfbam::CFBamDelSubDep1Buff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> buffList = readDerivedByDelTopDepIdx( Authorization,
			DelTopDepTenantId,
			DelTopDepId );
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamDelSubDep1Buff* CFBamRamDelSubDep1Table::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamDelSubDep1Buff* buff = readDerivedByUNameIdx( Authorization,
			DelTopDepTenantId,
			DelTopDepId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::pageBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDelDepIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> CFBamRamDelSubDep1Table::pageBuffByDelTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t DelTopDepTenantId,
			const int64_t DelTopDepId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDelTopDepIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamDelSubDep1Buff* CFBamRamDelSubDep1Table::updateDelSubDep1( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamDelSubDep1Buff* Buff )
	{
		static const std::string S_ProcName( "updateDelSubDep1" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in DelSubDep1 for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamDelSubDep1Buff* existing = searchExisting->second;

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
		cfbam::CFBamDelSubDep1ByDelTopDepIdxKey existingKeyDelTopDepIdx;
		existingKeyDelTopDepIdx.setRequiredDelTopDepTenantId( existing->getRequiredDelTopDepTenantId() );
		existingKeyDelTopDepIdx.setRequiredDelTopDepId( existing->getRequiredDelTopDepId() );
		cfbam::CFBamDelSubDep1ByDelTopDepIdxKey newKeyDelTopDepIdx;
		newKeyDelTopDepIdx.setRequiredDelTopDepTenantId( Buff->getRequiredDelTopDepTenantId() );
		newKeyDelTopDepIdx.setRequiredDelTopDepId( Buff->getRequiredDelTopDepId() );
		cfbam::CFBamDelSubDep1ByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredDelTopDepTenantId( existing->getRequiredDelTopDepTenantId() );
		existingKeyUNameIdx.setRequiredDelTopDepId( existing->getRequiredDelTopDepId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamDelSubDep1ByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredDelTopDepTenantId( Buff->getRequiredDelTopDepTenantId() );
		newKeyUNameIdx.setRequiredDelTopDepId( Buff->getRequiredDelTopDepId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index DelSubDep1UNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamDelDepBuff* chk = dynamic_cast<cfbam::CFBamDelDepBuff*>( schema->getTableDelDep()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table DelDep" );
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
				cfbam::CFBamDelTopDepBuff* chk = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredDelTopDepTenantId(),
						Buff->getRequiredDelTopDepId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship DelTopDep to table DelTopDep" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( schema->getTableDelDep()->updateDelDep( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelSubDep1Buff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelSubDep1Buff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamDelSubDep1Buff*>* subdictDelTopDepIdx;
		auto searchDictByDelTopDepIdx = dictByDelTopDepIdx->find( existingKeyDelTopDepIdx );
		if( searchDictByDelTopDepIdx != dictByDelTopDepIdx->end() ) {
			subdictDelTopDepIdx = searchDictByDelTopDepIdx->second;
			auto searchSubDict = subdictDelTopDepIdx->find( pkey );
			if( searchSubDict != subdictDelTopDepIdx->end() ) {
				subdictDelTopDepIdx->erase( searchSubDict );
			}
			if( subdictDelTopDepIdx->size() <= 0 ) {
				delete subdictDelTopDepIdx;
				dictByDelTopDepIdx->erase( searchDictByDelTopDepIdx );
			}
			subdictDelTopDepIdx = NULL;
		}
		auto searchNewKeyDictByDelTopDepIdx = dictByDelTopDepIdx->find( newKeyDelTopDepIdx );
		if( searchNewKeyDictByDelTopDepIdx != dictByDelTopDepIdx->end() ) {
			subdictDelTopDepIdx = searchNewKeyDictByDelTopDepIdx->second;
		}
		else {
			subdictDelTopDepIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelSubDep1Buff*>();
			dictByDelTopDepIdx->insert( std::map<cfbam::CFBamDelSubDep1ByDelTopDepIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamDelSubDep1Buff*>*>::value_type( newKeyDelTopDepIdx, subdictDelTopDepIdx ) );
		}
		subdictDelTopDepIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelSubDep1Buff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamDelSubDep1ByUNameIdxKey, cfbam::CFBamDelSubDep1Buff*>::value_type( newKeyUNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamDelSubDep1Buff* buff;
		if( existing->getClassCode() == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamDelSubDep1Buff* Buff )
	{
		static const std::string S_ProcName( "deleteDelSubDep1" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamDelSubDep1Buff* existing = searchExisting->second;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep2Buff*> arrCheckDelDep = schema->getTableDelSubDep2()->readDerivedByContDelDep1Idx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		if( arrCheckDelDep.size() > 0 ) {
			schema->getTableDelSubDep2()->deleteDelSubDep2ByContDelDep1Idx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		}
		cfbam::CFBamDelSubDep1ByDelTopDepIdxKey keyDelTopDepIdx;
		keyDelTopDepIdx.setRequiredDelTopDepTenantId( existing->getRequiredDelTopDepTenantId() );
		keyDelTopDepIdx.setRequiredDelTopDepId( existing->getRequiredDelTopDepId() );
		cfbam::CFBamDelSubDep1ByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredDelTopDepTenantId( existing->getRequiredDelTopDepTenantId() );
		keyUNameIdx.setRequiredDelTopDepId( existing->getRequiredDelTopDepId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelSubDep1Buff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByDelTopDepIdx = dictByDelTopDepIdx->find( keyDelTopDepIdx );
		if( searchDictByDelTopDepIdx != dictByDelTopDepIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamDelSubDep1Buff*>* subdictDelTopDepIdx = searchDictByDelTopDepIdx->second;
			auto searchSubDict = subdictDelTopDepIdx->find( pkey );
			if( searchSubDict != subdictDelTopDepIdx->end() ) {
				subdictDelTopDepIdx->erase( searchSubDict );
			}
			subdictDelTopDepIdx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		schema->getTableDelDep()->deleteDelDep( Authorization,
			Buff );
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1ByDelTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argDelTopDepTenantId,
			const int64_t argDelTopDepId )
	{
		cfbam::CFBamDelSubDep1ByDelTopDepIdxKey key;
		key.setRequiredDelTopDepTenantId( argDelTopDepTenantId );
		key.setRequiredDelTopDepId( argDelTopDepId );
		deleteDelSubDep1ByDelTopDepIdx( Authorization, &key );
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1ByDelTopDepIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey* argKey )
	{
		cfbam::CFBamDelSubDep1Buff* cur = NULL;
		cfbam::CFBamDelSubDep1Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argDelTopDepTenantId,
			const int64_t argDelTopDepId,
			const std::string& argName )
	{
		cfbam::CFBamDelSubDep1ByUNameIdxKey key;
		key.setRequiredDelTopDepTenantId( argDelTopDepTenantId );
		key.setRequiredDelTopDepId( argDelTopDepId );
		key.setRequiredName( argName );
		deleteDelSubDep1ByUNameIdx( Authorization, &key );
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1ByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamDelSubDep1ByUNameIdxKey* argKey )
	{
		cfbam::CFBamDelSubDep1Buff* cur = NULL;
		cfbam::CFBamDelSubDep1Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteDelSubDep1ByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1ByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamDelDepByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamDelSubDep1Buff* cur = NULL;
		cfbam::CFBamDelSubDep1Buff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamDelDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1ByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId )
	{
		cfbam::CFBamDelDepByDelDepIdxKey key;
		key.setRequiredRelationTenantId( argRelationTenantId );
		key.setRequiredRelationId( argRelationId );
		deleteDelSubDep1ByDelDepIdx( Authorization, &key );
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1ByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamDelDepByDelDepIdxKey* argKey )
	{
		cfbam::CFBamDelSubDep1Buff* cur = NULL;
		cfbam::CFBamDelSubDep1Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamDelDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteDelSubDep1ByIdIdx( Authorization, &key );
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1ByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamDelSubDep1Buff* cur = NULL;
		cfbam::CFBamDelSubDep1Buff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelSubDep1( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteDelSubDep1ByTenantIdx( Authorization, &key );
	}

	void CFBamRamDelSubDep1Table::deleteDelSubDep1ByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamDelSubDep1Buff* cur = NULL;
		cfbam::CFBamDelSubDep1Buff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelSubDep1Buff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelSubDep1Buff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelSubDep1()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelSubDep1( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamDelSubDep1Table::releasePreparedStatements() {
	}

}
