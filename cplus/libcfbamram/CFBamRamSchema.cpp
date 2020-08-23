// Description: C++18 Implementation of an in-memory RAM CFBam schema.

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
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamSchemaObj.hpp>
#include <cfbamsaxloader/CFBamSaxLoader.hpp>
#include <cfbamram/CFBamRamSchema.hpp>
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

	const std::string CFBamRamSchema::CLASS_NAME( "CFBamRamSchema" );

	CFBamRamSchema::CFBamRamSchema()
	: cfbam::CFBamSchema(),
	  cfbam::ICFBamSchema()
	{
		sessConnected = false;
		tranOpen = false;
		nextISOCcyIdGenValue = 1;
		nextISOCtryIdGenValue = 1;
		nextISOLangIdGenValue = 1;
		nextISOTZoneIdGenValue = 1;
		nextServiceTypeIdGenValue = 1;
		nextMimeTypeIdGenValue = 1;
		nextURLProtocolIdGenValue = 1;
		nextClusterIdGenValue = 1L;
		nextTenantIdGenValue = 1L;
		tableAtom = new CFBamRamAtomTable( this );
		tableBlobCol = new CFBamRamBlobColTable( this );
		tableBlobDef = new CFBamRamBlobDefTable( this );
		tableBlobType = new CFBamRamBlobTypeTable( this );
		tableBoolCol = new CFBamRamBoolColTable( this );
		tableBoolDef = new CFBamRamBoolDefTable( this );
		tableBoolType = new CFBamRamBoolTypeTable( this );
		tableChain = new CFBamRamChainTable( this );
		tableClearDep = new CFBamRamClearDepTable( this );
		tableClearSubDep1 = new CFBamRamClearSubDep1Table( this );
		tableClearSubDep2 = new CFBamRamClearSubDep2Table( this );
		tableClearSubDep3 = new CFBamRamClearSubDep3Table( this );
		tableClearTopDep = new CFBamRamClearTopDepTable( this );
		tableCluster = new CFBamRamClusterTable( this );
		tableDateCol = new CFBamRamDateColTable( this );
		tableDateDef = new CFBamRamDateDefTable( this );
		tableDateType = new CFBamRamDateTypeTable( this );
		tableDelDep = new CFBamRamDelDepTable( this );
		tableDelSubDep1 = new CFBamRamDelSubDep1Table( this );
		tableDelSubDep2 = new CFBamRamDelSubDep2Table( this );
		tableDelSubDep3 = new CFBamRamDelSubDep3Table( this );
		tableDelTopDep = new CFBamRamDelTopDepTable( this );
		tableDoubleCol = new CFBamRamDoubleColTable( this );
		tableDoubleDef = new CFBamRamDoubleDefTable( this );
		tableDoubleType = new CFBamRamDoubleTypeTable( this );
		tableEnumDef = new CFBamRamEnumDefTable( this );
		tableEnumTag = new CFBamRamEnumTagTable( this );
		tableEnumType = new CFBamRamEnumTypeTable( this );
		tableFloatCol = new CFBamRamFloatColTable( this );
		tableFloatDef = new CFBamRamFloatDefTable( this );
		tableFloatType = new CFBamRamFloatTypeTable( this );
		tableHostNode = new CFBamRamHostNodeTable( this );
		tableISOCcy = new CFBamRamISOCcyTable( this );
		tableISOCtry = new CFBamRamISOCtryTable( this );
		tableISOCtryCcy = new CFBamRamISOCtryCcyTable( this );
		tableISOCtryLang = new CFBamRamISOCtryLangTable( this );
		tableISOLang = new CFBamRamISOLangTable( this );
		tableISOTZone = new CFBamRamISOTZoneTable( this );
		tableId16Gen = new CFBamRamId16GenTable( this );
		tableId32Gen = new CFBamRamId32GenTable( this );
		tableId64Gen = new CFBamRamId64GenTable( this );
		tableIndex = new CFBamRamIndexTable( this );
		tableIndexCol = new CFBamRamIndexColTable( this );
		tableInt16Col = new CFBamRamInt16ColTable( this );
		tableInt16Def = new CFBamRamInt16DefTable( this );
		tableInt16Type = new CFBamRamInt16TypeTable( this );
		tableInt32Col = new CFBamRamInt32ColTable( this );
		tableInt32Def = new CFBamRamInt32DefTable( this );
		tableInt32Type = new CFBamRamInt32TypeTable( this );
		tableInt64Col = new CFBamRamInt64ColTable( this );
		tableInt64Def = new CFBamRamInt64DefTable( this );
		tableInt64Type = new CFBamRamInt64TypeTable( this );
		tableLicense = new CFBamRamLicenseTable( this );
		tableMajorVersion = new CFBamRamMajorVersionTable( this );
		tableMimeType = new CFBamRamMimeTypeTable( this );
		tableMinorVersion = new CFBamRamMinorVersionTable( this );
		tableNmTokenCol = new CFBamRamNmTokenColTable( this );
		tableNmTokenDef = new CFBamRamNmTokenDefTable( this );
		tableNmTokenType = new CFBamRamNmTokenTypeTable( this );
		tableNmTokensCol = new CFBamRamNmTokensColTable( this );
		tableNmTokensDef = new CFBamRamNmTokensDefTable( this );
		tableNmTokensType = new CFBamRamNmTokensTypeTable( this );
		tableNumberCol = new CFBamRamNumberColTable( this );
		tableNumberDef = new CFBamRamNumberDefTable( this );
		tableNumberType = new CFBamRamNumberTypeTable( this );
		tableParam = new CFBamRamParamTable( this );
		tablePopDep = new CFBamRamPopDepTable( this );
		tablePopSubDep1 = new CFBamRamPopSubDep1Table( this );
		tablePopSubDep2 = new CFBamRamPopSubDep2Table( this );
		tablePopSubDep3 = new CFBamRamPopSubDep3Table( this );
		tablePopTopDep = new CFBamRamPopTopDepTable( this );
		tableRelation = new CFBamRamRelationTable( this );
		tableRelationCol = new CFBamRamRelationColTable( this );
		tableSchemaDef = new CFBamRamSchemaDefTable( this );
		tableSchemaRef = new CFBamRamSchemaRefTable( this );
		tableScope = new CFBamRamScopeTable( this );
		tableSecApp = new CFBamRamSecAppTable( this );
		tableSecDevice = new CFBamRamSecDeviceTable( this );
		tableSecForm = new CFBamRamSecFormTable( this );
		tableSecGroup = new CFBamRamSecGroupTable( this );
		tableSecGroupForm = new CFBamRamSecGroupFormTable( this );
		tableSecGrpInc = new CFBamRamSecGrpIncTable( this );
		tableSecGrpMemb = new CFBamRamSecGrpMembTable( this );
		tableSecSession = new CFBamRamSecSessionTable( this );
		tableSecUser = new CFBamRamSecUserTable( this );
		tableServerListFunc = new CFBamRamServerListFuncTable( this );
		tableServerMethod = new CFBamRamServerMethodTable( this );
		tableServerObjFunc = new CFBamRamServerObjFuncTable( this );
		tableServerProc = new CFBamRamServerProcTable( this );
		tableService = new CFBamRamServiceTable( this );
		tableServiceType = new CFBamRamServiceTypeTable( this );
		tableStringCol = new CFBamRamStringColTable( this );
		tableStringDef = new CFBamRamStringDefTable( this );
		tableStringType = new CFBamRamStringTypeTable( this );
		tableSubProject = new CFBamRamSubProjectTable( this );
		tableSysCluster = new CFBamRamSysClusterTable( this );
		tableTSecGroup = new CFBamRamTSecGroupTable( this );
		tableTSecGrpInc = new CFBamRamTSecGrpIncTable( this );
		tableTSecGrpMemb = new CFBamRamTSecGrpMembTable( this );
		tableTZDateCol = new CFBamRamTZDateColTable( this );
		tableTZDateDef = new CFBamRamTZDateDefTable( this );
		tableTZDateType = new CFBamRamTZDateTypeTable( this );
		tableTZTimeCol = new CFBamRamTZTimeColTable( this );
		tableTZTimeDef = new CFBamRamTZTimeDefTable( this );
		tableTZTimeType = new CFBamRamTZTimeTypeTable( this );
		tableTZTimestampCol = new CFBamRamTZTimestampColTable( this );
		tableTZTimestampDef = new CFBamRamTZTimestampDefTable( this );
		tableTZTimestampType = new CFBamRamTZTimestampTypeTable( this );
		tableTable = new CFBamRamTableTable( this );
		tableTableCol = new CFBamRamTableColTable( this );
		tableTenant = new CFBamRamTenantTable( this );
		tableTextCol = new CFBamRamTextColTable( this );
		tableTextDef = new CFBamRamTextDefTable( this );
		tableTextType = new CFBamRamTextTypeTable( this );
		tableTimeCol = new CFBamRamTimeColTable( this );
		tableTimeDef = new CFBamRamTimeDefTable( this );
		tableTimeType = new CFBamRamTimeTypeTable( this );
		tableTimestampCol = new CFBamRamTimestampColTable( this );
		tableTimestampDef = new CFBamRamTimestampDefTable( this );
		tableTimestampType = new CFBamRamTimestampTypeTable( this );
		tableTld = new CFBamRamTldTable( this );
		tableTokenCol = new CFBamRamTokenColTable( this );
		tableTokenDef = new CFBamRamTokenDefTable( this );
		tableTokenType = new CFBamRamTokenTypeTable( this );
		tableTopDomain = new CFBamRamTopDomainTable( this );
		tableTopProject = new CFBamRamTopProjectTable( this );
		tableUInt16Col = new CFBamRamUInt16ColTable( this );
		tableUInt16Def = new CFBamRamUInt16DefTable( this );
		tableUInt16Type = new CFBamRamUInt16TypeTable( this );
		tableUInt32Col = new CFBamRamUInt32ColTable( this );
		tableUInt32Def = new CFBamRamUInt32DefTable( this );
		tableUInt32Type = new CFBamRamUInt32TypeTable( this );
		tableUInt64Col = new CFBamRamUInt64ColTable( this );
		tableUInt64Def = new CFBamRamUInt64DefTable( this );
		tableUInt64Type = new CFBamRamUInt64TypeTable( this );
		tableURLProtocol = new CFBamRamURLProtocolTable( this );
		tableUuidCol = new CFBamRamUuidColTable( this );
		tableUuidDef = new CFBamRamUuidDefTable( this );
		tableUuidGen = new CFBamRamUuidGenTable( this );
		tableUuidType = new CFBamRamUuidTypeTable( this );
		tableValue = new CFBamRamValueTable( this );
	}

	CFBamRamSchema::~CFBamRamSchema() {
		tranOpen = false;
		sessConnected = false;
		if( tableAtom != NULL ) {
			delete tableAtom;
			tableAtom = NULL;
		}
		if( tableBlobCol != NULL ) {
			delete tableBlobCol;
			tableBlobCol = NULL;
		}
		if( tableBlobDef != NULL ) {
			delete tableBlobDef;
			tableBlobDef = NULL;
		}
		if( tableBlobType != NULL ) {
			delete tableBlobType;
			tableBlobType = NULL;
		}
		if( tableBoolCol != NULL ) {
			delete tableBoolCol;
			tableBoolCol = NULL;
		}
		if( tableBoolDef != NULL ) {
			delete tableBoolDef;
			tableBoolDef = NULL;
		}
		if( tableBoolType != NULL ) {
			delete tableBoolType;
			tableBoolType = NULL;
		}
		if( tableChain != NULL ) {
			delete tableChain;
			tableChain = NULL;
		}
		if( tableClearDep != NULL ) {
			delete tableClearDep;
			tableClearDep = NULL;
		}
		if( tableClearSubDep1 != NULL ) {
			delete tableClearSubDep1;
			tableClearSubDep1 = NULL;
		}
		if( tableClearSubDep2 != NULL ) {
			delete tableClearSubDep2;
			tableClearSubDep2 = NULL;
		}
		if( tableClearSubDep3 != NULL ) {
			delete tableClearSubDep3;
			tableClearSubDep3 = NULL;
		}
		if( tableClearTopDep != NULL ) {
			delete tableClearTopDep;
			tableClearTopDep = NULL;
		}
		if( tableCluster != NULL ) {
			delete tableCluster;
			tableCluster = NULL;
		}
		if( tableDateCol != NULL ) {
			delete tableDateCol;
			tableDateCol = NULL;
		}
		if( tableDateDef != NULL ) {
			delete tableDateDef;
			tableDateDef = NULL;
		}
		if( tableDateType != NULL ) {
			delete tableDateType;
			tableDateType = NULL;
		}
		if( tableDelDep != NULL ) {
			delete tableDelDep;
			tableDelDep = NULL;
		}
		if( tableDelSubDep1 != NULL ) {
			delete tableDelSubDep1;
			tableDelSubDep1 = NULL;
		}
		if( tableDelSubDep2 != NULL ) {
			delete tableDelSubDep2;
			tableDelSubDep2 = NULL;
		}
		if( tableDelSubDep3 != NULL ) {
			delete tableDelSubDep3;
			tableDelSubDep3 = NULL;
		}
		if( tableDelTopDep != NULL ) {
			delete tableDelTopDep;
			tableDelTopDep = NULL;
		}
		if( tableDoubleCol != NULL ) {
			delete tableDoubleCol;
			tableDoubleCol = NULL;
		}
		if( tableDoubleDef != NULL ) {
			delete tableDoubleDef;
			tableDoubleDef = NULL;
		}
		if( tableDoubleType != NULL ) {
			delete tableDoubleType;
			tableDoubleType = NULL;
		}
		if( tableEnumDef != NULL ) {
			delete tableEnumDef;
			tableEnumDef = NULL;
		}
		if( tableEnumTag != NULL ) {
			delete tableEnumTag;
			tableEnumTag = NULL;
		}
		if( tableEnumType != NULL ) {
			delete tableEnumType;
			tableEnumType = NULL;
		}
		if( tableFloatCol != NULL ) {
			delete tableFloatCol;
			tableFloatCol = NULL;
		}
		if( tableFloatDef != NULL ) {
			delete tableFloatDef;
			tableFloatDef = NULL;
		}
		if( tableFloatType != NULL ) {
			delete tableFloatType;
			tableFloatType = NULL;
		}
		if( tableHostNode != NULL ) {
			delete tableHostNode;
			tableHostNode = NULL;
		}
		if( tableISOCcy != NULL ) {
			delete tableISOCcy;
			tableISOCcy = NULL;
		}
		if( tableISOCtry != NULL ) {
			delete tableISOCtry;
			tableISOCtry = NULL;
		}
		if( tableISOCtryCcy != NULL ) {
			delete tableISOCtryCcy;
			tableISOCtryCcy = NULL;
		}
		if( tableISOCtryLang != NULL ) {
			delete tableISOCtryLang;
			tableISOCtryLang = NULL;
		}
		if( tableISOLang != NULL ) {
			delete tableISOLang;
			tableISOLang = NULL;
		}
		if( tableISOTZone != NULL ) {
			delete tableISOTZone;
			tableISOTZone = NULL;
		}
		if( tableId16Gen != NULL ) {
			delete tableId16Gen;
			tableId16Gen = NULL;
		}
		if( tableId32Gen != NULL ) {
			delete tableId32Gen;
			tableId32Gen = NULL;
		}
		if( tableId64Gen != NULL ) {
			delete tableId64Gen;
			tableId64Gen = NULL;
		}
		if( tableIndex != NULL ) {
			delete tableIndex;
			tableIndex = NULL;
		}
		if( tableIndexCol != NULL ) {
			delete tableIndexCol;
			tableIndexCol = NULL;
		}
		if( tableInt16Col != NULL ) {
			delete tableInt16Col;
			tableInt16Col = NULL;
		}
		if( tableInt16Def != NULL ) {
			delete tableInt16Def;
			tableInt16Def = NULL;
		}
		if( tableInt16Type != NULL ) {
			delete tableInt16Type;
			tableInt16Type = NULL;
		}
		if( tableInt32Col != NULL ) {
			delete tableInt32Col;
			tableInt32Col = NULL;
		}
		if( tableInt32Def != NULL ) {
			delete tableInt32Def;
			tableInt32Def = NULL;
		}
		if( tableInt32Type != NULL ) {
			delete tableInt32Type;
			tableInt32Type = NULL;
		}
		if( tableInt64Col != NULL ) {
			delete tableInt64Col;
			tableInt64Col = NULL;
		}
		if( tableInt64Def != NULL ) {
			delete tableInt64Def;
			tableInt64Def = NULL;
		}
		if( tableInt64Type != NULL ) {
			delete tableInt64Type;
			tableInt64Type = NULL;
		}
		if( tableLicense != NULL ) {
			delete tableLicense;
			tableLicense = NULL;
		}
		if( tableMajorVersion != NULL ) {
			delete tableMajorVersion;
			tableMajorVersion = NULL;
		}
		if( tableMimeType != NULL ) {
			delete tableMimeType;
			tableMimeType = NULL;
		}
		if( tableMinorVersion != NULL ) {
			delete tableMinorVersion;
			tableMinorVersion = NULL;
		}
		if( tableNmTokenCol != NULL ) {
			delete tableNmTokenCol;
			tableNmTokenCol = NULL;
		}
		if( tableNmTokenDef != NULL ) {
			delete tableNmTokenDef;
			tableNmTokenDef = NULL;
		}
		if( tableNmTokenType != NULL ) {
			delete tableNmTokenType;
			tableNmTokenType = NULL;
		}
		if( tableNmTokensCol != NULL ) {
			delete tableNmTokensCol;
			tableNmTokensCol = NULL;
		}
		if( tableNmTokensDef != NULL ) {
			delete tableNmTokensDef;
			tableNmTokensDef = NULL;
		}
		if( tableNmTokensType != NULL ) {
			delete tableNmTokensType;
			tableNmTokensType = NULL;
		}
		if( tableNumberCol != NULL ) {
			delete tableNumberCol;
			tableNumberCol = NULL;
		}
		if( tableNumberDef != NULL ) {
			delete tableNumberDef;
			tableNumberDef = NULL;
		}
		if( tableNumberType != NULL ) {
			delete tableNumberType;
			tableNumberType = NULL;
		}
		if( tableParam != NULL ) {
			delete tableParam;
			tableParam = NULL;
		}
		if( tablePopDep != NULL ) {
			delete tablePopDep;
			tablePopDep = NULL;
		}
		if( tablePopSubDep1 != NULL ) {
			delete tablePopSubDep1;
			tablePopSubDep1 = NULL;
		}
		if( tablePopSubDep2 != NULL ) {
			delete tablePopSubDep2;
			tablePopSubDep2 = NULL;
		}
		if( tablePopSubDep3 != NULL ) {
			delete tablePopSubDep3;
			tablePopSubDep3 = NULL;
		}
		if( tablePopTopDep != NULL ) {
			delete tablePopTopDep;
			tablePopTopDep = NULL;
		}
		if( tableRelation != NULL ) {
			delete tableRelation;
			tableRelation = NULL;
		}
		if( tableRelationCol != NULL ) {
			delete tableRelationCol;
			tableRelationCol = NULL;
		}
		if( tableSchemaDef != NULL ) {
			delete tableSchemaDef;
			tableSchemaDef = NULL;
		}
		if( tableSchemaRef != NULL ) {
			delete tableSchemaRef;
			tableSchemaRef = NULL;
		}
		if( tableScope != NULL ) {
			delete tableScope;
			tableScope = NULL;
		}
		if( tableSecApp != NULL ) {
			delete tableSecApp;
			tableSecApp = NULL;
		}
		if( tableSecDevice != NULL ) {
			delete tableSecDevice;
			tableSecDevice = NULL;
		}
		if( tableSecForm != NULL ) {
			delete tableSecForm;
			tableSecForm = NULL;
		}
		if( tableSecGroup != NULL ) {
			delete tableSecGroup;
			tableSecGroup = NULL;
		}
		if( tableSecGroupForm != NULL ) {
			delete tableSecGroupForm;
			tableSecGroupForm = NULL;
		}
		if( tableSecGrpInc != NULL ) {
			delete tableSecGrpInc;
			tableSecGrpInc = NULL;
		}
		if( tableSecGrpMemb != NULL ) {
			delete tableSecGrpMemb;
			tableSecGrpMemb = NULL;
		}
		if( tableSecSession != NULL ) {
			delete tableSecSession;
			tableSecSession = NULL;
		}
		if( tableSecUser != NULL ) {
			delete tableSecUser;
			tableSecUser = NULL;
		}
		if( tableServerListFunc != NULL ) {
			delete tableServerListFunc;
			tableServerListFunc = NULL;
		}
		if( tableServerMethod != NULL ) {
			delete tableServerMethod;
			tableServerMethod = NULL;
		}
		if( tableServerObjFunc != NULL ) {
			delete tableServerObjFunc;
			tableServerObjFunc = NULL;
		}
		if( tableServerProc != NULL ) {
			delete tableServerProc;
			tableServerProc = NULL;
		}
		if( tableService != NULL ) {
			delete tableService;
			tableService = NULL;
		}
		if( tableServiceType != NULL ) {
			delete tableServiceType;
			tableServiceType = NULL;
		}
		if( tableStringCol != NULL ) {
			delete tableStringCol;
			tableStringCol = NULL;
		}
		if( tableStringDef != NULL ) {
			delete tableStringDef;
			tableStringDef = NULL;
		}
		if( tableStringType != NULL ) {
			delete tableStringType;
			tableStringType = NULL;
		}
		if( tableSubProject != NULL ) {
			delete tableSubProject;
			tableSubProject = NULL;
		}
		if( tableSysCluster != NULL ) {
			delete tableSysCluster;
			tableSysCluster = NULL;
		}
		if( tableTSecGroup != NULL ) {
			delete tableTSecGroup;
			tableTSecGroup = NULL;
		}
		if( tableTSecGrpInc != NULL ) {
			delete tableTSecGrpInc;
			tableTSecGrpInc = NULL;
		}
		if( tableTSecGrpMemb != NULL ) {
			delete tableTSecGrpMemb;
			tableTSecGrpMemb = NULL;
		}
		if( tableTZDateCol != NULL ) {
			delete tableTZDateCol;
			tableTZDateCol = NULL;
		}
		if( tableTZDateDef != NULL ) {
			delete tableTZDateDef;
			tableTZDateDef = NULL;
		}
		if( tableTZDateType != NULL ) {
			delete tableTZDateType;
			tableTZDateType = NULL;
		}
		if( tableTZTimeCol != NULL ) {
			delete tableTZTimeCol;
			tableTZTimeCol = NULL;
		}
		if( tableTZTimeDef != NULL ) {
			delete tableTZTimeDef;
			tableTZTimeDef = NULL;
		}
		if( tableTZTimeType != NULL ) {
			delete tableTZTimeType;
			tableTZTimeType = NULL;
		}
		if( tableTZTimestampCol != NULL ) {
			delete tableTZTimestampCol;
			tableTZTimestampCol = NULL;
		}
		if( tableTZTimestampDef != NULL ) {
			delete tableTZTimestampDef;
			tableTZTimestampDef = NULL;
		}
		if( tableTZTimestampType != NULL ) {
			delete tableTZTimestampType;
			tableTZTimestampType = NULL;
		}
		if( tableTable != NULL ) {
			delete tableTable;
			tableTable = NULL;
		}
		if( tableTableCol != NULL ) {
			delete tableTableCol;
			tableTableCol = NULL;
		}
		if( tableTenant != NULL ) {
			delete tableTenant;
			tableTenant = NULL;
		}
		if( tableTextCol != NULL ) {
			delete tableTextCol;
			tableTextCol = NULL;
		}
		if( tableTextDef != NULL ) {
			delete tableTextDef;
			tableTextDef = NULL;
		}
		if( tableTextType != NULL ) {
			delete tableTextType;
			tableTextType = NULL;
		}
		if( tableTimeCol != NULL ) {
			delete tableTimeCol;
			tableTimeCol = NULL;
		}
		if( tableTimeDef != NULL ) {
			delete tableTimeDef;
			tableTimeDef = NULL;
		}
		if( tableTimeType != NULL ) {
			delete tableTimeType;
			tableTimeType = NULL;
		}
		if( tableTimestampCol != NULL ) {
			delete tableTimestampCol;
			tableTimestampCol = NULL;
		}
		if( tableTimestampDef != NULL ) {
			delete tableTimestampDef;
			tableTimestampDef = NULL;
		}
		if( tableTimestampType != NULL ) {
			delete tableTimestampType;
			tableTimestampType = NULL;
		}
		if( tableTld != NULL ) {
			delete tableTld;
			tableTld = NULL;
		}
		if( tableTokenCol != NULL ) {
			delete tableTokenCol;
			tableTokenCol = NULL;
		}
		if( tableTokenDef != NULL ) {
			delete tableTokenDef;
			tableTokenDef = NULL;
		}
		if( tableTokenType != NULL ) {
			delete tableTokenType;
			tableTokenType = NULL;
		}
		if( tableTopDomain != NULL ) {
			delete tableTopDomain;
			tableTopDomain = NULL;
		}
		if( tableTopProject != NULL ) {
			delete tableTopProject;
			tableTopProject = NULL;
		}
		if( tableUInt16Col != NULL ) {
			delete tableUInt16Col;
			tableUInt16Col = NULL;
		}
		if( tableUInt16Def != NULL ) {
			delete tableUInt16Def;
			tableUInt16Def = NULL;
		}
		if( tableUInt16Type != NULL ) {
			delete tableUInt16Type;
			tableUInt16Type = NULL;
		}
		if( tableUInt32Col != NULL ) {
			delete tableUInt32Col;
			tableUInt32Col = NULL;
		}
		if( tableUInt32Def != NULL ) {
			delete tableUInt32Def;
			tableUInt32Def = NULL;
		}
		if( tableUInt32Type != NULL ) {
			delete tableUInt32Type;
			tableUInt32Type = NULL;
		}
		if( tableUInt64Col != NULL ) {
			delete tableUInt64Col;
			tableUInt64Col = NULL;
		}
		if( tableUInt64Def != NULL ) {
			delete tableUInt64Def;
			tableUInt64Def = NULL;
		}
		if( tableUInt64Type != NULL ) {
			delete tableUInt64Type;
			tableUInt64Type = NULL;
		}
		if( tableURLProtocol != NULL ) {
			delete tableURLProtocol;
			tableURLProtocol = NULL;
		}
		if( tableUuidCol != NULL ) {
			delete tableUuidCol;
			tableUuidCol = NULL;
		}
		if( tableUuidDef != NULL ) {
			delete tableUuidDef;
			tableUuidDef = NULL;
		}
		if( tableUuidGen != NULL ) {
			delete tableUuidGen;
			tableUuidGen = NULL;
		}
		if( tableUuidType != NULL ) {
			delete tableUuidType;
			tableUuidType = NULL;
		}
		if( tableValue != NULL ) {
			delete tableValue;
			tableValue = NULL;
		}
	}

	bool CFBamRamSchema::isConnected() {
		return( sessConnected );
	}

	bool CFBamRamSchema::connect() {
		if( sessConnected ) {
			return( false );
		}
		else {
			sessConnected = true;
			tranOpen = false;
			return( true );
		}
	}

	bool CFBamRamSchema::connect( const std::string& username, const std::string& password ) {
		static const std::string S_ProcName( "connect" );
		static const std::string S_UserName( "username" );
		static const std::string S_System( "system" );
		static const std::string S_MsgOnlySystem( "Only 'system' is authorized to use a RAM database" );
		if( username.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_UserName );
		}
		if( username != S_System ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_MsgOnlySystem );
		}
		if( sessConnected ) {
			return( false );
		}
		else {
			sessConnected = true;
			tranOpen = false;
			return( true );
		}
	}

	bool CFBamRamSchema::connect( const std::string& loginId, const std::string& password, const std::string& clusterName, const std::string& tenantName ) {
		static const std::string S_ProcName( "connect" );
		static const std::string S_LoginId( "loginId" );
		static const std::string S_ClusterName( "clusterName" );
		static const std::string S_TenantName( "tenantName" );
		static const std::string S_System( "system" );
		static const std::string S_MsgOnlySystemAuthorized( "Only 'system' is authorized to use a RAM database" );
		static const std::string S_MsgOnlySystemClusterAuthorized( "Only the 'system' Cluster is authorized to use a RAM database" );
		static const std::string S_MsgOnlySystemTenantAuthorized( "Only the 'system' Tenant is authorized to use a RAM database" );
		if( loginId.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_LoginId );
		}
		if( clusterName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				3,
				S_ClusterName );
		}
		if( tenantName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				4,
				S_TenantName );
		}
		if( loginId != S_System ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_MsgOnlySystemAuthorized );
		}
		if( clusterName != S_System ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_MsgOnlySystemClusterAuthorized );
		}
		if( tenantName != S_System ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_MsgOnlySystemTenantAuthorized );
		}
		if( sessConnected ) {
			return( false );
		}
		else {
			sessConnected = true;
			tranOpen = false;
			return( true );
		}
	}

	void CFBamRamSchema::disconnect( bool doCommit ) {
		tranOpen = false;
		sessConnected = false;
	}

	//	Transactions are not supported, so pretend there is always one open

	bool CFBamRamSchema::isTransactionOpen() {
		return( tranOpen );
	}

	bool CFBamRamSchema::beginTransaction() {
		if( tranOpen ) {
			return( false );
		}
		tranOpen = true;
		return( true );
	}

	void CFBamRamSchema::commit() {
		tranOpen = false;
	}

	void CFBamRamSchema::rollback() {
		tranOpen = false;
	}

	cfbam::ICFBamSchema* CFBamRamSchema::newSchema() {
		static const std::string S_ProcName( "newSchema" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	int16_t CFBamRamSchema::nextISOCcyIdGen() {
		int16_t next = nextISOCcyIdGenValue++;
		return( next );
	}

	int16_t CFBamRamSchema::nextISOCtryIdGen() {
		int16_t next = nextISOCtryIdGenValue++;
		return( next );
	}

	int16_t CFBamRamSchema::nextISOLangIdGen() {
		int16_t next = nextISOLangIdGenValue++;
		return( next );
	}

	int16_t CFBamRamSchema::nextISOTZoneIdGen() {
		int16_t next = nextISOTZoneIdGenValue++;
		return( next );
	}

	int32_t CFBamRamSchema::nextServiceTypeIdGen() {
		int32_t next = nextServiceTypeIdGenValue++;
		return( next );
	}

	int32_t CFBamRamSchema::nextMimeTypeIdGen() {
		int32_t next = nextMimeTypeIdGenValue++;
		return( next );
	}

	int32_t CFBamRamSchema::nextURLProtocolIdGen() {
		int32_t next = nextURLProtocolIdGenValue++;
		return( next );
	}

	int64_t CFBamRamSchema::nextClusterIdGen() {
		int64_t next = nextClusterIdGenValue++;
		return( next );
	}

	int64_t CFBamRamSchema::nextTenantIdGen() {
		int64_t next = nextTenantIdGenValue++;
		return( next );
	}

	void CFBamRamSchema::releasePreparedStatements() {
	}

	std::string CFBamRamSchema::fileImport( cfsec::CFSecAuthorization* Authorization,
		const std::string& fileName,
		const std::string& fileContent )
	{
		const static std::string S_ProcName( "fileImport" );
		const static std::string S_FileName( "fileName" );
		const static std::string S_FileContent( "fileContent" );
		if( fileName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_FileName );
		}
		if( fileContent.length() <= 0 ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				2,
				S_FileContent );
		}
		cfbam::CFBamSaxLoader* saxLoader = new cfbam::CFBamSaxLoader();
		cfbam::ICFBamSchemaObj* schemaObj = new cfbam::CFBamSchemaObj();
		schemaObj->setBackingStore( this );
		saxLoader->setSchemaObj( schemaObj );
		cfsec::ICFSecClusterObj* useCluster = schemaObj->getClusterTableObj()->readClusterByIdIdx( Authorization->getSecClusterId() );
		cfsec::ICFSecTenantObj* useTenant = schemaObj->getTenantTableObj()->readTenantByIdIdx( Authorization->getSecTenantId() );
		cflib::CFLibCachedMessageLog runlog;
		saxLoader->setLog( &runlog );
		saxLoader->setUseCluster( useCluster );
		saxLoader->setUseTenant( useTenant );
		// MSS TODO WORKING - Need to wrap parseStringContents() with try-catch so it can never crash out
		saxLoader->parseStringContents( fileName, fileContent );
		return( runlog.getCacheContents() );
	}

}
