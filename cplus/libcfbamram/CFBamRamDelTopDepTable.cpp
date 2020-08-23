
// Description: C++18 Implementation for an in-memory RAM DbIO for DelTopDep.

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

	const std::string CFBamRamDelTopDepTable::CLASS_NAME( "CFBamRamDelTopDepTable" );

	CFBamRamDelTopDepTable::CFBamRamDelTopDepTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamDelTopDepTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>();
		dictByDelTopDepTblIdx = new std::map<cfbam::CFBamDelTopDepByDelTopDepTblIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelTopDepBuff*>*>();
		dictByUNameIdx = new std::map<cfbam::CFBamDelTopDepByUNameIdxKey, cfbam::CFBamDelTopDepBuff*>();
		dictByPrevIdx = new std::map<cfbam::CFBamDelTopDepByPrevIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelTopDepBuff*>*>();
		dictByNextIdx = new std::map<cfbam::CFBamDelTopDepByNextIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelTopDepBuff*>*>();
	}

	CFBamRamDelTopDepTable::~CFBamRamDelTopDepTable() {
		if( dictByDelTopDepTblIdx != NULL ) {
			for( auto iterDict = dictByDelTopDepTblIdx->begin(); iterDict != dictByDelTopDepTblIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDelTopDepTblIdx;
			dictByDelTopDepTblIdx = NULL;
		}
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
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

	cfbam::CFBamDelTopDepBuff* CFBamRamDelTopDepTable::createDelTopDep( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamDelTopDepBuff* Buff )
	{
		static const std::string S_ProcName( "createDelTopDep" );
		cfbam::CFBamDelTopDepBuff* tail = NULL;
		if( Buff->getClassCode() == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
			std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> siblings = schema->getTableDelTopDep()->readDerivedByDelTopDepTblIdx( Authorization,
				Buff->getRequiredTableTenantId(),
				Buff->getRequiredTableId() );
			std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterSiblings = siblings.begin();
			std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator endSiblings = siblings.end();
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
		cfbam::CFBamDelTopDepByDelTopDepTblIdxKey keyDelTopDepTblIdx;
		keyDelTopDepTblIdx.setRequiredTableTenantId( Buff->getRequiredTableTenantId() );
		keyDelTopDepTblIdx.setRequiredTableId( Buff->getRequiredTableId() );
		cfbam::CFBamDelTopDepByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTableTenantId( Buff->getRequiredTableTenantId() );
		keyUNameIdx.setRequiredTableId( Buff->getRequiredTableId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamDelTopDepByPrevIdxKey keyPrevIdx;
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
		cfbam::CFBamDelTopDepByNextIdxKey keyNextIdx;
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
			std::string Msg( "Duplicate key detected for index DelTopDepUNameIdx " + keyUNameIdx.toString() );
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
						Buff->getRequiredTableTenantId(),
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

		// Proceed with adding the new record
		cfbam::CFBamDelTopDepBuff* buff = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( schema->getTableDelDep()->createDelDep( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>* subdictDelTopDepTblIdx;
		auto searchDictByDelTopDepTblIdx = dictByDelTopDepTblIdx->find( keyDelTopDepTblIdx );
		if( searchDictByDelTopDepTblIdx != dictByDelTopDepTblIdx->end() ) {
			subdictDelTopDepTblIdx = searchDictByDelTopDepTblIdx->second;
		}
		else {
			subdictDelTopDepTblIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>();
			dictByDelTopDepTblIdx->insert( std::map<cfbam::CFBamDelTopDepByDelTopDepTblIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamDelTopDepBuff*>*>::value_type( keyDelTopDepTblIdx, subdictDelTopDepTblIdx ) );
		}
		subdictDelTopDepTblIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamDelTopDepByUNameIdxKey, cfbam::CFBamDelTopDepBuff*>::value_type( keyUNameIdx, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>* subdictPrevIdx;
		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			subdictPrevIdx = searchDictByPrevIdx->second;
		}
		else {
			subdictPrevIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamDelTopDepByPrevIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamDelTopDepBuff*>*>::value_type( keyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>* subdictNextIdx;
		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			subdictNextIdx = searchDictByNextIdx->second;
		}
		else {
			subdictNextIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamDelTopDepByNextIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamDelTopDepBuff*>*>::value_type( keyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>::value_type( pkey, buff ) );

		if( tail != NULL ) {
			tail = schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
				buff->getOptionalPrevTenantIdValue(),
				buff->getOptionalPrevIdValue() );
			const classcode_t tailClassCode = tail->getClassCode();
			if( tailClassCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				cfbam::CFBamDelTopDepBuff* tailEdit = new cfbam::CFBamDelTopDepBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamDelTopDepBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( schema->getTableDelTopDep()->updateDelTopDep( Authorization, tailEdit ) );
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
		if( buff->getClassCode() == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamDelTopDepBuff* CFBamRamDelTopDepTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamDelTopDepBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamDelTopDepBuff* CFBamRamDelTopDepTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamDelTopDepBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamDelTopDepBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamDelTopDepBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> buffList = schema->getTableDelDep()->readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		cfbam::CFBamDelDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamDelTopDepBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readDerivedByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readDerivedByDelDepIdx" );
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*> buffList = schema->getTableDelDep()->readDerivedByDelDepIdx( Authorization,
			RelationTenantId,
			RelationId );
		cfbam::CFBamDelDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamDelTopDepBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readDerivedByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readDerivedByDelTopDepTblIdx" );
		cfbam::CFBamDelTopDepByDelTopDepTblIdxKey key;
		key.setRequiredTableTenantId( TableTenantId );
		key.setRequiredTableId( TableId );
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> recVec;
		cfbam::CFBamDelTopDepBuff* clone;
		auto searchDictByDelTopDepTblIdx = dictByDelTopDepTblIdx->find( key );
		if( searchDictByDelTopDepTblIdx != dictByDelTopDepTblIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamDelTopDepBuff*>* subdictDelTopDepTblIdx = searchDictByDelTopDepTblIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelTopDepBuff*>::iterator iter = subdictDelTopDepTblIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelTopDepBuff*>::iterator end = subdictDelTopDepTblIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamDelTopDepBuff* CFBamRamDelTopDepTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamDelTopDepByUNameIdxKey key;
		key.setRequiredTableTenantId( TableTenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::CFBamDelTopDepBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByPrevIdx" );
		cfbam::CFBamDelTopDepByPrevIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> recVec;
		cfbam::CFBamDelTopDepBuff* clone;
		auto searchDictByPrevIdx = dictByPrevIdx->find( key );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamDelTopDepBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelTopDepBuff*>::iterator iter = subdictPrevIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelTopDepBuff*>::iterator end = subdictPrevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByNextIdx" );
		cfbam::CFBamDelTopDepByNextIdxKey key;
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
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> recVec;
		cfbam::CFBamDelTopDepBuff* clone;
		auto searchDictByNextIdx = dictByNextIdx->find( key );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamDelTopDepBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelTopDepBuff*>::iterator iter = subdictNextIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelTopDepBuff*>::iterator end = subdictNextIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamDelTopDepBuff* CFBamRamDelTopDepTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamDelTopDepBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamDelTopDepBuff* CFBamRamDelTopDepTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamDelTopDepBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff ) );
	}

	cfbam::CFBamDelTopDepBuff* CFBamRamDelTopDepTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamDelTopDepBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamDelTopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamDelTopDepBuff* CFBamRamDelTopDepTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamDelTopDepBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamDelTopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamDelTopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readBuffByDelDepIdx" );
		cfbam::CFBamDelTopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> buffList = readDerivedByDelDepIdx( Authorization,
			RelationTenantId,
			RelationId );
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readBuffByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readBuffByDelTopDepTblIdx" );
		cfbam::CFBamDelTopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> buffList = readDerivedByDelTopDepTblIdx( Authorization,
			TableTenantId,
			TableId );
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamDelTopDepBuff* CFBamRamDelTopDepTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamDelTopDepBuff* buff = readDerivedByUNameIdx( Authorization,
			TableTenantId,
			TableId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByPrevIdx" );
		cfbam::CFBamDelTopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> buffList = readDerivedByPrevIdx( Authorization,
			PrevTenantId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByNextIdx" );
		cfbam::CFBamDelTopDepBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> buffList = readDerivedByNextIdx( Authorization,
			NextTenantId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDefSchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::pageBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDelDepIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::pageBuffByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByDelTopDepTblIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::pageBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByPrevIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> CFBamRamDelTopDepTable::pageBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByNextIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamDelTopDepBuff* CFBamRamDelTopDepTable::moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		static const std::string S_ProcName( "moveBuffUp" );
		static const std::string S_CouldNotLocateObject( "Could not locate object" );
		static const std::string S_CouldNotLocateObjectPrev( "Could not locate object.prev" );
		static const std::string S_CouldNotLocateObjectGrandPrev( "Could not locate object.prev.prev" );
		static const std::string S_CouldNotLocateObjectNext( "Could not locate object.next" );

		cfbam::CFBamDelTopDepBuff* grandprev = NULL;
		cfbam::CFBamDelTopDepBuff* prev = NULL;
		cfbam::CFBamDelTopDepBuff* cur = NULL;
		cfbam::CFBamDelTopDepBuff* next = NULL;

		cur = schema->getTableDelTopDep()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalPrevTenantIdNull() )
			&& ( cur->isOptionalPrevIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur ) );
		}

		prev = schema->getTableDelTopDep()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
		if( prev == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectPrev );
		}

		if( ( ! prev->isOptionalPrevTenantIdNull() )
			&& ( ! prev->isOptionalPrevIdNull() ) ) {
			grandprev = schema->getTableDelTopDep()->readDerivedByIdIdx(Authorization, prev->getOptionalPrevTenantIdValue(), prev->getOptionalPrevIdValue() );
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
			next = schema->getTableDelTopDep()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
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
		cfbam::CFBamDelTopDepBuff* editPrev = NULL;
		cfbam::CFBamDelTopDepBuff* editCur = NULL;
		cfbam::CFBamDelTopDepBuff* editGrandprev = NULL;
		cfbam::CFBamDelTopDepBuff* editNext = NULL;
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
			if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				editGrandprev = schema->getTableDelTopDep()->updateDelTopDep( Authorization, dynamic_cast<cfbam::CFBamDelTopDepBuff*>( grandprev ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
		}

		classCode = editPrev->getClassCode();
			if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				editPrev = schema->getTableDelTopDep()->updateDelTopDep( Authorization, prev );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}

		classCode = editCur->getClassCode();
			if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				editCur = schema->getTableDelTopDep()->updateDelTopDep( Authorization, cur );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( next != NULL ) {
			classCode = next->getClassCode();
			if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				editNext = schema->getTableDelTopDep()->updateDelTopDep( Authorization, next );
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

		return( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( editCur ) );
	}

	cfbam::CFBamDelTopDepBuff* CFBamRamDelTopDepTable::moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
		int32_t revision )
	{
		const static std::string S_ProcName( "moveBuffDown" );
		const static std::string S_CouldNotLocateObject( "Could not locate object" );
		const static std::string S_CouldNotLocateObjectDotNext( "Could not locate object.next" );
		const static std::string S_CouldNotLocateObjectDotNextDotNext( "Could not locate object.next.next" );
		const static std::string S_CouldNotLocateObjectDotPrev( "Could not locate object.prev" );

		cfbam::CFBamDelTopDepBuff* prev = NULL;
		cfbam::CFBamDelTopDepBuff* cur = NULL;
		cfbam::CFBamDelTopDepBuff* next = NULL;
		cfbam::CFBamDelTopDepBuff* grandnext = NULL;

		cur = schema->getTableDelTopDep()->readDerivedByIdIdx(Authorization, TenantId, Id);
		if( cur == NULL ) {
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObject );
		}

		if( ( cur->isOptionalNextTenantIdNull() )
			&& ( cur->isOptionalNextIdNull() ) ) {
			return( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur ) );
		}

		next = schema->getTableDelTopDep()->readDerivedByIdIdx(Authorization, cur->getOptionalNextTenantIdValue(), cur->getOptionalNextIdValue() );
		if( next == NULL ) {
			delete cur;
			cur = NULL;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateObjectDotNext );
		}

		if( ( ! next->isOptionalNextTenantIdNull()  )
			&& ( ! next->isOptionalNextIdNull() ) ) {
			grandnext = schema->getTableDelTopDep()->readDerivedByIdIdx(Authorization, next->getOptionalNextTenantIdValue(), next->getOptionalNextIdValue() );
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
			prev = schema->getTableDelTopDep()->readDerivedByIdIdx(Authorization, cur->getOptionalPrevTenantIdValue(), cur->getOptionalPrevIdValue() );
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
		cfbam::CFBamDelTopDepBuff* editCur = NULL;
		cfbam::CFBamDelTopDepBuff* editNext = NULL;
		cfbam::CFBamDelTopDepBuff* editGrandnext = NULL;
		cfbam::CFBamDelTopDepBuff* editPrev = NULL;

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
			if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				editPrev = schema->getTableDelTopDep()->updateDelTopDep( Authorization, prev );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg  );
			}
		}

		classCode = cur->getClassCode();
			if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				editCur = schema->getTableDelTopDep()->updateDelTopDep( Authorization, cur );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		classCode = editNext->getClassCode();
			if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				editNext = schema->getTableDelTopDep()->updateDelTopDep( Authorization, next );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

		if( editGrandnext != NULL ) {
			classCode = editGrandnext->getClassCode();
			if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				editGrandnext = schema->getTableDelTopDep()->updateDelTopDep( Authorization, dynamic_cast<cfbam::CFBamDelTopDepBuff*>( editGrandnext ) );
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

		return( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( editCur ) );
	}

	cfbam::CFBamDelTopDepBuff* CFBamRamDelTopDepTable::updateDelTopDep( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamDelTopDepBuff* Buff )
	{
		static const std::string S_ProcName( "updateDelTopDep" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in DelTopDep for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamDelTopDepBuff* existing = searchExisting->second;

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
		cfbam::CFBamDelTopDepByDelTopDepTblIdxKey existingKeyDelTopDepTblIdx;
		existingKeyDelTopDepTblIdx.setRequiredTableTenantId( existing->getRequiredTableTenantId() );
		existingKeyDelTopDepTblIdx.setRequiredTableId( existing->getRequiredTableId() );
		cfbam::CFBamDelTopDepByDelTopDepTblIdxKey newKeyDelTopDepTblIdx;
		newKeyDelTopDepTblIdx.setRequiredTableTenantId( Buff->getRequiredTableTenantId() );
		newKeyDelTopDepTblIdx.setRequiredTableId( Buff->getRequiredTableId() );
		cfbam::CFBamDelTopDepByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTableTenantId( existing->getRequiredTableTenantId() );
		existingKeyUNameIdx.setRequiredTableId( existing->getRequiredTableId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamDelTopDepByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTableTenantId( Buff->getRequiredTableTenantId() );
		newKeyUNameIdx.setRequiredTableId( Buff->getRequiredTableId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamDelTopDepByPrevIdxKey existingKeyPrevIdx;
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
		cfbam::CFBamDelTopDepByPrevIdxKey newKeyPrevIdx;
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
		cfbam::CFBamDelTopDepByNextIdxKey existingKeyNextIdx;
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
		cfbam::CFBamDelTopDepByNextIdxKey newKeyNextIdx;
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
				std::string Msg( "Duplicate key detected for index DelTopDepUNameIdx " + newKeyUNameIdx.toString() );
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
				cfbam::CFBamTableBuff* chk = dynamic_cast<cfbam::CFBamTableBuff*>( schema->getTableTable()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTableTenantId(),
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

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( schema->getTableDelDep()->updateDelDep( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamDelTopDepBuff*>* subdictDelTopDepTblIdx;
		auto searchDictByDelTopDepTblIdx = dictByDelTopDepTblIdx->find( existingKeyDelTopDepTblIdx );
		if( searchDictByDelTopDepTblIdx != dictByDelTopDepTblIdx->end() ) {
			subdictDelTopDepTblIdx = searchDictByDelTopDepTblIdx->second;
			auto searchSubDict = subdictDelTopDepTblIdx->find( pkey );
			if( searchSubDict != subdictDelTopDepTblIdx->end() ) {
				subdictDelTopDepTblIdx->erase( searchSubDict );
			}
			if( subdictDelTopDepTblIdx->size() <= 0 ) {
				delete subdictDelTopDepTblIdx;
				dictByDelTopDepTblIdx->erase( searchDictByDelTopDepTblIdx );
			}
			subdictDelTopDepTblIdx = NULL;
		}
		auto searchNewKeyDictByDelTopDepTblIdx = dictByDelTopDepTblIdx->find( newKeyDelTopDepTblIdx );
		if( searchNewKeyDictByDelTopDepTblIdx != dictByDelTopDepTblIdx->end() ) {
			subdictDelTopDepTblIdx = searchNewKeyDictByDelTopDepTblIdx->second;
		}
		else {
			subdictDelTopDepTblIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>();
			dictByDelTopDepTblIdx->insert( std::map<cfbam::CFBamDelTopDepByDelTopDepTblIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamDelTopDepBuff*>*>::value_type( newKeyDelTopDepTblIdx, subdictDelTopDepTblIdx ) );
		}
		subdictDelTopDepTblIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamDelTopDepByUNameIdxKey, cfbam::CFBamDelTopDepBuff*>::value_type( newKeyUNameIdx, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamDelTopDepBuff*>* subdictPrevIdx;
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
			subdictPrevIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>();
			dictByPrevIdx->insert( std::map<cfbam::CFBamDelTopDepByPrevIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamDelTopDepBuff*>*>::value_type( newKeyPrevIdx, subdictPrevIdx ) );
		}
		subdictPrevIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamDelTopDepBuff*>* subdictNextIdx;
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
			subdictNextIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>();
			dictByNextIdx->insert( std::map<cfbam::CFBamDelTopDepByNextIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamDelTopDepBuff*>*>::value_type( newKeyNextIdx, subdictNextIdx ) );
		}
		subdictNextIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamDelTopDepBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamDelTopDepBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamDelTopDepTable::deleteDelTopDep( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamDelTopDepBuff* Buff )
	{
		static const std::string S_ProcName( "deleteDelTopDep" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamDelTopDepBuff* existing = searchExisting->second;

		const int64_t* prevTenantId = existing->getOptionalPrevTenantIdReference();
		const int64_t* prevId = existing->getOptionalPrevIdReference();
		const int64_t* nextTenantId = existing->getOptionalNextTenantIdReference();
		const int64_t* nextId = existing->getOptionalNextIdReference();

		cfbam::CFBamDelTopDepBuff* prev = NULL;
		cfbam::CFBamDelTopDepBuff* editPrev = NULL;
		if( ( prevTenantId != NULL )
			&& ( prevId != NULL ) ) {
			prev = schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
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
			if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				editPrev = schema->getTableDelTopDep()->updateDelTopDep( Authorization, prev );
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

		cfbam::CFBamDelTopDepBuff* next = NULL;
		cfbam::CFBamDelTopDepBuff* editNext = NULL;
		if( ( nextTenantId != NULL )
			&& ( nextId != NULL ) ) {
			next = schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
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
			if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
				editNext = schema->getTableDelTopDep()->updateDelTopDep( Authorization, next );
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

		std::TCFLibOwningVector<cfbam::CFBamDelSubDep1Buff*> arrCheckDelDep = schema->getTableDelSubDep1()->readDerivedByDelTopDepIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		if( arrCheckDelDep.size() > 0 ) {
			schema->getTableDelSubDep1()->deleteDelSubDep1ByDelTopDepIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		}
		cfbam::CFBamDelTopDepByDelTopDepTblIdxKey keyDelTopDepTblIdx;
		keyDelTopDepTblIdx.setRequiredTableTenantId( existing->getRequiredTableTenantId() );
		keyDelTopDepTblIdx.setRequiredTableId( existing->getRequiredTableId() );
		cfbam::CFBamDelTopDepByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTableTenantId( existing->getRequiredTableTenantId() );
		keyUNameIdx.setRequiredTableId( existing->getRequiredTableId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamDelTopDepByPrevIdxKey keyPrevIdx;
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
		cfbam::CFBamDelTopDepByNextIdxKey keyNextIdx;
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
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamDelTopDepBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByDelTopDepTblIdx = dictByDelTopDepTblIdx->find( keyDelTopDepTblIdx );
		if( searchDictByDelTopDepTblIdx != dictByDelTopDepTblIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamDelTopDepBuff*>* subdictDelTopDepTblIdx = searchDictByDelTopDepTblIdx->second;
			auto searchSubDict = subdictDelTopDepTblIdx->find( pkey );
			if( searchSubDict != subdictDelTopDepTblIdx->end() ) {
				subdictDelTopDepTblIdx->erase( searchSubDict );
			}
			subdictDelTopDepTblIdx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		auto searchDictByPrevIdx = dictByPrevIdx->find( keyPrevIdx );
		if( searchDictByPrevIdx != dictByPrevIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamDelTopDepBuff*>* subdictPrevIdx = searchDictByPrevIdx->second;
			auto searchSubDict = subdictPrevIdx->find( pkey );
			if( searchSubDict != subdictPrevIdx->end() ) {
				subdictPrevIdx->erase( searchSubDict );
			}
			subdictPrevIdx = NULL;
		}

		auto searchDictByNextIdx = dictByNextIdx->find( keyNextIdx );
		if( searchDictByNextIdx != dictByNextIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamDelTopDepBuff*>* subdictNextIdx = searchDictByNextIdx->second;
			auto searchSubDict = subdictNextIdx->find( pkey );
			if( searchSubDict != subdictNextIdx->end() ) {
				subdictNextIdx->erase( searchSubDict );
			}
			subdictNextIdx = NULL;
		}

		schema->getTableDelDep()->deleteDelDep( Authorization,
			Buff );
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTableTenantId,
			const int64_t argTableId )
	{
		cfbam::CFBamDelTopDepByDelTopDepTblIdxKey key;
		key.setRequiredTableTenantId( argTableTenantId );
		key.setRequiredTableId( argTableId );
		deleteDelTopDepByDelTopDepTblIdx( Authorization, &key );
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey* argKey )
	{
		cfbam::CFBamDelTopDepBuff* cur = NULL;
		cfbam::CFBamDelTopDepBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelTopDep( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTableTenantId,
			const int64_t argTableId,
			const std::string& argName )
	{
		cfbam::CFBamDelTopDepByUNameIdxKey key;
		key.setRequiredTableTenantId( argTableTenantId );
		key.setRequiredTableId( argTableId );
		key.setRequiredName( argName );
		deleteDelTopDepByUNameIdx( Authorization, &key );
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamDelTopDepByUNameIdxKey* argKey )
	{
		cfbam::CFBamDelTopDepBuff* cur = NULL;
		cfbam::CFBamDelTopDepBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelTopDep( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId )
	{
		cfbam::CFBamDelTopDepByPrevIdxKey key;
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
		deleteDelTopDepByPrevIdx( Authorization, &key );
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamDelTopDepByPrevIdxKey* argKey )
	{
		cfbam::CFBamDelTopDepBuff* cur = NULL;
		cfbam::CFBamDelTopDepBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelTopDep( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId )
	{
		cfbam::CFBamDelTopDepByNextIdxKey key;
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
		deleteDelTopDepByNextIdx( Authorization, &key );
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamDelTopDepByNextIdxKey* argKey )
	{
		cfbam::CFBamDelTopDepBuff* cur = NULL;
		cfbam::CFBamDelTopDepBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelTopDep( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteDelTopDepByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamDelDepByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamDelTopDepBuff* cur = NULL;
		cfbam::CFBamDelTopDepBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamDelDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelTopDep( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId )
	{
		cfbam::CFBamDelDepByDelDepIdxKey key;
		key.setRequiredRelationTenantId( argRelationTenantId );
		key.setRequiredRelationId( argRelationId );
		deleteDelTopDepByDelDepIdx( Authorization, &key );
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamDelDepByDelDepIdxKey* argKey )
	{
		cfbam::CFBamDelTopDepBuff* cur = NULL;
		cfbam::CFBamDelTopDepBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamDelDepBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelTopDep( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteDelTopDepByIdIdx( Authorization, &key );
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamDelTopDepBuff* cur = NULL;
		cfbam::CFBamDelTopDepBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelTopDep( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteDelTopDepByTenantIdx( Authorization, &key );
	}

	void CFBamRamDelTopDepTable::deleteDelTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamDelTopDepBuff* cur = NULL;
		cfbam::CFBamDelTopDepBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamDelTopDepBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDelTopDep()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDelTopDep( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamDelTopDepTable::releasePreparedStatements() {
	}

}
