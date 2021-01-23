// Description: C++18 edit object instance implementation for CFBam SchemaDef.

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

#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamSchemaDefObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamSchemaDefEditObj.hpp>


namespace cfbam {

	const std::string CFBamSchemaDefEditObj::CLASS_NAME( "CFBamSchemaDefEditObj" );

	CFBamSchemaDefEditObj::CFBamSchemaDefEditObj( cfbam::ICFBamSchemaDefObj* argOrig )
	: ICFBamSchemaDefEditObj(),
	  CFBamScopeEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamSchemaDefEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamSchemaDefEditObj::~CFBamSchemaDefEditObj() {
	}

	const std::string& CFBamSchemaDefEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamSchemaDefEditObj::getClassCode() const {
		return( cfbam::CFBamSchemaDefBuff::CLASS_CODE );
	}

	bool CFBamSchemaDefEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamSchemaDefEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaDefEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_MinorVersionId( "MinorVersionId" );
		static const std::string S_Name( "Name" );
		static const std::string S_DbName( "DbName" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_CopyrightPeriod( "CopyrightPeriod" );
		static const std::string S_CopyrightHolder( "CopyrightHolder" );
		static const std::string S_AuthorEMail( "AuthorEMail" );
		static const std::string S_ProjectURL( "ProjectURL" );
		static const std::string S_PublishURI( "PublishURI" );
		static const std::string S_CommonLicenseCode( "CommonLicenseCode" );
		static const std::string S_CommonLicenseName( "CommonLicenseName" );
		static const std::string S_CommonLicenseText( "CommonLicenseText" );
		static const std::string S_ClientXFaceLicenseCode( "ClientXFaceLicenseCode" );
		static const std::string S_ClientXFaceLicenseName( "ClientXFaceLicenseName" );
		static const std::string S_ClientXFaceLicenseText( "ClientXFaceLicenseText" );
		static const std::string S_ClientImplLicenseCode( "ClientImplLicenseCode" );
		static const std::string S_ClientImplLicenseName( "ClientImplLicenseName" );
		static const std::string S_ClientImplLicenseText( "ClientImplLicenseText" );
		static const std::string S_ServerXFaceLicenseCode( "ServerXFaceLicenseCode" );
		static const std::string S_ServerXFaceLicenseName( "ServerXFaceLicenseName" );
		static const std::string S_ServerXFaceLicenseText( "ServerXFaceLicenseText" );
		static const std::string S_ServerImplLicenseCode( "ServerImplLicenseCode" );
		static const std::string S_ServerImplLicenseName( "ServerImplLicenseName" );
		static const std::string S_ServerImplLicenseText( "ServerImplLicenseText" );
		static const std::string S_JSchemaObjImport( "JSchemaObjImport" );
		static const std::string S_JSchemaObjInterface( "JSchemaObjInterface" );
		static const std::string S_JSchemaObjMembers( "JSchemaObjMembers" );
		static const std::string S_JSchemaObjImplementation( "JSchemaObjImplementation" );
		static const std::string S_JDb2LUWSchemaObjMembers( "JDb2LUWSchemaObjMembers" );
		static const std::string S_JDb2LUWSchemaObjImpl( "JDb2LUWSchemaObjImpl" );
		static const std::string S_JDb2LUWSchemaObjImport( "JDb2LUWSchemaObjImport" );
		static const std::string S_JMSSqlSchemaObjMembers( "JMSSqlSchemaObjMembers" );
		static const std::string S_JMSSqlSchemaObjImpl( "JMSSqlSchemaObjImpl" );
		static const std::string S_JMSSqlSchemaObjImport( "JMSSqlSchemaObjImport" );
		static const std::string S_JMySqlSchemaObjMembers( "JMySqlSchemaObjMembers" );
		static const std::string S_JMySqlSchemaObjImpl( "JMySqlSchemaObjImpl" );
		static const std::string S_JMySqlSchemaObjImport( "JMySqlSchemaObjImport" );
		static const std::string S_JOracleSchemaObjMembers( "JOracleSchemaObjMembers" );
		static const std::string S_JOracleSchemaObjImpl( "JOracleSchemaObjImpl" );
		static const std::string S_JOracleSchemaObjImport( "JOracleSchemaObjImport" );
		static const std::string S_JPgSqlSchemaObjMembers( "JPgSqlSchemaObjMembers" );
		static const std::string S_JPgSqlSchemaObjImpl( "JPgSqlSchemaObjImpl" );
		static const std::string S_JPgSqlSchemaObjImport( "JPgSqlSchemaObjImport" );
		static const std::string S_JRamSchemaObjMembers( "JRamSchemaObjMembers" );
		static const std::string S_JRamSchemaObjImpl( "JRamSchemaObjImpl" );
		static const std::string S_JRamSchemaObjImport( "JRamSchemaObjImport" );
		static const std::string S_JXMsgSchemaImport( "JXMsgSchemaImport" );
		static const std::string S_JXMsgSchemaFormatters( "JXMsgSchemaFormatters" );
		static const std::string S_JXMsgClientSchemaImport( "JXMsgClientSchemaImport" );
		static const std::string S_JXMsgClientSchemaBody( "JXMsgClientSchemaBody" );
		static const std::string S_JXMsgRqstSchemaBody( "JXMsgRqstSchemaBody" );
		static const std::string S_JXMsgRqstSchemaImport( "JXMsgRqstSchemaImport" );
		static const std::string S_JXMsgRqstSchemaWireParsers( "JXMsgRqstSchemaWireParsers" );
		static const std::string S_JXMsgRqstSchemaXsdSpec( "JXMsgRqstSchemaXsdSpec" );
		static const std::string S_JXMsgRqstSchemaXsdElementList( "JXMsgRqstSchemaXsdElementList" );
		static const std::string S_JXMsgRspnSchemaBody( "JXMsgRspnSchemaBody" );
		static const std::string S_JXMsgRspnSchemaImport( "JXMsgRspnSchemaImport" );
		static const std::string S_JXMsgRspnSchemaWireParsers( "JXMsgRspnSchemaWireParsers" );
		static const std::string S_JXMsgRspnSchemaXsdElementList( "JXMsgRspnSchemaXsdElementList" );
		static const std::string S_JXMsgRspnSchemaXsdSpec( "JXMsgRspnSchemaXsdSpec" );
		static const std::string S_CppSchemaObjInclude( "CppSchemaObjInclude" );
		static const std::string S_CppSchemaObjInterface( "CppSchemaObjInterface" );
		static const std::string S_CppSchemaObjMembers( "CppSchemaObjMembers" );
		static const std::string S_CppSchemaObjImplementation( "CppSchemaObjImplementation" );
		static const std::string S_CppDb2LUWSchemaObjMembers( "CppDb2LUWSchemaObjMembers" );
		static const std::string S_CppDb2LUWSchemaObjImpl( "CppDb2LUWSchemaObjImpl" );
		static const std::string S_CppDb2LUWSchemaObjInclude( "CppDb2LUWSchemaObjInclude" );
		static const std::string S_CppMSSqlSchemaObjMembers( "CppMSSqlSchemaObjMembers" );
		static const std::string S_CppMSSqlSchemaObjImpl( "CppMSSqlSchemaObjImpl" );
		static const std::string S_CppMSSqlSchemaObjInclude( "CppMSSqlSchemaObjInclude" );
		static const std::string S_CppMySqlSchemaObjMembers( "CppMySqlSchemaObjMembers" );
		static const std::string S_CppMySqlSchemaObjImpl( "CppMySqlSchemaObjImpl" );
		static const std::string S_CppMySqlSchemaObjInclude( "CppMySqlSchemaObjInclude" );
		static const std::string S_CppOracleSchemaObjMembers( "CppOracleSchemaObjMembers" );
		static const std::string S_CppOracleSchemaObjImpl( "CppOracleSchemaObjImpl" );
		static const std::string S_CppOracleSchemaObjInclude( "CppOracleSchemaObjInclude" );
		static const std::string S_CppPgSqlSchemaObjMembers( "CppPgSqlSchemaObjMembers" );
		static const std::string S_CppPgSqlSchemaObjImpl( "CppPgSqlSchemaObjImpl" );
		static const std::string S_CppPgSqlSchemaObjInclude( "CppPgSqlSchemaObjInclude" );
		static const std::string S_CppRamSchemaObjMembers( "CppRamSchemaObjMembers" );
		static const std::string S_CppRamSchemaObjImpl( "CppRamSchemaObjImpl" );
		static const std::string S_CppRamSchemaObjInclude( "CppRamSchemaObjInclude" );
		static const std::string S_CppXMsgSchemaInclude( "CppXMsgSchemaInclude" );
		static const std::string S_CppXMsgSchemaFormatters( "CppXMsgSchemaFormatters" );
		static const std::string S_CppXMsgClientSchemaInclude( "CppXMsgClientSchemaInclude" );
		static const std::string S_CppXMsgClientSchemaBody( "CppXMsgClientSchemaBody" );
		static const std::string S_CppXMsgRqstSchemaBody( "CppXMsgRqstSchemaBody" );
		static const std::string S_CppXMsgRqstSchemaInclude( "CppXMsgRqstSchemaInclude" );
		static const std::string S_CppXMsgRqstSchemaWireParsers( "CppXMsgRqstSchemaWireParsers" );
		static const std::string S_CppXMsgRqstSchemaXsdSpec( "CppXMsgRqstSchemaXsdSpec" );
		static const std::string S_CppXMsgRqstSchemaXsdElementList( "CppXMsgRqstSchemaXsdElementList" );
		static const std::string S_CppXMsgRspnSchemaBody( "CppXMsgRspnSchemaBody" );
		static const std::string S_CppXMsgRspnSchemaInclude( "CppXMsgRspnSchemaInclude" );
		static const std::string S_CppXMsgRspnSchemaWireParsers( "CppXMsgRspnSchemaWireParsers" );
		static const std::string S_CppXMsgRspnSchemaXsdElementList( "CppXMsgRspnSchemaXsdElementList" );
		static const std::string S_CppXMsgRspnSchemaXsdSpec( "CppXMsgRspnSchemaXsdSpec" );
		static const std::string S_HppSchemaObjInclude( "HppSchemaObjInclude" );
		static const std::string S_HppSchemaObjInterface( "HppSchemaObjInterface" );
		static const std::string S_HppSchemaObjMembers( "HppSchemaObjMembers" );
		static const std::string S_HppSchemaObjImplementation( "HppSchemaObjImplementation" );
		static const std::string S_HppDb2LUWSchemaObjMembers( "HppDb2LUWSchemaObjMembers" );
		static const std::string S_HppDb2LUWSchemaObjImpl( "HppDb2LUWSchemaObjImpl" );
		static const std::string S_HppDb2LUWSchemaObjInclude( "HppDb2LUWSchemaObjInclude" );
		static const std::string S_HppMSSqlSchemaObjMembers( "HppMSSqlSchemaObjMembers" );
		static const std::string S_HppMSSqlSchemaObjImpl( "HppMSSqlSchemaObjImpl" );
		static const std::string S_HppMSSqlSchemaObjInclude( "HppMSSqlSchemaObjInclude" );
		static const std::string S_HppMySqlSchemaObjMembers( "HppMySqlSchemaObjMembers" );
		static const std::string S_HppMySqlSchemaObjImpl( "HppMySqlSchemaObjImpl" );
		static const std::string S_HppMySqlSchemaObjInclude( "HppMySqlSchemaObjInclude" );
		static const std::string S_HppOracleSchemaObjMembers( "HppOracleSchemaObjMembers" );
		static const std::string S_HppOracleSchemaObjImpl( "HppOracleSchemaObjImpl" );
		static const std::string S_HppOracleSchemaObjInclude( "HppOracleSchemaObjInclude" );
		static const std::string S_HppPgSqlSchemaObjMembers( "HppPgSqlSchemaObjMembers" );
		static const std::string S_HppPgSqlSchemaObjImpl( "HppPgSqlSchemaObjImpl" );
		static const std::string S_HppPgSqlSchemaObjInclude( "HppPgSqlSchemaObjInclude" );
		static const std::string S_HppRamSchemaObjMembers( "HppRamSchemaObjMembers" );
		static const std::string S_HppRamSchemaObjImpl( "HppRamSchemaObjImpl" );
		static const std::string S_HppRamSchemaObjInclude( "HppRamSchemaObjInclude" );
		static const std::string S_HppXMsgSchemaInclude( "HppXMsgSchemaInclude" );
		static const std::string S_HppXMsgSchemaFormatters( "HppXMsgSchemaFormatters" );
		static const std::string S_HppXMsgClientSchemaInclude( "HppXMsgClientSchemaInclude" );
		static const std::string S_HppXMsgClientSchemaBody( "HppXMsgClientSchemaBody" );
		static const std::string S_HppXMsgRqstSchemaBody( "HppXMsgRqstSchemaBody" );
		static const std::string S_HppXMsgRqstSchemaInclude( "HppXMsgRqstSchemaInclude" );
		static const std::string S_HppXMsgRqstSchemaWireParsers( "HppXMsgRqstSchemaWireParsers" );
		static const std::string S_HppXMsgRqstSchemaXsdSpec( "HppXMsgRqstSchemaXsdSpec" );
		static const std::string S_HppXMsgRqstSchemaXsdElementList( "HppXMsgRqstSchemaXsdElementList" );
		static const std::string S_HppXMsgRspnSchemaBody( "HppXMsgRspnSchemaBody" );
		static const std::string S_HppXMsgRspnSchemaInclude( "HppXMsgRspnSchemaInclude" );
		static const std::string S_HppXMsgRspnSchemaWireParsers( "HppXMsgRspnSchemaWireParsers" );
		static const std::string S_HppXMsgRspnSchemaXsdElementList( "HppXMsgRspnSchemaXsdElementList" );
		static const std::string S_HppXMsgRspnSchemaXsdSpec( "HppXMsgRspnSchemaXsdSpec" );
		static const std::string S_CsSchemaObjUsing( "CsSchemaObjUsing" );
		static const std::string S_CsSchemaObjInterface( "CsSchemaObjInterface" );
		static const std::string S_CsSchemaObjMembers( "CsSchemaObjMembers" );
		static const std::string S_CsSchemaObjImplementation( "CsSchemaObjImplementation" );
		static const std::string S_CsDb2LUWSchemaObjMembers( "CsDb2LUWSchemaObjMembers" );
		static const std::string S_CsDb2LUWSchemaObjImpl( "CsDb2LUWSchemaObjImpl" );
		static const std::string S_CsDb2LUWSchemaObjUsing( "CsDb2LUWSchemaObjUsing" );
		static const std::string S_CsMSSqlSchemaObjMembers( "CsMSSqlSchemaObjMembers" );
		static const std::string S_CsMSSqlSchemaObjImpl( "CsMSSqlSchemaObjImpl" );
		static const std::string S_CsMSSqlSchemaObjUsing( "CsMSSqlSchemaObjUsing" );
		static const std::string S_CsMySqlSchemaObjMembers( "CsMySqlSchemaObjMembers" );
		static const std::string S_CsMySqlSchemaObjImpl( "CsMySqlSchemaObjImpl" );
		static const std::string S_CsMySqlSchemaObjUsing( "CsMySqlSchemaObjUsing" );
		static const std::string S_CsOracleSchemaObjMembers( "CsOracleSchemaObjMembers" );
		static const std::string S_CsOracleSchemaObjImpl( "CsOracleSchemaObjImpl" );
		static const std::string S_CsOracleSchemaObjUsing( "CsOracleSchemaObjUsing" );
		static const std::string S_CsPgSqlSchemaObjMembers( "CsPgSqlSchemaObjMembers" );
		static const std::string S_CsPgSqlSchemaObjImpl( "CsPgSqlSchemaObjImpl" );
		static const std::string S_CsPgSqlSchemaObjUsing( "CsPgSqlSchemaObjUsing" );
		static const std::string S_CsRamSchemaObjMembers( "CsRamSchemaObjMembers" );
		static const std::string S_CsRamSchemaObjImpl( "CsRamSchemaObjImpl" );
		static const std::string S_CsRamSchemaObjUsing( "CsRamSchemaObjUsing" );
		static const std::string S_CsXMsgSchemaUsing( "CsXMsgSchemaUsing" );
		static const std::string S_CsXMsgSchemaFormatters( "CsXMsgSchemaFormatters" );
		static const std::string S_CsXMsgClientSchemaUsing( "CsXMsgClientSchemaUsing" );
		static const std::string S_CsXMsgClientSchemaBody( "CsXMsgClientSchemaBody" );
		static const std::string S_CsXMsgRqstSchemaBody( "CsXMsgRqstSchemaBody" );
		static const std::string S_CsXMsgRqstSchemaUsing( "CsXMsgRqstSchemaUsing" );
		static const std::string S_CsXMsgRqstSchemaWireParsers( "CsXMsgRqstSchemaWireParsers" );
		static const std::string S_CsXMsgRqstSchemaXsdSpec( "CsXMsgRqstSchemaXsdSpec" );
		static const std::string S_CsXMsgRqstSchemaXsdElementList( "CsXMsgRqstSchemaXsdElementList" );
		static const std::string S_CsXMsgRspnSchemaBody( "CsXMsgRspnSchemaBody" );
		static const std::string S_CsXMsgRspnSchemaUsing( "CsXMsgRspnSchemaUsing" );
		static const std::string S_CsXMsgRspnSchemaWireParsers( "CsXMsgRspnSchemaWireParsers" );
		static const std::string S_CsXMsgRspnSchemaXsdElementList( "CsXMsgRspnSchemaXsdElementList" );
		static const std::string S_CsXMsgRspnSchemaXsdSpec( "CsXMsgRspnSchemaXsdSpec" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_MinorVersionId, CFBamSchemaDefEditObj::getRequiredMinorVersionId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamSchemaDefEditObj::getRequiredName() ) );
		if( ! CFBamSchemaDefEditObj::isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, CFBamSchemaDefEditObj::getOptionalDbNameValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamSchemaDefEditObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamSchemaDefEditObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamSchemaDefEditObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamSchemaDefEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CopyrightPeriod, CFBamSchemaDefEditObj::getRequiredCopyrightPeriod() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CopyrightHolder, CFBamSchemaDefEditObj::getRequiredCopyrightHolder() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_AuthorEMail, CFBamSchemaDefEditObj::getRequiredAuthorEMail() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ProjectURL, CFBamSchemaDefEditObj::getRequiredProjectURL() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_PublishURI, CFBamSchemaDefEditObj::getRequiredPublishURI() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CommonLicenseCode, CFBamSchemaDefEditObj::getRequiredCommonLicenseCode() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CommonLicenseName, CFBamSchemaDefEditObj::getRequiredCommonLicenseName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CommonLicenseText, CFBamSchemaDefEditObj::getRequiredCommonLicenseText() ) );
		if( ! CFBamSchemaDefEditObj::isOptionalClientXFaceLicenseCodeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ClientXFaceLicenseCode, CFBamSchemaDefEditObj::getOptionalClientXFaceLicenseCodeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalClientXFaceLicenseNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ClientXFaceLicenseName, CFBamSchemaDefEditObj::getOptionalClientXFaceLicenseNameValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalClientXFaceLicenseTextNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ClientXFaceLicenseText, CFBamSchemaDefEditObj::getOptionalClientXFaceLicenseTextValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalClientImplLicenseCodeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ClientImplLicenseCode, CFBamSchemaDefEditObj::getOptionalClientImplLicenseCodeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalClientImplLicenseNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ClientImplLicenseName, CFBamSchemaDefEditObj::getOptionalClientImplLicenseNameValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalClientImplLicenseTextNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ClientImplLicenseText, CFBamSchemaDefEditObj::getOptionalClientImplLicenseTextValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalServerXFaceLicenseCodeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ServerXFaceLicenseCode, CFBamSchemaDefEditObj::getOptionalServerXFaceLicenseCodeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalServerXFaceLicenseNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ServerXFaceLicenseName, CFBamSchemaDefEditObj::getOptionalServerXFaceLicenseNameValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalServerXFaceLicenseTextNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ServerXFaceLicenseText, CFBamSchemaDefEditObj::getOptionalServerXFaceLicenseTextValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalServerImplLicenseCodeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ServerImplLicenseCode, CFBamSchemaDefEditObj::getOptionalServerImplLicenseCodeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalServerImplLicenseNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ServerImplLicenseName, CFBamSchemaDefEditObj::getOptionalServerImplLicenseNameValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalServerImplLicenseTextNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ServerImplLicenseText, CFBamSchemaDefEditObj::getOptionalServerImplLicenseTextValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSchemaObjImport, CFBamSchemaDefEditObj::getOptionalJSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJSchemaObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSchemaObjInterface, CFBamSchemaDefEditObj::getOptionalJSchemaObjInterfaceValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalJSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJSchemaObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSchemaObjImplementation, CFBamSchemaDefEditObj::getOptionalJSchemaObjImplementationValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJDb2LUWSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JDb2LUWSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalJDb2LUWSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJDb2LUWSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JDb2LUWSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalJDb2LUWSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJDb2LUWSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JDb2LUWSchemaObjImport, CFBamSchemaDefEditObj::getOptionalJDb2LUWSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJMSSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMSSqlSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalJMSSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJMSSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMSSqlSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalJMSSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJMSSqlSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMSSqlSchemaObjImport, CFBamSchemaDefEditObj::getOptionalJMSSqlSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJMySqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMySqlSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalJMySqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJMySqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMySqlSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalJMySqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJMySqlSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMySqlSchemaObjImport, CFBamSchemaDefEditObj::getOptionalJMySqlSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJOracleSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JOracleSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalJOracleSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJOracleSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JOracleSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalJOracleSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJOracleSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JOracleSchemaObjImport, CFBamSchemaDefEditObj::getOptionalJOracleSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJPgSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JPgSqlSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalJPgSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJPgSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JPgSqlSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalJPgSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJPgSqlSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JPgSqlSchemaObjImport, CFBamSchemaDefEditObj::getOptionalJPgSqlSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJRamSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JRamSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalJRamSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJRamSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JRamSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalJRamSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJRamSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JRamSchemaObjImport, CFBamSchemaDefEditObj::getOptionalJRamSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgSchemaImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgSchemaImport, CFBamSchemaDefEditObj::getOptionalJXMsgSchemaImportValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgSchemaFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgSchemaFormatters, CFBamSchemaDefEditObj::getOptionalJXMsgSchemaFormattersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgClientSchemaImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgClientSchemaImport, CFBamSchemaDefEditObj::getOptionalJXMsgClientSchemaImportValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgClientSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgClientSchemaBody, CFBamSchemaDefEditObj::getOptionalJXMsgClientSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgRqstSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstSchemaBody, CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgRqstSchemaImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstSchemaImport, CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaImportValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgRqstSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstSchemaWireParsers, CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgRqstSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstSchemaXsdSpec, CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgRqstSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstSchemaXsdElementList, CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgRspnSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnSchemaBody, CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgRspnSchemaImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnSchemaImport, CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaImportValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgRspnSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnSchemaWireParsers, CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgRspnSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnSchemaXsdElementList, CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalJXMsgRspnSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnSchemaXsdSpec, CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalCppSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppSchemaObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSchemaObjInterface, CFBamSchemaDefEditObj::getOptionalCppSchemaObjInterfaceValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCppSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppSchemaObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSchemaObjImplementation, CFBamSchemaDefEditObj::getOptionalCppSchemaObjImplementationValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppDb2LUWSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppDb2LUWSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCppDb2LUWSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppDb2LUWSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppDb2LUWSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalCppDb2LUWSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppDb2LUWSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppDb2LUWSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalCppDb2LUWSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppMSSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMSSqlSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCppMSSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppMSSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMSSqlSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalCppMSSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppMSSqlSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMSSqlSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalCppMSSqlSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppMySqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMySqlSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCppMySqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppMySqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMySqlSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalCppMySqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppMySqlSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMySqlSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalCppMySqlSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppOracleSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppOracleSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCppOracleSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppOracleSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppOracleSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalCppOracleSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppOracleSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppOracleSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalCppOracleSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppPgSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppPgSqlSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCppPgSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppPgSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppPgSqlSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalCppPgSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppPgSqlSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppPgSqlSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalCppPgSqlSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppRamSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppRamSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCppRamSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppRamSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppRamSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalCppRamSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppRamSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppRamSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalCppRamSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgSchemaInclude, CFBamSchemaDefEditObj::getOptionalCppXMsgSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgSchemaFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgSchemaFormatters, CFBamSchemaDefEditObj::getOptionalCppXMsgSchemaFormattersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgClientSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgClientSchemaInclude, CFBamSchemaDefEditObj::getOptionalCppXMsgClientSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgClientSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgClientSchemaBody, CFBamSchemaDefEditObj::getOptionalCppXMsgClientSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgRqstSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstSchemaBody, CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgRqstSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstSchemaInclude, CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgRqstSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstSchemaWireParsers, CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgRqstSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstSchemaXsdSpec, CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgRqstSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstSchemaXsdElementList, CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgRspnSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnSchemaBody, CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgRspnSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnSchemaInclude, CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgRspnSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnSchemaWireParsers, CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgRspnSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnSchemaXsdElementList, CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCppXMsgRspnSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnSchemaXsdSpec, CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalHppSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppSchemaObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSchemaObjInterface, CFBamSchemaDefEditObj::getOptionalHppSchemaObjInterfaceValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalHppSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppSchemaObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSchemaObjImplementation, CFBamSchemaDefEditObj::getOptionalHppSchemaObjImplementationValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppDb2LUWSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppDb2LUWSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalHppDb2LUWSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppDb2LUWSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppDb2LUWSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalHppDb2LUWSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppDb2LUWSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppDb2LUWSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalHppDb2LUWSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppMSSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMSSqlSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalHppMSSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppMSSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMSSqlSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalHppMSSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppMSSqlSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMSSqlSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalHppMSSqlSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppMySqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMySqlSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalHppMySqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppMySqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMySqlSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalHppMySqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppMySqlSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMySqlSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalHppMySqlSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppOracleSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppOracleSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalHppOracleSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppOracleSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppOracleSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalHppOracleSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppOracleSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppOracleSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalHppOracleSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppPgSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppPgSqlSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalHppPgSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppPgSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppPgSqlSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalHppPgSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppPgSqlSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppPgSqlSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalHppPgSqlSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppRamSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppRamSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalHppRamSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppRamSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppRamSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalHppRamSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppRamSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppRamSchemaObjInclude, CFBamSchemaDefEditObj::getOptionalHppRamSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgSchemaInclude, CFBamSchemaDefEditObj::getOptionalHppXMsgSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgSchemaFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgSchemaFormatters, CFBamSchemaDefEditObj::getOptionalHppXMsgSchemaFormattersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgClientSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgClientSchemaInclude, CFBamSchemaDefEditObj::getOptionalHppXMsgClientSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgClientSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgClientSchemaBody, CFBamSchemaDefEditObj::getOptionalHppXMsgClientSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgRqstSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstSchemaBody, CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgRqstSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstSchemaInclude, CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgRqstSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstSchemaWireParsers, CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgRqstSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstSchemaXsdSpec, CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgRqstSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstSchemaXsdElementList, CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgRspnSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnSchemaBody, CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgRspnSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnSchemaInclude, CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgRspnSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnSchemaWireParsers, CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgRspnSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnSchemaXsdElementList, CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalHppXMsgRspnSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnSchemaXsdSpec, CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSchemaObjUsing, CFBamSchemaDefEditObj::getOptionalCsSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsSchemaObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSchemaObjInterface, CFBamSchemaDefEditObj::getOptionalCsSchemaObjInterfaceValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCsSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsSchemaObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSchemaObjImplementation, CFBamSchemaDefEditObj::getOptionalCsSchemaObjImplementationValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsDb2LUWSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsDb2LUWSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCsDb2LUWSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsDb2LUWSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsDb2LUWSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalCsDb2LUWSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsDb2LUWSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsDb2LUWSchemaObjUsing, CFBamSchemaDefEditObj::getOptionalCsDb2LUWSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsMSSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMSSqlSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCsMSSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsMSSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMSSqlSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalCsMSSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsMSSqlSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMSSqlSchemaObjUsing, CFBamSchemaDefEditObj::getOptionalCsMSSqlSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsMySqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMySqlSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCsMySqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsMySqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMySqlSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalCsMySqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsMySqlSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMySqlSchemaObjUsing, CFBamSchemaDefEditObj::getOptionalCsMySqlSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsOracleSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsOracleSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCsOracleSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsOracleSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsOracleSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalCsOracleSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsOracleSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsOracleSchemaObjUsing, CFBamSchemaDefEditObj::getOptionalCsOracleSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsPgSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsPgSqlSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCsPgSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsPgSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsPgSqlSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalCsPgSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsPgSqlSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsPgSqlSchemaObjUsing, CFBamSchemaDefEditObj::getOptionalCsPgSqlSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsRamSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsRamSchemaObjMembers, CFBamSchemaDefEditObj::getOptionalCsRamSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsRamSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsRamSchemaObjImpl, CFBamSchemaDefEditObj::getOptionalCsRamSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsRamSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsRamSchemaObjUsing, CFBamSchemaDefEditObj::getOptionalCsRamSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgSchemaUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgSchemaUsing, CFBamSchemaDefEditObj::getOptionalCsXMsgSchemaUsingValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgSchemaFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgSchemaFormatters, CFBamSchemaDefEditObj::getOptionalCsXMsgSchemaFormattersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgClientSchemaUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgClientSchemaUsing, CFBamSchemaDefEditObj::getOptionalCsXMsgClientSchemaUsingValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgClientSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgClientSchemaBody, CFBamSchemaDefEditObj::getOptionalCsXMsgClientSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgRqstSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstSchemaBody, CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgRqstSchemaUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstSchemaUsing, CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaUsingValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgRqstSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstSchemaWireParsers, CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgRqstSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstSchemaXsdSpec, CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgRqstSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstSchemaXsdElementList, CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgRspnSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnSchemaBody, CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgRspnSchemaUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnSchemaUsing, CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaUsingValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgRspnSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnSchemaWireParsers, CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgRspnSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnSchemaXsdElementList, CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefEditObj::isOptionalCsXMsgRspnSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnSchemaXsdSpec, CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaXsdSpecValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamSchemaDefEditObj::getGenDefName() {
		return( cfbam::CFBamSchemaDefBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSchemaDefEditObj::getScope() {
		cfint::ICFIntMinorVersionObj* scope = getRequiredContainerMinorVersion();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSchemaDefEditObj::getObjScope() {
		cfint::ICFIntMinorVersionObj* scope = getRequiredContainerMinorVersion();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSchemaDefEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
		cflib::ICFLibAnyObj* container = this;
		if( qualifyingClass != NULL ) {
			while( container != NULL ) {
				if( container->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
					break;
				}
				else if( container->getClassCode() == cfsec::CFSecTenantBuff::CLASS_CODE ) {
					break;
				}
				else if( container->implementsClassCode( *qualifyingClass ) ) {
					break;
				}
				container = container->getObjScope();
			}
		}
		else {
			while( container != NULL ) {
				if( container->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
					break;
				}
				else if( container->getClassCode() == cfsec::CFSecTenantBuff::CLASS_CODE ) {
					break;
				}
				container = container->getObjScope();
			}
		}
		return( container );
	}

	cflib::ICFLibAnyObj* CFBamSchemaDefEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSchemaDefEditObj::getNamedObject( const std::string& objName ) {
		std::string nextName;
		std::string remainingName;
		cflib::ICFLibAnyObj* subObj = NULL;
		cflib::ICFLibAnyObj* retObj;
		int32_t nextDot = objName.find( '.' );
		if( nextDot >= 0 ) {
			nextName = objName.substr( 0, nextDot );
			remainingName = objName.substr( nextDot + 1 );
		}
		else {
			nextName.clear();
			nextName.append( objName );
			remainingName.clear();
		}
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByLookupUNameIdx( getRequiredTenantId(),
			getRequiredId(),
				nextName,
				false );
		}
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->readValueByLookupUNameIdx( getRequiredTenantId(),
			getRequiredId(),
				nextName,
				false );
		}
		if( remainingName.length() <= 0 ) {
			retObj = subObj;
		}
		else if( subObj == NULL ) {
			retObj = NULL;
		}
		else {
			retObj = subObj->getNamedObject( remainingName );
		}
		return( retObj );
	}

	std::string CFBamSchemaDefEditObj::getObjQualifiedName() {
		const static std::string S_Dot( "." );
		std::string qualName( getObjName() );
		cflib::ICFLibAnyObj* container = getObjScope();
		std::string containerName;
		std::string buildName;
		while( container != NULL ) {
			if( container->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
				container = NULL;
			}
			else if( container->getClassCode() == cfsec::CFSecTenantBuff::CLASS_CODE ) {
				container = NULL;
			}
			else if( container->implementsClassCode( cfint::CFIntSubProjectBuff::CLASS_CODE ) ) {
				container = NULL;
			}
			else {
				containerName = container->getObjName();
				buildName.clear();
				buildName.append( containerName );
				buildName.append( S_Dot );
				buildName.append( qualName );
				qualName.clear();
				qualName.append( buildName );
				container = container->getObjScope();
			}
		}
		return( qualName );
	}

	std::string CFBamSchemaDefEditObj::getObjFullName() {
		const static std::string S_Dot( "." );
		std::string fullName = getObjName();
		cflib::ICFLibAnyObj* container = getObjScope();
		std::string containerName;
		std::string buildName;
		while( container != NULL ) {
			if( container->getClassCode() == cfsec::CFSecClusterBuff::CLASS_CODE ) {
				container = NULL;
			}
			else if( container->getClassCode() == cfsec::CFSecTenantBuff::CLASS_CODE ) {
				container = NULL;
			}
			else {
				containerName = container->getObjName();
				buildName.clear();
				buildName.append( containerName );
				buildName.append( S_Dot );
				buildName.append( fullName );
				fullName.clear();
				fullName.append( buildName );
				container = container->getObjScope();
			}
		}
		return( fullName );
	}

	cfbam::ICFBamScopeObj* CFBamSchemaDefEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamSchemaDefObj* retobj = getSchema()->getSchemaDefTableObj()->realizeSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamSchemaDefEditObj::create() {
		cfbam::ICFBamSchemaDefObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSchemaDef()->getSchema() )->getSchemaDefTableObj()->createSchemaDef( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamSchemaDefEditObj::update() {
		getSchema()->getSchemaDefTableObj()->updateSchemaDef( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamSchemaDefEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSchemaDefTableObj()->deleteSchemaDef( this );
		return( NULL );
	}

	cfbam::ICFBamSchemaDefTableObj* CFBamSchemaDefEditObj::getSchemaDefTable() {
		return( orig->getSchema()->getSchemaDefTableObj() );
	}

	cfbam::ICFBamSchemaDefEditObj* CFBamSchemaDefEditObj::getSchemaDefEdit() {
		return( (cfbam::ICFBamSchemaDefEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamSchemaDefEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamSchemaDefObj* CFBamSchemaDefEditObj::getOrigAsSchemaDef() {
		return( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamSchemaDefEditObj::getBuff() {
		return( buff );
	}

	void CFBamSchemaDefEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamScopeEditObj::setBuff( value );
		}
	}

	const int64_t CFBamSchemaDefEditObj::getRequiredMinorVersionId() {
		return( getSchemaDefBuff()->getRequiredMinorVersionId() );
	}

	const int64_t* CFBamSchemaDefEditObj::getRequiredMinorVersionIdReference() {
		return( getSchemaDefBuff()->getRequiredMinorVersionIdReference() );
	}

	const std::string& CFBamSchemaDefEditObj::getRequiredName() {
		return( getSchemaDefBuff()->getRequiredName() );
	}

	const std::string* CFBamSchemaDefEditObj::getRequiredNameReference() {
		return( getSchemaDefBuff()->getRequiredNameReference() );
	}

	void CFBamSchemaDefEditObj::setRequiredName( const std::string& value ) {
		if( getSchemaDefBuff()->getRequiredName() != value ) {
			getSchemaDefEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalDbNameNull() {
		return( getSchemaDefBuff()->isOptionalDbNameNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalDbNameValue() {
		return( getSchemaDefBuff()->getOptionalDbNameValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalDbNameReference() {
		return( getSchemaDefBuff()->getOptionalDbNameReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalDbNameNull() {
		if( ! getSchemaDefBuff()->isOptionalDbNameNull() ) {
			getSchemaDefEditBuff()->setOptionalDbNameNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalDbNameValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalDbNameNull() ) {
			getSchemaDefEditBuff()->setOptionalDbNameValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalDbNameValue() != value ) {
			getSchemaDefEditBuff()->setOptionalDbNameValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalShortNameNull() {
		return( getSchemaDefBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalShortNameValue() {
		return( getSchemaDefBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalShortNameReference() {
		return( getSchemaDefBuff()->getOptionalShortNameReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalShortNameNull() {
		if( ! getSchemaDefBuff()->isOptionalShortNameNull() ) {
			getSchemaDefEditBuff()->setOptionalShortNameNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalShortNameValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalShortNameNull() ) {
			getSchemaDefEditBuff()->setOptionalShortNameValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalShortNameValue() != value ) {
			getSchemaDefEditBuff()->setOptionalShortNameValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalLabelNull() {
		return( getSchemaDefBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalLabelValue() {
		return( getSchemaDefBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalLabelReference() {
		return( getSchemaDefBuff()->getOptionalLabelReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalLabelNull() {
		if( ! getSchemaDefBuff()->isOptionalLabelNull() ) {
			getSchemaDefEditBuff()->setOptionalLabelNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalLabelValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalLabelNull() ) {
			getSchemaDefEditBuff()->setOptionalLabelValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalLabelValue() != value ) {
			getSchemaDefEditBuff()->setOptionalLabelValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalShortDescriptionNull() {
		return( getSchemaDefBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalShortDescriptionValue() {
		return( getSchemaDefBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalShortDescriptionReference() {
		return( getSchemaDefBuff()->getOptionalShortDescriptionReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalShortDescriptionNull() {
		if( ! getSchemaDefBuff()->isOptionalShortDescriptionNull() ) {
			getSchemaDefEditBuff()->setOptionalShortDescriptionNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalShortDescriptionValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalShortDescriptionNull() ) {
			getSchemaDefEditBuff()->setOptionalShortDescriptionValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalShortDescriptionValue() != value ) {
			getSchemaDefEditBuff()->setOptionalShortDescriptionValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalDescriptionNull() {
		return( getSchemaDefBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalDescriptionValue() {
		return( getSchemaDefBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalDescriptionReference() {
		return( getSchemaDefBuff()->getOptionalDescriptionReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalDescriptionNull() {
		if( ! getSchemaDefBuff()->isOptionalDescriptionNull() ) {
			getSchemaDefEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalDescriptionNull() ) {
			getSchemaDefEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalDescriptionValue() != value ) {
			getSchemaDefEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	const std::string& CFBamSchemaDefEditObj::getRequiredCopyrightPeriod() {
		return( getSchemaDefBuff()->getRequiredCopyrightPeriod() );
	}

	const std::string* CFBamSchemaDefEditObj::getRequiredCopyrightPeriodReference() {
		return( getSchemaDefBuff()->getRequiredCopyrightPeriodReference() );
	}

	void CFBamSchemaDefEditObj::setRequiredCopyrightPeriod( const std::string& value ) {
		if( getSchemaDefBuff()->getRequiredCopyrightPeriod() != value ) {
			getSchemaDefEditBuff()->setRequiredCopyrightPeriod( value );
		}
	}

	const std::string& CFBamSchemaDefEditObj::getRequiredCopyrightHolder() {
		return( getSchemaDefBuff()->getRequiredCopyrightHolder() );
	}

	const std::string* CFBamSchemaDefEditObj::getRequiredCopyrightHolderReference() {
		return( getSchemaDefBuff()->getRequiredCopyrightHolderReference() );
	}

	void CFBamSchemaDefEditObj::setRequiredCopyrightHolder( const std::string& value ) {
		if( getSchemaDefBuff()->getRequiredCopyrightHolder() != value ) {
			getSchemaDefEditBuff()->setRequiredCopyrightHolder( value );
		}
	}

	const std::string& CFBamSchemaDefEditObj::getRequiredAuthorEMail() {
		return( getSchemaDefBuff()->getRequiredAuthorEMail() );
	}

	const std::string* CFBamSchemaDefEditObj::getRequiredAuthorEMailReference() {
		return( getSchemaDefBuff()->getRequiredAuthorEMailReference() );
	}

	void CFBamSchemaDefEditObj::setRequiredAuthorEMail( const std::string& value ) {
		if( getSchemaDefBuff()->getRequiredAuthorEMail() != value ) {
			getSchemaDefEditBuff()->setRequiredAuthorEMail( value );
		}
	}

	const std::string& CFBamSchemaDefEditObj::getRequiredProjectURL() {
		return( getSchemaDefBuff()->getRequiredProjectURL() );
	}

	const std::string* CFBamSchemaDefEditObj::getRequiredProjectURLReference() {
		return( getSchemaDefBuff()->getRequiredProjectURLReference() );
	}

	void CFBamSchemaDefEditObj::setRequiredProjectURL( const std::string& value ) {
		if( getSchemaDefBuff()->getRequiredProjectURL() != value ) {
			getSchemaDefEditBuff()->setRequiredProjectURL( value );
		}
	}

	const std::string& CFBamSchemaDefEditObj::getRequiredPublishURI() {
		return( getSchemaDefBuff()->getRequiredPublishURI() );
	}

	const std::string* CFBamSchemaDefEditObj::getRequiredPublishURIReference() {
		return( getSchemaDefBuff()->getRequiredPublishURIReference() );
	}

	void CFBamSchemaDefEditObj::setRequiredPublishURI( const std::string& value ) {
		if( getSchemaDefBuff()->getRequiredPublishURI() != value ) {
			getSchemaDefEditBuff()->setRequiredPublishURI( value );
		}
	}

	const std::string& CFBamSchemaDefEditObj::getRequiredCommonLicenseCode() {
		return( getSchemaDefBuff()->getRequiredCommonLicenseCode() );
	}

	const std::string* CFBamSchemaDefEditObj::getRequiredCommonLicenseCodeReference() {
		return( getSchemaDefBuff()->getRequiredCommonLicenseCodeReference() );
	}

	void CFBamSchemaDefEditObj::setRequiredCommonLicenseCode( const std::string& value ) {
		if( getSchemaDefBuff()->getRequiredCommonLicenseCode() != value ) {
			getSchemaDefEditBuff()->setRequiredCommonLicenseCode( value );
		}
	}

	const std::string& CFBamSchemaDefEditObj::getRequiredCommonLicenseName() {
		return( getSchemaDefBuff()->getRequiredCommonLicenseName() );
	}

	const std::string* CFBamSchemaDefEditObj::getRequiredCommonLicenseNameReference() {
		return( getSchemaDefBuff()->getRequiredCommonLicenseNameReference() );
	}

	void CFBamSchemaDefEditObj::setRequiredCommonLicenseName( const std::string& value ) {
		if( getSchemaDefBuff()->getRequiredCommonLicenseName() != value ) {
			getSchemaDefEditBuff()->setRequiredCommonLicenseName( value );
		}
	}

	const std::string& CFBamSchemaDefEditObj::getRequiredCommonLicenseText() {
		return( getSchemaDefBuff()->getRequiredCommonLicenseText() );
	}

	const std::string* CFBamSchemaDefEditObj::getRequiredCommonLicenseTextReference() {
		return( getSchemaDefBuff()->getRequiredCommonLicenseTextReference() );
	}

	void CFBamSchemaDefEditObj::setRequiredCommonLicenseText( const std::string& value ) {
		if( getSchemaDefBuff()->getRequiredCommonLicenseText() != value ) {
			getSchemaDefEditBuff()->setRequiredCommonLicenseText( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalClientXFaceLicenseCodeNull() {
		return( getSchemaDefBuff()->isOptionalClientXFaceLicenseCodeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalClientXFaceLicenseCodeValue() {
		return( getSchemaDefBuff()->getOptionalClientXFaceLicenseCodeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalClientXFaceLicenseCodeReference() {
		return( getSchemaDefBuff()->getOptionalClientXFaceLicenseCodeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalClientXFaceLicenseCodeNull() {
		if( ! getSchemaDefBuff()->isOptionalClientXFaceLicenseCodeNull() ) {
			getSchemaDefEditBuff()->setOptionalClientXFaceLicenseCodeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalClientXFaceLicenseCodeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalClientXFaceLicenseCodeNull() ) {
			getSchemaDefEditBuff()->setOptionalClientXFaceLicenseCodeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalClientXFaceLicenseCodeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalClientXFaceLicenseCodeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalClientXFaceLicenseNameNull() {
		return( getSchemaDefBuff()->isOptionalClientXFaceLicenseNameNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalClientXFaceLicenseNameValue() {
		return( getSchemaDefBuff()->getOptionalClientXFaceLicenseNameValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalClientXFaceLicenseNameReference() {
		return( getSchemaDefBuff()->getOptionalClientXFaceLicenseNameReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalClientXFaceLicenseNameNull() {
		if( ! getSchemaDefBuff()->isOptionalClientXFaceLicenseNameNull() ) {
			getSchemaDefEditBuff()->setOptionalClientXFaceLicenseNameNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalClientXFaceLicenseNameValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalClientXFaceLicenseNameNull() ) {
			getSchemaDefEditBuff()->setOptionalClientXFaceLicenseNameValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalClientXFaceLicenseNameValue() != value ) {
			getSchemaDefEditBuff()->setOptionalClientXFaceLicenseNameValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalClientXFaceLicenseTextNull() {
		return( getSchemaDefBuff()->isOptionalClientXFaceLicenseTextNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalClientXFaceLicenseTextValue() {
		return( getSchemaDefBuff()->getOptionalClientXFaceLicenseTextValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalClientXFaceLicenseTextReference() {
		return( getSchemaDefBuff()->getOptionalClientXFaceLicenseTextReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalClientXFaceLicenseTextNull() {
		if( ! getSchemaDefBuff()->isOptionalClientXFaceLicenseTextNull() ) {
			getSchemaDefEditBuff()->setOptionalClientXFaceLicenseTextNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalClientXFaceLicenseTextValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalClientXFaceLicenseTextNull() ) {
			getSchemaDefEditBuff()->setOptionalClientXFaceLicenseTextValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalClientXFaceLicenseTextValue() != value ) {
			getSchemaDefEditBuff()->setOptionalClientXFaceLicenseTextValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalClientImplLicenseCodeNull() {
		return( getSchemaDefBuff()->isOptionalClientImplLicenseCodeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalClientImplLicenseCodeValue() {
		return( getSchemaDefBuff()->getOptionalClientImplLicenseCodeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalClientImplLicenseCodeReference() {
		return( getSchemaDefBuff()->getOptionalClientImplLicenseCodeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalClientImplLicenseCodeNull() {
		if( ! getSchemaDefBuff()->isOptionalClientImplLicenseCodeNull() ) {
			getSchemaDefEditBuff()->setOptionalClientImplLicenseCodeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalClientImplLicenseCodeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalClientImplLicenseCodeNull() ) {
			getSchemaDefEditBuff()->setOptionalClientImplLicenseCodeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalClientImplLicenseCodeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalClientImplLicenseCodeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalClientImplLicenseNameNull() {
		return( getSchemaDefBuff()->isOptionalClientImplLicenseNameNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalClientImplLicenseNameValue() {
		return( getSchemaDefBuff()->getOptionalClientImplLicenseNameValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalClientImplLicenseNameReference() {
		return( getSchemaDefBuff()->getOptionalClientImplLicenseNameReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalClientImplLicenseNameNull() {
		if( ! getSchemaDefBuff()->isOptionalClientImplLicenseNameNull() ) {
			getSchemaDefEditBuff()->setOptionalClientImplLicenseNameNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalClientImplLicenseNameValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalClientImplLicenseNameNull() ) {
			getSchemaDefEditBuff()->setOptionalClientImplLicenseNameValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalClientImplLicenseNameValue() != value ) {
			getSchemaDefEditBuff()->setOptionalClientImplLicenseNameValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalClientImplLicenseTextNull() {
		return( getSchemaDefBuff()->isOptionalClientImplLicenseTextNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalClientImplLicenseTextValue() {
		return( getSchemaDefBuff()->getOptionalClientImplLicenseTextValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalClientImplLicenseTextReference() {
		return( getSchemaDefBuff()->getOptionalClientImplLicenseTextReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalClientImplLicenseTextNull() {
		if( ! getSchemaDefBuff()->isOptionalClientImplLicenseTextNull() ) {
			getSchemaDefEditBuff()->setOptionalClientImplLicenseTextNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalClientImplLicenseTextValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalClientImplLicenseTextNull() ) {
			getSchemaDefEditBuff()->setOptionalClientImplLicenseTextValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalClientImplLicenseTextValue() != value ) {
			getSchemaDefEditBuff()->setOptionalClientImplLicenseTextValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalServerXFaceLicenseCodeNull() {
		return( getSchemaDefBuff()->isOptionalServerXFaceLicenseCodeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalServerXFaceLicenseCodeValue() {
		return( getSchemaDefBuff()->getOptionalServerXFaceLicenseCodeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalServerXFaceLicenseCodeReference() {
		return( getSchemaDefBuff()->getOptionalServerXFaceLicenseCodeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalServerXFaceLicenseCodeNull() {
		if( ! getSchemaDefBuff()->isOptionalServerXFaceLicenseCodeNull() ) {
			getSchemaDefEditBuff()->setOptionalServerXFaceLicenseCodeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalServerXFaceLicenseCodeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalServerXFaceLicenseCodeNull() ) {
			getSchemaDefEditBuff()->setOptionalServerXFaceLicenseCodeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalServerXFaceLicenseCodeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalServerXFaceLicenseCodeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalServerXFaceLicenseNameNull() {
		return( getSchemaDefBuff()->isOptionalServerXFaceLicenseNameNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalServerXFaceLicenseNameValue() {
		return( getSchemaDefBuff()->getOptionalServerXFaceLicenseNameValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalServerXFaceLicenseNameReference() {
		return( getSchemaDefBuff()->getOptionalServerXFaceLicenseNameReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalServerXFaceLicenseNameNull() {
		if( ! getSchemaDefBuff()->isOptionalServerXFaceLicenseNameNull() ) {
			getSchemaDefEditBuff()->setOptionalServerXFaceLicenseNameNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalServerXFaceLicenseNameValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalServerXFaceLicenseNameNull() ) {
			getSchemaDefEditBuff()->setOptionalServerXFaceLicenseNameValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalServerXFaceLicenseNameValue() != value ) {
			getSchemaDefEditBuff()->setOptionalServerXFaceLicenseNameValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalServerXFaceLicenseTextNull() {
		return( getSchemaDefBuff()->isOptionalServerXFaceLicenseTextNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalServerXFaceLicenseTextValue() {
		return( getSchemaDefBuff()->getOptionalServerXFaceLicenseTextValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalServerXFaceLicenseTextReference() {
		return( getSchemaDefBuff()->getOptionalServerXFaceLicenseTextReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalServerXFaceLicenseTextNull() {
		if( ! getSchemaDefBuff()->isOptionalServerXFaceLicenseTextNull() ) {
			getSchemaDefEditBuff()->setOptionalServerXFaceLicenseTextNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalServerXFaceLicenseTextValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalServerXFaceLicenseTextNull() ) {
			getSchemaDefEditBuff()->setOptionalServerXFaceLicenseTextValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalServerXFaceLicenseTextValue() != value ) {
			getSchemaDefEditBuff()->setOptionalServerXFaceLicenseTextValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalServerImplLicenseCodeNull() {
		return( getSchemaDefBuff()->isOptionalServerImplLicenseCodeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalServerImplLicenseCodeValue() {
		return( getSchemaDefBuff()->getOptionalServerImplLicenseCodeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalServerImplLicenseCodeReference() {
		return( getSchemaDefBuff()->getOptionalServerImplLicenseCodeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalServerImplLicenseCodeNull() {
		if( ! getSchemaDefBuff()->isOptionalServerImplLicenseCodeNull() ) {
			getSchemaDefEditBuff()->setOptionalServerImplLicenseCodeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalServerImplLicenseCodeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalServerImplLicenseCodeNull() ) {
			getSchemaDefEditBuff()->setOptionalServerImplLicenseCodeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalServerImplLicenseCodeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalServerImplLicenseCodeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalServerImplLicenseNameNull() {
		return( getSchemaDefBuff()->isOptionalServerImplLicenseNameNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalServerImplLicenseNameValue() {
		return( getSchemaDefBuff()->getOptionalServerImplLicenseNameValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalServerImplLicenseNameReference() {
		return( getSchemaDefBuff()->getOptionalServerImplLicenseNameReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalServerImplLicenseNameNull() {
		if( ! getSchemaDefBuff()->isOptionalServerImplLicenseNameNull() ) {
			getSchemaDefEditBuff()->setOptionalServerImplLicenseNameNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalServerImplLicenseNameValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalServerImplLicenseNameNull() ) {
			getSchemaDefEditBuff()->setOptionalServerImplLicenseNameValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalServerImplLicenseNameValue() != value ) {
			getSchemaDefEditBuff()->setOptionalServerImplLicenseNameValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalServerImplLicenseTextNull() {
		return( getSchemaDefBuff()->isOptionalServerImplLicenseTextNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalServerImplLicenseTextValue() {
		return( getSchemaDefBuff()->getOptionalServerImplLicenseTextValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalServerImplLicenseTextReference() {
		return( getSchemaDefBuff()->getOptionalServerImplLicenseTextReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalServerImplLicenseTextNull() {
		if( ! getSchemaDefBuff()->isOptionalServerImplLicenseTextNull() ) {
			getSchemaDefEditBuff()->setOptionalServerImplLicenseTextNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalServerImplLicenseTextValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalServerImplLicenseTextNull() ) {
			getSchemaDefEditBuff()->setOptionalServerImplLicenseTextValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalServerImplLicenseTextValue() != value ) {
			getSchemaDefEditBuff()->setOptionalServerImplLicenseTextValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjImportReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJSchemaObjImportNull() {
		if( ! getSchemaDefBuff()->isOptionalJSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJSchemaObjImportNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJSchemaObjImportValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJSchemaObjImportValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJSchemaObjImportValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJSchemaObjImportValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJSchemaObjInterfaceNull() {
		return( getSchemaDefBuff()->isOptionalJSchemaObjInterfaceNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJSchemaObjInterfaceValue() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjInterfaceValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJSchemaObjInterfaceReference() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjInterfaceReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJSchemaObjInterfaceNull() {
		if( ! getSchemaDefBuff()->isOptionalJSchemaObjInterfaceNull() ) {
			getSchemaDefEditBuff()->setOptionalJSchemaObjInterfaceNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJSchemaObjInterfaceValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJSchemaObjInterfaceNull() ) {
			getSchemaDefEditBuff()->setOptionalJSchemaObjInterfaceValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJSchemaObjInterfaceValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJSchemaObjInterfaceValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalJSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJSchemaObjImplementationNull() {
		return( getSchemaDefBuff()->isOptionalJSchemaObjImplementationNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJSchemaObjImplementationValue() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjImplementationValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJSchemaObjImplementationReference() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjImplementationReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJSchemaObjImplementationNull() {
		if( ! getSchemaDefBuff()->isOptionalJSchemaObjImplementationNull() ) {
			getSchemaDefEditBuff()->setOptionalJSchemaObjImplementationNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJSchemaObjImplementationValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJSchemaObjImplementationNull() ) {
			getSchemaDefEditBuff()->setOptionalJSchemaObjImplementationValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJSchemaObjImplementationValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJSchemaObjImplementationValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJDb2LUWSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJDb2LUWSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJDb2LUWSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJDb2LUWSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJDb2LUWSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalJDb2LUWSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJDb2LUWSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJDb2LUWSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJDb2LUWSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJDb2LUWSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJDb2LUWSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJDb2LUWSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalJDb2LUWSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJDb2LUWSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJDb2LUWSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJDb2LUWSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalJDb2LUWSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalJDb2LUWSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJDb2LUWSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJDb2LUWSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalJDb2LUWSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJDb2LUWSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJDb2LUWSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJDb2LUWSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJDb2LUWSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJDb2LUWSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjImportReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJDb2LUWSchemaObjImportNull() {
		if( ! getSchemaDefBuff()->isOptionalJDb2LUWSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJDb2LUWSchemaObjImportNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJDb2LUWSchemaObjImportValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJDb2LUWSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJDb2LUWSchemaObjImportValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjImportValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJDb2LUWSchemaObjImportValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJMSSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJMSSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJMSSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJMSSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJMSSqlSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalJMSSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJMSSqlSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJMSSqlSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJMSSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJMSSqlSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJMSSqlSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJMSSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalJMSSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJMSSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJMSSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJMSSqlSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalJMSSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalJMSSqlSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJMSSqlSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJMSSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalJMSSqlSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJMSSqlSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJMSSqlSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJMSSqlSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJMSSqlSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJMSSqlSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjImportReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJMSSqlSchemaObjImportNull() {
		if( ! getSchemaDefBuff()->isOptionalJMSSqlSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJMSSqlSchemaObjImportNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJMSSqlSchemaObjImportValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJMSSqlSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJMSSqlSchemaObjImportValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjImportValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJMSSqlSchemaObjImportValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJMySqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJMySqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJMySqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJMySqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJMySqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJMySqlSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJMySqlSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalJMySqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJMySqlSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJMySqlSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJMySqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJMySqlSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJMySqlSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJMySqlSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJMySqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalJMySqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJMySqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalJMySqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJMySqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalJMySqlSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJMySqlSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalJMySqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalJMySqlSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJMySqlSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJMySqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalJMySqlSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJMySqlSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJMySqlSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJMySqlSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJMySqlSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJMySqlSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJMySqlSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJMySqlSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJMySqlSchemaObjImportReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJMySqlSchemaObjImportNull() {
		if( ! getSchemaDefBuff()->isOptionalJMySqlSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJMySqlSchemaObjImportNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJMySqlSchemaObjImportValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJMySqlSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJMySqlSchemaObjImportValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJMySqlSchemaObjImportValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJMySqlSchemaObjImportValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJOracleSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJOracleSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJOracleSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJOracleSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJOracleSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJOracleSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJOracleSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalJOracleSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJOracleSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJOracleSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJOracleSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJOracleSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJOracleSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJOracleSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJOracleSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalJOracleSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJOracleSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalJOracleSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJOracleSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalJOracleSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJOracleSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalJOracleSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalJOracleSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJOracleSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJOracleSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalJOracleSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJOracleSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJOracleSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJOracleSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJOracleSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJOracleSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJOracleSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJOracleSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJOracleSchemaObjImportReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJOracleSchemaObjImportNull() {
		if( ! getSchemaDefBuff()->isOptionalJOracleSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJOracleSchemaObjImportNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJOracleSchemaObjImportValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJOracleSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJOracleSchemaObjImportValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJOracleSchemaObjImportValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJOracleSchemaObjImportValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJPgSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJPgSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJPgSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJPgSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJPgSqlSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalJPgSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJPgSqlSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJPgSqlSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJPgSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJPgSqlSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJPgSqlSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJPgSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalJPgSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJPgSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJPgSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJPgSqlSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalJPgSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalJPgSqlSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJPgSqlSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJPgSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalJPgSqlSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJPgSqlSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJPgSqlSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJPgSqlSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJPgSqlSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJPgSqlSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjImportReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJPgSqlSchemaObjImportNull() {
		if( ! getSchemaDefBuff()->isOptionalJPgSqlSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJPgSqlSchemaObjImportNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJPgSqlSchemaObjImportValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJPgSqlSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJPgSqlSchemaObjImportValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjImportValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJPgSqlSchemaObjImportValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJRamSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJRamSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJRamSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJRamSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJRamSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJRamSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJRamSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalJRamSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJRamSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJRamSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJRamSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalJRamSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJRamSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJRamSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJRamSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalJRamSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJRamSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalJRamSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJRamSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalJRamSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJRamSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalJRamSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalJRamSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJRamSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJRamSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalJRamSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJRamSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJRamSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJRamSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJRamSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJRamSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJRamSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJRamSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJRamSchemaObjImportReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJRamSchemaObjImportNull() {
		if( ! getSchemaDefBuff()->isOptionalJRamSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJRamSchemaObjImportNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJRamSchemaObjImportValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJRamSchemaObjImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJRamSchemaObjImportValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJRamSchemaObjImportValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJRamSchemaObjImportValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgSchemaImportNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgSchemaImportNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgSchemaImportValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgSchemaImportValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgSchemaImportReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgSchemaImportReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgSchemaImportNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgSchemaImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgSchemaImportNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgSchemaImportValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgSchemaImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgSchemaImportValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgSchemaImportValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgSchemaImportValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgSchemaFormattersNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgSchemaFormattersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgSchemaFormattersValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgSchemaFormattersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgSchemaFormattersReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgSchemaFormattersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgSchemaFormattersNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgSchemaFormattersNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgSchemaFormattersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgSchemaFormattersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgSchemaFormattersNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgSchemaFormattersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgSchemaFormattersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgSchemaFormattersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgClientSchemaImportNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgClientSchemaImportNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgClientSchemaImportValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgClientSchemaImportValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgClientSchemaImportReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgClientSchemaImportReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgClientSchemaImportNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgClientSchemaImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgClientSchemaImportNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgClientSchemaImportValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgClientSchemaImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgClientSchemaImportValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgClientSchemaImportValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgClientSchemaImportValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgClientSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgClientSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgClientSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgClientSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgClientSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgClientSchemaBodyReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgClientSchemaBodyNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgClientSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgClientSchemaBodyNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgClientSchemaBodyValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgClientSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgClientSchemaBodyValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgClientSchemaBodyValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgClientSchemaBodyValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgRqstSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaBodyReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRqstSchemaBodyNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgRqstSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaBodyNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRqstSchemaBodyValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaBodyValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaBodyValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaBodyValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgRqstSchemaImportNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaImportNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaImportValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaImportValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaImportReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaImportReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRqstSchemaImportNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgRqstSchemaImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaImportNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRqstSchemaImportValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaImportValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaImportValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaImportValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgRqstSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaWireParsersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRqstSchemaWireParsersNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgRqstSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaWireParsersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRqstSchemaWireParsersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaWireParsersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaWireParsersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaWireParsersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgRqstSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaXsdSpecReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRqstSchemaXsdSpecNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgRqstSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaXsdSpecNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRqstSchemaXsdSpecValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaXsdSpecValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaXsdSpecValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaXsdSpecValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgRqstSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgRqstSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaXsdElementListReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRqstSchemaXsdElementListNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgRqstSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaXsdElementListNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRqstSchemaXsdElementListValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaXsdElementListValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaXsdElementListValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRqstSchemaXsdElementListValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgRspnSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaBodyReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRspnSchemaBodyNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgRspnSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaBodyNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRspnSchemaBodyValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaBodyValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaBodyValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaBodyValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgRspnSchemaImportNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaImportNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaImportValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaImportValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaImportReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaImportReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRspnSchemaImportNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgRspnSchemaImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaImportNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRspnSchemaImportValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaImportNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaImportValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaImportValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaImportValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgRspnSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaWireParsersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRspnSchemaWireParsersNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgRspnSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaWireParsersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRspnSchemaWireParsersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaWireParsersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaWireParsersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaWireParsersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgRspnSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaXsdElementListReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRspnSchemaXsdElementListNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgRspnSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaXsdElementListNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRspnSchemaXsdElementListValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaXsdElementListValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaXsdElementListValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaXsdElementListValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalJXMsgRspnSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalJXMsgRspnSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaXsdSpecReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRspnSchemaXsdSpecNull() {
		if( ! getSchemaDefBuff()->isOptionalJXMsgRspnSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaXsdSpecNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalJXMsgRspnSchemaXsdSpecValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaXsdSpecValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaXsdSpecValue() != value ) {
			getSchemaDefEditBuff()->setOptionalJXMsgRspnSchemaXsdSpecValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalCppSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppSchemaObjInterfaceNull() {
		return( getSchemaDefBuff()->isOptionalCppSchemaObjInterfaceNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppSchemaObjInterfaceValue() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjInterfaceValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppSchemaObjInterfaceReference() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjInterfaceReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppSchemaObjInterfaceNull() {
		if( ! getSchemaDefBuff()->isOptionalCppSchemaObjInterfaceNull() ) {
			getSchemaDefEditBuff()->setOptionalCppSchemaObjInterfaceNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppSchemaObjInterfaceValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppSchemaObjInterfaceNull() ) {
			getSchemaDefEditBuff()->setOptionalCppSchemaObjInterfaceValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppSchemaObjInterfaceValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppSchemaObjInterfaceValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCppSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppSchemaObjImplementationNull() {
		return( getSchemaDefBuff()->isOptionalCppSchemaObjImplementationNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppSchemaObjImplementationValue() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjImplementationValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppSchemaObjImplementationReference() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjImplementationReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppSchemaObjImplementationNull() {
		if( ! getSchemaDefBuff()->isOptionalCppSchemaObjImplementationNull() ) {
			getSchemaDefEditBuff()->setOptionalCppSchemaObjImplementationNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppSchemaObjImplementationValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppSchemaObjImplementationNull() ) {
			getSchemaDefEditBuff()->setOptionalCppSchemaObjImplementationValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppSchemaObjImplementationValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppSchemaObjImplementationValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppDb2LUWSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppDb2LUWSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppDb2LUWSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppDb2LUWSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppDb2LUWSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCppDb2LUWSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppDb2LUWSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppDb2LUWSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppDb2LUWSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppDb2LUWSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppDb2LUWSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppDb2LUWSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCppDb2LUWSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppDb2LUWSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppDb2LUWSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppDb2LUWSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalCppDb2LUWSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCppDb2LUWSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppDb2LUWSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppDb2LUWSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCppDb2LUWSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppDb2LUWSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppDb2LUWSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppDb2LUWSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppDb2LUWSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppDb2LUWSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppDb2LUWSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalCppDb2LUWSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppDb2LUWSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppDb2LUWSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppDb2LUWSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppDb2LUWSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppDb2LUWSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppMSSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppMSSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppMSSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppMSSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppMSSqlSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCppMSSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppMSSqlSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppMSSqlSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppMSSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppMSSqlSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppMSSqlSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppMSSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCppMSSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppMSSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppMSSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppMSSqlSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalCppMSSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCppMSSqlSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppMSSqlSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppMSSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCppMSSqlSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppMSSqlSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppMSSqlSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppMSSqlSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppMSSqlSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppMSSqlSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppMSSqlSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalCppMSSqlSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppMSSqlSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppMSSqlSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppMSSqlSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppMSSqlSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppMSSqlSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppMySqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppMySqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppMySqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppMySqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppMySqlSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCppMySqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppMySqlSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppMySqlSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppMySqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppMySqlSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppMySqlSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppMySqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCppMySqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppMySqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppMySqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppMySqlSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalCppMySqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCppMySqlSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppMySqlSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppMySqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCppMySqlSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppMySqlSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppMySqlSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppMySqlSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppMySqlSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppMySqlSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppMySqlSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalCppMySqlSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppMySqlSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppMySqlSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppMySqlSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppMySqlSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppMySqlSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppOracleSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppOracleSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppOracleSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppOracleSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppOracleSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppOracleSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppOracleSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCppOracleSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppOracleSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppOracleSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppOracleSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppOracleSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppOracleSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppOracleSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppOracleSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCppOracleSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppOracleSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCppOracleSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppOracleSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCppOracleSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppOracleSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalCppOracleSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCppOracleSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppOracleSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppOracleSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCppOracleSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppOracleSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppOracleSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppOracleSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppOracleSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppOracleSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppOracleSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppOracleSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppOracleSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppOracleSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalCppOracleSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppOracleSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppOracleSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppOracleSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppOracleSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppOracleSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppOracleSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppPgSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppPgSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppPgSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppPgSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppPgSqlSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCppPgSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppPgSqlSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppPgSqlSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppPgSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppPgSqlSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppPgSqlSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppPgSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCppPgSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppPgSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppPgSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppPgSqlSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalCppPgSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCppPgSqlSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppPgSqlSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppPgSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCppPgSqlSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppPgSqlSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppPgSqlSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppPgSqlSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppPgSqlSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppPgSqlSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppPgSqlSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalCppPgSqlSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppPgSqlSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppPgSqlSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppPgSqlSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppPgSqlSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppPgSqlSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppRamSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppRamSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppRamSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppRamSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppRamSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppRamSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppRamSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCppRamSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppRamSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppRamSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppRamSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppRamSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppRamSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppRamSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppRamSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCppRamSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppRamSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCppRamSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppRamSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCppRamSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppRamSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalCppRamSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCppRamSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppRamSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppRamSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCppRamSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppRamSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppRamSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppRamSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppRamSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppRamSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppRamSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppRamSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppRamSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppRamSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalCppRamSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppRamSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppRamSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppRamSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppRamSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppRamSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppRamSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgSchemaIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgSchemaIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgSchemaIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgSchemaIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgSchemaIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgSchemaIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgSchemaIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgSchemaFormattersNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgSchemaFormattersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgSchemaFormattersValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgSchemaFormattersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgSchemaFormattersReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgSchemaFormattersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgSchemaFormattersNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgSchemaFormattersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgSchemaFormattersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgSchemaFormattersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgSchemaFormattersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgSchemaFormattersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgSchemaFormattersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgSchemaFormattersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgClientSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgClientSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgClientSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgClientSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgClientSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgClientSchemaIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgClientSchemaIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgClientSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgClientSchemaIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgClientSchemaIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgClientSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgClientSchemaIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgClientSchemaIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgClientSchemaIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgClientSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgClientSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgClientSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgClientSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgClientSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgClientSchemaBodyReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgClientSchemaBodyNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgClientSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgClientSchemaBodyNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgClientSchemaBodyValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgClientSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgClientSchemaBodyValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgClientSchemaBodyValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgClientSchemaBodyValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgRqstSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaBodyReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRqstSchemaBodyNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaBodyNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRqstSchemaBodyValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaBodyValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaBodyValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaBodyValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgRqstSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRqstSchemaIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRqstSchemaIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgRqstSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaWireParsersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRqstSchemaWireParsersNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaWireParsersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRqstSchemaWireParsersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaWireParsersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaWireParsersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaWireParsersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgRqstSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaXsdSpecReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRqstSchemaXsdSpecNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaXsdSpecNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRqstSchemaXsdSpecValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaXsdSpecValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaXsdSpecValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaXsdSpecValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgRqstSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgRqstSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaXsdElementListReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRqstSchemaXsdElementListNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaXsdElementListNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRqstSchemaXsdElementListValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaXsdElementListValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaXsdElementListValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRqstSchemaXsdElementListValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgRspnSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaBodyReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRspnSchemaBodyNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaBodyNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRspnSchemaBodyValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaBodyValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaBodyValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaBodyValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgRspnSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRspnSchemaIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRspnSchemaIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgRspnSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaWireParsersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRspnSchemaWireParsersNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaWireParsersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRspnSchemaWireParsersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaWireParsersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaWireParsersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaWireParsersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgRspnSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaXsdElementListReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRspnSchemaXsdElementListNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaXsdElementListNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRspnSchemaXsdElementListValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaXsdElementListValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaXsdElementListValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaXsdElementListValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCppXMsgRspnSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCppXMsgRspnSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaXsdSpecReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRspnSchemaXsdSpecNull() {
		if( ! getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaXsdSpecNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCppXMsgRspnSchemaXsdSpecValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaXsdSpecValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaXsdSpecValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCppXMsgRspnSchemaXsdSpecValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalHppSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppSchemaObjInterfaceNull() {
		return( getSchemaDefBuff()->isOptionalHppSchemaObjInterfaceNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppSchemaObjInterfaceValue() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjInterfaceValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppSchemaObjInterfaceReference() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjInterfaceReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppSchemaObjInterfaceNull() {
		if( ! getSchemaDefBuff()->isOptionalHppSchemaObjInterfaceNull() ) {
			getSchemaDefEditBuff()->setOptionalHppSchemaObjInterfaceNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppSchemaObjInterfaceValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppSchemaObjInterfaceNull() ) {
			getSchemaDefEditBuff()->setOptionalHppSchemaObjInterfaceValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppSchemaObjInterfaceValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppSchemaObjInterfaceValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalHppSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppSchemaObjImplementationNull() {
		return( getSchemaDefBuff()->isOptionalHppSchemaObjImplementationNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppSchemaObjImplementationValue() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjImplementationValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppSchemaObjImplementationReference() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjImplementationReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppSchemaObjImplementationNull() {
		if( ! getSchemaDefBuff()->isOptionalHppSchemaObjImplementationNull() ) {
			getSchemaDefEditBuff()->setOptionalHppSchemaObjImplementationNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppSchemaObjImplementationValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppSchemaObjImplementationNull() ) {
			getSchemaDefEditBuff()->setOptionalHppSchemaObjImplementationValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppSchemaObjImplementationValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppSchemaObjImplementationValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppDb2LUWSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppDb2LUWSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppDb2LUWSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppDb2LUWSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppDb2LUWSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalHppDb2LUWSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppDb2LUWSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppDb2LUWSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppDb2LUWSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppDb2LUWSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppDb2LUWSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppDb2LUWSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalHppDb2LUWSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppDb2LUWSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppDb2LUWSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppDb2LUWSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalHppDb2LUWSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalHppDb2LUWSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppDb2LUWSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppDb2LUWSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalHppDb2LUWSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppDb2LUWSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppDb2LUWSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppDb2LUWSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppDb2LUWSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppDb2LUWSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppDb2LUWSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalHppDb2LUWSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppDb2LUWSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppDb2LUWSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppDb2LUWSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppDb2LUWSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppDb2LUWSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppMSSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppMSSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppMSSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppMSSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppMSSqlSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalHppMSSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppMSSqlSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppMSSqlSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppMSSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppMSSqlSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppMSSqlSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppMSSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalHppMSSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppMSSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppMSSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppMSSqlSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalHppMSSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalHppMSSqlSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppMSSqlSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppMSSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalHppMSSqlSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppMSSqlSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppMSSqlSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppMSSqlSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppMSSqlSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppMSSqlSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppMSSqlSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalHppMSSqlSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppMSSqlSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppMSSqlSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppMSSqlSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppMSSqlSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppMSSqlSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppMySqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppMySqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppMySqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppMySqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppMySqlSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalHppMySqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppMySqlSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppMySqlSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppMySqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppMySqlSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppMySqlSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppMySqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalHppMySqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppMySqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppMySqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppMySqlSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalHppMySqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalHppMySqlSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppMySqlSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppMySqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalHppMySqlSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppMySqlSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppMySqlSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppMySqlSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppMySqlSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppMySqlSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppMySqlSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalHppMySqlSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppMySqlSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppMySqlSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppMySqlSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppMySqlSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppMySqlSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppOracleSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppOracleSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppOracleSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppOracleSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppOracleSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppOracleSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppOracleSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalHppOracleSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppOracleSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppOracleSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppOracleSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppOracleSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppOracleSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppOracleSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppOracleSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalHppOracleSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppOracleSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalHppOracleSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppOracleSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalHppOracleSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppOracleSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalHppOracleSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalHppOracleSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppOracleSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppOracleSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalHppOracleSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppOracleSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppOracleSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppOracleSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppOracleSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppOracleSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppOracleSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppOracleSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppOracleSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppOracleSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalHppOracleSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppOracleSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppOracleSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppOracleSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppOracleSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppOracleSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppOracleSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppPgSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppPgSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppPgSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppPgSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppPgSqlSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalHppPgSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppPgSqlSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppPgSqlSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppPgSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppPgSqlSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppPgSqlSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppPgSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalHppPgSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppPgSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppPgSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppPgSqlSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalHppPgSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalHppPgSqlSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppPgSqlSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppPgSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalHppPgSqlSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppPgSqlSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppPgSqlSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppPgSqlSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppPgSqlSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppPgSqlSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppPgSqlSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalHppPgSqlSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppPgSqlSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppPgSqlSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppPgSqlSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppPgSqlSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppPgSqlSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppRamSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppRamSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppRamSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppRamSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppRamSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppRamSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppRamSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalHppRamSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppRamSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppRamSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppRamSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppRamSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppRamSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppRamSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppRamSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalHppRamSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppRamSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalHppRamSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppRamSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalHppRamSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppRamSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalHppRamSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalHppRamSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppRamSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppRamSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalHppRamSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppRamSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppRamSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppRamSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppRamSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppRamSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppRamSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppRamSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppRamSchemaObjIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppRamSchemaObjIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalHppRamSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppRamSchemaObjIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppRamSchemaObjIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppRamSchemaObjIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppRamSchemaObjIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppRamSchemaObjIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppRamSchemaObjIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgSchemaIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgSchemaIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgSchemaIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgSchemaIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgSchemaIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgSchemaIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgSchemaIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgSchemaFormattersNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgSchemaFormattersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgSchemaFormattersValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgSchemaFormattersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgSchemaFormattersReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgSchemaFormattersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgSchemaFormattersNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgSchemaFormattersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgSchemaFormattersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgSchemaFormattersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgSchemaFormattersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgSchemaFormattersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgSchemaFormattersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgSchemaFormattersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgClientSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgClientSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgClientSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgClientSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgClientSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgClientSchemaIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgClientSchemaIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgClientSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgClientSchemaIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgClientSchemaIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgClientSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgClientSchemaIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgClientSchemaIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgClientSchemaIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgClientSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgClientSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgClientSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgClientSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgClientSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgClientSchemaBodyReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgClientSchemaBodyNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgClientSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgClientSchemaBodyNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgClientSchemaBodyValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgClientSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgClientSchemaBodyValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgClientSchemaBodyValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgClientSchemaBodyValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgRqstSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaBodyReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRqstSchemaBodyNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaBodyNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRqstSchemaBodyValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaBodyValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaBodyValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaBodyValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgRqstSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRqstSchemaIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRqstSchemaIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgRqstSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaWireParsersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRqstSchemaWireParsersNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaWireParsersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRqstSchemaWireParsersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaWireParsersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaWireParsersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaWireParsersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgRqstSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaXsdSpecReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRqstSchemaXsdSpecNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaXsdSpecNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRqstSchemaXsdSpecValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaXsdSpecValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaXsdSpecValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaXsdSpecValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgRqstSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgRqstSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaXsdElementListReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRqstSchemaXsdElementListNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaXsdElementListNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRqstSchemaXsdElementListValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaXsdElementListValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaXsdElementListValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRqstSchemaXsdElementListValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgRspnSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaBodyReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRspnSchemaBodyNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaBodyNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRspnSchemaBodyValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaBodyValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaBodyValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaBodyValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgRspnSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaIncludeReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRspnSchemaIncludeNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaIncludeNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRspnSchemaIncludeValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaIncludeNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaIncludeValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaIncludeValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaIncludeValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgRspnSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaWireParsersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRspnSchemaWireParsersNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaWireParsersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRspnSchemaWireParsersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaWireParsersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaWireParsersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaWireParsersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgRspnSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaXsdElementListReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRspnSchemaXsdElementListNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaXsdElementListNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRspnSchemaXsdElementListValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaXsdElementListValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaXsdElementListValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaXsdElementListValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalHppXMsgRspnSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalHppXMsgRspnSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaXsdSpecReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRspnSchemaXsdSpecNull() {
		if( ! getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaXsdSpecNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalHppXMsgRspnSchemaXsdSpecValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaXsdSpecValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaXsdSpecValue() != value ) {
			getSchemaDefEditBuff()->setOptionalHppXMsgRspnSchemaXsdSpecValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjUsingReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsSchemaObjUsingNull() {
		if( ! getSchemaDefBuff()->isOptionalCsSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsSchemaObjUsingNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsSchemaObjUsingValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsSchemaObjUsingValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsSchemaObjUsingValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsSchemaObjUsingValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsSchemaObjInterfaceNull() {
		return( getSchemaDefBuff()->isOptionalCsSchemaObjInterfaceNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsSchemaObjInterfaceValue() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjInterfaceValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsSchemaObjInterfaceReference() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjInterfaceReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsSchemaObjInterfaceNull() {
		if( ! getSchemaDefBuff()->isOptionalCsSchemaObjInterfaceNull() ) {
			getSchemaDefEditBuff()->setOptionalCsSchemaObjInterfaceNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsSchemaObjInterfaceValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsSchemaObjInterfaceNull() ) {
			getSchemaDefEditBuff()->setOptionalCsSchemaObjInterfaceValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsSchemaObjInterfaceValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsSchemaObjInterfaceValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCsSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsSchemaObjImplementationNull() {
		return( getSchemaDefBuff()->isOptionalCsSchemaObjImplementationNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsSchemaObjImplementationValue() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjImplementationValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsSchemaObjImplementationReference() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjImplementationReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsSchemaObjImplementationNull() {
		if( ! getSchemaDefBuff()->isOptionalCsSchemaObjImplementationNull() ) {
			getSchemaDefEditBuff()->setOptionalCsSchemaObjImplementationNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsSchemaObjImplementationValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsSchemaObjImplementationNull() ) {
			getSchemaDefEditBuff()->setOptionalCsSchemaObjImplementationValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsSchemaObjImplementationValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsSchemaObjImplementationValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsDb2LUWSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsDb2LUWSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsDb2LUWSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsDb2LUWSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsDb2LUWSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCsDb2LUWSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsDb2LUWSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsDb2LUWSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsDb2LUWSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsDb2LUWSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsDb2LUWSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsDb2LUWSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCsDb2LUWSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsDb2LUWSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsDb2LUWSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsDb2LUWSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalCsDb2LUWSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCsDb2LUWSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsDb2LUWSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsDb2LUWSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCsDb2LUWSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsDb2LUWSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsDb2LUWSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsDb2LUWSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsDb2LUWSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsDb2LUWSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjUsingReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsDb2LUWSchemaObjUsingNull() {
		if( ! getSchemaDefBuff()->isOptionalCsDb2LUWSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsDb2LUWSchemaObjUsingNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsDb2LUWSchemaObjUsingValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsDb2LUWSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsDb2LUWSchemaObjUsingValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjUsingValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsDb2LUWSchemaObjUsingValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsMSSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsMSSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsMSSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsMSSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsMSSqlSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCsMSSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsMSSqlSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsMSSqlSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsMSSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsMSSqlSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsMSSqlSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsMSSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCsMSSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsMSSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsMSSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsMSSqlSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalCsMSSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCsMSSqlSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsMSSqlSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsMSSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCsMSSqlSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsMSSqlSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsMSSqlSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsMSSqlSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsMSSqlSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsMSSqlSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjUsingReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsMSSqlSchemaObjUsingNull() {
		if( ! getSchemaDefBuff()->isOptionalCsMSSqlSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsMSSqlSchemaObjUsingNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsMSSqlSchemaObjUsingValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsMSSqlSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsMSSqlSchemaObjUsingValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjUsingValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsMSSqlSchemaObjUsingValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsMySqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsMySqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsMySqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsMySqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsMySqlSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCsMySqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsMySqlSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsMySqlSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsMySqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsMySqlSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsMySqlSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsMySqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCsMySqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsMySqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsMySqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsMySqlSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalCsMySqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCsMySqlSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsMySqlSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsMySqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCsMySqlSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsMySqlSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsMySqlSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsMySqlSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsMySqlSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsMySqlSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjUsingReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsMySqlSchemaObjUsingNull() {
		if( ! getSchemaDefBuff()->isOptionalCsMySqlSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsMySqlSchemaObjUsingNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsMySqlSchemaObjUsingValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsMySqlSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsMySqlSchemaObjUsingValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjUsingValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsMySqlSchemaObjUsingValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsOracleSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsOracleSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsOracleSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsOracleSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsOracleSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsOracleSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsOracleSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCsOracleSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsOracleSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsOracleSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsOracleSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsOracleSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsOracleSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsOracleSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsOracleSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCsOracleSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsOracleSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCsOracleSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsOracleSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCsOracleSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsOracleSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalCsOracleSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCsOracleSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsOracleSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsOracleSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCsOracleSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsOracleSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsOracleSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsOracleSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsOracleSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsOracleSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsOracleSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsOracleSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsOracleSchemaObjUsingReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsOracleSchemaObjUsingNull() {
		if( ! getSchemaDefBuff()->isOptionalCsOracleSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsOracleSchemaObjUsingNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsOracleSchemaObjUsingValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsOracleSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsOracleSchemaObjUsingValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsOracleSchemaObjUsingValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsOracleSchemaObjUsingValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsPgSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsPgSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsPgSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsPgSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsPgSqlSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCsPgSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsPgSqlSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsPgSqlSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsPgSqlSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsPgSqlSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsPgSqlSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsPgSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCsPgSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsPgSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsPgSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsPgSqlSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalCsPgSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCsPgSqlSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsPgSqlSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsPgSqlSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCsPgSqlSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsPgSqlSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsPgSqlSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsPgSqlSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsPgSqlSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsPgSqlSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjUsingReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsPgSqlSchemaObjUsingNull() {
		if( ! getSchemaDefBuff()->isOptionalCsPgSqlSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsPgSqlSchemaObjUsingNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsPgSqlSchemaObjUsingValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsPgSqlSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsPgSqlSchemaObjUsingValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjUsingValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsPgSqlSchemaObjUsingValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsRamSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsRamSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsRamSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsRamSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsRamSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsRamSchemaObjMembersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsRamSchemaObjMembersNull() {
		if( ! getSchemaDefBuff()->isOptionalCsRamSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsRamSchemaObjMembersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsRamSchemaObjMembersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsRamSchemaObjMembersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsRamSchemaObjMembersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsRamSchemaObjMembersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsRamSchemaObjMembersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsRamSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCsRamSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsRamSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCsRamSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsRamSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCsRamSchemaObjImplReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsRamSchemaObjImplNull() {
		if( ! getSchemaDefBuff()->isOptionalCsRamSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCsRamSchemaObjImplNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsRamSchemaObjImplValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsRamSchemaObjImplNull() ) {
			getSchemaDefEditBuff()->setOptionalCsRamSchemaObjImplValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsRamSchemaObjImplValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsRamSchemaObjImplValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsRamSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsRamSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsRamSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsRamSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsRamSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsRamSchemaObjUsingReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsRamSchemaObjUsingNull() {
		if( ! getSchemaDefBuff()->isOptionalCsRamSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsRamSchemaObjUsingNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsRamSchemaObjUsingValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsRamSchemaObjUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsRamSchemaObjUsingValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsRamSchemaObjUsingValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsRamSchemaObjUsingValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgSchemaUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgSchemaUsingNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgSchemaUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgSchemaUsingValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgSchemaUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgSchemaUsingReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgSchemaUsingNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgSchemaUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgSchemaUsingNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgSchemaUsingValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgSchemaUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgSchemaUsingValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgSchemaUsingValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgSchemaUsingValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgSchemaFormattersNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgSchemaFormattersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgSchemaFormattersValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgSchemaFormattersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgSchemaFormattersReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgSchemaFormattersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgSchemaFormattersNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgSchemaFormattersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgSchemaFormattersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgSchemaFormattersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgSchemaFormattersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgSchemaFormattersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgSchemaFormattersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgSchemaFormattersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgClientSchemaUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgClientSchemaUsingNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgClientSchemaUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgClientSchemaUsingValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgClientSchemaUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgClientSchemaUsingReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgClientSchemaUsingNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgClientSchemaUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgClientSchemaUsingNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgClientSchemaUsingValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgClientSchemaUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgClientSchemaUsingValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgClientSchemaUsingValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgClientSchemaUsingValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgClientSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgClientSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgClientSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgClientSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgClientSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgClientSchemaBodyReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgClientSchemaBodyNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgClientSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgClientSchemaBodyNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgClientSchemaBodyValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgClientSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgClientSchemaBodyValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgClientSchemaBodyValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgClientSchemaBodyValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgRqstSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaBodyReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRqstSchemaBodyNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaBodyNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRqstSchemaBodyValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaBodyValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaBodyValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaBodyValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgRqstSchemaUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaUsingNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaUsingValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaUsingReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRqstSchemaUsingNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaUsingNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRqstSchemaUsingValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaUsingValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaUsingValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaUsingValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgRqstSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaWireParsersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRqstSchemaWireParsersNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaWireParsersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRqstSchemaWireParsersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaWireParsersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaWireParsersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaWireParsersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgRqstSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaXsdSpecReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRqstSchemaXsdSpecNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaXsdSpecNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRqstSchemaXsdSpecValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaXsdSpecValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaXsdSpecValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaXsdSpecValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgRqstSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgRqstSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaXsdElementListReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRqstSchemaXsdElementListNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaXsdElementListNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRqstSchemaXsdElementListValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaXsdElementListValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaXsdElementListValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRqstSchemaXsdElementListValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgRspnSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaBodyReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRspnSchemaBodyNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaBodyNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRspnSchemaBodyValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaBodyNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaBodyValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaBodyValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaBodyValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgRspnSchemaUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaUsingNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaUsingValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaUsingReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRspnSchemaUsingNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaUsingNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRspnSchemaUsingValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaUsingNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaUsingValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaUsingValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaUsingValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgRspnSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaWireParsersReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRspnSchemaWireParsersNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaWireParsersNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRspnSchemaWireParsersValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaWireParsersNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaWireParsersValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaWireParsersValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaWireParsersValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgRspnSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaXsdElementListReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRspnSchemaXsdElementListNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaXsdElementListNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRspnSchemaXsdElementListValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaXsdElementListNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaXsdElementListValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaXsdElementListValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaXsdElementListValue( value );
		}
	}

	bool CFBamSchemaDefEditObj::isOptionalCsXMsgRspnSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefEditObj::getOptionalCsXMsgRspnSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaXsdSpecReference() );
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRspnSchemaXsdSpecNull() {
		if( ! getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaXsdSpecNull();
		}
	}

	void CFBamSchemaDefEditObj::setOptionalCsXMsgRspnSchemaXsdSpecValue( const std::string& value ) {
		if( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaXsdSpecNull() ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaXsdSpecValue( value );
		}
		else if( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaXsdSpecValue() != value ) {
			getSchemaDefEditBuff()->setOptionalCsXMsgRspnSchemaXsdSpecValue( value );
		}
	}

	cfint::ICFIntMinorVersionObj* CFBamSchemaDefEditObj::getRequiredContainerMinorVersion( bool forceRead ) {
		cfint::ICFIntMinorVersionObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSchemaDef()->getSchema() )->getMinorVersionTableObj()->readMinorVersionByIdIdx( getPKey()->getRequiredTenantId(),
					getSchemaDefBuff()->getRequiredMinorVersionId() );
		}
		return( retobj );
	}

	void CFBamSchemaDefEditObj::setRequiredContainerMinorVersion( cfint::ICFIntMinorVersionObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getSchemaDefEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getSchemaDefEditBuff()->setRequiredMinorVersionId( value->getRequiredId() );
			}
		}

	std::vector<cfbam::ICFBamTableObj*> CFBamSchemaDefEditObj::getOptionalComponentsTables( bool forceRead ) {
		std::vector<cfbam::ICFBamTableObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSchemaDef()->getSchema() )->getTableTableObj()->readTableBySchemaDefIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamValueObj*> CFBamSchemaDefEditObj::getOptionalComponentsTypes( bool forceRead ) {
		std::vector<cfbam::ICFBamValueObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSchemaDef()->getSchema() )->getValueTableObj()->readValueByScopeIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaDefEditObj::getOptionalComponentsSchemaRefs( bool forceRead ) {
		std::vector<cfbam::ICFBamSchemaRefObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSchemaDef()->getSchema() )->getSchemaRefTableObj()->readSchemaRefBySchemaIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfsec::ICFSecTenantObj* CFBamSchemaDefEditObj::getRequiredOwnerCTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsSchemaDef()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFBamSchemaDefEditObj::setRequiredOwnerCTenant( cfsec::ICFSecTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getSchemaDefEditBuff()->setRequiredTenantId( value->getRequiredId() );
			}

			CFBamScopeEditObj::setRequiredOwnerTenant( value );		}

	void CFBamSchemaDefEditObj::copyBuffToOrig() {
		cfbam::CFBamSchemaDefBuff* origBuff = getOrigAsSchemaDef()->getSchemaDefEditBuff();
		cfbam::CFBamSchemaDefBuff* myBuff = getSchemaDefBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamSchemaDefEditObj::copyOrigToBuff() {
		cfbam::CFBamSchemaDefBuff* origBuff = getOrigAsSchemaDef()->getSchemaDefBuff();
		cfbam::CFBamSchemaDefBuff* myBuff = getSchemaDefEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
