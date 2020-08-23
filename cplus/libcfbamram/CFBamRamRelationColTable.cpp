
// Description: C++18 Implementation for an in-memory RAM DbIO for RelationCol.

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

	const std::string CFBamRamRelationColTable::CLASS_NAME( "CFBamRamRelationColTable" );

	CFBamRamRelationColTable::CFBamRamRelationColTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamRelationColTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
		dictByUNameIdx = new std::map<cfbam::CFBamRelationColByUNameIdxKey, cfbam::CFBamRelationColBuff*>();
		dictByRelColTenantIdx = new std::map<cfbam::CFBamRelationColByRelColTenantIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>();
		dictByRelationIdx = new std::map<cfbam::CFBamRelationColByRelationIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>();
		dictByDefSchemaIdx = new std::map<cfbam::CFBamRelationColByDefSchemaIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>();
		dictByFromColIdx = new std::map<cfbam::CFBamRelationColByFromColIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>();
		dictByToColIdx = new std::map<cfbam::CFBamRelationColByToColIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>();
		dictByPrevIdx = new std::map<cfbam::CFBamRelationColByPrevIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>();
		dictByNextIdx = new std::map<cfbam::CFBamRelationColByNextIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>();
		dictByRelPrevIdx = new std::map<cfbam::CFBamRelationColByRelPrevIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>();
		dictByRelNextIdx = new std::map<cfbam::CFBamRelationColByRelNextIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>();
	}

	CFBamRamRelationColTable::~CFBamRamRelationColTable() {
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByRelColTenantIdx != NULL ) {
			for( auto iterDict = dictByRelColTenantIdx->begin(); iterDict != dictByRelColTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByRelColTenantIdx;
			dictByRelColTenantIdx = NULL;
		}
		if( dictByRelationIdx != NULL ) {
			for( auto iterDict = dictByRelationIdx->begin(); iterDict != dictByRelationIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByRelationIdx;
			dictByRelationIdx = NULL;
		}
		if( dictByDefSchemaIdx != NULL ) {
			for( auto iterDict = dictByDefSchemaIdx->begin(); iterDict != dictByDefSchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDefSchemaIdx;
			dictByDefSchemaIdx = NULL;
		}
		if( dictByFromColIdx != NULL ) {
			for( auto iterDict = dictByFromColIdx->begin(); iterDict != dictByFromColIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByFromColIdx;
			dictByFromColIdx = NULL;
		}
		if( dictByToColIdx != NULL ) {
			for( auto iterDict = dictByToColIdx->begin(); iterDict != dictByToColIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByToColIdx;
			dictByToColIdx = NULL;
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
		if( dictByRelPrevIdx != NULL ) {
			for( auto iterDict = dictByRelPrevIdx->begin(); iterDict != dictByRelPrevIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByRelPrevIdx;
			dictByRelPrevIdx = NULL;
		}
		if( dictByRelNextIdx != NULL ) {
			for( auto iterDict = dictByRelNextIdx->begin(); iterDict != dictByRelNextIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByRelNextIdx;
			dictByRelNextIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfbam::CFBamRelationColBuff* elt;
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>::iterator cur = dictByPKey->begin();
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

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::createRelationCol( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamRelationColBuff* Buff )
	{
		static const std::string S_ProcName( "createRelationCol" );
			cfbam::CFBamRelationColBuff* tail = NULL;

			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> siblings = schema->getTableRelationCol()->readDerivedByRelationIdx( Authorization,
				Buff->getRequiredTenantId(),
				Buff->getRequiredRelationId() );
			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterSiblings = siblings.begin();
			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator endSiblings = siblings.end();
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
		
		cfbam::CFBamRelationColPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( dynamic_cast<CFBamRamTenantTable*>( schema->getTableTenant() )->nextRelationColIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfbam::CFBamRelationColByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUNameIdx.setRequiredRelationId( Buff->getRequiredRelationId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamRelationColByRelColTenantIdxKey keyRelColTenantIdx;
		keyRelColTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamRelationColByRelationIdxKey keyRelationIdx;
		keyRelationIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyRelationIdx.setRequiredRelationId( Buff->getRequiredRelationId() );
		cfbam::CFBamRelationColByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamRelationColByFromColIdxKey keyFromColIdx;
		keyFromColIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyFromColIdx.setRequiredFromColId( Buff->getRequiredFromColId() );
		cfbam::CFBamRelationColByToColIdxKey keyToColIdx;
		keyToColIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyToColIdx.setRequiredToColId( Buff->getRequiredToColId() );
		cfbam::CFBamRelationColByPrevIdxKey keyPrevIdx;
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
		cfbam::CFBamRelationColByNextIdxKey keyNextIdx;
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
		cfbam::CFBamRelationColByRelPrevIdxKey keyRelPrevIdx;
		keyRelPrevIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyRelPrevIdx.setRequiredRelationId( Buff->getRequiredRelationId() );
		if( Buff->isOptionalPrevIdNull() ) {
			keyRelPrevIdx.setOptionalPrevIdNull();
		}
		else {
			keyRelPrevIdx.setOptionalPrevIdValue( Buff->getOptionalPrevIdValue() );
		}
		cfbam::CFBamRelationColByRelNextIdxKey keyRelNextIdx;
		keyRelNextIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyRelNextIdx.setRequiredRelationId( Buff->getRequiredRelationId() );
		if( Buff->isOptionalNextIdNull() ) {
			keyRelNextIdx.setOptionalNextIdNull();
		}
		else {
			keyRelNextIdx.setOptionalNextIdValue( Buff->getOptionalNextIdValue() );
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
			std::string Msg( "Duplicate key detected for index RelationColUNameIdx " + keyUNameIdx.toString() );
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
						Buff->getRequiredTenantId(),
						Buff->getRequiredRelationId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Relation to table Relation" );
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
			allNull = false;
			allNull = false;
			if( ! allNull ) {
				cfbam::CFBamIndexColBuff* chk = dynamic_cast<cfbam::CFBamIndexColBuff*>( schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredFromColId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship LookupFromCol to table IndexCol" );
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
				cfbam::CFBamIndexColBuff* chk = dynamic_cast<cfbam::CFBamIndexColBuff*>( schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredToColId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship LookupToCol to table IndexCol" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamRelationColBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamRelationColByUNameIdxKey, cfbam::CFBamRelationColBuff*>::value_type( keyUNameIdx, buff ) );

		std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>* subdictRelColTenantIdx;
		auto searchDictByRelColTenantIdx = dictByRelColTenantIdx->find( keyRelColTenantIdx );
		if( searchDictByRelColTenantIdx != dictByRelColTenantIdx->end() ) {
			subdictRelColTenantIdx = searchDictByRelColTenantIdx->second;
		}
		else {
			subdictRelColTenantIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByRelColTenantIdx->insert( std::map<cfbam::CFBamRelationColByRelColTenantIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( keyRelColTenantIdx, subdictRelColTenantIdx ) );
		}
		subdictRelColTenantIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>* subdictRelationIdx;
		auto searchDictByRelationIdx = dictByRelationIdx->find( keyRelationIdx );
		if( searchDictByRelationIdx != dictByRelationIdx->end() ) {
			subdictRelationIdx = searchDictByRelationIdx->second;
		}
		else {
			subdictRelationIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByRelationIdx->insert( std::map<cfbam::CFBamRelationColByRelationIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( keyRelationIdx, subdictRelationIdx ) );
		}
		subdictRelationIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamRelationColByDefSchemaIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( keyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>* subdictFromColIdx;
		auto searchDictByFromColIdx = dictByFromColIdx->find( keyFromColIdx );
		if( searchDictByFromColIdx != dictByFromColIdx->end() ) {
			subdictFromColIdx = searchDictByFromColIdx->second;
		}
		else {
			subdictFromColIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByFromColIdx->insert( std::map<cfbam::CFBamRelationColByFromColIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( keyFromColIdx, subdictFromColIdx ) );
		}
		subdictFromColIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>* subdictToColIdx;
		auto searchDictByToColIdx = dictByToColIdx->find( keyToColIdx );
		if( searchDictByToColIdx != dictByToColIdx->end() ) {
			subdictToColIdx = searchDictByToColIdx->second;
		}
		else {
			subdictToColIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByToColIdx->insert( std::map<cfbam::CFBamRelationColByToColIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( keyToColIdx, subdictToColIdx ) );
		}
		subdictToColIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>* subdictPrevIdx;
		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			subdictPrevIdx = searchDictByPrevIdx->second;
		}
		else {
			subdictPrevIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamRelationColByPrevIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( keyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>* subdictNextIdx;
		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			subdictNextIdx = searchDictByNextIdx->second;
		}
		else {
			subdictNextIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamRelationColByNextIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( keyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>* subdictRelPrevIdx;
		auto searchDictByRelPrevIdx = dictByRelPrevIdx->find( keyRelPrevIdx );
		if( searchDictByRelPrevIdx != dictByRelPrevIdx->end() ) {
			subdictRelPrevIdx = searchDictByRelPrevIdx->second;
		}
		else {
			subdictRelPrevIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByRelPrevIdx->insert( std::map<cfbam::CFBamRelationColByRelPrevIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( keyRelPrevIdx, subdictRelPrevIdx ) );
		}
		subdictRelPrevIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>* subdictRelNextIdx;
		auto searchDictByRelNextIdx = dictByRelNextIdx->find( keyRelNextIdx );
		if( searchDictByRelNextIdx != dictByRelNextIdx->end() ) {
			subdictRelNextIdx = searchDictByRelNextIdx->second;
		}
		else {
			subdictRelNextIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByRelNextIdx->insert( std::map<cfbam::CFBamRelationColByRelNextIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( keyRelNextIdx, subdictRelNextIdx ) );
		}
		subdictRelNextIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, buff ) );

		if( tail != NULL ) {
			tail = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
				buff->getOptionalPrevTenantIdValue(),
				buff->getOptionalPrevIdValue() );
			cfbam::CFBamRelationColBuff* tailEdit = new cfbam::CFBamRelationColBuff();
			*tailEdit = *dynamic_cast<cfbam::CFBamRelationColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
			tailEdit = schema->getTableRelationCol()->updateRelationCol( Authorization, tailEdit );
			delete tail;
			tail = NULL;
			delete tailEdit;
			tailEdit = NULL;
		}
		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamRelationColBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamRelationColBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamRelationColBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamRelationColBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> retVec;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamRelationColBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamRelationColBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamRelationColByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		key.setRequiredName( Name );
		cfbam::CFBamRelationColBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamRelationColBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readDerivedByRelColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByRelColTenantIdx" );
		cfbam::CFBamRelationColByRelColTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> recVec;
		cfbam::CFBamRelationColBuff* clone;
		auto searchDictByRelColTenantIdx = dictByRelColTenantIdx->find( key );
		if( searchDictByRelColTenantIdx != dictByRelColTenantIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictRelColTenantIdx = searchDictByRelColTenantIdx->second;
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator iter = subdictRelColTenantIdx->begin();
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator end = subdictRelColTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readDerivedByRelationIdx" );
		cfbam::CFBamRelationColByRelationIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> recVec;
		cfbam::CFBamRelationColBuff* clone;
		auto searchDictByRelationIdx = dictByRelationIdx->find( key );
		if( searchDictByRelationIdx != dictByRelationIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictRelationIdx = searchDictByRelationIdx->second;
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator iter = subdictRelationIdx->begin();
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator end = subdictRelationIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		cfbam::CFBamRelationColByDefSchemaIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> recVec;
		cfbam::CFBamRelationColBuff* clone;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( key );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator iter = subdictDefSchemaIdx->begin();
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator end = subdictDefSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readDerivedByFromColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromColId )
	{
		static const std::string S_ProcName( "readDerivedByFromColIdx" );
		cfbam::CFBamRelationColByFromColIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredFromColId( FromColId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> recVec;
		cfbam::CFBamRelationColBuff* clone;
		auto searchDictByFromColIdx = dictByFromColIdx->find( key );
		if( searchDictByFromColIdx != dictByFromColIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictFromColIdx = searchDictByFromColIdx->second;
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator iter = subdictFromColIdx->begin();
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator end = subdictFromColIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readDerivedByToColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToColId )
	{
		static const std::string S_ProcName( "readDerivedByToColIdx" );
		cfbam::CFBamRelationColByToColIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredToColId( ToColId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> recVec;
		cfbam::CFBamRelationColBuff* clone;
		auto searchDictByToColIdx = dictByToColIdx->find( key );
		if( searchDictByToColIdx != dictByToColIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictToColIdx = searchDictByToColIdx->second;
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator iter = subdictToColIdx->begin();
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator end = subdictToColIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByPrevIdx" );
		cfbam::CFBamRelationColByPrevIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> recVec;
		cfbam::CFBamRelationColBuff* clone;
		auto searchDictByPrevIdx = dictByPrevIdx->find( key );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator iter = subdictPrevIdx->begin();
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator end = subdictPrevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByNextIdx" );
		cfbam::CFBamRelationColByNextIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> recVec;
		cfbam::CFBamRelationColBuff* clone;
		auto searchDictByNextIdx = dictByNextIdx->find( key );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator iter = subdictNextIdx->begin();
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator end = subdictNextIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readDerivedByRelPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByRelPrevIdx" );
		cfbam::CFBamRelationColByRelPrevIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> recVec;
		cfbam::CFBamRelationColBuff* clone;
		auto searchDictByRelPrevIdx = dictByRelPrevIdx->find( key );
		if( searchDictByRelPrevIdx != dictByRelPrevIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictRelPrevIdx = searchDictByRelPrevIdx->second;
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator iter = subdictRelPrevIdx->begin();
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator end = subdictRelPrevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readDerivedByRelNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByRelNextIdx" );
		cfbam::CFBamRelationColByRelNextIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> recVec;
		cfbam::CFBamRelationColBuff* clone;
		auto searchDictByRelNextIdx = dictByRelNextIdx->find( key );
		if( searchDictByRelNextIdx != dictByRelNextIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictRelNextIdx = searchDictByRelNextIdx->second;
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator iter = subdictRelNextIdx->begin();
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>::iterator end = subdictRelNextIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationColBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamRelationColPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamRelationColBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamRelationColBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamRelationColBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamRelationColBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff ) );
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamRelationColBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamRelationColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamRelationColBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamRelationColBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			RelationId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readBuffByRelColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByRelColTenantIdx" );
		cfbam::CFBamRelationColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = readDerivedByRelColTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readBuffByRelationIdx" );
		cfbam::CFBamRelationColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = readDerivedByRelationIdx( Authorization,
			TenantId,
			RelationId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamRelationColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readBuffByFromColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromColId )
	{
		static const std::string S_ProcName( "readBuffByFromColIdx" );
		cfbam::CFBamRelationColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = readDerivedByFromColIdx( Authorization,
			TenantId,
			FromColId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readBuffByToColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToColId )
	{
		static const std::string S_ProcName( "readBuffByToColIdx" );
		cfbam::CFBamRelationColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = readDerivedByToColIdx( Authorization,
			TenantId,
			ToColId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByPrevIdx" );
		cfbam::CFBamRelationColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = readDerivedByPrevIdx( Authorization,
			PrevTenantId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByNextIdx" );
		cfbam::CFBamRelationColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = readDerivedByNextIdx( Authorization,
			NextTenantId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readBuffByRelPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByRelPrevIdx" );
		cfbam::CFBamRelationColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = readDerivedByRelPrevIdx( Authorization,
			TenantId,
			RelationId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> CFBamRamRelationColTable::readBuffByRelNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByRelNextIdx" );
		cfbam::CFBamRelationColBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = readDerivedByRelNextIdx( Authorization,
			TenantId,
			RelationId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfbam::CFBamRelationColBuff* buff = readBuffByUNameIdx( Authorization,
			TenantId,
			RelationId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfbam::CFBamRelationColBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			RelationId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfbam::CFBamRelationColBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		static const std::string S_ProcName( "moveBuffUp" );
		static const std::string S_CouldNotLocateObject( "Could not locate object" );
		static const std::string S_CouldNotLocateObjectPrev( "Could not locate object.prev" );
		static const std::string S_CouldNotLocateObjectGrandPrev( "Could not locate object.prev.prev" );
		static const std::string S_CouldNotLocateObjectNext( "Could not locate object.next" );

		cfbam::CFBamRelationColBuff* grandprev = NULL;
		cfbam::CFBamRelationColBuff* prev = NULL;
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* next = NULL;

		cur = schema->getTableRelationCol()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalPrevTenantIdNull() )
			&& ( cur->isOptionalPrevIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) );
		}

		prev = schema->getTableRelationCol()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
		if( prev == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectPrev );
		}

		if( ( ! prev->isOptionalPrevTenantIdNull() )
			&& ( ! prev->isOptionalPrevIdNull() ) ) {
			grandprev = schema->getTableRelationCol()->readDerivedByIdIdx(Authorization, prev->getOptionalPrevTenantIdValue(), prev->getOptionalPrevIdValue() );
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
			next = schema->getTableRelationCol()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
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
		cfbam::CFBamRelationColBuff* editPrev = NULL;
		cfbam::CFBamRelationColBuff* editCur = NULL;
		cfbam::CFBamRelationColBuff* editGrandprev = NULL;
		cfbam::CFBamRelationColBuff* editNext = NULL;
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
			if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
				editGrandprev = schema->getTableRelationCol()->updateRelationCol( Authorization, dynamic_cast<cfbam::CFBamRelationColBuff*>( grandprev ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
		}

		classCode = editPrev->getClassCode();
			if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
				editPrev = schema->getTableRelationCol()->updateRelationCol( Authorization, prev );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}

		classCode = editCur->getClassCode();
			if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
				editCur = schema->getTableRelationCol()->updateRelationCol( Authorization, cur );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( next != NULL ) {
			classCode = next->getClassCode();
			if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
				editNext = schema->getTableRelationCol()->updateRelationCol( Authorization, next );
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

		return( dynamic_cast<cfbam::CFBamRelationColBuff*>( editCur ) );
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		const static std::string S_ProcName( "moveBuffDown" );
		const static std::string S_CouldNotLocateObject( "Could not locate object" );
		const static std::string S_CouldNotLocateObjectDotNext( "Could not locate object.next" );
		const static std::string S_CouldNotLocateObjectDotNextDotNext( "Could not locate object.next.next" );
		const static std::string S_CouldNotLocateObjectDotPrev( "Could not locate object.prev" );

		cfbam::CFBamRelationColBuff* prev = NULL;
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* next = NULL;
		cfbam::CFBamRelationColBuff* grandnext = NULL;

		cur = schema->getTableRelationCol()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalNextTenantIdNull() )
			&& ( cur->isOptionalNextIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) );
		}

		next = schema->getTableRelationCol()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
		if( next == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectDotNext );
		}

		if( ( ! next->isOptionalNextTenantIdNull()  )
			&& ( ! next->isOptionalNextIdNull() ) ) {
			grandnext = schema->getTableRelationCol()->readDerivedByIdIdx(Authorization, next->getOptionalNextTenantIdValue(), next->getOptionalNextIdValue() );
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
			prev = schema->getTableRelationCol()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
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
		cfbam::CFBamRelationColBuff* editCur = NULL;
		cfbam::CFBamRelationColBuff* editNext = NULL;
		cfbam::CFBamRelationColBuff* editGrandnext = NULL;
		cfbam::CFBamRelationColBuff* editPrev = NULL;

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
			if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
				editPrev = schema->getTableRelationCol()->updateRelationCol( Authorization, prev );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}
		}

		classCode = cur->getClassCode();
			if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
				editCur = schema->getTableRelationCol()->updateRelationCol( Authorization, cur );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		classCode = editNext->getClassCode();
			if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
				editNext = schema->getTableRelationCol()->updateRelationCol( Authorization, next );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( editGrandnext != NULL ) {
			classCode = editGrandnext->getClassCode();
			if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
				editGrandnext = schema->getTableRelationCol()->updateRelationCol( Authorization, dynamic_cast<cfbam::CFBamRelationColBuff*>( editGrandnext ) );
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

		return( dynamic_cast<cfbam::CFBamRelationColBuff*>( editCur ) );
	}

	cfbam::CFBamRelationColBuff* CFBamRamRelationColTable::updateRelationCol( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamRelationColBuff* Buff )
	{
		static const std::string S_ProcName( "updateRelationCol" );
		cfbam::CFBamRelationColPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in RelationCol for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamRelationColBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for RelationCol primary key " );
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
		cfbam::CFBamRelationColByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUNameIdx.setRequiredRelationId( existing->getRequiredRelationId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamRelationColByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUNameIdx.setRequiredRelationId( Buff->getRequiredRelationId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamRelationColByRelColTenantIdxKey existingKeyRelColTenantIdx;
		existingKeyRelColTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamRelationColByRelColTenantIdxKey newKeyRelColTenantIdx;
		newKeyRelColTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamRelationColByRelationIdxKey existingKeyRelationIdx;
		existingKeyRelationIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyRelationIdx.setRequiredRelationId( existing->getRequiredRelationId() );
		cfbam::CFBamRelationColByRelationIdxKey newKeyRelationIdx;
		newKeyRelationIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyRelationIdx.setRequiredRelationId( Buff->getRequiredRelationId() );
		cfbam::CFBamRelationColByDefSchemaIdxKey existingKeyDefSchemaIdx;
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
		cfbam::CFBamRelationColByDefSchemaIdxKey newKeyDefSchemaIdx;
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
		cfbam::CFBamRelationColByFromColIdxKey existingKeyFromColIdx;
		existingKeyFromColIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyFromColIdx.setRequiredFromColId( existing->getRequiredFromColId() );
		cfbam::CFBamRelationColByFromColIdxKey newKeyFromColIdx;
		newKeyFromColIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyFromColIdx.setRequiredFromColId( Buff->getRequiredFromColId() );
		cfbam::CFBamRelationColByToColIdxKey existingKeyToColIdx;
		existingKeyToColIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyToColIdx.setRequiredToColId( existing->getRequiredToColId() );
		cfbam::CFBamRelationColByToColIdxKey newKeyToColIdx;
		newKeyToColIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyToColIdx.setRequiredToColId( Buff->getRequiredToColId() );
		cfbam::CFBamRelationColByPrevIdxKey existingKeyPrevIdx;
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
		cfbam::CFBamRelationColByPrevIdxKey newKeyPrevIdx;
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
		cfbam::CFBamRelationColByNextIdxKey existingKeyNextIdx;
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
		cfbam::CFBamRelationColByNextIdxKey newKeyNextIdx;
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
		cfbam::CFBamRelationColByRelPrevIdxKey existingKeyRelPrevIdx;
		existingKeyRelPrevIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyRelPrevIdx.setRequiredRelationId( existing->getRequiredRelationId() );
		if( existing->isOptionalPrevIdNull() ) {
			existingKeyRelPrevIdx.setOptionalPrevIdNull();
		}
		else {
			existingKeyRelPrevIdx.setOptionalPrevIdValue( existing->getOptionalPrevIdValue() );
		}
		cfbam::CFBamRelationColByRelPrevIdxKey newKeyRelPrevIdx;
		newKeyRelPrevIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyRelPrevIdx.setRequiredRelationId( Buff->getRequiredRelationId() );
		if( Buff->isOptionalPrevIdNull() ) {
			newKeyRelPrevIdx.setOptionalPrevIdNull();
		}
		else {
			newKeyRelPrevIdx.setOptionalPrevIdValue( Buff->getOptionalPrevIdValue() );
		}
		cfbam::CFBamRelationColByRelNextIdxKey existingKeyRelNextIdx;
		existingKeyRelNextIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyRelNextIdx.setRequiredRelationId( existing->getRequiredRelationId() );
		if( existing->isOptionalNextIdNull() ) {
			existingKeyRelNextIdx.setOptionalNextIdNull();
		}
		else {
			existingKeyRelNextIdx.setOptionalNextIdValue( existing->getOptionalNextIdValue() );
		}
		cfbam::CFBamRelationColByRelNextIdxKey newKeyRelNextIdx;
		newKeyRelNextIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyRelNextIdx.setRequiredRelationId( Buff->getRequiredRelationId() );
		if( Buff->isOptionalNextIdNull() ) {
			newKeyRelNextIdx.setOptionalNextIdNull();
		}
		else {
			newKeyRelNextIdx.setOptionalNextIdValue( Buff->getOptionalNextIdValue() );
		}
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index RelationColUNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamRelationBuff* chk = dynamic_cast<cfbam::CFBamRelationBuff*>( schema->getTableRelation()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredRelationId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Relation to table Relation" );
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

			if( allNull ) {
				cfbam::CFBamIndexColBuff* chk = dynamic_cast<cfbam::CFBamIndexColBuff*>( schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredFromColId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship LookupFromCol to table IndexCol" );
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
				cfbam::CFBamIndexColBuff* chk = dynamic_cast<cfbam::CFBamIndexColBuff*>( schema->getTableIndexCol()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredToColId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship LookupToCol to table IndexCol" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfbam::CFBamRelationColBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfbam::CFBamRelationColBuff" );
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

		dictByPKey->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamRelationColByUNameIdxKey, cfbam::CFBamRelationColBuff*>::value_type( newKeyUNameIdx, existing ) );

		std::map<cfbam::CFBamRelationColPKey,
			 cfbam::CFBamRelationColBuff*>* subdictRelColTenantIdx;
		auto searchDictByRelColTenantIdx = dictByRelColTenantIdx->find( existingKeyRelColTenantIdx );
		if( searchDictByRelColTenantIdx != dictByRelColTenantIdx->end() ) {
			subdictRelColTenantIdx = searchDictByRelColTenantIdx->second;
			auto searchSubDict = subdictRelColTenantIdx->find( pkey );
			if( searchSubDict != subdictRelColTenantIdx->end() ) {
				subdictRelColTenantIdx->erase( searchSubDict );
			}
			if( subdictRelColTenantIdx->size() <= 0 ) {
				delete subdictRelColTenantIdx;
				dictByRelColTenantIdx->erase( searchDictByRelColTenantIdx );
			}
			subdictRelColTenantIdx = NULL;
		}
		auto searchNewKeyDictByRelColTenantIdx = dictByRelColTenantIdx->find( newKeyRelColTenantIdx );
		if( searchNewKeyDictByRelColTenantIdx != dictByRelColTenantIdx->end() ) {
			subdictRelColTenantIdx = searchNewKeyDictByRelColTenantIdx->second;
		}
		else {
			subdictRelColTenantIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByRelColTenantIdx->insert( std::map<cfbam::CFBamRelationColByRelColTenantIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( newKeyRelColTenantIdx, subdictRelColTenantIdx ) );
		}
		subdictRelColTenantIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamRelationColPKey,
			 cfbam::CFBamRelationColBuff*>* subdictRelationIdx;
		auto searchDictByRelationIdx = dictByRelationIdx->find( existingKeyRelationIdx );
		if( searchDictByRelationIdx != dictByRelationIdx->end() ) {
			subdictRelationIdx = searchDictByRelationIdx->second;
			auto searchSubDict = subdictRelationIdx->find( pkey );
			if( searchSubDict != subdictRelationIdx->end() ) {
				subdictRelationIdx->erase( searchSubDict );
			}
			if( subdictRelationIdx->size() <= 0 ) {
				delete subdictRelationIdx;
				dictByRelationIdx->erase( searchDictByRelationIdx );
			}
			subdictRelationIdx = NULL;
		}
		auto searchNewKeyDictByRelationIdx = dictByRelationIdx->find( newKeyRelationIdx );
		if( searchNewKeyDictByRelationIdx != dictByRelationIdx->end() ) {
			subdictRelationIdx = searchNewKeyDictByRelationIdx->second;
		}
		else {
			subdictRelationIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByRelationIdx->insert( std::map<cfbam::CFBamRelationColByRelationIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( newKeyRelationIdx, subdictRelationIdx ) );
		}
		subdictRelationIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamRelationColPKey,
			 cfbam::CFBamRelationColBuff*>* subdictDefSchemaIdx;
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
			subdictDefSchemaIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamRelationColByDefSchemaIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( newKeyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamRelationColPKey,
			 cfbam::CFBamRelationColBuff*>* subdictFromColIdx;
		auto searchDictByFromColIdx = dictByFromColIdx->find( existingKeyFromColIdx );
		if( searchDictByFromColIdx != dictByFromColIdx->end() ) {
			subdictFromColIdx = searchDictByFromColIdx->second;
			auto searchSubDict = subdictFromColIdx->find( pkey );
			if( searchSubDict != subdictFromColIdx->end() ) {
				subdictFromColIdx->erase( searchSubDict );
			}
			if( subdictFromColIdx->size() <= 0 ) {
				delete subdictFromColIdx;
				dictByFromColIdx->erase( searchDictByFromColIdx );
			}
			subdictFromColIdx = NULL;
		}
		auto searchNewKeyDictByFromColIdx = dictByFromColIdx->find( newKeyFromColIdx );
		if( searchNewKeyDictByFromColIdx != dictByFromColIdx->end() ) {
			subdictFromColIdx = searchNewKeyDictByFromColIdx->second;
		}
		else {
			subdictFromColIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByFromColIdx->insert( std::map<cfbam::CFBamRelationColByFromColIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( newKeyFromColIdx, subdictFromColIdx ) );
		}
		subdictFromColIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamRelationColPKey,
			 cfbam::CFBamRelationColBuff*>* subdictToColIdx;
		auto searchDictByToColIdx = dictByToColIdx->find( existingKeyToColIdx );
		if( searchDictByToColIdx != dictByToColIdx->end() ) {
			subdictToColIdx = searchDictByToColIdx->second;
			auto searchSubDict = subdictToColIdx->find( pkey );
			if( searchSubDict != subdictToColIdx->end() ) {
				subdictToColIdx->erase( searchSubDict );
			}
			if( subdictToColIdx->size() <= 0 ) {
				delete subdictToColIdx;
				dictByToColIdx->erase( searchDictByToColIdx );
			}
			subdictToColIdx = NULL;
		}
		auto searchNewKeyDictByToColIdx = dictByToColIdx->find( newKeyToColIdx );
		if( searchNewKeyDictByToColIdx != dictByToColIdx->end() ) {
			subdictToColIdx = searchNewKeyDictByToColIdx->second;
		}
		else {
			subdictToColIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByToColIdx->insert( std::map<cfbam::CFBamRelationColByToColIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( newKeyToColIdx, subdictToColIdx ) );
		}
		subdictToColIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamRelationColPKey,
			 cfbam::CFBamRelationColBuff*>* subdictPrevIdx;
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
			subdictPrevIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamRelationColByPrevIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( newKeyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamRelationColPKey,
			 cfbam::CFBamRelationColBuff*>* subdictNextIdx;
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
			subdictNextIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamRelationColByNextIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( newKeyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamRelationColPKey,
			 cfbam::CFBamRelationColBuff*>* subdictRelPrevIdx;
		auto searchDictByRelPrevIdx = dictByRelPrevIdx->find( existingKeyRelPrevIdx );
		if( searchDictByRelPrevIdx != dictByRelPrevIdx->end() ) {
			subdictRelPrevIdx = searchDictByRelPrevIdx->second;
			auto searchSubDict = subdictRelPrevIdx->find( pkey );
			if( searchSubDict != subdictRelPrevIdx->end() ) {
				subdictRelPrevIdx->erase( searchSubDict );
			}
			if( subdictRelPrevIdx->size() <= 0 ) {
				delete subdictRelPrevIdx;
				dictByRelPrevIdx->erase( searchDictByRelPrevIdx );
			}
			subdictRelPrevIdx = NULL;
		}
		auto searchNewKeyDictByRelPrevIdx = dictByRelPrevIdx->find( newKeyRelPrevIdx );
		if( searchNewKeyDictByRelPrevIdx != dictByRelPrevIdx->end() ) {
			subdictRelPrevIdx = searchNewKeyDictByRelPrevIdx->second;
		}
		else {
			subdictRelPrevIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByRelPrevIdx->insert( std::map<cfbam::CFBamRelationColByRelPrevIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( newKeyRelPrevIdx, subdictRelPrevIdx ) );
		}
		subdictRelPrevIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamRelationColPKey,
			 cfbam::CFBamRelationColBuff*>* subdictRelNextIdx;
		auto searchDictByRelNextIdx = dictByRelNextIdx->find( existingKeyRelNextIdx );
		if( searchDictByRelNextIdx != dictByRelNextIdx->end() ) {
			subdictRelNextIdx = searchDictByRelNextIdx->second;
			auto searchSubDict = subdictRelNextIdx->find( pkey );
			if( searchSubDict != subdictRelNextIdx->end() ) {
				subdictRelNextIdx->erase( searchSubDict );
			}
			if( subdictRelNextIdx->size() <= 0 ) {
				delete subdictRelNextIdx;
				dictByRelNextIdx->erase( searchDictByRelNextIdx );
			}
			subdictRelNextIdx = NULL;
		}
		auto searchNewKeyDictByRelNextIdx = dictByRelNextIdx->find( newKeyRelNextIdx );
		if( searchNewKeyDictByRelNextIdx != dictByRelNextIdx->end() ) {
			subdictRelNextIdx = searchNewKeyDictByRelNextIdx->second;
		}
		else {
			subdictRelNextIdx = new std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>();
			dictByRelNextIdx->insert( std::map<cfbam::CFBamRelationColByRelNextIdxKey,
				std::map<cfbam::CFBamRelationColPKey,
					cfbam::CFBamRelationColBuff*>*>::value_type( newKeyRelNextIdx, subdictRelNextIdx ) );
		}
		subdictRelNextIdx->insert( std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamRelationColBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamRelationColBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamRelationColTable::deleteRelationCol( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamRelationColBuff* Buff )
	{
		static const std::string S_ProcName( "deleteRelationCol" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamRelationColPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamRelationColBuff* existing = searchExisting->second;

		const int64_t* prevTenantId = existing->getOptionalPrevTenantIdReference();
		const int64_t* prevId = existing->getOptionalPrevIdReference();
		const int64_t* nextTenantId = existing->getOptionalNextTenantIdReference();
		const int64_t* nextId = existing->getOptionalNextIdReference();

		cfbam::CFBamRelationColBuff* prev = NULL;
		cfbam::CFBamRelationColBuff* editPrev = NULL;
		if( ( prevTenantId != NULL )
			&& ( prevId != NULL ) ) {
			prev = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
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
			if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
				editPrev = schema->getTableRelationCol()->updateRelationCol( Authorization, prev );
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

		cfbam::CFBamRelationColBuff* next = NULL;
		cfbam::CFBamRelationColBuff* editNext = NULL;
		if( ( nextTenantId != NULL )
			&& ( nextId != NULL ) ) {
			next = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
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
			if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
				editNext = schema->getTableRelationCol()->updateRelationCol( Authorization, next );
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

		cfbam::CFBamRelationColByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUNameIdx.setRequiredRelationId( existing->getRequiredRelationId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamRelationColByRelColTenantIdxKey keyRelColTenantIdx;
		keyRelColTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamRelationColByRelationIdxKey keyRelationIdx;
		keyRelationIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyRelationIdx.setRequiredRelationId( existing->getRequiredRelationId() );
		cfbam::CFBamRelationColByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamRelationColByFromColIdxKey keyFromColIdx;
		keyFromColIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyFromColIdx.setRequiredFromColId( existing->getRequiredFromColId() );
		cfbam::CFBamRelationColByToColIdxKey keyToColIdx;
		keyToColIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyToColIdx.setRequiredToColId( existing->getRequiredToColId() );
		cfbam::CFBamRelationColByPrevIdxKey keyPrevIdx;
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
		cfbam::CFBamRelationColByNextIdxKey keyNextIdx;
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
		cfbam::CFBamRelationColByRelPrevIdxKey keyRelPrevIdx;
		keyRelPrevIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyRelPrevIdx.setRequiredRelationId( existing->getRequiredRelationId() );
		if( existing->isOptionalPrevIdNull() ) {
			keyRelPrevIdx.setOptionalPrevIdNull();
		}
		else {
			keyRelPrevIdx.setOptionalPrevIdValue( existing->getOptionalPrevIdValue() );
		}
		cfbam::CFBamRelationColByRelNextIdxKey keyRelNextIdx;
		keyRelNextIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyRelNextIdx.setRequiredRelationId( existing->getRequiredRelationId() );
		if( existing->isOptionalNextIdNull() ) {
			keyRelNextIdx.setOptionalNextIdNull();
		}
		else {
			keyRelNextIdx.setOptionalNextIdValue( existing->getOptionalNextIdValue() );
		}
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamRelationColPKey, cfbam::CFBamRelationColBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		auto searchDictByRelColTenantIdx = dictByRelColTenantIdx->find( keyRelColTenantIdx );
		if( searchDictByRelColTenantIdx != dictByRelColTenantIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictRelColTenantIdx = searchDictByRelColTenantIdx->second;
			auto searchSubDict = subdictRelColTenantIdx->find( pkey );
			if( searchSubDict != subdictRelColTenantIdx->end() ) {
				subdictRelColTenantIdx->erase( searchSubDict );
			}
			subdictRelColTenantIdx = NULL;
		}

		auto searchDictByRelationIdx = dictByRelationIdx->find( keyRelationIdx );
		if( searchDictByRelationIdx != dictByRelationIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictRelationIdx = searchDictByRelationIdx->second;
			auto searchSubDict = subdictRelationIdx->find( pkey );
			if( searchSubDict != subdictRelationIdx->end() ) {
				subdictRelationIdx->erase( searchSubDict );
			}
			subdictRelationIdx = NULL;
		}

		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			subdictDefSchemaIdx = NULL;
		}

		auto searchDictByFromColIdx = dictByFromColIdx->find( keyFromColIdx );
		if( searchDictByFromColIdx != dictByFromColIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictFromColIdx = searchDictByFromColIdx->second;
			auto searchSubDict = subdictFromColIdx->find( pkey );
			if( searchSubDict != subdictFromColIdx->end() ) {
				subdictFromColIdx->erase( searchSubDict );
			}
			subdictFromColIdx = NULL;
		}

		auto searchDictByToColIdx = dictByToColIdx->find( keyToColIdx );
		if( searchDictByToColIdx != dictByToColIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictToColIdx = searchDictByToColIdx->second;
			auto searchSubDict = subdictToColIdx->find( pkey );
			if( searchSubDict != subdictToColIdx->end() ) {
				subdictToColIdx->erase( searchSubDict );
			}
			subdictToColIdx = NULL;
		}

		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			auto searchSubDict = subdictPrevIdx->find( pkey );
			if( searchSubDict != subdictPrevIdx->end() ) {
				subdictPrevIdx->erase( searchSubDict );
			}
			subdictPrevIdx = NULL;
		}

		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			auto searchSubDict = subdictNextIdx->find( pkey );
			if( searchSubDict != subdictNextIdx->end() ) {
				subdictNextIdx->erase( searchSubDict );
			}
			subdictNextIdx = NULL;
		}

		auto searchDictByRelPrevIdx = dictByRelPrevIdx->find( keyRelPrevIdx );
		if( searchDictByRelPrevIdx != dictByRelPrevIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictRelPrevIdx = searchDictByRelPrevIdx->second;
			auto searchSubDict = subdictRelPrevIdx->find( pkey );
			if( searchSubDict != subdictRelPrevIdx->end() ) {
				subdictRelPrevIdx->erase( searchSubDict );
			}
			subdictRelPrevIdx = NULL;
		}

		auto searchDictByRelNextIdx = dictByRelNextIdx->find( keyRelNextIdx );
		if( searchDictByRelNextIdx != dictByRelNextIdx->end() ) {
			std::map<cfbam::CFBamRelationColPKey,
				 cfbam::CFBamRelationColBuff*>* subdictRelNextIdx = searchDictByRelNextIdx->second;
			auto searchSubDict = subdictRelNextIdx->find( pkey );
			if( searchSubDict != subdictRelNextIdx->end() ) {
				subdictRelNextIdx->erase( searchSubDict );
			}
			subdictRelNextIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamRelationColTable::deleteRelationColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamRelationColPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteRelationColByIdIdx( Authorization, &key );
	}

	void CFBamRamRelationColTable::deleteRelationColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> matchSet;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelationCol( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamRelationColTable::deleteRelationColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId,
			const std::string& argName )
	{
		cfbam::CFBamRelationColByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredRelationId( argRelationId );
		key.setRequiredName( argName );
		deleteRelationColByUNameIdx( Authorization, &key );
	}

	void CFBamRamRelationColTable::deleteRelationColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColByUNameIdxKey* argKey )
	{
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> matchSet;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelationCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationColTable::deleteRelationColByRelColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamRelationColByRelColTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteRelationColByRelColTenantIdx( Authorization, &key );
	}

	void CFBamRamRelationColTable::deleteRelationColByRelColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColByRelColTenantIdxKey* argKey )
	{
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> matchSet;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelationCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationColTable::deleteRelationColByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId )
	{
		cfbam::CFBamRelationColByRelationIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredRelationId( argRelationId );
		deleteRelationColByRelationIdx( Authorization, &key );
	}

	void CFBamRamRelationColTable::deleteRelationColByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColByRelationIdxKey* argKey )
	{
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> matchSet;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelationCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationColTable::deleteRelationColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamRelationColByDefSchemaIdxKey key;
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
		deleteRelationColByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamRelationColTable::deleteRelationColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> matchSet;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelationCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationColTable::deleteRelationColByFromColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argFromColId )
	{
		cfbam::CFBamRelationColByFromColIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredFromColId( argFromColId );
		deleteRelationColByFromColIdx( Authorization, &key );
	}

	void CFBamRamRelationColTable::deleteRelationColByFromColIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColByFromColIdxKey* argKey )
	{
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> matchSet;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelationCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationColTable::deleteRelationColByToColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argToColId )
	{
		cfbam::CFBamRelationColByToColIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredToColId( argToColId );
		deleteRelationColByToColIdx( Authorization, &key );
	}

	void CFBamRamRelationColTable::deleteRelationColByToColIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColByToColIdxKey* argKey )
	{
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> matchSet;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelationCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationColTable::deleteRelationColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId )
	{
		cfbam::CFBamRelationColByPrevIdxKey key;
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
		deleteRelationColByPrevIdx( Authorization, &key );
	}

	void CFBamRamRelationColTable::deleteRelationColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColByPrevIdxKey* argKey )
	{
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> matchSet;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelationCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationColTable::deleteRelationColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId )
	{
		cfbam::CFBamRelationColByNextIdxKey key;
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
		deleteRelationColByNextIdx( Authorization, &key );
	}

	void CFBamRamRelationColTable::deleteRelationColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColByNextIdxKey* argKey )
	{
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> matchSet;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelationCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationColTable::deleteRelationColByRelPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId,
			const int64_t* argPrevId )
	{
		cfbam::CFBamRelationColByRelPrevIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredRelationId( argRelationId );
		if( argPrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *argPrevId );
		}
		deleteRelationColByRelPrevIdx( Authorization, &key );
	}

	void CFBamRamRelationColTable::deleteRelationColByRelPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColByRelPrevIdxKey* argKey )
	{
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalPrevIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> matchSet;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelationCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationColTable::deleteRelationColByRelNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId,
			const int64_t* argNextId )
	{
		cfbam::CFBamRelationColByRelNextIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredRelationId( argRelationId );
		if( argNextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *argNextId );
		}
		deleteRelationColByRelNextIdx( Authorization, &key );
	}

	void CFBamRamRelationColTable::deleteRelationColByRelNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationColByRelNextIdxKey* argKey )
	{
		cfbam::CFBamRelationColBuff* cur = NULL;
		cfbam::CFBamRelationColBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalNextIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> matchSet;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationColBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationColBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelationCol()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelationCol( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationColTable::releasePreparedStatements() {
	}

}
