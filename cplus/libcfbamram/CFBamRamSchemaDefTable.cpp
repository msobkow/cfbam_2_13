
// Description: C++18 Implementation for an in-memory RAM DbIO for SchemaDef.

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

	const std::string CFBamRamSchemaDefTable::CLASS_NAME( "CFBamRamSchemaDefTable" );

	CFBamRamSchemaDefTable::CFBamRamSchemaDefTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamSchemaDefTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>();
		dictByCTenantIdx = new std::map<cfbam::CFBamSchemaDefByCTenantIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>*>();
		dictByMinorVersionIdx = new std::map<cfbam::CFBamSchemaDefByMinorVersionIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>*>();
		dictByUNameIdx = new std::map<cfbam::CFBamSchemaDefByUNameIdxKey, cfbam::CFBamSchemaDefBuff*>();
		dictByAuthEMailIdx = new std::map<cfbam::CFBamSchemaDefByAuthEMailIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>*>();
		dictByProjectURLIdx = new std::map<cfbam::CFBamSchemaDefByProjectURLIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>*>();
		dictByPubURIIdx = new std::map<cfbam::CFBamSchemaDefByPubURIIdxKey, cfbam::CFBamSchemaDefBuff*>();
	}

	CFBamRamSchemaDefTable::~CFBamRamSchemaDefTable() {
		if( dictByCTenantIdx != NULL ) {
			for( auto iterDict = dictByCTenantIdx->begin(); iterDict != dictByCTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByCTenantIdx;
			dictByCTenantIdx = NULL;
		}
		if( dictByMinorVersionIdx != NULL ) {
			for( auto iterDict = dictByMinorVersionIdx->begin(); iterDict != dictByMinorVersionIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByMinorVersionIdx;
			dictByMinorVersionIdx = NULL;
		}
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByAuthEMailIdx != NULL ) {
			for( auto iterDict = dictByAuthEMailIdx->begin(); iterDict != dictByAuthEMailIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByAuthEMailIdx;
			dictByAuthEMailIdx = NULL;
		}
		if( dictByProjectURLIdx != NULL ) {
			for( auto iterDict = dictByProjectURLIdx->begin(); iterDict != dictByProjectURLIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByProjectURLIdx;
			dictByProjectURLIdx = NULL;
		}
		if( dictByPubURIIdx != NULL ) {
			delete dictByPubURIIdx;
			dictByPubURIIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::createSchemaDef( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamSchemaDefBuff* Buff )
	{
		static const std::string S_ProcName( "createSchemaDef" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamSchemaDefByCTenantIdxKey keyCTenantIdx;
		keyCTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamSchemaDefByMinorVersionIdxKey keyMinorVersionIdx;
		keyMinorVersionIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyMinorVersionIdx.setRequiredMinorVersionId( Buff->getRequiredMinorVersionId() );
		cfbam::CFBamSchemaDefByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUNameIdx.setRequiredMinorVersionId( Buff->getRequiredMinorVersionId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamSchemaDefByAuthEMailIdxKey keyAuthEMailIdx;
		keyAuthEMailIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyAuthEMailIdx.setRequiredAuthorEMail( Buff->getRequiredAuthorEMail() );
		cfbam::CFBamSchemaDefByProjectURLIdxKey keyProjectURLIdx;
		keyProjectURLIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyProjectURLIdx.setRequiredProjectURL( Buff->getRequiredProjectURL() );
		cfbam::CFBamSchemaDefByPubURIIdxKey keyPubURIIdx;
		keyPubURIIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyPubURIIdx.setRequiredPublishURI( Buff->getRequiredPublishURI() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index SchemaDefUNameIdx " + keyUNameIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		auto searchDictByPubURIIdx = dictByPubURIIdx->find( keyPubURIIdx );
		if( searchDictByPubURIIdx != dictByPubURIIdx->end() ) {
			std::string Msg( "Duplicate key detected for index SchemaPublishURIIdx " + keyPubURIIdx.toString() );
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
				cfint::CFIntMinorVersionBuff* chk = dynamic_cast<cfint::CFIntMinorVersionBuff*>( schema->getTableMinorVersion()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredMinorVersionId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship MinorVersion to table MinorVersion" );
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
					std::string Msg( "Could not resolve Owner relationship CTenant to table Tenant" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamSchemaDefBuff* buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( schema->getTableScope()->createScope( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>* subdictCTenantIdx;
		auto searchDictByCTenantIdx = dictByCTenantIdx->find( keyCTenantIdx );
		if( searchDictByCTenantIdx != dictByCTenantIdx->end() ) {
			subdictCTenantIdx = searchDictByCTenantIdx->second;
		}
		else {
			subdictCTenantIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>();
			dictByCTenantIdx->insert( std::map<cfbam::CFBamSchemaDefByCTenantIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaDefBuff*>*>::value_type( keyCTenantIdx, subdictCTenantIdx ) );
		}
		subdictCTenantIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>* subdictMinorVersionIdx;
		auto searchDictByMinorVersionIdx = dictByMinorVersionIdx->find( keyMinorVersionIdx );
		if( searchDictByMinorVersionIdx != dictByMinorVersionIdx->end() ) {
			subdictMinorVersionIdx = searchDictByMinorVersionIdx->second;
		}
		else {
			subdictMinorVersionIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>();
			dictByMinorVersionIdx->insert( std::map<cfbam::CFBamSchemaDefByMinorVersionIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaDefBuff*>*>::value_type( keyMinorVersionIdx, subdictMinorVersionIdx ) );
		}
		subdictMinorVersionIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfbam::CFBamSchemaDefByUNameIdxKey, cfbam::CFBamSchemaDefBuff*>::value_type( keyUNameIdx, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>* subdictAuthEMailIdx;
		auto searchDictByAuthEMailIdx = dictByAuthEMailIdx->find( keyAuthEMailIdx );
		if( searchDictByAuthEMailIdx != dictByAuthEMailIdx->end() ) {
			subdictAuthEMailIdx = searchDictByAuthEMailIdx->second;
		}
		else {
			subdictAuthEMailIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>();
			dictByAuthEMailIdx->insert( std::map<cfbam::CFBamSchemaDefByAuthEMailIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaDefBuff*>*>::value_type( keyAuthEMailIdx, subdictAuthEMailIdx ) );
		}
		subdictAuthEMailIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>* subdictProjectURLIdx;
		auto searchDictByProjectURLIdx = dictByProjectURLIdx->find( keyProjectURLIdx );
		if( searchDictByProjectURLIdx != dictByProjectURLIdx->end() ) {
			subdictProjectURLIdx = searchDictByProjectURLIdx->second;
		}
		else {
			subdictProjectURLIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>();
			dictByProjectURLIdx->insert( std::map<cfbam::CFBamSchemaDefByProjectURLIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaDefBuff*>*>::value_type( keyProjectURLIdx, subdictProjectURLIdx ) );
		}
		subdictProjectURLIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>::value_type( pkey, buff ) );

		dictByPubURIIdx->insert( std::map<cfbam::CFBamSchemaDefByPubURIIdxKey, cfbam::CFBamSchemaDefBuff*>::value_type( keyPubURIIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamSchemaDefBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamSchemaDefBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> retVec;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamSchemaDefBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = schema->getTableScope()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfbam::CFBamScopeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamScopeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::readDerivedByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByCTenantIdx" );
		cfbam::CFBamSchemaDefByCTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> recVec;
		cfbam::CFBamSchemaDefBuff* clone;
		auto searchDictByCTenantIdx = dictByCTenantIdx->find( key );
		if( searchDictByCTenantIdx != dictByCTenantIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaDefBuff*>* subdictCTenantIdx = searchDictByCTenantIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>::iterator iter = subdictCTenantIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>::iterator end = subdictCTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::readDerivedByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId )
	{
		static const std::string S_ProcName( "readDerivedByMinorVersionIdx" );
		cfbam::CFBamSchemaDefByMinorVersionIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMinorVersionId( MinorVersionId );
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> recVec;
		cfbam::CFBamSchemaDefBuff* clone;
		auto searchDictByMinorVersionIdx = dictByMinorVersionIdx->find( key );
		if( searchDictByMinorVersionIdx != dictByMinorVersionIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaDefBuff*>* subdictMinorVersionIdx = searchDictByMinorVersionIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>::iterator iter = subdictMinorVersionIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>::iterator end = subdictMinorVersionIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamSchemaDefByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredMinorVersionId( MinorVersionId );
		key.setRequiredName( Name );
		cfbam::CFBamSchemaDefBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::readDerivedByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& AuthorEMail )
	{
		static const std::string S_ProcName( "readDerivedByAuthEMailIdx" );
		cfbam::CFBamSchemaDefByAuthEMailIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredAuthorEMail( AuthorEMail );
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> recVec;
		cfbam::CFBamSchemaDefBuff* clone;
		auto searchDictByAuthEMailIdx = dictByAuthEMailIdx->find( key );
		if( searchDictByAuthEMailIdx != dictByAuthEMailIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaDefBuff*>* subdictAuthEMailIdx = searchDictByAuthEMailIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>::iterator iter = subdictAuthEMailIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>::iterator end = subdictAuthEMailIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::readDerivedByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& ProjectURL )
	{
		static const std::string S_ProcName( "readDerivedByProjectURLIdx" );
		cfbam::CFBamSchemaDefByProjectURLIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredProjectURL( ProjectURL );
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> recVec;
		cfbam::CFBamSchemaDefBuff* clone;
		auto searchDictByProjectURLIdx = dictByProjectURLIdx->find( key );
		if( searchDictByProjectURLIdx != dictByProjectURLIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaDefBuff*>* subdictProjectURLIdx = searchDictByProjectURLIdx->second;
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>::iterator iter = subdictProjectURLIdx->begin();
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>::iterator end = subdictProjectURLIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::readDerivedByPubURIIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& PublishURI )
	{
		static const std::string S_ProcName( "readDerivedByPubURIIdx" );
		cfbam::CFBamSchemaDefByPubURIIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredPublishURI( PublishURI );
		cfbam::CFBamSchemaDefBuff* buff;
		auto searchDictByPubURIIdx = dictByPubURIIdx->find( key );
		if( searchDictByPubURIIdx != dictByPubURIIdx->end() ) {
			buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( searchDictByPubURIIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamSchemaDefBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamSchemaDefBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff ) );
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamSchemaDefBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamSchemaDefBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamSchemaDefBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfbam::CFBamSchemaDefBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamScopeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::readBuffByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByCTenantIdx" );
		cfbam::CFBamSchemaDefBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> buffList = readDerivedByCTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::readBuffByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId )
	{
		static const std::string S_ProcName( "readBuffByMinorVersionIdx" );
		cfbam::CFBamSchemaDefBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> buffList = readDerivedByMinorVersionIdx( Authorization,
			TenantId,
			MinorVersionId );
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamSchemaDefBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			MinorVersionId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::readBuffByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& AuthorEMail )
	{
		static const std::string S_ProcName( "readBuffByAuthEMailIdx" );
		cfbam::CFBamSchemaDefBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> buffList = readDerivedByAuthEMailIdx( Authorization,
			TenantId,
			AuthorEMail );
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::readBuffByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& ProjectURL )
	{
		static const std::string S_ProcName( "readBuffByProjectURLIdx" );
		cfbam::CFBamSchemaDefBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> buffList = readDerivedByProjectURLIdx( Authorization,
			TenantId,
			ProjectURL );
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::readBuffByPubURIIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& PublishURI )
	{
		static const std::string S_ProcName( "readBuffByPubURIIdx" );
		cfbam::CFBamSchemaDefBuff* buff = readDerivedByPubURIIdx( Authorization,
			TenantId,
			PublishURI );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfbam::CFBamSchemaDefBuff* buff = readBuffByUNameIdx( Authorization,
			TenantId,
			MinorVersionId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfbam::CFBamSchemaDefBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			MinorVersionId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::pageBuffByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByCTenantIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::pageBuffByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByMinorVersionIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::pageBuffByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& AuthorEMail,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByAuthEMailIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> CFBamRamSchemaDefTable::pageBuffByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& ProjectURL,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByProjectURLIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamSchemaDefBuff* CFBamRamSchemaDefTable::updateSchemaDef( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamSchemaDefBuff* Buff )
	{
		static const std::string S_ProcName( "updateSchemaDef" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in SchemaDef for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamSchemaDefBuff* existing = searchExisting->second;

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
		cfbam::CFBamSchemaDefByCTenantIdxKey existingKeyCTenantIdx;
		existingKeyCTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamSchemaDefByCTenantIdxKey newKeyCTenantIdx;
		newKeyCTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfbam::CFBamSchemaDefByMinorVersionIdxKey existingKeyMinorVersionIdx;
		existingKeyMinorVersionIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyMinorVersionIdx.setRequiredMinorVersionId( existing->getRequiredMinorVersionId() );
		cfbam::CFBamSchemaDefByMinorVersionIdxKey newKeyMinorVersionIdx;
		newKeyMinorVersionIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyMinorVersionIdx.setRequiredMinorVersionId( Buff->getRequiredMinorVersionId() );
		cfbam::CFBamSchemaDefByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUNameIdx.setRequiredMinorVersionId( existing->getRequiredMinorVersionId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamSchemaDefByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUNameIdx.setRequiredMinorVersionId( Buff->getRequiredMinorVersionId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		cfbam::CFBamSchemaDefByAuthEMailIdxKey existingKeyAuthEMailIdx;
		existingKeyAuthEMailIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyAuthEMailIdx.setRequiredAuthorEMail( existing->getRequiredAuthorEMail() );
		cfbam::CFBamSchemaDefByAuthEMailIdxKey newKeyAuthEMailIdx;
		newKeyAuthEMailIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyAuthEMailIdx.setRequiredAuthorEMail( Buff->getRequiredAuthorEMail() );
		cfbam::CFBamSchemaDefByProjectURLIdxKey existingKeyProjectURLIdx;
		existingKeyProjectURLIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyProjectURLIdx.setRequiredProjectURL( existing->getRequiredProjectURL() );
		cfbam::CFBamSchemaDefByProjectURLIdxKey newKeyProjectURLIdx;
		newKeyProjectURLIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyProjectURLIdx.setRequiredProjectURL( Buff->getRequiredProjectURL() );
		cfbam::CFBamSchemaDefByPubURIIdxKey existingKeyPubURIIdx;
		existingKeyPubURIIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyPubURIIdx.setRequiredPublishURI( existing->getRequiredPublishURI() );
		cfbam::CFBamSchemaDefByPubURIIdxKey newKeyPubURIIdx;
		newKeyPubURIIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyPubURIIdx.setRequiredPublishURI( Buff->getRequiredPublishURI() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SchemaDefUNameIdx " + newKeyUNameIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		if( existingKeyPubURIIdx != newKeyPubURIIdx ) {
			auto searchDictByPubURIIdx = dictByPubURIIdx->find( newKeyPubURIIdx );
			if( searchDictByPubURIIdx != dictByPubURIIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SchemaPublishURIIdx " + newKeyPubURIIdx.toString() );
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
				cfint::CFIntMinorVersionBuff* chk = dynamic_cast<cfint::CFIntMinorVersionBuff*>( schema->getTableMinorVersion()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredMinorVersionId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship MinorVersion to table MinorVersion" );
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
					std::string Msg( "Could not resolve Owner relationship CTenant to table Tenant" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( schema->getTableScope()->updateScope( Authorization,
			Buff ) );
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamSchemaDefBuff*>* subdictCTenantIdx;
		auto searchDictByCTenantIdx = dictByCTenantIdx->find( existingKeyCTenantIdx );
		if( searchDictByCTenantIdx != dictByCTenantIdx->end() ) {
			subdictCTenantIdx = searchDictByCTenantIdx->second;
			auto searchSubDict = subdictCTenantIdx->find( pkey );
			if( searchSubDict != subdictCTenantIdx->end() ) {
				subdictCTenantIdx->erase( searchSubDict );
			}
			if( subdictCTenantIdx->size() <= 0 ) {
				delete subdictCTenantIdx;
				dictByCTenantIdx->erase( searchDictByCTenantIdx );
			}
			subdictCTenantIdx = NULL;
		}
		auto searchNewKeyDictByCTenantIdx = dictByCTenantIdx->find( newKeyCTenantIdx );
		if( searchNewKeyDictByCTenantIdx != dictByCTenantIdx->end() ) {
			subdictCTenantIdx = searchNewKeyDictByCTenantIdx->second;
		}
		else {
			subdictCTenantIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>();
			dictByCTenantIdx->insert( std::map<cfbam::CFBamSchemaDefByCTenantIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaDefBuff*>*>::value_type( newKeyCTenantIdx, subdictCTenantIdx ) );
		}
		subdictCTenantIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamSchemaDefBuff*>* subdictMinorVersionIdx;
		auto searchDictByMinorVersionIdx = dictByMinorVersionIdx->find( existingKeyMinorVersionIdx );
		if( searchDictByMinorVersionIdx != dictByMinorVersionIdx->end() ) {
			subdictMinorVersionIdx = searchDictByMinorVersionIdx->second;
			auto searchSubDict = subdictMinorVersionIdx->find( pkey );
			if( searchSubDict != subdictMinorVersionIdx->end() ) {
				subdictMinorVersionIdx->erase( searchSubDict );
			}
			if( subdictMinorVersionIdx->size() <= 0 ) {
				delete subdictMinorVersionIdx;
				dictByMinorVersionIdx->erase( searchDictByMinorVersionIdx );
			}
			subdictMinorVersionIdx = NULL;
		}
		auto searchNewKeyDictByMinorVersionIdx = dictByMinorVersionIdx->find( newKeyMinorVersionIdx );
		if( searchNewKeyDictByMinorVersionIdx != dictByMinorVersionIdx->end() ) {
			subdictMinorVersionIdx = searchNewKeyDictByMinorVersionIdx->second;
		}
		else {
			subdictMinorVersionIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>();
			dictByMinorVersionIdx->insert( std::map<cfbam::CFBamSchemaDefByMinorVersionIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaDefBuff*>*>::value_type( newKeyMinorVersionIdx, subdictMinorVersionIdx ) );
		}
		subdictMinorVersionIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfbam::CFBamSchemaDefByUNameIdxKey, cfbam::CFBamSchemaDefBuff*>::value_type( newKeyUNameIdx, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamSchemaDefBuff*>* subdictAuthEMailIdx;
		auto searchDictByAuthEMailIdx = dictByAuthEMailIdx->find( existingKeyAuthEMailIdx );
		if( searchDictByAuthEMailIdx != dictByAuthEMailIdx->end() ) {
			subdictAuthEMailIdx = searchDictByAuthEMailIdx->second;
			auto searchSubDict = subdictAuthEMailIdx->find( pkey );
			if( searchSubDict != subdictAuthEMailIdx->end() ) {
				subdictAuthEMailIdx->erase( searchSubDict );
			}
			if( subdictAuthEMailIdx->size() <= 0 ) {
				delete subdictAuthEMailIdx;
				dictByAuthEMailIdx->erase( searchDictByAuthEMailIdx );
			}
			subdictAuthEMailIdx = NULL;
		}
		auto searchNewKeyDictByAuthEMailIdx = dictByAuthEMailIdx->find( newKeyAuthEMailIdx );
		if( searchNewKeyDictByAuthEMailIdx != dictByAuthEMailIdx->end() ) {
			subdictAuthEMailIdx = searchNewKeyDictByAuthEMailIdx->second;
		}
		else {
			subdictAuthEMailIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>();
			dictByAuthEMailIdx->insert( std::map<cfbam::CFBamSchemaDefByAuthEMailIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaDefBuff*>*>::value_type( newKeyAuthEMailIdx, subdictAuthEMailIdx ) );
		}
		subdictAuthEMailIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamScopePKey,
			 cfbam::CFBamSchemaDefBuff*>* subdictProjectURLIdx;
		auto searchDictByProjectURLIdx = dictByProjectURLIdx->find( existingKeyProjectURLIdx );
		if( searchDictByProjectURLIdx != dictByProjectURLIdx->end() ) {
			subdictProjectURLIdx = searchDictByProjectURLIdx->second;
			auto searchSubDict = subdictProjectURLIdx->find( pkey );
			if( searchSubDict != subdictProjectURLIdx->end() ) {
				subdictProjectURLIdx->erase( searchSubDict );
			}
			if( subdictProjectURLIdx->size() <= 0 ) {
				delete subdictProjectURLIdx;
				dictByProjectURLIdx->erase( searchDictByProjectURLIdx );
			}
			subdictProjectURLIdx = NULL;
		}
		auto searchNewKeyDictByProjectURLIdx = dictByProjectURLIdx->find( newKeyProjectURLIdx );
		if( searchNewKeyDictByProjectURLIdx != dictByProjectURLIdx->end() ) {
			subdictProjectURLIdx = searchNewKeyDictByProjectURLIdx->second;
		}
		else {
			subdictProjectURLIdx = new std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>();
			dictByProjectURLIdx->insert( std::map<cfbam::CFBamSchemaDefByProjectURLIdxKey,
				std::map<cfbam::CFBamScopePKey,
					cfbam::CFBamSchemaDefBuff*>*>::value_type( newKeyProjectURLIdx, subdictProjectURLIdx ) );
		}
		subdictProjectURLIdx->insert( std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>::value_type( pkey, existing ) );

		auto removalDictByPubURIIdx = dictByPubURIIdx->find( existingKeyPubURIIdx );
		if( removalDictByPubURIIdx != dictByPubURIIdx->end() ) {
			dictByPubURIIdx->erase( removalDictByPubURIIdx );
		}
		dictByPubURIIdx->insert( std::map<cfbam::CFBamSchemaDefByPubURIIdxKey, cfbam::CFBamSchemaDefBuff*>::value_type( newKeyPubURIIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamSchemaDefBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamSchemaDefTable::deleteSchemaDef( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamSchemaDefBuff* Buff )
	{
		static const std::string S_ProcName( "deleteSchemaDef" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamSchemaDefBuff* existing = searchExisting->second;
			cfbam::CFBamValueBuff* buffClearTypeReferences;
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*> arrClearTypeReferences = schema->getTableValue()->readDerivedByScopeIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterClearTypeReferences = arrClearTypeReferences.begin();
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endClearTypeReferences = arrClearTypeReferences.end();
			while( iterClearTypeReferences != endClearTypeReferences ) {
				buffClearTypeReferences = *iterClearTypeReferences;
				iterClearTypeReferences ++;
				cfbam::CFBamTableColBuff* buffReferencingTableCols;
				std::TCFLibOwningVector<cfbam::CFBamTableColBuff*> arrReferencingTableCols = schema->getTableTableCol()->readDerivedByDataIdx( Authorization,
				buffClearTypeReferences->getRequiredTenantIdReference(),
				buffClearTypeReferences->getRequiredIdReference() );
				std::TCFLibOwningVector<cfbam::CFBamTableColBuff*>::iterator iterReferencingTableCols = arrReferencingTableCols.begin();
				std::TCFLibOwningVector<cfbam::CFBamTableColBuff*>::iterator endReferencingTableCols = arrReferencingTableCols.end();
				while( iterReferencingTableCols != endReferencingTableCols ) {
					buffReferencingTableCols = *iterReferencingTableCols;
					iterReferencingTableCols ++;
					{
						cfbam::CFBamTableColBuff* editBuff = NULL;
						cfbam::CFBamTableColBuff* buff = schema->getTableTableCol()->readDerivedByIdIdx( Authorization,
							buffReferencingTableCols->getRequiredTenantId(),
							buffReferencingTableCols->getRequiredId() );
						buff->setOptionalDataTenantIdNull();
						buff->setOptionalDataIdNull();
						classCode = buff->getClassCode();
						if( classCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
							editBuff = dynamic_cast<cfbam::CFBamTableColBuff*>( schema->getTableTableCol()->updateTableCol( Authorization, buff ) );
						}
						else {
							if( buff != NULL ) {
								delete buff;
								buff = NULL;
							}
							std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
							throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
								S_ProcName,
								S_Msg );
						}
						if( editBuff != NULL ) {
							delete editBuff;
							editBuff = NULL;
						}
					}
				}
			}
			cfbam::CFBamTableBuff* buffClearTableRelationNarrowed;
			std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrClearTableRelationNarrowed = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
			std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterClearTableRelationNarrowed = arrClearTableRelationNarrowed.begin();
			std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endClearTableRelationNarrowed = arrClearTableRelationNarrowed.end();
			while( iterClearTableRelationNarrowed != endClearTableRelationNarrowed ) {
				buffClearTableRelationNarrowed = *iterClearTableRelationNarrowed;
				iterClearTableRelationNarrowed ++;
				cfbam::CFBamRelationBuff* buffTableRelation;
				std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> arrTableRelation = schema->getTableRelation()->readDerivedByRelTableIdx( Authorization,
				buffClearTableRelationNarrowed->getRequiredTenantId(),
				buffClearTableRelationNarrowed->getRequiredId() );
				std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterTableRelation = arrTableRelation.begin();
				std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endTableRelation = arrTableRelation.end();
				while( iterTableRelation != endTableRelation ) {
					buffTableRelation = *iterTableRelation;
					iterTableRelation ++;
					{
						cfbam::CFBamRelationBuff* editBuff = NULL;
						cfbam::CFBamRelationBuff* buff = schema->getTableRelation()->readDerivedByIdIdx( Authorization,
							buffTableRelation->getRequiredTenantId(),
							buffTableRelation->getRequiredId() );
						buff->setOptionalNarrowedTenantIdNull();
						buff->setOptionalNarrowedIdNull();
						classCode = buff->getClassCode();
						if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
							editBuff = dynamic_cast<cfbam::CFBamRelationBuff*>( schema->getTableRelation()->updateRelation( Authorization, buff ) );
						}
						else {
							if( buff != NULL ) {
								delete buff;
								buff = NULL;
							}
							std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
							throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
								S_ProcName,
								S_Msg );
						}
						if( editBuff != NULL ) {
							delete editBuff;
							editBuff = NULL;
						}
					}
				}
			}
		cfbam::CFBamTableBuff* buffDelTableMethods;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableMethods = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableMethods = arrDelTableMethods.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableMethods = arrDelTableMethods.end();
		while( iterArrDelTableMethods != endArrDelTableMethods ) {
			buffDelTableMethods = *iterArrDelTableMethods;
			iterArrDelTableMethods ++;
			schema->getTableServerMethod()->deleteServerMethodByMethTableIdx( Authorization,
				buffDelTableMethods->getRequiredTenantId(),
				buffDelTableMethods->getRequiredId() );
		}
		cfbam::CFBamTableBuff* buffDelTableDelDep;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableDelDep = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableDelDep = arrDelTableDelDep.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableDelDep = arrDelTableDelDep.end();
		while( iterArrDelTableDelDep != endArrDelTableDelDep ) {
			buffDelTableDelDep = *iterArrDelTableDelDep;
			iterArrDelTableDelDep ++;
			schema->getTableDelTopDep()->deleteDelTopDepByDelTopDepTblIdx( Authorization,
				buffDelTableDelDep->getRequiredTenantId(),
				buffDelTableDelDep->getRequiredId() );
		}
		cfbam::CFBamTableBuff* buffDelTableClearDep;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableClearDep = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableClearDep = arrDelTableClearDep.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableClearDep = arrDelTableClearDep.end();
		while( iterArrDelTableClearDep != endArrDelTableClearDep ) {
			buffDelTableClearDep = *iterArrDelTableClearDep;
			iterArrDelTableClearDep ++;
			schema->getTableClearTopDep()->deleteClearTopDepByClrTopDepTblIdx( Authorization,
				buffDelTableClearDep->getRequiredTenantId(),
				buffDelTableClearDep->getRequiredId() );
		}
		cfbam::CFBamTableBuff* buffDelTableChain;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableChain = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableChain = arrDelTableChain.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableChain = arrDelTableChain.end();
		while( iterArrDelTableChain != endArrDelTableChain ) {
			buffDelTableChain = *iterArrDelTableChain;
			iterArrDelTableChain ++;
			schema->getTableChain()->deleteChainByChainTableIdx( Authorization,
				buffDelTableChain->getRequiredTenantId(),
				buffDelTableChain->getRequiredId() );
		}
		cfbam::CFBamTableBuff* buffDelTableRelationPopDep;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableRelationPopDep = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableRelationPopDep = arrDelTableRelationPopDep.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableRelationPopDep = arrDelTableRelationPopDep.end();
		while( iterArrDelTableRelationPopDep != endArrDelTableRelationPopDep ) {
			buffDelTableRelationPopDep = *iterArrDelTableRelationPopDep;
			iterArrDelTableRelationPopDep ++;
			cfbam::CFBamRelationBuff* buffTableRelation;
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> arrTableRelation = schema->getTableRelation()->readDerivedByRelTableIdx( Authorization,
				buffDelTableRelationPopDep->getRequiredTenantId(),
				buffDelTableRelationPopDep->getRequiredId() );
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterArrTableRelation = arrTableRelation.begin();
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endArrTableRelation = arrTableRelation.end();
			while( iterArrTableRelation != endArrTableRelation ) {
				buffTableRelation = *iterArrTableRelation;
				iterArrTableRelation ++;
			schema->getTablePopTopDep()->deletePopTopDepByContRelIdx( Authorization,
				buffTableRelation->getRequiredTenantId(),
				buffTableRelation->getRequiredId() );
			}
		}
		cfbam::CFBamTableBuff* buffDelTableRelationCol;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableRelationCol = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableRelationCol = arrDelTableRelationCol.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableRelationCol = arrDelTableRelationCol.end();
		while( iterArrDelTableRelationCol != endArrDelTableRelationCol ) {
			buffDelTableRelationCol = *iterArrDelTableRelationCol;
			iterArrDelTableRelationCol ++;
			cfbam::CFBamRelationBuff* buffTableRelation;
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> arrTableRelation = schema->getTableRelation()->readDerivedByRelTableIdx( Authorization,
				buffDelTableRelationCol->getRequiredTenantId(),
				buffDelTableRelationCol->getRequiredId() );
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator iterArrTableRelation = arrTableRelation.begin();
			std::TCFLibOwningVector<cfbam::CFBamRelationBuff*>::iterator endArrTableRelation = arrTableRelation.end();
			while( iterArrTableRelation != endArrTableRelation ) {
				buffTableRelation = *iterArrTableRelation;
				iterArrTableRelation ++;
			schema->getTableRelationCol()->deleteRelationColByRelationIdx( Authorization,
				buffTableRelation->getRequiredTenantId(),
				buffTableRelation->getRequiredId() );
			}
		}
		cfbam::CFBamTableBuff* buffDelTableRelation;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableRelation = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableRelation = arrDelTableRelation.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableRelation = arrDelTableRelation.end();
		while( iterArrDelTableRelation != endArrDelTableRelation ) {
			buffDelTableRelation = *iterArrDelTableRelation;
			iterArrDelTableRelation ++;
			schema->getTableRelation()->deleteRelationByRelTableIdx( Authorization,
				buffDelTableRelation->getRequiredTenantId(),
				buffDelTableRelation->getRequiredId() );
		}
		cfbam::CFBamTableBuff* buffDelTableIndexRefRelFmCol;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableIndexRefRelFmCol = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableIndexRefRelFmCol = arrDelTableIndexRefRelFmCol.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableIndexRefRelFmCol = arrDelTableIndexRefRelFmCol.end();
		while( iterArrDelTableIndexRefRelFmCol != endArrDelTableIndexRefRelFmCol ) {
			buffDelTableIndexRefRelFmCol = *iterArrDelTableIndexRefRelFmCol;
			iterArrDelTableIndexRefRelFmCol ++;
			cfbam::CFBamIndexBuff* buffTableIndex;
			std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> arrTableIndex = schema->getTableIndex()->readDerivedByIdxTableIdx( Authorization,
				buffDelTableIndexRefRelFmCol->getRequiredTenantId(),
				buffDelTableIndexRefRelFmCol->getRequiredId() );
			std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterArrTableIndex = arrTableIndex.begin();
			std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator endArrTableIndex = arrTableIndex.end();
			while( iterArrTableIndex != endArrTableIndex ) {
				buffTableIndex = *iterArrTableIndex;
				iterArrTableIndex ++;
			cfbam::CFBamIndexColBuff* buffColumns;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> arrColumns = schema->getTableIndexCol()->readDerivedByIndexIdx( Authorization,
				buffTableIndex->getRequiredTenantId(),
				buffTableIndex->getRequiredId() );
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterColumns = arrColumns.begin();
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endColumns = arrColumns.end();
			while( iterColumns != endColumns ) {
				buffColumns = *iterColumns;
				iterColumns ++;
			schema->getTableRelationCol()->deleteRelationColByFromColIdx( Authorization,
				buffColumns->getRequiredTenantId(),
				buffColumns->getRequiredId() );
			}
			}
		}
		cfbam::CFBamTableBuff* buffDelTableIndexRefRelToCol;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableIndexRefRelToCol = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableIndexRefRelToCol = arrDelTableIndexRefRelToCol.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableIndexRefRelToCol = arrDelTableIndexRefRelToCol.end();
		while( iterArrDelTableIndexRefRelToCol != endArrDelTableIndexRefRelToCol ) {
			buffDelTableIndexRefRelToCol = *iterArrDelTableIndexRefRelToCol;
			iterArrDelTableIndexRefRelToCol ++;
			cfbam::CFBamIndexBuff* buffTableIndex;
			std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> arrTableIndex = schema->getTableIndex()->readDerivedByIdxTableIdx( Authorization,
				buffDelTableIndexRefRelToCol->getRequiredTenantId(),
				buffDelTableIndexRefRelToCol->getRequiredId() );
			std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterArrTableIndex = arrTableIndex.begin();
			std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator endArrTableIndex = arrTableIndex.end();
			while( iterArrTableIndex != endArrTableIndex ) {
				buffTableIndex = *iterArrTableIndex;
				iterArrTableIndex ++;
			cfbam::CFBamIndexColBuff* buffColumns;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> arrColumns = schema->getTableIndexCol()->readDerivedByIndexIdx( Authorization,
				buffTableIndex->getRequiredTenantId(),
				buffTableIndex->getRequiredId() );
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator iterColumns = arrColumns.begin();
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*>::iterator endColumns = arrColumns.end();
			while( iterColumns != endColumns ) {
				buffColumns = *iterColumns;
				iterColumns ++;
			schema->getTableRelationCol()->deleteRelationColByToColIdx( Authorization,
				buffColumns->getRequiredTenantId(),
				buffColumns->getRequiredId() );
			}
			}
		}
		cfbam::CFBamTableBuff* buffDelTableIndexCols;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableIndexCols = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableIndexCols = arrDelTableIndexCols.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableIndexCols = arrDelTableIndexCols.end();
		while( iterArrDelTableIndexCols != endArrDelTableIndexCols ) {
			buffDelTableIndexCols = *iterArrDelTableIndexCols;
			iterArrDelTableIndexCols ++;
			cfbam::CFBamIndexBuff* buffTableIndex;
			std::TCFLibOwningVector<cfbam::CFBamIndexBuff*> arrTableIndex = schema->getTableIndex()->readDerivedByIdxTableIdx( Authorization,
				buffDelTableIndexCols->getRequiredTenantId(),
				buffDelTableIndexCols->getRequiredId() );
			std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator iterArrTableIndex = arrTableIndex.begin();
			std::TCFLibOwningVector<cfbam::CFBamIndexBuff*>::iterator endArrTableIndex = arrTableIndex.end();
			while( iterArrTableIndex != endArrTableIndex ) {
				buffTableIndex = *iterArrTableIndex;
				iterArrTableIndex ++;
			schema->getTableIndexCol()->deleteIndexColByIndexIdx( Authorization,
				buffTableIndex->getRequiredTenantId(),
				buffTableIndex->getRequiredId() );
			}
		}
		cfbam::CFBamTableBuff* buffDelTableIndexes;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableIndexes = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableIndexes = arrDelTableIndexes.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableIndexes = arrDelTableIndexes.end();
		while( iterArrDelTableIndexes != endArrDelTableIndexes ) {
			buffDelTableIndexes = *iterArrDelTableIndexes;
			iterArrDelTableIndexes ++;
			schema->getTableIndex()->deleteIndexByIdxTableIdx( Authorization,
				buffDelTableIndexes->getRequiredTenantId(),
				buffDelTableIndexes->getRequiredId() );
		}
		cfbam::CFBamTableBuff* buffDelTableRefIndexColumns;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableRefIndexColumns = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableRefIndexColumns = arrDelTableRefIndexColumns.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableRefIndexColumns = arrDelTableRefIndexColumns.end();
		while( iterArrDelTableRefIndexColumns != endArrDelTableRefIndexColumns ) {
			buffDelTableRefIndexColumns = *iterArrDelTableRefIndexColumns;
			iterArrDelTableRefIndexColumns ++;
			cfbam::CFBamValueBuff* buffColumns;
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*> arrColumns = schema->getTableValue()->readDerivedByScopeIdx( Authorization,
				buffDelTableRefIndexColumns->getRequiredTenantId(),
				buffDelTableRefIndexColumns->getRequiredId() );
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterArrColumns = arrColumns.begin();
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endArrColumns = arrColumns.end();
			while( iterArrColumns != endArrColumns ) {
				buffColumns = *iterArrColumns;
				iterArrColumns ++;
			schema->getTableIndexCol()->deleteIndexColByColIdx( Authorization,
				buffColumns->getRequiredTenantId(),
				buffColumns->getRequiredId() );
			}
		}
		cfbam::CFBamTableBuff* buffDelTableColumns;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableColumns = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableColumns = arrDelTableColumns.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableColumns = arrDelTableColumns.end();
		while( iterArrDelTableColumns != endArrDelTableColumns ) {
			buffDelTableColumns = *iterArrDelTableColumns;
			iterArrDelTableColumns ++;
			schema->getTableValue()->deleteValueByScopeIdx( Authorization,
				buffDelTableColumns->getRequiredTenantId(),
				buffDelTableColumns->getRequiredId() );
		}
		cfbam::CFBamTableBuff* buffDelTableDispensedId64Gen;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableDispensedId64Gen = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableDispensedId64Gen = arrDelTableDispensedId64Gen.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableDispensedId64Gen = arrDelTableDispensedId64Gen.end();
		while( iterArrDelTableDispensedId64Gen != endArrDelTableDispensedId64Gen ) {
			buffDelTableDispensedId64Gen = *iterArrDelTableDispensedId64Gen;
			iterArrDelTableDispensedId64Gen ++;
			schema->getTableId64Gen()->deleteId64GenByDispIdx( Authorization,
				buffDelTableDispensedId64Gen->getRequiredTenantIdReference(),
				buffDelTableDispensedId64Gen->getRequiredIdReference() );
		}
		cfbam::CFBamTableBuff* buffDelTableDispensedId32Gen;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableDispensedId32Gen = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableDispensedId32Gen = arrDelTableDispensedId32Gen.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableDispensedId32Gen = arrDelTableDispensedId32Gen.end();
		while( iterArrDelTableDispensedId32Gen != endArrDelTableDispensedId32Gen ) {
			buffDelTableDispensedId32Gen = *iterArrDelTableDispensedId32Gen;
			iterArrDelTableDispensedId32Gen ++;
			schema->getTableId32Gen()->deleteId32GenByDispIdx( Authorization,
				buffDelTableDispensedId32Gen->getRequiredTenantIdReference(),
				buffDelTableDispensedId32Gen->getRequiredIdReference() );
		}
		cfbam::CFBamTableBuff* buffDelTableDispensedId16Gen;
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*> arrDelTableDispensedId16Gen = schema->getTableTable()->readDerivedBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator iterArrDelTableDispensedId16Gen = arrDelTableDispensedId16Gen.begin();
		std::TCFLibOwningVector<cfbam::CFBamTableBuff*>::iterator endArrDelTableDispensedId16Gen = arrDelTableDispensedId16Gen.end();
		while( iterArrDelTableDispensedId16Gen != endArrDelTableDispensedId16Gen ) {
			buffDelTableDispensedId16Gen = *iterArrDelTableDispensedId16Gen;
			iterArrDelTableDispensedId16Gen ++;
			schema->getTableId16Gen()->deleteId16GenByDispIdx( Authorization,
				buffDelTableDispensedId16Gen->getRequiredTenantIdReference(),
				buffDelTableDispensedId16Gen->getRequiredIdReference() );
		}
		schema->getTableTable()->deleteTableBySchemaDefIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		cfbam::CFBamValueBuff* buffDelTypeRefs;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> arrDelTypeRefs = schema->getTableValue()->readDerivedByScopeIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterArrDelTypeRefs = arrDelTypeRefs.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endArrDelTypeRefs = arrDelTypeRefs.end();
		while( iterArrDelTypeRefs != endArrDelTypeRefs ) {
			buffDelTypeRefs = *iterArrDelTypeRefs;
			iterArrDelTypeRefs ++;
			schema->getTableTableCol()->deleteTableColByDataIdx( Authorization,
				buffDelTypeRefs->getRequiredTenantIdReference(),
				buffDelTypeRefs->getRequiredIdReference() );
		}
		schema->getTableValue()->deleteValueByScopeIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredId() );
		cfbam::CFBamSchemaDefByCTenantIdxKey keyCTenantIdx;
		keyCTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfbam::CFBamSchemaDefByMinorVersionIdxKey keyMinorVersionIdx;
		keyMinorVersionIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyMinorVersionIdx.setRequiredMinorVersionId( existing->getRequiredMinorVersionId() );
		cfbam::CFBamSchemaDefByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUNameIdx.setRequiredMinorVersionId( existing->getRequiredMinorVersionId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfbam::CFBamSchemaDefByAuthEMailIdxKey keyAuthEMailIdx;
		keyAuthEMailIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyAuthEMailIdx.setRequiredAuthorEMail( existing->getRequiredAuthorEMail() );
		cfbam::CFBamSchemaDefByProjectURLIdxKey keyProjectURLIdx;
		keyProjectURLIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyProjectURLIdx.setRequiredProjectURL( existing->getRequiredProjectURL() );
		cfbam::CFBamSchemaDefByPubURIIdxKey keyPubURIIdx;
		keyPubURIIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyPubURIIdx.setRequiredPublishURI( existing->getRequiredPublishURI() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamScopePKey, cfbam::CFBamSchemaDefBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByCTenantIdx = dictByCTenantIdx->find( keyCTenantIdx );
		if( searchDictByCTenantIdx != dictByCTenantIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaDefBuff*>* subdictCTenantIdx = searchDictByCTenantIdx->second;
			auto searchSubDict = subdictCTenantIdx->find( pkey );
			if( searchSubDict != subdictCTenantIdx->end() ) {
				subdictCTenantIdx->erase( searchSubDict );
			}
			subdictCTenantIdx = NULL;
		}

		auto searchDictByMinorVersionIdx = dictByMinorVersionIdx->find( keyMinorVersionIdx );
		if( searchDictByMinorVersionIdx != dictByMinorVersionIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaDefBuff*>* subdictMinorVersionIdx = searchDictByMinorVersionIdx->second;
			auto searchSubDict = subdictMinorVersionIdx->find( pkey );
			if( searchSubDict != subdictMinorVersionIdx->end() ) {
				subdictMinorVersionIdx->erase( searchSubDict );
			}
			subdictMinorVersionIdx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		auto searchDictByAuthEMailIdx = dictByAuthEMailIdx->find( keyAuthEMailIdx );
		if( searchDictByAuthEMailIdx != dictByAuthEMailIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaDefBuff*>* subdictAuthEMailIdx = searchDictByAuthEMailIdx->second;
			auto searchSubDict = subdictAuthEMailIdx->find( pkey );
			if( searchSubDict != subdictAuthEMailIdx->end() ) {
				subdictAuthEMailIdx->erase( searchSubDict );
			}
			subdictAuthEMailIdx = NULL;
		}

		auto searchDictByProjectURLIdx = dictByProjectURLIdx->find( keyProjectURLIdx );
		if( searchDictByProjectURLIdx != dictByProjectURLIdx->end() ) {
			std::map<cfbam::CFBamScopePKey,
				 cfbam::CFBamSchemaDefBuff*>* subdictProjectURLIdx = searchDictByProjectURLIdx->second;
			auto searchSubDict = subdictProjectURLIdx->find( pkey );
			if( searchSubDict != subdictProjectURLIdx->end() ) {
				subdictProjectURLIdx->erase( searchSubDict );
			}
			subdictProjectURLIdx = NULL;
		}

		auto searchDictByPubURIIdx = dictByPubURIIdx->find( keyPubURIIdx );
		if( searchDictByPubURIIdx != dictByPubURIIdx->end() ) {
			dictByPubURIIdx->erase( searchDictByPubURIIdx );
		}

		schema->getTableScope()->deleteScope( Authorization,
			Buff );
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamSchemaDefByCTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteSchemaDefByCTenantIdx( Authorization, &key );
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamSchemaDefByCTenantIdxKey* argKey )
	{
		cfbam::CFBamSchemaDefBuff* cur = NULL;
		cfbam::CFBamSchemaDefBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaDef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argMinorVersionId )
	{
		cfbam::CFBamSchemaDefByMinorVersionIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredMinorVersionId( argMinorVersionId );
		deleteSchemaDefByMinorVersionIdx( Authorization, &key );
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamSchemaDefByMinorVersionIdxKey* argKey )
	{
		cfbam::CFBamSchemaDefBuff* cur = NULL;
		cfbam::CFBamSchemaDefBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaDef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argMinorVersionId,
			const std::string& argName )
	{
		cfbam::CFBamSchemaDefByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredMinorVersionId( argMinorVersionId );
		key.setRequiredName( argName );
		deleteSchemaDefByUNameIdx( Authorization, &key );
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamSchemaDefByUNameIdxKey* argKey )
	{
		cfbam::CFBamSchemaDefBuff* cur = NULL;
		cfbam::CFBamSchemaDefBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaDef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argAuthorEMail )
	{
		cfbam::CFBamSchemaDefByAuthEMailIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredAuthorEMail( argAuthorEMail );
		deleteSchemaDefByAuthEMailIdx( Authorization, &key );
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamSchemaDefByAuthEMailIdxKey* argKey )
	{
		cfbam::CFBamSchemaDefBuff* cur = NULL;
		cfbam::CFBamSchemaDefBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaDef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argProjectURL )
	{
		cfbam::CFBamSchemaDefByProjectURLIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredProjectURL( argProjectURL );
		deleteSchemaDefByProjectURLIdx( Authorization, &key );
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamSchemaDefByProjectURLIdxKey* argKey )
	{
		cfbam::CFBamSchemaDefBuff* cur = NULL;
		cfbam::CFBamSchemaDefBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaDef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByPubURIIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argPublishURI )
	{
		cfbam::CFBamSchemaDefByPubURIIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredPublishURI( argPublishURI );
		deleteSchemaDefByPubURIIdx( Authorization, &key );
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByPubURIIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamSchemaDefByPubURIIdxKey* argKey )
	{
		cfbam::CFBamSchemaDefBuff* cur = NULL;
		cfbam::CFBamSchemaDefBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaDef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamScopePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteSchemaDefByIdIdx( Authorization, &key );
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamSchemaDefBuff* cur = NULL;
		cfbam::CFBamSchemaDefBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaDef( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteSchemaDefByTenantIdx( Authorization, &key );
	}

	void CFBamRamSchemaDefTable::deleteSchemaDefByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamScopeByTenantIdxKey* argKey )
	{
		cfbam::CFBamSchemaDefBuff* cur = NULL;
		cfbam::CFBamSchemaDefBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> matchSet;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamScopeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteSchemaDef( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamSchemaDefTable::releasePreparedStatements() {
	}

}
