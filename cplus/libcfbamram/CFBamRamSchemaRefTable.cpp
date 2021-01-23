
// Description: C++18 Implementation for an in-memory RAM DbIO for SchemaRef.

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

	const std::string CFBamRamSchemaRefTable::CLASS_NAME( "CFBamRamSchemaRefTable" );

	CFBamRamSchemaRefTable::CFBamRamSchemaRefTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamSchemaRefTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>();
		dictBySchemaIdx = new std::map<cfbam::CFBamSchemaRefBySchemaIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>*>();
		dictByUNameIdx = new std::map<cfbam::CFBamSchemaRefByUNameIdxKey, cfbam::CFBamSchemaRefBuff*>();
		dictByRefSchemaIdx = new std::map<cfbam::CFBamSchemaRefByRefSchemaIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>*>();
		dictByPrevIdx = new std::map<cfbam::CFBamSchemaRefByPrevIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>*>();
		dictByNextIdx = new std::map<cfbam::CFBamSchemaRefByNextIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>*>();
	}

	CFBamRamSchemaRefTable::~CFBamRamSchemaRefTable() {
		if( dictBySchemaIdx != NULL ) {
			for( auto iterDict = dictBySchemaIdx->begin(); iterDict != dictBySchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictBySchemaIdx;
			dictBySchemaIdx = NULL;
		}
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByRefSchemaIdx != NULL ) {
			for( auto iterDict = dictByRefSchemaIdx->begin(); iterDict != dictByRefSchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByRefSchemaIdx;
			dictByRefSchemaIdx = NULL;
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
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfbam::CFBamSchemaRefBuff* CFBamRamSchemaRefTable::createSchemaRef( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamSchemaRefBuff* Buff )
	{
		static const std::string S_ProcName( "createSchemaRef" );
		cfbam::CFBamSchemaRefBuff* tail = NULL;
		if( Buff->getClassCode() == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
			std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> siblings = schema->getTableSchemaRef()->readDerivedBySchemaIdx( Authorization,
				Buff->getRequiredTenantId(),
				Buff->getRequiredSchemaId() );
			std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterSiblings = siblings.begin();
			std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator endSiblings = siblings.end();
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
		}
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamSchemaRefBySchemaIdxKey keySchemaIdx;
		keySchemaIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keySchemaIdx.setRequiredSchemaId( Buff->getRequiredSchemaId() );
		cfbam::CFBamSchemaRefByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUNameIdx.setRequiredSchemaId( Buff->getRequiredSchemaId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamSchemaRefByRefSchemaIdxKey keyRefSchemaIdx;
		if( Buff->isOptionalRefSchemaTenantIdNull() ) {
			keyRefSchemaIdx.setOptionalRefSchemaTenantIdNull();
		}
		else {
			keyRefSchemaIdx.setOptionalRefSchemaTenantIdValue( Buff->getOptionalRefSchemaTenantIdValue() );
		}
		if( Buff->isOptionalRefSchemaIdNull() ) {
			keyRefSchemaIdx.setOptionalRefSchemaIdNull();
		}
		else {
			keyRefSchemaIdx.setOptionalRefSchemaIdValue( Buff->getOptionalRefSchemaIdValue() );
		}
		cfbam::CFBamSchemaRefByPrevIdxKey keyPrevIdx;
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
		cfbam::CFBamSchemaRefByNextIdxKey keyNextIdx;
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
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index SchemaRefUNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamSchemaDefBuff* chk = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredSchemaId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Schema to table SchemaDef" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamSchemaRefBuff* buff = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( schema->getTableScope()->createScope( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>* subdictSchemaIdx;
		auto searchDictBySchemaIdx = dictBySchemaIdx->find( keySchemaIdx );
		if( searchDictBySchemaIdx != dictBySchemaIdx->end() ) {
			subdictSchemaIdx = searchDictBySchemaIdx->second;
		}
		else {
			subdictSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>();
			dictBySchemaIdx->insert( std::map<cfbam::CFBamSchemaRefBySchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaRefBuff*>*>::value_type( keySchemaIdx, subdictSchemaIdx ) );
		}
		subdictSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamSchemaRefByUNameIdxKey, cfbam::CFBamSchemaRefBuff*>::value_type( keyUNameIdx, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>* subdictRefSchemaIdx;
		auto searchDictByRefSchemaIdx = dictByRefSchemaIdx->find( keyRefSchemaIdx );
		if( searchDictByRefSchemaIdx != dictByRefSchemaIdx->end() ) {
			subdictRefSchemaIdx = searchDictByRefSchemaIdx->second;
		}
		else {
			subdictRefSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>();
			dictByRefSchemaIdx->insert( std::map<cfbam::CFBamSchemaRefByRefSchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaRefBuff*>*>::value_type( keyRefSchemaIdx, subdictRefSchemaIdx ) );
		}
		subdictRefSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>* subdictPrevIdx;
		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			subdictPrevIdx = searchDictByPrevIdx->second;
		}
		else {
			subdictPrevIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamSchemaRefByPrevIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaRefBuff*>*>::value_type( keyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>* subdictNextIdx;
		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			subdictNextIdx = searchDictByNextIdx->second;
		}
		else {
			subdictNextIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamSchemaRefByNextIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaRefBuff*>*>::value_type( keyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>::value_type( pkey, buff ) );

		if( tail != NULL ) {
			tail = schema->getTableSchemaRef()->readDerivedByIdIdx( Authorization,
				buff->getOptionalPrevTenantIdValue(),
				buff->getOptionalPrevIdValue() );
			const classcode_t tailClassCode = tail->getClassCode();
			if( tailClassCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				cfbam::CFBamSchemaRefBuff* tailEdit = new cfbam::CFBamSchemaRefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamSchemaRefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( schema->getTableSchemaRef()->updateSchemaRef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else {
				delete Buff;
				delete tail;
				tail = NULL;
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( tailClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete tail;
			tail = NULL;
		}
		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamSchemaRefBuff* CFBamRamSchemaRefTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamSchemaRefBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamSchemaRefBuff* CFBamRamSchemaRefTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamSchemaRefBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamSchemaRefBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamSchemaRefBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::readDerivedBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId )
	{
		static const std::string S_ProcName( "readDerivedBySchemaIdx" );
		cfbam::CFBamSchemaRefBySchemaIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaId( SchemaId );
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> recVec;
		cfbam::CFBamSchemaRefBuff* clone;
		auto searchDictBySchemaIdx = dictBySchemaIdx->find( key );
		if( searchDictBySchemaIdx != dictBySchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaRefBuff*>* subdictSchemaIdx = searchDictBySchemaIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>::iterator iter = subdictSchemaIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>::iterator end = subdictSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamSchemaRefBuff* CFBamRamSchemaRefTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamSchemaRefByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaId( SchemaId );
		key.setRequiredName( Name );
		cfbam::CFBamSchemaRefBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::readDerivedByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RefSchemaTenantId,
			const int64_t* RefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByRefSchemaIdx" );
		cfbam::CFBamSchemaRefByRefSchemaIdxKey key;
		if( RefSchemaTenantId == NULL ) {
			key.setOptionalRefSchemaTenantIdNull();
		}
		else {
			key.setOptionalRefSchemaTenantIdValue( *RefSchemaTenantId );
		}
		if( RefSchemaId == NULL ) {
			key.setOptionalRefSchemaIdNull();
		}
		else {
			key.setOptionalRefSchemaIdValue( *RefSchemaId );
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> recVec;
		cfbam::CFBamSchemaRefBuff* clone;
		auto searchDictByRefSchemaIdx = dictByRefSchemaIdx->find( key );
		if( searchDictByRefSchemaIdx != dictByRefSchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaRefBuff*>* subdictRefSchemaIdx = searchDictByRefSchemaIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>::iterator iter = subdictRefSchemaIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>::iterator end = subdictRefSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByPrevIdx" );
		cfbam::CFBamSchemaRefByPrevIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> recVec;
		cfbam::CFBamSchemaRefBuff* clone;
		auto searchDictByPrevIdx = dictByPrevIdx->find( key );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaRefBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>::iterator iter = subdictPrevIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>::iterator end = subdictPrevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByNextIdx" );
		cfbam::CFBamSchemaRefByNextIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> recVec;
		cfbam::CFBamSchemaRefBuff* clone;
		auto searchDictByNextIdx = dictByNextIdx->find( key );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaRefBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>::iterator iter = subdictNextIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>::iterator end = subdictNextIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamSchemaRefBuff* CFBamRamSchemaRefTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamSchemaRefBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamSchemaRefBuff* CFBamRamSchemaRefTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamSchemaRefBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff ) );
	}

	cfbam::CFBamSchemaRefBuff* CFBamRamSchemaRefTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamSchemaRefBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamSchemaRefBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamSchemaRefBuff* CFBamRamSchemaRefTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamSchemaRefBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamSchemaRefBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::readBuffBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId )
	{
		static const std::string S_ProcName( "readBuffBySchemaIdx" );
		cfbam::CFBamSchemaRefBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> buffList = readDerivedBySchemaIdx( Authorization,
			TenantId,
			SchemaId );
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamSchemaRefBuff* CFBamRamSchemaRefTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamSchemaRefBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			SchemaId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::readBuffByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RefSchemaTenantId,
			const int64_t* RefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByRefSchemaIdx" );
		cfbam::CFBamSchemaRefBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> buffList = readDerivedByRefSchemaIdx( Authorization,
			RefSchemaTenantId,
			RefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByPrevIdx" );
		cfbam::CFBamSchemaRefBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> buffList = readDerivedByPrevIdx( Authorization,
			PrevTenantId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByNextIdx" );
		cfbam::CFBamSchemaRefBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> buffList = readDerivedByNextIdx( Authorization,
			NextTenantId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::pageBuffBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffBySchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::pageBuffByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RefSchemaTenantId,
			const int64_t* RefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByRefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::pageBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByPrevIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> CFBamRamSchemaRefTable::pageBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByNextIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamSchemaRefBuff* CFBamRamSchemaRefTable::moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		static const std::string S_ProcName( "moveBuffUp" );
		static const std::string S_CouldNotLocateObject( "Could not locate object" );
		static const std::string S_CouldNotLocateObjectPrev( "Could not locate object.prev" );
		static const std::string S_CouldNotLocateObjectGrandPrev( "Could not locate object.prev.prev" );
		static const std::string S_CouldNotLocateObjectNext( "Could not locate object.next" );

		cfbam::CFBamSchemaRefBuff* grandprev = NULL;
		cfbam::CFBamSchemaRefBuff* prev = NULL;
		cfbam::CFBamSchemaRefBuff* cur = NULL;
		cfbam::CFBamSchemaRefBuff* next = NULL;

		cur = schema->getTableSchemaRef()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalPrevTenantIdNull() )
			&& ( cur->isOptionalPrevIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur ) );
		}

		prev = schema->getTableSchemaRef()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
		if( prev == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectPrev );
		}

		if( ( ! prev->isOptionalPrevTenantIdNull() )
			&& ( ! prev->isOptionalPrevIdNull() ) ) {
			grandprev = schema->getTableSchemaRef()->readDerivedByIdIdx(Authorization, prev->getOptionalPrevTenantIdValue(), prev->getOptionalPrevIdValue() );
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
			next = schema->getTableSchemaRef()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
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
		cfbam::CFBamSchemaRefBuff* editPrev = NULL;
		cfbam::CFBamSchemaRefBuff* editCur = NULL;
		cfbam::CFBamSchemaRefBuff* editGrandprev = NULL;
		cfbam::CFBamSchemaRefBuff* editNext = NULL;
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
			if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				editGrandprev = schema->getTableSchemaRef()->updateSchemaRef( Authorization, dynamic_cast<cfbam::CFBamSchemaRefBuff*>( grandprev ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
		}

		classCode = editPrev->getClassCode();
			if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				editPrev = schema->getTableSchemaRef()->updateSchemaRef( Authorization, prev );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}

		classCode = editCur->getClassCode();
			if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				editCur = schema->getTableSchemaRef()->updateSchemaRef( Authorization, cur );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( next != NULL ) {
			classCode = next->getClassCode();
			if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				editNext = schema->getTableSchemaRef()->updateSchemaRef( Authorization, next );
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

		return( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( editCur ) );
	}

	cfbam::CFBamSchemaRefBuff* CFBamRamSchemaRefTable::moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		const static std::string S_ProcName( "moveBuffDown" );
		const static std::string S_CouldNotLocateObject( "Could not locate object" );
		const static std::string S_CouldNotLocateObjectDotNext( "Could not locate object.next" );
		const static std::string S_CouldNotLocateObjectDotNextDotNext( "Could not locate object.next.next" );
		const static std::string S_CouldNotLocateObjectDotPrev( "Could not locate object.prev" );

		cfbam::CFBamSchemaRefBuff* prev = NULL;
		cfbam::CFBamSchemaRefBuff* cur = NULL;
		cfbam::CFBamSchemaRefBuff* next = NULL;
		cfbam::CFBamSchemaRefBuff* grandnext = NULL;

		cur = schema->getTableSchemaRef()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalNextTenantIdNull() )
			&& ( cur->isOptionalNextIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur ) );
		}

		next = schema->getTableSchemaRef()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
		if( next == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectDotNext );
		}

		if( ( ! next->isOptionalNextTenantIdNull()  )
			&& ( ! next->isOptionalNextIdNull() ) ) {
			grandnext = schema->getTableSchemaRef()->readDerivedByIdIdx(Authorization, next->getOptionalNextTenantIdValue(), next->getOptionalNextIdValue() );
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
			prev = schema->getTableSchemaRef()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
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
		cfbam::CFBamSchemaRefBuff* editCur = NULL;
		cfbam::CFBamSchemaRefBuff* editNext = NULL;
		cfbam::CFBamSchemaRefBuff* editGrandnext = NULL;
		cfbam::CFBamSchemaRefBuff* editPrev = NULL;

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
			if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				editPrev = schema->getTableSchemaRef()->updateSchemaRef( Authorization, prev );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}
		}

		classCode = cur->getClassCode();
			if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				editCur = schema->getTableSchemaRef()->updateSchemaRef( Authorization, cur );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		classCode = editNext->getClassCode();
			if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				editNext = schema->getTableSchemaRef()->updateSchemaRef( Authorization, next );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( editGrandnext != NULL ) {
			classCode = editGrandnext->getClassCode();
			if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				editGrandnext = schema->getTableSchemaRef()->updateSchemaRef( Authorization, dynamic_cast<cfbam::CFBamSchemaRefBuff*>( editGrandnext ) );
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

		return( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( editCur ) );
	}

	cfbam::CFBamSchemaRefBuff* CFBamRamSchemaRefTable::updateSchemaRef( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamSchemaRefBuff* Buff )
	{
		static const std::string S_ProcName( "updateSchemaRef" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in SchemaRef for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamSchemaRefBuff* existing = searchExisting->second;

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
		cfbam::CFBamSchemaRefBySchemaIdxKey existingKeySchemaIdx;
		existingKeySchemaIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeySchemaIdx.setRequiredSchemaId( existing->getRequiredSchemaId() );
		cfbam::CFBamSchemaRefBySchemaIdxKey newKeySchemaIdx;
		newKeySchemaIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeySchemaIdx.setRequiredSchemaId( Buff->getRequiredSchemaId() );
		cfbam::CFBamSchemaRefByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUNameIdx.setRequiredSchemaId( existing->getRequiredSchemaId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamSchemaRefByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUNameIdx.setRequiredSchemaId( Buff->getRequiredSchemaId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamSchemaRefByRefSchemaIdxKey existingKeyRefSchemaIdx;
		if( existing->isOptionalRefSchemaTenantIdNull() ) {
			existingKeyRefSchemaIdx.setOptionalRefSchemaTenantIdNull();
		}
		else {
			existingKeyRefSchemaIdx.setOptionalRefSchemaTenantIdValue( existing->getOptionalRefSchemaTenantIdValue() );
		}
		if( existing->isOptionalRefSchemaIdNull() ) {
			existingKeyRefSchemaIdx.setOptionalRefSchemaIdNull();
		}
		else {
			existingKeyRefSchemaIdx.setOptionalRefSchemaIdValue( existing->getOptionalRefSchemaIdValue() );
		}
		cfbam::CFBamSchemaRefByRefSchemaIdxKey newKeyRefSchemaIdx;
		if( Buff->isOptionalRefSchemaTenantIdNull() ) {
			newKeyRefSchemaIdx.setOptionalRefSchemaTenantIdNull();
		}
		else {
			newKeyRefSchemaIdx.setOptionalRefSchemaTenantIdValue( Buff->getOptionalRefSchemaTenantIdValue() );
		}
		if( Buff->isOptionalRefSchemaIdNull() ) {
			newKeyRefSchemaIdx.setOptionalRefSchemaIdNull();
		}
		else {
			newKeyRefSchemaIdx.setOptionalRefSchemaIdValue( Buff->getOptionalRefSchemaIdValue() );
		}
		cfbam::CFBamSchemaRefByPrevIdxKey existingKeyPrevIdx;
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
		cfbam::CFBamSchemaRefByPrevIdxKey newKeyPrevIdx;
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
		cfbam::CFBamSchemaRefByNextIdxKey existingKeyNextIdx;
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
		cfbam::CFBamSchemaRefByNextIdxKey newKeyNextIdx;
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
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SchemaRefUNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamSchemaDefBuff* chk = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredSchemaId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Schema to table SchemaDef" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( schema->getTableScope()->updateScope( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamSchemaRefBuff*>* subdictSchemaIdx;
		auto searchDictBySchemaIdx = dictBySchemaIdx->find( existingKeySchemaIdx );
		if( searchDictBySchemaIdx != dictBySchemaIdx->end() ) {
			subdictSchemaIdx = searchDictBySchemaIdx->second;
			auto searchSubDict = subdictSchemaIdx->find( pkey );
			if( searchSubDict != subdictSchemaIdx->end() ) {
				subdictSchemaIdx->erase( searchSubDict );
			}
			if( subdictSchemaIdx->size() <= 0 ) {
				delete subdictSchemaIdx;
				dictBySchemaIdx->erase( searchDictBySchemaIdx );
			}
			subdictSchemaIdx = NULL;
		}
		auto searchNewKeyDictBySchemaIdx = dictBySchemaIdx->find( newKeySchemaIdx );
		if( searchNewKeyDictBySchemaIdx != dictBySchemaIdx->end() ) {
			subdictSchemaIdx = searchNewKeyDictBySchemaIdx->second;
		}
		else {
			subdictSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>();
			dictBySchemaIdx->insert( std::map<cfbam::CFBamSchemaRefBySchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaRefBuff*>*>::value_type( newKeySchemaIdx, subdictSchemaIdx ) );
		}
		subdictSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamSchemaRefByUNameIdxKey, cfbam::CFBamSchemaRefBuff*>::value_type( newKeyUNameIdx, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamSchemaRefBuff*>* subdictRefSchemaIdx;
		auto searchDictByRefSchemaIdx = dictByRefSchemaIdx->find( existingKeyRefSchemaIdx );
		if( searchDictByRefSchemaIdx != dictByRefSchemaIdx->end() ) {
			subdictRefSchemaIdx = searchDictByRefSchemaIdx->second;
			auto searchSubDict = subdictRefSchemaIdx->find( pkey );
			if( searchSubDict != subdictRefSchemaIdx->end() ) {
				subdictRefSchemaIdx->erase( searchSubDict );
			}
			if( subdictRefSchemaIdx->size() <= 0 ) {
				delete subdictRefSchemaIdx;
				dictByRefSchemaIdx->erase( searchDictByRefSchemaIdx );
			}
			subdictRefSchemaIdx = NULL;
		}
		auto searchNewKeyDictByRefSchemaIdx = dictByRefSchemaIdx->find( newKeyRefSchemaIdx );
		if( searchNewKeyDictByRefSchemaIdx != dictByRefSchemaIdx->end() ) {
			subdictRefSchemaIdx = searchNewKeyDictByRefSchemaIdx->second;
		}
		else {
			subdictRefSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>();
			dictByRefSchemaIdx->insert( std::map<cfbam::CFBamSchemaRefByRefSchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaRefBuff*>*>::value_type( newKeyRefSchemaIdx, subdictRefSchemaIdx ) );
		}
		subdictRefSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamSchemaRefBuff*>* subdictPrevIdx;
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
			subdictPrevIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamSchemaRefByPrevIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaRefBuff*>*>::value_type( newKeyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamSchemaRefBuff*>* subdictNextIdx;
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
			subdictNextIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamSchemaRefByNextIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaRefBuff*>*>::value_type( newKeyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamSchemaRefBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamSchemaRefTable::deleteSchemaRef( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamSchemaRefBuff* Buff )
	{
		static const std::string S_ProcName( "deleteSchemaRef" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamSchemaRefBuff* existing = searchExisting->second;

		const int64_t* prevTenantId = existing->getOptionalPrevTenantIdReference();
		const int64_t* prevId = existing->getOptionalPrevIdReference();
		const int64_t* nextTenantId = existing->getOptionalNextTenantIdReference();
		const int64_t* nextId = existing->getOptionalNextIdReference();

		cfbam::CFBamSchemaRefBuff* prev = NULL;
		cfbam::CFBamSchemaRefBuff* editPrev = NULL;
		if( ( prevTenantId != NULL )
			&& ( prevId != NULL ) ) {
			prev = schema->getTableSchemaRef()->readDerivedByIdIdx( Authorization,
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
			if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				editPrev = schema->getTableSchemaRef()->updateSchemaRef( Authorization, prev );
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

		cfbam::CFBamSchemaRefBuff* next = NULL;
		cfbam::CFBamSchemaRefBuff* editNext = NULL;
		if( ( nextTenantId != NULL )
			&& ( nextId != NULL ) ) {
			next = schema->getTableSchemaRef()->readDerivedByIdIdx( Authorization,
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
			if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
				editNext = schema->getTableSchemaRef()->updateSchemaRef( Authorization, next );
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

		cfbam::CFBamSchemaRefBySchemaIdxKey keySchemaIdx;
		keySchemaIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keySchemaIdx.setRequiredSchemaId( existing->getRequiredSchemaId() );
		cfbam::CFBamSchemaRefByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUNameIdx.setRequiredSchemaId( existing->getRequiredSchemaId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamSchemaRefByRefSchemaIdxKey keyRefSchemaIdx;
		if( existing->isOptionalRefSchemaTenantIdNull() ) {
			keyRefSchemaIdx.setOptionalRefSchemaTenantIdNull();
		}
		else {
			keyRefSchemaIdx.setOptionalRefSchemaTenantIdValue( existing->getOptionalRefSchemaTenantIdValue() );
		}
		if( existing->isOptionalRefSchemaIdNull() ) {
			keyRefSchemaIdx.setOptionalRefSchemaIdNull();
		}
		else {
			keyRefSchemaIdx.setOptionalRefSchemaIdValue( existing->getOptionalRefSchemaIdValue() );
		}
		cfbam::CFBamSchemaRefByPrevIdxKey keyPrevIdx;
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
		cfbam::CFBamSchemaRefByNextIdxKey keyNextIdx;
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
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaRefBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictBySchemaIdx = dictBySchemaIdx->find( keySchemaIdx );
		if( searchDictBySchemaIdx != dictBySchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaRefBuff*>* subdictSchemaIdx = searchDictBySchemaIdx->second;
			auto searchSubDict = subdictSchemaIdx->find( pkey );
			if( searchSubDict != subdictSchemaIdx->end() ) {
				subdictSchemaIdx->erase( searchSubDict );
			}
			subdictSchemaIdx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		auto searchDictByRefSchemaIdx = dictByRefSchemaIdx->find( keyRefSchemaIdx );
		if( searchDictByRefSchemaIdx != dictByRefSchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaRefBuff*>* subdictRefSchemaIdx = searchDictByRefSchemaIdx->second;
			auto searchSubDict = subdictRefSchemaIdx->find( pkey );
			if( searchSubDict != subdictRefSchemaIdx->end() ) {
				subdictRefSchemaIdx->erase( searchSubDict );
			}
			subdictRefSchemaIdx = NULL;
		}

		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaRefBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			auto searchSubDict = subdictPrevIdx->find( pkey );
			if( searchSubDict != subdictPrevIdx->end() ) {
				subdictPrevIdx->erase( searchSubDict );
			}
			subdictPrevIdx = NULL;
		}

		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaRefBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			auto searchSubDict = subdictNextIdx->find( pkey );
			if( searchSubDict != subdictNextIdx->end() ) {
				subdictNextIdx->erase( searchSubDict );
			}
			subdictNextIdx = NULL;
		}

		schema->getTableScope()->deleteScope( Authorization,
			Buff );
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaId )
	{
		cfbam::CFBamSchemaRefBySchemaIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredSchemaId( argSchemaId );
		deleteSchemaRefBySchemaIdx( Authorization, &key );
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamSchemaRefBySchemaIdxKey* argKey )
	{
		cfbam::CFBamSchemaRefBuff* cur = NULL;
		cfbam::CFBamSchemaRefBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaRef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaRef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaId,
			const std::string& argName )
	{
		cfbam::CFBamSchemaRefByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredSchemaId( argSchemaId );
		key.setRequiredName( argName );
		deleteSchemaRefByUNameIdx( Authorization, &key );
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamSchemaRefByUNameIdxKey* argKey )
	{
		cfbam::CFBamSchemaRefBuff* cur = NULL;
		cfbam::CFBamSchemaRefBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaRef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaRef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argRefSchemaTenantId,
			const int64_t* argRefSchemaId )
	{
		cfbam::CFBamSchemaRefByRefSchemaIdxKey key;
		if( argRefSchemaTenantId == NULL ) {
			key.setOptionalRefSchemaTenantIdNull();
		}
		else {
			key.setOptionalRefSchemaTenantIdValue( *argRefSchemaTenantId );
		}
		if( argRefSchemaId == NULL ) {
			key.setOptionalRefSchemaIdNull();
		}
		else {
			key.setOptionalRefSchemaIdValue( *argRefSchemaId );
		}
		deleteSchemaRefByRefSchemaIdx( Authorization, &key );
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamSchemaRefByRefSchemaIdxKey* argKey )
	{
		cfbam::CFBamSchemaRefBuff* cur = NULL;
		cfbam::CFBamSchemaRefBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalRefSchemaTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalRefSchemaIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaRef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaRef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId )
	{
		cfbam::CFBamSchemaRefByPrevIdxKey key;
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
		deleteSchemaRefByPrevIdx( Authorization, &key );
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamSchemaRefByPrevIdxKey* argKey )
	{
		cfbam::CFBamSchemaRefBuff* cur = NULL;
		cfbam::CFBamSchemaRefBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaRef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaRef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId )
	{
		cfbam::CFBamSchemaRefByNextIdxKey key;
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
		deleteSchemaRefByNextIdx( Authorization, &key );
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefByNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamSchemaRefByNextIdxKey* argKey )
	{
		cfbam::CFBamSchemaRefBuff* cur = NULL;
		cfbam::CFBamSchemaRefBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaRef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaRef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteSchemaRefByIdIdx( Authorization, &key );
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamSchemaRefBuff* cur = NULL;
		cfbam::CFBamSchemaRefBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaRef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaRef( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteSchemaRefByTenantIdx( Authorization, &key );
	}

	void CFBamRamSchemaRefTable::deleteSchemaRefByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamSchemaRefBuff* cur = NULL;
		cfbam::CFBamSchemaRefBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaRef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaRef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaRefTable::releasePreparedStatements() {
	}

}
