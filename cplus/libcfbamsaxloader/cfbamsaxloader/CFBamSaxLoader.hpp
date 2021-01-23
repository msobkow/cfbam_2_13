#pragma once

// Description: C++18 XML SAX Parser specification for CFBam.

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
#include <xercesc/sax2/Attributes.hpp>

#include <cfsecsaxloader/CFSecSaxLoader.hpp>
#include <cfintsaxloader/CFIntSaxLoader.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
	class ICFBamAtomObj;
	class ICFBamAtomEditObj;
	class ICFBamAtomTableObj;
	class CFBamSaxLoaderAtomHandler;
	class ICFBamBlobColObj;
	class ICFBamBlobColEditObj;
	class ICFBamBlobColTableObj;
	class CFBamSaxLoaderBlobColHandler;
	class ICFBamBlobDefObj;
	class ICFBamBlobDefEditObj;
	class ICFBamBlobDefTableObj;
	class CFBamSaxLoaderBlobDefHandler;
	class ICFBamBlobTypeObj;
	class ICFBamBlobTypeEditObj;
	class ICFBamBlobTypeTableObj;
	class CFBamSaxLoaderBlobTypeHandler;
	class ICFBamBoolColObj;
	class ICFBamBoolColEditObj;
	class ICFBamBoolColTableObj;
	class CFBamSaxLoaderBoolColHandler;
	class ICFBamBoolDefObj;
	class ICFBamBoolDefEditObj;
	class ICFBamBoolDefTableObj;
	class CFBamSaxLoaderBoolDefHandler;
	class ICFBamBoolTypeObj;
	class ICFBamBoolTypeEditObj;
	class ICFBamBoolTypeTableObj;
	class CFBamSaxLoaderBoolTypeHandler;
	class ICFBamChainObj;
	class ICFBamChainEditObj;
	class ICFBamChainTableObj;
	class CFBamSaxLoaderChainHandler;
	class ICFBamClearDepObj;
	class ICFBamClearDepEditObj;
	class ICFBamClearDepTableObj;
	class CFBamSaxLoaderClearDepHandler;
	class ICFBamClearSubDep1Obj;
	class ICFBamClearSubDep1EditObj;
	class ICFBamClearSubDep1TableObj;
	class CFBamSaxLoaderClearSubDep1Handler;
	class ICFBamClearSubDep2Obj;
	class ICFBamClearSubDep2EditObj;
	class ICFBamClearSubDep2TableObj;
	class CFBamSaxLoaderClearSubDep2Handler;
	class ICFBamClearSubDep3Obj;
	class ICFBamClearSubDep3EditObj;
	class ICFBamClearSubDep3TableObj;
	class CFBamSaxLoaderClearSubDep3Handler;
	class ICFBamClearTopDepObj;
	class ICFBamClearTopDepEditObj;
	class ICFBamClearTopDepTableObj;
	class CFBamSaxLoaderClearTopDepHandler;
	class ICFBamClusterObj;
	class ICFBamClusterEditObj;
	class ICFBamClusterTableObj;
	class CFBamSaxLoaderClusterHandler;
	class ICFBamDateColObj;
	class ICFBamDateColEditObj;
	class ICFBamDateColTableObj;
	class CFBamSaxLoaderDateColHandler;
	class ICFBamDateDefObj;
	class ICFBamDateDefEditObj;
	class ICFBamDateDefTableObj;
	class CFBamSaxLoaderDateDefHandler;
	class ICFBamDateTypeObj;
	class ICFBamDateTypeEditObj;
	class ICFBamDateTypeTableObj;
	class CFBamSaxLoaderDateTypeHandler;
	class ICFBamDelDepObj;
	class ICFBamDelDepEditObj;
	class ICFBamDelDepTableObj;
	class CFBamSaxLoaderDelDepHandler;
	class ICFBamDelSubDep1Obj;
	class ICFBamDelSubDep1EditObj;
	class ICFBamDelSubDep1TableObj;
	class CFBamSaxLoaderDelSubDep1Handler;
	class ICFBamDelSubDep2Obj;
	class ICFBamDelSubDep2EditObj;
	class ICFBamDelSubDep2TableObj;
	class CFBamSaxLoaderDelSubDep2Handler;
	class ICFBamDelSubDep3Obj;
	class ICFBamDelSubDep3EditObj;
	class ICFBamDelSubDep3TableObj;
	class CFBamSaxLoaderDelSubDep3Handler;
	class ICFBamDelTopDepObj;
	class ICFBamDelTopDepEditObj;
	class ICFBamDelTopDepTableObj;
	class CFBamSaxLoaderDelTopDepHandler;
	class ICFBamDoubleColObj;
	class ICFBamDoubleColEditObj;
	class ICFBamDoubleColTableObj;
	class CFBamSaxLoaderDoubleColHandler;
	class ICFBamDoubleDefObj;
	class ICFBamDoubleDefEditObj;
	class ICFBamDoubleDefTableObj;
	class CFBamSaxLoaderDoubleDefHandler;
	class ICFBamDoubleTypeObj;
	class ICFBamDoubleTypeEditObj;
	class ICFBamDoubleTypeTableObj;
	class CFBamSaxLoaderDoubleTypeHandler;
	class ICFBamEnumDefObj;
	class ICFBamEnumDefEditObj;
	class ICFBamEnumDefTableObj;
	class CFBamSaxLoaderEnumDefHandler;
	class ICFBamEnumTagObj;
	class ICFBamEnumTagEditObj;
	class ICFBamEnumTagTableObj;
	class CFBamSaxLoaderEnumTagHandler;
	class ICFBamEnumTypeObj;
	class ICFBamEnumTypeEditObj;
	class ICFBamEnumTypeTableObj;
	class CFBamSaxLoaderEnumTypeHandler;
	class ICFBamFloatColObj;
	class ICFBamFloatColEditObj;
	class ICFBamFloatColTableObj;
	class CFBamSaxLoaderFloatColHandler;
	class ICFBamFloatDefObj;
	class ICFBamFloatDefEditObj;
	class ICFBamFloatDefTableObj;
	class CFBamSaxLoaderFloatDefHandler;
	class ICFBamFloatTypeObj;
	class ICFBamFloatTypeEditObj;
	class ICFBamFloatTypeTableObj;
	class CFBamSaxLoaderFloatTypeHandler;
	class ICFBamHostNodeObj;
	class ICFBamHostNodeEditObj;
	class ICFBamHostNodeTableObj;
	class CFBamSaxLoaderHostNodeHandler;
	class ICFBamISOCcyObj;
	class ICFBamISOCcyEditObj;
	class ICFBamISOCcyTableObj;
	class CFBamSaxLoaderISOCcyHandler;
	class ICFBamISOCtryObj;
	class ICFBamISOCtryEditObj;
	class ICFBamISOCtryTableObj;
	class CFBamSaxLoaderISOCtryHandler;
	class ICFBamISOCtryCcyObj;
	class ICFBamISOCtryCcyEditObj;
	class ICFBamISOCtryCcyTableObj;
	class CFBamSaxLoaderISOCtryCcyHandler;
	class ICFBamISOCtryLangObj;
	class ICFBamISOCtryLangEditObj;
	class ICFBamISOCtryLangTableObj;
	class CFBamSaxLoaderISOCtryLangHandler;
	class ICFBamISOLangObj;
	class ICFBamISOLangEditObj;
	class ICFBamISOLangTableObj;
	class CFBamSaxLoaderISOLangHandler;
	class ICFBamISOTZoneObj;
	class ICFBamISOTZoneEditObj;
	class ICFBamISOTZoneTableObj;
	class CFBamSaxLoaderISOTZoneHandler;
	class ICFBamId16GenObj;
	class ICFBamId16GenEditObj;
	class ICFBamId16GenTableObj;
	class CFBamSaxLoaderId16GenHandler;
	class ICFBamId32GenObj;
	class ICFBamId32GenEditObj;
	class ICFBamId32GenTableObj;
	class CFBamSaxLoaderId32GenHandler;
	class ICFBamId64GenObj;
	class ICFBamId64GenEditObj;
	class ICFBamId64GenTableObj;
	class CFBamSaxLoaderId64GenHandler;
	class ICFBamIndexObj;
	class ICFBamIndexEditObj;
	class ICFBamIndexTableObj;
	class CFBamSaxLoaderIndexHandler;
	class ICFBamIndexColObj;
	class ICFBamIndexColEditObj;
	class ICFBamIndexColTableObj;
	class CFBamSaxLoaderIndexColHandler;
	class ICFBamInt16ColObj;
	class ICFBamInt16ColEditObj;
	class ICFBamInt16ColTableObj;
	class CFBamSaxLoaderInt16ColHandler;
	class ICFBamInt16DefObj;
	class ICFBamInt16DefEditObj;
	class ICFBamInt16DefTableObj;
	class CFBamSaxLoaderInt16DefHandler;
	class ICFBamInt16TypeObj;
	class ICFBamInt16TypeEditObj;
	class ICFBamInt16TypeTableObj;
	class CFBamSaxLoaderInt16TypeHandler;
	class ICFBamInt32ColObj;
	class ICFBamInt32ColEditObj;
	class ICFBamInt32ColTableObj;
	class CFBamSaxLoaderInt32ColHandler;
	class ICFBamInt32DefObj;
	class ICFBamInt32DefEditObj;
	class ICFBamInt32DefTableObj;
	class CFBamSaxLoaderInt32DefHandler;
	class ICFBamInt32TypeObj;
	class ICFBamInt32TypeEditObj;
	class ICFBamInt32TypeTableObj;
	class CFBamSaxLoaderInt32TypeHandler;
	class ICFBamInt64ColObj;
	class ICFBamInt64ColEditObj;
	class ICFBamInt64ColTableObj;
	class CFBamSaxLoaderInt64ColHandler;
	class ICFBamInt64DefObj;
	class ICFBamInt64DefEditObj;
	class ICFBamInt64DefTableObj;
	class CFBamSaxLoaderInt64DefHandler;
	class ICFBamInt64TypeObj;
	class ICFBamInt64TypeEditObj;
	class ICFBamInt64TypeTableObj;
	class CFBamSaxLoaderInt64TypeHandler;
	class ICFBamLicenseObj;
	class ICFBamLicenseEditObj;
	class ICFBamLicenseTableObj;
	class CFBamSaxLoaderLicenseHandler;
	class ICFBamMajorVersionObj;
	class ICFBamMajorVersionEditObj;
	class ICFBamMajorVersionTableObj;
	class CFBamSaxLoaderMajorVersionHandler;
	class ICFBamMimeTypeObj;
	class ICFBamMimeTypeEditObj;
	class ICFBamMimeTypeTableObj;
	class CFBamSaxLoaderMimeTypeHandler;
	class ICFBamMinorVersionObj;
	class ICFBamMinorVersionEditObj;
	class ICFBamMinorVersionTableObj;
	class CFBamSaxLoaderMinorVersionHandler;
	class ICFBamNmTokenColObj;
	class ICFBamNmTokenColEditObj;
	class ICFBamNmTokenColTableObj;
	class CFBamSaxLoaderNmTokenColHandler;
	class ICFBamNmTokenDefObj;
	class ICFBamNmTokenDefEditObj;
	class ICFBamNmTokenDefTableObj;
	class CFBamSaxLoaderNmTokenDefHandler;
	class ICFBamNmTokenTypeObj;
	class ICFBamNmTokenTypeEditObj;
	class ICFBamNmTokenTypeTableObj;
	class CFBamSaxLoaderNmTokenTypeHandler;
	class ICFBamNmTokensColObj;
	class ICFBamNmTokensColEditObj;
	class ICFBamNmTokensColTableObj;
	class CFBamSaxLoaderNmTokensColHandler;
	class ICFBamNmTokensDefObj;
	class ICFBamNmTokensDefEditObj;
	class ICFBamNmTokensDefTableObj;
	class CFBamSaxLoaderNmTokensDefHandler;
	class ICFBamNmTokensTypeObj;
	class ICFBamNmTokensTypeEditObj;
	class ICFBamNmTokensTypeTableObj;
	class CFBamSaxLoaderNmTokensTypeHandler;
	class ICFBamNumberColObj;
	class ICFBamNumberColEditObj;
	class ICFBamNumberColTableObj;
	class CFBamSaxLoaderNumberColHandler;
	class ICFBamNumberDefObj;
	class ICFBamNumberDefEditObj;
	class ICFBamNumberDefTableObj;
	class CFBamSaxLoaderNumberDefHandler;
	class ICFBamNumberTypeObj;
	class ICFBamNumberTypeEditObj;
	class ICFBamNumberTypeTableObj;
	class CFBamSaxLoaderNumberTypeHandler;
	class ICFBamParamObj;
	class ICFBamParamEditObj;
	class ICFBamParamTableObj;
	class CFBamSaxLoaderParamHandler;
	class ICFBamPopDepObj;
	class ICFBamPopDepEditObj;
	class ICFBamPopDepTableObj;
	class CFBamSaxLoaderPopDepHandler;
	class ICFBamPopSubDep1Obj;
	class ICFBamPopSubDep1EditObj;
	class ICFBamPopSubDep1TableObj;
	class CFBamSaxLoaderPopSubDep1Handler;
	class ICFBamPopSubDep2Obj;
	class ICFBamPopSubDep2EditObj;
	class ICFBamPopSubDep2TableObj;
	class CFBamSaxLoaderPopSubDep2Handler;
	class ICFBamPopSubDep3Obj;
	class ICFBamPopSubDep3EditObj;
	class ICFBamPopSubDep3TableObj;
	class CFBamSaxLoaderPopSubDep3Handler;
	class ICFBamPopTopDepObj;
	class ICFBamPopTopDepEditObj;
	class ICFBamPopTopDepTableObj;
	class CFBamSaxLoaderPopTopDepHandler;
	class ICFBamRelationObj;
	class ICFBamRelationEditObj;
	class ICFBamRelationTableObj;
	class CFBamSaxLoaderRelationHandler;
	class ICFBamRelationColObj;
	class ICFBamRelationColEditObj;
	class ICFBamRelationColTableObj;
	class CFBamSaxLoaderRelationColHandler;
	class ICFBamSchemaDefObj;
	class ICFBamSchemaDefEditObj;
	class ICFBamSchemaDefTableObj;
	class CFBamSaxLoaderSchemaDefHandler;
	class CFBamSaxLoaderSchemaDefCafeSchemaObjImportHandler;
	class CFBamSaxLoaderSchemaDefCafeSchemaObjInterfaceHandler;
	class CFBamSaxLoaderSchemaDefCafeSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCafeSchemaObjImplementationHandler;
	class CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjImportHandler;
	class CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjImportHandler;
	class CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjImportHandler;
	class CFBamSaxLoaderSchemaDefCafeOracleSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCafeOracleSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCafeOracleSchemaObjImportHandler;
	class CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjImportHandler;
	class CFBamSaxLoaderSchemaDefCafeRamSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCafeRamSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCafeRamSchemaObjImportHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgSchemaImportHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgSchemaFormattersHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgClientSchemaImportHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgClientSchemaBodyHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaBodyHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaImportHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaWireParsersHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaXsdSpecHandler;
	class CFBamSaxLoaderSchemaDefCafeSchemaXsdElementListHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaBodyHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaImportHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaWireParsersHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaXsdElementListHandler;
	class CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaXsdSpecHandler;
	class CFBamSaxLoaderSchemaDefCPlusSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefCPlusSchemaObjInterfaceHandler;
	class CFBamSaxLoaderSchemaDefCPlusSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCPlusSchemaObjImplementationHandler;
	class CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefCPlusRamSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCPlusRamSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCPlusRamSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgSchemaIncludeHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgSchemaFormattersHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgClientSchemaIncludeHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgClientSchemaBodyHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaBodyHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaIncludeHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaWireParsersHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaXsdSpecHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaXsdElementListHandler;
	class CFBamSaxLoaderSchemaDefCPlusXmsgRspnSchemaBodyHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaIncludeHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaWireParsersHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaXsdElementListHandler;
	class CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaXsdSpecHandler;
	class CFBamSaxLoaderSchemaDefHPlusSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefHPlusSchemaObjInterfaceHandler;
	class CFBamSaxLoaderSchemaDefHPlusSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefHPlusSchemaObjImplementationHandler;
	class CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefHPlusRamSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefHPlusRamSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefHPlusRamSchemaObjIncludeHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgSchemaIncludeHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgSchemaFormattersHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgClientSchemaIncludeHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgClientSchemaBodyHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaBodyHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaIncludeHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaWireParsersHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaXsdSpecHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaXsdElementListHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaBodyHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaIncludeHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaWireParsersHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaXsdElementListHandler;
	class CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaXsdSpecHandler;
	class CFBamSaxLoaderSchemaDefCSharpSchemaObjUsingHandler;
	class CFBamSaxLoaderSchemaDefCSharpSchemaObjInterfaceHandler;
	class CFBamSaxLoaderSchemaDefCSharpSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCSharpSchemaObjImplementationHandler;
	class CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjUsingHandler;
	class CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjUsingHandler;
	class CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjUsingHandler;
	class CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjUsingHandler;
	class CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjUsingHandler;
	class CFBamSaxLoaderSchemaDefCSharpRamSchemaObjMembersHandler;
	class CFBamSaxLoaderSchemaDefCSharpRamSchemaObjImplHandler;
	class CFBamSaxLoaderSchemaDefCSharpRamSchemaObjUsingHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgSchemaUsingHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgSchemaFormattersHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgClientSchemaUsingHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgClientSchemaBodyHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaBodyHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaUsingHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaWireParsersHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaXsdSpecHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaXsdElementListHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaBodyHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaUsingHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaWireParsersHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaXsdElementListHandler;
	class CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaXsdSpecHandler;
	class ICFBamSchemaRefObj;
	class ICFBamSchemaRefEditObj;
	class ICFBamSchemaRefTableObj;
	class CFBamSaxLoaderSchemaRefHandler;
	class ICFBamScopeObj;
	class ICFBamScopeEditObj;
	class ICFBamScopeTableObj;
	class CFBamSaxLoaderScopeHandler;
	class ICFBamSecAppObj;
	class ICFBamSecAppEditObj;
	class ICFBamSecAppTableObj;
	class CFBamSaxLoaderSecAppHandler;
	class ICFBamSecDeviceObj;
	class ICFBamSecDeviceEditObj;
	class ICFBamSecDeviceTableObj;
	class CFBamSaxLoaderSecDeviceHandler;
	class ICFBamSecFormObj;
	class ICFBamSecFormEditObj;
	class ICFBamSecFormTableObj;
	class CFBamSaxLoaderSecFormHandler;
	class ICFBamSecGroupObj;
	class ICFBamSecGroupEditObj;
	class ICFBamSecGroupTableObj;
	class CFBamSaxLoaderSecGroupHandler;
	class ICFBamSecGroupFormObj;
	class ICFBamSecGroupFormEditObj;
	class ICFBamSecGroupFormTableObj;
	class CFBamSaxLoaderSecGroupFormHandler;
	class ICFBamSecGrpIncObj;
	class ICFBamSecGrpIncEditObj;
	class ICFBamSecGrpIncTableObj;
	class CFBamSaxLoaderSecGrpIncHandler;
	class ICFBamSecGrpMembObj;
	class ICFBamSecGrpMembEditObj;
	class ICFBamSecGrpMembTableObj;
	class CFBamSaxLoaderSecGrpMembHandler;
	class ICFBamSecSessionObj;
	class ICFBamSecSessionEditObj;
	class ICFBamSecSessionTableObj;
	class CFBamSaxLoaderSecSessionHandler;
	class ICFBamSecUserObj;
	class ICFBamSecUserEditObj;
	class ICFBamSecUserTableObj;
	class CFBamSaxLoaderSecUserHandler;
	class ICFBamServerListFuncObj;
	class ICFBamServerListFuncEditObj;
	class ICFBamServerListFuncTableObj;
	class CFBamSaxLoaderServerListFuncHandler;
	class ICFBamServerMethodObj;
	class ICFBamServerMethodEditObj;
	class ICFBamServerMethodTableObj;
	class CFBamSaxLoaderServerMethodHandler;
	class ICFBamServerObjFuncObj;
	class ICFBamServerObjFuncEditObj;
	class ICFBamServerObjFuncTableObj;
	class CFBamSaxLoaderServerObjFuncHandler;
	class ICFBamServerProcObj;
	class ICFBamServerProcEditObj;
	class ICFBamServerProcTableObj;
	class CFBamSaxLoaderServerProcHandler;
	class ICFBamServiceObj;
	class ICFBamServiceEditObj;
	class ICFBamServiceTableObj;
	class CFBamSaxLoaderServiceHandler;
	class ICFBamServiceTypeObj;
	class ICFBamServiceTypeEditObj;
	class ICFBamServiceTypeTableObj;
	class CFBamSaxLoaderServiceTypeHandler;
	class ICFBamStringColObj;
	class ICFBamStringColEditObj;
	class ICFBamStringColTableObj;
	class CFBamSaxLoaderStringColHandler;
	class ICFBamStringDefObj;
	class ICFBamStringDefEditObj;
	class ICFBamStringDefTableObj;
	class CFBamSaxLoaderStringDefHandler;
	class ICFBamStringTypeObj;
	class ICFBamStringTypeEditObj;
	class ICFBamStringTypeTableObj;
	class CFBamSaxLoaderStringTypeHandler;
	class ICFBamSubProjectObj;
	class ICFBamSubProjectEditObj;
	class ICFBamSubProjectTableObj;
	class CFBamSaxLoaderSubProjectHandler;
	class ICFBamSysClusterObj;
	class ICFBamSysClusterEditObj;
	class ICFBamSysClusterTableObj;
	class CFBamSaxLoaderSysClusterHandler;
	class ICFBamTSecGroupObj;
	class ICFBamTSecGroupEditObj;
	class ICFBamTSecGroupTableObj;
	class CFBamSaxLoaderTSecGroupHandler;
	class ICFBamTSecGrpIncObj;
	class ICFBamTSecGrpIncEditObj;
	class ICFBamTSecGrpIncTableObj;
	class CFBamSaxLoaderTSecGrpIncHandler;
	class ICFBamTSecGrpMembObj;
	class ICFBamTSecGrpMembEditObj;
	class ICFBamTSecGrpMembTableObj;
	class CFBamSaxLoaderTSecGrpMembHandler;
	class ICFBamTZDateColObj;
	class ICFBamTZDateColEditObj;
	class ICFBamTZDateColTableObj;
	class CFBamSaxLoaderTZDateColHandler;
	class ICFBamTZDateDefObj;
	class ICFBamTZDateDefEditObj;
	class ICFBamTZDateDefTableObj;
	class CFBamSaxLoaderTZDateDefHandler;
	class ICFBamTZDateTypeObj;
	class ICFBamTZDateTypeEditObj;
	class ICFBamTZDateTypeTableObj;
	class CFBamSaxLoaderTZDateTypeHandler;
	class ICFBamTZTimeColObj;
	class ICFBamTZTimeColEditObj;
	class ICFBamTZTimeColTableObj;
	class CFBamSaxLoaderTZTimeColHandler;
	class ICFBamTZTimeDefObj;
	class ICFBamTZTimeDefEditObj;
	class ICFBamTZTimeDefTableObj;
	class CFBamSaxLoaderTZTimeDefHandler;
	class ICFBamTZTimeTypeObj;
	class ICFBamTZTimeTypeEditObj;
	class ICFBamTZTimeTypeTableObj;
	class CFBamSaxLoaderTZTimeTypeHandler;
	class ICFBamTZTimestampColObj;
	class ICFBamTZTimestampColEditObj;
	class ICFBamTZTimestampColTableObj;
	class CFBamSaxLoaderTZTimestampColHandler;
	class ICFBamTZTimestampDefObj;
	class ICFBamTZTimestampDefEditObj;
	class ICFBamTZTimestampDefTableObj;
	class CFBamSaxLoaderTZTimestampDefHandler;
	class ICFBamTZTimestampTypeObj;
	class ICFBamTZTimestampTypeEditObj;
	class ICFBamTZTimestampTypeTableObj;
	class CFBamSaxLoaderTZTimestampTypeHandler;
	class ICFBamTableObj;
	class ICFBamTableEditObj;
	class ICFBamTableTableObj;
	class CFBamSaxLoaderTableHandler;
	class CFBamSaxLoaderTableCafeObjMembersHandler;
	class CFBamSaxLoaderTableCafeObjInterfaceHandler;
	class CFBamSaxLoaderTableCafeObjImportHandler;
	class CFBamSaxLoaderTableCafeObjImplementationHandler;
	class CFBamSaxLoaderTableCafeEditObjMembersHandler;
	class CFBamSaxLoaderTableCafeEditObjInterfaceHandler;
	class CFBamSaxLoaderTableCafeEditObjImportHandler;
	class CFBamSaxLoaderTableCafeEditObjImplementationHandler;
	class CFBamSaxLoaderTableCafeTableImportHandler;
	class CFBamSaxLoaderTableCafeTableMembersHandler;
	class CFBamSaxLoaderTableCafeTableInterfaceHandler;
	class CFBamSaxLoaderTableCafeTableImplementationHandler;
	class CFBamSaxLoaderTableCafeTableObjImportHandler;
	class CFBamSaxLoaderTableCafeTableObjMembersHandler;
	class CFBamSaxLoaderTableCafeTableObjInterfaceHandler;
	class CFBamSaxLoaderTableCafeTableObjImplementationHandler;
	class CFBamSaxLoaderTableCafeDb2LUWTableImportHandler;
	class CFBamSaxLoaderTableCafeDb2LUWTableMembersHandler;
	class CFBamSaxLoaderTableCafeDb2LUWTableImplementationHandler;
	class CFBamSaxLoaderTableCafeMSSqlTableImportHandler;
	class CFBamSaxLoaderTableCafeMSSqlTableMembersHandler;
	class CFBamSaxLoaderTableCafeMSSqlTableImplementationHandler;
	class CFBamSaxLoaderTableCafeMySqlTableImportHandler;
	class CFBamSaxLoaderTableCafeMySqlTableMembersHandler;
	class CFBamSaxLoaderTableCafeMySqlTableImplementationHandler;
	class CFBamSaxLoaderTableCafeOracleTableImportHandler;
	class CFBamSaxLoaderTableCafeOracleTableMembersHandler;
	class CFBamSaxLoaderTableCafeOracleTableImplementationHandler;
	class CFBamSaxLoaderTableCafePgSqlTableImportHandler;
	class CFBamSaxLoaderTableCafePgSqlTableMembersHandler;
	class CFBamSaxLoaderTableCafePgSqlTableImplementationHandler;
	class CFBamSaxLoaderTableCafeRamTableImportHandler;
	class CFBamSaxLoaderTableCafeRamTableMembersHandler;
	class CFBamSaxLoaderTableCafeRamTableImplementationHandler;
	class CFBamSaxLoaderTableCafeSaxLoaderImportHandler;
	class CFBamSaxLoaderTableCafeSaxLoaderStartElementHandler;
	class CFBamSaxLoaderTableCafeSaxLoaderEndElementHandler;
	class CFBamSaxLoaderTableCafeXMsgTableImportHandler;
	class CFBamSaxLoaderTableCafeXMsgTableformattersHandler;
	class CFBamSaxLoaderTableCafeXMsgRqstTableImportHandler;
	class CFBamSaxLoaderTableCafeXMsgRspnTableImportHandler;
	class CFBamSaxLoaderTableCafeXMsgClientTableImportHandler;
	class CFBamSaxLoaderTableCafeXMsgRqstTableBodyHandler;
	class CFBamSaxLoaderTableCafeXMsgRspnTableBodyHandler;
	class CFBamSaxLoaderTableCafeXMsgClientTableBodyHandler;
	class CFBamSaxLoaderTableCPlusObjMembersHandler;
	class CFBamSaxLoaderTableCPlusObjInterfaceHandler;
	class CFBamSaxLoaderTableCPlusObjIncludeHandler;
	class CFBamSaxLoaderTableCPlusObjImplementationHandler;
	class CFBamSaxLoaderTableCPlusEditObjMembersHandler;
	class CFBamSaxLoaderTableCPlusEditObjInteraceHandler;
	class CFBamSaxLoaderTableCPlusEditObjIncludeHandler;
	class CFBamSaxLoaderTableCPlusEditObjImplementationHandler;
	class CFBamSaxLoaderTableCPlusTableIncludeHandler;
	class CFBamSaxLoaderTableCPlusTableMembersHandler;
	class CFBamSaxLoaderTableCPlusTableInterfaceHandler;
	class CFBamSaxLoaderTableCPlusTableImplementationHandler;
	class CFBamSaxLoaderTableCPlusTableObjIncludeHandler;
	class CFBamSaxLoaderTableCPlusTableObjMembersHandler;
	class CFBamSaxLoaderTableCPlusTableObjInterfaceHandler;
	class CFBamSaxLoaderTableCPlusTableObjImplementationHandler;
	class CFBamSaxLoaderTableCPlusDb2LUWTableIncludeHandler;
	class CFBamSaxLoaderTableCPlusDb2LUWTableMembersHandler;
	class CFBamSaxLoaderTableCPlusDb2LUWTableImplementationHandler;
	class CFBamSaxLoaderTableCPlusMSSqlTableIncludeHandler;
	class CFBamSaxLoaderTableCPlusMSSqlTableMembersHandler;
	class CFBamSaxLoaderTableCPlusMSSqlTableImplementationHandler;
	class CFBamSaxLoaderTableCPlusMySqlTableIncludeHandler;
	class CFBamSaxLoaderTableCPlusMySqlTableMembersHandler;
	class CFBamSaxLoaderTableCPlusMySqlTableImplementationHandler;
	class CFBamSaxLoaderTableCPlusOracleTableIncludeHandler;
	class CFBamSaxLoaderTableCPlusOracleTableMembersHandler;
	class CFBamSaxLoaderTableCPlusOracleTableImplementationHandler;
	class CFBamSaxLoaderTableCPlusPgSqlTableMembersHandler;
	class CFBamSaxLoaderTableCPlusPgSqlTableImplementationHandler;
	class CFBamSaxLoaderTableCPlusRamTableIncludeHandler;
	class CFBamSaxLoaderTableCPlusRamTableMembersHandler;
	class CFBamSaxLoaderTableCPlusRamTableImplementationHandler;
	class CFBamSaxLoaderTableCPlusSaxLoaderIncludeHandler;
	class CFBamSaxLoaderTableCPlusSaxLoaderStartElementHandler;
	class CFBamSaxLoaderTableCPlusSaxLoaderEndElementHandler;
	class CFBamSaxLoaderTableCPlusXMsgTableIncludeHandler;
	class CFBamSaxLoaderTableCPlusXMsgTableFormattersHandler;
	class CFBamSaxLoaderTableCPlusXMsgRqstTableIncludeHandler;
	class CFBamSaxLoaderTableCPlusXMsgRspnTableIncludeHandler;
	class CFBamSaxLoaderTableCPlusXMsgClientTableIncludeHandler;
	class CFBamSaxLoaderTableCPlusXMsgRqstTableBodyHandler;
	class CFBamSaxLoaderTableCPlusXMsgRspnTableBodyHandler;
	class CFBamSaxLoaderTableCPlusXMsgClientTableBodyHandler;
	class CFBamSaxLoaderTableHPlusObjMembersHandler;
	class CFBamSaxLoaderTableHPlusObjInterfaceHandler;
	class CFBamSaxLoaderTableHPlusObjIncludeHandler;
	class CFBamSaxLoaderTableHPlusObjImplemntationHandler;
	class CFBamSaxLoaderTableHPlusEditObjMembersHandler;
	class CFBamSaxLoaderTableHPlusEditObjInterfaceHandler;
	class CFBamSaxLoaderTableHPlusEditObjIncludeHandler;
	class CFBamSaxLoaderTableHPlusEditObjImplementationHandler;
	class CFBamSaxLoaderTableHPlusTableIncludeHandler;
	class CFBamSaxLoaderTableHPlusTableMembersHandler;
	class CFBamSaxLoaderTableHPlusTableInterfaceHandler;
	class CFBamSaxLoaderTableHPlusTableImplementationHandler;
	class CFBamSaxLoaderTableHPlusTableObjIncludeHandler;
	class CFBamSaxLoaderTableHPlusTableObjMembersHandler;
	class CFBamSaxLoaderTableHPlusTableObjInterfaceHandler;
	class CFBamSaxLoaderTableHPlusTableObjImplementationHandler;
	class CFBamSaxLoaderTableHPlusDb2LUWTableIncludeHandler;
	class CFBamSaxLoaderTableHPlusDb2LUWTableMembersHandler;
	class CFBamSaxLoaderTableHPlusDb2LUWTableImplementationHandler;
	class CFBamSaxLoaderTableHPlusMSSqlTableIncludeHandler;
	class CFBamSaxLoaderTableHPlusMSSqlTableMembersHandler;
	class CFBamSaxLoaderTableHPlusMSSqlTableImplementationHandler;
	class CFBamSaxLoaderTableHPlusMySqlTableIncludeHandler;
	class CFBamSaxLoaderTableHPlusMySqlTableMembersHandler;
	class CFBamSaxLoaderTableHPlusMySqlTableImplementationHandler;
	class CFBamSaxLoaderTableHPlusOracleTableIncludeHandler;
	class CFBamSaxLoaderTableHPlusOracleTableMembersHandler;
	class CFBamSaxLoaderTableHPlusOracleTableImplementationHandler;
	class CFBamSaxLoaderTableHPlusPgSqlTableIncludeHandler;
	class CFBamSaxLoaderTableHPlusPgSqlTableMembersHandler;
	class CFBamSaxLoaderTableHPlusPgSqlTableImplementationHandler;
	class CFBamSaxLoaderTableHPlusRamTableIncludeHandler;
	class CFBamSaxLoaderTableHPlusRamTableMembersHandler;
	class CFBamSaxLoaderTableHPlusRamTableImplementationHandler;
	class CFBamSaxLoaderTableHPlusSaxLoaderIncludeHandler;
	class CFBamSaxLoaderTableHPlusSaxLoaderStartElementHandler;
	class CFBamSaxLoaderTableHPlusSaxLoaderEndElementHandler;
	class CFBamSaxLoaderTableHPlusXMsgTableIncludeHandler;
	class CFBamSaxLoaderTableHPlusXMsgTableFormattersHandler;
	class CFBamSaxLoaderTableHPlusXMsgRqstTableIncludeHandler;
	class CFBamSaxLoaderTableHPlusXMsgRspnTableIncludeHandler;
	class CFBamSaxLoaderTableHPlusXMsgClientTableIncludeHandler;
	class CFBamSaxLoaderTableHPlusXMsgRqstTableBodyHandler;
	class CFBamSaxLoaderTableHPlusXMsgRspnTableBodyHandler;
	class CFBamSaxLoaderTableHPlusXMsgClientTableBodyHandler;
	class CFBamSaxLoaderTableCSharpObjMembersHandler;
	class CFBamSaxLoaderTableCSharpObjInterfaceHandler;
	class CFBamSaxLoaderTableCSharpObjUsingHandler;
	class CFBamSaxLoaderTableCSharpObjImplementationHandler;
	class CFBamSaxLoaderTableCSharpEditObjMembersHandler;
	class CFBamSaxLoaderTableCSharpEditObjInterfaceHandler;
	class CFBamSaxLoaderTableCSharpEditObjUsingHandler;
	class CFBamSaxLoaderTableCSharpEditObjImplementationHandler;
	class CFBamSaxLoaderTableCSharpTableUsingHandler;
	class CFBamSaxLoaderTableCSharpTableMembersHandler;
	class CFBamSaxLoaderTableCSharpTableInterfaceHandler;
	class CFBamSaxLoaderTableCSharpTableImplementationHandler;
	class CFBamSaxLoaderTableCSharpTableObjUsingHandler;
	class CFBamSaxLoaderTableCSharpTableObjMembersHandler;
	class CFBamSaxLoaderTableCSharpTableObjInterfaceHandler;
	class CFBamSaxLoaderTableCSharpTableObjImplementationHandler;
	class CFBamSaxLoaderTableCSharpDb2LUWTableUsingHandler;
	class CFBamSaxLoaderTableCSharpDb2LUWTableMembersHandler;
	class CFBamSaxLoaderTableCSharpDb2LUWTableImplementationHandler;
	class CFBamSaxLoaderTableCSharpMSSqlTableUsingHandler;
	class CFBamSaxLoaderTableCSharpMSSqlTableMembersHandler;
	class CFBamSaxLoaderTableCSharpMSSqlTableImplementationHandler;
	class CFBamSaxLoaderTableCSharpMySqlTableUsingHandler;
	class CFBamSaxLoaderTableCSharpMySqlTableMembersHandler;
	class CFBamSaxLoaderTableCSharpMySqlTableImplementationHandler;
	class CFBamSaxLoaderTableCSharpOracleTableUsingHandler;
	class CFBamSaxLoaderTableCSharpOracleTableMembersHandler;
	class CFBamSaxLoaderTableCSharpOracleTableImplementationHandler;
	class CFBamSaxLoaderTableCSharpPgSqlTableUsingHandler;
	class CFBamSaxLoaderTableCSharpPgSqlTableMembersHandler;
	class CFBamSaxLoaderTableCSharpPgSqlTableImplementationHandler;
	class CFBamSaxLoaderTableCSharpRamTableUsingHandler;
	class CFBamSaxLoaderTableCSharpRamTableMembersHandler;
	class CFBamSaxLoaderTableCSharpRamTableImplementationHandler;
	class CFBamSaxLoaderTableCSharpSaxLoaderUsingHandler;
	class CFBamSaxLoaderTableCSharpSaxLoaderStartElementHandler;
	class CFBamSaxLoaderTableCSharpSaxLoaderEndElementHandler;
	class CFBamSaxLoaderTableCSharpXMsgTableUsingHandler;
	class CFBamSaxLoaderTableCSharpXMsgTableFormattersHandler;
	class CFBamSaxLoaderTableCSharpXMsgRqstTableUsingHandler;
	class CFBamSaxLoaderTableCSharpXMsgRspnTableUsingHandler;
	class CFBamSaxLoaderTableCSharpXMsgClientTableUsingHandler;
	class CFBamSaxLoaderTableCSharpXMsgRqstTableBodyHandler;
	class CFBamSaxLoaderTableCSharpXMsgRspnTableBodyHandler;
	class CFBamSaxLoaderTableCSharpXMsgClientTableBodyHandler;
	class ICFBamTableColObj;
	class ICFBamTableColEditObj;
	class ICFBamTableColTableObj;
	class CFBamSaxLoaderTableColHandler;
	class ICFBamTenantObj;
	class ICFBamTenantEditObj;
	class ICFBamTenantTableObj;
	class CFBamSaxLoaderTenantHandler;
	class ICFBamTextColObj;
	class ICFBamTextColEditObj;
	class ICFBamTextColTableObj;
	class CFBamSaxLoaderTextColHandler;
	class ICFBamTextDefObj;
	class ICFBamTextDefEditObj;
	class ICFBamTextDefTableObj;
	class CFBamSaxLoaderTextDefHandler;
	class ICFBamTextTypeObj;
	class ICFBamTextTypeEditObj;
	class ICFBamTextTypeTableObj;
	class CFBamSaxLoaderTextTypeHandler;
	class ICFBamTimeColObj;
	class ICFBamTimeColEditObj;
	class ICFBamTimeColTableObj;
	class CFBamSaxLoaderTimeColHandler;
	class ICFBamTimeDefObj;
	class ICFBamTimeDefEditObj;
	class ICFBamTimeDefTableObj;
	class CFBamSaxLoaderTimeDefHandler;
	class ICFBamTimeTypeObj;
	class ICFBamTimeTypeEditObj;
	class ICFBamTimeTypeTableObj;
	class CFBamSaxLoaderTimeTypeHandler;
	class ICFBamTimestampColObj;
	class ICFBamTimestampColEditObj;
	class ICFBamTimestampColTableObj;
	class CFBamSaxLoaderTimestampColHandler;
	class ICFBamTimestampDefObj;
	class ICFBamTimestampDefEditObj;
	class ICFBamTimestampDefTableObj;
	class CFBamSaxLoaderTimestampDefHandler;
	class ICFBamTimestampTypeObj;
	class ICFBamTimestampTypeEditObj;
	class ICFBamTimestampTypeTableObj;
	class CFBamSaxLoaderTimestampTypeHandler;
	class ICFBamTldObj;
	class ICFBamTldEditObj;
	class ICFBamTldTableObj;
	class CFBamSaxLoaderTldHandler;
	class ICFBamTokenColObj;
	class ICFBamTokenColEditObj;
	class ICFBamTokenColTableObj;
	class CFBamSaxLoaderTokenColHandler;
	class ICFBamTokenDefObj;
	class ICFBamTokenDefEditObj;
	class ICFBamTokenDefTableObj;
	class CFBamSaxLoaderTokenDefHandler;
	class ICFBamTokenTypeObj;
	class ICFBamTokenTypeEditObj;
	class ICFBamTokenTypeTableObj;
	class CFBamSaxLoaderTokenTypeHandler;
	class ICFBamTopDomainObj;
	class ICFBamTopDomainEditObj;
	class ICFBamTopDomainTableObj;
	class CFBamSaxLoaderTopDomainHandler;
	class ICFBamTopProjectObj;
	class ICFBamTopProjectEditObj;
	class ICFBamTopProjectTableObj;
	class CFBamSaxLoaderTopProjectHandler;
	class ICFBamUInt16ColObj;
	class ICFBamUInt16ColEditObj;
	class ICFBamUInt16ColTableObj;
	class CFBamSaxLoaderUInt16ColHandler;
	class ICFBamUInt16DefObj;
	class ICFBamUInt16DefEditObj;
	class ICFBamUInt16DefTableObj;
	class CFBamSaxLoaderUInt16DefHandler;
	class ICFBamUInt16TypeObj;
	class ICFBamUInt16TypeEditObj;
	class ICFBamUInt16TypeTableObj;
	class CFBamSaxLoaderUInt16TypeHandler;
	class ICFBamUInt32ColObj;
	class ICFBamUInt32ColEditObj;
	class ICFBamUInt32ColTableObj;
	class CFBamSaxLoaderUInt32ColHandler;
	class ICFBamUInt32DefObj;
	class ICFBamUInt32DefEditObj;
	class ICFBamUInt32DefTableObj;
	class CFBamSaxLoaderUInt32DefHandler;
	class ICFBamUInt32TypeObj;
	class ICFBamUInt32TypeEditObj;
	class ICFBamUInt32TypeTableObj;
	class CFBamSaxLoaderUInt32TypeHandler;
	class ICFBamUInt64ColObj;
	class ICFBamUInt64ColEditObj;
	class ICFBamUInt64ColTableObj;
	class CFBamSaxLoaderUInt64ColHandler;
	class ICFBamUInt64DefObj;
	class ICFBamUInt64DefEditObj;
	class ICFBamUInt64DefTableObj;
	class CFBamSaxLoaderUInt64DefHandler;
	class ICFBamUInt64TypeObj;
	class ICFBamUInt64TypeEditObj;
	class ICFBamUInt64TypeTableObj;
	class CFBamSaxLoaderUInt64TypeHandler;
	class ICFBamURLProtocolObj;
	class ICFBamURLProtocolEditObj;
	class ICFBamURLProtocolTableObj;
	class CFBamSaxLoaderURLProtocolHandler;
	class ICFBamUuidColObj;
	class ICFBamUuidColEditObj;
	class ICFBamUuidColTableObj;
	class CFBamSaxLoaderUuidColHandler;
	class ICFBamUuidDefObj;
	class ICFBamUuidDefEditObj;
	class ICFBamUuidDefTableObj;
	class CFBamSaxLoaderUuidDefHandler;
	class ICFBamUuidGenObj;
	class ICFBamUuidGenEditObj;
	class ICFBamUuidGenTableObj;
	class CFBamSaxLoaderUuidGenHandler;
	class ICFBamUuidTypeObj;
	class ICFBamUuidTypeEditObj;
	class ICFBamUuidTypeTableObj;
	class CFBamSaxLoaderUuidTypeHandler;
	class ICFBamValueObj;
	class ICFBamValueEditObj;
	class ICFBamValueTableObj;
	class CFBamSaxLoaderValueHandler;
	class CFBamSaxLoader;

	class CFBamSaxRootHandler
	: public cflib::CFLibXmlCoreElementHandler
	{
	public:
		CFBamSaxRootHandler( CFBamSaxLoader* saxLoader );
		virtual ~CFBamSaxRootHandler();

		/**
		 * Receive notification of the beginning of an element.
		 *
		 * <p>The Parser will invoke this method at the beginning of every
		 * element in the XML document; there will be a corresponding
		 * endElement() event for every startElement() event (even when the
		 * element is empty). All of the element's content will be
		 * reported, in order, before the corresponding endElement()
		 * event.</p>
		 *
		 * <p>Note that the attribute list provided will
		 * contain only attributes with explicit values (specified or
		 * defaulted): \#IMPLIED attributes will be omitted.</p>
		 *
		 * @param uri The URI of the associated namespace for this element
		 * @param localname The local part of the element name
		 * @param qname The QName of this element
		 * @param attrs The attributes attached to the element, if any.
		 * @exception SAXException Any SAX exception, possibly
		 *			wrapping another exception.
		 * @see #endElement
		 * @see Attributes#Attributes
		 */
		virtual void startElement (
			const XMLCh* const uri,
			const XMLCh* const localname,
			const XMLCh* const qname,
			const xercesc::Attributes& attrs );

		/**
		 * Receive notification of the end of an element.
		 *
		 * <p>The SAX parser will invoke this method at the end of every
		 * element in the XML document; there will be a corresponding
		 * startElement() event for every endElement() event (even when the
		 * element is empty).</p>
		 *
		 * @param uri The URI of the associated namespace for this element
		 * @param localname The local part of the element name
		 * @param qname The QName of this element
		 * @exception SAXException Any SAX exception, possibly
		 *			wrapping another exception.
		 */
		virtual void endElement (
			const XMLCh* const uri,
			const XMLCh* const localname,
			const XMLCh* const qname );

	};


	class CFBamSaxDocHandler
	: public cflib::CFLibXmlCoreElementHandler
	{
	public:
		CFBamSaxDocHandler( cfbam::CFBamSaxLoader* saxLoader );
		virtual ~CFBamSaxDocHandler();

		/**
		 * Receive notification of the beginning of an element.
		 *
		 * <p>The Parser will invoke this method at the beginning of every
		 * element in the XML document; there will be a corresponding
		 * endElement() event for every startElement() event (even when the
		 * element is empty). All of the element's content will be
		 * reported, in order, before the corresponding endElement()
		 * event.</p>
		 *
		 * <p>Note that the attribute list provided will
		 * contain only attributes with explicit values (specified or
		 * defaulted): \#IMPLIED attributes will be omitted.</p>
		 *
		 * @param uri The URI of the associated namespace for this element
		 * @param localname The local part of the element name
		 * @param qname The QName of this element
		 * @param attrs The attributes attached to the element, if any.
		 * @exception SAXException Any SAX exception, possibly
		 *			wrapping another exception.
		 * @see #endElement
		 * @see Attributes#Attributes
		 */
		virtual void startElement (
			const XMLCh* const uri,
			const XMLCh* const localname,
			const XMLCh* const qname,
			const xercesc::Attributes& attrs );

		/**
		 * Receive notification of the end of an element.
		 *
		 * <p>The SAX parser will invoke this method at the end of every
		 * element in the XML document; there will be a corresponding
		 * startElement() event for every endElement() event (even when the
		 * element is empty).</p>
		 *
		 * @param uri The URI of the associated namespace for this element
		 * @param localname The local part of the element name
		 * @param qname The QName of this element
		 * @exception SAXException Any SAX exception, possibly
		 *			wrapping another exception.
		 */
		virtual void endElement (
			const XMLCh* const uri,
			const XMLCh* const localname,
			const XMLCh* const qname );

	};

	class CFBamSaxLoader
	: public cflib::CFLibXmlCoreSaxParser
	{
	public:
		const static std::string CLASS_NAME;

		// The namespace URI of the supported schema
		const static std::string SCHEMA_XMLNS;

		// The source for loading the supported schema
		const static std::string SCHEMA_URI;

	protected:
		static bool grammarLoaded;
		cfbam::ICFBamSchemaObj* schemaObj;
		cfsec::ICFSecClusterObj* useCluster;
		cfsec::ICFSecTenantObj* useTenant;

	public:
		enum LoaderBehaviourEnum {
			Insert,
			Update,
			Replace
		};

	protected:
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum atomLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum blobColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum blobDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum blobTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum boolColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum boolDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum boolTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum chainLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum clearDepLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum clearSubDep1LoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum clearSubDep2LoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum clearSubDep3LoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum clearTopDepLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum clusterLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum dateColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum dateDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum dateTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum delDepLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum delSubDep1LoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum delSubDep2LoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum delSubDep3LoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum delTopDepLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum doubleColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum doubleDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum doubleTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum enumDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum enumTagLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum enumTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum floatColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum floatDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum floatTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum hostNodeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum iSOCcyLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum iSOCtryLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum iSOCtryCcyLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum iSOCtryLangLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum iSOLangLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum iSOTZoneLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum id16GenLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum id32GenLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum id64GenLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum indexLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum indexColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum int16ColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum int16DefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum int16TypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum int32ColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum int32DefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum int32TypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum int64ColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum int64DefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum int64TypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum licenseLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum majorVersionLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum mimeTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum minorVersionLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum nmTokenColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum nmTokenDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum nmTokenTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum nmTokensColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum nmTokensDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum nmTokensTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum numberColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum numberDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum numberTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum paramLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum popDepLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum popSubDep1LoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum popSubDep2LoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum popSubDep3LoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum popTopDepLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum relationLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum relationColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum schemaDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum schemaRefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum scopeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum secAppLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum secDeviceLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum secFormLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum secGroupLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum secGroupFormLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum secGrpIncLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum secGrpMembLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum secSessionLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum secUserLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum serverListFuncLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum serverMethodLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum serverObjFuncLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum serverProcLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum serviceLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum serviceTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum stringColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum stringDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum stringTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum subProjectLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum sysClusterLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tSecGroupLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tSecGrpIncLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tSecGrpMembLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tZDateColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tZDateDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tZDateTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tZTimeColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tZTimeDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tZTimeTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tZTimestampColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tZTimestampDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tZTimestampTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tableLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tableColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tenantLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Insert;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum textColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum textDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum textTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum timeColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum timeDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum timeTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum timestampColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum timestampDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum timestampTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tldLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tokenColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tokenDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum tokenTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum topDomainLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum topProjectLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uInt16ColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uInt16DefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uInt16TypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uInt32ColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uInt32DefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uInt32TypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uInt64ColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uInt64DefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uInt64TypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uRLProtocolLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uuidColLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uuidDefLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uuidGenLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum uuidTypeLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;
		cfbam::CFBamSaxLoader::LoaderBehaviourEnum valueLoaderBehaviour = cfbam::CFBamSaxLoader::LoaderBehaviourEnum::Update;


		cfbam::CFBamSaxLoaderAtomHandler* atomHandler;
		cfbam::CFBamSaxLoaderBlobColHandler* blobColHandler;
		cfbam::CFBamSaxLoaderBlobDefHandler* blobDefHandler;
		cfbam::CFBamSaxLoaderBlobTypeHandler* blobTypeHandler;
		cfbam::CFBamSaxLoaderBoolColHandler* boolColHandler;
		cfbam::CFBamSaxLoaderBoolDefHandler* boolDefHandler;
		cfbam::CFBamSaxLoaderBoolTypeHandler* boolTypeHandler;
		cfbam::CFBamSaxLoaderChainHandler* chainHandler;
		cfbam::CFBamSaxLoaderClearDepHandler* clearDepHandler;
		cfbam::CFBamSaxLoaderClearSubDep1Handler* clearSubDep1Handler;
		cfbam::CFBamSaxLoaderClearSubDep2Handler* clearSubDep2Handler;
		cfbam::CFBamSaxLoaderClearSubDep3Handler* clearSubDep3Handler;
		cfbam::CFBamSaxLoaderClearTopDepHandler* clearTopDepHandler;
		cfbam::CFBamSaxLoaderClusterHandler* clusterHandler;
		cfbam::CFBamSaxLoaderDateColHandler* dateColHandler;
		cfbam::CFBamSaxLoaderDateDefHandler* dateDefHandler;
		cfbam::CFBamSaxLoaderDateTypeHandler* dateTypeHandler;
		cfbam::CFBamSaxLoaderDelDepHandler* delDepHandler;
		cfbam::CFBamSaxLoaderDelSubDep1Handler* delSubDep1Handler;
		cfbam::CFBamSaxLoaderDelSubDep2Handler* delSubDep2Handler;
		cfbam::CFBamSaxLoaderDelSubDep3Handler* delSubDep3Handler;
		cfbam::CFBamSaxLoaderDelTopDepHandler* delTopDepHandler;
		cfbam::CFBamSaxLoaderDoubleColHandler* doubleColHandler;
		cfbam::CFBamSaxLoaderDoubleDefHandler* doubleDefHandler;
		cfbam::CFBamSaxLoaderDoubleTypeHandler* doubleTypeHandler;
		cfbam::CFBamSaxLoaderEnumDefHandler* enumDefHandler;
		cfbam::CFBamSaxLoaderEnumTagHandler* enumTagHandler;
		cfbam::CFBamSaxLoaderEnumTypeHandler* enumTypeHandler;
		cfbam::CFBamSaxLoaderFloatColHandler* floatColHandler;
		cfbam::CFBamSaxLoaderFloatDefHandler* floatDefHandler;
		cfbam::CFBamSaxLoaderFloatTypeHandler* floatTypeHandler;
		cfbam::CFBamSaxLoaderHostNodeHandler* hostNodeHandler;
		cfbam::CFBamSaxLoaderISOCcyHandler* iSOCcyHandler;
		cfbam::CFBamSaxLoaderISOCtryHandler* iSOCtryHandler;
		cfbam::CFBamSaxLoaderISOCtryCcyHandler* iSOCtryCcyHandler;
		cfbam::CFBamSaxLoaderISOCtryLangHandler* iSOCtryLangHandler;
		cfbam::CFBamSaxLoaderISOLangHandler* iSOLangHandler;
		cfbam::CFBamSaxLoaderISOTZoneHandler* iSOTZoneHandler;
		cfbam::CFBamSaxLoaderId16GenHandler* id16GenHandler;
		cfbam::CFBamSaxLoaderId32GenHandler* id32GenHandler;
		cfbam::CFBamSaxLoaderId64GenHandler* id64GenHandler;
		cfbam::CFBamSaxLoaderIndexHandler* indexHandler;
		cfbam::CFBamSaxLoaderIndexColHandler* indexColHandler;
		cfbam::CFBamSaxLoaderInt16ColHandler* int16ColHandler;
		cfbam::CFBamSaxLoaderInt16DefHandler* int16DefHandler;
		cfbam::CFBamSaxLoaderInt16TypeHandler* int16TypeHandler;
		cfbam::CFBamSaxLoaderInt32ColHandler* int32ColHandler;
		cfbam::CFBamSaxLoaderInt32DefHandler* int32DefHandler;
		cfbam::CFBamSaxLoaderInt32TypeHandler* int32TypeHandler;
		cfbam::CFBamSaxLoaderInt64ColHandler* int64ColHandler;
		cfbam::CFBamSaxLoaderInt64DefHandler* int64DefHandler;
		cfbam::CFBamSaxLoaderInt64TypeHandler* int64TypeHandler;
		cfbam::CFBamSaxLoaderLicenseHandler* licenseHandler;
		cfbam::CFBamSaxLoaderMajorVersionHandler* majorVersionHandler;
		cfbam::CFBamSaxLoaderMimeTypeHandler* mimeTypeHandler;
		cfbam::CFBamSaxLoaderMinorVersionHandler* minorVersionHandler;
		cfbam::CFBamSaxLoaderNmTokenColHandler* nmTokenColHandler;
		cfbam::CFBamSaxLoaderNmTokenDefHandler* nmTokenDefHandler;
		cfbam::CFBamSaxLoaderNmTokenTypeHandler* nmTokenTypeHandler;
		cfbam::CFBamSaxLoaderNmTokensColHandler* nmTokensColHandler;
		cfbam::CFBamSaxLoaderNmTokensDefHandler* nmTokensDefHandler;
		cfbam::CFBamSaxLoaderNmTokensTypeHandler* nmTokensTypeHandler;
		cfbam::CFBamSaxLoaderNumberColHandler* numberColHandler;
		cfbam::CFBamSaxLoaderNumberDefHandler* numberDefHandler;
		cfbam::CFBamSaxLoaderNumberTypeHandler* numberTypeHandler;
		cfbam::CFBamSaxLoaderParamHandler* paramHandler;
		cfbam::CFBamSaxLoaderPopDepHandler* popDepHandler;
		cfbam::CFBamSaxLoaderPopSubDep1Handler* popSubDep1Handler;
		cfbam::CFBamSaxLoaderPopSubDep2Handler* popSubDep2Handler;
		cfbam::CFBamSaxLoaderPopSubDep3Handler* popSubDep3Handler;
		cfbam::CFBamSaxLoaderPopTopDepHandler* popTopDepHandler;
		cfbam::CFBamSaxLoaderRelationHandler* relationHandler;
		cfbam::CFBamSaxLoaderRelationColHandler* relationColHandler;
		cfbam::CFBamSaxLoaderSchemaDefHandler* schemaDefHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjImportHandler* schemaDefCafeSchemaObjImportHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjInterfaceHandler* schemaDefCafeSchemaObjInterfaceHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjMembersHandler* schemaDefCafeSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjImplementationHandler* schemaDefCafeSchemaObjImplementationHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjMembersHandler* schemaDefCafeDb2LUWSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjImplHandler* schemaDefCafeDb2LUWSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjImportHandler* schemaDefCafeDb2LUWSchemaObjImportHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjMembersHandler* schemaDefCafeMSSqlSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjImplHandler* schemaDefCafeMSSqlSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjImportHandler* schemaDefCafeMSSqlSchemaObjImportHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjMembersHandler* schemaDefCafeMySqlSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjImplHandler* schemaDefCafeMySqlSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjImportHandler* schemaDefCafeMySqlSchemaObjImportHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeOracleSchemaObjMembersHandler* schemaDefCafeOracleSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeOracleSchemaObjImplHandler* schemaDefCafeOracleSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeOracleSchemaObjImportHandler* schemaDefCafeOracleSchemaObjImportHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjMembersHandler* schemaDefCafePgSqlSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjImplHandler* schemaDefCafePgSqlSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjImportHandler* schemaDefCafePgSqlSchemaObjImportHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeRamSchemaObjMembersHandler* schemaDefCafeRamSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeRamSchemaObjImplHandler* schemaDefCafeRamSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeRamSchemaObjImportHandler* schemaDefCafeRamSchemaObjImportHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgSchemaImportHandler* schemaDefCafeXMsgSchemaImportHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgSchemaFormattersHandler* schemaDefCafeXMsgSchemaFormattersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgClientSchemaImportHandler* schemaDefCafeXMsgClientSchemaImportHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgClientSchemaBodyHandler* schemaDefCafeXMsgClientSchemaBodyHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaBodyHandler* schemaDefCafeXMsgRqstSchemaBodyHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaImportHandler* schemaDefCafeXMsgRqstSchemaImportHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaWireParsersHandler* schemaDefCafeXMsgRqstSchemaWireParsersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaXsdSpecHandler* schemaDefCafeXMsgRqstSchemaXsdSpecHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeSchemaXsdElementListHandler* schemaDefCafeSchemaXsdElementListHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaBodyHandler* schemaDefCafeXMsgRspnSchemaBodyHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaImportHandler* schemaDefCafeXMsgRspnSchemaImportHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaWireParsersHandler* schemaDefCafeXMsgRspnSchemaWireParsersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaXsdElementListHandler* schemaDefCafeXMsgRspnSchemaXsdElementListHandler;
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaXsdSpecHandler* schemaDefCafeXMsgRspnSchemaXsdSpecHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjIncludeHandler* schemaDefCPlusSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjInterfaceHandler* schemaDefCPlusSchemaObjInterfaceHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjMembersHandler* schemaDefCPlusSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjImplementationHandler* schemaDefCPlusSchemaObjImplementationHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjMembersHandler* schemaDefCPlusDb2LUWSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjImplHandler* schemaDefCPlusDb2LUWSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjIncludeHandler* schemaDefCPlusDb2LUWSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjMembersHandler* schemaDefCPlusMSSqlSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjImplHandler* schemaDefCPlusMSSqlSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjIncludeHandler* schemaDefCPlusMSSqlSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjMembersHandler* schemaDefCPlusMySqlSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjImplHandler* schemaDefCPlusMySqlSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjIncludeHandler* schemaDefCPlusMySqlSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjMembersHandler* schemaDefCPlusOracleSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjImplHandler* schemaDefCPlusOracleSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjIncludeHandler* schemaDefCPlusOracleSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjMembersHandler* schemaDefCPlusPgSqlSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjImplHandler* schemaDefCPlusPgSqlSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjIncludeHandler* schemaDefCPlusPgSqlSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusRamSchemaObjMembersHandler* schemaDefCPlusRamSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusRamSchemaObjImplHandler* schemaDefCPlusRamSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusRamSchemaObjIncludeHandler* schemaDefCPlusRamSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgSchemaIncludeHandler* schemaDefCPlusXMsgSchemaIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgSchemaFormattersHandler* schemaDefCPlusXMsgSchemaFormattersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgClientSchemaIncludeHandler* schemaDefCPlusXMsgClientSchemaIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgClientSchemaBodyHandler* schemaDefCPlusXMsgClientSchemaBodyHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaBodyHandler* schemaDefCPlusXMsgRqstSchemaBodyHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaIncludeHandler* schemaDefCPlusXMsgRqstSchemaIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaWireParsersHandler* schemaDefCPlusXMsgRqstSchemaWireParsersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaXsdSpecHandler* schemaDefCPlusXMsgRqstSchemaXsdSpecHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaXsdElementListHandler* schemaDefCPlusXMsgRqstSchemaXsdElementListHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXmsgRspnSchemaBodyHandler* schemaDefCPlusXmsgRspnSchemaBodyHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaIncludeHandler* schemaDefCPlusXMsgRspnSchemaIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaWireParsersHandler* schemaDefCPlusXMsgRspnSchemaWireParsersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaXsdElementListHandler* schemaDefCPlusXMsgRspnSchemaXsdElementListHandler;
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaXsdSpecHandler* schemaDefCPlusXMsgRspnSchemaXsdSpecHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjIncludeHandler* schemaDefHPlusSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjInterfaceHandler* schemaDefHPlusSchemaObjInterfaceHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjMembersHandler* schemaDefHPlusSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjImplementationHandler* schemaDefHPlusSchemaObjImplementationHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjMembersHandler* schemaDefHPlusDb2LUWSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjImplHandler* schemaDefHPlusDb2LUWSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjIncludeHandler* schemaDefHPlusDb2LUWSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjMembersHandler* schemaDefHPlusMSSqlSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjImplHandler* schemaDefHPlusMSSqlSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjIncludeHandler* schemaDefHPlusMSSqlSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjMembersHandler* schemaDefHPlusMySqlSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjImplHandler* schemaDefHPlusMySqlSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjIncludeHandler* schemaDefHPlusMySqlSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjMembersHandler* schemaDefHPlusOracleSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjImplHandler* schemaDefHPlusOracleSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjIncludeHandler* schemaDefHPlusOracleSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjMembersHandler* schemaDefHPlusPgSqlSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjImplHandler* schemaDefHPlusPgSqlSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjIncludeHandler* schemaDefHPlusPgSqlSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusRamSchemaObjMembersHandler* schemaDefHPlusRamSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusRamSchemaObjImplHandler* schemaDefHPlusRamSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusRamSchemaObjIncludeHandler* schemaDefHPlusRamSchemaObjIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgSchemaIncludeHandler* schemaDefHPlusXMsgSchemaIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgSchemaFormattersHandler* schemaDefHPlusXMsgSchemaFormattersHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgClientSchemaIncludeHandler* schemaDefHPlusXMsgClientSchemaIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgClientSchemaBodyHandler* schemaDefHPlusXMsgClientSchemaBodyHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaBodyHandler* schemaDefHPlusXMsgRqstSchemaBodyHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaIncludeHandler* schemaDefHPlusXMsgRqstSchemaIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaWireParsersHandler* schemaDefHPlusXMsgRqstSchemaWireParsersHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaXsdSpecHandler* schemaDefHPlusXMsgRqstSchemaXsdSpecHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaXsdElementListHandler* schemaDefHPlusXMsgRqstSchemaXsdElementListHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaBodyHandler* schemaDefHPlusXMsgRspnSchemaBodyHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaIncludeHandler* schemaDefHPlusXMsgRspnSchemaIncludeHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaWireParsersHandler* schemaDefHPlusXMsgRspnSchemaWireParsersHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaXsdElementListHandler* schemaDefHPlusXMsgRspnSchemaXsdElementListHandler;
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaXsdSpecHandler* schemaDefHPlusXMsgRspnSchemaXsdSpecHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjUsingHandler* schemaDefCSharpSchemaObjUsingHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjInterfaceHandler* schemaDefCSharpSchemaObjInterfaceHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjMembersHandler* schemaDefCSharpSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjImplementationHandler* schemaDefCSharpSchemaObjImplementationHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjMembersHandler* schemaDefCSharpDb2LUWSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjImplHandler* schemaDefCSharpDb2LUWSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjUsingHandler* schemaDefCSharpDb2LUWSchemaObjUsingHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjMembersHandler* schemaDefCSharpMSSqlSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjImplHandler* schemaDefCSharpMSSqlSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjUsingHandler* schemaDefCSharpMSSqlSchemaObjUsingHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjMembersHandler* schemaDefCSharpMySqlSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjImplHandler* schemaDefCSharpMySqlSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjUsingHandler* schemaDefCSharpMySqlSchemaObjUsingHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjMembersHandler* schemaDefCSharpOracleSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjImplHandler* schemaDefCSharpOracleSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjUsingHandler* schemaDefCSharpOracleSchemaObjUsingHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjMembersHandler* schemaDefCSharpPgSqlSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjImplHandler* schemaDefCSharpPgSqlSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjUsingHandler* schemaDefCSharpPgSqlSchemaObjUsingHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpRamSchemaObjMembersHandler* schemaDefCSharpRamSchemaObjMembersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpRamSchemaObjImplHandler* schemaDefCSharpRamSchemaObjImplHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpRamSchemaObjUsingHandler* schemaDefCSharpRamSchemaObjUsingHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgSchemaUsingHandler* schemaDefCSharpXMsgSchemaUsingHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgSchemaFormattersHandler* schemaDefCSharpXMsgSchemaFormattersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgClientSchemaUsingHandler* schemaDefCSharpXMsgClientSchemaUsingHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgClientSchemaBodyHandler* schemaDefCSharpXMsgClientSchemaBodyHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaBodyHandler* schemaDefCSharpXMsgRqstSchemaBodyHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaUsingHandler* schemaDefCSharpXMsgRqstSchemaUsingHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaWireParsersHandler* schemaDefCSharpXMsgRqstSchemaWireParsersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaXsdSpecHandler* schemaDefCSharpXMsgRqstSchemaXsdSpecHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaXsdElementListHandler* schemaDefCSharpXMsgRqstSchemaXsdElementListHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaBodyHandler* schemaDefCSharpXMsgRspnSchemaBodyHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaUsingHandler* schemaDefCSharpXMsgRspnSchemaUsingHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaWireParsersHandler* schemaDefCSharpXMsgRspnSchemaWireParsersHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaXsdElementListHandler* schemaDefCSharpXMsgRspnSchemaXsdElementListHandler;
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaXsdSpecHandler* schemaDefCSharpXMsgRspnSchemaXsdSpecHandler;
		cfbam::CFBamSaxLoaderSchemaRefHandler* schemaRefHandler;
		cfbam::CFBamSaxLoaderScopeHandler* scopeHandler;
		cfbam::CFBamSaxLoaderSecAppHandler* secAppHandler;
		cfbam::CFBamSaxLoaderSecDeviceHandler* secDeviceHandler;
		cfbam::CFBamSaxLoaderSecFormHandler* secFormHandler;
		cfbam::CFBamSaxLoaderSecGroupHandler* secGroupHandler;
		cfbam::CFBamSaxLoaderSecGroupFormHandler* secGroupFormHandler;
		cfbam::CFBamSaxLoaderSecGrpIncHandler* secGrpIncHandler;
		cfbam::CFBamSaxLoaderSecGrpMembHandler* secGrpMembHandler;
		cfbam::CFBamSaxLoaderSecSessionHandler* secSessionHandler;
		cfbam::CFBamSaxLoaderSecUserHandler* secUserHandler;
		cfbam::CFBamSaxLoaderServerListFuncHandler* serverListFuncHandler;
		cfbam::CFBamSaxLoaderServerMethodHandler* serverMethodHandler;
		cfbam::CFBamSaxLoaderServerObjFuncHandler* serverObjFuncHandler;
		cfbam::CFBamSaxLoaderServerProcHandler* serverProcHandler;
		cfbam::CFBamSaxLoaderServiceHandler* serviceHandler;
		cfbam::CFBamSaxLoaderServiceTypeHandler* serviceTypeHandler;
		cfbam::CFBamSaxLoaderStringColHandler* stringColHandler;
		cfbam::CFBamSaxLoaderStringDefHandler* stringDefHandler;
		cfbam::CFBamSaxLoaderStringTypeHandler* stringTypeHandler;
		cfbam::CFBamSaxLoaderSubProjectHandler* subProjectHandler;
		cfbam::CFBamSaxLoaderSysClusterHandler* sysClusterHandler;
		cfbam::CFBamSaxLoaderTSecGroupHandler* tSecGroupHandler;
		cfbam::CFBamSaxLoaderTSecGrpIncHandler* tSecGrpIncHandler;
		cfbam::CFBamSaxLoaderTSecGrpMembHandler* tSecGrpMembHandler;
		cfbam::CFBamSaxLoaderTZDateColHandler* tZDateColHandler;
		cfbam::CFBamSaxLoaderTZDateDefHandler* tZDateDefHandler;
		cfbam::CFBamSaxLoaderTZDateTypeHandler* tZDateTypeHandler;
		cfbam::CFBamSaxLoaderTZTimeColHandler* tZTimeColHandler;
		cfbam::CFBamSaxLoaderTZTimeDefHandler* tZTimeDefHandler;
		cfbam::CFBamSaxLoaderTZTimeTypeHandler* tZTimeTypeHandler;
		cfbam::CFBamSaxLoaderTZTimestampColHandler* tZTimestampColHandler;
		cfbam::CFBamSaxLoaderTZTimestampDefHandler* tZTimestampDefHandler;
		cfbam::CFBamSaxLoaderTZTimestampTypeHandler* tZTimestampTypeHandler;
		cfbam::CFBamSaxLoaderTableHandler* tableHandler;
		cfbam::CFBamSaxLoaderTableCafeObjMembersHandler* tableCafeObjMembersHandler;
		cfbam::CFBamSaxLoaderTableCafeObjInterfaceHandler* tableCafeObjInterfaceHandler;
		cfbam::CFBamSaxLoaderTableCafeObjImportHandler* tableCafeObjImportHandler;
		cfbam::CFBamSaxLoaderTableCafeObjImplementationHandler* tableCafeObjImplementationHandler;
		cfbam::CFBamSaxLoaderTableCafeEditObjMembersHandler* tableCafeEditObjMembersHandler;
		cfbam::CFBamSaxLoaderTableCafeEditObjInterfaceHandler* tableCafeEditObjInterfaceHandler;
		cfbam::CFBamSaxLoaderTableCafeEditObjImportHandler* tableCafeEditObjImportHandler;
		cfbam::CFBamSaxLoaderTableCafeEditObjImplementationHandler* tableCafeEditObjImplementationHandler;
		cfbam::CFBamSaxLoaderTableCafeTableImportHandler* tableCafeTableImportHandler;
		cfbam::CFBamSaxLoaderTableCafeTableMembersHandler* tableCafeTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCafeTableInterfaceHandler* tableCafeTableInterfaceHandler;
		cfbam::CFBamSaxLoaderTableCafeTableImplementationHandler* tableCafeTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCafeTableObjImportHandler* tableCafeTableObjImportHandler;
		cfbam::CFBamSaxLoaderTableCafeTableObjMembersHandler* tableCafeTableObjMembersHandler;
		cfbam::CFBamSaxLoaderTableCafeTableObjInterfaceHandler* tableCafeTableObjInterfaceHandler;
		cfbam::CFBamSaxLoaderTableCafeTableObjImplementationHandler* tableCafeTableObjImplementationHandler;
		cfbam::CFBamSaxLoaderTableCafeDb2LUWTableImportHandler* tableCafeDb2LUWTableImportHandler;
		cfbam::CFBamSaxLoaderTableCafeDb2LUWTableMembersHandler* tableCafeDb2LUWTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCafeDb2LUWTableImplementationHandler* tableCafeDb2LUWTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCafeMSSqlTableImportHandler* tableCafeMSSqlTableImportHandler;
		cfbam::CFBamSaxLoaderTableCafeMSSqlTableMembersHandler* tableCafeMSSqlTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCafeMSSqlTableImplementationHandler* tableCafeMSSqlTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCafeMySqlTableImportHandler* tableCafeMySqlTableImportHandler;
		cfbam::CFBamSaxLoaderTableCafeMySqlTableMembersHandler* tableCafeMySqlTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCafeMySqlTableImplementationHandler* tableCafeMySqlTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCafeOracleTableImportHandler* tableCafeOracleTableImportHandler;
		cfbam::CFBamSaxLoaderTableCafeOracleTableMembersHandler* tableCafeOracleTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCafeOracleTableImplementationHandler* tableCafeOracleTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCafePgSqlTableImportHandler* tableCafePgSqlTableImportHandler;
		cfbam::CFBamSaxLoaderTableCafePgSqlTableMembersHandler* tableCafePgSqlTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCafePgSqlTableImplementationHandler* tableCafePgSqlTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCafeRamTableImportHandler* tableCafeRamTableImportHandler;
		cfbam::CFBamSaxLoaderTableCafeRamTableMembersHandler* tableCafeRamTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCafeRamTableImplementationHandler* tableCafeRamTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCafeSaxLoaderImportHandler* tableCafeSaxLoaderImportHandler;
		cfbam::CFBamSaxLoaderTableCafeSaxLoaderStartElementHandler* tableCafeSaxLoaderStartElementHandler;
		cfbam::CFBamSaxLoaderTableCafeSaxLoaderEndElementHandler* tableCafeSaxLoaderEndElementHandler;
		cfbam::CFBamSaxLoaderTableCafeXMsgTableImportHandler* tableCafeXMsgTableImportHandler;
		cfbam::CFBamSaxLoaderTableCafeXMsgTableformattersHandler* tableCafeXMsgTableformattersHandler;
		cfbam::CFBamSaxLoaderTableCafeXMsgRqstTableImportHandler* tableCafeXMsgRqstTableImportHandler;
		cfbam::CFBamSaxLoaderTableCafeXMsgRspnTableImportHandler* tableCafeXMsgRspnTableImportHandler;
		cfbam::CFBamSaxLoaderTableCafeXMsgClientTableImportHandler* tableCafeXMsgClientTableImportHandler;
		cfbam::CFBamSaxLoaderTableCafeXMsgRqstTableBodyHandler* tableCafeXMsgRqstTableBodyHandler;
		cfbam::CFBamSaxLoaderTableCafeXMsgRspnTableBodyHandler* tableCafeXMsgRspnTableBodyHandler;
		cfbam::CFBamSaxLoaderTableCafeXMsgClientTableBodyHandler* tableCafeXMsgClientTableBodyHandler;
		cfbam::CFBamSaxLoaderTableCPlusObjMembersHandler* tableCPlusObjMembersHandler;
		cfbam::CFBamSaxLoaderTableCPlusObjInterfaceHandler* tableCPlusObjInterfaceHandler;
		cfbam::CFBamSaxLoaderTableCPlusObjIncludeHandler* tableCPlusObjIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusObjImplementationHandler* tableCPlusObjImplementationHandler;
		cfbam::CFBamSaxLoaderTableCPlusEditObjMembersHandler* tableCPlusEditObjMembersHandler;
		cfbam::CFBamSaxLoaderTableCPlusEditObjInteraceHandler* tableCPlusEditObjInteraceHandler;
		cfbam::CFBamSaxLoaderTableCPlusEditObjIncludeHandler* tableCPlusEditObjIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusEditObjImplementationHandler* tableCPlusEditObjImplementationHandler;
		cfbam::CFBamSaxLoaderTableCPlusTableIncludeHandler* tableCPlusTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusTableMembersHandler* tableCPlusTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCPlusTableInterfaceHandler* tableCPlusTableInterfaceHandler;
		cfbam::CFBamSaxLoaderTableCPlusTableImplementationHandler* tableCPlusTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCPlusTableObjIncludeHandler* tableCPlusTableObjIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusTableObjMembersHandler* tableCPlusTableObjMembersHandler;
		cfbam::CFBamSaxLoaderTableCPlusTableObjInterfaceHandler* tableCPlusTableObjInterfaceHandler;
		cfbam::CFBamSaxLoaderTableCPlusTableObjImplementationHandler* tableCPlusTableObjImplementationHandler;
		cfbam::CFBamSaxLoaderTableCPlusDb2LUWTableIncludeHandler* tableCPlusDb2LUWTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusDb2LUWTableMembersHandler* tableCPlusDb2LUWTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCPlusDb2LUWTableImplementationHandler* tableCPlusDb2LUWTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCPlusMSSqlTableIncludeHandler* tableCPlusMSSqlTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusMSSqlTableMembersHandler* tableCPlusMSSqlTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCPlusMSSqlTableImplementationHandler* tableCPlusMSSqlTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCPlusMySqlTableIncludeHandler* tableCPlusMySqlTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusMySqlTableMembersHandler* tableCPlusMySqlTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCPlusMySqlTableImplementationHandler* tableCPlusMySqlTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCPlusOracleTableIncludeHandler* tableCPlusOracleTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusOracleTableMembersHandler* tableCPlusOracleTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCPlusOracleTableImplementationHandler* tableCPlusOracleTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCPlusPgSqlTableMembersHandler* tableCPlusPgSqlTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCPlusPgSqlTableImplementationHandler* tableCPlusPgSqlTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCPlusRamTableIncludeHandler* tableCPlusRamTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusRamTableMembersHandler* tableCPlusRamTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCPlusRamTableImplementationHandler* tableCPlusRamTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCPlusSaxLoaderIncludeHandler* tableCPlusSaxLoaderIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusSaxLoaderStartElementHandler* tableCPlusSaxLoaderStartElementHandler;
		cfbam::CFBamSaxLoaderTableCPlusSaxLoaderEndElementHandler* tableCPlusSaxLoaderEndElementHandler;
		cfbam::CFBamSaxLoaderTableCPlusXMsgTableIncludeHandler* tableCPlusXMsgTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusXMsgTableFormattersHandler* tableCPlusXMsgTableFormattersHandler;
		cfbam::CFBamSaxLoaderTableCPlusXMsgRqstTableIncludeHandler* tableCPlusXMsgRqstTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusXMsgRspnTableIncludeHandler* tableCPlusXMsgRspnTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusXMsgClientTableIncludeHandler* tableCPlusXMsgClientTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableCPlusXMsgRqstTableBodyHandler* tableCPlusXMsgRqstTableBodyHandler;
		cfbam::CFBamSaxLoaderTableCPlusXMsgRspnTableBodyHandler* tableCPlusXMsgRspnTableBodyHandler;
		cfbam::CFBamSaxLoaderTableCPlusXMsgClientTableBodyHandler* tableCPlusXMsgClientTableBodyHandler;
		cfbam::CFBamSaxLoaderTableHPlusObjMembersHandler* tableHPlusObjMembersHandler;
		cfbam::CFBamSaxLoaderTableHPlusObjInterfaceHandler* tableHPlusObjInterfaceHandler;
		cfbam::CFBamSaxLoaderTableHPlusObjIncludeHandler* tableHPlusObjIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusObjImplemntationHandler* tableHPlusObjImplemntationHandler;
		cfbam::CFBamSaxLoaderTableHPlusEditObjMembersHandler* tableHPlusEditObjMembersHandler;
		cfbam::CFBamSaxLoaderTableHPlusEditObjInterfaceHandler* tableHPlusEditObjInterfaceHandler;
		cfbam::CFBamSaxLoaderTableHPlusEditObjIncludeHandler* tableHPlusEditObjIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusEditObjImplementationHandler* tableHPlusEditObjImplementationHandler;
		cfbam::CFBamSaxLoaderTableHPlusTableIncludeHandler* tableHPlusTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusTableMembersHandler* tableHPlusTableMembersHandler;
		cfbam::CFBamSaxLoaderTableHPlusTableInterfaceHandler* tableHPlusTableInterfaceHandler;
		cfbam::CFBamSaxLoaderTableHPlusTableImplementationHandler* tableHPlusTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableHPlusTableObjIncludeHandler* tableHPlusTableObjIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusTableObjMembersHandler* tableHPlusTableObjMembersHandler;
		cfbam::CFBamSaxLoaderTableHPlusTableObjInterfaceHandler* tableHPlusTableObjInterfaceHandler;
		cfbam::CFBamSaxLoaderTableHPlusTableObjImplementationHandler* tableHPlusTableObjImplementationHandler;
		cfbam::CFBamSaxLoaderTableHPlusDb2LUWTableIncludeHandler* tableHPlusDb2LUWTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusDb2LUWTableMembersHandler* tableHPlusDb2LUWTableMembersHandler;
		cfbam::CFBamSaxLoaderTableHPlusDb2LUWTableImplementationHandler* tableHPlusDb2LUWTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableHPlusMSSqlTableIncludeHandler* tableHPlusMSSqlTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusMSSqlTableMembersHandler* tableHPlusMSSqlTableMembersHandler;
		cfbam::CFBamSaxLoaderTableHPlusMSSqlTableImplementationHandler* tableHPlusMSSqlTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableHPlusMySqlTableIncludeHandler* tableHPlusMySqlTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusMySqlTableMembersHandler* tableHPlusMySqlTableMembersHandler;
		cfbam::CFBamSaxLoaderTableHPlusMySqlTableImplementationHandler* tableHPlusMySqlTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableHPlusOracleTableIncludeHandler* tableHPlusOracleTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusOracleTableMembersHandler* tableHPlusOracleTableMembersHandler;
		cfbam::CFBamSaxLoaderTableHPlusOracleTableImplementationHandler* tableHPlusOracleTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableHPlusPgSqlTableIncludeHandler* tableHPlusPgSqlTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusPgSqlTableMembersHandler* tableHPlusPgSqlTableMembersHandler;
		cfbam::CFBamSaxLoaderTableHPlusPgSqlTableImplementationHandler* tableHPlusPgSqlTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableHPlusRamTableIncludeHandler* tableHPlusRamTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusRamTableMembersHandler* tableHPlusRamTableMembersHandler;
		cfbam::CFBamSaxLoaderTableHPlusRamTableImplementationHandler* tableHPlusRamTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableHPlusSaxLoaderIncludeHandler* tableHPlusSaxLoaderIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusSaxLoaderStartElementHandler* tableHPlusSaxLoaderStartElementHandler;
		cfbam::CFBamSaxLoaderTableHPlusSaxLoaderEndElementHandler* tableHPlusSaxLoaderEndElementHandler;
		cfbam::CFBamSaxLoaderTableHPlusXMsgTableIncludeHandler* tableHPlusXMsgTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusXMsgTableFormattersHandler* tableHPlusXMsgTableFormattersHandler;
		cfbam::CFBamSaxLoaderTableHPlusXMsgRqstTableIncludeHandler* tableHPlusXMsgRqstTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusXMsgRspnTableIncludeHandler* tableHPlusXMsgRspnTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusXMsgClientTableIncludeHandler* tableHPlusXMsgClientTableIncludeHandler;
		cfbam::CFBamSaxLoaderTableHPlusXMsgRqstTableBodyHandler* tableHPlusXMsgRqstTableBodyHandler;
		cfbam::CFBamSaxLoaderTableHPlusXMsgRspnTableBodyHandler* tableHPlusXMsgRspnTableBodyHandler;
		cfbam::CFBamSaxLoaderTableHPlusXMsgClientTableBodyHandler* tableHPlusXMsgClientTableBodyHandler;
		cfbam::CFBamSaxLoaderTableCSharpObjMembersHandler* tableCSharpObjMembersHandler;
		cfbam::CFBamSaxLoaderTableCSharpObjInterfaceHandler* tableCSharpObjInterfaceHandler;
		cfbam::CFBamSaxLoaderTableCSharpObjUsingHandler* tableCSharpObjUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpObjImplementationHandler* tableCSharpObjImplementationHandler;
		cfbam::CFBamSaxLoaderTableCSharpEditObjMembersHandler* tableCSharpEditObjMembersHandler;
		cfbam::CFBamSaxLoaderTableCSharpEditObjInterfaceHandler* tableCSharpEditObjInterfaceHandler;
		cfbam::CFBamSaxLoaderTableCSharpEditObjUsingHandler* tableCSharpEditObjUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpEditObjImplementationHandler* tableCSharpEditObjImplementationHandler;
		cfbam::CFBamSaxLoaderTableCSharpTableUsingHandler* tableCSharpTableUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpTableMembersHandler* tableCSharpTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCSharpTableInterfaceHandler* tableCSharpTableInterfaceHandler;
		cfbam::CFBamSaxLoaderTableCSharpTableImplementationHandler* tableCSharpTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCSharpTableObjUsingHandler* tableCSharpTableObjUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpTableObjMembersHandler* tableCSharpTableObjMembersHandler;
		cfbam::CFBamSaxLoaderTableCSharpTableObjInterfaceHandler* tableCSharpTableObjInterfaceHandler;
		cfbam::CFBamSaxLoaderTableCSharpTableObjImplementationHandler* tableCSharpTableObjImplementationHandler;
		cfbam::CFBamSaxLoaderTableCSharpDb2LUWTableUsingHandler* tableCSharpDb2LUWTableUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpDb2LUWTableMembersHandler* tableCSharpDb2LUWTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCSharpDb2LUWTableImplementationHandler* tableCSharpDb2LUWTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCSharpMSSqlTableUsingHandler* tableCSharpMSSqlTableUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpMSSqlTableMembersHandler* tableCSharpMSSqlTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCSharpMSSqlTableImplementationHandler* tableCSharpMSSqlTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCSharpMySqlTableUsingHandler* tableCSharpMySqlTableUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpMySqlTableMembersHandler* tableCSharpMySqlTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCSharpMySqlTableImplementationHandler* tableCSharpMySqlTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCSharpOracleTableUsingHandler* tableCSharpOracleTableUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpOracleTableMembersHandler* tableCSharpOracleTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCSharpOracleTableImplementationHandler* tableCSharpOracleTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCSharpPgSqlTableUsingHandler* tableCSharpPgSqlTableUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpPgSqlTableMembersHandler* tableCSharpPgSqlTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCSharpPgSqlTableImplementationHandler* tableCSharpPgSqlTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCSharpRamTableUsingHandler* tableCSharpRamTableUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpRamTableMembersHandler* tableCSharpRamTableMembersHandler;
		cfbam::CFBamSaxLoaderTableCSharpRamTableImplementationHandler* tableCSharpRamTableImplementationHandler;
		cfbam::CFBamSaxLoaderTableCSharpSaxLoaderUsingHandler* tableCSharpSaxLoaderUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpSaxLoaderStartElementHandler* tableCSharpSaxLoaderStartElementHandler;
		cfbam::CFBamSaxLoaderTableCSharpSaxLoaderEndElementHandler* tableCSharpSaxLoaderEndElementHandler;
		cfbam::CFBamSaxLoaderTableCSharpXMsgTableUsingHandler* tableCSharpXMsgTableUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpXMsgTableFormattersHandler* tableCSharpXMsgTableFormattersHandler;
		cfbam::CFBamSaxLoaderTableCSharpXMsgRqstTableUsingHandler* tableCSharpXMsgRqstTableUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpXMsgRspnTableUsingHandler* tableCSharpXMsgRspnTableUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpXMsgClientTableUsingHandler* tableCSharpXMsgClientTableUsingHandler;
		cfbam::CFBamSaxLoaderTableCSharpXMsgRqstTableBodyHandler* tableCSharpXMsgRqstTableBodyHandler;
		cfbam::CFBamSaxLoaderTableCSharpXMsgRspnTableBodyHandler* tableCSharpXMsgRspnTableBodyHandler;
		cfbam::CFBamSaxLoaderTableCSharpXMsgClientTableBodyHandler* tableCSharpXMsgClientTableBodyHandler;
		cfbam::CFBamSaxLoaderTableColHandler* tableColHandler;
		cfbam::CFBamSaxLoaderTenantHandler* tenantHandler;
		cfbam::CFBamSaxLoaderTextColHandler* textColHandler;
		cfbam::CFBamSaxLoaderTextDefHandler* textDefHandler;
		cfbam::CFBamSaxLoaderTextTypeHandler* textTypeHandler;
		cfbam::CFBamSaxLoaderTimeColHandler* timeColHandler;
		cfbam::CFBamSaxLoaderTimeDefHandler* timeDefHandler;
		cfbam::CFBamSaxLoaderTimeTypeHandler* timeTypeHandler;
		cfbam::CFBamSaxLoaderTimestampColHandler* timestampColHandler;
		cfbam::CFBamSaxLoaderTimestampDefHandler* timestampDefHandler;
		cfbam::CFBamSaxLoaderTimestampTypeHandler* timestampTypeHandler;
		cfbam::CFBamSaxLoaderTldHandler* tldHandler;
		cfbam::CFBamSaxLoaderTokenColHandler* tokenColHandler;
		cfbam::CFBamSaxLoaderTokenDefHandler* tokenDefHandler;
		cfbam::CFBamSaxLoaderTokenTypeHandler* tokenTypeHandler;
		cfbam::CFBamSaxLoaderTopDomainHandler* topDomainHandler;
		cfbam::CFBamSaxLoaderTopProjectHandler* topProjectHandler;
		cfbam::CFBamSaxLoaderUInt16ColHandler* uInt16ColHandler;
		cfbam::CFBamSaxLoaderUInt16DefHandler* uInt16DefHandler;
		cfbam::CFBamSaxLoaderUInt16TypeHandler* uInt16TypeHandler;
		cfbam::CFBamSaxLoaderUInt32ColHandler* uInt32ColHandler;
		cfbam::CFBamSaxLoaderUInt32DefHandler* uInt32DefHandler;
		cfbam::CFBamSaxLoaderUInt32TypeHandler* uInt32TypeHandler;
		cfbam::CFBamSaxLoaderUInt64ColHandler* uInt64ColHandler;
		cfbam::CFBamSaxLoaderUInt64DefHandler* uInt64DefHandler;
		cfbam::CFBamSaxLoaderUInt64TypeHandler* uInt64TypeHandler;
		cfbam::CFBamSaxLoaderURLProtocolHandler* uRLProtocolHandler;
		cfbam::CFBamSaxLoaderUuidColHandler* uuidColHandler;
		cfbam::CFBamSaxLoaderUuidDefHandler* uuidDefHandler;
		cfbam::CFBamSaxLoaderUuidGenHandler* uuidGenHandler;
		cfbam::CFBamSaxLoaderUuidTypeHandler* uuidTypeHandler;
		cfbam::CFBamSaxLoaderValueHandler* valueHandler;
		cfbam::CFBamSaxRootHandler* saxRootHandler;
		cfbam::CFBamSaxDocHandler* saxDocHandler;
	public:

		CFBamSaxLoader();
		virtual ~CFBamSaxLoader();

		CFBamSaxLoader( cflib::ICFLibMessageLog* logger );


		virtual void initParser();


		cfsec::ICFSecClusterObj* getUseCluster() const;
		void setUseCluster( cfsec::ICFSecClusterObj* value );

		cfsec::ICFSecTenantObj* getUseTenant();
		void setUseTenant( cfsec::ICFSecTenantObj* value );


		cfbam::ICFBamSchemaObj* getSchemaObj() const;
		void setSchemaObj( cfbam::ICFBamSchemaObj* value );


		static void verifyGrammarInstallation();

	protected:

		cfbam::CFBamSaxLoaderAtomHandler* getAtomHandler();

		cfbam::CFBamSaxLoaderBlobColHandler* getBlobColHandler();

		cfbam::CFBamSaxLoaderBlobDefHandler* getBlobDefHandler();

		cfbam::CFBamSaxLoaderBlobTypeHandler* getBlobTypeHandler();

		cfbam::CFBamSaxLoaderBoolColHandler* getBoolColHandler();

		cfbam::CFBamSaxLoaderBoolDefHandler* getBoolDefHandler();

		cfbam::CFBamSaxLoaderBoolTypeHandler* getBoolTypeHandler();

		cfbam::CFBamSaxLoaderChainHandler* getChainHandler();

		cfbam::CFBamSaxLoaderClearDepHandler* getClearDepHandler();

		cfbam::CFBamSaxLoaderClearSubDep1Handler* getClearSubDep1Handler();

		cfbam::CFBamSaxLoaderClearSubDep2Handler* getClearSubDep2Handler();

		cfbam::CFBamSaxLoaderClearSubDep3Handler* getClearSubDep3Handler();

		cfbam::CFBamSaxLoaderClearTopDepHandler* getClearTopDepHandler();

		cfbam::CFBamSaxLoaderClusterHandler* getClusterHandler();

		cfbam::CFBamSaxLoaderDateColHandler* getDateColHandler();

		cfbam::CFBamSaxLoaderDateDefHandler* getDateDefHandler();

		cfbam::CFBamSaxLoaderDateTypeHandler* getDateTypeHandler();

		cfbam::CFBamSaxLoaderDelDepHandler* getDelDepHandler();

		cfbam::CFBamSaxLoaderDelSubDep1Handler* getDelSubDep1Handler();

		cfbam::CFBamSaxLoaderDelSubDep2Handler* getDelSubDep2Handler();

		cfbam::CFBamSaxLoaderDelSubDep3Handler* getDelSubDep3Handler();

		cfbam::CFBamSaxLoaderDelTopDepHandler* getDelTopDepHandler();

		cfbam::CFBamSaxLoaderDoubleColHandler* getDoubleColHandler();

		cfbam::CFBamSaxLoaderDoubleDefHandler* getDoubleDefHandler();

		cfbam::CFBamSaxLoaderDoubleTypeHandler* getDoubleTypeHandler();

		cfbam::CFBamSaxLoaderEnumDefHandler* getEnumDefHandler();

		cfbam::CFBamSaxLoaderEnumTagHandler* getEnumTagHandler();

		cfbam::CFBamSaxLoaderEnumTypeHandler* getEnumTypeHandler();

		cfbam::CFBamSaxLoaderFloatColHandler* getFloatColHandler();

		cfbam::CFBamSaxLoaderFloatDefHandler* getFloatDefHandler();

		cfbam::CFBamSaxLoaderFloatTypeHandler* getFloatTypeHandler();

		cfbam::CFBamSaxLoaderHostNodeHandler* getHostNodeHandler();

		cfbam::CFBamSaxLoaderISOCcyHandler* getISOCcyHandler();

		cfbam::CFBamSaxLoaderISOCtryHandler* getISOCtryHandler();

		cfbam::CFBamSaxLoaderISOCtryCcyHandler* getISOCtryCcyHandler();

		cfbam::CFBamSaxLoaderISOCtryLangHandler* getISOCtryLangHandler();

		cfbam::CFBamSaxLoaderISOLangHandler* getISOLangHandler();

		cfbam::CFBamSaxLoaderISOTZoneHandler* getISOTZoneHandler();

		cfbam::CFBamSaxLoaderId16GenHandler* getId16GenHandler();

		cfbam::CFBamSaxLoaderId32GenHandler* getId32GenHandler();

		cfbam::CFBamSaxLoaderId64GenHandler* getId64GenHandler();

		cfbam::CFBamSaxLoaderIndexHandler* getIndexHandler();

		cfbam::CFBamSaxLoaderIndexColHandler* getIndexColHandler();

		cfbam::CFBamSaxLoaderInt16ColHandler* getInt16ColHandler();

		cfbam::CFBamSaxLoaderInt16DefHandler* getInt16DefHandler();

		cfbam::CFBamSaxLoaderInt16TypeHandler* getInt16TypeHandler();

		cfbam::CFBamSaxLoaderInt32ColHandler* getInt32ColHandler();

		cfbam::CFBamSaxLoaderInt32DefHandler* getInt32DefHandler();

		cfbam::CFBamSaxLoaderInt32TypeHandler* getInt32TypeHandler();

		cfbam::CFBamSaxLoaderInt64ColHandler* getInt64ColHandler();

		cfbam::CFBamSaxLoaderInt64DefHandler* getInt64DefHandler();

		cfbam::CFBamSaxLoaderInt64TypeHandler* getInt64TypeHandler();

		cfbam::CFBamSaxLoaderLicenseHandler* getLicenseHandler();

		cfbam::CFBamSaxLoaderMajorVersionHandler* getMajorVersionHandler();

		cfbam::CFBamSaxLoaderMimeTypeHandler* getMimeTypeHandler();

		cfbam::CFBamSaxLoaderMinorVersionHandler* getMinorVersionHandler();

		cfbam::CFBamSaxLoaderNmTokenColHandler* getNmTokenColHandler();

		cfbam::CFBamSaxLoaderNmTokenDefHandler* getNmTokenDefHandler();

		cfbam::CFBamSaxLoaderNmTokenTypeHandler* getNmTokenTypeHandler();

		cfbam::CFBamSaxLoaderNmTokensColHandler* getNmTokensColHandler();

		cfbam::CFBamSaxLoaderNmTokensDefHandler* getNmTokensDefHandler();

		cfbam::CFBamSaxLoaderNmTokensTypeHandler* getNmTokensTypeHandler();

		cfbam::CFBamSaxLoaderNumberColHandler* getNumberColHandler();

		cfbam::CFBamSaxLoaderNumberDefHandler* getNumberDefHandler();

		cfbam::CFBamSaxLoaderNumberTypeHandler* getNumberTypeHandler();

		cfbam::CFBamSaxLoaderParamHandler* getParamHandler();

		cfbam::CFBamSaxLoaderPopDepHandler* getPopDepHandler();

		cfbam::CFBamSaxLoaderPopSubDep1Handler* getPopSubDep1Handler();

		cfbam::CFBamSaxLoaderPopSubDep2Handler* getPopSubDep2Handler();

		cfbam::CFBamSaxLoaderPopSubDep3Handler* getPopSubDep3Handler();

		cfbam::CFBamSaxLoaderPopTopDepHandler* getPopTopDepHandler();

		cfbam::CFBamSaxLoaderRelationHandler* getRelationHandler();

		cfbam::CFBamSaxLoaderRelationColHandler* getRelationColHandler();

		cfbam::CFBamSaxLoaderSchemaDefHandler* getSchemaDefHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjImportHandler* getSchemaDefCafeSchemaObjImportHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjInterfaceHandler* getSchemaDefCafeSchemaObjInterfaceHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjMembersHandler* getSchemaDefCafeSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjImplementationHandler* getSchemaDefCafeSchemaObjImplementationHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjMembersHandler* getSchemaDefCafeDb2LUWSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjImplHandler* getSchemaDefCafeDb2LUWSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjImportHandler* getSchemaDefCafeDb2LUWSchemaObjImportHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjMembersHandler* getSchemaDefCafeMSSqlSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjImplHandler* getSchemaDefCafeMSSqlSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjImportHandler* getSchemaDefCafeMSSqlSchemaObjImportHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjMembersHandler* getSchemaDefCafeMySqlSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjImplHandler* getSchemaDefCafeMySqlSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjImportHandler* getSchemaDefCafeMySqlSchemaObjImportHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeOracleSchemaObjMembersHandler* getSchemaDefCafeOracleSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeOracleSchemaObjImplHandler* getSchemaDefCafeOracleSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeOracleSchemaObjImportHandler* getSchemaDefCafeOracleSchemaObjImportHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjMembersHandler* getSchemaDefCafePgSqlSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjImplHandler* getSchemaDefCafePgSqlSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjImportHandler* getSchemaDefCafePgSqlSchemaObjImportHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeRamSchemaObjMembersHandler* getSchemaDefCafeRamSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeRamSchemaObjImplHandler* getSchemaDefCafeRamSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeRamSchemaObjImportHandler* getSchemaDefCafeRamSchemaObjImportHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgSchemaImportHandler* getSchemaDefCafeXMsgSchemaImportHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgSchemaFormattersHandler* getSchemaDefCafeXMsgSchemaFormattersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgClientSchemaImportHandler* getSchemaDefCafeXMsgClientSchemaImportHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgClientSchemaBodyHandler* getSchemaDefCafeXMsgClientSchemaBodyHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaBodyHandler* getSchemaDefCafeXMsgRqstSchemaBodyHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaImportHandler* getSchemaDefCafeXMsgRqstSchemaImportHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaWireParsersHandler* getSchemaDefCafeXMsgRqstSchemaWireParsersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaXsdSpecHandler* getSchemaDefCafeXMsgRqstSchemaXsdSpecHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeSchemaXsdElementListHandler* getSchemaDefCafeSchemaXsdElementListHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaBodyHandler* getSchemaDefCafeXMsgRspnSchemaBodyHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaImportHandler* getSchemaDefCafeXMsgRspnSchemaImportHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaWireParsersHandler* getSchemaDefCafeXMsgRspnSchemaWireParsersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaXsdElementListHandler* getSchemaDefCafeXMsgRspnSchemaXsdElementListHandler();
		cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaXsdSpecHandler* getSchemaDefCafeXMsgRspnSchemaXsdSpecHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjIncludeHandler* getSchemaDefCPlusSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjInterfaceHandler* getSchemaDefCPlusSchemaObjInterfaceHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjMembersHandler* getSchemaDefCPlusSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjImplementationHandler* getSchemaDefCPlusSchemaObjImplementationHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjMembersHandler* getSchemaDefCPlusDb2LUWSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjImplHandler* getSchemaDefCPlusDb2LUWSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjIncludeHandler* getSchemaDefCPlusDb2LUWSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjMembersHandler* getSchemaDefCPlusMSSqlSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjImplHandler* getSchemaDefCPlusMSSqlSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjIncludeHandler* getSchemaDefCPlusMSSqlSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjMembersHandler* getSchemaDefCPlusMySqlSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjImplHandler* getSchemaDefCPlusMySqlSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjIncludeHandler* getSchemaDefCPlusMySqlSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjMembersHandler* getSchemaDefCPlusOracleSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjImplHandler* getSchemaDefCPlusOracleSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjIncludeHandler* getSchemaDefCPlusOracleSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjMembersHandler* getSchemaDefCPlusPgSqlSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjImplHandler* getSchemaDefCPlusPgSqlSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjIncludeHandler* getSchemaDefCPlusPgSqlSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusRamSchemaObjMembersHandler* getSchemaDefCPlusRamSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusRamSchemaObjImplHandler* getSchemaDefCPlusRamSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusRamSchemaObjIncludeHandler* getSchemaDefCPlusRamSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgSchemaIncludeHandler* getSchemaDefCPlusXMsgSchemaIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgSchemaFormattersHandler* getSchemaDefCPlusXMsgSchemaFormattersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgClientSchemaIncludeHandler* getSchemaDefCPlusXMsgClientSchemaIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgClientSchemaBodyHandler* getSchemaDefCPlusXMsgClientSchemaBodyHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaBodyHandler* getSchemaDefCPlusXMsgRqstSchemaBodyHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaIncludeHandler* getSchemaDefCPlusXMsgRqstSchemaIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaWireParsersHandler* getSchemaDefCPlusXMsgRqstSchemaWireParsersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaXsdSpecHandler* getSchemaDefCPlusXMsgRqstSchemaXsdSpecHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaXsdElementListHandler* getSchemaDefCPlusXMsgRqstSchemaXsdElementListHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXmsgRspnSchemaBodyHandler* getSchemaDefCPlusXmsgRspnSchemaBodyHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaIncludeHandler* getSchemaDefCPlusXMsgRspnSchemaIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaWireParsersHandler* getSchemaDefCPlusXMsgRspnSchemaWireParsersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaXsdElementListHandler* getSchemaDefCPlusXMsgRspnSchemaXsdElementListHandler();
		cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaXsdSpecHandler* getSchemaDefCPlusXMsgRspnSchemaXsdSpecHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjIncludeHandler* getSchemaDefHPlusSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjInterfaceHandler* getSchemaDefHPlusSchemaObjInterfaceHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjMembersHandler* getSchemaDefHPlusSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjImplementationHandler* getSchemaDefHPlusSchemaObjImplementationHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjMembersHandler* getSchemaDefHPlusDb2LUWSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjImplHandler* getSchemaDefHPlusDb2LUWSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjIncludeHandler* getSchemaDefHPlusDb2LUWSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjMembersHandler* getSchemaDefHPlusMSSqlSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjImplHandler* getSchemaDefHPlusMSSqlSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjIncludeHandler* getSchemaDefHPlusMSSqlSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjMembersHandler* getSchemaDefHPlusMySqlSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjImplHandler* getSchemaDefHPlusMySqlSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjIncludeHandler* getSchemaDefHPlusMySqlSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjMembersHandler* getSchemaDefHPlusOracleSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjImplHandler* getSchemaDefHPlusOracleSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjIncludeHandler* getSchemaDefHPlusOracleSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjMembersHandler* getSchemaDefHPlusPgSqlSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjImplHandler* getSchemaDefHPlusPgSqlSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjIncludeHandler* getSchemaDefHPlusPgSqlSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusRamSchemaObjMembersHandler* getSchemaDefHPlusRamSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusRamSchemaObjImplHandler* getSchemaDefHPlusRamSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusRamSchemaObjIncludeHandler* getSchemaDefHPlusRamSchemaObjIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgSchemaIncludeHandler* getSchemaDefHPlusXMsgSchemaIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgSchemaFormattersHandler* getSchemaDefHPlusXMsgSchemaFormattersHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgClientSchemaIncludeHandler* getSchemaDefHPlusXMsgClientSchemaIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgClientSchemaBodyHandler* getSchemaDefHPlusXMsgClientSchemaBodyHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaBodyHandler* getSchemaDefHPlusXMsgRqstSchemaBodyHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaIncludeHandler* getSchemaDefHPlusXMsgRqstSchemaIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaWireParsersHandler* getSchemaDefHPlusXMsgRqstSchemaWireParsersHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaXsdSpecHandler* getSchemaDefHPlusXMsgRqstSchemaXsdSpecHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaXsdElementListHandler* getSchemaDefHPlusXMsgRqstSchemaXsdElementListHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaBodyHandler* getSchemaDefHPlusXMsgRspnSchemaBodyHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaIncludeHandler* getSchemaDefHPlusXMsgRspnSchemaIncludeHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaWireParsersHandler* getSchemaDefHPlusXMsgRspnSchemaWireParsersHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaXsdElementListHandler* getSchemaDefHPlusXMsgRspnSchemaXsdElementListHandler();
		cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaXsdSpecHandler* getSchemaDefHPlusXMsgRspnSchemaXsdSpecHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjUsingHandler* getSchemaDefCSharpSchemaObjUsingHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjInterfaceHandler* getSchemaDefCSharpSchemaObjInterfaceHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjMembersHandler* getSchemaDefCSharpSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjImplementationHandler* getSchemaDefCSharpSchemaObjImplementationHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjMembersHandler* getSchemaDefCSharpDb2LUWSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjImplHandler* getSchemaDefCSharpDb2LUWSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjUsingHandler* getSchemaDefCSharpDb2LUWSchemaObjUsingHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjMembersHandler* getSchemaDefCSharpMSSqlSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjImplHandler* getSchemaDefCSharpMSSqlSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjUsingHandler* getSchemaDefCSharpMSSqlSchemaObjUsingHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjMembersHandler* getSchemaDefCSharpMySqlSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjImplHandler* getSchemaDefCSharpMySqlSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjUsingHandler* getSchemaDefCSharpMySqlSchemaObjUsingHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjMembersHandler* getSchemaDefCSharpOracleSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjImplHandler* getSchemaDefCSharpOracleSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjUsingHandler* getSchemaDefCSharpOracleSchemaObjUsingHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjMembersHandler* getSchemaDefCSharpPgSqlSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjImplHandler* getSchemaDefCSharpPgSqlSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjUsingHandler* getSchemaDefCSharpPgSqlSchemaObjUsingHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpRamSchemaObjMembersHandler* getSchemaDefCSharpRamSchemaObjMembersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpRamSchemaObjImplHandler* getSchemaDefCSharpRamSchemaObjImplHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpRamSchemaObjUsingHandler* getSchemaDefCSharpRamSchemaObjUsingHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgSchemaUsingHandler* getSchemaDefCSharpXMsgSchemaUsingHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgSchemaFormattersHandler* getSchemaDefCSharpXMsgSchemaFormattersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgClientSchemaUsingHandler* getSchemaDefCSharpXMsgClientSchemaUsingHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgClientSchemaBodyHandler* getSchemaDefCSharpXMsgClientSchemaBodyHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaBodyHandler* getSchemaDefCSharpXMsgRqstSchemaBodyHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaUsingHandler* getSchemaDefCSharpXMsgRqstSchemaUsingHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaWireParsersHandler* getSchemaDefCSharpXMsgRqstSchemaWireParsersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaXsdSpecHandler* getSchemaDefCSharpXMsgRqstSchemaXsdSpecHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaXsdElementListHandler* getSchemaDefCSharpXMsgRqstSchemaXsdElementListHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaBodyHandler* getSchemaDefCSharpXMsgRspnSchemaBodyHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaUsingHandler* getSchemaDefCSharpXMsgRspnSchemaUsingHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaWireParsersHandler* getSchemaDefCSharpXMsgRspnSchemaWireParsersHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaXsdElementListHandler* getSchemaDefCSharpXMsgRspnSchemaXsdElementListHandler();
		cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaXsdSpecHandler* getSchemaDefCSharpXMsgRspnSchemaXsdSpecHandler();

		cfbam::CFBamSaxLoaderSchemaRefHandler* getSchemaRefHandler();

		cfbam::CFBamSaxLoaderScopeHandler* getScopeHandler();

		cfbam::CFBamSaxLoaderSecAppHandler* getSecAppHandler();

		cfbam::CFBamSaxLoaderSecDeviceHandler* getSecDeviceHandler();

		cfbam::CFBamSaxLoaderSecFormHandler* getSecFormHandler();

		cfbam::CFBamSaxLoaderSecGroupHandler* getSecGroupHandler();

		cfbam::CFBamSaxLoaderSecGroupFormHandler* getSecGroupFormHandler();

		cfbam::CFBamSaxLoaderSecGrpIncHandler* getSecGrpIncHandler();

		cfbam::CFBamSaxLoaderSecGrpMembHandler* getSecGrpMembHandler();

		cfbam::CFBamSaxLoaderSecSessionHandler* getSecSessionHandler();

		cfbam::CFBamSaxLoaderSecUserHandler* getSecUserHandler();

		cfbam::CFBamSaxLoaderServerListFuncHandler* getServerListFuncHandler();

		cfbam::CFBamSaxLoaderServerMethodHandler* getServerMethodHandler();

		cfbam::CFBamSaxLoaderServerObjFuncHandler* getServerObjFuncHandler();

		cfbam::CFBamSaxLoaderServerProcHandler* getServerProcHandler();

		cfbam::CFBamSaxLoaderServiceHandler* getServiceHandler();

		cfbam::CFBamSaxLoaderServiceTypeHandler* getServiceTypeHandler();

		cfbam::CFBamSaxLoaderStringColHandler* getStringColHandler();

		cfbam::CFBamSaxLoaderStringDefHandler* getStringDefHandler();

		cfbam::CFBamSaxLoaderStringTypeHandler* getStringTypeHandler();

		cfbam::CFBamSaxLoaderSubProjectHandler* getSubProjectHandler();

		cfbam::CFBamSaxLoaderSysClusterHandler* getSysClusterHandler();

		cfbam::CFBamSaxLoaderTSecGroupHandler* getTSecGroupHandler();

		cfbam::CFBamSaxLoaderTSecGrpIncHandler* getTSecGrpIncHandler();

		cfbam::CFBamSaxLoaderTSecGrpMembHandler* getTSecGrpMembHandler();

		cfbam::CFBamSaxLoaderTZDateColHandler* getTZDateColHandler();

		cfbam::CFBamSaxLoaderTZDateDefHandler* getTZDateDefHandler();

		cfbam::CFBamSaxLoaderTZDateTypeHandler* getTZDateTypeHandler();

		cfbam::CFBamSaxLoaderTZTimeColHandler* getTZTimeColHandler();

		cfbam::CFBamSaxLoaderTZTimeDefHandler* getTZTimeDefHandler();

		cfbam::CFBamSaxLoaderTZTimeTypeHandler* getTZTimeTypeHandler();

		cfbam::CFBamSaxLoaderTZTimestampColHandler* getTZTimestampColHandler();

		cfbam::CFBamSaxLoaderTZTimestampDefHandler* getTZTimestampDefHandler();

		cfbam::CFBamSaxLoaderTZTimestampTypeHandler* getTZTimestampTypeHandler();

		cfbam::CFBamSaxLoaderTableHandler* getTableHandler();
		cfbam::CFBamSaxLoaderTableCafeObjMembersHandler* getTableCafeObjMembersHandler();
		cfbam::CFBamSaxLoaderTableCafeObjInterfaceHandler* getTableCafeObjInterfaceHandler();
		cfbam::CFBamSaxLoaderTableCafeObjImportHandler* getTableCafeObjImportHandler();
		cfbam::CFBamSaxLoaderTableCafeObjImplementationHandler* getTableCafeObjImplementationHandler();
		cfbam::CFBamSaxLoaderTableCafeEditObjMembersHandler* getTableCafeEditObjMembersHandler();
		cfbam::CFBamSaxLoaderTableCafeEditObjInterfaceHandler* getTableCafeEditObjInterfaceHandler();
		cfbam::CFBamSaxLoaderTableCafeEditObjImportHandler* getTableCafeEditObjImportHandler();
		cfbam::CFBamSaxLoaderTableCafeEditObjImplementationHandler* getTableCafeEditObjImplementationHandler();
		cfbam::CFBamSaxLoaderTableCafeTableImportHandler* getTableCafeTableImportHandler();
		cfbam::CFBamSaxLoaderTableCafeTableMembersHandler* getTableCafeTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCafeTableInterfaceHandler* getTableCafeTableInterfaceHandler();
		cfbam::CFBamSaxLoaderTableCafeTableImplementationHandler* getTableCafeTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCafeTableObjImportHandler* getTableCafeTableObjImportHandler();
		cfbam::CFBamSaxLoaderTableCafeTableObjMembersHandler* getTableCafeTableObjMembersHandler();
		cfbam::CFBamSaxLoaderTableCafeTableObjInterfaceHandler* getTableCafeTableObjInterfaceHandler();
		cfbam::CFBamSaxLoaderTableCafeTableObjImplementationHandler* getTableCafeTableObjImplementationHandler();
		cfbam::CFBamSaxLoaderTableCafeDb2LUWTableImportHandler* getTableCafeDb2LUWTableImportHandler();
		cfbam::CFBamSaxLoaderTableCafeDb2LUWTableMembersHandler* getTableCafeDb2LUWTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCafeDb2LUWTableImplementationHandler* getTableCafeDb2LUWTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCafeMSSqlTableImportHandler* getTableCafeMSSqlTableImportHandler();
		cfbam::CFBamSaxLoaderTableCafeMSSqlTableMembersHandler* getTableCafeMSSqlTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCafeMSSqlTableImplementationHandler* getTableCafeMSSqlTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCafeMySqlTableImportHandler* getTableCafeMySqlTableImportHandler();
		cfbam::CFBamSaxLoaderTableCafeMySqlTableMembersHandler* getTableCafeMySqlTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCafeMySqlTableImplementationHandler* getTableCafeMySqlTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCafeOracleTableImportHandler* getTableCafeOracleTableImportHandler();
		cfbam::CFBamSaxLoaderTableCafeOracleTableMembersHandler* getTableCafeOracleTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCafeOracleTableImplementationHandler* getTableCafeOracleTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCafePgSqlTableImportHandler* getTableCafePgSqlTableImportHandler();
		cfbam::CFBamSaxLoaderTableCafePgSqlTableMembersHandler* getTableCafePgSqlTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCafePgSqlTableImplementationHandler* getTableCafePgSqlTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCafeRamTableImportHandler* getTableCafeRamTableImportHandler();
		cfbam::CFBamSaxLoaderTableCafeRamTableMembersHandler* getTableCafeRamTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCafeRamTableImplementationHandler* getTableCafeRamTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCafeSaxLoaderImportHandler* getTableCafeSaxLoaderImportHandler();
		cfbam::CFBamSaxLoaderTableCafeSaxLoaderStartElementHandler* getTableCafeSaxLoaderStartElementHandler();
		cfbam::CFBamSaxLoaderTableCafeSaxLoaderEndElementHandler* getTableCafeSaxLoaderEndElementHandler();
		cfbam::CFBamSaxLoaderTableCafeXMsgTableImportHandler* getTableCafeXMsgTableImportHandler();
		cfbam::CFBamSaxLoaderTableCafeXMsgTableformattersHandler* getTableCafeXMsgTableformattersHandler();
		cfbam::CFBamSaxLoaderTableCafeXMsgRqstTableImportHandler* getTableCafeXMsgRqstTableImportHandler();
		cfbam::CFBamSaxLoaderTableCafeXMsgRspnTableImportHandler* getTableCafeXMsgRspnTableImportHandler();
		cfbam::CFBamSaxLoaderTableCafeXMsgClientTableImportHandler* getTableCafeXMsgClientTableImportHandler();
		cfbam::CFBamSaxLoaderTableCafeXMsgRqstTableBodyHandler* getTableCafeXMsgRqstTableBodyHandler();
		cfbam::CFBamSaxLoaderTableCafeXMsgRspnTableBodyHandler* getTableCafeXMsgRspnTableBodyHandler();
		cfbam::CFBamSaxLoaderTableCafeXMsgClientTableBodyHandler* getTableCafeXMsgClientTableBodyHandler();
		cfbam::CFBamSaxLoaderTableCPlusObjMembersHandler* getTableCPlusObjMembersHandler();
		cfbam::CFBamSaxLoaderTableCPlusObjInterfaceHandler* getTableCPlusObjInterfaceHandler();
		cfbam::CFBamSaxLoaderTableCPlusObjIncludeHandler* getTableCPlusObjIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusObjImplementationHandler* getTableCPlusObjImplementationHandler();
		cfbam::CFBamSaxLoaderTableCPlusEditObjMembersHandler* getTableCPlusEditObjMembersHandler();
		cfbam::CFBamSaxLoaderTableCPlusEditObjInteraceHandler* getTableCPlusEditObjInteraceHandler();
		cfbam::CFBamSaxLoaderTableCPlusEditObjIncludeHandler* getTableCPlusEditObjIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusEditObjImplementationHandler* getTableCPlusEditObjImplementationHandler();
		cfbam::CFBamSaxLoaderTableCPlusTableIncludeHandler* getTableCPlusTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusTableMembersHandler* getTableCPlusTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCPlusTableInterfaceHandler* getTableCPlusTableInterfaceHandler();
		cfbam::CFBamSaxLoaderTableCPlusTableImplementationHandler* getTableCPlusTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCPlusTableObjIncludeHandler* getTableCPlusTableObjIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusTableObjMembersHandler* getTableCPlusTableObjMembersHandler();
		cfbam::CFBamSaxLoaderTableCPlusTableObjInterfaceHandler* getTableCPlusTableObjInterfaceHandler();
		cfbam::CFBamSaxLoaderTableCPlusTableObjImplementationHandler* getTableCPlusTableObjImplementationHandler();
		cfbam::CFBamSaxLoaderTableCPlusDb2LUWTableIncludeHandler* getTableCPlusDb2LUWTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusDb2LUWTableMembersHandler* getTableCPlusDb2LUWTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCPlusDb2LUWTableImplementationHandler* getTableCPlusDb2LUWTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCPlusMSSqlTableIncludeHandler* getTableCPlusMSSqlTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusMSSqlTableMembersHandler* getTableCPlusMSSqlTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCPlusMSSqlTableImplementationHandler* getTableCPlusMSSqlTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCPlusMySqlTableIncludeHandler* getTableCPlusMySqlTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusMySqlTableMembersHandler* getTableCPlusMySqlTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCPlusMySqlTableImplementationHandler* getTableCPlusMySqlTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCPlusOracleTableIncludeHandler* getTableCPlusOracleTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusOracleTableMembersHandler* getTableCPlusOracleTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCPlusOracleTableImplementationHandler* getTableCPlusOracleTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCPlusPgSqlTableMembersHandler* getTableCPlusPgSqlTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCPlusPgSqlTableImplementationHandler* getTableCPlusPgSqlTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCPlusRamTableIncludeHandler* getTableCPlusRamTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusRamTableMembersHandler* getTableCPlusRamTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCPlusRamTableImplementationHandler* getTableCPlusRamTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCPlusSaxLoaderIncludeHandler* getTableCPlusSaxLoaderIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusSaxLoaderStartElementHandler* getTableCPlusSaxLoaderStartElementHandler();
		cfbam::CFBamSaxLoaderTableCPlusSaxLoaderEndElementHandler* getTableCPlusSaxLoaderEndElementHandler();
		cfbam::CFBamSaxLoaderTableCPlusXMsgTableIncludeHandler* getTableCPlusXMsgTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusXMsgTableFormattersHandler* getTableCPlusXMsgTableFormattersHandler();
		cfbam::CFBamSaxLoaderTableCPlusXMsgRqstTableIncludeHandler* getTableCPlusXMsgRqstTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusXMsgRspnTableIncludeHandler* getTableCPlusXMsgRspnTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusXMsgClientTableIncludeHandler* getTableCPlusXMsgClientTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableCPlusXMsgRqstTableBodyHandler* getTableCPlusXMsgRqstTableBodyHandler();
		cfbam::CFBamSaxLoaderTableCPlusXMsgRspnTableBodyHandler* getTableCPlusXMsgRspnTableBodyHandler();
		cfbam::CFBamSaxLoaderTableCPlusXMsgClientTableBodyHandler* getTableCPlusXMsgClientTableBodyHandler();
		cfbam::CFBamSaxLoaderTableHPlusObjMembersHandler* getTableHPlusObjMembersHandler();
		cfbam::CFBamSaxLoaderTableHPlusObjInterfaceHandler* getTableHPlusObjInterfaceHandler();
		cfbam::CFBamSaxLoaderTableHPlusObjIncludeHandler* getTableHPlusObjIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusObjImplemntationHandler* getTableHPlusObjImplemntationHandler();
		cfbam::CFBamSaxLoaderTableHPlusEditObjMembersHandler* getTableHPlusEditObjMembersHandler();
		cfbam::CFBamSaxLoaderTableHPlusEditObjInterfaceHandler* getTableHPlusEditObjInterfaceHandler();
		cfbam::CFBamSaxLoaderTableHPlusEditObjIncludeHandler* getTableHPlusEditObjIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusEditObjImplementationHandler* getTableHPlusEditObjImplementationHandler();
		cfbam::CFBamSaxLoaderTableHPlusTableIncludeHandler* getTableHPlusTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusTableMembersHandler* getTableHPlusTableMembersHandler();
		cfbam::CFBamSaxLoaderTableHPlusTableInterfaceHandler* getTableHPlusTableInterfaceHandler();
		cfbam::CFBamSaxLoaderTableHPlusTableImplementationHandler* getTableHPlusTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableHPlusTableObjIncludeHandler* getTableHPlusTableObjIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusTableObjMembersHandler* getTableHPlusTableObjMembersHandler();
		cfbam::CFBamSaxLoaderTableHPlusTableObjInterfaceHandler* getTableHPlusTableObjInterfaceHandler();
		cfbam::CFBamSaxLoaderTableHPlusTableObjImplementationHandler* getTableHPlusTableObjImplementationHandler();
		cfbam::CFBamSaxLoaderTableHPlusDb2LUWTableIncludeHandler* getTableHPlusDb2LUWTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusDb2LUWTableMembersHandler* getTableHPlusDb2LUWTableMembersHandler();
		cfbam::CFBamSaxLoaderTableHPlusDb2LUWTableImplementationHandler* getTableHPlusDb2LUWTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableHPlusMSSqlTableIncludeHandler* getTableHPlusMSSqlTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusMSSqlTableMembersHandler* getTableHPlusMSSqlTableMembersHandler();
		cfbam::CFBamSaxLoaderTableHPlusMSSqlTableImplementationHandler* getTableHPlusMSSqlTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableHPlusMySqlTableIncludeHandler* getTableHPlusMySqlTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusMySqlTableMembersHandler* getTableHPlusMySqlTableMembersHandler();
		cfbam::CFBamSaxLoaderTableHPlusMySqlTableImplementationHandler* getTableHPlusMySqlTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableHPlusOracleTableIncludeHandler* getTableHPlusOracleTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusOracleTableMembersHandler* getTableHPlusOracleTableMembersHandler();
		cfbam::CFBamSaxLoaderTableHPlusOracleTableImplementationHandler* getTableHPlusOracleTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableHPlusPgSqlTableIncludeHandler* getTableHPlusPgSqlTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusPgSqlTableMembersHandler* getTableHPlusPgSqlTableMembersHandler();
		cfbam::CFBamSaxLoaderTableHPlusPgSqlTableImplementationHandler* getTableHPlusPgSqlTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableHPlusRamTableIncludeHandler* getTableHPlusRamTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusRamTableMembersHandler* getTableHPlusRamTableMembersHandler();
		cfbam::CFBamSaxLoaderTableHPlusRamTableImplementationHandler* getTableHPlusRamTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableHPlusSaxLoaderIncludeHandler* getTableHPlusSaxLoaderIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusSaxLoaderStartElementHandler* getTableHPlusSaxLoaderStartElementHandler();
		cfbam::CFBamSaxLoaderTableHPlusSaxLoaderEndElementHandler* getTableHPlusSaxLoaderEndElementHandler();
		cfbam::CFBamSaxLoaderTableHPlusXMsgTableIncludeHandler* getTableHPlusXMsgTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusXMsgTableFormattersHandler* getTableHPlusXMsgTableFormattersHandler();
		cfbam::CFBamSaxLoaderTableHPlusXMsgRqstTableIncludeHandler* getTableHPlusXMsgRqstTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusXMsgRspnTableIncludeHandler* getTableHPlusXMsgRspnTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusXMsgClientTableIncludeHandler* getTableHPlusXMsgClientTableIncludeHandler();
		cfbam::CFBamSaxLoaderTableHPlusXMsgRqstTableBodyHandler* getTableHPlusXMsgRqstTableBodyHandler();
		cfbam::CFBamSaxLoaderTableHPlusXMsgRspnTableBodyHandler* getTableHPlusXMsgRspnTableBodyHandler();
		cfbam::CFBamSaxLoaderTableHPlusXMsgClientTableBodyHandler* getTableHPlusXMsgClientTableBodyHandler();
		cfbam::CFBamSaxLoaderTableCSharpObjMembersHandler* getTableCSharpObjMembersHandler();
		cfbam::CFBamSaxLoaderTableCSharpObjInterfaceHandler* getTableCSharpObjInterfaceHandler();
		cfbam::CFBamSaxLoaderTableCSharpObjUsingHandler* getTableCSharpObjUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpObjImplementationHandler* getTableCSharpObjImplementationHandler();
		cfbam::CFBamSaxLoaderTableCSharpEditObjMembersHandler* getTableCSharpEditObjMembersHandler();
		cfbam::CFBamSaxLoaderTableCSharpEditObjInterfaceHandler* getTableCSharpEditObjInterfaceHandler();
		cfbam::CFBamSaxLoaderTableCSharpEditObjUsingHandler* getTableCSharpEditObjUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpEditObjImplementationHandler* getTableCSharpEditObjImplementationHandler();
		cfbam::CFBamSaxLoaderTableCSharpTableUsingHandler* getTableCSharpTableUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpTableMembersHandler* getTableCSharpTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCSharpTableInterfaceHandler* getTableCSharpTableInterfaceHandler();
		cfbam::CFBamSaxLoaderTableCSharpTableImplementationHandler* getTableCSharpTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCSharpTableObjUsingHandler* getTableCSharpTableObjUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpTableObjMembersHandler* getTableCSharpTableObjMembersHandler();
		cfbam::CFBamSaxLoaderTableCSharpTableObjInterfaceHandler* getTableCSharpTableObjInterfaceHandler();
		cfbam::CFBamSaxLoaderTableCSharpTableObjImplementationHandler* getTableCSharpTableObjImplementationHandler();
		cfbam::CFBamSaxLoaderTableCSharpDb2LUWTableUsingHandler* getTableCSharpDb2LUWTableUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpDb2LUWTableMembersHandler* getTableCSharpDb2LUWTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCSharpDb2LUWTableImplementationHandler* getTableCSharpDb2LUWTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCSharpMSSqlTableUsingHandler* getTableCSharpMSSqlTableUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpMSSqlTableMembersHandler* getTableCSharpMSSqlTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCSharpMSSqlTableImplementationHandler* getTableCSharpMSSqlTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCSharpMySqlTableUsingHandler* getTableCSharpMySqlTableUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpMySqlTableMembersHandler* getTableCSharpMySqlTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCSharpMySqlTableImplementationHandler* getTableCSharpMySqlTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCSharpOracleTableUsingHandler* getTableCSharpOracleTableUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpOracleTableMembersHandler* getTableCSharpOracleTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCSharpOracleTableImplementationHandler* getTableCSharpOracleTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCSharpPgSqlTableUsingHandler* getTableCSharpPgSqlTableUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpPgSqlTableMembersHandler* getTableCSharpPgSqlTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCSharpPgSqlTableImplementationHandler* getTableCSharpPgSqlTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCSharpRamTableUsingHandler* getTableCSharpRamTableUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpRamTableMembersHandler* getTableCSharpRamTableMembersHandler();
		cfbam::CFBamSaxLoaderTableCSharpRamTableImplementationHandler* getTableCSharpRamTableImplementationHandler();
		cfbam::CFBamSaxLoaderTableCSharpSaxLoaderUsingHandler* getTableCSharpSaxLoaderUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpSaxLoaderStartElementHandler* getTableCSharpSaxLoaderStartElementHandler();
		cfbam::CFBamSaxLoaderTableCSharpSaxLoaderEndElementHandler* getTableCSharpSaxLoaderEndElementHandler();
		cfbam::CFBamSaxLoaderTableCSharpXMsgTableUsingHandler* getTableCSharpXMsgTableUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpXMsgTableFormattersHandler* getTableCSharpXMsgTableFormattersHandler();
		cfbam::CFBamSaxLoaderTableCSharpXMsgRqstTableUsingHandler* getTableCSharpXMsgRqstTableUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpXMsgRspnTableUsingHandler* getTableCSharpXMsgRspnTableUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpXMsgClientTableUsingHandler* getTableCSharpXMsgClientTableUsingHandler();
		cfbam::CFBamSaxLoaderTableCSharpXMsgRqstTableBodyHandler* getTableCSharpXMsgRqstTableBodyHandler();
		cfbam::CFBamSaxLoaderTableCSharpXMsgRspnTableBodyHandler* getTableCSharpXMsgRspnTableBodyHandler();
		cfbam::CFBamSaxLoaderTableCSharpXMsgClientTableBodyHandler* getTableCSharpXMsgClientTableBodyHandler();

		cfbam::CFBamSaxLoaderTableColHandler* getTableColHandler();

		cfbam::CFBamSaxLoaderTenantHandler* getTenantHandler();

		cfbam::CFBamSaxLoaderTextColHandler* getTextColHandler();

		cfbam::CFBamSaxLoaderTextDefHandler* getTextDefHandler();

		cfbam::CFBamSaxLoaderTextTypeHandler* getTextTypeHandler();

		cfbam::CFBamSaxLoaderTimeColHandler* getTimeColHandler();

		cfbam::CFBamSaxLoaderTimeDefHandler* getTimeDefHandler();

		cfbam::CFBamSaxLoaderTimeTypeHandler* getTimeTypeHandler();

		cfbam::CFBamSaxLoaderTimestampColHandler* getTimestampColHandler();

		cfbam::CFBamSaxLoaderTimestampDefHandler* getTimestampDefHandler();

		cfbam::CFBamSaxLoaderTimestampTypeHandler* getTimestampTypeHandler();

		cfbam::CFBamSaxLoaderTldHandler* getTldHandler();

		cfbam::CFBamSaxLoaderTokenColHandler* getTokenColHandler();

		cfbam::CFBamSaxLoaderTokenDefHandler* getTokenDefHandler();

		cfbam::CFBamSaxLoaderTokenTypeHandler* getTokenTypeHandler();

		cfbam::CFBamSaxLoaderTopDomainHandler* getTopDomainHandler();

		cfbam::CFBamSaxLoaderTopProjectHandler* getTopProjectHandler();

		cfbam::CFBamSaxLoaderUInt16ColHandler* getUInt16ColHandler();

		cfbam::CFBamSaxLoaderUInt16DefHandler* getUInt16DefHandler();

		cfbam::CFBamSaxLoaderUInt16TypeHandler* getUInt16TypeHandler();

		cfbam::CFBamSaxLoaderUInt32ColHandler* getUInt32ColHandler();

		cfbam::CFBamSaxLoaderUInt32DefHandler* getUInt32DefHandler();

		cfbam::CFBamSaxLoaderUInt32TypeHandler* getUInt32TypeHandler();

		cfbam::CFBamSaxLoaderUInt64ColHandler* getUInt64ColHandler();

		cfbam::CFBamSaxLoaderUInt64DefHandler* getUInt64DefHandler();

		cfbam::CFBamSaxLoaderUInt64TypeHandler* getUInt64TypeHandler();

		cfbam::CFBamSaxLoaderURLProtocolHandler* getURLProtocolHandler();

		cfbam::CFBamSaxLoaderUuidColHandler* getUuidColHandler();

		cfbam::CFBamSaxLoaderUuidDefHandler* getUuidDefHandler();

		cfbam::CFBamSaxLoaderUuidGenHandler* getUuidGenHandler();

		cfbam::CFBamSaxLoaderUuidTypeHandler* getUuidTypeHandler();

		cfbam::CFBamSaxLoaderValueHandler* getValueHandler();


		cfbam::CFBamSaxRootHandler* getSaxRootHandler();


		cfbam::CFBamSaxDocHandler* getSaxDocHandler();

	public:

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getAtomLoaderBehaviour() const;
		void setAtomLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getBlobColLoaderBehaviour() const;
		void setBlobColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getBlobDefLoaderBehaviour() const;
		void setBlobDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getBlobTypeLoaderBehaviour() const;
		void setBlobTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getBoolColLoaderBehaviour() const;
		void setBoolColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getBoolDefLoaderBehaviour() const;
		void setBoolDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getBoolTypeLoaderBehaviour() const;
		void setBoolTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getChainLoaderBehaviour() const;
		void setChainLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getClearDepLoaderBehaviour() const;
		void setClearDepLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getClearSubDep1LoaderBehaviour() const;
		void setClearSubDep1LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getClearSubDep2LoaderBehaviour() const;
		void setClearSubDep2LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getClearSubDep3LoaderBehaviour() const;
		void setClearSubDep3LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getClearTopDepLoaderBehaviour() const;
		void setClearTopDepLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getClusterLoaderBehaviour() const;
		void setClusterLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getDateColLoaderBehaviour() const;
		void setDateColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getDateDefLoaderBehaviour() const;
		void setDateDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getDateTypeLoaderBehaviour() const;
		void setDateTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getDelDepLoaderBehaviour() const;
		void setDelDepLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getDelSubDep1LoaderBehaviour() const;
		void setDelSubDep1LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getDelSubDep2LoaderBehaviour() const;
		void setDelSubDep2LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getDelSubDep3LoaderBehaviour() const;
		void setDelSubDep3LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getDelTopDepLoaderBehaviour() const;
		void setDelTopDepLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getDoubleColLoaderBehaviour() const;
		void setDoubleColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getDoubleDefLoaderBehaviour() const;
		void setDoubleDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getDoubleTypeLoaderBehaviour() const;
		void setDoubleTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getEnumDefLoaderBehaviour() const;
		void setEnumDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getEnumTagLoaderBehaviour() const;
		void setEnumTagLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getEnumTypeLoaderBehaviour() const;
		void setEnumTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getFloatColLoaderBehaviour() const;
		void setFloatColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getFloatDefLoaderBehaviour() const;
		void setFloatDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getFloatTypeLoaderBehaviour() const;
		void setFloatTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getHostNodeLoaderBehaviour() const;
		void setHostNodeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getISOCcyLoaderBehaviour() const;
		void setISOCcyLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getISOCtryLoaderBehaviour() const;
		void setISOCtryLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getISOCtryCcyLoaderBehaviour() const;
		void setISOCtryCcyLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getISOCtryLangLoaderBehaviour() const;
		void setISOCtryLangLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getISOLangLoaderBehaviour() const;
		void setISOLangLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getISOTZoneLoaderBehaviour() const;
		void setISOTZoneLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getId16GenLoaderBehaviour() const;
		void setId16GenLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getId32GenLoaderBehaviour() const;
		void setId32GenLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getId64GenLoaderBehaviour() const;
		void setId64GenLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getIndexLoaderBehaviour() const;
		void setIndexLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getIndexColLoaderBehaviour() const;
		void setIndexColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getInt16ColLoaderBehaviour() const;
		void setInt16ColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getInt16DefLoaderBehaviour() const;
		void setInt16DefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getInt16TypeLoaderBehaviour() const;
		void setInt16TypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getInt32ColLoaderBehaviour() const;
		void setInt32ColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getInt32DefLoaderBehaviour() const;
		void setInt32DefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getInt32TypeLoaderBehaviour() const;
		void setInt32TypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getInt64ColLoaderBehaviour() const;
		void setInt64ColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getInt64DefLoaderBehaviour() const;
		void setInt64DefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getInt64TypeLoaderBehaviour() const;
		void setInt64TypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getLicenseLoaderBehaviour() const;
		void setLicenseLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getMajorVersionLoaderBehaviour() const;
		void setMajorVersionLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getMimeTypeLoaderBehaviour() const;
		void setMimeTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getMinorVersionLoaderBehaviour() const;
		void setMinorVersionLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getNmTokenColLoaderBehaviour() const;
		void setNmTokenColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getNmTokenDefLoaderBehaviour() const;
		void setNmTokenDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getNmTokenTypeLoaderBehaviour() const;
		void setNmTokenTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getNmTokensColLoaderBehaviour() const;
		void setNmTokensColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getNmTokensDefLoaderBehaviour() const;
		void setNmTokensDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getNmTokensTypeLoaderBehaviour() const;
		void setNmTokensTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getNumberColLoaderBehaviour() const;
		void setNumberColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getNumberDefLoaderBehaviour() const;
		void setNumberDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getNumberTypeLoaderBehaviour() const;
		void setNumberTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getParamLoaderBehaviour() const;
		void setParamLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getPopDepLoaderBehaviour() const;
		void setPopDepLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getPopSubDep1LoaderBehaviour() const;
		void setPopSubDep1LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getPopSubDep2LoaderBehaviour() const;
		void setPopSubDep2LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getPopSubDep3LoaderBehaviour() const;
		void setPopSubDep3LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getPopTopDepLoaderBehaviour() const;
		void setPopTopDepLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getRelationLoaderBehaviour() const;
		void setRelationLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getRelationColLoaderBehaviour() const;
		void setRelationColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSchemaDefLoaderBehaviour() const;
		void setSchemaDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSchemaRefLoaderBehaviour() const;
		void setSchemaRefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getScopeLoaderBehaviour() const;
		void setScopeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSecAppLoaderBehaviour() const;
		void setSecAppLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSecDeviceLoaderBehaviour() const;
		void setSecDeviceLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSecFormLoaderBehaviour() const;
		void setSecFormLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSecGroupLoaderBehaviour() const;
		void setSecGroupLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSecGroupFormLoaderBehaviour() const;
		void setSecGroupFormLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSecGrpIncLoaderBehaviour() const;
		void setSecGrpIncLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSecGrpMembLoaderBehaviour() const;
		void setSecGrpMembLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSecSessionLoaderBehaviour() const;
		void setSecSessionLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSecUserLoaderBehaviour() const;
		void setSecUserLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getServerListFuncLoaderBehaviour() const;
		void setServerListFuncLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getServerMethodLoaderBehaviour() const;
		void setServerMethodLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getServerObjFuncLoaderBehaviour() const;
		void setServerObjFuncLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getServerProcLoaderBehaviour() const;
		void setServerProcLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getServiceLoaderBehaviour() const;
		void setServiceLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getServiceTypeLoaderBehaviour() const;
		void setServiceTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getStringColLoaderBehaviour() const;
		void setStringColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getStringDefLoaderBehaviour() const;
		void setStringDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getStringTypeLoaderBehaviour() const;
		void setStringTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSubProjectLoaderBehaviour() const;
		void setSubProjectLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getSysClusterLoaderBehaviour() const;
		void setSysClusterLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTSecGroupLoaderBehaviour() const;
		void setTSecGroupLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTSecGrpIncLoaderBehaviour() const;
		void setTSecGrpIncLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTSecGrpMembLoaderBehaviour() const;
		void setTSecGrpMembLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTZDateColLoaderBehaviour() const;
		void setTZDateColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTZDateDefLoaderBehaviour() const;
		void setTZDateDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTZDateTypeLoaderBehaviour() const;
		void setTZDateTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTZTimeColLoaderBehaviour() const;
		void setTZTimeColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTZTimeDefLoaderBehaviour() const;
		void setTZTimeDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTZTimeTypeLoaderBehaviour() const;
		void setTZTimeTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTZTimestampColLoaderBehaviour() const;
		void setTZTimestampColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTZTimestampDefLoaderBehaviour() const;
		void setTZTimestampDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTZTimestampTypeLoaderBehaviour() const;
		void setTZTimestampTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTableLoaderBehaviour() const;
		void setTableLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTableColLoaderBehaviour() const;
		void setTableColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTenantLoaderBehaviour() const;
		void setTenantLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTextColLoaderBehaviour() const;
		void setTextColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTextDefLoaderBehaviour() const;
		void setTextDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTextTypeLoaderBehaviour() const;
		void setTextTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTimeColLoaderBehaviour() const;
		void setTimeColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTimeDefLoaderBehaviour() const;
		void setTimeDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTimeTypeLoaderBehaviour() const;
		void setTimeTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTimestampColLoaderBehaviour() const;
		void setTimestampColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTimestampDefLoaderBehaviour() const;
		void setTimestampDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTimestampTypeLoaderBehaviour() const;
		void setTimestampTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTldLoaderBehaviour() const;
		void setTldLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTokenColLoaderBehaviour() const;
		void setTokenColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTokenDefLoaderBehaviour() const;
		void setTokenDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTokenTypeLoaderBehaviour() const;
		void setTokenTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTopDomainLoaderBehaviour() const;
		void setTopDomainLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getTopProjectLoaderBehaviour() const;
		void setTopProjectLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUInt16ColLoaderBehaviour() const;
		void setUInt16ColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUInt16DefLoaderBehaviour() const;
		void setUInt16DefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUInt16TypeLoaderBehaviour() const;
		void setUInt16TypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUInt32ColLoaderBehaviour() const;
		void setUInt32ColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUInt32DefLoaderBehaviour() const;
		void setUInt32DefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUInt32TypeLoaderBehaviour() const;
		void setUInt32TypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUInt64ColLoaderBehaviour() const;
		void setUInt64ColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUInt64DefLoaderBehaviour() const;
		void setUInt64DefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUInt64TypeLoaderBehaviour() const;
		void setUInt64TypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getURLProtocolLoaderBehaviour() const;
		void setURLProtocolLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUuidColLoaderBehaviour() const;
		void setUuidColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUuidDefLoaderBehaviour() const;
		void setUuidDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUuidGenLoaderBehaviour() const;
		void setUuidGenLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getUuidTypeLoaderBehaviour() const;
		void setUuidTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );

		const cfbam::CFBamSaxLoader::LoaderBehaviourEnum getValueLoaderBehaviour() const;
		void setValueLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value );


		void parseFile( const std::string& url );

	};
}
