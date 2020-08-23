
// Description: C++18 Implementation for an in-memory RAM DbIO for IndexCol.

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

	const std::string CFBamRamIndexColTable::CLASS_NAME( "CFBamRamIndexColTable" );

	CFBamRamIndexColTable::CFBamRamIndexColTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamIndexColTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
		dictByUNameIdx = new std::map<cfbam::CFBamIndexColByUNameIdxKey, cfbam::CFBamIndexColBuff*>();
		dictByIdxColTenantIdx = new std::map<cfbam::CFBamIndexColByIdxColTenantIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>();
		dictByIndexIdx = new std::map<cfbam::CFBamIndexColByIndexIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>();
		dictByDefSchemaIdx = new std::map<cfbam::CFBamIndexColByDefSchemaIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>();
		dictByColIdx = new std::map<cfbam::CFBamIndexColByColIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>();
		dictByPrevIdx = new std::map<cfbam::CFBamIndexColByPrevIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>();
		dictByNextIdx = new std::map<cfbam::CFBamIndexColByNextIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>();
		dictByIdxPrevIdx = new std::map<cfbam::CFBamIndexColByIdxPrevIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>();
		dictByIdxNextIdx = new std::map<cfbam::CFBamIndexColByIdxNextIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>();
	}

	CFBamRamIndexColTable::~CFBamRamIndexColTable() {
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByIdxColTenantIdx != NULL ) {
			for( auto iterDict = dictByIdxColTenantIdx->begin(); iterDict != dictByIdxColTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByIdxColTenantIdx;
			dictByIdxColTenantIdx = NULL;
		}
		if( dictByIndexIdx != NULL ) {
			for( auto iterDict = dictByIndexIdx->begin(); iterDict != dictByIndexIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByIndexIdx;
			dictByIndexIdx = NULL;
		}
		if( dictByDefSchemaIdx != NULL ) {
			for( auto iterDict = dictByDefSchemaIdx->begin(); iterDict != dictByDefSchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDefSchemaIdx;
			dictByDefSchemaIdx = NULL;
		}
		if( dictByColIdx != NULL ) {
			for( auto iterDict = dictByColIdx->begin(); iterDict != dictByColIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByColIdx;
			dictByColIdx = NULL;
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
		if( dictByIdxPrevIdx != NULL ) {
			for( auto iterDict = dictByIdxPrevIdx->begin(); iterDict != dictByIdxPrevIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByIdxPrevIdx;
			dictByIdxPrevIdx = NULL;
		}
		if( dictByIdxNextIdx != NULL ) {
			for( auto iterDict = dictByIdxNextIdx->begin(); iterDict != dictByIdxNextIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByIdxNextIdx;
			dictByIdxNextIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfbam::CFBamIndexColBuff* elt;
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>::iterator cur = dictByPKey->begin();
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

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::createIndexCol( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamIndexColBuff* Buff )
	{
		static const std::string S_ProcName( "createIndexCol" );
			cfbam::CFBamIndexColBuff* tail = NULL;

			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> siblings = schema->getTableIndexCol()->readDerivedByIndexIdx( Authorization,
				Buff->getRequiredTenantId(),
				Buff->getRequiredIndexId() );
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterSiblings = siblings.begin();
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endSiblings = siblings.end();
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
		
		cfbam::CFBamIndexColPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( dynamic_cast<CFBamRamTenantTable*>( schema->getTableTenant() )->nextIndexColIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfbam::CFBamIndexColByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUNameIdx.setRequiredIndexId( Buff->getRequiredIndexId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamIndexColByIdxColTenantIdxKey keyIdxColTenantIdx;
		keyIdxColTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamIndexColByIndexIdxKey keyIndexIdx;
		keyIndexIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyIndexIdx.setRequiredIndexId( Buff->getRequiredIndexId() );
		cfbam::CFBamIndexColByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamIndexColByColIdxKey keyColIdx;
		keyColIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyColIdx.setRequiredColumnId( Buff->getRequiredColumnId() );
		cfbam::CFBamIndexColByPrevIdxKey keyPrevIdx;
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
		cfbam::CFBamIndexColByNextIdxKey keyNextIdx;
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
		cfbam::CFBamIndexColByIdxPrevIdxKey keyIdxPrevIdx;
		keyIdxPrevIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyIdxPrevIdx.setRequiredIndexId( Buff->getRequiredIndexId() );
		if( Buff->isOptionalPrevIdNull() ) {
			keyIdxPrevIdx.setOptionalPrevIdNull();
		}
		else {
			keyIdxPrevIdx.setOptionalPrevIdValue( Buff->getOptionalPrevIdValue() );
		}
		cfbam::CFBamIndexColByIdxNextIdxKey keyIdxNextIdx;
		keyIdxNextIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyIdxNextIdx.setRequiredIndexId( Buff->getRequiredIndexId() );
		if( Buff->isOptionalNextIdNull() ) {
			keyIdxNextIdx.setOptionalNextIdNull();
		}
		else {
			keyIdxNextIdx.setOptionalNextIdValue( Buff->getOptionalNextIdValue() );
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
			std::string Msg( "Duplicate key detected for index IndexColUNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamIndexBuff* chk = dynamic_cast<cfbam::CFBamIndexBuff*>( schema->getTableIndex()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredIndexId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Index to table Index" );
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
				cfbam::CFBamValueBuff* chk = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableValue()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredColumnId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship Column to table Value" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamIndexColBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamIndexColByUNameIdxKey, cfbam::CFBamIndexColBuff*>::value_type( keyUNameIdx, buff ) );

		std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>* subdictIdxColTenantIdx;
		auto searchDictByIdxColTenantIdx = dictByIdxColTenantIdx->find( keyIdxColTenantIdx );
		if( searchDictByIdxColTenantIdx != dictByIdxColTenantIdx->end() ) {
			subdictIdxColTenantIdx = searchDictByIdxColTenantIdx->second;
		}
		else {
			subdictIdxColTenantIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByIdxColTenantIdx->insert( std::map<cfbam::CFBamIndexColByIdxColTenantIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( keyIdxColTenantIdx, subdictIdxColTenantIdx ) );
		}
		subdictIdxColTenantIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>* subdictIndexIdx;
		auto searchDictByIndexIdx = dictByIndexIdx->find( keyIndexIdx );
		if( searchDictByIndexIdx != dictByIndexIdx->end() ) {
			subdictIndexIdx = searchDictByIndexIdx->second;
		}
		else {
			subdictIndexIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByIndexIdx->insert( std::map<cfbam::CFBamIndexColByIndexIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( keyIndexIdx, subdictIndexIdx ) );
		}
		subdictIndexIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamIndexColByDefSchemaIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( keyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>* subdictColIdx;
		auto searchDictByColIdx = dictByColIdx->find( keyColIdx );
		if( searchDictByColIdx != dictByColIdx->end() ) {
			subdictColIdx = searchDictByColIdx->second;
		}
		else {
			subdictColIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByColIdx->insert( std::map<cfbam::CFBamIndexColByColIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( keyColIdx, subdictColIdx ) );
		}
		subdictColIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>* subdictPrevIdx;
		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			subdictPrevIdx = searchDictByPrevIdx->second;
		}
		else {
			subdictPrevIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamIndexColByPrevIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( keyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>* subdictNextIdx;
		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			subdictNextIdx = searchDictByNextIdx->second;
		}
		else {
			subdictNextIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamIndexColByNextIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( keyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>* subdictIdxPrevIdx;
		auto searchDictByIdxPrevIdx = dictByIdxPrevIdx->find( keyIdxPrevIdx );
		if( searchDictByIdxPrevIdx != dictByIdxPrevIdx->end() ) {
			subdictIdxPrevIdx = searchDictByIdxPrevIdx->second;
		}
		else {
			subdictIdxPrevIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByIdxPrevIdx->insert( std::map<cfbam::CFBamIndexColByIdxPrevIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( keyIdxPrevIdx, subdictIdxPrevIdx ) );
		}
		subdictIdxPrevIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>* subdictIdxNextIdx;
		auto searchDictByIdxNextIdx = dictByIdxNextIdx->find( keyIdxNextIdx );
		if( searchDictByIdxNextIdx != dictByIdxNextIdx->end() ) {
			subdictIdxNextIdx = searchDictByIdxNextIdx->second;
		}
		else {
			subdictIdxNextIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByIdxNextIdx->insert( std::map<cfbam::CFBamIndexColByIdxNextIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( keyIdxNextIdx, subdictIdxNextIdx ) );
		}
		subdictIdxNextIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, buff ) );

		if( tail != NULL ) {
			tail = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
				buff->getOptionalPrevTenantIdValue(),
				buff->getOptionalPrevIdValue() );
			cfbam::CFBamIndexColBuff* tailEdit = new cfbam::CFBamIndexColBuff();
			*tailEdit = *dynamic_cast<cfbam::CFBamIndexColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
			tailEdit = schema->getTableIndexCol()->updateIndexCol( Authorization, tailEdit );
			delete tail;
			tail = NULL;
			delete tailEdit;
			tailEdit = NULL;
		}
		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamIndexColBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamIndexColBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamIndexColBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamIndexColBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> retVec;
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamIndexColBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamIndexColBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamIndexColByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		key.setRequiredName( Name );
		cfbam::CFBamIndexColBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamIndexColBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readDerivedByIdxColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByIdxColTenantIdx" );
		cfbam::CFBamIndexColByIdxColTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> recVec;
		cfbam::CFBamIndexColBuff* clone;
		auto searchDictByIdxColTenantIdx = dictByIdxColTenantIdx->find( key );
		if( searchDictByIdxColTenantIdx != dictByIdxColTenantIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictIdxColTenantIdx = searchDictByIdxColTenantIdx->second;
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator iter = subdictIdxColTenantIdx->begin();
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator end = subdictIdxColTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamIndexColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readDerivedByIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId )
	{
		static const std::string S_ProcName( "readDerivedByIndexIdx" );
		cfbam::CFBamIndexColByIndexIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> recVec;
		cfbam::CFBamIndexColBuff* clone;
		auto searchDictByIndexIdx = dictByIndexIdx->find( key );
		if( searchDictByIndexIdx != dictByIndexIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictIndexIdx = searchDictByIndexIdx->second;
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator iter = subdictIndexIdx->begin();
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator end = subdictIndexIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamIndexColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		cfbam::CFBamIndexColByDefSchemaIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> recVec;
		cfbam::CFBamIndexColBuff* clone;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( key );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator iter = subdictDefSchemaIdx->begin();
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator end = subdictDefSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamIndexColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readDerivedByColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ColumnId )
	{
		static const std::string S_ProcName( "readDerivedByColIdx" );
		cfbam::CFBamIndexColByColIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredColumnId( ColumnId );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> recVec;
		cfbam::CFBamIndexColBuff* clone;
		auto searchDictByColIdx = dictByColIdx->find( key );
		if( searchDictByColIdx != dictByColIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictColIdx = searchDictByColIdx->second;
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator iter = subdictColIdx->begin();
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator end = subdictColIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamIndexColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByPrevIdx" );
		cfbam::CFBamIndexColByPrevIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> recVec;
		cfbam::CFBamIndexColBuff* clone;
		auto searchDictByPrevIdx = dictByPrevIdx->find( key );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator iter = subdictPrevIdx->begin();
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator end = subdictPrevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamIndexColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByNextIdx" );
		cfbam::CFBamIndexColByNextIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> recVec;
		cfbam::CFBamIndexColBuff* clone;
		auto searchDictByNextIdx = dictByNextIdx->find( key );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator iter = subdictNextIdx->begin();
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator end = subdictNextIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamIndexColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readDerivedByIdxPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByIdxPrevIdx" );
		cfbam::CFBamIndexColByIdxPrevIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> recVec;
		cfbam::CFBamIndexColBuff* clone;
		auto searchDictByIdxPrevIdx = dictByIdxPrevIdx->find( key );
		if( searchDictByIdxPrevIdx != dictByIdxPrevIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictIdxPrevIdx = searchDictByIdxPrevIdx->second;
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator iter = subdictIdxPrevIdx->begin();
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator end = subdictIdxPrevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamIndexColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readDerivedByIdxNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByIdxNextIdx" );
		cfbam::CFBamIndexColByIdxNextIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> recVec;
		cfbam::CFBamIndexColBuff* clone;
		auto searchDictByIdxNextIdx = dictByIdxNextIdx->find( key );
		if( searchDictByIdxNextIdx != dictByIdxNextIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictIdxNextIdx = searchDictByIdxNextIdx->second;
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator iter = subdictIdxNextIdx->begin();
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>::iterator end = subdictIdxNextIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamIndexColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamIndexColPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamIndexColBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamIndexColBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamIndexColBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamIndexColBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff ) );
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamIndexColBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamIndexColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamIndexColBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamIndexColBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			IndexId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readBuffByIdxColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByIdxColTenantIdx" );
		cfbam::CFBamIndexColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = readDerivedByIdxColTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readBuffByIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId )
	{
		static const std::string S_ProcName( "readBuffByIndexIdx" );
		cfbam::CFBamIndexColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = readDerivedByIndexIdx( Authorization,
			TenantId,
			IndexId );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamIndexColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readBuffByColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ColumnId )
	{
		static const std::string S_ProcName( "readBuffByColIdx" );
		cfbam::CFBamIndexColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = readDerivedByColIdx( Authorization,
			TenantId,
			ColumnId );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByPrevIdx" );
		cfbam::CFBamIndexColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = readDerivedByPrevIdx( Authorization,
			PrevTenantId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByNextIdx" );
		cfbam::CFBamIndexColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = readDerivedByNextIdx( Authorization,
			NextTenantId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readBuffByIdxPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByIdxPrevIdx" );
		cfbam::CFBamIndexColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = readDerivedByIdxPrevIdx( Authorization,
			TenantId,
			IndexId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> CFBamRamIndexColTable::readBuffByIdxNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByIdxNextIdx" );
		cfbam::CFBamIndexColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = readDerivedByIdxNextIdx( Authorization,
			TenantId,
			IndexId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfbam::CFBamIndexColBuff* buff = readBuffByUNameIdx( Authorization,
			TenantId,
			IndexId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfbam::CFBamIndexColBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			IndexId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfbam::CFBamIndexColBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		static const std::string S_ProcName( "moveBuffUp" );
		static const std::string S_CouldNotLocateObject( "Could not locate object" );
		static const std::string S_CouldNotLocateObjectPrev( "Could not locate object.prev" );
		static const std::string S_CouldNotLocateObjectGrandPrev( "Could not locate object.prev.prev" );
		static const std::string S_CouldNotLocateObjectNext( "Could not locate object.next" );

		cfbam::CFBamIndexColBuff* grandprev = NULL;
		cfbam::CFBamIndexColBuff* prev = NULL;
		cfbam::CFBamIndexColBuff* cur = NULL;
		cfbam::CFBamIndexColBuff* next = NULL;

		cur = schema->getTableIndexCol()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalPrevTenantIdNull() )
			&& ( cur->isOptionalPrevIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamIndexColBuff*>( cur ) );
		}

		prev = schema->getTableIndexCol()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
		if( prev == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectPrev );
		}

		if( ( ! prev->isOptionalPrevTenantIdNull() )
			&& ( ! prev->isOptionalPrevIdNull() ) ) {
			grandprev = schema->getTableIndexCol()->readDerivedByIdIdx(Authorization, prev->getOptionalPrevTenantIdValue(), prev->getOptionalPrevIdValue() );
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
			next = schema->getTableIndexCol()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
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
		cfbam::CFBamIndexColBuff* editPrev = NULL;
		cfbam::CFBamIndexColBuff* editCur = NULL;
		cfbam::CFBamIndexColBuff* editGrandprev = NULL;
		cfbam::CFBamIndexColBuff* editNext = NULL;
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
			if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
				editGrandprev = schema->getTableIndexCol()->updateIndexCol( Authorization, dynamic_cast<cfbam::CFBamIndexColBuff*>( grandprev ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
		}

		classCode = editPrev->getClassCode();
			if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
				editPrev = schema->getTableIndexCol()->updateIndexCol( Authorization, prev );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}

		classCode = editCur->getClassCode();
			if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
				editCur = schema->getTableIndexCol()->updateIndexCol( Authorization, cur );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( next != NULL ) {
			classCode = next->getClassCode();
			if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
				editNext = schema->getTableIndexCol()->updateIndexCol( Authorization, next );
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

		return( dynamic_cast<cfbam::CFBamIndexColBuff*>( editCur ) );
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		const static std::string S_ProcName( "moveBuffDown" );
		const static std::string S_CouldNotLocateObject( "Could not locate object" );
		const static std::string S_CouldNotLocateObjectDotNext( "Could not locate object.next" );
		const static std::string S_CouldNotLocateObjectDotNextDotNext( "Could not locate object.next.next" );
		const static std::string S_CouldNotLocateObjectDotPrev( "Could not locate object.prev" );

		cfbam::CFBamIndexColBuff* prev = NULL;
		cfbam::CFBamIndexColBuff* cur = NULL;
		cfbam::CFBamIndexColBuff* next = NULL;
		cfbam::CFBamIndexColBuff* grandnext = NULL;

		cur = schema->getTableIndexCol()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalNextTenantIdNull() )
			&& ( cur->isOptionalNextIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamIndexColBuff*>( cur ) );
		}

		next = schema->getTableIndexCol()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
		if( next == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectDotNext );
		}

		if( ( ! next->isOptionalNextTenantIdNull()  )
			&& ( ! next->isOptionalNextIdNull() ) ) {
			grandnext = schema->getTableIndexCol()->readDerivedByIdIdx(Authorization, next->getOptionalNextTenantIdValue(), next->getOptionalNextIdValue() );
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
			prev = schema->getTableIndexCol()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
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
		cfbam::CFBamIndexColBuff* editCur = NULL;
		cfbam::CFBamIndexColBuff* editNext = NULL;
		cfbam::CFBamIndexColBuff* editGrandnext = NULL;
		cfbam::CFBamIndexColBuff* editPrev = NULL;

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
			if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
				editPrev = schema->getTableIndexCol()->updateIndexCol( Authorization, prev );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}
		}

		classCode = cur->getClassCode();
			if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
				editCur = schema->getTableIndexCol()->updateIndexCol( Authorization, cur );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		classCode = editNext->getClassCode();
			if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
				editNext = schema->getTableIndexCol()->updateIndexCol( Authorization, next );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( editGrandnext != NULL ) {
			classCode = editGrandnext->getClassCode();
			if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
				editGrandnext = schema->getTableIndexCol()->updateIndexCol( Authorization, dynamic_cast<cfbam::CFBamIndexColBuff*>( editGrandnext ) );
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

		return( dynamic_cast<cfbam::CFBamIndexColBuff*>( editCur ) );
	}

	cfbam::CFBamIndexColBuff* CFBamRamIndexColTable::updateIndexCol( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamIndexColBuff* Buff )
	{
		static const std::string S_ProcName( "updateIndexCol" );
		cfbam::CFBamIndexColPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in IndexCol for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamIndexColBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for IndexCol primary key " );
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
		cfbam::CFBamIndexColByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUNameIdx.setRequiredIndexId( existing->getRequiredIndexId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamIndexColByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUNameIdx.setRequiredIndexId( Buff->getRequiredIndexId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamIndexColByIdxColTenantIdxKey existingKeyIdxColTenantIdx;
		existingKeyIdxColTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamIndexColByIdxColTenantIdxKey newKeyIdxColTenantIdx;
		newKeyIdxColTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamIndexColByIndexIdxKey existingKeyIndexIdx;
		existingKeyIndexIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyIndexIdx.setRequiredIndexId( existing->getRequiredIndexId() );
		cfbam::CFBamIndexColByIndexIdxKey newKeyIndexIdx;
		newKeyIndexIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyIndexIdx.setRequiredIndexId( Buff->getRequiredIndexId() );
		cfbam::CFBamIndexColByDefSchemaIdxKey existingKeyDefSchemaIdx;
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
		cfbam::CFBamIndexColByDefSchemaIdxKey newKeyDefSchemaIdx;
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
		cfbam::CFBamIndexColByColIdxKey existingKeyColIdx;
		existingKeyColIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyColIdx.setRequiredColumnId( existing->getRequiredColumnId() );
		cfbam::CFBamIndexColByColIdxKey newKeyColIdx;
		newKeyColIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyColIdx.setRequiredColumnId( Buff->getRequiredColumnId() );
		cfbam::CFBamIndexColByPrevIdxKey existingKeyPrevIdx;
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
		cfbam::CFBamIndexColByPrevIdxKey newKeyPrevIdx;
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
		cfbam::CFBamIndexColByNextIdxKey existingKeyNextIdx;
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
		cfbam::CFBamIndexColByNextIdxKey newKeyNextIdx;
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
		cfbam::CFBamIndexColByIdxPrevIdxKey existingKeyIdxPrevIdx;
		existingKeyIdxPrevIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyIdxPrevIdx.setRequiredIndexId( existing->getRequiredIndexId() );
		if( existing->isOptionalPrevIdNull() ) {
			existingKeyIdxPrevIdx.setOptionalPrevIdNull();
		}
		else {
			existingKeyIdxPrevIdx.setOptionalPrevIdValue( existing->getOptionalPrevIdValue() );
		}
		cfbam::CFBamIndexColByIdxPrevIdxKey newKeyIdxPrevIdx;
		newKeyIdxPrevIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyIdxPrevIdx.setRequiredIndexId( Buff->getRequiredIndexId() );
		if( Buff->isOptionalPrevIdNull() ) {
			newKeyIdxPrevIdx.setOptionalPrevIdNull();
		}
		else {
			newKeyIdxPrevIdx.setOptionalPrevIdValue( Buff->getOptionalPrevIdValue() );
		}
		cfbam::CFBamIndexColByIdxNextIdxKey existingKeyIdxNextIdx;
		existingKeyIdxNextIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyIdxNextIdx.setRequiredIndexId( existing->getRequiredIndexId() );
		if( existing->isOptionalNextIdNull() ) {
			existingKeyIdxNextIdx.setOptionalNextIdNull();
		}
		else {
			existingKeyIdxNextIdx.setOptionalNextIdValue( existing->getOptionalNextIdValue() );
		}
		cfbam::CFBamIndexColByIdxNextIdxKey newKeyIdxNextIdx;
		newKeyIdxNextIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyIdxNextIdx.setRequiredIndexId( Buff->getRequiredIndexId() );
		if( Buff->isOptionalNextIdNull() ) {
			newKeyIdxNextIdx.setOptionalNextIdNull();
		}
		else {
			newKeyIdxNextIdx.setOptionalNextIdValue( Buff->getOptionalNextIdValue() );
		}
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index IndexColUNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamIndexBuff* chk = dynamic_cast<cfbam::CFBamIndexBuff*>( schema->getTableIndex()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredIndexId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Index to table Index" );
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
				cfbam::CFBamValueBuff* chk = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableValue()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredColumnId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship Column to table Value" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfbam::CFBamIndexColBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfbam::CFBamIndexColBuff" );
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

		dictByPKey->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamIndexColByUNameIdxKey, cfbam::CFBamIndexColBuff*>::value_type( newKeyUNameIdx, existing ) );

		std::map<cfbam::CFBamIndexColPKey,
			 cfbam::CFBamIndexColBuff*>* subdictIdxColTenantIdx;
		auto searchDictByIdxColTenantIdx = dictByIdxColTenantIdx->find( existingKeyIdxColTenantIdx );
		if( searchDictByIdxColTenantIdx != dictByIdxColTenantIdx->end() ) {
			subdictIdxColTenantIdx = searchDictByIdxColTenantIdx->second;
			auto searchSubDict = subdictIdxColTenantIdx->find( pkey );
			if( searchSubDict != subdictIdxColTenantIdx->end() ) {
				subdictIdxColTenantIdx->erase( searchSubDict );
			}
			if( subdictIdxColTenantIdx->size() <= 0 ) {
				delete subdictIdxColTenantIdx;
				dictByIdxColTenantIdx->erase( searchDictByIdxColTenantIdx );
			}
			subdictIdxColTenantIdx = NULL;
		}
		auto searchNewKeyDictByIdxColTenantIdx = dictByIdxColTenantIdx->find( newKeyIdxColTenantIdx );
		if( searchNewKeyDictByIdxColTenantIdx != dictByIdxColTenantIdx->end() ) {
			subdictIdxColTenantIdx = searchNewKeyDictByIdxColTenantIdx->second;
		}
		else {
			subdictIdxColTenantIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByIdxColTenantIdx->insert( std::map<cfbam::CFBamIndexColByIdxColTenantIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( newKeyIdxColTenantIdx, subdictIdxColTenantIdx ) );
		}
		subdictIdxColTenantIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamIndexColPKey,
			 cfbam::CFBamIndexColBuff*>* subdictIndexIdx;
		auto searchDictByIndexIdx = dictByIndexIdx->find( existingKeyIndexIdx );
		if( searchDictByIndexIdx != dictByIndexIdx->end() ) {
			subdictIndexIdx = searchDictByIndexIdx->second;
			auto searchSubDict = subdictIndexIdx->find( pkey );
			if( searchSubDict != subdictIndexIdx->end() ) {
				subdictIndexIdx->erase( searchSubDict );
			}
			if( subdictIndexIdx->size() <= 0 ) {
				delete subdictIndexIdx;
				dictByIndexIdx->erase( searchDictByIndexIdx );
			}
			subdictIndexIdx = NULL;
		}
		auto searchNewKeyDictByIndexIdx = dictByIndexIdx->find( newKeyIndexIdx );
		if( searchNewKeyDictByIndexIdx != dictByIndexIdx->end() ) {
			subdictIndexIdx = searchNewKeyDictByIndexIdx->second;
		}
		else {
			subdictIndexIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByIndexIdx->insert( std::map<cfbam::CFBamIndexColByIndexIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( newKeyIndexIdx, subdictIndexIdx ) );
		}
		subdictIndexIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamIndexColPKey,
			 cfbam::CFBamIndexColBuff*>* subdictDefSchemaIdx;
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
			subdictDefSchemaIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamIndexColByDefSchemaIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( newKeyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamIndexColPKey,
			 cfbam::CFBamIndexColBuff*>* subdictColIdx;
		auto searchDictByColIdx = dictByColIdx->find( existingKeyColIdx );
		if( searchDictByColIdx != dictByColIdx->end() ) {
			subdictColIdx = searchDictByColIdx->second;
			auto searchSubDict = subdictColIdx->find( pkey );
			if( searchSubDict != subdictColIdx->end() ) {
				subdictColIdx->erase( searchSubDict );
			}
			if( subdictColIdx->size() <= 0 ) {
				delete subdictColIdx;
				dictByColIdx->erase( searchDictByColIdx );
			}
			subdictColIdx = NULL;
		}
		auto searchNewKeyDictByColIdx = dictByColIdx->find( newKeyColIdx );
		if( searchNewKeyDictByColIdx != dictByColIdx->end() ) {
			subdictColIdx = searchNewKeyDictByColIdx->second;
		}
		else {
			subdictColIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByColIdx->insert( std::map<cfbam::CFBamIndexColByColIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( newKeyColIdx, subdictColIdx ) );
		}
		subdictColIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamIndexColPKey,
			 cfbam::CFBamIndexColBuff*>* subdictPrevIdx;
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
			subdictPrevIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamIndexColByPrevIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( newKeyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamIndexColPKey,
			 cfbam::CFBamIndexColBuff*>* subdictNextIdx;
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
			subdictNextIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamIndexColByNextIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( newKeyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamIndexColPKey,
			 cfbam::CFBamIndexColBuff*>* subdictIdxPrevIdx;
		auto searchDictByIdxPrevIdx = dictByIdxPrevIdx->find( existingKeyIdxPrevIdx );
		if( searchDictByIdxPrevIdx != dictByIdxPrevIdx->end() ) {
			subdictIdxPrevIdx = searchDictByIdxPrevIdx->second;
			auto searchSubDict = subdictIdxPrevIdx->find( pkey );
			if( searchSubDict != subdictIdxPrevIdx->end() ) {
				subdictIdxPrevIdx->erase( searchSubDict );
			}
			if( subdictIdxPrevIdx->size() <= 0 ) {
				delete subdictIdxPrevIdx;
				dictByIdxPrevIdx->erase( searchDictByIdxPrevIdx );
			}
			subdictIdxPrevIdx = NULL;
		}
		auto searchNewKeyDictByIdxPrevIdx = dictByIdxPrevIdx->find( newKeyIdxPrevIdx );
		if( searchNewKeyDictByIdxPrevIdx != dictByIdxPrevIdx->end() ) {
			subdictIdxPrevIdx = searchNewKeyDictByIdxPrevIdx->second;
		}
		else {
			subdictIdxPrevIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByIdxPrevIdx->insert( std::map<cfbam::CFBamIndexColByIdxPrevIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( newKeyIdxPrevIdx, subdictIdxPrevIdx ) );
		}
		subdictIdxPrevIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamIndexColPKey,
			 cfbam::CFBamIndexColBuff*>* subdictIdxNextIdx;
		auto searchDictByIdxNextIdx = dictByIdxNextIdx->find( existingKeyIdxNextIdx );
		if( searchDictByIdxNextIdx != dictByIdxNextIdx->end() ) {
			subdictIdxNextIdx = searchDictByIdxNextIdx->second;
			auto searchSubDict = subdictIdxNextIdx->find( pkey );
			if( searchSubDict != subdictIdxNextIdx->end() ) {
				subdictIdxNextIdx->erase( searchSubDict );
			}
			if( subdictIdxNextIdx->size() <= 0 ) {
				delete subdictIdxNextIdx;
				dictByIdxNextIdx->erase( searchDictByIdxNextIdx );
			}
			subdictIdxNextIdx = NULL;
		}
		auto searchNewKeyDictByIdxNextIdx = dictByIdxNextIdx->find( newKeyIdxNextIdx );
		if( searchNewKeyDictByIdxNextIdx != dictByIdxNextIdx->end() ) {
			subdictIdxNextIdx = searchNewKeyDictByIdxNextIdx->second;
		}
		else {
			subdictIdxNextIdx = new std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>();
			dictByIdxNextIdx->insert( std::map<cfbam::CFBamIndexColByIdxNextIdxKey,
				std::map<cfbam::CFBamIndexColPKey,
					cfbam::CFBamIndexColBuff*>*>::value_type( newKeyIdxNextIdx, subdictIdxNextIdx ) );
		}
		subdictIdxNextIdx->insert( std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamIndexColBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamIndexColBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamIndexColTable::deleteIndexCol( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamIndexColBuff* Buff )
	{
		static const std::string S_ProcName( "deleteIndexCol" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamIndexColPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamIndexColBuff* existing = searchExisting->second;

		const int64_t* prevTenantId = existing->getOptionalPrevTenantIdReference();
		const int64_t* prevId = existing->getOptionalPrevIdReference();
		const int64_t* nextTenantId = existing->getOptionalNextTenantIdReference();
		const int64_t* nextId = existing->getOptionalNextIdReference();

		cfbam::CFBamIndexColBuff* prev = NULL;
		cfbam::CFBamIndexColBuff* editPrev = NULL;
		if( ( prevTenantId != NULL )
			&& ( prevId != NULL ) ) {
			prev = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
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
			if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
				editPrev = schema->getTableIndexCol()->updateIndexCol( Authorization, prev );
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

		cfbam::CFBamIndexColBuff* next = NULL;
		cfbam::CFBamIndexColBuff* editNext = NULL;
		if( ( nextTenantId != NULL )
			&& ( nextId != NULL ) ) {
			next = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
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
			if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
				editNext = schema->getTableIndexCol()->updateIndexCol( Authorization, next );
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

		schema->getTableRelationCol()->deleteRelationColByFromColIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		schema->getTableRelationCol()->deleteRelationColByToColIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		cfbam::CFBamIndexColByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUNameIdx.setRequiredIndexId( existing->getRequiredIndexId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamIndexColByIdxColTenantIdxKey keyIdxColTenantIdx;
		keyIdxColTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamIndexColByIndexIdxKey keyIndexIdx;
		keyIndexIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyIndexIdx.setRequiredIndexId( existing->getRequiredIndexId() );
		cfbam::CFBamIndexColByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamIndexColByColIdxKey keyColIdx;
		keyColIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyColIdx.setRequiredColumnId( existing->getRequiredColumnId() );
		cfbam::CFBamIndexColByPrevIdxKey keyPrevIdx;
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
		cfbam::CFBamIndexColByNextIdxKey keyNextIdx;
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
		cfbam::CFBamIndexColByIdxPrevIdxKey keyIdxPrevIdx;
		keyIdxPrevIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyIdxPrevIdx.setRequiredIndexId( existing->getRequiredIndexId() );
		if( existing->isOptionalPrevIdNull() ) {
			keyIdxPrevIdx.setOptionalPrevIdNull();
		}
		else {
			keyIdxPrevIdx.setOptionalPrevIdValue( existing->getOptionalPrevIdValue() );
		}
		cfbam::CFBamIndexColByIdxNextIdxKey keyIdxNextIdx;
		keyIdxNextIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyIdxNextIdx.setRequiredIndexId( existing->getRequiredIndexId() );
		if( existing->isOptionalNextIdNull() ) {
			keyIdxNextIdx.setOptionalNextIdNull();
		}
		else {
			keyIdxNextIdx.setOptionalNextIdValue( existing->getOptionalNextIdValue() );
		}
		// Validate reverse foreign keys

		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> derivedByFromColIdx = schema->getTableRelationCol()->readDerivedByFromColIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() );
		if( derivedByFromColIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship LookupFromCol from table RelationCol for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> derivedByToColIdx = schema->getTableRelationCol()->readDerivedByToColIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() );
		if( derivedByToColIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship LookupToCol from table RelationCol for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Delete is valid
		std::map<cfbam::CFBamIndexColPKey, cfbam::CFBamIndexColBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		auto searchDictByIdxColTenantIdx = dictByIdxColTenantIdx->find( keyIdxColTenantIdx );
		if( searchDictByIdxColTenantIdx != dictByIdxColTenantIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictIdxColTenantIdx = searchDictByIdxColTenantIdx->second;
			auto searchSubDict = subdictIdxColTenantIdx->find( pkey );
			if( searchSubDict != subdictIdxColTenantIdx->end() ) {
				subdictIdxColTenantIdx->erase( searchSubDict );
			}
			subdictIdxColTenantIdx = NULL;
		}

		auto searchDictByIndexIdx = dictByIndexIdx->find( keyIndexIdx );
		if( searchDictByIndexIdx != dictByIndexIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictIndexIdx = searchDictByIndexIdx->second;
			auto searchSubDict = subdictIndexIdx->find( pkey );
			if( searchSubDict != subdictIndexIdx->end() ) {
				subdictIndexIdx->erase( searchSubDict );
			}
			subdictIndexIdx = NULL;
		}

		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			subdictDefSchemaIdx = NULL;
		}

		auto searchDictByColIdx = dictByColIdx->find( keyColIdx );
		if( searchDictByColIdx != dictByColIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictColIdx = searchDictByColIdx->second;
			auto searchSubDict = subdictColIdx->find( pkey );
			if( searchSubDict != subdictColIdx->end() ) {
				subdictColIdx->erase( searchSubDict );
			}
			subdictColIdx = NULL;
		}

		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			auto searchSubDict = subdictPrevIdx->find( pkey );
			if( searchSubDict != subdictPrevIdx->end() ) {
				subdictPrevIdx->erase( searchSubDict );
			}
			subdictPrevIdx = NULL;
		}

		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			auto searchSubDict = subdictNextIdx->find( pkey );
			if( searchSubDict != subdictNextIdx->end() ) {
				subdictNextIdx->erase( searchSubDict );
			}
			subdictNextIdx = NULL;
		}

		auto searchDictByIdxPrevIdx = dictByIdxPrevIdx->find( keyIdxPrevIdx );
		if( searchDictByIdxPrevIdx != dictByIdxPrevIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictIdxPrevIdx = searchDictByIdxPrevIdx->second;
			auto searchSubDict = subdictIdxPrevIdx->find( pkey );
			if( searchSubDict != subdictIdxPrevIdx->end() ) {
				subdictIdxPrevIdx->erase( searchSubDict );
			}
			subdictIdxPrevIdx = NULL;
		}

		auto searchDictByIdxNextIdx = dictByIdxNextIdx->find( keyIdxNextIdx );
		if( searchDictByIdxNextIdx != dictByIdxNextIdx->end() ) {
			std::map<cfbam::CFBamIndexColPKey,
				 cfbam::CFBamIndexColBuff*>* subdictIdxNextIdx = searchDictByIdxNextIdx->second;
			auto searchSubDict = subdictIdxNextIdx->find( pkey );
			if( searchSubDict != subdictIdxNextIdx->end() ) {
				subdictIdxNextIdx->erase( searchSubDict );
			}
			subdictIdxNextIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamIndexColTable::deleteIndexColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamIndexColPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteIndexColByIdIdx( Authorization, &key );
	}

	void CFBamRamIndexColTable::deleteIndexColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamIndexColBuff* cur = NULL;
		cfbam::CFBamIndexColBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> matchSet;
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndexCol( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamIndexColTable::deleteIndexColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argIndexId,
			const std::string& argName )
	{
		cfbam::CFBamIndexColByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredIndexId( argIndexId );
		key.setRequiredName( argName );
		deleteIndexColByUNameIdx( Authorization, &key );
	}

	void CFBamRamIndexColTable::deleteIndexColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColByUNameIdxKey* argKey )
	{
		cfbam::CFBamIndexColBuff* cur = NULL;
		cfbam::CFBamIndexColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> matchSet;
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndexCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexColTable::deleteIndexColByIdxColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamIndexColByIdxColTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteIndexColByIdxColTenantIdx( Authorization, &key );
	}

	void CFBamRamIndexColTable::deleteIndexColByIdxColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColByIdxColTenantIdxKey* argKey )
	{
		cfbam::CFBamIndexColBuff* cur = NULL;
		cfbam::CFBamIndexColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> matchSet;
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndexCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexColTable::deleteIndexColByIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argIndexId )
	{
		cfbam::CFBamIndexColByIndexIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredIndexId( argIndexId );
		deleteIndexColByIndexIdx( Authorization, &key );
	}

	void CFBamRamIndexColTable::deleteIndexColByIndexIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColByIndexIdxKey* argKey )
	{
		cfbam::CFBamIndexColBuff* cur = NULL;
		cfbam::CFBamIndexColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> matchSet;
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndexCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexColTable::deleteIndexColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamIndexColByDefSchemaIdxKey key;
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
		deleteIndexColByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamIndexColTable::deleteIndexColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamIndexColBuff* cur = NULL;
		cfbam::CFBamIndexColBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> matchSet;
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndexCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexColTable::deleteIndexColByColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argColumnId )
	{
		cfbam::CFBamIndexColByColIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredColumnId( argColumnId );
		deleteIndexColByColIdx( Authorization, &key );
	}

	void CFBamRamIndexColTable::deleteIndexColByColIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColByColIdxKey* argKey )
	{
		cfbam::CFBamIndexColBuff* cur = NULL;
		cfbam::CFBamIndexColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> matchSet;
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndexCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexColTable::deleteIndexColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId )
	{
		cfbam::CFBamIndexColByPrevIdxKey key;
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
		deleteIndexColByPrevIdx( Authorization, &key );
	}

	void CFBamRamIndexColTable::deleteIndexColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColByPrevIdxKey* argKey )
	{
		cfbam::CFBamIndexColBuff* cur = NULL;
		cfbam::CFBamIndexColBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> matchSet;
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndexCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexColTable::deleteIndexColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId )
	{
		cfbam::CFBamIndexColByNextIdxKey key;
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
		deleteIndexColByNextIdx( Authorization, &key );
	}

	void CFBamRamIndexColTable::deleteIndexColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColByNextIdxKey* argKey )
	{
		cfbam::CFBamIndexColBuff* cur = NULL;
		cfbam::CFBamIndexColBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> matchSet;
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndexCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexColTable::deleteIndexColByIdxPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argIndexId,
			const int64_t* argPrevId )
	{
		cfbam::CFBamIndexColByIdxPrevIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredIndexId( argIndexId );
		if( argPrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *argPrevId );
		}
		deleteIndexColByIdxPrevIdx( Authorization, &key );
	}

	void CFBamRamIndexColTable::deleteIndexColByIdxPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColByIdxPrevIdxKey* argKey )
	{
		cfbam::CFBamIndexColBuff* cur = NULL;
		cfbam::CFBamIndexColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalPrevIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> matchSet;
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndexCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexColTable::deleteIndexColByIdxNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argIndexId,
			const int64_t* argNextId )
	{
		cfbam::CFBamIndexColByIdxNextIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredIndexId( argIndexId );
		if( argNextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *argNextId );
		}
		deleteIndexColByIdxNextIdx( Authorization, &key );
	}

	void CFBamRamIndexColTable::deleteIndexColByIdxNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamIndexColByIdxNextIdxKey* argKey )
	{
		cfbam::CFBamIndexColBuff* cur = NULL;
		cfbam::CFBamIndexColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalNextIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> matchSet;
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamIndexColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamIndexColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteIndexCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamIndexColTable::releasePreparedStatements() {
	}

}
