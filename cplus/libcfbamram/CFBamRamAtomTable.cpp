
// Description: C++18 Implementation for an in-memory RAM DbIO for Atom.

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

	const std::string CFBamRamAtomTable::CLASS_NAME( "CFBamRamAtomTable" );

	CFBamRamAtomTable::CFBamRamAtomTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamAtomTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamAtomBuff*>();
	}

	CFBamRamAtomTable::~CFBamRamAtomTable() {
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfbam::CFBamAtomBuff* CFBamRamAtomTable::createAtom( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamAtomBuff* Buff )
	{
		static const std::string S_ProcName( "createAtom" );
		cfbam::CFBamValuePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfbam::CFBamAtomBuff* buff = dynamic_cast<cfbam::CFBamAtomBuff*>( schema->getTableValue()->createValue( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamAtomBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfbam::CFBamAtomBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamAtomBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamAtomBuff* CFBamRamAtomTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamAtomBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamAtomBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamAtomBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamAtomBuff* CFBamRamAtomTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamAtomBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamAtomBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamAtomBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> retVec;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamAtomBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamAtomBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfbam::CFBamAtomBuff* CFBamRamAtomTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfbam::CFBamValueBuff* buff = schema->getTableValue()->readDerivedByUNameIdx( Authorization,
			TenantId,
			ScopeId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
			return( dynamic_cast<cfbam::CFBamAtomBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readDerivedByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByValTentIdx" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = schema->getTableValue()->readDerivedByValTentIdx( Authorization,
			TenantId );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readDerivedByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId )
	{
		static const std::string S_ProcName( "readDerivedByScopeIdx" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = schema->getTableValue()->readDerivedByScopeIdx( Authorization,
			TenantId,
			ScopeId );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = schema->getTableValue()->readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByPrevIdx" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = schema->getTableValue()->readDerivedByPrevIdx( Authorization,
			PrevTenantId,
			PrevId );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByNextIdx" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = schema->getTableValue()->readDerivedByNextIdx( Authorization,
			NextTenantId,
			NextId );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readDerivedByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByContPrevIdx" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = schema->getTableValue()->readDerivedByContPrevIdx( Authorization,
			TenantId,
			ScopeId,
			PrevId );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readDerivedByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByContNextIdx" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = schema->getTableValue()->readDerivedByContNextIdx( Authorization,
			TenantId,
			ScopeId,
			NextId );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	cfbam::CFBamAtomBuff* CFBamRamAtomTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamValuePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamAtomBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamAtomBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamAtomBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamAtomBuff* CFBamRamAtomTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamAtomBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamAtomBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamAtomBuff*>( buff ) );
	}

	cfbam::CFBamAtomBuff* CFBamRamAtomTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamAtomBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamAtomBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamAtomBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamAtomBuff* CFBamRamAtomTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamAtomBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamAtomBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamAtomBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamAtomBuff* CFBamRamAtomTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamAtomBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			ScopeId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamAtomBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamAtomBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readBuffByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByValTentIdx" );
		cfbam::CFBamAtomBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> buffList = readDerivedByValTentIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readBuffByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId )
	{
		static const std::string S_ProcName( "readBuffByScopeIdx" );
		cfbam::CFBamAtomBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> buffList = readDerivedByScopeIdx( Authorization,
			TenantId,
			ScopeId );
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamAtomBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByPrevIdx" );
		cfbam::CFBamAtomBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> buffList = readDerivedByPrevIdx( Authorization,
			PrevTenantId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByNextIdx" );
		cfbam::CFBamAtomBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> buffList = readDerivedByNextIdx( Authorization,
			NextTenantId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readBuffByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByContPrevIdx" );
		cfbam::CFBamAtomBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> buffList = readDerivedByContPrevIdx( Authorization,
			TenantId,
			ScopeId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> CFBamRamAtomTable::readBuffByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByContNextIdx" );
		cfbam::CFBamAtomBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> buffList = readDerivedByContNextIdx( Authorization,
			TenantId,
			ScopeId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamAtomBuff* CFBamRamAtomTable::moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
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
			return( dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) );
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
				editGrandprev = schema->getTableValue()->updateValue( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( grandprev ) );
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

		return( dynamic_cast<cfbam::CFBamAtomBuff*>( editCur ) );
	}

	cfbam::CFBamAtomBuff* CFBamRamAtomTable::moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
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
			return( dynamic_cast<cfbam::CFBamAtomBuff*>( cur ) );
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
				editGrandnext = schema->getTableValue()->updateValue( Authorization, dynamic_cast<cfbam::CFBamAtomBuff*>( editGrandnext ) );
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

		return( dynamic_cast<cfbam::CFBamAtomBuff*>( editCur ) );
	}

	cfbam::CFBamAtomBuff* CFBamRamAtomTable::updateAtom( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamAtomBuff* Buff )
	{
		static const std::string S_ProcName( "updateAtom" );
		cfbam::CFBamValuePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in Atom for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamAtomBuff* existing = searchExisting->second;

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
		// Check unique indexes

		// Validate foreign keys

		{
			bool allNull = true;

			if( allNull ) {
				cfbam::CFBamValueBuff* chk = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableValue()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table Value" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamAtomBuff*>( schema->getTableValue()->updateValue( Authorization,
			Buff ) );
		std::map<cfbam::CFBamValuePKey, cfbam::CFBamAtomBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamAtomBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamAtomBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamAtomBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamAtomBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamAtomTable::deleteAtom( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamAtomBuff* Buff )
	{
		static const std::string S_ProcName( "deleteAtom" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamValuePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamAtomBuff* existing = searchExisting->second;
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
		// Validate reverse foreign keys

		{
			cfbam::CFBamBlobDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamBlobDefBuff*>( schema->getTableBlobDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table BlobDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamBoolDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamBoolDefBuff*>( schema->getTableBoolDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table BoolDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamDateDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamDateDefBuff*>( schema->getTableDateDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table DateDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamDoubleDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamDoubleDefBuff*>( schema->getTableDoubleDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table DoubleDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamFloatDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamFloatDefBuff*>( schema->getTableFloatDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table FloatDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamInt16DefBuff* refIdIdx = dynamic_cast<cfbam::CFBamInt16DefBuff*>( schema->getTableInt16Def()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table Int16Def for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamInt32DefBuff* refIdIdx = dynamic_cast<cfbam::CFBamInt32DefBuff*>( schema->getTableInt32Def()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table Int32Def for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamInt64DefBuff* refIdIdx = dynamic_cast<cfbam::CFBamInt64DefBuff*>( schema->getTableInt64Def()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table Int64Def for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamNmTokenDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( schema->getTableNmTokenDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table NmTokenDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamNmTokensDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( schema->getTableNmTokensDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table NmTokensDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamNumberDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamNumberDefBuff*>( schema->getTableNumberDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table NumberDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamStringDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamStringDefBuff*>( schema->getTableStringDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table StringDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamTZDateDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamTZDateDefBuff*>( schema->getTableTZDateDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table TZDateDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamTZTimeDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( schema->getTableTZTimeDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table TZTimeDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamTZTimestampDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( schema->getTableTZTimestampDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table TZTimestampDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamTextDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamTextDefBuff*>( schema->getTableTextDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table TextDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamTimeDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamTimeDefBuff*>( schema->getTableTimeDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table TimeDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamTimestampDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamTimestampDefBuff*>( schema->getTableTimestampDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table TimestampDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamTokenDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamTokenDefBuff*>( schema->getTableTokenDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table TokenDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamUInt16DefBuff* refIdIdx = dynamic_cast<cfbam::CFBamUInt16DefBuff*>( schema->getTableUInt16Def()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table UInt16Def for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamUInt32DefBuff* refIdIdx = dynamic_cast<cfbam::CFBamUInt32DefBuff*>( schema->getTableUInt32Def()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table UInt32Def for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamUInt64DefBuff* refIdIdx = dynamic_cast<cfbam::CFBamUInt64DefBuff*>( schema->getTableUInt64Def()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table UInt64Def for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfbam::CFBamUuidDefBuff* refIdIdx = dynamic_cast<cfbam::CFBamUuidDefBuff*>( schema->getTableUuidDef()->readDerivedByIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredId() ) );
			if( refIdIdx != NULL ) {
				delete refIdIdx;
				refIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table UuidDef for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Delete is valid
		std::map<cfbam::CFBamValuePKey, cfbam::CFBamAtomBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		schema->getTableValue()->deleteValue( Authorization,
			Buff );
	}

	void CFBamRamAtomTable::deleteAtomByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamValuePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteAtomByIdIdx( Authorization, &key );
	}

	void CFBamRamAtomTable::deleteAtomByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* argKey )
	{
		static const std::string S_ProcName( "deleteAtomByIdIdx" );
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamAtomBuff* cur = NULL;
		cfbam::CFBamAtomBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableAtom()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, cur );
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

	void CFBamRamAtomTable::deleteAtomByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const std::string& argName )
	{
		cfbam::CFBamValueByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredScopeId( argScopeId );
		key.setRequiredName( argName );
		deleteAtomByUNameIdx( Authorization, &key );
	}

	void CFBamRamAtomTable::deleteAtomByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByUNameIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteAtomByUNameIdx" );
		cfbam::CFBamAtomBuff* cur = NULL;
		cfbam::CFBamAtomBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableAtom()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, cur );
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

	void CFBamRamAtomTable::deleteAtomByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamValueByValTentIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteAtomByValTentIdx( Authorization, &key );
	}

	void CFBamRamAtomTable::deleteAtomByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByValTentIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteAtomByValTentIdx" );
		cfbam::CFBamAtomBuff* cur = NULL;
		cfbam::CFBamAtomBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableAtom()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, cur );
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

	void CFBamRamAtomTable::deleteAtomByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId )
	{
		cfbam::CFBamValueByScopeIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredScopeId( argScopeId );
		deleteAtomByScopeIdx( Authorization, &key );
	}

	void CFBamRamAtomTable::deleteAtomByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByScopeIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteAtomByScopeIdx" );
		cfbam::CFBamAtomBuff* cur = NULL;
		cfbam::CFBamAtomBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableAtom()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, cur );
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

	void CFBamRamAtomTable::deleteAtomByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteAtomByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamAtomTable::deleteAtomByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByDefSchemaIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteAtomByDefSchemaIdx" );
		cfbam::CFBamAtomBuff* cur = NULL;
		cfbam::CFBamAtomBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableAtom()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, cur );
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

	void CFBamRamAtomTable::deleteAtomByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteAtomByPrevIdx( Authorization, &key );
	}

	void CFBamRamAtomTable::deleteAtomByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByPrevIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteAtomByPrevIdx" );
		cfbam::CFBamAtomBuff* cur = NULL;
		cfbam::CFBamAtomBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableAtom()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, cur );
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

	void CFBamRamAtomTable::deleteAtomByNextIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteAtomByNextIdx( Authorization, &key );
	}

	void CFBamRamAtomTable::deleteAtomByNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByNextIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteAtomByNextIdx" );
		cfbam::CFBamAtomBuff* cur = NULL;
		cfbam::CFBamAtomBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableAtom()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, cur );
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

	void CFBamRamAtomTable::deleteAtomByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteAtomByContPrevIdx( Authorization, &key );
	}

	void CFBamRamAtomTable::deleteAtomByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByContPrevIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteAtomByContPrevIdx" );
		cfbam::CFBamAtomBuff* cur = NULL;
		cfbam::CFBamAtomBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalPrevIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableAtom()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, cur );
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

	void CFBamRamAtomTable::deleteAtomByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteAtomByContNextIdx( Authorization, &key );
	}

	void CFBamRamAtomTable::deleteAtomByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByContNextIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteAtomByContNextIdx" );
		cfbam::CFBamAtomBuff* cur = NULL;
		cfbam::CFBamAtomBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalNextIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamAtomBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamAtomBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamAtomBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableAtom()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				schema->getTableAtom()->deleteAtom( Authorization, cur );
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

	void CFBamRamAtomTable::releasePreparedStatements() {
	}

}
