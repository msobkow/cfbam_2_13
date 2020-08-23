
// Description: C++18 Implementation for an in-memory RAM DbIO for Param.

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

	const std::string CFBamRamParamTable::CLASS_NAME( "CFBamRamParamTable" );

	CFBamRamParamTable::CFBamRamParamTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamParamTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
		dictByUNameIdx = new std::map<cfbam::CFBamParamByUNameIdxKey, cfbam::CFBamParamBuff*>();
		dictByValTentIdx = new std::map<cfbam::CFBamParamByValTentIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>();
		dictByServerMethodIdx = new std::map<cfbam::CFBamParamByServerMethodIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>();
		dictByDefSchemaIdx = new std::map<cfbam::CFBamParamByDefSchemaIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>();
		dictByServerTypeIdx = new std::map<cfbam::CFBamParamByServerTypeIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>();
		dictByPrevIdx = new std::map<cfbam::CFBamParamByPrevIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>();
		dictByNextIdx = new std::map<cfbam::CFBamParamByNextIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>();
		dictByContPrevIdx = new std::map<cfbam::CFBamParamByContPrevIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>();
		dictByContNextIdx = new std::map<cfbam::CFBamParamByContNextIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>();
	}

	CFBamRamParamTable::~CFBamRamParamTable() {
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
		if( dictByServerMethodIdx != NULL ) {
			for( auto iterDict = dictByServerMethodIdx->begin(); iterDict != dictByServerMethodIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByServerMethodIdx;
			dictByServerMethodIdx = NULL;
		}
		if( dictByDefSchemaIdx != NULL ) {
			for( auto iterDict = dictByDefSchemaIdx->begin(); iterDict != dictByDefSchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDefSchemaIdx;
			dictByDefSchemaIdx = NULL;
		}
		if( dictByServerTypeIdx != NULL ) {
			for( auto iterDict = dictByServerTypeIdx->begin(); iterDict != dictByServerTypeIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByServerTypeIdx;
			dictByServerTypeIdx = NULL;
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
			cfbam::CFBamParamBuff* elt;
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>::iterator cur = dictByPKey->begin();
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

	cfbam::CFBamParamBuff* CFBamRamParamTable::createParam( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamParamBuff* Buff )
	{
		static const std::string S_ProcName( "createParam" );
			cfbam::CFBamParamBuff* tail = NULL;

			std::TCFLibOwningVector<cfbam::CFBamParamBuff*> siblings = schema->getTableParam()->readDerivedByServerMethodIdx( Authorization,
				Buff->getRequiredTenantId(),
				Buff->getRequiredServerMethodId() );
			std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterSiblings = siblings.begin();
			std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator endSiblings = siblings.end();
			while( ( tail == NULL ) && ( iterSiblings != endSiblings ) ) {
				if( ( (*iterSiblings)->isOptionalNextTenantIdNull() )
					&& ( (*iterSiblings)->isOptionalNextIdNull() ) ) {
					tail = *iterSiblings;
				}
				iterSiblings ++;
			}
			if( tail != NULL ) {
				Buff->setOptionalPrevTenantIdValue( tail->getRequiredTenantId() );
				Buff->setOptionalPrevIdValue( tail->getRequiredId() );
			}
			else {
				Buff->setOptionalPrevTenantIdNull();
				Buff->setOptionalPrevIdNull();
			}
		
		cfbam::CFBamParamPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( dynamic_cast<CFBamRamTenantTable*>( schema->getTableTenant() )->nextParamIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfbam::CFBamParamByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUNameIdx.setRequiredServerMethodId( Buff->getRequiredServerMethodId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamParamByValTentIdxKey keyValTentIdx;
		keyValTentIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamParamByServerMethodIdxKey keyServerMethodIdx;
		keyServerMethodIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyServerMethodIdx.setRequiredServerMethodId( Buff->getRequiredServerMethodId() );
		cfbam::CFBamParamByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamParamByServerTypeIdxKey keyServerTypeIdx;
		if( Buff->isOptionalTypeTenantIdNull() ) {
			keyServerTypeIdx.setOptionalTypeTenantIdNull();
		}
		else {
			keyServerTypeIdx.setOptionalTypeTenantIdValue( Buff->getOptionalTypeTenantIdValue() );
		}
		if( Buff->isOptionalTypeIdNull() ) {
			keyServerTypeIdx.setOptionalTypeIdNull();
		}
		else {
			keyServerTypeIdx.setOptionalTypeIdValue( Buff->getOptionalTypeIdValue() );
		}
		cfbam::CFBamParamByPrevIdxKey keyPrevIdx;
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
		cfbam::CFBamParamByNextIdxKey keyNextIdx;
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
		cfbam::CFBamParamByContPrevIdxKey keyContPrevIdx;
		keyContPrevIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyContPrevIdx.setRequiredServerMethodId( Buff->getRequiredServerMethodId() );
		if( Buff->isOptionalPrevIdNull() ) {
			keyContPrevIdx.setOptionalPrevIdNull();
		}
		else {
			keyContPrevIdx.setOptionalPrevIdValue( Buff->getOptionalPrevIdValue() );
		}
		cfbam::CFBamParamByContNextIdxKey keyContNextIdx;
		keyContNextIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyContNextIdx.setRequiredServerMethodId( Buff->getRequiredServerMethodId() );
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
			std::string Msg( "Duplicate key detected for index ParamUNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamServerMethodBuff* chk = dynamic_cast<cfbam::CFBamServerMethodBuff*>( schema->getTableServerMethod()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredServerMethodId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ServerMethod to table ServerMethod" );
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
			if( Buff->isOptionalTypeTenantIdNull() ) {
				allNull = false;
			}
			if( Buff->isOptionalTypeIdNull() ) {
				allNull = false;
			}
			if( ! allNull ) {
				cfbam::CFBamValueBuff* chk = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableValue()->readDerivedByIdIdx( Authorization,
						Buff->getOptionalTypeTenantIdValue(),
						Buff->getOptionalTypeIdValue() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship Type to table Value" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamParamBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamParamByUNameIdxKey, cfbam::CFBamParamBuff*>::value_type( keyUNameIdx, buff ) );

		std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>* subdictValTentIdx;
		auto searchDictByValTentIdx = dictByValTentIdx->find( keyValTentIdx );
		if( searchDictByValTentIdx != dictByValTentIdx->end() ) {
			subdictValTentIdx = searchDictByValTentIdx->second;
		}
		else {
			subdictValTentIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByValTentIdx->insert( std::map<cfbam::CFBamParamByValTentIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( keyValTentIdx, subdictValTentIdx ) );
		}
		subdictValTentIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>* subdictServerMethodIdx;
		auto searchDictByServerMethodIdx = dictByServerMethodIdx->find( keyServerMethodIdx );
		if( searchDictByServerMethodIdx != dictByServerMethodIdx->end() ) {
			subdictServerMethodIdx = searchDictByServerMethodIdx->second;
		}
		else {
			subdictServerMethodIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByServerMethodIdx->insert( std::map<cfbam::CFBamParamByServerMethodIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( keyServerMethodIdx, subdictServerMethodIdx ) );
		}
		subdictServerMethodIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamParamByDefSchemaIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( keyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>* subdictServerTypeIdx;
		auto searchDictByServerTypeIdx = dictByServerTypeIdx->find( keyServerTypeIdx );
		if( searchDictByServerTypeIdx != dictByServerTypeIdx->end() ) {
			subdictServerTypeIdx = searchDictByServerTypeIdx->second;
		}
		else {
			subdictServerTypeIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByServerTypeIdx->insert( std::map<cfbam::CFBamParamByServerTypeIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( keyServerTypeIdx, subdictServerTypeIdx ) );
		}
		subdictServerTypeIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>* subdictPrevIdx;
		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			subdictPrevIdx = searchDictByPrevIdx->second;
		}
		else {
			subdictPrevIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamParamByPrevIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( keyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>* subdictNextIdx;
		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			subdictNextIdx = searchDictByNextIdx->second;
		}
		else {
			subdictNextIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamParamByNextIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( keyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>* subdictContPrevIdx;
		auto searchDictByContPrevIdx = dictByContPrevIdx->find( keyContPrevIdx );
		if( searchDictByContPrevIdx != dictByContPrevIdx->end() ) {
			subdictContPrevIdx = searchDictByContPrevIdx->second;
		}
		else {
			subdictContPrevIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByContPrevIdx->insert( std::map<cfbam::CFBamParamByContPrevIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( keyContPrevIdx, subdictContPrevIdx ) );
		}
		subdictContPrevIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>* subdictContNextIdx;
		auto searchDictByContNextIdx = dictByContNextIdx->find( keyContNextIdx );
		if( searchDictByContNextIdx != dictByContNextIdx->end() ) {
			subdictContNextIdx = searchDictByContNextIdx->second;
		}
		else {
			subdictContNextIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByContNextIdx->insert( std::map<cfbam::CFBamParamByContNextIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( keyContNextIdx, subdictContNextIdx ) );
		}
		subdictContNextIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, buff ) );

		if( tail != NULL ) {
			tail = schema->getTableParam()->readDerivedByIdIdx( Authorization,
				buff->getOptionalPrevTenantIdValue(),
				buff->getOptionalPrevIdValue() );
			cfbam::CFBamParamBuff* tailEdit = new cfbam::CFBamParamBuff();
			*tailEdit = *dynamic_cast<cfbam::CFBamParamBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
			tailEdit = schema->getTableParam()->updateParam( Authorization, tailEdit );
			delete tail;
			tail = NULL;
			delete tailEdit;
			tailEdit = NULL;
		}
		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamParamBuff* CFBamRamParamTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamParamBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamParamBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamParamBuff* CFBamRamParamTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamParamBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamParamBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> retVec;
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamParamBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamParamBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfbam::CFBamParamBuff* CFBamRamParamTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamParamByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		key.setRequiredName( Name );
		cfbam::CFBamParamBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamParamBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readDerivedByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByValTentIdx" );
		cfbam::CFBamParamByValTentIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> recVec;
		cfbam::CFBamParamBuff* clone;
		auto searchDictByValTentIdx = dictByValTentIdx->find( key );
		if( searchDictByValTentIdx != dictByValTentIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictValTentIdx = searchDictByValTentIdx->second;
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator iter = subdictValTentIdx->begin();
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator end = subdictValTentIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamParamBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readDerivedByServerMethodIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId )
	{
		static const std::string S_ProcName( "readDerivedByServerMethodIdx" );
		cfbam::CFBamParamByServerMethodIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> recVec;
		cfbam::CFBamParamBuff* clone;
		auto searchDictByServerMethodIdx = dictByServerMethodIdx->find( key );
		if( searchDictByServerMethodIdx != dictByServerMethodIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictServerMethodIdx = searchDictByServerMethodIdx->second;
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator iter = subdictServerMethodIdx->begin();
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator end = subdictServerMethodIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamParamBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		cfbam::CFBamParamByDefSchemaIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> recVec;
		cfbam::CFBamParamBuff* clone;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( key );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator iter = subdictDefSchemaIdx->begin();
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator end = subdictDefSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamParamBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readDerivedByServerTypeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* TypeTenantId,
			const int64_t* TypeId )
	{
		static const std::string S_ProcName( "readDerivedByServerTypeIdx" );
		cfbam::CFBamParamByServerTypeIdxKey key;
		if( TypeTenantId == NULL ) {
			key.setOptionalTypeTenantIdNull();
		}
		else {
			key.setOptionalTypeTenantIdValue( *TypeTenantId );
		}
		if( TypeId == NULL ) {
			key.setOptionalTypeIdNull();
		}
		else {
			key.setOptionalTypeIdValue( *TypeId );
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> recVec;
		cfbam::CFBamParamBuff* clone;
		auto searchDictByServerTypeIdx = dictByServerTypeIdx->find( key );
		if( searchDictByServerTypeIdx != dictByServerTypeIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictServerTypeIdx = searchDictByServerTypeIdx->second;
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator iter = subdictServerTypeIdx->begin();
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator end = subdictServerTypeIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamParamBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByPrevIdx" );
		cfbam::CFBamParamByPrevIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> recVec;
		cfbam::CFBamParamBuff* clone;
		auto searchDictByPrevIdx = dictByPrevIdx->find( key );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator iter = subdictPrevIdx->begin();
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator end = subdictPrevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamParamBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByNextIdx" );
		cfbam::CFBamParamByNextIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> recVec;
		cfbam::CFBamParamBuff* clone;
		auto searchDictByNextIdx = dictByNextIdx->find( key );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator iter = subdictNextIdx->begin();
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator end = subdictNextIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamParamBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readDerivedByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByContPrevIdx" );
		cfbam::CFBamParamByContPrevIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> recVec;
		cfbam::CFBamParamBuff* clone;
		auto searchDictByContPrevIdx = dictByContPrevIdx->find( key );
		if( searchDictByContPrevIdx != dictByContPrevIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictContPrevIdx = searchDictByContPrevIdx->second;
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator iter = subdictContPrevIdx->begin();
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator end = subdictContPrevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamParamBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readDerivedByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByContNextIdx" );
		cfbam::CFBamParamByContNextIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredServerMethodId( ServerMethodId );
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> recVec;
		cfbam::CFBamParamBuff* clone;
		auto searchDictByContNextIdx = dictByContNextIdx->find( key );
		if( searchDictByContNextIdx != dictByContNextIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictContNextIdx = searchDictByContNextIdx->second;
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator iter = subdictContNextIdx->begin();
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>::iterator end = subdictContNextIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamParamBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamParamBuff* CFBamRamParamTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamParamPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamParamBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamParamBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamParamBuff* CFBamRamParamTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamParamBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamParamBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamParamBuff*>( buff ) );
	}

	cfbam::CFBamParamBuff* CFBamRamParamTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamParamBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamParamBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamParamBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamParamBuff* CFBamRamParamTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamParamBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamParamBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamParamBuff* CFBamRamParamTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamParamBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			ServerMethodId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamParamBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readBuffByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByValTentIdx" );
		cfbam::CFBamParamBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = readDerivedByValTentIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readBuffByServerMethodIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId )
	{
		static const std::string S_ProcName( "readBuffByServerMethodIdx" );
		cfbam::CFBamParamBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = readDerivedByServerMethodIdx( Authorization,
			TenantId,
			ServerMethodId );
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamParamBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readBuffByServerTypeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* TypeTenantId,
			const int64_t* TypeId )
	{
		static const std::string S_ProcName( "readBuffByServerTypeIdx" );
		cfbam::CFBamParamBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = readDerivedByServerTypeIdx( Authorization,
			TypeTenantId,
			TypeId );
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByPrevIdx" );
		cfbam::CFBamParamBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = readDerivedByPrevIdx( Authorization,
			PrevTenantId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByNextIdx" );
		cfbam::CFBamParamBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = readDerivedByNextIdx( Authorization,
			NextTenantId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readBuffByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByContPrevIdx" );
		cfbam::CFBamParamBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = readDerivedByContPrevIdx( Authorization,
			TenantId,
			ServerMethodId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamParamBuff*> CFBamRamParamTable::readBuffByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByContNextIdx" );
		cfbam::CFBamParamBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> buffList = readDerivedByContNextIdx( Authorization,
			TenantId,
			ServerMethodId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamParamBuff* CFBamRamParamTable::moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		static const std::string S_ProcName( "moveBuffUp" );
		static const std::string S_CouldNotLocateObject( "Could not locate object" );
		static const std::string S_CouldNotLocateObjectPrev( "Could not locate object.prev" );
		static const std::string S_CouldNotLocateObjectGrandPrev( "Could not locate object.prev.prev" );
		static const std::string S_CouldNotLocateObjectNext( "Could not locate object.next" );

		cfbam::CFBamParamBuff* grandprev = NULL;
		cfbam::CFBamParamBuff* prev = NULL;
		cfbam::CFBamParamBuff* cur = NULL;
		cfbam::CFBamParamBuff* next = NULL;

		cur = schema->getTableParam()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalPrevTenantIdNull() )
			&& ( cur->isOptionalPrevIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamParamBuff*>( cur ) );
		}

		prev = schema->getTableParam()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
		if( prev == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectPrev );
		}

		if( ( ! prev->isOptionalPrevTenantIdNull() )
			&& ( ! prev->isOptionalPrevIdNull() ) ) {
			grandprev = schema->getTableParam()->readDerivedByIdIdx(Authorization, prev->getOptionalPrevTenantIdValue(), prev->getOptionalPrevIdValue() );
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
			next = schema->getTableParam()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
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
		cfbam::CFBamParamBuff* editPrev = NULL;
		cfbam::CFBamParamBuff* editCur = NULL;
		cfbam::CFBamParamBuff* editGrandprev = NULL;
		cfbam::CFBamParamBuff* editNext = NULL;
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
			if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
				editGrandprev = schema->getTableParam()->updateParam( Authorization, dynamic_cast<cfbam::CFBamParamBuff*>( grandprev ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
		}

		classCode = editPrev->getClassCode();
			if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
				editPrev = schema->getTableParam()->updateParam( Authorization, prev );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}

		classCode = editCur->getClassCode();
			if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
				editCur = schema->getTableParam()->updateParam( Authorization, cur );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( next != NULL ) {
			classCode = next->getClassCode();
			if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
				editNext = schema->getTableParam()->updateParam( Authorization, next );
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

		return( dynamic_cast<cfbam::CFBamParamBuff*>( editCur ) );
	}

	cfbam::CFBamParamBuff* CFBamRamParamTable::moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		const static std::string S_ProcName( "moveBuffDown" );
		const static std::string S_CouldNotLocateObject( "Could not locate object" );
		const static std::string S_CouldNotLocateObjectDotNext( "Could not locate object.next" );
		const static std::string S_CouldNotLocateObjectDotNextDotNext( "Could not locate object.next.next" );
		const static std::string S_CouldNotLocateObjectDotPrev( "Could not locate object.prev" );

		cfbam::CFBamParamBuff* prev = NULL;
		cfbam::CFBamParamBuff* cur = NULL;
		cfbam::CFBamParamBuff* next = NULL;
		cfbam::CFBamParamBuff* grandnext = NULL;

		cur = schema->getTableParam()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalNextTenantIdNull() )
			&& ( cur->isOptionalNextIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamParamBuff*>( cur ) );
		}

		next = schema->getTableParam()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
		if( next == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectDotNext );
		}

		if( ( ! next->isOptionalNextTenantIdNull()  )
			&& ( ! next->isOptionalNextIdNull() ) ) {
			grandnext = schema->getTableParam()->readDerivedByIdIdx(Authorization, next->getOptionalNextTenantIdValue(), next->getOptionalNextIdValue() );
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
			prev = schema->getTableParam()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
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
		cfbam::CFBamParamBuff* editCur = NULL;
		cfbam::CFBamParamBuff* editNext = NULL;
		cfbam::CFBamParamBuff* editGrandnext = NULL;
		cfbam::CFBamParamBuff* editPrev = NULL;

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
			if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
				editPrev = schema->getTableParam()->updateParam( Authorization, prev );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}
		}

		classCode = cur->getClassCode();
			if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
				editCur = schema->getTableParam()->updateParam( Authorization, cur );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		classCode = editNext->getClassCode();
			if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
				editNext = schema->getTableParam()->updateParam( Authorization, next );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( editGrandnext != NULL ) {
			classCode = editGrandnext->getClassCode();
			if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
				editGrandnext = schema->getTableParam()->updateParam( Authorization, dynamic_cast<cfbam::CFBamParamBuff*>( editGrandnext ) );
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

		return( dynamic_cast<cfbam::CFBamParamBuff*>( editCur ) );
	}

	cfbam::CFBamParamBuff* CFBamRamParamTable::updateParam( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamParamBuff* Buff )
	{
		static const std::string S_ProcName( "updateParam" );
		cfbam::CFBamParamPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in Param for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamParamBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for Param primary key " );
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
		cfbam::CFBamParamByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUNameIdx.setRequiredServerMethodId( existing->getRequiredServerMethodId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamParamByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUNameIdx.setRequiredServerMethodId( Buff->getRequiredServerMethodId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamParamByValTentIdxKey existingKeyValTentIdx;
		existingKeyValTentIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamParamByValTentIdxKey newKeyValTentIdx;
		newKeyValTentIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamParamByServerMethodIdxKey existingKeyServerMethodIdx;
		existingKeyServerMethodIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyServerMethodIdx.setRequiredServerMethodId( existing->getRequiredServerMethodId() );
		cfbam::CFBamParamByServerMethodIdxKey newKeyServerMethodIdx;
		newKeyServerMethodIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyServerMethodIdx.setRequiredServerMethodId( Buff->getRequiredServerMethodId() );
		cfbam::CFBamParamByDefSchemaIdxKey existingKeyDefSchemaIdx;
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
		cfbam::CFBamParamByDefSchemaIdxKey newKeyDefSchemaIdx;
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
		cfbam::CFBamParamByServerTypeIdxKey existingKeyServerTypeIdx;
		if( existing->isOptionalTypeTenantIdNull() ) {
			existingKeyServerTypeIdx.setOptionalTypeTenantIdNull();
		}
		else {
			existingKeyServerTypeIdx.setOptionalTypeTenantIdValue( existing->getOptionalTypeTenantIdValue() );
		}
		if( existing->isOptionalTypeIdNull() ) {
			existingKeyServerTypeIdx.setOptionalTypeIdNull();
		}
		else {
			existingKeyServerTypeIdx.setOptionalTypeIdValue( existing->getOptionalTypeIdValue() );
		}
		cfbam::CFBamParamByServerTypeIdxKey newKeyServerTypeIdx;
		if( Buff->isOptionalTypeTenantIdNull() ) {
			newKeyServerTypeIdx.setOptionalTypeTenantIdNull();
		}
		else {
			newKeyServerTypeIdx.setOptionalTypeTenantIdValue( Buff->getOptionalTypeTenantIdValue() );
		}
		if( Buff->isOptionalTypeIdNull() ) {
			newKeyServerTypeIdx.setOptionalTypeIdNull();
		}
		else {
			newKeyServerTypeIdx.setOptionalTypeIdValue( Buff->getOptionalTypeIdValue() );
		}
		cfbam::CFBamParamByPrevIdxKey existingKeyPrevIdx;
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
		cfbam::CFBamParamByPrevIdxKey newKeyPrevIdx;
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
		cfbam::CFBamParamByNextIdxKey existingKeyNextIdx;
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
		cfbam::CFBamParamByNextIdxKey newKeyNextIdx;
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
		cfbam::CFBamParamByContPrevIdxKey existingKeyContPrevIdx;
		existingKeyContPrevIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyContPrevIdx.setRequiredServerMethodId( existing->getRequiredServerMethodId() );
		if( existing->isOptionalPrevIdNull() ) {
			existingKeyContPrevIdx.setOptionalPrevIdNull();
		}
		else {
			existingKeyContPrevIdx.setOptionalPrevIdValue( existing->getOptionalPrevIdValue() );
		}
		cfbam::CFBamParamByContPrevIdxKey newKeyContPrevIdx;
		newKeyContPrevIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyContPrevIdx.setRequiredServerMethodId( Buff->getRequiredServerMethodId() );
		if( Buff->isOptionalPrevIdNull() ) {
			newKeyContPrevIdx.setOptionalPrevIdNull();
		}
		else {
			newKeyContPrevIdx.setOptionalPrevIdValue( Buff->getOptionalPrevIdValue() );
		}
		cfbam::CFBamParamByContNextIdxKey existingKeyContNextIdx;
		existingKeyContNextIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyContNextIdx.setRequiredServerMethodId( existing->getRequiredServerMethodId() );
		if( existing->isOptionalNextIdNull() ) {
			existingKeyContNextIdx.setOptionalNextIdNull();
		}
		else {
			existingKeyContNextIdx.setOptionalNextIdValue( existing->getOptionalNextIdValue() );
		}
		cfbam::CFBamParamByContNextIdxKey newKeyContNextIdx;
		newKeyContNextIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyContNextIdx.setRequiredServerMethodId( Buff->getRequiredServerMethodId() );
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
				std::string Msg( "Duplicate key detected for index ParamUNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamServerMethodBuff* chk = dynamic_cast<cfbam::CFBamServerMethodBuff*>( schema->getTableServerMethod()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredServerMethodId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship ServerMethod to table ServerMethod" );
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

			if( Buff->isOptionalTypeTenantIdNull() ) {
				allNull = false;
			}
			if( Buff->isOptionalTypeIdNull() ) {
				allNull = false;
			}
			if( allNull ) {
				cfbam::CFBamValueBuff* chk = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableValue()->readDerivedByIdIdx( Authorization,
						Buff->getOptionalTypeTenantIdValue(),
						Buff->getOptionalTypeIdValue() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship Type to table Value" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfbam::CFBamParamBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfbam::CFBamParamBuff" );
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

		dictByPKey->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamParamByUNameIdxKey, cfbam::CFBamParamBuff*>::value_type( newKeyUNameIdx, existing ) );

		std::map<cfbam::CFBamParamPKey,
			 cfbam::CFBamParamBuff*>* subdictValTentIdx;
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
			subdictValTentIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByValTentIdx->insert( std::map<cfbam::CFBamParamByValTentIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( newKeyValTentIdx, subdictValTentIdx ) );
		}
		subdictValTentIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamParamPKey,
			 cfbam::CFBamParamBuff*>* subdictServerMethodIdx;
		auto searchDictByServerMethodIdx = dictByServerMethodIdx->find( existingKeyServerMethodIdx );
		if( searchDictByServerMethodIdx != dictByServerMethodIdx->end() ) {
			subdictServerMethodIdx = searchDictByServerMethodIdx->second;
			auto searchSubDict = subdictServerMethodIdx->find( pkey );
			if( searchSubDict != subdictServerMethodIdx->end() ) {
				subdictServerMethodIdx->erase( searchSubDict );
			}
			if( subdictServerMethodIdx->size() <= 0 ) {
				delete subdictServerMethodIdx;
				dictByServerMethodIdx->erase( searchDictByServerMethodIdx );
			}
			subdictServerMethodIdx = NULL;
		}
		auto searchNewKeyDictByServerMethodIdx = dictByServerMethodIdx->find( newKeyServerMethodIdx );
		if( searchNewKeyDictByServerMethodIdx != dictByServerMethodIdx->end() ) {
			subdictServerMethodIdx = searchNewKeyDictByServerMethodIdx->second;
		}
		else {
			subdictServerMethodIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByServerMethodIdx->insert( std::map<cfbam::CFBamParamByServerMethodIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( newKeyServerMethodIdx, subdictServerMethodIdx ) );
		}
		subdictServerMethodIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamParamPKey,
			 cfbam::CFBamParamBuff*>* subdictDefSchemaIdx;
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
			subdictDefSchemaIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamParamByDefSchemaIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( newKeyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamParamPKey,
			 cfbam::CFBamParamBuff*>* subdictServerTypeIdx;
		auto searchDictByServerTypeIdx = dictByServerTypeIdx->find( existingKeyServerTypeIdx );
		if( searchDictByServerTypeIdx != dictByServerTypeIdx->end() ) {
			subdictServerTypeIdx = searchDictByServerTypeIdx->second;
			auto searchSubDict = subdictServerTypeIdx->find( pkey );
			if( searchSubDict != subdictServerTypeIdx->end() ) {
				subdictServerTypeIdx->erase( searchSubDict );
			}
			if( subdictServerTypeIdx->size() <= 0 ) {
				delete subdictServerTypeIdx;
				dictByServerTypeIdx->erase( searchDictByServerTypeIdx );
			}
			subdictServerTypeIdx = NULL;
		}
		auto searchNewKeyDictByServerTypeIdx = dictByServerTypeIdx->find( newKeyServerTypeIdx );
		if( searchNewKeyDictByServerTypeIdx != dictByServerTypeIdx->end() ) {
			subdictServerTypeIdx = searchNewKeyDictByServerTypeIdx->second;
		}
		else {
			subdictServerTypeIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByServerTypeIdx->insert( std::map<cfbam::CFBamParamByServerTypeIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( newKeyServerTypeIdx, subdictServerTypeIdx ) );
		}
		subdictServerTypeIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamParamPKey,
			 cfbam::CFBamParamBuff*>* subdictPrevIdx;
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
			subdictPrevIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamParamByPrevIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( newKeyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamParamPKey,
			 cfbam::CFBamParamBuff*>* subdictNextIdx;
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
			subdictNextIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamParamByNextIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( newKeyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamParamPKey,
			 cfbam::CFBamParamBuff*>* subdictContPrevIdx;
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
			subdictContPrevIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByContPrevIdx->insert( std::map<cfbam::CFBamParamByContPrevIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( newKeyContPrevIdx, subdictContPrevIdx ) );
		}
		subdictContPrevIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamParamPKey,
			 cfbam::CFBamParamBuff*>* subdictContNextIdx;
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
			subdictContNextIdx = new std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>();
			dictByContNextIdx->insert( std::map<cfbam::CFBamParamByContNextIdxKey,
				std::map<cfbam::CFBamParamPKey,
					cfbam::CFBamParamBuff*>*>::value_type( newKeyContNextIdx, subdictContNextIdx ) );
		}
		subdictContNextIdx->insert( std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamParamBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamParamBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamParamBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamParamTable::deleteParam( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamParamBuff* Buff )
	{
		static const std::string S_ProcName( "deleteParam" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamParamPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamParamBuff* existing = searchExisting->second;

		const int64_t* prevTenantId = existing->getOptionalPrevTenantIdReference();
		const int64_t* prevId = existing->getOptionalPrevIdReference();
		const int64_t* nextTenantId = existing->getOptionalNextTenantIdReference();
		const int64_t* nextId = existing->getOptionalNextIdReference();

		cfbam::CFBamParamBuff* prev = NULL;
		cfbam::CFBamParamBuff* editPrev = NULL;
		if( ( prevTenantId != NULL )
			&& ( prevId != NULL ) ) {
			prev = schema->getTableParam()->readDerivedByIdIdx( Authorization,
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
			if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
				editPrev = schema->getTableParam()->updateParam( Authorization, prev );
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

		cfbam::CFBamParamBuff* next = NULL;
		cfbam::CFBamParamBuff* editNext = NULL;
		if( ( nextTenantId != NULL )
			&& ( nextId != NULL ) ) {
			next = schema->getTableParam()->readDerivedByIdIdx( Authorization,
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
			if( classCode == cfbam::CFBamParamBuff::CLASS_CODE ) {
				editNext = schema->getTableParam()->updateParam( Authorization, next );
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

		cfbam::CFBamParamByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUNameIdx.setRequiredServerMethodId( existing->getRequiredServerMethodId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamParamByValTentIdxKey keyValTentIdx;
		keyValTentIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamParamByServerMethodIdxKey keyServerMethodIdx;
		keyServerMethodIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyServerMethodIdx.setRequiredServerMethodId( existing->getRequiredServerMethodId() );
		cfbam::CFBamParamByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamParamByServerTypeIdxKey keyServerTypeIdx;
		if( existing->isOptionalTypeTenantIdNull() ) {
			keyServerTypeIdx.setOptionalTypeTenantIdNull();
		}
		else {
			keyServerTypeIdx.setOptionalTypeTenantIdValue( existing->getOptionalTypeTenantIdValue() );
		}
		if( existing->isOptionalTypeIdNull() ) {
			keyServerTypeIdx.setOptionalTypeIdNull();
		}
		else {
			keyServerTypeIdx.setOptionalTypeIdValue( existing->getOptionalTypeIdValue() );
		}
		cfbam::CFBamParamByPrevIdxKey keyPrevIdx;
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
		cfbam::CFBamParamByNextIdxKey keyNextIdx;
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
		cfbam::CFBamParamByContPrevIdxKey keyContPrevIdx;
		keyContPrevIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyContPrevIdx.setRequiredServerMethodId( existing->getRequiredServerMethodId() );
		if( existing->isOptionalPrevIdNull() ) {
			keyContPrevIdx.setOptionalPrevIdNull();
		}
		else {
			keyContPrevIdx.setOptionalPrevIdValue( existing->getOptionalPrevIdValue() );
		}
		cfbam::CFBamParamByContNextIdxKey keyContNextIdx;
		keyContNextIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyContNextIdx.setRequiredServerMethodId( existing->getRequiredServerMethodId() );
		if( existing->isOptionalNextIdNull() ) {
			keyContNextIdx.setOptionalNextIdNull();
		}
		else {
			keyContNextIdx.setOptionalNextIdValue( existing->getOptionalNextIdValue() );
		}
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamParamPKey, cfbam::CFBamParamBuff*>* subdict;

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
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictValTentIdx = searchDictByValTentIdx->second;
			auto searchSubDict = subdictValTentIdx->find( pkey );
			if( searchSubDict != subdictValTentIdx->end() ) {
				subdictValTentIdx->erase( searchSubDict );
			}
			subdictValTentIdx = NULL;
		}

		auto searchDictByServerMethodIdx = dictByServerMethodIdx->find( keyServerMethodIdx );
		if( searchDictByServerMethodIdx != dictByServerMethodIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictServerMethodIdx = searchDictByServerMethodIdx->second;
			auto searchSubDict = subdictServerMethodIdx->find( pkey );
			if( searchSubDict != subdictServerMethodIdx->end() ) {
				subdictServerMethodIdx->erase( searchSubDict );
			}
			subdictServerMethodIdx = NULL;
		}

		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			subdictDefSchemaIdx = NULL;
		}

		auto searchDictByServerTypeIdx = dictByServerTypeIdx->find( keyServerTypeIdx );
		if( searchDictByServerTypeIdx != dictByServerTypeIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictServerTypeIdx = searchDictByServerTypeIdx->second;
			auto searchSubDict = subdictServerTypeIdx->find( pkey );
			if( searchSubDict != subdictServerTypeIdx->end() ) {
				subdictServerTypeIdx->erase( searchSubDict );
			}
			subdictServerTypeIdx = NULL;
		}

		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			auto searchSubDict = subdictPrevIdx->find( pkey );
			if( searchSubDict != subdictPrevIdx->end() ) {
				subdictPrevIdx->erase( searchSubDict );
			}
			subdictPrevIdx = NULL;
		}

		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			auto searchSubDict = subdictNextIdx->find( pkey );
			if( searchSubDict != subdictNextIdx->end() ) {
				subdictNextIdx->erase( searchSubDict );
			}
			subdictNextIdx = NULL;
		}

		auto searchDictByContPrevIdx = dictByContPrevIdx->find( keyContPrevIdx );
		if( searchDictByContPrevIdx != dictByContPrevIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictContPrevIdx = searchDictByContPrevIdx->second;
			auto searchSubDict = subdictContPrevIdx->find( pkey );
			if( searchSubDict != subdictContPrevIdx->end() ) {
				subdictContPrevIdx->erase( searchSubDict );
			}
			subdictContPrevIdx = NULL;
		}

		auto searchDictByContNextIdx = dictByContNextIdx->find( keyContNextIdx );
		if( searchDictByContNextIdx != dictByContNextIdx->end() ) {
			std::map<cfbam::CFBamParamPKey,
				 cfbam::CFBamParamBuff*>* subdictContNextIdx = searchDictByContNextIdx->second;
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

	void CFBamRamParamTable::deleteParamByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamParamPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteParamByIdIdx( Authorization, &key );
	}

	void CFBamRamParamTable::deleteParamByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamParamBuff* cur = NULL;
		cfbam::CFBamParamBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> matchSet;
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamParamBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableParam()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteParam( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamParamTable::deleteParamByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argServerMethodId,
			const std::string& argName )
	{
		cfbam::CFBamParamByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredServerMethodId( argServerMethodId );
		key.setRequiredName( argName );
		deleteParamByUNameIdx( Authorization, &key );
	}

	void CFBamRamParamTable::deleteParamByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamByUNameIdxKey* argKey )
	{
		cfbam::CFBamParamBuff* cur = NULL;
		cfbam::CFBamParamBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> matchSet;
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamParamBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableParam()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteParam( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamParamTable::deleteParamByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamParamByValTentIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteParamByValTentIdx( Authorization, &key );
	}

	void CFBamRamParamTable::deleteParamByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamByValTentIdxKey* argKey )
	{
		cfbam::CFBamParamBuff* cur = NULL;
		cfbam::CFBamParamBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> matchSet;
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamParamBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableParam()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteParam( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamParamTable::deleteParamByServerMethodIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argServerMethodId )
	{
		cfbam::CFBamParamByServerMethodIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredServerMethodId( argServerMethodId );
		deleteParamByServerMethodIdx( Authorization, &key );
	}

	void CFBamRamParamTable::deleteParamByServerMethodIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamByServerMethodIdxKey* argKey )
	{
		cfbam::CFBamParamBuff* cur = NULL;
		cfbam::CFBamParamBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> matchSet;
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamParamBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableParam()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteParam( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamParamTable::deleteParamByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamParamByDefSchemaIdxKey key;
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
		deleteParamByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamParamTable::deleteParamByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamParamBuff* cur = NULL;
		cfbam::CFBamParamBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> matchSet;
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamParamBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableParam()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteParam( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamParamTable::deleteParamByServerTypeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argTypeTenantId,
			const int64_t* argTypeId )
	{
		cfbam::CFBamParamByServerTypeIdxKey key;
		if( argTypeTenantId == NULL ) {
			key.setOptionalTypeTenantIdNull();
		}
		else {
			key.setOptionalTypeTenantIdValue( *argTypeTenantId );
		}
		if( argTypeId == NULL ) {
			key.setOptionalTypeIdNull();
		}
		else {
			key.setOptionalTypeIdValue( *argTypeId );
		}
		deleteParamByServerTypeIdx( Authorization, &key );
	}

	void CFBamRamParamTable::deleteParamByServerTypeIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamByServerTypeIdxKey* argKey )
	{
		cfbam::CFBamParamBuff* cur = NULL;
		cfbam::CFBamParamBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalTypeTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalTypeIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> matchSet;
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamParamBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableParam()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteParam( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamParamTable::deleteParamByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId )
	{
		cfbam::CFBamParamByPrevIdxKey key;
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
		deleteParamByPrevIdx( Authorization, &key );
	}

	void CFBamRamParamTable::deleteParamByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamByPrevIdxKey* argKey )
	{
		cfbam::CFBamParamBuff* cur = NULL;
		cfbam::CFBamParamBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> matchSet;
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamParamBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableParam()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteParam( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamParamTable::deleteParamByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId )
	{
		cfbam::CFBamParamByNextIdxKey key;
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
		deleteParamByNextIdx( Authorization, &key );
	}

	void CFBamRamParamTable::deleteParamByNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamByNextIdxKey* argKey )
	{
		cfbam::CFBamParamBuff* cur = NULL;
		cfbam::CFBamParamBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> matchSet;
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamParamBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableParam()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteParam( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamParamTable::deleteParamByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argServerMethodId,
			const int64_t* argPrevId )
	{
		cfbam::CFBamParamByContPrevIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredServerMethodId( argServerMethodId );
		if( argPrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *argPrevId );
		}
		deleteParamByContPrevIdx( Authorization, &key );
	}

	void CFBamRamParamTable::deleteParamByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamByContPrevIdxKey* argKey )
	{
		cfbam::CFBamParamBuff* cur = NULL;
		cfbam::CFBamParamBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalPrevIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> matchSet;
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamParamBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableParam()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteParam( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamParamTable::deleteParamByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argServerMethodId,
			const int64_t* argNextId )
	{
		cfbam::CFBamParamByContNextIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredServerMethodId( argServerMethodId );
		if( argNextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *argNextId );
		}
		deleteParamByContNextIdx( Authorization, &key );
	}

	void CFBamRamParamTable::deleteParamByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamParamByContNextIdxKey* argKey )
	{
		cfbam::CFBamParamBuff* cur = NULL;
		cfbam::CFBamParamBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalNextIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*> matchSet;
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamParamBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamParamBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamParamBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableParam()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteParam( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamParamTable::releasePreparedStatements() {
	}

}
