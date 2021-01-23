// Description: C++18 XML Custom SAX XML Parser for Business Application Model 2.13 files

/*
 *	MSS Code Factory CFBam 2.13 CustXmlLoader
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	This file is part of MSS Code Factory.
 *	
 *	MSS Code Factory is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *	
 *	MSS Code Factory is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *	
 *	You should have received a copy of the GNU General Public License
 *	along with MSS Code Factory.  If not, see https://www.gnu.org/licenses/.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 */
#include <fstream>
#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfsecsaxloader/CFSecSaxLoader.hpp>
#include <cfintsaxloader/CFIntSaxLoader.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoader.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderBlobColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderBlobTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderBoolColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderBoolTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderChainHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderClearDepHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderDateColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderDateTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderDelDepHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderDoubleColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderDoubleTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderEnumTagHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderEnumTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderFloatColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderFloatTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderId16GenHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderId32GenHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderId64GenHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderIndexColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderIndexHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderPrimaryIndexHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderInt16ColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderInt16TypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderInt32ColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderInt32TypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderInt64ColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderInt64TypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderLicenseHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderMajorVersionHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderMinorVersionHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderNmTokenColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderNmTokenTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderNmTokensColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderNmTokensTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderNumberColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderNumberTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderParamHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderRelationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderSuperClassRelationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderRelationColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderSchemaDefHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderSchemaRefHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderServerListFuncHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderServerObjFuncHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderServerProcHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderStringColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderStringTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderSubProjectHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTZDateColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTZDateTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTZTimeColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTZTimeTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTZTimestampColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTZTimestampTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTableColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTableHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTableAddendumHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTextColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTextTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTimeColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTimeTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTimestampColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTimestampTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTldHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTokenColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTokenTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTopDomainHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderTopProjectHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderUInt16ColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderUInt16TypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderUInt32ColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderUInt32TypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderUInt64ColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderUInt64TypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderUuidColHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderUuidGenHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderUuidTypeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusDb2LUWSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusDb2LUWSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusDb2LUWSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusDb2LUWTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusDb2LUWTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusDb2LUWTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMSSqlSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMSSqlSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMSSqlSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMSSqlTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMSSqlTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMSSqlTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMethodBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMySqlSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMySqlSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMySqlTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMySqlTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusMySqlTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusOracleSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusOracleSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusOracleSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusOracleTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusOracleTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusOracleTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusPgSqlSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusPgSqlSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusPgSqlSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusPgSqlTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusPgSqlTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusPgSqlTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusRamSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusRamSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusRamSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusRamTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusRamTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusRamTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusSchemaObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusSchemaObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusTableInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusTableObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusTableObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusTableObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusTableObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgClientSchemaBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgClientSchemaIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgClientTableBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgClientTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRqstSchemaBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRqstSchemaIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRqstSchemaWireParsersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRqstSchemaXsdElementListHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRqstSchemaXsdSpecHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRqstTableBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRqstTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRspnSchemaBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRspnSchemaIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRspnSchemaWireParsersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRspnSchemaXsdElementListHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRspnSchemaXsdSpecHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRspnTableBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgRspnTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgSchemaFormattersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgSchemaIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgTableFormattersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusXMsgTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpDb2LUWSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpDb2LUWSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpDb2LUWSchemaObjUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpDb2LUWTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpDb2LUWTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpDb2LUWTableUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMSSqlSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMSSqlSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMSSqlSchemaObjUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMSSqlTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMSSqlTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMSSqlTableUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMethodBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMySqlSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMySqlSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMySqlSchemaObjUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMySqlTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMySqlTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpMySqlTableUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpOracleSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpOracleSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpOracleSchemaObjUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpOracleTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpOracleTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpOracleTableUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpPgSqlSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpPgSqlSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpPgSqlSchemaObjUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpPgSqlTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpPgSqlTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpPgSqlTableUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpRamSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpRamSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpRamSchemaObjUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpRamTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpRamTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpRamTableUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpSchemaObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpSchemaObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpSchemaObjUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpTableInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpTableObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpTableObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpTableObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpTableObjUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpTableUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgClientSchemaBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgClientSchemaUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgClientTableBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgClientTableUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRqstSchemaBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRqstSchemaUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRqstSchemaWireParsersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRqstSchemaXsdElementListHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRqstSchemaXsdSpecHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRqstTableBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRqstTableUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRspnSchemaBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRspnSchemaUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRspnSchemaWireParsersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRspnSchemaXsdElementListHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRspnSchemaXsdSpecHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRspnTableBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgRspnTableUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgSchemaFormattersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgSchemaUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgTableFormattersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpXMsgTableUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusDb2LUWSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusDb2LUWSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusDb2LUWSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusDb2LUWTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusDb2LUWTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusDb2LUWTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusMSSqlSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusMSSqlSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusMSSqlSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusMSSqlTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusMSSqlTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusMSSqlTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusMySqlSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusMySqlSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusMySqlSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusMySqlTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusMySqlTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusMySqlTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusOracleSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusOracleSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusOracleSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusOracleTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusOracleTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusOracleTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusPgSqlSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusPgSqlSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusPgSqlSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusPgSqlTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusPgSqlTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusPgSqlTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusRamSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusRamSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusRamSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusRamTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusRamTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusRamTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusSchemaObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusSchemaObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusSchemaObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusTableInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusTableObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusTableObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusTableObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusTableObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgClientSchemaBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgClientSchemaIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgClientTableBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgClientTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRqstSchemaBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRqstSchemaIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRqstSchemaWireParsersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRqstSchemaXsdElementListHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRqstSchemaXsdSpecHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRqstTableBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRqstTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRspnSchemaBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRspnSchemaIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRspnSchemaWireParsersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRspnSchemaXsdElementListHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRspnSchemaXsdSpecHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRspnTableBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgRspnTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgSchemaFormattersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgSchemaIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgTableFormattersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusXMsgTableIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeDb2LUWSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeDb2LUWSchemaObjImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeDb2LUWSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeDb2LUWTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeDb2LUWTableImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeDb2LUWTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMSSqlSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMSSqlSchemaObjImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMSSqlSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMSSqlTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMSSqlTableImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMSSqlTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMethodBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMySqlSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMySqlSchemaObjImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMySqlSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMySqlTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMySqlTableImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeMySqlTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeOracleSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeOracleSchemaObjImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeOracleSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeOracleTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeOracleTableImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeOracleTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafePgSqlSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafePgSqlSchemaObjImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafePgSqlSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafePgSqlTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafePgSqlTableImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafePgSqlTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeRamSchemaObjImplHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeRamSchemaObjImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeRamSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeRamTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeRamTableImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeRamTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeSchemaObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeSchemaObjImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeSchemaObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeSchemaObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeTableImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeTableImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeTableInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeTableMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeTableObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeTableObjImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeTableObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeTableObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgClientSchemaBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgClientSchemaImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgClientTableBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgClientTableImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRqstSchemaBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRqstSchemaImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRqstSchemaWireParsersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRqstSchemaXsdElementListHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRqstSchemaXsdSpecHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRqstTableBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRqstTableImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRspnSchemaBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRspnSchemaImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRspnSchemaWireParsersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRspnSchemaXsdElementListHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRspnSchemaXsdSpecHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRspnTableBodyHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgRspnTableImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgSchemaFormattersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgSchemaImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgTableFormattersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeXMsgTableImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeObjImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeEditObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeEditObjImportHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeEditObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCafeEditObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusEditObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusEditObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusEditObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCPlusEditObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusEditObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusEditObjIncludeHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusEditObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderHPlusEditObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpObjUsingHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpEditObjImplementationHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpEditObjInterfaceHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpEditObjMembersHandler.hpp>
#include <cfbamcustxmlloader/CFBamCustXmlLoaderCSharpEditObjUsingHandler.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFEngine.hpp>

using namespace std;

namespace cfbam {

	CFBamCustXmlLoaderRootHandler::CFBamCustXmlLoaderRootHandler( cfbam::CFBamCustXmlLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamCustXmlLoaderRootHandler::~CFBamCustXmlLoaderRootHandler() {
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
	 *            wrapping another exception.
	 * @see #endElement
	 * @see Attributes#Attributes
	 */
	void CFBamCustXmlLoaderRootHandler::startElement (
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
	 *            wrapping another exception.
	 */
	void CFBamCustXmlLoaderRootHandler::endElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}


	CFBamCustXmlLoaderDocHandler::CFBamCustXmlLoaderDocHandler( cfbam::CFBamCustXmlLoader* saxLoader )
	: cflib::CFLibXmlCoreElementHandler( saxLoader )
	{
	}

	CFBamCustXmlLoaderDocHandler::~CFBamCustXmlLoaderDocHandler() {
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
	 *            wrapping another exception.
	 * @see #endElement
	 * @see Attributes#Attributes
	 */
	void CFBamCustXmlLoaderDocHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		const static std::string S_ProcName( "startElement" );
		const static std::string S_SpecificallyId( "Id" );
		const static std::string S_Object( "object" );
		const static std::string S_Uri( "uri" );
		const static std::string S_LocalName( "localname" );
		const static std::string S_GetParser( "getParser()" );
		const static std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		const static std::string S_SchemaLocation( "schemaLocation" );
		const static std::string S_QName( "qname" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_Tenant( "Tenant" );
		static const std::string S_Name( "Name" );
		static const std::string S_Description( "Description" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_ProjectRoot( "ProjectRoot" );
		static const std::string S_Dot( "." );
		const XMLCh* xmlchLocalName = NULL;
		char* cLocalName = NULL;
		std::string* attrLocalName = NULL;
		const XMLCh* xmlchValue = NULL;
		char* cValue = NULL;
		std::string* cppValue = NULL;
		char* cUri = NULL;
		char* cQName = NULL;
		if( ( uri == NULL ) || ( *uri == 0 ) ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_Uri );
		}
		if( ( localname == NULL ) || ( *localname == 0 ) ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				2,
				S_LocalName );
		}
		if( ( qname == NULL ) || ( *qname == 0 ) ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				3,
				S_QName );
		}
		cUri = xercesc::XMLString::transcode( uri );
		cLocalName = xercesc::XMLString::transcode( localname );
		cQName = xercesc::XMLString::transcode( qname );
		std::string cppUri( cUri );
		std::string cppLocalName( cLocalName );
		std::string cppQName( cQName );
		xercesc::XMLString::release( &cUri );
		cUri = NULL;
		xercesc::XMLString::release( &cLocalName );
		cLocalName = NULL;
		xercesc::XMLString::release( &cQName );
		cQName = NULL;
		if( cppQName != "MSSBam" ) {
			static const std::string Msg( "Expected QName to be 'MSSBam'" );
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				Msg );
		}
		// Common XML Attributes
		std::string* attrId = NULL;
		// Scope Attributes
		// Scope References
		cfsec::ICFSecTenantObj* refTenant = NULL;
		// SchemaDef Attributes
		std::string* attrName = NULL;
		std::string* attrDescription = NULL;
		std::string* attrRevision = NULL;
		std::string* attrProjectRoot = NULL;
		// SchemaDef References
		cfint::ICFIntMinorVersionObj* refMinorVersion = NULL;
		cfint::ICFIntLicenseObj* refDefaultLicense = NULL;
		cfsec::ICFSecTenantObj* refCTenant = NULL;

		// Attribute Extraction
		size_t numAttrs;
		size_t idxAttr;
		cfbam::CFBamCustXmlLoader* saxLoader = dynamic_cast<cfbam::CFBamCustXmlLoader*>( getParser() );
		if( saxLoader == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_GetParser );
		}

		cfbam::ICFBamSchemaObj* schemaObj = dynamic_cast<cfbam::ICFBamSchemaObj*>( saxLoader->getSchemaObj() );
		if( schemaObj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_GetParserGetSchemaObj );
		}

	  try {
		// Extract Attributes
		numAttrs = attrs.getLength();
		for( idxAttr = 0; idxAttr < numAttrs; idxAttr++ ) {
			if( attrLocalName != NULL ) {
				delete attrLocalName;
				attrLocalName = NULL;
			}
			if( cppValue != NULL ) {
				delete cppValue;
				cppValue = NULL;
			}
			xmlchLocalName = attrs.getLocalName( idxAttr );
			if( xmlchLocalName == NULL ) {
				continue;
			}
			cLocalName = xercesc::XMLString::transcode( xmlchLocalName );
			attrLocalName = new std::string( cLocalName );
			xercesc::XMLString::release( &cLocalName );
			cLocalName = NULL;
			xmlchValue = attrs.getValue( idxAttr );
			if( xmlchValue == NULL ) {
				cppValue = NULL;
			}
			else {
				cValue = xercesc::XMLString::transcode( xmlchValue );
				cppValue = new std::string( cValue );
				xercesc::XMLString::release( &cValue );
				cValue = NULL;
			}
			if( *attrLocalName == S_SpecificallyId ) {
				if( attrId != NULL ) {
					throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
						S_ProcName,
						*attrLocalName );
				}
				if( cppValue != NULL ) {
					attrId = new std::string( *cppValue );
				}
			}
			else if( *attrLocalName == S_Name ) {
				if( attrName != NULL ) {
					throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
						S_ProcName,
						*attrLocalName );
				}
				if( cppValue != NULL ) {
					attrName = new std::string( *cppValue );
				}
				else {
					attrName = NULL;
				}
			}
			else if( *attrLocalName == S_Description ) {
				if( attrDescription != NULL ) {
					throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
						S_ProcName,
						*attrLocalName );
				}
				if( cppValue != NULL ) {
					attrDescription = new std::string( *cppValue );
				}
				else {
					attrDescription = NULL;
				}
			}
			else if( *attrLocalName == S_Revision ) {
				if( attrRevision != NULL ) {
					throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
						S_ProcName,
						*attrLocalName );
				}
				if( cppValue != NULL ) {
					attrRevision = new std::string( *cppValue );
				}
				else {
					attrRevision = NULL;
				}
			}
			else if( *attrLocalName == S_ProjectRoot ) {
				if( attrProjectRoot != NULL ) {
					throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
						S_ProcName,
						*attrLocalName );
				}
				if( cppValue != NULL ) {
					attrProjectRoot = new std::string( *cppValue );
				}
				else {
					attrProjectRoot = NULL;
				}
			}
			else if( *attrLocalName == S_SchemaLocation ) {
				// ignored
			}
			else {
				throw cflib::CFLibUnrecognizedAttributeException( CLASS_NAME,
					S_ProcName,
					getParser()->getLocationInfo(),
					*attrLocalName );
			}
			if( cppValue != NULL ) {
				delete cppValue;
				cppValue = NULL;
			}
			if( attrLocalName != NULL ) {
				delete attrLocalName;
				attrLocalName = NULL;
			}
		}

		// Ensure that required attributes have values
		if( attrName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_Name );
		}
		if( attrRevision == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				*attrName + S_Dot + S_Revision );
		}
		if( attrDescription == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				*attrName + S_Dot + S_Description );
		}
		if( attrProjectRoot == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				*attrName + S_Dot + S_ProjectRoot );
		}

		// Save named attributes to context
		cflib::CFLibXmlCoreContext* curContext = getParser()->getCurContext();
		if( curContext == NULL ) {
			static const std::string S_CurContext( "getParser()->getCurContext" );
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_CurContext );
		}

		curContext->putNamedTag( S_Description, *attrDescription );
		curContext->putNamedTag( S_Name, *attrName );
		curContext->putNamedTag( S_Revision, *attrRevision );
		curContext->putNamedTag( S_ProjectRoot, *attrProjectRoot );

		curContext->setObj( saxLoader->getTenant() );

		if( attrLocalName != NULL ) {
			delete attrLocalName;
			attrLocalName = NULL;
		}
		if( cppValue != NULL ) {
			delete cppValue;
			cppValue = NULL;
		}
	  }
	  catch( xercesc::SAXNotRecognizedException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw x;
	  }
	  catch( xercesc::SAXNotSupportedException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw x;
	  }
	  catch( xercesc::SAXParseException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw x;
	  }
	  catch( cflib::CFLibArgumentOverflowException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibArgumentRangeException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibArgumentUnderflowException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibCollisionDetectedException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibDbException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibDependentsDetectedException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibEmptyArgumentException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibInvalidArgumentException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibMathException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibMustOverrideException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibNotImplementedYetException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibNotSupportedException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibNullArgumentException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibPrimaryKeyNotNewException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibStaleCacheDetectedException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibSubroutineException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibUniqueIndexViolationException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibUnrecognizedAttributeException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibUnresolvedRelationException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibUnsupportedClassException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibUsageException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibArgumentException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( cflib::CFLibRuntimeException x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
	  catch( std::exception x ) {
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
		throw xercesc::SAXException( x.what() );
	  }
		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
		if( attrDescription != NULL ) {
			delete attrDescription;
			attrDescription = NULL;
		}
		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}
		if( attrProjectRoot != NULL ) {
			delete attrProjectRoot;
			attrProjectRoot = NULL;
		}
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
	 *            wrapping another exception.
	 */
	void CFBamCustXmlLoaderDocHandler::endElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
		static const std::string S_ProcName( "endElement" );
		const static std::string S_GetParser( "getParser()" );
		const static std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );

		// Attribute Extraction
		cfbam::CFBamCustXmlLoader* saxLoader = dynamic_cast<cfbam::CFBamCustXmlLoader*>( getParser() );
		if( saxLoader == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_GetParser );
		}

		cfbam::ICFBamSchemaObj* schemaObj = dynamic_cast<cfbam::ICFBamSchemaObj*>( saxLoader->getSchemaObj() );
		if( schemaObj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_GetParserGetSchemaObj );
		}

		cflib::CFLibXmlCoreContext* curContext = getParser()->getCurContext();
		if( curContext == NULL ) {
			static const std::string S_CurContext( "getParser()->getCurContext" );
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_CurContext );
		}

		std::string projectRootName = curContext->getNamedTag( "ProjectRoot" );
		std::string name = curContext->getNamedTag( "Name" );
		std::string description = curContext->getNamedTag( "Description" );

		cfbam::ICFBamTenantObj* tenant = dynamic_cast<cfbam::ICFBamTenantObj*>( curContext->getObj() );
		if( tenant != NULL ) {
			cflib::ICFLibAnyObj* rootDef = tenant->getNamedObject( projectRootName );
			if( rootDef != NULL ) {
				if( rootDef->implementsClassCode( cfint::CFIntMajorVersionBuff::CLASS_CODE ) ) {
					saxLoader->definedProjectVersion = rootDef;
					saxLoader->getLog()->message( "Parsed " + name + " " + description );
				}
				else if( rootDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
					saxLoader->definedProjectVersion = rootDef;
					saxLoader->getLog()->message( "Parsed " + name + " " + description );
				}
				else {
					saxLoader->definedProjectVersion = NULL;
					throw cflib::CFLibRuntimeException( CLASS_NAME,
						S_ProcName,
						"Loaded Business Application Model does not define Project Root \"" + projectRootName + "\"" );
				}
			}
		}
	}

	const std::string CFBamCustXmlLoader::CLASS_NAME( "CFBamCustXmlLoader" );
	const std::string CFBamCustXmlLoader::SCHEMA_XMLNS( "uri://cfbam/cfbamloader" );
	const std::string CFBamCustXmlLoader::SCHEMA_URI( "/usr/share/msobkow/2.0.13/xsd/cfbam-structured.xsd" );
	bool CFBamCustXmlLoader::grammarLoaded = false;

	std::vector<std::string> CFBamCustXmlLoader::modelPath;

	CFBamCustXmlLoader::CFBamCustXmlLoader()
	: cflib::CFLibXmlCoreSaxParser()
	{
		schemaObj = NULL;
		saxRootHandler = NULL;
		saxDocHandler = NULL;
		blobColHandler = NULL;
		blobTypeHandler = NULL;
		boolColHandler = NULL;
		boolTypeHandler = NULL;
		chainHandler = NULL;
		clearDepHandler = NULL;
		dateColHandler = NULL;
		dateTypeHandler = NULL;
		delDepHandler = NULL;
		doubleColHandler = NULL;
		doubleTypeHandler = NULL;
		enumTagHandler = NULL;
		enumTypeHandler = NULL;
		floatColHandler = NULL;
		floatTypeHandler = NULL;
		id16GenHandler = NULL;
		id32GenHandler = NULL;
		id64GenHandler = NULL;
		indexHandler = NULL;
		primaryIndexHandler = NULL;
		indexColHandler = NULL;
		int16ColHandler = NULL;
		int16TypeHandler = NULL;
		int32ColHandler = NULL;
		int32TypeHandler = NULL;
		int64ColHandler = NULL;
		int64TypeHandler = NULL;
		licenseHandler = NULL;
		majorVersionHandler = NULL;
		minorVersionHandler = NULL;
		nmTokenColHandler = NULL;
		nmTokenTypeHandler = NULL;
		nmTokensColHandler = NULL;
		nmTokensTypeHandler = NULL;
		numberColHandler = NULL;
		numberTypeHandler = NULL;
		paramHandler = NULL;
		relationHandler = NULL;
		superClassRelationHandler = NULL;
		relationColHandler = NULL;
		schemaDefHandler = NULL;
		schemaRefHandler = NULL;
		serverListFuncHandler = NULL;
		serverObjFuncHandler = NULL;
		serverProcHandler = NULL;
		stringColHandler = NULL;
		stringTypeHandler = NULL;
		subProjectHandler = NULL;
		tZDateColHandler = NULL;
		tZDateTypeHandler = NULL;
		tZTimeColHandler = NULL;
		tZTimeTypeHandler = NULL;
		tZTimestampColHandler = NULL;
		tZTimestampTypeHandler = NULL;
		tableHandler = NULL;
		tableAddendumHandler = NULL;
		tableColHandler = NULL;
		textColHandler = NULL;
		textTypeHandler = NULL;
		timeColHandler = NULL;
		timeTypeHandler = NULL;
		timestampColHandler = NULL;
		timestampTypeHandler = NULL;
		tldHandler = NULL;
		tokenColHandler = NULL;
		tokenTypeHandler = NULL;
		topDomainHandler = NULL;
		topProjectHandler = NULL;
		uInt16ColHandler = NULL;
		uInt16TypeHandler = NULL;
		uInt32ColHandler = NULL;
		uInt32TypeHandler = NULL;
		uInt64ColHandler = NULL;
		uInt64TypeHandler = NULL;
		uuidColHandler = NULL;
		uuidGenHandler = NULL;
		uuidTypeHandler = NULL;
		useCluster = NULL;
		useTenant = NULL;
		cplusDb2LUWSchemaObjImplHandler = NULL; 
		cplusDb2LUWSchemaObjIncludeHandler = NULL; 
		cplusDb2LUWSchemaObjMembersHandler = NULL; 
		cplusDb2LUWTableImplementationHandler = NULL; 
		cplusDb2LUWTableIncludeHandler = NULL; 
		cplusDb2LUWTableMembersHandler = NULL; 
		cplusMSSqlSchemaObjImplHandler = NULL; 
		cplusMSSqlSchemaObjIncludeHandler = NULL; 
		cplusMSSqlSchemaObjMembersHandler = NULL; 
		cplusMSSqlTableImplementationHandler = NULL; 
		cplusMSSqlTableIncludeHandler = NULL; 
		cplusMSSqlTableMembersHandler = NULL; 
		cplusMethodBodyHandler = NULL; 
		cplusMySqlSchemaObjImplHandler = NULL; 
		cplusMySqlSchemaObjIncludeHandler = NULL; 
		cplusMySqlSchemaObjMembersHandler = NULL; 
		cplusMySqlTableImplementationHandler = NULL; 
		cplusMySqlTableIncludeHandler = NULL; 
		cplusMySqlTableMembersHandler = NULL; 
		cplusOracleSchemaObjImplHandler = NULL; 
		cplusOracleSchemaObjIncludeHandler = NULL; 
		cplusOracleSchemaObjMembersHandler = NULL; 
		cplusOracleTableImplementationHandler = NULL; 
		cplusOracleTableIncludeHandler = NULL; 
		cplusOracleTableMembersHandler = NULL; 
		cplusPgSqlSchemaObjImplHandler = NULL; 
		cplusPgSqlSchemaObjIncludeHandler = NULL; 
		cplusPgSqlSchemaObjMembersHandler = NULL; 
		cplusPgSqlTableImplementationHandler = NULL; 
		cplusPgSqlTableIncludeHandler = NULL; 
		cplusPgSqlTableMembersHandler = NULL; 
		cplusRamSchemaObjImplHandler = NULL; 
		cplusRamSchemaObjIncludeHandler = NULL; 
		cplusRamSchemaObjMembersHandler = NULL; 
		cplusRamTableImplementationHandler = NULL; 
		cplusRamTableIncludeHandler = NULL; 
		cplusRamTableMembersHandler = NULL; 
		cplusSchemaObjImplementationHandler = NULL; 
		cplusSchemaObjIncludeHandler = NULL; 
		cplusSchemaObjInterfaceHandler = NULL; 
		cplusSchemaObjMembersHandler = NULL; 
		cplusTableImplementationHandler = NULL; 
		cplusTableIncludeHandler = NULL; 
		cplusTableInterfaceHandler = NULL; 
		cplusTableMembersHandler = NULL; 
		cplusTableObjImplementationHandler = NULL; 
		cplusTableObjIncludeHandler = NULL; 
		cplusTableObjInterfaceHandler = NULL; 
		cplusTableObjMembersHandler = NULL; 
		cplusXMsgClientSchemaBodyHandler = NULL; 
		cplusXMsgClientSchemaIncludeHandler = NULL; 
		cplusXMsgClientTableBodyHandler = NULL; 
		cplusXMsgClientTableIncludeHandler = NULL; 
		cplusXMsgRqstSchemaBodyHandler = NULL; 
		cplusXMsgRqstSchemaIncludeHandler = NULL; 
		cplusXMsgRqstSchemaWireParsersHandler = NULL; 
		cplusXMsgRqstSchemaXsdElementListHandler = NULL; 
		cplusXMsgRqstSchemaXsdSpecHandler = NULL; 
		cplusXMsgRqstTableBodyHandler = NULL; 
		cplusXMsgRqstTableIncludeHandler = NULL; 
		cplusXMsgRspnSchemaBodyHandler = NULL; 
		cplusXMsgRspnSchemaIncludeHandler = NULL; 
		cplusXMsgRspnSchemaWireParsersHandler = NULL; 
		cplusXMsgRspnSchemaXsdElementListHandler = NULL; 
		cplusXMsgRspnSchemaXsdSpecHandler = NULL; 
		cplusXMsgRspnTableBodyHandler = NULL; 
		cplusXMsgRspnTableIncludeHandler = NULL; 
		cplusXMsgSchemaFormattersHandler = NULL; 
		cplusXMsgSchemaIncludeHandler = NULL; 
		cplusXMsgTableFormattersHandler = NULL; 
		cplusXMsgTableIncludeHandler = NULL; 
		csharpDb2LUWSchemaObjImplHandler = NULL; 
		csharpDb2LUWSchemaObjMembersHandler = NULL; 
		csharpDb2LUWSchemaObjUsingHandler = NULL; 
		csharpDb2LUWTableImplementationHandler = NULL; 
		csharpDb2LUWTableMembersHandler = NULL; 
		csharpDb2LUWTableUsingHandler = NULL; 
		csharpMSSqlSchemaObjImplHandler = NULL; 
		csharpMSSqlSchemaObjMembersHandler = NULL; 
		csharpMSSqlSchemaObjUsingHandler = NULL; 
		csharpMSSqlTableImplementationHandler = NULL; 
		csharpMSSqlTableMembersHandler = NULL; 
		csharpMSSqlTableUsingHandler = NULL; 
		csharpMethodBodyHandler = NULL; 
		csharpMySqlSchemaObjImplHandler = NULL; 
		csharpMySqlSchemaObjMembersHandler = NULL; 
		csharpMySqlSchemaObjUsingHandler = NULL; 
		csharpMySqlTableImplementationHandler = NULL; 
		csharpMySqlTableMembersHandler = NULL; 
		csharpMySqlTableUsingHandler = NULL; 
		csharpOracleSchemaObjImplHandler = NULL; 
		csharpOracleSchemaObjMembersHandler = NULL; 
		csharpOracleSchemaObjUsingHandler = NULL; 
		csharpOracleTableImplementationHandler = NULL; 
		csharpOracleTableMembersHandler = NULL; 
		csharpOracleTableUsingHandler = NULL; 
		csharpPgSqlSchemaObjImplHandler = NULL; 
		csharpPgSqlSchemaObjMembersHandler = NULL; 
		csharpPgSqlSchemaObjUsingHandler = NULL; 
		csharpPgSqlTableImplementationHandler = NULL; 
		csharpPgSqlTableMembersHandler = NULL; 
		csharpPgSqlTableUsingHandler = NULL; 
		csharpRamSchemaObjImplHandler = NULL; 
		csharpRamSchemaObjMembersHandler = NULL; 
		csharpRamSchemaObjUsingHandler = NULL; 
		csharpRamTableImplementationHandler = NULL; 
		csharpRamTableMembersHandler = NULL; 
		csharpRamTableUsingHandler = NULL; 
		csharpSchemaObjImplementationHandler = NULL; 
		csharpSchemaObjInterfaceHandler = NULL; 
		csharpSchemaObjMembersHandler = NULL; 
		csharpSchemaObjUsingHandler = NULL; 
		csharpTableImplementationHandler = NULL; 
		csharpTableInterfaceHandler = NULL; 
		csharpTableMembersHandler = NULL; 
		csharpTableObjImplementationHandler = NULL; 
		csharpTableObjInterfaceHandler = NULL; 
		csharpTableObjMembersHandler = NULL; 
		csharpTableObjUsingHandler = NULL; 
		csharpTableUsingHandler = NULL; 
		csharpXMsgClientSchemaBodyHandler = NULL; 
		csharpXMsgClientSchemaUsingHandler = NULL; 
		csharpXMsgClientTableBodyHandler = NULL; 
		csharpXMsgClientTableUsingHandler = NULL; 
		csharpXMsgRqstSchemaBodyHandler = NULL; 
		csharpXMsgRqstSchemaUsingHandler = NULL; 
		csharpXMsgRqstSchemaWireParsersHandler = NULL; 
		csharpXMsgRqstSchemaXsdElementListHandler = NULL; 
		csharpXMsgRqstSchemaXsdSpecHandler = NULL; 
		csharpXMsgRqstTableBodyHandler = NULL; 
		csharpXMsgRqstTableUsingHandler = NULL; 
		csharpXMsgRspnSchemaBodyHandler = NULL; 
		csharpXMsgRspnSchemaUsingHandler = NULL; 
		csharpXMsgRspnSchemaWireParsersHandler = NULL; 
		csharpXMsgRspnSchemaXsdElementListHandler = NULL; 
		csharpXMsgRspnSchemaXsdSpecHandler = NULL; 
		csharpXMsgRspnTableBodyHandler = NULL; 
		csharpXMsgRspnTableUsingHandler = NULL; 
		csharpXMsgSchemaFormattersHandler = NULL; 
		csharpXMsgSchemaUsingHandler = NULL; 
		csharpXMsgTableFormattersHandler = NULL; 
		csharpXMsgTableUsingHandler = NULL; 
		hplusDb2LUWSchemaObjImplHandler = NULL; 
		hplusDb2LUWSchemaObjIncludeHandler = NULL; 
		hplusDb2LUWSchemaObjMembersHandler = NULL; 
		hplusDb2LUWTableImplementationHandler = NULL; 
		hplusDb2LUWTableIncludeHandler = NULL; 
		hplusDb2LUWTableMembersHandler = NULL; 
		hplusMSSqlSchemaObjImplHandler = NULL; 
		hplusMSSqlSchemaObjIncludeHandler = NULL; 
		hplusMSSqlSchemaObjMembersHandler = NULL; 
		hplusMSSqlTableImplementationHandler = NULL; 
		hplusMSSqlTableIncludeHandler = NULL; 
		hplusMSSqlTableMembersHandler = NULL; 
		hplusMySqlSchemaObjImplHandler = NULL; 
		hplusMySqlSchemaObjIncludeHandler = NULL; 
		hplusMySqlSchemaObjMembersHandler = NULL; 
		hplusMySqlTableImplementationHandler = NULL; 
		hplusMySqlTableIncludeHandler = NULL; 
		hplusMySqlTableMembersHandler = NULL; 
		hplusOracleSchemaObjImplHandler = NULL; 
		hplusOracleSchemaObjIncludeHandler = NULL; 
		hplusOracleSchemaObjMembersHandler = NULL; 
		hplusOracleTableImplementationHandler = NULL; 
		hplusOracleTableIncludeHandler = NULL; 
		hplusOracleTableMembersHandler = NULL; 
		hplusPgSqlSchemaObjImplHandler = NULL; 
		hplusPgSqlSchemaObjIncludeHandler = NULL; 
		hplusPgSqlSchemaObjMembersHandler = NULL; 
		hplusPgSqlTableImplementationHandler = NULL; 
		hplusPgSqlTableIncludeHandler = NULL; 
		hplusPgSqlTableMembersHandler = NULL; 
		hplusRamSchemaObjImplHandler = NULL; 
		hplusRamSchemaObjIncludeHandler = NULL; 
		hplusRamSchemaObjMembersHandler = NULL; 
		hplusRamTableImplementationHandler = NULL; 
		hplusRamTableIncludeHandler = NULL; 
		hplusRamTableMembersHandler = NULL; 
		hplusSchemaObjImplementationHandler = NULL; 
		hplusSchemaObjIncludeHandler = NULL; 
		hplusSchemaObjInterfaceHandler = NULL; 
		hplusSchemaObjMembersHandler = NULL; 
		hplusTableImplementationHandler = NULL; 
		hplusTableIncludeHandler = NULL; 
		hplusTableInterfaceHandler = NULL; 
		hplusTableMembersHandler = NULL; 
		hplusTableObjImplementationHandler = NULL; 
		hplusTableObjIncludeHandler = NULL; 
		hplusTableObjInterfaceHandler = NULL; 
		hplusTableObjMembersHandler = NULL; 
		hplusXMsgClientSchemaBodyHandler = NULL; 
		hplusXMsgClientSchemaIncludeHandler = NULL; 
		hplusXMsgClientTableBodyHandler = NULL; 
		hplusXMsgClientTableIncludeHandler = NULL; 
		hplusXMsgRqstSchemaBodyHandler = NULL; 
		hplusXMsgRqstSchemaIncludeHandler = NULL; 
		hplusXMsgRqstSchemaWireParsersHandler = NULL; 
		hplusXMsgRqstSchemaXsdElementListHandler = NULL; 
		hplusXMsgRqstSchemaXsdSpecHandler = NULL; 
		hplusXMsgRqstTableBodyHandler = NULL; 
		hplusXMsgRqstTableIncludeHandler = NULL; 
		hplusXMsgRspnSchemaBodyHandler = NULL; 
		hplusXMsgRspnSchemaIncludeHandler = NULL; 
		hplusXMsgRspnSchemaWireParsersHandler = NULL; 
		hplusXMsgRspnSchemaXsdElementListHandler = NULL; 
		hplusXMsgRspnSchemaXsdSpecHandler = NULL; 
		hplusXMsgRspnTableBodyHandler = NULL; 
		hplusXMsgRspnTableIncludeHandler = NULL; 
		hplusXMsgSchemaFormattersHandler = NULL; 
		hplusXMsgSchemaIncludeHandler = NULL; 
		hplusXMsgTableFormattersHandler = NULL; 
		hplusXMsgTableIncludeHandler = NULL; 
		cafeDb2LUWSchemaObjImplHandler = NULL; 
		cafeDb2LUWSchemaObjImportHandler = NULL; 
		cafeDb2LUWSchemaObjMembersHandler = NULL; 
		cafeDb2LUWTableImplementationHandler = NULL; 
		cafeDb2LUWTableImportHandler = NULL; 
		cafeDb2LUWTableMembersHandler = NULL; 
		cafeMSSqlSchemaObjImplHandler = NULL; 
		cafeMSSqlSchemaObjImportHandler = NULL; 
		cafeMSSqlSchemaObjMembersHandler = NULL; 
		cafeMSSqlTableImplementationHandler = NULL; 
		cafeMSSqlTableImportHandler = NULL; 
		cafeMSSqlTableMembersHandler = NULL; 
		cafeMethodBodyHandler = NULL; 
		cafeMySqlSchemaObjImplHandler = NULL; 
		cafeMySqlSchemaObjImportHandler = NULL; 
		cafeMySqlSchemaObjMembersHandler = NULL; 
		cafeMySqlTableImplementationHandler = NULL; 
		cafeMySqlTableImportHandler = NULL; 
		cafeMySqlTableMembersHandler = NULL; 
		cafeOracleSchemaObjImplHandler = NULL; 
		cafeOracleSchemaObjImportHandler = NULL; 
		cafeOracleSchemaObjMembersHandler = NULL; 
		cafeOracleTableImplementationHandler = NULL; 
		cafeOracleTableImportHandler = NULL; 
		cafeOracleTableMembersHandler = NULL; 
		cafePgSqlSchemaObjImplHandler = NULL; 
		cafePgSqlSchemaObjImportHandler = NULL; 
		cafePgSqlSchemaObjMembersHandler = NULL; 
		cafePgSqlTableImplementationHandler = NULL; 
		cafePgSqlTableImportHandler = NULL; 
		cafePgSqlTableMembersHandler = NULL; 
		cafeRamSchemaObjImplHandler = NULL; 
		cafeRamSchemaObjImportHandler = NULL; 
		cafeRamSchemaObjMembersHandler = NULL; 
		cafeRamTableImplementationHandler = NULL; 
		cafeRamTableImportHandler = NULL; 
		cafeRamTableMembersHandler = NULL; 
		cafeSchemaObjImplementationHandler = NULL; 
		cafeSchemaObjImportHandler = NULL; 
		cafeSchemaObjInterfaceHandler = NULL; 
		cafeSchemaObjMembersHandler = NULL; 
		cafeTableImplementationHandler = NULL; 
		cafeTableImportHandler = NULL; 
		cafeTableInterfaceHandler = NULL; 
		cafeTableMembersHandler = NULL; 
		cafeTableObjImplementationHandler = NULL; 
		cafeTableObjImportHandler = NULL; 
		cafeTableObjInterfaceHandler = NULL; 
		cafeTableObjMembersHandler = NULL; 
		cafeXMsgClientSchemaBodyHandler = NULL; 
		cafeXMsgClientSchemaImportHandler = NULL; 
		cafeXMsgClientTableBodyHandler = NULL; 
		cafeXMsgClientTableImportHandler = NULL; 
		cafeXMsgRqstSchemaBodyHandler = NULL; 
		cafeXMsgRqstSchemaImportHandler = NULL; 
		cafeXMsgRqstSchemaWireParsersHandler = NULL; 
		cafeXMsgRqstSchemaXsdElementListHandler = NULL; 
		cafeXMsgRqstSchemaXsdSpecHandler = NULL; 
		cafeXMsgRqstTableBodyHandler = NULL; 
		cafeXMsgRqstTableImportHandler = NULL; 
		cafeXMsgRspnSchemaBodyHandler = NULL; 
		cafeXMsgRspnSchemaImportHandler = NULL; 
		cafeXMsgRspnSchemaWireParsersHandler = NULL; 
		cafeXMsgRspnSchemaXsdElementListHandler = NULL; 
		cafeXMsgRspnSchemaXsdSpecHandler = NULL; 
		cafeXMsgRspnTableBodyHandler = NULL; 
		cafeXMsgRspnTableImportHandler = NULL; 
		cafeXMsgSchemaFormattersHandler = NULL; 
		cafeXMsgSchemaImportHandler = NULL; 
		cafeXMsgTableFormattersHandler = NULL; 
		cafeXMsgTableImportHandler = NULL; 
		cafeObjImplementationHandler = NULL;
		cafeObjImportHandler = NULL;
		cafeObjInterfaceHandler = NULL;
		cafeObjMembersHandler = NULL;
		cafeEditObjImplementationHandler = NULL;
		cafeEditObjImportHandler = NULL;
		cafeEditObjInterfaceHandler = NULL;
		cafeEditObjMembersHandler = NULL;
		cplusObjImplementationHandler = NULL;
		cplusObjIncludeHandler = NULL;
		cplusObjInterfaceHandler = NULL;
		cplusObjMembersHandler = NULL;
		cplusEditObjImplementationHandler = NULL;
		cplusEditObjIncludeHandler = NULL;
		cplusEditObjInterfaceHandler = NULL;
		cplusEditObjMembersHandler = NULL;
		hplusObjImplementationHandler = NULL;
		hplusObjIncludeHandler = NULL;
		hplusObjInterfaceHandler = NULL;
		hplusObjMembersHandler = NULL;
		hplusEditObjImplementationHandler = NULL;
		hplusEditObjIncludeHandler = NULL;
		hplusEditObjInterfaceHandler = NULL;
		hplusEditObjMembersHandler = NULL;
		csharpObjImplementationHandler = NULL;
		csharpObjInterfaceHandler = NULL;
		csharpObjMembersHandler = NULL;
		csharpObjUsingHandler = NULL;
		csharpEditObjImplementationHandler = NULL;
		csharpEditObjInterfaceHandler = NULL;
		csharpEditObjMembersHandler = NULL;
		csharpEditObjUsingHandler = NULL;
		setRootElementHandler( getSaxRootHandler() );
		verifyGrammarInstallation();
		initParser();
	}

	CFBamCustXmlLoader::CFBamCustXmlLoader( cfbam::CFBamCustMssCFEngine* engine, cflib::ICFLibMessageLog* logger )
	: cflib::CFLibXmlCoreSaxParser( logger )
	{
		bamEngine = engine;
		saxRootHandler = NULL;
		saxDocHandler = NULL;
		blobColHandler = NULL;
		blobTypeHandler = NULL;
		boolColHandler = NULL;
		boolTypeHandler = NULL;
		chainHandler = NULL;
		clearDepHandler = NULL;
		dateColHandler = NULL;
		dateTypeHandler = NULL;
		delDepHandler = NULL;
		doubleColHandler = NULL;
		doubleTypeHandler = NULL;
		enumTagHandler = NULL;
		enumTypeHandler = NULL;
		floatColHandler = NULL;
		floatTypeHandler = NULL;
		id16GenHandler = NULL;
		id32GenHandler = NULL;
		id64GenHandler = NULL;
		indexHandler = NULL;
		primaryIndexHandler = NULL;
		indexColHandler = NULL;
		int16ColHandler = NULL;
		int16TypeHandler = NULL;
		int32ColHandler = NULL;
		int32TypeHandler = NULL;
		int64ColHandler = NULL;
		int64TypeHandler = NULL;
		licenseHandler = NULL;
		majorVersionHandler = NULL;
		minorVersionHandler = NULL;
		nmTokenColHandler = NULL;
		nmTokenTypeHandler = NULL;
		nmTokensColHandler = NULL;
		nmTokensTypeHandler = NULL;
		numberColHandler = NULL;
		numberTypeHandler = NULL;
		paramHandler = NULL;
		relationHandler = NULL;
		superClassRelationHandler = NULL;
		relationColHandler = NULL;
		schemaDefHandler = NULL;
		schemaRefHandler = NULL;
		serverListFuncHandler = NULL;
		serverObjFuncHandler = NULL;
		serverProcHandler = NULL;
		stringColHandler = NULL;
		stringTypeHandler = NULL;
		subProjectHandler = NULL;
		tZDateColHandler = NULL;
		tZDateTypeHandler = NULL;
		tZTimeColHandler = NULL;
		tZTimeTypeHandler = NULL;
		tZTimestampColHandler = NULL;
		tZTimestampTypeHandler = NULL;
		tableHandler = NULL;
		tableAddendumHandler = NULL;
		tableColHandler = NULL;
		textColHandler = NULL;
		textTypeHandler = NULL;
		timeColHandler = NULL;
		timeTypeHandler = NULL;
		timestampColHandler = NULL;
		timestampTypeHandler = NULL;
		tldHandler = NULL;
		tokenColHandler = NULL;
		tokenTypeHandler = NULL;
		topDomainHandler = NULL;
		topProjectHandler = NULL;
		uInt16ColHandler = NULL;
		uInt16TypeHandler = NULL;
		uInt32ColHandler = NULL;
		uInt32TypeHandler = NULL;
		uInt64ColHandler = NULL;
		uInt64TypeHandler = NULL;
		uuidColHandler = NULL;
		uuidGenHandler = NULL;
		uuidTypeHandler = NULL;
		useCluster = NULL;
		useTenant = NULL;
		cplusDb2LUWSchemaObjImplHandler = NULL; 
		cplusDb2LUWSchemaObjIncludeHandler = NULL; 
		cplusDb2LUWSchemaObjMembersHandler = NULL; 
		cplusDb2LUWTableImplementationHandler = NULL; 
		cplusDb2LUWTableIncludeHandler = NULL; 
		cplusDb2LUWTableMembersHandler = NULL; 
		cplusMSSqlSchemaObjImplHandler = NULL; 
		cplusMSSqlSchemaObjIncludeHandler = NULL; 
		cplusMSSqlSchemaObjMembersHandler = NULL; 
		cplusMSSqlTableImplementationHandler = NULL; 
		cplusMSSqlTableIncludeHandler = NULL; 
		cplusMSSqlTableMembersHandler = NULL; 
		cplusMethodBodyHandler = NULL; 
		cplusMySqlSchemaObjImplHandler = NULL; 
		cplusMySqlSchemaObjIncludeHandler = NULL; 
		cplusMySqlSchemaObjMembersHandler = NULL; 
		cplusMySqlTableImplementationHandler = NULL; 
		cplusMySqlTableIncludeHandler = NULL; 
		cplusMySqlTableMembersHandler = NULL; 
		cplusOracleSchemaObjImplHandler = NULL; 
		cplusOracleSchemaObjIncludeHandler = NULL; 
		cplusOracleSchemaObjMembersHandler = NULL; 
		cplusOracleTableImplementationHandler = NULL; 
		cplusOracleTableIncludeHandler = NULL; 
		cplusOracleTableMembersHandler = NULL; 
		cplusPgSqlSchemaObjImplHandler = NULL; 
		cplusPgSqlSchemaObjIncludeHandler = NULL; 
		cplusPgSqlSchemaObjMembersHandler = NULL; 
		cplusPgSqlTableImplementationHandler = NULL; 
		cplusPgSqlTableIncludeHandler = NULL; 
		cplusPgSqlTableMembersHandler = NULL; 
		cplusRamSchemaObjImplHandler = NULL; 
		cplusRamSchemaObjIncludeHandler = NULL; 
		cplusRamSchemaObjMembersHandler = NULL; 
		cplusRamTableImplementationHandler = NULL; 
		cplusRamTableIncludeHandler = NULL; 
		cplusRamTableMembersHandler = NULL; 
		cplusSchemaObjImplementationHandler = NULL; 
		cplusSchemaObjIncludeHandler = NULL; 
		cplusSchemaObjInterfaceHandler = NULL; 
		cplusSchemaObjMembersHandler = NULL; 
		cplusTableImplementationHandler = NULL; 
		cplusTableIncludeHandler = NULL; 
		cplusTableInterfaceHandler = NULL; 
		cplusTableMembersHandler = NULL; 
		cplusTableObjImplementationHandler = NULL; 
		cplusTableObjIncludeHandler = NULL; 
		cplusTableObjInterfaceHandler = NULL; 
		cplusTableObjMembersHandler = NULL; 
		cplusXMsgClientSchemaBodyHandler = NULL; 
		cplusXMsgClientSchemaIncludeHandler = NULL; 
		cplusXMsgClientTableBodyHandler = NULL; 
		cplusXMsgClientTableIncludeHandler = NULL; 
		cplusXMsgRqstSchemaBodyHandler = NULL; 
		cplusXMsgRqstSchemaIncludeHandler = NULL; 
		cplusXMsgRqstSchemaWireParsersHandler = NULL; 
		cplusXMsgRqstSchemaXsdElementListHandler = NULL; 
		cplusXMsgRqstSchemaXsdSpecHandler = NULL; 
		cplusXMsgRqstTableBodyHandler = NULL; 
		cplusXMsgRqstTableIncludeHandler = NULL; 
		cplusXMsgRspnSchemaBodyHandler = NULL; 
		cplusXMsgRspnSchemaIncludeHandler = NULL; 
		cplusXMsgRspnSchemaWireParsersHandler = NULL; 
		cplusXMsgRspnSchemaXsdElementListHandler = NULL; 
		cplusXMsgRspnSchemaXsdSpecHandler = NULL; 
		cplusXMsgRspnTableBodyHandler = NULL; 
		cplusXMsgRspnTableIncludeHandler = NULL; 
		cplusXMsgSchemaFormattersHandler = NULL; 
		cplusXMsgSchemaIncludeHandler = NULL; 
		cplusXMsgTableFormattersHandler = NULL; 
		cplusXMsgTableIncludeHandler = NULL; 
		csharpDb2LUWSchemaObjImplHandler = NULL; 
		csharpDb2LUWSchemaObjMembersHandler = NULL; 
		csharpDb2LUWSchemaObjUsingHandler = NULL; 
		csharpDb2LUWTableImplementationHandler = NULL; 
		csharpDb2LUWTableMembersHandler = NULL; 
		csharpDb2LUWTableUsingHandler = NULL; 
		csharpMSSqlSchemaObjImplHandler = NULL; 
		csharpMSSqlSchemaObjMembersHandler = NULL; 
		csharpMSSqlSchemaObjUsingHandler = NULL; 
		csharpMSSqlTableImplementationHandler = NULL; 
		csharpMSSqlTableMembersHandler = NULL; 
		csharpMSSqlTableUsingHandler = NULL; 
		csharpMethodBodyHandler = NULL; 
		csharpMySqlSchemaObjImplHandler = NULL; 
		csharpMySqlSchemaObjMembersHandler = NULL; 
		csharpMySqlSchemaObjUsingHandler = NULL; 
		csharpMySqlTableImplementationHandler = NULL; 
		csharpMySqlTableMembersHandler = NULL; 
		csharpMySqlTableUsingHandler = NULL; 
		csharpOracleSchemaObjImplHandler = NULL; 
		csharpOracleSchemaObjMembersHandler = NULL; 
		csharpOracleSchemaObjUsingHandler = NULL; 
		csharpOracleTableImplementationHandler = NULL; 
		csharpOracleTableMembersHandler = NULL; 
		csharpOracleTableUsingHandler = NULL; 
		csharpPgSqlSchemaObjImplHandler = NULL; 
		csharpPgSqlSchemaObjMembersHandler = NULL; 
		csharpPgSqlSchemaObjUsingHandler = NULL; 
		csharpPgSqlTableImplementationHandler = NULL; 
		csharpPgSqlTableMembersHandler = NULL; 
		csharpPgSqlTableUsingHandler = NULL; 
		csharpRamSchemaObjImplHandler = NULL; 
		csharpRamSchemaObjMembersHandler = NULL; 
		csharpRamSchemaObjUsingHandler = NULL; 
		csharpRamTableImplementationHandler = NULL; 
		csharpRamTableMembersHandler = NULL; 
		csharpRamTableUsingHandler = NULL; 
		csharpSchemaObjImplementationHandler = NULL; 
		csharpSchemaObjInterfaceHandler = NULL; 
		csharpSchemaObjMembersHandler = NULL; 
		csharpSchemaObjUsingHandler = NULL; 
		csharpTableImplementationHandler = NULL; 
		csharpTableInterfaceHandler = NULL; 
		csharpTableMembersHandler = NULL; 
		csharpTableObjImplementationHandler = NULL; 
		csharpTableObjInterfaceHandler = NULL; 
		csharpTableObjMembersHandler = NULL; 
		csharpTableObjUsingHandler = NULL; 
		csharpTableUsingHandler = NULL; 
		csharpXMsgClientSchemaBodyHandler = NULL; 
		csharpXMsgClientSchemaUsingHandler = NULL; 
		csharpXMsgClientTableBodyHandler = NULL; 
		csharpXMsgClientTableUsingHandler = NULL; 
		csharpXMsgRqstSchemaBodyHandler = NULL; 
		csharpXMsgRqstSchemaUsingHandler = NULL; 
		csharpXMsgRqstSchemaWireParsersHandler = NULL; 
		csharpXMsgRqstSchemaXsdElementListHandler = NULL; 
		csharpXMsgRqstSchemaXsdSpecHandler = NULL; 
		csharpXMsgRqstTableBodyHandler = NULL; 
		csharpXMsgRqstTableUsingHandler = NULL; 
		csharpXMsgRspnSchemaBodyHandler = NULL; 
		csharpXMsgRspnSchemaUsingHandler = NULL; 
		csharpXMsgRspnSchemaWireParsersHandler = NULL; 
		csharpXMsgRspnSchemaXsdElementListHandler = NULL; 
		csharpXMsgRspnSchemaXsdSpecHandler = NULL; 
		csharpXMsgRspnTableBodyHandler = NULL; 
		csharpXMsgRspnTableUsingHandler = NULL; 
		csharpXMsgSchemaFormattersHandler = NULL; 
		csharpXMsgSchemaUsingHandler = NULL; 
		csharpXMsgTableFormattersHandler = NULL; 
		csharpXMsgTableUsingHandler = NULL; 
		hplusDb2LUWSchemaObjImplHandler = NULL; 
		hplusDb2LUWSchemaObjIncludeHandler = NULL; 
		hplusDb2LUWSchemaObjMembersHandler = NULL; 
		hplusDb2LUWTableImplementationHandler = NULL; 
		hplusDb2LUWTableIncludeHandler = NULL; 
		hplusDb2LUWTableMembersHandler = NULL; 
		hplusMSSqlSchemaObjImplHandler = NULL; 
		hplusMSSqlSchemaObjIncludeHandler = NULL; 
		hplusMSSqlSchemaObjMembersHandler = NULL; 
		hplusMSSqlTableImplementationHandler = NULL; 
		hplusMSSqlTableIncludeHandler = NULL; 
		hplusMSSqlTableMembersHandler = NULL; 
		hplusMySqlSchemaObjImplHandler = NULL; 
		hplusMySqlSchemaObjIncludeHandler = NULL; 
		hplusMySqlSchemaObjMembersHandler = NULL; 
		hplusMySqlTableImplementationHandler = NULL; 
		hplusMySqlTableIncludeHandler = NULL; 
		hplusMySqlTableMembersHandler = NULL; 
		hplusOracleSchemaObjImplHandler = NULL; 
		hplusOracleSchemaObjIncludeHandler = NULL; 
		hplusOracleSchemaObjMembersHandler = NULL; 
		hplusOracleTableImplementationHandler = NULL; 
		hplusOracleTableIncludeHandler = NULL; 
		hplusOracleTableMembersHandler = NULL; 
		hplusPgSqlSchemaObjImplHandler = NULL; 
		hplusPgSqlSchemaObjIncludeHandler = NULL; 
		hplusPgSqlSchemaObjMembersHandler = NULL; 
		hplusPgSqlTableImplementationHandler = NULL; 
		hplusPgSqlTableIncludeHandler = NULL; 
		hplusPgSqlTableMembersHandler = NULL; 
		hplusRamSchemaObjImplHandler = NULL; 
		hplusRamSchemaObjIncludeHandler = NULL; 
		hplusRamSchemaObjMembersHandler = NULL; 
		hplusRamTableImplementationHandler = NULL; 
		hplusRamTableIncludeHandler = NULL; 
		hplusRamTableMembersHandler = NULL; 
		hplusSchemaObjImplementationHandler = NULL; 
		hplusSchemaObjIncludeHandler = NULL; 
		hplusSchemaObjInterfaceHandler = NULL; 
		hplusSchemaObjMembersHandler = NULL; 
		hplusTableImplementationHandler = NULL; 
		hplusTableIncludeHandler = NULL; 
		hplusTableInterfaceHandler = NULL; 
		hplusTableMembersHandler = NULL; 
		hplusTableObjImplementationHandler = NULL; 
		hplusTableObjIncludeHandler = NULL; 
		hplusTableObjInterfaceHandler = NULL; 
		hplusTableObjMembersHandler = NULL; 
		hplusXMsgClientSchemaBodyHandler = NULL; 
		hplusXMsgClientSchemaIncludeHandler = NULL; 
		hplusXMsgClientTableBodyHandler = NULL; 
		hplusXMsgClientTableIncludeHandler = NULL; 
		hplusXMsgRqstSchemaBodyHandler = NULL; 
		hplusXMsgRqstSchemaIncludeHandler = NULL; 
		hplusXMsgRqstSchemaWireParsersHandler = NULL; 
		hplusXMsgRqstSchemaXsdElementListHandler = NULL; 
		hplusXMsgRqstSchemaXsdSpecHandler = NULL; 
		hplusXMsgRqstTableBodyHandler = NULL; 
		hplusXMsgRqstTableIncludeHandler = NULL; 
		hplusXMsgRspnSchemaBodyHandler = NULL; 
		hplusXMsgRspnSchemaIncludeHandler = NULL; 
		hplusXMsgRspnSchemaWireParsersHandler = NULL; 
		hplusXMsgRspnSchemaXsdElementListHandler = NULL; 
		hplusXMsgRspnSchemaXsdSpecHandler = NULL; 
		hplusXMsgRspnTableBodyHandler = NULL; 
		hplusXMsgRspnTableIncludeHandler = NULL; 
		hplusXMsgSchemaFormattersHandler = NULL; 
		hplusXMsgSchemaIncludeHandler = NULL; 
		hplusXMsgTableFormattersHandler = NULL; 
		hplusXMsgTableIncludeHandler = NULL; 
		cafeDb2LUWSchemaObjImplHandler = NULL; 
		cafeDb2LUWSchemaObjImportHandler = NULL; 
		cafeDb2LUWSchemaObjMembersHandler = NULL; 
		cafeDb2LUWTableImplementationHandler = NULL; 
		cafeDb2LUWTableImportHandler = NULL; 
		cafeDb2LUWTableMembersHandler = NULL; 
		cafeMSSqlSchemaObjImplHandler = NULL; 
		cafeMSSqlSchemaObjImportHandler = NULL; 
		cafeMSSqlSchemaObjMembersHandler = NULL; 
		cafeMSSqlTableImplementationHandler = NULL; 
		cafeMSSqlTableImportHandler = NULL; 
		cafeMSSqlTableMembersHandler = NULL; 
		cafeMethodBodyHandler = NULL; 
		cafeMySqlSchemaObjImplHandler = NULL; 
		cafeMySqlSchemaObjImportHandler = NULL; 
		cafeMySqlSchemaObjMembersHandler = NULL; 
		cafeMySqlTableImplementationHandler = NULL; 
		cafeMySqlTableImportHandler = NULL; 
		cafeMySqlTableMembersHandler = NULL; 
		cafeOracleSchemaObjImplHandler = NULL; 
		cafeOracleSchemaObjImportHandler = NULL; 
		cafeOracleSchemaObjMembersHandler = NULL; 
		cafeOracleTableImplementationHandler = NULL; 
		cafeOracleTableImportHandler = NULL; 
		cafeOracleTableMembersHandler = NULL; 
		cafePgSqlSchemaObjImplHandler = NULL; 
		cafePgSqlSchemaObjImportHandler = NULL; 
		cafePgSqlSchemaObjMembersHandler = NULL; 
		cafePgSqlTableImplementationHandler = NULL; 
		cafePgSqlTableImportHandler = NULL; 
		cafePgSqlTableMembersHandler = NULL; 
		cafeRamSchemaObjImplHandler = NULL; 
		cafeRamSchemaObjImportHandler = NULL; 
		cafeRamSchemaObjMembersHandler = NULL; 
		cafeRamTableImplementationHandler = NULL; 
		cafeRamTableImportHandler = NULL; 
		cafeRamTableMembersHandler = NULL; 
		cafeSchemaObjImplementationHandler = NULL; 
		cafeSchemaObjImportHandler = NULL; 
		cafeSchemaObjInterfaceHandler = NULL; 
		cafeSchemaObjMembersHandler = NULL; 
		cafeTableImplementationHandler = NULL; 
		cafeTableImportHandler = NULL; 
		cafeTableInterfaceHandler = NULL; 
		cafeTableMembersHandler = NULL; 
		cafeTableObjImplementationHandler = NULL; 
		cafeTableObjImportHandler = NULL; 
		cafeTableObjInterfaceHandler = NULL; 
		cafeTableObjMembersHandler = NULL; 
		cafeXMsgClientSchemaBodyHandler = NULL; 
		cafeXMsgClientSchemaImportHandler = NULL; 
		cafeXMsgClientTableBodyHandler = NULL; 
		cafeXMsgClientTableImportHandler = NULL; 
		cafeXMsgRqstSchemaBodyHandler = NULL; 
		cafeXMsgRqstSchemaImportHandler = NULL; 
		cafeXMsgRqstSchemaWireParsersHandler = NULL; 
		cafeXMsgRqstSchemaXsdElementListHandler = NULL; 
		cafeXMsgRqstSchemaXsdSpecHandler = NULL; 
		cafeXMsgRqstTableBodyHandler = NULL; 
		cafeXMsgRqstTableImportHandler = NULL; 
		cafeXMsgRspnSchemaBodyHandler = NULL; 
		cafeXMsgRspnSchemaImportHandler = NULL; 
		cafeXMsgRspnSchemaWireParsersHandler = NULL; 
		cafeXMsgRspnSchemaXsdElementListHandler = NULL; 
		cafeXMsgRspnSchemaXsdSpecHandler = NULL; 
		cafeXMsgRspnTableBodyHandler = NULL; 
		cafeXMsgRspnTableImportHandler = NULL; 
		cafeXMsgSchemaFormattersHandler = NULL; 
		cafeXMsgSchemaImportHandler = NULL; 
		cafeXMsgTableFormattersHandler = NULL; 
		cafeXMsgTableImportHandler = NULL; 
		cafeObjImplementationHandler = NULL;
		cafeObjImportHandler = NULL;
		cafeObjInterfaceHandler = NULL;
		cafeObjMembersHandler = NULL;
		cafeEditObjImplementationHandler = NULL;
		cafeEditObjImportHandler = NULL;
		cafeEditObjInterfaceHandler = NULL;
		cafeEditObjMembersHandler = NULL;
		cplusObjImplementationHandler = NULL;
		cplusObjIncludeHandler = NULL;
		cplusObjInterfaceHandler = NULL;
		cplusObjMembersHandler = NULL;
		cplusEditObjImplementationHandler = NULL;
		cplusEditObjIncludeHandler = NULL;
		cplusEditObjInterfaceHandler = NULL;
		cplusEditObjMembersHandler = NULL;
		hplusObjImplementationHandler = NULL;
		hplusObjIncludeHandler = NULL;
		hplusObjInterfaceHandler = NULL;
		hplusObjMembersHandler = NULL;
		hplusEditObjImplementationHandler = NULL;
		hplusEditObjIncludeHandler = NULL;
		hplusEditObjInterfaceHandler = NULL;
		hplusEditObjMembersHandler = NULL;
		csharpObjImplementationHandler = NULL;
		csharpObjInterfaceHandler = NULL;
		csharpObjMembersHandler = NULL;
		csharpObjUsingHandler = NULL;
		csharpEditObjImplementationHandler = NULL;
		csharpEditObjInterfaceHandler = NULL;
		csharpEditObjMembersHandler = NULL;
		csharpEditObjUsingHandler = NULL;
		setRootElementHandler( getSaxRootHandler() );
		verifyGrammarInstallation();
		initParser();
	}

	CFBamCustXmlLoader::~CFBamCustXmlLoader() {
		if( blobColHandler != NULL ) {
			delete blobColHandler;
			blobColHandler = NULL;
		}
		if( blobTypeHandler != NULL ) {
			delete blobTypeHandler;
			blobTypeHandler = NULL;
		}
		if( boolColHandler != NULL ) {
			delete boolColHandler;
			boolColHandler = NULL;
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
		if( dateColHandler != NULL ) {
			delete dateColHandler;
			dateColHandler = NULL;
		}
		if( dateTypeHandler != NULL ) {
			delete dateTypeHandler;
			dateTypeHandler = NULL;
		}
		if( delDepHandler != NULL ) {
			delete delDepHandler;
			delDepHandler = NULL;
		}
		if( doubleColHandler != NULL ) {
			delete doubleColHandler;
			doubleColHandler = NULL;
		}
		if( doubleTypeHandler != NULL ) {
			delete doubleTypeHandler;
			doubleTypeHandler = NULL;
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
		if( floatTypeHandler != NULL ) {
			delete floatTypeHandler;
			floatTypeHandler = NULL;
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
		if( primaryIndexHandler != NULL ) {
			delete primaryIndexHandler;
			primaryIndexHandler = NULL;
		}
		if( indexColHandler != NULL ) {
			delete indexColHandler;
			indexColHandler = NULL;
		}
		if( int16ColHandler != NULL ) {
			delete int16ColHandler;
			int16ColHandler = NULL;
		}
		if( int16TypeHandler != NULL ) {
			delete int16TypeHandler;
			int16TypeHandler = NULL;
		}
		if( int32ColHandler != NULL ) {
			delete int32ColHandler;
			int32ColHandler = NULL;
		}
		if( int32TypeHandler != NULL ) {
			delete int32TypeHandler;
			int32TypeHandler = NULL;
		}
		if( int64ColHandler != NULL ) {
			delete int64ColHandler;
			int64ColHandler = NULL;
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
		if( minorVersionHandler != NULL ) {
			delete minorVersionHandler;
			minorVersionHandler = NULL;
		}
		if( nmTokenColHandler != NULL ) {
			delete nmTokenColHandler;
			nmTokenColHandler = NULL;
		}
		if( nmTokenTypeHandler != NULL ) {
			delete nmTokenTypeHandler;
			nmTokenTypeHandler = NULL;
		}
		if( nmTokensColHandler != NULL ) {
			delete nmTokensColHandler;
			nmTokensColHandler = NULL;
		}
		if( nmTokensTypeHandler != NULL ) {
			delete nmTokensTypeHandler;
			nmTokensTypeHandler = NULL;
		}
		if( numberColHandler != NULL ) {
			delete numberColHandler;
			numberColHandler = NULL;
		}
		if( numberTypeHandler != NULL ) {
			delete numberTypeHandler;
			numberTypeHandler = NULL;
		}
		if( paramHandler != NULL ) {
			delete paramHandler;
			paramHandler = NULL;
		}
		if( relationHandler != NULL ) {
			delete relationHandler;
			relationHandler = NULL;
		}
		if( superClassRelationHandler != NULL ) {
			delete superClassRelationHandler;
			superClassRelationHandler = NULL;
		}
		if( relationColHandler != NULL ) {
			delete relationColHandler;
			relationColHandler = NULL;
		}
		if( schemaDefHandler != NULL ) {
			delete schemaDefHandler;
			schemaDefHandler = NULL;
		}
		if( schemaRefHandler != NULL ) {
			delete schemaRefHandler;
			schemaRefHandler = NULL;
		}
		if( serverListFuncHandler != NULL ) {
			delete serverListFuncHandler;
			serverListFuncHandler = NULL;
		}
		if( serverObjFuncHandler != NULL ) {
			delete serverObjFuncHandler;
			serverObjFuncHandler = NULL;
		}
		if( serverProcHandler != NULL ) {
			delete serverProcHandler;
			serverProcHandler = NULL;
		}
		if( stringColHandler != NULL ) {
			delete stringColHandler;
			stringColHandler = NULL;
		}
		if( stringTypeHandler != NULL ) {
			delete stringTypeHandler;
			stringTypeHandler = NULL;
		}
		if( subProjectHandler != NULL ) {
			delete subProjectHandler;
			subProjectHandler = NULL;
		}
		if( tZDateColHandler != NULL ) {
			delete tZDateColHandler;
			tZDateColHandler = NULL;
		}
		if( tZDateTypeHandler != NULL ) {
			delete tZDateTypeHandler;
			tZDateTypeHandler = NULL;
		}
		if( tZTimeColHandler != NULL ) {
			delete tZTimeColHandler;
			tZTimeColHandler = NULL;
		}
		if( tZTimeTypeHandler != NULL ) {
			delete tZTimeTypeHandler;
			tZTimeTypeHandler = NULL;
		}
		if( tZTimestampColHandler != NULL ) {
			delete tZTimestampColHandler;
			tZTimestampColHandler = NULL;
		}
		if( tZTimestampTypeHandler != NULL ) {
			delete tZTimestampTypeHandler;
			tZTimestampTypeHandler = NULL;
		}
		if( tableHandler != NULL ) {
			delete tableHandler;
			tableHandler = NULL;
		}
		if( tableAddendumHandler != NULL ) {
			delete tableAddendumHandler;
			tableAddendumHandler = NULL;
		}
		if( tableColHandler != NULL ) {
			delete tableColHandler;
			tableColHandler = NULL;
		}
		if( textColHandler != NULL ) {
			delete textColHandler;
			textColHandler = NULL;
		}
		if( textTypeHandler != NULL ) {
			delete textTypeHandler;
			textTypeHandler = NULL;
		}
		if( timeColHandler != NULL ) {
			delete timeColHandler;
			timeColHandler = NULL;
		}
		if( timeTypeHandler != NULL ) {
			delete timeTypeHandler;
			timeTypeHandler = NULL;
		}
		if( timestampColHandler != NULL ) {
			delete timestampColHandler;
			timestampColHandler = NULL;
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
		if( uInt16TypeHandler != NULL ) {
			delete uInt16TypeHandler;
			uInt16TypeHandler = NULL;
		}
		if( uInt32ColHandler != NULL ) {
			delete uInt32ColHandler;
			uInt32ColHandler = NULL;
		}
		if( uInt32TypeHandler != NULL ) {
			delete uInt32TypeHandler;
			uInt32TypeHandler = NULL;
		}
		if( uInt64ColHandler != NULL ) {
			delete uInt64ColHandler;
			uInt64ColHandler = NULL;
		}
		if( uInt64TypeHandler != NULL ) {
			delete uInt64TypeHandler;
			uInt64TypeHandler = NULL;
		}
		if( uuidColHandler != NULL ) {
			delete uuidColHandler;
			uuidColHandler = NULL;
		}
		if( uuidGenHandler != NULL ) {
			delete uuidGenHandler;
			uuidGenHandler = NULL;
		}
		if( uuidTypeHandler != NULL ) {
			delete uuidTypeHandler;
			uuidTypeHandler = NULL;
		}
		if( cplusDb2LUWSchemaObjImplHandler != NULL ) {
			delete cplusDb2LUWSchemaObjImplHandler;
			cplusDb2LUWSchemaObjImplHandler = NULL;
		} 
		if( cplusDb2LUWSchemaObjIncludeHandler != NULL ) {
			delete cplusDb2LUWSchemaObjIncludeHandler;
			cplusDb2LUWSchemaObjIncludeHandler = NULL;
		} 
		if( cplusDb2LUWSchemaObjMembersHandler != NULL ) {
			delete cplusDb2LUWSchemaObjMembersHandler;
			cplusDb2LUWSchemaObjMembersHandler = NULL;
		} 
		if( cplusDb2LUWTableImplementationHandler != NULL ) {
			delete cplusDb2LUWTableImplementationHandler;
			cplusDb2LUWTableImplementationHandler = NULL;
		} 
		if( cplusDb2LUWTableIncludeHandler != NULL ) {
			delete cplusDb2LUWTableIncludeHandler;
			cplusDb2LUWTableIncludeHandler = NULL;
		} 
		if( cplusDb2LUWTableMembersHandler != NULL ) {
			delete cplusDb2LUWTableMembersHandler;
			cplusDb2LUWTableMembersHandler = NULL;
		} 
		if( cplusMSSqlSchemaObjImplHandler != NULL ) {
			delete cplusMSSqlSchemaObjImplHandler;
			cplusMSSqlSchemaObjImplHandler = NULL;
		} 
		if( cplusMSSqlSchemaObjIncludeHandler != NULL ) {
			delete cplusMSSqlSchemaObjIncludeHandler;
			cplusMSSqlSchemaObjIncludeHandler = NULL;
		} 
		if( cplusMSSqlSchemaObjMembersHandler != NULL ) {
			delete cplusMSSqlSchemaObjMembersHandler;
			cplusMSSqlSchemaObjMembersHandler = NULL;
		} 
		if( cplusMSSqlTableImplementationHandler != NULL ) {
			delete cplusMSSqlTableImplementationHandler;
			cplusMSSqlTableImplementationHandler = NULL;
		} 
		if( cplusMSSqlTableIncludeHandler != NULL ) {
			delete cplusMSSqlTableIncludeHandler;
			cplusMSSqlTableIncludeHandler = NULL;
		} 
		if( cplusMSSqlTableMembersHandler != NULL ) {
			delete cplusMSSqlTableMembersHandler;
			cplusMSSqlTableMembersHandler = NULL;
		} 
		if( cplusMethodBodyHandler != NULL ) {
			delete cplusMethodBodyHandler;
			cplusMethodBodyHandler = NULL;
		} 
		if( cplusMySqlSchemaObjImplHandler != NULL ) {
			delete cplusMySqlSchemaObjImplHandler;
			cplusMySqlSchemaObjImplHandler = NULL;
		} 
		if( cplusMySqlSchemaObjIncludeHandler != NULL ) {
			delete cplusMySqlSchemaObjIncludeHandler;
			cplusMySqlSchemaObjIncludeHandler = NULL;
		} 
		if( cplusMySqlSchemaObjMembersHandler != NULL ) {
			delete cplusMySqlSchemaObjMembersHandler;
			cplusMySqlSchemaObjMembersHandler = NULL;
		} 
		if( cplusMySqlTableImplementationHandler != NULL ) {
			delete cplusMySqlTableImplementationHandler;
			cplusMySqlTableImplementationHandler = NULL;
		} 
		if( cplusMySqlTableIncludeHandler != NULL ) {
			delete cplusMySqlTableIncludeHandler;
			cplusMySqlTableIncludeHandler = NULL;
		} 
		if( cplusMySqlTableMembersHandler != NULL ) {
			delete cplusMySqlTableMembersHandler;
			cplusMySqlTableMembersHandler = NULL;
		} 
		if( cplusOracleSchemaObjImplHandler != NULL ) {
			delete cplusOracleSchemaObjImplHandler;
			cplusOracleSchemaObjImplHandler = NULL;
		} 
		if( cplusOracleSchemaObjIncludeHandler != NULL ) {
			delete cplusOracleSchemaObjIncludeHandler;
			cplusOracleSchemaObjIncludeHandler = NULL;
		} 
		if( cplusOracleSchemaObjMembersHandler != NULL ) {
			delete cplusOracleSchemaObjMembersHandler;
			cplusOracleSchemaObjMembersHandler = NULL;
		} 
		if( cplusOracleTableImplementationHandler != NULL ) {
			delete cplusOracleTableImplementationHandler;
			cplusOracleTableImplementationHandler = NULL;
		} 
		if( cplusOracleTableIncludeHandler != NULL ) {
			delete cplusOracleTableIncludeHandler;
			cplusOracleTableIncludeHandler = NULL;
		} 
		if( cplusOracleTableMembersHandler != NULL ) {
			delete cplusOracleTableMembersHandler;
			cplusOracleTableMembersHandler = NULL;
		} 
		if( cplusPgSqlSchemaObjImplHandler != NULL ) {
			delete cplusPgSqlSchemaObjImplHandler;
			cplusPgSqlSchemaObjImplHandler = NULL;
		} 
		if( cplusPgSqlSchemaObjIncludeHandler != NULL ) {
			delete cplusPgSqlSchemaObjIncludeHandler;
			cplusPgSqlSchemaObjIncludeHandler = NULL;
		} 
		if( cplusPgSqlSchemaObjMembersHandler != NULL ) {
			delete cplusPgSqlSchemaObjMembersHandler;
			cplusPgSqlSchemaObjMembersHandler = NULL;
		} 
		if( cplusPgSqlTableImplementationHandler != NULL ) {
			delete cplusPgSqlTableImplementationHandler;
			cplusPgSqlTableImplementationHandler = NULL;
		} 
		if( cplusPgSqlTableIncludeHandler != NULL ) {
			delete cplusPgSqlTableIncludeHandler;
			cplusPgSqlTableIncludeHandler = NULL;
		} 
		if( cplusPgSqlTableMembersHandler != NULL ) {
			delete cplusPgSqlTableMembersHandler;
			cplusPgSqlTableMembersHandler = NULL;
		} 
		if( cplusRamSchemaObjImplHandler != NULL ) {
			delete cplusRamSchemaObjImplHandler;
			cplusRamSchemaObjImplHandler = NULL;
		} 
		if( cplusRamSchemaObjIncludeHandler != NULL ) {
			delete cplusRamSchemaObjIncludeHandler;
			cplusRamSchemaObjIncludeHandler = NULL;
		} 
		if( cplusRamSchemaObjMembersHandler != NULL ) {
			delete cplusRamSchemaObjMembersHandler;
			cplusRamSchemaObjMembersHandler = NULL;
		} 
		if( cplusRamTableImplementationHandler != NULL ) {
			delete cplusRamTableImplementationHandler;
			cplusRamTableImplementationHandler = NULL;
		} 
		if( cplusRamTableIncludeHandler != NULL ) {
			delete cplusRamTableIncludeHandler;
			cplusRamTableIncludeHandler = NULL;
		} 
		if( cplusRamTableMembersHandler != NULL ) {
			delete cplusRamTableMembersHandler;
			cplusRamTableMembersHandler = NULL;
		} 
		if( cplusSchemaObjImplementationHandler != NULL ) {
			delete cplusSchemaObjImplementationHandler;
			cplusSchemaObjImplementationHandler = NULL;
		} 
		if( cplusSchemaObjIncludeHandler != NULL ) {
			delete cplusSchemaObjIncludeHandler;
			cplusSchemaObjIncludeHandler = NULL;
		} 
		if( cplusSchemaObjInterfaceHandler != NULL ) {
			delete cplusSchemaObjInterfaceHandler;
			cplusSchemaObjInterfaceHandler = NULL;
		} 
		if( cplusSchemaObjMembersHandler != NULL ) {
			delete cplusSchemaObjMembersHandler;
			cplusSchemaObjMembersHandler = NULL;
		} 
		if( cplusTableImplementationHandler != NULL ) {
			delete cplusTableImplementationHandler;
			cplusTableImplementationHandler = NULL;
		} 
		if( cplusTableIncludeHandler != NULL ) {
			delete cplusTableIncludeHandler;
			cplusTableIncludeHandler = NULL;
		} 
		if( cplusTableInterfaceHandler != NULL ) {
			delete cplusTableInterfaceHandler;
			cplusTableInterfaceHandler = NULL;
		} 
		if( cplusTableMembersHandler != NULL ) {
			delete cplusTableMembersHandler;
			cplusTableMembersHandler = NULL;
		} 
		if( cplusTableObjImplementationHandler != NULL ) {
			delete cplusTableObjImplementationHandler;
			cplusTableObjImplementationHandler = NULL;
		} 
		if( cplusTableObjIncludeHandler != NULL ) {
			delete cplusTableObjIncludeHandler;
			cplusTableObjIncludeHandler = NULL;
		} 
		if( cplusTableObjInterfaceHandler != NULL ) {
			delete cplusTableObjInterfaceHandler;
			cplusTableObjInterfaceHandler = NULL;
		} 
		if( cplusTableObjMembersHandler != NULL ) {
			delete cplusTableObjMembersHandler;
			cplusTableObjMembersHandler = NULL;
		} 
		if( cplusXMsgClientSchemaBodyHandler != NULL ) {
			delete cplusXMsgClientSchemaBodyHandler;
			cplusXMsgClientSchemaBodyHandler = NULL;
		} 
		if( cplusXMsgClientSchemaIncludeHandler != NULL ) {
			delete cplusXMsgClientSchemaIncludeHandler;
			cplusXMsgClientSchemaIncludeHandler = NULL;
		} 
		if( cplusXMsgClientTableBodyHandler != NULL ) {
			delete cplusXMsgClientTableBodyHandler;
			cplusXMsgClientTableBodyHandler = NULL;
		} 
		if( cplusXMsgClientTableIncludeHandler != NULL ) {
			delete cplusXMsgClientTableIncludeHandler;
			cplusXMsgClientTableIncludeHandler = NULL;
		} 
		if( cplusXMsgRqstSchemaBodyHandler != NULL ) {
			delete cplusXMsgRqstSchemaBodyHandler;
			cplusXMsgRqstSchemaBodyHandler = NULL;
		} 
		if( cplusXMsgRqstSchemaIncludeHandler != NULL ) {
			delete cplusXMsgRqstSchemaIncludeHandler;
			cplusXMsgRqstSchemaIncludeHandler = NULL;
		} 
		if( cplusXMsgRqstSchemaWireParsersHandler != NULL ) {
			delete cplusXMsgRqstSchemaWireParsersHandler;
			cplusXMsgRqstSchemaWireParsersHandler = NULL;
		} 
		if( cplusXMsgRqstSchemaXsdElementListHandler != NULL ) {
			delete cplusXMsgRqstSchemaXsdElementListHandler;
			cplusXMsgRqstSchemaXsdElementListHandler = NULL;
		} 
		if( cplusXMsgRqstSchemaXsdSpecHandler != NULL ) {
			delete cplusXMsgRqstSchemaXsdSpecHandler;
			cplusXMsgRqstSchemaXsdSpecHandler = NULL;
		} 
		if( cplusXMsgRqstTableBodyHandler != NULL ) {
			delete cplusXMsgRqstTableBodyHandler;
			cplusXMsgRqstTableBodyHandler = NULL;
		} 
		if( cplusXMsgRqstTableIncludeHandler != NULL ) {
			delete cplusXMsgRqstTableIncludeHandler;
			cplusXMsgRqstTableIncludeHandler = NULL;
		} 
		if( cplusXMsgRspnSchemaBodyHandler != NULL ) {
			delete cplusXMsgRspnSchemaBodyHandler;
			cplusXMsgRspnSchemaBodyHandler = NULL;
		} 
		if( cplusXMsgRspnSchemaIncludeHandler != NULL ) {
			delete cplusXMsgRspnSchemaIncludeHandler;
			cplusXMsgRspnSchemaIncludeHandler = NULL;
		} 
		if( cplusXMsgRspnSchemaWireParsersHandler != NULL ) {
			delete cplusXMsgRspnSchemaWireParsersHandler;
			cplusXMsgRspnSchemaWireParsersHandler = NULL;
		} 
		if( cplusXMsgRspnSchemaXsdElementListHandler != NULL ) {
			delete cplusXMsgRspnSchemaXsdElementListHandler;
			cplusXMsgRspnSchemaXsdElementListHandler = NULL;
		} 
		if( cplusXMsgRspnSchemaXsdSpecHandler != NULL ) {
			delete cplusXMsgRspnSchemaXsdSpecHandler;
			cplusXMsgRspnSchemaXsdSpecHandler = NULL;
		} 
		if( cplusXMsgRspnTableBodyHandler != NULL ) {
			delete cplusXMsgRspnTableBodyHandler;
			cplusXMsgRspnTableBodyHandler = NULL;
		} 
		if( cplusXMsgRspnTableIncludeHandler != NULL ) {
			delete cplusXMsgRspnTableIncludeHandler;
			cplusXMsgRspnTableIncludeHandler = NULL;
		} 
		if( cplusXMsgSchemaFormattersHandler != NULL ) {
			delete cplusXMsgSchemaFormattersHandler;
			cplusXMsgSchemaFormattersHandler = NULL;
		} 
		if( cplusXMsgSchemaIncludeHandler != NULL ) {
			delete cplusXMsgSchemaIncludeHandler;
			cplusXMsgSchemaIncludeHandler = NULL;
		} 
		if( cplusXMsgTableFormattersHandler != NULL ) {
			delete cplusXMsgTableFormattersHandler;
			cplusXMsgTableFormattersHandler = NULL;
		} 
		if( cplusXMsgTableIncludeHandler != NULL ) {
			delete cplusXMsgTableIncludeHandler;
			cplusXMsgTableIncludeHandler = NULL;
		} 
		if( csharpDb2LUWSchemaObjImplHandler != NULL ) {
			delete csharpDb2LUWSchemaObjImplHandler;
			csharpDb2LUWSchemaObjImplHandler = NULL;
		} 
		if( csharpDb2LUWSchemaObjMembersHandler != NULL ) {
			delete csharpDb2LUWSchemaObjMembersHandler;
			csharpDb2LUWSchemaObjMembersHandler = NULL;
		} 
		if( csharpDb2LUWSchemaObjUsingHandler != NULL ) {
			delete csharpDb2LUWSchemaObjUsingHandler;
			csharpDb2LUWSchemaObjUsingHandler = NULL;
		} 
		if( csharpDb2LUWTableImplementationHandler != NULL ) {
			delete csharpDb2LUWTableImplementationHandler;
			csharpDb2LUWTableImplementationHandler = NULL;
		} 
		if( csharpDb2LUWTableMembersHandler != NULL ) {
			delete csharpDb2LUWTableMembersHandler;
			csharpDb2LUWTableMembersHandler = NULL;
		} 
		if( csharpDb2LUWTableUsingHandler != NULL ) {
			delete csharpDb2LUWTableUsingHandler;
			csharpDb2LUWTableUsingHandler = NULL;
		} 
		if( csharpMSSqlSchemaObjImplHandler != NULL ) {
			delete csharpMSSqlSchemaObjImplHandler;
			csharpMSSqlSchemaObjImplHandler = NULL;
		} 
		if( csharpMSSqlSchemaObjMembersHandler != NULL ) {
			delete csharpMSSqlSchemaObjMembersHandler;
			csharpMSSqlSchemaObjMembersHandler = NULL;
		} 
		if( csharpMSSqlSchemaObjUsingHandler != NULL ) {
			delete csharpMSSqlSchemaObjUsingHandler;
			csharpMSSqlSchemaObjUsingHandler = NULL;
		} 
		if( csharpMSSqlTableImplementationHandler != NULL ) {
			delete csharpMSSqlTableImplementationHandler;
			csharpMSSqlTableImplementationHandler = NULL;
		} 
		if( csharpMSSqlTableMembersHandler != NULL ) {
			delete csharpMSSqlTableMembersHandler;
			csharpMSSqlTableMembersHandler = NULL;
		} 
		if( csharpMSSqlTableUsingHandler != NULL ) {
			delete csharpMSSqlTableUsingHandler;
			csharpMSSqlTableUsingHandler = NULL;
		} 
		if( csharpMethodBodyHandler != NULL ) {
			delete csharpMethodBodyHandler;
			csharpMethodBodyHandler = NULL;
		} 
		if( csharpMySqlSchemaObjImplHandler != NULL ) {
			delete csharpMySqlSchemaObjImplHandler;
			csharpMySqlSchemaObjImplHandler = NULL;
		} 
		if( csharpMySqlSchemaObjMembersHandler != NULL ) {
			delete csharpMySqlSchemaObjMembersHandler;
			csharpMySqlSchemaObjMembersHandler = NULL;
		} 
		if( csharpMySqlSchemaObjUsingHandler != NULL ) {
			delete csharpMySqlSchemaObjUsingHandler;
			csharpMySqlSchemaObjUsingHandler = NULL;
		} 
		if( csharpMySqlTableImplementationHandler != NULL ) {
			delete csharpMySqlTableImplementationHandler;
			csharpMySqlTableImplementationHandler = NULL;
		} 
		if( csharpMySqlTableMembersHandler != NULL ) {
			delete csharpMySqlTableMembersHandler;
			csharpMySqlTableMembersHandler = NULL;
		} 
		if( csharpMySqlTableUsingHandler != NULL ) {
			delete csharpMySqlTableUsingHandler;
			csharpMySqlTableUsingHandler = NULL;
		} 
		if( csharpOracleSchemaObjImplHandler != NULL ) {
			delete csharpOracleSchemaObjImplHandler;
			csharpOracleSchemaObjImplHandler = NULL;
		} 
		if( csharpOracleSchemaObjMembersHandler != NULL ) {
			delete csharpOracleSchemaObjMembersHandler;
			csharpOracleSchemaObjMembersHandler = NULL;
		} 
		if( csharpOracleSchemaObjUsingHandler != NULL ) {
			delete csharpOracleSchemaObjUsingHandler;
			csharpOracleSchemaObjUsingHandler = NULL;
		} 
		if( csharpOracleTableImplementationHandler != NULL ) {
			delete csharpOracleTableImplementationHandler;
			csharpOracleTableImplementationHandler = NULL;
		} 
		if( csharpOracleTableMembersHandler != NULL ) {
			delete csharpOracleTableMembersHandler;
			csharpOracleTableMembersHandler = NULL;
		} 
		if( csharpOracleTableUsingHandler != NULL ) {
			delete csharpOracleTableUsingHandler;
			csharpOracleTableUsingHandler = NULL;
		} 
		if( csharpPgSqlSchemaObjImplHandler != NULL ) {
			delete csharpPgSqlSchemaObjImplHandler;
			csharpPgSqlSchemaObjImplHandler = NULL;
		} 
		if( csharpPgSqlSchemaObjMembersHandler != NULL ) {
			delete csharpPgSqlSchemaObjMembersHandler;
			csharpPgSqlSchemaObjMembersHandler = NULL;
		} 
		if( csharpPgSqlSchemaObjUsingHandler != NULL ) {
			delete csharpPgSqlSchemaObjUsingHandler;
			csharpPgSqlSchemaObjUsingHandler = NULL;
		} 
		if( csharpPgSqlTableImplementationHandler != NULL ) {
			delete csharpPgSqlTableImplementationHandler;
			csharpPgSqlTableImplementationHandler = NULL;
		} 
		if( csharpPgSqlTableMembersHandler != NULL ) {
			delete csharpPgSqlTableMembersHandler;
			csharpPgSqlTableMembersHandler = NULL;
		} 
		if( csharpPgSqlTableUsingHandler != NULL ) {
			delete csharpPgSqlTableUsingHandler;
			csharpPgSqlTableUsingHandler = NULL;
		} 
		if( csharpRamSchemaObjImplHandler != NULL ) {
			delete csharpRamSchemaObjImplHandler;
			csharpRamSchemaObjImplHandler = NULL;
		} 
		if( csharpRamSchemaObjMembersHandler != NULL ) {
			delete csharpRamSchemaObjMembersHandler;
			csharpRamSchemaObjMembersHandler = NULL;
		} 
		if( csharpRamSchemaObjUsingHandler != NULL ) {
			delete csharpRamSchemaObjUsingHandler;
			csharpRamSchemaObjUsingHandler = NULL;
		} 
		if( csharpRamTableImplementationHandler != NULL ) {
			delete csharpRamTableImplementationHandler;
			csharpRamTableImplementationHandler = NULL;
		} 
		if( csharpRamTableMembersHandler != NULL ) {
			delete csharpRamTableMembersHandler;
			csharpRamTableMembersHandler = NULL;
		} 
		if( csharpRamTableUsingHandler != NULL ) {
			delete csharpRamTableUsingHandler;
			csharpRamTableUsingHandler = NULL;
		} 
		if( csharpSchemaObjImplementationHandler != NULL ) {
			delete csharpSchemaObjImplementationHandler;
			csharpSchemaObjImplementationHandler = NULL;
		} 
		if( csharpSchemaObjInterfaceHandler != NULL ) {
			delete csharpSchemaObjInterfaceHandler;
			csharpSchemaObjInterfaceHandler = NULL;
		} 
		if( csharpSchemaObjMembersHandler != NULL ) {
			delete csharpSchemaObjMembersHandler;
			csharpSchemaObjMembersHandler = NULL;
		} 
		if( csharpSchemaObjUsingHandler != NULL ) {
			delete csharpSchemaObjUsingHandler;
			csharpSchemaObjUsingHandler = NULL;
		} 
		if( csharpTableImplementationHandler != NULL ) {
			delete csharpTableImplementationHandler;
			csharpTableImplementationHandler = NULL;
		} 
		if( csharpTableInterfaceHandler != NULL ) {
			delete csharpTableInterfaceHandler;
			csharpTableInterfaceHandler = NULL;
		} 
		if( csharpTableMembersHandler != NULL ) {
			delete csharpTableMembersHandler;
			csharpTableMembersHandler = NULL;
		} 
		if( csharpTableObjImplementationHandler != NULL ) {
			delete csharpTableObjImplementationHandler;
			csharpTableObjImplementationHandler = NULL;
		} 
		if( csharpTableObjInterfaceHandler != NULL ) {
			delete csharpTableObjInterfaceHandler;
			csharpTableObjInterfaceHandler = NULL;
		} 
		if( csharpTableObjMembersHandler != NULL ) {
			delete csharpTableObjMembersHandler;
			csharpTableObjMembersHandler = NULL;
		} 
		if( csharpTableObjUsingHandler != NULL ) {
			delete csharpTableObjUsingHandler;
			csharpTableObjUsingHandler = NULL;
		} 
		if( csharpTableUsingHandler != NULL ) {
			delete csharpTableUsingHandler;
			csharpTableUsingHandler = NULL;
		} 
		if( csharpXMsgClientSchemaBodyHandler != NULL ) {
			delete csharpXMsgClientSchemaBodyHandler;
			csharpXMsgClientSchemaBodyHandler = NULL;
		} 
		if( csharpXMsgClientSchemaUsingHandler != NULL ) {
			delete csharpXMsgClientSchemaUsingHandler;
			csharpXMsgClientSchemaUsingHandler = NULL;
		} 
		if( csharpXMsgClientTableBodyHandler != NULL ) {
			delete csharpXMsgClientTableBodyHandler;
			csharpXMsgClientTableBodyHandler = NULL;
		} 
		if( csharpXMsgClientTableUsingHandler != NULL ) {
			delete csharpXMsgClientTableUsingHandler;
			csharpXMsgClientTableUsingHandler = NULL;
		} 
		if( csharpXMsgRqstSchemaBodyHandler != NULL ) {
			delete csharpXMsgRqstSchemaBodyHandler;
			csharpXMsgRqstSchemaBodyHandler = NULL;
		} 
		if( csharpXMsgRqstSchemaUsingHandler != NULL ) {
			delete csharpXMsgRqstSchemaUsingHandler;
			csharpXMsgRqstSchemaUsingHandler = NULL;
		} 
		if( csharpXMsgRqstSchemaWireParsersHandler != NULL ) {
			delete csharpXMsgRqstSchemaWireParsersHandler;
			csharpXMsgRqstSchemaWireParsersHandler = NULL;
		} 
		if( csharpXMsgRqstSchemaXsdElementListHandler != NULL ) {
			delete csharpXMsgRqstSchemaXsdElementListHandler;
			csharpXMsgRqstSchemaXsdElementListHandler = NULL;
		} 
		if( csharpXMsgRqstSchemaXsdSpecHandler != NULL ) {
			delete csharpXMsgRqstSchemaXsdSpecHandler;
			csharpXMsgRqstSchemaXsdSpecHandler = NULL;
		} 
		if( csharpXMsgRqstTableBodyHandler != NULL ) {
			delete csharpXMsgRqstTableBodyHandler;
			csharpXMsgRqstTableBodyHandler = NULL;
		} 
		if( csharpXMsgRqstTableUsingHandler != NULL ) {
			delete csharpXMsgRqstTableUsingHandler;
			csharpXMsgRqstTableUsingHandler = NULL;
		} 
		if( csharpXMsgRspnSchemaBodyHandler != NULL ) {
			delete csharpXMsgRspnSchemaBodyHandler;
			csharpXMsgRspnSchemaBodyHandler = NULL;
		} 
		if( csharpXMsgRspnSchemaUsingHandler != NULL ) {
			delete csharpXMsgRspnSchemaUsingHandler;
			csharpXMsgRspnSchemaUsingHandler = NULL;
		} 
		if( csharpXMsgRspnSchemaWireParsersHandler != NULL ) {
			delete csharpXMsgRspnSchemaWireParsersHandler;
			csharpXMsgRspnSchemaWireParsersHandler = NULL;
		} 
		if( csharpXMsgRspnSchemaXsdElementListHandler != NULL ) {
			delete csharpXMsgRspnSchemaXsdElementListHandler;
			csharpXMsgRspnSchemaXsdElementListHandler = NULL;
		} 
		if( csharpXMsgRspnSchemaXsdSpecHandler != NULL ) {
			delete csharpXMsgRspnSchemaXsdSpecHandler;
			csharpXMsgRspnSchemaXsdSpecHandler = NULL;
		} 
		if( csharpXMsgRspnTableBodyHandler != NULL ) {
			delete csharpXMsgRspnTableBodyHandler;
			csharpXMsgRspnTableBodyHandler = NULL;
		} 
		if( csharpXMsgRspnTableUsingHandler != NULL ) {
			delete csharpXMsgRspnTableUsingHandler;
			csharpXMsgRspnTableUsingHandler = NULL;
		} 
		if( csharpXMsgSchemaFormattersHandler != NULL ) {
			delete csharpXMsgSchemaFormattersHandler;
			csharpXMsgSchemaFormattersHandler = NULL;
		} 
		if( csharpXMsgSchemaUsingHandler != NULL ) {
			delete csharpXMsgSchemaUsingHandler;
			csharpXMsgSchemaUsingHandler = NULL;
		} 
		if( csharpXMsgTableFormattersHandler != NULL ) {
			delete csharpXMsgTableFormattersHandler;
			csharpXMsgTableFormattersHandler = NULL;
		} 
		if( csharpXMsgTableUsingHandler != NULL ) {
			delete csharpXMsgTableUsingHandler;
			csharpXMsgTableUsingHandler = NULL;
		} 
		if( hplusDb2LUWSchemaObjImplHandler != NULL ) {
			delete hplusDb2LUWSchemaObjImplHandler;
			hplusDb2LUWSchemaObjImplHandler = NULL;
		} 
		if( hplusDb2LUWSchemaObjIncludeHandler != NULL ) {
			delete hplusDb2LUWSchemaObjIncludeHandler;
			hplusDb2LUWSchemaObjIncludeHandler = NULL;
		} 
		if( hplusDb2LUWSchemaObjMembersHandler != NULL ) {
			delete hplusDb2LUWSchemaObjMembersHandler;
			hplusDb2LUWSchemaObjMembersHandler = NULL;
		} 
		if( hplusDb2LUWTableImplementationHandler != NULL ) {
			delete hplusDb2LUWTableImplementationHandler;
			hplusDb2LUWTableImplementationHandler = NULL;
		} 
		if( hplusDb2LUWTableIncludeHandler != NULL ) {
			delete hplusDb2LUWTableIncludeHandler;
			hplusDb2LUWTableIncludeHandler = NULL;
		} 
		if( hplusDb2LUWTableMembersHandler != NULL ) {
			delete hplusDb2LUWTableMembersHandler;
			hplusDb2LUWTableMembersHandler = NULL;
		} 
		if( hplusMSSqlSchemaObjImplHandler != NULL ) {
			delete hplusMSSqlSchemaObjImplHandler;
			hplusMSSqlSchemaObjImplHandler = NULL;
		} 
		if( hplusMSSqlSchemaObjIncludeHandler != NULL ) {
			delete hplusMSSqlSchemaObjIncludeHandler;
			hplusMSSqlSchemaObjIncludeHandler = NULL;
		} 
		if( hplusMSSqlSchemaObjMembersHandler != NULL ) {
			delete hplusMSSqlSchemaObjMembersHandler;
			hplusMSSqlSchemaObjMembersHandler = NULL;
		} 
		if( hplusMSSqlTableImplementationHandler != NULL ) {
			delete hplusMSSqlTableImplementationHandler;
			hplusMSSqlTableImplementationHandler = NULL;
		} 
		if( hplusMSSqlTableIncludeHandler != NULL ) {
			delete hplusMSSqlTableIncludeHandler;
			hplusMSSqlTableIncludeHandler = NULL;
		} 
		if( hplusMSSqlTableMembersHandler != NULL ) {
			delete hplusMSSqlTableMembersHandler;
			hplusMSSqlTableMembersHandler = NULL;
		} 
		if( hplusMySqlSchemaObjImplHandler != NULL ) {
			delete hplusMySqlSchemaObjImplHandler;
			hplusMySqlSchemaObjImplHandler = NULL;
		} 
		if( hplusMySqlSchemaObjIncludeHandler != NULL ) {
			delete hplusMySqlSchemaObjIncludeHandler;
			hplusMySqlSchemaObjIncludeHandler = NULL;
		} 
		if( hplusMySqlSchemaObjMembersHandler != NULL ) {
			delete hplusMySqlSchemaObjMembersHandler;
			hplusMySqlSchemaObjMembersHandler = NULL;
		} 
		if( hplusMySqlTableImplementationHandler != NULL ) {
			delete hplusMySqlTableImplementationHandler;
			hplusMySqlTableImplementationHandler = NULL;
		} 
		if( hplusMySqlTableIncludeHandler != NULL ) {
			delete hplusMySqlTableIncludeHandler;
			hplusMySqlTableIncludeHandler = NULL;
		} 
		if( hplusMySqlTableMembersHandler != NULL ) {
			delete hplusMySqlTableMembersHandler;
			hplusMySqlTableMembersHandler = NULL;
		} 
		if( hplusOracleSchemaObjImplHandler != NULL ) {
			delete hplusOracleSchemaObjImplHandler;
			hplusOracleSchemaObjImplHandler = NULL;
		} 
		if( hplusOracleSchemaObjIncludeHandler != NULL ) {
			delete hplusOracleSchemaObjIncludeHandler;
			hplusOracleSchemaObjIncludeHandler = NULL;
		} 
		if( hplusOracleSchemaObjMembersHandler != NULL ) {
			delete hplusOracleSchemaObjMembersHandler;
			hplusOracleSchemaObjMembersHandler = NULL;
		} 
		if( hplusOracleTableImplementationHandler != NULL ) {
			delete hplusOracleTableImplementationHandler;
			hplusOracleTableImplementationHandler = NULL;
		} 
		if( hplusOracleTableIncludeHandler != NULL ) {
			delete hplusOracleTableIncludeHandler;
			hplusOracleTableIncludeHandler = NULL;
		} 
		if( hplusOracleTableMembersHandler != NULL ) {
			delete hplusOracleTableMembersHandler;
			hplusOracleTableMembersHandler = NULL;
		} 
		if( hplusPgSqlSchemaObjImplHandler != NULL ) {
			delete hplusPgSqlSchemaObjImplHandler;
			hplusPgSqlSchemaObjImplHandler = NULL;
		} 
		if( hplusPgSqlSchemaObjIncludeHandler != NULL ) {
			delete hplusPgSqlSchemaObjIncludeHandler;
			hplusPgSqlSchemaObjIncludeHandler = NULL;
		} 
		if( hplusPgSqlSchemaObjMembersHandler != NULL ) {
			delete hplusPgSqlSchemaObjMembersHandler;
			hplusPgSqlSchemaObjMembersHandler = NULL;
		} 
		if( hplusPgSqlTableImplementationHandler != NULL ) {
			delete hplusPgSqlTableImplementationHandler;
			hplusPgSqlTableImplementationHandler = NULL;
		} 
		if( hplusPgSqlTableIncludeHandler != NULL ) {
			delete hplusPgSqlTableIncludeHandler;
			hplusPgSqlTableIncludeHandler = NULL;
		} 
		if( hplusPgSqlTableMembersHandler != NULL ) {
			delete hplusPgSqlTableMembersHandler;
			hplusPgSqlTableMembersHandler = NULL;
		} 
		if( hplusRamSchemaObjImplHandler != NULL ) {
			delete hplusRamSchemaObjImplHandler;
			hplusRamSchemaObjImplHandler = NULL;
		} 
		if( hplusRamSchemaObjIncludeHandler != NULL ) {
			delete hplusRamSchemaObjIncludeHandler;
			hplusRamSchemaObjIncludeHandler = NULL;
		} 
		if( hplusRamSchemaObjMembersHandler != NULL ) {
			delete hplusRamSchemaObjMembersHandler;
			hplusRamSchemaObjMembersHandler = NULL;
		} 
		if( hplusRamTableImplementationHandler != NULL ) {
			delete hplusRamTableImplementationHandler;
			hplusRamTableImplementationHandler = NULL;
		} 
		if( hplusRamTableIncludeHandler != NULL ) {
			delete hplusRamTableIncludeHandler;
			hplusRamTableIncludeHandler = NULL;
		} 
		if( hplusRamTableMembersHandler != NULL ) {
			delete hplusRamTableMembersHandler;
			hplusRamTableMembersHandler = NULL;
		} 
		if( hplusSchemaObjImplementationHandler != NULL ) {
			delete hplusSchemaObjImplementationHandler;
			hplusSchemaObjImplementationHandler = NULL;
		} 
		if( hplusSchemaObjIncludeHandler != NULL ) {
			delete hplusSchemaObjIncludeHandler;
			hplusSchemaObjIncludeHandler = NULL;
		} 
		if( hplusSchemaObjInterfaceHandler != NULL ) {
			delete hplusSchemaObjInterfaceHandler;
			hplusSchemaObjInterfaceHandler = NULL;
		} 
		if( hplusSchemaObjMembersHandler != NULL ) {
			delete hplusSchemaObjMembersHandler;
			hplusSchemaObjMembersHandler = NULL;
		} 
		if( hplusTableImplementationHandler != NULL ) {
			delete hplusTableImplementationHandler;
			hplusTableImplementationHandler = NULL;
		} 
		if( hplusTableIncludeHandler != NULL ) {
			delete hplusTableIncludeHandler;
			hplusTableIncludeHandler = NULL;
		} 
		if( hplusTableInterfaceHandler != NULL ) {
			delete hplusTableInterfaceHandler;
			hplusTableInterfaceHandler = NULL;
		} 
		if( hplusTableMembersHandler != NULL ) {
			delete hplusTableMembersHandler;
			hplusTableMembersHandler = NULL;
		} 
		if( hplusTableObjImplementationHandler != NULL ) {
			delete hplusTableObjImplementationHandler;
			hplusTableObjImplementationHandler = NULL;
		} 
		if( hplusTableObjIncludeHandler != NULL ) {
			delete hplusTableObjIncludeHandler;
			hplusTableObjIncludeHandler = NULL;
		} 
		if( hplusTableObjInterfaceHandler != NULL ) {
			delete hplusTableObjInterfaceHandler;
			hplusTableObjInterfaceHandler = NULL;
		} 
		if( hplusTableObjMembersHandler != NULL ) {
			delete hplusTableObjMembersHandler;
			hplusTableObjMembersHandler = NULL;
		} 
		if( hplusXMsgClientSchemaBodyHandler != NULL ) {
			delete hplusXMsgClientSchemaBodyHandler;
			hplusXMsgClientSchemaBodyHandler = NULL;
		} 
		if( hplusXMsgClientSchemaIncludeHandler != NULL ) {
			delete hplusXMsgClientSchemaIncludeHandler;
			hplusXMsgClientSchemaIncludeHandler = NULL;
		} 
		if( hplusXMsgClientTableBodyHandler != NULL ) {
			delete hplusXMsgClientTableBodyHandler;
			hplusXMsgClientTableBodyHandler = NULL;
		} 
		if( hplusXMsgClientTableIncludeHandler != NULL ) {
			delete hplusXMsgClientTableIncludeHandler;
			hplusXMsgClientTableIncludeHandler = NULL;
		} 
		if( hplusXMsgRqstSchemaBodyHandler != NULL ) {
			delete hplusXMsgRqstSchemaBodyHandler;
			hplusXMsgRqstSchemaBodyHandler = NULL;
		} 
		if( hplusXMsgRqstSchemaIncludeHandler != NULL ) {
			delete hplusXMsgRqstSchemaIncludeHandler;
			hplusXMsgRqstSchemaIncludeHandler = NULL;
		} 
		if( hplusXMsgRqstSchemaWireParsersHandler != NULL ) {
			delete hplusXMsgRqstSchemaWireParsersHandler;
			hplusXMsgRqstSchemaWireParsersHandler = NULL;
		} 
		if( hplusXMsgRqstSchemaXsdElementListHandler != NULL ) {
			delete hplusXMsgRqstSchemaXsdElementListHandler;
			hplusXMsgRqstSchemaXsdElementListHandler = NULL;
		} 
		if( hplusXMsgRqstSchemaXsdSpecHandler != NULL ) {
			delete hplusXMsgRqstSchemaXsdSpecHandler;
			hplusXMsgRqstSchemaXsdSpecHandler = NULL;
		} 
		if( hplusXMsgRqstTableBodyHandler != NULL ) {
			delete hplusXMsgRqstTableBodyHandler;
			hplusXMsgRqstTableBodyHandler = NULL;
		} 
		if( hplusXMsgRqstTableIncludeHandler != NULL ) {
			delete hplusXMsgRqstTableIncludeHandler;
			hplusXMsgRqstTableIncludeHandler = NULL;
		} 
		if( hplusXMsgRspnSchemaBodyHandler != NULL ) {
			delete hplusXMsgRspnSchemaBodyHandler;
			hplusXMsgRspnSchemaBodyHandler = NULL;
		} 
		if( hplusXMsgRspnSchemaIncludeHandler != NULL ) {
			delete hplusXMsgRspnSchemaIncludeHandler;
			hplusXMsgRspnSchemaIncludeHandler = NULL;
		} 
		if( hplusXMsgRspnSchemaWireParsersHandler != NULL ) {
			delete hplusXMsgRspnSchemaWireParsersHandler;
			hplusXMsgRspnSchemaWireParsersHandler = NULL;
		} 
		if( hplusXMsgRspnSchemaXsdElementListHandler != NULL ) {
			delete hplusXMsgRspnSchemaXsdElementListHandler;
			hplusXMsgRspnSchemaXsdElementListHandler = NULL;
		} 
		if( hplusXMsgRspnSchemaXsdSpecHandler != NULL ) {
			delete hplusXMsgRspnSchemaXsdSpecHandler;
			hplusXMsgRspnSchemaXsdSpecHandler = NULL;
		} 
		if( hplusXMsgRspnTableBodyHandler != NULL ) {
			delete hplusXMsgRspnTableBodyHandler;
			hplusXMsgRspnTableBodyHandler = NULL;
		} 
		if( hplusXMsgRspnTableIncludeHandler != NULL ) {
			delete hplusXMsgRspnTableIncludeHandler;
			hplusXMsgRspnTableIncludeHandler = NULL;
		} 
		if( hplusXMsgSchemaFormattersHandler != NULL ) {
			delete hplusXMsgSchemaFormattersHandler;
			hplusXMsgSchemaFormattersHandler = NULL;
		} 
		if( hplusXMsgSchemaIncludeHandler != NULL ) {
			delete hplusXMsgSchemaIncludeHandler;
			hplusXMsgSchemaIncludeHandler = NULL;
		} 
		if( hplusXMsgTableFormattersHandler != NULL ) {
			delete hplusXMsgTableFormattersHandler;
			hplusXMsgTableFormattersHandler = NULL;
		} 
		if( hplusXMsgTableIncludeHandler != NULL ) {
			delete hplusXMsgTableIncludeHandler;
			hplusXMsgTableIncludeHandler = NULL;
		} 
		if( cafeDb2LUWSchemaObjImplHandler != NULL ) {
			delete cafeDb2LUWSchemaObjImplHandler;
			cafeDb2LUWSchemaObjImplHandler = NULL;
		} 
		if( cafeDb2LUWSchemaObjImportHandler != NULL ) {
			delete cafeDb2LUWSchemaObjImportHandler;
			cafeDb2LUWSchemaObjImportHandler = NULL;
		} 
		if( cafeDb2LUWSchemaObjMembersHandler != NULL ) {
			delete cafeDb2LUWSchemaObjMembersHandler;
			cafeDb2LUWSchemaObjMembersHandler = NULL;
		} 
		if( cafeDb2LUWTableImplementationHandler != NULL ) {
			delete cafeDb2LUWTableImplementationHandler;
			cafeDb2LUWTableImplementationHandler = NULL;
		} 
		if( cafeDb2LUWTableImportHandler != NULL ) {
			delete cafeDb2LUWTableImportHandler;
			cafeDb2LUWTableImportHandler = NULL;
		} 
		if( cafeDb2LUWTableMembersHandler != NULL ) {
			delete cafeDb2LUWTableMembersHandler;
			cafeDb2LUWTableMembersHandler = NULL;
		} 
		if( cafeMSSqlSchemaObjImplHandler != NULL ) {
			delete cafeMSSqlSchemaObjImplHandler;
			cafeMSSqlSchemaObjImplHandler = NULL;
		} 
		if( cafeMSSqlSchemaObjImportHandler != NULL ) {
			delete cafeMSSqlSchemaObjImportHandler;
			cafeMSSqlSchemaObjImportHandler = NULL;
		} 
		if( cafeMSSqlSchemaObjMembersHandler != NULL ) {
			delete cafeMSSqlSchemaObjMembersHandler;
			cafeMSSqlSchemaObjMembersHandler = NULL;
		} 
		if( cafeMSSqlTableImplementationHandler != NULL ) {
			delete cafeMSSqlTableImplementationHandler;
			cafeMSSqlTableImplementationHandler = NULL;
		} 
		if( cafeMSSqlTableImportHandler != NULL ) {
			delete cafeMSSqlTableImportHandler;
			cafeMSSqlTableImportHandler = NULL;
		} 
		if( cafeMSSqlTableMembersHandler != NULL ) {
			delete cafeMSSqlTableMembersHandler;
			cafeMSSqlTableMembersHandler = NULL;
		} 
		if( cafeMethodBodyHandler != NULL ) {
			delete cafeMethodBodyHandler;
			cafeMethodBodyHandler = NULL;
		} 
		if( cafeMySqlSchemaObjImplHandler != NULL ) {
			delete cafeMySqlSchemaObjImplHandler;
			cafeMySqlSchemaObjImplHandler = NULL;
		} 
		if( cafeMySqlSchemaObjImportHandler != NULL ) {
			delete cafeMySqlSchemaObjImportHandler;
			cafeMySqlSchemaObjImportHandler = NULL;
		} 
		if( cafeMySqlSchemaObjMembersHandler != NULL ) {
			delete cafeMySqlSchemaObjMembersHandler;
			cafeMySqlSchemaObjMembersHandler = NULL;
		} 
		if( cafeMySqlTableImplementationHandler != NULL ) {
			delete cafeMySqlTableImplementationHandler;
			cafeMySqlTableImplementationHandler = NULL;
		} 
		if( cafeMySqlTableImportHandler != NULL ) {
			delete cafeMySqlTableImportHandler;
			cafeMySqlTableImportHandler = NULL;
		} 
		if( cafeMySqlTableMembersHandler != NULL ) {
			delete cafeMySqlTableMembersHandler;
			cafeMySqlTableMembersHandler = NULL;
		} 
		if( cafeOracleSchemaObjImplHandler != NULL ) {
			delete cafeOracleSchemaObjImplHandler;
			cafeOracleSchemaObjImplHandler = NULL;
		} 
		if( cafeOracleSchemaObjImportHandler != NULL ) {
			delete cafeOracleSchemaObjImportHandler;
			cafeOracleSchemaObjImportHandler = NULL;
		} 
		if( cafeOracleSchemaObjMembersHandler != NULL ) {
			delete cafeOracleSchemaObjMembersHandler;
			cafeOracleSchemaObjMembersHandler = NULL;
		} 
		if( cafeOracleTableImplementationHandler != NULL ) {
			delete cafeOracleTableImplementationHandler;
			cafeOracleTableImplementationHandler = NULL;
		} 
		if( cafeOracleTableImportHandler != NULL ) {
			delete cafeOracleTableImportHandler;
			cafeOracleTableImportHandler = NULL;
		} 
		if( cafeOracleTableMembersHandler != NULL ) {
			delete cafeOracleTableMembersHandler;
			cafeOracleTableMembersHandler = NULL;
		} 
		if( cafePgSqlSchemaObjImplHandler != NULL ) {
			delete cafePgSqlSchemaObjImplHandler;
			cafePgSqlSchemaObjImplHandler = NULL;
		} 
		if( cafePgSqlSchemaObjImportHandler != NULL ) {
			delete cafePgSqlSchemaObjImportHandler;
			cafePgSqlSchemaObjImportHandler = NULL;
		} 
		if( cafePgSqlSchemaObjMembersHandler != NULL ) {
			delete cafePgSqlSchemaObjMembersHandler;
			cafePgSqlSchemaObjMembersHandler = NULL;
		} 
		if( cafePgSqlTableImplementationHandler != NULL ) {
			delete cafePgSqlTableImplementationHandler;
			cafePgSqlTableImplementationHandler = NULL;
		} 
		if( cafePgSqlTableImportHandler != NULL ) {
			delete cafePgSqlTableImportHandler;
			cafePgSqlTableImportHandler = NULL;
		} 
		if( cafePgSqlTableMembersHandler != NULL ) {
			delete cafePgSqlTableMembersHandler;
			cafePgSqlTableMembersHandler = NULL;
		} 
		if( cafeRamSchemaObjImplHandler != NULL ) {
			delete cafeRamSchemaObjImplHandler;
			cafeRamSchemaObjImplHandler = NULL;
		} 
		if( cafeRamSchemaObjImportHandler != NULL ) {
			delete cafeRamSchemaObjImportHandler;
			cafeRamSchemaObjImportHandler = NULL;
		} 
		if( cafeRamSchemaObjMembersHandler != NULL ) {
			delete cafeRamSchemaObjMembersHandler;
			cafeRamSchemaObjMembersHandler = NULL;
		} 
		if( cafeRamTableImplementationHandler != NULL ) {
			delete cafeRamTableImplementationHandler;
			cafeRamTableImplementationHandler = NULL;
		} 
		if( cafeRamTableImportHandler != NULL ) {
			delete cafeRamTableImportHandler;
			cafeRamTableImportHandler = NULL;
		} 
		if( cafeRamTableMembersHandler != NULL ) {
			delete cafeRamTableMembersHandler;
			cafeRamTableMembersHandler = NULL;
		} 
		if( cafeSchemaObjImplementationHandler != NULL ) {
			delete cafeSchemaObjImplementationHandler;
			cafeSchemaObjImplementationHandler = NULL;
		} 
		if( cafeSchemaObjImportHandler != NULL ) {
			delete cafeSchemaObjImportHandler;
			cafeSchemaObjImportHandler = NULL;
		} 
		if( cafeSchemaObjInterfaceHandler != NULL ) {
			delete cafeSchemaObjInterfaceHandler;
			cafeSchemaObjInterfaceHandler = NULL;
		} 
		if( cafeSchemaObjMembersHandler != NULL ) {
			delete cafeSchemaObjMembersHandler;
			cafeSchemaObjMembersHandler = NULL;
		} 
		if( cafeTableImplementationHandler != NULL ) {
			delete cafeTableImplementationHandler;
			cafeTableImplementationHandler = NULL;
		} 
		if( cafeTableImportHandler != NULL ) {
			delete cafeTableImportHandler;
			cafeTableImportHandler = NULL;
		} 
		if( cafeTableInterfaceHandler != NULL ) {
			delete cafeTableInterfaceHandler;
			cafeTableInterfaceHandler = NULL;
		} 
		if( cafeTableMembersHandler != NULL ) {
			delete cafeTableMembersHandler;
			cafeTableMembersHandler = NULL;
		} 
		if( cafeTableObjImplementationHandler != NULL ) {
			delete cafeTableObjImplementationHandler;
			cafeTableObjImplementationHandler = NULL;
		} 
		if( cafeTableObjImportHandler != NULL ) {
			delete cafeTableObjImportHandler;
			cafeTableObjImportHandler = NULL;
		} 
		if( cafeTableObjInterfaceHandler != NULL ) {
			delete cafeTableObjInterfaceHandler;
			cafeTableObjInterfaceHandler = NULL;
		} 
		if( cafeTableObjMembersHandler != NULL ) {
			delete cafeTableObjMembersHandler;
			cafeTableObjMembersHandler = NULL;
		} 
		if( cafeXMsgClientSchemaBodyHandler != NULL ) {
			delete cafeXMsgClientSchemaBodyHandler;
			cafeXMsgClientSchemaBodyHandler = NULL;
		} 
		if( cafeXMsgClientSchemaImportHandler != NULL ) {
			delete cafeXMsgClientSchemaImportHandler;
			cafeXMsgClientSchemaImportHandler = NULL;
		} 
		if( cafeXMsgClientTableBodyHandler != NULL ) {
			delete cafeXMsgClientTableBodyHandler;
			cafeXMsgClientTableBodyHandler = NULL;
		} 
		if( cafeXMsgClientTableImportHandler != NULL ) {
			delete cafeXMsgClientTableImportHandler;
			cafeXMsgClientTableImportHandler = NULL;
		} 
		if( cafeXMsgRqstSchemaBodyHandler != NULL ) {
			delete cafeXMsgRqstSchemaBodyHandler;
			cafeXMsgRqstSchemaBodyHandler = NULL;
		} 
		if( cafeXMsgRqstSchemaImportHandler != NULL ) {
			delete cafeXMsgRqstSchemaImportHandler;
			cafeXMsgRqstSchemaImportHandler = NULL;
		} 
		if( cafeXMsgRqstSchemaWireParsersHandler != NULL ) {
			delete cafeXMsgRqstSchemaWireParsersHandler;
			cafeXMsgRqstSchemaWireParsersHandler = NULL;
		} 
		if( cafeXMsgRqstSchemaXsdElementListHandler != NULL ) {
			delete cafeXMsgRqstSchemaXsdElementListHandler;
			cafeXMsgRqstSchemaXsdElementListHandler = NULL;
		} 
		if( cafeXMsgRqstSchemaXsdSpecHandler != NULL ) {
			delete cafeXMsgRqstSchemaXsdSpecHandler;
			cafeXMsgRqstSchemaXsdSpecHandler = NULL;
		} 
		if( cafeXMsgRqstTableBodyHandler != NULL ) {
			delete cafeXMsgRqstTableBodyHandler;
			cafeXMsgRqstTableBodyHandler = NULL;
		} 
		if( cafeXMsgRqstTableImportHandler != NULL ) {
			delete cafeXMsgRqstTableImportHandler;
			cafeXMsgRqstTableImportHandler = NULL;
		} 
		if( cafeXMsgRspnSchemaBodyHandler != NULL ) {
			delete cafeXMsgRspnSchemaBodyHandler;
			cafeXMsgRspnSchemaBodyHandler = NULL;
		} 
		if( cafeXMsgRspnSchemaImportHandler != NULL ) {
			delete cafeXMsgRspnSchemaImportHandler;
			cafeXMsgRspnSchemaImportHandler = NULL;
		} 
		if( cafeXMsgRspnSchemaWireParsersHandler != NULL ) {
			delete cafeXMsgRspnSchemaWireParsersHandler;
			cafeXMsgRspnSchemaWireParsersHandler = NULL;
		} 
		if( cafeXMsgRspnSchemaXsdElementListHandler != NULL ) {
			delete cafeXMsgRspnSchemaXsdElementListHandler;
			cafeXMsgRspnSchemaXsdElementListHandler = NULL;
		} 
		if( cafeXMsgRspnSchemaXsdSpecHandler != NULL ) {
			delete cafeXMsgRspnSchemaXsdSpecHandler;
			cafeXMsgRspnSchemaXsdSpecHandler = NULL;
		} 
		if( cafeXMsgRspnTableBodyHandler != NULL ) {
			delete cafeXMsgRspnTableBodyHandler;
			cafeXMsgRspnTableBodyHandler = NULL;
		} 
		if( cafeXMsgRspnTableImportHandler != NULL ) {
			delete cafeXMsgRspnTableImportHandler;
			cafeXMsgRspnTableImportHandler = NULL;
		} 
		if( cafeXMsgSchemaFormattersHandler != NULL ) {
			delete cafeXMsgSchemaFormattersHandler;
			cafeXMsgSchemaFormattersHandler = NULL;
		} 
		if( cafeXMsgSchemaImportHandler != NULL ) {
			delete cafeXMsgSchemaImportHandler;
			cafeXMsgSchemaImportHandler = NULL;
		} 
		if( cafeXMsgTableFormattersHandler != NULL ) {
			delete cafeXMsgTableFormattersHandler;
			cafeXMsgTableFormattersHandler = NULL;
		} 
		if( cafeXMsgTableImportHandler != NULL ) {
			delete cafeXMsgTableImportHandler;
			cafeXMsgTableImportHandler = NULL;
		} 
		if( cafeObjImplementationHandler != NULL ) {
			delete cafeObjImplementationHandler;
			cafeObjImplementationHandler = NULL;
		}
		if( cafeObjImportHandler != NULL ) {
			delete cafeObjImportHandler;
			cafeObjImportHandler = NULL;
		}
		if( cafeObjInterfaceHandler != NULL ) {
			delete cafeObjInterfaceHandler;
			cafeObjInterfaceHandler = NULL;
		}
		if( cafeObjMembersHandler != NULL ) {
			delete cafeObjMembersHandler;
			cafeObjMembersHandler = NULL;
		}
		if( cafeEditObjImplementationHandler != NULL ) {
			delete cafeEditObjImplementationHandler;
			cafeEditObjImplementationHandler = NULL;
		}
		if( cafeEditObjImportHandler != NULL ) {
			delete cafeEditObjImportHandler;
			cafeEditObjImportHandler = NULL;
		}
		if( cafeEditObjInterfaceHandler != NULL ) {
			delete cafeEditObjInterfaceHandler;
			cafeEditObjInterfaceHandler = NULL;
		}
		if( cafeEditObjMembersHandler != NULL ) {
			delete cafeEditObjMembersHandler;
			cafeEditObjMembersHandler = NULL;
		}
		if( cplusObjImplementationHandler != NULL ) {
			delete cplusObjImplementationHandler;
			cplusObjImplementationHandler = NULL;
		}
		if( cplusObjIncludeHandler != NULL ) {
			delete cplusObjIncludeHandler;
			cplusObjIncludeHandler = NULL;
		}
		if( cplusObjInterfaceHandler != NULL ) {
			delete cplusObjInterfaceHandler;
			cplusObjInterfaceHandler = NULL;
		}
		if( cplusObjMembersHandler != NULL ) {
			delete cplusObjMembersHandler;
			cplusObjMembersHandler = NULL;
		}
		if( cplusEditObjImplementationHandler != NULL ) {
			delete cplusEditObjImplementationHandler;
			cplusEditObjImplementationHandler = NULL;
		}
		if( cplusEditObjIncludeHandler != NULL ) {
			delete cplusEditObjIncludeHandler;
			cplusEditObjIncludeHandler = NULL;
		}
		if( cplusEditObjInterfaceHandler != NULL ) {
			delete cplusEditObjInterfaceHandler;
			cplusEditObjInterfaceHandler = NULL;
		}
		if( cplusEditObjMembersHandler != NULL ) {
			delete cplusEditObjMembersHandler;
			cplusEditObjMembersHandler = NULL;
		}
		if( hplusObjImplementationHandler != NULL ) {
			delete hplusObjImplementationHandler;
			hplusObjImplementationHandler = NULL;
		}
		if( hplusObjIncludeHandler != NULL ) {
			delete hplusObjIncludeHandler;
			hplusObjIncludeHandler = NULL;
		}
		if( hplusObjInterfaceHandler != NULL ) {
			delete hplusObjInterfaceHandler;
			hplusObjInterfaceHandler = NULL;
		}
		if( hplusObjMembersHandler != NULL ) {
			delete hplusObjMembersHandler;
			hplusObjMembersHandler = NULL;
		}
		if( hplusEditObjImplementationHandler != NULL ) {
			delete hplusEditObjImplementationHandler;
			hplusEditObjImplementationHandler = NULL;
		}
		if( hplusEditObjIncludeHandler != NULL ) {
			delete hplusEditObjIncludeHandler;
			hplusEditObjIncludeHandler = NULL;
		}
		if( hplusEditObjInterfaceHandler != NULL ) {
			delete hplusEditObjInterfaceHandler;
			hplusEditObjInterfaceHandler = NULL;
		}
		if( hplusEditObjMembersHandler != NULL ) {
			delete hplusEditObjMembersHandler;
			hplusEditObjMembersHandler = NULL;
		}
		if( csharpObjImplementationHandler != NULL ) {
			delete csharpObjImplementationHandler;
			csharpObjImplementationHandler = NULL;
		}
		if( csharpObjInterfaceHandler != NULL ) {
			delete csharpObjInterfaceHandler;
			csharpObjInterfaceHandler = NULL;
		}
		if( csharpObjMembersHandler != NULL ) {
			delete csharpObjMembersHandler;
			csharpObjMembersHandler = NULL;
		}
		if( csharpObjUsingHandler != NULL ) {
			delete csharpObjUsingHandler;
			csharpObjUsingHandler = NULL;
		}
		if( csharpEditObjImplementationHandler != NULL ) {
			delete csharpEditObjImplementationHandler;
			csharpEditObjImplementationHandler = NULL;
		}
		if( csharpEditObjInterfaceHandler != NULL ) {
			delete csharpEditObjInterfaceHandler;
			csharpEditObjInterfaceHandler = NULL;
		}
		if( csharpEditObjMembersHandler != NULL ) {
			delete csharpEditObjMembersHandler;
			csharpEditObjMembersHandler = NULL;
		}
		if( csharpEditObjUsingHandler != NULL ) {
			delete csharpEditObjUsingHandler;
			csharpEditObjUsingHandler = NULL;
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

	cfbam::CFBamCustMssCFEngine* CFBamCustXmlLoader::getBamEngine() {
		return( bamEngine );
	}

	void CFBamCustXmlLoader::addModelPath( const std::string& dirname ) {
		for( auto iter = modelPath.begin(); iter != modelPath.end(); iter ++ ) {
			if( dirname == *iter ) {
				return;
			}
		}
		modelPath.push_back( dirname );
	}

	const std::vector<std::string>& CFBamCustXmlLoader::getModelPath() {
		return( modelPath );
	}

	cfbam::ICFBamTenantObj* CFBamCustXmlLoader::getTenant() {
		return( tenant );
	}

	void CFBamCustXmlLoader::setTenant( cfbam::ICFBamTenantObj* value ) {
		tenant = value;
	}

	cflib::ICFLibAnyObj* CFBamCustXmlLoader::getDefinedProjectVersion() {
		return( definedProjectVersion );
	}

	cfbam::ICFBamTenantObj* CFBamCustXmlLoader::loadTenant( const std::string& modelName ) {
		static const std::string S_ProcName( "loadTenant" );

		std::string modelNameDotXml;
		size_t modelNameLen = modelName.length();
		if( ( modelNameLen > 4 )
		  && ( modelName[ modelNameLen - 4 ] == '.' )
		  && ( modelName[ modelNameLen - 3 ] == 'x' )
		  && ( modelName[ modelNameLen - 2 ] == 'm' )
		  && ( modelName[ modelNameLen - 1 ] == 'l' ) )
		{
			modelNameDotXml = modelName;
		}
		else {
			modelNameDotXml = modelName;
			modelNameDotXml.append( ".xml" );
		}

		std::string modelDir;
		size_t modelDirLen;
		std::string tenantFileName;
		std::string tenantRootDir;
		std::ifstream* tenantXml = NULL;
		for( auto iterPath = modelPath.begin(); ( tenantXml == NULL ) && ( iterPath != modelPath.end() ); iterPath ++ ) {
			modelDir = *iterPath;
			modelDirLen = modelDir.length();
			if( modelDirLen > 1 ) {
				if( modelDir[ modelDirLen - 1 ] == '/' ) {
					tenantRootDir = modelDir;
				}
				else {
					tenantRootDir = modelDir;
					tenantRootDir.push_back( '/' );
				}
			}

			tenantFileName = tenantRootDir + modelNameDotXml;
			tenantXml = new std::ifstream( tenantFileName );
			if( ! tenantXml->good() ) {
				delete tenantXml;
				tenantXml = NULL;
				tenantFileName = "";
			}
		}

		if( tenantXml == NULL ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				getLocationInfo() + " Could not locate Repository Model \"" + modelName + "\"" );
		}
		else {
			getBamEngine()->getLog()->message( "Loading " + modelName );
		}

		delete tenantXml;
		tenantXml = NULL;

		parse( tenantFileName.c_str() );

		return( tenant );
	}

	bool CFBamCustXmlLoader::getProcessSchema( cflib::CFLibXmlCoreContext* curContext ) {
		static const std::string S_ProcName( "getProcessSchema" );
		static const std::string S_ProcessSchema( "ProcessSchema" );
		bool retval = false;
		cflib::ICFLibAnyObj* workObj;
		cflib::CFLibXmlCoreContext* workContext = curContext;
		std::string foundVal;
		while( ( foundVal.length() <= 0 ) && ( workContext != NULL ) ) {
			workObj = workContext->getObj();
			if( ( workObj != NULL ) && ( workObj->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) ) {
				foundVal = workContext->getNamedTag( S_ProcessSchema );
				if( foundVal.length() <= 0 ) {
					workContext = workContext->getPrevContext();
				}
			}
			else {
				foundVal = "";
				workContext = workContext->getPrevContext();
			}
		}

		if( foundVal.length() <= 0 ) {
			retval = false;
		}
		else if( foundVal == "true" ) {
			retval = true;
		}
		else if( foundVal == "false" ) {
			retval = false;
		}
		else {
			throw cflib::CFLibInvalidArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				"ProcessSchema",
				"Invalid argument, must be one of true or false, not " + foundVal );
		}

		return( retval );
	}

	void CFBamCustXmlLoader::initParser() {
		if( saxXmlReader != NULL ) {
			return;
		}
		cflib::CFLibXmlCoreSaxParser::initParser();
		loadGrammar( SCHEMA_URI );
	}

	cfsec::ICFSecClusterObj* CFBamCustXmlLoader::getUseCluster() const {
		return( useCluster );
	}

	void CFBamCustXmlLoader::setUseCluster( cfsec::ICFSecClusterObj* value ) {
		useCluster = value;
	}

	cfsec::ICFSecTenantObj* CFBamCustXmlLoader::getUseTenant() {
		return( useTenant );
	}

	void CFBamCustXmlLoader::setUseTenant( cfsec::ICFSecTenantObj* value ) {
		useTenant = value;
	}

	// SchemaObj accessors

	cfbam::ICFBamSchemaObj* CFBamCustXmlLoader::getSchemaObj() const {
		return( schemaObj );
	}

	void CFBamCustXmlLoader::setSchemaObj( cfbam::ICFBamSchemaObj* value ) {
		schemaObj = value;
	}

	void CFBamCustXmlLoader::verifyGrammarInstallation() {
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

	cfbam::CFBamCustXmlLoaderBlobColHandler* CFBamCustXmlLoader::getBlobColHandler() {
		if( blobColHandler == NULL ) {
			blobColHandler = new cfbam::CFBamCustXmlLoaderBlobColHandler( this );
		}
		return( blobColHandler );
	}

	cfbam::CFBamCustXmlLoaderBlobTypeHandler* CFBamCustXmlLoader::getBlobTypeHandler() {
		if( blobTypeHandler == NULL ) {
			blobTypeHandler = new cfbam::CFBamCustXmlLoaderBlobTypeHandler( this );
		}
		return( blobTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderBoolColHandler* CFBamCustXmlLoader::getBoolColHandler() {
		if( boolColHandler == NULL ) {
			boolColHandler = new cfbam::CFBamCustXmlLoaderBoolColHandler( this );
		}
		return( boolColHandler );
	}

	cfbam::CFBamCustXmlLoaderBoolTypeHandler* CFBamCustXmlLoader::getBoolTypeHandler() {
		if( boolTypeHandler == NULL ) {
			boolTypeHandler = new cfbam::CFBamCustXmlLoaderBoolTypeHandler( this );
		}
		return( boolTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderChainHandler* CFBamCustXmlLoader::getChainHandler() {
		if( chainHandler == NULL ) {
			chainHandler = new cfbam::CFBamCustXmlLoaderChainHandler( this );
		}
		return( chainHandler );
	}

	cfbam::CFBamCustXmlLoaderClearDepHandler* CFBamCustXmlLoader::getClearDepHandler() {
		if( clearDepHandler == NULL ) {
			clearDepHandler = new cfbam::CFBamCustXmlLoaderClearDepHandler( this );
		}
		return( clearDepHandler );
	}

	cfbam::CFBamCustXmlLoaderDateColHandler* CFBamCustXmlLoader::getDateColHandler() {
		if( dateColHandler == NULL ) {
			dateColHandler = new cfbam::CFBamCustXmlLoaderDateColHandler( this );
		}
		return( dateColHandler );
	}

	cfbam::CFBamCustXmlLoaderDateTypeHandler* CFBamCustXmlLoader::getDateTypeHandler() {
		if( dateTypeHandler == NULL ) {
			dateTypeHandler = new cfbam::CFBamCustXmlLoaderDateTypeHandler( this );
		}
		return( dateTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderDelDepHandler* CFBamCustXmlLoader::getDelDepHandler() {
		if( delDepHandler == NULL ) {
			delDepHandler = new cfbam::CFBamCustXmlLoaderDelDepHandler( this );
		}
		return( delDepHandler );
	}

	cfbam::CFBamCustXmlLoaderDoubleColHandler* CFBamCustXmlLoader::getDoubleColHandler() {
		if( doubleColHandler == NULL ) {
			doubleColHandler = new cfbam::CFBamCustXmlLoaderDoubleColHandler( this );
		}
		return( doubleColHandler );
	}

	cfbam::CFBamCustXmlLoaderDoubleTypeHandler* CFBamCustXmlLoader::getDoubleTypeHandler() {
		if( doubleTypeHandler == NULL ) {
			doubleTypeHandler = new cfbam::CFBamCustXmlLoaderDoubleTypeHandler( this );
		}
		return( doubleTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderEnumTagHandler* CFBamCustXmlLoader::getEnumTagHandler() {
		if( enumTagHandler == NULL ) {
			enumTagHandler = new cfbam::CFBamCustXmlLoaderEnumTagHandler( this );
		}
		return( enumTagHandler );
	}

	cfbam::CFBamCustXmlLoaderEnumTypeHandler* CFBamCustXmlLoader::getEnumTypeHandler() {
		if( enumTypeHandler == NULL ) {
			enumTypeHandler = new cfbam::CFBamCustXmlLoaderEnumTypeHandler( this );
			enumTypeHandler->addElementHandler( "EnumTag", getEnumTagHandler() );
		}
		return( enumTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderFloatColHandler* CFBamCustXmlLoader::getFloatColHandler() {
		if( floatColHandler == NULL ) {
			floatColHandler = new cfbam::CFBamCustXmlLoaderFloatColHandler( this );
		}
		return( floatColHandler );
	}

	cfbam::CFBamCustXmlLoaderFloatTypeHandler* CFBamCustXmlLoader::getFloatTypeHandler() {
		if( floatTypeHandler == NULL ) {
			floatTypeHandler = new cfbam::CFBamCustXmlLoaderFloatTypeHandler( this );
		}
		return( floatTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderId16GenHandler* CFBamCustXmlLoader::getId16GenHandler() {
		if( id16GenHandler == NULL ) {
			id16GenHandler = new cfbam::CFBamCustXmlLoaderId16GenHandler( this );
		}
		return( id16GenHandler );
	}

	cfbam::CFBamCustXmlLoaderId32GenHandler* CFBamCustXmlLoader::getId32GenHandler() {
		if( id32GenHandler == NULL ) {
			id32GenHandler = new cfbam::CFBamCustXmlLoaderId32GenHandler( this );
		}
		return( id32GenHandler );
	}

	cfbam::CFBamCustXmlLoaderId64GenHandler* CFBamCustXmlLoader::getId64GenHandler() {
		if( id64GenHandler == NULL ) {
			id64GenHandler = new cfbam::CFBamCustXmlLoaderId64GenHandler( this );
		}
		return( id64GenHandler );
	}

	cfbam::CFBamCustXmlLoaderIndexHandler* CFBamCustXmlLoader::getIndexHandler() {
		if( indexHandler == NULL ) {
			indexHandler = new cfbam::CFBamCustXmlLoaderIndexHandler( this );
			indexHandler->addElementHandler( "IndexCol", getIndexColHandler() );
		}
		return( indexHandler );
	}

	cfbam::CFBamCustXmlLoaderPrimaryIndexHandler* CFBamCustXmlLoader::getPrimaryIndexHandler() {
		if( primaryIndexHandler == NULL ) {
			primaryIndexHandler = new cfbam::CFBamCustXmlLoaderPrimaryIndexHandler( this );
			primaryIndexHandler->addElementHandler( "IndexCol", getIndexColHandler() );
		}
		return( primaryIndexHandler );
	}

	cfbam::CFBamCustXmlLoaderIndexColHandler* CFBamCustXmlLoader::getIndexColHandler() {
		if( indexColHandler == NULL ) {
			indexColHandler = new cfbam::CFBamCustXmlLoaderIndexColHandler( this );
		}
		return( indexColHandler );
	}

	cfbam::CFBamCustXmlLoaderInt16ColHandler* CFBamCustXmlLoader::getInt16ColHandler() {
		if( int16ColHandler == NULL ) {
			int16ColHandler = new cfbam::CFBamCustXmlLoaderInt16ColHandler( this );
		}
		return( int16ColHandler );
	}

	cfbam::CFBamCustXmlLoaderInt16TypeHandler* CFBamCustXmlLoader::getInt16TypeHandler() {
		if( int16TypeHandler == NULL ) {
			int16TypeHandler = new cfbam::CFBamCustXmlLoaderInt16TypeHandler( this );
		}
		return( int16TypeHandler );
	}

	cfbam::CFBamCustXmlLoaderInt32ColHandler* CFBamCustXmlLoader::getInt32ColHandler() {
		if( int32ColHandler == NULL ) {
			int32ColHandler = new cfbam::CFBamCustXmlLoaderInt32ColHandler( this );
		}
		return( int32ColHandler );
	}

	cfbam::CFBamCustXmlLoaderInt32TypeHandler* CFBamCustXmlLoader::getInt32TypeHandler() {
		if( int32TypeHandler == NULL ) {
			int32TypeHandler = new cfbam::CFBamCustXmlLoaderInt32TypeHandler( this );
		}
		return( int32TypeHandler );
	}

	cfbam::CFBamCustXmlLoaderInt64ColHandler* CFBamCustXmlLoader::getInt64ColHandler() {
		if( int64ColHandler == NULL ) {
			int64ColHandler = new cfbam::CFBamCustXmlLoaderInt64ColHandler( this );
		}
		return( int64ColHandler );
	}

	cfbam::CFBamCustXmlLoaderInt64TypeHandler* CFBamCustXmlLoader::getInt64TypeHandler() {
		if( int64TypeHandler == NULL ) {
			int64TypeHandler = new cfbam::CFBamCustXmlLoaderInt64TypeHandler( this );
		}
		return( int64TypeHandler );
	}

	cfbam::CFBamCustXmlLoaderLicenseHandler* CFBamCustXmlLoader::getLicenseHandler() {
		if( licenseHandler == NULL ) {
			licenseHandler = new cfbam::CFBamCustXmlLoaderLicenseHandler( this );
		}
		return( licenseHandler );
	}

	cfbam::CFBamCustXmlLoaderMajorVersionHandler* CFBamCustXmlLoader::getMajorVersionHandler() {
		if( majorVersionHandler == NULL ) {
			majorVersionHandler = new cfbam::CFBamCustXmlLoaderMajorVersionHandler( this );
			majorVersionHandler->addElementHandler( "MinorVersion", getMinorVersionHandler() );
		}
		return( majorVersionHandler );
	}

	cfbam::CFBamCustXmlLoaderMinorVersionHandler* CFBamCustXmlLoader::getMinorVersionHandler() {
		if( minorVersionHandler == NULL ) {
			minorVersionHandler = new cfbam::CFBamCustXmlLoaderMinorVersionHandler( this );
			minorVersionHandler->addElementHandler( "SchemaDef", getSchemaDefHandler() );
		}
		return( minorVersionHandler );
	}

	cfbam::CFBamCustXmlLoaderNmTokenColHandler* CFBamCustXmlLoader::getNmTokenColHandler() {
		if( nmTokenColHandler == NULL ) {
			nmTokenColHandler = new cfbam::CFBamCustXmlLoaderNmTokenColHandler( this );
		}
		return( nmTokenColHandler );
	}

	cfbam::CFBamCustXmlLoaderNmTokenTypeHandler* CFBamCustXmlLoader::getNmTokenTypeHandler() {
		if( nmTokenTypeHandler == NULL ) {
			nmTokenTypeHandler = new cfbam::CFBamCustXmlLoaderNmTokenTypeHandler( this );
		}
		return( nmTokenTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderNmTokensColHandler* CFBamCustXmlLoader::getNmTokensColHandler() {
		if( nmTokensColHandler == NULL ) {
			nmTokensColHandler = new cfbam::CFBamCustXmlLoaderNmTokensColHandler( this );
		}
		return( nmTokensColHandler );
	}

	cfbam::CFBamCustXmlLoaderNmTokensTypeHandler* CFBamCustXmlLoader::getNmTokensTypeHandler() {
		if( nmTokensTypeHandler == NULL ) {
			nmTokensTypeHandler = new cfbam::CFBamCustXmlLoaderNmTokensTypeHandler( this );
		}
		return( nmTokensTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderNumberColHandler* CFBamCustXmlLoader::getNumberColHandler() {
		if( numberColHandler == NULL ) {
			numberColHandler = new cfbam::CFBamCustXmlLoaderNumberColHandler( this );
		}
		return( numberColHandler );
	}

	cfbam::CFBamCustXmlLoaderNumberTypeHandler* CFBamCustXmlLoader::getNumberTypeHandler() {
		if( numberTypeHandler == NULL ) {
			numberTypeHandler = new cfbam::CFBamCustXmlLoaderNumberTypeHandler( this );
		}
		return( numberTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderParamHandler* CFBamCustXmlLoader::getParamHandler() {
		if( paramHandler == NULL ) {
			paramHandler = new cfbam::CFBamCustXmlLoaderParamHandler( this );
		}
		return( paramHandler );
	}

	cfbam::CFBamCustXmlLoaderRelationHandler* CFBamCustXmlLoader::getRelationHandler() {
		if( relationHandler == NULL ) {
			relationHandler = new cfbam::CFBamCustXmlLoaderRelationHandler( this );
			relationHandler->addElementHandler( "RelationCol", getRelationColHandler() );
		}
		return( relationHandler );
	}

	cfbam::CFBamCustXmlLoaderSuperClassRelationHandler* CFBamCustXmlLoader::getSuperClassRelationHandler() {
		if( superClassRelationHandler == NULL ) {
			superClassRelationHandler = new cfbam::CFBamCustXmlLoaderSuperClassRelationHandler( this );
			superClassRelationHandler->addElementHandler( "RelationCol", getRelationColHandler() );
		}
		return( superClassRelationHandler );
	}

	cfbam::CFBamCustXmlLoaderRelationColHandler* CFBamCustXmlLoader::getRelationColHandler() {
		if( relationColHandler == NULL ) {
			relationColHandler = new cfbam::CFBamCustXmlLoaderRelationColHandler( this );
		}
		return( relationColHandler );
	}

	cfbam::CFBamCustXmlLoaderSchemaDefHandler* CFBamCustXmlLoader::getSchemaDefHandler() {
		if( schemaDefHandler == NULL ) {
			schemaDefHandler = new cfbam::CFBamCustXmlLoaderSchemaDefHandler( this );
			schemaDefHandler->addElementHandler( "SchemaRef", getSchemaRefHandler() );
			schemaDefHandler->addElementHandler( "Table", getTableHandler() );
			schemaDefHandler->addElementHandler( "TableAddendum", getTableAddendumHandler() );
			schemaDefHandler->addElementHandler( "BlobType", getBlobTypeHandler() );
			schemaDefHandler->addElementHandler( "BoolType", getBoolTypeHandler() );
			schemaDefHandler->addElementHandler( "DoubleType", getDoubleTypeHandler() );
			schemaDefHandler->addElementHandler( "FloatType", getFloatTypeHandler() );
			schemaDefHandler->addElementHandler( "Int16Type", getInt16TypeHandler() );
			schemaDefHandler->addElementHandler( "Id16Gen", getId16GenHandler() );
			schemaDefHandler->addElementHandler( "EnumType", getEnumTypeHandler() );
			schemaDefHandler->addElementHandler( "Int32Type", getInt32TypeHandler() );
			schemaDefHandler->addElementHandler( "Id32Gen", getId32GenHandler() );
			schemaDefHandler->addElementHandler( "Int64Type", getInt64TypeHandler() );
			schemaDefHandler->addElementHandler( "Id64Gen", getId64GenHandler() );
			schemaDefHandler->addElementHandler( "UInt16Type", getUInt16TypeHandler() );
			schemaDefHandler->addElementHandler( "UInt32Type", getUInt32TypeHandler() );
			schemaDefHandler->addElementHandler( "UInt64Type", getUInt64TypeHandler() );
			schemaDefHandler->addElementHandler( "NumberType", getNumberTypeHandler() );
			schemaDefHandler->addElementHandler( "StringType", getStringTypeHandler() );
			schemaDefHandler->addElementHandler( "TextType", getTextTypeHandler() );
			schemaDefHandler->addElementHandler( "NmTokenType", getNmTokenTypeHandler() );
			schemaDefHandler->addElementHandler( "NmTokensType", getNmTokensTypeHandler() );
			schemaDefHandler->addElementHandler( "TokenType", getTokenTypeHandler() );
			schemaDefHandler->addElementHandler( "DateType", getDateTypeHandler() );
			schemaDefHandler->addElementHandler( "TimeType", getTimeTypeHandler() );
			schemaDefHandler->addElementHandler( "TimestampType", getTimestampTypeHandler() );
			schemaDefHandler->addElementHandler( "TZDateType", getTZDateTypeHandler() );
			schemaDefHandler->addElementHandler( "TZTimeType", getTZTimeTypeHandler() );
			schemaDefHandler->addElementHandler( "TZTimestampType", getTZTimestampTypeHandler() );
			schemaDefHandler->addElementHandler( "UuidType", getUuidTypeHandler() );
			schemaDefHandler->addElementHandler( "UuidGen", getUuidGenHandler() );
			schemaDefHandler->addElementHandler( "CPlusDb2LUWSchemaObjImpl", getCPlusDb2LUWSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CPlusDb2LUWSchemaObjInclude", getCPlusDb2LUWSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusDb2LUWSchemaObjMembers", getCPlusDb2LUWSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusMSSqlSchemaObjImpl", getCPlusMSSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CPlusMSSqlSchemaObjInclude", getCPlusMSSqlSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusMSSqlSchemaObjMembers", getCPlusMSSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusMySqlSchemaObjImpl", getCPlusMySqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CPlusMySqlSchemaObjInclude", getCPlusMySqlSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusMySqlSchemaObjMembers", getCPlusMySqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusOracleSchemaObjImpl", getCPlusOracleSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CPlusOracleSchemaObjInclude", getCPlusOracleSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusOracleSchemaObjMembers", getCPlusOracleSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusPgSqlSchemaObjImpl", getCPlusPgSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CPlusPgSqlSchemaObjInclude", getCPlusPgSqlSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusPgSqlSchemaObjMembers", getCPlusPgSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusRamSchemaObjImpl", getCPlusRamSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CPlusRamSchemaObjInclude", getCPlusRamSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusRamSchemaObjMembers", getCPlusRamSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusSchemaObjImplementation", getCPlusSchemaObjImplementationHandler() );
			schemaDefHandler->addElementHandler( "CPlusSchemaObjInclude", getCPlusSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusSchemaObjInterface", getCPlusSchemaObjInterfaceHandler() );
			schemaDefHandler->addElementHandler( "CPlusSchemaObjMembers", getCPlusSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgClientSchemaBody", getCPlusXMsgClientSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgClientSchemaInclude", getCPlusXMsgClientSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRqstSchemaBody", getCPlusXMsgRqstSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRqstSchemaInclude", getCPlusXMsgRqstSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRqstSchemaWireParsers", getCPlusXMsgRqstSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRqstSchemaXsdElementList", getCPlusXMsgRqstSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRqstSchemaXsdSpec", getCPlusXMsgRqstSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRspnSchemaBody", getCPlusXMsgRspnSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRspnSchemaInclude", getCPlusXMsgRspnSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRspnSchemaWireParsers", getCPlusXMsgRspnSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRspnSchemaXsdElementList", getCPlusXMsgRspnSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgRspnSchemaXsdSpec", getCPlusXMsgRspnSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgSchemaFormatters", getCPlusXMsgSchemaFormattersHandler() );
			schemaDefHandler->addElementHandler( "CPlusXMsgSchemaInclude", getCPlusXMsgSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "CSharpDb2LUWSchemaObjImpl", getCSharpDb2LUWSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CSharpDb2LUWSchemaObjMembers", getCSharpDb2LUWSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpDb2LUWSchemaObjUsing", getCSharpDb2LUWSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpMSSqlSchemaObjImpl", getCSharpMSSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CSharpMSSqlSchemaObjMembers", getCSharpMSSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpMSSqlSchemaObjUsing", getCSharpMSSqlSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpMySqlSchemaObjImpl", getCSharpMySqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CSharpMySqlSchemaObjMembers", getCSharpMySqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpMySqlSchemaObjUsing", getCSharpMySqlSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpOracleSchemaObjImpl", getCSharpOracleSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CSharpOracleSchemaObjMembers", getCSharpOracleSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpOracleSchemaObjUsing", getCSharpOracleSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpPgSqlSchemaObjImpl", getCSharpPgSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CSharpPgSqlSchemaObjMembers", getCSharpPgSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpPgSqlSchemaObjUsing", getCSharpPgSqlSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpRamSchemaObjImpl", getCSharpRamSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CSharpRamSchemaObjMembers", getCSharpRamSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpRamSchemaObjUsing", getCSharpRamSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpSchemaObjImplementation", getCSharpSchemaObjImplementationHandler() );
			schemaDefHandler->addElementHandler( "CSharpSchemaObjInterface", getCSharpSchemaObjInterfaceHandler() );
			schemaDefHandler->addElementHandler( "CSharpSchemaObjMembers", getCSharpSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CSharpSchemaObjUsing", getCSharpSchemaObjUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgClientSchemaBody", getCSharpXMsgClientSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgClientSchemaUsing", getCSharpXMsgClientSchemaUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRqstSchemaBody", getCSharpXMsgRqstSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRqstSchemaUsing", getCSharpXMsgRqstSchemaUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRqstSchemaWireParsers", getCSharpXMsgRqstSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRqstSchemaXsdElementList", getCSharpXMsgRqstSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRqstSchemaXsdSpec", getCSharpXMsgRqstSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRspnSchemaBody", getCSharpXMsgRspnSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRspnSchemaUsing", getCSharpXMsgRspnSchemaUsingHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRspnSchemaWireParsers", getCSharpXMsgRspnSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRspnSchemaXsdElementList", getCSharpXMsgRspnSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgRspnSchemaXsdSpec", getCSharpXMsgRspnSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgSchemaFormatters", getCSharpXMsgSchemaFormattersHandler() );
			schemaDefHandler->addElementHandler( "CSharpXMsgSchemaUsing", getCSharpXMsgSchemaUsingHandler() );
			schemaDefHandler->addElementHandler( "HPlusDb2LUWSchemaObjImpl", getHPlusDb2LUWSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "HPlusDb2LUWSchemaObjInclude", getHPlusDb2LUWSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusDb2LUWSchemaObjMembers", getHPlusDb2LUWSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusMSSqlSchemaObjImpl", getHPlusMSSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "HPlusMSSqlSchemaObjInclude", getHPlusMSSqlSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusMSSqlSchemaObjMembers", getHPlusMSSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusMySqlSchemaObjImpl", getHPlusMySqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "HPlusMySqlSchemaObjInclude", getHPlusMySqlSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusMySqlSchemaObjMembers", getHPlusMySqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusOracleSchemaObjImpl", getHPlusOracleSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "HPlusOracleSchemaObjInclude", getHPlusOracleSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusOracleSchemaObjMembers", getHPlusOracleSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusPgSqlSchemaObjImpl", getHPlusPgSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "HPlusPgSqlSchemaObjInclude", getHPlusPgSqlSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusPgSqlSchemaObjMembers", getHPlusPgSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusRamSchemaObjImpl", getHPlusRamSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "HPlusRamSchemaObjInclude", getHPlusRamSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusRamSchemaObjMembers", getHPlusRamSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusSchemaObjImplementation", getHPlusSchemaObjImplementationHandler() );
			schemaDefHandler->addElementHandler( "HPlusSchemaObjInclude", getHPlusSchemaObjIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusSchemaObjInterface", getHPlusSchemaObjInterfaceHandler() );
			schemaDefHandler->addElementHandler( "HPlusSchemaObjMembers", getHPlusSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgClientSchemaBody", getHPlusXMsgClientSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgClientSchemaInclude", getHPlusXMsgClientSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRqstSchemaBody", getHPlusXMsgRqstSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRqstSchemaInclude", getHPlusXMsgRqstSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRqstSchemaWireParsers", getHPlusXMsgRqstSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRqstSchemaXsdElementList", getHPlusXMsgRqstSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRqstSchemaXsdSpec", getHPlusXMsgRqstSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRspnSchemaBody", getHPlusXMsgRspnSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRspnSchemaInclude", getHPlusXMsgRspnSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRspnSchemaWireParsers", getHPlusXMsgRspnSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRspnSchemaXsdElementList", getHPlusXMsgRspnSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgRspnSchemaXsdSpec", getHPlusXMsgRspnSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgSchemaFormatters", getHPlusXMsgSchemaFormattersHandler() );
			schemaDefHandler->addElementHandler( "HPlusXMsgSchemaInclude", getHPlusXMsgSchemaIncludeHandler() );
			schemaDefHandler->addElementHandler( "CafeDb2LUWSchemaObjImpl", getCafeDb2LUWSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CafeDb2LUWSchemaObjImport", getCafeDb2LUWSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafeDb2LUWSchemaObjMembers", getCafeDb2LUWSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafeMSSqlSchemaObjImpl", getCafeMSSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CafeMSSqlSchemaObjImport", getCafeMSSqlSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafeMSSqlSchemaObjMembers", getCafeMSSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafeMySqlSchemaObjImpl", getCafeMySqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CafeMySqlSchemaObjImport", getCafeMySqlSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafeMySqlSchemaObjMembers", getCafeMySqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafeOracleSchemaObjImpl", getCafeOracleSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CafeOracleSchemaObjImport", getCafeOracleSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafeOracleSchemaObjMembers", getCafeOracleSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafePgSqlSchemaObjImpl", getCafePgSqlSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CafePgSqlSchemaObjImport", getCafePgSqlSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafePgSqlSchemaObjMembers", getCafePgSqlSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafeRamSchemaObjImpl", getCafeRamSchemaObjImplHandler() );
			schemaDefHandler->addElementHandler( "CafeRamSchemaObjImport", getCafeRamSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafeRamSchemaObjMembers", getCafeRamSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafeSchemaObjImplementation", getCafeSchemaObjImplementationHandler() );
			schemaDefHandler->addElementHandler( "CafeSchemaObjImport", getCafeSchemaObjImportHandler() );
			schemaDefHandler->addElementHandler( "CafeSchemaObjInterface", getCafeSchemaObjInterfaceHandler() );
			schemaDefHandler->addElementHandler( "CafeSchemaObjMembers", getCafeSchemaObjMembersHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgClientSchemaBody", getCafeXMsgClientSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgClientSchemaImport", getCafeXMsgClientSchemaImportHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRqstSchemaBody", getCafeXMsgRqstSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRqstSchemaImport", getCafeXMsgRqstSchemaImportHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRqstSchemaWireParsers", getCafeXMsgRqstSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRqstSchemaXsdElementList", getCafeXMsgRqstSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRqstSchemaXsdSpec", getCafeXMsgRqstSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRspnSchemaBody", getCafeXMsgRspnSchemaBodyHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRspnSchemaImport", getCafeXMsgRspnSchemaImportHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRspnSchemaWireParsers", getCafeXMsgRspnSchemaWireParsersHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRspnSchemaXsdElementList", getCafeXMsgRspnSchemaXsdElementListHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgRspnSchemaXsdSpec", getCafeXMsgRspnSchemaXsdSpecHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgSchemaFormatters", getCafeXMsgSchemaFormattersHandler() );
			schemaDefHandler->addElementHandler( "CafeXMsgSchemaImport", getCafeXMsgSchemaImportHandler() );
		}
		return( schemaDefHandler );
	}

	cfbam::CFBamCustXmlLoaderSchemaRefHandler* CFBamCustXmlLoader::getSchemaRefHandler() {
		if( schemaRefHandler == NULL ) {
			schemaRefHandler = new cfbam::CFBamCustXmlLoaderSchemaRefHandler( this );
		}
		return( schemaRefHandler );
	}

	cfbam::CFBamCustXmlLoaderServerListFuncHandler* CFBamCustXmlLoader::getServerListFuncHandler() {
		if( serverListFuncHandler == NULL ) {
			serverListFuncHandler = new cfbam::CFBamCustXmlLoaderServerListFuncHandler( this );
			serverListFuncHandler->addElementHandler( "Param", getParamHandler() );
			serverListFuncHandler->addElementHandler( "CafeMethodBody", getCafeMethodBodyHandler() );
			serverListFuncHandler->addElementHandler( "CPlusMethodBody", getCPlusMethodBodyHandler() );
			serverListFuncHandler->addElementHandler( "CSharpMethodBody", getCSharpMethodBodyHandler() );
		}
		return( serverListFuncHandler );
	}

	cfbam::CFBamCustXmlLoaderServerObjFuncHandler* CFBamCustXmlLoader::getServerObjFuncHandler() {
		if( serverObjFuncHandler == NULL ) {
			serverObjFuncHandler = new cfbam::CFBamCustXmlLoaderServerObjFuncHandler( this );
			serverObjFuncHandler->addElementHandler( "Param", getParamHandler() );
			serverObjFuncHandler->addElementHandler( "CafeMethodBody", getCafeMethodBodyHandler() );
			serverObjFuncHandler->addElementHandler( "CPlusMethodBody", getCPlusMethodBodyHandler() );
			serverObjFuncHandler->addElementHandler( "CSharpMethodBody", getCSharpMethodBodyHandler() );
		}
		return( serverObjFuncHandler );
	}

	cfbam::CFBamCustXmlLoaderServerProcHandler* CFBamCustXmlLoader::getServerProcHandler() {
		if( serverProcHandler == NULL ) {
			serverProcHandler = new cfbam::CFBamCustXmlLoaderServerProcHandler( this );
			serverProcHandler->addElementHandler( "Param", getParamHandler() );
			serverProcHandler->addElementHandler( "CafeMethodBody", getCafeMethodBodyHandler() );
			serverProcHandler->addElementHandler( "CPlusMethodBody", getCPlusMethodBodyHandler() );
			serverProcHandler->addElementHandler( "CSharpMethodBody", getCSharpMethodBodyHandler() );
		}
		return( serverProcHandler );
	}

	cfbam::CFBamCustXmlLoaderStringColHandler* CFBamCustXmlLoader::getStringColHandler() {
		if( stringColHandler == NULL ) {
			stringColHandler = new cfbam::CFBamCustXmlLoaderStringColHandler( this );
		}
		return( stringColHandler );
	}

	cfbam::CFBamCustXmlLoaderStringTypeHandler* CFBamCustXmlLoader::getStringTypeHandler() {
		if( stringTypeHandler == NULL ) {
			stringTypeHandler = new cfbam::CFBamCustXmlLoaderStringTypeHandler( this );
		}
		return( stringTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderSubProjectHandler* CFBamCustXmlLoader::getSubProjectHandler() {
		if( subProjectHandler == NULL ) {
			subProjectHandler = new cfbam::CFBamCustXmlLoaderSubProjectHandler( this );
			subProjectHandler->addElementHandler( "MajorVersion", getMajorVersionHandler() );
		}
		return( subProjectHandler );
	}

	cfbam::CFBamCustXmlLoaderTZDateColHandler* CFBamCustXmlLoader::getTZDateColHandler() {
		if( tZDateColHandler == NULL ) {
			tZDateColHandler = new cfbam::CFBamCustXmlLoaderTZDateColHandler( this );
		}
		return( tZDateColHandler );
	}

	cfbam::CFBamCustXmlLoaderTZDateTypeHandler* CFBamCustXmlLoader::getTZDateTypeHandler() {
		if( tZDateTypeHandler == NULL ) {
			tZDateTypeHandler = new cfbam::CFBamCustXmlLoaderTZDateTypeHandler( this );
		}
		return( tZDateTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderTZTimeColHandler* CFBamCustXmlLoader::getTZTimeColHandler() {
		if( tZTimeColHandler == NULL ) {
			tZTimeColHandler = new cfbam::CFBamCustXmlLoaderTZTimeColHandler( this );
		}
		return( tZTimeColHandler );
	}

	cfbam::CFBamCustXmlLoaderTZTimeTypeHandler* CFBamCustXmlLoader::getTZTimeTypeHandler() {
		if( tZTimeTypeHandler == NULL ) {
			tZTimeTypeHandler = new cfbam::CFBamCustXmlLoaderTZTimeTypeHandler( this );
		}
		return( tZTimeTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderTZTimestampColHandler* CFBamCustXmlLoader::getTZTimestampColHandler() {
		if( tZTimestampColHandler == NULL ) {
			tZTimestampColHandler = new cfbam::CFBamCustXmlLoaderTZTimestampColHandler( this );
		}
		return( tZTimestampColHandler );
	}

	cfbam::CFBamCustXmlLoaderTZTimestampTypeHandler* CFBamCustXmlLoader::getTZTimestampTypeHandler() {
		if( tZTimestampTypeHandler == NULL ) {
			tZTimestampTypeHandler = new cfbam::CFBamCustXmlLoaderTZTimestampTypeHandler( this );
		}
		return( tZTimestampTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderTableHandler* CFBamCustXmlLoader::getTableHandler() {
		if( tableHandler == NULL ) {
			tableHandler = new cfbam::CFBamCustXmlLoaderTableHandler( this );

			tableHandler->addElementHandler( "ServerObjFunc", getServerObjFuncHandler() );
			tableHandler->addElementHandler( "ServerProc", getServerProcHandler() );
			tableHandler->addElementHandler( "ServerListFunc", getServerListFuncHandler() );
			tableHandler->addElementHandler( "Relation", getRelationHandler() );
			tableHandler->addElementHandler( "SuperClassRelation", getSuperClassRelationHandler() );
			tableHandler->addElementHandler( "TableCol", getTableColHandler() );
			tableHandler->addElementHandler( "BlobCol", getBlobColHandler() );
			tableHandler->addElementHandler( "BoolCol", getBoolColHandler() );
			tableHandler->addElementHandler( "Int16Col", getInt16ColHandler() );
			tableHandler->addElementHandler( "Int32Col", getInt32ColHandler() );
			tableHandler->addElementHandler( "Int64Col", getInt64ColHandler() );
			tableHandler->addElementHandler( "UInt16Col", getUInt16ColHandler() );
			tableHandler->addElementHandler( "UInt32Col", getUInt32ColHandler() );
			tableHandler->addElementHandler( "UInt64Col", getUInt64ColHandler() );
			tableHandler->addElementHandler( "FloatCol", getFloatColHandler() );
			tableHandler->addElementHandler( "DoubleCol", getDoubleColHandler() );
			tableHandler->addElementHandler( "NumberCol", getNumberColHandler() );
			tableHandler->addElementHandler( "StringCol", getStringColHandler() );
			tableHandler->addElementHandler( "NmTokenCol", getNmTokenColHandler() );
			tableHandler->addElementHandler( "NmTokensCol", getNmTokensColHandler() );
			tableHandler->addElementHandler( "TokenCol", getTokenColHandler() );
			tableHandler->addElementHandler( "TextCol", getTextColHandler() );
			tableHandler->addElementHandler( "DateCol", getDateColHandler() );
			tableHandler->addElementHandler( "TimeCol", getTimeColHandler() );
			tableHandler->addElementHandler( "TimestampCol", getTimestampColHandler() );
			tableHandler->addElementHandler( "TZDateCol", getTZDateColHandler() );
			tableHandler->addElementHandler( "TZTimeCol", getTZTimeColHandler() );
			tableHandler->addElementHandler( "TZTimestampCol", getTZTimestampColHandler() );
			tableHandler->addElementHandler( "UuidCol", getUuidColHandler() );
			tableHandler->addElementHandler( "Index", getIndexHandler() );
			tableHandler->addElementHandler( "PrimaryIndex", getPrimaryIndexHandler() );
			tableHandler->addElementHandler( "Chain", getChainHandler() );
			tableHandler->addElementHandler( "DelDep", getDelDepHandler() );
			tableHandler->addElementHandler( "ClearDep", getClearDepHandler() );
			tableHandler->addElementHandler( "CPlusDb2LUWTableImplementation", getCPlusDb2LUWTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusDb2LUWTableInclude", getCPlusDb2LUWTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusDb2LUWTableMembers", getCPlusDb2LUWTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusMSSqlTableImplementation", getCPlusMSSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusMSSqlTableInclude", getCPlusMSSqlTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusMSSqlTableMembers", getCPlusMSSqlTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusMySqlTableImplementation", getCPlusMySqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusMySqlTableInclude", getCPlusMySqlTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusMySqlTableMembers", getCPlusMySqlTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusOracleTableImplementation", getCPlusOracleTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusOracleTableInclude", getCPlusOracleTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusOracleTableMembers", getCPlusOracleTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusPgSqlTableImplementation", getCPlusPgSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusPgSqlTableInclude", getCPlusPgSqlTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusPgSqlTableMembers", getCPlusPgSqlTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusRamTableImplementation", getCPlusRamTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusRamTableInclude", getCPlusRamTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusRamTableMembers", getCPlusRamTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusTableImplementation", getCPlusTableImplementationHandler() );
			tableHandler->addElementHandler( "CPlusTableInclude", getCPlusTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusTableInterface", getCPlusTableInterfaceHandler() );
			tableHandler->addElementHandler( "CPlusTableMembers", getCPlusTableMembersHandler() );
			tableHandler->addElementHandler( "CPlusTableObjImplementation", getCPlusTableObjImplementationHandler() );
			tableHandler->addElementHandler( "CPlusTableObjInclude", getCPlusTableObjIncludeHandler() );
			tableHandler->addElementHandler( "CPlusTableObjInterface", getCPlusTableObjInterfaceHandler() );
			tableHandler->addElementHandler( "CPlusTableObjMembers", getCPlusTableObjMembersHandler() );
			tableHandler->addElementHandler( "CPlusXMsgClientTableBody", getCPlusXMsgClientTableBodyHandler() );
			tableHandler->addElementHandler( "CPlusXMsgClientTableInclude", getCPlusXMsgClientTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusXMsgRqstTableBody", getCPlusXMsgRqstTableBodyHandler() );
			tableHandler->addElementHandler( "CPlusXMsgRqstTableInclude", getCPlusXMsgRqstTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusXMsgRspnTableBody", getCPlusXMsgRspnTableBodyHandler() );
			tableHandler->addElementHandler( "CPlusXMsgRspnTableInclude", getCPlusXMsgRspnTableIncludeHandler() );
			tableHandler->addElementHandler( "CPlusXMsgTableFormatters", getCPlusXMsgTableFormattersHandler() );
			tableHandler->addElementHandler( "CPlusXMsgTableInclude", getCPlusXMsgTableIncludeHandler() );
			tableHandler->addElementHandler( "CSharpDb2LUWTableImplementation", getCSharpDb2LUWTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpDb2LUWTableMembers", getCSharpDb2LUWTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpDb2LUWTableUsing", getCSharpDb2LUWTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpMSSqlTableImplementation", getCSharpMSSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpMSSqlTableMembers", getCSharpMSSqlTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpMSSqlTableUsing", getCSharpMSSqlTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpMySqlTableImplementation", getCSharpMySqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpMySqlTableMembers", getCSharpMySqlTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpMySqlTableUsing", getCSharpMySqlTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpOracleTableImplementation", getCSharpOracleTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpOracleTableMembers", getCSharpOracleTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpOracleTableUsing", getCSharpOracleTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpPgSqlTableImplementation", getCSharpPgSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpPgSqlTableMembers", getCSharpPgSqlTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpPgSqlTableUsing", getCSharpPgSqlTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpRamTableImplementation", getCSharpRamTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpRamTableMembers", getCSharpRamTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpRamTableUsing", getCSharpRamTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpTableImplementation", getCSharpTableImplementationHandler() );
			tableHandler->addElementHandler( "CSharpTableInterface", getCSharpTableInterfaceHandler() );
			tableHandler->addElementHandler( "CSharpTableMembers", getCSharpTableMembersHandler() );
			tableHandler->addElementHandler( "CSharpTableObjImplementation", getCSharpTableObjImplementationHandler() );
			tableHandler->addElementHandler( "CSharpTableObjInterface", getCSharpTableObjInterfaceHandler() );
			tableHandler->addElementHandler( "CSharpTableObjMembers", getCSharpTableObjMembersHandler() );
			tableHandler->addElementHandler( "CSharpTableObjUsing", getCSharpTableObjUsingHandler() );
			tableHandler->addElementHandler( "CSharpTableUsing", getCSharpTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpXMsgClientTableBody", getCSharpXMsgClientTableBodyHandler() );
			tableHandler->addElementHandler( "CSharpXMsgClientTableUsing", getCSharpXMsgClientTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpXMsgRqstTableBody", getCSharpXMsgRqstTableBodyHandler() );
			tableHandler->addElementHandler( "CSharpXMsgRqstTableUsing", getCSharpXMsgRqstTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpXMsgRspnTableBody", getCSharpXMsgRspnTableBodyHandler() );
			tableHandler->addElementHandler( "CSharpXMsgRspnTableUsing", getCSharpXMsgRspnTableUsingHandler() );
			tableHandler->addElementHandler( "CSharpXMsgTableFormatters", getCSharpXMsgTableFormattersHandler() );
			tableHandler->addElementHandler( "CSharpXMsgTableUsing", getCSharpXMsgTableUsingHandler() );
			tableHandler->addElementHandler( "HPlusDb2LUWTableImplementation", getHPlusDb2LUWTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusDb2LUWTableInclude", getHPlusDb2LUWTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusDb2LUWTableMembers", getHPlusDb2LUWTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusMSSqlTableImplementation", getHPlusMSSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusMSSqlTableInclude", getHPlusMSSqlTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusMSSqlTableMembers", getHPlusMSSqlTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusMySqlTableImplementation", getHPlusMySqlTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusMySqlTableInclude", getHPlusMySqlTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusMySqlTableMembers", getHPlusMySqlTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusOracleTableImplementation", getHPlusOracleTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusOracleTableInclude", getHPlusOracleTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusOracleTableMembers", getHPlusOracleTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusPgSqlTableImplementation", getHPlusPgSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusPgSqlTableInclude", getHPlusPgSqlTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusPgSqlTableMembers", getHPlusPgSqlTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusRamTableImplementation", getHPlusRamTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusRamTableInclude", getHPlusRamTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusRamTableMembers", getHPlusRamTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusTableImplementation", getHPlusTableImplementationHandler() );
			tableHandler->addElementHandler( "HPlusTableInclude", getHPlusTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusTableInterface", getHPlusTableInterfaceHandler() );
			tableHandler->addElementHandler( "HPlusTableMembers", getHPlusTableMembersHandler() );
			tableHandler->addElementHandler( "HPlusTableObjImplementation", getHPlusTableObjImplementationHandler() );
			tableHandler->addElementHandler( "HPlusTableObjInclude", getHPlusTableObjIncludeHandler() );
			tableHandler->addElementHandler( "HPlusTableObjInterface", getHPlusTableObjInterfaceHandler() );
			tableHandler->addElementHandler( "HPlusTableObjMembers", getHPlusTableObjMembersHandler() );
			tableHandler->addElementHandler( "HPlusXMsgClientTableBody", getHPlusXMsgClientTableBodyHandler() );
			tableHandler->addElementHandler( "HPlusXMsgClientTableInclude", getHPlusXMsgClientTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusXMsgRqstTableBody", getHPlusXMsgRqstTableBodyHandler() );
			tableHandler->addElementHandler( "HPlusXMsgRqstTableInclude", getHPlusXMsgRqstTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusXMsgRspnTableBody", getHPlusXMsgRspnTableBodyHandler() );
			tableHandler->addElementHandler( "HPlusXMsgRspnTableInclude", getHPlusXMsgRspnTableIncludeHandler() );
			tableHandler->addElementHandler( "HPlusXMsgTableFormatters", getHPlusXMsgTableFormattersHandler() );
			tableHandler->addElementHandler( "HPlusXMsgTableInclude", getHPlusXMsgTableIncludeHandler() );
			tableHandler->addElementHandler( "CafeDb2LUWTableImplementation", getCafeDb2LUWTableImplementationHandler() );
			tableHandler->addElementHandler( "CafeDb2LUWTableImport", getCafeDb2LUWTableImportHandler() );
			tableHandler->addElementHandler( "CafeDb2LUWTableMembers", getCafeDb2LUWTableMembersHandler() );
			tableHandler->addElementHandler( "CafeMSSqlTableImplementation", getCafeMSSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CafeMSSqlTableImport", getCafeMSSqlTableImportHandler() );
			tableHandler->addElementHandler( "CafeMSSqlTableMembers", getCafeMSSqlTableMembersHandler() );
			tableHandler->addElementHandler( "CafeMySqlTableImplementation", getCafeMySqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CafeMySqlTableImport", getCafeMySqlTableImportHandler() );
			tableHandler->addElementHandler( "CafeMySqlTableMembers", getCafeMySqlTableMembersHandler() );
			tableHandler->addElementHandler( "CafeOracleTableImplementation", getCafeOracleTableImplementationHandler() );
			tableHandler->addElementHandler( "CafeOracleTableImport", getCafeOracleTableImportHandler() );
			tableHandler->addElementHandler( "CafeOracleTableMembers", getCafeOracleTableMembersHandler() );
			tableHandler->addElementHandler( "CafePgSqlTableImplementation", getCafePgSqlTableImplementationHandler() );
			tableHandler->addElementHandler( "CafePgSqlTableImport", getCafePgSqlTableImportHandler() );
			tableHandler->addElementHandler( "CafePgSqlTableMembers", getCafePgSqlTableMembersHandler() );
			tableHandler->addElementHandler( "CafeRamTableImplementation", getCafeRamTableImplementationHandler() );
			tableHandler->addElementHandler( "CafeRamTableImport", getCafeRamTableImportHandler() );
			tableHandler->addElementHandler( "CafeRamTableMembers", getCafeRamTableMembersHandler() );
			tableHandler->addElementHandler( "CafeTableImplementation", getCafeTableImplementationHandler() );
			tableHandler->addElementHandler( "CafeTableImport", getCafeTableImportHandler() );
			tableHandler->addElementHandler( "CafeTableInterface", getCafeTableInterfaceHandler() );
			tableHandler->addElementHandler( "CafeTableMembers", getCafeTableMembersHandler() );
			tableHandler->addElementHandler( "CafeTableObjImplementation", getCafeTableObjImplementationHandler() );
			tableHandler->addElementHandler( "CafeTableObjImport", getCafeTableObjImportHandler() );
			tableHandler->addElementHandler( "CafeTableObjInterface", getCafeTableObjInterfaceHandler() );
			tableHandler->addElementHandler( "CafeTableObjMembers", getCafeTableObjMembersHandler() );
			tableHandler->addElementHandler( "CafeXMsgClientTableBody", getCafeXMsgClientTableBodyHandler() );
			tableHandler->addElementHandler( "CafeXMsgClientTableImport", getCafeXMsgClientTableImportHandler() );
			tableHandler->addElementHandler( "CafeXMsgRqstTableBody", getCafeXMsgRqstTableBodyHandler() );
			tableHandler->addElementHandler( "CafeXMsgRqstTableImport", getCafeXMsgRqstTableImportHandler() );
			tableHandler->addElementHandler( "CafeXMsgRspnTableBody", getCafeXMsgRspnTableBodyHandler() );
			tableHandler->addElementHandler( "CafeXMsgRspnTableImport", getCafeXMsgRspnTableImportHandler() );
			tableHandler->addElementHandler( "CafeXMsgTableFormatters", getCafeXMsgTableFormattersHandler() );
			tableHandler->addElementHandler( "CafeXMsgTableImport", getCafeXMsgTableImportHandler() );
			tableHandler->addElementHandler( "CafeObjImplementation", getCafeObjImplementationHandler() );
			tableHandler->addElementHandler( "CafeObjImport", getCafeObjImportHandler() );
			tableHandler->addElementHandler( "CafeObjInterface", getCafeObjInterfaceHandler() );
			tableHandler->addElementHandler( "CafeObjMembers", getCafeObjMembersHandler() );
			tableHandler->addElementHandler( "CafeEditObjImplementation", getCafeEditObjImplementationHandler() );
			tableHandler->addElementHandler( "CafeEditObjImport", getCafeEditObjImportHandler() );
			tableHandler->addElementHandler( "CafeEditObjInterface", getCafeEditObjInterfaceHandler() );
			tableHandler->addElementHandler( "CafeEditObjMembers", getCafeEditObjMembersHandler() );
			tableHandler->addElementHandler( "CPlusObjImplementation", getCPlusObjImplementationHandler() );
			tableHandler->addElementHandler( "CPlusObjInclude", getCPlusObjIncludeHandler() );
			tableHandler->addElementHandler( "CPlusObjInterface", getCPlusObjInterfaceHandler() );
			tableHandler->addElementHandler( "CPlusObjMembers", getCPlusObjMembersHandler() );
			tableHandler->addElementHandler( "CPlusEditObjImplementation", getCPlusEditObjImplementationHandler() );
			tableHandler->addElementHandler( "CPlusEditObjInclude", getCPlusEditObjIncludeHandler() );
			tableHandler->addElementHandler( "CPlusEditObjInterface", getCPlusEditObjInterfaceHandler() );
			tableHandler->addElementHandler( "CPlusEditObjMembers", getCPlusEditObjMembersHandler() );
			tableHandler->addElementHandler( "HPlusObjImplementation", getHPlusObjImplementationHandler() );
			tableHandler->addElementHandler( "HPlusObjInclude", getHPlusObjIncludeHandler() );
			tableHandler->addElementHandler( "HPlusObjInterface", getHPlusObjInterfaceHandler() );
			tableHandler->addElementHandler( "HPlusObjMembers", getHPlusObjMembersHandler() );
			tableHandler->addElementHandler( "HPlusEditObjImplementation", getHPlusEditObjImplementationHandler() );
			tableHandler->addElementHandler( "HPlusEditObjInclude", getHPlusEditObjIncludeHandler() );
			tableHandler->addElementHandler( "HPlusEditObjInterface", getHPlusEditObjInterfaceHandler() );
			tableHandler->addElementHandler( "HPlusEditObjMembers", getHPlusEditObjMembersHandler() );
			tableHandler->addElementHandler( "CSharpObjImplementation", getCSharpObjImplementationHandler() );
			tableHandler->addElementHandler( "CSharpObjInterface", getCSharpObjInterfaceHandler() );
			tableHandler->addElementHandler( "CSharpObjMembers", getCSharpObjMembersHandler() );
			tableHandler->addElementHandler( "CSharpObjUsing", getCSharpObjUsingHandler() );
			tableHandler->addElementHandler( "CSharpEditObjImplementation", getCSharpEditObjImplementationHandler() );
			tableHandler->addElementHandler( "CSharpEditObjInterface", getCSharpEditObjInterfaceHandler() );
			tableHandler->addElementHandler( "CSharpEditObjMembers", getCSharpEditObjMembersHandler() );
			tableHandler->addElementHandler( "CSharpEditObjUsing", getCSharpEditObjUsingHandler() );
		}
		return( tableHandler );
	}

	cfbam::CFBamCustXmlLoaderTableAddendumHandler* CFBamCustXmlLoader::getTableAddendumHandler() {
		if( tableAddendumHandler == NULL ) {
			tableAddendumHandler = new cfbam::CFBamCustXmlLoaderTableAddendumHandler( this );

			tableAddendumHandler->addElementHandler( "ServerObjFunc", getServerObjFuncHandler() );
			tableAddendumHandler->addElementHandler( "ServerProc", getServerProcHandler() );
			tableAddendumHandler->addElementHandler( "ServerListFunc", getServerListFuncHandler() );
			tableAddendumHandler->addElementHandler( "Relation", getRelationHandler() );
			tableAddendumHandler->addElementHandler( "SuperClassRelation", getSuperClassRelationHandler() );
			tableAddendumHandler->addElementHandler( "Index", getIndexHandler() );
			tableAddendumHandler->addElementHandler( "Chain", getChainHandler() );
			tableAddendumHandler->addElementHandler( "DelDep", getDelDepHandler() );
			tableAddendumHandler->addElementHandler( "ClearDep", getClearDepHandler() );
		}
		return( tableAddendumHandler );
	}

	cfbam::CFBamCustXmlLoaderTableColHandler* CFBamCustXmlLoader::getTableColHandler() {
		if( tableColHandler == NULL ) {
			tableColHandler = new cfbam::CFBamCustXmlLoaderTableColHandler( this );
		}
		return( tableColHandler );
	}

	cfbam::CFBamCustXmlLoaderTextColHandler* CFBamCustXmlLoader::getTextColHandler() {
		if( textColHandler == NULL ) {
			textColHandler = new cfbam::CFBamCustXmlLoaderTextColHandler( this );
		}
		return( textColHandler );
	}

	cfbam::CFBamCustXmlLoaderTextTypeHandler* CFBamCustXmlLoader::getTextTypeHandler() {
		if( textTypeHandler == NULL ) {
			textTypeHandler = new cfbam::CFBamCustXmlLoaderTextTypeHandler( this );
		}
		return( textTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderTimeColHandler* CFBamCustXmlLoader::getTimeColHandler() {
		if( timeColHandler == NULL ) {
			timeColHandler = new cfbam::CFBamCustXmlLoaderTimeColHandler( this );
		}
		return( timeColHandler );
	}

	cfbam::CFBamCustXmlLoaderTimeTypeHandler* CFBamCustXmlLoader::getTimeTypeHandler() {
		if( timeTypeHandler == NULL ) {
			timeTypeHandler = new cfbam::CFBamCustXmlLoaderTimeTypeHandler( this );
		}
		return( timeTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderTimestampColHandler* CFBamCustXmlLoader::getTimestampColHandler() {
		if( timestampColHandler == NULL ) {
			timestampColHandler = new cfbam::CFBamCustXmlLoaderTimestampColHandler( this );
		}
		return( timestampColHandler );
	}

	cfbam::CFBamCustXmlLoaderTimestampTypeHandler* CFBamCustXmlLoader::getTimestampTypeHandler() {
		if( timestampTypeHandler == NULL ) {
			timestampTypeHandler = new cfbam::CFBamCustXmlLoaderTimestampTypeHandler( this );
		}
		return( timestampTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderTldHandler* CFBamCustXmlLoader::getTldHandler() {
		if( tldHandler == NULL ) {
			tldHandler = new cfbam::CFBamCustXmlLoaderTldHandler( this );
			tldHandler->addElementHandler( "TopDomain", getTopDomainHandler() );
		}
		return( tldHandler );
	}

	cfbam::CFBamCustXmlLoaderTokenColHandler* CFBamCustXmlLoader::getTokenColHandler() {
		if( tokenColHandler == NULL ) {
			tokenColHandler = new cfbam::CFBamCustXmlLoaderTokenColHandler( this );
		}
		return( tokenColHandler );
	}

	cfbam::CFBamCustXmlLoaderTokenTypeHandler* CFBamCustXmlLoader::getTokenTypeHandler() {
		if( tokenTypeHandler == NULL ) {
			tokenTypeHandler = new cfbam::CFBamCustXmlLoaderTokenTypeHandler( this );
		}
		return( tokenTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderTopDomainHandler* CFBamCustXmlLoader::getTopDomainHandler() {
		if( topDomainHandler == NULL ) {
			topDomainHandler = new cfbam::CFBamCustXmlLoaderTopDomainHandler( this );
			topDomainHandler->addElementHandler( "TopProject", getTopProjectHandler() );
			topDomainHandler->addElementHandler( "License", getLicenseHandler() );
		}
		return( topDomainHandler );
	}

	cfbam::CFBamCustXmlLoaderTopProjectHandler* CFBamCustXmlLoader::getTopProjectHandler() {
		if( topProjectHandler == NULL ) {
			topProjectHandler = new cfbam::CFBamCustXmlLoaderTopProjectHandler( this );
			topProjectHandler->addElementHandler( "SubProject", getSubProjectHandler() );
		}
		return( topProjectHandler );
	}

	cfbam::CFBamCustXmlLoaderUInt16ColHandler* CFBamCustXmlLoader::getUInt16ColHandler() {
		if( uInt16ColHandler == NULL ) {
			uInt16ColHandler = new cfbam::CFBamCustXmlLoaderUInt16ColHandler( this );
		}
		return( uInt16ColHandler );
	}

	cfbam::CFBamCustXmlLoaderUInt16TypeHandler* CFBamCustXmlLoader::getUInt16TypeHandler() {
		if( uInt16TypeHandler == NULL ) {
			uInt16TypeHandler = new cfbam::CFBamCustXmlLoaderUInt16TypeHandler( this );
		}
		return( uInt16TypeHandler );
	}

	cfbam::CFBamCustXmlLoaderUInt32ColHandler* CFBamCustXmlLoader::getUInt32ColHandler() {
		if( uInt32ColHandler == NULL ) {
			uInt32ColHandler = new cfbam::CFBamCustXmlLoaderUInt32ColHandler( this );
		}
		return( uInt32ColHandler );
	}

	cfbam::CFBamCustXmlLoaderUInt32TypeHandler* CFBamCustXmlLoader::getUInt32TypeHandler() {
		if( uInt32TypeHandler == NULL ) {
			uInt32TypeHandler = new cfbam::CFBamCustXmlLoaderUInt32TypeHandler( this );
		}
		return( uInt32TypeHandler );
	}

	cfbam::CFBamCustXmlLoaderUInt64ColHandler* CFBamCustXmlLoader::getUInt64ColHandler() {
		if( uInt64ColHandler == NULL ) {
			uInt64ColHandler = new cfbam::CFBamCustXmlLoaderUInt64ColHandler( this );
		}
		return( uInt64ColHandler );
	}

	cfbam::CFBamCustXmlLoaderUInt64TypeHandler* CFBamCustXmlLoader::getUInt64TypeHandler() {
		if( uInt64TypeHandler == NULL ) {
			uInt64TypeHandler = new cfbam::CFBamCustXmlLoaderUInt64TypeHandler( this );
		}
		return( uInt64TypeHandler );
	}

	cfbam::CFBamCustXmlLoaderUuidColHandler* CFBamCustXmlLoader::getUuidColHandler() {
		if( uuidColHandler == NULL ) {
			uuidColHandler = new cfbam::CFBamCustXmlLoaderUuidColHandler( this );
		}
		return( uuidColHandler );
	}

	cfbam::CFBamCustXmlLoaderUuidGenHandler* CFBamCustXmlLoader::getUuidGenHandler() {
		if( uuidGenHandler == NULL ) {
			uuidGenHandler = new cfbam::CFBamCustXmlLoaderUuidGenHandler( this );
		}
		return( uuidGenHandler );
	}

	cfbam::CFBamCustXmlLoaderUuidTypeHandler* CFBamCustXmlLoader::getUuidTypeHandler() {
		if( uuidTypeHandler == NULL ) {
			uuidTypeHandler = new cfbam::CFBamCustXmlLoaderUuidTypeHandler( this );
		}
		return( uuidTypeHandler );
	}

	cfbam::CFBamCustXmlLoaderCPlusDb2LUWSchemaObjImplHandler* CFBamCustXmlLoader::getCPlusDb2LUWSchemaObjImplHandler() {
		if( cplusDb2LUWSchemaObjImplHandler == NULL ) {
			cplusDb2LUWSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCPlusDb2LUWSchemaObjImplHandler( this );
		}
		return( cplusDb2LUWSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusDb2LUWSchemaObjIncludeHandler* CFBamCustXmlLoader::getCPlusDb2LUWSchemaObjIncludeHandler() {
		if( cplusDb2LUWSchemaObjIncludeHandler == NULL ) {
			cplusDb2LUWSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusDb2LUWSchemaObjIncludeHandler( this );
		}
		return( cplusDb2LUWSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusDb2LUWSchemaObjMembersHandler* CFBamCustXmlLoader::getCPlusDb2LUWSchemaObjMembersHandler() {
		if( cplusDb2LUWSchemaObjMembersHandler == NULL ) {
			cplusDb2LUWSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusDb2LUWSchemaObjMembersHandler( this );
		}
		return( cplusDb2LUWSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusDb2LUWTableImplementationHandler* CFBamCustXmlLoader::getCPlusDb2LUWTableImplementationHandler() {
		if( cplusDb2LUWTableImplementationHandler == NULL ) {
			cplusDb2LUWTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCPlusDb2LUWTableImplementationHandler( this );
		}
		return( cplusDb2LUWTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusDb2LUWTableIncludeHandler* CFBamCustXmlLoader::getCPlusDb2LUWTableIncludeHandler() {
		if( cplusDb2LUWTableIncludeHandler == NULL ) {
			cplusDb2LUWTableIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusDb2LUWTableIncludeHandler( this );
		}
		return( cplusDb2LUWTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusDb2LUWTableMembersHandler* CFBamCustXmlLoader::getCPlusDb2LUWTableMembersHandler() {
		if( cplusDb2LUWTableMembersHandler == NULL ) {
			cplusDb2LUWTableMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusDb2LUWTableMembersHandler( this );
		}
		return( cplusDb2LUWTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMSSqlSchemaObjImplHandler* CFBamCustXmlLoader::getCPlusMSSqlSchemaObjImplHandler() {
		if( cplusMSSqlSchemaObjImplHandler == NULL ) {
			cplusMSSqlSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCPlusMSSqlSchemaObjImplHandler( this );
		}
		return( cplusMSSqlSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMSSqlSchemaObjIncludeHandler* CFBamCustXmlLoader::getCPlusMSSqlSchemaObjIncludeHandler() {
		if( cplusMSSqlSchemaObjIncludeHandler == NULL ) {
			cplusMSSqlSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusMSSqlSchemaObjIncludeHandler( this );
		}
		return( cplusMSSqlSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMSSqlSchemaObjMembersHandler* CFBamCustXmlLoader::getCPlusMSSqlSchemaObjMembersHandler() {
		if( cplusMSSqlSchemaObjMembersHandler == NULL ) {
			cplusMSSqlSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusMSSqlSchemaObjMembersHandler( this );
		}
		return( cplusMSSqlSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMSSqlTableImplementationHandler* CFBamCustXmlLoader::getCPlusMSSqlTableImplementationHandler() {
		if( cplusMSSqlTableImplementationHandler == NULL ) {
			cplusMSSqlTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCPlusMSSqlTableImplementationHandler( this );
		}
		return( cplusMSSqlTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMSSqlTableIncludeHandler* CFBamCustXmlLoader::getCPlusMSSqlTableIncludeHandler() {
		if( cplusMSSqlTableIncludeHandler == NULL ) {
			cplusMSSqlTableIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusMSSqlTableIncludeHandler( this );
		}
		return( cplusMSSqlTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMSSqlTableMembersHandler* CFBamCustXmlLoader::getCPlusMSSqlTableMembersHandler() {
		if( cplusMSSqlTableMembersHandler == NULL ) {
			cplusMSSqlTableMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusMSSqlTableMembersHandler( this );
		}
		return( cplusMSSqlTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMethodBodyHandler* CFBamCustXmlLoader::getCPlusMethodBodyHandler() {
		if( cplusMethodBodyHandler == NULL ) {
			cplusMethodBodyHandler = new cfbam::CFBamCustXmlLoaderCPlusMethodBodyHandler( this );
		}
		return( cplusMethodBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMySqlSchemaObjImplHandler* CFBamCustXmlLoader::getCPlusMySqlSchemaObjImplHandler() {
		if( cplusMySqlSchemaObjImplHandler == NULL ) {
			cplusMySqlSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCPlusMySqlSchemaObjImplHandler( this );
		}
		return( cplusMySqlSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMySqlSchemaObjIncludeHandler* CFBamCustXmlLoader::getCPlusMySqlSchemaObjIncludeHandler() {
		if( cplusMySqlSchemaObjIncludeHandler == NULL ) {
			cplusMySqlSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusMySqlSchemaObjIncludeHandler( this );
		}
		return( cplusMySqlSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler* CFBamCustXmlLoader::getCPlusMySqlSchemaObjMembersHandler() {
		if( cplusMySqlSchemaObjMembersHandler == NULL ) {
			cplusMySqlSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusMySqlSchemaObjMembersHandler( this );
		}
		return( cplusMySqlSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMySqlTableImplementationHandler* CFBamCustXmlLoader::getCPlusMySqlTableImplementationHandler() {
		if( cplusMySqlTableImplementationHandler == NULL ) {
			cplusMySqlTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCPlusMySqlTableImplementationHandler( this );
		}
		return( cplusMySqlTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMySqlTableIncludeHandler* CFBamCustXmlLoader::getCPlusMySqlTableIncludeHandler() {
		if( cplusMySqlTableIncludeHandler == NULL ) {
			cplusMySqlTableIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusMySqlTableIncludeHandler( this );
		}
		return( cplusMySqlTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusMySqlTableMembersHandler* CFBamCustXmlLoader::getCPlusMySqlTableMembersHandler() {
		if( cplusMySqlTableMembersHandler == NULL ) {
			cplusMySqlTableMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusMySqlTableMembersHandler( this );
		}
		return( cplusMySqlTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusOracleSchemaObjImplHandler* CFBamCustXmlLoader::getCPlusOracleSchemaObjImplHandler() {
		if( cplusOracleSchemaObjImplHandler == NULL ) {
			cplusOracleSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCPlusOracleSchemaObjImplHandler( this );
		}
		return( cplusOracleSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusOracleSchemaObjIncludeHandler* CFBamCustXmlLoader::getCPlusOracleSchemaObjIncludeHandler() {
		if( cplusOracleSchemaObjIncludeHandler == NULL ) {
			cplusOracleSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusOracleSchemaObjIncludeHandler( this );
		}
		return( cplusOracleSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusOracleSchemaObjMembersHandler* CFBamCustXmlLoader::getCPlusOracleSchemaObjMembersHandler() {
		if( cplusOracleSchemaObjMembersHandler == NULL ) {
			cplusOracleSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusOracleSchemaObjMembersHandler( this );
		}
		return( cplusOracleSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusOracleTableImplementationHandler* CFBamCustXmlLoader::getCPlusOracleTableImplementationHandler() {
		if( cplusOracleTableImplementationHandler == NULL ) {
			cplusOracleTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCPlusOracleTableImplementationHandler( this );
		}
		return( cplusOracleTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusOracleTableIncludeHandler* CFBamCustXmlLoader::getCPlusOracleTableIncludeHandler() {
		if( cplusOracleTableIncludeHandler == NULL ) {
			cplusOracleTableIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusOracleTableIncludeHandler( this );
		}
		return( cplusOracleTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusOracleTableMembersHandler* CFBamCustXmlLoader::getCPlusOracleTableMembersHandler() {
		if( cplusOracleTableMembersHandler == NULL ) {
			cplusOracleTableMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusOracleTableMembersHandler( this );
		}
		return( cplusOracleTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusPgSqlSchemaObjImplHandler* CFBamCustXmlLoader::getCPlusPgSqlSchemaObjImplHandler() {
		if( cplusPgSqlSchemaObjImplHandler == NULL ) {
			cplusPgSqlSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCPlusPgSqlSchemaObjImplHandler( this );
		}
		return( cplusPgSqlSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusPgSqlSchemaObjIncludeHandler* CFBamCustXmlLoader::getCPlusPgSqlSchemaObjIncludeHandler() {
		if( cplusPgSqlSchemaObjIncludeHandler == NULL ) {
			cplusPgSqlSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusPgSqlSchemaObjIncludeHandler( this );
		}
		return( cplusPgSqlSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusPgSqlSchemaObjMembersHandler* CFBamCustXmlLoader::getCPlusPgSqlSchemaObjMembersHandler() {
		if( cplusPgSqlSchemaObjMembersHandler == NULL ) {
			cplusPgSqlSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusPgSqlSchemaObjMembersHandler( this );
		}
		return( cplusPgSqlSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusPgSqlTableImplementationHandler* CFBamCustXmlLoader::getCPlusPgSqlTableImplementationHandler() {
		if( cplusPgSqlTableImplementationHandler == NULL ) {
			cplusPgSqlTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCPlusPgSqlTableImplementationHandler( this );
		}
		return( cplusPgSqlTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusPgSqlTableIncludeHandler* CFBamCustXmlLoader::getCPlusPgSqlTableIncludeHandler() {
		if( cplusPgSqlTableIncludeHandler == NULL ) {
			cplusPgSqlTableIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusPgSqlTableIncludeHandler( this );
		}
		return( cplusPgSqlTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusPgSqlTableMembersHandler* CFBamCustXmlLoader::getCPlusPgSqlTableMembersHandler() {
		if( cplusPgSqlTableMembersHandler == NULL ) {
			cplusPgSqlTableMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusPgSqlTableMembersHandler( this );
		}
		return( cplusPgSqlTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusRamSchemaObjImplHandler* CFBamCustXmlLoader::getCPlusRamSchemaObjImplHandler() {
		if( cplusRamSchemaObjImplHandler == NULL ) {
			cplusRamSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCPlusRamSchemaObjImplHandler( this );
		}
		return( cplusRamSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusRamSchemaObjIncludeHandler* CFBamCustXmlLoader::getCPlusRamSchemaObjIncludeHandler() {
		if( cplusRamSchemaObjIncludeHandler == NULL ) {
			cplusRamSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusRamSchemaObjIncludeHandler( this );
		}
		return( cplusRamSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusRamSchemaObjMembersHandler* CFBamCustXmlLoader::getCPlusRamSchemaObjMembersHandler() {
		if( cplusRamSchemaObjMembersHandler == NULL ) {
			cplusRamSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusRamSchemaObjMembersHandler( this );
		}
		return( cplusRamSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusRamTableImplementationHandler* CFBamCustXmlLoader::getCPlusRamTableImplementationHandler() {
		if( cplusRamTableImplementationHandler == NULL ) {
			cplusRamTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCPlusRamTableImplementationHandler( this );
		}
		return( cplusRamTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusRamTableIncludeHandler* CFBamCustXmlLoader::getCPlusRamTableIncludeHandler() {
		if( cplusRamTableIncludeHandler == NULL ) {
			cplusRamTableIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusRamTableIncludeHandler( this );
		}
		return( cplusRamTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusRamTableMembersHandler* CFBamCustXmlLoader::getCPlusRamTableMembersHandler() {
		if( cplusRamTableMembersHandler == NULL ) {
			cplusRamTableMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusRamTableMembersHandler( this );
		}
		return( cplusRamTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusSchemaObjImplementationHandler* CFBamCustXmlLoader::getCPlusSchemaObjImplementationHandler() {
		if( cplusSchemaObjImplementationHandler == NULL ) {
			cplusSchemaObjImplementationHandler = new cfbam::CFBamCustXmlLoaderCPlusSchemaObjImplementationHandler( this );
		}
		return( cplusSchemaObjImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusSchemaObjIncludeHandler* CFBamCustXmlLoader::getCPlusSchemaObjIncludeHandler() {
		if( cplusSchemaObjIncludeHandler == NULL ) {
			cplusSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusSchemaObjIncludeHandler( this );
		}
		return( cplusSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusSchemaObjInterfaceHandler* CFBamCustXmlLoader::getCPlusSchemaObjInterfaceHandler() {
		if( cplusSchemaObjInterfaceHandler == NULL ) {
			cplusSchemaObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderCPlusSchemaObjInterfaceHandler( this );
		}
		return( cplusSchemaObjInterfaceHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusSchemaObjMembersHandler* CFBamCustXmlLoader::getCPlusSchemaObjMembersHandler() {
		if( cplusSchemaObjMembersHandler == NULL ) {
			cplusSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusSchemaObjMembersHandler( this );
		}
		return( cplusSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusTableImplementationHandler* CFBamCustXmlLoader::getCPlusTableImplementationHandler() {
		if( cplusTableImplementationHandler == NULL ) {
			cplusTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCPlusTableImplementationHandler( this );
		}
		return( cplusTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusTableIncludeHandler* CFBamCustXmlLoader::getCPlusTableIncludeHandler() {
		if( cplusTableIncludeHandler == NULL ) {
			cplusTableIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusTableIncludeHandler( this );
		}
		return( cplusTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusTableInterfaceHandler* CFBamCustXmlLoader::getCPlusTableInterfaceHandler() {
		if( cplusTableInterfaceHandler == NULL ) {
			cplusTableInterfaceHandler = new cfbam::CFBamCustXmlLoaderCPlusTableInterfaceHandler( this );
		}
		return( cplusTableInterfaceHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusTableMembersHandler* CFBamCustXmlLoader::getCPlusTableMembersHandler() {
		if( cplusTableMembersHandler == NULL ) {
			cplusTableMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusTableMembersHandler( this );
		}
		return( cplusTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusTableObjImplementationHandler* CFBamCustXmlLoader::getCPlusTableObjImplementationHandler() {
		if( cplusTableObjImplementationHandler == NULL ) {
			cplusTableObjImplementationHandler = new cfbam::CFBamCustXmlLoaderCPlusTableObjImplementationHandler( this );
		}
		return( cplusTableObjImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusTableObjIncludeHandler* CFBamCustXmlLoader::getCPlusTableObjIncludeHandler() {
		if( cplusTableObjIncludeHandler == NULL ) {
			cplusTableObjIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusTableObjIncludeHandler( this );
		}
		return( cplusTableObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusTableObjInterfaceHandler* CFBamCustXmlLoader::getCPlusTableObjInterfaceHandler() {
		if( cplusTableObjInterfaceHandler == NULL ) {
			cplusTableObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderCPlusTableObjInterfaceHandler( this );
		}
		return( cplusTableObjInterfaceHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusTableObjMembersHandler* CFBamCustXmlLoader::getCPlusTableObjMembersHandler() {
		if( cplusTableObjMembersHandler == NULL ) {
			cplusTableObjMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusTableObjMembersHandler( this );
		}
		return( cplusTableObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgClientSchemaBodyHandler* CFBamCustXmlLoader::getCPlusXMsgClientSchemaBodyHandler() {
		if( cplusXMsgClientSchemaBodyHandler == NULL ) {
			cplusXMsgClientSchemaBodyHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgClientSchemaBodyHandler( this );
		}
		return( cplusXMsgClientSchemaBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgClientSchemaIncludeHandler* CFBamCustXmlLoader::getCPlusXMsgClientSchemaIncludeHandler() {
		if( cplusXMsgClientSchemaIncludeHandler == NULL ) {
			cplusXMsgClientSchemaIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgClientSchemaIncludeHandler( this );
		}
		return( cplusXMsgClientSchemaIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgClientTableBodyHandler* CFBamCustXmlLoader::getCPlusXMsgClientTableBodyHandler() {
		if( cplusXMsgClientTableBodyHandler == NULL ) {
			cplusXMsgClientTableBodyHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgClientTableBodyHandler( this );
		}
		return( cplusXMsgClientTableBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgClientTableIncludeHandler* CFBamCustXmlLoader::getCPlusXMsgClientTableIncludeHandler() {
		if( cplusXMsgClientTableIncludeHandler == NULL ) {
			cplusXMsgClientTableIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgClientTableIncludeHandler( this );
		}
		return( cplusXMsgClientTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRqstSchemaBodyHandler* CFBamCustXmlLoader::getCPlusXMsgRqstSchemaBodyHandler() {
		if( cplusXMsgRqstSchemaBodyHandler == NULL ) {
			cplusXMsgRqstSchemaBodyHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRqstSchemaBodyHandler( this );
		}
		return( cplusXMsgRqstSchemaBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRqstSchemaIncludeHandler* CFBamCustXmlLoader::getCPlusXMsgRqstSchemaIncludeHandler() {
		if( cplusXMsgRqstSchemaIncludeHandler == NULL ) {
			cplusXMsgRqstSchemaIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRqstSchemaIncludeHandler( this );
		}
		return( cplusXMsgRqstSchemaIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRqstSchemaWireParsersHandler* CFBamCustXmlLoader::getCPlusXMsgRqstSchemaWireParsersHandler() {
		if( cplusXMsgRqstSchemaWireParsersHandler == NULL ) {
			cplusXMsgRqstSchemaWireParsersHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRqstSchemaWireParsersHandler( this );
		}
		return( cplusXMsgRqstSchemaWireParsersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRqstSchemaXsdElementListHandler* CFBamCustXmlLoader::getCPlusXMsgRqstSchemaXsdElementListHandler() {
		if( cplusXMsgRqstSchemaXsdElementListHandler == NULL ) {
			cplusXMsgRqstSchemaXsdElementListHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRqstSchemaXsdElementListHandler( this );
		}
		return( cplusXMsgRqstSchemaXsdElementListHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRqstSchemaXsdSpecHandler* CFBamCustXmlLoader::getCPlusXMsgRqstSchemaXsdSpecHandler() {
		if( cplusXMsgRqstSchemaXsdSpecHandler == NULL ) {
			cplusXMsgRqstSchemaXsdSpecHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRqstSchemaXsdSpecHandler( this );
		}
		return( cplusXMsgRqstSchemaXsdSpecHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRqstTableBodyHandler* CFBamCustXmlLoader::getCPlusXMsgRqstTableBodyHandler() {
		if( cplusXMsgRqstTableBodyHandler == NULL ) {
			cplusXMsgRqstTableBodyHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRqstTableBodyHandler( this );
		}
		return( cplusXMsgRqstTableBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRqstTableIncludeHandler* CFBamCustXmlLoader::getCPlusXMsgRqstTableIncludeHandler() {
		if( cplusXMsgRqstTableIncludeHandler == NULL ) {
			cplusXMsgRqstTableIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRqstTableIncludeHandler( this );
		}
		return( cplusXMsgRqstTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRspnSchemaBodyHandler* CFBamCustXmlLoader::getCPlusXMsgRspnSchemaBodyHandler() {
		if( cplusXMsgRspnSchemaBodyHandler == NULL ) {
			cplusXMsgRspnSchemaBodyHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRspnSchemaBodyHandler( this );
		}
		return( cplusXMsgRspnSchemaBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRspnSchemaIncludeHandler* CFBamCustXmlLoader::getCPlusXMsgRspnSchemaIncludeHandler() {
		if( cplusXMsgRspnSchemaIncludeHandler == NULL ) {
			cplusXMsgRspnSchemaIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRspnSchemaIncludeHandler( this );
		}
		return( cplusXMsgRspnSchemaIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRspnSchemaWireParsersHandler* CFBamCustXmlLoader::getCPlusXMsgRspnSchemaWireParsersHandler() {
		if( cplusXMsgRspnSchemaWireParsersHandler == NULL ) {
			cplusXMsgRspnSchemaWireParsersHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRspnSchemaWireParsersHandler( this );
		}
		return( cplusXMsgRspnSchemaWireParsersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRspnSchemaXsdElementListHandler* CFBamCustXmlLoader::getCPlusXMsgRspnSchemaXsdElementListHandler() {
		if( cplusXMsgRspnSchemaXsdElementListHandler == NULL ) {
			cplusXMsgRspnSchemaXsdElementListHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRspnSchemaXsdElementListHandler( this );
		}
		return( cplusXMsgRspnSchemaXsdElementListHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRspnSchemaXsdSpecHandler* CFBamCustXmlLoader::getCPlusXMsgRspnSchemaXsdSpecHandler() {
		if( cplusXMsgRspnSchemaXsdSpecHandler == NULL ) {
			cplusXMsgRspnSchemaXsdSpecHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRspnSchemaXsdSpecHandler( this );
		}
		return( cplusXMsgRspnSchemaXsdSpecHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRspnTableBodyHandler* CFBamCustXmlLoader::getCPlusXMsgRspnTableBodyHandler() {
		if( cplusXMsgRspnTableBodyHandler == NULL ) {
			cplusXMsgRspnTableBodyHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRspnTableBodyHandler( this );
		}
		return( cplusXMsgRspnTableBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgRspnTableIncludeHandler* CFBamCustXmlLoader::getCPlusXMsgRspnTableIncludeHandler() {
		if( cplusXMsgRspnTableIncludeHandler == NULL ) {
			cplusXMsgRspnTableIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgRspnTableIncludeHandler( this );
		}
		return( cplusXMsgRspnTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgSchemaFormattersHandler* CFBamCustXmlLoader::getCPlusXMsgSchemaFormattersHandler() {
		if( cplusXMsgSchemaFormattersHandler == NULL ) {
			cplusXMsgSchemaFormattersHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgSchemaFormattersHandler( this );
		}
		return( cplusXMsgSchemaFormattersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgSchemaIncludeHandler* CFBamCustXmlLoader::getCPlusXMsgSchemaIncludeHandler() {
		if( cplusXMsgSchemaIncludeHandler == NULL ) {
			cplusXMsgSchemaIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgSchemaIncludeHandler( this );
		}
		return( cplusXMsgSchemaIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgTableFormattersHandler* CFBamCustXmlLoader::getCPlusXMsgTableFormattersHandler() {
		if( cplusXMsgTableFormattersHandler == NULL ) {
			cplusXMsgTableFormattersHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgTableFormattersHandler( this );
		}
		return( cplusXMsgTableFormattersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCPlusXMsgTableIncludeHandler* CFBamCustXmlLoader::getCPlusXMsgTableIncludeHandler() {
		if( cplusXMsgTableIncludeHandler == NULL ) {
			cplusXMsgTableIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusXMsgTableIncludeHandler( this );
		}
		return( cplusXMsgTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpDb2LUWSchemaObjImplHandler* CFBamCustXmlLoader::getCSharpDb2LUWSchemaObjImplHandler() {
		if( csharpDb2LUWSchemaObjImplHandler == NULL ) {
			csharpDb2LUWSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCSharpDb2LUWSchemaObjImplHandler( this );
		}
		return( csharpDb2LUWSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpDb2LUWSchemaObjMembersHandler* CFBamCustXmlLoader::getCSharpDb2LUWSchemaObjMembersHandler() {
		if( csharpDb2LUWSchemaObjMembersHandler == NULL ) {
			csharpDb2LUWSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpDb2LUWSchemaObjMembersHandler( this );
		}
		return( csharpDb2LUWSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpDb2LUWSchemaObjUsingHandler* CFBamCustXmlLoader::getCSharpDb2LUWSchemaObjUsingHandler() {
		if( csharpDb2LUWSchemaObjUsingHandler == NULL ) {
			csharpDb2LUWSchemaObjUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpDb2LUWSchemaObjUsingHandler( this );
		}
		return( csharpDb2LUWSchemaObjUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpDb2LUWTableImplementationHandler* CFBamCustXmlLoader::getCSharpDb2LUWTableImplementationHandler() {
		if( csharpDb2LUWTableImplementationHandler == NULL ) {
			csharpDb2LUWTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCSharpDb2LUWTableImplementationHandler( this );
		}
		return( csharpDb2LUWTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpDb2LUWTableMembersHandler* CFBamCustXmlLoader::getCSharpDb2LUWTableMembersHandler() {
		if( csharpDb2LUWTableMembersHandler == NULL ) {
			csharpDb2LUWTableMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpDb2LUWTableMembersHandler( this );
		}
		return( csharpDb2LUWTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpDb2LUWTableUsingHandler* CFBamCustXmlLoader::getCSharpDb2LUWTableUsingHandler() {
		if( csharpDb2LUWTableUsingHandler == NULL ) {
			csharpDb2LUWTableUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpDb2LUWTableUsingHandler( this );
		}
		return( csharpDb2LUWTableUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMSSqlSchemaObjImplHandler* CFBamCustXmlLoader::getCSharpMSSqlSchemaObjImplHandler() {
		if( csharpMSSqlSchemaObjImplHandler == NULL ) {
			csharpMSSqlSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCSharpMSSqlSchemaObjImplHandler( this );
		}
		return( csharpMSSqlSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMSSqlSchemaObjMembersHandler* CFBamCustXmlLoader::getCSharpMSSqlSchemaObjMembersHandler() {
		if( csharpMSSqlSchemaObjMembersHandler == NULL ) {
			csharpMSSqlSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpMSSqlSchemaObjMembersHandler( this );
		}
		return( csharpMSSqlSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMSSqlSchemaObjUsingHandler* CFBamCustXmlLoader::getCSharpMSSqlSchemaObjUsingHandler() {
		if( csharpMSSqlSchemaObjUsingHandler == NULL ) {
			csharpMSSqlSchemaObjUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpMSSqlSchemaObjUsingHandler( this );
		}
		return( csharpMSSqlSchemaObjUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMSSqlTableImplementationHandler* CFBamCustXmlLoader::getCSharpMSSqlTableImplementationHandler() {
		if( csharpMSSqlTableImplementationHandler == NULL ) {
			csharpMSSqlTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCSharpMSSqlTableImplementationHandler( this );
		}
		return( csharpMSSqlTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMSSqlTableMembersHandler* CFBamCustXmlLoader::getCSharpMSSqlTableMembersHandler() {
		if( csharpMSSqlTableMembersHandler == NULL ) {
			csharpMSSqlTableMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpMSSqlTableMembersHandler( this );
		}
		return( csharpMSSqlTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMSSqlTableUsingHandler* CFBamCustXmlLoader::getCSharpMSSqlTableUsingHandler() {
		if( csharpMSSqlTableUsingHandler == NULL ) {
			csharpMSSqlTableUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpMSSqlTableUsingHandler( this );
		}
		return( csharpMSSqlTableUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMethodBodyHandler* CFBamCustXmlLoader::getCSharpMethodBodyHandler() {
		if( csharpMethodBodyHandler == NULL ) {
			csharpMethodBodyHandler = new cfbam::CFBamCustXmlLoaderCSharpMethodBodyHandler( this );
		}
		return( csharpMethodBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMySqlSchemaObjImplHandler* CFBamCustXmlLoader::getCSharpMySqlSchemaObjImplHandler() {
		if( csharpMySqlSchemaObjImplHandler == NULL ) {
			csharpMySqlSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCSharpMySqlSchemaObjImplHandler( this );
		}
		return( csharpMySqlSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMySqlSchemaObjMembersHandler* CFBamCustXmlLoader::getCSharpMySqlSchemaObjMembersHandler() {
		if( csharpMySqlSchemaObjMembersHandler == NULL ) {
			csharpMySqlSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpMySqlSchemaObjMembersHandler( this );
		}
		return( csharpMySqlSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMySqlSchemaObjUsingHandler* CFBamCustXmlLoader::getCSharpMySqlSchemaObjUsingHandler() {
		if( csharpMySqlSchemaObjUsingHandler == NULL ) {
			csharpMySqlSchemaObjUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpMySqlSchemaObjUsingHandler( this );
		}
		return( csharpMySqlSchemaObjUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMySqlTableImplementationHandler* CFBamCustXmlLoader::getCSharpMySqlTableImplementationHandler() {
		if( csharpMySqlTableImplementationHandler == NULL ) {
			csharpMySqlTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCSharpMySqlTableImplementationHandler( this );
		}
		return( csharpMySqlTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMySqlTableMembersHandler* CFBamCustXmlLoader::getCSharpMySqlTableMembersHandler() {
		if( csharpMySqlTableMembersHandler == NULL ) {
			csharpMySqlTableMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpMySqlTableMembersHandler( this );
		}
		return( csharpMySqlTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpMySqlTableUsingHandler* CFBamCustXmlLoader::getCSharpMySqlTableUsingHandler() {
		if( csharpMySqlTableUsingHandler == NULL ) {
			csharpMySqlTableUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpMySqlTableUsingHandler( this );
		}
		return( csharpMySqlTableUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpOracleSchemaObjImplHandler* CFBamCustXmlLoader::getCSharpOracleSchemaObjImplHandler() {
		if( csharpOracleSchemaObjImplHandler == NULL ) {
			csharpOracleSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCSharpOracleSchemaObjImplHandler( this );
		}
		return( csharpOracleSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpOracleSchemaObjMembersHandler* CFBamCustXmlLoader::getCSharpOracleSchemaObjMembersHandler() {
		if( csharpOracleSchemaObjMembersHandler == NULL ) {
			csharpOracleSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpOracleSchemaObjMembersHandler( this );
		}
		return( csharpOracleSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpOracleSchemaObjUsingHandler* CFBamCustXmlLoader::getCSharpOracleSchemaObjUsingHandler() {
		if( csharpOracleSchemaObjUsingHandler == NULL ) {
			csharpOracleSchemaObjUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpOracleSchemaObjUsingHandler( this );
		}
		return( csharpOracleSchemaObjUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpOracleTableImplementationHandler* CFBamCustXmlLoader::getCSharpOracleTableImplementationHandler() {
		if( csharpOracleTableImplementationHandler == NULL ) {
			csharpOracleTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCSharpOracleTableImplementationHandler( this );
		}
		return( csharpOracleTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpOracleTableMembersHandler* CFBamCustXmlLoader::getCSharpOracleTableMembersHandler() {
		if( csharpOracleTableMembersHandler == NULL ) {
			csharpOracleTableMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpOracleTableMembersHandler( this );
		}
		return( csharpOracleTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpOracleTableUsingHandler* CFBamCustXmlLoader::getCSharpOracleTableUsingHandler() {
		if( csharpOracleTableUsingHandler == NULL ) {
			csharpOracleTableUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpOracleTableUsingHandler( this );
		}
		return( csharpOracleTableUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpPgSqlSchemaObjImplHandler* CFBamCustXmlLoader::getCSharpPgSqlSchemaObjImplHandler() {
		if( csharpPgSqlSchemaObjImplHandler == NULL ) {
			csharpPgSqlSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCSharpPgSqlSchemaObjImplHandler( this );
		}
		return( csharpPgSqlSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpPgSqlSchemaObjMembersHandler* CFBamCustXmlLoader::getCSharpPgSqlSchemaObjMembersHandler() {
		if( csharpPgSqlSchemaObjMembersHandler == NULL ) {
			csharpPgSqlSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpPgSqlSchemaObjMembersHandler( this );
		}
		return( csharpPgSqlSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpPgSqlSchemaObjUsingHandler* CFBamCustXmlLoader::getCSharpPgSqlSchemaObjUsingHandler() {
		if( csharpPgSqlSchemaObjUsingHandler == NULL ) {
			csharpPgSqlSchemaObjUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpPgSqlSchemaObjUsingHandler( this );
		}
		return( csharpPgSqlSchemaObjUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpPgSqlTableImplementationHandler* CFBamCustXmlLoader::getCSharpPgSqlTableImplementationHandler() {
		if( csharpPgSqlTableImplementationHandler == NULL ) {
			csharpPgSqlTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCSharpPgSqlTableImplementationHandler( this );
		}
		return( csharpPgSqlTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpPgSqlTableMembersHandler* CFBamCustXmlLoader::getCSharpPgSqlTableMembersHandler() {
		if( csharpPgSqlTableMembersHandler == NULL ) {
			csharpPgSqlTableMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpPgSqlTableMembersHandler( this );
		}
		return( csharpPgSqlTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpPgSqlTableUsingHandler* CFBamCustXmlLoader::getCSharpPgSqlTableUsingHandler() {
		if( csharpPgSqlTableUsingHandler == NULL ) {
			csharpPgSqlTableUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpPgSqlTableUsingHandler( this );
		}
		return( csharpPgSqlTableUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpRamSchemaObjImplHandler* CFBamCustXmlLoader::getCSharpRamSchemaObjImplHandler() {
		if( csharpRamSchemaObjImplHandler == NULL ) {
			csharpRamSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCSharpRamSchemaObjImplHandler( this );
		}
		return( csharpRamSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpRamSchemaObjMembersHandler* CFBamCustXmlLoader::getCSharpRamSchemaObjMembersHandler() {
		if( csharpRamSchemaObjMembersHandler == NULL ) {
			csharpRamSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpRamSchemaObjMembersHandler( this );
		}
		return( csharpRamSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpRamSchemaObjUsingHandler* CFBamCustXmlLoader::getCSharpRamSchemaObjUsingHandler() {
		if( csharpRamSchemaObjUsingHandler == NULL ) {
			csharpRamSchemaObjUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpRamSchemaObjUsingHandler( this );
		}
		return( csharpRamSchemaObjUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpRamTableImplementationHandler* CFBamCustXmlLoader::getCSharpRamTableImplementationHandler() {
		if( csharpRamTableImplementationHandler == NULL ) {
			csharpRamTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCSharpRamTableImplementationHandler( this );
		}
		return( csharpRamTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpRamTableMembersHandler* CFBamCustXmlLoader::getCSharpRamTableMembersHandler() {
		if( csharpRamTableMembersHandler == NULL ) {
			csharpRamTableMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpRamTableMembersHandler( this );
		}
		return( csharpRamTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpRamTableUsingHandler* CFBamCustXmlLoader::getCSharpRamTableUsingHandler() {
		if( csharpRamTableUsingHandler == NULL ) {
			csharpRamTableUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpRamTableUsingHandler( this );
		}
		return( csharpRamTableUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpSchemaObjImplementationHandler* CFBamCustXmlLoader::getCSharpSchemaObjImplementationHandler() {
		if( csharpSchemaObjImplementationHandler == NULL ) {
			csharpSchemaObjImplementationHandler = new cfbam::CFBamCustXmlLoaderCSharpSchemaObjImplementationHandler( this );
		}
		return( csharpSchemaObjImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpSchemaObjInterfaceHandler* CFBamCustXmlLoader::getCSharpSchemaObjInterfaceHandler() {
		if( csharpSchemaObjInterfaceHandler == NULL ) {
			csharpSchemaObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderCSharpSchemaObjInterfaceHandler( this );
		}
		return( csharpSchemaObjInterfaceHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpSchemaObjMembersHandler* CFBamCustXmlLoader::getCSharpSchemaObjMembersHandler() {
		if( csharpSchemaObjMembersHandler == NULL ) {
			csharpSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpSchemaObjMembersHandler( this );
		}
		return( csharpSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpSchemaObjUsingHandler* CFBamCustXmlLoader::getCSharpSchemaObjUsingHandler() {
		if( csharpSchemaObjUsingHandler == NULL ) {
			csharpSchemaObjUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpSchemaObjUsingHandler( this );
		}
		return( csharpSchemaObjUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpTableImplementationHandler* CFBamCustXmlLoader::getCSharpTableImplementationHandler() {
		if( csharpTableImplementationHandler == NULL ) {
			csharpTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCSharpTableImplementationHandler( this );
		}
		return( csharpTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpTableInterfaceHandler* CFBamCustXmlLoader::getCSharpTableInterfaceHandler() {
		if( csharpTableInterfaceHandler == NULL ) {
			csharpTableInterfaceHandler = new cfbam::CFBamCustXmlLoaderCSharpTableInterfaceHandler( this );
		}
		return( csharpTableInterfaceHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpTableMembersHandler* CFBamCustXmlLoader::getCSharpTableMembersHandler() {
		if( csharpTableMembersHandler == NULL ) {
			csharpTableMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpTableMembersHandler( this );
		}
		return( csharpTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpTableObjImplementationHandler* CFBamCustXmlLoader::getCSharpTableObjImplementationHandler() {
		if( csharpTableObjImplementationHandler == NULL ) {
			csharpTableObjImplementationHandler = new cfbam::CFBamCustXmlLoaderCSharpTableObjImplementationHandler( this );
		}
		return( csharpTableObjImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpTableObjInterfaceHandler* CFBamCustXmlLoader::getCSharpTableObjInterfaceHandler() {
		if( csharpTableObjInterfaceHandler == NULL ) {
			csharpTableObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderCSharpTableObjInterfaceHandler( this );
		}
		return( csharpTableObjInterfaceHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpTableObjMembersHandler* CFBamCustXmlLoader::getCSharpTableObjMembersHandler() {
		if( csharpTableObjMembersHandler == NULL ) {
			csharpTableObjMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpTableObjMembersHandler( this );
		}
		return( csharpTableObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpTableObjUsingHandler* CFBamCustXmlLoader::getCSharpTableObjUsingHandler() {
		if( csharpTableObjUsingHandler == NULL ) {
			csharpTableObjUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpTableObjUsingHandler( this );
		}
		return( csharpTableObjUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpTableUsingHandler* CFBamCustXmlLoader::getCSharpTableUsingHandler() {
		if( csharpTableUsingHandler == NULL ) {
			csharpTableUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpTableUsingHandler( this );
		}
		return( csharpTableUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgClientSchemaBodyHandler* CFBamCustXmlLoader::getCSharpXMsgClientSchemaBodyHandler() {
		if( csharpXMsgClientSchemaBodyHandler == NULL ) {
			csharpXMsgClientSchemaBodyHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgClientSchemaBodyHandler( this );
		}
		return( csharpXMsgClientSchemaBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgClientSchemaUsingHandler* CFBamCustXmlLoader::getCSharpXMsgClientSchemaUsingHandler() {
		if( csharpXMsgClientSchemaUsingHandler == NULL ) {
			csharpXMsgClientSchemaUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgClientSchemaUsingHandler( this );
		}
		return( csharpXMsgClientSchemaUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgClientTableBodyHandler* CFBamCustXmlLoader::getCSharpXMsgClientTableBodyHandler() {
		if( csharpXMsgClientTableBodyHandler == NULL ) {
			csharpXMsgClientTableBodyHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgClientTableBodyHandler( this );
		}
		return( csharpXMsgClientTableBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgClientTableUsingHandler* CFBamCustXmlLoader::getCSharpXMsgClientTableUsingHandler() {
		if( csharpXMsgClientTableUsingHandler == NULL ) {
			csharpXMsgClientTableUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgClientTableUsingHandler( this );
		}
		return( csharpXMsgClientTableUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRqstSchemaBodyHandler* CFBamCustXmlLoader::getCSharpXMsgRqstSchemaBodyHandler() {
		if( csharpXMsgRqstSchemaBodyHandler == NULL ) {
			csharpXMsgRqstSchemaBodyHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRqstSchemaBodyHandler( this );
		}
		return( csharpXMsgRqstSchemaBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRqstSchemaUsingHandler* CFBamCustXmlLoader::getCSharpXMsgRqstSchemaUsingHandler() {
		if( csharpXMsgRqstSchemaUsingHandler == NULL ) {
			csharpXMsgRqstSchemaUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRqstSchemaUsingHandler( this );
		}
		return( csharpXMsgRqstSchemaUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRqstSchemaWireParsersHandler* CFBamCustXmlLoader::getCSharpXMsgRqstSchemaWireParsersHandler() {
		if( csharpXMsgRqstSchemaWireParsersHandler == NULL ) {
			csharpXMsgRqstSchemaWireParsersHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRqstSchemaWireParsersHandler( this );
		}
		return( csharpXMsgRqstSchemaWireParsersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRqstSchemaXsdElementListHandler* CFBamCustXmlLoader::getCSharpXMsgRqstSchemaXsdElementListHandler() {
		if( csharpXMsgRqstSchemaXsdElementListHandler == NULL ) {
			csharpXMsgRqstSchemaXsdElementListHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRqstSchemaXsdElementListHandler( this );
		}
		return( csharpXMsgRqstSchemaXsdElementListHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRqstSchemaXsdSpecHandler* CFBamCustXmlLoader::getCSharpXMsgRqstSchemaXsdSpecHandler() {
		if( csharpXMsgRqstSchemaXsdSpecHandler == NULL ) {
			csharpXMsgRqstSchemaXsdSpecHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRqstSchemaXsdSpecHandler( this );
		}
		return( csharpXMsgRqstSchemaXsdSpecHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRqstTableBodyHandler* CFBamCustXmlLoader::getCSharpXMsgRqstTableBodyHandler() {
		if( csharpXMsgRqstTableBodyHandler == NULL ) {
			csharpXMsgRqstTableBodyHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRqstTableBodyHandler( this );
		}
		return( csharpXMsgRqstTableBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRqstTableUsingHandler* CFBamCustXmlLoader::getCSharpXMsgRqstTableUsingHandler() {
		if( csharpXMsgRqstTableUsingHandler == NULL ) {
			csharpXMsgRqstTableUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRqstTableUsingHandler( this );
		}
		return( csharpXMsgRqstTableUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRspnSchemaBodyHandler* CFBamCustXmlLoader::getCSharpXMsgRspnSchemaBodyHandler() {
		if( csharpXMsgRspnSchemaBodyHandler == NULL ) {
			csharpXMsgRspnSchemaBodyHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRspnSchemaBodyHandler( this );
		}
		return( csharpXMsgRspnSchemaBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRspnSchemaUsingHandler* CFBamCustXmlLoader::getCSharpXMsgRspnSchemaUsingHandler() {
		if( csharpXMsgRspnSchemaUsingHandler == NULL ) {
			csharpXMsgRspnSchemaUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRspnSchemaUsingHandler( this );
		}
		return( csharpXMsgRspnSchemaUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRspnSchemaWireParsersHandler* CFBamCustXmlLoader::getCSharpXMsgRspnSchemaWireParsersHandler() {
		if( csharpXMsgRspnSchemaWireParsersHandler == NULL ) {
			csharpXMsgRspnSchemaWireParsersHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRspnSchemaWireParsersHandler( this );
		}
		return( csharpXMsgRspnSchemaWireParsersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRspnSchemaXsdElementListHandler* CFBamCustXmlLoader::getCSharpXMsgRspnSchemaXsdElementListHandler() {
		if( csharpXMsgRspnSchemaXsdElementListHandler == NULL ) {
			csharpXMsgRspnSchemaXsdElementListHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRspnSchemaXsdElementListHandler( this );
		}
		return( csharpXMsgRspnSchemaXsdElementListHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRspnSchemaXsdSpecHandler* CFBamCustXmlLoader::getCSharpXMsgRspnSchemaXsdSpecHandler() {
		if( csharpXMsgRspnSchemaXsdSpecHandler == NULL ) {
			csharpXMsgRspnSchemaXsdSpecHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRspnSchemaXsdSpecHandler( this );
		}
		return( csharpXMsgRspnSchemaXsdSpecHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRspnTableBodyHandler* CFBamCustXmlLoader::getCSharpXMsgRspnTableBodyHandler() {
		if( csharpXMsgRspnTableBodyHandler == NULL ) {
			csharpXMsgRspnTableBodyHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRspnTableBodyHandler( this );
		}
		return( csharpXMsgRspnTableBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgRspnTableUsingHandler* CFBamCustXmlLoader::getCSharpXMsgRspnTableUsingHandler() {
		if( csharpXMsgRspnTableUsingHandler == NULL ) {
			csharpXMsgRspnTableUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgRspnTableUsingHandler( this );
		}
		return( csharpXMsgRspnTableUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgSchemaFormattersHandler* CFBamCustXmlLoader::getCSharpXMsgSchemaFormattersHandler() {
		if( csharpXMsgSchemaFormattersHandler == NULL ) {
			csharpXMsgSchemaFormattersHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgSchemaFormattersHandler( this );
		}
		return( csharpXMsgSchemaFormattersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgSchemaUsingHandler* CFBamCustXmlLoader::getCSharpXMsgSchemaUsingHandler() {
		if( csharpXMsgSchemaUsingHandler == NULL ) {
			csharpXMsgSchemaUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgSchemaUsingHandler( this );
		}
		return( csharpXMsgSchemaUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgTableFormattersHandler* CFBamCustXmlLoader::getCSharpXMsgTableFormattersHandler() {
		if( csharpXMsgTableFormattersHandler == NULL ) {
			csharpXMsgTableFormattersHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgTableFormattersHandler( this );
		}
		return( csharpXMsgTableFormattersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCSharpXMsgTableUsingHandler* CFBamCustXmlLoader::getCSharpXMsgTableUsingHandler() {
		if( csharpXMsgTableUsingHandler == NULL ) {
			csharpXMsgTableUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpXMsgTableUsingHandler( this );
		}
		return( csharpXMsgTableUsingHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusDb2LUWSchemaObjImplHandler* CFBamCustXmlLoader::getHPlusDb2LUWSchemaObjImplHandler() {
		if( hplusDb2LUWSchemaObjImplHandler == NULL ) {
			hplusDb2LUWSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderHPlusDb2LUWSchemaObjImplHandler( this );
		}
		return( hplusDb2LUWSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusDb2LUWSchemaObjIncludeHandler* CFBamCustXmlLoader::getHPlusDb2LUWSchemaObjIncludeHandler() {
		if( hplusDb2LUWSchemaObjIncludeHandler == NULL ) {
			hplusDb2LUWSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusDb2LUWSchemaObjIncludeHandler( this );
		}
		return( hplusDb2LUWSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusDb2LUWSchemaObjMembersHandler* CFBamCustXmlLoader::getHPlusDb2LUWSchemaObjMembersHandler() {
		if( hplusDb2LUWSchemaObjMembersHandler == NULL ) {
			hplusDb2LUWSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusDb2LUWSchemaObjMembersHandler( this );
		}
		return( hplusDb2LUWSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusDb2LUWTableImplementationHandler* CFBamCustXmlLoader::getHPlusDb2LUWTableImplementationHandler() {
		if( hplusDb2LUWTableImplementationHandler == NULL ) {
			hplusDb2LUWTableImplementationHandler = new cfbam::CFBamCustXmlLoaderHPlusDb2LUWTableImplementationHandler( this );
		}
		return( hplusDb2LUWTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusDb2LUWTableIncludeHandler* CFBamCustXmlLoader::getHPlusDb2LUWTableIncludeHandler() {
		if( hplusDb2LUWTableIncludeHandler == NULL ) {
			hplusDb2LUWTableIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusDb2LUWTableIncludeHandler( this );
		}
		return( hplusDb2LUWTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusDb2LUWTableMembersHandler* CFBamCustXmlLoader::getHPlusDb2LUWTableMembersHandler() {
		if( hplusDb2LUWTableMembersHandler == NULL ) {
			hplusDb2LUWTableMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusDb2LUWTableMembersHandler( this );
		}
		return( hplusDb2LUWTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusMSSqlSchemaObjImplHandler* CFBamCustXmlLoader::getHPlusMSSqlSchemaObjImplHandler() {
		if( hplusMSSqlSchemaObjImplHandler == NULL ) {
			hplusMSSqlSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderHPlusMSSqlSchemaObjImplHandler( this );
		}
		return( hplusMSSqlSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusMSSqlSchemaObjIncludeHandler* CFBamCustXmlLoader::getHPlusMSSqlSchemaObjIncludeHandler() {
		if( hplusMSSqlSchemaObjIncludeHandler == NULL ) {
			hplusMSSqlSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusMSSqlSchemaObjIncludeHandler( this );
		}
		return( hplusMSSqlSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusMSSqlSchemaObjMembersHandler* CFBamCustXmlLoader::getHPlusMSSqlSchemaObjMembersHandler() {
		if( hplusMSSqlSchemaObjMembersHandler == NULL ) {
			hplusMSSqlSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusMSSqlSchemaObjMembersHandler( this );
		}
		return( hplusMSSqlSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusMSSqlTableImplementationHandler* CFBamCustXmlLoader::getHPlusMSSqlTableImplementationHandler() {
		if( hplusMSSqlTableImplementationHandler == NULL ) {
			hplusMSSqlTableImplementationHandler = new cfbam::CFBamCustXmlLoaderHPlusMSSqlTableImplementationHandler( this );
		}
		return( hplusMSSqlTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusMSSqlTableIncludeHandler* CFBamCustXmlLoader::getHPlusMSSqlTableIncludeHandler() {
		if( hplusMSSqlTableIncludeHandler == NULL ) {
			hplusMSSqlTableIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusMSSqlTableIncludeHandler( this );
		}
		return( hplusMSSqlTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusMSSqlTableMembersHandler* CFBamCustXmlLoader::getHPlusMSSqlTableMembersHandler() {
		if( hplusMSSqlTableMembersHandler == NULL ) {
			hplusMSSqlTableMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusMSSqlTableMembersHandler( this );
		}
		return( hplusMSSqlTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusMySqlSchemaObjImplHandler* CFBamCustXmlLoader::getHPlusMySqlSchemaObjImplHandler() {
		if( hplusMySqlSchemaObjImplHandler == NULL ) {
			hplusMySqlSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderHPlusMySqlSchemaObjImplHandler( this );
		}
		return( hplusMySqlSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusMySqlSchemaObjIncludeHandler* CFBamCustXmlLoader::getHPlusMySqlSchemaObjIncludeHandler() {
		if( hplusMySqlSchemaObjIncludeHandler == NULL ) {
			hplusMySqlSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusMySqlSchemaObjIncludeHandler( this );
		}
		return( hplusMySqlSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusMySqlSchemaObjMembersHandler* CFBamCustXmlLoader::getHPlusMySqlSchemaObjMembersHandler() {
		if( hplusMySqlSchemaObjMembersHandler == NULL ) {
			hplusMySqlSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusMySqlSchemaObjMembersHandler( this );
		}
		return( hplusMySqlSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusMySqlTableImplementationHandler* CFBamCustXmlLoader::getHPlusMySqlTableImplementationHandler() {
		if( hplusMySqlTableImplementationHandler == NULL ) {
			hplusMySqlTableImplementationHandler = new cfbam::CFBamCustXmlLoaderHPlusMySqlTableImplementationHandler( this );
		}
		return( hplusMySqlTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusMySqlTableIncludeHandler* CFBamCustXmlLoader::getHPlusMySqlTableIncludeHandler() {
		if( hplusMySqlTableIncludeHandler == NULL ) {
			hplusMySqlTableIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusMySqlTableIncludeHandler( this );
		}
		return( hplusMySqlTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusMySqlTableMembersHandler* CFBamCustXmlLoader::getHPlusMySqlTableMembersHandler() {
		if( hplusMySqlTableMembersHandler == NULL ) {
			hplusMySqlTableMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusMySqlTableMembersHandler( this );
		}
		return( hplusMySqlTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusOracleSchemaObjImplHandler* CFBamCustXmlLoader::getHPlusOracleSchemaObjImplHandler() {
		if( hplusOracleSchemaObjImplHandler == NULL ) {
			hplusOracleSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderHPlusOracleSchemaObjImplHandler( this );
		}
		return( hplusOracleSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusOracleSchemaObjIncludeHandler* CFBamCustXmlLoader::getHPlusOracleSchemaObjIncludeHandler() {
		if( hplusOracleSchemaObjIncludeHandler == NULL ) {
			hplusOracleSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusOracleSchemaObjIncludeHandler( this );
		}
		return( hplusOracleSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusOracleSchemaObjMembersHandler* CFBamCustXmlLoader::getHPlusOracleSchemaObjMembersHandler() {
		if( hplusOracleSchemaObjMembersHandler == NULL ) {
			hplusOracleSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusOracleSchemaObjMembersHandler( this );
		}
		return( hplusOracleSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusOracleTableImplementationHandler* CFBamCustXmlLoader::getHPlusOracleTableImplementationHandler() {
		if( hplusOracleTableImplementationHandler == NULL ) {
			hplusOracleTableImplementationHandler = new cfbam::CFBamCustXmlLoaderHPlusOracleTableImplementationHandler( this );
		}
		return( hplusOracleTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusOracleTableIncludeHandler* CFBamCustXmlLoader::getHPlusOracleTableIncludeHandler() {
		if( hplusOracleTableIncludeHandler == NULL ) {
			hplusOracleTableIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusOracleTableIncludeHandler( this );
		}
		return( hplusOracleTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusOracleTableMembersHandler* CFBamCustXmlLoader::getHPlusOracleTableMembersHandler() {
		if( hplusOracleTableMembersHandler == NULL ) {
			hplusOracleTableMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusOracleTableMembersHandler( this );
		}
		return( hplusOracleTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusPgSqlSchemaObjImplHandler* CFBamCustXmlLoader::getHPlusPgSqlSchemaObjImplHandler() {
		if( hplusPgSqlSchemaObjImplHandler == NULL ) {
			hplusPgSqlSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderHPlusPgSqlSchemaObjImplHandler( this );
		}
		return( hplusPgSqlSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusPgSqlSchemaObjIncludeHandler* CFBamCustXmlLoader::getHPlusPgSqlSchemaObjIncludeHandler() {
		if( hplusPgSqlSchemaObjIncludeHandler == NULL ) {
			hplusPgSqlSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusPgSqlSchemaObjIncludeHandler( this );
		}
		return( hplusPgSqlSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusPgSqlSchemaObjMembersHandler* CFBamCustXmlLoader::getHPlusPgSqlSchemaObjMembersHandler() {
		if( hplusPgSqlSchemaObjMembersHandler == NULL ) {
			hplusPgSqlSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusPgSqlSchemaObjMembersHandler( this );
		}
		return( hplusPgSqlSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusPgSqlTableImplementationHandler* CFBamCustXmlLoader::getHPlusPgSqlTableImplementationHandler() {
		if( hplusPgSqlTableImplementationHandler == NULL ) {
			hplusPgSqlTableImplementationHandler = new cfbam::CFBamCustXmlLoaderHPlusPgSqlTableImplementationHandler( this );
		}
		return( hplusPgSqlTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusPgSqlTableIncludeHandler* CFBamCustXmlLoader::getHPlusPgSqlTableIncludeHandler() {
		if( hplusPgSqlTableIncludeHandler == NULL ) {
			hplusPgSqlTableIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusPgSqlTableIncludeHandler( this );
		}
		return( hplusPgSqlTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusPgSqlTableMembersHandler* CFBamCustXmlLoader::getHPlusPgSqlTableMembersHandler() {
		if( hplusPgSqlTableMembersHandler == NULL ) {
			hplusPgSqlTableMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusPgSqlTableMembersHandler( this );
		}
		return( hplusPgSqlTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusRamSchemaObjImplHandler* CFBamCustXmlLoader::getHPlusRamSchemaObjImplHandler() {
		if( hplusRamSchemaObjImplHandler == NULL ) {
			hplusRamSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderHPlusRamSchemaObjImplHandler( this );
		}
		return( hplusRamSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusRamSchemaObjIncludeHandler* CFBamCustXmlLoader::getHPlusRamSchemaObjIncludeHandler() {
		if( hplusRamSchemaObjIncludeHandler == NULL ) {
			hplusRamSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusRamSchemaObjIncludeHandler( this );
		}
		return( hplusRamSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusRamSchemaObjMembersHandler* CFBamCustXmlLoader::getHPlusRamSchemaObjMembersHandler() {
		if( hplusRamSchemaObjMembersHandler == NULL ) {
			hplusRamSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusRamSchemaObjMembersHandler( this );
		}
		return( hplusRamSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusRamTableImplementationHandler* CFBamCustXmlLoader::getHPlusRamTableImplementationHandler() {
		if( hplusRamTableImplementationHandler == NULL ) {
			hplusRamTableImplementationHandler = new cfbam::CFBamCustXmlLoaderHPlusRamTableImplementationHandler( this );
		}
		return( hplusRamTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusRamTableIncludeHandler* CFBamCustXmlLoader::getHPlusRamTableIncludeHandler() {
		if( hplusRamTableIncludeHandler == NULL ) {
			hplusRamTableIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusRamTableIncludeHandler( this );
		}
		return( hplusRamTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusRamTableMembersHandler* CFBamCustXmlLoader::getHPlusRamTableMembersHandler() {
		if( hplusRamTableMembersHandler == NULL ) {
			hplusRamTableMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusRamTableMembersHandler( this );
		}
		return( hplusRamTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusSchemaObjImplementationHandler* CFBamCustXmlLoader::getHPlusSchemaObjImplementationHandler() {
		if( hplusSchemaObjImplementationHandler == NULL ) {
			hplusSchemaObjImplementationHandler = new cfbam::CFBamCustXmlLoaderHPlusSchemaObjImplementationHandler( this );
		}
		return( hplusSchemaObjImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusSchemaObjIncludeHandler* CFBamCustXmlLoader::getHPlusSchemaObjIncludeHandler() {
		if( hplusSchemaObjIncludeHandler == NULL ) {
			hplusSchemaObjIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusSchemaObjIncludeHandler( this );
		}
		return( hplusSchemaObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusSchemaObjInterfaceHandler* CFBamCustXmlLoader::getHPlusSchemaObjInterfaceHandler() {
		if( hplusSchemaObjInterfaceHandler == NULL ) {
			hplusSchemaObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderHPlusSchemaObjInterfaceHandler( this );
		}
		return( hplusSchemaObjInterfaceHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusSchemaObjMembersHandler* CFBamCustXmlLoader::getHPlusSchemaObjMembersHandler() {
		if( hplusSchemaObjMembersHandler == NULL ) {
			hplusSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusSchemaObjMembersHandler( this );
		}
		return( hplusSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusTableImplementationHandler* CFBamCustXmlLoader::getHPlusTableImplementationHandler() {
		if( hplusTableImplementationHandler == NULL ) {
			hplusTableImplementationHandler = new cfbam::CFBamCustXmlLoaderHPlusTableImplementationHandler( this );
		}
		return( hplusTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusTableIncludeHandler* CFBamCustXmlLoader::getHPlusTableIncludeHandler() {
		if( hplusTableIncludeHandler == NULL ) {
			hplusTableIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusTableIncludeHandler( this );
		}
		return( hplusTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusTableInterfaceHandler* CFBamCustXmlLoader::getHPlusTableInterfaceHandler() {
		if( hplusTableInterfaceHandler == NULL ) {
			hplusTableInterfaceHandler = new cfbam::CFBamCustXmlLoaderHPlusTableInterfaceHandler( this );
		}
		return( hplusTableInterfaceHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusTableMembersHandler* CFBamCustXmlLoader::getHPlusTableMembersHandler() {
		if( hplusTableMembersHandler == NULL ) {
			hplusTableMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusTableMembersHandler( this );
		}
		return( hplusTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusTableObjImplementationHandler* CFBamCustXmlLoader::getHPlusTableObjImplementationHandler() {
		if( hplusTableObjImplementationHandler == NULL ) {
			hplusTableObjImplementationHandler = new cfbam::CFBamCustXmlLoaderHPlusTableObjImplementationHandler( this );
		}
		return( hplusTableObjImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusTableObjIncludeHandler* CFBamCustXmlLoader::getHPlusTableObjIncludeHandler() {
		if( hplusTableObjIncludeHandler == NULL ) {
			hplusTableObjIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusTableObjIncludeHandler( this );
		}
		return( hplusTableObjIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusTableObjInterfaceHandler* CFBamCustXmlLoader::getHPlusTableObjInterfaceHandler() {
		if( hplusTableObjInterfaceHandler == NULL ) {
			hplusTableObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderHPlusTableObjInterfaceHandler( this );
		}
		return( hplusTableObjInterfaceHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusTableObjMembersHandler* CFBamCustXmlLoader::getHPlusTableObjMembersHandler() {
		if( hplusTableObjMembersHandler == NULL ) {
			hplusTableObjMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusTableObjMembersHandler( this );
		}
		return( hplusTableObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgClientSchemaBodyHandler* CFBamCustXmlLoader::getHPlusXMsgClientSchemaBodyHandler() {
		if( hplusXMsgClientSchemaBodyHandler == NULL ) {
			hplusXMsgClientSchemaBodyHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgClientSchemaBodyHandler( this );
		}
		return( hplusXMsgClientSchemaBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgClientSchemaIncludeHandler* CFBamCustXmlLoader::getHPlusXMsgClientSchemaIncludeHandler() {
		if( hplusXMsgClientSchemaIncludeHandler == NULL ) {
			hplusXMsgClientSchemaIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgClientSchemaIncludeHandler( this );
		}
		return( hplusXMsgClientSchemaIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgClientTableBodyHandler* CFBamCustXmlLoader::getHPlusXMsgClientTableBodyHandler() {
		if( hplusXMsgClientTableBodyHandler == NULL ) {
			hplusXMsgClientTableBodyHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgClientTableBodyHandler( this );
		}
		return( hplusXMsgClientTableBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgClientTableIncludeHandler* CFBamCustXmlLoader::getHPlusXMsgClientTableIncludeHandler() {
		if( hplusXMsgClientTableIncludeHandler == NULL ) {
			hplusXMsgClientTableIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgClientTableIncludeHandler( this );
		}
		return( hplusXMsgClientTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRqstSchemaBodyHandler* CFBamCustXmlLoader::getHPlusXMsgRqstSchemaBodyHandler() {
		if( hplusXMsgRqstSchemaBodyHandler == NULL ) {
			hplusXMsgRqstSchemaBodyHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRqstSchemaBodyHandler( this );
		}
		return( hplusXMsgRqstSchemaBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRqstSchemaIncludeHandler* CFBamCustXmlLoader::getHPlusXMsgRqstSchemaIncludeHandler() {
		if( hplusXMsgRqstSchemaIncludeHandler == NULL ) {
			hplusXMsgRqstSchemaIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRqstSchemaIncludeHandler( this );
		}
		return( hplusXMsgRqstSchemaIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRqstSchemaWireParsersHandler* CFBamCustXmlLoader::getHPlusXMsgRqstSchemaWireParsersHandler() {
		if( hplusXMsgRqstSchemaWireParsersHandler == NULL ) {
			hplusXMsgRqstSchemaWireParsersHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRqstSchemaWireParsersHandler( this );
		}
		return( hplusXMsgRqstSchemaWireParsersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRqstSchemaXsdElementListHandler* CFBamCustXmlLoader::getHPlusXMsgRqstSchemaXsdElementListHandler() {
		if( hplusXMsgRqstSchemaXsdElementListHandler == NULL ) {
			hplusXMsgRqstSchemaXsdElementListHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRqstSchemaXsdElementListHandler( this );
		}
		return( hplusXMsgRqstSchemaXsdElementListHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRqstSchemaXsdSpecHandler* CFBamCustXmlLoader::getHPlusXMsgRqstSchemaXsdSpecHandler() {
		if( hplusXMsgRqstSchemaXsdSpecHandler == NULL ) {
			hplusXMsgRqstSchemaXsdSpecHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRqstSchemaXsdSpecHandler( this );
		}
		return( hplusXMsgRqstSchemaXsdSpecHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRqstTableBodyHandler* CFBamCustXmlLoader::getHPlusXMsgRqstTableBodyHandler() {
		if( hplusXMsgRqstTableBodyHandler == NULL ) {
			hplusXMsgRqstTableBodyHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRqstTableBodyHandler( this );
		}
		return( hplusXMsgRqstTableBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRqstTableIncludeHandler* CFBamCustXmlLoader::getHPlusXMsgRqstTableIncludeHandler() {
		if( hplusXMsgRqstTableIncludeHandler == NULL ) {
			hplusXMsgRqstTableIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRqstTableIncludeHandler( this );
		}
		return( hplusXMsgRqstTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRspnSchemaBodyHandler* CFBamCustXmlLoader::getHPlusXMsgRspnSchemaBodyHandler() {
		if( hplusXMsgRspnSchemaBodyHandler == NULL ) {
			hplusXMsgRspnSchemaBodyHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRspnSchemaBodyHandler( this );
		}
		return( hplusXMsgRspnSchemaBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRspnSchemaIncludeHandler* CFBamCustXmlLoader::getHPlusXMsgRspnSchemaIncludeHandler() {
		if( hplusXMsgRspnSchemaIncludeHandler == NULL ) {
			hplusXMsgRspnSchemaIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRspnSchemaIncludeHandler( this );
		}
		return( hplusXMsgRspnSchemaIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRspnSchemaWireParsersHandler* CFBamCustXmlLoader::getHPlusXMsgRspnSchemaWireParsersHandler() {
		if( hplusXMsgRspnSchemaWireParsersHandler == NULL ) {
			hplusXMsgRspnSchemaWireParsersHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRspnSchemaWireParsersHandler( this );
		}
		return( hplusXMsgRspnSchemaWireParsersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRspnSchemaXsdElementListHandler* CFBamCustXmlLoader::getHPlusXMsgRspnSchemaXsdElementListHandler() {
		if( hplusXMsgRspnSchemaXsdElementListHandler == NULL ) {
			hplusXMsgRspnSchemaXsdElementListHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRspnSchemaXsdElementListHandler( this );
		}
		return( hplusXMsgRspnSchemaXsdElementListHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRspnSchemaXsdSpecHandler* CFBamCustXmlLoader::getHPlusXMsgRspnSchemaXsdSpecHandler() {
		if( hplusXMsgRspnSchemaXsdSpecHandler == NULL ) {
			hplusXMsgRspnSchemaXsdSpecHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRspnSchemaXsdSpecHandler( this );
		}
		return( hplusXMsgRspnSchemaXsdSpecHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRspnTableBodyHandler* CFBamCustXmlLoader::getHPlusXMsgRspnTableBodyHandler() {
		if( hplusXMsgRspnTableBodyHandler == NULL ) {
			hplusXMsgRspnTableBodyHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRspnTableBodyHandler( this );
		}
		return( hplusXMsgRspnTableBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgRspnTableIncludeHandler* CFBamCustXmlLoader::getHPlusXMsgRspnTableIncludeHandler() {
		if( hplusXMsgRspnTableIncludeHandler == NULL ) {
			hplusXMsgRspnTableIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgRspnTableIncludeHandler( this );
		}
		return( hplusXMsgRspnTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgSchemaFormattersHandler* CFBamCustXmlLoader::getHPlusXMsgSchemaFormattersHandler() {
		if( hplusXMsgSchemaFormattersHandler == NULL ) {
			hplusXMsgSchemaFormattersHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgSchemaFormattersHandler( this );
		}
		return( hplusXMsgSchemaFormattersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgSchemaIncludeHandler* CFBamCustXmlLoader::getHPlusXMsgSchemaIncludeHandler() {
		if( hplusXMsgSchemaIncludeHandler == NULL ) {
			hplusXMsgSchemaIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgSchemaIncludeHandler( this );
		}
		return( hplusXMsgSchemaIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgTableFormattersHandler* CFBamCustXmlLoader::getHPlusXMsgTableFormattersHandler() {
		if( hplusXMsgTableFormattersHandler == NULL ) {
			hplusXMsgTableFormattersHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgTableFormattersHandler( this );
		}
		return( hplusXMsgTableFormattersHandler );
	} 

	cfbam::CFBamCustXmlLoaderHPlusXMsgTableIncludeHandler* CFBamCustXmlLoader::getHPlusXMsgTableIncludeHandler() {
		if( hplusXMsgTableIncludeHandler == NULL ) {
			hplusXMsgTableIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusXMsgTableIncludeHandler( this );
		}
		return( hplusXMsgTableIncludeHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeDb2LUWSchemaObjImplHandler* CFBamCustXmlLoader::getCafeDb2LUWSchemaObjImplHandler() {
		if( cafeDb2LUWSchemaObjImplHandler == NULL ) {
			cafeDb2LUWSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCafeDb2LUWSchemaObjImplHandler( this );
		}
		return( cafeDb2LUWSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeDb2LUWSchemaObjImportHandler* CFBamCustXmlLoader::getCafeDb2LUWSchemaObjImportHandler() {
		if( cafeDb2LUWSchemaObjImportHandler == NULL ) {
			cafeDb2LUWSchemaObjImportHandler = new cfbam::CFBamCustXmlLoaderCafeDb2LUWSchemaObjImportHandler( this );
		}
		return( cafeDb2LUWSchemaObjImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeDb2LUWSchemaObjMembersHandler* CFBamCustXmlLoader::getCafeDb2LUWSchemaObjMembersHandler() {
		if( cafeDb2LUWSchemaObjMembersHandler == NULL ) {
			cafeDb2LUWSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCafeDb2LUWSchemaObjMembersHandler( this );
		}
		return( cafeDb2LUWSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeDb2LUWTableImplementationHandler* CFBamCustXmlLoader::getCafeDb2LUWTableImplementationHandler() {
		if( cafeDb2LUWTableImplementationHandler == NULL ) {
			cafeDb2LUWTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCafeDb2LUWTableImplementationHandler( this );
		}
		return( cafeDb2LUWTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeDb2LUWTableImportHandler* CFBamCustXmlLoader::getCafeDb2LUWTableImportHandler() {
		if( cafeDb2LUWTableImportHandler == NULL ) {
			cafeDb2LUWTableImportHandler = new cfbam::CFBamCustXmlLoaderCafeDb2LUWTableImportHandler( this );
		}
		return( cafeDb2LUWTableImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeDb2LUWTableMembersHandler* CFBamCustXmlLoader::getCafeDb2LUWTableMembersHandler() {
		if( cafeDb2LUWTableMembersHandler == NULL ) {
			cafeDb2LUWTableMembersHandler = new cfbam::CFBamCustXmlLoaderCafeDb2LUWTableMembersHandler( this );
		}
		return( cafeDb2LUWTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMSSqlSchemaObjImplHandler* CFBamCustXmlLoader::getCafeMSSqlSchemaObjImplHandler() {
		if( cafeMSSqlSchemaObjImplHandler == NULL ) {
			cafeMSSqlSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCafeMSSqlSchemaObjImplHandler( this );
		}
		return( cafeMSSqlSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMSSqlSchemaObjImportHandler* CFBamCustXmlLoader::getCafeMSSqlSchemaObjImportHandler() {
		if( cafeMSSqlSchemaObjImportHandler == NULL ) {
			cafeMSSqlSchemaObjImportHandler = new cfbam::CFBamCustXmlLoaderCafeMSSqlSchemaObjImportHandler( this );
		}
		return( cafeMSSqlSchemaObjImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMSSqlSchemaObjMembersHandler* CFBamCustXmlLoader::getCafeMSSqlSchemaObjMembersHandler() {
		if( cafeMSSqlSchemaObjMembersHandler == NULL ) {
			cafeMSSqlSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCafeMSSqlSchemaObjMembersHandler( this );
		}
		return( cafeMSSqlSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMSSqlTableImplementationHandler* CFBamCustXmlLoader::getCafeMSSqlTableImplementationHandler() {
		if( cafeMSSqlTableImplementationHandler == NULL ) {
			cafeMSSqlTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCafeMSSqlTableImplementationHandler( this );
		}
		return( cafeMSSqlTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMSSqlTableImportHandler* CFBamCustXmlLoader::getCafeMSSqlTableImportHandler() {
		if( cafeMSSqlTableImportHandler == NULL ) {
			cafeMSSqlTableImportHandler = new cfbam::CFBamCustXmlLoaderCafeMSSqlTableImportHandler( this );
		}
		return( cafeMSSqlTableImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMSSqlTableMembersHandler* CFBamCustXmlLoader::getCafeMSSqlTableMembersHandler() {
		if( cafeMSSqlTableMembersHandler == NULL ) {
			cafeMSSqlTableMembersHandler = new cfbam::CFBamCustXmlLoaderCafeMSSqlTableMembersHandler( this );
		}
		return( cafeMSSqlTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMethodBodyHandler* CFBamCustXmlLoader::getCafeMethodBodyHandler() {
		if( cafeMethodBodyHandler == NULL ) {
			cafeMethodBodyHandler = new cfbam::CFBamCustXmlLoaderCafeMethodBodyHandler( this );
		}
		return( cafeMethodBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMySqlSchemaObjImplHandler* CFBamCustXmlLoader::getCafeMySqlSchemaObjImplHandler() {
		if( cafeMySqlSchemaObjImplHandler == NULL ) {
			cafeMySqlSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCafeMySqlSchemaObjImplHandler( this );
		}
		return( cafeMySqlSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMySqlSchemaObjImportHandler* CFBamCustXmlLoader::getCafeMySqlSchemaObjImportHandler() {
		if( cafeMySqlSchemaObjImportHandler == NULL ) {
			cafeMySqlSchemaObjImportHandler = new cfbam::CFBamCustXmlLoaderCafeMySqlSchemaObjImportHandler( this );
		}
		return( cafeMySqlSchemaObjImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMySqlSchemaObjMembersHandler* CFBamCustXmlLoader::getCafeMySqlSchemaObjMembersHandler() {
		if( cafeMySqlSchemaObjMembersHandler == NULL ) {
			cafeMySqlSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCafeMySqlSchemaObjMembersHandler( this );
		}
		return( cafeMySqlSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMySqlTableImplementationHandler* CFBamCustXmlLoader::getCafeMySqlTableImplementationHandler() {
		if( cafeMySqlTableImplementationHandler == NULL ) {
			cafeMySqlTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCafeMySqlTableImplementationHandler( this );
		}
		return( cafeMySqlTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMySqlTableImportHandler* CFBamCustXmlLoader::getCafeMySqlTableImportHandler() {
		if( cafeMySqlTableImportHandler == NULL ) {
			cafeMySqlTableImportHandler = new cfbam::CFBamCustXmlLoaderCafeMySqlTableImportHandler( this );
		}
		return( cafeMySqlTableImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeMySqlTableMembersHandler* CFBamCustXmlLoader::getCafeMySqlTableMembersHandler() {
		if( cafeMySqlTableMembersHandler == NULL ) {
			cafeMySqlTableMembersHandler = new cfbam::CFBamCustXmlLoaderCafeMySqlTableMembersHandler( this );
		}
		return( cafeMySqlTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeOracleSchemaObjImplHandler* CFBamCustXmlLoader::getCafeOracleSchemaObjImplHandler() {
		if( cafeOracleSchemaObjImplHandler == NULL ) {
			cafeOracleSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCafeOracleSchemaObjImplHandler( this );
		}
		return( cafeOracleSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeOracleSchemaObjImportHandler* CFBamCustXmlLoader::getCafeOracleSchemaObjImportHandler() {
		if( cafeOracleSchemaObjImportHandler == NULL ) {
			cafeOracleSchemaObjImportHandler = new cfbam::CFBamCustXmlLoaderCafeOracleSchemaObjImportHandler( this );
		}
		return( cafeOracleSchemaObjImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeOracleSchemaObjMembersHandler* CFBamCustXmlLoader::getCafeOracleSchemaObjMembersHandler() {
		if( cafeOracleSchemaObjMembersHandler == NULL ) {
			cafeOracleSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCafeOracleSchemaObjMembersHandler( this );
		}
		return( cafeOracleSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeOracleTableImplementationHandler* CFBamCustXmlLoader::getCafeOracleTableImplementationHandler() {
		if( cafeOracleTableImplementationHandler == NULL ) {
			cafeOracleTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCafeOracleTableImplementationHandler( this );
		}
		return( cafeOracleTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeOracleTableImportHandler* CFBamCustXmlLoader::getCafeOracleTableImportHandler() {
		if( cafeOracleTableImportHandler == NULL ) {
			cafeOracleTableImportHandler = new cfbam::CFBamCustXmlLoaderCafeOracleTableImportHandler( this );
		}
		return( cafeOracleTableImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeOracleTableMembersHandler* CFBamCustXmlLoader::getCafeOracleTableMembersHandler() {
		if( cafeOracleTableMembersHandler == NULL ) {
			cafeOracleTableMembersHandler = new cfbam::CFBamCustXmlLoaderCafeOracleTableMembersHandler( this );
		}
		return( cafeOracleTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafePgSqlSchemaObjImplHandler* CFBamCustXmlLoader::getCafePgSqlSchemaObjImplHandler() {
		if( cafePgSqlSchemaObjImplHandler == NULL ) {
			cafePgSqlSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCafePgSqlSchemaObjImplHandler( this );
		}
		return( cafePgSqlSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafePgSqlSchemaObjImportHandler* CFBamCustXmlLoader::getCafePgSqlSchemaObjImportHandler() {
		if( cafePgSqlSchemaObjImportHandler == NULL ) {
			cafePgSqlSchemaObjImportHandler = new cfbam::CFBamCustXmlLoaderCafePgSqlSchemaObjImportHandler( this );
		}
		return( cafePgSqlSchemaObjImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafePgSqlSchemaObjMembersHandler* CFBamCustXmlLoader::getCafePgSqlSchemaObjMembersHandler() {
		if( cafePgSqlSchemaObjMembersHandler == NULL ) {
			cafePgSqlSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCafePgSqlSchemaObjMembersHandler( this );
		}
		return( cafePgSqlSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafePgSqlTableImplementationHandler* CFBamCustXmlLoader::getCafePgSqlTableImplementationHandler() {
		if( cafePgSqlTableImplementationHandler == NULL ) {
			cafePgSqlTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCafePgSqlTableImplementationHandler( this );
		}
		return( cafePgSqlTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafePgSqlTableImportHandler* CFBamCustXmlLoader::getCafePgSqlTableImportHandler() {
		if( cafePgSqlTableImportHandler == NULL ) {
			cafePgSqlTableImportHandler = new cfbam::CFBamCustXmlLoaderCafePgSqlTableImportHandler( this );
		}
		return( cafePgSqlTableImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafePgSqlTableMembersHandler* CFBamCustXmlLoader::getCafePgSqlTableMembersHandler() {
		if( cafePgSqlTableMembersHandler == NULL ) {
			cafePgSqlTableMembersHandler = new cfbam::CFBamCustXmlLoaderCafePgSqlTableMembersHandler( this );
		}
		return( cafePgSqlTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeRamSchemaObjImplHandler* CFBamCustXmlLoader::getCafeRamSchemaObjImplHandler() {
		if( cafeRamSchemaObjImplHandler == NULL ) {
			cafeRamSchemaObjImplHandler = new cfbam::CFBamCustXmlLoaderCafeRamSchemaObjImplHandler( this );
		}
		return( cafeRamSchemaObjImplHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeRamSchemaObjImportHandler* CFBamCustXmlLoader::getCafeRamSchemaObjImportHandler() {
		if( cafeRamSchemaObjImportHandler == NULL ) {
			cafeRamSchemaObjImportHandler = new cfbam::CFBamCustXmlLoaderCafeRamSchemaObjImportHandler( this );
		}
		return( cafeRamSchemaObjImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeRamSchemaObjMembersHandler* CFBamCustXmlLoader::getCafeRamSchemaObjMembersHandler() {
		if( cafeRamSchemaObjMembersHandler == NULL ) {
			cafeRamSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCafeRamSchemaObjMembersHandler( this );
		}
		return( cafeRamSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeRamTableImplementationHandler* CFBamCustXmlLoader::getCafeRamTableImplementationHandler() {
		if( cafeRamTableImplementationHandler == NULL ) {
			cafeRamTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCafeRamTableImplementationHandler( this );
		}
		return( cafeRamTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeRamTableImportHandler* CFBamCustXmlLoader::getCafeRamTableImportHandler() {
		if( cafeRamTableImportHandler == NULL ) {
			cafeRamTableImportHandler = new cfbam::CFBamCustXmlLoaderCafeRamTableImportHandler( this );
		}
		return( cafeRamTableImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeRamTableMembersHandler* CFBamCustXmlLoader::getCafeRamTableMembersHandler() {
		if( cafeRamTableMembersHandler == NULL ) {
			cafeRamTableMembersHandler = new cfbam::CFBamCustXmlLoaderCafeRamTableMembersHandler( this );
		}
		return( cafeRamTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeSchemaObjImplementationHandler* CFBamCustXmlLoader::getCafeSchemaObjImplementationHandler() {
		if( cafeSchemaObjImplementationHandler == NULL ) {
			cafeSchemaObjImplementationHandler = new cfbam::CFBamCustXmlLoaderCafeSchemaObjImplementationHandler( this );
		}
		return( cafeSchemaObjImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeSchemaObjImportHandler* CFBamCustXmlLoader::getCafeSchemaObjImportHandler() {
		if( cafeSchemaObjImportHandler == NULL ) {
			cafeSchemaObjImportHandler = new cfbam::CFBamCustXmlLoaderCafeSchemaObjImportHandler( this );
		}
		return( cafeSchemaObjImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeSchemaObjInterfaceHandler* CFBamCustXmlLoader::getCafeSchemaObjInterfaceHandler() {
		if( cafeSchemaObjInterfaceHandler == NULL ) {
			cafeSchemaObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderCafeSchemaObjInterfaceHandler( this );
		}
		return( cafeSchemaObjInterfaceHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeSchemaObjMembersHandler* CFBamCustXmlLoader::getCafeSchemaObjMembersHandler() {
		if( cafeSchemaObjMembersHandler == NULL ) {
			cafeSchemaObjMembersHandler = new cfbam::CFBamCustXmlLoaderCafeSchemaObjMembersHandler( this );
		}
		return( cafeSchemaObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeTableImplementationHandler* CFBamCustXmlLoader::getCafeTableImplementationHandler() {
		if( cafeTableImplementationHandler == NULL ) {
			cafeTableImplementationHandler = new cfbam::CFBamCustXmlLoaderCafeTableImplementationHandler( this );
		}
		return( cafeTableImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeTableImportHandler* CFBamCustXmlLoader::getCafeTableImportHandler() {
		if( cafeTableImportHandler == NULL ) {
			cafeTableImportHandler = new cfbam::CFBamCustXmlLoaderCafeTableImportHandler( this );
		}
		return( cafeTableImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeTableInterfaceHandler* CFBamCustXmlLoader::getCafeTableInterfaceHandler() {
		if( cafeTableInterfaceHandler == NULL ) {
			cafeTableInterfaceHandler = new cfbam::CFBamCustXmlLoaderCafeTableInterfaceHandler( this );
		}
		return( cafeTableInterfaceHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeTableMembersHandler* CFBamCustXmlLoader::getCafeTableMembersHandler() {
		if( cafeTableMembersHandler == NULL ) {
			cafeTableMembersHandler = new cfbam::CFBamCustXmlLoaderCafeTableMembersHandler( this );
		}
		return( cafeTableMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeTableObjImplementationHandler* CFBamCustXmlLoader::getCafeTableObjImplementationHandler() {
		if( cafeTableObjImplementationHandler == NULL ) {
			cafeTableObjImplementationHandler = new cfbam::CFBamCustXmlLoaderCafeTableObjImplementationHandler( this );
		}
		return( cafeTableObjImplementationHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeTableObjImportHandler* CFBamCustXmlLoader::getCafeTableObjImportHandler() {
		if( cafeTableObjImportHandler == NULL ) {
			cafeTableObjImportHandler = new cfbam::CFBamCustXmlLoaderCafeTableObjImportHandler( this );
		}
		return( cafeTableObjImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeTableObjInterfaceHandler* CFBamCustXmlLoader::getCafeTableObjInterfaceHandler() {
		if( cafeTableObjInterfaceHandler == NULL ) {
			cafeTableObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderCafeTableObjInterfaceHandler( this );
		}
		return( cafeTableObjInterfaceHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeTableObjMembersHandler* CFBamCustXmlLoader::getCafeTableObjMembersHandler() {
		if( cafeTableObjMembersHandler == NULL ) {
			cafeTableObjMembersHandler = new cfbam::CFBamCustXmlLoaderCafeTableObjMembersHandler( this );
		}
		return( cafeTableObjMembersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgClientSchemaBodyHandler* CFBamCustXmlLoader::getCafeXMsgClientSchemaBodyHandler() {
		if( cafeXMsgClientSchemaBodyHandler == NULL ) {
			cafeXMsgClientSchemaBodyHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgClientSchemaBodyHandler( this );
		}
		return( cafeXMsgClientSchemaBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgClientSchemaImportHandler* CFBamCustXmlLoader::getCafeXMsgClientSchemaImportHandler() {
		if( cafeXMsgClientSchemaImportHandler == NULL ) {
			cafeXMsgClientSchemaImportHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgClientSchemaImportHandler( this );
		}
		return( cafeXMsgClientSchemaImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgClientTableBodyHandler* CFBamCustXmlLoader::getCafeXMsgClientTableBodyHandler() {
		if( cafeXMsgClientTableBodyHandler == NULL ) {
			cafeXMsgClientTableBodyHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgClientTableBodyHandler( this );
		}
		return( cafeXMsgClientTableBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgClientTableImportHandler* CFBamCustXmlLoader::getCafeXMsgClientTableImportHandler() {
		if( cafeXMsgClientTableImportHandler == NULL ) {
			cafeXMsgClientTableImportHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgClientTableImportHandler( this );
		}
		return( cafeXMsgClientTableImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRqstSchemaBodyHandler* CFBamCustXmlLoader::getCafeXMsgRqstSchemaBodyHandler() {
		if( cafeXMsgRqstSchemaBodyHandler == NULL ) {
			cafeXMsgRqstSchemaBodyHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRqstSchemaBodyHandler( this );
		}
		return( cafeXMsgRqstSchemaBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRqstSchemaImportHandler* CFBamCustXmlLoader::getCafeXMsgRqstSchemaImportHandler() {
		if( cafeXMsgRqstSchemaImportHandler == NULL ) {
			cafeXMsgRqstSchemaImportHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRqstSchemaImportHandler( this );
		}
		return( cafeXMsgRqstSchemaImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRqstSchemaWireParsersHandler* CFBamCustXmlLoader::getCafeXMsgRqstSchemaWireParsersHandler() {
		if( cafeXMsgRqstSchemaWireParsersHandler == NULL ) {
			cafeXMsgRqstSchemaWireParsersHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRqstSchemaWireParsersHandler( this );
		}
		return( cafeXMsgRqstSchemaWireParsersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRqstSchemaXsdElementListHandler* CFBamCustXmlLoader::getCafeXMsgRqstSchemaXsdElementListHandler() {
		if( cafeXMsgRqstSchemaXsdElementListHandler == NULL ) {
			cafeXMsgRqstSchemaXsdElementListHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRqstSchemaXsdElementListHandler( this );
		}
		return( cafeXMsgRqstSchemaXsdElementListHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRqstSchemaXsdSpecHandler* CFBamCustXmlLoader::getCafeXMsgRqstSchemaXsdSpecHandler() {
		if( cafeXMsgRqstSchemaXsdSpecHandler == NULL ) {
			cafeXMsgRqstSchemaXsdSpecHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRqstSchemaXsdSpecHandler( this );
		}
		return( cafeXMsgRqstSchemaXsdSpecHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRqstTableBodyHandler* CFBamCustXmlLoader::getCafeXMsgRqstTableBodyHandler() {
		if( cafeXMsgRqstTableBodyHandler == NULL ) {
			cafeXMsgRqstTableBodyHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRqstTableBodyHandler( this );
		}
		return( cafeXMsgRqstTableBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRqstTableImportHandler* CFBamCustXmlLoader::getCafeXMsgRqstTableImportHandler() {
		if( cafeXMsgRqstTableImportHandler == NULL ) {
			cafeXMsgRqstTableImportHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRqstTableImportHandler( this );
		}
		return( cafeXMsgRqstTableImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRspnSchemaBodyHandler* CFBamCustXmlLoader::getCafeXMsgRspnSchemaBodyHandler() {
		if( cafeXMsgRspnSchemaBodyHandler == NULL ) {
			cafeXMsgRspnSchemaBodyHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRspnSchemaBodyHandler( this );
		}
		return( cafeXMsgRspnSchemaBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRspnSchemaImportHandler* CFBamCustXmlLoader::getCafeXMsgRspnSchemaImportHandler() {
		if( cafeXMsgRspnSchemaImportHandler == NULL ) {
			cafeXMsgRspnSchemaImportHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRspnSchemaImportHandler( this );
		}
		return( cafeXMsgRspnSchemaImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRspnSchemaWireParsersHandler* CFBamCustXmlLoader::getCafeXMsgRspnSchemaWireParsersHandler() {
		if( cafeXMsgRspnSchemaWireParsersHandler == NULL ) {
			cafeXMsgRspnSchemaWireParsersHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRspnSchemaWireParsersHandler( this );
		}
		return( cafeXMsgRspnSchemaWireParsersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRspnSchemaXsdElementListHandler* CFBamCustXmlLoader::getCafeXMsgRspnSchemaXsdElementListHandler() {
		if( cafeXMsgRspnSchemaXsdElementListHandler == NULL ) {
			cafeXMsgRspnSchemaXsdElementListHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRspnSchemaXsdElementListHandler( this );
		}
		return( cafeXMsgRspnSchemaXsdElementListHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRspnSchemaXsdSpecHandler* CFBamCustXmlLoader::getCafeXMsgRspnSchemaXsdSpecHandler() {
		if( cafeXMsgRspnSchemaXsdSpecHandler == NULL ) {
			cafeXMsgRspnSchemaXsdSpecHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRspnSchemaXsdSpecHandler( this );
		}
		return( cafeXMsgRspnSchemaXsdSpecHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRspnTableBodyHandler* CFBamCustXmlLoader::getCafeXMsgRspnTableBodyHandler() {
		if( cafeXMsgRspnTableBodyHandler == NULL ) {
			cafeXMsgRspnTableBodyHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRspnTableBodyHandler( this );
		}
		return( cafeXMsgRspnTableBodyHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgRspnTableImportHandler* CFBamCustXmlLoader::getCafeXMsgRspnTableImportHandler() {
		if( cafeXMsgRspnTableImportHandler == NULL ) {
			cafeXMsgRspnTableImportHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgRspnTableImportHandler( this );
		}
		return( cafeXMsgRspnTableImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgSchemaFormattersHandler* CFBamCustXmlLoader::getCafeXMsgSchemaFormattersHandler() {
		if( cafeXMsgSchemaFormattersHandler == NULL ) {
			cafeXMsgSchemaFormattersHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgSchemaFormattersHandler( this );
		}
		return( cafeXMsgSchemaFormattersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgSchemaImportHandler* CFBamCustXmlLoader::getCafeXMsgSchemaImportHandler() {
		if( cafeXMsgSchemaImportHandler == NULL ) {
			cafeXMsgSchemaImportHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgSchemaImportHandler( this );
		}
		return( cafeXMsgSchemaImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgTableFormattersHandler* CFBamCustXmlLoader::getCafeXMsgTableFormattersHandler() {
		if( cafeXMsgTableFormattersHandler == NULL ) {
			cafeXMsgTableFormattersHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgTableFormattersHandler( this );
		}
		return( cafeXMsgTableFormattersHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeXMsgTableImportHandler* CFBamCustXmlLoader::getCafeXMsgTableImportHandler() {
		if( cafeXMsgTableImportHandler == NULL ) {
			cafeXMsgTableImportHandler = new cfbam::CFBamCustXmlLoaderCafeXMsgTableImportHandler( this );
		}
		return( cafeXMsgTableImportHandler );
	} 

	cfbam::CFBamCustXmlLoaderCafeObjImplementationHandler* CFBamCustXmlLoader::getCafeObjImplementationHandler() {
		if( cafeObjImplementationHandler == NULL ) {
			cafeObjImplementationHandler = new cfbam::CFBamCustXmlLoaderCafeObjImplementationHandler( this );
		}
		return( cafeObjImplementationHandler );
	}

	cfbam::CFBamCustXmlLoaderCafeObjImportHandler* CFBamCustXmlLoader::getCafeObjImportHandler() {
		if( cafeObjImportHandler == NULL ) {
			cafeObjImportHandler = new cfbam::CFBamCustXmlLoaderCafeObjImportHandler( this );
		}
		return( cafeObjImportHandler );
	}

	cfbam::CFBamCustXmlLoaderCafeObjInterfaceHandler* CFBamCustXmlLoader::getCafeObjInterfaceHandler() {
		if( cafeObjInterfaceHandler == NULL ) {
			cafeObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderCafeObjInterfaceHandler( this );
		}
		return( cafeObjInterfaceHandler );
	}

	cfbam::CFBamCustXmlLoaderCafeObjMembersHandler* CFBamCustXmlLoader::getCafeObjMembersHandler() {
		if( cafeObjMembersHandler == NULL ) {
			cafeObjMembersHandler = new cfbam::CFBamCustXmlLoaderCafeObjMembersHandler( this );
		}
		return( cafeObjMembersHandler );
	}

	cfbam::CFBamCustXmlLoaderCafeEditObjImplementationHandler* CFBamCustXmlLoader::getCafeEditObjImplementationHandler() {
		if( cafeEditObjImplementationHandler == NULL ) {
			cafeEditObjImplementationHandler = new cfbam::CFBamCustXmlLoaderCafeEditObjImplementationHandler( this );
		}
		return( cafeEditObjImplementationHandler );
	}

	cfbam::CFBamCustXmlLoaderCafeEditObjImportHandler* CFBamCustXmlLoader::getCafeEditObjImportHandler() {
		if( cafeEditObjImportHandler == NULL ) {
			cafeEditObjImportHandler = new cfbam::CFBamCustXmlLoaderCafeEditObjImportHandler( this );
		}
		return( cafeEditObjImportHandler );
	}

	cfbam::CFBamCustXmlLoaderCafeEditObjInterfaceHandler* CFBamCustXmlLoader::getCafeEditObjInterfaceHandler() {
		if( cafeEditObjInterfaceHandler == NULL ) {
			cafeEditObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderCafeEditObjInterfaceHandler( this );
		}
		return( cafeEditObjInterfaceHandler );
	}

	cfbam::CFBamCustXmlLoaderCafeEditObjMembersHandler* CFBamCustXmlLoader::getCafeEditObjMembersHandler() {
		if( cafeEditObjMembersHandler == NULL ) {
			cafeEditObjMembersHandler = new cfbam::CFBamCustXmlLoaderCafeEditObjMembersHandler( this );
		}
		return( cafeEditObjMembersHandler );
	}

	cfbam::CFBamCustXmlLoaderCPlusObjImplementationHandler* CFBamCustXmlLoader::getCPlusObjImplementationHandler() {
		if( cplusObjImplementationHandler == NULL ) {
			cplusObjImplementationHandler = new cfbam::CFBamCustXmlLoaderCPlusObjImplementationHandler( this );
		}
		return( cplusObjImplementationHandler );
	}

	cfbam::CFBamCustXmlLoaderCPlusObjIncludeHandler* CFBamCustXmlLoader::getCPlusObjIncludeHandler() {
		if( cplusObjIncludeHandler == NULL ) {
			cplusObjIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusObjIncludeHandler( this );
		}
		return( cplusObjIncludeHandler );
	}

	cfbam::CFBamCustXmlLoaderCPlusObjInterfaceHandler* CFBamCustXmlLoader::getCPlusObjInterfaceHandler() {
		if( cplusObjInterfaceHandler == NULL ) {
			cplusObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderCPlusObjInterfaceHandler( this );
		}
		return( cplusObjInterfaceHandler );
	}

	cfbam::CFBamCustXmlLoaderCPlusObjMembersHandler* CFBamCustXmlLoader::getCPlusObjMembersHandler() {
		if( cplusObjMembersHandler == NULL ) {
			cplusObjMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusObjMembersHandler( this );
		}
		return( cplusObjMembersHandler );
	}

	cfbam::CFBamCustXmlLoaderCPlusEditObjImplementationHandler* CFBamCustXmlLoader::getCPlusEditObjImplementationHandler() {
		if( cplusEditObjImplementationHandler == NULL ) {
			cplusEditObjImplementationHandler = new cfbam::CFBamCustXmlLoaderCPlusEditObjImplementationHandler( this );
		}
		return( cplusEditObjImplementationHandler );
	}

	cfbam::CFBamCustXmlLoaderCPlusEditObjIncludeHandler* CFBamCustXmlLoader::getCPlusEditObjIncludeHandler() {
		if( cplusEditObjIncludeHandler == NULL ) {
			cplusEditObjIncludeHandler = new cfbam::CFBamCustXmlLoaderCPlusEditObjIncludeHandler( this );
		}
		return( cplusEditObjIncludeHandler );
	}

	cfbam::CFBamCustXmlLoaderCPlusEditObjInterfaceHandler* CFBamCustXmlLoader::getCPlusEditObjInterfaceHandler() {
		if( cplusEditObjInterfaceHandler == NULL ) {
			cplusEditObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderCPlusEditObjInterfaceHandler( this );
		}
		return( cplusEditObjInterfaceHandler );
	}

	cfbam::CFBamCustXmlLoaderCPlusEditObjMembersHandler* CFBamCustXmlLoader::getCPlusEditObjMembersHandler() {
		if( cplusEditObjMembersHandler == NULL ) {
			cplusEditObjMembersHandler = new cfbam::CFBamCustXmlLoaderCPlusEditObjMembersHandler( this );
		}
		return( cplusEditObjMembersHandler );
	}

	cfbam::CFBamCustXmlLoaderHPlusObjImplementationHandler* CFBamCustXmlLoader::getHPlusObjImplementationHandler() {
		if( hplusObjImplementationHandler == NULL ) {
			hplusObjImplementationHandler = new cfbam::CFBamCustXmlLoaderHPlusObjImplementationHandler( this );
		}
		return( hplusObjImplementationHandler );
	}

	cfbam::CFBamCustXmlLoaderHPlusObjIncludeHandler* CFBamCustXmlLoader::getHPlusObjIncludeHandler() {
		if( hplusObjIncludeHandler == NULL ) {
			hplusObjIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusObjIncludeHandler( this );
		}
		return( hplusObjIncludeHandler );
	}

	cfbam::CFBamCustXmlLoaderHPlusObjInterfaceHandler* CFBamCustXmlLoader::getHPlusObjInterfaceHandler() {
		if( hplusObjInterfaceHandler == NULL ) {
			hplusObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderHPlusObjInterfaceHandler( this );
		}
		return( hplusObjInterfaceHandler );
	}

	cfbam::CFBamCustXmlLoaderHPlusObjMembersHandler* CFBamCustXmlLoader::getHPlusObjMembersHandler() {
		if( hplusObjMembersHandler == NULL ) {
			hplusObjMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusObjMembersHandler( this );
		}
		return( hplusObjMembersHandler );
	}

	cfbam::CFBamCustXmlLoaderHPlusEditObjImplementationHandler* CFBamCustXmlLoader::getHPlusEditObjImplementationHandler() {
		if( hplusEditObjImplementationHandler == NULL ) {
			hplusEditObjImplementationHandler = new cfbam::CFBamCustXmlLoaderHPlusEditObjImplementationHandler( this );
		}
		return( hplusEditObjImplementationHandler );
	}

	cfbam::CFBamCustXmlLoaderHPlusEditObjIncludeHandler* CFBamCustXmlLoader::getHPlusEditObjIncludeHandler() {
		if( hplusEditObjIncludeHandler == NULL ) {
			hplusEditObjIncludeHandler = new cfbam::CFBamCustXmlLoaderHPlusEditObjIncludeHandler( this );
		}
		return( hplusEditObjIncludeHandler );
	}

	cfbam::CFBamCustXmlLoaderHPlusEditObjInterfaceHandler* CFBamCustXmlLoader::getHPlusEditObjInterfaceHandler() {
		if( hplusEditObjInterfaceHandler == NULL ) {
			hplusEditObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderHPlusEditObjInterfaceHandler( this );
		}
		return( hplusEditObjInterfaceHandler );
	}

	cfbam::CFBamCustXmlLoaderHPlusEditObjMembersHandler* CFBamCustXmlLoader::getHPlusEditObjMembersHandler() {
		if( hplusEditObjMembersHandler == NULL ) {
			hplusEditObjMembersHandler = new cfbam::CFBamCustXmlLoaderHPlusEditObjMembersHandler( this );
		}
		return( hplusEditObjMembersHandler );
	}

	cfbam::CFBamCustXmlLoaderCSharpObjImplementationHandler* CFBamCustXmlLoader::getCSharpObjImplementationHandler() {
		if( csharpObjImplementationHandler == NULL ) {
			csharpObjImplementationHandler = new cfbam::CFBamCustXmlLoaderCSharpObjImplementationHandler( this );
		}
		return( csharpObjImplementationHandler );
	}

	cfbam::CFBamCustXmlLoaderCSharpObjInterfaceHandler* CFBamCustXmlLoader::getCSharpObjInterfaceHandler() {
		if( csharpObjInterfaceHandler == NULL ) {
			csharpObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderCSharpObjInterfaceHandler( this );
		}
		return( csharpObjInterfaceHandler );
	}

	cfbam::CFBamCustXmlLoaderCSharpObjMembersHandler* CFBamCustXmlLoader::getCSharpObjMembersHandler() {
		if( csharpObjMembersHandler == NULL ) {
			csharpObjMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpObjMembersHandler( this );
		}
		return( csharpObjMembersHandler );
	}

	cfbam::CFBamCustXmlLoaderCSharpObjUsingHandler* CFBamCustXmlLoader::getCSharpObjUsingHandler() {
		if( csharpObjUsingHandler == NULL ) {
			csharpObjUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpObjUsingHandler( this );
		}
		return( csharpObjUsingHandler );
	}

	cfbam::CFBamCustXmlLoaderCSharpEditObjImplementationHandler* CFBamCustXmlLoader::getCSharpEditObjImplementationHandler() {
		if( csharpEditObjImplementationHandler == NULL ) {
			csharpEditObjImplementationHandler = new cfbam::CFBamCustXmlLoaderCSharpEditObjImplementationHandler( this );
		}
		return( csharpEditObjImplementationHandler );
	}

	cfbam::CFBamCustXmlLoaderCSharpEditObjInterfaceHandler* CFBamCustXmlLoader::getCSharpEditObjInterfaceHandler() {
		if( csharpEditObjInterfaceHandler == NULL ) {
			csharpEditObjInterfaceHandler = new cfbam::CFBamCustXmlLoaderCSharpEditObjInterfaceHandler( this );
		}
		return( csharpEditObjInterfaceHandler );
	}

	cfbam::CFBamCustXmlLoaderCSharpEditObjMembersHandler* CFBamCustXmlLoader::getCSharpEditObjMembersHandler() {
		if( csharpEditObjMembersHandler == NULL ) {
			csharpEditObjMembersHandler = new cfbam::CFBamCustXmlLoaderCSharpEditObjMembersHandler( this );
		}
		return( csharpEditObjMembersHandler );
	}

	cfbam::CFBamCustXmlLoaderCSharpEditObjUsingHandler* CFBamCustXmlLoader::getCSharpEditObjUsingHandler() {
		if( csharpEditObjUsingHandler == NULL ) {
			csharpEditObjUsingHandler = new cfbam::CFBamCustXmlLoaderCSharpEditObjUsingHandler( this );
		}
		return( csharpEditObjUsingHandler );
	}

	cfbam::CFBamCustXmlLoaderRootHandler* CFBamCustXmlLoader::getSaxRootHandler() {
		if( saxRootHandler == NULL ) {
			saxRootHandler = new cfbam::CFBamCustXmlLoaderRootHandler( this );
			saxRootHandler->addElementHandler( "MSSBam", getSaxDocHandler() );
		}
		return( saxRootHandler );
	}

	cfbam::CFBamCustXmlLoaderDocHandler* CFBamCustXmlLoader::getSaxDocHandler() {
		if( saxDocHandler == NULL ) {
			saxDocHandler = new CFBamCustXmlLoaderDocHandler( this );
			saxDocHandler->addElementHandler( "Tld", getTldHandler() );
		}
		return( saxDocHandler );
	}

	void CFBamCustXmlLoader::parseFile( const std::string& url ) {
		parse( url.data() );
	}

}
