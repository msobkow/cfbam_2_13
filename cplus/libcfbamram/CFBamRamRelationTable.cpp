
// Description: C++18 Implementation for an in-memory RAM DbIO for Relation.

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

	const std::string CFBamRamRelationTable::CLASS_NAME( "CFBamRamRelationTable" );

	CFBamRamRelationTable::CFBamRamRelationTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamRelationTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
		dictByUNameIdx = new std::map<cfbam::CFBamRelationByUNameIdxKey, cfbam::CFBamRelationBuff*>();
		dictByRelnTenantIdx = new std::map<cfbam::CFBamRelationByRelnTenantIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>();
		dictByRelTableIdx = new std::map<cfbam::CFBamRelationByRelTableIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>();
		dictByDefSchemaIdx = new std::map<cfbam::CFBamRelationByDefSchemaIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>();
		dictByFromKeyIdx = new std::map<cfbam::CFBamRelationByFromKeyIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>();
		dictByToTblIdx = new std::map<cfbam::CFBamRelationByToTblIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>();
		dictByToKeyIdx = new std::map<cfbam::CFBamRelationByToKeyIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>();
		dictByNarrowedIdx = new std::map<cfbam::CFBamRelationByNarrowedIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>();
	}

	CFBamRamRelationTable::~CFBamRamRelationTable() {
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByRelnTenantIdx != NULL ) {
			for( auto iterDict = dictByRelnTenantIdx->begin(); iterDict != dictByRelnTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByRelnTenantIdx;
			dictByRelnTenantIdx = NULL;
		}
		if( dictByRelTableIdx != NULL ) {
			for( auto iterDict = dictByRelTableIdx->begin(); iterDict != dictByRelTableIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByRelTableIdx;
			dictByRelTableIdx = NULL;
		}
		if( dictByDefSchemaIdx != NULL ) {
			for( auto iterDict = dictByDefSchemaIdx->begin(); iterDict != dictByDefSchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDefSchemaIdx;
			dictByDefSchemaIdx = NULL;
		}
		if( dictByFromKeyIdx != NULL ) {
			for( auto iterDict = dictByFromKeyIdx->begin(); iterDict != dictByFromKeyIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByFromKeyIdx;
			dictByFromKeyIdx = NULL;
		}
		if( dictByToTblIdx != NULL ) {
			for( auto iterDict = dictByToTblIdx->begin(); iterDict != dictByToTblIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByToTblIdx;
			dictByToTblIdx = NULL;
		}
		if( dictByToKeyIdx != NULL ) {
			for( auto iterDict = dictByToKeyIdx->begin(); iterDict != dictByToKeyIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByToKeyIdx;
			dictByToKeyIdx = NULL;
		}
		if( dictByNarrowedIdx != NULL ) {
			for( auto iterDict = dictByNarrowedIdx->begin(); iterDict != dictByNarrowedIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByNarrowedIdx;
			dictByNarrowedIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfbam::CFBamRelationBuff* CFBamRamRelationTable::createRelation( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamRelationBuff* Buff )
	{
		static const std::string S_ProcName( "createRelation" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamRelationByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUNameIdx.setRequiredTableId( Buff->getRequiredTableId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamRelationByRelnTenantIdxKey keyRelnTenantIdx;
		keyRelnTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamRelationByRelTableIdxKey keyRelTableIdx;
		keyRelTableIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyRelTableIdx.setRequiredTableId( Buff->getRequiredTableId() );
		cfbam::CFBamRelationByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamRelationByFromKeyIdxKey keyFromKeyIdx;
		keyFromKeyIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyFromKeyIdx.setRequiredFromIndexId( Buff->getRequiredFromIndexId() );
		cfbam::CFBamRelationByToTblIdxKey keyToTblIdx;
		keyToTblIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyToTblIdx.setRequiredToTableId( Buff->getRequiredToTableId() );
		cfbam::CFBamRelationByToKeyIdxKey keyToKeyIdx;
		keyToKeyIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyToKeyIdx.setRequiredToIndexId( Buff->getRequiredToIndexId() );
		cfbam::CFBamRelationByNarrowedIdxKey keyNarrowedIdx;
		if( Buff->isOptionalNarrowedTenantIdNull() ) {
			keyNarrowedIdx.setOptionalNarrowedTenantIdNull();
		}
		else {
			keyNarrowedIdx.setOptionalNarrowedTenantIdValue( Buff->getOptionalNarrowedTenantIdValue() );
		}
		if( Buff->isOptionalNarrowedIdNull() ) {
			keyNarrowedIdx.setOptionalNarrowedIdNull();
		}
		else {
			keyNarrowedIdx.setOptionalNarrowedIdValue( Buff->getOptionalNarrowedIdValue() );
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
			std::string Msg( "Duplicate key detected for index RelationUNameIdx " + keyUNameIdx.toString() );
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
				cfbam::CFBamTableBuff* chk = dynamic_cast<cfbam::CFBamTableBuff*>( schema->getTableTable()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTableId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship FromTable to table Table" );
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
					std::string Msg( "Could not resolve Owner relationship RelTenant to table Tenant" );
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
						Buff->getRequiredFromIndexId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship FromIndex to table Index" );
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
						Buff->getRequiredToTableId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship ToTable to table Table" );
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
						Buff->getRequiredToIndexId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship ToIndex to table Index" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamRelationBuff* buff = dynamic_cast<cfbam::CFBamRelationBuff*>( schema->getTableScope()->createScope( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamRelationByUNameIdxKey, cfbam::CFBamRelationBuff*>::value_type( keyUNameIdx, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>* subdictRelnTenantIdx;
		auto searchDictByRelnTenantIdx = dictByRelnTenantIdx->find( keyRelnTenantIdx );
		if( searchDictByRelnTenantIdx != dictByRelnTenantIdx->end() ) {
			subdictRelnTenantIdx = searchDictByRelnTenantIdx->second;
		}
		else {
			subdictRelnTenantIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByRelnTenantIdx->insert( std::map<cfbam::CFBamRelationByRelnTenantIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( keyRelnTenantIdx, subdictRelnTenantIdx ) );
		}
		subdictRelnTenantIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>* subdictRelTableIdx;
		auto searchDictByRelTableIdx = dictByRelTableIdx->find( keyRelTableIdx );
		if( searchDictByRelTableIdx != dictByRelTableIdx->end() ) {
			subdictRelTableIdx = searchDictByRelTableIdx->second;
		}
		else {
			subdictRelTableIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByRelTableIdx->insert( std::map<cfbam::CFBamRelationByRelTableIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( keyRelTableIdx, subdictRelTableIdx ) );
		}
		subdictRelTableIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamRelationByDefSchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( keyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>* subdictFromKeyIdx;
		auto searchDictByFromKeyIdx = dictByFromKeyIdx->find( keyFromKeyIdx );
		if( searchDictByFromKeyIdx != dictByFromKeyIdx->end() ) {
			subdictFromKeyIdx = searchDictByFromKeyIdx->second;
		}
		else {
			subdictFromKeyIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByFromKeyIdx->insert( std::map<cfbam::CFBamRelationByFromKeyIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( keyFromKeyIdx, subdictFromKeyIdx ) );
		}
		subdictFromKeyIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>* subdictToTblIdx;
		auto searchDictByToTblIdx = dictByToTblIdx->find( keyToTblIdx );
		if( searchDictByToTblIdx != dictByToTblIdx->end() ) {
			subdictToTblIdx = searchDictByToTblIdx->second;
		}
		else {
			subdictToTblIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByToTblIdx->insert( std::map<cfbam::CFBamRelationByToTblIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( keyToTblIdx, subdictToTblIdx ) );
		}
		subdictToTblIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>* subdictToKeyIdx;
		auto searchDictByToKeyIdx = dictByToKeyIdx->find( keyToKeyIdx );
		if( searchDictByToKeyIdx != dictByToKeyIdx->end() ) {
			subdictToKeyIdx = searchDictByToKeyIdx->second;
		}
		else {
			subdictToKeyIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByToKeyIdx->insert( std::map<cfbam::CFBamRelationByToKeyIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( keyToKeyIdx, subdictToKeyIdx ) );
		}
		subdictToKeyIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>* subdictNarrowedIdx;
		auto searchDictByNarrowedIdx = dictByNarrowedIdx->find( keyNarrowedIdx );
		if( searchDictByNarrowedIdx != dictByNarrowedIdx->end() ) {
			subdictNarrowedIdx = searchDictByNarrowedIdx->second;
		}
		else {
			subdictNarrowedIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByNarrowedIdx->insert( std::map<cfbam::CFBamRelationByNarrowedIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( keyNarrowedIdx, subdictNarrowedIdx ) );
		}
		subdictNarrowedIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamRelationBuff* CFBamRamRelationTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamRelationBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamRelationBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamRelationBuff* CFBamRamRelationTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamRelationBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamRelationBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamRelationBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamRelationBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamRelationBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	cfbam::CFBamRelationBuff* CFBamRamRelationTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamRelationByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::CFBamRelationBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamRelationBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readDerivedByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByRelnTenantIdx" );
		cfbam::CFBamRelationByRelnTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> recVec;
		cfbam::CFBamRelationBuff* clone;
		auto searchDictByRelnTenantIdx = dictByRelnTenantIdx->find( key );
		if( searchDictByRelnTenantIdx != dictByRelnTenantIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictRelnTenantIdx = searchDictByRelnTenantIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator iter = subdictRelnTenantIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator end = subdictRelnTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readDerivedByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readDerivedByRelTableIdx" );
		cfbam::CFBamRelationByRelTableIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> recVec;
		cfbam::CFBamRelationBuff* clone;
		auto searchDictByRelTableIdx = dictByRelTableIdx->find( key );
		if( searchDictByRelTableIdx != dictByRelTableIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictRelTableIdx = searchDictByRelTableIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator iter = subdictRelTableIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator end = subdictRelTableIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		cfbam::CFBamRelationByDefSchemaIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> recVec;
		cfbam::CFBamRelationBuff* clone;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( key );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator iter = subdictDefSchemaIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator end = subdictDefSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readDerivedByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromIndexId )
	{
		static const std::string S_ProcName( "readDerivedByFromKeyIdx" );
		cfbam::CFBamRelationByFromKeyIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredFromIndexId( FromIndexId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> recVec;
		cfbam::CFBamRelationBuff* clone;
		auto searchDictByFromKeyIdx = dictByFromKeyIdx->find( key );
		if( searchDictByFromKeyIdx != dictByFromKeyIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictFromKeyIdx = searchDictByFromKeyIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator iter = subdictFromKeyIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator end = subdictFromKeyIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readDerivedByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToTableId )
	{
		static const std::string S_ProcName( "readDerivedByToTblIdx" );
		cfbam::CFBamRelationByToTblIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredToTableId( ToTableId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> recVec;
		cfbam::CFBamRelationBuff* clone;
		auto searchDictByToTblIdx = dictByToTblIdx->find( key );
		if( searchDictByToTblIdx != dictByToTblIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictToTblIdx = searchDictByToTblIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator iter = subdictToTblIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator end = subdictToTblIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readDerivedByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToIndexId )
	{
		static const std::string S_ProcName( "readDerivedByToKeyIdx" );
		cfbam::CFBamRelationByToKeyIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredToIndexId( ToIndexId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> recVec;
		cfbam::CFBamRelationBuff* clone;
		auto searchDictByToKeyIdx = dictByToKeyIdx->find( key );
		if( searchDictByToKeyIdx != dictByToKeyIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictToKeyIdx = searchDictByToKeyIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator iter = subdictToKeyIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator end = subdictToKeyIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readDerivedByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NarrowedTenantId,
			const int64_t* NarrowedId )
	{
		static const std::string S_ProcName( "readDerivedByNarrowedIdx" );
		cfbam::CFBamRelationByNarrowedIdxKey key;
		if( NarrowedTenantId == NULL ) {
			key.setOptionalNarrowedTenantIdNull();
		}
		else {
			key.setOptionalNarrowedTenantIdValue( *NarrowedTenantId );
		}
		if( NarrowedId == NULL ) {
			key.setOptionalNarrowedIdNull();
		}
		else {
			key.setOptionalNarrowedIdValue( *NarrowedId );
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> recVec;
		cfbam::CFBamRelationBuff* clone;
		auto searchDictByNarrowedIdx = dictByNarrowedIdx->find( key );
		if( searchDictByNarrowedIdx != dictByNarrowedIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictNarrowedIdx = searchDictByNarrowedIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator iter = subdictNarrowedIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>::iterator end = subdictNarrowedIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamRelationBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamRelationBuff* CFBamRamRelationTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamRelationBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamRelationBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamRelationBuff* CFBamRamRelationTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamRelationBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamRelationBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamRelationBuff*>( buff ) );
	}

	cfbam::CFBamRelationBuff* CFBamRamRelationTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamRelationBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamRelationBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamRelationBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamRelationBuff* CFBamRamRelationTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamRelationBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamRelationBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamRelationBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamRelationBuff* CFBamRamRelationTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamRelationBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamRelationBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readBuffByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByRelnTenantIdx" );
		cfbam::CFBamRelationBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = readDerivedByRelnTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readBuffByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readBuffByRelTableIdx" );
		cfbam::CFBamRelationBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = readDerivedByRelTableIdx( Authorization,
			TenantId,
			TableId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamRelationBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readBuffByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromIndexId )
	{
		static const std::string S_ProcName( "readBuffByFromKeyIdx" );
		cfbam::CFBamRelationBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = readDerivedByFromKeyIdx( Authorization,
			TenantId,
			FromIndexId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readBuffByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToTableId )
	{
		static const std::string S_ProcName( "readBuffByToTblIdx" );
		cfbam::CFBamRelationBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = readDerivedByToTblIdx( Authorization,
			TenantId,
			ToTableId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readBuffByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToIndexId )
	{
		static const std::string S_ProcName( "readBuffByToKeyIdx" );
		cfbam::CFBamRelationBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = readDerivedByToKeyIdx( Authorization,
			TenantId,
			ToIndexId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::readBuffByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NarrowedTenantId,
			const int64_t* NarrowedId )
	{
		static const std::string S_ProcName( "readBuffByNarrowedIdx" );
		cfbam::CFBamRelationBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> buffList = readDerivedByNarrowedIdx( Authorization,
			NarrowedTenantId,
			NarrowedId );
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamRelationBuff* CFBamRamRelationTable::readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfbam::CFBamRelationBuff* buff = readBuffByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamRelationBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamRelationBuff* CFBamRamRelationTable::readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfbam::CFBamRelationBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			TableId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfbam::CFBamRelationBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::pageBuffByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByRelnTenantIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::pageBuffByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByRelTableIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::pageBuffByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromIndexId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByFromKeyIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::pageBuffByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToTableId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByToTblIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::pageBuffByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToIndexId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByToKeyIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> CFBamRamRelationTable::pageBuffByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NarrowedTenantId,
			const int64_t* NarrowedId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByNarrowedIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamRelationBuff* CFBamRamRelationTable::updateRelation( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamRelationBuff* Buff )
	{
		static const std::string S_ProcName( "updateRelation" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in Relation for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamRelationBuff* existing = searchExisting->second;

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
		cfbam::CFBamRelationByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUNameIdx.setRequiredTableId( existing->getRequiredTableId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamRelationByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUNameIdx.setRequiredTableId( Buff->getRequiredTableId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamRelationByRelnTenantIdxKey existingKeyRelnTenantIdx;
		existingKeyRelnTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamRelationByRelnTenantIdxKey newKeyRelnTenantIdx;
		newKeyRelnTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamRelationByRelTableIdxKey existingKeyRelTableIdx;
		existingKeyRelTableIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyRelTableIdx.setRequiredTableId( existing->getRequiredTableId() );
		cfbam::CFBamRelationByRelTableIdxKey newKeyRelTableIdx;
		newKeyRelTableIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyRelTableIdx.setRequiredTableId( Buff->getRequiredTableId() );
		cfbam::CFBamRelationByDefSchemaIdxKey existingKeyDefSchemaIdx;
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
		cfbam::CFBamRelationByDefSchemaIdxKey newKeyDefSchemaIdx;
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
		cfbam::CFBamRelationByFromKeyIdxKey existingKeyFromKeyIdx;
		existingKeyFromKeyIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyFromKeyIdx.setRequiredFromIndexId( existing->getRequiredFromIndexId() );
		cfbam::CFBamRelationByFromKeyIdxKey newKeyFromKeyIdx;
		newKeyFromKeyIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyFromKeyIdx.setRequiredFromIndexId( Buff->getRequiredFromIndexId() );
		cfbam::CFBamRelationByToTblIdxKey existingKeyToTblIdx;
		existingKeyToTblIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyToTblIdx.setRequiredToTableId( existing->getRequiredToTableId() );
		cfbam::CFBamRelationByToTblIdxKey newKeyToTblIdx;
		newKeyToTblIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyToTblIdx.setRequiredToTableId( Buff->getRequiredToTableId() );
		cfbam::CFBamRelationByToKeyIdxKey existingKeyToKeyIdx;
		existingKeyToKeyIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyToKeyIdx.setRequiredToIndexId( existing->getRequiredToIndexId() );
		cfbam::CFBamRelationByToKeyIdxKey newKeyToKeyIdx;
		newKeyToKeyIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyToKeyIdx.setRequiredToIndexId( Buff->getRequiredToIndexId() );
		cfbam::CFBamRelationByNarrowedIdxKey existingKeyNarrowedIdx;
		if( existing->isOptionalNarrowedTenantIdNull() ) {
			existingKeyNarrowedIdx.setOptionalNarrowedTenantIdNull();
		}
		else {
			existingKeyNarrowedIdx.setOptionalNarrowedTenantIdValue( existing->getOptionalNarrowedTenantIdValue() );
		}
		if( existing->isOptionalNarrowedIdNull() ) {
			existingKeyNarrowedIdx.setOptionalNarrowedIdNull();
		}
		else {
			existingKeyNarrowedIdx.setOptionalNarrowedIdValue( existing->getOptionalNarrowedIdValue() );
		}
		cfbam::CFBamRelationByNarrowedIdxKey newKeyNarrowedIdx;
		if( Buff->isOptionalNarrowedTenantIdNull() ) {
			newKeyNarrowedIdx.setOptionalNarrowedTenantIdNull();
		}
		else {
			newKeyNarrowedIdx.setOptionalNarrowedTenantIdValue( Buff->getOptionalNarrowedTenantIdValue() );
		}
		if( Buff->isOptionalNarrowedIdNull() ) {
			newKeyNarrowedIdx.setOptionalNarrowedIdNull();
		}
		else {
			newKeyNarrowedIdx.setOptionalNarrowedIdValue( Buff->getOptionalNarrowedIdValue() );
		}
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index RelationUNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamTableBuff* chk = dynamic_cast<cfbam::CFBamTableBuff*>( schema->getTableTable()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTableId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship FromTable to table Table" );
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
					std::string Msg( "Could not resolve Owner relationship RelTenant to table Tenant" );
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
						Buff->getRequiredFromIndexId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship FromIndex to table Index" );
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
						Buff->getRequiredToTableId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship ToTable to table Table" );
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
						Buff->getRequiredToIndexId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship ToIndex to table Index" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamRelationBuff*>( schema->getTableScope()->updateScope( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamRelationByUNameIdxKey, cfbam::CFBamRelationBuff*>::value_type( newKeyUNameIdx, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamRelationBuff*>* subdictRelnTenantIdx;
		auto searchDictByRelnTenantIdx = dictByRelnTenantIdx->find( existingKeyRelnTenantIdx );
		if( searchDictByRelnTenantIdx != dictByRelnTenantIdx->end() ) {
			subdictRelnTenantIdx = searchDictByRelnTenantIdx->second;
			auto searchSubDict = subdictRelnTenantIdx->find( pkey );
			if( searchSubDict != subdictRelnTenantIdx->end() ) {
				subdictRelnTenantIdx->erase( searchSubDict );
			}
			if( subdictRelnTenantIdx->size() <= 0 ) {
				delete subdictRelnTenantIdx;
				dictByRelnTenantIdx->erase( searchDictByRelnTenantIdx );
			}
			subdictRelnTenantIdx = NULL;
		}
		auto searchNewKeyDictByRelnTenantIdx = dictByRelnTenantIdx->find( newKeyRelnTenantIdx );
		if( searchNewKeyDictByRelnTenantIdx != dictByRelnTenantIdx->end() ) {
			subdictRelnTenantIdx = searchNewKeyDictByRelnTenantIdx->second;
		}
		else {
			subdictRelnTenantIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByRelnTenantIdx->insert( std::map<cfbam::CFBamRelationByRelnTenantIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( newKeyRelnTenantIdx, subdictRelnTenantIdx ) );
		}
		subdictRelnTenantIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamRelationBuff*>* subdictRelTableIdx;
		auto searchDictByRelTableIdx = dictByRelTableIdx->find( existingKeyRelTableIdx );
		if( searchDictByRelTableIdx != dictByRelTableIdx->end() ) {
			subdictRelTableIdx = searchDictByRelTableIdx->second;
			auto searchSubDict = subdictRelTableIdx->find( pkey );
			if( searchSubDict != subdictRelTableIdx->end() ) {
				subdictRelTableIdx->erase( searchSubDict );
			}
			if( subdictRelTableIdx->size() <= 0 ) {
				delete subdictRelTableIdx;
				dictByRelTableIdx->erase( searchDictByRelTableIdx );
			}
			subdictRelTableIdx = NULL;
		}
		auto searchNewKeyDictByRelTableIdx = dictByRelTableIdx->find( newKeyRelTableIdx );
		if( searchNewKeyDictByRelTableIdx != dictByRelTableIdx->end() ) {
			subdictRelTableIdx = searchNewKeyDictByRelTableIdx->second;
		}
		else {
			subdictRelTableIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByRelTableIdx->insert( std::map<cfbam::CFBamRelationByRelTableIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( newKeyRelTableIdx, subdictRelTableIdx ) );
		}
		subdictRelTableIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamRelationBuff*>* subdictDefSchemaIdx;
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
			subdictDefSchemaIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamRelationByDefSchemaIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( newKeyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamRelationBuff*>* subdictFromKeyIdx;
		auto searchDictByFromKeyIdx = dictByFromKeyIdx->find( existingKeyFromKeyIdx );
		if( searchDictByFromKeyIdx != dictByFromKeyIdx->end() ) {
			subdictFromKeyIdx = searchDictByFromKeyIdx->second;
			auto searchSubDict = subdictFromKeyIdx->find( pkey );
			if( searchSubDict != subdictFromKeyIdx->end() ) {
				subdictFromKeyIdx->erase( searchSubDict );
			}
			if( subdictFromKeyIdx->size() <= 0 ) {
				delete subdictFromKeyIdx;
				dictByFromKeyIdx->erase( searchDictByFromKeyIdx );
			}
			subdictFromKeyIdx = NULL;
		}
		auto searchNewKeyDictByFromKeyIdx = dictByFromKeyIdx->find( newKeyFromKeyIdx );
		if( searchNewKeyDictByFromKeyIdx != dictByFromKeyIdx->end() ) {
			subdictFromKeyIdx = searchNewKeyDictByFromKeyIdx->second;
		}
		else {
			subdictFromKeyIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByFromKeyIdx->insert( std::map<cfbam::CFBamRelationByFromKeyIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( newKeyFromKeyIdx, subdictFromKeyIdx ) );
		}
		subdictFromKeyIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamRelationBuff*>* subdictToTblIdx;
		auto searchDictByToTblIdx = dictByToTblIdx->find( existingKeyToTblIdx );
		if( searchDictByToTblIdx != dictByToTblIdx->end() ) {
			subdictToTblIdx = searchDictByToTblIdx->second;
			auto searchSubDict = subdictToTblIdx->find( pkey );
			if( searchSubDict != subdictToTblIdx->end() ) {
				subdictToTblIdx->erase( searchSubDict );
			}
			if( subdictToTblIdx->size() <= 0 ) {
				delete subdictToTblIdx;
				dictByToTblIdx->erase( searchDictByToTblIdx );
			}
			subdictToTblIdx = NULL;
		}
		auto searchNewKeyDictByToTblIdx = dictByToTblIdx->find( newKeyToTblIdx );
		if( searchNewKeyDictByToTblIdx != dictByToTblIdx->end() ) {
			subdictToTblIdx = searchNewKeyDictByToTblIdx->second;
		}
		else {
			subdictToTblIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByToTblIdx->insert( std::map<cfbam::CFBamRelationByToTblIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( newKeyToTblIdx, subdictToTblIdx ) );
		}
		subdictToTblIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamRelationBuff*>* subdictToKeyIdx;
		auto searchDictByToKeyIdx = dictByToKeyIdx->find( existingKeyToKeyIdx );
		if( searchDictByToKeyIdx != dictByToKeyIdx->end() ) {
			subdictToKeyIdx = searchDictByToKeyIdx->second;
			auto searchSubDict = subdictToKeyIdx->find( pkey );
			if( searchSubDict != subdictToKeyIdx->end() ) {
				subdictToKeyIdx->erase( searchSubDict );
			}
			if( subdictToKeyIdx->size() <= 0 ) {
				delete subdictToKeyIdx;
				dictByToKeyIdx->erase( searchDictByToKeyIdx );
			}
			subdictToKeyIdx = NULL;
		}
		auto searchNewKeyDictByToKeyIdx = dictByToKeyIdx->find( newKeyToKeyIdx );
		if( searchNewKeyDictByToKeyIdx != dictByToKeyIdx->end() ) {
			subdictToKeyIdx = searchNewKeyDictByToKeyIdx->second;
		}
		else {
			subdictToKeyIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByToKeyIdx->insert( std::map<cfbam::CFBamRelationByToKeyIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( newKeyToKeyIdx, subdictToKeyIdx ) );
		}
		subdictToKeyIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamRelationBuff*>* subdictNarrowedIdx;
		auto searchDictByNarrowedIdx = dictByNarrowedIdx->find( existingKeyNarrowedIdx );
		if( searchDictByNarrowedIdx != dictByNarrowedIdx->end() ) {
			subdictNarrowedIdx = searchDictByNarrowedIdx->second;
			auto searchSubDict = subdictNarrowedIdx->find( pkey );
			if( searchSubDict != subdictNarrowedIdx->end() ) {
				subdictNarrowedIdx->erase( searchSubDict );
			}
			if( subdictNarrowedIdx->size() <= 0 ) {
				delete subdictNarrowedIdx;
				dictByNarrowedIdx->erase( searchDictByNarrowedIdx );
			}
			subdictNarrowedIdx = NULL;
		}
		auto searchNewKeyDictByNarrowedIdx = dictByNarrowedIdx->find( newKeyNarrowedIdx );
		if( searchNewKeyDictByNarrowedIdx != dictByNarrowedIdx->end() ) {
			subdictNarrowedIdx = searchNewKeyDictByNarrowedIdx->second;
		}
		else {
			subdictNarrowedIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>();
			dictByNarrowedIdx->insert( std::map<cfbam::CFBamRelationByNarrowedIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamRelationBuff*>*>::value_type( newKeyNarrowedIdx, subdictNarrowedIdx ) );
		}
		subdictNarrowedIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamRelationBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamRelationBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamRelationBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamRelationTable::deleteRelation( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamRelationBuff* Buff )
	{
		static const std::string S_ProcName( "deleteRelation" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamRelationBuff* existing = searchExisting->second;
		schema->getTablePopTopDep()->deletePopTopDepByContRelIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		schema->getTableRelationCol()->deleteRelationColByRelationIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		cfbam::CFBamRelationByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUNameIdx.setRequiredTableId( existing->getRequiredTableId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamRelationByRelnTenantIdxKey keyRelnTenantIdx;
		keyRelnTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamRelationByRelTableIdxKey keyRelTableIdx;
		keyRelTableIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyRelTableIdx.setRequiredTableId( existing->getRequiredTableId() );
		cfbam::CFBamRelationByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamRelationByFromKeyIdxKey keyFromKeyIdx;
		keyFromKeyIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyFromKeyIdx.setRequiredFromIndexId( existing->getRequiredFromIndexId() );
		cfbam::CFBamRelationByToTblIdxKey keyToTblIdx;
		keyToTblIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyToTblIdx.setRequiredToTableId( existing->getRequiredToTableId() );
		cfbam::CFBamRelationByToKeyIdxKey keyToKeyIdx;
		keyToKeyIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyToKeyIdx.setRequiredToIndexId( existing->getRequiredToIndexId() );
		cfbam::CFBamRelationByNarrowedIdxKey keyNarrowedIdx;
		if( existing->isOptionalNarrowedTenantIdNull() ) {
			keyNarrowedIdx.setOptionalNarrowedTenantIdNull();
		}
		else {
			keyNarrowedIdx.setOptionalNarrowedTenantIdValue( existing->getOptionalNarrowedTenantIdValue() );
		}
		if( existing->isOptionalNarrowedIdNull() ) {
			keyNarrowedIdx.setOptionalNarrowedIdNull();
		}
		else {
			keyNarrowedIdx.setOptionalNarrowedIdValue( existing->getOptionalNarrowedIdValue() );
		}
		// Validate reverse foreign keys

		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> derivedByPrevRelIdx = schema->getTableChain()->readDerivedByPrevRelIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() );
		if( derivedByPrevRelIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship PrevRelation from table Chain for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		std::TCFLibOwningVector<cfbam::CFBamChainBuff*> derivedByNextRelIdx = schema->getTableChain()->readDerivedByNextRelIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() );
		if( derivedByNextRelIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship NextRelation from table Chain for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*> derivedByClearDepIdx = schema->getTableClearDep()->readDerivedByClearDepIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() );
		if( derivedByClearDepIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship Relation from table ClearDep for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> derivedByDelDepIdx = schema->getTableDelDep()->readDerivedByDelDepIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() );
		if( derivedByDelDepIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship Relation from table DelDep for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		std::TCFLibOwningVector<cfbam::CFBamPopDepBuff*> derivedByRelationIdx = schema->getTablePopDep()->readDerivedByRelationIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() );
		if( derivedByRelationIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship Relation from table PopDep for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamRelationBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		auto searchDictByRelnTenantIdx = dictByRelnTenantIdx->find( keyRelnTenantIdx );
		if( searchDictByRelnTenantIdx != dictByRelnTenantIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictRelnTenantIdx = searchDictByRelnTenantIdx->second;
			auto searchSubDict = subdictRelnTenantIdx->find( pkey );
			if( searchSubDict != subdictRelnTenantIdx->end() ) {
				subdictRelnTenantIdx->erase( searchSubDict );
			}
			subdictRelnTenantIdx = NULL;
		}

		auto searchDictByRelTableIdx = dictByRelTableIdx->find( keyRelTableIdx );
		if( searchDictByRelTableIdx != dictByRelTableIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictRelTableIdx = searchDictByRelTableIdx->second;
			auto searchSubDict = subdictRelTableIdx->find( pkey );
			if( searchSubDict != subdictRelTableIdx->end() ) {
				subdictRelTableIdx->erase( searchSubDict );
			}
			subdictRelTableIdx = NULL;
		}

		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			subdictDefSchemaIdx = NULL;
		}

		auto searchDictByFromKeyIdx = dictByFromKeyIdx->find( keyFromKeyIdx );
		if( searchDictByFromKeyIdx != dictByFromKeyIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictFromKeyIdx = searchDictByFromKeyIdx->second;
			auto searchSubDict = subdictFromKeyIdx->find( pkey );
			if( searchSubDict != subdictFromKeyIdx->end() ) {
				subdictFromKeyIdx->erase( searchSubDict );
			}
			subdictFromKeyIdx = NULL;
		}

		auto searchDictByToTblIdx = dictByToTblIdx->find( keyToTblIdx );
		if( searchDictByToTblIdx != dictByToTblIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictToTblIdx = searchDictByToTblIdx->second;
			auto searchSubDict = subdictToTblIdx->find( pkey );
			if( searchSubDict != subdictToTblIdx->end() ) {
				subdictToTblIdx->erase( searchSubDict );
			}
			subdictToTblIdx = NULL;
		}

		auto searchDictByToKeyIdx = dictByToKeyIdx->find( keyToKeyIdx );
		if( searchDictByToKeyIdx != dictByToKeyIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictToKeyIdx = searchDictByToKeyIdx->second;
			auto searchSubDict = subdictToKeyIdx->find( pkey );
			if( searchSubDict != subdictToKeyIdx->end() ) {
				subdictToKeyIdx->erase( searchSubDict );
			}
			subdictToKeyIdx = NULL;
		}

		auto searchDictByNarrowedIdx = dictByNarrowedIdx->find( keyNarrowedIdx );
		if( searchDictByNarrowedIdx != dictByNarrowedIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamRelationBuff*>* subdictNarrowedIdx = searchDictByNarrowedIdx->second;
			auto searchSubDict = subdictNarrowedIdx->find( pkey );
			if( searchSubDict != subdictNarrowedIdx->end() ) {
				subdictNarrowedIdx->erase( searchSubDict );
			}
			subdictNarrowedIdx = NULL;
		}

		schema->getTableScope()->deleteScope( Authorization,
			Buff );
	}

	void CFBamRamRelationTable::deleteRelationByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId,
			const std::string& argName )
	{
		cfbam::CFBamRelationByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTableId( argTableId );
		key.setRequiredName( argName );
		deleteRelationByUNameIdx( Authorization, &key );
	}

	void CFBamRamRelationTable::deleteRelationByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationByUNameIdxKey* argKey )
	{
		cfbam::CFBamRelationBuff* cur = NULL;
		cfbam::CFBamRelationBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelation()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelation( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationTable::deleteRelationByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamRelationByRelnTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteRelationByRelnTenantIdx( Authorization, &key );
	}

	void CFBamRamRelationTable::deleteRelationByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationByRelnTenantIdxKey* argKey )
	{
		cfbam::CFBamRelationBuff* cur = NULL;
		cfbam::CFBamRelationBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelation()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelation( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationTable::deleteRelationByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId )
	{
		cfbam::CFBamRelationByRelTableIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTableId( argTableId );
		deleteRelationByRelTableIdx( Authorization, &key );
	}

	void CFBamRamRelationTable::deleteRelationByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationByRelTableIdxKey* argKey )
	{
		cfbam::CFBamRelationBuff* cur = NULL;
		cfbam::CFBamRelationBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelation()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelation( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationTable::deleteRelationByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamRelationByDefSchemaIdxKey key;
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
		deleteRelationByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamRelationTable::deleteRelationByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamRelationBuff* cur = NULL;
		cfbam::CFBamRelationBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelation()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelation( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationTable::deleteRelationByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argFromIndexId )
	{
		cfbam::CFBamRelationByFromKeyIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredFromIndexId( argFromIndexId );
		deleteRelationByFromKeyIdx( Authorization, &key );
	}

	void CFBamRamRelationTable::deleteRelationByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationByFromKeyIdxKey* argKey )
	{
		cfbam::CFBamRelationBuff* cur = NULL;
		cfbam::CFBamRelationBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelation()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelation( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationTable::deleteRelationByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argToTableId )
	{
		cfbam::CFBamRelationByToTblIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredToTableId( argToTableId );
		deleteRelationByToTblIdx( Authorization, &key );
	}

	void CFBamRamRelationTable::deleteRelationByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationByToTblIdxKey* argKey )
	{
		cfbam::CFBamRelationBuff* cur = NULL;
		cfbam::CFBamRelationBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelation()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelation( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationTable::deleteRelationByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argToIndexId )
	{
		cfbam::CFBamRelationByToKeyIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredToIndexId( argToIndexId );
		deleteRelationByToKeyIdx( Authorization, &key );
	}

	void CFBamRamRelationTable::deleteRelationByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationByToKeyIdxKey* argKey )
	{
		cfbam::CFBamRelationBuff* cur = NULL;
		cfbam::CFBamRelationBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelation()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelation( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationTable::deleteRelationByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNarrowedTenantId,
			const int64_t* argNarrowedId )
	{
		cfbam::CFBamRelationByNarrowedIdxKey key;
		if( argNarrowedTenantId == NULL ) {
			key.setOptionalNarrowedTenantIdNull();
		}
		else {
			key.setOptionalNarrowedTenantIdValue( *argNarrowedTenantId );
		}
		if( argNarrowedId == NULL ) {
			key.setOptionalNarrowedIdNull();
		}
		else {
			key.setOptionalNarrowedIdValue( *argNarrowedId );
		}
		deleteRelationByNarrowedIdx( Authorization, &key );
	}

	void CFBamRamRelationTable::deleteRelationByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamRelationByNarrowedIdxKey* argKey )
	{
		cfbam::CFBamRelationBuff* cur = NULL;
		cfbam::CFBamRelationBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalNarrowedTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalNarrowedIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamRelationBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelation()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelation( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationTable::deleteRelationByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteRelationByIdIdx( Authorization, &key );
	}

	void CFBamRamRelationTable::deleteRelationByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamRelationBuff* cur = NULL;
		cfbam::CFBamRelationBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelation()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelation( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamRelationTable::deleteRelationByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteRelationByTenantIdx( Authorization, &key );
	}

	void CFBamRamRelationTable::deleteRelationByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamRelationBuff* cur = NULL;
		cfbam::CFBamRelationBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamRelationBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRelation()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRelation( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamRelationTable::releasePreparedStatements() {
	}

}
