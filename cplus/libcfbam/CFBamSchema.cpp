// Description: C++18 implementation of a CFBam schema.

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

using namespace std;

#include <cfbam/CFBamSchema.hpp>
#include <cfbam/ICFBamPublic.hpp>

namespace cfbam {

	const std::string CFBamSchema::CLASS_NAME( "CFBamSchema" );

	CFBamSchema::CFBamSchema()
	: ICFBamSchema(),
	  cfsec::ICFSecSchema(),
	  cfint::ICFIntSchema()
 	{
		authorization = NULL;
		tablePerms = NULL;
		configuration = NULL;
		jndiName = NULL;
		schemaDbName = new std::string( "CFBam213" );
		lowerDbSchemaName = new std::string( "CFBam213" );
		std::transform( lowerDbSchemaName->begin(), lowerDbSchemaName->end(), lowerDbSchemaName->begin(), ::tolower );

		tableAtom = NULL;
		tableBlobCol = NULL;
		tableBlobDef = NULL;
		tableBlobType = NULL;
		tableBoolCol = NULL;
		tableBoolDef = NULL;
		tableBoolType = NULL;
		tableChain = NULL;
		tableClearDep = NULL;
		tableClearSubDep1 = NULL;
		tableClearSubDep2 = NULL;
		tableClearSubDep3 = NULL;
		tableClearTopDep = NULL;
		tableCluster = NULL;
		tableDateCol = NULL;
		tableDateDef = NULL;
		tableDateType = NULL;
		tableDelDep = NULL;
		tableDelSubDep1 = NULL;
		tableDelSubDep2 = NULL;
		tableDelSubDep3 = NULL;
		tableDelTopDep = NULL;
		tableDoubleCol = NULL;
		tableDoubleDef = NULL;
		tableDoubleType = NULL;
		tableEnumDef = NULL;
		tableEnumTag = NULL;
		tableEnumType = NULL;
		tableFloatCol = NULL;
		tableFloatDef = NULL;
		tableFloatType = NULL;
		tableHostNode = NULL;
		tableISOCcy = NULL;
		tableISOCtry = NULL;
		tableISOCtryCcy = NULL;
		tableISOCtryLang = NULL;
		tableISOLang = NULL;
		tableISOTZone = NULL;
		tableId16Gen = NULL;
		tableId32Gen = NULL;
		tableId64Gen = NULL;
		tableIndex = NULL;
		tableIndexCol = NULL;
		tableInt16Col = NULL;
		tableInt16Def = NULL;
		tableInt16Type = NULL;
		tableInt32Col = NULL;
		tableInt32Def = NULL;
		tableInt32Type = NULL;
		tableInt64Col = NULL;
		tableInt64Def = NULL;
		tableInt64Type = NULL;
		tableLicense = NULL;
		tableMajorVersion = NULL;
		tableMimeType = NULL;
		tableMinorVersion = NULL;
		tableNmTokenCol = NULL;
		tableNmTokenDef = NULL;
		tableNmTokenType = NULL;
		tableNmTokensCol = NULL;
		tableNmTokensDef = NULL;
		tableNmTokensType = NULL;
		tableNumberCol = NULL;
		tableNumberDef = NULL;
		tableNumberType = NULL;
		tableParam = NULL;
		tablePopDep = NULL;
		tablePopSubDep1 = NULL;
		tablePopSubDep2 = NULL;
		tablePopSubDep3 = NULL;
		tablePopTopDep = NULL;
		tableRelation = NULL;
		tableRelationCol = NULL;
		tableSchemaDef = NULL;
		tableSchemaRef = NULL;
		tableScope = NULL;
		tableSecApp = NULL;
		tableSecDevice = NULL;
		tableSecForm = NULL;
		tableSecGroup = NULL;
		tableSecGroupForm = NULL;
		tableSecGrpInc = NULL;
		tableSecGrpMemb = NULL;
		tableSecSession = NULL;
		tableSecUser = NULL;
		tableServerListFunc = NULL;
		tableServerMethod = NULL;
		tableServerObjFunc = NULL;
		tableServerProc = NULL;
		tableService = NULL;
		tableServiceType = NULL;
		tableStringCol = NULL;
		tableStringDef = NULL;
		tableStringType = NULL;
		tableSubProject = NULL;
		tableSysCluster = NULL;
		tableTSecGroup = NULL;
		tableTSecGrpInc = NULL;
		tableTSecGrpMemb = NULL;
		tableTZDateCol = NULL;
		tableTZDateDef = NULL;
		tableTZDateType = NULL;
		tableTZTimeCol = NULL;
		tableTZTimeDef = NULL;
		tableTZTimeType = NULL;
		tableTZTimestampCol = NULL;
		tableTZTimestampDef = NULL;
		tableTZTimestampType = NULL;
		tableTable = NULL;
		tableTableCol = NULL;
		tableTenant = NULL;
		tableTextCol = NULL;
		tableTextDef = NULL;
		tableTextType = NULL;
		tableTimeCol = NULL;
		tableTimeDef = NULL;
		tableTimeType = NULL;
		tableTimestampCol = NULL;
		tableTimestampDef = NULL;
		tableTimestampType = NULL;
		tableTld = NULL;
		tableTokenCol = NULL;
		tableTokenDef = NULL;
		tableTokenType = NULL;
		tableTopDomain = NULL;
		tableTopProject = NULL;
		tableUInt16Col = NULL;
		tableUInt16Def = NULL;
		tableUInt16Type = NULL;
		tableUInt32Col = NULL;
		tableUInt32Def = NULL;
		tableUInt32Type = NULL;
		tableUInt64Col = NULL;
		tableUInt64Def = NULL;
		tableUInt64Type = NULL;
		tableURLProtocol = NULL;
		tableUuidCol = NULL;
		tableUuidDef = NULL;
		tableUuidGen = NULL;
		tableUuidType = NULL;
		tableValue = NULL;
	}

	CFBamSchema::CFBamSchema( cfsec::CFSecConfigurationFile* conf )
	: ICFBamSchema(),
	  cfsec::ICFSecSchema(),
	  cfint::ICFIntSchema()
 	{
		static const std::string S_ProcName( "CFBamSchema-constructor" );
		static const std::string S_Conf( "conf" );
		if( conf == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_Conf );
		}
		authorization = NULL;
		tablePerms = NULL;
		configuration = conf;
		jndiName = NULL;
		schemaDbName = new std::string( "CFBam213" );
		lowerDbSchemaName = new std::string( "CFBam213" );
		std::transform( lowerDbSchemaName->begin(), lowerDbSchemaName->end(), lowerDbSchemaName->begin(), ::tolower );
		jndiName = NULL;

		tableAtom = NULL;
		tableBlobCol = NULL;
		tableBlobDef = NULL;
		tableBlobType = NULL;
		tableBoolCol = NULL;
		tableBoolDef = NULL;
		tableBoolType = NULL;
		tableChain = NULL;
		tableClearDep = NULL;
		tableClearSubDep1 = NULL;
		tableClearSubDep2 = NULL;
		tableClearSubDep3 = NULL;
		tableClearTopDep = NULL;
		tableCluster = NULL;
		tableDateCol = NULL;
		tableDateDef = NULL;
		tableDateType = NULL;
		tableDelDep = NULL;
		tableDelSubDep1 = NULL;
		tableDelSubDep2 = NULL;
		tableDelSubDep3 = NULL;
		tableDelTopDep = NULL;
		tableDoubleCol = NULL;
		tableDoubleDef = NULL;
		tableDoubleType = NULL;
		tableEnumDef = NULL;
		tableEnumTag = NULL;
		tableEnumType = NULL;
		tableFloatCol = NULL;
		tableFloatDef = NULL;
		tableFloatType = NULL;
		tableHostNode = NULL;
		tableISOCcy = NULL;
		tableISOCtry = NULL;
		tableISOCtryCcy = NULL;
		tableISOCtryLang = NULL;
		tableISOLang = NULL;
		tableISOTZone = NULL;
		tableId16Gen = NULL;
		tableId32Gen = NULL;
		tableId64Gen = NULL;
		tableIndex = NULL;
		tableIndexCol = NULL;
		tableInt16Col = NULL;
		tableInt16Def = NULL;
		tableInt16Type = NULL;
		tableInt32Col = NULL;
		tableInt32Def = NULL;
		tableInt32Type = NULL;
		tableInt64Col = NULL;
		tableInt64Def = NULL;
		tableInt64Type = NULL;
		tableLicense = NULL;
		tableMajorVersion = NULL;
		tableMimeType = NULL;
		tableMinorVersion = NULL;
		tableNmTokenCol = NULL;
		tableNmTokenDef = NULL;
		tableNmTokenType = NULL;
		tableNmTokensCol = NULL;
		tableNmTokensDef = NULL;
		tableNmTokensType = NULL;
		tableNumberCol = NULL;
		tableNumberDef = NULL;
		tableNumberType = NULL;
		tableParam = NULL;
		tablePopDep = NULL;
		tablePopSubDep1 = NULL;
		tablePopSubDep2 = NULL;
		tablePopSubDep3 = NULL;
		tablePopTopDep = NULL;
		tableRelation = NULL;
		tableRelationCol = NULL;
		tableSchemaDef = NULL;
		tableSchemaRef = NULL;
		tableScope = NULL;
		tableSecApp = NULL;
		tableSecDevice = NULL;
		tableSecForm = NULL;
		tableSecGroup = NULL;
		tableSecGroupForm = NULL;
		tableSecGrpInc = NULL;
		tableSecGrpMemb = NULL;
		tableSecSession = NULL;
		tableSecUser = NULL;
		tableServerListFunc = NULL;
		tableServerMethod = NULL;
		tableServerObjFunc = NULL;
		tableServerProc = NULL;
		tableService = NULL;
		tableServiceType = NULL;
		tableStringCol = NULL;
		tableStringDef = NULL;
		tableStringType = NULL;
		tableSubProject = NULL;
		tableSysCluster = NULL;
		tableTSecGroup = NULL;
		tableTSecGrpInc = NULL;
		tableTSecGrpMemb = NULL;
		tableTZDateCol = NULL;
		tableTZDateDef = NULL;
		tableTZDateType = NULL;
		tableTZTimeCol = NULL;
		tableTZTimeDef = NULL;
		tableTZTimeType = NULL;
		tableTZTimestampCol = NULL;
		tableTZTimestampDef = NULL;
		tableTZTimestampType = NULL;
		tableTable = NULL;
		tableTableCol = NULL;
		tableTenant = NULL;
		tableTextCol = NULL;
		tableTextDef = NULL;
		tableTextType = NULL;
		tableTimeCol = NULL;
		tableTimeDef = NULL;
		tableTimeType = NULL;
		tableTimestampCol = NULL;
		tableTimestampDef = NULL;
		tableTimestampType = NULL;
		tableTld = NULL;
		tableTokenCol = NULL;
		tableTokenDef = NULL;
		tableTokenType = NULL;
		tableTopDomain = NULL;
		tableTopProject = NULL;
		tableUInt16Col = NULL;
		tableUInt16Def = NULL;
		tableUInt16Type = NULL;
		tableUInt32Col = NULL;
		tableUInt32Def = NULL;
		tableUInt32Type = NULL;
		tableUInt64Col = NULL;
		tableUInt64Def = NULL;
		tableUInt64Type = NULL;
		tableURLProtocol = NULL;
		tableUuidCol = NULL;
		tableUuidDef = NULL;
		tableUuidGen = NULL;
		tableUuidType = NULL;
		tableValue = NULL;
	}

	CFBamSchema::CFBamSchema( const std::string& argJndiName )
	: ICFBamSchema(),
	  cfsec::ICFSecSchema(),
	  cfint::ICFIntSchema()
	{
		static const std::string S_ProcName( "CFBamSchema-constructor" );
		static const std::string S_ArgJndiName( "argJndiName" );
		if( argJndiName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_ArgJndiName );
		}
		authorization = NULL;
		tablePerms = NULL;
		configuration = NULL;
		jndiName = new std::string( argJndiName );
		schemaDbName = new std::string( "CFBam213" );
		lowerDbSchemaName = new std::string( "CFBam213" );
		std::transform( lowerDbSchemaName->begin(), lowerDbSchemaName->end(), lowerDbSchemaName->begin(), ::tolower );

		tableAtom = NULL;
		tableBlobCol = NULL;
		tableBlobDef = NULL;
		tableBlobType = NULL;
		tableBoolCol = NULL;
		tableBoolDef = NULL;
		tableBoolType = NULL;
		tableChain = NULL;
		tableClearDep = NULL;
		tableClearSubDep1 = NULL;
		tableClearSubDep2 = NULL;
		tableClearSubDep3 = NULL;
		tableClearTopDep = NULL;
		tableCluster = NULL;
		tableDateCol = NULL;
		tableDateDef = NULL;
		tableDateType = NULL;
		tableDelDep = NULL;
		tableDelSubDep1 = NULL;
		tableDelSubDep2 = NULL;
		tableDelSubDep3 = NULL;
		tableDelTopDep = NULL;
		tableDoubleCol = NULL;
		tableDoubleDef = NULL;
		tableDoubleType = NULL;
		tableEnumDef = NULL;
		tableEnumTag = NULL;
		tableEnumType = NULL;
		tableFloatCol = NULL;
		tableFloatDef = NULL;
		tableFloatType = NULL;
		tableHostNode = NULL;
		tableISOCcy = NULL;
		tableISOCtry = NULL;
		tableISOCtryCcy = NULL;
		tableISOCtryLang = NULL;
		tableISOLang = NULL;
		tableISOTZone = NULL;
		tableId16Gen = NULL;
		tableId32Gen = NULL;
		tableId64Gen = NULL;
		tableIndex = NULL;
		tableIndexCol = NULL;
		tableInt16Col = NULL;
		tableInt16Def = NULL;
		tableInt16Type = NULL;
		tableInt32Col = NULL;
		tableInt32Def = NULL;
		tableInt32Type = NULL;
		tableInt64Col = NULL;
		tableInt64Def = NULL;
		tableInt64Type = NULL;
		tableLicense = NULL;
		tableMajorVersion = NULL;
		tableMimeType = NULL;
		tableMinorVersion = NULL;
		tableNmTokenCol = NULL;
		tableNmTokenDef = NULL;
		tableNmTokenType = NULL;
		tableNmTokensCol = NULL;
		tableNmTokensDef = NULL;
		tableNmTokensType = NULL;
		tableNumberCol = NULL;
		tableNumberDef = NULL;
		tableNumberType = NULL;
		tableParam = NULL;
		tablePopDep = NULL;
		tablePopSubDep1 = NULL;
		tablePopSubDep2 = NULL;
		tablePopSubDep3 = NULL;
		tablePopTopDep = NULL;
		tableRelation = NULL;
		tableRelationCol = NULL;
		tableSchemaDef = NULL;
		tableSchemaRef = NULL;
		tableScope = NULL;
		tableSecApp = NULL;
		tableSecDevice = NULL;
		tableSecForm = NULL;
		tableSecGroup = NULL;
		tableSecGroupForm = NULL;
		tableSecGrpInc = NULL;
		tableSecGrpMemb = NULL;
		tableSecSession = NULL;
		tableSecUser = NULL;
		tableServerListFunc = NULL;
		tableServerMethod = NULL;
		tableServerObjFunc = NULL;
		tableServerProc = NULL;
		tableService = NULL;
		tableServiceType = NULL;
		tableStringCol = NULL;
		tableStringDef = NULL;
		tableStringType = NULL;
		tableSubProject = NULL;
		tableSysCluster = NULL;
		tableTSecGroup = NULL;
		tableTSecGrpInc = NULL;
		tableTSecGrpMemb = NULL;
		tableTZDateCol = NULL;
		tableTZDateDef = NULL;
		tableTZDateType = NULL;
		tableTZTimeCol = NULL;
		tableTZTimeDef = NULL;
		tableTZTimeType = NULL;
		tableTZTimestampCol = NULL;
		tableTZTimestampDef = NULL;
		tableTZTimestampType = NULL;
		tableTable = NULL;
		tableTableCol = NULL;
		tableTenant = NULL;
		tableTextCol = NULL;
		tableTextDef = NULL;
		tableTextType = NULL;
		tableTimeCol = NULL;
		tableTimeDef = NULL;
		tableTimeType = NULL;
		tableTimestampCol = NULL;
		tableTimestampDef = NULL;
		tableTimestampType = NULL;
		tableTld = NULL;
		tableTokenCol = NULL;
		tableTokenDef = NULL;
		tableTokenType = NULL;
		tableTopDomain = NULL;
		tableTopProject = NULL;
		tableUInt16Col = NULL;
		tableUInt16Def = NULL;
		tableUInt16Type = NULL;
		tableUInt32Col = NULL;
		tableUInt32Def = NULL;
		tableUInt32Type = NULL;
		tableUInt64Col = NULL;
		tableUInt64Def = NULL;
		tableUInt64Type = NULL;
		tableURLProtocol = NULL;
		tableUuidCol = NULL;
		tableUuidDef = NULL;
		tableUuidGen = NULL;
		tableUuidType = NULL;
		tableValue = NULL;
	}

	CFBamSchema::~CFBamSchema() {
		authorization = NULL;
		if( tablePerms != NULL ) {
			delete tablePerms;
			tablePerms = NULL;
		}
		configuration = NULL;
		if( jndiName != NULL ) {
			delete jndiName;
			jndiName = NULL;
		}
		if( schemaDbName != NULL ) {
			delete schemaDbName;
			schemaDbName = NULL;
		}
		if( lowerDbSchemaName != NULL ) {
			delete lowerDbSchemaName;
			lowerDbSchemaName = NULL;
		}

		if( tableChain != NULL ) {
			delete tableChain;
			tableChain = NULL;
		}
		if( tableCluster != NULL ) {
			delete tableCluster;
			tableCluster = NULL;
		}
		if( tableEnumTag != NULL ) {
			delete tableEnumTag;
			tableEnumTag = NULL;
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
		if( tableIndexCol != NULL ) {
			delete tableIndexCol;
			tableIndexCol = NULL;
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
		if( tableParam != NULL ) {
			delete tableParam;
			tableParam = NULL;
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
		if( tableServerObjFunc != NULL ) {
			delete tableServerObjFunc;
			tableServerObjFunc = NULL;
		}
		if( tableServerProc != NULL ) {
			delete tableServerProc;
			tableServerProc = NULL;
		}
		if( tableServerListFunc != NULL ) {
			delete tableServerListFunc;
			tableServerListFunc = NULL;
		}
		if( tableServerMethod != NULL ) {
			delete tableServerMethod;
			tableServerMethod = NULL;
		}
		if( tableTable != NULL ) {
			delete tableTable;
			tableTable = NULL;
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
		if( tableClearDep != NULL ) {
			delete tableClearDep;
			tableClearDep = NULL;
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
		if( tableDelDep != NULL ) {
			delete tableDelDep;
			tableDelDep = NULL;
		}
		if( tableIndex != NULL ) {
			delete tableIndex;
			tableIndex = NULL;
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
		if( tablePopDep != NULL ) {
			delete tablePopDep;
			tablePopDep = NULL;
		}
		if( tableRelation != NULL ) {
			delete tableRelation;
			tableRelation = NULL;
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
		if( tableService != NULL ) {
			delete tableService;
			tableService = NULL;
		}
		if( tableServiceType != NULL ) {
			delete tableServiceType;
			tableServiceType = NULL;
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
		if( tableTenant != NULL ) {
			delete tableTenant;
			tableTenant = NULL;
		}
		if( tableTld != NULL ) {
			delete tableTld;
			tableTld = NULL;
		}
		if( tableTopDomain != NULL ) {
			delete tableTopDomain;
			tableTopDomain = NULL;
		}
		if( tableTopProject != NULL ) {
			delete tableTopProject;
			tableTopProject = NULL;
		}
		if( tableURLProtocol != NULL ) {
			delete tableURLProtocol;
			tableURLProtocol = NULL;
		}
		if( tableBlobType != NULL ) {
			delete tableBlobType;
			tableBlobType = NULL;
		}
		if( tableBlobCol != NULL ) {
			delete tableBlobCol;
			tableBlobCol = NULL;
		}
		if( tableBlobDef != NULL ) {
			delete tableBlobDef;
			tableBlobDef = NULL;
		}
		if( tableBoolType != NULL ) {
			delete tableBoolType;
			tableBoolType = NULL;
		}
		if( tableBoolCol != NULL ) {
			delete tableBoolCol;
			tableBoolCol = NULL;
		}
		if( tableBoolDef != NULL ) {
			delete tableBoolDef;
			tableBoolDef = NULL;
		}
		if( tableDateType != NULL ) {
			delete tableDateType;
			tableDateType = NULL;
		}
		if( tableDateCol != NULL ) {
			delete tableDateCol;
			tableDateCol = NULL;
		}
		if( tableDateDef != NULL ) {
			delete tableDateDef;
			tableDateDef = NULL;
		}
		if( tableDoubleType != NULL ) {
			delete tableDoubleType;
			tableDoubleType = NULL;
		}
		if( tableDoubleCol != NULL ) {
			delete tableDoubleCol;
			tableDoubleCol = NULL;
		}
		if( tableDoubleDef != NULL ) {
			delete tableDoubleDef;
			tableDoubleDef = NULL;
		}
		if( tableFloatType != NULL ) {
			delete tableFloatType;
			tableFloatType = NULL;
		}
		if( tableFloatCol != NULL ) {
			delete tableFloatCol;
			tableFloatCol = NULL;
		}
		if( tableFloatDef != NULL ) {
			delete tableFloatDef;
			tableFloatDef = NULL;
		}
		if( tableId16Gen != NULL ) {
			delete tableId16Gen;
			tableId16Gen = NULL;
		}
		if( tableInt16Type != NULL ) {
			delete tableInt16Type;
			tableInt16Type = NULL;
		}
		if( tableEnumType != NULL ) {
			delete tableEnumType;
			tableEnumType = NULL;
		}
		if( tableEnumDef != NULL ) {
			delete tableEnumDef;
			tableEnumDef = NULL;
		}
		if( tableInt16Col != NULL ) {
			delete tableInt16Col;
			tableInt16Col = NULL;
		}
		if( tableInt16Def != NULL ) {
			delete tableInt16Def;
			tableInt16Def = NULL;
		}
		if( tableId32Gen != NULL ) {
			delete tableId32Gen;
			tableId32Gen = NULL;
		}
		if( tableInt32Type != NULL ) {
			delete tableInt32Type;
			tableInt32Type = NULL;
		}
		if( tableInt32Col != NULL ) {
			delete tableInt32Col;
			tableInt32Col = NULL;
		}
		if( tableInt32Def != NULL ) {
			delete tableInt32Def;
			tableInt32Def = NULL;
		}
		if( tableId64Gen != NULL ) {
			delete tableId64Gen;
			tableId64Gen = NULL;
		}
		if( tableInt64Type != NULL ) {
			delete tableInt64Type;
			tableInt64Type = NULL;
		}
		if( tableInt64Col != NULL ) {
			delete tableInt64Col;
			tableInt64Col = NULL;
		}
		if( tableInt64Def != NULL ) {
			delete tableInt64Def;
			tableInt64Def = NULL;
		}
		if( tableNmTokenType != NULL ) {
			delete tableNmTokenType;
			tableNmTokenType = NULL;
		}
		if( tableNmTokenCol != NULL ) {
			delete tableNmTokenCol;
			tableNmTokenCol = NULL;
		}
		if( tableNmTokenDef != NULL ) {
			delete tableNmTokenDef;
			tableNmTokenDef = NULL;
		}
		if( tableNmTokensType != NULL ) {
			delete tableNmTokensType;
			tableNmTokensType = NULL;
		}
		if( tableNmTokensCol != NULL ) {
			delete tableNmTokensCol;
			tableNmTokensCol = NULL;
		}
		if( tableNmTokensDef != NULL ) {
			delete tableNmTokensDef;
			tableNmTokensDef = NULL;
		}
		if( tableNumberType != NULL ) {
			delete tableNumberType;
			tableNumberType = NULL;
		}
		if( tableNumberCol != NULL ) {
			delete tableNumberCol;
			tableNumberCol = NULL;
		}
		if( tableNumberDef != NULL ) {
			delete tableNumberDef;
			tableNumberDef = NULL;
		}
		if( tableStringType != NULL ) {
			delete tableStringType;
			tableStringType = NULL;
		}
		if( tableStringCol != NULL ) {
			delete tableStringCol;
			tableStringCol = NULL;
		}
		if( tableStringDef != NULL ) {
			delete tableStringDef;
			tableStringDef = NULL;
		}
		if( tableTZDateType != NULL ) {
			delete tableTZDateType;
			tableTZDateType = NULL;
		}
		if( tableTZDateCol != NULL ) {
			delete tableTZDateCol;
			tableTZDateCol = NULL;
		}
		if( tableTZDateDef != NULL ) {
			delete tableTZDateDef;
			tableTZDateDef = NULL;
		}
		if( tableTZTimeType != NULL ) {
			delete tableTZTimeType;
			tableTZTimeType = NULL;
		}
		if( tableTZTimeCol != NULL ) {
			delete tableTZTimeCol;
			tableTZTimeCol = NULL;
		}
		if( tableTZTimeDef != NULL ) {
			delete tableTZTimeDef;
			tableTZTimeDef = NULL;
		}
		if( tableTZTimestampType != NULL ) {
			delete tableTZTimestampType;
			tableTZTimestampType = NULL;
		}
		if( tableTZTimestampCol != NULL ) {
			delete tableTZTimestampCol;
			tableTZTimestampCol = NULL;
		}
		if( tableTZTimestampDef != NULL ) {
			delete tableTZTimestampDef;
			tableTZTimestampDef = NULL;
		}
		if( tableTextType != NULL ) {
			delete tableTextType;
			tableTextType = NULL;
		}
		if( tableTextCol != NULL ) {
			delete tableTextCol;
			tableTextCol = NULL;
		}
		if( tableTextDef != NULL ) {
			delete tableTextDef;
			tableTextDef = NULL;
		}
		if( tableTimeType != NULL ) {
			delete tableTimeType;
			tableTimeType = NULL;
		}
		if( tableTimeCol != NULL ) {
			delete tableTimeCol;
			tableTimeCol = NULL;
		}
		if( tableTimeDef != NULL ) {
			delete tableTimeDef;
			tableTimeDef = NULL;
		}
		if( tableTimestampType != NULL ) {
			delete tableTimestampType;
			tableTimestampType = NULL;
		}
		if( tableTimestampCol != NULL ) {
			delete tableTimestampCol;
			tableTimestampCol = NULL;
		}
		if( tableTimestampDef != NULL ) {
			delete tableTimestampDef;
			tableTimestampDef = NULL;
		}
		if( tableTokenType != NULL ) {
			delete tableTokenType;
			tableTokenType = NULL;
		}
		if( tableTokenCol != NULL ) {
			delete tableTokenCol;
			tableTokenCol = NULL;
		}
		if( tableTokenDef != NULL ) {
			delete tableTokenDef;
			tableTokenDef = NULL;
		}
		if( tableUInt16Type != NULL ) {
			delete tableUInt16Type;
			tableUInt16Type = NULL;
		}
		if( tableUInt16Col != NULL ) {
			delete tableUInt16Col;
			tableUInt16Col = NULL;
		}
		if( tableUInt16Def != NULL ) {
			delete tableUInt16Def;
			tableUInt16Def = NULL;
		}
		if( tableUInt32Type != NULL ) {
			delete tableUInt32Type;
			tableUInt32Type = NULL;
		}
		if( tableUInt32Col != NULL ) {
			delete tableUInt32Col;
			tableUInt32Col = NULL;
		}
		if( tableUInt32Def != NULL ) {
			delete tableUInt32Def;
			tableUInt32Def = NULL;
		}
		if( tableUInt64Type != NULL ) {
			delete tableUInt64Type;
			tableUInt64Type = NULL;
		}
		if( tableUInt64Col != NULL ) {
			delete tableUInt64Col;
			tableUInt64Col = NULL;
		}
		if( tableUInt64Def != NULL ) {
			delete tableUInt64Def;
			tableUInt64Def = NULL;
		}
		if( tableUuidGen != NULL ) {
			delete tableUuidGen;
			tableUuidGen = NULL;
		}
		if( tableUuidType != NULL ) {
			delete tableUuidType;
			tableUuidType = NULL;
		}
		if( tableUuidCol != NULL ) {
			delete tableUuidCol;
			tableUuidCol = NULL;
		}
		if( tableUuidDef != NULL ) {
			delete tableUuidDef;
			tableUuidDef = NULL;
		}
		if( tableAtom != NULL ) {
			delete tableAtom;
			tableAtom = NULL;
		}
		if( tableTableCol != NULL ) {
			delete tableTableCol;
			tableTableCol = NULL;
		}
		if( tableValue != NULL ) {
			delete tableValue;
			tableValue = NULL;
		}
	}

	cfsec::CFSecConfigurationFile* CFBamSchema::getConfigurationFile() const {
		return( configuration );
	}

	void CFBamSchema::setConfigurationFile( cfsec::CFSecConfigurationFile* value ) {
		configuration = NULL;
		if( value != NULL ) {
			configuration = value;
			if( jndiName != NULL ) {
				delete jndiName;
				jndiName = NULL;
			}
		}
	}

	cfsec::CFSecAuthorization* CFBamSchema::getAuthorization() const {
		return( authorization );
	}

	void CFBamSchema::setAuthorization( cfsec::CFSecAuthorization* value ) {
		authorization = value;
	}

	const std::string* CFBamSchema::getJndiName() const {
		return( jndiName );
	}

	void CFBamSchema::setJndiName( const std::string& value ) {
		if( jndiName != NULL ) {
			delete jndiName;
			jndiName = NULL;
		}
		if( value.length() > 0 ) {
			jndiName = new std::string( value );
			configuration = NULL;
		}
	}

	bool CFBamSchema::isConnected() {
		static const std::string S_ProcName( "isConnected" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	bool CFBamSchema::connect() {
		static const std::string S_ProcName( "connect" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	bool CFBamSchema::connect( const std::string& username, const std::string& password ) {
		static const std::string S_ProcName( "connect-userpw" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	bool CFBamSchema::connect( const std::string& loginId, const std::string& password, const std::string& clusterName, const std::string& tenantName ) {
		static const std::string S_ProcName( "connect-full" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	void CFBamSchema::disconnect( bool doCommit ) {
		static const std::string S_ProcName( "disconnect" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	void CFBamSchema::logout( cfsec::CFSecAuthorization* auth ) {
		static const std::string S_ProcName( "logout" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	ICFBamSchema* CFBamSchema::newSchema() {
		static const std::string S_ProcName( "newSchema" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	std::string CFBamSchema::fileImport( const cfsec::CFSecAuthorization* auth, const std::string& fileName, const std::string& fileContent ) {
		static const std::string S_ProcName( "fileImport" );
		static const std::string S_Msg( "You must overload this method to apply a SAX Parser to the file contents" );
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME,
			S_ProcName,
			S_Msg );
	}

	int16_t CFBamSchema::nextISOCcyIdGen() {
		static const std::string S_ProcName( "nextISOCcyIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int16_t CFBamSchema::nextISOCtryIdGen() {
		static const std::string S_ProcName( "nextISOCtryIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int16_t CFBamSchema::nextISOLangIdGen() {
		static const std::string S_ProcName( "nextISOLangIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int16_t CFBamSchema::nextISOTZoneIdGen() {
		static const std::string S_ProcName( "nextISOTZoneIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int32_t CFBamSchema::nextServiceTypeIdGen() {
		static const std::string S_ProcName( "nextServiceTypeIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int32_t CFBamSchema::nextMimeTypeIdGen() {
		static const std::string S_ProcName( "nextMimeTypeIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int32_t CFBamSchema::nextURLProtocolIdGen() {
		static const std::string S_ProcName( "nextURLProtocolIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int64_t CFBamSchema::nextClusterIdGen() {
		static const std::string S_ProcName( "nextClusterIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	int64_t CFBamSchema::nextTenantIdGen() {
		static const std::string S_ProcName( "nextTenantIdGen" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfbam::ICFBamAtomTable* CFBamSchema::getTableAtom() {
		return( tableAtom );
	}

	void CFBamSchema::setTableAtom( cfbam::ICFBamAtomTable* value ) {
		if( tableAtom != NULL ) {
			delete tableAtom;
			tableAtom = NULL;
		}
		tableAtom = value;
	}

	cfbam::ICFBamBlobColTable* CFBamSchema::getTableBlobCol() {
		return( tableBlobCol );
	}

	void CFBamSchema::setTableBlobCol( cfbam::ICFBamBlobColTable* value ) {
		if( tableBlobCol != NULL ) {
			delete tableBlobCol;
			tableBlobCol = NULL;
		}
		tableBlobCol = value;
	}

	cfbam::ICFBamBlobDefTable* CFBamSchema::getTableBlobDef() {
		return( tableBlobDef );
	}

	void CFBamSchema::setTableBlobDef( cfbam::ICFBamBlobDefTable* value ) {
		if( tableBlobDef != NULL ) {
			delete tableBlobDef;
			tableBlobDef = NULL;
		}
		tableBlobDef = value;
	}

	cfbam::ICFBamBlobTypeTable* CFBamSchema::getTableBlobType() {
		return( tableBlobType );
	}

	void CFBamSchema::setTableBlobType( cfbam::ICFBamBlobTypeTable* value ) {
		if( tableBlobType != NULL ) {
			delete tableBlobType;
			tableBlobType = NULL;
		}
		tableBlobType = value;
	}

	cfbam::ICFBamBoolColTable* CFBamSchema::getTableBoolCol() {
		return( tableBoolCol );
	}

	void CFBamSchema::setTableBoolCol( cfbam::ICFBamBoolColTable* value ) {
		if( tableBoolCol != NULL ) {
			delete tableBoolCol;
			tableBoolCol = NULL;
		}
		tableBoolCol = value;
	}

	cfbam::ICFBamBoolDefTable* CFBamSchema::getTableBoolDef() {
		return( tableBoolDef );
	}

	void CFBamSchema::setTableBoolDef( cfbam::ICFBamBoolDefTable* value ) {
		if( tableBoolDef != NULL ) {
			delete tableBoolDef;
			tableBoolDef = NULL;
		}
		tableBoolDef = value;
	}

	cfbam::ICFBamBoolTypeTable* CFBamSchema::getTableBoolType() {
		return( tableBoolType );
	}

	void CFBamSchema::setTableBoolType( cfbam::ICFBamBoolTypeTable* value ) {
		if( tableBoolType != NULL ) {
			delete tableBoolType;
			tableBoolType = NULL;
		}
		tableBoolType = value;
	}

	cfbam::ICFBamChainTable* CFBamSchema::getTableChain() {
		return( tableChain );
	}

	void CFBamSchema::setTableChain( cfbam::ICFBamChainTable* value ) {
		if( tableChain != NULL ) {
			delete tableChain;
			tableChain = NULL;
		}
		tableChain = value;
	}

	cfbam::ICFBamClearDepTable* CFBamSchema::getTableClearDep() {
		return( tableClearDep );
	}

	void CFBamSchema::setTableClearDep( cfbam::ICFBamClearDepTable* value ) {
		if( tableClearDep != NULL ) {
			delete tableClearDep;
			tableClearDep = NULL;
		}
		tableClearDep = value;
	}

	cfbam::ICFBamClearSubDep1Table* CFBamSchema::getTableClearSubDep1() {
		return( tableClearSubDep1 );
	}

	void CFBamSchema::setTableClearSubDep1( cfbam::ICFBamClearSubDep1Table* value ) {
		if( tableClearSubDep1 != NULL ) {
			delete tableClearSubDep1;
			tableClearSubDep1 = NULL;
		}
		tableClearSubDep1 = value;
	}

	cfbam::ICFBamClearSubDep2Table* CFBamSchema::getTableClearSubDep2() {
		return( tableClearSubDep2 );
	}

	void CFBamSchema::setTableClearSubDep2( cfbam::ICFBamClearSubDep2Table* value ) {
		if( tableClearSubDep2 != NULL ) {
			delete tableClearSubDep2;
			tableClearSubDep2 = NULL;
		}
		tableClearSubDep2 = value;
	}

	cfbam::ICFBamClearSubDep3Table* CFBamSchema::getTableClearSubDep3() {
		return( tableClearSubDep3 );
	}

	void CFBamSchema::setTableClearSubDep3( cfbam::ICFBamClearSubDep3Table* value ) {
		if( tableClearSubDep3 != NULL ) {
			delete tableClearSubDep3;
			tableClearSubDep3 = NULL;
		}
		tableClearSubDep3 = value;
	}

	cfbam::ICFBamClearTopDepTable* CFBamSchema::getTableClearTopDep() {
		return( tableClearTopDep );
	}

	void CFBamSchema::setTableClearTopDep( cfbam::ICFBamClearTopDepTable* value ) {
		if( tableClearTopDep != NULL ) {
			delete tableClearTopDep;
			tableClearTopDep = NULL;
		}
		tableClearTopDep = value;
	}

	cfsec::ICFSecClusterTable* CFBamSchema::getTableCluster() {
		return( tableCluster );
	}

	void CFBamSchema::setTableCluster( cfsec::ICFSecClusterTable* value ) {
		if( tableCluster != NULL ) {
			delete tableCluster;
			tableCluster = NULL;
		}
		tableCluster = value;
	}

	cfbam::ICFBamDateColTable* CFBamSchema::getTableDateCol() {
		return( tableDateCol );
	}

	void CFBamSchema::setTableDateCol( cfbam::ICFBamDateColTable* value ) {
		if( tableDateCol != NULL ) {
			delete tableDateCol;
			tableDateCol = NULL;
		}
		tableDateCol = value;
	}

	cfbam::ICFBamDateDefTable* CFBamSchema::getTableDateDef() {
		return( tableDateDef );
	}

	void CFBamSchema::setTableDateDef( cfbam::ICFBamDateDefTable* value ) {
		if( tableDateDef != NULL ) {
			delete tableDateDef;
			tableDateDef = NULL;
		}
		tableDateDef = value;
	}

	cfbam::ICFBamDateTypeTable* CFBamSchema::getTableDateType() {
		return( tableDateType );
	}

	void CFBamSchema::setTableDateType( cfbam::ICFBamDateTypeTable* value ) {
		if( tableDateType != NULL ) {
			delete tableDateType;
			tableDateType = NULL;
		}
		tableDateType = value;
	}

	cfbam::ICFBamDelDepTable* CFBamSchema::getTableDelDep() {
		return( tableDelDep );
	}

	void CFBamSchema::setTableDelDep( cfbam::ICFBamDelDepTable* value ) {
		if( tableDelDep != NULL ) {
			delete tableDelDep;
			tableDelDep = NULL;
		}
		tableDelDep = value;
	}

	cfbam::ICFBamDelSubDep1Table* CFBamSchema::getTableDelSubDep1() {
		return( tableDelSubDep1 );
	}

	void CFBamSchema::setTableDelSubDep1( cfbam::ICFBamDelSubDep1Table* value ) {
		if( tableDelSubDep1 != NULL ) {
			delete tableDelSubDep1;
			tableDelSubDep1 = NULL;
		}
		tableDelSubDep1 = value;
	}

	cfbam::ICFBamDelSubDep2Table* CFBamSchema::getTableDelSubDep2() {
		return( tableDelSubDep2 );
	}

	void CFBamSchema::setTableDelSubDep2( cfbam::ICFBamDelSubDep2Table* value ) {
		if( tableDelSubDep2 != NULL ) {
			delete tableDelSubDep2;
			tableDelSubDep2 = NULL;
		}
		tableDelSubDep2 = value;
	}

	cfbam::ICFBamDelSubDep3Table* CFBamSchema::getTableDelSubDep3() {
		return( tableDelSubDep3 );
	}

	void CFBamSchema::setTableDelSubDep3( cfbam::ICFBamDelSubDep3Table* value ) {
		if( tableDelSubDep3 != NULL ) {
			delete tableDelSubDep3;
			tableDelSubDep3 = NULL;
		}
		tableDelSubDep3 = value;
	}

	cfbam::ICFBamDelTopDepTable* CFBamSchema::getTableDelTopDep() {
		return( tableDelTopDep );
	}

	void CFBamSchema::setTableDelTopDep( cfbam::ICFBamDelTopDepTable* value ) {
		if( tableDelTopDep != NULL ) {
			delete tableDelTopDep;
			tableDelTopDep = NULL;
		}
		tableDelTopDep = value;
	}

	cfbam::ICFBamDoubleColTable* CFBamSchema::getTableDoubleCol() {
		return( tableDoubleCol );
	}

	void CFBamSchema::setTableDoubleCol( cfbam::ICFBamDoubleColTable* value ) {
		if( tableDoubleCol != NULL ) {
			delete tableDoubleCol;
			tableDoubleCol = NULL;
		}
		tableDoubleCol = value;
	}

	cfbam::ICFBamDoubleDefTable* CFBamSchema::getTableDoubleDef() {
		return( tableDoubleDef );
	}

	void CFBamSchema::setTableDoubleDef( cfbam::ICFBamDoubleDefTable* value ) {
		if( tableDoubleDef != NULL ) {
			delete tableDoubleDef;
			tableDoubleDef = NULL;
		}
		tableDoubleDef = value;
	}

	cfbam::ICFBamDoubleTypeTable* CFBamSchema::getTableDoubleType() {
		return( tableDoubleType );
	}

	void CFBamSchema::setTableDoubleType( cfbam::ICFBamDoubleTypeTable* value ) {
		if( tableDoubleType != NULL ) {
			delete tableDoubleType;
			tableDoubleType = NULL;
		}
		tableDoubleType = value;
	}

	cfbam::ICFBamEnumDefTable* CFBamSchema::getTableEnumDef() {
		return( tableEnumDef );
	}

	void CFBamSchema::setTableEnumDef( cfbam::ICFBamEnumDefTable* value ) {
		if( tableEnumDef != NULL ) {
			delete tableEnumDef;
			tableEnumDef = NULL;
		}
		tableEnumDef = value;
	}

	cfbam::ICFBamEnumTagTable* CFBamSchema::getTableEnumTag() {
		return( tableEnumTag );
	}

	void CFBamSchema::setTableEnumTag( cfbam::ICFBamEnumTagTable* value ) {
		if( tableEnumTag != NULL ) {
			delete tableEnumTag;
			tableEnumTag = NULL;
		}
		tableEnumTag = value;
	}

	cfbam::ICFBamEnumTypeTable* CFBamSchema::getTableEnumType() {
		return( tableEnumType );
	}

	void CFBamSchema::setTableEnumType( cfbam::ICFBamEnumTypeTable* value ) {
		if( tableEnumType != NULL ) {
			delete tableEnumType;
			tableEnumType = NULL;
		}
		tableEnumType = value;
	}

	cfbam::ICFBamFloatColTable* CFBamSchema::getTableFloatCol() {
		return( tableFloatCol );
	}

	void CFBamSchema::setTableFloatCol( cfbam::ICFBamFloatColTable* value ) {
		if( tableFloatCol != NULL ) {
			delete tableFloatCol;
			tableFloatCol = NULL;
		}
		tableFloatCol = value;
	}

	cfbam::ICFBamFloatDefTable* CFBamSchema::getTableFloatDef() {
		return( tableFloatDef );
	}

	void CFBamSchema::setTableFloatDef( cfbam::ICFBamFloatDefTable* value ) {
		if( tableFloatDef != NULL ) {
			delete tableFloatDef;
			tableFloatDef = NULL;
		}
		tableFloatDef = value;
	}

	cfbam::ICFBamFloatTypeTable* CFBamSchema::getTableFloatType() {
		return( tableFloatType );
	}

	void CFBamSchema::setTableFloatType( cfbam::ICFBamFloatTypeTable* value ) {
		if( tableFloatType != NULL ) {
			delete tableFloatType;
			tableFloatType = NULL;
		}
		tableFloatType = value;
	}

	cfsec::ICFSecHostNodeTable* CFBamSchema::getTableHostNode() {
		return( tableHostNode );
	}

	void CFBamSchema::setTableHostNode( cfsec::ICFSecHostNodeTable* value ) {
		if( tableHostNode != NULL ) {
			delete tableHostNode;
			tableHostNode = NULL;
		}
		tableHostNode = value;
	}

	cfsec::ICFSecISOCcyTable* CFBamSchema::getTableISOCcy() {
		return( tableISOCcy );
	}

	void CFBamSchema::setTableISOCcy( cfsec::ICFSecISOCcyTable* value ) {
		if( tableISOCcy != NULL ) {
			delete tableISOCcy;
			tableISOCcy = NULL;
		}
		tableISOCcy = value;
	}

	cfsec::ICFSecISOCtryTable* CFBamSchema::getTableISOCtry() {
		return( tableISOCtry );
	}

	void CFBamSchema::setTableISOCtry( cfsec::ICFSecISOCtryTable* value ) {
		if( tableISOCtry != NULL ) {
			delete tableISOCtry;
			tableISOCtry = NULL;
		}
		tableISOCtry = value;
	}

	cfsec::ICFSecISOCtryCcyTable* CFBamSchema::getTableISOCtryCcy() {
		return( tableISOCtryCcy );
	}

	void CFBamSchema::setTableISOCtryCcy( cfsec::ICFSecISOCtryCcyTable* value ) {
		if( tableISOCtryCcy != NULL ) {
			delete tableISOCtryCcy;
			tableISOCtryCcy = NULL;
		}
		tableISOCtryCcy = value;
	}

	cfsec::ICFSecISOCtryLangTable* CFBamSchema::getTableISOCtryLang() {
		return( tableISOCtryLang );
	}

	void CFBamSchema::setTableISOCtryLang( cfsec::ICFSecISOCtryLangTable* value ) {
		if( tableISOCtryLang != NULL ) {
			delete tableISOCtryLang;
			tableISOCtryLang = NULL;
		}
		tableISOCtryLang = value;
	}

	cfsec::ICFSecISOLangTable* CFBamSchema::getTableISOLang() {
		return( tableISOLang );
	}

	void CFBamSchema::setTableISOLang( cfsec::ICFSecISOLangTable* value ) {
		if( tableISOLang != NULL ) {
			delete tableISOLang;
			tableISOLang = NULL;
		}
		tableISOLang = value;
	}

	cfsec::ICFSecISOTZoneTable* CFBamSchema::getTableISOTZone() {
		return( tableISOTZone );
	}

	void CFBamSchema::setTableISOTZone( cfsec::ICFSecISOTZoneTable* value ) {
		if( tableISOTZone != NULL ) {
			delete tableISOTZone;
			tableISOTZone = NULL;
		}
		tableISOTZone = value;
	}

	cfbam::ICFBamId16GenTable* CFBamSchema::getTableId16Gen() {
		return( tableId16Gen );
	}

	void CFBamSchema::setTableId16Gen( cfbam::ICFBamId16GenTable* value ) {
		if( tableId16Gen != NULL ) {
			delete tableId16Gen;
			tableId16Gen = NULL;
		}
		tableId16Gen = value;
	}

	cfbam::ICFBamId32GenTable* CFBamSchema::getTableId32Gen() {
		return( tableId32Gen );
	}

	void CFBamSchema::setTableId32Gen( cfbam::ICFBamId32GenTable* value ) {
		if( tableId32Gen != NULL ) {
			delete tableId32Gen;
			tableId32Gen = NULL;
		}
		tableId32Gen = value;
	}

	cfbam::ICFBamId64GenTable* CFBamSchema::getTableId64Gen() {
		return( tableId64Gen );
	}

	void CFBamSchema::setTableId64Gen( cfbam::ICFBamId64GenTable* value ) {
		if( tableId64Gen != NULL ) {
			delete tableId64Gen;
			tableId64Gen = NULL;
		}
		tableId64Gen = value;
	}

	cfbam::ICFBamIndexTable* CFBamSchema::getTableIndex() {
		return( tableIndex );
	}

	void CFBamSchema::setTableIndex( cfbam::ICFBamIndexTable* value ) {
		if( tableIndex != NULL ) {
			delete tableIndex;
			tableIndex = NULL;
		}
		tableIndex = value;
	}

	cfbam::ICFBamIndexColTable* CFBamSchema::getTableIndexCol() {
		return( tableIndexCol );
	}

	void CFBamSchema::setTableIndexCol( cfbam::ICFBamIndexColTable* value ) {
		if( tableIndexCol != NULL ) {
			delete tableIndexCol;
			tableIndexCol = NULL;
		}
		tableIndexCol = value;
	}

	cfbam::ICFBamInt16ColTable* CFBamSchema::getTableInt16Col() {
		return( tableInt16Col );
	}

	void CFBamSchema::setTableInt16Col( cfbam::ICFBamInt16ColTable* value ) {
		if( tableInt16Col != NULL ) {
			delete tableInt16Col;
			tableInt16Col = NULL;
		}
		tableInt16Col = value;
	}

	cfbam::ICFBamInt16DefTable* CFBamSchema::getTableInt16Def() {
		return( tableInt16Def );
	}

	void CFBamSchema::setTableInt16Def( cfbam::ICFBamInt16DefTable* value ) {
		if( tableInt16Def != NULL ) {
			delete tableInt16Def;
			tableInt16Def = NULL;
		}
		tableInt16Def = value;
	}

	cfbam::ICFBamInt16TypeTable* CFBamSchema::getTableInt16Type() {
		return( tableInt16Type );
	}

	void CFBamSchema::setTableInt16Type( cfbam::ICFBamInt16TypeTable* value ) {
		if( tableInt16Type != NULL ) {
			delete tableInt16Type;
			tableInt16Type = NULL;
		}
		tableInt16Type = value;
	}

	cfbam::ICFBamInt32ColTable* CFBamSchema::getTableInt32Col() {
		return( tableInt32Col );
	}

	void CFBamSchema::setTableInt32Col( cfbam::ICFBamInt32ColTable* value ) {
		if( tableInt32Col != NULL ) {
			delete tableInt32Col;
			tableInt32Col = NULL;
		}
		tableInt32Col = value;
	}

	cfbam::ICFBamInt32DefTable* CFBamSchema::getTableInt32Def() {
		return( tableInt32Def );
	}

	void CFBamSchema::setTableInt32Def( cfbam::ICFBamInt32DefTable* value ) {
		if( tableInt32Def != NULL ) {
			delete tableInt32Def;
			tableInt32Def = NULL;
		}
		tableInt32Def = value;
	}

	cfbam::ICFBamInt32TypeTable* CFBamSchema::getTableInt32Type() {
		return( tableInt32Type );
	}

	void CFBamSchema::setTableInt32Type( cfbam::ICFBamInt32TypeTable* value ) {
		if( tableInt32Type != NULL ) {
			delete tableInt32Type;
			tableInt32Type = NULL;
		}
		tableInt32Type = value;
	}

	cfbam::ICFBamInt64ColTable* CFBamSchema::getTableInt64Col() {
		return( tableInt64Col );
	}

	void CFBamSchema::setTableInt64Col( cfbam::ICFBamInt64ColTable* value ) {
		if( tableInt64Col != NULL ) {
			delete tableInt64Col;
			tableInt64Col = NULL;
		}
		tableInt64Col = value;
	}

	cfbam::ICFBamInt64DefTable* CFBamSchema::getTableInt64Def() {
		return( tableInt64Def );
	}

	void CFBamSchema::setTableInt64Def( cfbam::ICFBamInt64DefTable* value ) {
		if( tableInt64Def != NULL ) {
			delete tableInt64Def;
			tableInt64Def = NULL;
		}
		tableInt64Def = value;
	}

	cfbam::ICFBamInt64TypeTable* CFBamSchema::getTableInt64Type() {
		return( tableInt64Type );
	}

	void CFBamSchema::setTableInt64Type( cfbam::ICFBamInt64TypeTable* value ) {
		if( tableInt64Type != NULL ) {
			delete tableInt64Type;
			tableInt64Type = NULL;
		}
		tableInt64Type = value;
	}

	cfint::ICFIntLicenseTable* CFBamSchema::getTableLicense() {
		return( tableLicense );
	}

	void CFBamSchema::setTableLicense( cfint::ICFIntLicenseTable* value ) {
		if( tableLicense != NULL ) {
			delete tableLicense;
			tableLicense = NULL;
		}
		tableLicense = value;
	}

	cfint::ICFIntMajorVersionTable* CFBamSchema::getTableMajorVersion() {
		return( tableMajorVersion );
	}

	void CFBamSchema::setTableMajorVersion( cfint::ICFIntMajorVersionTable* value ) {
		if( tableMajorVersion != NULL ) {
			delete tableMajorVersion;
			tableMajorVersion = NULL;
		}
		tableMajorVersion = value;
	}

	cfint::ICFIntMimeTypeTable* CFBamSchema::getTableMimeType() {
		return( tableMimeType );
	}

	void CFBamSchema::setTableMimeType( cfint::ICFIntMimeTypeTable* value ) {
		if( tableMimeType != NULL ) {
			delete tableMimeType;
			tableMimeType = NULL;
		}
		tableMimeType = value;
	}

	cfint::ICFIntMinorVersionTable* CFBamSchema::getTableMinorVersion() {
		return( tableMinorVersion );
	}

	void CFBamSchema::setTableMinorVersion( cfint::ICFIntMinorVersionTable* value ) {
		if( tableMinorVersion != NULL ) {
			delete tableMinorVersion;
			tableMinorVersion = NULL;
		}
		tableMinorVersion = value;
	}

	cfbam::ICFBamNmTokenColTable* CFBamSchema::getTableNmTokenCol() {
		return( tableNmTokenCol );
	}

	void CFBamSchema::setTableNmTokenCol( cfbam::ICFBamNmTokenColTable* value ) {
		if( tableNmTokenCol != NULL ) {
			delete tableNmTokenCol;
			tableNmTokenCol = NULL;
		}
		tableNmTokenCol = value;
	}

	cfbam::ICFBamNmTokenDefTable* CFBamSchema::getTableNmTokenDef() {
		return( tableNmTokenDef );
	}

	void CFBamSchema::setTableNmTokenDef( cfbam::ICFBamNmTokenDefTable* value ) {
		if( tableNmTokenDef != NULL ) {
			delete tableNmTokenDef;
			tableNmTokenDef = NULL;
		}
		tableNmTokenDef = value;
	}

	cfbam::ICFBamNmTokenTypeTable* CFBamSchema::getTableNmTokenType() {
		return( tableNmTokenType );
	}

	void CFBamSchema::setTableNmTokenType( cfbam::ICFBamNmTokenTypeTable* value ) {
		if( tableNmTokenType != NULL ) {
			delete tableNmTokenType;
			tableNmTokenType = NULL;
		}
		tableNmTokenType = value;
	}

	cfbam::ICFBamNmTokensColTable* CFBamSchema::getTableNmTokensCol() {
		return( tableNmTokensCol );
	}

	void CFBamSchema::setTableNmTokensCol( cfbam::ICFBamNmTokensColTable* value ) {
		if( tableNmTokensCol != NULL ) {
			delete tableNmTokensCol;
			tableNmTokensCol = NULL;
		}
		tableNmTokensCol = value;
	}

	cfbam::ICFBamNmTokensDefTable* CFBamSchema::getTableNmTokensDef() {
		return( tableNmTokensDef );
	}

	void CFBamSchema::setTableNmTokensDef( cfbam::ICFBamNmTokensDefTable* value ) {
		if( tableNmTokensDef != NULL ) {
			delete tableNmTokensDef;
			tableNmTokensDef = NULL;
		}
		tableNmTokensDef = value;
	}

	cfbam::ICFBamNmTokensTypeTable* CFBamSchema::getTableNmTokensType() {
		return( tableNmTokensType );
	}

	void CFBamSchema::setTableNmTokensType( cfbam::ICFBamNmTokensTypeTable* value ) {
		if( tableNmTokensType != NULL ) {
			delete tableNmTokensType;
			tableNmTokensType = NULL;
		}
		tableNmTokensType = value;
	}

	cfbam::ICFBamNumberColTable* CFBamSchema::getTableNumberCol() {
		return( tableNumberCol );
	}

	void CFBamSchema::setTableNumberCol( cfbam::ICFBamNumberColTable* value ) {
		if( tableNumberCol != NULL ) {
			delete tableNumberCol;
			tableNumberCol = NULL;
		}
		tableNumberCol = value;
	}

	cfbam::ICFBamNumberDefTable* CFBamSchema::getTableNumberDef() {
		return( tableNumberDef );
	}

	void CFBamSchema::setTableNumberDef( cfbam::ICFBamNumberDefTable* value ) {
		if( tableNumberDef != NULL ) {
			delete tableNumberDef;
			tableNumberDef = NULL;
		}
		tableNumberDef = value;
	}

	cfbam::ICFBamNumberTypeTable* CFBamSchema::getTableNumberType() {
		return( tableNumberType );
	}

	void CFBamSchema::setTableNumberType( cfbam::ICFBamNumberTypeTable* value ) {
		if( tableNumberType != NULL ) {
			delete tableNumberType;
			tableNumberType = NULL;
		}
		tableNumberType = value;
	}

	cfbam::ICFBamParamTable* CFBamSchema::getTableParam() {
		return( tableParam );
	}

	void CFBamSchema::setTableParam( cfbam::ICFBamParamTable* value ) {
		if( tableParam != NULL ) {
			delete tableParam;
			tableParam = NULL;
		}
		tableParam = value;
	}

	cfbam::ICFBamPopDepTable* CFBamSchema::getTablePopDep() {
		return( tablePopDep );
	}

	void CFBamSchema::setTablePopDep( cfbam::ICFBamPopDepTable* value ) {
		if( tablePopDep != NULL ) {
			delete tablePopDep;
			tablePopDep = NULL;
		}
		tablePopDep = value;
	}

	cfbam::ICFBamPopSubDep1Table* CFBamSchema::getTablePopSubDep1() {
		return( tablePopSubDep1 );
	}

	void CFBamSchema::setTablePopSubDep1( cfbam::ICFBamPopSubDep1Table* value ) {
		if( tablePopSubDep1 != NULL ) {
			delete tablePopSubDep1;
			tablePopSubDep1 = NULL;
		}
		tablePopSubDep1 = value;
	}

	cfbam::ICFBamPopSubDep2Table* CFBamSchema::getTablePopSubDep2() {
		return( tablePopSubDep2 );
	}

	void CFBamSchema::setTablePopSubDep2( cfbam::ICFBamPopSubDep2Table* value ) {
		if( tablePopSubDep2 != NULL ) {
			delete tablePopSubDep2;
			tablePopSubDep2 = NULL;
		}
		tablePopSubDep2 = value;
	}

	cfbam::ICFBamPopSubDep3Table* CFBamSchema::getTablePopSubDep3() {
		return( tablePopSubDep3 );
	}

	void CFBamSchema::setTablePopSubDep3( cfbam::ICFBamPopSubDep3Table* value ) {
		if( tablePopSubDep3 != NULL ) {
			delete tablePopSubDep3;
			tablePopSubDep3 = NULL;
		}
		tablePopSubDep3 = value;
	}

	cfbam::ICFBamPopTopDepTable* CFBamSchema::getTablePopTopDep() {
		return( tablePopTopDep );
	}

	void CFBamSchema::setTablePopTopDep( cfbam::ICFBamPopTopDepTable* value ) {
		if( tablePopTopDep != NULL ) {
			delete tablePopTopDep;
			tablePopTopDep = NULL;
		}
		tablePopTopDep = value;
	}

	cfbam::ICFBamRelationTable* CFBamSchema::getTableRelation() {
		return( tableRelation );
	}

	void CFBamSchema::setTableRelation( cfbam::ICFBamRelationTable* value ) {
		if( tableRelation != NULL ) {
			delete tableRelation;
			tableRelation = NULL;
		}
		tableRelation = value;
	}

	cfbam::ICFBamRelationColTable* CFBamSchema::getTableRelationCol() {
		return( tableRelationCol );
	}

	void CFBamSchema::setTableRelationCol( cfbam::ICFBamRelationColTable* value ) {
		if( tableRelationCol != NULL ) {
			delete tableRelationCol;
			tableRelationCol = NULL;
		}
		tableRelationCol = value;
	}

	cfbam::ICFBamSchemaDefTable* CFBamSchema::getTableSchemaDef() {
		return( tableSchemaDef );
	}

	void CFBamSchema::setTableSchemaDef( cfbam::ICFBamSchemaDefTable* value ) {
		if( tableSchemaDef != NULL ) {
			delete tableSchemaDef;
			tableSchemaDef = NULL;
		}
		tableSchemaDef = value;
	}

	cfbam::ICFBamSchemaRefTable* CFBamSchema::getTableSchemaRef() {
		return( tableSchemaRef );
	}

	void CFBamSchema::setTableSchemaRef( cfbam::ICFBamSchemaRefTable* value ) {
		if( tableSchemaRef != NULL ) {
			delete tableSchemaRef;
			tableSchemaRef = NULL;
		}
		tableSchemaRef = value;
	}

	cfbam::ICFBamScopeTable* CFBamSchema::getTableScope() {
		return( tableScope );
	}

	void CFBamSchema::setTableScope( cfbam::ICFBamScopeTable* value ) {
		if( tableScope != NULL ) {
			delete tableScope;
			tableScope = NULL;
		}
		tableScope = value;
	}

	cfsec::ICFSecSecAppTable* CFBamSchema::getTableSecApp() {
		return( tableSecApp );
	}

	void CFBamSchema::setTableSecApp( cfsec::ICFSecSecAppTable* value ) {
		if( tableSecApp != NULL ) {
			delete tableSecApp;
			tableSecApp = NULL;
		}
		tableSecApp = value;
	}

	cfsec::ICFSecSecDeviceTable* CFBamSchema::getTableSecDevice() {
		return( tableSecDevice );
	}

	void CFBamSchema::setTableSecDevice( cfsec::ICFSecSecDeviceTable* value ) {
		if( tableSecDevice != NULL ) {
			delete tableSecDevice;
			tableSecDevice = NULL;
		}
		tableSecDevice = value;
	}

	cfsec::ICFSecSecFormTable* CFBamSchema::getTableSecForm() {
		return( tableSecForm );
	}

	void CFBamSchema::setTableSecForm( cfsec::ICFSecSecFormTable* value ) {
		if( tableSecForm != NULL ) {
			delete tableSecForm;
			tableSecForm = NULL;
		}
		tableSecForm = value;
	}

	cfsec::ICFSecSecGroupTable* CFBamSchema::getTableSecGroup() {
		return( tableSecGroup );
	}

	void CFBamSchema::setTableSecGroup( cfsec::ICFSecSecGroupTable* value ) {
		if( tableSecGroup != NULL ) {
			delete tableSecGroup;
			tableSecGroup = NULL;
		}
		tableSecGroup = value;
	}

	cfsec::ICFSecSecGroupFormTable* CFBamSchema::getTableSecGroupForm() {
		return( tableSecGroupForm );
	}

	void CFBamSchema::setTableSecGroupForm( cfsec::ICFSecSecGroupFormTable* value ) {
		if( tableSecGroupForm != NULL ) {
			delete tableSecGroupForm;
			tableSecGroupForm = NULL;
		}
		tableSecGroupForm = value;
	}

	cfsec::ICFSecSecGrpIncTable* CFBamSchema::getTableSecGrpInc() {
		return( tableSecGrpInc );
	}

	void CFBamSchema::setTableSecGrpInc( cfsec::ICFSecSecGrpIncTable* value ) {
		if( tableSecGrpInc != NULL ) {
			delete tableSecGrpInc;
			tableSecGrpInc = NULL;
		}
		tableSecGrpInc = value;
	}

	cfsec::ICFSecSecGrpMembTable* CFBamSchema::getTableSecGrpMemb() {
		return( tableSecGrpMemb );
	}

	void CFBamSchema::setTableSecGrpMemb( cfsec::ICFSecSecGrpMembTable* value ) {
		if( tableSecGrpMemb != NULL ) {
			delete tableSecGrpMemb;
			tableSecGrpMemb = NULL;
		}
		tableSecGrpMemb = value;
	}

	cfsec::ICFSecSecSessionTable* CFBamSchema::getTableSecSession() {
		return( tableSecSession );
	}

	void CFBamSchema::setTableSecSession( cfsec::ICFSecSecSessionTable* value ) {
		if( tableSecSession != NULL ) {
			delete tableSecSession;
			tableSecSession = NULL;
		}
		tableSecSession = value;
	}

	cfsec::ICFSecSecUserTable* CFBamSchema::getTableSecUser() {
		return( tableSecUser );
	}

	void CFBamSchema::setTableSecUser( cfsec::ICFSecSecUserTable* value ) {
		if( tableSecUser != NULL ) {
			delete tableSecUser;
			tableSecUser = NULL;
		}
		tableSecUser = value;
	}

	cfbam::ICFBamServerListFuncTable* CFBamSchema::getTableServerListFunc() {
		return( tableServerListFunc );
	}

	void CFBamSchema::setTableServerListFunc( cfbam::ICFBamServerListFuncTable* value ) {
		if( tableServerListFunc != NULL ) {
			delete tableServerListFunc;
			tableServerListFunc = NULL;
		}
		tableServerListFunc = value;
	}

	cfbam::ICFBamServerMethodTable* CFBamSchema::getTableServerMethod() {
		return( tableServerMethod );
	}

	void CFBamSchema::setTableServerMethod( cfbam::ICFBamServerMethodTable* value ) {
		if( tableServerMethod != NULL ) {
			delete tableServerMethod;
			tableServerMethod = NULL;
		}
		tableServerMethod = value;
	}

	cfbam::ICFBamServerObjFuncTable* CFBamSchema::getTableServerObjFunc() {
		return( tableServerObjFunc );
	}

	void CFBamSchema::setTableServerObjFunc( cfbam::ICFBamServerObjFuncTable* value ) {
		if( tableServerObjFunc != NULL ) {
			delete tableServerObjFunc;
			tableServerObjFunc = NULL;
		}
		tableServerObjFunc = value;
	}

	cfbam::ICFBamServerProcTable* CFBamSchema::getTableServerProc() {
		return( tableServerProc );
	}

	void CFBamSchema::setTableServerProc( cfbam::ICFBamServerProcTable* value ) {
		if( tableServerProc != NULL ) {
			delete tableServerProc;
			tableServerProc = NULL;
		}
		tableServerProc = value;
	}

	cfsec::ICFSecServiceTable* CFBamSchema::getTableService() {
		return( tableService );
	}

	void CFBamSchema::setTableService( cfsec::ICFSecServiceTable* value ) {
		if( tableService != NULL ) {
			delete tableService;
			tableService = NULL;
		}
		tableService = value;
	}

	cfsec::ICFSecServiceTypeTable* CFBamSchema::getTableServiceType() {
		return( tableServiceType );
	}

	void CFBamSchema::setTableServiceType( cfsec::ICFSecServiceTypeTable* value ) {
		if( tableServiceType != NULL ) {
			delete tableServiceType;
			tableServiceType = NULL;
		}
		tableServiceType = value;
	}

	cfbam::ICFBamStringColTable* CFBamSchema::getTableStringCol() {
		return( tableStringCol );
	}

	void CFBamSchema::setTableStringCol( cfbam::ICFBamStringColTable* value ) {
		if( tableStringCol != NULL ) {
			delete tableStringCol;
			tableStringCol = NULL;
		}
		tableStringCol = value;
	}

	cfbam::ICFBamStringDefTable* CFBamSchema::getTableStringDef() {
		return( tableStringDef );
	}

	void CFBamSchema::setTableStringDef( cfbam::ICFBamStringDefTable* value ) {
		if( tableStringDef != NULL ) {
			delete tableStringDef;
			tableStringDef = NULL;
		}
		tableStringDef = value;
	}

	cfbam::ICFBamStringTypeTable* CFBamSchema::getTableStringType() {
		return( tableStringType );
	}

	void CFBamSchema::setTableStringType( cfbam::ICFBamStringTypeTable* value ) {
		if( tableStringType != NULL ) {
			delete tableStringType;
			tableStringType = NULL;
		}
		tableStringType = value;
	}

	cfint::ICFIntSubProjectTable* CFBamSchema::getTableSubProject() {
		return( tableSubProject );
	}

	void CFBamSchema::setTableSubProject( cfint::ICFIntSubProjectTable* value ) {
		if( tableSubProject != NULL ) {
			delete tableSubProject;
			tableSubProject = NULL;
		}
		tableSubProject = value;
	}

	cfsec::ICFSecSysClusterTable* CFBamSchema::getTableSysCluster() {
		return( tableSysCluster );
	}

	void CFBamSchema::setTableSysCluster( cfsec::ICFSecSysClusterTable* value ) {
		if( tableSysCluster != NULL ) {
			delete tableSysCluster;
			tableSysCluster = NULL;
		}
		tableSysCluster = value;
	}

	cfsec::ICFSecTSecGroupTable* CFBamSchema::getTableTSecGroup() {
		return( tableTSecGroup );
	}

	void CFBamSchema::setTableTSecGroup( cfsec::ICFSecTSecGroupTable* value ) {
		if( tableTSecGroup != NULL ) {
			delete tableTSecGroup;
			tableTSecGroup = NULL;
		}
		tableTSecGroup = value;
	}

	cfsec::ICFSecTSecGrpIncTable* CFBamSchema::getTableTSecGrpInc() {
		return( tableTSecGrpInc );
	}

	void CFBamSchema::setTableTSecGrpInc( cfsec::ICFSecTSecGrpIncTable* value ) {
		if( tableTSecGrpInc != NULL ) {
			delete tableTSecGrpInc;
			tableTSecGrpInc = NULL;
		}
		tableTSecGrpInc = value;
	}

	cfsec::ICFSecTSecGrpMembTable* CFBamSchema::getTableTSecGrpMemb() {
		return( tableTSecGrpMemb );
	}

	void CFBamSchema::setTableTSecGrpMemb( cfsec::ICFSecTSecGrpMembTable* value ) {
		if( tableTSecGrpMemb != NULL ) {
			delete tableTSecGrpMemb;
			tableTSecGrpMemb = NULL;
		}
		tableTSecGrpMemb = value;
	}

	cfbam::ICFBamTZDateColTable* CFBamSchema::getTableTZDateCol() {
		return( tableTZDateCol );
	}

	void CFBamSchema::setTableTZDateCol( cfbam::ICFBamTZDateColTable* value ) {
		if( tableTZDateCol != NULL ) {
			delete tableTZDateCol;
			tableTZDateCol = NULL;
		}
		tableTZDateCol = value;
	}

	cfbam::ICFBamTZDateDefTable* CFBamSchema::getTableTZDateDef() {
		return( tableTZDateDef );
	}

	void CFBamSchema::setTableTZDateDef( cfbam::ICFBamTZDateDefTable* value ) {
		if( tableTZDateDef != NULL ) {
			delete tableTZDateDef;
			tableTZDateDef = NULL;
		}
		tableTZDateDef = value;
	}

	cfbam::ICFBamTZDateTypeTable* CFBamSchema::getTableTZDateType() {
		return( tableTZDateType );
	}

	void CFBamSchema::setTableTZDateType( cfbam::ICFBamTZDateTypeTable* value ) {
		if( tableTZDateType != NULL ) {
			delete tableTZDateType;
			tableTZDateType = NULL;
		}
		tableTZDateType = value;
	}

	cfbam::ICFBamTZTimeColTable* CFBamSchema::getTableTZTimeCol() {
		return( tableTZTimeCol );
	}

	void CFBamSchema::setTableTZTimeCol( cfbam::ICFBamTZTimeColTable* value ) {
		if( tableTZTimeCol != NULL ) {
			delete tableTZTimeCol;
			tableTZTimeCol = NULL;
		}
		tableTZTimeCol = value;
	}

	cfbam::ICFBamTZTimeDefTable* CFBamSchema::getTableTZTimeDef() {
		return( tableTZTimeDef );
	}

	void CFBamSchema::setTableTZTimeDef( cfbam::ICFBamTZTimeDefTable* value ) {
		if( tableTZTimeDef != NULL ) {
			delete tableTZTimeDef;
			tableTZTimeDef = NULL;
		}
		tableTZTimeDef = value;
	}

	cfbam::ICFBamTZTimeTypeTable* CFBamSchema::getTableTZTimeType() {
		return( tableTZTimeType );
	}

	void CFBamSchema::setTableTZTimeType( cfbam::ICFBamTZTimeTypeTable* value ) {
		if( tableTZTimeType != NULL ) {
			delete tableTZTimeType;
			tableTZTimeType = NULL;
		}
		tableTZTimeType = value;
	}

	cfbam::ICFBamTZTimestampColTable* CFBamSchema::getTableTZTimestampCol() {
		return( tableTZTimestampCol );
	}

	void CFBamSchema::setTableTZTimestampCol( cfbam::ICFBamTZTimestampColTable* value ) {
		if( tableTZTimestampCol != NULL ) {
			delete tableTZTimestampCol;
			tableTZTimestampCol = NULL;
		}
		tableTZTimestampCol = value;
	}

	cfbam::ICFBamTZTimestampDefTable* CFBamSchema::getTableTZTimestampDef() {
		return( tableTZTimestampDef );
	}

	void CFBamSchema::setTableTZTimestampDef( cfbam::ICFBamTZTimestampDefTable* value ) {
		if( tableTZTimestampDef != NULL ) {
			delete tableTZTimestampDef;
			tableTZTimestampDef = NULL;
		}
		tableTZTimestampDef = value;
	}

	cfbam::ICFBamTZTimestampTypeTable* CFBamSchema::getTableTZTimestampType() {
		return( tableTZTimestampType );
	}

	void CFBamSchema::setTableTZTimestampType( cfbam::ICFBamTZTimestampTypeTable* value ) {
		if( tableTZTimestampType != NULL ) {
			delete tableTZTimestampType;
			tableTZTimestampType = NULL;
		}
		tableTZTimestampType = value;
	}

	cfbam::ICFBamTableTable* CFBamSchema::getTableTable() {
		return( tableTable );
	}

	void CFBamSchema::setTableTable( cfbam::ICFBamTableTable* value ) {
		if( tableTable != NULL ) {
			delete tableTable;
			tableTable = NULL;
		}
		tableTable = value;
	}

	cfbam::ICFBamTableColTable* CFBamSchema::getTableTableCol() {
		return( tableTableCol );
	}

	void CFBamSchema::setTableTableCol( cfbam::ICFBamTableColTable* value ) {
		if( tableTableCol != NULL ) {
			delete tableTableCol;
			tableTableCol = NULL;
		}
		tableTableCol = value;
	}

	cfsec::ICFSecTenantTable* CFBamSchema::getTableTenant() {
		return( tableTenant );
	}

	void CFBamSchema::setTableTenant( cfsec::ICFSecTenantTable* value ) {
		if( tableTenant != NULL ) {
			delete tableTenant;
			tableTenant = NULL;
		}
		tableTenant = value;
	}

	cfbam::ICFBamTextColTable* CFBamSchema::getTableTextCol() {
		return( tableTextCol );
	}

	void CFBamSchema::setTableTextCol( cfbam::ICFBamTextColTable* value ) {
		if( tableTextCol != NULL ) {
			delete tableTextCol;
			tableTextCol = NULL;
		}
		tableTextCol = value;
	}

	cfbam::ICFBamTextDefTable* CFBamSchema::getTableTextDef() {
		return( tableTextDef );
	}

	void CFBamSchema::setTableTextDef( cfbam::ICFBamTextDefTable* value ) {
		if( tableTextDef != NULL ) {
			delete tableTextDef;
			tableTextDef = NULL;
		}
		tableTextDef = value;
	}

	cfbam::ICFBamTextTypeTable* CFBamSchema::getTableTextType() {
		return( tableTextType );
	}

	void CFBamSchema::setTableTextType( cfbam::ICFBamTextTypeTable* value ) {
		if( tableTextType != NULL ) {
			delete tableTextType;
			tableTextType = NULL;
		}
		tableTextType = value;
	}

	cfbam::ICFBamTimeColTable* CFBamSchema::getTableTimeCol() {
		return( tableTimeCol );
	}

	void CFBamSchema::setTableTimeCol( cfbam::ICFBamTimeColTable* value ) {
		if( tableTimeCol != NULL ) {
			delete tableTimeCol;
			tableTimeCol = NULL;
		}
		tableTimeCol = value;
	}

	cfbam::ICFBamTimeDefTable* CFBamSchema::getTableTimeDef() {
		return( tableTimeDef );
	}

	void CFBamSchema::setTableTimeDef( cfbam::ICFBamTimeDefTable* value ) {
		if( tableTimeDef != NULL ) {
			delete tableTimeDef;
			tableTimeDef = NULL;
		}
		tableTimeDef = value;
	}

	cfbam::ICFBamTimeTypeTable* CFBamSchema::getTableTimeType() {
		return( tableTimeType );
	}

	void CFBamSchema::setTableTimeType( cfbam::ICFBamTimeTypeTable* value ) {
		if( tableTimeType != NULL ) {
			delete tableTimeType;
			tableTimeType = NULL;
		}
		tableTimeType = value;
	}

	cfbam::ICFBamTimestampColTable* CFBamSchema::getTableTimestampCol() {
		return( tableTimestampCol );
	}

	void CFBamSchema::setTableTimestampCol( cfbam::ICFBamTimestampColTable* value ) {
		if( tableTimestampCol != NULL ) {
			delete tableTimestampCol;
			tableTimestampCol = NULL;
		}
		tableTimestampCol = value;
	}

	cfbam::ICFBamTimestampDefTable* CFBamSchema::getTableTimestampDef() {
		return( tableTimestampDef );
	}

	void CFBamSchema::setTableTimestampDef( cfbam::ICFBamTimestampDefTable* value ) {
		if( tableTimestampDef != NULL ) {
			delete tableTimestampDef;
			tableTimestampDef = NULL;
		}
		tableTimestampDef = value;
	}

	cfbam::ICFBamTimestampTypeTable* CFBamSchema::getTableTimestampType() {
		return( tableTimestampType );
	}

	void CFBamSchema::setTableTimestampType( cfbam::ICFBamTimestampTypeTable* value ) {
		if( tableTimestampType != NULL ) {
			delete tableTimestampType;
			tableTimestampType = NULL;
		}
		tableTimestampType = value;
	}

	cfint::ICFIntTldTable* CFBamSchema::getTableTld() {
		return( tableTld );
	}

	void CFBamSchema::setTableTld( cfint::ICFIntTldTable* value ) {
		if( tableTld != NULL ) {
			delete tableTld;
			tableTld = NULL;
		}
		tableTld = value;
	}

	cfbam::ICFBamTokenColTable* CFBamSchema::getTableTokenCol() {
		return( tableTokenCol );
	}

	void CFBamSchema::setTableTokenCol( cfbam::ICFBamTokenColTable* value ) {
		if( tableTokenCol != NULL ) {
			delete tableTokenCol;
			tableTokenCol = NULL;
		}
		tableTokenCol = value;
	}

	cfbam::ICFBamTokenDefTable* CFBamSchema::getTableTokenDef() {
		return( tableTokenDef );
	}

	void CFBamSchema::setTableTokenDef( cfbam::ICFBamTokenDefTable* value ) {
		if( tableTokenDef != NULL ) {
			delete tableTokenDef;
			tableTokenDef = NULL;
		}
		tableTokenDef = value;
	}

	cfbam::ICFBamTokenTypeTable* CFBamSchema::getTableTokenType() {
		return( tableTokenType );
	}

	void CFBamSchema::setTableTokenType( cfbam::ICFBamTokenTypeTable* value ) {
		if( tableTokenType != NULL ) {
			delete tableTokenType;
			tableTokenType = NULL;
		}
		tableTokenType = value;
	}

	cfint::ICFIntTopDomainTable* CFBamSchema::getTableTopDomain() {
		return( tableTopDomain );
	}

	void CFBamSchema::setTableTopDomain( cfint::ICFIntTopDomainTable* value ) {
		if( tableTopDomain != NULL ) {
			delete tableTopDomain;
			tableTopDomain = NULL;
		}
		tableTopDomain = value;
	}

	cfint::ICFIntTopProjectTable* CFBamSchema::getTableTopProject() {
		return( tableTopProject );
	}

	void CFBamSchema::setTableTopProject( cfint::ICFIntTopProjectTable* value ) {
		if( tableTopProject != NULL ) {
			delete tableTopProject;
			tableTopProject = NULL;
		}
		tableTopProject = value;
	}

	cfbam::ICFBamUInt16ColTable* CFBamSchema::getTableUInt16Col() {
		return( tableUInt16Col );
	}

	void CFBamSchema::setTableUInt16Col( cfbam::ICFBamUInt16ColTable* value ) {
		if( tableUInt16Col != NULL ) {
			delete tableUInt16Col;
			tableUInt16Col = NULL;
		}
		tableUInt16Col = value;
	}

	cfbam::ICFBamUInt16DefTable* CFBamSchema::getTableUInt16Def() {
		return( tableUInt16Def );
	}

	void CFBamSchema::setTableUInt16Def( cfbam::ICFBamUInt16DefTable* value ) {
		if( tableUInt16Def != NULL ) {
			delete tableUInt16Def;
			tableUInt16Def = NULL;
		}
		tableUInt16Def = value;
	}

	cfbam::ICFBamUInt16TypeTable* CFBamSchema::getTableUInt16Type() {
		return( tableUInt16Type );
	}

	void CFBamSchema::setTableUInt16Type( cfbam::ICFBamUInt16TypeTable* value ) {
		if( tableUInt16Type != NULL ) {
			delete tableUInt16Type;
			tableUInt16Type = NULL;
		}
		tableUInt16Type = value;
	}

	cfbam::ICFBamUInt32ColTable* CFBamSchema::getTableUInt32Col() {
		return( tableUInt32Col );
	}

	void CFBamSchema::setTableUInt32Col( cfbam::ICFBamUInt32ColTable* value ) {
		if( tableUInt32Col != NULL ) {
			delete tableUInt32Col;
			tableUInt32Col = NULL;
		}
		tableUInt32Col = value;
	}

	cfbam::ICFBamUInt32DefTable* CFBamSchema::getTableUInt32Def() {
		return( tableUInt32Def );
	}

	void CFBamSchema::setTableUInt32Def( cfbam::ICFBamUInt32DefTable* value ) {
		if( tableUInt32Def != NULL ) {
			delete tableUInt32Def;
			tableUInt32Def = NULL;
		}
		tableUInt32Def = value;
	}

	cfbam::ICFBamUInt32TypeTable* CFBamSchema::getTableUInt32Type() {
		return( tableUInt32Type );
	}

	void CFBamSchema::setTableUInt32Type( cfbam::ICFBamUInt32TypeTable* value ) {
		if( tableUInt32Type != NULL ) {
			delete tableUInt32Type;
			tableUInt32Type = NULL;
		}
		tableUInt32Type = value;
	}

	cfbam::ICFBamUInt64ColTable* CFBamSchema::getTableUInt64Col() {
		return( tableUInt64Col );
	}

	void CFBamSchema::setTableUInt64Col( cfbam::ICFBamUInt64ColTable* value ) {
		if( tableUInt64Col != NULL ) {
			delete tableUInt64Col;
			tableUInt64Col = NULL;
		}
		tableUInt64Col = value;
	}

	cfbam::ICFBamUInt64DefTable* CFBamSchema::getTableUInt64Def() {
		return( tableUInt64Def );
	}

	void CFBamSchema::setTableUInt64Def( cfbam::ICFBamUInt64DefTable* value ) {
		if( tableUInt64Def != NULL ) {
			delete tableUInt64Def;
			tableUInt64Def = NULL;
		}
		tableUInt64Def = value;
	}

	cfbam::ICFBamUInt64TypeTable* CFBamSchema::getTableUInt64Type() {
		return( tableUInt64Type );
	}

	void CFBamSchema::setTableUInt64Type( cfbam::ICFBamUInt64TypeTable* value ) {
		if( tableUInt64Type != NULL ) {
			delete tableUInt64Type;
			tableUInt64Type = NULL;
		}
		tableUInt64Type = value;
	}

	cfint::ICFIntURLProtocolTable* CFBamSchema::getTableURLProtocol() {
		return( tableURLProtocol );
	}

	void CFBamSchema::setTableURLProtocol( cfint::ICFIntURLProtocolTable* value ) {
		if( tableURLProtocol != NULL ) {
			delete tableURLProtocol;
			tableURLProtocol = NULL;
		}
		tableURLProtocol = value;
	}

	cfbam::ICFBamUuidColTable* CFBamSchema::getTableUuidCol() {
		return( tableUuidCol );
	}

	void CFBamSchema::setTableUuidCol( cfbam::ICFBamUuidColTable* value ) {
		if( tableUuidCol != NULL ) {
			delete tableUuidCol;
			tableUuidCol = NULL;
		}
		tableUuidCol = value;
	}

	cfbam::ICFBamUuidDefTable* CFBamSchema::getTableUuidDef() {
		return( tableUuidDef );
	}

	void CFBamSchema::setTableUuidDef( cfbam::ICFBamUuidDefTable* value ) {
		if( tableUuidDef != NULL ) {
			delete tableUuidDef;
			tableUuidDef = NULL;
		}
		tableUuidDef = value;
	}

	cfbam::ICFBamUuidGenTable* CFBamSchema::getTableUuidGen() {
		return( tableUuidGen );
	}

	void CFBamSchema::setTableUuidGen( cfbam::ICFBamUuidGenTable* value ) {
		if( tableUuidGen != NULL ) {
			delete tableUuidGen;
			tableUuidGen = NULL;
		}
		tableUuidGen = value;
	}

	cfbam::ICFBamUuidTypeTable* CFBamSchema::getTableUuidType() {
		return( tableUuidType );
	}

	void CFBamSchema::setTableUuidType( cfbam::ICFBamUuidTypeTable* value ) {
		if( tableUuidType != NULL ) {
			delete tableUuidType;
			tableUuidType = NULL;
		}
		tableUuidType = value;
	}

	cfbam::ICFBamValueTable* CFBamSchema::getTableValue() {
		return( tableValue );
	}

	void CFBamSchema::setTableValue( cfbam::ICFBamValueTable* value ) {
		if( tableValue != NULL ) {
			delete tableValue;
			tableValue = NULL;
		}
		tableValue = value;
	}

	bool CFBamSchema::isTransactionOpen() const {
		static const std::string S_ProcName( "isTransactionOpen" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	bool CFBamSchema::beginTransaction() {
		static const std::string S_ProcName( "beginTransaction" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	void CFBamSchema::commit() {
		static const std::string S_ProcName( "commit" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	void CFBamSchema::rollback() {
		static const std::string S_ProcName( "rollback" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	cfsec::ICFSecTablePerms* CFBamSchema::getTablePerms() {
		return( tablePerms );
	}

	void CFBamSchema::setTablePerms( cfsec::ICFSecTablePerms* value ) {
		if( tablePerms != NULL ) {
			delete tablePerms;
			tablePerms = NULL;
		}
		tablePerms = value;
	}

	void CFBamSchema::releasePreparedStatements() {
	}

	const std::string* CFBamSchema::getDbSchemaName() const {
		return( schemaDbName );
	}

	const std::string* CFBamSchema::getLowerDbSchemaName() const {
		return( lowerDbSchemaName );
	}

	void CFBamSchema::setDbSchemaName( const std::string& argDbSchemaName ) {
		static const std::string S_ProcName( "setDbSchemaName" );
		static const std::string S_ArgDbSchemaName( "argDbSchemaName" );
		if( argDbSchemaName.length() <= 0 ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_ArgDbSchemaName );
		}
		if( schemaDbName != NULL ) {
			delete schemaDbName;
			schemaDbName = NULL;
		}
		if( lowerDbSchemaName != NULL ) {
			delete lowerDbSchemaName;
			lowerDbSchemaName = NULL;
		}
		schemaDbName = new std::string( argDbSchemaName );
		lowerDbSchemaName = new std::string( argDbSchemaName );
		std::transform( lowerDbSchemaName->begin(), lowerDbSchemaName->end(), lowerDbSchemaName->begin(), ::tolower );
	}

}
