
// Description: C++18 Implementation for an in-memory RAM DbIO for Chain.

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

	const std::string CFBamRamChainTable::CLASS_NAME( "CFBamRamChainTable" );

	CFBamRamChainTable::CFBamRamChainTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamChainTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>();
		dictByTenantIdx = new std::map<cfbam::CFBamChainByTenantIdxKey,
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>*>();
		dictByChainTableIdx = new std::map<cfbam::CFBamChainByChainTableIdxKey,
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>*>();
		dictByDefSchemaIdx = new std::map<cfbam::CFBamChainByDefSchemaIdxKey,
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>*>();
		dictByUNameIdx = new std::map<cfbam::CFBamChainByUNameIdxKey, cfbam::CFBamChainBuff*>();
		dictByPrevRelIdx = new std::map<cfbam::CFBamChainByPrevRelIdxKey,
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>*>();
		dictByNextRelIdx = new std::map<cfbam::CFBamChainByNextRelIdxKey,
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>*>();
	}

	CFBamRamChainTable::~CFBamRamChainTable() {
		if( dictByTenantIdx != NULL ) {
			for( auto iterDict = dictByTenantIdx->begin(); iterDict != dictByTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantIdx;
			dictByTenantIdx = NULL;
		}
		if( dictByChainTableIdx != NULL ) {
			for( auto iterDict = dictByChainTableIdx->begin(); iterDict != dictByChainTableIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByChainTableIdx;
			dictByChainTableIdx = NULL;
		}
		if( dictByDefSchemaIdx != NULL ) {
			for( auto iterDict = dictByDefSchemaIdx->begin(); iterDict != dictByDefSchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDefSchemaIdx;
			dictByDefSchemaIdx = NULL;
		}
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByPrevRelIdx != NULL ) {
			for( auto iterDict = dictByPrevRelIdx->begin(); iterDict != dictByPrevRelIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByPrevRelIdx;
			dictByPrevRelIdx = NULL;
		}
		if( dictByNextRelIdx != NULL ) {
			for( auto iterDict = dictByNextRelIdx->begin(); iterDict != dictByNextRelIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByNextRelIdx;
			dictByNextRelIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfbam::CFBamChainBuff* elt;
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfbam::CFBamChainPKey,
					cfbam::CFBamChainBuff*>::iterator cur = dictByPKey->begin();
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

	cfbam::CFBamChainBuff* CFBamRamChainTable::createChain( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamChainBuff* Buff )
	{
		static const std::string S_ProcName( "createChain" );
		cfbam::CFBamChainPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( dynamic_cast<CFBamRamTenantTable*>( schema->getTableTenant() )->nextChainIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfbam::CFBamChainByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamChainByChainTableIdxKey keyChainTableIdx;
		keyChainTableIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyChainTableIdx.setRequiredTableId( Buff->getRequiredTableId() );
		cfbam::CFBamChainByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamChainByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUNameIdx.setRequiredTableId( Buff->getRequiredTableId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamChainByPrevRelIdxKey keyPrevRelIdx;
		keyPrevRelIdx.setRequiredPrevRelationTenantId( Buff->getRequiredPrevRelationTenantId() );
		keyPrevRelIdx.setRequiredPrevRelationId( Buff->getRequiredPrevRelationId() );
		cfbam::CFBamChainByNextRelIdxKey keyNextRelIdx;
		keyNextRelIdx.setRequiredNextRelationTenantId( Buff->getRequiredNextRelationTenantId() );
		keyNextRelIdx.setRequiredNextRelationId( Buff->getRequiredNextRelationId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ChainUNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamTableBuff* chk = dynamic_cast<cfbam::CFBamTableBuff*>( schema->getTableTable()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTableId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Table to table Table" );
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
				cfbam::CFBamRelationBuff* chk = dynamic_cast<cfbam::CFBamRelationBuff*>( schema->getTableRelation()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredPrevRelationTenantId(),
						Buff->getRequiredPrevRelationId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship PrevRelation to table Relation" );
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
				cfbam::CFBamRelationBuff* chk = dynamic_cast<cfbam::CFBamRelationBuff*>( schema->getTableRelation()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredNextRelationTenantId(),
						Buff->getRequiredNextRelationId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship NextRelation to table Relation" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamChainBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>();
			dictByTenantIdx->insert( std::map<cfbam::CFBamChainByTenantIdxKey,
				std::map<cfbam::CFBamChainPKey,
					cfbam::CFBamChainBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>* subdictChainTableIdx;
		auto searchDictByChainTableIdx = dictByChainTableIdx->find( keyChainTableIdx );
		if( searchDictByChainTableIdx != dictByChainTableIdx->end() ) {
			subdictChainTableIdx = searchDictByChainTableIdx->second;
		}
		else {
			subdictChainTableIdx = new std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>();
			dictByChainTableIdx->insert( std::map<cfbam::CFBamChainByChainTableIdxKey,
				std::map<cfbam::CFBamChainPKey,
					cfbam::CFBamChainBuff*>*>::value_type( keyChainTableIdx, subdictChainTableIdx ) );
		}
		subdictChainTableIdx->insert( std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamChainByDefSchemaIdxKey,
				std::map<cfbam::CFBamChainPKey,
					cfbam::CFBamChainBuff*>*>::value_type( keyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamChainByUNameIdxKey, cfbam::CFBamChainBuff*>::value_type( keyUNameIdx, buff ) );

		std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>* subdictPrevRelIdx;
		auto searchDictByPrevRelIdx = dictByPrevRelIdx->find( keyPrevRelIdx );
		if( searchDictByPrevRelIdx != dictByPrevRelIdx->end() ) {
			subdictPrevRelIdx = searchDictByPrevRelIdx->second;
		}
		else {
			subdictPrevRelIdx = new std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>();
			dictByPrevRelIdx->insert( std::map<cfbam::CFBamChainByPrevRelIdxKey,
				std::map<cfbam::CFBamChainPKey,
					cfbam::CFBamChainBuff*>*>::value_type( keyPrevRelIdx, subdictPrevRelIdx ) );
		}
		subdictPrevRelIdx->insert( std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>* subdictNextRelIdx;
		auto searchDictByNextRelIdx = dictByNextRelIdx->find( keyNextRelIdx );
		if( searchDictByNextRelIdx != dictByNextRelIdx->end() ) {
			subdictNextRelIdx = searchDictByNextRelIdx->second;
		}
		else {
			subdictNextRelIdx = new std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>();
			dictByNextRelIdx->insert( std::map<cfbam::CFBamChainByNextRelIdxKey,
				std::map<cfbam::CFBamChainPKey,
					cfbam::CFBamChainBuff*>*>::value_type( keyNextRelIdx, subdictNextRelIdx ) );
		}
		subdictNextRelIdx->insert( std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamChainBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamChainBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamChainBuff* CFBamRamChainTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamChainPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamChainBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamChainBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamChainBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamChainBuff* CFBamRamChainTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamChainPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamChainBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamChainBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamChainBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamChainBuff*> CFBamRamChainTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> retVec;
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamChainBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamChainBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamChainBuff*> CFBamRamChainTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfbam::CFBamChainByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> recVec;
		cfbam::CFBamChainBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfbam::CFBamChainPKey,
				 cfbam::CFBamChainBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamChainBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamChainBuff*> CFBamRamChainTable::readDerivedByChainTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readDerivedByChainTableIdx" );
		cfbam::CFBamChainByChainTableIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> recVec;
		cfbam::CFBamChainBuff* clone;
		auto searchDictByChainTableIdx = dictByChainTableIdx->find( key );
		if( searchDictByChainTableIdx != dictByChainTableIdx->end() ) {
			std::map<cfbam::CFBamChainPKey,
				 cfbam::CFBamChainBuff*>* subdictChainTableIdx = searchDictByChainTableIdx->second;
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>::iterator iter = subdictChainTableIdx->begin();
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>::iterator end = subdictChainTableIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamChainBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamChainBuff*> CFBamRamChainTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		cfbam::CFBamChainByDefSchemaIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> recVec;
		cfbam::CFBamChainBuff* clone;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( key );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamChainPKey,
				 cfbam::CFBamChainBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>::iterator iter = subdictDefSchemaIdx->begin();
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>::iterator end = subdictDefSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamChainBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamChainBuff* CFBamRamChainTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamChainByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::CFBamChainBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamChainBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamChainBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamChainBuff*> CFBamRamChainTable::readDerivedByPrevRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PrevRelationTenantId,
			const int64_t PrevRelationId )
	{
		static const std::string S_ProcName( "readDerivedByPrevRelIdx" );
		cfbam::CFBamChainByPrevRelIdxKey key;
		key.setRequiredPrevRelationTenantId( PrevRelationTenantId );
		key.setRequiredPrevRelationId( PrevRelationId );
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> recVec;
		cfbam::CFBamChainBuff* clone;
		auto searchDictByPrevRelIdx = dictByPrevRelIdx->find( key );
		if( searchDictByPrevRelIdx != dictByPrevRelIdx->end() ) {
			std::map<cfbam::CFBamChainPKey,
				 cfbam::CFBamChainBuff*>* subdictPrevRelIdx = searchDictByPrevRelIdx->second;
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>::iterator iter = subdictPrevRelIdx->begin();
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>::iterator end = subdictPrevRelIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamChainBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamChainBuff*> CFBamRamChainTable::readDerivedByNextRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t NextRelationTenantId,
			const int64_t NextRelationId )
	{
		static const std::string S_ProcName( "readDerivedByNextRelIdx" );
		cfbam::CFBamChainByNextRelIdxKey key;
		key.setRequiredNextRelationTenantId( NextRelationTenantId );
		key.setRequiredNextRelationId( NextRelationId );
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> recVec;
		cfbam::CFBamChainBuff* clone;
		auto searchDictByNextRelIdx = dictByNextRelIdx->find( key );
		if( searchDictByNextRelIdx != dictByNextRelIdx->end() ) {
			std::map<cfbam::CFBamChainPKey,
				 cfbam::CFBamChainBuff*>* subdictNextRelIdx = searchDictByNextRelIdx->second;
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>::iterator iter = subdictNextRelIdx->begin();
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>::iterator end = subdictNextRelIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamChainBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamChainBuff* CFBamRamChainTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamChainPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamChainBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamChainBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamChainBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamChainBuff* CFBamRamChainTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamChainPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamChainBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamChainBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamChainBuff*>( buff ) );
	}

	cfbam::CFBamChainBuff* CFBamRamChainTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamChainPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamChainBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamChainBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamChainBuff*> CFBamRamChainTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamChainBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamChainBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamChainBuff* CFBamRamChainTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamChainBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamChainBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamChainBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamChainBuff*> CFBamRamChainTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamChainBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamChainBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamChainBuff*> CFBamRamChainTable::readBuffByChainTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readBuffByChainTableIdx" );
		cfbam::CFBamChainBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> buffList = readDerivedByChainTableIdx( Authorization,
			TenantId,
			TableId );
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamChainBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamChainBuff*> CFBamRamChainTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamChainBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamChainBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamChainBuff* CFBamRamChainTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamChainBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamChainBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamChainBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamChainBuff*> CFBamRamChainTable::readBuffByPrevRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PrevRelationTenantId,
			const int64_t PrevRelationId )
	{
		static const std::string S_ProcName( "readBuffByPrevRelIdx" );
		cfbam::CFBamChainBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> buffList = readDerivedByPrevRelIdx( Authorization,
			PrevRelationTenantId,
			PrevRelationId );
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamChainBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamChainBuff*> CFBamRamChainTable::readBuffByNextRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t NextRelationTenantId,
			const int64_t NextRelationId )
	{
		static const std::string S_ProcName( "readBuffByNextRelIdx" );
		cfbam::CFBamChainBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> buffList = readDerivedByNextRelIdx( Authorization,
			NextRelationTenantId,
			NextRelationId );
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamChainBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamChainBuff* CFBamRamChainTable::readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfbam::CFBamChainBuff* buff = readBuffByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamChainBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamChainBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamChainBuff* CFBamRamChainTable::readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfbam::CFBamChainBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfbam::CFBamChainBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfbam::CFBamChainBuff* CFBamRamChainTable::updateChain( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamChainBuff* Buff )
	{
		static const std::string S_ProcName( "updateChain" );
		cfbam::CFBamChainPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in Chain for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamChainBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for Chain primary key " );
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
		cfbam::CFBamChainByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamChainByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamChainByChainTableIdxKey existingKeyChainTableIdx;
		existingKeyChainTableIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyChainTableIdx.setRequiredTableId( existing->getRequiredTableId() );
		cfbam::CFBamChainByChainTableIdxKey newKeyChainTableIdx;
		newKeyChainTableIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyChainTableIdx.setRequiredTableId( Buff->getRequiredTableId() );
		cfbam::CFBamChainByDefSchemaIdxKey existingKeyDefSchemaIdx;
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
		cfbam::CFBamChainByDefSchemaIdxKey newKeyDefSchemaIdx;
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
		cfbam::CFBamChainByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUNameIdx.setRequiredTableId( existing->getRequiredTableId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamChainByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUNameIdx.setRequiredTableId( Buff->getRequiredTableId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamChainByPrevRelIdxKey existingKeyPrevRelIdx;
		existingKeyPrevRelIdx.setRequiredPrevRelationTenantId( existing->getRequiredPrevRelationTenantId() );
		existingKeyPrevRelIdx.setRequiredPrevRelationId( existing->getRequiredPrevRelationId() );
		cfbam::CFBamChainByPrevRelIdxKey newKeyPrevRelIdx;
		newKeyPrevRelIdx.setRequiredPrevRelationTenantId( Buff->getRequiredPrevRelationTenantId() );
		newKeyPrevRelIdx.setRequiredPrevRelationId( Buff->getRequiredPrevRelationId() );
		cfbam::CFBamChainByNextRelIdxKey existingKeyNextRelIdx;
		existingKeyNextRelIdx.setRequiredNextRelationTenantId( existing->getRequiredNextRelationTenantId() );
		existingKeyNextRelIdx.setRequiredNextRelationId( existing->getRequiredNextRelationId() );
		cfbam::CFBamChainByNextRelIdxKey newKeyNextRelIdx;
		newKeyNextRelIdx.setRequiredNextRelationTenantId( Buff->getRequiredNextRelationTenantId() );
		newKeyNextRelIdx.setRequiredNextRelationId( Buff->getRequiredNextRelationId() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ChainUNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamTableBuff* chk = dynamic_cast<cfbam::CFBamTableBuff*>( schema->getTableTable()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTableId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Table to table Table" );
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
						Buff->getRequiredPrevRelationTenantId(),
						Buff->getRequiredPrevRelationId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship PrevRelation to table Relation" );
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
						Buff->getRequiredNextRelationTenantId(),
						Buff->getRequiredNextRelationId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship NextRelation to table Relation" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfbam::CFBamChainBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfbam::CFBamChainBuff" );
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

		dictByPKey->insert( std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamChainPKey,
			 cfbam::CFBamChainBuff*>* subdictTenantIdx;
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
			subdictTenantIdx = new std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>();
			dictByTenantIdx->insert( std::map<cfbam::CFBamChainByTenantIdxKey,
				std::map<cfbam::CFBamChainPKey,
					cfbam::CFBamChainBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamChainPKey,
			 cfbam::CFBamChainBuff*>* subdictChainTableIdx;
		auto searchDictByChainTableIdx = dictByChainTableIdx->find( existingKeyChainTableIdx );
		if( searchDictByChainTableIdx != dictByChainTableIdx->end() ) {
			subdictChainTableIdx = searchDictByChainTableIdx->second;
			auto searchSubDict = subdictChainTableIdx->find( pkey );
			if( searchSubDict != subdictChainTableIdx->end() ) {
				subdictChainTableIdx->erase( searchSubDict );
			}
			if( subdictChainTableIdx->size() <= 0 ) {
				delete subdictChainTableIdx;
				dictByChainTableIdx->erase( searchDictByChainTableIdx );
			}
			subdictChainTableIdx = NULL;
		}
		auto searchNewKeyDictByChainTableIdx = dictByChainTableIdx->find( newKeyChainTableIdx );
		if( searchNewKeyDictByChainTableIdx != dictByChainTableIdx->end() ) {
			subdictChainTableIdx = searchNewKeyDictByChainTableIdx->second;
		}
		else {
			subdictChainTableIdx = new std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>();
			dictByChainTableIdx->insert( std::map<cfbam::CFBamChainByChainTableIdxKey,
				std::map<cfbam::CFBamChainPKey,
					cfbam::CFBamChainBuff*>*>::value_type( newKeyChainTableIdx, subdictChainTableIdx ) );
		}
		subdictChainTableIdx->insert( std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamChainPKey,
			 cfbam::CFBamChainBuff*>* subdictDefSchemaIdx;
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
			subdictDefSchemaIdx = new std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamChainByDefSchemaIdxKey,
				std::map<cfbam::CFBamChainPKey,
					cfbam::CFBamChainBuff*>*>::value_type( newKeyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamChainByUNameIdxKey, cfbam::CFBamChainBuff*>::value_type( newKeyUNameIdx, existing ) );

		std::map<cfbam::CFBamChainPKey,
			 cfbam::CFBamChainBuff*>* subdictPrevRelIdx;
		auto searchDictByPrevRelIdx = dictByPrevRelIdx->find( existingKeyPrevRelIdx );
		if( searchDictByPrevRelIdx != dictByPrevRelIdx->end() ) {
			subdictPrevRelIdx = searchDictByPrevRelIdx->second;
			auto searchSubDict = subdictPrevRelIdx->find( pkey );
			if( searchSubDict != subdictPrevRelIdx->end() ) {
				subdictPrevRelIdx->erase( searchSubDict );
			}
			if( subdictPrevRelIdx->size() <= 0 ) {
				delete subdictPrevRelIdx;
				dictByPrevRelIdx->erase( searchDictByPrevRelIdx );
			}
			subdictPrevRelIdx = NULL;
		}
		auto searchNewKeyDictByPrevRelIdx = dictByPrevRelIdx->find( newKeyPrevRelIdx );
		if( searchNewKeyDictByPrevRelIdx != dictByPrevRelIdx->end() ) {
			subdictPrevRelIdx = searchNewKeyDictByPrevRelIdx->second;
		}
		else {
			subdictPrevRelIdx = new std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>();
			dictByPrevRelIdx->insert( std::map<cfbam::CFBamChainByPrevRelIdxKey,
				std::map<cfbam::CFBamChainPKey,
					cfbam::CFBamChainBuff*>*>::value_type( newKeyPrevRelIdx, subdictPrevRelIdx ) );
		}
		subdictPrevRelIdx->insert( std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamChainPKey,
			 cfbam::CFBamChainBuff*>* subdictNextRelIdx;
		auto searchDictByNextRelIdx = dictByNextRelIdx->find( existingKeyNextRelIdx );
		if( searchDictByNextRelIdx != dictByNextRelIdx->end() ) {
			subdictNextRelIdx = searchDictByNextRelIdx->second;
			auto searchSubDict = subdictNextRelIdx->find( pkey );
			if( searchSubDict != subdictNextRelIdx->end() ) {
				subdictNextRelIdx->erase( searchSubDict );
			}
			if( subdictNextRelIdx->size() <= 0 ) {
				delete subdictNextRelIdx;
				dictByNextRelIdx->erase( searchDictByNextRelIdx );
			}
			subdictNextRelIdx = NULL;
		}
		auto searchNewKeyDictByNextRelIdx = dictByNextRelIdx->find( newKeyNextRelIdx );
		if( searchNewKeyDictByNextRelIdx != dictByNextRelIdx->end() ) {
			subdictNextRelIdx = searchNewKeyDictByNextRelIdx->second;
		}
		else {
			subdictNextRelIdx = new std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>();
			dictByNextRelIdx->insert( std::map<cfbam::CFBamChainByNextRelIdxKey,
				std::map<cfbam::CFBamChainPKey,
					cfbam::CFBamChainBuff*>*>::value_type( newKeyNextRelIdx, subdictNextRelIdx ) );
		}
		subdictNextRelIdx->insert( std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamChainBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamChainBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamChainBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamChainTable::deleteChain( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamChainBuff* Buff )
	{
		static const std::string S_ProcName( "deleteChain" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamChainPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamChainBuff* existing = searchExisting->second;
		cfbam::CFBamChainByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamChainByChainTableIdxKey keyChainTableIdx;
		keyChainTableIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyChainTableIdx.setRequiredTableId( existing->getRequiredTableId() );
		cfbam::CFBamChainByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamChainByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUNameIdx.setRequiredTableId( existing->getRequiredTableId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamChainByPrevRelIdxKey keyPrevRelIdx;
		keyPrevRelIdx.setRequiredPrevRelationTenantId( existing->getRequiredPrevRelationTenantId() );
		keyPrevRelIdx.setRequiredPrevRelationId( existing->getRequiredPrevRelationId() );
		cfbam::CFBamChainByNextRelIdxKey keyNextRelIdx;
		keyNextRelIdx.setRequiredNextRelationTenantId( existing->getRequiredNextRelationTenantId() );
		keyNextRelIdx.setRequiredNextRelationId( existing->getRequiredNextRelationId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamChainPKey, cfbam::CFBamChainBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfbam::CFBamChainPKey,
				 cfbam::CFBamChainBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictByChainTableIdx = dictByChainTableIdx->find( keyChainTableIdx );
		if( searchDictByChainTableIdx != dictByChainTableIdx->end() ) {
			std::map<cfbam::CFBamChainPKey,
				 cfbam::CFBamChainBuff*>* subdictChainTableIdx = searchDictByChainTableIdx->second;
			auto searchSubDict = subdictChainTableIdx->find( pkey );
			if( searchSubDict != subdictChainTableIdx->end() ) {
				subdictChainTableIdx->erase( searchSubDict );
			}
			subdictChainTableIdx = NULL;
		}

		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamChainPKey,
				 cfbam::CFBamChainBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			subdictDefSchemaIdx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		auto searchDictByPrevRelIdx = dictByPrevRelIdx->find( keyPrevRelIdx );
		if( searchDictByPrevRelIdx != dictByPrevRelIdx->end() ) {
			std::map<cfbam::CFBamChainPKey,
				 cfbam::CFBamChainBuff*>* subdictPrevRelIdx = searchDictByPrevRelIdx->second;
			auto searchSubDict = subdictPrevRelIdx->find( pkey );
			if( searchSubDict != subdictPrevRelIdx->end() ) {
				subdictPrevRelIdx->erase( searchSubDict );
			}
			subdictPrevRelIdx = NULL;
		}

		auto searchDictByNextRelIdx = dictByNextRelIdx->find( keyNextRelIdx );
		if( searchDictByNextRelIdx != dictByNextRelIdx->end() ) {
			std::map<cfbam::CFBamChainPKey,
				 cfbam::CFBamChainBuff*>* subdictNextRelIdx = searchDictByNextRelIdx->second;
			auto searchSubDict = subdictNextRelIdx->find( pkey );
			if( searchSubDict != subdictNextRelIdx->end() ) {
				subdictNextRelIdx->erase( searchSubDict );
			}
			subdictNextRelIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamChainTable::deleteChainByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamChainPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteChainByIdIdx( Authorization, &key );
	}

	void CFBamRamChainTable::deleteChainByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamChainPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamChainBuff* cur = NULL;
		cfbam::CFBamChainBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> matchSet;
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamChainBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableChain()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteChain( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamChainTable::deleteChainByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamChainByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteChainByTenantIdx( Authorization, &key );
	}

	void CFBamRamChainTable::deleteChainByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamChainByTenantIdxKey* argKey )
	{
		cfbam::CFBamChainBuff* cur = NULL;
		cfbam::CFBamChainBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> matchSet;
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamChainBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableChain()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteChain( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamChainTable::deleteChainByChainTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId )
	{
		cfbam::CFBamChainByChainTableIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTableId( argTableId );
		deleteChainByChainTableIdx( Authorization, &key );
	}

	void CFBamRamChainTable::deleteChainByChainTableIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamChainByChainTableIdxKey* argKey )
	{
		cfbam::CFBamChainBuff* cur = NULL;
		cfbam::CFBamChainBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> matchSet;
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamChainBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableChain()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteChain( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamChainTable::deleteChainByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamChainByDefSchemaIdxKey key;
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
		deleteChainByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamChainTable::deleteChainByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamChainByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamChainBuff* cur = NULL;
		cfbam::CFBamChainBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> matchSet;
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamChainBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableChain()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteChain( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamChainTable::deleteChainByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId,
			const std::string& argName )
	{
		cfbam::CFBamChainByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTableId( argTableId );
		key.setRequiredName( argName );
		deleteChainByUNameIdx( Authorization, &key );
	}

	void CFBamRamChainTable::deleteChainByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamChainByUNameIdxKey* argKey )
	{
		cfbam::CFBamChainBuff* cur = NULL;
		cfbam::CFBamChainBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> matchSet;
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamChainBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableChain()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteChain( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamChainTable::deleteChainByPrevRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPrevRelationTenantId,
			const int64_t argPrevRelationId )
	{
		cfbam::CFBamChainByPrevRelIdxKey key;
		key.setRequiredPrevRelationTenantId( argPrevRelationTenantId );
		key.setRequiredPrevRelationId( argPrevRelationId );
		deleteChainByPrevRelIdx( Authorization, &key );
	}

	void CFBamRamChainTable::deleteChainByPrevRelIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamChainByPrevRelIdxKey* argKey )
	{
		cfbam::CFBamChainBuff* cur = NULL;
		cfbam::CFBamChainBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> matchSet;
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamChainBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableChain()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteChain( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamChainTable::deleteChainByNextRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argNextRelationTenantId,
			const int64_t argNextRelationId )
	{
		cfbam::CFBamChainByNextRelIdxKey key;
		key.setRequiredNextRelationTenantId( argNextRelationTenantId );
		key.setRequiredNextRelationId( argNextRelationId );
		deleteChainByNextRelIdx( Authorization, &key );
	}

	void CFBamRamChainTable::deleteChainByNextRelIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamChainByNextRelIdxKey* argKey )
	{
		cfbam::CFBamChainBuff* cur = NULL;
		cfbam::CFBamChainBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> matchSet;
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamChainBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamChainBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamChainBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableChain()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteChain( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamChainTable::releasePreparedStatements() {
	}

}
