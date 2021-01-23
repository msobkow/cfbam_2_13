// Description: C++18 XML SAX Parser implementation for CFBam.

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
#include <fstream>
#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfsecsaxloader/CFSecSaxLoader.hpp>
#include <cfintsaxloader/CFIntSaxLoader.hpp>
#include <cfbamsaxloader/CFBamSaxLoader.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderAtomHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderBlobColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderBlobDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderBlobTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderBoolColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderBoolDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderBoolTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderChainHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderClearDepHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderClearSubDep1Handler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderClearSubDep2Handler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderClearSubDep3Handler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderClearTopDepHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderClusterHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderDateColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderDateDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderDateTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderDelDepHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderDelSubDep1Handler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderDelSubDep2Handler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderDelSubDep3Handler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderDelTopDepHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderDoubleColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderDoubleDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderDoubleTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderEnumDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderEnumTagHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderEnumTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderFloatColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderFloatDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderFloatTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderHostNodeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderISOCcyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderISOCtryHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderISOCtryCcyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderISOCtryLangHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderISOLangHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderISOTZoneHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderId16GenHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderId32GenHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderId64GenHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderIndexHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderIndexColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderInt16ColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderInt16DefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderInt16TypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderInt32ColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderInt32DefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderInt32TypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderInt64ColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderInt64DefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderInt64TypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderLicenseHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderMajorVersionHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderMimeTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderMinorVersionHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderNmTokenColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderNmTokenDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderNmTokenTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderNmTokensColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderNmTokensDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderNmTokensTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderNumberColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderNumberDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderNumberTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderParamHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderPopDepHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderPopSubDep1Handler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderPopSubDep2Handler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderPopSubDep3Handler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderPopTopDepHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderRelationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderRelationColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeSchemaObjImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeSchemaObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeSchemaObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeOracleSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeOracleSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeOracleSchemaObjImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeRamSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeRamSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeRamSchemaObjImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgSchemaImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgSchemaFormattersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgClientSchemaImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgClientSchemaBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaWireParsersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaXsdSpecHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeSchemaXsdElementListHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaWireParsersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaXsdElementListHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaXsdSpecHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusSchemaObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusSchemaObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusRamSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusRamSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusRamSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgSchemaIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgSchemaFormattersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgClientSchemaIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgClientSchemaBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaWireParsersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaXsdSpecHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaXsdElementListHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXmsgRspnSchemaBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaWireParsersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaXsdElementListHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaXsdSpecHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusSchemaObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusSchemaObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusRamSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusRamSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusRamSchemaObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgSchemaIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgSchemaFormattersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgClientSchemaIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgClientSchemaBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaWireParsersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaXsdSpecHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaXsdElementListHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaWireParsersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaXsdElementListHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaXsdSpecHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpSchemaObjUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpSchemaObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpSchemaObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpRamSchemaObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpRamSchemaObjImplHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpRamSchemaObjUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgSchemaUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgSchemaFormattersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgClientSchemaUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgClientSchemaBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaWireParsersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaXsdSpecHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaXsdElementListHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaWireParsersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaXsdElementListHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaXsdSpecHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSchemaRefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderScopeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSecAppHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSecDeviceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSecFormHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSecGroupHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSecGroupFormHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSecGrpIncHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSecGrpMembHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSecSessionHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSecUserHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderServerListFuncHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderServerMethodHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderServerObjFuncHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderServerProcHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderServiceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderServiceTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderStringColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderStringDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderStringTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSubProjectHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderSysClusterHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTSecGroupHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTSecGrpIncHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTSecGrpMembHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTZDateColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTZDateDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTZDateTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTZTimeColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTZTimeDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTZTimeTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTZTimestampColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTZTimestampDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTZTimestampTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeObjImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeEditObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeEditObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeEditObjImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeEditObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeTableImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeTableInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeTableObjImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeTableObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeTableObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeTableObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeDb2LUWTableImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeDb2LUWTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeDb2LUWTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeMSSqlTableImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeMSSqlTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeMSSqlTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeMySqlTableImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeMySqlTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeMySqlTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeOracleTableImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeOracleTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeOracleTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafePgSqlTableImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafePgSqlTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafePgSqlTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeRamTableImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeRamTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeRamTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeSaxLoaderImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeSaxLoaderStartElementHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeSaxLoaderEndElementHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeXMsgTableImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeXMsgTableformattersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeXMsgRqstTableImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeXMsgRspnTableImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeXMsgClientTableImportHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeXMsgRqstTableBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeXMsgRspnTableBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCafeXMsgClientTableBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusEditObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusEditObjInteraceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusEditObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusEditObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusTableInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusTableObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusTableObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusTableObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusTableObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusDb2LUWTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusDb2LUWTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusDb2LUWTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusMSSqlTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusMSSqlTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusMSSqlTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusMySqlTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusMySqlTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusMySqlTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusOracleTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusOracleTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusOracleTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusPgSqlTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusPgSqlTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusRamTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusRamTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusRamTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusSaxLoaderIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusSaxLoaderStartElementHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusSaxLoaderEndElementHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusXMsgTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusXMsgTableFormattersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusXMsgRqstTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusXMsgRspnTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusXMsgClientTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusXMsgRqstTableBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusXMsgRspnTableBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCPlusXMsgClientTableBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusObjImplemntationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusEditObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusEditObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusEditObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusEditObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusTableInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusTableObjIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusTableObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusTableObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusTableObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusDb2LUWTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusDb2LUWTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusDb2LUWTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusMSSqlTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusMSSqlTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusMSSqlTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusMySqlTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusMySqlTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusMySqlTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusOracleTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusOracleTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusOracleTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusPgSqlTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusPgSqlTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusPgSqlTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusRamTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusRamTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusRamTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusSaxLoaderIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusSaxLoaderStartElementHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusSaxLoaderEndElementHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusXMsgTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusXMsgTableFormattersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusXMsgRqstTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusXMsgRspnTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusXMsgClientTableIncludeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusXMsgRqstTableBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusXMsgRspnTableBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableHPlusXMsgClientTableBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpObjUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpEditObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpEditObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpEditObjUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpEditObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpTableUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpTableInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpTableObjUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpTableObjMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpTableObjInterfaceHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpTableObjImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpDb2LUWTableUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpDb2LUWTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpDb2LUWTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpMSSqlTableUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpMSSqlTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpMSSqlTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpMySqlTableUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpMySqlTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpMySqlTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpOracleTableUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpOracleTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpOracleTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpPgSqlTableUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpPgSqlTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpPgSqlTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpRamTableUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpRamTableMembersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpRamTableImplementationHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpSaxLoaderUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpSaxLoaderStartElementHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpSaxLoaderEndElementHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpXMsgTableUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpXMsgTableFormattersHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpXMsgRqstTableUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpXMsgRspnTableUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpXMsgClientTableUsingHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpXMsgRqstTableBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpXMsgRspnTableBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableCSharpXMsgClientTableBodyHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTableColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTenantHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTextColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTextDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTextTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTimeColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTimeDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTimeTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTimestampColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTimestampDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTimestampTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTldHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTokenColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTokenDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTokenTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTopDomainHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderTopProjectHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUInt16ColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUInt16DefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUInt16TypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUInt32ColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUInt32DefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUInt32TypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUInt64ColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUInt64DefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUInt64TypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderURLProtocolHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUuidColHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUuidDefHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUuidGenHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderUuidTypeHandler.hpp>
#include <cfbamsaxloader/CFBamSaxLoaderValueHandler.hpp>

using namespace std;

namespace cfbam {

	CFBamSaxRootHandler::CFBamSaxRootHandler( cfbam::CFBamSaxLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamSaxRootHandler::~CFBamSaxRootHandler() {
	}

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
	void CFBamSaxRootHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
	}

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
	void CFBamSaxRootHandler::endElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}


	CFBamSaxDocHandler::CFBamSaxDocHandler( cfbam::CFBamSaxLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamSaxDocHandler::~CFBamSaxDocHandler() {
	}

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
	void CFBamSaxDocHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
	}

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
	void CFBamSaxDocHandler::endElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	const std::string CFBamSaxLoader::CLASS_NAME( "CFBamSaxLoader" );
	const std::string CFBamSaxLoader::SCHEMA_XMLNS( "uri://org.msscf/msscf/2.0.13/cfbamloader" );
	const std::string CFBamSaxLoader::SCHEMA_URI( "/opt/msscf/2.0.13/xsd/cfbam-structured.xsd" );
	bool CFBamSaxLoader::grammarLoaded = false;

	CFBamSaxLoader::CFBamSaxLoader()
	: cflib::CFLibXmlCoreSaxParser()
	{
		schemaObj = NULL;
		saxRootHandler = NULL;
		saxDocHandler = NULL;
		atomHandler = NULL;
		blobColHandler = NULL;
		blobDefHandler = NULL;
		blobTypeHandler = NULL;
		boolColHandler = NULL;
		boolDefHandler = NULL;
		boolTypeHandler = NULL;
		chainHandler = NULL;
		clearDepHandler = NULL;
		clearSubDep1Handler = NULL;
		clearSubDep2Handler = NULL;
		clearSubDep3Handler = NULL;
		clearTopDepHandler = NULL;
		clusterHandler = NULL;
		dateColHandler = NULL;
		dateDefHandler = NULL;
		dateTypeHandler = NULL;
		delDepHandler = NULL;
		delSubDep1Handler = NULL;
		delSubDep2Handler = NULL;
		delSubDep3Handler = NULL;
		delTopDepHandler = NULL;
		doubleColHandler = NULL;
		doubleDefHandler = NULL;
		doubleTypeHandler = NULL;
		enumDefHandler = NULL;
		enumTagHandler = NULL;
		enumTypeHandler = NULL;
		floatColHandler = NULL;
		floatDefHandler = NULL;
		floatTypeHandler = NULL;
		hostNodeHandler = NULL;
		iSOCcyHandler = NULL;
		iSOCtryHandler = NULL;
		iSOCtryCcyHandler = NULL;
		iSOCtryLangHandler = NULL;
		iSOLangHandler = NULL;
		iSOTZoneHandler = NULL;
		id16GenHandler = NULL;
		id32GenHandler = NULL;
		id64GenHandler = NULL;
		indexHandler = NULL;
		indexColHandler = NULL;
		int16ColHandler = NULL;
		int16DefHandler = NULL;
		int16TypeHandler = NULL;
		int32ColHandler = NULL;
		int32DefHandler = NULL;
		int32TypeHandler = NULL;
		int64ColHandler = NULL;
		int64DefHandler = NULL;
		int64TypeHandler = NULL;
		licenseHandler = NULL;
		majorVersionHandler = NULL;
		mimeTypeHandler = NULL;
		minorVersionHandler = NULL;
		nmTokenColHandler = NULL;
		nmTokenDefHandler = NULL;
		nmTokenTypeHandler = NULL;
		nmTokensColHandler = NULL;
		nmTokensDefHandler = NULL;
		nmTokensTypeHandler = NULL;
		numberColHandler = NULL;
		numberDefHandler = NULL;
		numberTypeHandler = NULL;
		paramHandler = NULL;
		popDepHandler = NULL;
		popSubDep1Handler = NULL;
		popSubDep2Handler = NULL;
		popSubDep3Handler = NULL;
		popTopDepHandler = NULL;
		relationHandler = NULL;
		relationColHandler = NULL;
		schemaDefHandler = NULL;
		schemaDefCafeSchemaObjImportHandler = NULL;
		schemaDefCafeSchemaObjInterfaceHandler = NULL;
		schemaDefCafeSchemaObjMembersHandler = NULL;
		schemaDefCafeSchemaObjImplementationHandler = NULL;
		schemaDefCafeDb2LUWSchemaObjMembersHandler = NULL;
		schemaDefCafeDb2LUWSchemaObjImplHandler = NULL;
		schemaDefCafeDb2LUWSchemaObjImportHandler = NULL;
		schemaDefCafeMSSqlSchemaObjMembersHandler = NULL;
		schemaDefCafeMSSqlSchemaObjImplHandler = NULL;
		schemaDefCafeMSSqlSchemaObjImportHandler = NULL;
		schemaDefCafeMySqlSchemaObjMembersHandler = NULL;
		schemaDefCafeMySqlSchemaObjImplHandler = NULL;
		schemaDefCafeMySqlSchemaObjImportHandler = NULL;
		schemaDefCafeOracleSchemaObjMembersHandler = NULL;
		schemaDefCafeOracleSchemaObjImplHandler = NULL;
		schemaDefCafeOracleSchemaObjImportHandler = NULL;
		schemaDefCafePgSqlSchemaObjMembersHandler = NULL;
		schemaDefCafePgSqlSchemaObjImplHandler = NULL;
		schemaDefCafePgSqlSchemaObjImportHandler = NULL;
		schemaDefCafeRamSchemaObjMembersHandler = NULL;
		schemaDefCafeRamSchemaObjImplHandler = NULL;
		schemaDefCafeRamSchemaObjImportHandler = NULL;
		schemaDefCafeXMsgSchemaImportHandler = NULL;
		schemaDefCafeXMsgSchemaFormattersHandler = NULL;
		schemaDefCafeXMsgClientSchemaImportHandler = NULL;
		schemaDefCafeXMsgClientSchemaBodyHandler = NULL;
		schemaDefCafeXMsgRqstSchemaBodyHandler = NULL;
		schemaDefCafeXMsgRqstSchemaImportHandler = NULL;
		schemaDefCafeXMsgRqstSchemaWireParsersHandler = NULL;
		schemaDefCafeXMsgRqstSchemaXsdSpecHandler = NULL;
		schemaDefCafeSchemaXsdElementListHandler = NULL;
		schemaDefCafeXMsgRspnSchemaBodyHandler = NULL;
		schemaDefCafeXMsgRspnSchemaImportHandler = NULL;
		schemaDefCafeXMsgRspnSchemaWireParsersHandler = NULL;
		schemaDefCafeXMsgRspnSchemaXsdElementListHandler = NULL;
		schemaDefCafeXMsgRspnSchemaXsdSpecHandler = NULL;
		schemaDefCPlusSchemaObjIncludeHandler = NULL;
		schemaDefCPlusSchemaObjInterfaceHandler = NULL;
		schemaDefCPlusSchemaObjMembersHandler = NULL;
		schemaDefCPlusSchemaObjImplementationHandler = NULL;
		schemaDefCPlusDb2LUWSchemaObjMembersHandler = NULL;
		schemaDefCPlusDb2LUWSchemaObjImplHandler = NULL;
		schemaDefCPlusDb2LUWSchemaObjIncludeHandler = NULL;
		schemaDefCPlusMSSqlSchemaObjMembersHandler = NULL;
		schemaDefCPlusMSSqlSchemaObjImplHandler = NULL;
		schemaDefCPlusMSSqlSchemaObjIncludeHandler = NULL;
		schemaDefCPlusMySqlSchemaObjMembersHandler = NULL;
		schemaDefCPlusMySqlSchemaObjImplHandler = NULL;
		schemaDefCPlusMySqlSchemaObjIncludeHandler = NULL;
		schemaDefCPlusOracleSchemaObjMembersHandler = NULL;
		schemaDefCPlusOracleSchemaObjImplHandler = NULL;
		schemaDefCPlusOracleSchemaObjIncludeHandler = NULL;
		schemaDefCPlusPgSqlSchemaObjMembersHandler = NULL;
		schemaDefCPlusPgSqlSchemaObjImplHandler = NULL;
		schemaDefCPlusPgSqlSchemaObjIncludeHandler = NULL;
		schemaDefCPlusRamSchemaObjMembersHandler = NULL;
		schemaDefCPlusRamSchemaObjImplHandler = NULL;
		schemaDefCPlusRamSchemaObjIncludeHandler = NULL;
		schemaDefCPlusXMsgSchemaIncludeHandler = NULL;
		schemaDefCPlusXMsgSchemaFormattersHandler = NULL;
		schemaDefCPlusXMsgClientSchemaIncludeHandler = NULL;
		schemaDefCPlusXMsgClientSchemaBodyHandler = NULL;
		schemaDefCPlusXMsgRqstSchemaBodyHandler = NULL;
		schemaDefCPlusXMsgRqstSchemaIncludeHandler = NULL;
		schemaDefCPlusXMsgRqstSchemaWireParsersHandler = NULL;
		schemaDefCPlusXMsgRqstSchemaXsdSpecHandler = NULL;
		schemaDefCPlusXMsgRqstSchemaXsdElementListHandler = NULL;
		schemaDefCPlusXmsgRspnSchemaBodyHandler = NULL;
		schemaDefCPlusXMsgRspnSchemaIncludeHandler = NULL;
		schemaDefCPlusXMsgRspnSchemaWireParsersHandler = NULL;
		schemaDefCPlusXMsgRspnSchemaXsdElementListHandler = NULL;
		schemaDefCPlusXMsgRspnSchemaXsdSpecHandler = NULL;
		schemaDefHPlusSchemaObjIncludeHandler = NULL;
		schemaDefHPlusSchemaObjInterfaceHandler = NULL;
		schemaDefHPlusSchemaObjMembersHandler = NULL;
		schemaDefHPlusSchemaObjImplementationHandler = NULL;
		schemaDefHPlusDb2LUWSchemaObjMembersHandler = NULL;
		schemaDefHPlusDb2LUWSchemaObjImplHandler = NULL;
		schemaDefHPlusDb2LUWSchemaObjIncludeHandler = NULL;
		schemaDefHPlusMSSqlSchemaObjMembersHandler = NULL;
		schemaDefHPlusMSSqlSchemaObjImplHandler = NULL;
		schemaDefHPlusMSSqlSchemaObjIncludeHandler = NULL;
		schemaDefHPlusMySqlSchemaObjMembersHandler = NULL;
		schemaDefHPlusMySqlSchemaObjImplHandler = NULL;
		schemaDefHPlusMySqlSchemaObjIncludeHandler = NULL;
		schemaDefHPlusOracleSchemaObjMembersHandler = NULL;
		schemaDefHPlusOracleSchemaObjImplHandler = NULL;
		schemaDefHPlusOracleSchemaObjIncludeHandler = NULL;
		schemaDefHPlusPgSqlSchemaObjMembersHandler = NULL;
		schemaDefHPlusPgSqlSchemaObjImplHandler = NULL;
		schemaDefHPlusPgSqlSchemaObjIncludeHandler = NULL;
		schemaDefHPlusRamSchemaObjMembersHandler = NULL;
		schemaDefHPlusRamSchemaObjImplHandler = NULL;
		schemaDefHPlusRamSchemaObjIncludeHandler = NULL;
		schemaDefHPlusXMsgSchemaIncludeHandler = NULL;
		schemaDefHPlusXMsgSchemaFormattersHandler = NULL;
		schemaDefHPlusXMsgClientSchemaIncludeHandler = NULL;
		schemaDefHPlusXMsgClientSchemaBodyHandler = NULL;
		schemaDefHPlusXMsgRqstSchemaBodyHandler = NULL;
		schemaDefHPlusXMsgRqstSchemaIncludeHandler = NULL;
		schemaDefHPlusXMsgRqstSchemaWireParsersHandler = NULL;
		schemaDefHPlusXMsgRqstSchemaXsdSpecHandler = NULL;
		schemaDefHPlusXMsgRqstSchemaXsdElementListHandler = NULL;
		schemaDefHPlusXMsgRspnSchemaBodyHandler = NULL;
		schemaDefHPlusXMsgRspnSchemaIncludeHandler = NULL;
		schemaDefHPlusXMsgRspnSchemaWireParsersHandler = NULL;
		schemaDefHPlusXMsgRspnSchemaXsdElementListHandler = NULL;
		schemaDefHPlusXMsgRspnSchemaXsdSpecHandler = NULL;
		schemaDefCSharpSchemaObjUsingHandler = NULL;
		schemaDefCSharpSchemaObjInterfaceHandler = NULL;
		schemaDefCSharpSchemaObjMembersHandler = NULL;
		schemaDefCSharpSchemaObjImplementationHandler = NULL;
		schemaDefCSharpDb2LUWSchemaObjMembersHandler = NULL;
		schemaDefCSharpDb2LUWSchemaObjImplHandler = NULL;
		schemaDefCSharpDb2LUWSchemaObjUsingHandler = NULL;
		schemaDefCSharpMSSqlSchemaObjMembersHandler = NULL;
		schemaDefCSharpMSSqlSchemaObjImplHandler = NULL;
		schemaDefCSharpMSSqlSchemaObjUsingHandler = NULL;
		schemaDefCSharpMySqlSchemaObjMembersHandler = NULL;
		schemaDefCSharpMySqlSchemaObjImplHandler = NULL;
		schemaDefCSharpMySqlSchemaObjUsingHandler = NULL;
		schemaDefCSharpOracleSchemaObjMembersHandler = NULL;
		schemaDefCSharpOracleSchemaObjImplHandler = NULL;
		schemaDefCSharpOracleSchemaObjUsingHandler = NULL;
		schemaDefCSharpPgSqlSchemaObjMembersHandler = NULL;
		schemaDefCSharpPgSqlSchemaObjImplHandler = NULL;
		schemaDefCSharpPgSqlSchemaObjUsingHandler = NULL;
		schemaDefCSharpRamSchemaObjMembersHandler = NULL;
		schemaDefCSharpRamSchemaObjImplHandler = NULL;
		schemaDefCSharpRamSchemaObjUsingHandler = NULL;
		schemaDefCSharpXMsgSchemaUsingHandler = NULL;
		schemaDefCSharpXMsgSchemaFormattersHandler = NULL;
		schemaDefCSharpXMsgClientSchemaUsingHandler = NULL;
		schemaDefCSharpXMsgClientSchemaBodyHandler = NULL;
		schemaDefCSharpXMsgRqstSchemaBodyHandler = NULL;
		schemaDefCSharpXMsgRqstSchemaUsingHandler = NULL;
		schemaDefCSharpXMsgRqstSchemaWireParsersHandler = NULL;
		schemaDefCSharpXMsgRqstSchemaXsdSpecHandler = NULL;
		schemaDefCSharpXMsgRqstSchemaXsdElementListHandler = NULL;
		schemaDefCSharpXMsgRspnSchemaBodyHandler = NULL;
		schemaDefCSharpXMsgRspnSchemaUsingHandler = NULL;
		schemaDefCSharpXMsgRspnSchemaWireParsersHandler = NULL;
		schemaDefCSharpXMsgRspnSchemaXsdElementListHandler = NULL;
		schemaDefCSharpXMsgRspnSchemaXsdSpecHandler = NULL;
		schemaRefHandler = NULL;
		scopeHandler = NULL;
		secAppHandler = NULL;
		secDeviceHandler = NULL;
		secFormHandler = NULL;
		secGroupHandler = NULL;
		secGroupFormHandler = NULL;
		secGrpIncHandler = NULL;
		secGrpMembHandler = NULL;
		secSessionHandler = NULL;
		secUserHandler = NULL;
		serverListFuncHandler = NULL;
		serverMethodHandler = NULL;
		serverObjFuncHandler = NULL;
		serverProcHandler = NULL;
		serviceHandler = NULL;
		serviceTypeHandler = NULL;
		stringColHandler = NULL;
		stringDefHandler = NULL;
		stringTypeHandler = NULL;
		subProjectHandler = NULL;
		sysClusterHandler = NULL;
		tSecGroupHandler = NULL;
		tSecGrpIncHandler = NULL;
		tSecGrpMembHandler = NULL;
		tZDateColHandler = NULL;
		tZDateDefHandler = NULL;
		tZDateTypeHandler = NULL;
		tZTimeColHandler = NULL;
		tZTimeDefHandler = NULL;
		tZTimeTypeHandler = NULL;
		tZTimestampColHandler = NULL;
		tZTimestampDefHandler = NULL;
		tZTimestampTypeHandler = NULL;
		tableHandler = NULL;
		tableCafeObjMembersHandler = NULL;
		tableCafeObjInterfaceHandler = NULL;
		tableCafeObjImportHandler = NULL;
		tableCafeObjImplementationHandler = NULL;
		tableCafeEditObjMembersHandler = NULL;
		tableCafeEditObjInterfaceHandler = NULL;
		tableCafeEditObjImportHandler = NULL;
		tableCafeEditObjImplementationHandler = NULL;
		tableCafeTableImportHandler = NULL;
		tableCafeTableMembersHandler = NULL;
		tableCafeTableInterfaceHandler = NULL;
		tableCafeTableImplementationHandler = NULL;
		tableCafeTableObjImportHandler = NULL;
		tableCafeTableObjMembersHandler = NULL;
		tableCafeTableObjInterfaceHandler = NULL;
		tableCafeTableObjImplementationHandler = NULL;
		tableCafeDb2LUWTableImportHandler = NULL;
		tableCafeDb2LUWTableMembersHandler = NULL;
		tableCafeDb2LUWTableImplementationHandler = NULL;
		tableCafeMSSqlTableImportHandler = NULL;
		tableCafeMSSqlTableMembersHandler = NULL;
		tableCafeMSSqlTableImplementationHandler = NULL;
		tableCafeMySqlTableImportHandler = NULL;
		tableCafeMySqlTableMembersHandler = NULL;
		tableCafeMySqlTableImplementationHandler = NULL;
		tableCafeOracleTableImportHandler = NULL;
		tableCafeOracleTableMembersHandler = NULL;
		tableCafeOracleTableImplementationHandler = NULL;
		tableCafePgSqlTableImportHandler = NULL;
		tableCafePgSqlTableMembersHandler = NULL;
		tableCafePgSqlTableImplementationHandler = NULL;
		tableCafeRamTableImportHandler = NULL;
		tableCafeRamTableMembersHandler = NULL;
		tableCafeRamTableImplementationHandler = NULL;
		tableCafeSaxLoaderImportHandler = NULL;
		tableCafeSaxLoaderStartElementHandler = NULL;
		tableCafeSaxLoaderEndElementHandler = NULL;
		tableCafeXMsgTableImportHandler = NULL;
		tableCafeXMsgTableformattersHandler = NULL;
		tableCafeXMsgRqstTableImportHandler = NULL;
		tableCafeXMsgRspnTableImportHandler = NULL;
		tableCafeXMsgClientTableImportHandler = NULL;
		tableCafeXMsgRqstTableBodyHandler = NULL;
		tableCafeXMsgRspnTableBodyHandler = NULL;
		tableCafeXMsgClientTableBodyHandler = NULL;
		tableCPlusObjMembersHandler = NULL;
		tableCPlusObjInterfaceHandler = NULL;
		tableCPlusObjIncludeHandler = NULL;
		tableCPlusObjImplementationHandler = NULL;
		tableCPlusEditObjMembersHandler = NULL;
		tableCPlusEditObjInteraceHandler = NULL;
		tableCPlusEditObjIncludeHandler = NULL;
		tableCPlusEditObjImplementationHandler = NULL;
		tableCPlusTableIncludeHandler = NULL;
		tableCPlusTableMembersHandler = NULL;
		tableCPlusTableInterfaceHandler = NULL;
		tableCPlusTableImplementationHandler = NULL;
		tableCPlusTableObjIncludeHandler = NULL;
		tableCPlusTableObjMembersHandler = NULL;
		tableCPlusTableObjInterfaceHandler = NULL;
		tableCPlusTableObjImplementationHandler = NULL;
		tableCPlusDb2LUWTableIncludeHandler = NULL;
		tableCPlusDb2LUWTableMembersHandler = NULL;
		tableCPlusDb2LUWTableImplementationHandler = NULL;
		tableCPlusMSSqlTableIncludeHandler = NULL;
		tableCPlusMSSqlTableMembersHandler = NULL;
		tableCPlusMSSqlTableImplementationHandler = NULL;
		tableCPlusMySqlTableIncludeHandler = NULL;
		tableCPlusMySqlTableMembersHandler = NULL;
		tableCPlusMySqlTableImplementationHandler = NULL;
		tableCPlusOracleTableIncludeHandler = NULL;
		tableCPlusOracleTableMembersHandler = NULL;
		tableCPlusOracleTableImplementationHandler = NULL;
		tableCPlusPgSqlTableMembersHandler = NULL;
		tableCPlusPgSqlTableImplementationHandler = NULL;
		tableCPlusRamTableIncludeHandler = NULL;
		tableCPlusRamTableMembersHandler = NULL;
		tableCPlusRamTableImplementationHandler = NULL;
		tableCPlusSaxLoaderIncludeHandler = NULL;
		tableCPlusSaxLoaderStartElementHandler = NULL;
		tableCPlusSaxLoaderEndElementHandler = NULL;
		tableCPlusXMsgTableIncludeHandler = NULL;
		tableCPlusXMsgTableFormattersHandler = NULL;
		tableCPlusXMsgRqstTableIncludeHandler = NULL;
		tableCPlusXMsgRspnTableIncludeHandler = NULL;
		tableCPlusXMsgClientTableIncludeHandler = NULL;
		tableCPlusXMsgRqstTableBodyHandler = NULL;
		tableCPlusXMsgRspnTableBodyHandler = NULL;
		tableCPlusXMsgClientTableBodyHandler = NULL;
		tableHPlusObjMembersHandler = NULL;
		tableHPlusObjInterfaceHandler = NULL;
		tableHPlusObjIncludeHandler = NULL;
		tableHPlusObjImplemntationHandler = NULL;
		tableHPlusEditObjMembersHandler = NULL;
		tableHPlusEditObjInterfaceHandler = NULL;
		tableHPlusEditObjIncludeHandler = NULL;
		tableHPlusEditObjImplementationHandler = NULL;
		tableHPlusTableIncludeHandler = NULL;
		tableHPlusTableMembersHandler = NULL;
		tableHPlusTableInterfaceHandler = NULL;
		tableHPlusTableImplementationHandler = NULL;
		tableHPlusTableObjIncludeHandler = NULL;
		tableHPlusTableObjMembersHandler = NULL;
		tableHPlusTableObjInterfaceHandler = NULL;
		tableHPlusTableObjImplementationHandler = NULL;
		tableHPlusDb2LUWTableIncludeHandler = NULL;
		tableHPlusDb2LUWTableMembersHandler = NULL;
		tableHPlusDb2LUWTableImplementationHandler = NULL;
		tableHPlusMSSqlTableIncludeHandler = NULL;
		tableHPlusMSSqlTableMembersHandler = NULL;
		tableHPlusMSSqlTableImplementationHandler = NULL;
		tableHPlusMySqlTableIncludeHandler = NULL;
		tableHPlusMySqlTableMembersHandler = NULL;
		tableHPlusMySqlTableImplementationHandler = NULL;
		tableHPlusOracleTableIncludeHandler = NULL;
		tableHPlusOracleTableMembersHandler = NULL;
		tableHPlusOracleTableImplementationHandler = NULL;
		tableHPlusPgSqlTableIncludeHandler = NULL;
		tableHPlusPgSqlTableMembersHandler = NULL;
		tableHPlusPgSqlTableImplementationHandler = NULL;
		tableHPlusRamTableIncludeHandler = NULL;
		tableHPlusRamTableMembersHandler = NULL;
		tableHPlusRamTableImplementationHandler = NULL;
		tableHPlusSaxLoaderIncludeHandler = NULL;
		tableHPlusSaxLoaderStartElementHandler = NULL;
		tableHPlusSaxLoaderEndElementHandler = NULL;
		tableHPlusXMsgTableIncludeHandler = NULL;
		tableHPlusXMsgTableFormattersHandler = NULL;
		tableHPlusXMsgRqstTableIncludeHandler = NULL;
		tableHPlusXMsgRspnTableIncludeHandler = NULL;
		tableHPlusXMsgClientTableIncludeHandler = NULL;
		tableHPlusXMsgRqstTableBodyHandler = NULL;
		tableHPlusXMsgRspnTableBodyHandler = NULL;
		tableHPlusXMsgClientTableBodyHandler = NULL;
		tableCSharpObjMembersHandler = NULL;
		tableCSharpObjInterfaceHandler = NULL;
		tableCSharpObjUsingHandler = NULL;
		tableCSharpObjImplementationHandler = NULL;
		tableCSharpEditObjMembersHandler = NULL;
		tableCSharpEditObjInterfaceHandler = NULL;
		tableCSharpEditObjUsingHandler = NULL;
		tableCSharpEditObjImplementationHandler = NULL;
		tableCSharpTableUsingHandler = NULL;
		tableCSharpTableMembersHandler = NULL;
		tableCSharpTableInterfaceHandler = NULL;
		tableCSharpTableImplementationHandler = NULL;
		tableCSharpTableObjUsingHandler = NULL;
		tableCSharpTableObjMembersHandler = NULL;
		tableCSharpTableObjInterfaceHandler = NULL;
		tableCSharpTableObjImplementationHandler = NULL;
		tableCSharpDb2LUWTableUsingHandler = NULL;
		tableCSharpDb2LUWTableMembersHandler = NULL;
		tableCSharpDb2LUWTableImplementationHandler = NULL;
		tableCSharpMSSqlTableUsingHandler = NULL;
		tableCSharpMSSqlTableMembersHandler = NULL;
		tableCSharpMSSqlTableImplementationHandler = NULL;
		tableCSharpMySqlTableUsingHandler = NULL;
		tableCSharpMySqlTableMembersHandler = NULL;
		tableCSharpMySqlTableImplementationHandler = NULL;
		tableCSharpOracleTableUsingHandler = NULL;
		tableCSharpOracleTableMembersHandler = NULL;
		tableCSharpOracleTableImplementationHandler = NULL;
		tableCSharpPgSqlTableUsingHandler = NULL;
		tableCSharpPgSqlTableMembersHandler = NULL;
		tableCSharpPgSqlTableImplementationHandler = NULL;
		tableCSharpRamTableUsingHandler = NULL;
		tableCSharpRamTableMembersHandler = NULL;
		tableCSharpRamTableImplementationHandler = NULL;
		tableCSharpSaxLoaderUsingHandler = NULL;
		tableCSharpSaxLoaderStartElementHandler = NULL;
		tableCSharpSaxLoaderEndElementHandler = NULL;
		tableCSharpXMsgTableUsingHandler = NULL;
		tableCSharpXMsgTableFormattersHandler = NULL;
		tableCSharpXMsgRqstTableUsingHandler = NULL;
		tableCSharpXMsgRspnTableUsingHandler = NULL;
		tableCSharpXMsgClientTableUsingHandler = NULL;
		tableCSharpXMsgRqstTableBodyHandler = NULL;
		tableCSharpXMsgRspnTableBodyHandler = NULL;
		tableCSharpXMsgClientTableBodyHandler = NULL;
		tableColHandler = NULL;
		tenantHandler = NULL;
		textColHandler = NULL;
		textDefHandler = NULL;
		textTypeHandler = NULL;
		timeColHandler = NULL;
		timeDefHandler = NULL;
		timeTypeHandler = NULL;
		timestampColHandler = NULL;
		timestampDefHandler = NULL;
		timestampTypeHandler = NULL;
		tldHandler = NULL;
		tokenColHandler = NULL;
		tokenDefHandler = NULL;
		tokenTypeHandler = NULL;
		topDomainHandler = NULL;
		topProjectHandler = NULL;
		uInt16ColHandler = NULL;
		uInt16DefHandler = NULL;
		uInt16TypeHandler = NULL;
		uInt32ColHandler = NULL;
		uInt32DefHandler = NULL;
		uInt32TypeHandler = NULL;
		uInt64ColHandler = NULL;
		uInt64DefHandler = NULL;
		uInt64TypeHandler = NULL;
		uRLProtocolHandler = NULL;
		uuidColHandler = NULL;
		uuidDefHandler = NULL;
		uuidGenHandler = NULL;
		uuidTypeHandler = NULL;
		valueHandler = NULL;
		useCluster = NULL;
		useTenant = NULL;
		setRootElementHandler( getSaxRootHandler() );
		verifyGrammarInstallation();
		initParser();
	}

	CFBamSaxLoader::CFBamSaxLoader( cflib::ICFLibMessageLog* logger )
	: cflib::CFLibXmlCoreSaxParser( logger )
	{
		saxRootHandler = NULL;
		saxDocHandler = NULL;
		atomHandler = NULL;
		blobColHandler = NULL;
		blobDefHandler = NULL;
		blobTypeHandler = NULL;
		boolColHandler = NULL;
		boolDefHandler = NULL;
		boolTypeHandler = NULL;
		chainHandler = NULL;
		clearDepHandler = NULL;
		clearSubDep1Handler = NULL;
		clearSubDep2Handler = NULL;
		clearSubDep3Handler = NULL;
		clearTopDepHandler = NULL;
		clusterHandler = NULL;
		dateColHandler = NULL;
		dateDefHandler = NULL;
		dateTypeHandler = NULL;
		delDepHandler = NULL;
		delSubDep1Handler = NULL;
		delSubDep2Handler = NULL;
		delSubDep3Handler = NULL;
		delTopDepHandler = NULL;
		doubleColHandler = NULL;
		doubleDefHandler = NULL;
		doubleTypeHandler = NULL;
		enumDefHandler = NULL;
		enumTagHandler = NULL;
		enumTypeHandler = NULL;
		floatColHandler = NULL;
		floatDefHandler = NULL;
		floatTypeHandler = NULL;
		hostNodeHandler = NULL;
		iSOCcyHandler = NULL;
		iSOCtryHandler = NULL;
		iSOCtryCcyHandler = NULL;
		iSOCtryLangHandler = NULL;
		iSOLangHandler = NULL;
		iSOTZoneHandler = NULL;
		id16GenHandler = NULL;
		id32GenHandler = NULL;
		id64GenHandler = NULL;
		indexHandler = NULL;
		indexColHandler = NULL;
		int16ColHandler = NULL;
		int16DefHandler = NULL;
		int16TypeHandler = NULL;
		int32ColHandler = NULL;
		int32DefHandler = NULL;
		int32TypeHandler = NULL;
		int64ColHandler = NULL;
		int64DefHandler = NULL;
		int64TypeHandler = NULL;
		licenseHandler = NULL;
		majorVersionHandler = NULL;
		mimeTypeHandler = NULL;
		minorVersionHandler = NULL;
		nmTokenColHandler = NULL;
		nmTokenDefHandler = NULL;
		nmTokenTypeHandler = NULL;
		nmTokensColHandler = NULL;
		nmTokensDefHandler = NULL;
		nmTokensTypeHandler = NULL;
		numberColHandler = NULL;
		numberDefHandler = NULL;
		numberTypeHandler = NULL;
		paramHandler = NULL;
		popDepHandler = NULL;
		popSubDep1Handler = NULL;
		popSubDep2Handler = NULL;
		popSubDep3Handler = NULL;
		popTopDepHandler = NULL;
		relationHandler = NULL;
		relationColHandler = NULL;
		schemaDefHandler = NULL;
		schemaDefCafeSchemaObjImportHandler = NULL;
		schemaDefCafeSchemaObjInterfaceHandler = NULL;
		schemaDefCafeSchemaObjMembersHandler = NULL;
		schemaDefCafeSchemaObjImplementationHandler = NULL;
		schemaDefCafeDb2LUWSchemaObjMembersHandler = NULL;
		schemaDefCafeDb2LUWSchemaObjImplHandler = NULL;
		schemaDefCafeDb2LUWSchemaObjImportHandler = NULL;
		schemaDefCafeMSSqlSchemaObjMembersHandler = NULL;
		schemaDefCafeMSSqlSchemaObjImplHandler = NULL;
		schemaDefCafeMSSqlSchemaObjImportHandler = NULL;
		schemaDefCafeMySqlSchemaObjMembersHandler = NULL;
		schemaDefCafeMySqlSchemaObjImplHandler = NULL;
		schemaDefCafeMySqlSchemaObjImportHandler = NULL;
		schemaDefCafeOracleSchemaObjMembersHandler = NULL;
		schemaDefCafeOracleSchemaObjImplHandler = NULL;
		schemaDefCafeOracleSchemaObjImportHandler = NULL;
		schemaDefCafePgSqlSchemaObjMembersHandler = NULL;
		schemaDefCafePgSqlSchemaObjImplHandler = NULL;
		schemaDefCafePgSqlSchemaObjImportHandler = NULL;
		schemaDefCafeRamSchemaObjMembersHandler = NULL;
		schemaDefCafeRamSchemaObjImplHandler = NULL;
		schemaDefCafeRamSchemaObjImportHandler = NULL;
		schemaDefCafeXMsgSchemaImportHandler = NULL;
		schemaDefCafeXMsgSchemaFormattersHandler = NULL;
		schemaDefCafeXMsgClientSchemaImportHandler = NULL;
		schemaDefCafeXMsgClientSchemaBodyHandler = NULL;
		schemaDefCafeXMsgRqstSchemaBodyHandler = NULL;
		schemaDefCafeXMsgRqstSchemaImportHandler = NULL;
		schemaDefCafeXMsgRqstSchemaWireParsersHandler = NULL;
		schemaDefCafeXMsgRqstSchemaXsdSpecHandler = NULL;
		schemaDefCafeSchemaXsdElementListHandler = NULL;
		schemaDefCafeXMsgRspnSchemaBodyHandler = NULL;
		schemaDefCafeXMsgRspnSchemaImportHandler = NULL;
		schemaDefCafeXMsgRspnSchemaWireParsersHandler = NULL;
		schemaDefCafeXMsgRspnSchemaXsdElementListHandler = NULL;
		schemaDefCafeXMsgRspnSchemaXsdSpecHandler = NULL;
		schemaDefCPlusSchemaObjIncludeHandler = NULL;
		schemaDefCPlusSchemaObjInterfaceHandler = NULL;
		schemaDefCPlusSchemaObjMembersHandler = NULL;
		schemaDefCPlusSchemaObjImplementationHandler = NULL;
		schemaDefCPlusDb2LUWSchemaObjMembersHandler = NULL;
		schemaDefCPlusDb2LUWSchemaObjImplHandler = NULL;
		schemaDefCPlusDb2LUWSchemaObjIncludeHandler = NULL;
		schemaDefCPlusMSSqlSchemaObjMembersHandler = NULL;
		schemaDefCPlusMSSqlSchemaObjImplHandler = NULL;
		schemaDefCPlusMSSqlSchemaObjIncludeHandler = NULL;
		schemaDefCPlusMySqlSchemaObjMembersHandler = NULL;
		schemaDefCPlusMySqlSchemaObjImplHandler = NULL;
		schemaDefCPlusMySqlSchemaObjIncludeHandler = NULL;
		schemaDefCPlusOracleSchemaObjMembersHandler = NULL;
		schemaDefCPlusOracleSchemaObjImplHandler = NULL;
		schemaDefCPlusOracleSchemaObjIncludeHandler = NULL;
		schemaDefCPlusPgSqlSchemaObjMembersHandler = NULL;
		schemaDefCPlusPgSqlSchemaObjImplHandler = NULL;
		schemaDefCPlusPgSqlSchemaObjIncludeHandler = NULL;
		schemaDefCPlusRamSchemaObjMembersHandler = NULL;
		schemaDefCPlusRamSchemaObjImplHandler = NULL;
		schemaDefCPlusRamSchemaObjIncludeHandler = NULL;
		schemaDefCPlusXMsgSchemaIncludeHandler = NULL;
		schemaDefCPlusXMsgSchemaFormattersHandler = NULL;
		schemaDefCPlusXMsgClientSchemaIncludeHandler = NULL;
		schemaDefCPlusXMsgClientSchemaBodyHandler = NULL;
		schemaDefCPlusXMsgRqstSchemaBodyHandler = NULL;
		schemaDefCPlusXMsgRqstSchemaIncludeHandler = NULL;
		schemaDefCPlusXMsgRqstSchemaWireParsersHandler = NULL;
		schemaDefCPlusXMsgRqstSchemaXsdSpecHandler = NULL;
		schemaDefCPlusXMsgRqstSchemaXsdElementListHandler = NULL;
		schemaDefCPlusXmsgRspnSchemaBodyHandler = NULL;
		schemaDefCPlusXMsgRspnSchemaIncludeHandler = NULL;
		schemaDefCPlusXMsgRspnSchemaWireParsersHandler = NULL;
		schemaDefCPlusXMsgRspnSchemaXsdElementListHandler = NULL;
		schemaDefCPlusXMsgRspnSchemaXsdSpecHandler = NULL;
		schemaDefHPlusSchemaObjIncludeHandler = NULL;
		schemaDefHPlusSchemaObjInterfaceHandler = NULL;
		schemaDefHPlusSchemaObjMembersHandler = NULL;
		schemaDefHPlusSchemaObjImplementationHandler = NULL;
		schemaDefHPlusDb2LUWSchemaObjMembersHandler = NULL;
		schemaDefHPlusDb2LUWSchemaObjImplHandler = NULL;
		schemaDefHPlusDb2LUWSchemaObjIncludeHandler = NULL;
		schemaDefHPlusMSSqlSchemaObjMembersHandler = NULL;
		schemaDefHPlusMSSqlSchemaObjImplHandler = NULL;
		schemaDefHPlusMSSqlSchemaObjIncludeHandler = NULL;
		schemaDefHPlusMySqlSchemaObjMembersHandler = NULL;
		schemaDefHPlusMySqlSchemaObjImplHandler = NULL;
		schemaDefHPlusMySqlSchemaObjIncludeHandler = NULL;
		schemaDefHPlusOracleSchemaObjMembersHandler = NULL;
		schemaDefHPlusOracleSchemaObjImplHandler = NULL;
		schemaDefHPlusOracleSchemaObjIncludeHandler = NULL;
		schemaDefHPlusPgSqlSchemaObjMembersHandler = NULL;
		schemaDefHPlusPgSqlSchemaObjImplHandler = NULL;
		schemaDefHPlusPgSqlSchemaObjIncludeHandler = NULL;
		schemaDefHPlusRamSchemaObjMembersHandler = NULL;
		schemaDefHPlusRamSchemaObjImplHandler = NULL;
		schemaDefHPlusRamSchemaObjIncludeHandler = NULL;
		schemaDefHPlusXMsgSchemaIncludeHandler = NULL;
		schemaDefHPlusXMsgSchemaFormattersHandler = NULL;
		schemaDefHPlusXMsgClientSchemaIncludeHandler = NULL;
		schemaDefHPlusXMsgClientSchemaBodyHandler = NULL;
		schemaDefHPlusXMsgRqstSchemaBodyHandler = NULL;
		schemaDefHPlusXMsgRqstSchemaIncludeHandler = NULL;
		schemaDefHPlusXMsgRqstSchemaWireParsersHandler = NULL;
		schemaDefHPlusXMsgRqstSchemaXsdSpecHandler = NULL;
		schemaDefHPlusXMsgRqstSchemaXsdElementListHandler = NULL;
		schemaDefHPlusXMsgRspnSchemaBodyHandler = NULL;
		schemaDefHPlusXMsgRspnSchemaIncludeHandler = NULL;
		schemaDefHPlusXMsgRspnSchemaWireParsersHandler = NULL;
		schemaDefHPlusXMsgRspnSchemaXsdElementListHandler = NULL;
		schemaDefHPlusXMsgRspnSchemaXsdSpecHandler = NULL;
		schemaDefCSharpSchemaObjUsingHandler = NULL;
		schemaDefCSharpSchemaObjInterfaceHandler = NULL;
		schemaDefCSharpSchemaObjMembersHandler = NULL;
		schemaDefCSharpSchemaObjImplementationHandler = NULL;
		schemaDefCSharpDb2LUWSchemaObjMembersHandler = NULL;
		schemaDefCSharpDb2LUWSchemaObjImplHandler = NULL;
		schemaDefCSharpDb2LUWSchemaObjUsingHandler = NULL;
		schemaDefCSharpMSSqlSchemaObjMembersHandler = NULL;
		schemaDefCSharpMSSqlSchemaObjImplHandler = NULL;
		schemaDefCSharpMSSqlSchemaObjUsingHandler = NULL;
		schemaDefCSharpMySqlSchemaObjMembersHandler = NULL;
		schemaDefCSharpMySqlSchemaObjImplHandler = NULL;
		schemaDefCSharpMySqlSchemaObjUsingHandler = NULL;
		schemaDefCSharpOracleSchemaObjMembersHandler = NULL;
		schemaDefCSharpOracleSchemaObjImplHandler = NULL;
		schemaDefCSharpOracleSchemaObjUsingHandler = NULL;
		schemaDefCSharpPgSqlSchemaObjMembersHandler = NULL;
		schemaDefCSharpPgSqlSchemaObjImplHandler = NULL;
		schemaDefCSharpPgSqlSchemaObjUsingHandler = NULL;
		schemaDefCSharpRamSchemaObjMembersHandler = NULL;
		schemaDefCSharpRamSchemaObjImplHandler = NULL;
		schemaDefCSharpRamSchemaObjUsingHandler = NULL;
		schemaDefCSharpXMsgSchemaUsingHandler = NULL;
		schemaDefCSharpXMsgSchemaFormattersHandler = NULL;
		schemaDefCSharpXMsgClientSchemaUsingHandler = NULL;
		schemaDefCSharpXMsgClientSchemaBodyHandler = NULL;
		schemaDefCSharpXMsgRqstSchemaBodyHandler = NULL;
		schemaDefCSharpXMsgRqstSchemaUsingHandler = NULL;
		schemaDefCSharpXMsgRqstSchemaWireParsersHandler = NULL;
		schemaDefCSharpXMsgRqstSchemaXsdSpecHandler = NULL;
		schemaDefCSharpXMsgRqstSchemaXsdElementListHandler = NULL;
		schemaDefCSharpXMsgRspnSchemaBodyHandler = NULL;
		schemaDefCSharpXMsgRspnSchemaUsingHandler = NULL;
		schemaDefCSharpXMsgRspnSchemaWireParsersHandler = NULL;
		schemaDefCSharpXMsgRspnSchemaXsdElementListHandler = NULL;
		schemaDefCSharpXMsgRspnSchemaXsdSpecHandler = NULL;
		schemaRefHandler = NULL;
		scopeHandler = NULL;
		secAppHandler = NULL;
		secDeviceHandler = NULL;
		secFormHandler = NULL;
		secGroupHandler = NULL;
		secGroupFormHandler = NULL;
		secGrpIncHandler = NULL;
		secGrpMembHandler = NULL;
		secSessionHandler = NULL;
		secUserHandler = NULL;
		serverListFuncHandler = NULL;
		serverMethodHandler = NULL;
		serverObjFuncHandler = NULL;
		serverProcHandler = NULL;
		serviceHandler = NULL;
		serviceTypeHandler = NULL;
		stringColHandler = NULL;
		stringDefHandler = NULL;
		stringTypeHandler = NULL;
		subProjectHandler = NULL;
		sysClusterHandler = NULL;
		tSecGroupHandler = NULL;
		tSecGrpIncHandler = NULL;
		tSecGrpMembHandler = NULL;
		tZDateColHandler = NULL;
		tZDateDefHandler = NULL;
		tZDateTypeHandler = NULL;
		tZTimeColHandler = NULL;
		tZTimeDefHandler = NULL;
		tZTimeTypeHandler = NULL;
		tZTimestampColHandler = NULL;
		tZTimestampDefHandler = NULL;
		tZTimestampTypeHandler = NULL;
		tableHandler = NULL;
		tableCafeObjMembersHandler = NULL;
		tableCafeObjInterfaceHandler = NULL;
		tableCafeObjImportHandler = NULL;
		tableCafeObjImplementationHandler = NULL;
		tableCafeEditObjMembersHandler = NULL;
		tableCafeEditObjInterfaceHandler = NULL;
		tableCafeEditObjImportHandler = NULL;
		tableCafeEditObjImplementationHandler = NULL;
		tableCafeTableImportHandler = NULL;
		tableCafeTableMembersHandler = NULL;
		tableCafeTableInterfaceHandler = NULL;
		tableCafeTableImplementationHandler = NULL;
		tableCafeTableObjImportHandler = NULL;
		tableCafeTableObjMembersHandler = NULL;
		tableCafeTableObjInterfaceHandler = NULL;
		tableCafeTableObjImplementationHandler = NULL;
		tableCafeDb2LUWTableImportHandler = NULL;
		tableCafeDb2LUWTableMembersHandler = NULL;
		tableCafeDb2LUWTableImplementationHandler = NULL;
		tableCafeMSSqlTableImportHandler = NULL;
		tableCafeMSSqlTableMembersHandler = NULL;
		tableCafeMSSqlTableImplementationHandler = NULL;
		tableCafeMySqlTableImportHandler = NULL;
		tableCafeMySqlTableMembersHandler = NULL;
		tableCafeMySqlTableImplementationHandler = NULL;
		tableCafeOracleTableImportHandler = NULL;
		tableCafeOracleTableMembersHandler = NULL;
		tableCafeOracleTableImplementationHandler = NULL;
		tableCafePgSqlTableImportHandler = NULL;
		tableCafePgSqlTableMembersHandler = NULL;
		tableCafePgSqlTableImplementationHandler = NULL;
		tableCafeRamTableImportHandler = NULL;
		tableCafeRamTableMembersHandler = NULL;
		tableCafeRamTableImplementationHandler = NULL;
		tableCafeSaxLoaderImportHandler = NULL;
		tableCafeSaxLoaderStartElementHandler = NULL;
		tableCafeSaxLoaderEndElementHandler = NULL;
		tableCafeXMsgTableImportHandler = NULL;
		tableCafeXMsgTableformattersHandler = NULL;
		tableCafeXMsgRqstTableImportHandler = NULL;
		tableCafeXMsgRspnTableImportHandler = NULL;
		tableCafeXMsgClientTableImportHandler = NULL;
		tableCafeXMsgRqstTableBodyHandler = NULL;
		tableCafeXMsgRspnTableBodyHandler = NULL;
		tableCafeXMsgClientTableBodyHandler = NULL;
		tableCPlusObjMembersHandler = NULL;
		tableCPlusObjInterfaceHandler = NULL;
		tableCPlusObjIncludeHandler = NULL;
		tableCPlusObjImplementationHandler = NULL;
		tableCPlusEditObjMembersHandler = NULL;
		tableCPlusEditObjInteraceHandler = NULL;
		tableCPlusEditObjIncludeHandler = NULL;
		tableCPlusEditObjImplementationHandler = NULL;
		tableCPlusTableIncludeHandler = NULL;
		tableCPlusTableMembersHandler = NULL;
		tableCPlusTableInterfaceHandler = NULL;
		tableCPlusTableImplementationHandler = NULL;
		tableCPlusTableObjIncludeHandler = NULL;
		tableCPlusTableObjMembersHandler = NULL;
		tableCPlusTableObjInterfaceHandler = NULL;
		tableCPlusTableObjImplementationHandler = NULL;
		tableCPlusDb2LUWTableIncludeHandler = NULL;
		tableCPlusDb2LUWTableMembersHandler = NULL;
		tableCPlusDb2LUWTableImplementationHandler = NULL;
		tableCPlusMSSqlTableIncludeHandler = NULL;
		tableCPlusMSSqlTableMembersHandler = NULL;
		tableCPlusMSSqlTableImplementationHandler = NULL;
		tableCPlusMySqlTableIncludeHandler = NULL;
		tableCPlusMySqlTableMembersHandler = NULL;
		tableCPlusMySqlTableImplementationHandler = NULL;
		tableCPlusOracleTableIncludeHandler = NULL;
		tableCPlusOracleTableMembersHandler = NULL;
		tableCPlusOracleTableImplementationHandler = NULL;
		tableCPlusPgSqlTableMembersHandler = NULL;
		tableCPlusPgSqlTableImplementationHandler = NULL;
		tableCPlusRamTableIncludeHandler = NULL;
		tableCPlusRamTableMembersHandler = NULL;
		tableCPlusRamTableImplementationHandler = NULL;
		tableCPlusSaxLoaderIncludeHandler = NULL;
		tableCPlusSaxLoaderStartElementHandler = NULL;
		tableCPlusSaxLoaderEndElementHandler = NULL;
		tableCPlusXMsgTableIncludeHandler = NULL;
		tableCPlusXMsgTableFormattersHandler = NULL;
		tableCPlusXMsgRqstTableIncludeHandler = NULL;
		tableCPlusXMsgRspnTableIncludeHandler = NULL;
		tableCPlusXMsgClientTableIncludeHandler = NULL;
		tableCPlusXMsgRqstTableBodyHandler = NULL;
		tableCPlusXMsgRspnTableBodyHandler = NULL;
		tableCPlusXMsgClientTableBodyHandler = NULL;
		tableHPlusObjMembersHandler = NULL;
		tableHPlusObjInterfaceHandler = NULL;
		tableHPlusObjIncludeHandler = NULL;
		tableHPlusObjImplemntationHandler = NULL;
		tableHPlusEditObjMembersHandler = NULL;
		tableHPlusEditObjInterfaceHandler = NULL;
		tableHPlusEditObjIncludeHandler = NULL;
		tableHPlusEditObjImplementationHandler = NULL;
		tableHPlusTableIncludeHandler = NULL;
		tableHPlusTableMembersHandler = NULL;
		tableHPlusTableInterfaceHandler = NULL;
		tableHPlusTableImplementationHandler = NULL;
		tableHPlusTableObjIncludeHandler = NULL;
		tableHPlusTableObjMembersHandler = NULL;
		tableHPlusTableObjInterfaceHandler = NULL;
		tableHPlusTableObjImplementationHandler = NULL;
		tableHPlusDb2LUWTableIncludeHandler = NULL;
		tableHPlusDb2LUWTableMembersHandler = NULL;
		tableHPlusDb2LUWTableImplementationHandler = NULL;
		tableHPlusMSSqlTableIncludeHandler = NULL;
		tableHPlusMSSqlTableMembersHandler = NULL;
		tableHPlusMSSqlTableImplementationHandler = NULL;
		tableHPlusMySqlTableIncludeHandler = NULL;
		tableHPlusMySqlTableMembersHandler = NULL;
		tableHPlusMySqlTableImplementationHandler = NULL;
		tableHPlusOracleTableIncludeHandler = NULL;
		tableHPlusOracleTableMembersHandler = NULL;
		tableHPlusOracleTableImplementationHandler = NULL;
		tableHPlusPgSqlTableIncludeHandler = NULL;
		tableHPlusPgSqlTableMembersHandler = NULL;
		tableHPlusPgSqlTableImplementationHandler = NULL;
		tableHPlusRamTableIncludeHandler = NULL;
		tableHPlusRamTableMembersHandler = NULL;
		tableHPlusRamTableImplementationHandler = NULL;
		tableHPlusSaxLoaderIncludeHandler = NULL;
		tableHPlusSaxLoaderStartElementHandler = NULL;
		tableHPlusSaxLoaderEndElementHandler = NULL;
		tableHPlusXMsgTableIncludeHandler = NULL;
		tableHPlusXMsgTableFormattersHandler = NULL;
		tableHPlusXMsgRqstTableIncludeHandler = NULL;
		tableHPlusXMsgRspnTableIncludeHandler = NULL;
		tableHPlusXMsgClientTableIncludeHandler = NULL;
		tableHPlusXMsgRqstTableBodyHandler = NULL;
		tableHPlusXMsgRspnTableBodyHandler = NULL;
		tableHPlusXMsgClientTableBodyHandler = NULL;
		tableCSharpObjMembersHandler = NULL;
		tableCSharpObjInterfaceHandler = NULL;
		tableCSharpObjUsingHandler = NULL;
		tableCSharpObjImplementationHandler = NULL;
		tableCSharpEditObjMembersHandler = NULL;
		tableCSharpEditObjInterfaceHandler = NULL;
		tableCSharpEditObjUsingHandler = NULL;
		tableCSharpEditObjImplementationHandler = NULL;
		tableCSharpTableUsingHandler = NULL;
		tableCSharpTableMembersHandler = NULL;
		tableCSharpTableInterfaceHandler = NULL;
		tableCSharpTableImplementationHandler = NULL;
		tableCSharpTableObjUsingHandler = NULL;
		tableCSharpTableObjMembersHandler = NULL;
		tableCSharpTableObjInterfaceHandler = NULL;
		tableCSharpTableObjImplementationHandler = NULL;
		tableCSharpDb2LUWTableUsingHandler = NULL;
		tableCSharpDb2LUWTableMembersHandler = NULL;
		tableCSharpDb2LUWTableImplementationHandler = NULL;
		tableCSharpMSSqlTableUsingHandler = NULL;
		tableCSharpMSSqlTableMembersHandler = NULL;
		tableCSharpMSSqlTableImplementationHandler = NULL;
		tableCSharpMySqlTableUsingHandler = NULL;
		tableCSharpMySqlTableMembersHandler = NULL;
		tableCSharpMySqlTableImplementationHandler = NULL;
		tableCSharpOracleTableUsingHandler = NULL;
		tableCSharpOracleTableMembersHandler = NULL;
		tableCSharpOracleTableImplementationHandler = NULL;
		tableCSharpPgSqlTableUsingHandler = NULL;
		tableCSharpPgSqlTableMembersHandler = NULL;
		tableCSharpPgSqlTableImplementationHandler = NULL;
		tableCSharpRamTableUsingHandler = NULL;
		tableCSharpRamTableMembersHandler = NULL;
		tableCSharpRamTableImplementationHandler = NULL;
		tableCSharpSaxLoaderUsingHandler = NULL;
		tableCSharpSaxLoaderStartElementHandler = NULL;
		tableCSharpSaxLoaderEndElementHandler = NULL;
		tableCSharpXMsgTableUsingHandler = NULL;
		tableCSharpXMsgTableFormattersHandler = NULL;
		tableCSharpXMsgRqstTableUsingHandler = NULL;
		tableCSharpXMsgRspnTableUsingHandler = NULL;
		tableCSharpXMsgClientTableUsingHandler = NULL;
		tableCSharpXMsgRqstTableBodyHandler = NULL;
		tableCSharpXMsgRspnTableBodyHandler = NULL;
		tableCSharpXMsgClientTableBodyHandler = NULL;
		tableColHandler = NULL;
		tenantHandler = NULL;
		textColHandler = NULL;
		textDefHandler = NULL;
		textTypeHandler = NULL;
		timeColHandler = NULL;
		timeDefHandler = NULL;
		timeTypeHandler = NULL;
		timestampColHandler = NULL;
		timestampDefHandler = NULL;
		timestampTypeHandler = NULL;
		tldHandler = NULL;
		tokenColHandler = NULL;
		tokenDefHandler = NULL;
		tokenTypeHandler = NULL;
		topDomainHandler = NULL;
		topProjectHandler = NULL;
		uInt16ColHandler = NULL;
		uInt16DefHandler = NULL;
		uInt16TypeHandler = NULL;
		uInt32ColHandler = NULL;
		uInt32DefHandler = NULL;
		uInt32TypeHandler = NULL;
		uInt64ColHandler = NULL;
		uInt64DefHandler = NULL;
		uInt64TypeHandler = NULL;
		uRLProtocolHandler = NULL;
		uuidColHandler = NULL;
		uuidDefHandler = NULL;
		uuidGenHandler = NULL;
		uuidTypeHandler = NULL;
		valueHandler = NULL;
		useCluster = NULL;
		useTenant = NULL;
		setRootElementHandler( getSaxRootHandler() );
		verifyGrammarInstallation();
		initParser();
	}

	CFBamSaxLoader::~CFBamSaxLoader() {
		if( atomHandler != NULL ) {
			delete atomHandler;
			atomHandler = NULL;
		}
		if( blobColHandler != NULL ) {
			delete blobColHandler;
			blobColHandler = NULL;
		}
		if( blobDefHandler != NULL ) {
			delete blobDefHandler;
			blobDefHandler = NULL;
		}
		if( blobTypeHandler != NULL ) {
			delete blobTypeHandler;
			blobTypeHandler = NULL;
		}
		if( boolColHandler != NULL ) {
			delete boolColHandler;
			boolColHandler = NULL;
		}
		if( boolDefHandler != NULL ) {
			delete boolDefHandler;
			boolDefHandler = NULL;
		}
		if( boolTypeHandler != NULL ) {
			delete boolTypeHandler;
			boolTypeHandler = NULL;
		}
		if( chainHandler != NULL ) {
			delete chainHandler;
			chainHandler = NULL;
		}
		if( clearDepHandler != NULL ) {
			delete clearDepHandler;
			clearDepHandler = NULL;
		}
		if( clearSubDep1Handler != NULL ) {
			delete clearSubDep1Handler;
			clearSubDep1Handler = NULL;
		}
		if( clearSubDep2Handler != NULL ) {
			delete clearSubDep2Handler;
			clearSubDep2Handler = NULL;
		}
		if( clearSubDep3Handler != NULL ) {
			delete clearSubDep3Handler;
			clearSubDep3Handler = NULL;
		}
		if( clearTopDepHandler != NULL ) {
			delete clearTopDepHandler;
			clearTopDepHandler = NULL;
		}
		if( clusterHandler != NULL ) {
			delete clusterHandler;
			clusterHandler = NULL;
		}
		if( dateColHandler != NULL ) {
			delete dateColHandler;
			dateColHandler = NULL;
		}
		if( dateDefHandler != NULL ) {
			delete dateDefHandler;
			dateDefHandler = NULL;
		}
		if( dateTypeHandler != NULL ) {
			delete dateTypeHandler;
			dateTypeHandler = NULL;
		}
		if( delDepHandler != NULL ) {
			delete delDepHandler;
			delDepHandler = NULL;
		}
		if( delSubDep1Handler != NULL ) {
			delete delSubDep1Handler;
			delSubDep1Handler = NULL;
		}
		if( delSubDep2Handler != NULL ) {
			delete delSubDep2Handler;
			delSubDep2Handler = NULL;
		}
		if( delSubDep3Handler != NULL ) {
			delete delSubDep3Handler;
			delSubDep3Handler = NULL;
		}
		if( delTopDepHandler != NULL ) {
			delete delTopDepHandler;
			delTopDepHandler = NULL;
		}
		if( doubleColHandler != NULL ) {
			delete doubleColHandler;
			doubleColHandler = NULL;
		}
		if( doubleDefHandler != NULL ) {
			delete doubleDefHandler;
			doubleDefHandler = NULL;
		}
		if( doubleTypeHandler != NULL ) {
			delete doubleTypeHandler;
			doubleTypeHandler = NULL;
		}
		if( enumDefHandler != NULL ) {
			delete enumDefHandler;
			enumDefHandler = NULL;
		}
		if( enumTagHandler != NULL ) {
			delete enumTagHandler;
			enumTagHandler = NULL;
		}
		if( enumTypeHandler != NULL ) {
			delete enumTypeHandler;
			enumTypeHandler = NULL;
		}
		if( floatColHandler != NULL ) {
			delete floatColHandler;
			floatColHandler = NULL;
		}
		if( floatDefHandler != NULL ) {
			delete floatDefHandler;
			floatDefHandler = NULL;
		}
		if( floatTypeHandler != NULL ) {
			delete floatTypeHandler;
			floatTypeHandler = NULL;
		}
		if( hostNodeHandler != NULL ) {
			delete hostNodeHandler;
			hostNodeHandler = NULL;
		}
		if( iSOCcyHandler != NULL ) {
			delete iSOCcyHandler;
			iSOCcyHandler = NULL;
		}
		if( iSOCtryHandler != NULL ) {
			delete iSOCtryHandler;
			iSOCtryHandler = NULL;
		}
		if( iSOCtryCcyHandler != NULL ) {
			delete iSOCtryCcyHandler;
			iSOCtryCcyHandler = NULL;
		}
		if( iSOCtryLangHandler != NULL ) {
			delete iSOCtryLangHandler;
			iSOCtryLangHandler = NULL;
		}
		if( iSOLangHandler != NULL ) {
			delete iSOLangHandler;
			iSOLangHandler = NULL;
		}
		if( iSOTZoneHandler != NULL ) {
			delete iSOTZoneHandler;
			iSOTZoneHandler = NULL;
		}
		if( id16GenHandler != NULL ) {
			delete id16GenHandler;
			id16GenHandler = NULL;
		}
		if( id32GenHandler != NULL ) {
			delete id32GenHandler;
			id32GenHandler = NULL;
		}
		if( id64GenHandler != NULL ) {
			delete id64GenHandler;
			id64GenHandler = NULL;
		}
		if( indexHandler != NULL ) {
			delete indexHandler;
			indexHandler = NULL;
		}
		if( indexColHandler != NULL ) {
			delete indexColHandler;
			indexColHandler = NULL;
		}
		if( int16ColHandler != NULL ) {
			delete int16ColHandler;
			int16ColHandler = NULL;
		}
		if( int16DefHandler != NULL ) {
			delete int16DefHandler;
			int16DefHandler = NULL;
		}
		if( int16TypeHandler != NULL ) {
			delete int16TypeHandler;
			int16TypeHandler = NULL;
		}
		if( int32ColHandler != NULL ) {
			delete int32ColHandler;
			int32ColHandler = NULL;
		}
		if( int32DefHandler != NULL ) {
			delete int32DefHandler;
			int32DefHandler = NULL;
		}
		if( int32TypeHandler != NULL ) {
			delete int32TypeHandler;
			int32TypeHandler = NULL;
		}
		if( int64ColHandler != NULL ) {
			delete int64ColHandler;
			int64ColHandler = NULL;
		}
		if( int64DefHandler != NULL ) {
			delete int64DefHandler;
			int64DefHandler = NULL;
		}
		if( int64TypeHandler != NULL ) {
			delete int64TypeHandler;
			int64TypeHandler = NULL;
		}
		if( licenseHandler != NULL ) {
			delete licenseHandler;
			licenseHandler = NULL;
		}
		if( majorVersionHandler != NULL ) {
			delete majorVersionHandler;
			majorVersionHandler = NULL;
		}
		if( mimeTypeHandler != NULL ) {
			delete mimeTypeHandler;
			mimeTypeHandler = NULL;
		}
		if( minorVersionHandler != NULL ) {
			delete minorVersionHandler;
			minorVersionHandler = NULL;
		}
		if( nmTokenColHandler != NULL ) {
			delete nmTokenColHandler;
			nmTokenColHandler = NULL;
		}
		if( nmTokenDefHandler != NULL ) {
			delete nmTokenDefHandler;
			nmTokenDefHandler = NULL;
		}
		if( nmTokenTypeHandler != NULL ) {
			delete nmTokenTypeHandler;
			nmTokenTypeHandler = NULL;
		}
		if( nmTokensColHandler != NULL ) {
			delete nmTokensColHandler;
			nmTokensColHandler = NULL;
		}
		if( nmTokensDefHandler != NULL ) {
			delete nmTokensDefHandler;
			nmTokensDefHandler = NULL;
		}
		if( nmTokensTypeHandler != NULL ) {
			delete nmTokensTypeHandler;
			nmTokensTypeHandler = NULL;
		}
		if( numberColHandler != NULL ) {
			delete numberColHandler;
			numberColHandler = NULL;
		}
		if( numberDefHandler != NULL ) {
			delete numberDefHandler;
			numberDefHandler = NULL;
		}
		if( numberTypeHandler != NULL ) {
			delete numberTypeHandler;
			numberTypeHandler = NULL;
		}
		if( paramHandler != NULL ) {
			delete paramHandler;
			paramHandler = NULL;
		}
		if( popDepHandler != NULL ) {
			delete popDepHandler;
			popDepHandler = NULL;
		}
		if( popSubDep1Handler != NULL ) {
			delete popSubDep1Handler;
			popSubDep1Handler = NULL;
		}
		if( popSubDep2Handler != NULL ) {
			delete popSubDep2Handler;
			popSubDep2Handler = NULL;
		}
		if( popSubDep3Handler != NULL ) {
			delete popSubDep3Handler;
			popSubDep3Handler = NULL;
		}
		if( popTopDepHandler != NULL ) {
			delete popTopDepHandler;
			popTopDepHandler = NULL;
		}
		if( relationHandler != NULL ) {
			delete relationHandler;
			relationHandler = NULL;
		}
		if( relationColHandler != NULL ) {
			delete relationColHandler;
			relationColHandler = NULL;
		}
		if( schemaDefCafeSchemaObjImportHandler != NULL ) {
			delete schemaDefCafeSchemaObjImportHandler;
			schemaDefCafeSchemaObjImportHandler = NULL;
		}
		if( schemaDefCafeSchemaObjInterfaceHandler != NULL ) {
			delete schemaDefCafeSchemaObjInterfaceHandler;
			schemaDefCafeSchemaObjInterfaceHandler = NULL;
		}
		if( schemaDefCafeSchemaObjMembersHandler != NULL ) {
			delete schemaDefCafeSchemaObjMembersHandler;
			schemaDefCafeSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCafeSchemaObjImplementationHandler != NULL ) {
			delete schemaDefCafeSchemaObjImplementationHandler;
			schemaDefCafeSchemaObjImplementationHandler = NULL;
		}
		if( schemaDefCafeDb2LUWSchemaObjMembersHandler != NULL ) {
			delete schemaDefCafeDb2LUWSchemaObjMembersHandler;
			schemaDefCafeDb2LUWSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCafeDb2LUWSchemaObjImplHandler != NULL ) {
			delete schemaDefCafeDb2LUWSchemaObjImplHandler;
			schemaDefCafeDb2LUWSchemaObjImplHandler = NULL;
		}
		if( schemaDefCafeDb2LUWSchemaObjImportHandler != NULL ) {
			delete schemaDefCafeDb2LUWSchemaObjImportHandler;
			schemaDefCafeDb2LUWSchemaObjImportHandler = NULL;
		}
		if( schemaDefCafeMSSqlSchemaObjMembersHandler != NULL ) {
			delete schemaDefCafeMSSqlSchemaObjMembersHandler;
			schemaDefCafeMSSqlSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCafeMSSqlSchemaObjImplHandler != NULL ) {
			delete schemaDefCafeMSSqlSchemaObjImplHandler;
			schemaDefCafeMSSqlSchemaObjImplHandler = NULL;
		}
		if( schemaDefCafeMSSqlSchemaObjImportHandler != NULL ) {
			delete schemaDefCafeMSSqlSchemaObjImportHandler;
			schemaDefCafeMSSqlSchemaObjImportHandler = NULL;
		}
		if( schemaDefCafeMySqlSchemaObjMembersHandler != NULL ) {
			delete schemaDefCafeMySqlSchemaObjMembersHandler;
			schemaDefCafeMySqlSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCafeMySqlSchemaObjImplHandler != NULL ) {
			delete schemaDefCafeMySqlSchemaObjImplHandler;
			schemaDefCafeMySqlSchemaObjImplHandler = NULL;
		}
		if( schemaDefCafeMySqlSchemaObjImportHandler != NULL ) {
			delete schemaDefCafeMySqlSchemaObjImportHandler;
			schemaDefCafeMySqlSchemaObjImportHandler = NULL;
		}
		if( schemaDefCafeOracleSchemaObjMembersHandler != NULL ) {
			delete schemaDefCafeOracleSchemaObjMembersHandler;
			schemaDefCafeOracleSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCafeOracleSchemaObjImplHandler != NULL ) {
			delete schemaDefCafeOracleSchemaObjImplHandler;
			schemaDefCafeOracleSchemaObjImplHandler = NULL;
		}
		if( schemaDefCafeOracleSchemaObjImportHandler != NULL ) {
			delete schemaDefCafeOracleSchemaObjImportHandler;
			schemaDefCafeOracleSchemaObjImportHandler = NULL;
		}
		if( schemaDefCafePgSqlSchemaObjMembersHandler != NULL ) {
			delete schemaDefCafePgSqlSchemaObjMembersHandler;
			schemaDefCafePgSqlSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCafePgSqlSchemaObjImplHandler != NULL ) {
			delete schemaDefCafePgSqlSchemaObjImplHandler;
			schemaDefCafePgSqlSchemaObjImplHandler = NULL;
		}
		if( schemaDefCafePgSqlSchemaObjImportHandler != NULL ) {
			delete schemaDefCafePgSqlSchemaObjImportHandler;
			schemaDefCafePgSqlSchemaObjImportHandler = NULL;
		}
		if( schemaDefCafeRamSchemaObjMembersHandler != NULL ) {
			delete schemaDefCafeRamSchemaObjMembersHandler;
			schemaDefCafeRamSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCafeRamSchemaObjImplHandler != NULL ) {
			delete schemaDefCafeRamSchemaObjImplHandler;
			schemaDefCafeRamSchemaObjImplHandler = NULL;
		}
		if( schemaDefCafeRamSchemaObjImportHandler != NULL ) {
			delete schemaDefCafeRamSchemaObjImportHandler;
			schemaDefCafeRamSchemaObjImportHandler = NULL;
		}
		if( schemaDefCafeXMsgSchemaImportHandler != NULL ) {
			delete schemaDefCafeXMsgSchemaImportHandler;
			schemaDefCafeXMsgSchemaImportHandler = NULL;
		}
		if( schemaDefCafeXMsgSchemaFormattersHandler != NULL ) {
			delete schemaDefCafeXMsgSchemaFormattersHandler;
			schemaDefCafeXMsgSchemaFormattersHandler = NULL;
		}
		if( schemaDefCafeXMsgClientSchemaImportHandler != NULL ) {
			delete schemaDefCafeXMsgClientSchemaImportHandler;
			schemaDefCafeXMsgClientSchemaImportHandler = NULL;
		}
		if( schemaDefCafeXMsgClientSchemaBodyHandler != NULL ) {
			delete schemaDefCafeXMsgClientSchemaBodyHandler;
			schemaDefCafeXMsgClientSchemaBodyHandler = NULL;
		}
		if( schemaDefCafeXMsgRqstSchemaBodyHandler != NULL ) {
			delete schemaDefCafeXMsgRqstSchemaBodyHandler;
			schemaDefCafeXMsgRqstSchemaBodyHandler = NULL;
		}
		if( schemaDefCafeXMsgRqstSchemaImportHandler != NULL ) {
			delete schemaDefCafeXMsgRqstSchemaImportHandler;
			schemaDefCafeXMsgRqstSchemaImportHandler = NULL;
		}
		if( schemaDefCafeXMsgRqstSchemaWireParsersHandler != NULL ) {
			delete schemaDefCafeXMsgRqstSchemaWireParsersHandler;
			schemaDefCafeXMsgRqstSchemaWireParsersHandler = NULL;
		}
		if( schemaDefCafeXMsgRqstSchemaXsdSpecHandler != NULL ) {
			delete schemaDefCafeXMsgRqstSchemaXsdSpecHandler;
			schemaDefCafeXMsgRqstSchemaXsdSpecHandler = NULL;
		}
		if( schemaDefCafeSchemaXsdElementListHandler != NULL ) {
			delete schemaDefCafeSchemaXsdElementListHandler;
			schemaDefCafeSchemaXsdElementListHandler = NULL;
		}
		if( schemaDefCafeXMsgRspnSchemaBodyHandler != NULL ) {
			delete schemaDefCafeXMsgRspnSchemaBodyHandler;
			schemaDefCafeXMsgRspnSchemaBodyHandler = NULL;
		}
		if( schemaDefCafeXMsgRspnSchemaImportHandler != NULL ) {
			delete schemaDefCafeXMsgRspnSchemaImportHandler;
			schemaDefCafeXMsgRspnSchemaImportHandler = NULL;
		}
		if( schemaDefCafeXMsgRspnSchemaWireParsersHandler != NULL ) {
			delete schemaDefCafeXMsgRspnSchemaWireParsersHandler;
			schemaDefCafeXMsgRspnSchemaWireParsersHandler = NULL;
		}
		if( schemaDefCafeXMsgRspnSchemaXsdElementListHandler != NULL ) {
			delete schemaDefCafeXMsgRspnSchemaXsdElementListHandler;
			schemaDefCafeXMsgRspnSchemaXsdElementListHandler = NULL;
		}
		if( schemaDefCafeXMsgRspnSchemaXsdSpecHandler != NULL ) {
			delete schemaDefCafeXMsgRspnSchemaXsdSpecHandler;
			schemaDefCafeXMsgRspnSchemaXsdSpecHandler = NULL;
		}
		if( schemaDefCPlusSchemaObjIncludeHandler != NULL ) {
			delete schemaDefCPlusSchemaObjIncludeHandler;
			schemaDefCPlusSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefCPlusSchemaObjInterfaceHandler != NULL ) {
			delete schemaDefCPlusSchemaObjInterfaceHandler;
			schemaDefCPlusSchemaObjInterfaceHandler = NULL;
		}
		if( schemaDefCPlusSchemaObjMembersHandler != NULL ) {
			delete schemaDefCPlusSchemaObjMembersHandler;
			schemaDefCPlusSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCPlusSchemaObjImplementationHandler != NULL ) {
			delete schemaDefCPlusSchemaObjImplementationHandler;
			schemaDefCPlusSchemaObjImplementationHandler = NULL;
		}
		if( schemaDefCPlusDb2LUWSchemaObjMembersHandler != NULL ) {
			delete schemaDefCPlusDb2LUWSchemaObjMembersHandler;
			schemaDefCPlusDb2LUWSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCPlusDb2LUWSchemaObjImplHandler != NULL ) {
			delete schemaDefCPlusDb2LUWSchemaObjImplHandler;
			schemaDefCPlusDb2LUWSchemaObjImplHandler = NULL;
		}
		if( schemaDefCPlusDb2LUWSchemaObjIncludeHandler != NULL ) {
			delete schemaDefCPlusDb2LUWSchemaObjIncludeHandler;
			schemaDefCPlusDb2LUWSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefCPlusMSSqlSchemaObjMembersHandler != NULL ) {
			delete schemaDefCPlusMSSqlSchemaObjMembersHandler;
			schemaDefCPlusMSSqlSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCPlusMSSqlSchemaObjImplHandler != NULL ) {
			delete schemaDefCPlusMSSqlSchemaObjImplHandler;
			schemaDefCPlusMSSqlSchemaObjImplHandler = NULL;
		}
		if( schemaDefCPlusMSSqlSchemaObjIncludeHandler != NULL ) {
			delete schemaDefCPlusMSSqlSchemaObjIncludeHandler;
			schemaDefCPlusMSSqlSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefCPlusMySqlSchemaObjMembersHandler != NULL ) {
			delete schemaDefCPlusMySqlSchemaObjMembersHandler;
			schemaDefCPlusMySqlSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCPlusMySqlSchemaObjImplHandler != NULL ) {
			delete schemaDefCPlusMySqlSchemaObjImplHandler;
			schemaDefCPlusMySqlSchemaObjImplHandler = NULL;
		}
		if( schemaDefCPlusMySqlSchemaObjIncludeHandler != NULL ) {
			delete schemaDefCPlusMySqlSchemaObjIncludeHandler;
			schemaDefCPlusMySqlSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefCPlusOracleSchemaObjMembersHandler != NULL ) {
			delete schemaDefCPlusOracleSchemaObjMembersHandler;
			schemaDefCPlusOracleSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCPlusOracleSchemaObjImplHandler != NULL ) {
			delete schemaDefCPlusOracleSchemaObjImplHandler;
			schemaDefCPlusOracleSchemaObjImplHandler = NULL;
		}
		if( schemaDefCPlusOracleSchemaObjIncludeHandler != NULL ) {
			delete schemaDefCPlusOracleSchemaObjIncludeHandler;
			schemaDefCPlusOracleSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefCPlusPgSqlSchemaObjMembersHandler != NULL ) {
			delete schemaDefCPlusPgSqlSchemaObjMembersHandler;
			schemaDefCPlusPgSqlSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCPlusPgSqlSchemaObjImplHandler != NULL ) {
			delete schemaDefCPlusPgSqlSchemaObjImplHandler;
			schemaDefCPlusPgSqlSchemaObjImplHandler = NULL;
		}
		if( schemaDefCPlusPgSqlSchemaObjIncludeHandler != NULL ) {
			delete schemaDefCPlusPgSqlSchemaObjIncludeHandler;
			schemaDefCPlusPgSqlSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefCPlusRamSchemaObjMembersHandler != NULL ) {
			delete schemaDefCPlusRamSchemaObjMembersHandler;
			schemaDefCPlusRamSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCPlusRamSchemaObjImplHandler != NULL ) {
			delete schemaDefCPlusRamSchemaObjImplHandler;
			schemaDefCPlusRamSchemaObjImplHandler = NULL;
		}
		if( schemaDefCPlusRamSchemaObjIncludeHandler != NULL ) {
			delete schemaDefCPlusRamSchemaObjIncludeHandler;
			schemaDefCPlusRamSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefCPlusXMsgSchemaIncludeHandler != NULL ) {
			delete schemaDefCPlusXMsgSchemaIncludeHandler;
			schemaDefCPlusXMsgSchemaIncludeHandler = NULL;
		}
		if( schemaDefCPlusXMsgSchemaFormattersHandler != NULL ) {
			delete schemaDefCPlusXMsgSchemaFormattersHandler;
			schemaDefCPlusXMsgSchemaFormattersHandler = NULL;
		}
		if( schemaDefCPlusXMsgClientSchemaIncludeHandler != NULL ) {
			delete schemaDefCPlusXMsgClientSchemaIncludeHandler;
			schemaDefCPlusXMsgClientSchemaIncludeHandler = NULL;
		}
		if( schemaDefCPlusXMsgClientSchemaBodyHandler != NULL ) {
			delete schemaDefCPlusXMsgClientSchemaBodyHandler;
			schemaDefCPlusXMsgClientSchemaBodyHandler = NULL;
		}
		if( schemaDefCPlusXMsgRqstSchemaBodyHandler != NULL ) {
			delete schemaDefCPlusXMsgRqstSchemaBodyHandler;
			schemaDefCPlusXMsgRqstSchemaBodyHandler = NULL;
		}
		if( schemaDefCPlusXMsgRqstSchemaIncludeHandler != NULL ) {
			delete schemaDefCPlusXMsgRqstSchemaIncludeHandler;
			schemaDefCPlusXMsgRqstSchemaIncludeHandler = NULL;
		}
		if( schemaDefCPlusXMsgRqstSchemaWireParsersHandler != NULL ) {
			delete schemaDefCPlusXMsgRqstSchemaWireParsersHandler;
			schemaDefCPlusXMsgRqstSchemaWireParsersHandler = NULL;
		}
		if( schemaDefCPlusXMsgRqstSchemaXsdSpecHandler != NULL ) {
			delete schemaDefCPlusXMsgRqstSchemaXsdSpecHandler;
			schemaDefCPlusXMsgRqstSchemaXsdSpecHandler = NULL;
		}
		if( schemaDefCPlusXMsgRqstSchemaXsdElementListHandler != NULL ) {
			delete schemaDefCPlusXMsgRqstSchemaXsdElementListHandler;
			schemaDefCPlusXMsgRqstSchemaXsdElementListHandler = NULL;
		}
		if( schemaDefCPlusXmsgRspnSchemaBodyHandler != NULL ) {
			delete schemaDefCPlusXmsgRspnSchemaBodyHandler;
			schemaDefCPlusXmsgRspnSchemaBodyHandler = NULL;
		}
		if( schemaDefCPlusXMsgRspnSchemaIncludeHandler != NULL ) {
			delete schemaDefCPlusXMsgRspnSchemaIncludeHandler;
			schemaDefCPlusXMsgRspnSchemaIncludeHandler = NULL;
		}
		if( schemaDefCPlusXMsgRspnSchemaWireParsersHandler != NULL ) {
			delete schemaDefCPlusXMsgRspnSchemaWireParsersHandler;
			schemaDefCPlusXMsgRspnSchemaWireParsersHandler = NULL;
		}
		if( schemaDefCPlusXMsgRspnSchemaXsdElementListHandler != NULL ) {
			delete schemaDefCPlusXMsgRspnSchemaXsdElementListHandler;
			schemaDefCPlusXMsgRspnSchemaXsdElementListHandler = NULL;
		}
		if( schemaDefCPlusXMsgRspnSchemaXsdSpecHandler != NULL ) {
			delete schemaDefCPlusXMsgRspnSchemaXsdSpecHandler;
			schemaDefCPlusXMsgRspnSchemaXsdSpecHandler = NULL;
		}
		if( schemaDefHPlusSchemaObjIncludeHandler != NULL ) {
			delete schemaDefHPlusSchemaObjIncludeHandler;
			schemaDefHPlusSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefHPlusSchemaObjInterfaceHandler != NULL ) {
			delete schemaDefHPlusSchemaObjInterfaceHandler;
			schemaDefHPlusSchemaObjInterfaceHandler = NULL;
		}
		if( schemaDefHPlusSchemaObjMembersHandler != NULL ) {
			delete schemaDefHPlusSchemaObjMembersHandler;
			schemaDefHPlusSchemaObjMembersHandler = NULL;
		}
		if( schemaDefHPlusSchemaObjImplementationHandler != NULL ) {
			delete schemaDefHPlusSchemaObjImplementationHandler;
			schemaDefHPlusSchemaObjImplementationHandler = NULL;
		}
		if( schemaDefHPlusDb2LUWSchemaObjMembersHandler != NULL ) {
			delete schemaDefHPlusDb2LUWSchemaObjMembersHandler;
			schemaDefHPlusDb2LUWSchemaObjMembersHandler = NULL;
		}
		if( schemaDefHPlusDb2LUWSchemaObjImplHandler != NULL ) {
			delete schemaDefHPlusDb2LUWSchemaObjImplHandler;
			schemaDefHPlusDb2LUWSchemaObjImplHandler = NULL;
		}
		if( schemaDefHPlusDb2LUWSchemaObjIncludeHandler != NULL ) {
			delete schemaDefHPlusDb2LUWSchemaObjIncludeHandler;
			schemaDefHPlusDb2LUWSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefHPlusMSSqlSchemaObjMembersHandler != NULL ) {
			delete schemaDefHPlusMSSqlSchemaObjMembersHandler;
			schemaDefHPlusMSSqlSchemaObjMembersHandler = NULL;
		}
		if( schemaDefHPlusMSSqlSchemaObjImplHandler != NULL ) {
			delete schemaDefHPlusMSSqlSchemaObjImplHandler;
			schemaDefHPlusMSSqlSchemaObjImplHandler = NULL;
		}
		if( schemaDefHPlusMSSqlSchemaObjIncludeHandler != NULL ) {
			delete schemaDefHPlusMSSqlSchemaObjIncludeHandler;
			schemaDefHPlusMSSqlSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefHPlusMySqlSchemaObjMembersHandler != NULL ) {
			delete schemaDefHPlusMySqlSchemaObjMembersHandler;
			schemaDefHPlusMySqlSchemaObjMembersHandler = NULL;
		}
		if( schemaDefHPlusMySqlSchemaObjImplHandler != NULL ) {
			delete schemaDefHPlusMySqlSchemaObjImplHandler;
			schemaDefHPlusMySqlSchemaObjImplHandler = NULL;
		}
		if( schemaDefHPlusMySqlSchemaObjIncludeHandler != NULL ) {
			delete schemaDefHPlusMySqlSchemaObjIncludeHandler;
			schemaDefHPlusMySqlSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefHPlusOracleSchemaObjMembersHandler != NULL ) {
			delete schemaDefHPlusOracleSchemaObjMembersHandler;
			schemaDefHPlusOracleSchemaObjMembersHandler = NULL;
		}
		if( schemaDefHPlusOracleSchemaObjImplHandler != NULL ) {
			delete schemaDefHPlusOracleSchemaObjImplHandler;
			schemaDefHPlusOracleSchemaObjImplHandler = NULL;
		}
		if( schemaDefHPlusOracleSchemaObjIncludeHandler != NULL ) {
			delete schemaDefHPlusOracleSchemaObjIncludeHandler;
			schemaDefHPlusOracleSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefHPlusPgSqlSchemaObjMembersHandler != NULL ) {
			delete schemaDefHPlusPgSqlSchemaObjMembersHandler;
			schemaDefHPlusPgSqlSchemaObjMembersHandler = NULL;
		}
		if( schemaDefHPlusPgSqlSchemaObjImplHandler != NULL ) {
			delete schemaDefHPlusPgSqlSchemaObjImplHandler;
			schemaDefHPlusPgSqlSchemaObjImplHandler = NULL;
		}
		if( schemaDefHPlusPgSqlSchemaObjIncludeHandler != NULL ) {
			delete schemaDefHPlusPgSqlSchemaObjIncludeHandler;
			schemaDefHPlusPgSqlSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefHPlusRamSchemaObjMembersHandler != NULL ) {
			delete schemaDefHPlusRamSchemaObjMembersHandler;
			schemaDefHPlusRamSchemaObjMembersHandler = NULL;
		}
		if( schemaDefHPlusRamSchemaObjImplHandler != NULL ) {
			delete schemaDefHPlusRamSchemaObjImplHandler;
			schemaDefHPlusRamSchemaObjImplHandler = NULL;
		}
		if( schemaDefHPlusRamSchemaObjIncludeHandler != NULL ) {
			delete schemaDefHPlusRamSchemaObjIncludeHandler;
			schemaDefHPlusRamSchemaObjIncludeHandler = NULL;
		}
		if( schemaDefHPlusXMsgSchemaIncludeHandler != NULL ) {
			delete schemaDefHPlusXMsgSchemaIncludeHandler;
			schemaDefHPlusXMsgSchemaIncludeHandler = NULL;
		}
		if( schemaDefHPlusXMsgSchemaFormattersHandler != NULL ) {
			delete schemaDefHPlusXMsgSchemaFormattersHandler;
			schemaDefHPlusXMsgSchemaFormattersHandler = NULL;
		}
		if( schemaDefHPlusXMsgClientSchemaIncludeHandler != NULL ) {
			delete schemaDefHPlusXMsgClientSchemaIncludeHandler;
			schemaDefHPlusXMsgClientSchemaIncludeHandler = NULL;
		}
		if( schemaDefHPlusXMsgClientSchemaBodyHandler != NULL ) {
			delete schemaDefHPlusXMsgClientSchemaBodyHandler;
			schemaDefHPlusXMsgClientSchemaBodyHandler = NULL;
		}
		if( schemaDefHPlusXMsgRqstSchemaBodyHandler != NULL ) {
			delete schemaDefHPlusXMsgRqstSchemaBodyHandler;
			schemaDefHPlusXMsgRqstSchemaBodyHandler = NULL;
		}
		if( schemaDefHPlusXMsgRqstSchemaIncludeHandler != NULL ) {
			delete schemaDefHPlusXMsgRqstSchemaIncludeHandler;
			schemaDefHPlusXMsgRqstSchemaIncludeHandler = NULL;
		}
		if( schemaDefHPlusXMsgRqstSchemaWireParsersHandler != NULL ) {
			delete schemaDefHPlusXMsgRqstSchemaWireParsersHandler;
			schemaDefHPlusXMsgRqstSchemaWireParsersHandler = NULL;
		}
		if( schemaDefHPlusXMsgRqstSchemaXsdSpecHandler != NULL ) {
			delete schemaDefHPlusXMsgRqstSchemaXsdSpecHandler;
			schemaDefHPlusXMsgRqstSchemaXsdSpecHandler = NULL;
		}
		if( schemaDefHPlusXMsgRqstSchemaXsdElementListHandler != NULL ) {
			delete schemaDefHPlusXMsgRqstSchemaXsdElementListHandler;
			schemaDefHPlusXMsgRqstSchemaXsdElementListHandler = NULL;
		}
		if( schemaDefHPlusXMsgRspnSchemaBodyHandler != NULL ) {
			delete schemaDefHPlusXMsgRspnSchemaBodyHandler;
			schemaDefHPlusXMsgRspnSchemaBodyHandler = NULL;
		}
		if( schemaDefHPlusXMsgRspnSchemaIncludeHandler != NULL ) {
			delete schemaDefHPlusXMsgRspnSchemaIncludeHandler;
			schemaDefHPlusXMsgRspnSchemaIncludeHandler = NULL;
		}
		if( schemaDefHPlusXMsgRspnSchemaWireParsersHandler != NULL ) {
			delete schemaDefHPlusXMsgRspnSchemaWireParsersHandler;
			schemaDefHPlusXMsgRspnSchemaWireParsersHandler = NULL;
		}
		if( schemaDefHPlusXMsgRspnSchemaXsdElementListHandler != NULL ) {
			delete schemaDefHPlusXMsgRspnSchemaXsdElementListHandler;
			schemaDefHPlusXMsgRspnSchemaXsdElementListHandler = NULL;
		}
		if( schemaDefHPlusXMsgRspnSchemaXsdSpecHandler != NULL ) {
			delete schemaDefHPlusXMsgRspnSchemaXsdSpecHandler;
			schemaDefHPlusXMsgRspnSchemaXsdSpecHandler = NULL;
		}
		if( schemaDefCSharpSchemaObjUsingHandler != NULL ) {
			delete schemaDefCSharpSchemaObjUsingHandler;
			schemaDefCSharpSchemaObjUsingHandler = NULL;
		}
		if( schemaDefCSharpSchemaObjInterfaceHandler != NULL ) {
			delete schemaDefCSharpSchemaObjInterfaceHandler;
			schemaDefCSharpSchemaObjInterfaceHandler = NULL;
		}
		if( schemaDefCSharpSchemaObjMembersHandler != NULL ) {
			delete schemaDefCSharpSchemaObjMembersHandler;
			schemaDefCSharpSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCSharpSchemaObjImplementationHandler != NULL ) {
			delete schemaDefCSharpSchemaObjImplementationHandler;
			schemaDefCSharpSchemaObjImplementationHandler = NULL;
		}
		if( schemaDefCSharpDb2LUWSchemaObjMembersHandler != NULL ) {
			delete schemaDefCSharpDb2LUWSchemaObjMembersHandler;
			schemaDefCSharpDb2LUWSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCSharpDb2LUWSchemaObjImplHandler != NULL ) {
			delete schemaDefCSharpDb2LUWSchemaObjImplHandler;
			schemaDefCSharpDb2LUWSchemaObjImplHandler = NULL;
		}
		if( schemaDefCSharpDb2LUWSchemaObjUsingHandler != NULL ) {
			delete schemaDefCSharpDb2LUWSchemaObjUsingHandler;
			schemaDefCSharpDb2LUWSchemaObjUsingHandler = NULL;
		}
		if( schemaDefCSharpMSSqlSchemaObjMembersHandler != NULL ) {
			delete schemaDefCSharpMSSqlSchemaObjMembersHandler;
			schemaDefCSharpMSSqlSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCSharpMSSqlSchemaObjImplHandler != NULL ) {
			delete schemaDefCSharpMSSqlSchemaObjImplHandler;
			schemaDefCSharpMSSqlSchemaObjImplHandler = NULL;
		}
		if( schemaDefCSharpMSSqlSchemaObjUsingHandler != NULL ) {
			delete schemaDefCSharpMSSqlSchemaObjUsingHandler;
			schemaDefCSharpMSSqlSchemaObjUsingHandler = NULL;
		}
		if( schemaDefCSharpMySqlSchemaObjMembersHandler != NULL ) {
			delete schemaDefCSharpMySqlSchemaObjMembersHandler;
			schemaDefCSharpMySqlSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCSharpMySqlSchemaObjImplHandler != NULL ) {
			delete schemaDefCSharpMySqlSchemaObjImplHandler;
			schemaDefCSharpMySqlSchemaObjImplHandler = NULL;
		}
		if( schemaDefCSharpMySqlSchemaObjUsingHandler != NULL ) {
			delete schemaDefCSharpMySqlSchemaObjUsingHandler;
			schemaDefCSharpMySqlSchemaObjUsingHandler = NULL;
		}
		if( schemaDefCSharpOracleSchemaObjMembersHandler != NULL ) {
			delete schemaDefCSharpOracleSchemaObjMembersHandler;
			schemaDefCSharpOracleSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCSharpOracleSchemaObjImplHandler != NULL ) {
			delete schemaDefCSharpOracleSchemaObjImplHandler;
			schemaDefCSharpOracleSchemaObjImplHandler = NULL;
		}
		if( schemaDefCSharpOracleSchemaObjUsingHandler != NULL ) {
			delete schemaDefCSharpOracleSchemaObjUsingHandler;
			schemaDefCSharpOracleSchemaObjUsingHandler = NULL;
		}
		if( schemaDefCSharpPgSqlSchemaObjMembersHandler != NULL ) {
			delete schemaDefCSharpPgSqlSchemaObjMembersHandler;
			schemaDefCSharpPgSqlSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCSharpPgSqlSchemaObjImplHandler != NULL ) {
			delete schemaDefCSharpPgSqlSchemaObjImplHandler;
			schemaDefCSharpPgSqlSchemaObjImplHandler = NULL;
		}
		if( schemaDefCSharpPgSqlSchemaObjUsingHandler != NULL ) {
			delete schemaDefCSharpPgSqlSchemaObjUsingHandler;
			schemaDefCSharpPgSqlSchemaObjUsingHandler = NULL;
		}
		if( schemaDefCSharpRamSchemaObjMembersHandler != NULL ) {
			delete schemaDefCSharpRamSchemaObjMembersHandler;
			schemaDefCSharpRamSchemaObjMembersHandler = NULL;
		}
		if( schemaDefCSharpRamSchemaObjImplHandler != NULL ) {
			delete schemaDefCSharpRamSchemaObjImplHandler;
			schemaDefCSharpRamSchemaObjImplHandler = NULL;
		}
		if( schemaDefCSharpRamSchemaObjUsingHandler != NULL ) {
			delete schemaDefCSharpRamSchemaObjUsingHandler;
			schemaDefCSharpRamSchemaObjUsingHandler = NULL;
		}
		if( schemaDefCSharpXMsgSchemaUsingHandler != NULL ) {
			delete schemaDefCSharpXMsgSchemaUsingHandler;
			schemaDefCSharpXMsgSchemaUsingHandler = NULL;
		}
		if( schemaDefCSharpXMsgSchemaFormattersHandler != NULL ) {
			delete schemaDefCSharpXMsgSchemaFormattersHandler;
			schemaDefCSharpXMsgSchemaFormattersHandler = NULL;
		}
		if( schemaDefCSharpXMsgClientSchemaUsingHandler != NULL ) {
			delete schemaDefCSharpXMsgClientSchemaUsingHandler;
			schemaDefCSharpXMsgClientSchemaUsingHandler = NULL;
		}
		if( schemaDefCSharpXMsgClientSchemaBodyHandler != NULL ) {
			delete schemaDefCSharpXMsgClientSchemaBodyHandler;
			schemaDefCSharpXMsgClientSchemaBodyHandler = NULL;
		}
		if( schemaDefCSharpXMsgRqstSchemaBodyHandler != NULL ) {
			delete schemaDefCSharpXMsgRqstSchemaBodyHandler;
			schemaDefCSharpXMsgRqstSchemaBodyHandler = NULL;
		}
		if( schemaDefCSharpXMsgRqstSchemaUsingHandler != NULL ) {
			delete schemaDefCSharpXMsgRqstSchemaUsingHandler;
			schemaDefCSharpXMsgRqstSchemaUsingHandler = NULL;
		}
		if( schemaDefCSharpXMsgRqstSchemaWireParsersHandler != NULL ) {
			delete schemaDefCSharpXMsgRqstSchemaWireParsersHandler;
			schemaDefCSharpXMsgRqstSchemaWireParsersHandler = NULL;
		}
		if( schemaDefCSharpXMsgRqstSchemaXsdSpecHandler != NULL ) {
			delete schemaDefCSharpXMsgRqstSchemaXsdSpecHandler;
			schemaDefCSharpXMsgRqstSchemaXsdSpecHandler = NULL;
		}
		if( schemaDefCSharpXMsgRqstSchemaXsdElementListHandler != NULL ) {
			delete schemaDefCSharpXMsgRqstSchemaXsdElementListHandler;
			schemaDefCSharpXMsgRqstSchemaXsdElementListHandler = NULL;
		}
		if( schemaDefCSharpXMsgRspnSchemaBodyHandler != NULL ) {
			delete schemaDefCSharpXMsgRspnSchemaBodyHandler;
			schemaDefCSharpXMsgRspnSchemaBodyHandler = NULL;
		}
		if( schemaDefCSharpXMsgRspnSchemaUsingHandler != NULL ) {
			delete schemaDefCSharpXMsgRspnSchemaUsingHandler;
			schemaDefCSharpXMsgRspnSchemaUsingHandler = NULL;
		}
		if( schemaDefCSharpXMsgRspnSchemaWireParsersHandler != NULL ) {
			delete schemaDefCSharpXMsgRspnSchemaWireParsersHandler;
			schemaDefCSharpXMsgRspnSchemaWireParsersHandler = NULL;
		}
		if( schemaDefCSharpXMsgRspnSchemaXsdElementListHandler != NULL ) {
			delete schemaDefCSharpXMsgRspnSchemaXsdElementListHandler;
			schemaDefCSharpXMsgRspnSchemaXsdElementListHandler = NULL;
		}
		if( schemaDefCSharpXMsgRspnSchemaXsdSpecHandler != NULL ) {
			delete schemaDefCSharpXMsgRspnSchemaXsdSpecHandler;
			schemaDefCSharpXMsgRspnSchemaXsdSpecHandler = NULL;
		}
		if( schemaDefHandler != NULL ) {
			delete schemaDefHandler;
			schemaDefHandler = NULL;
		}
		if( schemaRefHandler != NULL ) {
			delete schemaRefHandler;
			schemaRefHandler = NULL;
		}
		if( scopeHandler != NULL ) {
			delete scopeHandler;
			scopeHandler = NULL;
		}
		if( secAppHandler != NULL ) {
			delete secAppHandler;
			secAppHandler = NULL;
		}
		if( secDeviceHandler != NULL ) {
			delete secDeviceHandler;
			secDeviceHandler = NULL;
		}
		if( secFormHandler != NULL ) {
			delete secFormHandler;
			secFormHandler = NULL;
		}
		if( secGroupHandler != NULL ) {
			delete secGroupHandler;
			secGroupHandler = NULL;
		}
		if( secGroupFormHandler != NULL ) {
			delete secGroupFormHandler;
			secGroupFormHandler = NULL;
		}
		if( secGrpIncHandler != NULL ) {
			delete secGrpIncHandler;
			secGrpIncHandler = NULL;
		}
		if( secGrpMembHandler != NULL ) {
			delete secGrpMembHandler;
			secGrpMembHandler = NULL;
		}
		if( secSessionHandler != NULL ) {
			delete secSessionHandler;
			secSessionHandler = NULL;
		}
		if( secUserHandler != NULL ) {
			delete secUserHandler;
			secUserHandler = NULL;
		}
		if( serverListFuncHandler != NULL ) {
			delete serverListFuncHandler;
			serverListFuncHandler = NULL;
		}
		if( serverMethodHandler != NULL ) {
			delete serverMethodHandler;
			serverMethodHandler = NULL;
		}
		if( serverObjFuncHandler != NULL ) {
			delete serverObjFuncHandler;
			serverObjFuncHandler = NULL;
		}
		if( serverProcHandler != NULL ) {
			delete serverProcHandler;
			serverProcHandler = NULL;
		}
		if( serviceHandler != NULL ) {
			delete serviceHandler;
			serviceHandler = NULL;
		}
		if( serviceTypeHandler != NULL ) {
			delete serviceTypeHandler;
			serviceTypeHandler = NULL;
		}
		if( stringColHandler != NULL ) {
			delete stringColHandler;
			stringColHandler = NULL;
		}
		if( stringDefHandler != NULL ) {
			delete stringDefHandler;
			stringDefHandler = NULL;
		}
		if( stringTypeHandler != NULL ) {
			delete stringTypeHandler;
			stringTypeHandler = NULL;
		}
		if( subProjectHandler != NULL ) {
			delete subProjectHandler;
			subProjectHandler = NULL;
		}
		if( sysClusterHandler != NULL ) {
			delete sysClusterHandler;
			sysClusterHandler = NULL;
		}
		if( tSecGroupHandler != NULL ) {
			delete tSecGroupHandler;
			tSecGroupHandler = NULL;
		}
		if( tSecGrpIncHandler != NULL ) {
			delete tSecGrpIncHandler;
			tSecGrpIncHandler = NULL;
		}
		if( tSecGrpMembHandler != NULL ) {
			delete tSecGrpMembHandler;
			tSecGrpMembHandler = NULL;
		}
		if( tZDateColHandler != NULL ) {
			delete tZDateColHandler;
			tZDateColHandler = NULL;
		}
		if( tZDateDefHandler != NULL ) {
			delete tZDateDefHandler;
			tZDateDefHandler = NULL;
		}
		if( tZDateTypeHandler != NULL ) {
			delete tZDateTypeHandler;
			tZDateTypeHandler = NULL;
		}
		if( tZTimeColHandler != NULL ) {
			delete tZTimeColHandler;
			tZTimeColHandler = NULL;
		}
		if( tZTimeDefHandler != NULL ) {
			delete tZTimeDefHandler;
			tZTimeDefHandler = NULL;
		}
		if( tZTimeTypeHandler != NULL ) {
			delete tZTimeTypeHandler;
			tZTimeTypeHandler = NULL;
		}
		if( tZTimestampColHandler != NULL ) {
			delete tZTimestampColHandler;
			tZTimestampColHandler = NULL;
		}
		if( tZTimestampDefHandler != NULL ) {
			delete tZTimestampDefHandler;
			tZTimestampDefHandler = NULL;
		}
		if( tZTimestampTypeHandler != NULL ) {
			delete tZTimestampTypeHandler;
			tZTimestampTypeHandler = NULL;
		}
		if( tableCafeObjMembersHandler != NULL ) {
			delete tableCafeObjMembersHandler;
			tableCafeObjMembersHandler = NULL;
		}
		if( tableCafeObjInterfaceHandler != NULL ) {
			delete tableCafeObjInterfaceHandler;
			tableCafeObjInterfaceHandler = NULL;
		}
		if( tableCafeObjImportHandler != NULL ) {
			delete tableCafeObjImportHandler;
			tableCafeObjImportHandler = NULL;
		}
		if( tableCafeObjImplementationHandler != NULL ) {
			delete tableCafeObjImplementationHandler;
			tableCafeObjImplementationHandler = NULL;
		}
		if( tableCafeEditObjMembersHandler != NULL ) {
			delete tableCafeEditObjMembersHandler;
			tableCafeEditObjMembersHandler = NULL;
		}
		if( tableCafeEditObjInterfaceHandler != NULL ) {
			delete tableCafeEditObjInterfaceHandler;
			tableCafeEditObjInterfaceHandler = NULL;
		}
		if( tableCafeEditObjImportHandler != NULL ) {
			delete tableCafeEditObjImportHandler;
			tableCafeEditObjImportHandler = NULL;
		}
		if( tableCafeEditObjImplementationHandler != NULL ) {
			delete tableCafeEditObjImplementationHandler;
			tableCafeEditObjImplementationHandler = NULL;
		}
		if( tableCafeTableImportHandler != NULL ) {
			delete tableCafeTableImportHandler;
			tableCafeTableImportHandler = NULL;
		}
		if( tableCafeTableMembersHandler != NULL ) {
			delete tableCafeTableMembersHandler;
			tableCafeTableMembersHandler = NULL;
		}
		if( tableCafeTableInterfaceHandler != NULL ) {
			delete tableCafeTableInterfaceHandler;
			tableCafeTableInterfaceHandler = NULL;
		}
		if( tableCafeTableImplementationHandler != NULL ) {
			delete tableCafeTableImplementationHandler;
			tableCafeTableImplementationHandler = NULL;
		}
		if( tableCafeTableObjImportHandler != NULL ) {
			delete tableCafeTableObjImportHandler;
			tableCafeTableObjImportHandler = NULL;
		}
		if( tableCafeTableObjMembersHandler != NULL ) {
			delete tableCafeTableObjMembersHandler;
			tableCafeTableObjMembersHandler = NULL;
		}
		if( tableCafeTableObjInterfaceHandler != NULL ) {
			delete tableCafeTableObjInterfaceHandler;
			tableCafeTableObjInterfaceHandler = NULL;
		}
		if( tableCafeTableObjImplementationHandler != NULL ) {
			delete tableCafeTableObjImplementationHandler;
			tableCafeTableObjImplementationHandler = NULL;
		}
		if( tableCafeDb2LUWTableImportHandler != NULL ) {
			delete tableCafeDb2LUWTableImportHandler;
			tableCafeDb2LUWTableImportHandler = NULL;
		}
		if( tableCafeDb2LUWTableMembersHandler != NULL ) {
			delete tableCafeDb2LUWTableMembersHandler;
			tableCafeDb2LUWTableMembersHandler = NULL;
		}
		if( tableCafeDb2LUWTableImplementationHandler != NULL ) {
			delete tableCafeDb2LUWTableImplementationHandler;
			tableCafeDb2LUWTableImplementationHandler = NULL;
		}
		if( tableCafeMSSqlTableImportHandler != NULL ) {
			delete tableCafeMSSqlTableImportHandler;
			tableCafeMSSqlTableImportHandler = NULL;
		}
		if( tableCafeMSSqlTableMembersHandler != NULL ) {
			delete tableCafeMSSqlTableMembersHandler;
			tableCafeMSSqlTableMembersHandler = NULL;
		}
		if( tableCafeMSSqlTableImplementationHandler != NULL ) {
			delete tableCafeMSSqlTableImplementationHandler;
			tableCafeMSSqlTableImplementationHandler = NULL;
		}
		if( tableCafeMySqlTableImportHandler != NULL ) {
			delete tableCafeMySqlTableImportHandler;
			tableCafeMySqlTableImportHandler = NULL;
		}
		if( tableCafeMySqlTableMembersHandler != NULL ) {
			delete tableCafeMySqlTableMembersHandler;
			tableCafeMySqlTableMembersHandler = NULL;
		}
		if( tableCafeMySqlTableImplementationHandler != NULL ) {
			delete tableCafeMySqlTableImplementationHandler;
			tableCafeMySqlTableImplementationHandler = NULL;
		}
		if( tableCafeOracleTableImportHandler != NULL ) {
			delete tableCafeOracleTableImportHandler;
			tableCafeOracleTableImportHandler = NULL;
		}
		if( tableCafeOracleTableMembersHandler != NULL ) {
			delete tableCafeOracleTableMembersHandler;
			tableCafeOracleTableMembersHandler = NULL;
		}
		if( tableCafeOracleTableImplementationHandler != NULL ) {
			delete tableCafeOracleTableImplementationHandler;
			tableCafeOracleTableImplementationHandler = NULL;
		}
		if( tableCafePgSqlTableImportHandler != NULL ) {
			delete tableCafePgSqlTableImportHandler;
			tableCafePgSqlTableImportHandler = NULL;
		}
		if( tableCafePgSqlTableMembersHandler != NULL ) {
			delete tableCafePgSqlTableMembersHandler;
			tableCafePgSqlTableMembersHandler = NULL;
		}
		if( tableCafePgSqlTableImplementationHandler != NULL ) {
			delete tableCafePgSqlTableImplementationHandler;
			tableCafePgSqlTableImplementationHandler = NULL;
		}
		if( tableCafeRamTableImportHandler != NULL ) {
			delete tableCafeRamTableImportHandler;
			tableCafeRamTableImportHandler = NULL;
		}
		if( tableCafeRamTableMembersHandler != NULL ) {
			delete tableCafeRamTableMembersHandler;
			tableCafeRamTableMembersHandler = NULL;
		}
		if( tableCafeRamTableImplementationHandler != NULL ) {
			delete tableCafeRamTableImplementationHandler;
			tableCafeRamTableImplementationHandler = NULL;
		}
		if( tableCafeSaxLoaderImportHandler != NULL ) {
			delete tableCafeSaxLoaderImportHandler;
			tableCafeSaxLoaderImportHandler = NULL;
		}
		if( tableCafeSaxLoaderStartElementHandler != NULL ) {
			delete tableCafeSaxLoaderStartElementHandler;
			tableCafeSaxLoaderStartElementHandler = NULL;
		}
		if( tableCafeSaxLoaderEndElementHandler != NULL ) {
			delete tableCafeSaxLoaderEndElementHandler;
			tableCafeSaxLoaderEndElementHandler = NULL;
		}
		if( tableCafeXMsgTableImportHandler != NULL ) {
			delete tableCafeXMsgTableImportHandler;
			tableCafeXMsgTableImportHandler = NULL;
		}
		if( tableCafeXMsgTableformattersHandler != NULL ) {
			delete tableCafeXMsgTableformattersHandler;
			tableCafeXMsgTableformattersHandler = NULL;
		}
		if( tableCafeXMsgRqstTableImportHandler != NULL ) {
			delete tableCafeXMsgRqstTableImportHandler;
			tableCafeXMsgRqstTableImportHandler = NULL;
		}
		if( tableCafeXMsgRspnTableImportHandler != NULL ) {
			delete tableCafeXMsgRspnTableImportHandler;
			tableCafeXMsgRspnTableImportHandler = NULL;
		}
		if( tableCafeXMsgClientTableImportHandler != NULL ) {
			delete tableCafeXMsgClientTableImportHandler;
			tableCafeXMsgClientTableImportHandler = NULL;
		}
		if( tableCafeXMsgRqstTableBodyHandler != NULL ) {
			delete tableCafeXMsgRqstTableBodyHandler;
			tableCafeXMsgRqstTableBodyHandler = NULL;
		}
		if( tableCafeXMsgRspnTableBodyHandler != NULL ) {
			delete tableCafeXMsgRspnTableBodyHandler;
			tableCafeXMsgRspnTableBodyHandler = NULL;
		}
		if( tableCafeXMsgClientTableBodyHandler != NULL ) {
			delete tableCafeXMsgClientTableBodyHandler;
			tableCafeXMsgClientTableBodyHandler = NULL;
		}
		if( tableCPlusObjMembersHandler != NULL ) {
			delete tableCPlusObjMembersHandler;
			tableCPlusObjMembersHandler = NULL;
		}
		if( tableCPlusObjInterfaceHandler != NULL ) {
			delete tableCPlusObjInterfaceHandler;
			tableCPlusObjInterfaceHandler = NULL;
		}
		if( tableCPlusObjIncludeHandler != NULL ) {
			delete tableCPlusObjIncludeHandler;
			tableCPlusObjIncludeHandler = NULL;
		}
		if( tableCPlusObjImplementationHandler != NULL ) {
			delete tableCPlusObjImplementationHandler;
			tableCPlusObjImplementationHandler = NULL;
		}
		if( tableCPlusEditObjMembersHandler != NULL ) {
			delete tableCPlusEditObjMembersHandler;
			tableCPlusEditObjMembersHandler = NULL;
		}
		if( tableCPlusEditObjInteraceHandler != NULL ) {
			delete tableCPlusEditObjInteraceHandler;
			tableCPlusEditObjInteraceHandler = NULL;
		}
		if( tableCPlusEditObjIncludeHandler != NULL ) {
			delete tableCPlusEditObjIncludeHandler;
			tableCPlusEditObjIncludeHandler = NULL;
		}
		if( tableCPlusEditObjImplementationHandler != NULL ) {
			delete tableCPlusEditObjImplementationHandler;
			tableCPlusEditObjImplementationHandler = NULL;
		}
		if( tableCPlusTableIncludeHandler != NULL ) {
			delete tableCPlusTableIncludeHandler;
			tableCPlusTableIncludeHandler = NULL;
		}
		if( tableCPlusTableMembersHandler != NULL ) {
			delete tableCPlusTableMembersHandler;
			tableCPlusTableMembersHandler = NULL;
		}
		if( tableCPlusTableInterfaceHandler != NULL ) {
			delete tableCPlusTableInterfaceHandler;
			tableCPlusTableInterfaceHandler = NULL;
		}
		if( tableCPlusTableImplementationHandler != NULL ) {
			delete tableCPlusTableImplementationHandler;
			tableCPlusTableImplementationHandler = NULL;
		}
		if( tableCPlusTableObjIncludeHandler != NULL ) {
			delete tableCPlusTableObjIncludeHandler;
			tableCPlusTableObjIncludeHandler = NULL;
		}
		if( tableCPlusTableObjMembersHandler != NULL ) {
			delete tableCPlusTableObjMembersHandler;
			tableCPlusTableObjMembersHandler = NULL;
		}
		if( tableCPlusTableObjInterfaceHandler != NULL ) {
			delete tableCPlusTableObjInterfaceHandler;
			tableCPlusTableObjInterfaceHandler = NULL;
		}
		if( tableCPlusTableObjImplementationHandler != NULL ) {
			delete tableCPlusTableObjImplementationHandler;
			tableCPlusTableObjImplementationHandler = NULL;
		}
		if( tableCPlusDb2LUWTableIncludeHandler != NULL ) {
			delete tableCPlusDb2LUWTableIncludeHandler;
			tableCPlusDb2LUWTableIncludeHandler = NULL;
		}
		if( tableCPlusDb2LUWTableMembersHandler != NULL ) {
			delete tableCPlusDb2LUWTableMembersHandler;
			tableCPlusDb2LUWTableMembersHandler = NULL;
		}
		if( tableCPlusDb2LUWTableImplementationHandler != NULL ) {
			delete tableCPlusDb2LUWTableImplementationHandler;
			tableCPlusDb2LUWTableImplementationHandler = NULL;
		}
		if( tableCPlusMSSqlTableIncludeHandler != NULL ) {
			delete tableCPlusMSSqlTableIncludeHandler;
			tableCPlusMSSqlTableIncludeHandler = NULL;
		}
		if( tableCPlusMSSqlTableMembersHandler != NULL ) {
			delete tableCPlusMSSqlTableMembersHandler;
			tableCPlusMSSqlTableMembersHandler = NULL;
		}
		if( tableCPlusMSSqlTableImplementationHandler != NULL ) {
			delete tableCPlusMSSqlTableImplementationHandler;
			tableCPlusMSSqlTableImplementationHandler = NULL;
		}
		if( tableCPlusMySqlTableIncludeHandler != NULL ) {
			delete tableCPlusMySqlTableIncludeHandler;
			tableCPlusMySqlTableIncludeHandler = NULL;
		}
		if( tableCPlusMySqlTableMembersHandler != NULL ) {
			delete tableCPlusMySqlTableMembersHandler;
			tableCPlusMySqlTableMembersHandler = NULL;
		}
		if( tableCPlusMySqlTableImplementationHandler != NULL ) {
			delete tableCPlusMySqlTableImplementationHandler;
			tableCPlusMySqlTableImplementationHandler = NULL;
		}
		if( tableCPlusOracleTableIncludeHandler != NULL ) {
			delete tableCPlusOracleTableIncludeHandler;
			tableCPlusOracleTableIncludeHandler = NULL;
		}
		if( tableCPlusOracleTableMembersHandler != NULL ) {
			delete tableCPlusOracleTableMembersHandler;
			tableCPlusOracleTableMembersHandler = NULL;
		}
		if( tableCPlusOracleTableImplementationHandler != NULL ) {
			delete tableCPlusOracleTableImplementationHandler;
			tableCPlusOracleTableImplementationHandler = NULL;
		}
		if( tableCPlusPgSqlTableMembersHandler != NULL ) {
			delete tableCPlusPgSqlTableMembersHandler;
			tableCPlusPgSqlTableMembersHandler = NULL;
		}
		if( tableCPlusPgSqlTableImplementationHandler != NULL ) {
			delete tableCPlusPgSqlTableImplementationHandler;
			tableCPlusPgSqlTableImplementationHandler = NULL;
		}
		if( tableCPlusRamTableIncludeHandler != NULL ) {
			delete tableCPlusRamTableIncludeHandler;
			tableCPlusRamTableIncludeHandler = NULL;
		}
		if( tableCPlusRamTableMembersHandler != NULL ) {
			delete tableCPlusRamTableMembersHandler;
			tableCPlusRamTableMembersHandler = NULL;
		}
		if( tableCPlusRamTableImplementationHandler != NULL ) {
			delete tableCPlusRamTableImplementationHandler;
			tableCPlusRamTableImplementationHandler = NULL;
		}
		if( tableCPlusSaxLoaderIncludeHandler != NULL ) {
			delete tableCPlusSaxLoaderIncludeHandler;
			tableCPlusSaxLoaderIncludeHandler = NULL;
		}
		if( tableCPlusSaxLoaderStartElementHandler != NULL ) {
			delete tableCPlusSaxLoaderStartElementHandler;
			tableCPlusSaxLoaderStartElementHandler = NULL;
		}
		if( tableCPlusSaxLoaderEndElementHandler != NULL ) {
			delete tableCPlusSaxLoaderEndElementHandler;
			tableCPlusSaxLoaderEndElementHandler = NULL;
		}
		if( tableCPlusXMsgTableIncludeHandler != NULL ) {
			delete tableCPlusXMsgTableIncludeHandler;
			tableCPlusXMsgTableIncludeHandler = NULL;
		}
		if( tableCPlusXMsgTableFormattersHandler != NULL ) {
			delete tableCPlusXMsgTableFormattersHandler;
			tableCPlusXMsgTableFormattersHandler = NULL;
		}
		if( tableCPlusXMsgRqstTableIncludeHandler != NULL ) {
			delete tableCPlusXMsgRqstTableIncludeHandler;
			tableCPlusXMsgRqstTableIncludeHandler = NULL;
		}
		if( tableCPlusXMsgRspnTableIncludeHandler != NULL ) {
			delete tableCPlusXMsgRspnTableIncludeHandler;
			tableCPlusXMsgRspnTableIncludeHandler = NULL;
		}
		if( tableCPlusXMsgClientTableIncludeHandler != NULL ) {
			delete tableCPlusXMsgClientTableIncludeHandler;
			tableCPlusXMsgClientTableIncludeHandler = NULL;
		}
		if( tableCPlusXMsgRqstTableBodyHandler != NULL ) {
			delete tableCPlusXMsgRqstTableBodyHandler;
			tableCPlusXMsgRqstTableBodyHandler = NULL;
		}
		if( tableCPlusXMsgRspnTableBodyHandler != NULL ) {
			delete tableCPlusXMsgRspnTableBodyHandler;
			tableCPlusXMsgRspnTableBodyHandler = NULL;
		}
		if( tableCPlusXMsgClientTableBodyHandler != NULL ) {
			delete tableCPlusXMsgClientTableBodyHandler;
			tableCPlusXMsgClientTableBodyHandler = NULL;
		}
		if( tableHPlusObjMembersHandler != NULL ) {
			delete tableHPlusObjMembersHandler;
			tableHPlusObjMembersHandler = NULL;
		}
		if( tableHPlusObjInterfaceHandler != NULL ) {
			delete tableHPlusObjInterfaceHandler;
			tableHPlusObjInterfaceHandler = NULL;
		}
		if( tableHPlusObjIncludeHandler != NULL ) {
			delete tableHPlusObjIncludeHandler;
			tableHPlusObjIncludeHandler = NULL;
		}
		if( tableHPlusObjImplemntationHandler != NULL ) {
			delete tableHPlusObjImplemntationHandler;
			tableHPlusObjImplemntationHandler = NULL;
		}
		if( tableHPlusEditObjMembersHandler != NULL ) {
			delete tableHPlusEditObjMembersHandler;
			tableHPlusEditObjMembersHandler = NULL;
		}
		if( tableHPlusEditObjInterfaceHandler != NULL ) {
			delete tableHPlusEditObjInterfaceHandler;
			tableHPlusEditObjInterfaceHandler = NULL;
		}
		if( tableHPlusEditObjIncludeHandler != NULL ) {
			delete tableHPlusEditObjIncludeHandler;
			tableHPlusEditObjIncludeHandler = NULL;
		}
		if( tableHPlusEditObjImplementationHandler != NULL ) {
			delete tableHPlusEditObjImplementationHandler;
			tableHPlusEditObjImplementationHandler = NULL;
		}
		if( tableHPlusTableIncludeHandler != NULL ) {
			delete tableHPlusTableIncludeHandler;
			tableHPlusTableIncludeHandler = NULL;
		}
		if( tableHPlusTableMembersHandler != NULL ) {
			delete tableHPlusTableMembersHandler;
			tableHPlusTableMembersHandler = NULL;
		}
		if( tableHPlusTableInterfaceHandler != NULL ) {
			delete tableHPlusTableInterfaceHandler;
			tableHPlusTableInterfaceHandler = NULL;
		}
		if( tableHPlusTableImplementationHandler != NULL ) {
			delete tableHPlusTableImplementationHandler;
			tableHPlusTableImplementationHandler = NULL;
		}
		if( tableHPlusTableObjIncludeHandler != NULL ) {
			delete tableHPlusTableObjIncludeHandler;
			tableHPlusTableObjIncludeHandler = NULL;
		}
		if( tableHPlusTableObjMembersHandler != NULL ) {
			delete tableHPlusTableObjMembersHandler;
			tableHPlusTableObjMembersHandler = NULL;
		}
		if( tableHPlusTableObjInterfaceHandler != NULL ) {
			delete tableHPlusTableObjInterfaceHandler;
			tableHPlusTableObjInterfaceHandler = NULL;
		}
		if( tableHPlusTableObjImplementationHandler != NULL ) {
			delete tableHPlusTableObjImplementationHandler;
			tableHPlusTableObjImplementationHandler = NULL;
		}
		if( tableHPlusDb2LUWTableIncludeHandler != NULL ) {
			delete tableHPlusDb2LUWTableIncludeHandler;
			tableHPlusDb2LUWTableIncludeHandler = NULL;
		}
		if( tableHPlusDb2LUWTableMembersHandler != NULL ) {
			delete tableHPlusDb2LUWTableMembersHandler;
			tableHPlusDb2LUWTableMembersHandler = NULL;
		}
		if( tableHPlusDb2LUWTableImplementationHandler != NULL ) {
			delete tableHPlusDb2LUWTableImplementationHandler;
			tableHPlusDb2LUWTableImplementationHandler = NULL;
		}
		if( tableHPlusMSSqlTableIncludeHandler != NULL ) {
			delete tableHPlusMSSqlTableIncludeHandler;
			tableHPlusMSSqlTableIncludeHandler = NULL;
		}
		if( tableHPlusMSSqlTableMembersHandler != NULL ) {
			delete tableHPlusMSSqlTableMembersHandler;
			tableHPlusMSSqlTableMembersHandler = NULL;
		}
		if( tableHPlusMSSqlTableImplementationHandler != NULL ) {
			delete tableHPlusMSSqlTableImplementationHandler;
			tableHPlusMSSqlTableImplementationHandler = NULL;
		}
		if( tableHPlusMySqlTableIncludeHandler != NULL ) {
			delete tableHPlusMySqlTableIncludeHandler;
			tableHPlusMySqlTableIncludeHandler = NULL;
		}
		if( tableHPlusMySqlTableMembersHandler != NULL ) {
			delete tableHPlusMySqlTableMembersHandler;
			tableHPlusMySqlTableMembersHandler = NULL;
		}
		if( tableHPlusMySqlTableImplementationHandler != NULL ) {
			delete tableHPlusMySqlTableImplementationHandler;
			tableHPlusMySqlTableImplementationHandler = NULL;
		}
		if( tableHPlusOracleTableIncludeHandler != NULL ) {
			delete tableHPlusOracleTableIncludeHandler;
			tableHPlusOracleTableIncludeHandler = NULL;
		}
		if( tableHPlusOracleTableMembersHandler != NULL ) {
			delete tableHPlusOracleTableMembersHandler;
			tableHPlusOracleTableMembersHandler = NULL;
		}
		if( tableHPlusOracleTableImplementationHandler != NULL ) {
			delete tableHPlusOracleTableImplementationHandler;
			tableHPlusOracleTableImplementationHandler = NULL;
		}
		if( tableHPlusPgSqlTableIncludeHandler != NULL ) {
			delete tableHPlusPgSqlTableIncludeHandler;
			tableHPlusPgSqlTableIncludeHandler = NULL;
		}
		if( tableHPlusPgSqlTableMembersHandler != NULL ) {
			delete tableHPlusPgSqlTableMembersHandler;
			tableHPlusPgSqlTableMembersHandler = NULL;
		}
		if( tableHPlusPgSqlTableImplementationHandler != NULL ) {
			delete tableHPlusPgSqlTableImplementationHandler;
			tableHPlusPgSqlTableImplementationHandler = NULL;
		}
		if( tableHPlusRamTableIncludeHandler != NULL ) {
			delete tableHPlusRamTableIncludeHandler;
			tableHPlusRamTableIncludeHandler = NULL;
		}
		if( tableHPlusRamTableMembersHandler != NULL ) {
			delete tableHPlusRamTableMembersHandler;
			tableHPlusRamTableMembersHandler = NULL;
		}
		if( tableHPlusRamTableImplementationHandler != NULL ) {
			delete tableHPlusRamTableImplementationHandler;
			tableHPlusRamTableImplementationHandler = NULL;
		}
		if( tableHPlusSaxLoaderIncludeHandler != NULL ) {
			delete tableHPlusSaxLoaderIncludeHandler;
			tableHPlusSaxLoaderIncludeHandler = NULL;
		}
		if( tableHPlusSaxLoaderStartElementHandler != NULL ) {
			delete tableHPlusSaxLoaderStartElementHandler;
			tableHPlusSaxLoaderStartElementHandler = NULL;
		}
		if( tableHPlusSaxLoaderEndElementHandler != NULL ) {
			delete tableHPlusSaxLoaderEndElementHandler;
			tableHPlusSaxLoaderEndElementHandler = NULL;
		}
		if( tableHPlusXMsgTableIncludeHandler != NULL ) {
			delete tableHPlusXMsgTableIncludeHandler;
			tableHPlusXMsgTableIncludeHandler = NULL;
		}
		if( tableHPlusXMsgTableFormattersHandler != NULL ) {
			delete tableHPlusXMsgTableFormattersHandler;
			tableHPlusXMsgTableFormattersHandler = NULL;
		}
		if( tableHPlusXMsgRqstTableIncludeHandler != NULL ) {
			delete tableHPlusXMsgRqstTableIncludeHandler;
			tableHPlusXMsgRqstTableIncludeHandler = NULL;
		}
		if( tableHPlusXMsgRspnTableIncludeHandler != NULL ) {
			delete tableHPlusXMsgRspnTableIncludeHandler;
			tableHPlusXMsgRspnTableIncludeHandler = NULL;
		}
		if( tableHPlusXMsgClientTableIncludeHandler != NULL ) {
			delete tableHPlusXMsgClientTableIncludeHandler;
			tableHPlusXMsgClientTableIncludeHandler = NULL;
		}
		if( tableHPlusXMsgRqstTableBodyHandler != NULL ) {
			delete tableHPlusXMsgRqstTableBodyHandler;
			tableHPlusXMsgRqstTableBodyHandler = NULL;
		}
		if( tableHPlusXMsgRspnTableBodyHandler != NULL ) {
			delete tableHPlusXMsgRspnTableBodyHandler;
			tableHPlusXMsgRspnTableBodyHandler = NULL;
		}
		if( tableHPlusXMsgClientTableBodyHandler != NULL ) {
			delete tableHPlusXMsgClientTableBodyHandler;
			tableHPlusXMsgClientTableBodyHandler = NULL;
		}
		if( tableCSharpObjMembersHandler != NULL ) {
			delete tableCSharpObjMembersHandler;
			tableCSharpObjMembersHandler = NULL;
		}
		if( tableCSharpObjInterfaceHandler != NULL ) {
			delete tableCSharpObjInterfaceHandler;
			tableCSharpObjInterfaceHandler = NULL;
		}
		if( tableCSharpObjUsingHandler != NULL ) {
			delete tableCSharpObjUsingHandler;
			tableCSharpObjUsingHandler = NULL;
		}
		if( tableCSharpObjImplementationHandler != NULL ) {
			delete tableCSharpObjImplementationHandler;
			tableCSharpObjImplementationHandler = NULL;
		}
		if( tableCSharpEditObjMembersHandler != NULL ) {
			delete tableCSharpEditObjMembersHandler;
			tableCSharpEditObjMembersHandler = NULL;
		}
		if( tableCSharpEditObjInterfaceHandler != NULL ) {
			delete tableCSharpEditObjInterfaceHandler;
			tableCSharpEditObjInterfaceHandler = NULL;
		}
		if( tableCSharpEditObjUsingHandler != NULL ) {
			delete tableCSharpEditObjUsingHandler;
			tableCSharpEditObjUsingHandler = NULL;
		}
		if( tableCSharpEditObjImplementationHandler != NULL ) {
			delete tableCSharpEditObjImplementationHandler;
			tableCSharpEditObjImplementationHandler = NULL;
		}
		if( tableCSharpTableUsingHandler != NULL ) {
			delete tableCSharpTableUsingHandler;
			tableCSharpTableUsingHandler = NULL;
		}
		if( tableCSharpTableMembersHandler != NULL ) {
			delete tableCSharpTableMembersHandler;
			tableCSharpTableMembersHandler = NULL;
		}
		if( tableCSharpTableInterfaceHandler != NULL ) {
			delete tableCSharpTableInterfaceHandler;
			tableCSharpTableInterfaceHandler = NULL;
		}
		if( tableCSharpTableImplementationHandler != NULL ) {
			delete tableCSharpTableImplementationHandler;
			tableCSharpTableImplementationHandler = NULL;
		}
		if( tableCSharpTableObjUsingHandler != NULL ) {
			delete tableCSharpTableObjUsingHandler;
			tableCSharpTableObjUsingHandler = NULL;
		}
		if( tableCSharpTableObjMembersHandler != NULL ) {
			delete tableCSharpTableObjMembersHandler;
			tableCSharpTableObjMembersHandler = NULL;
		}
		if( tableCSharpTableObjInterfaceHandler != NULL ) {
			delete tableCSharpTableObjInterfaceHandler;
			tableCSharpTableObjInterfaceHandler = NULL;
		}
		if( tableCSharpTableObjImplementationHandler != NULL ) {
			delete tableCSharpTableObjImplementationHandler;
			tableCSharpTableObjImplementationHandler = NULL;
		}
		if( tableCSharpDb2LUWTableUsingHandler != NULL ) {
			delete tableCSharpDb2LUWTableUsingHandler;
			tableCSharpDb2LUWTableUsingHandler = NULL;
		}
		if( tableCSharpDb2LUWTableMembersHandler != NULL ) {
			delete tableCSharpDb2LUWTableMembersHandler;
			tableCSharpDb2LUWTableMembersHandler = NULL;
		}
		if( tableCSharpDb2LUWTableImplementationHandler != NULL ) {
			delete tableCSharpDb2LUWTableImplementationHandler;
			tableCSharpDb2LUWTableImplementationHandler = NULL;
		}
		if( tableCSharpMSSqlTableUsingHandler != NULL ) {
			delete tableCSharpMSSqlTableUsingHandler;
			tableCSharpMSSqlTableUsingHandler = NULL;
		}
		if( tableCSharpMSSqlTableMembersHandler != NULL ) {
			delete tableCSharpMSSqlTableMembersHandler;
			tableCSharpMSSqlTableMembersHandler = NULL;
		}
		if( tableCSharpMSSqlTableImplementationHandler != NULL ) {
			delete tableCSharpMSSqlTableImplementationHandler;
			tableCSharpMSSqlTableImplementationHandler = NULL;
		}
		if( tableCSharpMySqlTableUsingHandler != NULL ) {
			delete tableCSharpMySqlTableUsingHandler;
			tableCSharpMySqlTableUsingHandler = NULL;
		}
		if( tableCSharpMySqlTableMembersHandler != NULL ) {
			delete tableCSharpMySqlTableMembersHandler;
			tableCSharpMySqlTableMembersHandler = NULL;
		}
		if( tableCSharpMySqlTableImplementationHandler != NULL ) {
			delete tableCSharpMySqlTableImplementationHandler;
			tableCSharpMySqlTableImplementationHandler = NULL;
		}
		if( tableCSharpOracleTableUsingHandler != NULL ) {
			delete tableCSharpOracleTableUsingHandler;
			tableCSharpOracleTableUsingHandler = NULL;
		}
		if( tableCSharpOracleTableMembersHandler != NULL ) {
			delete tableCSharpOracleTableMembersHandler;
			tableCSharpOracleTableMembersHandler = NULL;
		}
		if( tableCSharpOracleTableImplementationHandler != NULL ) {
			delete tableCSharpOracleTableImplementationHandler;
			tableCSharpOracleTableImplementationHandler = NULL;
		}
		if( tableCSharpPgSqlTableUsingHandler != NULL ) {
			delete tableCSharpPgSqlTableUsingHandler;
			tableCSharpPgSqlTableUsingHandler = NULL;
		}
		if( tableCSharpPgSqlTableMembersHandler != NULL ) {
			delete tableCSharpPgSqlTableMembersHandler;
			tableCSharpPgSqlTableMembersHandler = NULL;
		}
		if( tableCSharpPgSqlTableImplementationHandler != NULL ) {
			delete tableCSharpPgSqlTableImplementationHandler;
			tableCSharpPgSqlTableImplementationHandler = NULL;
		}
		if( tableCSharpRamTableUsingHandler != NULL ) {
			delete tableCSharpRamTableUsingHandler;
			tableCSharpRamTableUsingHandler = NULL;
		}
		if( tableCSharpRamTableMembersHandler != NULL ) {
			delete tableCSharpRamTableMembersHandler;
			tableCSharpRamTableMembersHandler = NULL;
		}
		if( tableCSharpRamTableImplementationHandler != NULL ) {
			delete tableCSharpRamTableImplementationHandler;
			tableCSharpRamTableImplementationHandler = NULL;
		}
		if( tableCSharpSaxLoaderUsingHandler != NULL ) {
			delete tableCSharpSaxLoaderUsingHandler;
			tableCSharpSaxLoaderUsingHandler = NULL;
		}
		if( tableCSharpSaxLoaderStartElementHandler != NULL ) {
			delete tableCSharpSaxLoaderStartElementHandler;
			tableCSharpSaxLoaderStartElementHandler = NULL;
		}
		if( tableCSharpSaxLoaderEndElementHandler != NULL ) {
			delete tableCSharpSaxLoaderEndElementHandler;
			tableCSharpSaxLoaderEndElementHandler = NULL;
		}
		if( tableCSharpXMsgTableUsingHandler != NULL ) {
			delete tableCSharpXMsgTableUsingHandler;
			tableCSharpXMsgTableUsingHandler = NULL;
		}
		if( tableCSharpXMsgTableFormattersHandler != NULL ) {
			delete tableCSharpXMsgTableFormattersHandler;
			tableCSharpXMsgTableFormattersHandler = NULL;
		}
		if( tableCSharpXMsgRqstTableUsingHandler != NULL ) {
			delete tableCSharpXMsgRqstTableUsingHandler;
			tableCSharpXMsgRqstTableUsingHandler = NULL;
		}
		if( tableCSharpXMsgRspnTableUsingHandler != NULL ) {
			delete tableCSharpXMsgRspnTableUsingHandler;
			tableCSharpXMsgRspnTableUsingHandler = NULL;
		}
		if( tableCSharpXMsgClientTableUsingHandler != NULL ) {
			delete tableCSharpXMsgClientTableUsingHandler;
			tableCSharpXMsgClientTableUsingHandler = NULL;
		}
		if( tableCSharpXMsgRqstTableBodyHandler != NULL ) {
			delete tableCSharpXMsgRqstTableBodyHandler;
			tableCSharpXMsgRqstTableBodyHandler = NULL;
		}
		if( tableCSharpXMsgRspnTableBodyHandler != NULL ) {
			delete tableCSharpXMsgRspnTableBodyHandler;
			tableCSharpXMsgRspnTableBodyHandler = NULL;
		}
		if( tableCSharpXMsgClientTableBodyHandler != NULL ) {
			delete tableCSharpXMsgClientTableBodyHandler;
			tableCSharpXMsgClientTableBodyHandler = NULL;
		}
		if( tableHandler != NULL ) {
			delete tableHandler;
			tableHandler = NULL;
		}
		if( tableColHandler != NULL ) {
			delete tableColHandler;
			tableColHandler = NULL;
		}
		if( tenantHandler != NULL ) {
			delete tenantHandler;
			tenantHandler = NULL;
		}
		if( textColHandler != NULL ) {
			delete textColHandler;
			textColHandler = NULL;
		}
		if( textDefHandler != NULL ) {
			delete textDefHandler;
			textDefHandler = NULL;
		}
		if( textTypeHandler != NULL ) {
			delete textTypeHandler;
			textTypeHandler = NULL;
		}
		if( timeColHandler != NULL ) {
			delete timeColHandler;
			timeColHandler = NULL;
		}
		if( timeDefHandler != NULL ) {
			delete timeDefHandler;
			timeDefHandler = NULL;
		}
		if( timeTypeHandler != NULL ) {
			delete timeTypeHandler;
			timeTypeHandler = NULL;
		}
		if( timestampColHandler != NULL ) {
			delete timestampColHandler;
			timestampColHandler = NULL;
		}
		if( timestampDefHandler != NULL ) {
			delete timestampDefHandler;
			timestampDefHandler = NULL;
		}
		if( timestampTypeHandler != NULL ) {
			delete timestampTypeHandler;
			timestampTypeHandler = NULL;
		}
		if( tldHandler != NULL ) {
			delete tldHandler;
			tldHandler = NULL;
		}
		if( tokenColHandler != NULL ) {
			delete tokenColHandler;
			tokenColHandler = NULL;
		}
		if( tokenDefHandler != NULL ) {
			delete tokenDefHandler;
			tokenDefHandler = NULL;
		}
		if( tokenTypeHandler != NULL ) {
			delete tokenTypeHandler;
			tokenTypeHandler = NULL;
		}
		if( topDomainHandler != NULL ) {
			delete topDomainHandler;
			topDomainHandler = NULL;
		}
		if( topProjectHandler != NULL ) {
			delete topProjectHandler;
			topProjectHandler = NULL;
		}
		if( uInt16ColHandler != NULL ) {
			delete uInt16ColHandler;
			uInt16ColHandler = NULL;
		}
		if( uInt16DefHandler != NULL ) {
			delete uInt16DefHandler;
			uInt16DefHandler = NULL;
		}
		if( uInt16TypeHandler != NULL ) {
			delete uInt16TypeHandler;
			uInt16TypeHandler = NULL;
		}
		if( uInt32ColHandler != NULL ) {
			delete uInt32ColHandler;
			uInt32ColHandler = NULL;
		}
		if( uInt32DefHandler != NULL ) {
			delete uInt32DefHandler;
			uInt32DefHandler = NULL;
		}
		if( uInt32TypeHandler != NULL ) {
			delete uInt32TypeHandler;
			uInt32TypeHandler = NULL;
		}
		if( uInt64ColHandler != NULL ) {
			delete uInt64ColHandler;
			uInt64ColHandler = NULL;
		}
		if( uInt64DefHandler != NULL ) {
			delete uInt64DefHandler;
			uInt64DefHandler = NULL;
		}
		if( uInt64TypeHandler != NULL ) {
			delete uInt64TypeHandler;
			uInt64TypeHandler = NULL;
		}
		if( uRLProtocolHandler != NULL ) {
			delete uRLProtocolHandler;
			uRLProtocolHandler = NULL;
		}
		if( uuidColHandler != NULL ) {
			delete uuidColHandler;
			uuidColHandler = NULL;
		}
		if( uuidDefHandler != NULL ) {
			delete uuidDefHandler;
			uuidDefHandler = NULL;
		}
		if( uuidGenHandler != NULL ) {
			delete uuidGenHandler;
			uuidGenHandler = NULL;
		}
		if( uuidTypeHandler != NULL ) {
			delete uuidTypeHandler;
			uuidTypeHandler = NULL;
		}
		if( valueHandler != NULL ) {
			delete valueHandler;
			valueHandler = NULL;
		}
		if( saxDocHandler != NULL ) {
			delete saxDocHandler;
			saxDocHandler = NULL;
		}
		if( saxRootHandler != NULL ) {
			delete saxRootHandler;
			saxRootHandler = NULL;
		}
	}

	void CFBamSaxLoader::initParser() {
		if( saxXmlReader != NULL ) {
			return;
		}
		cflib::CFLibXmlCoreSaxParser::initParser();
		loadGrammar( cfsec::CFSecSaxLoader::SCHEMA_URI );
		loadGrammar( cfint::CFIntSaxLoader::SCHEMA_URI );
		loadGrammar( SCHEMA_URI );
	}

	cfsec::ICFSecClusterObj* CFBamSaxLoader::getUseCluster() const {
		return( useCluster );
	}

	void CFBamSaxLoader::setUseCluster( cfsec::ICFSecClusterObj* value ) {
		useCluster = value;
	}

	cfsec::ICFSecTenantObj* CFBamSaxLoader::getUseTenant() {
		return( useTenant );
	}

	void CFBamSaxLoader::setUseTenant( cfsec::ICFSecTenantObj* value ) {
		useTenant = value;
	}

	// SchemaObj accessors

	cfbam::ICFBamSchemaObj* CFBamSaxLoader::getSchemaObj() const {
		return( schemaObj );
	}

	void CFBamSaxLoader::setSchemaObj( cfbam::ICFBamSchemaObj* value ) {
		schemaObj = value;
	}

	void CFBamSaxLoader::verifyGrammarInstallation() {
		static const std::string S_ProcName( "verifyGrammarInstallation" );
		static const std::string S_MsgMustInstallXsdFirst( "The XSD file " + SCHEMA_URI + " must be installed first" );
		if( grammarLoaded ) {
			return;
		}
		cfsec::CFSecSaxLoader::verifyGrammarInstallation();
		cfint::CFIntSaxLoader::verifyGrammarInstallation();
		std::ifstream xsdfile( SCHEMA_URI.data() );
		if( ! xsdfile ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_MsgMustInstallXsdFirst );
		}
		grammarLoaded = true;
	}

	cfbam::CFBamSaxLoaderAtomHandler* CFBamSaxLoader::getAtomHandler() {
		if( atomHandler == NULL ) {
			atomHandler = new cfbam::CFBamSaxLoaderAtomHandler( this );
		}
		return( atomHandler );
	}

	cfbam::CFBamSaxLoaderBlobColHandler* CFBamSaxLoader::getBlobColHandler() {
		if( blobColHandler == NULL ) {
			blobColHandler = new cfbam::CFBamSaxLoaderBlobColHandler( this );
		}
		return( blobColHandler );
	}

	cfbam::CFBamSaxLoaderBlobDefHandler* CFBamSaxLoader::getBlobDefHandler() {
		if( blobDefHandler == NULL ) {
			blobDefHandler = new cfbam::CFBamSaxLoaderBlobDefHandler( this );
		}
		return( blobDefHandler );
	}

	cfbam::CFBamSaxLoaderBlobTypeHandler* CFBamSaxLoader::getBlobTypeHandler() {
		if( blobTypeHandler == NULL ) {
			blobTypeHandler = new cfbam::CFBamSaxLoaderBlobTypeHandler( this );
		}
		return( blobTypeHandler );
	}

	cfbam::CFBamSaxLoaderBoolColHandler* CFBamSaxLoader::getBoolColHandler() {
		if( boolColHandler == NULL ) {
			boolColHandler = new cfbam::CFBamSaxLoaderBoolColHandler( this );
		}
		return( boolColHandler );
	}

	cfbam::CFBamSaxLoaderBoolDefHandler* CFBamSaxLoader::getBoolDefHandler() {
		if( boolDefHandler == NULL ) {
			boolDefHandler = new cfbam::CFBamSaxLoaderBoolDefHandler( this );
		}
		return( boolDefHandler );
	}

	cfbam::CFBamSaxLoaderBoolTypeHandler* CFBamSaxLoader::getBoolTypeHandler() {
		if( boolTypeHandler == NULL ) {
			boolTypeHandler = new cfbam::CFBamSaxLoaderBoolTypeHandler( this );
		}
		return( boolTypeHandler );
	}

	cfbam::CFBamSaxLoaderChainHandler* CFBamSaxLoader::getChainHandler() {
		if( chainHandler == NULL ) {
			chainHandler = new cfbam::CFBamSaxLoaderChainHandler( this );
		}
		return( chainHandler );
	}

	cfbam::CFBamSaxLoaderClearDepHandler* CFBamSaxLoader::getClearDepHandler() {
		if( clearDepHandler == NULL ) {
			clearDepHandler = new cfbam::CFBamSaxLoaderClearDepHandler( this );
		}
		return( clearDepHandler );
	}

	cfbam::CFBamSaxLoaderClearSubDep1Handler* CFBamSaxLoader::getClearSubDep1Handler() {
		if( clearSubDep1Handler == NULL ) {
			clearSubDep1Handler = new cfbam::CFBamSaxLoaderClearSubDep1Handler( this );
			clearSubDep1Handler->addElementHandler( cfbam::CFBamClearSubDep2Buff::GENDEFNAME, getClearSubDep2Handler() );
		}
		return( clearSubDep1Handler );
	}

	cfbam::CFBamSaxLoaderClearSubDep2Handler* CFBamSaxLoader::getClearSubDep2Handler() {
		if( clearSubDep2Handler == NULL ) {
			clearSubDep2Handler = new cfbam::CFBamSaxLoaderClearSubDep2Handler( this );
			clearSubDep2Handler->addElementHandler( cfbam::CFBamClearSubDep3Buff::GENDEFNAME, getClearSubDep3Handler() );
		}
		return( clearSubDep2Handler );
	}

	cfbam::CFBamSaxLoaderClearSubDep3Handler* CFBamSaxLoader::getClearSubDep3Handler() {
		if( clearSubDep3Handler == NULL ) {
			clearSubDep3Handler = new cfbam::CFBamSaxLoaderClearSubDep3Handler( this );
		}
		return( clearSubDep3Handler );
	}

	cfbam::CFBamSaxLoaderClearTopDepHandler* CFBamSaxLoader::getClearTopDepHandler() {
		if( clearTopDepHandler == NULL ) {
			clearTopDepHandler = new cfbam::CFBamSaxLoaderClearTopDepHandler( this );
			clearTopDepHandler->addElementHandler( cfbam::CFBamClearSubDep1Buff::GENDEFNAME, getClearSubDep1Handler() );
		}
		return( clearTopDepHandler );
	}

	cfbam::CFBamSaxLoaderClusterHandler* CFBamSaxLoader::getClusterHandler() {
		if( clusterHandler == NULL ) {
			clusterHandler = new cfbam::CFBamSaxLoaderClusterHandler( this );
			clusterHandler->addElementHandler( cfsec::CFSecHostNodeBuff::GENDEFNAME, getHostNodeHandler() );
			clusterHandler->addElementHandler( cfsec::CFSecTenantBuff::GENDEFNAME, getTenantHandler() );
			clusterHandler->addElementHandler( cfsec::CFSecSecAppBuff::GENDEFNAME, getSecAppHandler() );
			clusterHandler->addElementHandler( cfsec::CFSecSecGroupBuff::GENDEFNAME, getSecGroupHandler() );
			clusterHandler->addElementHandler( cfsec::CFSecSysClusterBuff::GENDEFNAME, getSysClusterHandler() );
		}
		return( clusterHandler );
	}

	cfbam::CFBamSaxLoaderDateColHandler* CFBamSaxLoader::getDateColHandler() {
		if( dateColHandler == NULL ) {
			dateColHandler = new cfbam::CFBamSaxLoaderDateColHandler( this );
		}
		return( dateColHandler );
	}

	cfbam::CFBamSaxLoaderDateDefHandler* CFBamSaxLoader::getDateDefHandler() {
		if( dateDefHandler == NULL ) {
			dateDefHandler = new cfbam::CFBamSaxLoaderDateDefHandler( this );
		}
		return( dateDefHandler );
	}

	cfbam::CFBamSaxLoaderDateTypeHandler* CFBamSaxLoader::getDateTypeHandler() {
		if( dateTypeHandler == NULL ) {
			dateTypeHandler = new cfbam::CFBamSaxLoaderDateTypeHandler( this );
		}
		return( dateTypeHandler );
	}

	cfbam::CFBamSaxLoaderDelDepHandler* CFBamSaxLoader::getDelDepHandler() {
		if( delDepHandler == NULL ) {
			delDepHandler = new cfbam::CFBamSaxLoaderDelDepHandler( this );
		}
		return( delDepHandler );
	}

	cfbam::CFBamSaxLoaderDelSubDep1Handler* CFBamSaxLoader::getDelSubDep1Handler() {
		if( delSubDep1Handler == NULL ) {
			delSubDep1Handler = new cfbam::CFBamSaxLoaderDelSubDep1Handler( this );
			delSubDep1Handler->addElementHandler( cfbam::CFBamDelSubDep2Buff::GENDEFNAME, getDelSubDep2Handler() );
		}
		return( delSubDep1Handler );
	}

	cfbam::CFBamSaxLoaderDelSubDep2Handler* CFBamSaxLoader::getDelSubDep2Handler() {
		if( delSubDep2Handler == NULL ) {
			delSubDep2Handler = new cfbam::CFBamSaxLoaderDelSubDep2Handler( this );
			delSubDep2Handler->addElementHandler( cfbam::CFBamDelSubDep3Buff::GENDEFNAME, getDelSubDep3Handler() );
		}
		return( delSubDep2Handler );
	}

	cfbam::CFBamSaxLoaderDelSubDep3Handler* CFBamSaxLoader::getDelSubDep3Handler() {
		if( delSubDep3Handler == NULL ) {
			delSubDep3Handler = new cfbam::CFBamSaxLoaderDelSubDep3Handler( this );
		}
		return( delSubDep3Handler );
	}

	cfbam::CFBamSaxLoaderDelTopDepHandler* CFBamSaxLoader::getDelTopDepHandler() {
		if( delTopDepHandler == NULL ) {
			delTopDepHandler = new cfbam::CFBamSaxLoaderDelTopDepHandler( this );
			delTopDepHandler->addElementHandler( cfbam::CFBamDelSubDep1Buff::GENDEFNAME, getDelSubDep1Handler() );
		}
		return( delTopDepHandler );
	}

	cfbam::CFBamSaxLoaderDoubleColHandler* CFBamSaxLoader::getDoubleColHandler() {
		if( doubleColHandler == NULL ) {
			doubleColHandler = new cfbam::CFBamSaxLoaderDoubleColHandler( this );
		}
		return( doubleColHandler );
	}

	cfbam::CFBamSaxLoaderDoubleDefHandler* CFBamSaxLoader::getDoubleDefHandler() {
		if( doubleDefHandler == NULL ) {
			doubleDefHandler = new cfbam::CFBamSaxLoaderDoubleDefHandler( this );
		}
		return( doubleDefHandler );
	}

	cfbam::CFBamSaxLoaderDoubleTypeHandler* CFBamSaxLoader::getDoubleTypeHandler() {
		if( doubleTypeHandler == NULL ) {
			doubleTypeHandler = new cfbam::CFBamSaxLoaderDoubleTypeHandler( this );
		}
		return( doubleTypeHandler );
	}

	cfbam::CFBamSaxLoaderEnumDefHandler* CFBamSaxLoader::getEnumDefHandler() {
		if( enumDefHandler == NULL ) {
			enumDefHandler = new cfbam::CFBamSaxLoaderEnumDefHandler( this );
			enumDefHandler->addElementHandler( cfbam::CFBamEnumTagBuff::GENDEFNAME, getEnumTagHandler() );
		}
		return( enumDefHandler );
	}

	cfbam::CFBamSaxLoaderEnumTagHandler* CFBamSaxLoader::getEnumTagHandler() {
		if( enumTagHandler == NULL ) {
			enumTagHandler = new cfbam::CFBamSaxLoaderEnumTagHandler( this );
		}
		return( enumTagHandler );
	}

	cfbam::CFBamSaxLoaderEnumTypeHandler* CFBamSaxLoader::getEnumTypeHandler() {
		if( enumTypeHandler == NULL ) {
			enumTypeHandler = new cfbam::CFBamSaxLoaderEnumTypeHandler( this );
			enumTypeHandler->addElementHandler( cfbam::CFBamEnumTagBuff::GENDEFNAME, getEnumTagHandler() );
		}
		return( enumTypeHandler );
	}

	cfbam::CFBamSaxLoaderFloatColHandler* CFBamSaxLoader::getFloatColHandler() {
		if( floatColHandler == NULL ) {
			floatColHandler = new cfbam::CFBamSaxLoaderFloatColHandler( this );
		}
		return( floatColHandler );
	}

	cfbam::CFBamSaxLoaderFloatDefHandler* CFBamSaxLoader::getFloatDefHandler() {
		if( floatDefHandler == NULL ) {
			floatDefHandler = new cfbam::CFBamSaxLoaderFloatDefHandler( this );
		}
		return( floatDefHandler );
	}

	cfbam::CFBamSaxLoaderFloatTypeHandler* CFBamSaxLoader::getFloatTypeHandler() {
		if( floatTypeHandler == NULL ) {
			floatTypeHandler = new cfbam::CFBamSaxLoaderFloatTypeHandler( this );
		}
		return( floatTypeHandler );
	}

	cfbam::CFBamSaxLoaderHostNodeHandler* CFBamSaxLoader::getHostNodeHandler() {
		if( hostNodeHandler == NULL ) {
			hostNodeHandler = new cfbam::CFBamSaxLoaderHostNodeHandler( this );
			hostNodeHandler->addElementHandler( cfsec::CFSecServiceBuff::GENDEFNAME, getServiceHandler() );
		}
		return( hostNodeHandler );
	}

	cfbam::CFBamSaxLoaderISOCcyHandler* CFBamSaxLoader::getISOCcyHandler() {
		if( iSOCcyHandler == NULL ) {
			iSOCcyHandler = new cfbam::CFBamSaxLoaderISOCcyHandler( this );
		}
		return( iSOCcyHandler );
	}

	cfbam::CFBamSaxLoaderISOCtryHandler* CFBamSaxLoader::getISOCtryHandler() {
		if( iSOCtryHandler == NULL ) {
			iSOCtryHandler = new cfbam::CFBamSaxLoaderISOCtryHandler( this );
			iSOCtryHandler->addElementHandler( cfsec::CFSecISOCtryCcyBuff::GENDEFNAME, getISOCtryCcyHandler() );
			iSOCtryHandler->addElementHandler( cfsec::CFSecISOCtryLangBuff::GENDEFNAME, getISOCtryLangHandler() );
		}
		return( iSOCtryHandler );
	}

	cfbam::CFBamSaxLoaderISOCtryCcyHandler* CFBamSaxLoader::getISOCtryCcyHandler() {
		if( iSOCtryCcyHandler == NULL ) {
			iSOCtryCcyHandler = new cfbam::CFBamSaxLoaderISOCtryCcyHandler( this );
		}
		return( iSOCtryCcyHandler );
	}

	cfbam::CFBamSaxLoaderISOCtryLangHandler* CFBamSaxLoader::getISOCtryLangHandler() {
		if( iSOCtryLangHandler == NULL ) {
			iSOCtryLangHandler = new cfbam::CFBamSaxLoaderISOCtryLangHandler( this );
		}
		return( iSOCtryLangHandler );
	}

	cfbam::CFBamSaxLoaderISOLangHandler* CFBamSaxLoader::getISOLangHandler() {
		if( iSOLangHandler == NULL ) {
			iSOLangHandler = new cfbam::CFBamSaxLoaderISOLangHandler( this );
		}
		return( iSOLangHandler );
	}

	cfbam::CFBamSaxLoaderISOTZoneHandler* CFBamSaxLoader::getISOTZoneHandler() {
		if( iSOTZoneHandler == NULL ) {
			iSOTZoneHandler = new cfbam::CFBamSaxLoaderISOTZoneHandler( this );
		}
		return( iSOTZoneHandler );
	}

	cfbam::CFBamSaxLoaderId16GenHandler* CFBamSaxLoader::getId16GenHandler() {
		if( id16GenHandler == NULL ) {
			id16GenHandler = new cfbam::CFBamSaxLoaderId16GenHandler( this );
		}
		return( id16GenHandler );
	}

	cfbam::CFBamSaxLoaderId32GenHandler* CFBamSaxLoader::getId32GenHandler() {
		if( id32GenHandler == NULL ) {
			id32GenHandler = new cfbam::CFBamSaxLoaderId32GenHandler( this );
		}
		return( id32GenHandler );
	}

	cfbam::CFBamSaxLoaderId64GenHandler* CFBamSaxLoader::getId64GenHandler() {
		if( id64GenHandler == NULL ) {
			id64GenHandler = new cfbam::CFBamSaxLoaderId64GenHandler( this );
		}
		return( id64GenHandler );
	}

	cfbam::CFBamSaxLoaderIndexHandler* CFBamSaxLoader::getIndexHandler() {
		if( indexHandler == NULL ) {
			indexHandler = new cfbam::CFBamSaxLoaderIndexHandler( this );
			indexHandler->addElementHandler( cfbam::CFBamIndexColBuff::GENDEFNAME, getIndexColHandler() );
		}
		return( indexHandler );
	}

	cfbam::CFBamSaxLoaderIndexColHandler* CFBamSaxLoader::getIndexColHandler() {
		if( indexColHandler == NULL ) {
			indexColHandler = new cfbam::CFBamSaxLoaderIndexColHandler( this );
		}
		return( indexColHandler );
	}

	cfbam::CFBamSaxLoaderInt16ColHandler* CFBamSaxLoader::getInt16ColHandler() {
		if( int16ColHandler == NULL ) {
			int16ColHandler = new cfbam::CFBamSaxLoaderInt16ColHandler( this );
		}
		return( int16ColHandler );
	}

	cfbam::CFBamSaxLoaderInt16DefHandler* CFBamSaxLoader::getInt16DefHandler() {
		if( int16DefHandler == NULL ) {
			int16DefHandler = new cfbam::CFBamSaxLoaderInt16DefHandler( this );
		}
		return( int16DefHandler );
	}

	cfbam::CFBamSaxLoaderInt16TypeHandler* CFBamSaxLoader::getInt16TypeHandler() {
		if( int16TypeHandler == NULL ) {
			int16TypeHandler = new cfbam::CFBamSaxLoaderInt16TypeHandler( this );
		}
		return( int16TypeHandler );
	}

	cfbam::CFBamSaxLoaderInt32ColHandler* CFBamSaxLoader::getInt32ColHandler() {
		if( int32ColHandler == NULL ) {
			int32ColHandler = new cfbam::CFBamSaxLoaderInt32ColHandler( this );
		}
		return( int32ColHandler );
	}

	cfbam::CFBamSaxLoaderInt32DefHandler* CFBamSaxLoader::getInt32DefHandler() {
		if( int32DefHandler == NULL ) {
			int32DefHandler = new cfbam::CFBamSaxLoaderInt32DefHandler( this );
		}
		return( int32DefHandler );
	}

	cfbam::CFBamSaxLoaderInt32TypeHandler* CFBamSaxLoader::getInt32TypeHandler() {
		if( int32TypeHandler == NULL ) {
			int32TypeHandler = new cfbam::CFBamSaxLoaderInt32TypeHandler( this );
		}
		return( int32TypeHandler );
	}

	cfbam::CFBamSaxLoaderInt64ColHandler* CFBamSaxLoader::getInt64ColHandler() {
		if( int64ColHandler == NULL ) {
			int64ColHandler = new cfbam::CFBamSaxLoaderInt64ColHandler( this );
		}
		return( int64ColHandler );
	}

	cfbam::CFBamSaxLoaderInt64DefHandler* CFBamSaxLoader::getInt64DefHandler() {
		if( int64DefHandler == NULL ) {
			int64DefHandler = new cfbam::CFBamSaxLoaderInt64DefHandler( this );
		}
		return( int64DefHandler );
	}

	cfbam::CFBamSaxLoaderInt64TypeHandler* CFBamSaxLoader::getInt64TypeHandler() {
		if( int64TypeHandler == NULL ) {
			int64TypeHandler = new cfbam::CFBamSaxLoaderInt64TypeHandler( this );
		}
		return( int64TypeHandler );
	}

	cfbam::CFBamSaxLoaderLicenseHandler* CFBamSaxLoader::getLicenseHandler() {
		if( licenseHandler == NULL ) {
			licenseHandler = new cfbam::CFBamSaxLoaderLicenseHandler( this );
		}
		return( licenseHandler );
	}

	cfbam::CFBamSaxLoaderMajorVersionHandler* CFBamSaxLoader::getMajorVersionHandler() {
		if( majorVersionHandler == NULL ) {
			majorVersionHandler = new cfbam::CFBamSaxLoaderMajorVersionHandler( this );
			majorVersionHandler->addElementHandler( cfint::CFIntMinorVersionBuff::GENDEFNAME, getMinorVersionHandler() );
		}
		return( majorVersionHandler );
	}

	cfbam::CFBamSaxLoaderMimeTypeHandler* CFBamSaxLoader::getMimeTypeHandler() {
		if( mimeTypeHandler == NULL ) {
			mimeTypeHandler = new cfbam::CFBamSaxLoaderMimeTypeHandler( this );
		}
		return( mimeTypeHandler );
	}

	cfbam::CFBamSaxLoaderMinorVersionHandler* CFBamSaxLoader::getMinorVersionHandler() {
		if( minorVersionHandler == NULL ) {
			minorVersionHandler = new cfbam::CFBamSaxLoaderMinorVersionHandler( this );
			minorVersionHandler->addElementHandler( cfbam::CFBamSchemaDefBuff::GENDEFNAME, getSchemaDefHandler() );
		}
		return( minorVersionHandler );
	}

	cfbam::CFBamSaxLoaderNmTokenColHandler* CFBamSaxLoader::getNmTokenColHandler() {
		if( nmTokenColHandler == NULL ) {
			nmTokenColHandler = new cfbam::CFBamSaxLoaderNmTokenColHandler( this );
		}
		return( nmTokenColHandler );
	}

	cfbam::CFBamSaxLoaderNmTokenDefHandler* CFBamSaxLoader::getNmTokenDefHandler() {
		if( nmTokenDefHandler == NULL ) {
			nmTokenDefHandler = new cfbam::CFBamSaxLoaderNmTokenDefHandler( this );
		}
		return( nmTokenDefHandler );
	}

	cfbam::CFBamSaxLoaderNmTokenTypeHandler* CFBamSaxLoader::getNmTokenTypeHandler() {
		if( nmTokenTypeHandler == NULL ) {
			nmTokenTypeHandler = new cfbam::CFBamSaxLoaderNmTokenTypeHandler( this );
		}
		return( nmTokenTypeHandler );
	}

	cfbam::CFBamSaxLoaderNmTokensColHandler* CFBamSaxLoader::getNmTokensColHandler() {
		if( nmTokensColHandler == NULL ) {
			nmTokensColHandler = new cfbam::CFBamSaxLoaderNmTokensColHandler( this );
		}
		return( nmTokensColHandler );
	}

	cfbam::CFBamSaxLoaderNmTokensDefHandler* CFBamSaxLoader::getNmTokensDefHandler() {
		if( nmTokensDefHandler == NULL ) {
			nmTokensDefHandler = new cfbam::CFBamSaxLoaderNmTokensDefHandler( this );
		}
		return( nmTokensDefHandler );
	}

	cfbam::CFBamSaxLoaderNmTokensTypeHandler* CFBamSaxLoader::getNmTokensTypeHandler() {
		if( nmTokensTypeHandler == NULL ) {
			nmTokensTypeHandler = new cfbam::CFBamSaxLoaderNmTokensTypeHandler( this );
		}
		return( nmTokensTypeHandler );
	}

	cfbam::CFBamSaxLoaderNumberColHandler* CFBamSaxLoader::getNumberColHandler() {
		if( numberColHandler == NULL ) {
			numberColHandler = new cfbam::CFBamSaxLoaderNumberColHandler( this );
		}
		return( numberColHandler );
	}

	cfbam::CFBamSaxLoaderNumberDefHandler* CFBamSaxLoader::getNumberDefHandler() {
		if( numberDefHandler == NULL ) {
			numberDefHandler = new cfbam::CFBamSaxLoaderNumberDefHandler( this );
		}
		return( numberDefHandler );
	}

	cfbam::CFBamSaxLoaderNumberTypeHandler* CFBamSaxLoader::getNumberTypeHandler() {
		if( numberTypeHandler == NULL ) {
			numberTypeHandler = new cfbam::CFBamSaxLoaderNumberTypeHandler( this );
		}
		return( numberTypeHandler );
	}

	cfbam::CFBamSaxLoaderParamHandler* CFBamSaxLoader::getParamHandler() {
		if( paramHandler == NULL ) {
			paramHandler = new cfbam::CFBamSaxLoaderParamHandler( this );
		}
		return( paramHandler );
	}

	cfbam::CFBamSaxLoaderPopDepHandler* CFBamSaxLoader::getPopDepHandler() {
		if( popDepHandler == NULL ) {
			popDepHandler = new cfbam::CFBamSaxLoaderPopDepHandler( this );
		}
		return( popDepHandler );
	}

	cfbam::CFBamSaxLoaderPopSubDep1Handler* CFBamSaxLoader::getPopSubDep1Handler() {
		if( popSubDep1Handler == NULL ) {
			popSubDep1Handler = new cfbam::CFBamSaxLoaderPopSubDep1Handler( this );
			popSubDep1Handler->addElementHandler( cfbam::CFBamPopSubDep2Buff::GENDEFNAME, getPopSubDep2Handler() );
		}
		return( popSubDep1Handler );
	}

	cfbam::CFBamSaxLoaderPopSubDep2Handler* CFBamSaxLoader::getPopSubDep2Handler() {
		if( popSubDep2Handler == NULL ) {
			popSubDep2Handler = new cfbam::CFBamSaxLoaderPopSubDep2Handler( this );
			popSubDep2Handler->addElementHandler( cfbam::CFBamPopSubDep3Buff::GENDEFNAME, getPopSubDep3Handler() );
		}
		return( popSubDep2Handler );
	}

	cfbam::CFBamSaxLoaderPopSubDep3Handler* CFBamSaxLoader::getPopSubDep3Handler() {
		if( popSubDep3Handler == NULL ) {
			popSubDep3Handler = new cfbam::CFBamSaxLoaderPopSubDep3Handler( this );
		}
		return( popSubDep3Handler );
	}

	cfbam::CFBamSaxLoaderPopTopDepHandler* CFBamSaxLoader::getPopTopDepHandler() {
		if( popTopDepHandler == NULL ) {
			popTopDepHandler = new cfbam::CFBamSaxLoaderPopTopDepHandler( this );
			popTopDepHandler->addElementHandler( cfbam::CFBamPopSubDep1Buff::GENDEFNAME, getPopSubDep1Handler() );
		}
		return( popTopDepHandler );
	}

	cfbam::CFBamSaxLoaderRelationHandler* CFBamSaxLoader::getRelationHandler() {
		if( relationHandler == NULL ) {
			relationHandler = new cfbam::CFBamSaxLoaderRelationHandler( this );
			relationHandler->addElementHandler( cfbam::CFBamRelationColBuff::GENDEFNAME, getRelationColHandler() );
			relationHandler->addElementHandler( cfbam::CFBamPopTopDepBuff::GENDEFNAME, getPopTopDepHandler() );
		}
		return( relationHandler );
	}

	cfbam::CFBamSaxLoaderRelationColHandler* CFBamSaxLoader::getRelationColHandler() {
		if( relationColHandler == NULL ) {
			relationColHandler = new cfbam::CFBamSaxLoaderRelationColHandler( this );
		}
		return( relationColHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHandler* CFBamSaxLoader::getSchemaDefHandler() {
		if( schemaDefHandler == NULL ) {
			schemaDefHandler = new cfbam::CFBamSaxLoaderSchemaDefHandler( this );
			schemaDefHandler->addElementHandler( "CafeSchemaObjImport", getSchemaDefCafeSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafeSchemaObjInterface", getSchemaDefCafeSchemaObjInterfaceHandler() );
			schemaDefHandler->addElementHandler( "CafeSchemaObjMembers", getSchemaDefCafeSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafeSchemaObjImplementation", getSchemaDefCafeSchemaObjImplementationHandler() );
			schemaDefHandler->addElementHandler( "CafeDb2LUWSchemaObjMembers", getSchemaDefCafeDb2LUWSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafeDb2LUWSchemaObjImpl", getSchemaDefCafeDb2LUWSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CafeDb2LUWSchemaObjImport", getSchemaDefCafeDb2LUWSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafeMSSqlSchemaObjMembers", getSchemaDefCafeMSSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafeMSSqlSchemaObjImpl", getSchemaDefCafeMSSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CafeMSSqlSchemaObjImport", getSchemaDefCafeMSSqlSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafeMySqlSchemaObjMembers", getSchemaDefCafeMySqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafeMySqlSchemaObjImpl", getSchemaDefCafeMySqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CafeMySqlSchemaObjImport", getSchemaDefCafeMySqlSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafeOracleSchemaObjMembers", getSchemaDefCafeOracleSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafeOracleSchemaObjImpl", getSchemaDefCafeOracleSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CafeOracleSchemaObjImport", getSchemaDefCafeOracleSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafePgSqlSchemaObjMembers", getSchemaDefCafePgSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafePgSqlSchemaObjImpl", getSchemaDefCafePgSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CafePgSqlSchemaObjImport", getSchemaDefCafePgSqlSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafeRamSchemaObjMembers", getSchemaDefCafeRamSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafeRamSchemaObjImpl", getSchemaDefCafeRamSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CafeRamSchemaObjImport", getSchemaDefCafeRamSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgSchemaImport", getSchemaDefCafeXMsgSchemaImportHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgSchemaFormatters", getSchemaDefCafeXMsgSchemaFormattersHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgClientSchemaImport", getSchemaDefCafeXMsgClientSchemaImportHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgClientSchemaBody", getSchemaDefCafeXMsgClientSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRqstSchemaBody", getSchemaDefCafeXMsgRqstSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRqstSchemaImport", getSchemaDefCafeXMsgRqstSchemaImportHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRqstSchemaWireParsers", getSchemaDefCafeXMsgRqstSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRqstSchemaXsdSpec", getSchemaDefCafeXMsgRqstSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "CafeSchemaXsdElementList", getSchemaDefCafeSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRspnSchemaBody", getSchemaDefCafeXMsgRspnSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRspnSchemaImport", getSchemaDefCafeXMsgRspnSchemaImportHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRspnSchemaWireParsers", getSchemaDefCafeXMsgRspnSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRspnSchemaXsdElementList", getSchemaDefCafeXMsgRspnSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRspnSchemaXsdSpec", getSchemaDefCafeXMsgRspnSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "CPlusSchemaObjInclude", getSchemaDefCPlusSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusSchemaObjInterface", getSchemaDefCPlusSchemaObjInterfaceHandler() );
			schemaDefHandler->addElementHandler( "CPlusSchemaObjMembers", getSchemaDefCPlusSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusSchemaObjImplementation", getSchemaDefCPlusSchemaObjImplementationHandler() );
			schemaDefHandler->addElementHandler( "CPlusDb2LUWSchemaObjMembers", getSchemaDefCPlusDb2LUWSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusDb2LUWSchemaObjImpl", getSchemaDefCPlusDb2LUWSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CPlusDb2LUWSchemaObjInclude", getSchemaDefCPlusDb2LUWSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusMSSqlSchemaObjMembers", getSchemaDefCPlusMSSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusMSSqlSchemaObjImpl", getSchemaDefCPlusMSSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CPlusMSSqlSchemaObjInclude", getSchemaDefCPlusMSSqlSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusMySqlSchemaObjMembers", getSchemaDefCPlusMySqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusMySqlSchemaObjImpl", getSchemaDefCPlusMySqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CPlusMySqlSchemaObjInclude", getSchemaDefCPlusMySqlSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusOracleSchemaObjMembers", getSchemaDefCPlusOracleSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusOracleSchemaObjImpl", getSchemaDefCPlusOracleSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CPlusOracleSchemaObjInclude", getSchemaDefCPlusOracleSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusPgSqlSchemaObjMembers", getSchemaDefCPlusPgSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusPgSqlSchemaObjImpl", getSchemaDefCPlusPgSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CPlusPgSqlSchemaObjInclude", getSchemaDefCPlusPgSqlSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusRamSchemaObjMembers", getSchemaDefCPlusRamSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusRamSchemaObjImpl", getSchemaDefCPlusRamSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CPlusRamSchemaObjInclude", getSchemaDefCPlusRamSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgSchemaInclude", getSchemaDefCPlusXMsgSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgSchemaFormatters", getSchemaDefCPlusXMsgSchemaFormattersHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgClientSchemaInclude", getSchemaDefCPlusXMsgClientSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgClientSchemaBody", getSchemaDefCPlusXMsgClientSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRqstSchemaBody", getSchemaDefCPlusXMsgRqstSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRqstSchemaInclude", getSchemaDefCPlusXMsgRqstSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRqstSchemaWireParsers", getSchemaDefCPlusXMsgRqstSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRqstSchemaXsdSpec", getSchemaDefCPlusXMsgRqstSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRqstSchemaXsdElementList", getSchemaDefCPlusXMsgRqstSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "CPlusXmsgRspnSchemaBody", getSchemaDefCPlusXmsgRspnSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRspnSchemaInclude", getSchemaDefCPlusXMsgRspnSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRspnSchemaWireParsers", getSchemaDefCPlusXMsgRspnSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRspnSchemaXsdElementList", getSchemaDefCPlusXMsgRspnSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRspnSchemaXsdSpec", getSchemaDefCPlusXMsgRspnSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "HPlusSchemaObjInclude", getSchemaDefHPlusSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusSchemaObjInterface", getSchemaDefHPlusSchemaObjInterfaceHandler() );
			schemaDefHandler->addElementHandler( "HPlusSchemaObjMembers", getSchemaDefHPlusSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusSchemaObjImplementation", getSchemaDefHPlusSchemaObjImplementationHandler() );
			schemaDefHandler->addElementHandler( "HPlusDb2LUWSchemaObjMembers", getSchemaDefHPlusDb2LUWSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusDb2LUWSchemaObjImpl", getSchemaDefHPlusDb2LUWSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "HPlusDb2LUWSchemaObjInclude", getSchemaDefHPlusDb2LUWSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusMSSqlSchemaObjMembers", getSchemaDefHPlusMSSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusMSSqlSchemaObjImpl", getSchemaDefHPlusMSSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "HPlusMSSqlSchemaObjInclude", getSchemaDefHPlusMSSqlSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusMySqlSchemaObjMembers", getSchemaDefHPlusMySqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusMySqlSchemaObjImpl", getSchemaDefHPlusMySqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "HPlusMySqlSchemaObjInclude", getSchemaDefHPlusMySqlSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusOracleSchemaObjMembers", getSchemaDefHPlusOracleSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusOracleSchemaObjImpl", getSchemaDefHPlusOracleSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "HPlusOracleSchemaObjInclude", getSchemaDefHPlusOracleSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusPgSqlSchemaObjMembers", getSchemaDefHPlusPgSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusPgSqlSchemaObjImpl", getSchemaDefHPlusPgSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "HPlusPgSqlSchemaObjInclude", getSchemaDefHPlusPgSqlSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusRamSchemaObjMembers", getSchemaDefHPlusRamSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusRamSchemaObjImpl", getSchemaDefHPlusRamSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "HPlusRamSchemaObjInclude", getSchemaDefHPlusRamSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgSchemaInclude", getSchemaDefHPlusXMsgSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgSchemaFormatters", getSchemaDefHPlusXMsgSchemaFormattersHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgClientSchemaInclude", getSchemaDefHPlusXMsgClientSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgClientSchemaBody", getSchemaDefHPlusXMsgClientSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRqstSchemaBody", getSchemaDefHPlusXMsgRqstSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRqstSchemaInclude", getSchemaDefHPlusXMsgRqstSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRqstSchemaWireParsers", getSchemaDefHPlusXMsgRqstSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRqstSchemaXsdSpec", getSchemaDefHPlusXMsgRqstSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRqstSchemaXsdElementList", getSchemaDefHPlusXMsgRqstSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRspnSchemaBody", getSchemaDefHPlusXMsgRspnSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRspnSchemaInclude", getSchemaDefHPlusXMsgRspnSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRspnSchemaWireParsers", getSchemaDefHPlusXMsgRspnSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRspnSchemaXsdElementList", getSchemaDefHPlusXMsgRspnSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRspnSchemaXsdSpec", getSchemaDefHPlusXMsgRspnSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "CSharpSchemaObjUsing", getSchemaDefCSharpSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpSchemaObjInterface", getSchemaDefCSharpSchemaObjInterfaceHandler() );
			schemaDefHandler->addElementHandler( "CSharpSchemaObjMembers", getSchemaDefCSharpSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpSchemaObjImplementation", getSchemaDefCSharpSchemaObjImplementationHandler() );
			schemaDefHandler->addElementHandler( "CSharpDb2LUWSchemaObjMembers", getSchemaDefCSharpDb2LUWSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpDb2LUWSchemaObjImpl", getSchemaDefCSharpDb2LUWSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CSharpDb2LUWSchemaObjUsing", getSchemaDefCSharpDb2LUWSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpMSSqlSchemaObjMembers", getSchemaDefCSharpMSSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpMSSqlSchemaObjImpl", getSchemaDefCSharpMSSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CSharpMSSqlSchemaObjUsing", getSchemaDefCSharpMSSqlSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpMySqlSchemaObjMembers", getSchemaDefCSharpMySqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpMySqlSchemaObjImpl", getSchemaDefCSharpMySqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CSharpMySqlSchemaObjUsing", getSchemaDefCSharpMySqlSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpOracleSchemaObjMembers", getSchemaDefCSharpOracleSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpOracleSchemaObjImpl", getSchemaDefCSharpOracleSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CSharpOracleSchemaObjUsing", getSchemaDefCSharpOracleSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpPgSqlSchemaObjMembers", getSchemaDefCSharpPgSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpPgSqlSchemaObjImpl", getSchemaDefCSharpPgSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CSharpPgSqlSchemaObjUsing", getSchemaDefCSharpPgSqlSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpRamSchemaObjMembers", getSchemaDefCSharpRamSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpRamSchemaObjImpl", getSchemaDefCSharpRamSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CSharpRamSchemaObjUsing", getSchemaDefCSharpRamSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgSchemaUsing", getSchemaDefCSharpXMsgSchemaUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgSchemaFormatters", getSchemaDefCSharpXMsgSchemaFormattersHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgClientSchemaUsing", getSchemaDefCSharpXMsgClientSchemaUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgClientSchemaBody", getSchemaDefCSharpXMsgClientSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRqstSchemaBody", getSchemaDefCSharpXMsgRqstSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRqstSchemaUsing", getSchemaDefCSharpXMsgRqstSchemaUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRqstSchemaWireParsers", getSchemaDefCSharpXMsgRqstSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRqstSchemaXsdSpec", getSchemaDefCSharpXMsgRqstSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRqstSchemaXsdElementList", getSchemaDefCSharpXMsgRqstSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRspnSchemaBody", getSchemaDefCSharpXMsgRspnSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRspnSchemaUsing", getSchemaDefCSharpXMsgRspnSchemaUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRspnSchemaWireParsers", getSchemaDefCSharpXMsgRspnSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRspnSchemaXsdElementList", getSchemaDefCSharpXMsgRspnSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRspnSchemaXsdSpec", getSchemaDefCSharpXMsgRspnSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamTableBuff::GENDEFNAME, getTableHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamBlobTypeBuff::GENDEFNAME, getBlobTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamBoolTypeBuff::GENDEFNAME, getBoolTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamDateTypeBuff::GENDEFNAME, getDateTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamDoubleTypeBuff::GENDEFNAME, getDoubleTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamFloatTypeBuff::GENDEFNAME, getFloatTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamInt16TypeBuff::GENDEFNAME, getInt16TypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamId16GenBuff::GENDEFNAME, getId16GenHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamEnumTypeBuff::GENDEFNAME, getEnumTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamInt32TypeBuff::GENDEFNAME, getInt32TypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamId32GenBuff::GENDEFNAME, getId32GenHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamInt64TypeBuff::GENDEFNAME, getInt64TypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamId64GenBuff::GENDEFNAME, getId64GenHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamNmTokenTypeBuff::GENDEFNAME, getNmTokenTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamNmTokensTypeBuff::GENDEFNAME, getNmTokensTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamNumberTypeBuff::GENDEFNAME, getNumberTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamStringTypeBuff::GENDEFNAME, getStringTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamTZDateTypeBuff::GENDEFNAME, getTZDateTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamTZTimeTypeBuff::GENDEFNAME, getTZTimeTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamTZTimestampTypeBuff::GENDEFNAME, getTZTimestampTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamTextTypeBuff::GENDEFNAME, getTextTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamTimeTypeBuff::GENDEFNAME, getTimeTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamTimestampTypeBuff::GENDEFNAME, getTimestampTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamTokenTypeBuff::GENDEFNAME, getTokenTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamUInt16TypeBuff::GENDEFNAME, getUInt16TypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamUInt32TypeBuff::GENDEFNAME, getUInt32TypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamUInt64TypeBuff::GENDEFNAME, getUInt64TypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamUuidTypeBuff::GENDEFNAME, getUuidTypeHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamUuidGenBuff::GENDEFNAME, getUuidGenHandler() );
			schemaDefHandler->addElementHandler( cfbam::CFBamSchemaRefBuff::GENDEFNAME, getSchemaRefHandler() );
		}
		return( schemaDefHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjImportHandler* CFBamSaxLoader::getSchemaDefCafeSchemaObjImportHandler() {
		if( schemaDefCafeSchemaObjImportHandler == NULL ) {
			schemaDefCafeSchemaObjImportHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjImportHandler( this );
		}
		return( schemaDefCafeSchemaObjImportHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjInterfaceHandler* CFBamSaxLoader::getSchemaDefCafeSchemaObjInterfaceHandler() {
		if( schemaDefCafeSchemaObjInterfaceHandler == NULL ) {
			schemaDefCafeSchemaObjInterfaceHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjInterfaceHandler( this );
		}
		return( schemaDefCafeSchemaObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCafeSchemaObjMembersHandler() {
		if( schemaDefCafeSchemaObjMembersHandler == NULL ) {
			schemaDefCafeSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjMembersHandler( this );
		}
		return( schemaDefCafeSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjImplementationHandler* CFBamSaxLoader::getSchemaDefCafeSchemaObjImplementationHandler() {
		if( schemaDefCafeSchemaObjImplementationHandler == NULL ) {
			schemaDefCafeSchemaObjImplementationHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeSchemaObjImplementationHandler( this );
		}
		return( schemaDefCafeSchemaObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCafeDb2LUWSchemaObjMembersHandler() {
		if( schemaDefCafeDb2LUWSchemaObjMembersHandler == NULL ) {
			schemaDefCafeDb2LUWSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjMembersHandler( this );
		}
		return( schemaDefCafeDb2LUWSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCafeDb2LUWSchemaObjImplHandler() {
		if( schemaDefCafeDb2LUWSchemaObjImplHandler == NULL ) {
			schemaDefCafeDb2LUWSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjImplHandler( this );
		}
		return( schemaDefCafeDb2LUWSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjImportHandler* CFBamSaxLoader::getSchemaDefCafeDb2LUWSchemaObjImportHandler() {
		if( schemaDefCafeDb2LUWSchemaObjImportHandler == NULL ) {
			schemaDefCafeDb2LUWSchemaObjImportHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeDb2LUWSchemaObjImportHandler( this );
		}
		return( schemaDefCafeDb2LUWSchemaObjImportHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCafeMSSqlSchemaObjMembersHandler() {
		if( schemaDefCafeMSSqlSchemaObjMembersHandler == NULL ) {
			schemaDefCafeMSSqlSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjMembersHandler( this );
		}
		return( schemaDefCafeMSSqlSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCafeMSSqlSchemaObjImplHandler() {
		if( schemaDefCafeMSSqlSchemaObjImplHandler == NULL ) {
			schemaDefCafeMSSqlSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjImplHandler( this );
		}
		return( schemaDefCafeMSSqlSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjImportHandler* CFBamSaxLoader::getSchemaDefCafeMSSqlSchemaObjImportHandler() {
		if( schemaDefCafeMSSqlSchemaObjImportHandler == NULL ) {
			schemaDefCafeMSSqlSchemaObjImportHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeMSSqlSchemaObjImportHandler( this );
		}
		return( schemaDefCafeMSSqlSchemaObjImportHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCafeMySqlSchemaObjMembersHandler() {
		if( schemaDefCafeMySqlSchemaObjMembersHandler == NULL ) {
			schemaDefCafeMySqlSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjMembersHandler( this );
		}
		return( schemaDefCafeMySqlSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCafeMySqlSchemaObjImplHandler() {
		if( schemaDefCafeMySqlSchemaObjImplHandler == NULL ) {
			schemaDefCafeMySqlSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjImplHandler( this );
		}
		return( schemaDefCafeMySqlSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjImportHandler* CFBamSaxLoader::getSchemaDefCafeMySqlSchemaObjImportHandler() {
		if( schemaDefCafeMySqlSchemaObjImportHandler == NULL ) {
			schemaDefCafeMySqlSchemaObjImportHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeMySqlSchemaObjImportHandler( this );
		}
		return( schemaDefCafeMySqlSchemaObjImportHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeOracleSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCafeOracleSchemaObjMembersHandler() {
		if( schemaDefCafeOracleSchemaObjMembersHandler == NULL ) {
			schemaDefCafeOracleSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeOracleSchemaObjMembersHandler( this );
		}
		return( schemaDefCafeOracleSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeOracleSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCafeOracleSchemaObjImplHandler() {
		if( schemaDefCafeOracleSchemaObjImplHandler == NULL ) {
			schemaDefCafeOracleSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeOracleSchemaObjImplHandler( this );
		}
		return( schemaDefCafeOracleSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeOracleSchemaObjImportHandler* CFBamSaxLoader::getSchemaDefCafeOracleSchemaObjImportHandler() {
		if( schemaDefCafeOracleSchemaObjImportHandler == NULL ) {
			schemaDefCafeOracleSchemaObjImportHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeOracleSchemaObjImportHandler( this );
		}
		return( schemaDefCafeOracleSchemaObjImportHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCafePgSqlSchemaObjMembersHandler() {
		if( schemaDefCafePgSqlSchemaObjMembersHandler == NULL ) {
			schemaDefCafePgSqlSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjMembersHandler( this );
		}
		return( schemaDefCafePgSqlSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCafePgSqlSchemaObjImplHandler() {
		if( schemaDefCafePgSqlSchemaObjImplHandler == NULL ) {
			schemaDefCafePgSqlSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjImplHandler( this );
		}
		return( schemaDefCafePgSqlSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjImportHandler* CFBamSaxLoader::getSchemaDefCafePgSqlSchemaObjImportHandler() {
		if( schemaDefCafePgSqlSchemaObjImportHandler == NULL ) {
			schemaDefCafePgSqlSchemaObjImportHandler = new cfbam::CFBamSaxLoaderSchemaDefCafePgSqlSchemaObjImportHandler( this );
		}
		return( schemaDefCafePgSqlSchemaObjImportHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeRamSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCafeRamSchemaObjMembersHandler() {
		if( schemaDefCafeRamSchemaObjMembersHandler == NULL ) {
			schemaDefCafeRamSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeRamSchemaObjMembersHandler( this );
		}
		return( schemaDefCafeRamSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeRamSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCafeRamSchemaObjImplHandler() {
		if( schemaDefCafeRamSchemaObjImplHandler == NULL ) {
			schemaDefCafeRamSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeRamSchemaObjImplHandler( this );
		}
		return( schemaDefCafeRamSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeRamSchemaObjImportHandler* CFBamSaxLoader::getSchemaDefCafeRamSchemaObjImportHandler() {
		if( schemaDefCafeRamSchemaObjImportHandler == NULL ) {
			schemaDefCafeRamSchemaObjImportHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeRamSchemaObjImportHandler( this );
		}
		return( schemaDefCafeRamSchemaObjImportHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgSchemaImportHandler* CFBamSaxLoader::getSchemaDefCafeXMsgSchemaImportHandler() {
		if( schemaDefCafeXMsgSchemaImportHandler == NULL ) {
			schemaDefCafeXMsgSchemaImportHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgSchemaImportHandler( this );
		}
		return( schemaDefCafeXMsgSchemaImportHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgSchemaFormattersHandler* CFBamSaxLoader::getSchemaDefCafeXMsgSchemaFormattersHandler() {
		if( schemaDefCafeXMsgSchemaFormattersHandler == NULL ) {
			schemaDefCafeXMsgSchemaFormattersHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgSchemaFormattersHandler( this );
		}
		return( schemaDefCafeXMsgSchemaFormattersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgClientSchemaImportHandler* CFBamSaxLoader::getSchemaDefCafeXMsgClientSchemaImportHandler() {
		if( schemaDefCafeXMsgClientSchemaImportHandler == NULL ) {
			schemaDefCafeXMsgClientSchemaImportHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgClientSchemaImportHandler( this );
		}
		return( schemaDefCafeXMsgClientSchemaImportHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgClientSchemaBodyHandler* CFBamSaxLoader::getSchemaDefCafeXMsgClientSchemaBodyHandler() {
		if( schemaDefCafeXMsgClientSchemaBodyHandler == NULL ) {
			schemaDefCafeXMsgClientSchemaBodyHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgClientSchemaBodyHandler( this );
		}
		return( schemaDefCafeXMsgClientSchemaBodyHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaBodyHandler* CFBamSaxLoader::getSchemaDefCafeXMsgRqstSchemaBodyHandler() {
		if( schemaDefCafeXMsgRqstSchemaBodyHandler == NULL ) {
			schemaDefCafeXMsgRqstSchemaBodyHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaBodyHandler( this );
		}
		return( schemaDefCafeXMsgRqstSchemaBodyHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaImportHandler* CFBamSaxLoader::getSchemaDefCafeXMsgRqstSchemaImportHandler() {
		if( schemaDefCafeXMsgRqstSchemaImportHandler == NULL ) {
			schemaDefCafeXMsgRqstSchemaImportHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaImportHandler( this );
		}
		return( schemaDefCafeXMsgRqstSchemaImportHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaWireParsersHandler* CFBamSaxLoader::getSchemaDefCafeXMsgRqstSchemaWireParsersHandler() {
		if( schemaDefCafeXMsgRqstSchemaWireParsersHandler == NULL ) {
			schemaDefCafeXMsgRqstSchemaWireParsersHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaWireParsersHandler( this );
		}
		return( schemaDefCafeXMsgRqstSchemaWireParsersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaXsdSpecHandler* CFBamSaxLoader::getSchemaDefCafeXMsgRqstSchemaXsdSpecHandler() {
		if( schemaDefCafeXMsgRqstSchemaXsdSpecHandler == NULL ) {
			schemaDefCafeXMsgRqstSchemaXsdSpecHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRqstSchemaXsdSpecHandler( this );
		}
		return( schemaDefCafeXMsgRqstSchemaXsdSpecHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeSchemaXsdElementListHandler* CFBamSaxLoader::getSchemaDefCafeSchemaXsdElementListHandler() {
		if( schemaDefCafeSchemaXsdElementListHandler == NULL ) {
			schemaDefCafeSchemaXsdElementListHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeSchemaXsdElementListHandler( this );
		}
		return( schemaDefCafeSchemaXsdElementListHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaBodyHandler* CFBamSaxLoader::getSchemaDefCafeXMsgRspnSchemaBodyHandler() {
		if( schemaDefCafeXMsgRspnSchemaBodyHandler == NULL ) {
			schemaDefCafeXMsgRspnSchemaBodyHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaBodyHandler( this );
		}
		return( schemaDefCafeXMsgRspnSchemaBodyHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaImportHandler* CFBamSaxLoader::getSchemaDefCafeXMsgRspnSchemaImportHandler() {
		if( schemaDefCafeXMsgRspnSchemaImportHandler == NULL ) {
			schemaDefCafeXMsgRspnSchemaImportHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaImportHandler( this );
		}
		return( schemaDefCafeXMsgRspnSchemaImportHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaWireParsersHandler* CFBamSaxLoader::getSchemaDefCafeXMsgRspnSchemaWireParsersHandler() {
		if( schemaDefCafeXMsgRspnSchemaWireParsersHandler == NULL ) {
			schemaDefCafeXMsgRspnSchemaWireParsersHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaWireParsersHandler( this );
		}
		return( schemaDefCafeXMsgRspnSchemaWireParsersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaXsdElementListHandler* CFBamSaxLoader::getSchemaDefCafeXMsgRspnSchemaXsdElementListHandler() {
		if( schemaDefCafeXMsgRspnSchemaXsdElementListHandler == NULL ) {
			schemaDefCafeXMsgRspnSchemaXsdElementListHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaXsdElementListHandler( this );
		}
		return( schemaDefCafeXMsgRspnSchemaXsdElementListHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaXsdSpecHandler* CFBamSaxLoader::getSchemaDefCafeXMsgRspnSchemaXsdSpecHandler() {
		if( schemaDefCafeXMsgRspnSchemaXsdSpecHandler == NULL ) {
			schemaDefCafeXMsgRspnSchemaXsdSpecHandler = new cfbam::CFBamSaxLoaderSchemaDefCafeXMsgRspnSchemaXsdSpecHandler( this );
		}
		return( schemaDefCafeXMsgRspnSchemaXsdSpecHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefCPlusSchemaObjIncludeHandler() {
		if( schemaDefCPlusSchemaObjIncludeHandler == NULL ) {
			schemaDefCPlusSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjIncludeHandler( this );
		}
		return( schemaDefCPlusSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjInterfaceHandler* CFBamSaxLoader::getSchemaDefCPlusSchemaObjInterfaceHandler() {
		if( schemaDefCPlusSchemaObjInterfaceHandler == NULL ) {
			schemaDefCPlusSchemaObjInterfaceHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjInterfaceHandler( this );
		}
		return( schemaDefCPlusSchemaObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCPlusSchemaObjMembersHandler() {
		if( schemaDefCPlusSchemaObjMembersHandler == NULL ) {
			schemaDefCPlusSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjMembersHandler( this );
		}
		return( schemaDefCPlusSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjImplementationHandler* CFBamSaxLoader::getSchemaDefCPlusSchemaObjImplementationHandler() {
		if( schemaDefCPlusSchemaObjImplementationHandler == NULL ) {
			schemaDefCPlusSchemaObjImplementationHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusSchemaObjImplementationHandler( this );
		}
		return( schemaDefCPlusSchemaObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCPlusDb2LUWSchemaObjMembersHandler() {
		if( schemaDefCPlusDb2LUWSchemaObjMembersHandler == NULL ) {
			schemaDefCPlusDb2LUWSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjMembersHandler( this );
		}
		return( schemaDefCPlusDb2LUWSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCPlusDb2LUWSchemaObjImplHandler() {
		if( schemaDefCPlusDb2LUWSchemaObjImplHandler == NULL ) {
			schemaDefCPlusDb2LUWSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjImplHandler( this );
		}
		return( schemaDefCPlusDb2LUWSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefCPlusDb2LUWSchemaObjIncludeHandler() {
		if( schemaDefCPlusDb2LUWSchemaObjIncludeHandler == NULL ) {
			schemaDefCPlusDb2LUWSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusDb2LUWSchemaObjIncludeHandler( this );
		}
		return( schemaDefCPlusDb2LUWSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCPlusMSSqlSchemaObjMembersHandler() {
		if( schemaDefCPlusMSSqlSchemaObjMembersHandler == NULL ) {
			schemaDefCPlusMSSqlSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjMembersHandler( this );
		}
		return( schemaDefCPlusMSSqlSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCPlusMSSqlSchemaObjImplHandler() {
		if( schemaDefCPlusMSSqlSchemaObjImplHandler == NULL ) {
			schemaDefCPlusMSSqlSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjImplHandler( this );
		}
		return( schemaDefCPlusMSSqlSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefCPlusMSSqlSchemaObjIncludeHandler() {
		if( schemaDefCPlusMSSqlSchemaObjIncludeHandler == NULL ) {
			schemaDefCPlusMSSqlSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusMSSqlSchemaObjIncludeHandler( this );
		}
		return( schemaDefCPlusMSSqlSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCPlusMySqlSchemaObjMembersHandler() {
		if( schemaDefCPlusMySqlSchemaObjMembersHandler == NULL ) {
			schemaDefCPlusMySqlSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjMembersHandler( this );
		}
		return( schemaDefCPlusMySqlSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCPlusMySqlSchemaObjImplHandler() {
		if( schemaDefCPlusMySqlSchemaObjImplHandler == NULL ) {
			schemaDefCPlusMySqlSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjImplHandler( this );
		}
		return( schemaDefCPlusMySqlSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefCPlusMySqlSchemaObjIncludeHandler() {
		if( schemaDefCPlusMySqlSchemaObjIncludeHandler == NULL ) {
			schemaDefCPlusMySqlSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusMySqlSchemaObjIncludeHandler( this );
		}
		return( schemaDefCPlusMySqlSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCPlusOracleSchemaObjMembersHandler() {
		if( schemaDefCPlusOracleSchemaObjMembersHandler == NULL ) {
			schemaDefCPlusOracleSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjMembersHandler( this );
		}
		return( schemaDefCPlusOracleSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCPlusOracleSchemaObjImplHandler() {
		if( schemaDefCPlusOracleSchemaObjImplHandler == NULL ) {
			schemaDefCPlusOracleSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjImplHandler( this );
		}
		return( schemaDefCPlusOracleSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefCPlusOracleSchemaObjIncludeHandler() {
		if( schemaDefCPlusOracleSchemaObjIncludeHandler == NULL ) {
			schemaDefCPlusOracleSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusOracleSchemaObjIncludeHandler( this );
		}
		return( schemaDefCPlusOracleSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCPlusPgSqlSchemaObjMembersHandler() {
		if( schemaDefCPlusPgSqlSchemaObjMembersHandler == NULL ) {
			schemaDefCPlusPgSqlSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjMembersHandler( this );
		}
		return( schemaDefCPlusPgSqlSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCPlusPgSqlSchemaObjImplHandler() {
		if( schemaDefCPlusPgSqlSchemaObjImplHandler == NULL ) {
			schemaDefCPlusPgSqlSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjImplHandler( this );
		}
		return( schemaDefCPlusPgSqlSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefCPlusPgSqlSchemaObjIncludeHandler() {
		if( schemaDefCPlusPgSqlSchemaObjIncludeHandler == NULL ) {
			schemaDefCPlusPgSqlSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusPgSqlSchemaObjIncludeHandler( this );
		}
		return( schemaDefCPlusPgSqlSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusRamSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCPlusRamSchemaObjMembersHandler() {
		if( schemaDefCPlusRamSchemaObjMembersHandler == NULL ) {
			schemaDefCPlusRamSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusRamSchemaObjMembersHandler( this );
		}
		return( schemaDefCPlusRamSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusRamSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCPlusRamSchemaObjImplHandler() {
		if( schemaDefCPlusRamSchemaObjImplHandler == NULL ) {
			schemaDefCPlusRamSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusRamSchemaObjImplHandler( this );
		}
		return( schemaDefCPlusRamSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusRamSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefCPlusRamSchemaObjIncludeHandler() {
		if( schemaDefCPlusRamSchemaObjIncludeHandler == NULL ) {
			schemaDefCPlusRamSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusRamSchemaObjIncludeHandler( this );
		}
		return( schemaDefCPlusRamSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgSchemaIncludeHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgSchemaIncludeHandler() {
		if( schemaDefCPlusXMsgSchemaIncludeHandler == NULL ) {
			schemaDefCPlusXMsgSchemaIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgSchemaIncludeHandler( this );
		}
		return( schemaDefCPlusXMsgSchemaIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgSchemaFormattersHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgSchemaFormattersHandler() {
		if( schemaDefCPlusXMsgSchemaFormattersHandler == NULL ) {
			schemaDefCPlusXMsgSchemaFormattersHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgSchemaFormattersHandler( this );
		}
		return( schemaDefCPlusXMsgSchemaFormattersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgClientSchemaIncludeHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgClientSchemaIncludeHandler() {
		if( schemaDefCPlusXMsgClientSchemaIncludeHandler == NULL ) {
			schemaDefCPlusXMsgClientSchemaIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgClientSchemaIncludeHandler( this );
		}
		return( schemaDefCPlusXMsgClientSchemaIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgClientSchemaBodyHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgClientSchemaBodyHandler() {
		if( schemaDefCPlusXMsgClientSchemaBodyHandler == NULL ) {
			schemaDefCPlusXMsgClientSchemaBodyHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgClientSchemaBodyHandler( this );
		}
		return( schemaDefCPlusXMsgClientSchemaBodyHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaBodyHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgRqstSchemaBodyHandler() {
		if( schemaDefCPlusXMsgRqstSchemaBodyHandler == NULL ) {
			schemaDefCPlusXMsgRqstSchemaBodyHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaBodyHandler( this );
		}
		return( schemaDefCPlusXMsgRqstSchemaBodyHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaIncludeHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgRqstSchemaIncludeHandler() {
		if( schemaDefCPlusXMsgRqstSchemaIncludeHandler == NULL ) {
			schemaDefCPlusXMsgRqstSchemaIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaIncludeHandler( this );
		}
		return( schemaDefCPlusXMsgRqstSchemaIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaWireParsersHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgRqstSchemaWireParsersHandler() {
		if( schemaDefCPlusXMsgRqstSchemaWireParsersHandler == NULL ) {
			schemaDefCPlusXMsgRqstSchemaWireParsersHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaWireParsersHandler( this );
		}
		return( schemaDefCPlusXMsgRqstSchemaWireParsersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaXsdSpecHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgRqstSchemaXsdSpecHandler() {
		if( schemaDefCPlusXMsgRqstSchemaXsdSpecHandler == NULL ) {
			schemaDefCPlusXMsgRqstSchemaXsdSpecHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaXsdSpecHandler( this );
		}
		return( schemaDefCPlusXMsgRqstSchemaXsdSpecHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaXsdElementListHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgRqstSchemaXsdElementListHandler() {
		if( schemaDefCPlusXMsgRqstSchemaXsdElementListHandler == NULL ) {
			schemaDefCPlusXMsgRqstSchemaXsdElementListHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRqstSchemaXsdElementListHandler( this );
		}
		return( schemaDefCPlusXMsgRqstSchemaXsdElementListHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXmsgRspnSchemaBodyHandler* CFBamSaxLoader::getSchemaDefCPlusXmsgRspnSchemaBodyHandler() {
		if( schemaDefCPlusXmsgRspnSchemaBodyHandler == NULL ) {
			schemaDefCPlusXmsgRspnSchemaBodyHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXmsgRspnSchemaBodyHandler( this );
		}
		return( schemaDefCPlusXmsgRspnSchemaBodyHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaIncludeHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgRspnSchemaIncludeHandler() {
		if( schemaDefCPlusXMsgRspnSchemaIncludeHandler == NULL ) {
			schemaDefCPlusXMsgRspnSchemaIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaIncludeHandler( this );
		}
		return( schemaDefCPlusXMsgRspnSchemaIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaWireParsersHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgRspnSchemaWireParsersHandler() {
		if( schemaDefCPlusXMsgRspnSchemaWireParsersHandler == NULL ) {
			schemaDefCPlusXMsgRspnSchemaWireParsersHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaWireParsersHandler( this );
		}
		return( schemaDefCPlusXMsgRspnSchemaWireParsersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaXsdElementListHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgRspnSchemaXsdElementListHandler() {
		if( schemaDefCPlusXMsgRspnSchemaXsdElementListHandler == NULL ) {
			schemaDefCPlusXMsgRspnSchemaXsdElementListHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaXsdElementListHandler( this );
		}
		return( schemaDefCPlusXMsgRspnSchemaXsdElementListHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaXsdSpecHandler* CFBamSaxLoader::getSchemaDefCPlusXMsgRspnSchemaXsdSpecHandler() {
		if( schemaDefCPlusXMsgRspnSchemaXsdSpecHandler == NULL ) {
			schemaDefCPlusXMsgRspnSchemaXsdSpecHandler = new cfbam::CFBamSaxLoaderSchemaDefCPlusXMsgRspnSchemaXsdSpecHandler( this );
		}
		return( schemaDefCPlusXMsgRspnSchemaXsdSpecHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefHPlusSchemaObjIncludeHandler() {
		if( schemaDefHPlusSchemaObjIncludeHandler == NULL ) {
			schemaDefHPlusSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjIncludeHandler( this );
		}
		return( schemaDefHPlusSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjInterfaceHandler* CFBamSaxLoader::getSchemaDefHPlusSchemaObjInterfaceHandler() {
		if( schemaDefHPlusSchemaObjInterfaceHandler == NULL ) {
			schemaDefHPlusSchemaObjInterfaceHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjInterfaceHandler( this );
		}
		return( schemaDefHPlusSchemaObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefHPlusSchemaObjMembersHandler() {
		if( schemaDefHPlusSchemaObjMembersHandler == NULL ) {
			schemaDefHPlusSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjMembersHandler( this );
		}
		return( schemaDefHPlusSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjImplementationHandler* CFBamSaxLoader::getSchemaDefHPlusSchemaObjImplementationHandler() {
		if( schemaDefHPlusSchemaObjImplementationHandler == NULL ) {
			schemaDefHPlusSchemaObjImplementationHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusSchemaObjImplementationHandler( this );
		}
		return( schemaDefHPlusSchemaObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefHPlusDb2LUWSchemaObjMembersHandler() {
		if( schemaDefHPlusDb2LUWSchemaObjMembersHandler == NULL ) {
			schemaDefHPlusDb2LUWSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjMembersHandler( this );
		}
		return( schemaDefHPlusDb2LUWSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefHPlusDb2LUWSchemaObjImplHandler() {
		if( schemaDefHPlusDb2LUWSchemaObjImplHandler == NULL ) {
			schemaDefHPlusDb2LUWSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjImplHandler( this );
		}
		return( schemaDefHPlusDb2LUWSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefHPlusDb2LUWSchemaObjIncludeHandler() {
		if( schemaDefHPlusDb2LUWSchemaObjIncludeHandler == NULL ) {
			schemaDefHPlusDb2LUWSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusDb2LUWSchemaObjIncludeHandler( this );
		}
		return( schemaDefHPlusDb2LUWSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefHPlusMSSqlSchemaObjMembersHandler() {
		if( schemaDefHPlusMSSqlSchemaObjMembersHandler == NULL ) {
			schemaDefHPlusMSSqlSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjMembersHandler( this );
		}
		return( schemaDefHPlusMSSqlSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefHPlusMSSqlSchemaObjImplHandler() {
		if( schemaDefHPlusMSSqlSchemaObjImplHandler == NULL ) {
			schemaDefHPlusMSSqlSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjImplHandler( this );
		}
		return( schemaDefHPlusMSSqlSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefHPlusMSSqlSchemaObjIncludeHandler() {
		if( schemaDefHPlusMSSqlSchemaObjIncludeHandler == NULL ) {
			schemaDefHPlusMSSqlSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusMSSqlSchemaObjIncludeHandler( this );
		}
		return( schemaDefHPlusMSSqlSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefHPlusMySqlSchemaObjMembersHandler() {
		if( schemaDefHPlusMySqlSchemaObjMembersHandler == NULL ) {
			schemaDefHPlusMySqlSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjMembersHandler( this );
		}
		return( schemaDefHPlusMySqlSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefHPlusMySqlSchemaObjImplHandler() {
		if( schemaDefHPlusMySqlSchemaObjImplHandler == NULL ) {
			schemaDefHPlusMySqlSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjImplHandler( this );
		}
		return( schemaDefHPlusMySqlSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefHPlusMySqlSchemaObjIncludeHandler() {
		if( schemaDefHPlusMySqlSchemaObjIncludeHandler == NULL ) {
			schemaDefHPlusMySqlSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusMySqlSchemaObjIncludeHandler( this );
		}
		return( schemaDefHPlusMySqlSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefHPlusOracleSchemaObjMembersHandler() {
		if( schemaDefHPlusOracleSchemaObjMembersHandler == NULL ) {
			schemaDefHPlusOracleSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjMembersHandler( this );
		}
		return( schemaDefHPlusOracleSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefHPlusOracleSchemaObjImplHandler() {
		if( schemaDefHPlusOracleSchemaObjImplHandler == NULL ) {
			schemaDefHPlusOracleSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjImplHandler( this );
		}
		return( schemaDefHPlusOracleSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefHPlusOracleSchemaObjIncludeHandler() {
		if( schemaDefHPlusOracleSchemaObjIncludeHandler == NULL ) {
			schemaDefHPlusOracleSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusOracleSchemaObjIncludeHandler( this );
		}
		return( schemaDefHPlusOracleSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefHPlusPgSqlSchemaObjMembersHandler() {
		if( schemaDefHPlusPgSqlSchemaObjMembersHandler == NULL ) {
			schemaDefHPlusPgSqlSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjMembersHandler( this );
		}
		return( schemaDefHPlusPgSqlSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefHPlusPgSqlSchemaObjImplHandler() {
		if( schemaDefHPlusPgSqlSchemaObjImplHandler == NULL ) {
			schemaDefHPlusPgSqlSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjImplHandler( this );
		}
		return( schemaDefHPlusPgSqlSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefHPlusPgSqlSchemaObjIncludeHandler() {
		if( schemaDefHPlusPgSqlSchemaObjIncludeHandler == NULL ) {
			schemaDefHPlusPgSqlSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusPgSqlSchemaObjIncludeHandler( this );
		}
		return( schemaDefHPlusPgSqlSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusRamSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefHPlusRamSchemaObjMembersHandler() {
		if( schemaDefHPlusRamSchemaObjMembersHandler == NULL ) {
			schemaDefHPlusRamSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusRamSchemaObjMembersHandler( this );
		}
		return( schemaDefHPlusRamSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusRamSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefHPlusRamSchemaObjImplHandler() {
		if( schemaDefHPlusRamSchemaObjImplHandler == NULL ) {
			schemaDefHPlusRamSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusRamSchemaObjImplHandler( this );
		}
		return( schemaDefHPlusRamSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusRamSchemaObjIncludeHandler* CFBamSaxLoader::getSchemaDefHPlusRamSchemaObjIncludeHandler() {
		if( schemaDefHPlusRamSchemaObjIncludeHandler == NULL ) {
			schemaDefHPlusRamSchemaObjIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusRamSchemaObjIncludeHandler( this );
		}
		return( schemaDefHPlusRamSchemaObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgSchemaIncludeHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgSchemaIncludeHandler() {
		if( schemaDefHPlusXMsgSchemaIncludeHandler == NULL ) {
			schemaDefHPlusXMsgSchemaIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgSchemaIncludeHandler( this );
		}
		return( schemaDefHPlusXMsgSchemaIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgSchemaFormattersHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgSchemaFormattersHandler() {
		if( schemaDefHPlusXMsgSchemaFormattersHandler == NULL ) {
			schemaDefHPlusXMsgSchemaFormattersHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgSchemaFormattersHandler( this );
		}
		return( schemaDefHPlusXMsgSchemaFormattersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgClientSchemaIncludeHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgClientSchemaIncludeHandler() {
		if( schemaDefHPlusXMsgClientSchemaIncludeHandler == NULL ) {
			schemaDefHPlusXMsgClientSchemaIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgClientSchemaIncludeHandler( this );
		}
		return( schemaDefHPlusXMsgClientSchemaIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgClientSchemaBodyHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgClientSchemaBodyHandler() {
		if( schemaDefHPlusXMsgClientSchemaBodyHandler == NULL ) {
			schemaDefHPlusXMsgClientSchemaBodyHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgClientSchemaBodyHandler( this );
		}
		return( schemaDefHPlusXMsgClientSchemaBodyHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaBodyHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgRqstSchemaBodyHandler() {
		if( schemaDefHPlusXMsgRqstSchemaBodyHandler == NULL ) {
			schemaDefHPlusXMsgRqstSchemaBodyHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaBodyHandler( this );
		}
		return( schemaDefHPlusXMsgRqstSchemaBodyHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaIncludeHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgRqstSchemaIncludeHandler() {
		if( schemaDefHPlusXMsgRqstSchemaIncludeHandler == NULL ) {
			schemaDefHPlusXMsgRqstSchemaIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaIncludeHandler( this );
		}
		return( schemaDefHPlusXMsgRqstSchemaIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaWireParsersHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgRqstSchemaWireParsersHandler() {
		if( schemaDefHPlusXMsgRqstSchemaWireParsersHandler == NULL ) {
			schemaDefHPlusXMsgRqstSchemaWireParsersHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaWireParsersHandler( this );
		}
		return( schemaDefHPlusXMsgRqstSchemaWireParsersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaXsdSpecHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgRqstSchemaXsdSpecHandler() {
		if( schemaDefHPlusXMsgRqstSchemaXsdSpecHandler == NULL ) {
			schemaDefHPlusXMsgRqstSchemaXsdSpecHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaXsdSpecHandler( this );
		}
		return( schemaDefHPlusXMsgRqstSchemaXsdSpecHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaXsdElementListHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgRqstSchemaXsdElementListHandler() {
		if( schemaDefHPlusXMsgRqstSchemaXsdElementListHandler == NULL ) {
			schemaDefHPlusXMsgRqstSchemaXsdElementListHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRqstSchemaXsdElementListHandler( this );
		}
		return( schemaDefHPlusXMsgRqstSchemaXsdElementListHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaBodyHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgRspnSchemaBodyHandler() {
		if( schemaDefHPlusXMsgRspnSchemaBodyHandler == NULL ) {
			schemaDefHPlusXMsgRspnSchemaBodyHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaBodyHandler( this );
		}
		return( schemaDefHPlusXMsgRspnSchemaBodyHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaIncludeHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgRspnSchemaIncludeHandler() {
		if( schemaDefHPlusXMsgRspnSchemaIncludeHandler == NULL ) {
			schemaDefHPlusXMsgRspnSchemaIncludeHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaIncludeHandler( this );
		}
		return( schemaDefHPlusXMsgRspnSchemaIncludeHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaWireParsersHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgRspnSchemaWireParsersHandler() {
		if( schemaDefHPlusXMsgRspnSchemaWireParsersHandler == NULL ) {
			schemaDefHPlusXMsgRspnSchemaWireParsersHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaWireParsersHandler( this );
		}
		return( schemaDefHPlusXMsgRspnSchemaWireParsersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaXsdElementListHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgRspnSchemaXsdElementListHandler() {
		if( schemaDefHPlusXMsgRspnSchemaXsdElementListHandler == NULL ) {
			schemaDefHPlusXMsgRspnSchemaXsdElementListHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaXsdElementListHandler( this );
		}
		return( schemaDefHPlusXMsgRspnSchemaXsdElementListHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaXsdSpecHandler* CFBamSaxLoader::getSchemaDefHPlusXMsgRspnSchemaXsdSpecHandler() {
		if( schemaDefHPlusXMsgRspnSchemaXsdSpecHandler == NULL ) {
			schemaDefHPlusXMsgRspnSchemaXsdSpecHandler = new cfbam::CFBamSaxLoaderSchemaDefHPlusXMsgRspnSchemaXsdSpecHandler( this );
		}
		return( schemaDefHPlusXMsgRspnSchemaXsdSpecHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjUsingHandler* CFBamSaxLoader::getSchemaDefCSharpSchemaObjUsingHandler() {
		if( schemaDefCSharpSchemaObjUsingHandler == NULL ) {
			schemaDefCSharpSchemaObjUsingHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjUsingHandler( this );
		}
		return( schemaDefCSharpSchemaObjUsingHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjInterfaceHandler* CFBamSaxLoader::getSchemaDefCSharpSchemaObjInterfaceHandler() {
		if( schemaDefCSharpSchemaObjInterfaceHandler == NULL ) {
			schemaDefCSharpSchemaObjInterfaceHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjInterfaceHandler( this );
		}
		return( schemaDefCSharpSchemaObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCSharpSchemaObjMembersHandler() {
		if( schemaDefCSharpSchemaObjMembersHandler == NULL ) {
			schemaDefCSharpSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjMembersHandler( this );
		}
		return( schemaDefCSharpSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjImplementationHandler* CFBamSaxLoader::getSchemaDefCSharpSchemaObjImplementationHandler() {
		if( schemaDefCSharpSchemaObjImplementationHandler == NULL ) {
			schemaDefCSharpSchemaObjImplementationHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpSchemaObjImplementationHandler( this );
		}
		return( schemaDefCSharpSchemaObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCSharpDb2LUWSchemaObjMembersHandler() {
		if( schemaDefCSharpDb2LUWSchemaObjMembersHandler == NULL ) {
			schemaDefCSharpDb2LUWSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjMembersHandler( this );
		}
		return( schemaDefCSharpDb2LUWSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCSharpDb2LUWSchemaObjImplHandler() {
		if( schemaDefCSharpDb2LUWSchemaObjImplHandler == NULL ) {
			schemaDefCSharpDb2LUWSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjImplHandler( this );
		}
		return( schemaDefCSharpDb2LUWSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjUsingHandler* CFBamSaxLoader::getSchemaDefCSharpDb2LUWSchemaObjUsingHandler() {
		if( schemaDefCSharpDb2LUWSchemaObjUsingHandler == NULL ) {
			schemaDefCSharpDb2LUWSchemaObjUsingHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpDb2LUWSchemaObjUsingHandler( this );
		}
		return( schemaDefCSharpDb2LUWSchemaObjUsingHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCSharpMSSqlSchemaObjMembersHandler() {
		if( schemaDefCSharpMSSqlSchemaObjMembersHandler == NULL ) {
			schemaDefCSharpMSSqlSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjMembersHandler( this );
		}
		return( schemaDefCSharpMSSqlSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCSharpMSSqlSchemaObjImplHandler() {
		if( schemaDefCSharpMSSqlSchemaObjImplHandler == NULL ) {
			schemaDefCSharpMSSqlSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjImplHandler( this );
		}
		return( schemaDefCSharpMSSqlSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjUsingHandler* CFBamSaxLoader::getSchemaDefCSharpMSSqlSchemaObjUsingHandler() {
		if( schemaDefCSharpMSSqlSchemaObjUsingHandler == NULL ) {
			schemaDefCSharpMSSqlSchemaObjUsingHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpMSSqlSchemaObjUsingHandler( this );
		}
		return( schemaDefCSharpMSSqlSchemaObjUsingHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCSharpMySqlSchemaObjMembersHandler() {
		if( schemaDefCSharpMySqlSchemaObjMembersHandler == NULL ) {
			schemaDefCSharpMySqlSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjMembersHandler( this );
		}
		return( schemaDefCSharpMySqlSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCSharpMySqlSchemaObjImplHandler() {
		if( schemaDefCSharpMySqlSchemaObjImplHandler == NULL ) {
			schemaDefCSharpMySqlSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjImplHandler( this );
		}
		return( schemaDefCSharpMySqlSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjUsingHandler* CFBamSaxLoader::getSchemaDefCSharpMySqlSchemaObjUsingHandler() {
		if( schemaDefCSharpMySqlSchemaObjUsingHandler == NULL ) {
			schemaDefCSharpMySqlSchemaObjUsingHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpMySqlSchemaObjUsingHandler( this );
		}
		return( schemaDefCSharpMySqlSchemaObjUsingHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCSharpOracleSchemaObjMembersHandler() {
		if( schemaDefCSharpOracleSchemaObjMembersHandler == NULL ) {
			schemaDefCSharpOracleSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjMembersHandler( this );
		}
		return( schemaDefCSharpOracleSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCSharpOracleSchemaObjImplHandler() {
		if( schemaDefCSharpOracleSchemaObjImplHandler == NULL ) {
			schemaDefCSharpOracleSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjImplHandler( this );
		}
		return( schemaDefCSharpOracleSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjUsingHandler* CFBamSaxLoader::getSchemaDefCSharpOracleSchemaObjUsingHandler() {
		if( schemaDefCSharpOracleSchemaObjUsingHandler == NULL ) {
			schemaDefCSharpOracleSchemaObjUsingHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpOracleSchemaObjUsingHandler( this );
		}
		return( schemaDefCSharpOracleSchemaObjUsingHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCSharpPgSqlSchemaObjMembersHandler() {
		if( schemaDefCSharpPgSqlSchemaObjMembersHandler == NULL ) {
			schemaDefCSharpPgSqlSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjMembersHandler( this );
		}
		return( schemaDefCSharpPgSqlSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCSharpPgSqlSchemaObjImplHandler() {
		if( schemaDefCSharpPgSqlSchemaObjImplHandler == NULL ) {
			schemaDefCSharpPgSqlSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjImplHandler( this );
		}
		return( schemaDefCSharpPgSqlSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjUsingHandler* CFBamSaxLoader::getSchemaDefCSharpPgSqlSchemaObjUsingHandler() {
		if( schemaDefCSharpPgSqlSchemaObjUsingHandler == NULL ) {
			schemaDefCSharpPgSqlSchemaObjUsingHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpPgSqlSchemaObjUsingHandler( this );
		}
		return( schemaDefCSharpPgSqlSchemaObjUsingHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpRamSchemaObjMembersHandler* CFBamSaxLoader::getSchemaDefCSharpRamSchemaObjMembersHandler() {
		if( schemaDefCSharpRamSchemaObjMembersHandler == NULL ) {
			schemaDefCSharpRamSchemaObjMembersHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpRamSchemaObjMembersHandler( this );
		}
		return( schemaDefCSharpRamSchemaObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpRamSchemaObjImplHandler* CFBamSaxLoader::getSchemaDefCSharpRamSchemaObjImplHandler() {
		if( schemaDefCSharpRamSchemaObjImplHandler == NULL ) {
			schemaDefCSharpRamSchemaObjImplHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpRamSchemaObjImplHandler( this );
		}
		return( schemaDefCSharpRamSchemaObjImplHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpRamSchemaObjUsingHandler* CFBamSaxLoader::getSchemaDefCSharpRamSchemaObjUsingHandler() {
		if( schemaDefCSharpRamSchemaObjUsingHandler == NULL ) {
			schemaDefCSharpRamSchemaObjUsingHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpRamSchemaObjUsingHandler( this );
		}
		return( schemaDefCSharpRamSchemaObjUsingHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgSchemaUsingHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgSchemaUsingHandler() {
		if( schemaDefCSharpXMsgSchemaUsingHandler == NULL ) {
			schemaDefCSharpXMsgSchemaUsingHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgSchemaUsingHandler( this );
		}
		return( schemaDefCSharpXMsgSchemaUsingHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgSchemaFormattersHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgSchemaFormattersHandler() {
		if( schemaDefCSharpXMsgSchemaFormattersHandler == NULL ) {
			schemaDefCSharpXMsgSchemaFormattersHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgSchemaFormattersHandler( this );
		}
		return( schemaDefCSharpXMsgSchemaFormattersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgClientSchemaUsingHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgClientSchemaUsingHandler() {
		if( schemaDefCSharpXMsgClientSchemaUsingHandler == NULL ) {
			schemaDefCSharpXMsgClientSchemaUsingHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgClientSchemaUsingHandler( this );
		}
		return( schemaDefCSharpXMsgClientSchemaUsingHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgClientSchemaBodyHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgClientSchemaBodyHandler() {
		if( schemaDefCSharpXMsgClientSchemaBodyHandler == NULL ) {
			schemaDefCSharpXMsgClientSchemaBodyHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgClientSchemaBodyHandler( this );
		}
		return( schemaDefCSharpXMsgClientSchemaBodyHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaBodyHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgRqstSchemaBodyHandler() {
		if( schemaDefCSharpXMsgRqstSchemaBodyHandler == NULL ) {
			schemaDefCSharpXMsgRqstSchemaBodyHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaBodyHandler( this );
		}
		return( schemaDefCSharpXMsgRqstSchemaBodyHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaUsingHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgRqstSchemaUsingHandler() {
		if( schemaDefCSharpXMsgRqstSchemaUsingHandler == NULL ) {
			schemaDefCSharpXMsgRqstSchemaUsingHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaUsingHandler( this );
		}
		return( schemaDefCSharpXMsgRqstSchemaUsingHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaWireParsersHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgRqstSchemaWireParsersHandler() {
		if( schemaDefCSharpXMsgRqstSchemaWireParsersHandler == NULL ) {
			schemaDefCSharpXMsgRqstSchemaWireParsersHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaWireParsersHandler( this );
		}
		return( schemaDefCSharpXMsgRqstSchemaWireParsersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaXsdSpecHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgRqstSchemaXsdSpecHandler() {
		if( schemaDefCSharpXMsgRqstSchemaXsdSpecHandler == NULL ) {
			schemaDefCSharpXMsgRqstSchemaXsdSpecHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaXsdSpecHandler( this );
		}
		return( schemaDefCSharpXMsgRqstSchemaXsdSpecHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaXsdElementListHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgRqstSchemaXsdElementListHandler() {
		if( schemaDefCSharpXMsgRqstSchemaXsdElementListHandler == NULL ) {
			schemaDefCSharpXMsgRqstSchemaXsdElementListHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRqstSchemaXsdElementListHandler( this );
		}
		return( schemaDefCSharpXMsgRqstSchemaXsdElementListHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaBodyHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgRspnSchemaBodyHandler() {
		if( schemaDefCSharpXMsgRspnSchemaBodyHandler == NULL ) {
			schemaDefCSharpXMsgRspnSchemaBodyHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaBodyHandler( this );
		}
		return( schemaDefCSharpXMsgRspnSchemaBodyHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaUsingHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgRspnSchemaUsingHandler() {
		if( schemaDefCSharpXMsgRspnSchemaUsingHandler == NULL ) {
			schemaDefCSharpXMsgRspnSchemaUsingHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaUsingHandler( this );
		}
		return( schemaDefCSharpXMsgRspnSchemaUsingHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaWireParsersHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgRspnSchemaWireParsersHandler() {
		if( schemaDefCSharpXMsgRspnSchemaWireParsersHandler == NULL ) {
			schemaDefCSharpXMsgRspnSchemaWireParsersHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaWireParsersHandler( this );
		}
		return( schemaDefCSharpXMsgRspnSchemaWireParsersHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaXsdElementListHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgRspnSchemaXsdElementListHandler() {
		if( schemaDefCSharpXMsgRspnSchemaXsdElementListHandler == NULL ) {
			schemaDefCSharpXMsgRspnSchemaXsdElementListHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaXsdElementListHandler( this );
		}
		return( schemaDefCSharpXMsgRspnSchemaXsdElementListHandler );
	}

	cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaXsdSpecHandler* CFBamSaxLoader::getSchemaDefCSharpXMsgRspnSchemaXsdSpecHandler() {
		if( schemaDefCSharpXMsgRspnSchemaXsdSpecHandler == NULL ) {
			schemaDefCSharpXMsgRspnSchemaXsdSpecHandler = new cfbam::CFBamSaxLoaderSchemaDefCSharpXMsgRspnSchemaXsdSpecHandler( this );
		}
		return( schemaDefCSharpXMsgRspnSchemaXsdSpecHandler );
	}

	cfbam::CFBamSaxLoaderSchemaRefHandler* CFBamSaxLoader::getSchemaRefHandler() {
		if( schemaRefHandler == NULL ) {
			schemaRefHandler = new cfbam::CFBamSaxLoaderSchemaRefHandler( this );
		}
		return( schemaRefHandler );
	}

	cfbam::CFBamSaxLoaderScopeHandler* CFBamSaxLoader::getScopeHandler() {
		if( scopeHandler == NULL ) {
			scopeHandler = new cfbam::CFBamSaxLoaderScopeHandler( this );
		}
		return( scopeHandler );
	}

	cfbam::CFBamSaxLoaderSecAppHandler* CFBamSaxLoader::getSecAppHandler() {
		if( secAppHandler == NULL ) {
			secAppHandler = new cfbam::CFBamSaxLoaderSecAppHandler( this );
			secAppHandler->addElementHandler( cfsec::CFSecSecFormBuff::GENDEFNAME, getSecFormHandler() );
		}
		return( secAppHandler );
	}

	cfbam::CFBamSaxLoaderSecDeviceHandler* CFBamSaxLoader::getSecDeviceHandler() {
		if( secDeviceHandler == NULL ) {
			secDeviceHandler = new cfbam::CFBamSaxLoaderSecDeviceHandler( this );
		}
		return( secDeviceHandler );
	}

	cfbam::CFBamSaxLoaderSecFormHandler* CFBamSaxLoader::getSecFormHandler() {
		if( secFormHandler == NULL ) {
			secFormHandler = new cfbam::CFBamSaxLoaderSecFormHandler( this );
		}
		return( secFormHandler );
	}

	cfbam::CFBamSaxLoaderSecGroupHandler* CFBamSaxLoader::getSecGroupHandler() {
		if( secGroupHandler == NULL ) {
			secGroupHandler = new cfbam::CFBamSaxLoaderSecGroupHandler( this );
			secGroupHandler->addElementHandler( cfsec::CFSecSecGrpIncBuff::GENDEFNAME, getSecGrpIncHandler() );
			secGroupHandler->addElementHandler( cfsec::CFSecSecGrpMembBuff::GENDEFNAME, getSecGrpMembHandler() );
			secGroupHandler->addElementHandler( cfsec::CFSecSecGroupFormBuff::GENDEFNAME, getSecGroupFormHandler() );
		}
		return( secGroupHandler );
	}

	cfbam::CFBamSaxLoaderSecGroupFormHandler* CFBamSaxLoader::getSecGroupFormHandler() {
		if( secGroupFormHandler == NULL ) {
			secGroupFormHandler = new cfbam::CFBamSaxLoaderSecGroupFormHandler( this );
		}
		return( secGroupFormHandler );
	}

	cfbam::CFBamSaxLoaderSecGrpIncHandler* CFBamSaxLoader::getSecGrpIncHandler() {
		if( secGrpIncHandler == NULL ) {
			secGrpIncHandler = new cfbam::CFBamSaxLoaderSecGrpIncHandler( this );
		}
		return( secGrpIncHandler );
	}

	cfbam::CFBamSaxLoaderSecGrpMembHandler* CFBamSaxLoader::getSecGrpMembHandler() {
		if( secGrpMembHandler == NULL ) {
			secGrpMembHandler = new cfbam::CFBamSaxLoaderSecGrpMembHandler( this );
		}
		return( secGrpMembHandler );
	}

	cfbam::CFBamSaxLoaderSecSessionHandler* CFBamSaxLoader::getSecSessionHandler() {
		if( secSessionHandler == NULL ) {
			secSessionHandler = new cfbam::CFBamSaxLoaderSecSessionHandler( this );
		}
		return( secSessionHandler );
	}

	cfbam::CFBamSaxLoaderSecUserHandler* CFBamSaxLoader::getSecUserHandler() {
		if( secUserHandler == NULL ) {
			secUserHandler = new cfbam::CFBamSaxLoaderSecUserHandler( this );
			secUserHandler->addElementHandler( cfsec::CFSecSecDeviceBuff::GENDEFNAME, getSecDeviceHandler() );
			secUserHandler->addElementHandler( cfsec::CFSecSecSessionBuff::GENDEFNAME, getSecSessionHandler() );
		}
		return( secUserHandler );
	}

	cfbam::CFBamSaxLoaderServerListFuncHandler* CFBamSaxLoader::getServerListFuncHandler() {
		if( serverListFuncHandler == NULL ) {
			serverListFuncHandler = new cfbam::CFBamSaxLoaderServerListFuncHandler( this );
			serverListFuncHandler->addElementHandler( cfbam::CFBamParamBuff::GENDEFNAME, getParamHandler() );
		}
		return( serverListFuncHandler );
	}

	cfbam::CFBamSaxLoaderServerMethodHandler* CFBamSaxLoader::getServerMethodHandler() {
		if( serverMethodHandler == NULL ) {
			serverMethodHandler = new cfbam::CFBamSaxLoaderServerMethodHandler( this );
			serverMethodHandler->addElementHandler( cfbam::CFBamParamBuff::GENDEFNAME, getParamHandler() );
		}
		return( serverMethodHandler );
	}

	cfbam::CFBamSaxLoaderServerObjFuncHandler* CFBamSaxLoader::getServerObjFuncHandler() {
		if( serverObjFuncHandler == NULL ) {
			serverObjFuncHandler = new cfbam::CFBamSaxLoaderServerObjFuncHandler( this );
			serverObjFuncHandler->addElementHandler( cfbam::CFBamParamBuff::GENDEFNAME, getParamHandler() );
		}
		return( serverObjFuncHandler );
	}

	cfbam::CFBamSaxLoaderServerProcHandler* CFBamSaxLoader::getServerProcHandler() {
		if( serverProcHandler == NULL ) {
			serverProcHandler = new cfbam::CFBamSaxLoaderServerProcHandler( this );
			serverProcHandler->addElementHandler( cfbam::CFBamParamBuff::GENDEFNAME, getParamHandler() );
		}
		return( serverProcHandler );
	}

	cfbam::CFBamSaxLoaderServiceHandler* CFBamSaxLoader::getServiceHandler() {
		if( serviceHandler == NULL ) {
			serviceHandler = new cfbam::CFBamSaxLoaderServiceHandler( this );
		}
		return( serviceHandler );
	}

	cfbam::CFBamSaxLoaderServiceTypeHandler* CFBamSaxLoader::getServiceTypeHandler() {
		if( serviceTypeHandler == NULL ) {
			serviceTypeHandler = new cfbam::CFBamSaxLoaderServiceTypeHandler( this );
		}
		return( serviceTypeHandler );
	}

	cfbam::CFBamSaxLoaderStringColHandler* CFBamSaxLoader::getStringColHandler() {
		if( stringColHandler == NULL ) {
			stringColHandler = new cfbam::CFBamSaxLoaderStringColHandler( this );
		}
		return( stringColHandler );
	}

	cfbam::CFBamSaxLoaderStringDefHandler* CFBamSaxLoader::getStringDefHandler() {
		if( stringDefHandler == NULL ) {
			stringDefHandler = new cfbam::CFBamSaxLoaderStringDefHandler( this );
		}
		return( stringDefHandler );
	}

	cfbam::CFBamSaxLoaderStringTypeHandler* CFBamSaxLoader::getStringTypeHandler() {
		if( stringTypeHandler == NULL ) {
			stringTypeHandler = new cfbam::CFBamSaxLoaderStringTypeHandler( this );
		}
		return( stringTypeHandler );
	}

	cfbam::CFBamSaxLoaderSubProjectHandler* CFBamSaxLoader::getSubProjectHandler() {
		if( subProjectHandler == NULL ) {
			subProjectHandler = new cfbam::CFBamSaxLoaderSubProjectHandler( this );
			subProjectHandler->addElementHandler( cfint::CFIntMajorVersionBuff::GENDEFNAME, getMajorVersionHandler() );
		}
		return( subProjectHandler );
	}

	cfbam::CFBamSaxLoaderSysClusterHandler* CFBamSaxLoader::getSysClusterHandler() {
		if( sysClusterHandler == NULL ) {
			sysClusterHandler = new cfbam::CFBamSaxLoaderSysClusterHandler( this );
		}
		return( sysClusterHandler );
	}

	cfbam::CFBamSaxLoaderTSecGroupHandler* CFBamSaxLoader::getTSecGroupHandler() {
		if( tSecGroupHandler == NULL ) {
			tSecGroupHandler = new cfbam::CFBamSaxLoaderTSecGroupHandler( this );
			tSecGroupHandler->addElementHandler( cfsec::CFSecTSecGrpIncBuff::GENDEFNAME, getTSecGrpIncHandler() );
			tSecGroupHandler->addElementHandler( cfsec::CFSecTSecGrpMembBuff::GENDEFNAME, getTSecGrpMembHandler() );
		}
		return( tSecGroupHandler );
	}

	cfbam::CFBamSaxLoaderTSecGrpIncHandler* CFBamSaxLoader::getTSecGrpIncHandler() {
		if( tSecGrpIncHandler == NULL ) {
			tSecGrpIncHandler = new cfbam::CFBamSaxLoaderTSecGrpIncHandler( this );
		}
		return( tSecGrpIncHandler );
	}

	cfbam::CFBamSaxLoaderTSecGrpMembHandler* CFBamSaxLoader::getTSecGrpMembHandler() {
		if( tSecGrpMembHandler == NULL ) {
			tSecGrpMembHandler = new cfbam::CFBamSaxLoaderTSecGrpMembHandler( this );
		}
		return( tSecGrpMembHandler );
	}

	cfbam::CFBamSaxLoaderTZDateColHandler* CFBamSaxLoader::getTZDateColHandler() {
		if( tZDateColHandler == NULL ) {
			tZDateColHandler = new cfbam::CFBamSaxLoaderTZDateColHandler( this );
		}
		return( tZDateColHandler );
	}

	cfbam::CFBamSaxLoaderTZDateDefHandler* CFBamSaxLoader::getTZDateDefHandler() {
		if( tZDateDefHandler == NULL ) {
			tZDateDefHandler = new cfbam::CFBamSaxLoaderTZDateDefHandler( this );
		}
		return( tZDateDefHandler );
	}

	cfbam::CFBamSaxLoaderTZDateTypeHandler* CFBamSaxLoader::getTZDateTypeHandler() {
		if( tZDateTypeHandler == NULL ) {
			tZDateTypeHandler = new cfbam::CFBamSaxLoaderTZDateTypeHandler( this );
		}
		return( tZDateTypeHandler );
	}

	cfbam::CFBamSaxLoaderTZTimeColHandler* CFBamSaxLoader::getTZTimeColHandler() {
		if( tZTimeColHandler == NULL ) {
			tZTimeColHandler = new cfbam::CFBamSaxLoaderTZTimeColHandler( this );
		}
		return( tZTimeColHandler );
	}

	cfbam::CFBamSaxLoaderTZTimeDefHandler* CFBamSaxLoader::getTZTimeDefHandler() {
		if( tZTimeDefHandler == NULL ) {
			tZTimeDefHandler = new cfbam::CFBamSaxLoaderTZTimeDefHandler( this );
		}
		return( tZTimeDefHandler );
	}

	cfbam::CFBamSaxLoaderTZTimeTypeHandler* CFBamSaxLoader::getTZTimeTypeHandler() {
		if( tZTimeTypeHandler == NULL ) {
			tZTimeTypeHandler = new cfbam::CFBamSaxLoaderTZTimeTypeHandler( this );
		}
		return( tZTimeTypeHandler );
	}

	cfbam::CFBamSaxLoaderTZTimestampColHandler* CFBamSaxLoader::getTZTimestampColHandler() {
		if( tZTimestampColHandler == NULL ) {
			tZTimestampColHandler = new cfbam::CFBamSaxLoaderTZTimestampColHandler( this );
		}
		return( tZTimestampColHandler );
	}

	cfbam::CFBamSaxLoaderTZTimestampDefHandler* CFBamSaxLoader::getTZTimestampDefHandler() {
		if( tZTimestampDefHandler == NULL ) {
			tZTimestampDefHandler = new cfbam::CFBamSaxLoaderTZTimestampDefHandler( this );
		}
		return( tZTimestampDefHandler );
	}

	cfbam::CFBamSaxLoaderTZTimestampTypeHandler* CFBamSaxLoader::getTZTimestampTypeHandler() {
		if( tZTimestampTypeHandler == NULL ) {
			tZTimestampTypeHandler = new cfbam::CFBamSaxLoaderTZTimestampTypeHandler( this );
		}
		return( tZTimestampTypeHandler );
	}

	cfbam::CFBamSaxLoaderTableHandler* CFBamSaxLoader::getTableHandler() {
		if( tableHandler == NULL ) {
			tableHandler = new cfbam::CFBamSaxLoaderTableHandler( this );
			tableHandler->addElementHandler( "CafeObjMembers", getTableCafeObjMembersHandler() );
			tableHandler->addElementHandler( "CafeObjInterface", getTableCafeObjInterfaceHandler() );
			tableHandler->addElementHandler( "CafeObjImport", getTableCafeObjImportHandler() );
			tableHandler->addElementHandler( "CafeObjImplementation", getTableCafeObjImplementationHandler() );
			tableHandler->addElementHandler( "CafeEditObjMembers", getTableCafeEditObjMembersHandler() );
			tableHandler->addElementHandler( "CafeEditObjInterface", getTableCafeEditObjInterfaceHandler() );
			tableHandler->addElementHandler( "CafeEditObjImport", getTableCafeEditObjImportHandler() );
			tableHandler->addElementHandler( "CafeEditObjImplementation", getTableCafeEditObjImplementationHandler() );
			tableHandler->addElementHandler( "CafeTableImport", getTableCafeTableImportHandler() );
			tableHandler->addElementHandler( "CafeTableMembers", getTableCafeTableMembersHandler() );
			tableHandler->addElementHandler( "CafeTableInterface", getTableCafeTableInterfaceHandler() );
			tableHandler->addElementHandler( "CafeTableImplementation", getTableCafeTableImplementationHandler() );
			tableHandler->addElementHandler( "CafeTableObjImport", getTableCafeTableObjImportHandler() );
			tableHandler->addElementHandler( "CafeTableObjMembers", getTableCafeTableObjMembersHandler() );
			tableHandler->addElementHandler( "CafeTableObjInterface", getTableCafeTableObjInterfaceHandler() );
			tableHandler->addElementHandler( "CafeTableObjImplementation", getTableCafeTableObjImplementationHandler() );
			tableHandler->addElementHandler( "CafeDb2LUWTableImport", getTableCafeDb2LUWTableImportHandler() );
			tableHandler->addElementHandler( "CafeDb2LUWTableMembers", getTableCafeDb2LUWTableMembersHandler() );
			tableHandler->addElementHandler( "CafeDb2LUWTableImplementation", getTableCafeDb2LUWTableImplementationHandler() );
			tableHandler->addElementHandler( "CafeMSSqlTableImport", getTableCafeMSSqlTableImportHandler() );
			tableHandler->addElementHandler( "CafeMSSqlTableMembers", getTableCafeMSSqlTableMembersHandler() );
			tableHandler->addElementHandler( "CafeMSSqlTableImplementation", getTableCafeMSSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CafeMySqlTableImport", getTableCafeMySqlTableImportHandler() );
			tableHandler->addElementHandler( "CafeMySqlTableMembers", getTableCafeMySqlTableMembersHandler() );
			tableHandler->addElementHandler( "CafeMySqlTableImplementation", getTableCafeMySqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CafeOracleTableImport", getTableCafeOracleTableImportHandler() );
			tableHandler->addElementHandler( "CafeOracleTableMembers", getTableCafeOracleTableMembersHandler() );
			tableHandler->addElementHandler( "CafeOracleTableImplementation", getTableCafeOracleTableImplementationHandler() );
			tableHandler->addElementHandler( "CafePgSqlTableImport", getTableCafePgSqlTableImportHandler() );
			tableHandler->addElementHandler( "CafePgSqlTableMembers", getTableCafePgSqlTableMembersHandler() );
			tableHandler->addElementHandler( "CafePgSqlTableImplementation", getTableCafePgSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CafeRamTableImport", getTableCafeRamTableImportHandler() );
			tableHandler->addElementHandler( "CafeRamTableMembers", getTableCafeRamTableMembersHandler() );
			tableHandler->addElementHandler( "CafeRamTableImplementation", getTableCafeRamTableImplementationHandler() );
			tableHandler->addElementHandler( "CafeSaxLoaderImport", getTableCafeSaxLoaderImportHandler() );
			tableHandler->addElementHandler( "CafeSaxLoaderStartElement", getTableCafeSaxLoaderStartElementHandler() );
			tableHandler->addElementHandler( "CafeSaxLoaderEndElement", getTableCafeSaxLoaderEndElementHandler() );
			tableHandler->addElementHandler( "CafeXMsgTableImport", getTableCafeXMsgTableImportHandler() );
			tableHandler->addElementHandler( "CafeXMsgTableformatters", getTableCafeXMsgTableformattersHandler() );
			tableHandler->addElementHandler( "CafeXMsgRqstTableImport", getTableCafeXMsgRqstTableImportHandler() );
			tableHandler->addElementHandler( "CafeXMsgRspnTableImport", getTableCafeXMsgRspnTableImportHandler() );
			tableHandler->addElementHandler( "CafeXMsgClientTableImport", getTableCafeXMsgClientTableImportHandler() );
			tableHandler->addElementHandler( "CafeXMsgRqstTableBody", getTableCafeXMsgRqstTableBodyHandler() );
			tableHandler->addElementHandler( "CafeXMsgRspnTableBody", getTableCafeXMsgRspnTableBodyHandler() );
			tableHandler->addElementHandler( "CafeXMsgClientTableBody", getTableCafeXMsgClientTableBodyHandler() );
			tableHandler->addElementHandler( "CPlusObjMembers", getTableCPlusObjMembersHandler() );
			tableHandler->addElementHandler( "CPlusObjInterface", getTableCPlusObjInterfaceHandler() );
			tableHandler->addElementHandler( "CPlusObjInclude", getTableCPlusObjIncludeHandler() );
			tableHandler->addElementHandler( "CPlusObjImplementation", getTableCPlusObjImplementationHandler() );
			tableHandler->addElementHandler( "CPlusEditObjMembers", getTableCPlusEditObjMembersHandler() );
			tableHandler->addElementHandler( "CPlusEditObjInterace", getTableCPlusEditObjInteraceHandler() );
			tableHandler->addElementHandler( "CPlusEditObjInclude", getTableCPlusEditObjIncludeHandler() );
			tableHandler->addElementHandler( "CPlusEditObjImplementation", getTableCPlusEditObjImplementationHandler() );
			tableHandler->addElementHandler( "CPlusTableInclude", getTableCPlusTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusTableMembers", getTableCPlusTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusTableInterface", getTableCPlusTableInterfaceHandler() );
			tableHandler->addElementHandler( "CPlusTableImplementation", getTableCPlusTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusTableObjInclude", getTableCPlusTableObjIncludeHandler() );
			tableHandler->addElementHandler( "CPlusTableObjMembers", getTableCPlusTableObjMembersHandler() );
			tableHandler->addElementHandler( "CPlusTableObjInterface", getTableCPlusTableObjInterfaceHandler() );
			tableHandler->addElementHandler( "CPlusTableObjImplementation", getTableCPlusTableObjImplementationHandler() );
			tableHandler->addElementHandler( "CPlusDb2LUWTableInclude", getTableCPlusDb2LUWTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusDb2LUWTableMembers", getTableCPlusDb2LUWTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusDb2LUWTableImplementation", getTableCPlusDb2LUWTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusMSSqlTableInclude", getTableCPlusMSSqlTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusMSSqlTableMembers", getTableCPlusMSSqlTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusMSSqlTableImplementation", getTableCPlusMSSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusMySqlTableInclude", getTableCPlusMySqlTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusMySqlTableMembers", getTableCPlusMySqlTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusMySqlTableImplementation", getTableCPlusMySqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusOracleTableInclude", getTableCPlusOracleTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusOracleTableMembers", getTableCPlusOracleTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusOracleTableImplementation", getTableCPlusOracleTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusPgSqlTableMembers", getTableCPlusPgSqlTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusPgSqlTableImplementation", getTableCPlusPgSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusRamTableInclude", getTableCPlusRamTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusRamTableMembers", getTableCPlusRamTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusRamTableImplementation", getTableCPlusRamTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusSaxLoaderInclude", getTableCPlusSaxLoaderIncludeHandler() );
			tableHandler->addElementHandler( "CPlusSaxLoaderStartElement", getTableCPlusSaxLoaderStartElementHandler() );
			tableHandler->addElementHandler( "CPlusSaxLoaderEndElement", getTableCPlusSaxLoaderEndElementHandler() );
			tableHandler->addElementHandler( "CPlusXMsgTableInclude", getTableCPlusXMsgTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusXMsgTableFormatters", getTableCPlusXMsgTableFormattersHandler() );
			tableHandler->addElementHandler( "CPlusXMsgRqstTableInclude", getTableCPlusXMsgRqstTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusXMsgRspnTableInclude", getTableCPlusXMsgRspnTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusXMsgClientTableInclude", getTableCPlusXMsgClientTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusXMsgRqstTableBody", getTableCPlusXMsgRqstTableBodyHandler() );
			tableHandler->addElementHandler( "CPlusXMsgRspnTableBody", getTableCPlusXMsgRspnTableBodyHandler() );
			tableHandler->addElementHandler( "CPlusXMsgClientTableBody", getTableCPlusXMsgClientTableBodyHandler() );
			tableHandler->addElementHandler( "HPlusObjMembers", getTableHPlusObjMembersHandler() );
			tableHandler->addElementHandler( "HPlusObjInterface", getTableHPlusObjInterfaceHandler() );
			tableHandler->addElementHandler( "HPlusObjInclude", getTableHPlusObjIncludeHandler() );
			tableHandler->addElementHandler( "HPlusObjImplemntation", getTableHPlusObjImplemntationHandler() );
			tableHandler->addElementHandler( "HPlusEditObjMembers", getTableHPlusEditObjMembersHandler() );
			tableHandler->addElementHandler( "HPlusEditObjInterface", getTableHPlusEditObjInterfaceHandler() );
			tableHandler->addElementHandler( "HPlusEditObjInclude", getTableHPlusEditObjIncludeHandler() );
			tableHandler->addElementHandler( "HPlusEditObjImplementation", getTableHPlusEditObjImplementationHandler() );
			tableHandler->addElementHandler( "HPlusTableInclude", getTableHPlusTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusTableMembers", getTableHPlusTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusTableInterface", getTableHPlusTableInterfaceHandler() );
			tableHandler->addElementHandler( "HPlusTableImplementation", getTableHPlusTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusTableObjInclude", getTableHPlusTableObjIncludeHandler() );
			tableHandler->addElementHandler( "HPlusTableObjMembers", getTableHPlusTableObjMembersHandler() );
			tableHandler->addElementHandler( "HPlusTableObjInterface", getTableHPlusTableObjInterfaceHandler() );
			tableHandler->addElementHandler( "HPlusTableObjImplementation", getTableHPlusTableObjImplementationHandler() );
			tableHandler->addElementHandler( "HPlusDb2LUWTableInclude", getTableHPlusDb2LUWTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusDb2LUWTableMembers", getTableHPlusDb2LUWTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusDb2LUWTableImplementation", getTableHPlusDb2LUWTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusMSSqlTableInclude", getTableHPlusMSSqlTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusMSSqlTableMembers", getTableHPlusMSSqlTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusMSSqlTableImplementation", getTableHPlusMSSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusMySqlTableInclude", getTableHPlusMySqlTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusMySqlTableMembers", getTableHPlusMySqlTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusMySqlTableImplementation", getTableHPlusMySqlTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusOracleTableInclude", getTableHPlusOracleTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusOracleTableMembers", getTableHPlusOracleTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusOracleTableImplementation", getTableHPlusOracleTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusPgSqlTableInclude", getTableHPlusPgSqlTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusPgSqlTableMembers", getTableHPlusPgSqlTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusPgSqlTableImplementation", getTableHPlusPgSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusRamTableInclude", getTableHPlusRamTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusRamTableMembers", getTableHPlusRamTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusRamTableImplementation", getTableHPlusRamTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusSaxLoaderInclude", getTableHPlusSaxLoaderIncludeHandler() );
			tableHandler->addElementHandler( "HPlusSaxLoaderStartElement", getTableHPlusSaxLoaderStartElementHandler() );
			tableHandler->addElementHandler( "HPlusSaxLoaderEndElement", getTableHPlusSaxLoaderEndElementHandler() );
			tableHandler->addElementHandler( "HPlusXMsgTableInclude", getTableHPlusXMsgTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusXMsgTableFormatters", getTableHPlusXMsgTableFormattersHandler() );
			tableHandler->addElementHandler( "HPlusXMsgRqstTableInclude", getTableHPlusXMsgRqstTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusXMsgRspnTableInclude", getTableHPlusXMsgRspnTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusXMsgClientTableInclude", getTableHPlusXMsgClientTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusXMsgRqstTableBody", getTableHPlusXMsgRqstTableBodyHandler() );
			tableHandler->addElementHandler( "HPlusXMsgRspnTableBody", getTableHPlusXMsgRspnTableBodyHandler() );
			tableHandler->addElementHandler( "HPlusXMsgClientTableBody", getTableHPlusXMsgClientTableBodyHandler() );
			tableHandler->addElementHandler( "CSharpObjMembers", getTableCSharpObjMembersHandler() );
			tableHandler->addElementHandler( "CSharpObjInterface", getTableCSharpObjInterfaceHandler() );
			tableHandler->addElementHandler( "CSharpObjUsing", getTableCSharpObjUsingHandler() );
			tableHandler->addElementHandler( "CSharpObjImplementation", getTableCSharpObjImplementationHandler() );
			tableHandler->addElementHandler( "CSharpEditObjMembers", getTableCSharpEditObjMembersHandler() );
			tableHandler->addElementHandler( "CSharpEditObjInterface", getTableCSharpEditObjInterfaceHandler() );
			tableHandler->addElementHandler( "CSharpEditObjUsing", getTableCSharpEditObjUsingHandler() );
			tableHandler->addElementHandler( "CSharpEditObjImplementation", getTableCSharpEditObjImplementationHandler() );
			tableHandler->addElementHandler( "CSharpTableUsing", getTableCSharpTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpTableMembers", getTableCSharpTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpTableInterface", getTableCSharpTableInterfaceHandler() );
			tableHandler->addElementHandler( "CSharpTableImplementation", getTableCSharpTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpTableObjUsing", getTableCSharpTableObjUsingHandler() );
			tableHandler->addElementHandler( "CSharpTableObjMembers", getTableCSharpTableObjMembersHandler() );
			tableHandler->addElementHandler( "CSharpTableObjInterface", getTableCSharpTableObjInterfaceHandler() );
			tableHandler->addElementHandler( "CSharpTableObjImplementation", getTableCSharpTableObjImplementationHandler() );
			tableHandler->addElementHandler( "CSharpDb2LUWTableUsing", getTableCSharpDb2LUWTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpDb2LUWTableMembers", getTableCSharpDb2LUWTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpDb2LUWTableImplementation", getTableCSharpDb2LUWTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpMSSqlTableUsing", getTableCSharpMSSqlTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpMSSqlTableMembers", getTableCSharpMSSqlTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpMSSqlTableImplementation", getTableCSharpMSSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpMySqlTableUsing", getTableCSharpMySqlTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpMySqlTableMembers", getTableCSharpMySqlTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpMySqlTableImplementation", getTableCSharpMySqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpOracleTableUsing", getTableCSharpOracleTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpOracleTableMembers", getTableCSharpOracleTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpOracleTableImplementation", getTableCSharpOracleTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpPgSqlTableUsing", getTableCSharpPgSqlTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpPgSqlTableMembers", getTableCSharpPgSqlTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpPgSqlTableImplementation", getTableCSharpPgSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpRamTableUsing", getTableCSharpRamTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpRamTableMembers", getTableCSharpRamTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpRamTableImplementation", getTableCSharpRamTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpSaxLoaderUsing", getTableCSharpSaxLoaderUsingHandler() );
			tableHandler->addElementHandler( "CSharpSaxLoaderStartElement", getTableCSharpSaxLoaderStartElementHandler() );
			tableHandler->addElementHandler( "CSharpSaxLoaderEndElement", getTableCSharpSaxLoaderEndElementHandler() );
			tableHandler->addElementHandler( "CSharpXMsgTableUsing", getTableCSharpXMsgTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpXMsgTableFormatters", getTableCSharpXMsgTableFormattersHandler() );
			tableHandler->addElementHandler( "CSharpXMsgRqstTableUsing", getTableCSharpXMsgRqstTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpXMsgRspnTableUsing", getTableCSharpXMsgRspnTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpXMsgClientTableUsing", getTableCSharpXMsgClientTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpXMsgRqstTableBody", getTableCSharpXMsgRqstTableBodyHandler() );
			tableHandler->addElementHandler( "CSharpXMsgRspnTableBody", getTableCSharpXMsgRspnTableBodyHandler() );
			tableHandler->addElementHandler( "CSharpXMsgClientTableBody", getTableCSharpXMsgClientTableBodyHandler() );
			tableHandler->addElementHandler( cfbam::CFBamRelationBuff::GENDEFNAME, getRelationHandler() );
			tableHandler->addElementHandler( cfbam::CFBamIndexBuff::GENDEFNAME, getIndexHandler() );
			tableHandler->addElementHandler( cfbam::CFBamBlobColBuff::GENDEFNAME, getBlobColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamBoolColBuff::GENDEFNAME, getBoolColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamDateColBuff::GENDEFNAME, getDateColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamDoubleColBuff::GENDEFNAME, getDoubleColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamFloatColBuff::GENDEFNAME, getFloatColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamInt16ColBuff::GENDEFNAME, getInt16ColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamInt32ColBuff::GENDEFNAME, getInt32ColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamInt64ColBuff::GENDEFNAME, getInt64ColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamNmTokenColBuff::GENDEFNAME, getNmTokenColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamNmTokensColBuff::GENDEFNAME, getNmTokensColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamNumberColBuff::GENDEFNAME, getNumberColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamStringColBuff::GENDEFNAME, getStringColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamTZDateColBuff::GENDEFNAME, getTZDateColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamTZTimeColBuff::GENDEFNAME, getTZTimeColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamTZTimestampColBuff::GENDEFNAME, getTZTimestampColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamTextColBuff::GENDEFNAME, getTextColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamTimeColBuff::GENDEFNAME, getTimeColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamTimestampColBuff::GENDEFNAME, getTimestampColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamTokenColBuff::GENDEFNAME, getTokenColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamUInt16ColBuff::GENDEFNAME, getUInt16ColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamUInt32ColBuff::GENDEFNAME, getUInt32ColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamUInt64ColBuff::GENDEFNAME, getUInt64ColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamUuidColBuff::GENDEFNAME, getUuidColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamTableColBuff::GENDEFNAME, getTableColHandler() );
			tableHandler->addElementHandler( cfbam::CFBamChainBuff::GENDEFNAME, getChainHandler() );
			tableHandler->addElementHandler( cfbam::CFBamDelTopDepBuff::GENDEFNAME, getDelTopDepHandler() );
			tableHandler->addElementHandler( cfbam::CFBamClearTopDepBuff::GENDEFNAME, getClearTopDepHandler() );
			tableHandler->addElementHandler( cfbam::CFBamServerMethodBuff::GENDEFNAME, getServerMethodHandler() );
			tableHandler->addElementHandler( cfbam::CFBamServerObjFuncBuff::GENDEFNAME, getServerObjFuncHandler() );
			tableHandler->addElementHandler( cfbam::CFBamServerProcBuff::GENDEFNAME, getServerProcHandler() );
			tableHandler->addElementHandler( cfbam::CFBamServerListFuncBuff::GENDEFNAME, getServerListFuncHandler() );
		}
		return( tableHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeObjMembersHandler* CFBamSaxLoader::getTableCafeObjMembersHandler() {
		if( tableCafeObjMembersHandler == NULL ) {
			tableCafeObjMembersHandler = new cfbam::CFBamSaxLoaderTableCafeObjMembersHandler( this );
		}
		return( tableCafeObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeObjInterfaceHandler* CFBamSaxLoader::getTableCafeObjInterfaceHandler() {
		if( tableCafeObjInterfaceHandler == NULL ) {
			tableCafeObjInterfaceHandler = new cfbam::CFBamSaxLoaderTableCafeObjInterfaceHandler( this );
		}
		return( tableCafeObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeObjImportHandler* CFBamSaxLoader::getTableCafeObjImportHandler() {
		if( tableCafeObjImportHandler == NULL ) {
			tableCafeObjImportHandler = new cfbam::CFBamSaxLoaderTableCafeObjImportHandler( this );
		}
		return( tableCafeObjImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeObjImplementationHandler* CFBamSaxLoader::getTableCafeObjImplementationHandler() {
		if( tableCafeObjImplementationHandler == NULL ) {
			tableCafeObjImplementationHandler = new cfbam::CFBamSaxLoaderTableCafeObjImplementationHandler( this );
		}
		return( tableCafeObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeEditObjMembersHandler* CFBamSaxLoader::getTableCafeEditObjMembersHandler() {
		if( tableCafeEditObjMembersHandler == NULL ) {
			tableCafeEditObjMembersHandler = new cfbam::CFBamSaxLoaderTableCafeEditObjMembersHandler( this );
		}
		return( tableCafeEditObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeEditObjInterfaceHandler* CFBamSaxLoader::getTableCafeEditObjInterfaceHandler() {
		if( tableCafeEditObjInterfaceHandler == NULL ) {
			tableCafeEditObjInterfaceHandler = new cfbam::CFBamSaxLoaderTableCafeEditObjInterfaceHandler( this );
		}
		return( tableCafeEditObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeEditObjImportHandler* CFBamSaxLoader::getTableCafeEditObjImportHandler() {
		if( tableCafeEditObjImportHandler == NULL ) {
			tableCafeEditObjImportHandler = new cfbam::CFBamSaxLoaderTableCafeEditObjImportHandler( this );
		}
		return( tableCafeEditObjImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeEditObjImplementationHandler* CFBamSaxLoader::getTableCafeEditObjImplementationHandler() {
		if( tableCafeEditObjImplementationHandler == NULL ) {
			tableCafeEditObjImplementationHandler = new cfbam::CFBamSaxLoaderTableCafeEditObjImplementationHandler( this );
		}
		return( tableCafeEditObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeTableImportHandler* CFBamSaxLoader::getTableCafeTableImportHandler() {
		if( tableCafeTableImportHandler == NULL ) {
			tableCafeTableImportHandler = new cfbam::CFBamSaxLoaderTableCafeTableImportHandler( this );
		}
		return( tableCafeTableImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeTableMembersHandler* CFBamSaxLoader::getTableCafeTableMembersHandler() {
		if( tableCafeTableMembersHandler == NULL ) {
			tableCafeTableMembersHandler = new cfbam::CFBamSaxLoaderTableCafeTableMembersHandler( this );
		}
		return( tableCafeTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeTableInterfaceHandler* CFBamSaxLoader::getTableCafeTableInterfaceHandler() {
		if( tableCafeTableInterfaceHandler == NULL ) {
			tableCafeTableInterfaceHandler = new cfbam::CFBamSaxLoaderTableCafeTableInterfaceHandler( this );
		}
		return( tableCafeTableInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeTableImplementationHandler* CFBamSaxLoader::getTableCafeTableImplementationHandler() {
		if( tableCafeTableImplementationHandler == NULL ) {
			tableCafeTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCafeTableImplementationHandler( this );
		}
		return( tableCafeTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeTableObjImportHandler* CFBamSaxLoader::getTableCafeTableObjImportHandler() {
		if( tableCafeTableObjImportHandler == NULL ) {
			tableCafeTableObjImportHandler = new cfbam::CFBamSaxLoaderTableCafeTableObjImportHandler( this );
		}
		return( tableCafeTableObjImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeTableObjMembersHandler* CFBamSaxLoader::getTableCafeTableObjMembersHandler() {
		if( tableCafeTableObjMembersHandler == NULL ) {
			tableCafeTableObjMembersHandler = new cfbam::CFBamSaxLoaderTableCafeTableObjMembersHandler( this );
		}
		return( tableCafeTableObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeTableObjInterfaceHandler* CFBamSaxLoader::getTableCafeTableObjInterfaceHandler() {
		if( tableCafeTableObjInterfaceHandler == NULL ) {
			tableCafeTableObjInterfaceHandler = new cfbam::CFBamSaxLoaderTableCafeTableObjInterfaceHandler( this );
		}
		return( tableCafeTableObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeTableObjImplementationHandler* CFBamSaxLoader::getTableCafeTableObjImplementationHandler() {
		if( tableCafeTableObjImplementationHandler == NULL ) {
			tableCafeTableObjImplementationHandler = new cfbam::CFBamSaxLoaderTableCafeTableObjImplementationHandler( this );
		}
		return( tableCafeTableObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeDb2LUWTableImportHandler* CFBamSaxLoader::getTableCafeDb2LUWTableImportHandler() {
		if( tableCafeDb2LUWTableImportHandler == NULL ) {
			tableCafeDb2LUWTableImportHandler = new cfbam::CFBamSaxLoaderTableCafeDb2LUWTableImportHandler( this );
		}
		return( tableCafeDb2LUWTableImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeDb2LUWTableMembersHandler* CFBamSaxLoader::getTableCafeDb2LUWTableMembersHandler() {
		if( tableCafeDb2LUWTableMembersHandler == NULL ) {
			tableCafeDb2LUWTableMembersHandler = new cfbam::CFBamSaxLoaderTableCafeDb2LUWTableMembersHandler( this );
		}
		return( tableCafeDb2LUWTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeDb2LUWTableImplementationHandler* CFBamSaxLoader::getTableCafeDb2LUWTableImplementationHandler() {
		if( tableCafeDb2LUWTableImplementationHandler == NULL ) {
			tableCafeDb2LUWTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCafeDb2LUWTableImplementationHandler( this );
		}
		return( tableCafeDb2LUWTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeMSSqlTableImportHandler* CFBamSaxLoader::getTableCafeMSSqlTableImportHandler() {
		if( tableCafeMSSqlTableImportHandler == NULL ) {
			tableCafeMSSqlTableImportHandler = new cfbam::CFBamSaxLoaderTableCafeMSSqlTableImportHandler( this );
		}
		return( tableCafeMSSqlTableImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeMSSqlTableMembersHandler* CFBamSaxLoader::getTableCafeMSSqlTableMembersHandler() {
		if( tableCafeMSSqlTableMembersHandler == NULL ) {
			tableCafeMSSqlTableMembersHandler = new cfbam::CFBamSaxLoaderTableCafeMSSqlTableMembersHandler( this );
		}
		return( tableCafeMSSqlTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeMSSqlTableImplementationHandler* CFBamSaxLoader::getTableCafeMSSqlTableImplementationHandler() {
		if( tableCafeMSSqlTableImplementationHandler == NULL ) {
			tableCafeMSSqlTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCafeMSSqlTableImplementationHandler( this );
		}
		return( tableCafeMSSqlTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeMySqlTableImportHandler* CFBamSaxLoader::getTableCafeMySqlTableImportHandler() {
		if( tableCafeMySqlTableImportHandler == NULL ) {
			tableCafeMySqlTableImportHandler = new cfbam::CFBamSaxLoaderTableCafeMySqlTableImportHandler( this );
		}
		return( tableCafeMySqlTableImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeMySqlTableMembersHandler* CFBamSaxLoader::getTableCafeMySqlTableMembersHandler() {
		if( tableCafeMySqlTableMembersHandler == NULL ) {
			tableCafeMySqlTableMembersHandler = new cfbam::CFBamSaxLoaderTableCafeMySqlTableMembersHandler( this );
		}
		return( tableCafeMySqlTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeMySqlTableImplementationHandler* CFBamSaxLoader::getTableCafeMySqlTableImplementationHandler() {
		if( tableCafeMySqlTableImplementationHandler == NULL ) {
			tableCafeMySqlTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCafeMySqlTableImplementationHandler( this );
		}
		return( tableCafeMySqlTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeOracleTableImportHandler* CFBamSaxLoader::getTableCafeOracleTableImportHandler() {
		if( tableCafeOracleTableImportHandler == NULL ) {
			tableCafeOracleTableImportHandler = new cfbam::CFBamSaxLoaderTableCafeOracleTableImportHandler( this );
		}
		return( tableCafeOracleTableImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeOracleTableMembersHandler* CFBamSaxLoader::getTableCafeOracleTableMembersHandler() {
		if( tableCafeOracleTableMembersHandler == NULL ) {
			tableCafeOracleTableMembersHandler = new cfbam::CFBamSaxLoaderTableCafeOracleTableMembersHandler( this );
		}
		return( tableCafeOracleTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeOracleTableImplementationHandler* CFBamSaxLoader::getTableCafeOracleTableImplementationHandler() {
		if( tableCafeOracleTableImplementationHandler == NULL ) {
			tableCafeOracleTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCafeOracleTableImplementationHandler( this );
		}
		return( tableCafeOracleTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCafePgSqlTableImportHandler* CFBamSaxLoader::getTableCafePgSqlTableImportHandler() {
		if( tableCafePgSqlTableImportHandler == NULL ) {
			tableCafePgSqlTableImportHandler = new cfbam::CFBamSaxLoaderTableCafePgSqlTableImportHandler( this );
		}
		return( tableCafePgSqlTableImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafePgSqlTableMembersHandler* CFBamSaxLoader::getTableCafePgSqlTableMembersHandler() {
		if( tableCafePgSqlTableMembersHandler == NULL ) {
			tableCafePgSqlTableMembersHandler = new cfbam::CFBamSaxLoaderTableCafePgSqlTableMembersHandler( this );
		}
		return( tableCafePgSqlTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCafePgSqlTableImplementationHandler* CFBamSaxLoader::getTableCafePgSqlTableImplementationHandler() {
		if( tableCafePgSqlTableImplementationHandler == NULL ) {
			tableCafePgSqlTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCafePgSqlTableImplementationHandler( this );
		}
		return( tableCafePgSqlTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeRamTableImportHandler* CFBamSaxLoader::getTableCafeRamTableImportHandler() {
		if( tableCafeRamTableImportHandler == NULL ) {
			tableCafeRamTableImportHandler = new cfbam::CFBamSaxLoaderTableCafeRamTableImportHandler( this );
		}
		return( tableCafeRamTableImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeRamTableMembersHandler* CFBamSaxLoader::getTableCafeRamTableMembersHandler() {
		if( tableCafeRamTableMembersHandler == NULL ) {
			tableCafeRamTableMembersHandler = new cfbam::CFBamSaxLoaderTableCafeRamTableMembersHandler( this );
		}
		return( tableCafeRamTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeRamTableImplementationHandler* CFBamSaxLoader::getTableCafeRamTableImplementationHandler() {
		if( tableCafeRamTableImplementationHandler == NULL ) {
			tableCafeRamTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCafeRamTableImplementationHandler( this );
		}
		return( tableCafeRamTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeSaxLoaderImportHandler* CFBamSaxLoader::getTableCafeSaxLoaderImportHandler() {
		if( tableCafeSaxLoaderImportHandler == NULL ) {
			tableCafeSaxLoaderImportHandler = new cfbam::CFBamSaxLoaderTableCafeSaxLoaderImportHandler( this );
		}
		return( tableCafeSaxLoaderImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeSaxLoaderStartElementHandler* CFBamSaxLoader::getTableCafeSaxLoaderStartElementHandler() {
		if( tableCafeSaxLoaderStartElementHandler == NULL ) {
			tableCafeSaxLoaderStartElementHandler = new cfbam::CFBamSaxLoaderTableCafeSaxLoaderStartElementHandler( this );
		}
		return( tableCafeSaxLoaderStartElementHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeSaxLoaderEndElementHandler* CFBamSaxLoader::getTableCafeSaxLoaderEndElementHandler() {
		if( tableCafeSaxLoaderEndElementHandler == NULL ) {
			tableCafeSaxLoaderEndElementHandler = new cfbam::CFBamSaxLoaderTableCafeSaxLoaderEndElementHandler( this );
		}
		return( tableCafeSaxLoaderEndElementHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeXMsgTableImportHandler* CFBamSaxLoader::getTableCafeXMsgTableImportHandler() {
		if( tableCafeXMsgTableImportHandler == NULL ) {
			tableCafeXMsgTableImportHandler = new cfbam::CFBamSaxLoaderTableCafeXMsgTableImportHandler( this );
		}
		return( tableCafeXMsgTableImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeXMsgTableformattersHandler* CFBamSaxLoader::getTableCafeXMsgTableformattersHandler() {
		if( tableCafeXMsgTableformattersHandler == NULL ) {
			tableCafeXMsgTableformattersHandler = new cfbam::CFBamSaxLoaderTableCafeXMsgTableformattersHandler( this );
		}
		return( tableCafeXMsgTableformattersHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeXMsgRqstTableImportHandler* CFBamSaxLoader::getTableCafeXMsgRqstTableImportHandler() {
		if( tableCafeXMsgRqstTableImportHandler == NULL ) {
			tableCafeXMsgRqstTableImportHandler = new cfbam::CFBamSaxLoaderTableCafeXMsgRqstTableImportHandler( this );
		}
		return( tableCafeXMsgRqstTableImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeXMsgRspnTableImportHandler* CFBamSaxLoader::getTableCafeXMsgRspnTableImportHandler() {
		if( tableCafeXMsgRspnTableImportHandler == NULL ) {
			tableCafeXMsgRspnTableImportHandler = new cfbam::CFBamSaxLoaderTableCafeXMsgRspnTableImportHandler( this );
		}
		return( tableCafeXMsgRspnTableImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeXMsgClientTableImportHandler* CFBamSaxLoader::getTableCafeXMsgClientTableImportHandler() {
		if( tableCafeXMsgClientTableImportHandler == NULL ) {
			tableCafeXMsgClientTableImportHandler = new cfbam::CFBamSaxLoaderTableCafeXMsgClientTableImportHandler( this );
		}
		return( tableCafeXMsgClientTableImportHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeXMsgRqstTableBodyHandler* CFBamSaxLoader::getTableCafeXMsgRqstTableBodyHandler() {
		if( tableCafeXMsgRqstTableBodyHandler == NULL ) {
			tableCafeXMsgRqstTableBodyHandler = new cfbam::CFBamSaxLoaderTableCafeXMsgRqstTableBodyHandler( this );
		}
		return( tableCafeXMsgRqstTableBodyHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeXMsgRspnTableBodyHandler* CFBamSaxLoader::getTableCafeXMsgRspnTableBodyHandler() {
		if( tableCafeXMsgRspnTableBodyHandler == NULL ) {
			tableCafeXMsgRspnTableBodyHandler = new cfbam::CFBamSaxLoaderTableCafeXMsgRspnTableBodyHandler( this );
		}
		return( tableCafeXMsgRspnTableBodyHandler );
	}

	cfbam::CFBamSaxLoaderTableCafeXMsgClientTableBodyHandler* CFBamSaxLoader::getTableCafeXMsgClientTableBodyHandler() {
		if( tableCafeXMsgClientTableBodyHandler == NULL ) {
			tableCafeXMsgClientTableBodyHandler = new cfbam::CFBamSaxLoaderTableCafeXMsgClientTableBodyHandler( this );
		}
		return( tableCafeXMsgClientTableBodyHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusObjMembersHandler* CFBamSaxLoader::getTableCPlusObjMembersHandler() {
		if( tableCPlusObjMembersHandler == NULL ) {
			tableCPlusObjMembersHandler = new cfbam::CFBamSaxLoaderTableCPlusObjMembersHandler( this );
		}
		return( tableCPlusObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusObjInterfaceHandler* CFBamSaxLoader::getTableCPlusObjInterfaceHandler() {
		if( tableCPlusObjInterfaceHandler == NULL ) {
			tableCPlusObjInterfaceHandler = new cfbam::CFBamSaxLoaderTableCPlusObjInterfaceHandler( this );
		}
		return( tableCPlusObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusObjIncludeHandler* CFBamSaxLoader::getTableCPlusObjIncludeHandler() {
		if( tableCPlusObjIncludeHandler == NULL ) {
			tableCPlusObjIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusObjIncludeHandler( this );
		}
		return( tableCPlusObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusObjImplementationHandler* CFBamSaxLoader::getTableCPlusObjImplementationHandler() {
		if( tableCPlusObjImplementationHandler == NULL ) {
			tableCPlusObjImplementationHandler = new cfbam::CFBamSaxLoaderTableCPlusObjImplementationHandler( this );
		}
		return( tableCPlusObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusEditObjMembersHandler* CFBamSaxLoader::getTableCPlusEditObjMembersHandler() {
		if( tableCPlusEditObjMembersHandler == NULL ) {
			tableCPlusEditObjMembersHandler = new cfbam::CFBamSaxLoaderTableCPlusEditObjMembersHandler( this );
		}
		return( tableCPlusEditObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusEditObjInteraceHandler* CFBamSaxLoader::getTableCPlusEditObjInteraceHandler() {
		if( tableCPlusEditObjInteraceHandler == NULL ) {
			tableCPlusEditObjInteraceHandler = new cfbam::CFBamSaxLoaderTableCPlusEditObjInteraceHandler( this );
		}
		return( tableCPlusEditObjInteraceHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusEditObjIncludeHandler* CFBamSaxLoader::getTableCPlusEditObjIncludeHandler() {
		if( tableCPlusEditObjIncludeHandler == NULL ) {
			tableCPlusEditObjIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusEditObjIncludeHandler( this );
		}
		return( tableCPlusEditObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusEditObjImplementationHandler* CFBamSaxLoader::getTableCPlusEditObjImplementationHandler() {
		if( tableCPlusEditObjImplementationHandler == NULL ) {
			tableCPlusEditObjImplementationHandler = new cfbam::CFBamSaxLoaderTableCPlusEditObjImplementationHandler( this );
		}
		return( tableCPlusEditObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusTableIncludeHandler* CFBamSaxLoader::getTableCPlusTableIncludeHandler() {
		if( tableCPlusTableIncludeHandler == NULL ) {
			tableCPlusTableIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusTableIncludeHandler( this );
		}
		return( tableCPlusTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusTableMembersHandler* CFBamSaxLoader::getTableCPlusTableMembersHandler() {
		if( tableCPlusTableMembersHandler == NULL ) {
			tableCPlusTableMembersHandler = new cfbam::CFBamSaxLoaderTableCPlusTableMembersHandler( this );
		}
		return( tableCPlusTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusTableInterfaceHandler* CFBamSaxLoader::getTableCPlusTableInterfaceHandler() {
		if( tableCPlusTableInterfaceHandler == NULL ) {
			tableCPlusTableInterfaceHandler = new cfbam::CFBamSaxLoaderTableCPlusTableInterfaceHandler( this );
		}
		return( tableCPlusTableInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusTableImplementationHandler* CFBamSaxLoader::getTableCPlusTableImplementationHandler() {
		if( tableCPlusTableImplementationHandler == NULL ) {
			tableCPlusTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCPlusTableImplementationHandler( this );
		}
		return( tableCPlusTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusTableObjIncludeHandler* CFBamSaxLoader::getTableCPlusTableObjIncludeHandler() {
		if( tableCPlusTableObjIncludeHandler == NULL ) {
			tableCPlusTableObjIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusTableObjIncludeHandler( this );
		}
		return( tableCPlusTableObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusTableObjMembersHandler* CFBamSaxLoader::getTableCPlusTableObjMembersHandler() {
		if( tableCPlusTableObjMembersHandler == NULL ) {
			tableCPlusTableObjMembersHandler = new cfbam::CFBamSaxLoaderTableCPlusTableObjMembersHandler( this );
		}
		return( tableCPlusTableObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusTableObjInterfaceHandler* CFBamSaxLoader::getTableCPlusTableObjInterfaceHandler() {
		if( tableCPlusTableObjInterfaceHandler == NULL ) {
			tableCPlusTableObjInterfaceHandler = new cfbam::CFBamSaxLoaderTableCPlusTableObjInterfaceHandler( this );
		}
		return( tableCPlusTableObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusTableObjImplementationHandler* CFBamSaxLoader::getTableCPlusTableObjImplementationHandler() {
		if( tableCPlusTableObjImplementationHandler == NULL ) {
			tableCPlusTableObjImplementationHandler = new cfbam::CFBamSaxLoaderTableCPlusTableObjImplementationHandler( this );
		}
		return( tableCPlusTableObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusDb2LUWTableIncludeHandler* CFBamSaxLoader::getTableCPlusDb2LUWTableIncludeHandler() {
		if( tableCPlusDb2LUWTableIncludeHandler == NULL ) {
			tableCPlusDb2LUWTableIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusDb2LUWTableIncludeHandler( this );
		}
		return( tableCPlusDb2LUWTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusDb2LUWTableMembersHandler* CFBamSaxLoader::getTableCPlusDb2LUWTableMembersHandler() {
		if( tableCPlusDb2LUWTableMembersHandler == NULL ) {
			tableCPlusDb2LUWTableMembersHandler = new cfbam::CFBamSaxLoaderTableCPlusDb2LUWTableMembersHandler( this );
		}
		return( tableCPlusDb2LUWTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusDb2LUWTableImplementationHandler* CFBamSaxLoader::getTableCPlusDb2LUWTableImplementationHandler() {
		if( tableCPlusDb2LUWTableImplementationHandler == NULL ) {
			tableCPlusDb2LUWTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCPlusDb2LUWTableImplementationHandler( this );
		}
		return( tableCPlusDb2LUWTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusMSSqlTableIncludeHandler* CFBamSaxLoader::getTableCPlusMSSqlTableIncludeHandler() {
		if( tableCPlusMSSqlTableIncludeHandler == NULL ) {
			tableCPlusMSSqlTableIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusMSSqlTableIncludeHandler( this );
		}
		return( tableCPlusMSSqlTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusMSSqlTableMembersHandler* CFBamSaxLoader::getTableCPlusMSSqlTableMembersHandler() {
		if( tableCPlusMSSqlTableMembersHandler == NULL ) {
			tableCPlusMSSqlTableMembersHandler = new cfbam::CFBamSaxLoaderTableCPlusMSSqlTableMembersHandler( this );
		}
		return( tableCPlusMSSqlTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusMSSqlTableImplementationHandler* CFBamSaxLoader::getTableCPlusMSSqlTableImplementationHandler() {
		if( tableCPlusMSSqlTableImplementationHandler == NULL ) {
			tableCPlusMSSqlTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCPlusMSSqlTableImplementationHandler( this );
		}
		return( tableCPlusMSSqlTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusMySqlTableIncludeHandler* CFBamSaxLoader::getTableCPlusMySqlTableIncludeHandler() {
		if( tableCPlusMySqlTableIncludeHandler == NULL ) {
			tableCPlusMySqlTableIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusMySqlTableIncludeHandler( this );
		}
		return( tableCPlusMySqlTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusMySqlTableMembersHandler* CFBamSaxLoader::getTableCPlusMySqlTableMembersHandler() {
		if( tableCPlusMySqlTableMembersHandler == NULL ) {
			tableCPlusMySqlTableMembersHandler = new cfbam::CFBamSaxLoaderTableCPlusMySqlTableMembersHandler( this );
		}
		return( tableCPlusMySqlTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusMySqlTableImplementationHandler* CFBamSaxLoader::getTableCPlusMySqlTableImplementationHandler() {
		if( tableCPlusMySqlTableImplementationHandler == NULL ) {
			tableCPlusMySqlTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCPlusMySqlTableImplementationHandler( this );
		}
		return( tableCPlusMySqlTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusOracleTableIncludeHandler* CFBamSaxLoader::getTableCPlusOracleTableIncludeHandler() {
		if( tableCPlusOracleTableIncludeHandler == NULL ) {
			tableCPlusOracleTableIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusOracleTableIncludeHandler( this );
		}
		return( tableCPlusOracleTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusOracleTableMembersHandler* CFBamSaxLoader::getTableCPlusOracleTableMembersHandler() {
		if( tableCPlusOracleTableMembersHandler == NULL ) {
			tableCPlusOracleTableMembersHandler = new cfbam::CFBamSaxLoaderTableCPlusOracleTableMembersHandler( this );
		}
		return( tableCPlusOracleTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusOracleTableImplementationHandler* CFBamSaxLoader::getTableCPlusOracleTableImplementationHandler() {
		if( tableCPlusOracleTableImplementationHandler == NULL ) {
			tableCPlusOracleTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCPlusOracleTableImplementationHandler( this );
		}
		return( tableCPlusOracleTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusPgSqlTableMembersHandler* CFBamSaxLoader::getTableCPlusPgSqlTableMembersHandler() {
		if( tableCPlusPgSqlTableMembersHandler == NULL ) {
			tableCPlusPgSqlTableMembersHandler = new cfbam::CFBamSaxLoaderTableCPlusPgSqlTableMembersHandler( this );
		}
		return( tableCPlusPgSqlTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusPgSqlTableImplementationHandler* CFBamSaxLoader::getTableCPlusPgSqlTableImplementationHandler() {
		if( tableCPlusPgSqlTableImplementationHandler == NULL ) {
			tableCPlusPgSqlTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCPlusPgSqlTableImplementationHandler( this );
		}
		return( tableCPlusPgSqlTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusRamTableIncludeHandler* CFBamSaxLoader::getTableCPlusRamTableIncludeHandler() {
		if( tableCPlusRamTableIncludeHandler == NULL ) {
			tableCPlusRamTableIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusRamTableIncludeHandler( this );
		}
		return( tableCPlusRamTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusRamTableMembersHandler* CFBamSaxLoader::getTableCPlusRamTableMembersHandler() {
		if( tableCPlusRamTableMembersHandler == NULL ) {
			tableCPlusRamTableMembersHandler = new cfbam::CFBamSaxLoaderTableCPlusRamTableMembersHandler( this );
		}
		return( tableCPlusRamTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusRamTableImplementationHandler* CFBamSaxLoader::getTableCPlusRamTableImplementationHandler() {
		if( tableCPlusRamTableImplementationHandler == NULL ) {
			tableCPlusRamTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCPlusRamTableImplementationHandler( this );
		}
		return( tableCPlusRamTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusSaxLoaderIncludeHandler* CFBamSaxLoader::getTableCPlusSaxLoaderIncludeHandler() {
		if( tableCPlusSaxLoaderIncludeHandler == NULL ) {
			tableCPlusSaxLoaderIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusSaxLoaderIncludeHandler( this );
		}
		return( tableCPlusSaxLoaderIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusSaxLoaderStartElementHandler* CFBamSaxLoader::getTableCPlusSaxLoaderStartElementHandler() {
		if( tableCPlusSaxLoaderStartElementHandler == NULL ) {
			tableCPlusSaxLoaderStartElementHandler = new cfbam::CFBamSaxLoaderTableCPlusSaxLoaderStartElementHandler( this );
		}
		return( tableCPlusSaxLoaderStartElementHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusSaxLoaderEndElementHandler* CFBamSaxLoader::getTableCPlusSaxLoaderEndElementHandler() {
		if( tableCPlusSaxLoaderEndElementHandler == NULL ) {
			tableCPlusSaxLoaderEndElementHandler = new cfbam::CFBamSaxLoaderTableCPlusSaxLoaderEndElementHandler( this );
		}
		return( tableCPlusSaxLoaderEndElementHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusXMsgTableIncludeHandler* CFBamSaxLoader::getTableCPlusXMsgTableIncludeHandler() {
		if( tableCPlusXMsgTableIncludeHandler == NULL ) {
			tableCPlusXMsgTableIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusXMsgTableIncludeHandler( this );
		}
		return( tableCPlusXMsgTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusXMsgTableFormattersHandler* CFBamSaxLoader::getTableCPlusXMsgTableFormattersHandler() {
		if( tableCPlusXMsgTableFormattersHandler == NULL ) {
			tableCPlusXMsgTableFormattersHandler = new cfbam::CFBamSaxLoaderTableCPlusXMsgTableFormattersHandler( this );
		}
		return( tableCPlusXMsgTableFormattersHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusXMsgRqstTableIncludeHandler* CFBamSaxLoader::getTableCPlusXMsgRqstTableIncludeHandler() {
		if( tableCPlusXMsgRqstTableIncludeHandler == NULL ) {
			tableCPlusXMsgRqstTableIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusXMsgRqstTableIncludeHandler( this );
		}
		return( tableCPlusXMsgRqstTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusXMsgRspnTableIncludeHandler* CFBamSaxLoader::getTableCPlusXMsgRspnTableIncludeHandler() {
		if( tableCPlusXMsgRspnTableIncludeHandler == NULL ) {
			tableCPlusXMsgRspnTableIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusXMsgRspnTableIncludeHandler( this );
		}
		return( tableCPlusXMsgRspnTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusXMsgClientTableIncludeHandler* CFBamSaxLoader::getTableCPlusXMsgClientTableIncludeHandler() {
		if( tableCPlusXMsgClientTableIncludeHandler == NULL ) {
			tableCPlusXMsgClientTableIncludeHandler = new cfbam::CFBamSaxLoaderTableCPlusXMsgClientTableIncludeHandler( this );
		}
		return( tableCPlusXMsgClientTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusXMsgRqstTableBodyHandler* CFBamSaxLoader::getTableCPlusXMsgRqstTableBodyHandler() {
		if( tableCPlusXMsgRqstTableBodyHandler == NULL ) {
			tableCPlusXMsgRqstTableBodyHandler = new cfbam::CFBamSaxLoaderTableCPlusXMsgRqstTableBodyHandler( this );
		}
		return( tableCPlusXMsgRqstTableBodyHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusXMsgRspnTableBodyHandler* CFBamSaxLoader::getTableCPlusXMsgRspnTableBodyHandler() {
		if( tableCPlusXMsgRspnTableBodyHandler == NULL ) {
			tableCPlusXMsgRspnTableBodyHandler = new cfbam::CFBamSaxLoaderTableCPlusXMsgRspnTableBodyHandler( this );
		}
		return( tableCPlusXMsgRspnTableBodyHandler );
	}

	cfbam::CFBamSaxLoaderTableCPlusXMsgClientTableBodyHandler* CFBamSaxLoader::getTableCPlusXMsgClientTableBodyHandler() {
		if( tableCPlusXMsgClientTableBodyHandler == NULL ) {
			tableCPlusXMsgClientTableBodyHandler = new cfbam::CFBamSaxLoaderTableCPlusXMsgClientTableBodyHandler( this );
		}
		return( tableCPlusXMsgClientTableBodyHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusObjMembersHandler* CFBamSaxLoader::getTableHPlusObjMembersHandler() {
		if( tableHPlusObjMembersHandler == NULL ) {
			tableHPlusObjMembersHandler = new cfbam::CFBamSaxLoaderTableHPlusObjMembersHandler( this );
		}
		return( tableHPlusObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusObjInterfaceHandler* CFBamSaxLoader::getTableHPlusObjInterfaceHandler() {
		if( tableHPlusObjInterfaceHandler == NULL ) {
			tableHPlusObjInterfaceHandler = new cfbam::CFBamSaxLoaderTableHPlusObjInterfaceHandler( this );
		}
		return( tableHPlusObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusObjIncludeHandler* CFBamSaxLoader::getTableHPlusObjIncludeHandler() {
		if( tableHPlusObjIncludeHandler == NULL ) {
			tableHPlusObjIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusObjIncludeHandler( this );
		}
		return( tableHPlusObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusObjImplemntationHandler* CFBamSaxLoader::getTableHPlusObjImplemntationHandler() {
		if( tableHPlusObjImplemntationHandler == NULL ) {
			tableHPlusObjImplemntationHandler = new cfbam::CFBamSaxLoaderTableHPlusObjImplemntationHandler( this );
		}
		return( tableHPlusObjImplemntationHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusEditObjMembersHandler* CFBamSaxLoader::getTableHPlusEditObjMembersHandler() {
		if( tableHPlusEditObjMembersHandler == NULL ) {
			tableHPlusEditObjMembersHandler = new cfbam::CFBamSaxLoaderTableHPlusEditObjMembersHandler( this );
		}
		return( tableHPlusEditObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusEditObjInterfaceHandler* CFBamSaxLoader::getTableHPlusEditObjInterfaceHandler() {
		if( tableHPlusEditObjInterfaceHandler == NULL ) {
			tableHPlusEditObjInterfaceHandler = new cfbam::CFBamSaxLoaderTableHPlusEditObjInterfaceHandler( this );
		}
		return( tableHPlusEditObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusEditObjIncludeHandler* CFBamSaxLoader::getTableHPlusEditObjIncludeHandler() {
		if( tableHPlusEditObjIncludeHandler == NULL ) {
			tableHPlusEditObjIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusEditObjIncludeHandler( this );
		}
		return( tableHPlusEditObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusEditObjImplementationHandler* CFBamSaxLoader::getTableHPlusEditObjImplementationHandler() {
		if( tableHPlusEditObjImplementationHandler == NULL ) {
			tableHPlusEditObjImplementationHandler = new cfbam::CFBamSaxLoaderTableHPlusEditObjImplementationHandler( this );
		}
		return( tableHPlusEditObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusTableIncludeHandler* CFBamSaxLoader::getTableHPlusTableIncludeHandler() {
		if( tableHPlusTableIncludeHandler == NULL ) {
			tableHPlusTableIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusTableIncludeHandler( this );
		}
		return( tableHPlusTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusTableMembersHandler* CFBamSaxLoader::getTableHPlusTableMembersHandler() {
		if( tableHPlusTableMembersHandler == NULL ) {
			tableHPlusTableMembersHandler = new cfbam::CFBamSaxLoaderTableHPlusTableMembersHandler( this );
		}
		return( tableHPlusTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusTableInterfaceHandler* CFBamSaxLoader::getTableHPlusTableInterfaceHandler() {
		if( tableHPlusTableInterfaceHandler == NULL ) {
			tableHPlusTableInterfaceHandler = new cfbam::CFBamSaxLoaderTableHPlusTableInterfaceHandler( this );
		}
		return( tableHPlusTableInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusTableImplementationHandler* CFBamSaxLoader::getTableHPlusTableImplementationHandler() {
		if( tableHPlusTableImplementationHandler == NULL ) {
			tableHPlusTableImplementationHandler = new cfbam::CFBamSaxLoaderTableHPlusTableImplementationHandler( this );
		}
		return( tableHPlusTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusTableObjIncludeHandler* CFBamSaxLoader::getTableHPlusTableObjIncludeHandler() {
		if( tableHPlusTableObjIncludeHandler == NULL ) {
			tableHPlusTableObjIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusTableObjIncludeHandler( this );
		}
		return( tableHPlusTableObjIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusTableObjMembersHandler* CFBamSaxLoader::getTableHPlusTableObjMembersHandler() {
		if( tableHPlusTableObjMembersHandler == NULL ) {
			tableHPlusTableObjMembersHandler = new cfbam::CFBamSaxLoaderTableHPlusTableObjMembersHandler( this );
		}
		return( tableHPlusTableObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusTableObjInterfaceHandler* CFBamSaxLoader::getTableHPlusTableObjInterfaceHandler() {
		if( tableHPlusTableObjInterfaceHandler == NULL ) {
			tableHPlusTableObjInterfaceHandler = new cfbam::CFBamSaxLoaderTableHPlusTableObjInterfaceHandler( this );
		}
		return( tableHPlusTableObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusTableObjImplementationHandler* CFBamSaxLoader::getTableHPlusTableObjImplementationHandler() {
		if( tableHPlusTableObjImplementationHandler == NULL ) {
			tableHPlusTableObjImplementationHandler = new cfbam::CFBamSaxLoaderTableHPlusTableObjImplementationHandler( this );
		}
		return( tableHPlusTableObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusDb2LUWTableIncludeHandler* CFBamSaxLoader::getTableHPlusDb2LUWTableIncludeHandler() {
		if( tableHPlusDb2LUWTableIncludeHandler == NULL ) {
			tableHPlusDb2LUWTableIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusDb2LUWTableIncludeHandler( this );
		}
		return( tableHPlusDb2LUWTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusDb2LUWTableMembersHandler* CFBamSaxLoader::getTableHPlusDb2LUWTableMembersHandler() {
		if( tableHPlusDb2LUWTableMembersHandler == NULL ) {
			tableHPlusDb2LUWTableMembersHandler = new cfbam::CFBamSaxLoaderTableHPlusDb2LUWTableMembersHandler( this );
		}
		return( tableHPlusDb2LUWTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusDb2LUWTableImplementationHandler* CFBamSaxLoader::getTableHPlusDb2LUWTableImplementationHandler() {
		if( tableHPlusDb2LUWTableImplementationHandler == NULL ) {
			tableHPlusDb2LUWTableImplementationHandler = new cfbam::CFBamSaxLoaderTableHPlusDb2LUWTableImplementationHandler( this );
		}
		return( tableHPlusDb2LUWTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusMSSqlTableIncludeHandler* CFBamSaxLoader::getTableHPlusMSSqlTableIncludeHandler() {
		if( tableHPlusMSSqlTableIncludeHandler == NULL ) {
			tableHPlusMSSqlTableIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusMSSqlTableIncludeHandler( this );
		}
		return( tableHPlusMSSqlTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusMSSqlTableMembersHandler* CFBamSaxLoader::getTableHPlusMSSqlTableMembersHandler() {
		if( tableHPlusMSSqlTableMembersHandler == NULL ) {
			tableHPlusMSSqlTableMembersHandler = new cfbam::CFBamSaxLoaderTableHPlusMSSqlTableMembersHandler( this );
		}
		return( tableHPlusMSSqlTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusMSSqlTableImplementationHandler* CFBamSaxLoader::getTableHPlusMSSqlTableImplementationHandler() {
		if( tableHPlusMSSqlTableImplementationHandler == NULL ) {
			tableHPlusMSSqlTableImplementationHandler = new cfbam::CFBamSaxLoaderTableHPlusMSSqlTableImplementationHandler( this );
		}
		return( tableHPlusMSSqlTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusMySqlTableIncludeHandler* CFBamSaxLoader::getTableHPlusMySqlTableIncludeHandler() {
		if( tableHPlusMySqlTableIncludeHandler == NULL ) {
			tableHPlusMySqlTableIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusMySqlTableIncludeHandler( this );
		}
		return( tableHPlusMySqlTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusMySqlTableMembersHandler* CFBamSaxLoader::getTableHPlusMySqlTableMembersHandler() {
		if( tableHPlusMySqlTableMembersHandler == NULL ) {
			tableHPlusMySqlTableMembersHandler = new cfbam::CFBamSaxLoaderTableHPlusMySqlTableMembersHandler( this );
		}
		return( tableHPlusMySqlTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusMySqlTableImplementationHandler* CFBamSaxLoader::getTableHPlusMySqlTableImplementationHandler() {
		if( tableHPlusMySqlTableImplementationHandler == NULL ) {
			tableHPlusMySqlTableImplementationHandler = new cfbam::CFBamSaxLoaderTableHPlusMySqlTableImplementationHandler( this );
		}
		return( tableHPlusMySqlTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusOracleTableIncludeHandler* CFBamSaxLoader::getTableHPlusOracleTableIncludeHandler() {
		if( tableHPlusOracleTableIncludeHandler == NULL ) {
			tableHPlusOracleTableIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusOracleTableIncludeHandler( this );
		}
		return( tableHPlusOracleTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusOracleTableMembersHandler* CFBamSaxLoader::getTableHPlusOracleTableMembersHandler() {
		if( tableHPlusOracleTableMembersHandler == NULL ) {
			tableHPlusOracleTableMembersHandler = new cfbam::CFBamSaxLoaderTableHPlusOracleTableMembersHandler( this );
		}
		return( tableHPlusOracleTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusOracleTableImplementationHandler* CFBamSaxLoader::getTableHPlusOracleTableImplementationHandler() {
		if( tableHPlusOracleTableImplementationHandler == NULL ) {
			tableHPlusOracleTableImplementationHandler = new cfbam::CFBamSaxLoaderTableHPlusOracleTableImplementationHandler( this );
		}
		return( tableHPlusOracleTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusPgSqlTableIncludeHandler* CFBamSaxLoader::getTableHPlusPgSqlTableIncludeHandler() {
		if( tableHPlusPgSqlTableIncludeHandler == NULL ) {
			tableHPlusPgSqlTableIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusPgSqlTableIncludeHandler( this );
		}
		return( tableHPlusPgSqlTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusPgSqlTableMembersHandler* CFBamSaxLoader::getTableHPlusPgSqlTableMembersHandler() {
		if( tableHPlusPgSqlTableMembersHandler == NULL ) {
			tableHPlusPgSqlTableMembersHandler = new cfbam::CFBamSaxLoaderTableHPlusPgSqlTableMembersHandler( this );
		}
		return( tableHPlusPgSqlTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusPgSqlTableImplementationHandler* CFBamSaxLoader::getTableHPlusPgSqlTableImplementationHandler() {
		if( tableHPlusPgSqlTableImplementationHandler == NULL ) {
			tableHPlusPgSqlTableImplementationHandler = new cfbam::CFBamSaxLoaderTableHPlusPgSqlTableImplementationHandler( this );
		}
		return( tableHPlusPgSqlTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusRamTableIncludeHandler* CFBamSaxLoader::getTableHPlusRamTableIncludeHandler() {
		if( tableHPlusRamTableIncludeHandler == NULL ) {
			tableHPlusRamTableIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusRamTableIncludeHandler( this );
		}
		return( tableHPlusRamTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusRamTableMembersHandler* CFBamSaxLoader::getTableHPlusRamTableMembersHandler() {
		if( tableHPlusRamTableMembersHandler == NULL ) {
			tableHPlusRamTableMembersHandler = new cfbam::CFBamSaxLoaderTableHPlusRamTableMembersHandler( this );
		}
		return( tableHPlusRamTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusRamTableImplementationHandler* CFBamSaxLoader::getTableHPlusRamTableImplementationHandler() {
		if( tableHPlusRamTableImplementationHandler == NULL ) {
			tableHPlusRamTableImplementationHandler = new cfbam::CFBamSaxLoaderTableHPlusRamTableImplementationHandler( this );
		}
		return( tableHPlusRamTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusSaxLoaderIncludeHandler* CFBamSaxLoader::getTableHPlusSaxLoaderIncludeHandler() {
		if( tableHPlusSaxLoaderIncludeHandler == NULL ) {
			tableHPlusSaxLoaderIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusSaxLoaderIncludeHandler( this );
		}
		return( tableHPlusSaxLoaderIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusSaxLoaderStartElementHandler* CFBamSaxLoader::getTableHPlusSaxLoaderStartElementHandler() {
		if( tableHPlusSaxLoaderStartElementHandler == NULL ) {
			tableHPlusSaxLoaderStartElementHandler = new cfbam::CFBamSaxLoaderTableHPlusSaxLoaderStartElementHandler( this );
		}
		return( tableHPlusSaxLoaderStartElementHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusSaxLoaderEndElementHandler* CFBamSaxLoader::getTableHPlusSaxLoaderEndElementHandler() {
		if( tableHPlusSaxLoaderEndElementHandler == NULL ) {
			tableHPlusSaxLoaderEndElementHandler = new cfbam::CFBamSaxLoaderTableHPlusSaxLoaderEndElementHandler( this );
		}
		return( tableHPlusSaxLoaderEndElementHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusXMsgTableIncludeHandler* CFBamSaxLoader::getTableHPlusXMsgTableIncludeHandler() {
		if( tableHPlusXMsgTableIncludeHandler == NULL ) {
			tableHPlusXMsgTableIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusXMsgTableIncludeHandler( this );
		}
		return( tableHPlusXMsgTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusXMsgTableFormattersHandler* CFBamSaxLoader::getTableHPlusXMsgTableFormattersHandler() {
		if( tableHPlusXMsgTableFormattersHandler == NULL ) {
			tableHPlusXMsgTableFormattersHandler = new cfbam::CFBamSaxLoaderTableHPlusXMsgTableFormattersHandler( this );
		}
		return( tableHPlusXMsgTableFormattersHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusXMsgRqstTableIncludeHandler* CFBamSaxLoader::getTableHPlusXMsgRqstTableIncludeHandler() {
		if( tableHPlusXMsgRqstTableIncludeHandler == NULL ) {
			tableHPlusXMsgRqstTableIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusXMsgRqstTableIncludeHandler( this );
		}
		return( tableHPlusXMsgRqstTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusXMsgRspnTableIncludeHandler* CFBamSaxLoader::getTableHPlusXMsgRspnTableIncludeHandler() {
		if( tableHPlusXMsgRspnTableIncludeHandler == NULL ) {
			tableHPlusXMsgRspnTableIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusXMsgRspnTableIncludeHandler( this );
		}
		return( tableHPlusXMsgRspnTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusXMsgClientTableIncludeHandler* CFBamSaxLoader::getTableHPlusXMsgClientTableIncludeHandler() {
		if( tableHPlusXMsgClientTableIncludeHandler == NULL ) {
			tableHPlusXMsgClientTableIncludeHandler = new cfbam::CFBamSaxLoaderTableHPlusXMsgClientTableIncludeHandler( this );
		}
		return( tableHPlusXMsgClientTableIncludeHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusXMsgRqstTableBodyHandler* CFBamSaxLoader::getTableHPlusXMsgRqstTableBodyHandler() {
		if( tableHPlusXMsgRqstTableBodyHandler == NULL ) {
			tableHPlusXMsgRqstTableBodyHandler = new cfbam::CFBamSaxLoaderTableHPlusXMsgRqstTableBodyHandler( this );
		}
		return( tableHPlusXMsgRqstTableBodyHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusXMsgRspnTableBodyHandler* CFBamSaxLoader::getTableHPlusXMsgRspnTableBodyHandler() {
		if( tableHPlusXMsgRspnTableBodyHandler == NULL ) {
			tableHPlusXMsgRspnTableBodyHandler = new cfbam::CFBamSaxLoaderTableHPlusXMsgRspnTableBodyHandler( this );
		}
		return( tableHPlusXMsgRspnTableBodyHandler );
	}

	cfbam::CFBamSaxLoaderTableHPlusXMsgClientTableBodyHandler* CFBamSaxLoader::getTableHPlusXMsgClientTableBodyHandler() {
		if( tableHPlusXMsgClientTableBodyHandler == NULL ) {
			tableHPlusXMsgClientTableBodyHandler = new cfbam::CFBamSaxLoaderTableHPlusXMsgClientTableBodyHandler( this );
		}
		return( tableHPlusXMsgClientTableBodyHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpObjMembersHandler* CFBamSaxLoader::getTableCSharpObjMembersHandler() {
		if( tableCSharpObjMembersHandler == NULL ) {
			tableCSharpObjMembersHandler = new cfbam::CFBamSaxLoaderTableCSharpObjMembersHandler( this );
		}
		return( tableCSharpObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpObjInterfaceHandler* CFBamSaxLoader::getTableCSharpObjInterfaceHandler() {
		if( tableCSharpObjInterfaceHandler == NULL ) {
			tableCSharpObjInterfaceHandler = new cfbam::CFBamSaxLoaderTableCSharpObjInterfaceHandler( this );
		}
		return( tableCSharpObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpObjUsingHandler* CFBamSaxLoader::getTableCSharpObjUsingHandler() {
		if( tableCSharpObjUsingHandler == NULL ) {
			tableCSharpObjUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpObjUsingHandler( this );
		}
		return( tableCSharpObjUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpObjImplementationHandler* CFBamSaxLoader::getTableCSharpObjImplementationHandler() {
		if( tableCSharpObjImplementationHandler == NULL ) {
			tableCSharpObjImplementationHandler = new cfbam::CFBamSaxLoaderTableCSharpObjImplementationHandler( this );
		}
		return( tableCSharpObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpEditObjMembersHandler* CFBamSaxLoader::getTableCSharpEditObjMembersHandler() {
		if( tableCSharpEditObjMembersHandler == NULL ) {
			tableCSharpEditObjMembersHandler = new cfbam::CFBamSaxLoaderTableCSharpEditObjMembersHandler( this );
		}
		return( tableCSharpEditObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpEditObjInterfaceHandler* CFBamSaxLoader::getTableCSharpEditObjInterfaceHandler() {
		if( tableCSharpEditObjInterfaceHandler == NULL ) {
			tableCSharpEditObjInterfaceHandler = new cfbam::CFBamSaxLoaderTableCSharpEditObjInterfaceHandler( this );
		}
		return( tableCSharpEditObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpEditObjUsingHandler* CFBamSaxLoader::getTableCSharpEditObjUsingHandler() {
		if( tableCSharpEditObjUsingHandler == NULL ) {
			tableCSharpEditObjUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpEditObjUsingHandler( this );
		}
		return( tableCSharpEditObjUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpEditObjImplementationHandler* CFBamSaxLoader::getTableCSharpEditObjImplementationHandler() {
		if( tableCSharpEditObjImplementationHandler == NULL ) {
			tableCSharpEditObjImplementationHandler = new cfbam::CFBamSaxLoaderTableCSharpEditObjImplementationHandler( this );
		}
		return( tableCSharpEditObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpTableUsingHandler* CFBamSaxLoader::getTableCSharpTableUsingHandler() {
		if( tableCSharpTableUsingHandler == NULL ) {
			tableCSharpTableUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpTableUsingHandler( this );
		}
		return( tableCSharpTableUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpTableMembersHandler* CFBamSaxLoader::getTableCSharpTableMembersHandler() {
		if( tableCSharpTableMembersHandler == NULL ) {
			tableCSharpTableMembersHandler = new cfbam::CFBamSaxLoaderTableCSharpTableMembersHandler( this );
		}
		return( tableCSharpTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpTableInterfaceHandler* CFBamSaxLoader::getTableCSharpTableInterfaceHandler() {
		if( tableCSharpTableInterfaceHandler == NULL ) {
			tableCSharpTableInterfaceHandler = new cfbam::CFBamSaxLoaderTableCSharpTableInterfaceHandler( this );
		}
		return( tableCSharpTableInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpTableImplementationHandler* CFBamSaxLoader::getTableCSharpTableImplementationHandler() {
		if( tableCSharpTableImplementationHandler == NULL ) {
			tableCSharpTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCSharpTableImplementationHandler( this );
		}
		return( tableCSharpTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpTableObjUsingHandler* CFBamSaxLoader::getTableCSharpTableObjUsingHandler() {
		if( tableCSharpTableObjUsingHandler == NULL ) {
			tableCSharpTableObjUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpTableObjUsingHandler( this );
		}
		return( tableCSharpTableObjUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpTableObjMembersHandler* CFBamSaxLoader::getTableCSharpTableObjMembersHandler() {
		if( tableCSharpTableObjMembersHandler == NULL ) {
			tableCSharpTableObjMembersHandler = new cfbam::CFBamSaxLoaderTableCSharpTableObjMembersHandler( this );
		}
		return( tableCSharpTableObjMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpTableObjInterfaceHandler* CFBamSaxLoader::getTableCSharpTableObjInterfaceHandler() {
		if( tableCSharpTableObjInterfaceHandler == NULL ) {
			tableCSharpTableObjInterfaceHandler = new cfbam::CFBamSaxLoaderTableCSharpTableObjInterfaceHandler( this );
		}
		return( tableCSharpTableObjInterfaceHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpTableObjImplementationHandler* CFBamSaxLoader::getTableCSharpTableObjImplementationHandler() {
		if( tableCSharpTableObjImplementationHandler == NULL ) {
			tableCSharpTableObjImplementationHandler = new cfbam::CFBamSaxLoaderTableCSharpTableObjImplementationHandler( this );
		}
		return( tableCSharpTableObjImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpDb2LUWTableUsingHandler* CFBamSaxLoader::getTableCSharpDb2LUWTableUsingHandler() {
		if( tableCSharpDb2LUWTableUsingHandler == NULL ) {
			tableCSharpDb2LUWTableUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpDb2LUWTableUsingHandler( this );
		}
		return( tableCSharpDb2LUWTableUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpDb2LUWTableMembersHandler* CFBamSaxLoader::getTableCSharpDb2LUWTableMembersHandler() {
		if( tableCSharpDb2LUWTableMembersHandler == NULL ) {
			tableCSharpDb2LUWTableMembersHandler = new cfbam::CFBamSaxLoaderTableCSharpDb2LUWTableMembersHandler( this );
		}
		return( tableCSharpDb2LUWTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpDb2LUWTableImplementationHandler* CFBamSaxLoader::getTableCSharpDb2LUWTableImplementationHandler() {
		if( tableCSharpDb2LUWTableImplementationHandler == NULL ) {
			tableCSharpDb2LUWTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCSharpDb2LUWTableImplementationHandler( this );
		}
		return( tableCSharpDb2LUWTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpMSSqlTableUsingHandler* CFBamSaxLoader::getTableCSharpMSSqlTableUsingHandler() {
		if( tableCSharpMSSqlTableUsingHandler == NULL ) {
			tableCSharpMSSqlTableUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpMSSqlTableUsingHandler( this );
		}
		return( tableCSharpMSSqlTableUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpMSSqlTableMembersHandler* CFBamSaxLoader::getTableCSharpMSSqlTableMembersHandler() {
		if( tableCSharpMSSqlTableMembersHandler == NULL ) {
			tableCSharpMSSqlTableMembersHandler = new cfbam::CFBamSaxLoaderTableCSharpMSSqlTableMembersHandler( this );
		}
		return( tableCSharpMSSqlTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpMSSqlTableImplementationHandler* CFBamSaxLoader::getTableCSharpMSSqlTableImplementationHandler() {
		if( tableCSharpMSSqlTableImplementationHandler == NULL ) {
			tableCSharpMSSqlTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCSharpMSSqlTableImplementationHandler( this );
		}
		return( tableCSharpMSSqlTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpMySqlTableUsingHandler* CFBamSaxLoader::getTableCSharpMySqlTableUsingHandler() {
		if( tableCSharpMySqlTableUsingHandler == NULL ) {
			tableCSharpMySqlTableUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpMySqlTableUsingHandler( this );
		}
		return( tableCSharpMySqlTableUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpMySqlTableMembersHandler* CFBamSaxLoader::getTableCSharpMySqlTableMembersHandler() {
		if( tableCSharpMySqlTableMembersHandler == NULL ) {
			tableCSharpMySqlTableMembersHandler = new cfbam::CFBamSaxLoaderTableCSharpMySqlTableMembersHandler( this );
		}
		return( tableCSharpMySqlTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpMySqlTableImplementationHandler* CFBamSaxLoader::getTableCSharpMySqlTableImplementationHandler() {
		if( tableCSharpMySqlTableImplementationHandler == NULL ) {
			tableCSharpMySqlTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCSharpMySqlTableImplementationHandler( this );
		}
		return( tableCSharpMySqlTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpOracleTableUsingHandler* CFBamSaxLoader::getTableCSharpOracleTableUsingHandler() {
		if( tableCSharpOracleTableUsingHandler == NULL ) {
			tableCSharpOracleTableUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpOracleTableUsingHandler( this );
		}
		return( tableCSharpOracleTableUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpOracleTableMembersHandler* CFBamSaxLoader::getTableCSharpOracleTableMembersHandler() {
		if( tableCSharpOracleTableMembersHandler == NULL ) {
			tableCSharpOracleTableMembersHandler = new cfbam::CFBamSaxLoaderTableCSharpOracleTableMembersHandler( this );
		}
		return( tableCSharpOracleTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpOracleTableImplementationHandler* CFBamSaxLoader::getTableCSharpOracleTableImplementationHandler() {
		if( tableCSharpOracleTableImplementationHandler == NULL ) {
			tableCSharpOracleTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCSharpOracleTableImplementationHandler( this );
		}
		return( tableCSharpOracleTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpPgSqlTableUsingHandler* CFBamSaxLoader::getTableCSharpPgSqlTableUsingHandler() {
		if( tableCSharpPgSqlTableUsingHandler == NULL ) {
			tableCSharpPgSqlTableUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpPgSqlTableUsingHandler( this );
		}
		return( tableCSharpPgSqlTableUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpPgSqlTableMembersHandler* CFBamSaxLoader::getTableCSharpPgSqlTableMembersHandler() {
		if( tableCSharpPgSqlTableMembersHandler == NULL ) {
			tableCSharpPgSqlTableMembersHandler = new cfbam::CFBamSaxLoaderTableCSharpPgSqlTableMembersHandler( this );
		}
		return( tableCSharpPgSqlTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpPgSqlTableImplementationHandler* CFBamSaxLoader::getTableCSharpPgSqlTableImplementationHandler() {
		if( tableCSharpPgSqlTableImplementationHandler == NULL ) {
			tableCSharpPgSqlTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCSharpPgSqlTableImplementationHandler( this );
		}
		return( tableCSharpPgSqlTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpRamTableUsingHandler* CFBamSaxLoader::getTableCSharpRamTableUsingHandler() {
		if( tableCSharpRamTableUsingHandler == NULL ) {
			tableCSharpRamTableUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpRamTableUsingHandler( this );
		}
		return( tableCSharpRamTableUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpRamTableMembersHandler* CFBamSaxLoader::getTableCSharpRamTableMembersHandler() {
		if( tableCSharpRamTableMembersHandler == NULL ) {
			tableCSharpRamTableMembersHandler = new cfbam::CFBamSaxLoaderTableCSharpRamTableMembersHandler( this );
		}
		return( tableCSharpRamTableMembersHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpRamTableImplementationHandler* CFBamSaxLoader::getTableCSharpRamTableImplementationHandler() {
		if( tableCSharpRamTableImplementationHandler == NULL ) {
			tableCSharpRamTableImplementationHandler = new cfbam::CFBamSaxLoaderTableCSharpRamTableImplementationHandler( this );
		}
		return( tableCSharpRamTableImplementationHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpSaxLoaderUsingHandler* CFBamSaxLoader::getTableCSharpSaxLoaderUsingHandler() {
		if( tableCSharpSaxLoaderUsingHandler == NULL ) {
			tableCSharpSaxLoaderUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpSaxLoaderUsingHandler( this );
		}
		return( tableCSharpSaxLoaderUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpSaxLoaderStartElementHandler* CFBamSaxLoader::getTableCSharpSaxLoaderStartElementHandler() {
		if( tableCSharpSaxLoaderStartElementHandler == NULL ) {
			tableCSharpSaxLoaderStartElementHandler = new cfbam::CFBamSaxLoaderTableCSharpSaxLoaderStartElementHandler( this );
		}
		return( tableCSharpSaxLoaderStartElementHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpSaxLoaderEndElementHandler* CFBamSaxLoader::getTableCSharpSaxLoaderEndElementHandler() {
		if( tableCSharpSaxLoaderEndElementHandler == NULL ) {
			tableCSharpSaxLoaderEndElementHandler = new cfbam::CFBamSaxLoaderTableCSharpSaxLoaderEndElementHandler( this );
		}
		return( tableCSharpSaxLoaderEndElementHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpXMsgTableUsingHandler* CFBamSaxLoader::getTableCSharpXMsgTableUsingHandler() {
		if( tableCSharpXMsgTableUsingHandler == NULL ) {
			tableCSharpXMsgTableUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpXMsgTableUsingHandler( this );
		}
		return( tableCSharpXMsgTableUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpXMsgTableFormattersHandler* CFBamSaxLoader::getTableCSharpXMsgTableFormattersHandler() {
		if( tableCSharpXMsgTableFormattersHandler == NULL ) {
			tableCSharpXMsgTableFormattersHandler = new cfbam::CFBamSaxLoaderTableCSharpXMsgTableFormattersHandler( this );
		}
		return( tableCSharpXMsgTableFormattersHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpXMsgRqstTableUsingHandler* CFBamSaxLoader::getTableCSharpXMsgRqstTableUsingHandler() {
		if( tableCSharpXMsgRqstTableUsingHandler == NULL ) {
			tableCSharpXMsgRqstTableUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpXMsgRqstTableUsingHandler( this );
		}
		return( tableCSharpXMsgRqstTableUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpXMsgRspnTableUsingHandler* CFBamSaxLoader::getTableCSharpXMsgRspnTableUsingHandler() {
		if( tableCSharpXMsgRspnTableUsingHandler == NULL ) {
			tableCSharpXMsgRspnTableUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpXMsgRspnTableUsingHandler( this );
		}
		return( tableCSharpXMsgRspnTableUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpXMsgClientTableUsingHandler* CFBamSaxLoader::getTableCSharpXMsgClientTableUsingHandler() {
		if( tableCSharpXMsgClientTableUsingHandler == NULL ) {
			tableCSharpXMsgClientTableUsingHandler = new cfbam::CFBamSaxLoaderTableCSharpXMsgClientTableUsingHandler( this );
		}
		return( tableCSharpXMsgClientTableUsingHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpXMsgRqstTableBodyHandler* CFBamSaxLoader::getTableCSharpXMsgRqstTableBodyHandler() {
		if( tableCSharpXMsgRqstTableBodyHandler == NULL ) {
			tableCSharpXMsgRqstTableBodyHandler = new cfbam::CFBamSaxLoaderTableCSharpXMsgRqstTableBodyHandler( this );
		}
		return( tableCSharpXMsgRqstTableBodyHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpXMsgRspnTableBodyHandler* CFBamSaxLoader::getTableCSharpXMsgRspnTableBodyHandler() {
		if( tableCSharpXMsgRspnTableBodyHandler == NULL ) {
			tableCSharpXMsgRspnTableBodyHandler = new cfbam::CFBamSaxLoaderTableCSharpXMsgRspnTableBodyHandler( this );
		}
		return( tableCSharpXMsgRspnTableBodyHandler );
	}

	cfbam::CFBamSaxLoaderTableCSharpXMsgClientTableBodyHandler* CFBamSaxLoader::getTableCSharpXMsgClientTableBodyHandler() {
		if( tableCSharpXMsgClientTableBodyHandler == NULL ) {
			tableCSharpXMsgClientTableBodyHandler = new cfbam::CFBamSaxLoaderTableCSharpXMsgClientTableBodyHandler( this );
		}
		return( tableCSharpXMsgClientTableBodyHandler );
	}

	cfbam::CFBamSaxLoaderTableColHandler* CFBamSaxLoader::getTableColHandler() {
		if( tableColHandler == NULL ) {
			tableColHandler = new cfbam::CFBamSaxLoaderTableColHandler( this );
		}
		return( tableColHandler );
	}

	cfbam::CFBamSaxLoaderTenantHandler* CFBamSaxLoader::getTenantHandler() {
		if( tenantHandler == NULL ) {
			tenantHandler = new cfbam::CFBamSaxLoaderTenantHandler( this );
			tenantHandler->addElementHandler( cfsec::CFSecTSecGroupBuff::GENDEFNAME, getTSecGroupHandler() );
			tenantHandler->addElementHandler( cfint::CFIntTldBuff::GENDEFNAME, getTldHandler() );
		}
		return( tenantHandler );
	}

	cfbam::CFBamSaxLoaderTextColHandler* CFBamSaxLoader::getTextColHandler() {
		if( textColHandler == NULL ) {
			textColHandler = new cfbam::CFBamSaxLoaderTextColHandler( this );
		}
		return( textColHandler );
	}

	cfbam::CFBamSaxLoaderTextDefHandler* CFBamSaxLoader::getTextDefHandler() {
		if( textDefHandler == NULL ) {
			textDefHandler = new cfbam::CFBamSaxLoaderTextDefHandler( this );
		}
		return( textDefHandler );
	}

	cfbam::CFBamSaxLoaderTextTypeHandler* CFBamSaxLoader::getTextTypeHandler() {
		if( textTypeHandler == NULL ) {
			textTypeHandler = new cfbam::CFBamSaxLoaderTextTypeHandler( this );
		}
		return( textTypeHandler );
	}

	cfbam::CFBamSaxLoaderTimeColHandler* CFBamSaxLoader::getTimeColHandler() {
		if( timeColHandler == NULL ) {
			timeColHandler = new cfbam::CFBamSaxLoaderTimeColHandler( this );
		}
		return( timeColHandler );
	}

	cfbam::CFBamSaxLoaderTimeDefHandler* CFBamSaxLoader::getTimeDefHandler() {
		if( timeDefHandler == NULL ) {
			timeDefHandler = new cfbam::CFBamSaxLoaderTimeDefHandler( this );
		}
		return( timeDefHandler );
	}

	cfbam::CFBamSaxLoaderTimeTypeHandler* CFBamSaxLoader::getTimeTypeHandler() {
		if( timeTypeHandler == NULL ) {
			timeTypeHandler = new cfbam::CFBamSaxLoaderTimeTypeHandler( this );
		}
		return( timeTypeHandler );
	}

	cfbam::CFBamSaxLoaderTimestampColHandler* CFBamSaxLoader::getTimestampColHandler() {
		if( timestampColHandler == NULL ) {
			timestampColHandler = new cfbam::CFBamSaxLoaderTimestampColHandler( this );
		}
		return( timestampColHandler );
	}

	cfbam::CFBamSaxLoaderTimestampDefHandler* CFBamSaxLoader::getTimestampDefHandler() {
		if( timestampDefHandler == NULL ) {
			timestampDefHandler = new cfbam::CFBamSaxLoaderTimestampDefHandler( this );
		}
		return( timestampDefHandler );
	}

	cfbam::CFBamSaxLoaderTimestampTypeHandler* CFBamSaxLoader::getTimestampTypeHandler() {
		if( timestampTypeHandler == NULL ) {
			timestampTypeHandler = new cfbam::CFBamSaxLoaderTimestampTypeHandler( this );
		}
		return( timestampTypeHandler );
	}

	cfbam::CFBamSaxLoaderTldHandler* CFBamSaxLoader::getTldHandler() {
		if( tldHandler == NULL ) {
			tldHandler = new cfbam::CFBamSaxLoaderTldHandler( this );
			tldHandler->addElementHandler( cfint::CFIntTopDomainBuff::GENDEFNAME, getTopDomainHandler() );
		}
		return( tldHandler );
	}

	cfbam::CFBamSaxLoaderTokenColHandler* CFBamSaxLoader::getTokenColHandler() {
		if( tokenColHandler == NULL ) {
			tokenColHandler = new cfbam::CFBamSaxLoaderTokenColHandler( this );
		}
		return( tokenColHandler );
	}

	cfbam::CFBamSaxLoaderTokenDefHandler* CFBamSaxLoader::getTokenDefHandler() {
		if( tokenDefHandler == NULL ) {
			tokenDefHandler = new cfbam::CFBamSaxLoaderTokenDefHandler( this );
		}
		return( tokenDefHandler );
	}

	cfbam::CFBamSaxLoaderTokenTypeHandler* CFBamSaxLoader::getTokenTypeHandler() {
		if( tokenTypeHandler == NULL ) {
			tokenTypeHandler = new cfbam::CFBamSaxLoaderTokenTypeHandler( this );
		}
		return( tokenTypeHandler );
	}

	cfbam::CFBamSaxLoaderTopDomainHandler* CFBamSaxLoader::getTopDomainHandler() {
		if( topDomainHandler == NULL ) {
			topDomainHandler = new cfbam::CFBamSaxLoaderTopDomainHandler( this );
			topDomainHandler->addElementHandler( cfint::CFIntLicenseBuff::GENDEFNAME, getLicenseHandler() );
			topDomainHandler->addElementHandler( cfint::CFIntTopProjectBuff::GENDEFNAME, getTopProjectHandler() );
		}
		return( topDomainHandler );
	}

	cfbam::CFBamSaxLoaderTopProjectHandler* CFBamSaxLoader::getTopProjectHandler() {
		if( topProjectHandler == NULL ) {
			topProjectHandler = new cfbam::CFBamSaxLoaderTopProjectHandler( this );
			topProjectHandler->addElementHandler( cfint::CFIntSubProjectBuff::GENDEFNAME, getSubProjectHandler() );
		}
		return( topProjectHandler );
	}

	cfbam::CFBamSaxLoaderUInt16ColHandler* CFBamSaxLoader::getUInt16ColHandler() {
		if( uInt16ColHandler == NULL ) {
			uInt16ColHandler = new cfbam::CFBamSaxLoaderUInt16ColHandler( this );
		}
		return( uInt16ColHandler );
	}

	cfbam::CFBamSaxLoaderUInt16DefHandler* CFBamSaxLoader::getUInt16DefHandler() {
		if( uInt16DefHandler == NULL ) {
			uInt16DefHandler = new cfbam::CFBamSaxLoaderUInt16DefHandler( this );
		}
		return( uInt16DefHandler );
	}

	cfbam::CFBamSaxLoaderUInt16TypeHandler* CFBamSaxLoader::getUInt16TypeHandler() {
		if( uInt16TypeHandler == NULL ) {
			uInt16TypeHandler = new cfbam::CFBamSaxLoaderUInt16TypeHandler( this );
		}
		return( uInt16TypeHandler );
	}

	cfbam::CFBamSaxLoaderUInt32ColHandler* CFBamSaxLoader::getUInt32ColHandler() {
		if( uInt32ColHandler == NULL ) {
			uInt32ColHandler = new cfbam::CFBamSaxLoaderUInt32ColHandler( this );
		}
		return( uInt32ColHandler );
	}

	cfbam::CFBamSaxLoaderUInt32DefHandler* CFBamSaxLoader::getUInt32DefHandler() {
		if( uInt32DefHandler == NULL ) {
			uInt32DefHandler = new cfbam::CFBamSaxLoaderUInt32DefHandler( this );
		}
		return( uInt32DefHandler );
	}

	cfbam::CFBamSaxLoaderUInt32TypeHandler* CFBamSaxLoader::getUInt32TypeHandler() {
		if( uInt32TypeHandler == NULL ) {
			uInt32TypeHandler = new cfbam::CFBamSaxLoaderUInt32TypeHandler( this );
		}
		return( uInt32TypeHandler );
	}

	cfbam::CFBamSaxLoaderUInt64ColHandler* CFBamSaxLoader::getUInt64ColHandler() {
		if( uInt64ColHandler == NULL ) {
			uInt64ColHandler = new cfbam::CFBamSaxLoaderUInt64ColHandler( this );
		}
		return( uInt64ColHandler );
	}

	cfbam::CFBamSaxLoaderUInt64DefHandler* CFBamSaxLoader::getUInt64DefHandler() {
		if( uInt64DefHandler == NULL ) {
			uInt64DefHandler = new cfbam::CFBamSaxLoaderUInt64DefHandler( this );
		}
		return( uInt64DefHandler );
	}

	cfbam::CFBamSaxLoaderUInt64TypeHandler* CFBamSaxLoader::getUInt64TypeHandler() {
		if( uInt64TypeHandler == NULL ) {
			uInt64TypeHandler = new cfbam::CFBamSaxLoaderUInt64TypeHandler( this );
		}
		return( uInt64TypeHandler );
	}

	cfbam::CFBamSaxLoaderURLProtocolHandler* CFBamSaxLoader::getURLProtocolHandler() {
		if( uRLProtocolHandler == NULL ) {
			uRLProtocolHandler = new cfbam::CFBamSaxLoaderURLProtocolHandler( this );
		}
		return( uRLProtocolHandler );
	}

	cfbam::CFBamSaxLoaderUuidColHandler* CFBamSaxLoader::getUuidColHandler() {
		if( uuidColHandler == NULL ) {
			uuidColHandler = new cfbam::CFBamSaxLoaderUuidColHandler( this );
		}
		return( uuidColHandler );
	}

	cfbam::CFBamSaxLoaderUuidDefHandler* CFBamSaxLoader::getUuidDefHandler() {
		if( uuidDefHandler == NULL ) {
			uuidDefHandler = new cfbam::CFBamSaxLoaderUuidDefHandler( this );
		}
		return( uuidDefHandler );
	}

	cfbam::CFBamSaxLoaderUuidGenHandler* CFBamSaxLoader::getUuidGenHandler() {
		if( uuidGenHandler == NULL ) {
			uuidGenHandler = new cfbam::CFBamSaxLoaderUuidGenHandler( this );
		}
		return( uuidGenHandler );
	}

	cfbam::CFBamSaxLoaderUuidTypeHandler* CFBamSaxLoader::getUuidTypeHandler() {
		if( uuidTypeHandler == NULL ) {
			uuidTypeHandler = new cfbam::CFBamSaxLoaderUuidTypeHandler( this );
		}
		return( uuidTypeHandler );
	}

	cfbam::CFBamSaxLoaderValueHandler* CFBamSaxLoader::getValueHandler() {
		if( valueHandler == NULL ) {
			valueHandler = new cfbam::CFBamSaxLoaderValueHandler( this );
		}
		return( valueHandler );
	}

	cfbam::CFBamSaxRootHandler* CFBamSaxLoader::getSaxRootHandler() {
		const static std::string S_SchemaName( "CFBam" );
		const static std::string S_CFSec( "CFSec" );
		const static std::string S_CFInt( "CFInt" );
		if( saxRootHandler == NULL ) {
			saxRootHandler = new cfbam::CFBamSaxRootHandler( this );
			saxRootHandler->addElementHandler( S_SchemaName, getSaxDocHandler() );
			saxRootHandler->addElementHandler( S_CFSec, getSaxDocHandler() );
			saxRootHandler->addElementHandler( S_CFInt, getSaxDocHandler() );
		}
		return( saxRootHandler );
	}

	cfbam::CFBamSaxDocHandler* CFBamSaxLoader::getSaxDocHandler() {
		if( saxDocHandler == NULL ) {
			saxDocHandler = new CFBamSaxDocHandler( this );
			saxDocHandler->addElementHandler( cfsec::CFSecClusterBuff::GENDEFNAME, getClusterHandler() );
			saxDocHandler->addElementHandler( cfsec::CFSecISOCcyBuff::GENDEFNAME, getISOCcyHandler() );
			saxDocHandler->addElementHandler( cfsec::CFSecISOCtryBuff::GENDEFNAME, getISOCtryHandler() );
			saxDocHandler->addElementHandler( cfsec::CFSecISOLangBuff::GENDEFNAME, getISOLangHandler() );
			saxDocHandler->addElementHandler( cfsec::CFSecISOTZoneBuff::GENDEFNAME, getISOTZoneHandler() );
			saxDocHandler->addElementHandler( cfint::CFIntMimeTypeBuff::GENDEFNAME, getMimeTypeHandler() );
			saxDocHandler->addElementHandler( cfsec::CFSecSecUserBuff::GENDEFNAME, getSecUserHandler() );
			saxDocHandler->addElementHandler( cfsec::CFSecServiceTypeBuff::GENDEFNAME, getServiceTypeHandler() );
			saxDocHandler->addElementHandler( cfint::CFIntURLProtocolBuff::GENDEFNAME, getURLProtocolHandler() );
		}
		return( saxDocHandler );
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getAtomLoaderBehaviour() const {
		return( atomLoaderBehaviour );
	}

	void CFBamSaxLoader::setAtomLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		atomLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getBlobColLoaderBehaviour() const {
		return( blobColLoaderBehaviour );
	}

	void CFBamSaxLoader::setBlobColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		blobColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getBlobDefLoaderBehaviour() const {
		return( blobDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setBlobDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		blobDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getBlobTypeLoaderBehaviour() const {
		return( blobTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setBlobTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		blobTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getBoolColLoaderBehaviour() const {
		return( boolColLoaderBehaviour );
	}

	void CFBamSaxLoader::setBoolColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		boolColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getBoolDefLoaderBehaviour() const {
		return( boolDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setBoolDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		boolDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getBoolTypeLoaderBehaviour() const {
		return( boolTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setBoolTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		boolTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getChainLoaderBehaviour() const {
		return( chainLoaderBehaviour );
	}

	void CFBamSaxLoader::setChainLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		chainLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getClearDepLoaderBehaviour() const {
		return( clearDepLoaderBehaviour );
	}

	void CFBamSaxLoader::setClearDepLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		clearDepLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getClearSubDep1LoaderBehaviour() const {
		return( clearSubDep1LoaderBehaviour );
	}

	void CFBamSaxLoader::setClearSubDep1LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		clearSubDep1LoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getClearSubDep2LoaderBehaviour() const {
		return( clearSubDep2LoaderBehaviour );
	}

	void CFBamSaxLoader::setClearSubDep2LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		clearSubDep2LoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getClearSubDep3LoaderBehaviour() const {
		return( clearSubDep3LoaderBehaviour );
	}

	void CFBamSaxLoader::setClearSubDep3LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		clearSubDep3LoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getClearTopDepLoaderBehaviour() const {
		return( clearTopDepLoaderBehaviour );
	}

	void CFBamSaxLoader::setClearTopDepLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		clearTopDepLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getClusterLoaderBehaviour() const {
		return( clusterLoaderBehaviour );
	}

	void CFBamSaxLoader::setClusterLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		clusterLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getDateColLoaderBehaviour() const {
		return( dateColLoaderBehaviour );
	}

	void CFBamSaxLoader::setDateColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		dateColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getDateDefLoaderBehaviour() const {
		return( dateDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setDateDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		dateDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getDateTypeLoaderBehaviour() const {
		return( dateTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setDateTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		dateTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getDelDepLoaderBehaviour() const {
		return( delDepLoaderBehaviour );
	}

	void CFBamSaxLoader::setDelDepLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		delDepLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getDelSubDep1LoaderBehaviour() const {
		return( delSubDep1LoaderBehaviour );
	}

	void CFBamSaxLoader::setDelSubDep1LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		delSubDep1LoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getDelSubDep2LoaderBehaviour() const {
		return( delSubDep2LoaderBehaviour );
	}

	void CFBamSaxLoader::setDelSubDep2LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		delSubDep2LoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getDelSubDep3LoaderBehaviour() const {
		return( delSubDep3LoaderBehaviour );
	}

	void CFBamSaxLoader::setDelSubDep3LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		delSubDep3LoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getDelTopDepLoaderBehaviour() const {
		return( delTopDepLoaderBehaviour );
	}

	void CFBamSaxLoader::setDelTopDepLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		delTopDepLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getDoubleColLoaderBehaviour() const {
		return( doubleColLoaderBehaviour );
	}

	void CFBamSaxLoader::setDoubleColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		doubleColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getDoubleDefLoaderBehaviour() const {
		return( doubleDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setDoubleDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		doubleDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getDoubleTypeLoaderBehaviour() const {
		return( doubleTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setDoubleTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		doubleTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getEnumDefLoaderBehaviour() const {
		return( enumDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setEnumDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		enumDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getEnumTagLoaderBehaviour() const {
		return( enumTagLoaderBehaviour );
	}

	void CFBamSaxLoader::setEnumTagLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		enumTagLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getEnumTypeLoaderBehaviour() const {
		return( enumTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setEnumTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		enumTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getFloatColLoaderBehaviour() const {
		return( floatColLoaderBehaviour );
	}

	void CFBamSaxLoader::setFloatColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		floatColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getFloatDefLoaderBehaviour() const {
		return( floatDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setFloatDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		floatDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getFloatTypeLoaderBehaviour() const {
		return( floatTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setFloatTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		floatTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getHostNodeLoaderBehaviour() const {
		return( hostNodeLoaderBehaviour );
	}

	void CFBamSaxLoader::setHostNodeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		hostNodeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getISOCcyLoaderBehaviour() const {
		return( iSOCcyLoaderBehaviour );
	}

	void CFBamSaxLoader::setISOCcyLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		iSOCcyLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getISOCtryLoaderBehaviour() const {
		return( iSOCtryLoaderBehaviour );
	}

	void CFBamSaxLoader::setISOCtryLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		iSOCtryLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getISOCtryCcyLoaderBehaviour() const {
		return( iSOCtryCcyLoaderBehaviour );
	}

	void CFBamSaxLoader::setISOCtryCcyLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		iSOCtryCcyLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getISOCtryLangLoaderBehaviour() const {
		return( iSOCtryLangLoaderBehaviour );
	}

	void CFBamSaxLoader::setISOCtryLangLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		iSOCtryLangLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getISOLangLoaderBehaviour() const {
		return( iSOLangLoaderBehaviour );
	}

	void CFBamSaxLoader::setISOLangLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		iSOLangLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getISOTZoneLoaderBehaviour() const {
		return( iSOTZoneLoaderBehaviour );
	}

	void CFBamSaxLoader::setISOTZoneLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		iSOTZoneLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getId16GenLoaderBehaviour() const {
		return( id16GenLoaderBehaviour );
	}

	void CFBamSaxLoader::setId16GenLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		id16GenLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getId32GenLoaderBehaviour() const {
		return( id32GenLoaderBehaviour );
	}

	void CFBamSaxLoader::setId32GenLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		id32GenLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getId64GenLoaderBehaviour() const {
		return( id64GenLoaderBehaviour );
	}

	void CFBamSaxLoader::setId64GenLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		id64GenLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getIndexLoaderBehaviour() const {
		return( indexLoaderBehaviour );
	}

	void CFBamSaxLoader::setIndexLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		indexLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getIndexColLoaderBehaviour() const {
		return( indexColLoaderBehaviour );
	}

	void CFBamSaxLoader::setIndexColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		indexColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getInt16ColLoaderBehaviour() const {
		return( int16ColLoaderBehaviour );
	}

	void CFBamSaxLoader::setInt16ColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		int16ColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getInt16DefLoaderBehaviour() const {
		return( int16DefLoaderBehaviour );
	}

	void CFBamSaxLoader::setInt16DefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		int16DefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getInt16TypeLoaderBehaviour() const {
		return( int16TypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setInt16TypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		int16TypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getInt32ColLoaderBehaviour() const {
		return( int32ColLoaderBehaviour );
	}

	void CFBamSaxLoader::setInt32ColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		int32ColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getInt32DefLoaderBehaviour() const {
		return( int32DefLoaderBehaviour );
	}

	void CFBamSaxLoader::setInt32DefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		int32DefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getInt32TypeLoaderBehaviour() const {
		return( int32TypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setInt32TypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		int32TypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getInt64ColLoaderBehaviour() const {
		return( int64ColLoaderBehaviour );
	}

	void CFBamSaxLoader::setInt64ColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		int64ColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getInt64DefLoaderBehaviour() const {
		return( int64DefLoaderBehaviour );
	}

	void CFBamSaxLoader::setInt64DefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		int64DefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getInt64TypeLoaderBehaviour() const {
		return( int64TypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setInt64TypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		int64TypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getLicenseLoaderBehaviour() const {
		return( licenseLoaderBehaviour );
	}

	void CFBamSaxLoader::setLicenseLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		licenseLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getMajorVersionLoaderBehaviour() const {
		return( majorVersionLoaderBehaviour );
	}

	void CFBamSaxLoader::setMajorVersionLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		majorVersionLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getMimeTypeLoaderBehaviour() const {
		return( mimeTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setMimeTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		mimeTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getMinorVersionLoaderBehaviour() const {
		return( minorVersionLoaderBehaviour );
	}

	void CFBamSaxLoader::setMinorVersionLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		minorVersionLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getNmTokenColLoaderBehaviour() const {
		return( nmTokenColLoaderBehaviour );
	}

	void CFBamSaxLoader::setNmTokenColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		nmTokenColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getNmTokenDefLoaderBehaviour() const {
		return( nmTokenDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setNmTokenDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		nmTokenDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getNmTokenTypeLoaderBehaviour() const {
		return( nmTokenTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setNmTokenTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		nmTokenTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getNmTokensColLoaderBehaviour() const {
		return( nmTokensColLoaderBehaviour );
	}

	void CFBamSaxLoader::setNmTokensColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		nmTokensColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getNmTokensDefLoaderBehaviour() const {
		return( nmTokensDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setNmTokensDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		nmTokensDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getNmTokensTypeLoaderBehaviour() const {
		return( nmTokensTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setNmTokensTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		nmTokensTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getNumberColLoaderBehaviour() const {
		return( numberColLoaderBehaviour );
	}

	void CFBamSaxLoader::setNumberColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		numberColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getNumberDefLoaderBehaviour() const {
		return( numberDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setNumberDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		numberDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getNumberTypeLoaderBehaviour() const {
		return( numberTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setNumberTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		numberTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getParamLoaderBehaviour() const {
		return( paramLoaderBehaviour );
	}

	void CFBamSaxLoader::setParamLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		paramLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getPopDepLoaderBehaviour() const {
		return( popDepLoaderBehaviour );
	}

	void CFBamSaxLoader::setPopDepLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		popDepLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getPopSubDep1LoaderBehaviour() const {
		return( popSubDep1LoaderBehaviour );
	}

	void CFBamSaxLoader::setPopSubDep1LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		popSubDep1LoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getPopSubDep2LoaderBehaviour() const {
		return( popSubDep2LoaderBehaviour );
	}

	void CFBamSaxLoader::setPopSubDep2LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		popSubDep2LoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getPopSubDep3LoaderBehaviour() const {
		return( popSubDep3LoaderBehaviour );
	}

	void CFBamSaxLoader::setPopSubDep3LoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		popSubDep3LoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getPopTopDepLoaderBehaviour() const {
		return( popTopDepLoaderBehaviour );
	}

	void CFBamSaxLoader::setPopTopDepLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		popTopDepLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getRelationLoaderBehaviour() const {
		return( relationLoaderBehaviour );
	}

	void CFBamSaxLoader::setRelationLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		relationLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getRelationColLoaderBehaviour() const {
		return( relationColLoaderBehaviour );
	}

	void CFBamSaxLoader::setRelationColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		relationColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSchemaDefLoaderBehaviour() const {
		return( schemaDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setSchemaDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		schemaDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSchemaRefLoaderBehaviour() const {
		return( schemaRefLoaderBehaviour );
	}

	void CFBamSaxLoader::setSchemaRefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		schemaRefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getScopeLoaderBehaviour() const {
		return( scopeLoaderBehaviour );
	}

	void CFBamSaxLoader::setScopeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		scopeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSecAppLoaderBehaviour() const {
		return( secAppLoaderBehaviour );
	}

	void CFBamSaxLoader::setSecAppLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		secAppLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSecDeviceLoaderBehaviour() const {
		return( secDeviceLoaderBehaviour );
	}

	void CFBamSaxLoader::setSecDeviceLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		secDeviceLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSecFormLoaderBehaviour() const {
		return( secFormLoaderBehaviour );
	}

	void CFBamSaxLoader::setSecFormLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		secFormLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSecGroupLoaderBehaviour() const {
		return( secGroupLoaderBehaviour );
	}

	void CFBamSaxLoader::setSecGroupLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		secGroupLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSecGroupFormLoaderBehaviour() const {
		return( secGroupFormLoaderBehaviour );
	}

	void CFBamSaxLoader::setSecGroupFormLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		secGroupFormLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSecGrpIncLoaderBehaviour() const {
		return( secGrpIncLoaderBehaviour );
	}

	void CFBamSaxLoader::setSecGrpIncLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		secGrpIncLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSecGrpMembLoaderBehaviour() const {
		return( secGrpMembLoaderBehaviour );
	}

	void CFBamSaxLoader::setSecGrpMembLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		secGrpMembLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSecSessionLoaderBehaviour() const {
		return( secSessionLoaderBehaviour );
	}

	void CFBamSaxLoader::setSecSessionLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		secSessionLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSecUserLoaderBehaviour() const {
		return( secUserLoaderBehaviour );
	}

	void CFBamSaxLoader::setSecUserLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		secUserLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getServerListFuncLoaderBehaviour() const {
		return( serverListFuncLoaderBehaviour );
	}

	void CFBamSaxLoader::setServerListFuncLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		serverListFuncLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getServerMethodLoaderBehaviour() const {
		return( serverMethodLoaderBehaviour );
	}

	void CFBamSaxLoader::setServerMethodLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		serverMethodLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getServerObjFuncLoaderBehaviour() const {
		return( serverObjFuncLoaderBehaviour );
	}

	void CFBamSaxLoader::setServerObjFuncLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		serverObjFuncLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getServerProcLoaderBehaviour() const {
		return( serverProcLoaderBehaviour );
	}

	void CFBamSaxLoader::setServerProcLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		serverProcLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getServiceLoaderBehaviour() const {
		return( serviceLoaderBehaviour );
	}

	void CFBamSaxLoader::setServiceLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		serviceLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getServiceTypeLoaderBehaviour() const {
		return( serviceTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setServiceTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		serviceTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getStringColLoaderBehaviour() const {
		return( stringColLoaderBehaviour );
	}

	void CFBamSaxLoader::setStringColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		stringColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getStringDefLoaderBehaviour() const {
		return( stringDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setStringDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		stringDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getStringTypeLoaderBehaviour() const {
		return( stringTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setStringTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		stringTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSubProjectLoaderBehaviour() const {
		return( subProjectLoaderBehaviour );
	}

	void CFBamSaxLoader::setSubProjectLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		subProjectLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getSysClusterLoaderBehaviour() const {
		return( sysClusterLoaderBehaviour );
	}

	void CFBamSaxLoader::setSysClusterLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		sysClusterLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTSecGroupLoaderBehaviour() const {
		return( tSecGroupLoaderBehaviour );
	}

	void CFBamSaxLoader::setTSecGroupLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tSecGroupLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTSecGrpIncLoaderBehaviour() const {
		return( tSecGrpIncLoaderBehaviour );
	}

	void CFBamSaxLoader::setTSecGrpIncLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tSecGrpIncLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTSecGrpMembLoaderBehaviour() const {
		return( tSecGrpMembLoaderBehaviour );
	}

	void CFBamSaxLoader::setTSecGrpMembLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tSecGrpMembLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTZDateColLoaderBehaviour() const {
		return( tZDateColLoaderBehaviour );
	}

	void CFBamSaxLoader::setTZDateColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tZDateColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTZDateDefLoaderBehaviour() const {
		return( tZDateDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setTZDateDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tZDateDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTZDateTypeLoaderBehaviour() const {
		return( tZDateTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setTZDateTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tZDateTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTZTimeColLoaderBehaviour() const {
		return( tZTimeColLoaderBehaviour );
	}

	void CFBamSaxLoader::setTZTimeColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tZTimeColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTZTimeDefLoaderBehaviour() const {
		return( tZTimeDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setTZTimeDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tZTimeDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTZTimeTypeLoaderBehaviour() const {
		return( tZTimeTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setTZTimeTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tZTimeTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTZTimestampColLoaderBehaviour() const {
		return( tZTimestampColLoaderBehaviour );
	}

	void CFBamSaxLoader::setTZTimestampColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tZTimestampColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTZTimestampDefLoaderBehaviour() const {
		return( tZTimestampDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setTZTimestampDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tZTimestampDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTZTimestampTypeLoaderBehaviour() const {
		return( tZTimestampTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setTZTimestampTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tZTimestampTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTableLoaderBehaviour() const {
		return( tableLoaderBehaviour );
	}

	void CFBamSaxLoader::setTableLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tableLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTableColLoaderBehaviour() const {
		return( tableColLoaderBehaviour );
	}

	void CFBamSaxLoader::setTableColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tableColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTenantLoaderBehaviour() const {
		return( tenantLoaderBehaviour );
	}

	void CFBamSaxLoader::setTenantLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tenantLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTextColLoaderBehaviour() const {
		return( textColLoaderBehaviour );
	}

	void CFBamSaxLoader::setTextColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		textColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTextDefLoaderBehaviour() const {
		return( textDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setTextDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		textDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTextTypeLoaderBehaviour() const {
		return( textTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setTextTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		textTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTimeColLoaderBehaviour() const {
		return( timeColLoaderBehaviour );
	}

	void CFBamSaxLoader::setTimeColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		timeColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTimeDefLoaderBehaviour() const {
		return( timeDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setTimeDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		timeDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTimeTypeLoaderBehaviour() const {
		return( timeTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setTimeTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		timeTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTimestampColLoaderBehaviour() const {
		return( timestampColLoaderBehaviour );
	}

	void CFBamSaxLoader::setTimestampColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		timestampColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTimestampDefLoaderBehaviour() const {
		return( timestampDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setTimestampDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		timestampDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTimestampTypeLoaderBehaviour() const {
		return( timestampTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setTimestampTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		timestampTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTldLoaderBehaviour() const {
		return( tldLoaderBehaviour );
	}

	void CFBamSaxLoader::setTldLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tldLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTokenColLoaderBehaviour() const {
		return( tokenColLoaderBehaviour );
	}

	void CFBamSaxLoader::setTokenColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tokenColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTokenDefLoaderBehaviour() const {
		return( tokenDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setTokenDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tokenDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTokenTypeLoaderBehaviour() const {
		return( tokenTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setTokenTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		tokenTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTopDomainLoaderBehaviour() const {
		return( topDomainLoaderBehaviour );
	}

	void CFBamSaxLoader::setTopDomainLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		topDomainLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getTopProjectLoaderBehaviour() const {
		return( topProjectLoaderBehaviour );
	}

	void CFBamSaxLoader::setTopProjectLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		topProjectLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUInt16ColLoaderBehaviour() const {
		return( uInt16ColLoaderBehaviour );
	}

	void CFBamSaxLoader::setUInt16ColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uInt16ColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUInt16DefLoaderBehaviour() const {
		return( uInt16DefLoaderBehaviour );
	}

	void CFBamSaxLoader::setUInt16DefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uInt16DefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUInt16TypeLoaderBehaviour() const {
		return( uInt16TypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setUInt16TypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uInt16TypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUInt32ColLoaderBehaviour() const {
		return( uInt32ColLoaderBehaviour );
	}

	void CFBamSaxLoader::setUInt32ColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uInt32ColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUInt32DefLoaderBehaviour() const {
		return( uInt32DefLoaderBehaviour );
	}

	void CFBamSaxLoader::setUInt32DefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uInt32DefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUInt32TypeLoaderBehaviour() const {
		return( uInt32TypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setUInt32TypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uInt32TypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUInt64ColLoaderBehaviour() const {
		return( uInt64ColLoaderBehaviour );
	}

	void CFBamSaxLoader::setUInt64ColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uInt64ColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUInt64DefLoaderBehaviour() const {
		return( uInt64DefLoaderBehaviour );
	}

	void CFBamSaxLoader::setUInt64DefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uInt64DefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUInt64TypeLoaderBehaviour() const {
		return( uInt64TypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setUInt64TypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uInt64TypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getURLProtocolLoaderBehaviour() const {
		return( uRLProtocolLoaderBehaviour );
	}

	void CFBamSaxLoader::setURLProtocolLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uRLProtocolLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUuidColLoaderBehaviour() const {
		return( uuidColLoaderBehaviour );
	}

	void CFBamSaxLoader::setUuidColLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uuidColLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUuidDefLoaderBehaviour() const {
		return( uuidDefLoaderBehaviour );
	}

	void CFBamSaxLoader::setUuidDefLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uuidDefLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUuidGenLoaderBehaviour() const {
		return( uuidGenLoaderBehaviour );
	}

	void CFBamSaxLoader::setUuidGenLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uuidGenLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getUuidTypeLoaderBehaviour() const {
		return( uuidTypeLoaderBehaviour );
	}

	void CFBamSaxLoader::setUuidTypeLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		uuidTypeLoaderBehaviour = value;
	}

	const cfbam::CFBamSaxLoader::LoaderBehaviourEnum CFBamSaxLoader::getValueLoaderBehaviour() const {
		return( valueLoaderBehaviour );
	}

	void CFBamSaxLoader::setValueLoaderBehaviour( const cfbam::CFBamSaxLoader::LoaderBehaviourEnum value ) {
		valueLoaderBehaviour = value;
	}

	void CFBamSaxLoader::parseFile( const std::string& url ) {
		parse( url.data() );
	}

}
