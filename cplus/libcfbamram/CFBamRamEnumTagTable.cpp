
// Description: C++18 Implementation for an in-memory RAM DbIO for EnumTag.

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

	const std::string CFBamRamEnumTagTable::CLASS_NAME( "CFBamRamEnumTagTable" );

	CFBamRamEnumTagTable::CFBamRamEnumTagTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamEnumTagTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>();
		dictByEnumTagTenantIdx = new std::map<cfbam::CFBamEnumTagByEnumTagTenantIdxKey,
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>*>();
		dictByEnumIdx = new std::map<cfbam::CFBamEnumTagByEnumIdxKey,
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>*>();
		dictByDefSchemaIdx = new std::map<cfbam::CFBamEnumTagByDefSchemaIdxKey,
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>*>();
		dictByEnumNameIdx = new std::map<cfbam::CFBamEnumTagByEnumNameIdxKey, cfbam::CFBamEnumTagBuff*>();
		dictByPrevIdx = new std::map<cfbam::CFBamEnumTagByPrevIdxKey,
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>*>();
		dictByNextIdx = new std::map<cfbam::CFBamEnumTagByNextIdxKey,
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>*>();
	}

	CFBamRamEnumTagTable::~CFBamRamEnumTagTable() {
		if( dictByEnumTagTenantIdx != NULL ) {
			for( auto iterDict = dictByEnumTagTenantIdx->begin(); iterDict != dictByEnumTagTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByEnumTagTenantIdx;
			dictByEnumTagTenantIdx = NULL;
		}
		if( dictByEnumIdx != NULL ) {
			for( auto iterDict = dictByEnumIdx->begin(); iterDict != dictByEnumIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByEnumIdx;
			dictByEnumIdx = NULL;
		}
		if( dictByDefSchemaIdx != NULL ) {
			for( auto iterDict = dictByDefSchemaIdx->begin(); iterDict != dictByDefSchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDefSchemaIdx;
			dictByDefSchemaIdx = NULL;
		}
		if( dictByEnumNameIdx != NULL ) {
			delete dictByEnumNameIdx;
			dictByEnumNameIdx = NULL;
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
			cfbam::CFBamEnumTagBuff* elt;
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfbam::CFBamEnumTagPKey,
					cfbam::CFBamEnumTagBuff*>::iterator cur = dictByPKey->begin();
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

	cfbam::CFBamEnumTagBuff* CFBamRamEnumTagTable::createEnumTag( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamEnumTagBuff* Buff )
	{
		static const std::string S_ProcName( "createEnumTag" );
			cfbam::CFBamEnumTagBuff* tail = NULL;

			std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> siblings = schema->getTableEnumTag()->readDerivedByEnumIdx( Authorization,
				Buff->getRequiredTenantId(),
				Buff->getRequiredEnumId() );
			std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterSiblings = siblings.begin();
			std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator endSiblings = siblings.end();
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
		
		cfbam::CFBamEnumTagPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( dynamic_cast<CFBamRamTenantTable*>( schema->getTableTenant() )->nextEnumTagIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfbam::CFBamEnumTagByEnumTagTenantIdxKey keyEnumTagTenantIdx;
		keyEnumTagTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamEnumTagByEnumIdxKey keyEnumIdx;
		keyEnumIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyEnumIdx.setRequiredEnumId( Buff->getRequiredEnumId() );
		cfbam::CFBamEnumTagByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamEnumTagByEnumNameIdxKey keyEnumNameIdx;
		keyEnumNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyEnumNameIdx.setRequiredEnumId( Buff->getRequiredEnumId() );
		keyEnumNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamEnumTagByPrevIdxKey keyPrevIdx;
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
		cfbam::CFBamEnumTagByNextIdxKey keyNextIdx;
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

		auto searchDictByEnumNameIdx = dictByEnumNameIdx->find( keyEnumNameIdx );
		if( searchDictByEnumNameIdx != dictByEnumNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index EnumTagEnumNameIdx " + keyEnumNameIdx.toString() );
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
				cfbam::CFBamEnumDefBuff* chk = dynamic_cast<cfbam::CFBamEnumDefBuff*>( schema->getTableEnumDef()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredEnumId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship EnumDef to table EnumDef" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamEnumTagBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>* subdictEnumTagTenantIdx;
		auto searchDictByEnumTagTenantIdx = dictByEnumTagTenantIdx->find( keyEnumTagTenantIdx );
		if( searchDictByEnumTagTenantIdx != dictByEnumTagTenantIdx->end() ) {
			subdictEnumTagTenantIdx = searchDictByEnumTagTenantIdx->second;
		}
		else {
			subdictEnumTagTenantIdx = new std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>();
			dictByEnumTagTenantIdx->insert( std::map<cfbam::CFBamEnumTagByEnumTagTenantIdxKey,
				std::map<cfbam::CFBamEnumTagPKey,
					cfbam::CFBamEnumTagBuff*>*>::value_type( keyEnumTagTenantIdx, subdictEnumTagTenantIdx ) );
		}
		subdictEnumTagTenantIdx->insert( std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>* subdictEnumIdx;
		auto searchDictByEnumIdx = dictByEnumIdx->find( keyEnumIdx );
		if( searchDictByEnumIdx != dictByEnumIdx->end() ) {
			subdictEnumIdx = searchDictByEnumIdx->second;
		}
		else {
			subdictEnumIdx = new std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>();
			dictByEnumIdx->insert( std::map<cfbam::CFBamEnumTagByEnumIdxKey,
				std::map<cfbam::CFBamEnumTagPKey,
					cfbam::CFBamEnumTagBuff*>*>::value_type( keyEnumIdx, subdictEnumIdx ) );
		}
		subdictEnumIdx->insert( std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>* subdictDefSchemaIdx;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
		}
		else {
			subdictDefSchemaIdx = new std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamEnumTagByDefSchemaIdxKey,
				std::map<cfbam::CFBamEnumTagPKey,
					cfbam::CFBamEnumTagBuff*>*>::value_type( keyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>::value_type( pkey, buff ) );

		dictByEnumNameIdx->insert( std::map<cfbam::CFBamEnumTagByEnumNameIdxKey, cfbam::CFBamEnumTagBuff*>::value_type( keyEnumNameIdx, buff ) );

		std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>* subdictPrevIdx;
		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			subdictPrevIdx = searchDictByPrevIdx->second;
		}
		else {
			subdictPrevIdx = new std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamEnumTagByPrevIdxKey,
				std::map<cfbam::CFBamEnumTagPKey,
					cfbam::CFBamEnumTagBuff*>*>::value_type( keyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>* subdictNextIdx;
		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			subdictNextIdx = searchDictByNextIdx->second;
		}
		else {
			subdictNextIdx = new std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamEnumTagByNextIdxKey,
				std::map<cfbam::CFBamEnumTagPKey,
					cfbam::CFBamEnumTagBuff*>*>::value_type( keyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>::value_type( pkey, buff ) );

		if( tail != NULL ) {
			tail = schema->getTableEnumTag()->readDerivedByIdIdx( Authorization,
				buff->getOptionalPrevTenantIdValue(),
				buff->getOptionalPrevIdValue() );
			cfbam::CFBamEnumTagBuff* tailEdit = new cfbam::CFBamEnumTagBuff();
			*tailEdit = *dynamic_cast<cfbam::CFBamEnumTagBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
			tailEdit = schema->getTableEnumTag()->updateEnumTag( Authorization, tailEdit );
			delete tail;
			tail = NULL;
			delete tailEdit;
			tailEdit = NULL;
		}
		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamEnumTagBuff* CFBamRamEnumTagTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamEnumTagPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamEnumTagBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamEnumTagBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamEnumTagBuff* CFBamRamEnumTagTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamEnumTagPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamEnumTagBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamEnumTagBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> CFBamRamEnumTagTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> retVec;
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamEnumTagBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamEnumTagBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> CFBamRamEnumTagTable::readDerivedByEnumTagTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByEnumTagTenantIdx" );
		cfbam::CFBamEnumTagByEnumTagTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> recVec;
		cfbam::CFBamEnumTagBuff* clone;
		auto searchDictByEnumTagTenantIdx = dictByEnumTagTenantIdx->find( key );
		if( searchDictByEnumTagTenantIdx != dictByEnumTagTenantIdx->end() ) {
			std::map<cfbam::CFBamEnumTagPKey,
				 cfbam::CFBamEnumTagBuff*>* subdictEnumTagTenantIdx = searchDictByEnumTagTenantIdx->second;
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>::iterator iter = subdictEnumTagTenantIdx->begin();
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>::iterator end = subdictEnumTagTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamEnumTagBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> CFBamRamEnumTagTable::readDerivedByEnumIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t EnumId )
	{
		static const std::string S_ProcName( "readDerivedByEnumIdx" );
		cfbam::CFBamEnumTagByEnumIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredEnumId( EnumId );
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> recVec;
		cfbam::CFBamEnumTagBuff* clone;
		auto searchDictByEnumIdx = dictByEnumIdx->find( key );
		if( searchDictByEnumIdx != dictByEnumIdx->end() ) {
			std::map<cfbam::CFBamEnumTagPKey,
				 cfbam::CFBamEnumTagBuff*>* subdictEnumIdx = searchDictByEnumIdx->second;
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>::iterator iter = subdictEnumIdx->begin();
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>::iterator end = subdictEnumIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamEnumTagBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> CFBamRamEnumTagTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		cfbam::CFBamEnumTagByDefSchemaIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> recVec;
		cfbam::CFBamEnumTagBuff* clone;
		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( key );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamEnumTagPKey,
				 cfbam::CFBamEnumTagBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>::iterator iter = subdictDefSchemaIdx->begin();
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>::iterator end = subdictDefSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamEnumTagBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamEnumTagBuff* CFBamRamEnumTagTable::readDerivedByEnumNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t EnumId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByEnumNameIdx" );
		cfbam::CFBamEnumTagByEnumNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredEnumId( EnumId );
		key.setRequiredName( Name );
		cfbam::CFBamEnumTagBuff* buff;
		auto searchDictByEnumNameIdx = dictByEnumNameIdx->find( key );
		if( searchDictByEnumNameIdx != dictByEnumNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamEnumTagBuff*>( searchDictByEnumNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> CFBamRamEnumTagTable::readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByPrevIdx" );
		cfbam::CFBamEnumTagByPrevIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> recVec;
		cfbam::CFBamEnumTagBuff* clone;
		auto searchDictByPrevIdx = dictByPrevIdx->find( key );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamEnumTagPKey,
				 cfbam::CFBamEnumTagBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>::iterator iter = subdictPrevIdx->begin();
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>::iterator end = subdictPrevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamEnumTagBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> CFBamRamEnumTagTable::readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByNextIdx" );
		cfbam::CFBamEnumTagByNextIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> recVec;
		cfbam::CFBamEnumTagBuff* clone;
		auto searchDictByNextIdx = dictByNextIdx->find( key );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamEnumTagPKey,
				 cfbam::CFBamEnumTagBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>::iterator iter = subdictNextIdx->begin();
			std::map<cfbam::CFBamEnumTagPKey,
				cfbam::CFBamEnumTagBuff*>::iterator end = subdictNextIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamEnumTagBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamEnumTagBuff* CFBamRamEnumTagTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamEnumTagPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamEnumTagBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamEnumTagBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamEnumTagBuff* CFBamRamEnumTagTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamEnumTagPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamEnumTagBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff ) );
	}

	cfbam::CFBamEnumTagBuff* CFBamRamEnumTagTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamEnumTagPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamEnumTagBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> CFBamRamEnumTagTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamEnumTagBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamEnumTagBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamEnumTagBuff* CFBamRamEnumTagTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamEnumTagBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> CFBamRamEnumTagTable::readBuffByEnumTagTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByEnumTagTenantIdx" );
		cfbam::CFBamEnumTagBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> buffList = readDerivedByEnumTagTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamEnumTagBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> CFBamRamEnumTagTable::readBuffByEnumIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t EnumId )
	{
		static const std::string S_ProcName( "readBuffByEnumIdx" );
		cfbam::CFBamEnumTagBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> buffList = readDerivedByEnumIdx( Authorization,
			TenantId,
			EnumId );
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamEnumTagBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> CFBamRamEnumTagTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamEnumTagBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamEnumTagBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamEnumTagBuff* CFBamRamEnumTagTable::readBuffByEnumNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t EnumId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByEnumNameIdx" );
		cfbam::CFBamEnumTagBuff* buff = readDerivedByEnumNameIdx( Authorization,
			TenantId,
			EnumId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> CFBamRamEnumTagTable::readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByPrevIdx" );
		cfbam::CFBamEnumTagBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> buffList = readDerivedByPrevIdx( Authorization,
			PrevTenantId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamEnumTagBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> CFBamRamEnumTagTable::readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByNextIdx" );
		cfbam::CFBamEnumTagBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> buffList = readDerivedByNextIdx( Authorization,
			NextTenantId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamEnumTagBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamEnumTagBuff* CFBamRamEnumTagTable::moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		static const std::string S_ProcName( "moveBuffUp" );
		static const std::string S_CouldNotLocateObject( "Could not locate object" );
		static const std::string S_CouldNotLocateObjectPrev( "Could not locate object.prev" );
		static const std::string S_CouldNotLocateObjectGrandPrev( "Could not locate object.prev.prev" );
		static const std::string S_CouldNotLocateObjectNext( "Could not locate object.next" );

		cfbam::CFBamEnumTagBuff* grandprev = NULL;
		cfbam::CFBamEnumTagBuff* prev = NULL;
		cfbam::CFBamEnumTagBuff* cur = NULL;
		cfbam::CFBamEnumTagBuff* next = NULL;

		cur = schema->getTableEnumTag()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalPrevTenantIdNull() )
			&& ( cur->isOptionalPrevIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur ) );
		}

		prev = schema->getTableEnumTag()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
		if( prev == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectPrev );
		}

		if( ( ! prev->isOptionalPrevTenantIdNull() )
			&& ( ! prev->isOptionalPrevIdNull() ) ) {
			grandprev = schema->getTableEnumTag()->readDerivedByIdIdx(Authorization, prev->getOptionalPrevTenantIdValue(), prev->getOptionalPrevIdValue() );
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
			next = schema->getTableEnumTag()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
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
		cfbam::CFBamEnumTagBuff* editPrev = NULL;
		cfbam::CFBamEnumTagBuff* editCur = NULL;
		cfbam::CFBamEnumTagBuff* editGrandprev = NULL;
		cfbam::CFBamEnumTagBuff* editNext = NULL;
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
			if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
				editGrandprev = schema->getTableEnumTag()->updateEnumTag( Authorization, dynamic_cast<cfbam::CFBamEnumTagBuff*>( grandprev ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
		}

		classCode = editPrev->getClassCode();
			if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
				editPrev = schema->getTableEnumTag()->updateEnumTag( Authorization, prev );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}

		classCode = editCur->getClassCode();
			if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
				editCur = schema->getTableEnumTag()->updateEnumTag( Authorization, cur );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( next != NULL ) {
			classCode = next->getClassCode();
			if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
				editNext = schema->getTableEnumTag()->updateEnumTag( Authorization, next );
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

		return( dynamic_cast<cfbam::CFBamEnumTagBuff*>( editCur ) );
	}

	cfbam::CFBamEnumTagBuff* CFBamRamEnumTagTable::moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		const static std::string S_ProcName( "moveBuffDown" );
		const static std::string S_CouldNotLocateObject( "Could not locate object" );
		const static std::string S_CouldNotLocateObjectDotNext( "Could not locate object.next" );
		const static std::string S_CouldNotLocateObjectDotNextDotNext( "Could not locate object.next.next" );
		const static std::string S_CouldNotLocateObjectDotPrev( "Could not locate object.prev" );

		cfbam::CFBamEnumTagBuff* prev = NULL;
		cfbam::CFBamEnumTagBuff* cur = NULL;
		cfbam::CFBamEnumTagBuff* next = NULL;
		cfbam::CFBamEnumTagBuff* grandnext = NULL;

		cur = schema->getTableEnumTag()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalNextTenantIdNull() )
			&& ( cur->isOptionalNextIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur ) );
		}

		next = schema->getTableEnumTag()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
		if( next == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectDotNext );
		}

		if( ( ! next->isOptionalNextTenantIdNull()  )
			&& ( ! next->isOptionalNextIdNull() ) ) {
			grandnext = schema->getTableEnumTag()->readDerivedByIdIdx(Authorization, next->getOptionalNextTenantIdValue(), next->getOptionalNextIdValue() );
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
			prev = schema->getTableEnumTag()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
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
		cfbam::CFBamEnumTagBuff* editCur = NULL;
		cfbam::CFBamEnumTagBuff* editNext = NULL;
		cfbam::CFBamEnumTagBuff* editGrandnext = NULL;
		cfbam::CFBamEnumTagBuff* editPrev = NULL;

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
			if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
				editPrev = schema->getTableEnumTag()->updateEnumTag( Authorization, prev );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}
		}

		classCode = cur->getClassCode();
			if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
				editCur = schema->getTableEnumTag()->updateEnumTag( Authorization, cur );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		classCode = editNext->getClassCode();
			if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
				editNext = schema->getTableEnumTag()->updateEnumTag( Authorization, next );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( editGrandnext != NULL ) {
			classCode = editGrandnext->getClassCode();
			if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
				editGrandnext = schema->getTableEnumTag()->updateEnumTag( Authorization, dynamic_cast<cfbam::CFBamEnumTagBuff*>( editGrandnext ) );
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

		return( dynamic_cast<cfbam::CFBamEnumTagBuff*>( editCur ) );
	}

	cfbam::CFBamEnumTagBuff* CFBamRamEnumTagTable::updateEnumTag( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamEnumTagBuff* Buff )
	{
		static const std::string S_ProcName( "updateEnumTag" );
		cfbam::CFBamEnumTagPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in EnumTag for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamEnumTagBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for EnumTag primary key " );
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
		cfbam::CFBamEnumTagByEnumTagTenantIdxKey existingKeyEnumTagTenantIdx;
		existingKeyEnumTagTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamEnumTagByEnumTagTenantIdxKey newKeyEnumTagTenantIdx;
		newKeyEnumTagTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamEnumTagByEnumIdxKey existingKeyEnumIdx;
		existingKeyEnumIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyEnumIdx.setRequiredEnumId( existing->getRequiredEnumId() );
		cfbam::CFBamEnumTagByEnumIdxKey newKeyEnumIdx;
		newKeyEnumIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyEnumIdx.setRequiredEnumId( Buff->getRequiredEnumId() );
		cfbam::CFBamEnumTagByDefSchemaIdxKey existingKeyDefSchemaIdx;
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
		cfbam::CFBamEnumTagByDefSchemaIdxKey newKeyDefSchemaIdx;
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
		cfbam::CFBamEnumTagByEnumNameIdxKey existingKeyEnumNameIdx;
		existingKeyEnumNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyEnumNameIdx.setRequiredEnumId( existing->getRequiredEnumId() );
		existingKeyEnumNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamEnumTagByEnumNameIdxKey newKeyEnumNameIdx;
		newKeyEnumNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyEnumNameIdx.setRequiredEnumId( Buff->getRequiredEnumId() );
		newKeyEnumNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamEnumTagByPrevIdxKey existingKeyPrevIdx;
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
		cfbam::CFBamEnumTagByPrevIdxKey newKeyPrevIdx;
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
		cfbam::CFBamEnumTagByNextIdxKey existingKeyNextIdx;
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
		cfbam::CFBamEnumTagByNextIdxKey newKeyNextIdx;
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

		if( existingKeyEnumNameIdx != newKeyEnumNameIdx ) {
			auto searchDictByEnumNameIdx = dictByEnumNameIdx->find( newKeyEnumNameIdx );
			if( searchDictByEnumNameIdx != dictByEnumNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index EnumTagEnumNameIdx " + newKeyEnumNameIdx.toString() );
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
				cfbam::CFBamEnumDefBuff* chk = dynamic_cast<cfbam::CFBamEnumDefBuff*>( schema->getTableEnumDef()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredEnumId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship EnumDef to table EnumDef" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfbam::CFBamEnumTagBuff" );
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

		dictByPKey->insert( std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamEnumTagPKey,
			 cfbam::CFBamEnumTagBuff*>* subdictEnumTagTenantIdx;
		auto searchDictByEnumTagTenantIdx = dictByEnumTagTenantIdx->find( existingKeyEnumTagTenantIdx );
		if( searchDictByEnumTagTenantIdx != dictByEnumTagTenantIdx->end() ) {
			subdictEnumTagTenantIdx = searchDictByEnumTagTenantIdx->second;
			auto searchSubDict = subdictEnumTagTenantIdx->find( pkey );
			if( searchSubDict != subdictEnumTagTenantIdx->end() ) {
				subdictEnumTagTenantIdx->erase( searchSubDict );
			}
			if( subdictEnumTagTenantIdx->size() <= 0 ) {
				delete subdictEnumTagTenantIdx;
				dictByEnumTagTenantIdx->erase( searchDictByEnumTagTenantIdx );
			}
			subdictEnumTagTenantIdx = NULL;
		}
		auto searchNewKeyDictByEnumTagTenantIdx = dictByEnumTagTenantIdx->find( newKeyEnumTagTenantIdx );
		if( searchNewKeyDictByEnumTagTenantIdx != dictByEnumTagTenantIdx->end() ) {
			subdictEnumTagTenantIdx = searchNewKeyDictByEnumTagTenantIdx->second;
		}
		else {
			subdictEnumTagTenantIdx = new std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>();
			dictByEnumTagTenantIdx->insert( std::map<cfbam::CFBamEnumTagByEnumTagTenantIdxKey,
				std::map<cfbam::CFBamEnumTagPKey,
					cfbam::CFBamEnumTagBuff*>*>::value_type( newKeyEnumTagTenantIdx, subdictEnumTagTenantIdx ) );
		}
		subdictEnumTagTenantIdx->insert( std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamEnumTagPKey,
			 cfbam::CFBamEnumTagBuff*>* subdictEnumIdx;
		auto searchDictByEnumIdx = dictByEnumIdx->find( existingKeyEnumIdx );
		if( searchDictByEnumIdx != dictByEnumIdx->end() ) {
			subdictEnumIdx = searchDictByEnumIdx->second;
			auto searchSubDict = subdictEnumIdx->find( pkey );
			if( searchSubDict != subdictEnumIdx->end() ) {
				subdictEnumIdx->erase( searchSubDict );
			}
			if( subdictEnumIdx->size() <= 0 ) {
				delete subdictEnumIdx;
				dictByEnumIdx->erase( searchDictByEnumIdx );
			}
			subdictEnumIdx = NULL;
		}
		auto searchNewKeyDictByEnumIdx = dictByEnumIdx->find( newKeyEnumIdx );
		if( searchNewKeyDictByEnumIdx != dictByEnumIdx->end() ) {
			subdictEnumIdx = searchNewKeyDictByEnumIdx->second;
		}
		else {
			subdictEnumIdx = new std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>();
			dictByEnumIdx->insert( std::map<cfbam::CFBamEnumTagByEnumIdxKey,
				std::map<cfbam::CFBamEnumTagPKey,
					cfbam::CFBamEnumTagBuff*>*>::value_type( newKeyEnumIdx, subdictEnumIdx ) );
		}
		subdictEnumIdx->insert( std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamEnumTagPKey,
			 cfbam::CFBamEnumTagBuff*>* subdictDefSchemaIdx;
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
			subdictDefSchemaIdx = new std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>();
			dictByDefSchemaIdx->insert( std::map<cfbam::CFBamEnumTagByDefSchemaIdxKey,
				std::map<cfbam::CFBamEnumTagPKey,
					cfbam::CFBamEnumTagBuff*>*>::value_type( newKeyDefSchemaIdx, subdictDefSchemaIdx ) );
		}
		subdictDefSchemaIdx->insert( std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>::value_type( pkey, existing ) );

		auto removalDictByEnumNameIdx = dictByEnumNameIdx->find( existingKeyEnumNameIdx );
		if( removalDictByEnumNameIdx != dictByEnumNameIdx->end() ) {
			dictByEnumNameIdx->erase( removalDictByEnumNameIdx );
		}
		dictByEnumNameIdx->insert( std::map<cfbam::CFBamEnumTagByEnumNameIdxKey, cfbam::CFBamEnumTagBuff*>::value_type( newKeyEnumNameIdx, existing ) );

		std::map<cfbam::CFBamEnumTagPKey,
			 cfbam::CFBamEnumTagBuff*>* subdictPrevIdx;
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
			subdictPrevIdx = new std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamEnumTagByPrevIdxKey,
				std::map<cfbam::CFBamEnumTagPKey,
					cfbam::CFBamEnumTagBuff*>*>::value_type( newKeyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamEnumTagPKey,
			 cfbam::CFBamEnumTagBuff*>* subdictNextIdx;
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
			subdictNextIdx = new std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamEnumTagByNextIdxKey,
				std::map<cfbam::CFBamEnumTagPKey,
					cfbam::CFBamEnumTagBuff*>*>::value_type( newKeyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamEnumTagBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamEnumTagBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamEnumTagTable::deleteEnumTag( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamEnumTagBuff* Buff )
	{
		static const std::string S_ProcName( "deleteEnumTag" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamEnumTagPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamEnumTagBuff* existing = searchExisting->second;

		const int64_t* prevTenantId = existing->getOptionalPrevTenantIdReference();
		const int64_t* prevId = existing->getOptionalPrevIdReference();
		const int64_t* nextTenantId = existing->getOptionalNextTenantIdReference();
		const int64_t* nextId = existing->getOptionalNextIdReference();

		cfbam::CFBamEnumTagBuff* prev = NULL;
		cfbam::CFBamEnumTagBuff* editPrev = NULL;
		if( ( prevTenantId != NULL )
			&& ( prevId != NULL ) ) {
			prev = schema->getTableEnumTag()->readDerivedByIdIdx( Authorization,
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
			if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
				editPrev = schema->getTableEnumTag()->updateEnumTag( Authorization, prev );
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

		cfbam::CFBamEnumTagBuff* next = NULL;
		cfbam::CFBamEnumTagBuff* editNext = NULL;
		if( ( nextTenantId != NULL )
			&& ( nextId != NULL ) ) {
			next = schema->getTableEnumTag()->readDerivedByIdIdx( Authorization,
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
			if( classCode == cfbam::CFBamEnumTagBuff::CLASS_CODE ) {
				editNext = schema->getTableEnumTag()->updateEnumTag( Authorization, next );
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

		cfbam::CFBamEnumTagByEnumTagTenantIdxKey keyEnumTagTenantIdx;
		keyEnumTagTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamEnumTagByEnumIdxKey keyEnumIdx;
		keyEnumIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyEnumIdx.setRequiredEnumId( existing->getRequiredEnumId() );
		cfbam::CFBamEnumTagByDefSchemaIdxKey keyDefSchemaIdx;
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
		cfbam::CFBamEnumTagByEnumNameIdxKey keyEnumNameIdx;
		keyEnumNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyEnumNameIdx.setRequiredEnumId( existing->getRequiredEnumId() );
		keyEnumNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamEnumTagByPrevIdxKey keyPrevIdx;
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
		cfbam::CFBamEnumTagByNextIdxKey keyNextIdx;
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
		std::map<cfbam::CFBamEnumTagPKey, cfbam::CFBamEnumTagBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByEnumTagTenantIdx = dictByEnumTagTenantIdx->find( keyEnumTagTenantIdx );
		if( searchDictByEnumTagTenantIdx != dictByEnumTagTenantIdx->end() ) {
			std::map<cfbam::CFBamEnumTagPKey,
				 cfbam::CFBamEnumTagBuff*>* subdictEnumTagTenantIdx = searchDictByEnumTagTenantIdx->second;
			auto searchSubDict = subdictEnumTagTenantIdx->find( pkey );
			if( searchSubDict != subdictEnumTagTenantIdx->end() ) {
				subdictEnumTagTenantIdx->erase( searchSubDict );
			}
			subdictEnumTagTenantIdx = NULL;
		}

		auto searchDictByEnumIdx = dictByEnumIdx->find( keyEnumIdx );
		if( searchDictByEnumIdx != dictByEnumIdx->end() ) {
			std::map<cfbam::CFBamEnumTagPKey,
				 cfbam::CFBamEnumTagBuff*>* subdictEnumIdx = searchDictByEnumIdx->second;
			auto searchSubDict = subdictEnumIdx->find( pkey );
			if( searchSubDict != subdictEnumIdx->end() ) {
				subdictEnumIdx->erase( searchSubDict );
			}
			subdictEnumIdx = NULL;
		}

		auto searchDictByDefSchemaIdx = dictByDefSchemaIdx->find( keyDefSchemaIdx );
		if( searchDictByDefSchemaIdx != dictByDefSchemaIdx->end() ) {
			std::map<cfbam::CFBamEnumTagPKey,
				 cfbam::CFBamEnumTagBuff*>* subdictDefSchemaIdx = searchDictByDefSchemaIdx->second;
			auto searchSubDict = subdictDefSchemaIdx->find( pkey );
			if( searchSubDict != subdictDefSchemaIdx->end() ) {
				subdictDefSchemaIdx->erase( searchSubDict );
			}
			subdictDefSchemaIdx = NULL;
		}

		auto searchDictByEnumNameIdx = dictByEnumNameIdx->find( keyEnumNameIdx );
		if( searchDictByEnumNameIdx != dictByEnumNameIdx->end() ) {
			dictByEnumNameIdx->erase( searchDictByEnumNameIdx );
		}

		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamEnumTagPKey,
				 cfbam::CFBamEnumTagBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			auto searchSubDict = subdictPrevIdx->find( pkey );
			if( searchSubDict != subdictPrevIdx->end() ) {
				subdictPrevIdx->erase( searchSubDict );
			}
			subdictPrevIdx = NULL;
		}

		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamEnumTagPKey,
				 cfbam::CFBamEnumTagBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			auto searchSubDict = subdictNextIdx->find( pkey );
			if( searchSubDict != subdictNextIdx->end() ) {
				subdictNextIdx->erase( searchSubDict );
			}
			subdictNextIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFBamRamEnumTagTable::deleteEnumTagByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamEnumTagPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteEnumTagByIdIdx( Authorization, &key );
	}

	void CFBamRamEnumTagTable::deleteEnumTagByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamEnumTagPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamEnumTagBuff* cur = NULL;
		cfbam::CFBamEnumTagBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> matchSet;
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableEnumTag()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteEnumTag( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamEnumTagTable::deleteEnumTagByEnumTagTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamEnumTagByEnumTagTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteEnumTagByEnumTagTenantIdx( Authorization, &key );
	}

	void CFBamRamEnumTagTable::deleteEnumTagByEnumTagTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamEnumTagByEnumTagTenantIdxKey* argKey )
	{
		cfbam::CFBamEnumTagBuff* cur = NULL;
		cfbam::CFBamEnumTagBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> matchSet;
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableEnumTag()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteEnumTag( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamEnumTagTable::deleteEnumTagByEnumIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argEnumId )
	{
		cfbam::CFBamEnumTagByEnumIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredEnumId( argEnumId );
		deleteEnumTagByEnumIdx( Authorization, &key );
	}

	void CFBamRamEnumTagTable::deleteEnumTagByEnumIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamEnumTagByEnumIdxKey* argKey )
	{
		cfbam::CFBamEnumTagBuff* cur = NULL;
		cfbam::CFBamEnumTagBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> matchSet;
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableEnumTag()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteEnumTag( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamEnumTagTable::deleteEnumTagByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId )
	{
		cfbam::CFBamEnumTagByDefSchemaIdxKey key;
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
		deleteEnumTagByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamEnumTagTable::deleteEnumTagByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamEnumTagByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamEnumTagBuff* cur = NULL;
		cfbam::CFBamEnumTagBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> matchSet;
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableEnumTag()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteEnumTag( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamEnumTagTable::deleteEnumTagByEnumNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argEnumId,
			const std::string& argName )
	{
		cfbam::CFBamEnumTagByEnumNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredEnumId( argEnumId );
		key.setRequiredName( argName );
		deleteEnumTagByEnumNameIdx( Authorization, &key );
	}

	void CFBamRamEnumTagTable::deleteEnumTagByEnumNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamEnumTagByEnumNameIdxKey* argKey )
	{
		cfbam::CFBamEnumTagBuff* cur = NULL;
		cfbam::CFBamEnumTagBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> matchSet;
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableEnumTag()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteEnumTag( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamEnumTagTable::deleteEnumTagByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId )
	{
		cfbam::CFBamEnumTagByPrevIdxKey key;
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
		deleteEnumTagByPrevIdx( Authorization, &key );
	}

	void CFBamRamEnumTagTable::deleteEnumTagByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamEnumTagByPrevIdxKey* argKey )
	{
		cfbam::CFBamEnumTagBuff* cur = NULL;
		cfbam::CFBamEnumTagBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> matchSet;
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableEnumTag()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteEnumTag( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamEnumTagTable::deleteEnumTagByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId )
	{
		cfbam::CFBamEnumTagByNextIdxKey key;
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
		deleteEnumTagByNextIdx( Authorization, &key );
	}

	void CFBamRamEnumTagTable::deleteEnumTagByNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamEnumTagByNextIdxKey* argKey )
	{
		cfbam::CFBamEnumTagBuff* cur = NULL;
		cfbam::CFBamEnumTagBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> matchSet;
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamEnumTagPKey,
			cfbam::CFBamEnumTagBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamEnumTagBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableEnumTag()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteEnumTag( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamEnumTagTable::releasePreparedStatements() {
	}

}
