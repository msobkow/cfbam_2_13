
// Description: C++18 Implementation for an in-memory RAM DbIO for BoolType.

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

	const std::string CFBamRamBoolTypeTable::CLASS_NAME( "CFBamRamBoolTypeTable" );

	CFBamRamBoolTypeTable::CFBamRamBoolTypeTable( ICFBamSchema* argSchema )
	: cfbam::ICFBamBoolTypeTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamBoolTypeBuff*>();
		dictBySchemaIdx = new std::map<cfbam::CFBamBoolTypeBySchemaIdxKey,
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamBoolTypeBuff*>*>();
	}

	CFBamRamBoolTypeTable::~CFBamRamBoolTypeTable() {
		if( dictBySchemaIdx != NULL ) {
			for( auto iterDict = dictBySchemaIdx->begin(); iterDict != dictBySchemaIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictBySchemaIdx;
			dictBySchemaIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfbam::CFBamBoolTypeBuff* CFBamRamBoolTypeTable::createBoolType( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamBoolTypeBuff* Buff )
	{
		static const std::string S_ProcName( "createBoolType" );
		cfbam::CFBamValueBuff* tail = NULL;
		if( Buff->getClassCode() == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*> siblings = schema->getTableValue()->readDerivedByScopeIdx( Authorization,
				Buff->getRequiredTenantId(),
				Buff->getRequiredSchemaDefId() );
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterSiblings = siblings.begin();
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endSiblings = siblings.end();
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
		cfbam::CFBamValuePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		cfbam::CFBamBoolTypeBySchemaIdxKey keySchemaIdx;
		keySchemaIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keySchemaIdx.setRequiredSchemaDefId( Buff->getRequiredSchemaDefId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		// Validate foreign keys

		{
			bool allNull = true;
			allNull = false;
			allNull = false;
			if( ! allNull ) {
				cfbam::CFBamSchemaDefBuff* chk = dynamic_cast<cfbam::CFBamSchemaDefBuff*>( schema->getTableSchemaDef()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredSchemaDefId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship SchemaDef to table SchemaDef" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfbam::CFBamBoolTypeBuff* buff = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( schema->getTableBoolDef()->createBoolDef( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredId( buff->getRequiredId() );
		dictByPKey->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamBoolTypeBuff*>::value_type( pkey, buff ) );

		std::map<cfbam::CFBamValuePKey, cfbam::CFBamBoolTypeBuff*>* subdictSchemaIdx;
		auto searchDictBySchemaIdx = dictBySchemaIdx->find( keySchemaIdx );
		if( searchDictBySchemaIdx != dictBySchemaIdx->end() ) {
			subdictSchemaIdx = searchDictBySchemaIdx->second;
		}
		else {
			subdictSchemaIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamBoolTypeBuff*>();
			dictBySchemaIdx->insert( std::map<cfbam::CFBamBoolTypeBySchemaIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamBoolTypeBuff*>*>::value_type( keySchemaIdx, subdictSchemaIdx ) );
		}
		subdictSchemaIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamBoolTypeBuff*>::value_type( pkey, buff ) );

		if( tail != NULL ) {
			tail = schema->getTableValue()->readDerivedByIdIdx( Authorization,
				buff->getOptionalPrevTenantIdValue(),
				buff->getOptionalPrevIdValue() );
			const classcode_t tailClassCode = tail->getClassCode();
			if( tailClassCode == cfbam::CFBamValueBuff::CLASS_CODE ) {
				cfbam::CFBamValueBuff* tailEdit = new cfbam::CFBamValueBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamValueBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamValueBuff*>( schema->getTableValue()->updateValue( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamAtomBuff::CLASS_CODE ) {
				cfbam::CFBamAtomBuff* tailEdit = new cfbam::CFBamAtomBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamAtomBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamAtomBuff*>( schema->getTableAtom()->updateAtom( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamBlobDefBuff::CLASS_CODE ) {
				cfbam::CFBamBlobDefBuff* tailEdit = new cfbam::CFBamBlobDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamBlobDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamBlobDefBuff*>( schema->getTableBlobDef()->updateBlobDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamBlobTypeBuff::CLASS_CODE ) {
				cfbam::CFBamBlobTypeBuff* tailEdit = new cfbam::CFBamBlobTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamBlobTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamBlobTypeBuff*>( schema->getTableBlobType()->updateBlobType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamBlobColBuff::CLASS_CODE ) {
				cfbam::CFBamBlobColBuff* tailEdit = new cfbam::CFBamBlobColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamBlobColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamBlobColBuff*>( schema->getTableBlobCol()->updateBlobCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamBoolDefBuff::CLASS_CODE ) {
				cfbam::CFBamBoolDefBuff* tailEdit = new cfbam::CFBamBoolDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamBoolDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamBoolDefBuff*>( schema->getTableBoolDef()->updateBoolDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				cfbam::CFBamBoolTypeBuff* tailEdit = new cfbam::CFBamBoolTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamBoolTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( schema->getTableBoolType()->updateBoolType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamBoolColBuff::CLASS_CODE ) {
				cfbam::CFBamBoolColBuff* tailEdit = new cfbam::CFBamBoolColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamBoolColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamBoolColBuff*>( schema->getTableBoolCol()->updateBoolCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamDateDefBuff::CLASS_CODE ) {
				cfbam::CFBamDateDefBuff* tailEdit = new cfbam::CFBamDateDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamDateDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamDateDefBuff*>( schema->getTableDateDef()->updateDateDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamDateTypeBuff::CLASS_CODE ) {
				cfbam::CFBamDateTypeBuff* tailEdit = new cfbam::CFBamDateTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamDateTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamDateTypeBuff*>( schema->getTableDateType()->updateDateType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamDateColBuff::CLASS_CODE ) {
				cfbam::CFBamDateColBuff* tailEdit = new cfbam::CFBamDateColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamDateColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamDateColBuff*>( schema->getTableDateCol()->updateDateCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamDoubleDefBuff::CLASS_CODE ) {
				cfbam::CFBamDoubleDefBuff* tailEdit = new cfbam::CFBamDoubleDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamDoubleDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamDoubleDefBuff*>( schema->getTableDoubleDef()->updateDoubleDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamDoubleTypeBuff::CLASS_CODE ) {
				cfbam::CFBamDoubleTypeBuff* tailEdit = new cfbam::CFBamDoubleTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamDoubleTypeBuff*>( schema->getTableDoubleType()->updateDoubleType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamDoubleColBuff::CLASS_CODE ) {
				cfbam::CFBamDoubleColBuff* tailEdit = new cfbam::CFBamDoubleColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamDoubleColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamDoubleColBuff*>( schema->getTableDoubleCol()->updateDoubleCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamFloatDefBuff::CLASS_CODE ) {
				cfbam::CFBamFloatDefBuff* tailEdit = new cfbam::CFBamFloatDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamFloatDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamFloatDefBuff*>( schema->getTableFloatDef()->updateFloatDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamFloatTypeBuff::CLASS_CODE ) {
				cfbam::CFBamFloatTypeBuff* tailEdit = new cfbam::CFBamFloatTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamFloatTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamFloatTypeBuff*>( schema->getTableFloatType()->updateFloatType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamFloatColBuff::CLASS_CODE ) {
				cfbam::CFBamFloatColBuff* tailEdit = new cfbam::CFBamFloatColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamFloatColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamFloatColBuff*>( schema->getTableFloatCol()->updateFloatCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamInt16DefBuff::CLASS_CODE ) {
				cfbam::CFBamInt16DefBuff* tailEdit = new cfbam::CFBamInt16DefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamInt16DefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamInt16DefBuff*>( schema->getTableInt16Def()->updateInt16Def( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamInt16TypeBuff::CLASS_CODE ) {
				cfbam::CFBamInt16TypeBuff* tailEdit = new cfbam::CFBamInt16TypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamInt16TypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamInt16TypeBuff*>( schema->getTableInt16Type()->updateInt16Type( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamId16GenBuff::CLASS_CODE ) {
				cfbam::CFBamId16GenBuff* tailEdit = new cfbam::CFBamId16GenBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamId16GenBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamId16GenBuff*>( schema->getTableId16Gen()->updateId16Gen( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamEnumDefBuff::CLASS_CODE ) {
				cfbam::CFBamEnumDefBuff* tailEdit = new cfbam::CFBamEnumDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamEnumDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamEnumDefBuff*>( schema->getTableEnumDef()->updateEnumDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamEnumTypeBuff::CLASS_CODE ) {
				cfbam::CFBamEnumTypeBuff* tailEdit = new cfbam::CFBamEnumTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamEnumTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamEnumTypeBuff*>( schema->getTableEnumType()->updateEnumType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamInt16ColBuff::CLASS_CODE ) {
				cfbam::CFBamInt16ColBuff* tailEdit = new cfbam::CFBamInt16ColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamInt16ColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamInt16ColBuff*>( schema->getTableInt16Col()->updateInt16Col( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamInt32DefBuff::CLASS_CODE ) {
				cfbam::CFBamInt32DefBuff* tailEdit = new cfbam::CFBamInt32DefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamInt32DefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamInt32DefBuff*>( schema->getTableInt32Def()->updateInt32Def( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamInt32TypeBuff::CLASS_CODE ) {
				cfbam::CFBamInt32TypeBuff* tailEdit = new cfbam::CFBamInt32TypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamInt32TypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamInt32TypeBuff*>( schema->getTableInt32Type()->updateInt32Type( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamId32GenBuff::CLASS_CODE ) {
				cfbam::CFBamId32GenBuff* tailEdit = new cfbam::CFBamId32GenBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamId32GenBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamId32GenBuff*>( schema->getTableId32Gen()->updateId32Gen( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamInt32ColBuff::CLASS_CODE ) {
				cfbam::CFBamInt32ColBuff* tailEdit = new cfbam::CFBamInt32ColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamInt32ColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamInt32ColBuff*>( schema->getTableInt32Col()->updateInt32Col( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamInt64DefBuff::CLASS_CODE ) {
				cfbam::CFBamInt64DefBuff* tailEdit = new cfbam::CFBamInt64DefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamInt64DefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamInt64DefBuff*>( schema->getTableInt64Def()->updateInt64Def( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamInt64TypeBuff::CLASS_CODE ) {
				cfbam::CFBamInt64TypeBuff* tailEdit = new cfbam::CFBamInt64TypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamInt64TypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamInt64TypeBuff*>( schema->getTableInt64Type()->updateInt64Type( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamId64GenBuff::CLASS_CODE ) {
				cfbam::CFBamId64GenBuff* tailEdit = new cfbam::CFBamId64GenBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamId64GenBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamId64GenBuff*>( schema->getTableId64Gen()->updateId64Gen( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamInt64ColBuff::CLASS_CODE ) {
				cfbam::CFBamInt64ColBuff* tailEdit = new cfbam::CFBamInt64ColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamInt64ColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamInt64ColBuff*>( schema->getTableInt64Col()->updateInt64Col( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamNmTokenDefBuff::CLASS_CODE ) {
				cfbam::CFBamNmTokenDefBuff* tailEdit = new cfbam::CFBamNmTokenDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamNmTokenDefBuff*>( schema->getTableNmTokenDef()->updateNmTokenDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamNmTokenTypeBuff::CLASS_CODE ) {
				cfbam::CFBamNmTokenTypeBuff* tailEdit = new cfbam::CFBamNmTokenTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamNmTokenTypeBuff*>( schema->getTableNmTokenType()->updateNmTokenType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamNmTokenColBuff::CLASS_CODE ) {
				cfbam::CFBamNmTokenColBuff* tailEdit = new cfbam::CFBamNmTokenColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamNmTokenColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamNmTokenColBuff*>( schema->getTableNmTokenCol()->updateNmTokenCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamNmTokensDefBuff::CLASS_CODE ) {
				cfbam::CFBamNmTokensDefBuff* tailEdit = new cfbam::CFBamNmTokensDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamNmTokensDefBuff*>( schema->getTableNmTokensDef()->updateNmTokensDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamNmTokensTypeBuff::CLASS_CODE ) {
				cfbam::CFBamNmTokensTypeBuff* tailEdit = new cfbam::CFBamNmTokensTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamNmTokensTypeBuff*>( schema->getTableNmTokensType()->updateNmTokensType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamNmTokensColBuff::CLASS_CODE ) {
				cfbam::CFBamNmTokensColBuff* tailEdit = new cfbam::CFBamNmTokensColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamNmTokensColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamNmTokensColBuff*>( schema->getTableNmTokensCol()->updateNmTokensCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamNumberDefBuff::CLASS_CODE ) {
				cfbam::CFBamNumberDefBuff* tailEdit = new cfbam::CFBamNumberDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamNumberDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamNumberDefBuff*>( schema->getTableNumberDef()->updateNumberDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamNumberTypeBuff::CLASS_CODE ) {
				cfbam::CFBamNumberTypeBuff* tailEdit = new cfbam::CFBamNumberTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamNumberTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamNumberTypeBuff*>( schema->getTableNumberType()->updateNumberType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamNumberColBuff::CLASS_CODE ) {
				cfbam::CFBamNumberColBuff* tailEdit = new cfbam::CFBamNumberColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamNumberColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamNumberColBuff*>( schema->getTableNumberCol()->updateNumberCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamStringDefBuff::CLASS_CODE ) {
				cfbam::CFBamStringDefBuff* tailEdit = new cfbam::CFBamStringDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamStringDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamStringDefBuff*>( schema->getTableStringDef()->updateStringDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamStringTypeBuff::CLASS_CODE ) {
				cfbam::CFBamStringTypeBuff* tailEdit = new cfbam::CFBamStringTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamStringTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamStringTypeBuff*>( schema->getTableStringType()->updateStringType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamStringColBuff::CLASS_CODE ) {
				cfbam::CFBamStringColBuff* tailEdit = new cfbam::CFBamStringColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamStringColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamStringColBuff*>( schema->getTableStringCol()->updateStringCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTZDateDefBuff::CLASS_CODE ) {
				cfbam::CFBamTZDateDefBuff* tailEdit = new cfbam::CFBamTZDateDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTZDateDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTZDateDefBuff*>( schema->getTableTZDateDef()->updateTZDateDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTZDateTypeBuff::CLASS_CODE ) {
				cfbam::CFBamTZDateTypeBuff* tailEdit = new cfbam::CFBamTZDateTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTZDateTypeBuff*>( schema->getTableTZDateType()->updateTZDateType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTZDateColBuff::CLASS_CODE ) {
				cfbam::CFBamTZDateColBuff* tailEdit = new cfbam::CFBamTZDateColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTZDateColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTZDateColBuff*>( schema->getTableTZDateCol()->updateTZDateCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTZTimeDefBuff::CLASS_CODE ) {
				cfbam::CFBamTZTimeDefBuff* tailEdit = new cfbam::CFBamTZTimeDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTZTimeDefBuff*>( schema->getTableTZTimeDef()->updateTZTimeDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTZTimeTypeBuff::CLASS_CODE ) {
				cfbam::CFBamTZTimeTypeBuff* tailEdit = new cfbam::CFBamTZTimeTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTZTimeTypeBuff*>( schema->getTableTZTimeType()->updateTZTimeType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTZTimeColBuff::CLASS_CODE ) {
				cfbam::CFBamTZTimeColBuff* tailEdit = new cfbam::CFBamTZTimeColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTZTimeColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTZTimeColBuff*>( schema->getTableTZTimeCol()->updateTZTimeCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTZTimestampDefBuff::CLASS_CODE ) {
				cfbam::CFBamTZTimestampDefBuff* tailEdit = new cfbam::CFBamTZTimestampDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTZTimestampDefBuff*>( schema->getTableTZTimestampDef()->updateTZTimestampDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTZTimestampTypeBuff::CLASS_CODE ) {
				cfbam::CFBamTZTimestampTypeBuff* tailEdit = new cfbam::CFBamTZTimestampTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTZTimestampTypeBuff*>( schema->getTableTZTimestampType()->updateTZTimestampType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) {
				cfbam::CFBamTZTimestampColBuff* tailEdit = new cfbam::CFBamTZTimestampColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTZTimestampColBuff*>( schema->getTableTZTimestampCol()->updateTZTimestampCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTextDefBuff::CLASS_CODE ) {
				cfbam::CFBamTextDefBuff* tailEdit = new cfbam::CFBamTextDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTextDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTextDefBuff*>( schema->getTableTextDef()->updateTextDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTextTypeBuff::CLASS_CODE ) {
				cfbam::CFBamTextTypeBuff* tailEdit = new cfbam::CFBamTextTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTextTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTextTypeBuff*>( schema->getTableTextType()->updateTextType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTextColBuff::CLASS_CODE ) {
				cfbam::CFBamTextColBuff* tailEdit = new cfbam::CFBamTextColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTextColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTextColBuff*>( schema->getTableTextCol()->updateTextCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTimeDefBuff::CLASS_CODE ) {
				cfbam::CFBamTimeDefBuff* tailEdit = new cfbam::CFBamTimeDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTimeDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTimeDefBuff*>( schema->getTableTimeDef()->updateTimeDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTimeTypeBuff::CLASS_CODE ) {
				cfbam::CFBamTimeTypeBuff* tailEdit = new cfbam::CFBamTimeTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTimeTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTimeTypeBuff*>( schema->getTableTimeType()->updateTimeType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTimeColBuff::CLASS_CODE ) {
				cfbam::CFBamTimeColBuff* tailEdit = new cfbam::CFBamTimeColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTimeColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTimeColBuff*>( schema->getTableTimeCol()->updateTimeCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTimestampDefBuff::CLASS_CODE ) {
				cfbam::CFBamTimestampDefBuff* tailEdit = new cfbam::CFBamTimestampDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTimestampDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTimestampDefBuff*>( schema->getTableTimestampDef()->updateTimestampDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTimestampTypeBuff::CLASS_CODE ) {
				cfbam::CFBamTimestampTypeBuff* tailEdit = new cfbam::CFBamTimestampTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTimestampTypeBuff*>( schema->getTableTimestampType()->updateTimestampType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTimestampColBuff::CLASS_CODE ) {
				cfbam::CFBamTimestampColBuff* tailEdit = new cfbam::CFBamTimestampColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTimestampColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTimestampColBuff*>( schema->getTableTimestampCol()->updateTimestampCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTokenDefBuff::CLASS_CODE ) {
				cfbam::CFBamTokenDefBuff* tailEdit = new cfbam::CFBamTokenDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTokenDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTokenDefBuff*>( schema->getTableTokenDef()->updateTokenDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
				cfbam::CFBamTokenTypeBuff* tailEdit = new cfbam::CFBamTokenTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTokenTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTokenTypeBuff*>( schema->getTableTokenType()->updateTokenType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTokenColBuff::CLASS_CODE ) {
				cfbam::CFBamTokenColBuff* tailEdit = new cfbam::CFBamTokenColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTokenColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTokenColBuff*>( schema->getTableTokenCol()->updateTokenCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUInt16DefBuff::CLASS_CODE ) {
				cfbam::CFBamUInt16DefBuff* tailEdit = new cfbam::CFBamUInt16DefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUInt16DefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUInt16DefBuff*>( schema->getTableUInt16Def()->updateUInt16Def( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUInt16TypeBuff::CLASS_CODE ) {
				cfbam::CFBamUInt16TypeBuff* tailEdit = new cfbam::CFBamUInt16TypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUInt16TypeBuff*>( schema->getTableUInt16Type()->updateUInt16Type( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUInt16ColBuff::CLASS_CODE ) {
				cfbam::CFBamUInt16ColBuff* tailEdit = new cfbam::CFBamUInt16ColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUInt16ColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUInt16ColBuff*>( schema->getTableUInt16Col()->updateUInt16Col( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUInt32DefBuff::CLASS_CODE ) {
				cfbam::CFBamUInt32DefBuff* tailEdit = new cfbam::CFBamUInt32DefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUInt32DefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUInt32DefBuff*>( schema->getTableUInt32Def()->updateUInt32Def( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUInt32TypeBuff::CLASS_CODE ) {
				cfbam::CFBamUInt32TypeBuff* tailEdit = new cfbam::CFBamUInt32TypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUInt32TypeBuff*>( schema->getTableUInt32Type()->updateUInt32Type( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUInt32ColBuff::CLASS_CODE ) {
				cfbam::CFBamUInt32ColBuff* tailEdit = new cfbam::CFBamUInt32ColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUInt32ColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUInt32ColBuff*>( schema->getTableUInt32Col()->updateUInt32Col( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUInt64DefBuff::CLASS_CODE ) {
				cfbam::CFBamUInt64DefBuff* tailEdit = new cfbam::CFBamUInt64DefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUInt64DefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUInt64DefBuff*>( schema->getTableUInt64Def()->updateUInt64Def( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUInt64TypeBuff::CLASS_CODE ) {
				cfbam::CFBamUInt64TypeBuff* tailEdit = new cfbam::CFBamUInt64TypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUInt64TypeBuff*>( schema->getTableUInt64Type()->updateUInt64Type( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUInt64ColBuff::CLASS_CODE ) {
				cfbam::CFBamUInt64ColBuff* tailEdit = new cfbam::CFBamUInt64ColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUInt64ColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUInt64ColBuff*>( schema->getTableUInt64Col()->updateUInt64Col( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUuidDefBuff::CLASS_CODE ) {
				cfbam::CFBamUuidDefBuff* tailEdit = new cfbam::CFBamUuidDefBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUuidDefBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUuidDefBuff*>( schema->getTableUuidDef()->updateUuidDef( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUuidTypeBuff::CLASS_CODE ) {
				cfbam::CFBamUuidTypeBuff* tailEdit = new cfbam::CFBamUuidTypeBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUuidTypeBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUuidTypeBuff*>( schema->getTableUuidType()->updateUuidType( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUuidGenBuff::CLASS_CODE ) {
				cfbam::CFBamUuidGenBuff* tailEdit = new cfbam::CFBamUuidGenBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUuidGenBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUuidGenBuff*>( schema->getTableUuidGen()->updateUuidGen( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamUuidColBuff::CLASS_CODE ) {
				cfbam::CFBamUuidColBuff* tailEdit = new cfbam::CFBamUuidColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamUuidColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamUuidColBuff*>( schema->getTableUuidCol()->updateUuidCol( Authorization, tailEdit ) );
				delete tailEdit;
				tailEdit = NULL;
			}
			else if( tailClassCode == cfbam::CFBamTableColBuff::CLASS_CODE ) {
				cfbam::CFBamTableColBuff* tailEdit = new cfbam::CFBamTableColBuff();
				*tailEdit = *dynamic_cast<cfbam::CFBamTableColBuff*>( tail );
				tailEdit->setOptionalNextTenantIdValue( Buff->getRequiredTenantId() );
				tailEdit->setOptionalNextIdValue( Buff->getRequiredId() );
				tailEdit = dynamic_cast<cfbam::CFBamTableColBuff*>( schema->getTableTableCol()->updateTableCol( Authorization, tailEdit ) );
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
		if( buff->getClassCode() == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfbam::CFBamBoolTypeBuff* CFBamRamBoolTypeTable::readDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfbam::CFBamBoolTypeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamBoolTypeBuff* CFBamRamBoolTypeTable::lockDerived( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfbam::CFBamBoolTypeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readAllDerived( const cfsec::CFSecAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> retVec;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator end = dictByPKey->end();
		cfbam::CFBamBoolTypeBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfbam::CFBamBoolTypeBuff* CFBamRamBoolTypeTable::readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
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
		else if( buff->implementsClassCode( cfbam::CFBamBoolTypeBuff::CLASS_CODE ) ) {
			return( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readDerivedByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByValTentIdx" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = schema->getTableValue()->readDerivedByValTentIdx( Authorization,
			TenantId );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamBoolTypeBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readDerivedByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId )
	{
		static const std::string S_ProcName( "readDerivedByScopeIdx" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = schema->getTableValue()->readDerivedByScopeIdx( Authorization,
			TenantId,
			ScopeId );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamBoolTypeBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readDerivedByDefSchemaIdx" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = schema->getTableValue()->readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamBoolTypeBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readDerivedByPrevIdx" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = schema->getTableValue()->readDerivedByPrevIdx( Authorization,
			PrevTenantId,
			PrevId );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamBoolTypeBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readDerivedByNextIdx" );
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = schema->getTableValue()->readDerivedByNextIdx( Authorization,
			NextTenantId,
			NextId );
		cfbam::CFBamValueBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamBoolTypeBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readDerivedByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
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
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamBoolTypeBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readDerivedByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
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
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamValueBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfbam::CFBamBoolTypeBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readDerivedBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId )
	{
		static const std::string S_ProcName( "readDerivedBySchemaIdx" );
		cfbam::CFBamBoolTypeBySchemaIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> recVec;
		cfbam::CFBamBoolTypeBuff* clone;
		auto searchDictBySchemaIdx = dictBySchemaIdx->find( key );
		if( searchDictBySchemaIdx != dictBySchemaIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamBoolTypeBuff*>* subdictSchemaIdx = searchDictBySchemaIdx->second;
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamBoolTypeBuff*>::iterator iter = subdictSchemaIdx->begin();
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamBoolTypeBuff*>::iterator end = subdictSchemaIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfbam::CFBamBoolTypeBuff* CFBamRamBoolTypeTable::readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfbam::CFBamValuePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredId( Id );
		cfbam::CFBamBoolTypeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfbam::CFBamBoolTypeBuff* CFBamRamBoolTypeTable::readBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfbam::CFBamBoolTypeBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff ) );
	}

	cfbam::CFBamBoolTypeBuff* CFBamRamBoolTypeTable::lockBuff( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfbam::CFBamBoolTypeBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readAllBuff( const cfsec::CFSecAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfbam::CFBamBoolTypeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfbam::CFBamBoolTypeBuff* CFBamRamBoolTypeTable::readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfbam::CFBamBoolTypeBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfbam::CFBamBoolTypeBuff* CFBamRamBoolTypeTable::readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfbam::CFBamBoolTypeBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			ScopeId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readBuffByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByValTentIdx" );
		cfbam::CFBamBoolTypeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> buffList = readDerivedByValTentIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readBuffByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId )
	{
		static const std::string S_ProcName( "readBuffByScopeIdx" );
		cfbam::CFBamBoolTypeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> buffList = readDerivedByScopeIdx( Authorization,
			TenantId,
			ScopeId );
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readBuffByDefSchemaIdx" );
		cfbam::CFBamBoolTypeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> buffList = readDerivedByDefSchemaIdx( Authorization,
			DefSchemaTenantId,
			DefSchemaId );
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByPrevIdx" );
		cfbam::CFBamBoolTypeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> buffList = readDerivedByPrevIdx( Authorization,
			PrevTenantId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByNextIdx" );
		cfbam::CFBamBoolTypeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> buffList = readDerivedByNextIdx( Authorization,
			NextTenantId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readBuffByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readBuffByContPrevIdx" );
		cfbam::CFBamBoolTypeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> buffList = readDerivedByContPrevIdx( Authorization,
			TenantId,
			ScopeId,
			PrevId );
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readBuffByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readBuffByContNextIdx" );
		cfbam::CFBamBoolTypeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> buffList = readDerivedByContNextIdx( Authorization,
			TenantId,
			ScopeId,
			NextId );
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamValueBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::readBuffBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId )
	{
		static const std::string S_ProcName( "readBuffBySchemaIdx" );
		cfbam::CFBamBoolTypeBuff* buff;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> buffList = readDerivedBySchemaIdx( Authorization,
			TenantId,
			SchemaDefId );
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> CFBamRamBoolTypeTable::pageBuffBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const int64_t* priorTenantId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffBySchemaIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::CFBamBoolTypeBuff* CFBamRamBoolTypeTable::moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
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
			return( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) );
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
				editGrandprev = schema->getTableValue()->updateValue( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( grandprev ) );
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

		return( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( editCur ) );
	}

	cfbam::CFBamBoolTypeBuff* CFBamRamBoolTypeTable::moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
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
			return( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) );
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
				editGrandnext = schema->getTableValue()->updateValue( Authorization, dynamic_cast<cfbam::CFBamBoolTypeBuff*>( editGrandnext ) );
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

		return( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( editCur ) );
	}

	cfbam::CFBamBoolTypeBuff* CFBamRamBoolTypeTable::updateBoolType( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamBoolTypeBuff* Buff )
	{
		static const std::string S_ProcName( "updateBoolType" );
		cfbam::CFBamValuePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in BoolType for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfbam::CFBamBoolTypeBuff* existing = searchExisting->second;

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
		cfbam::CFBamBoolTypeBySchemaIdxKey existingKeySchemaIdx;
		existingKeySchemaIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeySchemaIdx.setRequiredSchemaDefId( existing->getRequiredSchemaDefId() );
		cfbam::CFBamBoolTypeBySchemaIdxKey newKeySchemaIdx;
		newKeySchemaIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeySchemaIdx.setRequiredSchemaDefId( Buff->getRequiredSchemaDefId() );
		// Check unique indexes

		// Validate foreign keys

		{
			bool allNull = true;

			if( allNull ) {
				cfbam::CFBamBoolDefBuff* chk = dynamic_cast<cfbam::CFBamBoolDefBuff*>( schema->getTableBoolDef()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table BoolDef" );
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
						Buff->getRequiredSchemaDefId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship SchemaDef to table SchemaDef" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( schema->getTableBoolDef()->updateBoolDef( Authorization,
			Buff ) );
		std::map<cfbam::CFBamValuePKey, cfbam::CFBamBoolTypeBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamBoolTypeBuff*>::value_type( pkey, existing ) );

		std::map<cfbam::CFBamValuePKey,
			 cfbam::CFBamBoolTypeBuff*>* subdictSchemaIdx;
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
			subdictSchemaIdx = new std::map<cfbam::CFBamValuePKey, cfbam::CFBamBoolTypeBuff*>();
			dictBySchemaIdx->insert( std::map<cfbam::CFBamBoolTypeBySchemaIdxKey,
				std::map<cfbam::CFBamValuePKey,
					cfbam::CFBamBoolTypeBuff*>*>::value_type( newKeySchemaIdx, subdictSchemaIdx ) );
		}
		subdictSchemaIdx->insert( std::map<cfbam::CFBamValuePKey, cfbam::CFBamBoolTypeBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfbam::CFBamBoolTypeBuff* buff;
		if( existing->getClassCode() == cfbam::CFBamBoolTypeBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfbam::CFBamBoolTypeBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFBamRamBoolTypeTable::deleteBoolType( const cfsec::CFSecAuthorization* Authorization,
		cfbam::CFBamBoolTypeBuff* Buff )
	{
		static const std::string S_ProcName( "deleteBoolType" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfbam::CFBamValuePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfbam::CFBamBoolTypeBuff* existing = searchExisting->second;
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
		cfbam::CFBamBoolTypeBySchemaIdxKey keySchemaIdx;
		keySchemaIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keySchemaIdx.setRequiredSchemaDefId( existing->getRequiredSchemaDefId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfbam::CFBamValuePKey, cfbam::CFBamBoolTypeBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictBySchemaIdx = dictBySchemaIdx->find( keySchemaIdx );
		if( searchDictBySchemaIdx != dictBySchemaIdx->end() ) {
			std::map<cfbam::CFBamValuePKey,
				 cfbam::CFBamBoolTypeBuff*>* subdictSchemaIdx = searchDictBySchemaIdx->second;
			auto searchSubDict = subdictSchemaIdx->find( pkey );
			if( searchSubDict != subdictSchemaIdx->end() ) {
				subdictSchemaIdx->erase( searchSubDict );
			}
			subdictSchemaIdx = NULL;
		}

		schema->getTableBoolDef()->deleteBoolDef( Authorization,
			Buff );
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaDefId )
	{
		cfbam::CFBamBoolTypeBySchemaIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredSchemaDefId( argSchemaDefId );
		deleteBoolTypeBySchemaIdx( Authorization, &key );
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamBoolTypeBySchemaIdxKey* argKey )
	{
		cfbam::CFBamBoolTypeBuff* cur = NULL;
		cfbam::CFBamBoolTypeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableBoolType()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteBoolType( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId )
	{
		cfbam::CFBamValuePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredId( argId );
		deleteBoolTypeByIdIdx( Authorization, &key );
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByIdIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValuePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfbam::CFBamBoolTypeBuff* cur = NULL;
		cfbam::CFBamBoolTypeBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableBoolType()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteBoolType( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const std::string& argName )
	{
		cfbam::CFBamValueByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredScopeId( argScopeId );
		key.setRequiredName( argName );
		deleteBoolTypeByUNameIdx( Authorization, &key );
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByUNameIdxKey* argKey )
	{
		cfbam::CFBamBoolTypeBuff* cur = NULL;
		cfbam::CFBamBoolTypeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableBoolType()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteBoolType( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfbam::CFBamValueByValTentIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteBoolTypeByValTentIdx( Authorization, &key );
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByValTentIdxKey* argKey )
	{
		cfbam::CFBamBoolTypeBuff* cur = NULL;
		cfbam::CFBamBoolTypeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableBoolType()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteBoolType( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId )
	{
		cfbam::CFBamValueByScopeIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredScopeId( argScopeId );
		deleteBoolTypeByScopeIdx( Authorization, &key );
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByScopeIdxKey* argKey )
	{
		cfbam::CFBamBoolTypeBuff* cur = NULL;
		cfbam::CFBamBoolTypeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableBoolType()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteBoolType( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteBoolTypeByDefSchemaIdx( Authorization, &key );
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByDefSchemaIdxKey* argKey )
	{
		cfbam::CFBamBoolTypeBuff* cur = NULL;
		cfbam::CFBamBoolTypeBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableBoolType()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteBoolType( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteBoolTypeByPrevIdx( Authorization, &key );
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByPrevIdxKey* argKey )
	{
		cfbam::CFBamBoolTypeBuff* cur = NULL;
		cfbam::CFBamBoolTypeBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableBoolType()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteBoolType( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByNextIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteBoolTypeByNextIdx( Authorization, &key );
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByNextIdxKey* argKey )
	{
		cfbam::CFBamBoolTypeBuff* cur = NULL;
		cfbam::CFBamBoolTypeBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableBoolType()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteBoolType( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteBoolTypeByContPrevIdx( Authorization, &key );
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByContPrevIdxKey* argKey )
	{
		cfbam::CFBamBoolTypeBuff* cur = NULL;
		cfbam::CFBamBoolTypeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalPrevIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableBoolType()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteBoolType( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
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
		deleteBoolTypeByContNextIdx( Authorization, &key );
	}

	void CFBamRamBoolTypeTable::deleteBoolTypeByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
		const cfbam::CFBamValueByContNextIdxKey* argKey )
	{
		cfbam::CFBamBoolTypeBuff* cur = NULL;
		cfbam::CFBamBoolTypeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalNextIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*> matchSet;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolTypeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfbam::CFBamValueBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfbam::CFBamBoolTypeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfbam::CFBamBoolTypeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableBoolType()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredId() );
			rereadCur = cur;
			deleteBoolType( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFBamRamBoolTypeTable::releasePreparedStatements() {
	}

}
