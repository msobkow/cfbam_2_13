
// Description: C++18 Implementation for an in-memory RAM DbIO for Value.

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

	const std::string CFBamRamValueTable::CLASS_NAME( "CFBamRamValueTable" );

	CFBamRamValueTable::CFBamRamValueTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamValueTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
		dictByUNameIdx = new std::map<cfbam::CFBamValueByUNameIdxKey, cfbam::CFBamValueBuff*>();
		dictByValTentIdx = new std::map<cfbam::CFBamValueByValTentIdxKey,
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>*>();
		dictByScopeIdx = new std::map<cfbam::CFBamValueByScopeIdxKey,
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>*>();
		dictByDefSchemaIdx = new std::map<cfbam::CFBamValueByDefSchemaIdxKey,
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>*>();
		dictByPrevIdx = new std::map<cfbam::CFBamValueByPrevIdxKey,
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>*>();
		dictByNextIdx = new std::map<cfbam::CFBamValueByNextIdxKey,
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>*>();
		dictByContPrevIdx = new std::map<cfbam::CFBamValueByContPrevIdxKey,
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>*>();
		dictByContNextIdx = new std::map<cfbam::CFBamValueByContNextIdxKey,
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>*>();
	}

	CFBamRamValueTable::~CFBamRamValueTable() {
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByValTentIdx != NULL ) {
			for( auto iterDict = dictByValTentIdx->begin(); iterDict != dictByValTentIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByValTentIdx;
			dictByValTentIdx = NULL;
		}
		if( dictByScopeIdx != NULL ) {
			for( auto iterDict = dictByScopeIdx->begin(); iterDict != dictByScopeIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByScopeIdx;
			dictByScopeIdx = NULL;
		}
		if( dictByDefSchemaIdx != NULL ) {
			for( auto iterDict = dictByDefSchemaIdx->begin(); iterDict != dictByDefSchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDefSchemaIdx;
			dictByDefSchemaIdx = NULL;
		}
		if( dictByPrevIdx != NULL ) {
			for( auto iterDict = dictByPrevIdx->begin(); iterDict != dictByPrevIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByPrevIdx;
			dictByPrevIdx = NULL;
		}
		if( dictByNextIdx != NULL ) {
			for( auto iterDict = dictByNextIdx->begin(); iterDict != dictByNextIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByNextIdx;
			dictByNextIdx = NULL;
		}
		if( dictByContPrevIdx != NULL ) {
			for( auto iterDict = dictByContPrevIdx->begin(); iterDict != dictByContPrevIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByContPrevIdx;
			dictByContPrevIdx = NULL;
		}
		if( dictByContNextIdx != NULL ) {
			for( auto iterDict = dictByContNextIdx->begin(); iterDict != dictByContNextIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByContNextIdx;
			dictByContNextIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfbam::CFBamValueBuff* elt;
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>::iterator cur = dictByPKey->begin();
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

	cfbam::CFBamValueBuff* CFBamRamValueTable::createValue( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamValueBuff* Buff )
	{
		static const std::string S_ProcName( "createValue" );
		cfbam::CFBamValuePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( dynamic_cast<CFBamRamTenantTable*>( schema->getTableTenant() )->nextValueIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfbam::CFBamValueByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUNameIdx.setRequiredScopeId( Buff->getRequiredScopeId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamValueByValTentIdxKey keyValTentIdx;
		keyValTentIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamValueByScopeIdxKey keyScopeIdx;
		keyScopeIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyScopeIdx.setRequiredScopeId( Buff->getRequiredScopeId() );
		cfbam::CFBamValueByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamValueByPrevIdxKey keyPrevIdx;
		if( Buff->isOptionalPrevTenantIdNull() ) {
			keyPrevIdx.setOptionalPrevTenantIdNull();
		}
		else {
			keyPrevIdx.setOptionalPrevTenantIdValue( Buff->getOptionalPrevTenantIdValue() );
		}
		if( Buff->isOptionalPrevIdNull() ) {
			keyPrevIdx.setOptionalPrevIdNull();
		}
		else {
			keyPrevIdx.setOptionalPrevIdValue( Buff->getOptionalPrevIdValue() );
		}
		cfbam::CFBamValueByNextIdxKey keyNextIdx;
		if( Buff->isOptionalNextTenantIdNull() ) {
			keyNextIdx.setOptionalNextTenantIdNull();
		}
		else {
			keyNextIdx.setOptionalNextTenantIdValue( Buff->getOptionalNextTenantIdValue() );
		}
		if( Buff->isOptionalNextIdNull() ) {
			keyNextIdx.setOptionalNextIdNull();
		}
		else {
			keyNextIdx.setOptionalNextIdValue( Buff->getOptionalNextIdValue() );
		}
		cfbam::CFBamValueByContPrevIdxKey keyContPrevIdx;
		keyContPrevIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyContPrevIdx.setRequiredScopeId( Buff->getRequiredScopeId() );
		if( Buff->isOptionalPrevIdNull() ) {
			keyContPrevIdx.setOptionalPrevIdNull();
		}
		else {
			keyContPrevIdx.setOptionalPrevIdValue( Buff->getOptionalPrevIdValue() );
		}
		cfbam::CFBamValueByContNextIdxKey keyContNextIdx;
		keyContNextIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyContNextIdx.setRequiredScopeId( Buff->getRequiredScopeId() );
		if( Buff->isOptionalNextIdNull() ) {
			keyContNextIdx.setOptionalNextIdNull();
		}
		else {
			keyContNextIdx.setOptionalNextIdValue( Buff->getOptionalNextIdValue() );
		}
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ValueUNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamScopeBuff* chk = dynamic_cast<cfbam::CFBamScopeBuff*>( schema->getTableScope()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredScopeId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Scope to table Scope" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamValueBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamValueByUNameIdxKey, cfbam::CFBamValueBuff*>::value_type( keyUNameIdx, buff ) );

		std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>* subdictValTentIdx;
		auto searchDictByValTentIdx = dictByValTentIdx->find( keyValTentIdx );
		if( searchDictByValTentIdx != dictByValTentIdx->end() ) {
			subdictValTentIdx = searchDictByValTentIdx->second;
		}
		else {
			subdictValTentIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByValTentIdx->insert( std::map<cfbam::CFBamValueByValTentIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( keyValTentIdx, subdictValTentIdx ) );
		}
		subdictValTentIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>* subdictScopeIdx;
		auto searchDictByScopeIdx = dictByScopeIdx->find( keyScopeIdx );
		if( searchDictByScopeIdx != dictByScopeIdx->end() ) {
			subdictScopeIdx = searchDictByScopeIdx->second;
		}
		else {
			subdictScopeIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByScopeIdx->insert( std::map<cfbam::CFBamValueByScopeIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( keyScopeIdx, subdictScopeIdx ) );
		}
		subdictScopeIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamValueByDefSchemaIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( keyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>* subdictPrevIdx;
		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			subdictPrevIdx = searchDictByPrevIdx->second;
		}
		else {
			subdictPrevIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamValueByPrevIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( keyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>* subdictNextIdx;
		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			subdictNextIdx = searchDictByNextIdx->second;
		}
		else {
			subdictNextIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamValueByNextIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( keyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>* subdictContPrevIdx;
		auto searchDictByContPrevIdx = dictByContPrevIdx->find( keyContPrevIdx );
		if( searchDictByContPrevIdx != dictByContPrevIdx->end() ) {
			subdictContPrevIdx = searchDictByContPrevIdx->second;
		}
		else {
			subdictContPrevIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByContPrevIdx->insert( std::map<cfbam::CFBamValueByContPrevIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( keyContPrevIdx, subdictContPrevIdx ) );
		}
		subdictContPrevIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>* subdictContNextIdx;
		auto searchDictByContNextIdx = dictByContNextIdx->find( keyContNextIdx );
		if( searchDictByContNextIdx != dictByContNextIdx->end() ) {
			subdictContNextIdx = searchDictByContNextIdx->second;
		}
		else {
			subdictContNextIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByContNextIdx->insert( std::map<cfbam::CFBamValueByContNextIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( keyContNextIdx, subdictContNextIdx ) );
		}
		subdictContNextIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamValueBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamValueBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamValueBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamValueBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> retVec;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamValueBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamValueBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamValueByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		key.setRequiredName( Name );
		cfbam::CFBamValueBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamValueBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readDerivedByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByValTentIdx" );
		cfbam::CFBamValueByValTentIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> recVec;
		cfbam::CFBamValueBuff* clone;
		auto searchDictByValTentIdx = dictByValTentIdx->find( key );
		if( searchDictByValTentIdx != dictByValTentIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictValTentIdx = searchDictByValTentIdx->second;
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator iter = subdictValTentIdx->begin();
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator end = subdictValTentIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamValueBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readDerivedByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId )
	{
		static const std::string S_ProcName( "readDerivedByScopeIdx" );
		cfbam::CFBamValueByScopeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> recVec;
		cfbam::CFBamValueBuff* clone;
		auto searchDictByScopeIdx = dictByScopeIdx->find( key );
		if( searchDictByScopeIdx != dictByScopeIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictScopeIdx = searchDictByScopeIdx->second;
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator iter = subdictScopeIdx->begin();
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator end = subdictScopeIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamValueBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		cfbam::CFBamValueByDefSchemaIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> recVec;
		cfbam::CFBamValueBuff* clone;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( key );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator iter = subdictDefSchemaIdx->begin();
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator end = subdictDefSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamValueBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByPrevIdx" );
		cfbam::CFBamValueByPrevIdxKey key;
		if( PrevTenantId == NULL ) {
			key.setOptionalPrevTenantIdNull();
		}
		else {
			key.setOptionalPrevTenantIdValue( *PrevTenantId );
		}
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> recVec;
		cfbam::CFBamValueBuff* clone;
		auto searchDictByPrevIdx = dictByPrevIdx->find( key );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator iter = subdictPrevIdx->begin();
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator end = subdictPrevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamValueBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByNextIdx" );
		cfbam::CFBamValueByNextIdxKey key;
		if( NextTenantId == NULL ) {
			key.setOptionalNextTenantIdNull();
		}
		else {
			key.setOptionalNextTenantIdValue( *NextTenantId );
		}
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> recVec;
		cfbam::CFBamValueBuff* clone;
		auto searchDictByNextIdx = dictByNextIdx->find( key );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator iter = subdictNextIdx->begin();
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator end = subdictNextIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamValueBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readDerivedByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByContPrevIdx" );
		cfbam::CFBamValueByContPrevIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> recVec;
		cfbam::CFBamValueBuff* clone;
		auto searchDictByContPrevIdx = dictByContPrevIdx->find( key );
		if( searchDictByContPrevIdx != dictByContPrevIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictContPrevIdx = searchDictByContPrevIdx->second;
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator iter = subdictContPrevIdx->begin();
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator end = subdictContPrevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamValueBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readDerivedByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByContNextIdx" );
		cfbam::CFBamValueByContNextIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> recVec;
		cfbam::CFBamValueBuff* clone;
		auto searchDictByContNextIdx = dictByContNextIdx->find( key );
		if( searchDictByContNextIdx != dictByContNextIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictContNextIdx = searchDictByContNextIdx->second;
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator iter = subdictContNextIdx->begin();
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamValueBuff*>::iterator end = subdictContNextIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamValueBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamValuePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamValueBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamValueBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamValueBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamValueBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamValueBuff*>( buff ) );
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamValueBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamValueBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamValueBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamValueBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamValueBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			ScopeId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamValueBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readBuffByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByValTentIdx" );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = readDerivedByValTentIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readBuffByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId )
	{
		static const std::string S_ProcName( "readBuffByScopeIdx" );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = readDerivedByScopeIdx( Authorization,
			TenantId,
			ScopeId );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByPrevIdx" );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = readDerivedByPrevIdx( Authorization,
			PrevTenantId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByNextIdx" );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = readDerivedByNextIdx( Authorization,
			NextTenantId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readBuffByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByContPrevIdx" );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = readDerivedByContPrevIdx( Authorization,
			TenantId,
			ScopeId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamValueBuff*> CFBamRamValueTable::readBuffByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByContNextIdx" );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = readDerivedByContNextIdx( Authorization,
			TenantId,
			ScopeId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfbam::CFBamValueBuff* buff = readBuffByUNameIdx( Authorization,
			TenantId,
			ScopeId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamValueBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfbam::CFBamValueBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			ScopeId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfbam::CFBamValueBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		static const std::string S_ProcName( "moveBuffUp" );
		static const std::string S_CouldNotLocateObject( "Could not locate object" );
		static const std::string S_CouldNotLocateObjectPrev( "Could not locate object.prev" );
		static const std::string S_CouldNotLocateObjectGrandPrev( "Could not locate object.prev.prev" );
		static const std::string S_CouldNotLocateObjectNext( "Could not locate object.next" );

		cfbam::CFBamValueBuff* grandprev = NULL;
		cfbam::CFBamValueBuff* prev = NULL;
		cfbam::CFBamValueBuff* cur = NULL;
		cfbam::CFBamValueBuff* next = NULL;

		cur = schema->getTableValue()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalPrevTenantIdNull() )
			&& ( cur->isOptionalPrevIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamValueBuff*>( cur ) );
		}

		prev = schema->getTableValue()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
		if( prev == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectPrev );
		}

		if( ( ! prev->isOptionalPrevTenantIdNull() )
			&& ( ! prev->isOptionalPrevIdNull() ) ) {
			grandprev = schema->getTableValue()->readDerivedByIdIdx(Authorization, prev->getOptionalPrevTenantIdValue(), prev->getOptionalPrevIdValue() );
			if( grandprev == NULL ) {
				delete cur;
				cur = NULL;
				delete prev;
				prev = NULL;
				throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
					S_ProcName,
					S_CouldNotLocateObjectGrandPrev );
			}
		}

		if( ( ! cur->isOptionalNextTenantIdNull() )
			&& ( ! cur->isOptionalNextIdNull() ) ) {
			next = schema->getTableValue()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
			if( next == NULL ) {
				delete cur;
				cur = NULL;
				delete prev;
				prev = NULL;
				delete grandprev;
				grandprev = NULL;
				throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
					S_ProcName,
					S_CouldNotLocateObjectNext );
			}
		}

		classcode_t classCode = prev->getClassCode();
		cfbam::CFBamValueBuff* editPrev = NULL;
		cfbam::CFBamValueBuff* editCur = NULL;
		cfbam::CFBamValueBuff* editGrandprev = NULL;
		cfbam::CFBamValueBuff* editNext = NULL;
		if( grandprev != NULL ) {
			grandprev->setOptionalNextTenantIdValue( cur->getRequiredTenantId() );
			grandprev->setOptionalNextIdValue( cur->getRequiredId() );
			cur->setOptionalPrevTenantIdValue( grandprev->getRequiredTenantId() );
			cur->setOptionalPrevIdValue( grandprev->getRequiredId() );
		}
		else {
			cur->setOptionalPrevTenantIdNull();
			cur->setOptionalPrevIdNull();
		}

			prev->setOptionalPrevTenantIdValue( cur->getRequiredTenantId() );
			prev->setOptionalPrevIdValue( cur->getRequiredId() );

			cur->setOptionalNextTenantIdValue( prev->getRequiredTenantId() );
			cur->setOptionalNextIdValue( prev->getRequiredId() );

		if( next != NULL ) {
			prev->setOptionalNextTenantIdValue( next->getRequiredTenantId() );
			prev->setOptionalNextIdValue( next->getRequiredId() );
			next->setOptionalPrevTenantIdValue( prev->getRequiredTenantId() );
			next->setOptionalPrevIdValue( prev->getRequiredId() );
		}
		else {
			prev->setOptionalNextTenantIdNull();
			prev->setOptionalNextIdNull();
		}

		if( grandprev != NULL ) {
			classCode = editGrandprev->getClassCode();
			if( classCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				editGrandprev = schema->getTableValue()->updateValue( Authorization, dynamic_cast<cfbam::CFBamValueBuff*>( grandprev ) );
			}
			else if( classCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableAtom()->updateAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobDef()->updateBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobType()->updateBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobCol()->updateBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolDef()->updateBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolType()->updateBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolCol()->updateBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateDef()->updateDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateType()->updateDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateCol()->updateDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleDef()->updateDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleType()->updateDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleCol()->updateDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatDef()->updateFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatType()->updateFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatCol()->updateFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Def()->updateInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Type()->updateInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId16Gen()->updateId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumDef()->updateEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumType()->updateEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Col()->updateInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Def()->updateInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Type()->updateInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId32Gen()->updateId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Col()->updateInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Def()->updateInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Type()->updateInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId64Gen()->updateId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Col()->updateInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenDef()->updateNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenType()->updateNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenCol()->updateNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensDef()->updateNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensType()->updateNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensCol()->updateNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberDef()->updateNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberType()->updateNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberCol()->updateNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringDef()->updateStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringType()->updateStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringCol()->updateStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateDef()->updateTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateType()->updateTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateCol()->updateTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeDef()->updateTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeType()->updateTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeCol()->updateTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampDef()->updateTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampType()->updateTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampCol()->updateTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextDef()->updateTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextType()->updateTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextCol()->updateTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeDef()->updateTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeType()->updateTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeCol()->updateTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampDef()->updateTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampType()->updateTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampCol()->updateTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenDef()->updateTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenType()->updateTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenCol()->updateTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Def()->updateUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Type()->updateUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Col()->updateUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Def()->updateUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Type()->updateUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Col()->updateUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Def()->updateUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Type()->updateUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Col()->updateUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidDef()->updateUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidType()->updateUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidGen()->updateUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidCol()->updateUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( grandprev ) ) );
			}
			else if( classCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				editGrandprev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTableCol()->updateTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( grandprev ) ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
		}

		classCode = editPrev->getClassCode();
			if( classCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				editPrev = schema->getTableValue()->updateValue( Authorization, prev );
			}
			else if( classCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableAtom()->updateAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobDef()->updateBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobType()->updateBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobCol()->updateBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolDef()->updateBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolType()->updateBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolCol()->updateBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateDef()->updateDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateType()->updateDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateCol()->updateDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleDef()->updateDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleType()->updateDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleCol()->updateDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatDef()->updateFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatType()->updateFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatCol()->updateFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Def()->updateInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Type()->updateInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId16Gen()->updateId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumDef()->updateEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumType()->updateEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Col()->updateInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Def()->updateInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Type()->updateInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId32Gen()->updateId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Col()->updateInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Def()->updateInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Type()->updateInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId64Gen()->updateId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Col()->updateInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenDef()->updateNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenType()->updateNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenCol()->updateNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensDef()->updateNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensType()->updateNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensCol()->updateNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberDef()->updateNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberType()->updateNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberCol()->updateNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringDef()->updateStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringType()->updateStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringCol()->updateStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateDef()->updateTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateType()->updateTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateCol()->updateTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeDef()->updateTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeType()->updateTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeCol()->updateTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampDef()->updateTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampType()->updateTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampCol()->updateTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextDef()->updateTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextType()->updateTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextCol()->updateTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeDef()->updateTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeType()->updateTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeCol()->updateTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampDef()->updateTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampType()->updateTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampCol()->updateTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenDef()->updateTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenType()->updateTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenCol()->updateTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Def()->updateUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Type()->updateUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Col()->updateUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Def()->updateUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Type()->updateUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Col()->updateUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Def()->updateUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Type()->updateUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Col()->updateUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidDef()->updateUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidType()->updateUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidGen()->updateUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidCol()->updateUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTableCol()->updateTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( prev ) ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}

		classCode = editCur->getClassCode();
			if( classCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				editCur = schema->getTableValue()->updateValue( Authorization, cur );
			}
			else if( classCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableAtom()->updateAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobDef()->updateBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobType()->updateBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobCol()->updateBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolDef()->updateBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolType()->updateBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolCol()->updateBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateDef()->updateDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateType()->updateDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateCol()->updateDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleDef()->updateDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleType()->updateDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleCol()->updateDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatDef()->updateFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatType()->updateFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatCol()->updateFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Def()->updateInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Type()->updateInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId16Gen()->updateId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumDef()->updateEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumType()->updateEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Col()->updateInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Def()->updateInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Type()->updateInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId32Gen()->updateId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Col()->updateInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Def()->updateInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Type()->updateInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId64Gen()->updateId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Col()->updateInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenDef()->updateNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenType()->updateNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenCol()->updateNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensDef()->updateNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensType()->updateNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensCol()->updateNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberDef()->updateNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberType()->updateNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberCol()->updateNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringDef()->updateStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringType()->updateStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringCol()->updateStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateDef()->updateTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateType()->updateTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateCol()->updateTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeDef()->updateTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeType()->updateTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeCol()->updateTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampDef()->updateTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampType()->updateTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampCol()->updateTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextDef()->updateTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextType()->updateTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextCol()->updateTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeDef()->updateTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeType()->updateTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeCol()->updateTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampDef()->updateTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampType()->updateTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampCol()->updateTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenDef()->updateTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenType()->updateTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenCol()->updateTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Def()->updateUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Type()->updateUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Col()->updateUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Def()->updateUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Type()->updateUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Col()->updateUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Def()->updateUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Type()->updateUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Col()->updateUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidDef()->updateUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidType()->updateUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidGen()->updateUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidCol()->updateUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTableCol()->updateTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( cur ) ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( next != NULL ) {
			classCode = next->getClassCode();
			if( classCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				editNext = schema->getTableValue()->updateValue( Authorization, next );
			}
			else if( classCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableAtom()->updateAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobDef()->updateBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobType()->updateBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobCol()->updateBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolDef()->updateBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolType()->updateBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolCol()->updateBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateDef()->updateDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateType()->updateDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateCol()->updateDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleDef()->updateDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleType()->updateDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleCol()->updateDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatDef()->updateFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatType()->updateFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatCol()->updateFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Def()->updateInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Type()->updateInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId16Gen()->updateId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumDef()->updateEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumType()->updateEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Col()->updateInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Def()->updateInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Type()->updateInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId32Gen()->updateId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Col()->updateInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Def()->updateInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Type()->updateInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId64Gen()->updateId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Col()->updateInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenDef()->updateNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenType()->updateNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenCol()->updateNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensDef()->updateNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensType()->updateNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensCol()->updateNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberDef()->updateNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberType()->updateNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberCol()->updateNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringDef()->updateStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringType()->updateStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringCol()->updateStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateDef()->updateTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateType()->updateTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateCol()->updateTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeDef()->updateTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeType()->updateTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeCol()->updateTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampDef()->updateTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampType()->updateTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampCol()->updateTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextDef()->updateTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextType()->updateTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextCol()->updateTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeDef()->updateTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeType()->updateTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeCol()->updateTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampDef()->updateTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampType()->updateTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampCol()->updateTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenDef()->updateTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenType()->updateTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenCol()->updateTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Def()->updateUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Type()->updateUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Col()->updateUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Def()->updateUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Type()->updateUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Col()->updateUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Def()->updateUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Type()->updateUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Col()->updateUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidDef()->updateUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidType()->updateUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidGen()->updateUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidCol()->updateUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTableCol()->updateTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( next ) ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
		}

		if( editPrev != NULL ) {
			delete editPrev;
			editPrev = NULL;
		}
		if( editGrandprev != NULL ) {
			delete editGrandprev;
			editGrandprev = NULL;
		}
		if( editNext != NULL ) {
			delete editNext;
			editNext = NULL;
		}

		return( dynamic_cast<cfbam::CFBamValueBuff*>( editCur ) );
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		const static std::string S_ProcName( "moveBuffDown" );
		const static std::string S_CouldNotLocateObject( "Could not locate object" );
		const static std::string S_CouldNotLocateObjectDotNext( "Could not locate object.next" );
		const static std::string S_CouldNotLocateObjectDotNextDotNext( "Could not locate object.next.next" );
		const static std::string S_CouldNotLocateObjectDotPrev( "Could not locate object.prev" );

		cfbam::CFBamValueBuff* prev = NULL;
		cfbam::CFBamValueBuff* cur = NULL;
		cfbam::CFBamValueBuff* next = NULL;
		cfbam::CFBamValueBuff* grandnext = NULL;

		cur = schema->getTableValue()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalNextTenantIdNull() )
			&& ( cur->isOptionalNextIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamValueBuff*>( cur ) );
		}

		next = schema->getTableValue()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
		if( next == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectDotNext );
		}

		if( ( ! next->isOptionalNextTenantIdNull()  )
			&& ( ! next->isOptionalNextIdNull() ) ) {
			grandnext = schema->getTableValue()->readDerivedByIdIdx(Authorization, next->getOptionalNextTenantIdValue(), next->getOptionalNextIdValue() );
			if( grandnext == NULL ) {
				delete cur;
				cur = NULL;
				delete next;
				next = NULL;
				throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
					S_ProcName,
					S_CouldNotLocateObjectDotNextDotNext );
			}
		}

		if( ( ! cur->isOptionalPrevTenantIdNull() )
			&& ( ! cur->isOptionalPrevIdNull() ) ) {
			prev = schema->getTableValue()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
			if( prev == NULL ) {
				delete cur;
				cur = NULL;
				delete next;
				next = NULL;
				delete grandnext;
				grandnext = NULL;
				throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
					S_ProcName,
					S_CouldNotLocateObjectDotPrev );
			}
		}

		classcode_t classCode = cur->getClassCode();
		cfbam::CFBamValueBuff* editCur = NULL;
		cfbam::CFBamValueBuff* editNext = NULL;
		cfbam::CFBamValueBuff* editGrandnext = NULL;
		cfbam::CFBamValueBuff* editPrev = NULL;

		if( prev != NULL ) {
			prev->setOptionalNextTenantIdValue( next->getRequiredTenantId() );
			prev->setOptionalNextIdValue( next->getRequiredId() );
			next->setOptionalPrevTenantIdValue( prev->getRequiredTenantId() );
			next->setOptionalPrevIdValue( prev->getRequiredId() );
		}
		else {
			next->setOptionalPrevTenantIdNull();
			next->setOptionalPrevIdNull();
		}

			cur->setOptionalPrevTenantIdValue( next->getRequiredTenantId() );
			cur->setOptionalPrevIdValue( next->getRequiredId() );

			next->setOptionalNextTenantIdValue( cur->getRequiredTenantId() );
			next->setOptionalNextIdValue( cur->getRequiredId() );

		if( editGrandnext != NULL ) {
			cur->setOptionalNextTenantIdValue( grandnext->getRequiredTenantId() );
			cur->setOptionalNextIdValue( grandnext->getRequiredId() );
			grandnext->setOptionalPrevTenantIdValue( cur->getRequiredTenantId() );
			grandnext->setOptionalPrevIdValue( cur->getRequiredId() );
		}
		else {
			cur->setOptionalNextTenantIdNull();
			cur->setOptionalNextIdNull();
		}

		if( prev != NULL ) {
			classCode = prev->getClassCode();
			if( classCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				editPrev = schema->getTableValue()->updateValue( Authorization, prev );
			}
			else if( classCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableAtom()->updateAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobDef()->updateBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobType()->updateBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobCol()->updateBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolDef()->updateBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolType()->updateBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolCol()->updateBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateDef()->updateDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateType()->updateDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateCol()->updateDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleDef()->updateDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleType()->updateDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleCol()->updateDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatDef()->updateFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatType()->updateFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatCol()->updateFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Def()->updateInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Type()->updateInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId16Gen()->updateId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumDef()->updateEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumType()->updateEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Col()->updateInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Def()->updateInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Type()->updateInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId32Gen()->updateId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Col()->updateInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Def()->updateInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Type()->updateInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId64Gen()->updateId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Col()->updateInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenDef()->updateNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenType()->updateNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenCol()->updateNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensDef()->updateNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensType()->updateNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensCol()->updateNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberDef()->updateNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberType()->updateNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberCol()->updateNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringDef()->updateStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringType()->updateStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringCol()->updateStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateDef()->updateTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateType()->updateTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateCol()->updateTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeDef()->updateTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeType()->updateTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeCol()->updateTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampDef()->updateTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampType()->updateTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampCol()->updateTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextDef()->updateTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextType()->updateTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextCol()->updateTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeDef()->updateTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeType()->updateTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeCol()->updateTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampDef()->updateTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampType()->updateTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampCol()->updateTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenDef()->updateTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenType()->updateTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenCol()->updateTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Def()->updateUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Type()->updateUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Col()->updateUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Def()->updateUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Type()->updateUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Col()->updateUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Def()->updateUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Type()->updateUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Col()->updateUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidDef()->updateUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidType()->updateUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidGen()->updateUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidCol()->updateUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTableCol()->updateTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( prev ) ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}
		}

		classCode = cur->getClassCode();
			if( classCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				editCur = schema->getTableValue()->updateValue( Authorization, cur );
			}
			else if( classCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableAtom()->updateAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobDef()->updateBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobType()->updateBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobCol()->updateBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolDef()->updateBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolType()->updateBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolCol()->updateBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateDef()->updateDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateType()->updateDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateCol()->updateDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleDef()->updateDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleType()->updateDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleCol()->updateDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatDef()->updateFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatType()->updateFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatCol()->updateFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Def()->updateInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Type()->updateInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId16Gen()->updateId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumDef()->updateEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumType()->updateEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Col()->updateInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Def()->updateInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Type()->updateInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId32Gen()->updateId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Col()->updateInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Def()->updateInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Type()->updateInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId64Gen()->updateId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Col()->updateInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenDef()->updateNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenType()->updateNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenCol()->updateNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensDef()->updateNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensType()->updateNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensCol()->updateNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberDef()->updateNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberType()->updateNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberCol()->updateNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringDef()->updateStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringType()->updateStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringCol()->updateStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateDef()->updateTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateType()->updateTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateCol()->updateTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeDef()->updateTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeType()->updateTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeCol()->updateTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampDef()->updateTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampType()->updateTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampCol()->updateTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextDef()->updateTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextType()->updateTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextCol()->updateTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeDef()->updateTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeType()->updateTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeCol()->updateTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampDef()->updateTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampType()->updateTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampCol()->updateTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenDef()->updateTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenType()->updateTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenCol()->updateTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Def()->updateUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Type()->updateUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Col()->updateUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Def()->updateUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Type()->updateUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Col()->updateUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Def()->updateUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Type()->updateUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Col()->updateUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidDef()->updateUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidType()->updateUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidGen()->updateUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidCol()->updateUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( cur ) ) );
			}
			else if( classCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				editCur = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTableCol()->updateTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( cur ) ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		classCode = editNext->getClassCode();
			if( classCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				editNext = schema->getTableValue()->updateValue( Authorization, next );
			}
			else if( classCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableAtom()->updateAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobDef()->updateBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobType()->updateBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobCol()->updateBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolDef()->updateBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolType()->updateBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolCol()->updateBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateDef()->updateDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateType()->updateDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateCol()->updateDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleDef()->updateDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleType()->updateDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleCol()->updateDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatDef()->updateFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatType()->updateFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatCol()->updateFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Def()->updateInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Type()->updateInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId16Gen()->updateId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumDef()->updateEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumType()->updateEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Col()->updateInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Def()->updateInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Type()->updateInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId32Gen()->updateId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Col()->updateInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Def()->updateInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Type()->updateInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId64Gen()->updateId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Col()->updateInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenDef()->updateNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenType()->updateNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenCol()->updateNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensDef()->updateNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensType()->updateNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensCol()->updateNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberDef()->updateNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberType()->updateNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberCol()->updateNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringDef()->updateStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringType()->updateStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringCol()->updateStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateDef()->updateTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateType()->updateTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateCol()->updateTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeDef()->updateTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeType()->updateTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeCol()->updateTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampDef()->updateTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampType()->updateTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampCol()->updateTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextDef()->updateTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextType()->updateTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextCol()->updateTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeDef()->updateTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeType()->updateTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeCol()->updateTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampDef()->updateTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampType()->updateTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampCol()->updateTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenDef()->updateTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenType()->updateTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenCol()->updateTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Def()->updateUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Type()->updateUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Col()->updateUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Def()->updateUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Type()->updateUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Col()->updateUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Def()->updateUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Type()->updateUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Col()->updateUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidDef()->updateUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidType()->updateUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidGen()->updateUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidCol()->updateUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTableCol()->updateTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( next ) ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( editGrandnext != NULL ) {
			classCode = editGrandnext->getClassCode();
			if( classCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				editGrandnext = schema->getTableValue()->updateValue( Authorization, dynamic_cast<cfbam::CFBamValueBuff*>( editGrandnext ) );
			}
			else if( classCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableAtom()->updateAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobDef()->updateBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobType()->updateBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobCol()->updateBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolDef()->updateBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolType()->updateBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolCol()->updateBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateDef()->updateDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateType()->updateDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateCol()->updateDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleDef()->updateDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleType()->updateDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleCol()->updateDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatDef()->updateFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatType()->updateFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatCol()->updateFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Def()->updateInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Type()->updateInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId16Gen()->updateId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumDef()->updateEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumType()->updateEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Col()->updateInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Def()->updateInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Type()->updateInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId32Gen()->updateId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Col()->updateInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Def()->updateInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Type()->updateInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId64Gen()->updateId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Col()->updateInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenDef()->updateNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenType()->updateNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenCol()->updateNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensDef()->updateNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensType()->updateNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensCol()->updateNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberDef()->updateNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberType()->updateNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberCol()->updateNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringDef()->updateStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringType()->updateStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringCol()->updateStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateDef()->updateTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateType()->updateTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateCol()->updateTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeDef()->updateTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeType()->updateTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeCol()->updateTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampDef()->updateTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampType()->updateTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampCol()->updateTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextDef()->updateTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextType()->updateTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextCol()->updateTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeDef()->updateTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeType()->updateTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeCol()->updateTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampDef()->updateTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampType()->updateTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampCol()->updateTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenDef()->updateTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenType()->updateTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenCol()->updateTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Def()->updateUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Type()->updateUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Col()->updateUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Def()->updateUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Type()->updateUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Col()->updateUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Def()->updateUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Type()->updateUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Col()->updateUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidDef()->updateUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidType()->updateUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidGen()->updateUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidCol()->updateUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( editGrandnext ) ) );
			}
			else if( classCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				editGrandnext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTableCol()->updateTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( editGrandnext ) ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
		}

		if( editPrev != NULL ) {
			delete editPrev;
			editPrev = NULL;
		}
		if( editNext != NULL ) {
			delete editNext;
			editNext = NULL;
		}
		if( editGrandnext != NULL ) {
			delete editGrandnext;
			editGrandnext = NULL;
		}

		return( dynamic_cast<cfbam::CFBamValueBuff*>( editCur ) );
	}

	cfbam::CFBamValueBuff* CFBamRamValueTable::updateValue( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamValueBuff* Buff )
	{
		static const std::string S_ProcName( "updateValue" );
		cfbam::CFBamValuePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in Value for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamValueBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for Value primary key " );
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
		cfbam::CFBamValueByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUNameIdx.setRequiredScopeId( existing->getRequiredScopeId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamValueByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUNameIdx.setRequiredScopeId( Buff->getRequiredScopeId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamValueByValTentIdxKey existingKeyValTentIdx;
		existingKeyValTentIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamValueByValTentIdxKey newKeyValTentIdx;
		newKeyValTentIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamValueByScopeIdxKey existingKeyScopeIdx;
		existingKeyScopeIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyScopeIdx.setRequiredScopeId( existing->getRequiredScopeId() );
		cfbam::CFBamValueByScopeIdxKey newKeyScopeIdx;
		newKeyScopeIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyScopeIdx.setRequiredScopeId( Buff->getRequiredScopeId() );
		cfbam::CFBamValueByDefSchemaIdxKey existingKeyDefSchemaIdx;
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
		cfbam::CFBamValueByDefSchemaIdxKey newKeyDefSchemaIdx;
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
		cfbam::CFBamValueByPrevIdxKey existingKeyPrevIdx;
		if( existing->isOptionalPrevTenantIdNull() ) {
			existingKeyPrevIdx.setOptionalPrevTenantIdNull();
		}
		else {
			existingKeyPrevIdx.setOptionalPrevTenantIdValue( existing->getOptionalPrevTenantIdValue() );
		}
		if( existing->isOptionalPrevIdNull() ) {
			existingKeyPrevIdx.setOptionalPrevIdNull();
		}
		else {
			existingKeyPrevIdx.setOptionalPrevIdValue( existing->getOptionalPrevIdValue() );
		}
		cfbam::CFBamValueByPrevIdxKey newKeyPrevIdx;
		if( Buff->isOptionalPrevTenantIdNull() ) {
			newKeyPrevIdx.setOptionalPrevTenantIdNull();
		}
		else {
			newKeyPrevIdx.setOptionalPrevTenantIdValue( Buff->getOptionalPrevTenantIdValue() );
		}
		if( Buff->isOptionalPrevIdNull() ) {
			newKeyPrevIdx.setOptionalPrevIdNull();
		}
		else {
			newKeyPrevIdx.setOptionalPrevIdValue( Buff->getOptionalPrevIdValue() );
		}
		cfbam::CFBamValueByNextIdxKey existingKeyNextIdx;
		if( existing->isOptionalNextTenantIdNull() ) {
			existingKeyNextIdx.setOptionalNextTenantIdNull();
		}
		else {
			existingKeyNextIdx.setOptionalNextTenantIdValue( existing->getOptionalNextTenantIdValue() );
		}
		if( existing->isOptionalNextIdNull() ) {
			existingKeyNextIdx.setOptionalNextIdNull();
		}
		else {
			existingKeyNextIdx.setOptionalNextIdValue( existing->getOptionalNextIdValue() );
		}
		cfbam::CFBamValueByNextIdxKey newKeyNextIdx;
		if( Buff->isOptionalNextTenantIdNull() ) {
			newKeyNextIdx.setOptionalNextTenantIdNull();
		}
		else {
			newKeyNextIdx.setOptionalNextTenantIdValue( Buff->getOptionalNextTenantIdValue() );
		}
		if( Buff->isOptionalNextIdNull() ) {
			newKeyNextIdx.setOptionalNextIdNull();
		}
		else {
			newKeyNextIdx.setOptionalNextIdValue( Buff->getOptionalNextIdValue() );
		}
		cfbam::CFBamValueByContPrevIdxKey existingKeyContPrevIdx;
		existingKeyContPrevIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyContPrevIdx.setRequiredScopeId( existing->getRequiredScopeId() );
		if( existing->isOptionalPrevIdNull() ) {
			existingKeyContPrevIdx.setOptionalPrevIdNull();
		}
		else {
			existingKeyContPrevIdx.setOptionalPrevIdValue( existing->getOptionalPrevIdValue() );
		}
		cfbam::CFBamValueByContPrevIdxKey newKeyContPrevIdx;
		newKeyContPrevIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyContPrevIdx.setRequiredScopeId( Buff->getRequiredScopeId() );
		if( Buff->isOptionalPrevIdNull() ) {
			newKeyContPrevIdx.setOptionalPrevIdNull();
		}
		else {
			newKeyContPrevIdx.setOptionalPrevIdValue( Buff->getOptionalPrevIdValue() );
		}
		cfbam::CFBamValueByContNextIdxKey existingKeyContNextIdx;
		existingKeyContNextIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyContNextIdx.setRequiredScopeId( existing->getRequiredScopeId() );
		if( existing->isOptionalNextIdNull() ) {
			existingKeyContNextIdx.setOptionalNextIdNull();
		}
		else {
			existingKeyContNextIdx.setOptionalNextIdValue( existing->getOptionalNextIdValue() );
		}
		cfbam::CFBamValueByContNextIdxKey newKeyContNextIdx;
		newKeyContNextIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyContNextIdx.setRequiredScopeId( Buff->getRequiredScopeId() );
		if( Buff->isOptionalNextIdNull() ) {
			newKeyContNextIdx.setOptionalNextIdNull();
		}
		else {
			newKeyContNextIdx.setOptionalNextIdValue( Buff->getOptionalNextIdValue() );
		}
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ValueUNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamScopeBuff* chk = dynamic_cast<cfbam::CFBamScopeBuff*>( schema->getTableScope()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredScopeId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Scope to table Scope" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		const classcode_t hasClassCode = existing->getClassCode();
		if( hasClassCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
			*existing = *Buff;
		}
		else if( hasClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamAtomBuff*>( existing ) = *dynamic_cast<cfbam::CFBamAtomBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamBlobDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamBlobDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamBlobTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamBlobTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamBlobColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamBlobColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamBoolDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamBoolDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamBoolTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamBoolTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamBoolColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamBoolColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamDateDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamDateDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamDateTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamDateTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamDateColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamDateColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamDoubleDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamDoubleDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamDoubleColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamDoubleColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamFloatDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamFloatDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamFloatTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamFloatTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamFloatColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamFloatColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamInt16DefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamInt16DefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamInt16TypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamInt16TypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamId16GenBuff*>( existing ) = *dynamic_cast<cfbam::CFBamId16GenBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamEnumDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamEnumDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamEnumTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamEnumTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamInt16ColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamInt16ColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamInt32DefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamInt32DefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamInt32TypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamInt32TypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamId32GenBuff*>( existing ) = *dynamic_cast<cfbam::CFBamId32GenBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamInt32ColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamInt32ColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamInt64DefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamInt64DefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamInt64TypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamInt64TypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamId64GenBuff*>( existing ) = *dynamic_cast<cfbam::CFBamId64GenBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamInt64ColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamInt64ColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamNmTokenColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamNmTokenColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamNmTokensColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamNmTokensColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamNumberDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamNumberDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamNumberTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamNumberTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamNumberColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamNumberColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamStringDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamStringDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamStringTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamStringTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamStringColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamStringColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTZDateDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTZDateDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTZDateColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTZDateColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTZTimeColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTZTimeColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTextDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTextDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTextTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTextTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTextColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTextColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTimeDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTimeDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTimeTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTimeTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTimeColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTimeColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTimestampDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTimestampDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTimestampColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTimestampColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTokenDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTokenDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTokenTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTokenTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTokenColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTokenColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUInt16DefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUInt16DefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUInt16ColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUInt16ColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUInt32DefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUInt32DefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUInt32ColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUInt32ColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUInt64DefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUInt64DefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUInt64ColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUInt64ColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUuidDefBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUuidDefBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUuidTypeBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUuidTypeBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUuidGenBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUuidGenBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamUuidColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamUuidColBuff*>( Buff );
		}
		else if( hasClassCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
			*dynamic_cast<cfbam::CFBamTableColBuff*>( existing ) = *dynamic_cast<cfbam::CFBamTableColBuff*>( Buff );
		}
		else {
			const static std::string S_DoesNotDerive( " does not derive from cfbam::CFBamValueBuff" );
			std::string Msg( "Unsupported buffer class " );
			Msg.append( cflib::CFLib::formatClassCode( hasClassCode ) );
			Msg.append( S_DoesNotDerive );
			delete Buff;
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				Msg );
		}
		existing->setRequiredRevision( existing->getRequiredRevision() + 1 );

		dictByPKey->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamValueByUNameIdxKey, cfbam::CFBamValueBuff*>::value_type( newKeyUNameIdx, existing ) );

		std::map<cfbam::CFBamValuePKey,
			 cfbam::CFBamValueBuff*>* subdictValTentIdx;
		auto searchDictByValTentIdx = dictByValTentIdx->find( existingKeyValTentIdx );
		if( searchDictByValTentIdx != dictByValTentIdx->end() ) {
			subdictValTentIdx = searchDictByValTentIdx->second;
			auto searchSubDict = subdictValTentIdx->find( pkey );
			if( searchSubDict != subdictValTentIdx->end() ) {
				subdictValTentIdx->erase( searchSubDict );
			}
			if( subdictValTentIdx->size() <= 0 ) {
				delete subdictValTentIdx;
				dictByValTentIdx->erase( searchDictByValTentIdx );
			}
			subdictValTentIdx = NULL;
		}
		auto searchNewKeyDictByValTentIdx = dictByValTentIdx->find( newKeyValTentIdx );
		if( searchNewKeyDictByValTentIdx != dictByValTentIdx->end() ) {
			subdictValTentIdx = searchNewKeyDictByValTentIdx->second;
		}
		else {
			subdictValTentIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByValTentIdx->insert( std::map<cfbam::CFBamValueByValTentIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( newKeyValTentIdx, subdictValTentIdx ) );
		}
		subdictValTentIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamValuePKey,
			 cfbam::CFBamValueBuff*>* subdictScopeIdx;
		auto searchDictByScopeIdx = dictByScopeIdx->find( existingKeyScopeIdx );
		if( searchDictByScopeIdx != dictByScopeIdx->end() ) {
			subdictScopeIdx = searchDictByScopeIdx->second;
			auto searchSubDict = subdictScopeIdx->find( pkey );
			if( searchSubDict != subdictScopeIdx->end() ) {
				subdictScopeIdx->erase( searchSubDict );
			}
			if( subdictScopeIdx->size() <= 0 ) {
				delete subdictScopeIdx;
				dictByScopeIdx->erase( searchDictByScopeIdx );
			}
			subdictScopeIdx = NULL;
		}
		auto searchNewKeyDictByScopeIdx = dictByScopeIdx->find( newKeyScopeIdx );
		if( searchNewKeyDictByScopeIdx != dictByScopeIdx->end() ) {
			subdictScopeIdx = searchNewKeyDictByScopeIdx->second;
		}
		else {
			subdictScopeIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByScopeIdx->insert( std::map<cfbam::CFBamValueByScopeIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( newKeyScopeIdx, subdictScopeIdx ) );
		}
		subdictScopeIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamValuePKey,
			 cfbam::CFBamValueBuff*>* subdictDefSchemaIdx;
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
			subdictDefSchemaIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamValueByDefSchemaIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( newKeyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamValuePKey,
			 cfbam::CFBamValueBuff*>* subdictPrevIdx;
		auto searchDictByPrevIdx = dictByPrevIdx->find( existingKeyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			subdictPrevIdx = searchDictByPrevIdx->second;
			auto searchSubDict = subdictPrevIdx->find( pkey );
			if( searchSubDict != subdictPrevIdx->end() ) {
				subdictPrevIdx->erase( searchSubDict );
			}
			if( subdictPrevIdx->size() <= 0 ) {
				delete subdictPrevIdx;
				dictByPrevIdx->erase( searchDictByPrevIdx );
			}
			subdictPrevIdx = NULL;
		}
		auto searchNewKeyDictByPrevIdx = dictByPrevIdx->find( newKeyPrevIdx );
		if( searchNewKeyDictByPrevIdx != dictByPrevIdx->end() ) {
			subdictPrevIdx = searchNewKeyDictByPrevIdx->second;
		}
		else {
			subdictPrevIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamValueByPrevIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( newKeyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamValuePKey,
			 cfbam::CFBamValueBuff*>* subdictNextIdx;
		auto searchDictByNextIdx = dictByNextIdx->find( existingKeyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			subdictNextIdx = searchDictByNextIdx->second;
			auto searchSubDict = subdictNextIdx->find( pkey );
			if( searchSubDict != subdictNextIdx->end() ) {
				subdictNextIdx->erase( searchSubDict );
			}
			if( subdictNextIdx->size() <= 0 ) {
				delete subdictNextIdx;
				dictByNextIdx->erase( searchDictByNextIdx );
			}
			subdictNextIdx = NULL;
		}
		auto searchNewKeyDictByNextIdx = dictByNextIdx->find( newKeyNextIdx );
		if( searchNewKeyDictByNextIdx != dictByNextIdx->end() ) {
			subdictNextIdx = searchNewKeyDictByNextIdx->second;
		}
		else {
			subdictNextIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamValueByNextIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( newKeyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamValuePKey,
			 cfbam::CFBamValueBuff*>* subdictContPrevIdx;
		auto searchDictByContPrevIdx = dictByContPrevIdx->find( existingKeyContPrevIdx );
		if( searchDictByContPrevIdx != dictByContPrevIdx->end() ) {
			subdictContPrevIdx = searchDictByContPrevIdx->second;
			auto searchSubDict = subdictContPrevIdx->find( pkey );
			if( searchSubDict != subdictContPrevIdx->end() ) {
				subdictContPrevIdx->erase( searchSubDict );
			}
			if( subdictContPrevIdx->size() <= 0 ) {
				delete subdictContPrevIdx;
				dictByContPrevIdx->erase( searchDictByContPrevIdx );
			}
			subdictContPrevIdx = NULL;
		}
		auto searchNewKeyDictByContPrevIdx = dictByContPrevIdx->find( newKeyContPrevIdx );
		if( searchNewKeyDictByContPrevIdx != dictByContPrevIdx->end() ) {
			subdictContPrevIdx = searchNewKeyDictByContPrevIdx->second;
		}
		else {
			subdictContPrevIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByContPrevIdx->insert( std::map<cfbam::CFBamValueByContPrevIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( newKeyContPrevIdx, subdictContPrevIdx ) );
		}
		subdictContPrevIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamValuePKey,
			 cfbam::CFBamValueBuff*>* subdictContNextIdx;
		auto searchDictByContNextIdx = dictByContNextIdx->find( existingKeyContNextIdx );
		if( searchDictByContNextIdx != dictByContNextIdx->end() ) {
			subdictContNextIdx = searchDictByContNextIdx->second;
			auto searchSubDict = subdictContNextIdx->find( pkey );
			if( searchSubDict != subdictContNextIdx->end() ) {
				subdictContNextIdx->erase( searchSubDict );
			}
			if( subdictContNextIdx->size() <= 0 ) {
				delete subdictContNextIdx;
				dictByContNextIdx->erase( searchDictByContNextIdx );
			}
			subdictContNextIdx = NULL;
		}
		auto searchNewKeyDictByContNextIdx = dictByContNextIdx->find( newKeyContNextIdx );
		if( searchNewKeyDictByContNextIdx != dictByContNextIdx->end() ) {
			subdictContNextIdx = searchNewKeyDictByContNextIdx->second;
		}
		else {
			subdictContNextIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>();
			dictByContNextIdx->insert( std::map<cfbam::CFBamValueByContNextIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamValueBuff*>*>::value_type( newKeyContNextIdx, subdictContNextIdx ) );
		}
		subdictContNextIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamValueBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamValueBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamValueTable::deleteValue( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamValueBuff* Buff )
	{
		static const std::string S_ProcName( "deleteValue" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamValuePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamValueBuff* existing = searchExisting->second;

		const int64_t* prevTenantId = existing->getOptionalPrevTenantIdReference();
		const int64_t* prevId = existing->getOptionalPrevIdReference();
		const int64_t* nextTenantId = existing->getOptionalNextTenantIdReference();
		const int64_t* nextId = existing->getOptionalNextIdReference();

		cfbam::CFBamValueBuff* prev = NULL;
		cfbam::CFBamValueBuff* editPrev = NULL;
		if( ( prevTenantId != NULL )
			&& ( prevId != NULL ) ) {
			prev = schema->getTableValue()->readDerivedByIdIdx( Authorization,
				*prevTenantId,
				*prevId );
			if( prev == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Prev );
			}
			if( nextTenantId == NULL ) {
				prev->setOptionalNextTenantIdNull();
			}
			else {
				prev->setOptionalNextTenantIdValue( *nextTenantId );
			}
			if( nextId == NULL ) {
				prev->setOptionalNextIdNull();
			}
			else {
				prev->setOptionalNextIdValue( *nextId );
			}
			classCode = prev->getClassCode();
			if( classCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				editPrev = schema->getTableValue()->updateValue( Authorization, prev );
			}
			else if( classCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableAtom()->updateAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobDef()->updateBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobType()->updateBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobCol()->updateBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolDef()->updateBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolType()->updateBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolCol()->updateBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateDef()->updateDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateType()->updateDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateCol()->updateDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleDef()->updateDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleType()->updateDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleCol()->updateDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatDef()->updateFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatType()->updateFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatCol()->updateFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Def()->updateInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Type()->updateInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId16Gen()->updateId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumDef()->updateEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumType()->updateEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Col()->updateInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Def()->updateInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Type()->updateInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId32Gen()->updateId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Col()->updateInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Def()->updateInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Type()->updateInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId64Gen()->updateId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Col()->updateInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenDef()->updateNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenType()->updateNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenCol()->updateNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensDef()->updateNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensType()->updateNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensCol()->updateNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberDef()->updateNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberType()->updateNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberCol()->updateNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringDef()->updateStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringType()->updateStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringCol()->updateStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateDef()->updateTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateType()->updateTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateCol()->updateTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeDef()->updateTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeType()->updateTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeCol()->updateTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampDef()->updateTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampType()->updateTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampCol()->updateTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextDef()->updateTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextType()->updateTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextCol()->updateTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeDef()->updateTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeType()->updateTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeCol()->updateTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampDef()->updateTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampType()->updateTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampCol()->updateTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenDef()->updateTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenType()->updateTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenCol()->updateTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Def()->updateUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Type()->updateUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Col()->updateUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Def()->updateUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Type()->updateUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Col()->updateUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Def()->updateUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Type()->updateUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Col()->updateUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidDef()->updateUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidType()->updateUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidGen()->updateUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidCol()->updateUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( prev ) ) );
			}
			else if( classCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				editPrev = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTableCol()->updateTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( prev ) ) );
			}
			else {
				if( editPrev != NULL ) {
					delete editPrev;
					editPrev = NULL;
				}
				if( prev != NULL ) {
					delete prev;
					prev = NULL;
				}
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			if( editPrev != NULL ) {
				delete editPrev;
				editPrev = NULL;
			}
			prev = NULL;
		}

		cfbam::CFBamValueBuff* next = NULL;
		cfbam::CFBamValueBuff* editNext = NULL;
		if( ( nextTenantId != NULL )
			&& ( nextId != NULL ) ) {
			next = schema->getTableValue()->readDerivedByIdIdx( Authorization,
				*nextTenantId,
				*nextId );
			if( next == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					"next" );
			}
			classCode = next->getClassCode();
			if( prevTenantId == NULL ) {
				next->setOptionalPrevTenantIdNull();
			}
			else {
				next->setOptionalPrevTenantIdValue( *prevTenantId );
			}
			if( prevId == NULL ) {
				next->setOptionalPrevIdNull();
			}
			else {
				next->setOptionalPrevIdValue( *prevId );
			}
			if( classCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				editNext = schema->getTableValue()->updateValue( Authorization, next );
			}
			else if( classCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableAtom()->updateAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobDef()->updateBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobType()->updateBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBlobCol()->updateBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolDef()->updateBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolType()->updateBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableBoolCol()->updateBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateDef()->updateDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateType()->updateDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDateCol()->updateDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleDef()->updateDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleType()->updateDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableDoubleCol()->updateDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatDef()->updateFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatType()->updateFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableFloatCol()->updateFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Def()->updateInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Type()->updateInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId16Gen()->updateId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumDef()->updateEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableEnumType()->updateEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt16Col()->updateInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Def()->updateInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Type()->updateInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId32Gen()->updateId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt32Col()->updateInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Def()->updateInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Type()->updateInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableId64Gen()->updateId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableInt64Col()->updateInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenDef()->updateNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenType()->updateNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokenCol()->updateNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensDef()->updateNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensType()->updateNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNmTokensCol()->updateNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberDef()->updateNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberType()->updateNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableNumberCol()->updateNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringDef()->updateStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringType()->updateStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableStringCol()->updateStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateDef()->updateTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateType()->updateTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZDateCol()->updateTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeDef()->updateTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeType()->updateTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimeCol()->updateTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampDef()->updateTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampType()->updateTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTZTimestampCol()->updateTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextDef()->updateTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextType()->updateTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTextCol()->updateTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeDef()->updateTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeType()->updateTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimeCol()->updateTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampDef()->updateTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampType()->updateTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTimestampCol()->updateTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenDef()->updateTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenType()->updateTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTokenCol()->updateTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Def()->updateUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Type()->updateUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt16Col()->updateUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Def()->updateUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Type()->updateUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt32Col()->updateUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Def()->updateUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Type()->updateUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUInt64Col()->updateUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidDef()->updateUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidType()->updateUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidGen()->updateUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableUuidCol()->updateUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( next ) ) );
			}
			else if( classCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				editNext = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableTableCol()->updateTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( next ) ) );
			}
			else {
				if( editNext != NULL ) {
					delete editNext;
					editNext = NULL;
				}
				if( next != NULL ) {
					delete next;
					next = NULL;
				}
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			if( editNext != NULL ) {
				delete editNext;
				editNext = NULL;
			}
			next = NULL;
		}

		std::TCFLibOwningVector<cfbam::CFBamTableColBuff*> arrCheckReferencingTableCols = schema->getTableTableCol()->readDerivedByDataIdx( Authorization,
			existing->getRequiredTenantIdReference(),
			existing->getRequiredIdReference() );
		if( arrCheckReferencingTableCols.size() > 0 ) {
			schema->getTableTableCol()->deleteTableColByDataIdx( Authorization,
			existing->getRequiredTenantIdReference(),
			existing->getRequiredIdReference() );
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> arrCheckReferencingIndexCols = schema->getTableIndexCol()->readDerivedByColIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		if( arrCheckReferencingIndexCols.size() > 0 ) {
			schema->getTableIndexCol()->deleteIndexColByColIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		}
		cfbam::CFBamValueByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUNameIdx.setRequiredScopeId( existing->getRequiredScopeId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamValueByValTentIdxKey keyValTentIdx;
		keyValTentIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamValueByScopeIdxKey keyScopeIdx;
		keyScopeIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyScopeIdx.setRequiredScopeId( existing->getRequiredScopeId() );
		cfbam::CFBamValueByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamValueByPrevIdxKey keyPrevIdx;
		if( existing->isOptionalPrevTenantIdNull() ) {
			keyPrevIdx.setOptionalPrevTenantIdNull();
		}
		else {
			keyPrevIdx.setOptionalPrevTenantIdValue( existing->getOptionalPrevTenantIdValue() );
		}
		if( existing->isOptionalPrevIdNull() ) {
			keyPrevIdx.setOptionalPrevIdNull();
		}
		else {
			keyPrevIdx.setOptionalPrevIdValue( existing->getOptionalPrevIdValue() );
		}
		cfbam::CFBamValueByNextIdxKey keyNextIdx;
		if( existing->isOptionalNextTenantIdNull() ) {
			keyNextIdx.setOptionalNextTenantIdNull();
		}
		else {
			keyNextIdx.setOptionalNextTenantIdValue( existing->getOptionalNextTenantIdValue() );
		}
		if( existing->isOptionalNextIdNull() ) {
			keyNextIdx.setOptionalNextIdNull();
		}
		else {
			keyNextIdx.setOptionalNextIdValue( existing->getOptionalNextIdValue() );
		}
		cfbam::CFBamValueByContPrevIdxKey keyContPrevIdx;
		keyContPrevIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyContPrevIdx.setRequiredScopeId( existing->getRequiredScopeId() );
		if( existing->isOptionalPrevIdNull() ) {
			keyContPrevIdx.setOptionalPrevIdNull();
		}
		else {
			keyContPrevIdx.setOptionalPrevIdValue( existing->getOptionalPrevIdValue() );
		}
		cfbam::CFBamValueByContNextIdxKey keyContNextIdx;
		keyContNextIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyContNextIdx.setRequiredScopeId( existing->getRequiredScopeId() );
		if( existing->isOptionalNextIdNull() ) {
			keyContNextIdx.setOptionalNextIdNull();
		}
		else {
			keyContNextIdx.setOptionalNextIdValue( existing->getOptionalNextIdValue() );
		}
		// Validate reverse foreign keys

		{
			cfbam::CFBamAtomBuff* refIdIdx = dynamic_cast<cfbam::CFBamAtomBuff*>( schema->getTableAtom()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table Atom for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamTableColBuff* refIdIdx = dynamic_cast<cfbam::CFBamTableColBuff*>( schema->getTableTableCol()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table TableCol for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> derivedByColIdx = schema->getTableIndexCol()->readDerivedByColIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() );
		if( derivedByColIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship Column from table IndexCol for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> derivedByServerTypeIdx = schema->getTableParam()->readDerivedByServerTypeIdx( Authorization,
						existing->getRequiredTenantIdReference(),
						existing->getRequiredIdReference() );
		if( derivedByServerTypeIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship Type from table Param for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Delete is valid
		std::map<cfbam::CFBamValuePKey, cfbam::CFBamValueBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		auto searchDictByValTentIdx = dictByValTentIdx->find( keyValTentIdx );
		if( searchDictByValTentIdx != dictByValTentIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictValTentIdx = searchDictByValTentIdx->second;
			auto searchSubDict = subdictValTentIdx->find( pkey );
			if( searchSubDict != subdictValTentIdx->end() ) {
				subdictValTentIdx->erase( searchSubDict );
			}
			subdictValTentIdx = NULL;
		}

		auto searchDictByScopeIdx = dictByScopeIdx->find( keyScopeIdx );
		if( searchDictByScopeIdx != dictByScopeIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictScopeIdx = searchDictByScopeIdx->second;
			auto searchSubDict = subdictScopeIdx->find( pkey );
			if( searchSubDict != subdictScopeIdx->end() ) {
				subdictScopeIdx->erase( searchSubDict );
			}
			subdictScopeIdx = NULL;
		}

		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			subdictDefSchemaIdx = NULL;
		}

		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			auto searchSubDict = subdictPrevIdx->find( pkey );
			if( searchSubDict != subdictPrevIdx->end() ) {
				subdictPrevIdx->erase( searchSubDict );
			}
			subdictPrevIdx = NULL;
		}

		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			auto searchSubDict = subdictNextIdx->find( pkey );
			if( searchSubDict != subdictNextIdx->end() ) {
				subdictNextIdx->erase( searchSubDict );
			}
			subdictNextIdx = NULL;
		}

		auto searchDictByContPrevIdx = dictByContPrevIdx->find( keyContPrevIdx );
		if( searchDictByContPrevIdx != dictByContPrevIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictContPrevIdx = searchDictByContPrevIdx->second;
			auto searchSubDict = subdictContPrevIdx->find( pkey );
			if( searchSubDict != subdictContPrevIdx->end() ) {
				subdictContPrevIdx->erase( searchSubDict );
			}
			subdictContPrevIdx = NULL;
		}

		auto searchDictByContNextIdx = dictByContNextIdx->find( keyContNextIdx );
		if( searchDictByContNextIdx != dictByContNextIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamValueBuff*>* subdictContNextIdx = searchDictByContNextIdx->second;
			auto searchSubDict = subdictContNextIdx->find( pkey );
			if( searchSubDict != subdictContNextIdx->end() ) {
				subdictContNextIdx->erase( searchSubDict );
			}
			subdictContNextIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamValueTable::deleteValueByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamValuePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteValueByIdIdx( Authorization, &key );
	}

	void CFBamRamValueTable::deleteValueByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* argKey )
	{
		static const std::string S_ProcName( "deleteValueByIdIdx" );
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamValueBuff* cur = NULL;
		cfbam::CFBamValueBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableValue()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				schema->getTableValue()->deleteValue( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				schema->getTableBlobDef()->deleteBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				schema->getTableBlobType()->deleteBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				schema->getTableBlobCol()->deleteBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				schema->getTableBoolDef()->deleteBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				schema->getTableBoolType()->deleteBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				schema->getTableBoolCol()->deleteBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				schema->getTableDateDef()->deleteDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				schema->getTableDateType()->deleteDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				schema->getTableDateCol()->deleteDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				schema->getTableDoubleDef()->deleteDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				schema->getTableDoubleType()->deleteDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				schema->getTableDoubleCol()->deleteDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				schema->getTableFloatDef()->deleteFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				schema->getTableFloatType()->deleteFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				schema->getTableFloatCol()->deleteFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				schema->getTableInt16Def()->deleteInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				schema->getTableInt16Type()->deleteInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				schema->getTableId16Gen()->deleteId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				schema->getTableEnumDef()->deleteEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				schema->getTableEnumType()->deleteEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				schema->getTableInt16Col()->deleteInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				schema->getTableInt32Def()->deleteInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				schema->getTableInt32Type()->deleteInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				schema->getTableId32Gen()->deleteId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				schema->getTableInt32Col()->deleteInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				schema->getTableInt64Def()->deleteInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				schema->getTableInt64Type()->deleteInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				schema->getTableId64Gen()->deleteId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				schema->getTableInt64Col()->deleteInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				schema->getTableNmTokenDef()->deleteNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokenType()->deleteNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				schema->getTableNmTokenCol()->deleteNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				schema->getTableNmTokensDef()->deleteNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokensType()->deleteNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				schema->getTableNmTokensCol()->deleteNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				schema->getTableNumberDef()->deleteNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				schema->getTableNumberType()->deleteNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				schema->getTableNumberCol()->deleteNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				schema->getTableStringDef()->deleteStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				schema->getTableStringType()->deleteStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				schema->getTableStringCol()->deleteStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				schema->getTableTZDateDef()->deleteTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				schema->getTableTZDateType()->deleteTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				schema->getTableTZDateCol()->deleteTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				schema->getTableTZTimeDef()->deleteTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimeType()->deleteTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				schema->getTableTZTimeCol()->deleteTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTZTimestampDef()->deleteTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimestampType()->deleteTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				schema->getTableTZTimestampCol()->deleteTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				schema->getTableTextDef()->deleteTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				schema->getTableTextType()->deleteTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				schema->getTableTextCol()->deleteTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				schema->getTableTimeDef()->deleteTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTimeType()->deleteTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				schema->getTableTimeCol()->deleteTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTimestampDef()->deleteTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTimestampType()->deleteTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				schema->getTableTimestampCol()->deleteTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				schema->getTableTokenDef()->deleteTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				schema->getTableTokenType()->deleteTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				schema->getTableTokenCol()->deleteTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				schema->getTableUInt16Def()->deleteUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				schema->getTableUInt16Type()->deleteUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				schema->getTableUInt16Col()->deleteUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				schema->getTableUInt32Def()->deleteUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				schema->getTableUInt32Type()->deleteUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				schema->getTableUInt32Col()->deleteUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				schema->getTableUInt64Def()->deleteUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				schema->getTableUInt64Type()->deleteUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				schema->getTableUInt64Col()->deleteUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				schema->getTableUuidDef()->deleteUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				schema->getTableUuidType()->deleteUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				schema->getTableUuidGen()->deleteUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				schema->getTableUuidCol()->deleteUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				schema->getTableTableCol()->deleteTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( cur ) );
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

	void CFBamRamValueTable::deleteValueByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const std::string& argName )
	{
		cfbam::CFBamValueByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredScopeId( argScopeId );
		key.setRequiredName( argName );
		deleteValueByUNameIdx( Authorization, &key );
	}

	void CFBamRamValueTable::deleteValueByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByUNameIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteValueByUNameIdx" );
		cfbam::CFBamValueBuff* cur = NULL;
		cfbam::CFBamValueBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableValue()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				schema->getTableValue()->deleteValue( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				schema->getTableBlobDef()->deleteBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				schema->getTableBlobType()->deleteBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				schema->getTableBlobCol()->deleteBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				schema->getTableBoolDef()->deleteBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				schema->getTableBoolType()->deleteBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				schema->getTableBoolCol()->deleteBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				schema->getTableDateDef()->deleteDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				schema->getTableDateType()->deleteDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				schema->getTableDateCol()->deleteDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				schema->getTableDoubleDef()->deleteDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				schema->getTableDoubleType()->deleteDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				schema->getTableDoubleCol()->deleteDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				schema->getTableFloatDef()->deleteFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				schema->getTableFloatType()->deleteFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				schema->getTableFloatCol()->deleteFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				schema->getTableInt16Def()->deleteInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				schema->getTableInt16Type()->deleteInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				schema->getTableId16Gen()->deleteId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				schema->getTableEnumDef()->deleteEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				schema->getTableEnumType()->deleteEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				schema->getTableInt16Col()->deleteInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				schema->getTableInt32Def()->deleteInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				schema->getTableInt32Type()->deleteInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				schema->getTableId32Gen()->deleteId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				schema->getTableInt32Col()->deleteInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				schema->getTableInt64Def()->deleteInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				schema->getTableInt64Type()->deleteInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				schema->getTableId64Gen()->deleteId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				schema->getTableInt64Col()->deleteInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				schema->getTableNmTokenDef()->deleteNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokenType()->deleteNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				schema->getTableNmTokenCol()->deleteNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				schema->getTableNmTokensDef()->deleteNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokensType()->deleteNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				schema->getTableNmTokensCol()->deleteNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				schema->getTableNumberDef()->deleteNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				schema->getTableNumberType()->deleteNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				schema->getTableNumberCol()->deleteNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				schema->getTableStringDef()->deleteStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				schema->getTableStringType()->deleteStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				schema->getTableStringCol()->deleteStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				schema->getTableTZDateDef()->deleteTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				schema->getTableTZDateType()->deleteTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				schema->getTableTZDateCol()->deleteTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				schema->getTableTZTimeDef()->deleteTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimeType()->deleteTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				schema->getTableTZTimeCol()->deleteTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTZTimestampDef()->deleteTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimestampType()->deleteTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				schema->getTableTZTimestampCol()->deleteTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				schema->getTableTextDef()->deleteTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				schema->getTableTextType()->deleteTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				schema->getTableTextCol()->deleteTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				schema->getTableTimeDef()->deleteTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTimeType()->deleteTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				schema->getTableTimeCol()->deleteTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTimestampDef()->deleteTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTimestampType()->deleteTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				schema->getTableTimestampCol()->deleteTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				schema->getTableTokenDef()->deleteTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				schema->getTableTokenType()->deleteTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				schema->getTableTokenCol()->deleteTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				schema->getTableUInt16Def()->deleteUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				schema->getTableUInt16Type()->deleteUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				schema->getTableUInt16Col()->deleteUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				schema->getTableUInt32Def()->deleteUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				schema->getTableUInt32Type()->deleteUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				schema->getTableUInt32Col()->deleteUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				schema->getTableUInt64Def()->deleteUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				schema->getTableUInt64Type()->deleteUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				schema->getTableUInt64Col()->deleteUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				schema->getTableUuidDef()->deleteUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				schema->getTableUuidType()->deleteUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				schema->getTableUuidGen()->deleteUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				schema->getTableUuidCol()->deleteUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				schema->getTableTableCol()->deleteTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( cur ) );
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

	void CFBamRamValueTable::deleteValueByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamValueByValTentIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteValueByValTentIdx( Authorization, &key );
	}

	void CFBamRamValueTable::deleteValueByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByValTentIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteValueByValTentIdx" );
		cfbam::CFBamValueBuff* cur = NULL;
		cfbam::CFBamValueBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableValue()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				schema->getTableValue()->deleteValue( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				schema->getTableBlobDef()->deleteBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				schema->getTableBlobType()->deleteBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				schema->getTableBlobCol()->deleteBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				schema->getTableBoolDef()->deleteBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				schema->getTableBoolType()->deleteBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				schema->getTableBoolCol()->deleteBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				schema->getTableDateDef()->deleteDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				schema->getTableDateType()->deleteDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				schema->getTableDateCol()->deleteDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				schema->getTableDoubleDef()->deleteDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				schema->getTableDoubleType()->deleteDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				schema->getTableDoubleCol()->deleteDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				schema->getTableFloatDef()->deleteFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				schema->getTableFloatType()->deleteFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				schema->getTableFloatCol()->deleteFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				schema->getTableInt16Def()->deleteInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				schema->getTableInt16Type()->deleteInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				schema->getTableId16Gen()->deleteId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				schema->getTableEnumDef()->deleteEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				schema->getTableEnumType()->deleteEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				schema->getTableInt16Col()->deleteInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				schema->getTableInt32Def()->deleteInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				schema->getTableInt32Type()->deleteInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				schema->getTableId32Gen()->deleteId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				schema->getTableInt32Col()->deleteInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				schema->getTableInt64Def()->deleteInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				schema->getTableInt64Type()->deleteInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				schema->getTableId64Gen()->deleteId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				schema->getTableInt64Col()->deleteInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				schema->getTableNmTokenDef()->deleteNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokenType()->deleteNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				schema->getTableNmTokenCol()->deleteNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				schema->getTableNmTokensDef()->deleteNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokensType()->deleteNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				schema->getTableNmTokensCol()->deleteNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				schema->getTableNumberDef()->deleteNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				schema->getTableNumberType()->deleteNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				schema->getTableNumberCol()->deleteNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				schema->getTableStringDef()->deleteStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				schema->getTableStringType()->deleteStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				schema->getTableStringCol()->deleteStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				schema->getTableTZDateDef()->deleteTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				schema->getTableTZDateType()->deleteTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				schema->getTableTZDateCol()->deleteTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				schema->getTableTZTimeDef()->deleteTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimeType()->deleteTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				schema->getTableTZTimeCol()->deleteTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTZTimestampDef()->deleteTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimestampType()->deleteTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				schema->getTableTZTimestampCol()->deleteTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				schema->getTableTextDef()->deleteTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				schema->getTableTextType()->deleteTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				schema->getTableTextCol()->deleteTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				schema->getTableTimeDef()->deleteTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTimeType()->deleteTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				schema->getTableTimeCol()->deleteTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTimestampDef()->deleteTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTimestampType()->deleteTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				schema->getTableTimestampCol()->deleteTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				schema->getTableTokenDef()->deleteTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				schema->getTableTokenType()->deleteTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				schema->getTableTokenCol()->deleteTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				schema->getTableUInt16Def()->deleteUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				schema->getTableUInt16Type()->deleteUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				schema->getTableUInt16Col()->deleteUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				schema->getTableUInt32Def()->deleteUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				schema->getTableUInt32Type()->deleteUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				schema->getTableUInt32Col()->deleteUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				schema->getTableUInt64Def()->deleteUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				schema->getTableUInt64Type()->deleteUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				schema->getTableUInt64Col()->deleteUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				schema->getTableUuidDef()->deleteUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				schema->getTableUuidType()->deleteUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				schema->getTableUuidGen()->deleteUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				schema->getTableUuidCol()->deleteUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				schema->getTableTableCol()->deleteTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( cur ) );
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

	void CFBamRamValueTable::deleteValueByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId )
	{
		cfbam::CFBamValueByScopeIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredScopeId( argScopeId );
		deleteValueByScopeIdx( Authorization, &key );
	}

	void CFBamRamValueTable::deleteValueByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByScopeIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteValueByScopeIdx" );
		cfbam::CFBamValueBuff* cur = NULL;
		cfbam::CFBamValueBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableValue()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				schema->getTableValue()->deleteValue( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				schema->getTableBlobDef()->deleteBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				schema->getTableBlobType()->deleteBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				schema->getTableBlobCol()->deleteBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				schema->getTableBoolDef()->deleteBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				schema->getTableBoolType()->deleteBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				schema->getTableBoolCol()->deleteBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				schema->getTableDateDef()->deleteDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				schema->getTableDateType()->deleteDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				schema->getTableDateCol()->deleteDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				schema->getTableDoubleDef()->deleteDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				schema->getTableDoubleType()->deleteDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				schema->getTableDoubleCol()->deleteDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				schema->getTableFloatDef()->deleteFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				schema->getTableFloatType()->deleteFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				schema->getTableFloatCol()->deleteFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				schema->getTableInt16Def()->deleteInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				schema->getTableInt16Type()->deleteInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				schema->getTableId16Gen()->deleteId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				schema->getTableEnumDef()->deleteEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				schema->getTableEnumType()->deleteEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				schema->getTableInt16Col()->deleteInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				schema->getTableInt32Def()->deleteInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				schema->getTableInt32Type()->deleteInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				schema->getTableId32Gen()->deleteId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				schema->getTableInt32Col()->deleteInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				schema->getTableInt64Def()->deleteInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				schema->getTableInt64Type()->deleteInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				schema->getTableId64Gen()->deleteId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				schema->getTableInt64Col()->deleteInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				schema->getTableNmTokenDef()->deleteNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokenType()->deleteNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				schema->getTableNmTokenCol()->deleteNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				schema->getTableNmTokensDef()->deleteNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokensType()->deleteNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				schema->getTableNmTokensCol()->deleteNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				schema->getTableNumberDef()->deleteNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				schema->getTableNumberType()->deleteNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				schema->getTableNumberCol()->deleteNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				schema->getTableStringDef()->deleteStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				schema->getTableStringType()->deleteStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				schema->getTableStringCol()->deleteStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				schema->getTableTZDateDef()->deleteTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				schema->getTableTZDateType()->deleteTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				schema->getTableTZDateCol()->deleteTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				schema->getTableTZTimeDef()->deleteTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimeType()->deleteTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				schema->getTableTZTimeCol()->deleteTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTZTimestampDef()->deleteTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimestampType()->deleteTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				schema->getTableTZTimestampCol()->deleteTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				schema->getTableTextDef()->deleteTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				schema->getTableTextType()->deleteTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				schema->getTableTextCol()->deleteTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				schema->getTableTimeDef()->deleteTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTimeType()->deleteTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				schema->getTableTimeCol()->deleteTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTimestampDef()->deleteTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTimestampType()->deleteTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				schema->getTableTimestampCol()->deleteTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				schema->getTableTokenDef()->deleteTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				schema->getTableTokenType()->deleteTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				schema->getTableTokenCol()->deleteTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				schema->getTableUInt16Def()->deleteUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				schema->getTableUInt16Type()->deleteUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				schema->getTableUInt16Col()->deleteUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				schema->getTableUInt32Def()->deleteUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				schema->getTableUInt32Type()->deleteUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				schema->getTableUInt32Col()->deleteUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				schema->getTableUInt64Def()->deleteUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				schema->getTableUInt64Type()->deleteUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				schema->getTableUInt64Col()->deleteUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				schema->getTableUuidDef()->deleteUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				schema->getTableUuidType()->deleteUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				schema->getTableUuidGen()->deleteUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				schema->getTableUuidCol()->deleteUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				schema->getTableTableCol()->deleteTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( cur ) );
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

	void CFBamRamValueTable::deleteValueByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamValueByDefSchemaIdxKey key;
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
		deleteValueByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamValueTable::deleteValueByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByDefSchemaIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteValueByDefSchemaIdx" );
		cfbam::CFBamValueBuff* cur = NULL;
		cfbam::CFBamValueBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableValue()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				schema->getTableValue()->deleteValue( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				schema->getTableBlobDef()->deleteBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				schema->getTableBlobType()->deleteBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				schema->getTableBlobCol()->deleteBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				schema->getTableBoolDef()->deleteBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				schema->getTableBoolType()->deleteBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				schema->getTableBoolCol()->deleteBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				schema->getTableDateDef()->deleteDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				schema->getTableDateType()->deleteDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				schema->getTableDateCol()->deleteDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				schema->getTableDoubleDef()->deleteDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				schema->getTableDoubleType()->deleteDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				schema->getTableDoubleCol()->deleteDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				schema->getTableFloatDef()->deleteFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				schema->getTableFloatType()->deleteFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				schema->getTableFloatCol()->deleteFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				schema->getTableInt16Def()->deleteInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				schema->getTableInt16Type()->deleteInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				schema->getTableId16Gen()->deleteId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				schema->getTableEnumDef()->deleteEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				schema->getTableEnumType()->deleteEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				schema->getTableInt16Col()->deleteInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				schema->getTableInt32Def()->deleteInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				schema->getTableInt32Type()->deleteInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				schema->getTableId32Gen()->deleteId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				schema->getTableInt32Col()->deleteInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				schema->getTableInt64Def()->deleteInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				schema->getTableInt64Type()->deleteInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				schema->getTableId64Gen()->deleteId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				schema->getTableInt64Col()->deleteInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				schema->getTableNmTokenDef()->deleteNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokenType()->deleteNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				schema->getTableNmTokenCol()->deleteNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				schema->getTableNmTokensDef()->deleteNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokensType()->deleteNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				schema->getTableNmTokensCol()->deleteNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				schema->getTableNumberDef()->deleteNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				schema->getTableNumberType()->deleteNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				schema->getTableNumberCol()->deleteNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				schema->getTableStringDef()->deleteStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				schema->getTableStringType()->deleteStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				schema->getTableStringCol()->deleteStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				schema->getTableTZDateDef()->deleteTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				schema->getTableTZDateType()->deleteTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				schema->getTableTZDateCol()->deleteTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				schema->getTableTZTimeDef()->deleteTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimeType()->deleteTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				schema->getTableTZTimeCol()->deleteTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTZTimestampDef()->deleteTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimestampType()->deleteTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				schema->getTableTZTimestampCol()->deleteTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				schema->getTableTextDef()->deleteTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				schema->getTableTextType()->deleteTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				schema->getTableTextCol()->deleteTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				schema->getTableTimeDef()->deleteTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTimeType()->deleteTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				schema->getTableTimeCol()->deleteTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTimestampDef()->deleteTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTimestampType()->deleteTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				schema->getTableTimestampCol()->deleteTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				schema->getTableTokenDef()->deleteTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				schema->getTableTokenType()->deleteTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				schema->getTableTokenCol()->deleteTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				schema->getTableUInt16Def()->deleteUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				schema->getTableUInt16Type()->deleteUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				schema->getTableUInt16Col()->deleteUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				schema->getTableUInt32Def()->deleteUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				schema->getTableUInt32Type()->deleteUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				schema->getTableUInt32Col()->deleteUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				schema->getTableUInt64Def()->deleteUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				schema->getTableUInt64Type()->deleteUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				schema->getTableUInt64Col()->deleteUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				schema->getTableUuidDef()->deleteUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				schema->getTableUuidType()->deleteUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				schema->getTableUuidGen()->deleteUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				schema->getTableUuidCol()->deleteUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				schema->getTableTableCol()->deleteTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( cur ) );
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

	void CFBamRamValueTable::deleteValueByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId )
	{
		cfbam::CFBamValueByPrevIdxKey key;
		if( argPrevTenantId == NULL ) {
			key.setOptionalPrevTenantIdNull();
		}
		else {
			key.setOptionalPrevTenantIdValue( *argPrevTenantId );
		}
		if( argPrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *argPrevId );
		}
		deleteValueByPrevIdx( Authorization, &key );
	}

	void CFBamRamValueTable::deleteValueByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByPrevIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteValueByPrevIdx" );
		cfbam::CFBamValueBuff* cur = NULL;
		cfbam::CFBamValueBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalPrevTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalPrevIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableValue()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				schema->getTableValue()->deleteValue( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				schema->getTableBlobDef()->deleteBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				schema->getTableBlobType()->deleteBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				schema->getTableBlobCol()->deleteBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				schema->getTableBoolDef()->deleteBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				schema->getTableBoolType()->deleteBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				schema->getTableBoolCol()->deleteBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				schema->getTableDateDef()->deleteDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				schema->getTableDateType()->deleteDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				schema->getTableDateCol()->deleteDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				schema->getTableDoubleDef()->deleteDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				schema->getTableDoubleType()->deleteDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				schema->getTableDoubleCol()->deleteDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				schema->getTableFloatDef()->deleteFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				schema->getTableFloatType()->deleteFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				schema->getTableFloatCol()->deleteFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				schema->getTableInt16Def()->deleteInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				schema->getTableInt16Type()->deleteInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				schema->getTableId16Gen()->deleteId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				schema->getTableEnumDef()->deleteEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				schema->getTableEnumType()->deleteEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				schema->getTableInt16Col()->deleteInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				schema->getTableInt32Def()->deleteInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				schema->getTableInt32Type()->deleteInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				schema->getTableId32Gen()->deleteId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				schema->getTableInt32Col()->deleteInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				schema->getTableInt64Def()->deleteInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				schema->getTableInt64Type()->deleteInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				schema->getTableId64Gen()->deleteId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				schema->getTableInt64Col()->deleteInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				schema->getTableNmTokenDef()->deleteNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokenType()->deleteNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				schema->getTableNmTokenCol()->deleteNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				schema->getTableNmTokensDef()->deleteNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokensType()->deleteNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				schema->getTableNmTokensCol()->deleteNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				schema->getTableNumberDef()->deleteNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				schema->getTableNumberType()->deleteNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				schema->getTableNumberCol()->deleteNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				schema->getTableStringDef()->deleteStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				schema->getTableStringType()->deleteStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				schema->getTableStringCol()->deleteStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				schema->getTableTZDateDef()->deleteTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				schema->getTableTZDateType()->deleteTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				schema->getTableTZDateCol()->deleteTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				schema->getTableTZTimeDef()->deleteTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimeType()->deleteTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				schema->getTableTZTimeCol()->deleteTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTZTimestampDef()->deleteTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimestampType()->deleteTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				schema->getTableTZTimestampCol()->deleteTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				schema->getTableTextDef()->deleteTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				schema->getTableTextType()->deleteTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				schema->getTableTextCol()->deleteTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				schema->getTableTimeDef()->deleteTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTimeType()->deleteTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				schema->getTableTimeCol()->deleteTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTimestampDef()->deleteTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTimestampType()->deleteTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				schema->getTableTimestampCol()->deleteTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				schema->getTableTokenDef()->deleteTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				schema->getTableTokenType()->deleteTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				schema->getTableTokenCol()->deleteTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				schema->getTableUInt16Def()->deleteUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				schema->getTableUInt16Type()->deleteUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				schema->getTableUInt16Col()->deleteUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				schema->getTableUInt32Def()->deleteUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				schema->getTableUInt32Type()->deleteUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				schema->getTableUInt32Col()->deleteUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				schema->getTableUInt64Def()->deleteUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				schema->getTableUInt64Type()->deleteUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				schema->getTableUInt64Col()->deleteUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				schema->getTableUuidDef()->deleteUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				schema->getTableUuidType()->deleteUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				schema->getTableUuidGen()->deleteUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				schema->getTableUuidCol()->deleteUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				schema->getTableTableCol()->deleteTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( cur ) );
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

	void CFBamRamValueTable::deleteValueByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId )
	{
		cfbam::CFBamValueByNextIdxKey key;
		if( argNextTenantId == NULL ) {
			key.setOptionalNextTenantIdNull();
		}
		else {
			key.setOptionalNextTenantIdValue( *argNextTenantId );
		}
		if( argNextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *argNextId );
		}
		deleteValueByNextIdx( Authorization, &key );
	}

	void CFBamRamValueTable::deleteValueByNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByNextIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteValueByNextIdx" );
		cfbam::CFBamValueBuff* cur = NULL;
		cfbam::CFBamValueBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalNextTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalNextIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableValue()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				schema->getTableValue()->deleteValue( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				schema->getTableBlobDef()->deleteBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				schema->getTableBlobType()->deleteBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				schema->getTableBlobCol()->deleteBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				schema->getTableBoolDef()->deleteBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				schema->getTableBoolType()->deleteBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				schema->getTableBoolCol()->deleteBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				schema->getTableDateDef()->deleteDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				schema->getTableDateType()->deleteDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				schema->getTableDateCol()->deleteDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				schema->getTableDoubleDef()->deleteDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				schema->getTableDoubleType()->deleteDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				schema->getTableDoubleCol()->deleteDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				schema->getTableFloatDef()->deleteFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				schema->getTableFloatType()->deleteFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				schema->getTableFloatCol()->deleteFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				schema->getTableInt16Def()->deleteInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				schema->getTableInt16Type()->deleteInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				schema->getTableId16Gen()->deleteId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				schema->getTableEnumDef()->deleteEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				schema->getTableEnumType()->deleteEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				schema->getTableInt16Col()->deleteInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				schema->getTableInt32Def()->deleteInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				schema->getTableInt32Type()->deleteInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				schema->getTableId32Gen()->deleteId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				schema->getTableInt32Col()->deleteInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				schema->getTableInt64Def()->deleteInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				schema->getTableInt64Type()->deleteInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				schema->getTableId64Gen()->deleteId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				schema->getTableInt64Col()->deleteInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				schema->getTableNmTokenDef()->deleteNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokenType()->deleteNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				schema->getTableNmTokenCol()->deleteNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				schema->getTableNmTokensDef()->deleteNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokensType()->deleteNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				schema->getTableNmTokensCol()->deleteNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				schema->getTableNumberDef()->deleteNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				schema->getTableNumberType()->deleteNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				schema->getTableNumberCol()->deleteNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				schema->getTableStringDef()->deleteStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				schema->getTableStringType()->deleteStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				schema->getTableStringCol()->deleteStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				schema->getTableTZDateDef()->deleteTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				schema->getTableTZDateType()->deleteTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				schema->getTableTZDateCol()->deleteTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				schema->getTableTZTimeDef()->deleteTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimeType()->deleteTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				schema->getTableTZTimeCol()->deleteTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTZTimestampDef()->deleteTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimestampType()->deleteTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				schema->getTableTZTimestampCol()->deleteTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				schema->getTableTextDef()->deleteTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				schema->getTableTextType()->deleteTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				schema->getTableTextCol()->deleteTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				schema->getTableTimeDef()->deleteTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTimeType()->deleteTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				schema->getTableTimeCol()->deleteTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTimestampDef()->deleteTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTimestampType()->deleteTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				schema->getTableTimestampCol()->deleteTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				schema->getTableTokenDef()->deleteTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				schema->getTableTokenType()->deleteTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				schema->getTableTokenCol()->deleteTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				schema->getTableUInt16Def()->deleteUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				schema->getTableUInt16Type()->deleteUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				schema->getTableUInt16Col()->deleteUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				schema->getTableUInt32Def()->deleteUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				schema->getTableUInt32Type()->deleteUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				schema->getTableUInt32Col()->deleteUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				schema->getTableUInt64Def()->deleteUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				schema->getTableUInt64Type()->deleteUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				schema->getTableUInt64Col()->deleteUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				schema->getTableUuidDef()->deleteUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				schema->getTableUuidType()->deleteUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				schema->getTableUuidGen()->deleteUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				schema->getTableUuidCol()->deleteUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				schema->getTableTableCol()->deleteTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( cur ) );
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

	void CFBamRamValueTable::deleteValueByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const int64_t* argPrevId )
	{
		cfbam::CFBamValueByContPrevIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredScopeId( argScopeId );
		if( argPrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *argPrevId );
		}
		deleteValueByContPrevIdx( Authorization, &key );
	}

	void CFBamRamValueTable::deleteValueByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByContPrevIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteValueByContPrevIdx" );
		cfbam::CFBamValueBuff* cur = NULL;
		cfbam::CFBamValueBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalPrevIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableValue()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				schema->getTableValue()->deleteValue( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				schema->getTableBlobDef()->deleteBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				schema->getTableBlobType()->deleteBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				schema->getTableBlobCol()->deleteBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				schema->getTableBoolDef()->deleteBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				schema->getTableBoolType()->deleteBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				schema->getTableBoolCol()->deleteBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				schema->getTableDateDef()->deleteDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				schema->getTableDateType()->deleteDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				schema->getTableDateCol()->deleteDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				schema->getTableDoubleDef()->deleteDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				schema->getTableDoubleType()->deleteDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				schema->getTableDoubleCol()->deleteDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				schema->getTableFloatDef()->deleteFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				schema->getTableFloatType()->deleteFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				schema->getTableFloatCol()->deleteFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				schema->getTableInt16Def()->deleteInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				schema->getTableInt16Type()->deleteInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				schema->getTableId16Gen()->deleteId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				schema->getTableEnumDef()->deleteEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				schema->getTableEnumType()->deleteEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				schema->getTableInt16Col()->deleteInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				schema->getTableInt32Def()->deleteInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				schema->getTableInt32Type()->deleteInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				schema->getTableId32Gen()->deleteId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				schema->getTableInt32Col()->deleteInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				schema->getTableInt64Def()->deleteInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				schema->getTableInt64Type()->deleteInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				schema->getTableId64Gen()->deleteId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				schema->getTableInt64Col()->deleteInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				schema->getTableNmTokenDef()->deleteNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokenType()->deleteNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				schema->getTableNmTokenCol()->deleteNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				schema->getTableNmTokensDef()->deleteNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokensType()->deleteNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				schema->getTableNmTokensCol()->deleteNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				schema->getTableNumberDef()->deleteNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				schema->getTableNumberType()->deleteNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				schema->getTableNumberCol()->deleteNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				schema->getTableStringDef()->deleteStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				schema->getTableStringType()->deleteStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				schema->getTableStringCol()->deleteStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				schema->getTableTZDateDef()->deleteTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				schema->getTableTZDateType()->deleteTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				schema->getTableTZDateCol()->deleteTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				schema->getTableTZTimeDef()->deleteTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimeType()->deleteTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				schema->getTableTZTimeCol()->deleteTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTZTimestampDef()->deleteTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimestampType()->deleteTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				schema->getTableTZTimestampCol()->deleteTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				schema->getTableTextDef()->deleteTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				schema->getTableTextType()->deleteTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				schema->getTableTextCol()->deleteTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				schema->getTableTimeDef()->deleteTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTimeType()->deleteTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				schema->getTableTimeCol()->deleteTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTimestampDef()->deleteTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTimestampType()->deleteTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				schema->getTableTimestampCol()->deleteTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				schema->getTableTokenDef()->deleteTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				schema->getTableTokenType()->deleteTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				schema->getTableTokenCol()->deleteTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				schema->getTableUInt16Def()->deleteUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				schema->getTableUInt16Type()->deleteUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				schema->getTableUInt16Col()->deleteUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				schema->getTableUInt32Def()->deleteUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				schema->getTableUInt32Type()->deleteUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				schema->getTableUInt32Col()->deleteUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				schema->getTableUInt64Def()->deleteUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				schema->getTableUInt64Type()->deleteUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				schema->getTableUInt64Col()->deleteUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				schema->getTableUuidDef()->deleteUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				schema->getTableUuidType()->deleteUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				schema->getTableUuidGen()->deleteUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				schema->getTableUuidCol()->deleteUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				schema->getTableTableCol()->deleteTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( cur ) );
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

	void CFBamRamValueTable::deleteValueByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const int64_t* argNextId )
	{
		cfbam::CFBamValueByContNextIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredScopeId( argScopeId );
		if( argNextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *argNextId );
		}
		deleteValueByContNextIdx( Authorization, &key );
	}

	void CFBamRamValueTable::deleteValueByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByContNextIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteValueByContNextIdx" );
		cfbam::CFBamValueBuff* cur = NULL;
		cfbam::CFBamValueBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalNextIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamValueBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamValueBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableValue()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				schema->getTableValue()->deleteValue( Authorization, cur );
			}
			else if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				schema->getTableBlobDef()->deleteBlobDef( Authorization, dynamic_cast<cfbam::CFBamBlobDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				schema->getTableBlobType()->deleteBlobType( Authorization, dynamic_cast<cfbam::CFBamBlobTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				schema->getTableBlobCol()->deleteBlobCol( Authorization, dynamic_cast<cfbam::CFBamBlobColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				schema->getTableBoolDef()->deleteBoolDef( Authorization, dynamic_cast<cfbam::CFBamBoolDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				schema->getTableBoolType()->deleteBoolType( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				schema->getTableBoolCol()->deleteBoolCol( Authorization, dynamic_cast<cfbam::CFBamBoolColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				schema->getTableDateDef()->deleteDateDef( Authorization, dynamic_cast<cfbam::CFBamDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				schema->getTableDateType()->deleteDateType( Authorization, dynamic_cast<cfbam::CFBamDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				schema->getTableDateCol()->deleteDateCol( Authorization, dynamic_cast<cfbam::CFBamDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				schema->getTableDoubleDef()->deleteDoubleDef( Authorization, dynamic_cast<cfbam::CFBamDoubleDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				schema->getTableDoubleType()->deleteDoubleType( Authorization, dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				schema->getTableDoubleCol()->deleteDoubleCol( Authorization, dynamic_cast<cfbam::CFBamDoubleColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				schema->getTableFloatDef()->deleteFloatDef( Authorization, dynamic_cast<cfbam::CFBamFloatDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				schema->getTableFloatType()->deleteFloatType( Authorization, dynamic_cast<cfbam::CFBamFloatTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				schema->getTableFloatCol()->deleteFloatCol( Authorization, dynamic_cast<cfbam::CFBamFloatColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				schema->getTableInt16Def()->deleteInt16Def( Authorization, dynamic_cast<cfbam::CFBamInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				schema->getTableInt16Type()->deleteInt16Type( Authorization, dynamic_cast<cfbam::CFBamInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				schema->getTableId16Gen()->deleteId16Gen( Authorization, dynamic_cast<cfbam::CFBamId16GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				schema->getTableEnumDef()->deleteEnumDef( Authorization, dynamic_cast<cfbam::CFBamEnumDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				schema->getTableEnumType()->deleteEnumType( Authorization, dynamic_cast<cfbam::CFBamEnumTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				schema->getTableInt16Col()->deleteInt16Col( Authorization, dynamic_cast<cfbam::CFBamInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				schema->getTableInt32Def()->deleteInt32Def( Authorization, dynamic_cast<cfbam::CFBamInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				schema->getTableInt32Type()->deleteInt32Type( Authorization, dynamic_cast<cfbam::CFBamInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				schema->getTableId32Gen()->deleteId32Gen( Authorization, dynamic_cast<cfbam::CFBamId32GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				schema->getTableInt32Col()->deleteInt32Col( Authorization, dynamic_cast<cfbam::CFBamInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				schema->getTableInt64Def()->deleteInt64Def( Authorization, dynamic_cast<cfbam::CFBamInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				schema->getTableInt64Type()->deleteInt64Type( Authorization, dynamic_cast<cfbam::CFBamInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				schema->getTableId64Gen()->deleteId64Gen( Authorization, dynamic_cast<cfbam::CFBamId64GenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				schema->getTableInt64Col()->deleteInt64Col( Authorization, dynamic_cast<cfbam::CFBamInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				schema->getTableNmTokenDef()->deleteNmTokenDef( Authorization, dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokenType()->deleteNmTokenType( Authorization, dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				schema->getTableNmTokenCol()->deleteNmTokenCol( Authorization, dynamic_cast<cfbam::CFBamNmTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				schema->getTableNmTokensDef()->deleteNmTokensDef( Authorization, dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				schema->getTableNmTokensType()->deleteNmTokensType( Authorization, dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				schema->getTableNmTokensCol()->deleteNmTokensCol( Authorization, dynamic_cast<cfbam::CFBamNmTokensColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				schema->getTableNumberDef()->deleteNumberDef( Authorization, dynamic_cast<cfbam::CFBamNumberDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				schema->getTableNumberType()->deleteNumberType( Authorization, dynamic_cast<cfbam::CFBamNumberTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				schema->getTableNumberCol()->deleteNumberCol( Authorization, dynamic_cast<cfbam::CFBamNumberColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				schema->getTableStringDef()->deleteStringDef( Authorization, dynamic_cast<cfbam::CFBamStringDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				schema->getTableStringType()->deleteStringType( Authorization, dynamic_cast<cfbam::CFBamStringTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				schema->getTableStringCol()->deleteStringCol( Authorization, dynamic_cast<cfbam::CFBamStringColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				schema->getTableTZDateDef()->deleteTZDateDef( Authorization, dynamic_cast<cfbam::CFBamTZDateDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				schema->getTableTZDateType()->deleteTZDateType( Authorization, dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				schema->getTableTZDateCol()->deleteTZDateCol( Authorization, dynamic_cast<cfbam::CFBamTZDateColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				schema->getTableTZTimeDef()->deleteTZTimeDef( Authorization, dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimeType()->deleteTZTimeType( Authorization, dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				schema->getTableTZTimeCol()->deleteTZTimeCol( Authorization, dynamic_cast<cfbam::CFBamTZTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTZTimestampDef()->deleteTZTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTZTimestampType()->deleteTZTimestampType( Authorization, dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				schema->getTableTZTimestampCol()->deleteTZTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				schema->getTableTextDef()->deleteTextDef( Authorization, dynamic_cast<cfbam::CFBamTextDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				schema->getTableTextType()->deleteTextType( Authorization, dynamic_cast<cfbam::CFBamTextTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				schema->getTableTextCol()->deleteTextCol( Authorization, dynamic_cast<cfbam::CFBamTextColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				schema->getTableTimeDef()->deleteTimeDef( Authorization, dynamic_cast<cfbam::CFBamTimeDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				schema->getTableTimeType()->deleteTimeType( Authorization, dynamic_cast<cfbam::CFBamTimeTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				schema->getTableTimeCol()->deleteTimeCol( Authorization, dynamic_cast<cfbam::CFBamTimeColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				schema->getTableTimestampDef()->deleteTimestampDef( Authorization, dynamic_cast<cfbam::CFBamTimestampDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				schema->getTableTimestampType()->deleteTimestampType( Authorization, dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				schema->getTableTimestampCol()->deleteTimestampCol( Authorization, dynamic_cast<cfbam::CFBamTimestampColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				schema->getTableTokenDef()->deleteTokenDef( Authorization, dynamic_cast<cfbam::CFBamTokenDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				schema->getTableTokenType()->deleteTokenType( Authorization, dynamic_cast<cfbam::CFBamTokenTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				schema->getTableTokenCol()->deleteTokenCol( Authorization, dynamic_cast<cfbam::CFBamTokenColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				schema->getTableUInt16Def()->deleteUInt16Def( Authorization, dynamic_cast<cfbam::CFBamUInt16DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				schema->getTableUInt16Type()->deleteUInt16Type( Authorization, dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				schema->getTableUInt16Col()->deleteUInt16Col( Authorization, dynamic_cast<cfbam::CFBamUInt16ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				schema->getTableUInt32Def()->deleteUInt32Def( Authorization, dynamic_cast<cfbam::CFBamUInt32DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				schema->getTableUInt32Type()->deleteUInt32Type( Authorization, dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				schema->getTableUInt32Col()->deleteUInt32Col( Authorization, dynamic_cast<cfbam::CFBamUInt32ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				schema->getTableUInt64Def()->deleteUInt64Def( Authorization, dynamic_cast<cfbam::CFBamUInt64DefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				schema->getTableUInt64Type()->deleteUInt64Type( Authorization, dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				schema->getTableUInt64Col()->deleteUInt64Col( Authorization, dynamic_cast<cfbam::CFBamUInt64ColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				schema->getTableUuidDef()->deleteUuidDef( Authorization, dynamic_cast<cfbam::CFBamUuidDefBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				schema->getTableUuidType()->deleteUuidType( Authorization, dynamic_cast<cfbam::CFBamUuidTypeBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				schema->getTableUuidGen()->deleteUuidGen( Authorization, dynamic_cast<cfbam::CFBamUuidGenBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				schema->getTableUuidCol()->deleteUuidCol( Authorization, dynamic_cast<cfbam::CFBamUuidColBuff*>( cur ) );
			}
			else if( subClassCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				schema->getTableTableCol()->deleteTableCol( Authorization, dynamic_cast<cfbam::CFBamTableColBuff*>( cur ) );
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

	void CFBamRamValueTable::releasePreparedStatements() {
	}

}
