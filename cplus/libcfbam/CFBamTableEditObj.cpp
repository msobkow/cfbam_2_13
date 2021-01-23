// Description: C++18 edit object instance implementation for CFBam Table.

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
#include <cfbamobj/CFBamTableObj.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/ICFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamTableEditObj.hpp>


namespace cfbam {

	const std::string CFBamTableEditObj::CLASS_NAME( "CFBamTableEditObj" );

	CFBamTableEditObj::CFBamTableEditObj( cfbam::ICFBamTableObj* argOrig )
	: ICFBamTableEditObj(),
	  CFBamScopeEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFBamTableEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFBamTableEditObj::~CFBamTableEditObj() {
	}

	const std::string& CFBamTableEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamTableEditObj::getClassCode() const {
		return( cfbam::CFBamTableBuff::CLASS_CODE );
	}

	bool CFBamTableEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamTableBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamTableEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTableEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_SchemaDefId( "SchemaDefId" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_DbName( "DbName" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_PageData( "PageData" );
		static const std::string S_PrimaryIndexTenantId( "PrimaryIndexTenantId" );
		static const std::string S_PrimaryIndexId( "PrimaryIndexId" );
		static const std::string S_TableClassCode( "TableClassCode" );
		static const std::string S_LookupIndexTenantId( "LookupIndexTenantId" );
		static const std::string S_LookupIndexId( "LookupIndexId" );
		static const std::string S_AltIndexTenantId( "AltIndexTenantId" );
		static const std::string S_AltIndexId( "AltIndexId" );
		static const std::string S_QualifyingTenantId( "QualifyingTenantId" );
		static const std::string S_QualifyingTableId( "QualifyingTableId" );
		static const std::string S_IsInstantiable( "IsInstantiable" );
		static const std::string S_HasHistory( "HasHistory" );
		static const std::string S_HasAuditColumns( "HasAuditColumns" );
		static const std::string S_IsMutable( "IsMutable" );
		static const std::string S_IsServerOnly( "IsServerOnly" );
		static const std::string S_LoaderBehaviour( "LoaderBehaviour" );
		static const std::string S_SecScope( "SecScope" );
		static const std::string S_JObjMembers( "JObjMembers" );
		static const std::string S_JObjInterface( "JObjInterface" );
		static const std::string S_JObjImport( "JObjImport" );
		static const std::string S_JObjImplementation( "JObjImplementation" );
		static const std::string S_JEditObjMembers( "JEditObjMembers" );
		static const std::string S_JEditObjInterface( "JEditObjInterface" );
		static const std::string S_JEditObjImport( "JEditObjImport" );
		static const std::string S_JEditObjImplementation( "JEditObjImplementation" );
		static const std::string S_JTableImport( "JTableImport" );
		static const std::string S_JTableMembers( "JTableMembers" );
		static const std::string S_JTableInterface( "JTableInterface" );
		static const std::string S_JTableImplementation( "JTableImplementation" );
		static const std::string S_JTableObjImport( "JTableObjImport" );
		static const std::string S_JTableObjMembers( "JTableObjMembers" );
		static const std::string S_JTableObjInterface( "JTableObjInterface" );
		static const std::string S_JTableObjImplementation( "JTableObjImplementation" );
		static const std::string S_JDb2LUWTableImport( "JDb2LUWTableImport" );
		static const std::string S_JDb2LUWTableMembers( "JDb2LUWTableMembers" );
		static const std::string S_JDb2LUWTableImplementation( "JDb2LUWTableImplementation" );
		static const std::string S_JMSSqlTableImport( "JMSSqlTableImport" );
		static const std::string S_JMSSqlTableMembers( "JMSSqlTableMembers" );
		static const std::string S_JMSSqlTableImplementation( "JMSSqlTableImplementation" );
		static const std::string S_JMySqlTableImport( "JMySqlTableImport" );
		static const std::string S_JMySqlTableMembers( "JMySqlTableMembers" );
		static const std::string S_JMySqlTableImplementation( "JMySqlTableImplementation" );
		static const std::string S_JOracleTableImport( "JOracleTableImport" );
		static const std::string S_JOracleTableMembers( "JOracleTableMembers" );
		static const std::string S_JOracleTableImplementation( "JOracleTableImplementation" );
		static const std::string S_JPgSqlTableImport( "JPgSqlTableImport" );
		static const std::string S_JPgSqlTableMembers( "JPgSqlTableMembers" );
		static const std::string S_JPgSqlTableImplementation( "JPgSqlTableImplementation" );
		static const std::string S_JRamTableImport( "JRamTableImport" );
		static const std::string S_JRamTableMembers( "JRamTableMembers" );
		static const std::string S_JRamTableImplementation( "JRamTableImplementation" );
		static const std::string S_JSaxLoaderImport( "JSaxLoaderImport" );
		static const std::string S_JSaxLoaderStartElement( "JSaxLoaderStartElement" );
		static const std::string S_JSaxLoaderEndElement( "JSaxLoaderEndElement" );
		static const std::string S_JXMsgTableImport( "JXMsgTableImport" );
		static const std::string S_JXMsgTableFormatters( "JXMsgTableFormatters" );
		static const std::string S_JXMsgRqstTableImport( "JXMsgRqstTableImport" );
		static const std::string S_JXMsgRspnTableImport( "JXMsgRspnTableImport" );
		static const std::string S_JXMsgClientTableImport( "JXMsgClientTableImport" );
		static const std::string S_JXMsgRqstTableBody( "JXMsgRqstTableBody" );
		static const std::string S_JXMsgRspnTableBody( "JXMsgRspnTableBody" );
		static const std::string S_JXMsgClientTableBody( "JXMsgClientTableBody" );
		static const std::string S_CppObjMembers( "CppObjMembers" );
		static const std::string S_CppObjInterface( "CppObjInterface" );
		static const std::string S_CppObjInclude( "CppObjInclude" );
		static const std::string S_CppObjImplementation( "CppObjImplementation" );
		static const std::string S_CppEditObjMembers( "CppEditObjMembers" );
		static const std::string S_CppEditObjInterface( "CppEditObjInterface" );
		static const std::string S_CppEditObjInclude( "CppEditObjInclude" );
		static const std::string S_CppEditObjImplementation( "CppEditObjImplementation" );
		static const std::string S_CppTableInclude( "CppTableInclude" );
		static const std::string S_CppTableMembers( "CppTableMembers" );
		static const std::string S_CppTableInterface( "CppTableInterface" );
		static const std::string S_CppTableImplementation( "CppTableImplementation" );
		static const std::string S_CppTableObjInclude( "CppTableObjInclude" );
		static const std::string S_CppTableObjMembers( "CppTableObjMembers" );
		static const std::string S_CppTableObjInterface( "CppTableObjInterface" );
		static const std::string S_CppTableObjImplementation( "CppTableObjImplementation" );
		static const std::string S_CppDb2LUWTableInclude( "CppDb2LUWTableInclude" );
		static const std::string S_CppDb2LUWTableMembers( "CppDb2LUWTableMembers" );
		static const std::string S_CppDb2LUWTableImplementation( "CppDb2LUWTableImplementation" );
		static const std::string S_CppMSSqlTableInclude( "CppMSSqlTableInclude" );
		static const std::string S_CppMSSqlTableMembers( "CppMSSqlTableMembers" );
		static const std::string S_CppMSSqlTableImplementation( "CppMSSqlTableImplementation" );
		static const std::string S_CppMySqlTableInclude( "CppMySqlTableInclude" );
		static const std::string S_CppMySqlTableMembers( "CppMySqlTableMembers" );
		static const std::string S_CppMySqlTableImplementation( "CppMySqlTableImplementation" );
		static const std::string S_CppOracleTableInclude( "CppOracleTableInclude" );
		static const std::string S_CppOracleTableMembers( "CppOracleTableMembers" );
		static const std::string S_CppOracleTableImplementation( "CppOracleTableImplementation" );
		static const std::string S_CppPgSqlTableInclude( "CppPgSqlTableInclude" );
		static const std::string S_CppPgSqlTableMembers( "CppPgSqlTableMembers" );
		static const std::string S_CppPgSqlTableImplementation( "CppPgSqlTableImplementation" );
		static const std::string S_CppRamTableInclude( "CppRamTableInclude" );
		static const std::string S_CppRamTableMembers( "CppRamTableMembers" );
		static const std::string S_CppRamTableImplementation( "CppRamTableImplementation" );
		static const std::string S_CppSaxLoaderInclude( "CppSaxLoaderInclude" );
		static const std::string S_CppSaxLoaderStartElement( "CppSaxLoaderStartElement" );
		static const std::string S_CppSaxLoaderEndElement( "CppSaxLoaderEndElement" );
		static const std::string S_CppXMsgTableInclude( "CppXMsgTableInclude" );
		static const std::string S_CppXMsgTableFormatters( "CppXMsgTableFormatters" );
		static const std::string S_CppXMsgRqstTableInclude( "CppXMsgRqstTableInclude" );
		static const std::string S_CppXMsgRspnTableInclude( "CppXMsgRspnTableInclude" );
		static const std::string S_CppXMsgClientTableInclude( "CppXMsgClientTableInclude" );
		static const std::string S_CppXMsgRqstTableBody( "CppXMsgRqstTableBody" );
		static const std::string S_CppXMsgRspnTableBody( "CppXMsgRspnTableBody" );
		static const std::string S_CppXMsgClientTableBody( "CppXMsgClientTableBody" );
		static const std::string S_HppObjMembers( "HppObjMembers" );
		static const std::string S_HppObjInterface( "HppObjInterface" );
		static const std::string S_HppObjInclude( "HppObjInclude" );
		static const std::string S_HppObjImplementation( "HppObjImplementation" );
		static const std::string S_HppEditObjMembers( "HppEditObjMembers" );
		static const std::string S_HppEditObjInterface( "HppEditObjInterface" );
		static const std::string S_HppEditObjInclude( "HppEditObjInclude" );
		static const std::string S_HppEditObjImplementation( "HppEditObjImplementation" );
		static const std::string S_HppTableInclude( "HppTableInclude" );
		static const std::string S_HppTableMembers( "HppTableMembers" );
		static const std::string S_HppTableInterface( "HppTableInterface" );
		static const std::string S_HppTableImplementation( "HppTableImplementation" );
		static const std::string S_HppTableObjInclude( "HppTableObjInclude" );
		static const std::string S_HppTableObjMembers( "HppTableObjMembers" );
		static const std::string S_HppTableObjInterface( "HppTableObjInterface" );
		static const std::string S_HppTableObjImplementation( "HppTableObjImplementation" );
		static const std::string S_HppDb2LUWTableInclude( "HppDb2LUWTableInclude" );
		static const std::string S_HppDb2LUWTableMembers( "HppDb2LUWTableMembers" );
		static const std::string S_HppDb2LUWTableImplementation( "HppDb2LUWTableImplementation" );
		static const std::string S_HppMSSqlTableInclude( "HppMSSqlTableInclude" );
		static const std::string S_HppMSSqlTableMembers( "HppMSSqlTableMembers" );
		static const std::string S_HppMSSqlTableImplementation( "HppMSSqlTableImplementation" );
		static const std::string S_HppMySqlTableInclude( "HppMySqlTableInclude" );
		static const std::string S_HppMySqlTableMembers( "HppMySqlTableMembers" );
		static const std::string S_HppMySqlTableImplementation( "HppMySqlTableImplementation" );
		static const std::string S_HppOracleTableInclude( "HppOracleTableInclude" );
		static const std::string S_HppOracleTableMembers( "HppOracleTableMembers" );
		static const std::string S_HppOracleTableImplementation( "HppOracleTableImplementation" );
		static const std::string S_HppPgSqlTableInclude( "HppPgSqlTableInclude" );
		static const std::string S_HppPgSqlTableMembers( "HppPgSqlTableMembers" );
		static const std::string S_HppPgSqlTableImplementation( "HppPgSqlTableImplementation" );
		static const std::string S_HppRamTableInclude( "HppRamTableInclude" );
		static const std::string S_HppRamTableMembers( "HppRamTableMembers" );
		static const std::string S_HppRamTableImplementation( "HppRamTableImplementation" );
		static const std::string S_HppSaxLoaderInclude( "HppSaxLoaderInclude" );
		static const std::string S_HppSaxLoaderStartElement( "HppSaxLoaderStartElement" );
		static const std::string S_HppSaxLoaderEndElement( "HppSaxLoaderEndElement" );
		static const std::string S_HppXMsgTableInclude( "HppXMsgTableInclude" );
		static const std::string S_HppXMsgTableFormatters( "HppXMsgTableFormatters" );
		static const std::string S_HppXMsgRqstTableInclude( "HppXMsgRqstTableInclude" );
		static const std::string S_HppXMsgRspnTableInclude( "HppXMsgRspnTableInclude" );
		static const std::string S_HppXMsgClientTableInclude( "HppXMsgClientTableInclude" );
		static const std::string S_HppXMsgRqstTableBody( "HppXMsgRqstTableBody" );
		static const std::string S_HppXMsgRspnTableBody( "HppXMsgRspnTableBody" );
		static const std::string S_HppXMsgClientTableBody( "HppXMsgClientTableBody" );
		static const std::string S_CsObjMembers( "CsObjMembers" );
		static const std::string S_CsObjInterface( "CsObjInterface" );
		static const std::string S_CsObjUsing( "CsObjUsing" );
		static const std::string S_CsObjImplementation( "CsObjImplementation" );
		static const std::string S_CsEditObjMembers( "CsEditObjMembers" );
		static const std::string S_CsEditObjInterface( "CsEditObjInterface" );
		static const std::string S_CsEditObjUsing( "CsEditObjUsing" );
		static const std::string S_CsEditObjImplementation( "CsEditObjImplementation" );
		static const std::string S_CsTableUsing( "CsTableUsing" );
		static const std::string S_CsTableMembers( "CsTableMembers" );
		static const std::string S_CsTableInterface( "CsTableInterface" );
		static const std::string S_CsTableImplementation( "CsTableImplementation" );
		static const std::string S_CsTableObjUsing( "CsTableObjUsing" );
		static const std::string S_CsTableObjMembers( "CsTableObjMembers" );
		static const std::string S_CsTableObjInterface( "CsTableObjInterface" );
		static const std::string S_CsTableObjImplementation( "CsTableObjImplementation" );
		static const std::string S_CsDb2LUWTableUsing( "CsDb2LUWTableUsing" );
		static const std::string S_CsDb2LUWTableMembers( "CsDb2LUWTableMembers" );
		static const std::string S_CsDb2LUWTableImplementation( "CsDb2LUWTableImplementation" );
		static const std::string S_CsMSSqlTableUsing( "CsMSSqlTableUsing" );
		static const std::string S_CsMSSqlTableMembers( "CsMSSqlTableMembers" );
		static const std::string S_CsMSSqlTableImplementation( "CsMSSqlTableImplementation" );
		static const std::string S_CsMySqlTableUsing( "CsMySqlTableUsing" );
		static const std::string S_CsMySqlTableMembers( "CsMySqlTableMembers" );
		static const std::string S_CsMySqlTableImplementation( "CsMySqlTableImplementation" );
		static const std::string S_CsOracleTableUsing( "CsOracleTableUsing" );
		static const std::string S_CsOracleTableMembers( "CsOracleTableMembers" );
		static const std::string S_CsOracleTableImplementation( "CsOracleTableImplementation" );
		static const std::string S_CsPgSqlTableUsing( "CsPgSqlTableUsing" );
		static const std::string S_CsPgSqlTableMembers( "CsPgSqlTableMembers" );
		static const std::string S_CsPgSqlTableImplementation( "CsPgSqlTableImplementation" );
		static const std::string S_CsRamTableUsing( "CsRamTableUsing" );
		static const std::string S_CsRamTableMembers( "CsRamTableMembers" );
		static const std::string S_CsRamTableImplementation( "CsRamTableImplementation" );
		static const std::string S_CsSaxLoaderUsing( "CsSaxLoaderUsing" );
		static const std::string S_CsSaxLoaderStartElement( "CsSaxLoaderStartElement" );
		static const std::string S_CsSaxLoaderEndElement( "CsSaxLoaderEndElement" );
		static const std::string S_CsXMsgTableUsing( "CsXMsgTableUsing" );
		static const std::string S_CsXMsgTableFormatters( "CsXMsgTableFormatters" );
		static const std::string S_CsXMsgRqstTableUsing( "CsXMsgRqstTableUsing" );
		static const std::string S_CsXMsgRspnTableUsing( "CsXMsgRspnTableUsing" );
		static const std::string S_CsXMsgClientTableUsing( "CsXMsgClientTableUsing" );
		static const std::string S_CsXMsgRqstTableBody( "CsXMsgRqstTableBody" );
		static const std::string S_CsXMsgRspnTableBody( "CsXMsgRspnTableBody" );
		static const std::string S_CsXMsgClientTableBody( "CsXMsgClientTableBody" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, CFBamTableEditObj::getRequiredSchemaDefId() ) );
		if( ! CFBamTableEditObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamTableEditObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamTableEditObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamTableEditObj::getRequiredName() ) );
		if( ! CFBamTableEditObj::isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, CFBamTableEditObj::getOptionalDbNameValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamTableEditObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamTableEditObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamTableEditObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamTableEditObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_PageData, CFBamTableEditObj::getRequiredPageData() ) );
		if( ! CFBamTableEditObj::isOptionalPrimaryIndexTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrimaryIndexTenantId, CFBamTableEditObj::getOptionalPrimaryIndexTenantIdValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalPrimaryIndexIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrimaryIndexId, CFBamTableEditObj::getOptionalPrimaryIndexIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_TableClassCode, CFBamTableEditObj::getRequiredTableClassCode() ) );
		if( ! CFBamTableEditObj::isOptionalLookupIndexTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LookupIndexTenantId, CFBamTableEditObj::getOptionalLookupIndexTenantIdValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalLookupIndexIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LookupIndexId, CFBamTableEditObj::getOptionalLookupIndexIdValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalAltIndexTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_AltIndexTenantId, CFBamTableEditObj::getOptionalAltIndexTenantIdValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalAltIndexIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_AltIndexId, CFBamTableEditObj::getOptionalAltIndexIdValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalQualifyingTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_QualifyingTenantId, CFBamTableEditObj::getOptionalQualifyingTenantIdValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalQualifyingTableIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_QualifyingTableId, CFBamTableEditObj::getOptionalQualifyingTableIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsInstantiable, CFBamTableEditObj::getRequiredIsInstantiable() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_HasHistory, CFBamTableEditObj::getRequiredHasHistory() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_HasAuditColumns, CFBamTableEditObj::getRequiredHasAuditColumns() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsMutable, CFBamTableEditObj::getRequiredIsMutable() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsServerOnly, CFBamTableEditObj::getRequiredIsServerOnly() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_LoaderBehaviour, CFBamTableEditObj::getRequiredLoaderBehaviour() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_SecScope, CFBamTableEditObj::getRequiredSecScope() ) );
		if( ! CFBamTableEditObj::isOptionalJObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JObjMembers, CFBamTableEditObj::getOptionalJObjMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JObjInterface, CFBamTableEditObj::getOptionalJObjInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JObjImport, CFBamTableEditObj::getOptionalJObjImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JObjImplementation, CFBamTableEditObj::getOptionalJObjImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJEditObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEditObjMembers, CFBamTableEditObj::getOptionalJEditObjMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJEditObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEditObjInterface, CFBamTableEditObj::getOptionalJEditObjInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJEditObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEditObjImport, CFBamTableEditObj::getOptionalJEditObjImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJEditObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEditObjImplementation, CFBamTableEditObj::getOptionalJEditObjImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableImport, CFBamTableEditObj::getOptionalJTableImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableMembers, CFBamTableEditObj::getOptionalJTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJTableInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableInterface, CFBamTableEditObj::getOptionalJTableInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableImplementation, CFBamTableEditObj::getOptionalJTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJTableObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableObjImport, CFBamTableEditObj::getOptionalJTableObjImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJTableObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableObjMembers, CFBamTableEditObj::getOptionalJTableObjMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJTableObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableObjInterface, CFBamTableEditObj::getOptionalJTableObjInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJTableObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableObjImplementation, CFBamTableEditObj::getOptionalJTableObjImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJDb2LUWTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JDb2LUWTableImport, CFBamTableEditObj::getOptionalJDb2LUWTableImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJDb2LUWTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JDb2LUWTableMembers, CFBamTableEditObj::getOptionalJDb2LUWTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJDb2LUWTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JDb2LUWTableImplementation, CFBamTableEditObj::getOptionalJDb2LUWTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJMSSqlTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMSSqlTableImport, CFBamTableEditObj::getOptionalJMSSqlTableImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJMSSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMSSqlTableMembers, CFBamTableEditObj::getOptionalJMSSqlTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJMSSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMSSqlTableImplementation, CFBamTableEditObj::getOptionalJMSSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJMySqlTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMySqlTableImport, CFBamTableEditObj::getOptionalJMySqlTableImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJMySqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMySqlTableMembers, CFBamTableEditObj::getOptionalJMySqlTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJMySqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMySqlTableImplementation, CFBamTableEditObj::getOptionalJMySqlTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJOracleTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JOracleTableImport, CFBamTableEditObj::getOptionalJOracleTableImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJOracleTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JOracleTableMembers, CFBamTableEditObj::getOptionalJOracleTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJOracleTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JOracleTableImplementation, CFBamTableEditObj::getOptionalJOracleTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJPgSqlTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JPgSqlTableImport, CFBamTableEditObj::getOptionalJPgSqlTableImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJPgSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JPgSqlTableMembers, CFBamTableEditObj::getOptionalJPgSqlTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJPgSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JPgSqlTableImplementation, CFBamTableEditObj::getOptionalJPgSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJRamTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JRamTableImport, CFBamTableEditObj::getOptionalJRamTableImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJRamTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JRamTableMembers, CFBamTableEditObj::getOptionalJRamTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJRamTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JRamTableImplementation, CFBamTableEditObj::getOptionalJRamTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJSaxLoaderImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSaxLoaderImport, CFBamTableEditObj::getOptionalJSaxLoaderImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJSaxLoaderStartElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSaxLoaderStartElement, CFBamTableEditObj::getOptionalJSaxLoaderStartElementValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJSaxLoaderEndElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSaxLoaderEndElement, CFBamTableEditObj::getOptionalJSaxLoaderEndElementValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJXMsgTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgTableImport, CFBamTableEditObj::getOptionalJXMsgTableImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJXMsgTableFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgTableFormatters, CFBamTableEditObj::getOptionalJXMsgTableFormattersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJXMsgRqstTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstTableImport, CFBamTableEditObj::getOptionalJXMsgRqstTableImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJXMsgRspnTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnTableImport, CFBamTableEditObj::getOptionalJXMsgRspnTableImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJXMsgClientTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgClientTableImport, CFBamTableEditObj::getOptionalJXMsgClientTableImportValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJXMsgRqstTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstTableBody, CFBamTableEditObj::getOptionalJXMsgRqstTableBodyValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJXMsgRspnTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnTableBody, CFBamTableEditObj::getOptionalJXMsgRspnTableBodyValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalJXMsgClientTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgClientTableBody, CFBamTableEditObj::getOptionalJXMsgClientTableBodyValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppObjMembers, CFBamTableEditObj::getOptionalCppObjMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppObjInterface, CFBamTableEditObj::getOptionalCppObjInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppObjInclude, CFBamTableEditObj::getOptionalCppObjIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppObjImplementation, CFBamTableEditObj::getOptionalCppObjImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppEditObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppEditObjMembers, CFBamTableEditObj::getOptionalCppEditObjMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppEditObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppEditObjInterface, CFBamTableEditObj::getOptionalCppEditObjInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppEditObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppEditObjInclude, CFBamTableEditObj::getOptionalCppEditObjIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppEditObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppEditObjImplementation, CFBamTableEditObj::getOptionalCppEditObjImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableInclude, CFBamTableEditObj::getOptionalCppTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableMembers, CFBamTableEditObj::getOptionalCppTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppTableInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableInterface, CFBamTableEditObj::getOptionalCppTableInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableImplementation, CFBamTableEditObj::getOptionalCppTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppTableObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableObjInclude, CFBamTableEditObj::getOptionalCppTableObjIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppTableObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableObjMembers, CFBamTableEditObj::getOptionalCppTableObjMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppTableObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableObjInterface, CFBamTableEditObj::getOptionalCppTableObjInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppTableObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableObjImplementation, CFBamTableEditObj::getOptionalCppTableObjImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppDb2LUWTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppDb2LUWTableInclude, CFBamTableEditObj::getOptionalCppDb2LUWTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppDb2LUWTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppDb2LUWTableMembers, CFBamTableEditObj::getOptionalCppDb2LUWTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppDb2LUWTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppDb2LUWTableImplementation, CFBamTableEditObj::getOptionalCppDb2LUWTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppMSSqlTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMSSqlTableInclude, CFBamTableEditObj::getOptionalCppMSSqlTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppMSSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMSSqlTableMembers, CFBamTableEditObj::getOptionalCppMSSqlTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppMSSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMSSqlTableImplementation, CFBamTableEditObj::getOptionalCppMSSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppMySqlTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMySqlTableInclude, CFBamTableEditObj::getOptionalCppMySqlTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppMySqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMySqlTableMembers, CFBamTableEditObj::getOptionalCppMySqlTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppMySqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMySqlTableImplementation, CFBamTableEditObj::getOptionalCppMySqlTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppOracleTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppOracleTableInclude, CFBamTableEditObj::getOptionalCppOracleTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppOracleTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppOracleTableMembers, CFBamTableEditObj::getOptionalCppOracleTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppOracleTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppOracleTableImplementation, CFBamTableEditObj::getOptionalCppOracleTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppPgSqlTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppPgSqlTableInclude, CFBamTableEditObj::getOptionalCppPgSqlTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppPgSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppPgSqlTableMembers, CFBamTableEditObj::getOptionalCppPgSqlTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppPgSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppPgSqlTableImplementation, CFBamTableEditObj::getOptionalCppPgSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppRamTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppRamTableInclude, CFBamTableEditObj::getOptionalCppRamTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppRamTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppRamTableMembers, CFBamTableEditObj::getOptionalCppRamTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppRamTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppRamTableImplementation, CFBamTableEditObj::getOptionalCppRamTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppSaxLoaderIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSaxLoaderInclude, CFBamTableEditObj::getOptionalCppSaxLoaderIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppSaxLoaderStartElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSaxLoaderStartElement, CFBamTableEditObj::getOptionalCppSaxLoaderStartElementValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppSaxLoaderEndElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSaxLoaderEndElement, CFBamTableEditObj::getOptionalCppSaxLoaderEndElementValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppXMsgTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgTableInclude, CFBamTableEditObj::getOptionalCppXMsgTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppXMsgTableFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgTableFormatters, CFBamTableEditObj::getOptionalCppXMsgTableFormattersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppXMsgRqstTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstTableInclude, CFBamTableEditObj::getOptionalCppXMsgRqstTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppXMsgRspnTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnTableInclude, CFBamTableEditObj::getOptionalCppXMsgRspnTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppXMsgClientTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgClientTableInclude, CFBamTableEditObj::getOptionalCppXMsgClientTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppXMsgRqstTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstTableBody, CFBamTableEditObj::getOptionalCppXMsgRqstTableBodyValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppXMsgRspnTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnTableBody, CFBamTableEditObj::getOptionalCppXMsgRspnTableBodyValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCppXMsgClientTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgClientTableBody, CFBamTableEditObj::getOptionalCppXMsgClientTableBodyValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppObjMembers, CFBamTableEditObj::getOptionalHppObjMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppObjInterface, CFBamTableEditObj::getOptionalHppObjInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppObjInclude, CFBamTableEditObj::getOptionalHppObjIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppObjImplementation, CFBamTableEditObj::getOptionalHppObjImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppEditObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppEditObjMembers, CFBamTableEditObj::getOptionalHppEditObjMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppEditObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppEditObjInterface, CFBamTableEditObj::getOptionalHppEditObjInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppEditObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppEditObjInclude, CFBamTableEditObj::getOptionalHppEditObjIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppEditObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppEditObjImplementation, CFBamTableEditObj::getOptionalHppEditObjImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableInclude, CFBamTableEditObj::getOptionalHppTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableMembers, CFBamTableEditObj::getOptionalHppTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppTableInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableInterface, CFBamTableEditObj::getOptionalHppTableInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableImplementation, CFBamTableEditObj::getOptionalHppTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppTableObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableObjInclude, CFBamTableEditObj::getOptionalHppTableObjIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppTableObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableObjMembers, CFBamTableEditObj::getOptionalHppTableObjMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppTableObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableObjInterface, CFBamTableEditObj::getOptionalHppTableObjInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppTableObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableObjImplementation, CFBamTableEditObj::getOptionalHppTableObjImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppDb2LUWTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppDb2LUWTableInclude, CFBamTableEditObj::getOptionalHppDb2LUWTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppDb2LUWTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppDb2LUWTableMembers, CFBamTableEditObj::getOptionalHppDb2LUWTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppDb2LUWTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppDb2LUWTableImplementation, CFBamTableEditObj::getOptionalHppDb2LUWTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppMSSqlTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMSSqlTableInclude, CFBamTableEditObj::getOptionalHppMSSqlTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppMSSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMSSqlTableMembers, CFBamTableEditObj::getOptionalHppMSSqlTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppMSSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMSSqlTableImplementation, CFBamTableEditObj::getOptionalHppMSSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppMySqlTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMySqlTableInclude, CFBamTableEditObj::getOptionalHppMySqlTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppMySqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMySqlTableMembers, CFBamTableEditObj::getOptionalHppMySqlTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppMySqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMySqlTableImplementation, CFBamTableEditObj::getOptionalHppMySqlTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppOracleTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppOracleTableInclude, CFBamTableEditObj::getOptionalHppOracleTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppOracleTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppOracleTableMembers, CFBamTableEditObj::getOptionalHppOracleTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppOracleTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppOracleTableImplementation, CFBamTableEditObj::getOptionalHppOracleTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppPgSqlTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppPgSqlTableInclude, CFBamTableEditObj::getOptionalHppPgSqlTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppPgSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppPgSqlTableMembers, CFBamTableEditObj::getOptionalHppPgSqlTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppPgSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppPgSqlTableImplementation, CFBamTableEditObj::getOptionalHppPgSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppRamTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppRamTableInclude, CFBamTableEditObj::getOptionalHppRamTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppRamTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppRamTableMembers, CFBamTableEditObj::getOptionalHppRamTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppRamTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppRamTableImplementation, CFBamTableEditObj::getOptionalHppRamTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppSaxLoaderIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSaxLoaderInclude, CFBamTableEditObj::getOptionalHppSaxLoaderIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppSaxLoaderStartElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSaxLoaderStartElement, CFBamTableEditObj::getOptionalHppSaxLoaderStartElementValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppSaxLoaderEndElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSaxLoaderEndElement, CFBamTableEditObj::getOptionalHppSaxLoaderEndElementValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppXMsgTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgTableInclude, CFBamTableEditObj::getOptionalHppXMsgTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppXMsgTableFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgTableFormatters, CFBamTableEditObj::getOptionalHppXMsgTableFormattersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppXMsgRqstTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstTableInclude, CFBamTableEditObj::getOptionalHppXMsgRqstTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppXMsgRspnTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnTableInclude, CFBamTableEditObj::getOptionalHppXMsgRspnTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppXMsgClientTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgClientTableInclude, CFBamTableEditObj::getOptionalHppXMsgClientTableIncludeValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppXMsgRqstTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstTableBody, CFBamTableEditObj::getOptionalHppXMsgRqstTableBodyValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppXMsgRspnTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnTableBody, CFBamTableEditObj::getOptionalHppXMsgRspnTableBodyValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalHppXMsgClientTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgClientTableBody, CFBamTableEditObj::getOptionalHppXMsgClientTableBodyValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsObjMembers, CFBamTableEditObj::getOptionalCsObjMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsObjInterface, CFBamTableEditObj::getOptionalCsObjInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsObjUsing, CFBamTableEditObj::getOptionalCsObjUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsObjImplementation, CFBamTableEditObj::getOptionalCsObjImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsEditObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsEditObjMembers, CFBamTableEditObj::getOptionalCsEditObjMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsEditObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsEditObjInterface, CFBamTableEditObj::getOptionalCsEditObjInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsEditObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsEditObjUsing, CFBamTableEditObj::getOptionalCsEditObjUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsEditObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsEditObjImplementation, CFBamTableEditObj::getOptionalCsEditObjImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableUsing, CFBamTableEditObj::getOptionalCsTableUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableMembers, CFBamTableEditObj::getOptionalCsTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsTableInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableInterface, CFBamTableEditObj::getOptionalCsTableInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableImplementation, CFBamTableEditObj::getOptionalCsTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsTableObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableObjUsing, CFBamTableEditObj::getOptionalCsTableObjUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsTableObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableObjMembers, CFBamTableEditObj::getOptionalCsTableObjMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsTableObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableObjInterface, CFBamTableEditObj::getOptionalCsTableObjInterfaceValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsTableObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableObjImplementation, CFBamTableEditObj::getOptionalCsTableObjImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsDb2LUWTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsDb2LUWTableUsing, CFBamTableEditObj::getOptionalCsDb2LUWTableUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsDb2LUWTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsDb2LUWTableMembers, CFBamTableEditObj::getOptionalCsDb2LUWTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsDb2LUWTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsDb2LUWTableImplementation, CFBamTableEditObj::getOptionalCsDb2LUWTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsMSSqlTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMSSqlTableUsing, CFBamTableEditObj::getOptionalCsMSSqlTableUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsMSSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMSSqlTableMembers, CFBamTableEditObj::getOptionalCsMSSqlTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsMSSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMSSqlTableImplementation, CFBamTableEditObj::getOptionalCsMSSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsMySqlTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMySqlTableUsing, CFBamTableEditObj::getOptionalCsMySqlTableUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsMySqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMySqlTableMembers, CFBamTableEditObj::getOptionalCsMySqlTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsMySqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMySqlTableImplementation, CFBamTableEditObj::getOptionalCsMySqlTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsOracleTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsOracleTableUsing, CFBamTableEditObj::getOptionalCsOracleTableUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsOracleTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsOracleTableMembers, CFBamTableEditObj::getOptionalCsOracleTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsOracleTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsOracleTableImplementation, CFBamTableEditObj::getOptionalCsOracleTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsPgSqlTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsPgSqlTableUsing, CFBamTableEditObj::getOptionalCsPgSqlTableUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsPgSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsPgSqlTableMembers, CFBamTableEditObj::getOptionalCsPgSqlTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsPgSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsPgSqlTableImplementation, CFBamTableEditObj::getOptionalCsPgSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsRamTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsRamTableUsing, CFBamTableEditObj::getOptionalCsRamTableUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsRamTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsRamTableMembers, CFBamTableEditObj::getOptionalCsRamTableMembersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsRamTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsRamTableImplementation, CFBamTableEditObj::getOptionalCsRamTableImplementationValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsSaxLoaderUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSaxLoaderUsing, CFBamTableEditObj::getOptionalCsSaxLoaderUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsSaxLoaderStartElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSaxLoaderStartElement, CFBamTableEditObj::getOptionalCsSaxLoaderStartElementValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsSaxLoaderEndElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSaxLoaderEndElement, CFBamTableEditObj::getOptionalCsSaxLoaderEndElementValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsXMsgTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgTableUsing, CFBamTableEditObj::getOptionalCsXMsgTableUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsXMsgTableFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgTableFormatters, CFBamTableEditObj::getOptionalCsXMsgTableFormattersValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsXMsgRqstTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstTableUsing, CFBamTableEditObj::getOptionalCsXMsgRqstTableUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsXMsgRspnTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnTableUsing, CFBamTableEditObj::getOptionalCsXMsgRspnTableUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsXMsgClientTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgClientTableUsing, CFBamTableEditObj::getOptionalCsXMsgClientTableUsingValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsXMsgRqstTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstTableBody, CFBamTableEditObj::getOptionalCsXMsgRqstTableBodyValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsXMsgRspnTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnTableBody, CFBamTableEditObj::getOptionalCsXMsgRspnTableBodyValue() ) );
		}
		if( ! CFBamTableEditObj::isOptionalCsXMsgClientTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgClientTableBody, CFBamTableEditObj::getOptionalCsXMsgClientTableBodyValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFBamTableEditObj::getGenDefName() {
		return( cfbam::CFBamTableBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTableEditObj::getScope() {
		cfbam::ICFBamSchemaDefObj* scope = getRequiredContainerSchemaDef();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTableEditObj::getObjScope() {
		cfbam::ICFBamSchemaDefObj* scope = getRequiredContainerSchemaDef();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTableEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTableEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTableEditObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->readRelationByLookupUNameIdx( getRequiredTenantId(),
			getRequiredId(),
				nextName,
				false );
		}
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexTableObj()->readIndexByLookupUNameIdx( getRequiredTenantId(),
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
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getChainTableObj()->readChainByLookupUNameIdx( getRequiredTenantId(),
			getRequiredId(),
				nextName,
				false );
		}
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServerMethodTableObj()->readServerMethodByLookupUNameIdx( getRequiredTenantId(),
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

	std::string CFBamTableEditObj::getObjQualifiedName() {
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
			else if( container->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
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

	std::string CFBamTableEditObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamTableEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfbam::ICFBamTableObj* retobj = getSchema()->getTableTableObj()->realizeTable( dynamic_cast<cfbam::ICFBamTableObj*>( this ) );
		return( retobj );
	}

	cfbam::ICFBamScopeObj* CFBamTableEditObj::create() {
		cfbam::ICFBamTableObj* retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getTableTableObj()->createTable( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfbam::ICFBamScopeEditObj* CFBamTableEditObj::update() {
		getSchema()->getTableTableObj()->updateTable( this );
		return( NULL );
	}

	cfbam::ICFBamScopeEditObj* CFBamTableEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getTableTableObj()->deleteTable( this );
		return( NULL );
	}

	cfbam::ICFBamTableTableObj* CFBamTableEditObj::getTableTable() {
		return( orig->getSchema()->getTableTableObj() );
	}

	cfbam::ICFBamTableEditObj* CFBamTableEditObj::getTableEdit() {
		return( (cfbam::ICFBamTableEditObj*)this );
	}

	cfbam::ICFBamScopeEditObj* CFBamTableEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfbam::ICFBamTableObj* CFBamTableEditObj::getOrigAsTable() {
		return( dynamic_cast<cfbam::ICFBamTableObj*>( orig ) );
	}

	cfbam::CFBamScopeBuff* CFBamTableEditObj::getBuff() {
		return( buff );
	}

	void CFBamTableEditObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( buff != value ) {
			CFBamScopeEditObj::setBuff( value );
		}
	}

	const int64_t CFBamTableEditObj::getRequiredSchemaDefId() {
		return( getTableBuff()->getRequiredSchemaDefId() );
	}

	const int64_t* CFBamTableEditObj::getRequiredSchemaDefIdReference() {
		return( getTableBuff()->getRequiredSchemaDefIdReference() );
	}

	bool CFBamTableEditObj::isOptionalDefSchemaTenantIdNull() {
		return( getTableBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamTableEditObj::getOptionalDefSchemaTenantIdValue() {
		return( getTableBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamTableEditObj::getOptionalDefSchemaTenantIdReference() {
		return( getTableBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamTableEditObj::isOptionalDefSchemaIdNull() {
		return( getTableBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamTableEditObj::getOptionalDefSchemaIdValue() {
		return( getTableBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamTableEditObj::getOptionalDefSchemaIdReference() {
		return( getTableBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamTableEditObj::getRequiredName() {
		return( getTableBuff()->getRequiredName() );
	}

	const std::string* CFBamTableEditObj::getRequiredNameReference() {
		return( getTableBuff()->getRequiredNameReference() );
	}

	void CFBamTableEditObj::setRequiredName( const std::string& value ) {
		if( getTableBuff()->getRequiredName() != value ) {
			getTableEditBuff()->setRequiredName( value );
		}
	}

	bool CFBamTableEditObj::isOptionalDbNameNull() {
		return( getTableBuff()->isOptionalDbNameNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalDbNameValue() {
		return( getTableBuff()->getOptionalDbNameValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalDbNameReference() {
		return( getTableBuff()->getOptionalDbNameReference() );
	}

	void CFBamTableEditObj::setOptionalDbNameNull() {
		if( ! getTableBuff()->isOptionalDbNameNull() ) {
			getTableEditBuff()->setOptionalDbNameNull();
		}
	}

	void CFBamTableEditObj::setOptionalDbNameValue( const std::string& value ) {
		if( getTableBuff()->isOptionalDbNameNull() ) {
			getTableEditBuff()->setOptionalDbNameValue( value );
		}
		else if( getTableBuff()->getOptionalDbNameValue() != value ) {
			getTableEditBuff()->setOptionalDbNameValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalShortNameNull() {
		return( getTableBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalShortNameValue() {
		return( getTableBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalShortNameReference() {
		return( getTableBuff()->getOptionalShortNameReference() );
	}

	void CFBamTableEditObj::setOptionalShortNameNull() {
		if( ! getTableBuff()->isOptionalShortNameNull() ) {
			getTableEditBuff()->setOptionalShortNameNull();
		}
	}

	void CFBamTableEditObj::setOptionalShortNameValue( const std::string& value ) {
		if( getTableBuff()->isOptionalShortNameNull() ) {
			getTableEditBuff()->setOptionalShortNameValue( value );
		}
		else if( getTableBuff()->getOptionalShortNameValue() != value ) {
			getTableEditBuff()->setOptionalShortNameValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalLabelNull() {
		return( getTableBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalLabelValue() {
		return( getTableBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalLabelReference() {
		return( getTableBuff()->getOptionalLabelReference() );
	}

	void CFBamTableEditObj::setOptionalLabelNull() {
		if( ! getTableBuff()->isOptionalLabelNull() ) {
			getTableEditBuff()->setOptionalLabelNull();
		}
	}

	void CFBamTableEditObj::setOptionalLabelValue( const std::string& value ) {
		if( getTableBuff()->isOptionalLabelNull() ) {
			getTableEditBuff()->setOptionalLabelValue( value );
		}
		else if( getTableBuff()->getOptionalLabelValue() != value ) {
			getTableEditBuff()->setOptionalLabelValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalShortDescriptionNull() {
		return( getTableBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalShortDescriptionValue() {
		return( getTableBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalShortDescriptionReference() {
		return( getTableBuff()->getOptionalShortDescriptionReference() );
	}

	void CFBamTableEditObj::setOptionalShortDescriptionNull() {
		if( ! getTableBuff()->isOptionalShortDescriptionNull() ) {
			getTableEditBuff()->setOptionalShortDescriptionNull();
		}
	}

	void CFBamTableEditObj::setOptionalShortDescriptionValue( const std::string& value ) {
		if( getTableBuff()->isOptionalShortDescriptionNull() ) {
			getTableEditBuff()->setOptionalShortDescriptionValue( value );
		}
		else if( getTableBuff()->getOptionalShortDescriptionValue() != value ) {
			getTableEditBuff()->setOptionalShortDescriptionValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalDescriptionNull() {
		return( getTableBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalDescriptionValue() {
		return( getTableBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalDescriptionReference() {
		return( getTableBuff()->getOptionalDescriptionReference() );
	}

	void CFBamTableEditObj::setOptionalDescriptionNull() {
		if( ! getTableBuff()->isOptionalDescriptionNull() ) {
			getTableEditBuff()->setOptionalDescriptionNull();
		}
	}

	void CFBamTableEditObj::setOptionalDescriptionValue( const std::string& value ) {
		if( getTableBuff()->isOptionalDescriptionNull() ) {
			getTableEditBuff()->setOptionalDescriptionValue( value );
		}
		else if( getTableBuff()->getOptionalDescriptionValue() != value ) {
			getTableEditBuff()->setOptionalDescriptionValue( value );
		}
	}

	const bool CFBamTableEditObj::getRequiredPageData() {
		return( getTableBuff()->getRequiredPageData() );
	}

	const bool* CFBamTableEditObj::getRequiredPageDataReference() {
		return( getTableBuff()->getRequiredPageDataReference() );
	}

	void CFBamTableEditObj::setRequiredPageData( const bool value ) {
		if( getTableBuff()->getRequiredPageData() != value ) {
			getTableEditBuff()->setRequiredPageData( value );
		}
	}

	bool CFBamTableEditObj::isOptionalPrimaryIndexTenantIdNull() {
		return( getTableBuff()->isOptionalPrimaryIndexTenantIdNull() );
	}

	const int64_t CFBamTableEditObj::getOptionalPrimaryIndexTenantIdValue() {
		return( getTableBuff()->getOptionalPrimaryIndexTenantIdValue() );
	}

	const int64_t* CFBamTableEditObj::getOptionalPrimaryIndexTenantIdReference() {
		return( getTableBuff()->getOptionalPrimaryIndexTenantIdReference() );
	}

	bool CFBamTableEditObj::isOptionalPrimaryIndexIdNull() {
		return( getTableBuff()->isOptionalPrimaryIndexIdNull() );
	}

	const int64_t CFBamTableEditObj::getOptionalPrimaryIndexIdValue() {
		return( getTableBuff()->getOptionalPrimaryIndexIdValue() );
	}

	const int64_t* CFBamTableEditObj::getOptionalPrimaryIndexIdReference() {
		return( getTableBuff()->getOptionalPrimaryIndexIdReference() );
	}

	const std::string& CFBamTableEditObj::getRequiredTableClassCode() {
		return( getTableBuff()->getRequiredTableClassCode() );
	}

	const std::string* CFBamTableEditObj::getRequiredTableClassCodeReference() {
		return( getTableBuff()->getRequiredTableClassCodeReference() );
	}

	void CFBamTableEditObj::setRequiredTableClassCode( const std::string& value ) {
		if( getTableBuff()->getRequiredTableClassCode() != value ) {
			getTableEditBuff()->setRequiredTableClassCode( value );
		}
	}

	bool CFBamTableEditObj::isOptionalLookupIndexTenantIdNull() {
		return( getTableBuff()->isOptionalLookupIndexTenantIdNull() );
	}

	const int64_t CFBamTableEditObj::getOptionalLookupIndexTenantIdValue() {
		return( getTableBuff()->getOptionalLookupIndexTenantIdValue() );
	}

	const int64_t* CFBamTableEditObj::getOptionalLookupIndexTenantIdReference() {
		return( getTableBuff()->getOptionalLookupIndexTenantIdReference() );
	}

	bool CFBamTableEditObj::isOptionalLookupIndexIdNull() {
		return( getTableBuff()->isOptionalLookupIndexIdNull() );
	}

	const int64_t CFBamTableEditObj::getOptionalLookupIndexIdValue() {
		return( getTableBuff()->getOptionalLookupIndexIdValue() );
	}

	const int64_t* CFBamTableEditObj::getOptionalLookupIndexIdReference() {
		return( getTableBuff()->getOptionalLookupIndexIdReference() );
	}

	bool CFBamTableEditObj::isOptionalAltIndexTenantIdNull() {
		return( getTableBuff()->isOptionalAltIndexTenantIdNull() );
	}

	const int64_t CFBamTableEditObj::getOptionalAltIndexTenantIdValue() {
		return( getTableBuff()->getOptionalAltIndexTenantIdValue() );
	}

	const int64_t* CFBamTableEditObj::getOptionalAltIndexTenantIdReference() {
		return( getTableBuff()->getOptionalAltIndexTenantIdReference() );
	}

	bool CFBamTableEditObj::isOptionalAltIndexIdNull() {
		return( getTableBuff()->isOptionalAltIndexIdNull() );
	}

	const int64_t CFBamTableEditObj::getOptionalAltIndexIdValue() {
		return( getTableBuff()->getOptionalAltIndexIdValue() );
	}

	const int64_t* CFBamTableEditObj::getOptionalAltIndexIdReference() {
		return( getTableBuff()->getOptionalAltIndexIdReference() );
	}

	bool CFBamTableEditObj::isOptionalQualifyingTenantIdNull() {
		return( getTableBuff()->isOptionalQualifyingTenantIdNull() );
	}

	const int64_t CFBamTableEditObj::getOptionalQualifyingTenantIdValue() {
		return( getTableBuff()->getOptionalQualifyingTenantIdValue() );
	}

	const int64_t* CFBamTableEditObj::getOptionalQualifyingTenantIdReference() {
		return( getTableBuff()->getOptionalQualifyingTenantIdReference() );
	}

	bool CFBamTableEditObj::isOptionalQualifyingTableIdNull() {
		return( getTableBuff()->isOptionalQualifyingTableIdNull() );
	}

	const int64_t CFBamTableEditObj::getOptionalQualifyingTableIdValue() {
		return( getTableBuff()->getOptionalQualifyingTableIdValue() );
	}

	const int64_t* CFBamTableEditObj::getOptionalQualifyingTableIdReference() {
		return( getTableBuff()->getOptionalQualifyingTableIdReference() );
	}

	const bool CFBamTableEditObj::getRequiredIsInstantiable() {
		return( getTableBuff()->getRequiredIsInstantiable() );
	}

	const bool* CFBamTableEditObj::getRequiredIsInstantiableReference() {
		return( getTableBuff()->getRequiredIsInstantiableReference() );
	}

	void CFBamTableEditObj::setRequiredIsInstantiable( const bool value ) {
		if( getTableBuff()->getRequiredIsInstantiable() != value ) {
			getTableEditBuff()->setRequiredIsInstantiable( value );
		}
	}

	const bool CFBamTableEditObj::getRequiredHasHistory() {
		return( getTableBuff()->getRequiredHasHistory() );
	}

	const bool* CFBamTableEditObj::getRequiredHasHistoryReference() {
		return( getTableBuff()->getRequiredHasHistoryReference() );
	}

	void CFBamTableEditObj::setRequiredHasHistory( const bool value ) {
		if( getTableBuff()->getRequiredHasHistory() != value ) {
			getTableEditBuff()->setRequiredHasHistory( value );
		}
	}

	const bool CFBamTableEditObj::getRequiredHasAuditColumns() {
		return( getTableBuff()->getRequiredHasAuditColumns() );
	}

	const bool* CFBamTableEditObj::getRequiredHasAuditColumnsReference() {
		return( getTableBuff()->getRequiredHasAuditColumnsReference() );
	}

	void CFBamTableEditObj::setRequiredHasAuditColumns( const bool value ) {
		if( getTableBuff()->getRequiredHasAuditColumns() != value ) {
			getTableEditBuff()->setRequiredHasAuditColumns( value );
		}
	}

	const bool CFBamTableEditObj::getRequiredIsMutable() {
		return( getTableBuff()->getRequiredIsMutable() );
	}

	const bool* CFBamTableEditObj::getRequiredIsMutableReference() {
		return( getTableBuff()->getRequiredIsMutableReference() );
	}

	void CFBamTableEditObj::setRequiredIsMutable( const bool value ) {
		if( getTableBuff()->getRequiredIsMutable() != value ) {
			getTableEditBuff()->setRequiredIsMutable( value );
		}
	}

	const bool CFBamTableEditObj::getRequiredIsServerOnly() {
		return( getTableBuff()->getRequiredIsServerOnly() );
	}

	const bool* CFBamTableEditObj::getRequiredIsServerOnlyReference() {
		return( getTableBuff()->getRequiredIsServerOnlyReference() );
	}

	void CFBamTableEditObj::setRequiredIsServerOnly( const bool value ) {
		if( getTableBuff()->getRequiredIsServerOnly() != value ) {
			getTableEditBuff()->setRequiredIsServerOnly( value );
		}
	}

	const cfbam::ICFBamSchema::LoaderBehaviourEnum CFBamTableEditObj::getRequiredLoaderBehaviour() {
		return( getTableBuff()->getRequiredLoaderBehaviour() );
	}

	const cfbam::ICFBamSchema::LoaderBehaviourEnum* CFBamTableEditObj::getRequiredLoaderBehaviourReference() {
		return( getTableBuff()->getRequiredLoaderBehaviourReference() );
	}

	void CFBamTableEditObj::setRequiredLoaderBehaviour( const cfbam::ICFBamSchema::LoaderBehaviourEnum value ) {
		if( getTableBuff()->getRequiredLoaderBehaviour() != value ) {
			getTableEditBuff()->setRequiredLoaderBehaviour( value );
		}
	}

	const cfbam::ICFBamSchema::SecScopeEnum CFBamTableEditObj::getRequiredSecScope() {
		return( getTableBuff()->getRequiredSecScope() );
	}

	const cfbam::ICFBamSchema::SecScopeEnum* CFBamTableEditObj::getRequiredSecScopeReference() {
		return( getTableBuff()->getRequiredSecScopeReference() );
	}

	void CFBamTableEditObj::setRequiredSecScope( const cfbam::ICFBamSchema::SecScopeEnum value ) {
		if( getTableBuff()->getRequiredSecScope() != value ) {
			getTableEditBuff()->setRequiredSecScope( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJObjMembersNull() {
		return( getTableBuff()->isOptionalJObjMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJObjMembersValue() {
		return( getTableBuff()->getOptionalJObjMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJObjMembersReference() {
		return( getTableBuff()->getOptionalJObjMembersReference() );
	}

	void CFBamTableEditObj::setOptionalJObjMembersNull() {
		if( ! getTableBuff()->isOptionalJObjMembersNull() ) {
			getTableEditBuff()->setOptionalJObjMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalJObjMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJObjMembersNull() ) {
			getTableEditBuff()->setOptionalJObjMembersValue( value );
		}
		else if( getTableBuff()->getOptionalJObjMembersValue() != value ) {
			getTableEditBuff()->setOptionalJObjMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJObjInterfaceNull() {
		return( getTableBuff()->isOptionalJObjInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJObjInterfaceValue() {
		return( getTableBuff()->getOptionalJObjInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJObjInterfaceReference() {
		return( getTableBuff()->getOptionalJObjInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalJObjInterfaceNull() {
		if( ! getTableBuff()->isOptionalJObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalJObjInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalJObjInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalJObjInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalJObjInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalJObjInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJObjImportNull() {
		return( getTableBuff()->isOptionalJObjImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJObjImportValue() {
		return( getTableBuff()->getOptionalJObjImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJObjImportReference() {
		return( getTableBuff()->getOptionalJObjImportReference() );
	}

	void CFBamTableEditObj::setOptionalJObjImportNull() {
		if( ! getTableBuff()->isOptionalJObjImportNull() ) {
			getTableEditBuff()->setOptionalJObjImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJObjImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJObjImportNull() ) {
			getTableEditBuff()->setOptionalJObjImportValue( value );
		}
		else if( getTableBuff()->getOptionalJObjImportValue() != value ) {
			getTableEditBuff()->setOptionalJObjImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJObjImplementationNull() {
		return( getTableBuff()->isOptionalJObjImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJObjImplementationValue() {
		return( getTableBuff()->getOptionalJObjImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJObjImplementationReference() {
		return( getTableBuff()->getOptionalJObjImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalJObjImplementationNull() {
		if( ! getTableBuff()->isOptionalJObjImplementationNull() ) {
			getTableEditBuff()->setOptionalJObjImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalJObjImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJObjImplementationNull() ) {
			getTableEditBuff()->setOptionalJObjImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalJObjImplementationValue() != value ) {
			getTableEditBuff()->setOptionalJObjImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJEditObjMembersNull() {
		return( getTableBuff()->isOptionalJEditObjMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJEditObjMembersValue() {
		return( getTableBuff()->getOptionalJEditObjMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJEditObjMembersReference() {
		return( getTableBuff()->getOptionalJEditObjMembersReference() );
	}

	void CFBamTableEditObj::setOptionalJEditObjMembersNull() {
		if( ! getTableBuff()->isOptionalJEditObjMembersNull() ) {
			getTableEditBuff()->setOptionalJEditObjMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalJEditObjMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJEditObjMembersNull() ) {
			getTableEditBuff()->setOptionalJEditObjMembersValue( value );
		}
		else if( getTableBuff()->getOptionalJEditObjMembersValue() != value ) {
			getTableEditBuff()->setOptionalJEditObjMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJEditObjInterfaceNull() {
		return( getTableBuff()->isOptionalJEditObjInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJEditObjInterfaceValue() {
		return( getTableBuff()->getOptionalJEditObjInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJEditObjInterfaceReference() {
		return( getTableBuff()->getOptionalJEditObjInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalJEditObjInterfaceNull() {
		if( ! getTableBuff()->isOptionalJEditObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalJEditObjInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalJEditObjInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJEditObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalJEditObjInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalJEditObjInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalJEditObjInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJEditObjImportNull() {
		return( getTableBuff()->isOptionalJEditObjImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJEditObjImportValue() {
		return( getTableBuff()->getOptionalJEditObjImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJEditObjImportReference() {
		return( getTableBuff()->getOptionalJEditObjImportReference() );
	}

	void CFBamTableEditObj::setOptionalJEditObjImportNull() {
		if( ! getTableBuff()->isOptionalJEditObjImportNull() ) {
			getTableEditBuff()->setOptionalJEditObjImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJEditObjImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJEditObjImportNull() ) {
			getTableEditBuff()->setOptionalJEditObjImportValue( value );
		}
		else if( getTableBuff()->getOptionalJEditObjImportValue() != value ) {
			getTableEditBuff()->setOptionalJEditObjImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJEditObjImplementationNull() {
		return( getTableBuff()->isOptionalJEditObjImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJEditObjImplementationValue() {
		return( getTableBuff()->getOptionalJEditObjImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJEditObjImplementationReference() {
		return( getTableBuff()->getOptionalJEditObjImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalJEditObjImplementationNull() {
		if( ! getTableBuff()->isOptionalJEditObjImplementationNull() ) {
			getTableEditBuff()->setOptionalJEditObjImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalJEditObjImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJEditObjImplementationNull() ) {
			getTableEditBuff()->setOptionalJEditObjImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalJEditObjImplementationValue() != value ) {
			getTableEditBuff()->setOptionalJEditObjImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJTableImportNull() {
		return( getTableBuff()->isOptionalJTableImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJTableImportValue() {
		return( getTableBuff()->getOptionalJTableImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJTableImportReference() {
		return( getTableBuff()->getOptionalJTableImportReference() );
	}

	void CFBamTableEditObj::setOptionalJTableImportNull() {
		if( ! getTableBuff()->isOptionalJTableImportNull() ) {
			getTableEditBuff()->setOptionalJTableImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJTableImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJTableImportNull() ) {
			getTableEditBuff()->setOptionalJTableImportValue( value );
		}
		else if( getTableBuff()->getOptionalJTableImportValue() != value ) {
			getTableEditBuff()->setOptionalJTableImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJTableMembersNull() {
		return( getTableBuff()->isOptionalJTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJTableMembersValue() {
		return( getTableBuff()->getOptionalJTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJTableMembersReference() {
		return( getTableBuff()->getOptionalJTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalJTableMembersNull() {
		if( ! getTableBuff()->isOptionalJTableMembersNull() ) {
			getTableEditBuff()->setOptionalJTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalJTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJTableMembersNull() ) {
			getTableEditBuff()->setOptionalJTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalJTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalJTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJTableInterfaceNull() {
		return( getTableBuff()->isOptionalJTableInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJTableInterfaceValue() {
		return( getTableBuff()->getOptionalJTableInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJTableInterfaceReference() {
		return( getTableBuff()->getOptionalJTableInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalJTableInterfaceNull() {
		if( ! getTableBuff()->isOptionalJTableInterfaceNull() ) {
			getTableEditBuff()->setOptionalJTableInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalJTableInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJTableInterfaceNull() ) {
			getTableEditBuff()->setOptionalJTableInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalJTableInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalJTableInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJTableImplementationNull() {
		return( getTableBuff()->isOptionalJTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJTableImplementationValue() {
		return( getTableBuff()->getOptionalJTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJTableImplementationReference() {
		return( getTableBuff()->getOptionalJTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalJTableImplementationNull() {
		if( ! getTableBuff()->isOptionalJTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalJTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalJTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalJTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJTableObjImportNull() {
		return( getTableBuff()->isOptionalJTableObjImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJTableObjImportValue() {
		return( getTableBuff()->getOptionalJTableObjImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJTableObjImportReference() {
		return( getTableBuff()->getOptionalJTableObjImportReference() );
	}

	void CFBamTableEditObj::setOptionalJTableObjImportNull() {
		if( ! getTableBuff()->isOptionalJTableObjImportNull() ) {
			getTableEditBuff()->setOptionalJTableObjImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJTableObjImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJTableObjImportNull() ) {
			getTableEditBuff()->setOptionalJTableObjImportValue( value );
		}
		else if( getTableBuff()->getOptionalJTableObjImportValue() != value ) {
			getTableEditBuff()->setOptionalJTableObjImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJTableObjMembersNull() {
		return( getTableBuff()->isOptionalJTableObjMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJTableObjMembersValue() {
		return( getTableBuff()->getOptionalJTableObjMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJTableObjMembersReference() {
		return( getTableBuff()->getOptionalJTableObjMembersReference() );
	}

	void CFBamTableEditObj::setOptionalJTableObjMembersNull() {
		if( ! getTableBuff()->isOptionalJTableObjMembersNull() ) {
			getTableEditBuff()->setOptionalJTableObjMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalJTableObjMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJTableObjMembersNull() ) {
			getTableEditBuff()->setOptionalJTableObjMembersValue( value );
		}
		else if( getTableBuff()->getOptionalJTableObjMembersValue() != value ) {
			getTableEditBuff()->setOptionalJTableObjMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJTableObjInterfaceNull() {
		return( getTableBuff()->isOptionalJTableObjInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJTableObjInterfaceValue() {
		return( getTableBuff()->getOptionalJTableObjInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJTableObjInterfaceReference() {
		return( getTableBuff()->getOptionalJTableObjInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalJTableObjInterfaceNull() {
		if( ! getTableBuff()->isOptionalJTableObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalJTableObjInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalJTableObjInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJTableObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalJTableObjInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalJTableObjInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalJTableObjInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJTableObjImplementationNull() {
		return( getTableBuff()->isOptionalJTableObjImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJTableObjImplementationValue() {
		return( getTableBuff()->getOptionalJTableObjImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJTableObjImplementationReference() {
		return( getTableBuff()->getOptionalJTableObjImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalJTableObjImplementationNull() {
		if( ! getTableBuff()->isOptionalJTableObjImplementationNull() ) {
			getTableEditBuff()->setOptionalJTableObjImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalJTableObjImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJTableObjImplementationNull() ) {
			getTableEditBuff()->setOptionalJTableObjImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalJTableObjImplementationValue() != value ) {
			getTableEditBuff()->setOptionalJTableObjImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJDb2LUWTableImportNull() {
		return( getTableBuff()->isOptionalJDb2LUWTableImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJDb2LUWTableImportValue() {
		return( getTableBuff()->getOptionalJDb2LUWTableImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJDb2LUWTableImportReference() {
		return( getTableBuff()->getOptionalJDb2LUWTableImportReference() );
	}

	void CFBamTableEditObj::setOptionalJDb2LUWTableImportNull() {
		if( ! getTableBuff()->isOptionalJDb2LUWTableImportNull() ) {
			getTableEditBuff()->setOptionalJDb2LUWTableImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJDb2LUWTableImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJDb2LUWTableImportNull() ) {
			getTableEditBuff()->setOptionalJDb2LUWTableImportValue( value );
		}
		else if( getTableBuff()->getOptionalJDb2LUWTableImportValue() != value ) {
			getTableEditBuff()->setOptionalJDb2LUWTableImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJDb2LUWTableMembersNull() {
		return( getTableBuff()->isOptionalJDb2LUWTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJDb2LUWTableMembersValue() {
		return( getTableBuff()->getOptionalJDb2LUWTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJDb2LUWTableMembersReference() {
		return( getTableBuff()->getOptionalJDb2LUWTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalJDb2LUWTableMembersNull() {
		if( ! getTableBuff()->isOptionalJDb2LUWTableMembersNull() ) {
			getTableEditBuff()->setOptionalJDb2LUWTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalJDb2LUWTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJDb2LUWTableMembersNull() ) {
			getTableEditBuff()->setOptionalJDb2LUWTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalJDb2LUWTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalJDb2LUWTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJDb2LUWTableImplementationNull() {
		return( getTableBuff()->isOptionalJDb2LUWTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJDb2LUWTableImplementationValue() {
		return( getTableBuff()->getOptionalJDb2LUWTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJDb2LUWTableImplementationReference() {
		return( getTableBuff()->getOptionalJDb2LUWTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalJDb2LUWTableImplementationNull() {
		if( ! getTableBuff()->isOptionalJDb2LUWTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJDb2LUWTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalJDb2LUWTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJDb2LUWTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJDb2LUWTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalJDb2LUWTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalJDb2LUWTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJMSSqlTableImportNull() {
		return( getTableBuff()->isOptionalJMSSqlTableImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJMSSqlTableImportValue() {
		return( getTableBuff()->getOptionalJMSSqlTableImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJMSSqlTableImportReference() {
		return( getTableBuff()->getOptionalJMSSqlTableImportReference() );
	}

	void CFBamTableEditObj::setOptionalJMSSqlTableImportNull() {
		if( ! getTableBuff()->isOptionalJMSSqlTableImportNull() ) {
			getTableEditBuff()->setOptionalJMSSqlTableImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJMSSqlTableImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJMSSqlTableImportNull() ) {
			getTableEditBuff()->setOptionalJMSSqlTableImportValue( value );
		}
		else if( getTableBuff()->getOptionalJMSSqlTableImportValue() != value ) {
			getTableEditBuff()->setOptionalJMSSqlTableImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJMSSqlTableMembersNull() {
		return( getTableBuff()->isOptionalJMSSqlTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJMSSqlTableMembersValue() {
		return( getTableBuff()->getOptionalJMSSqlTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJMSSqlTableMembersReference() {
		return( getTableBuff()->getOptionalJMSSqlTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalJMSSqlTableMembersNull() {
		if( ! getTableBuff()->isOptionalJMSSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalJMSSqlTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalJMSSqlTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJMSSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalJMSSqlTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalJMSSqlTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalJMSSqlTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJMSSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalJMSSqlTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJMSSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalJMSSqlTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJMSSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalJMSSqlTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalJMSSqlTableImplementationNull() {
		if( ! getTableBuff()->isOptionalJMSSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJMSSqlTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalJMSSqlTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJMSSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJMSSqlTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalJMSSqlTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalJMSSqlTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJMySqlTableImportNull() {
		return( getTableBuff()->isOptionalJMySqlTableImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJMySqlTableImportValue() {
		return( getTableBuff()->getOptionalJMySqlTableImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJMySqlTableImportReference() {
		return( getTableBuff()->getOptionalJMySqlTableImportReference() );
	}

	void CFBamTableEditObj::setOptionalJMySqlTableImportNull() {
		if( ! getTableBuff()->isOptionalJMySqlTableImportNull() ) {
			getTableEditBuff()->setOptionalJMySqlTableImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJMySqlTableImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJMySqlTableImportNull() ) {
			getTableEditBuff()->setOptionalJMySqlTableImportValue( value );
		}
		else if( getTableBuff()->getOptionalJMySqlTableImportValue() != value ) {
			getTableEditBuff()->setOptionalJMySqlTableImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJMySqlTableMembersNull() {
		return( getTableBuff()->isOptionalJMySqlTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJMySqlTableMembersValue() {
		return( getTableBuff()->getOptionalJMySqlTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJMySqlTableMembersReference() {
		return( getTableBuff()->getOptionalJMySqlTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalJMySqlTableMembersNull() {
		if( ! getTableBuff()->isOptionalJMySqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalJMySqlTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalJMySqlTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJMySqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalJMySqlTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalJMySqlTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalJMySqlTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJMySqlTableImplementationNull() {
		return( getTableBuff()->isOptionalJMySqlTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJMySqlTableImplementationValue() {
		return( getTableBuff()->getOptionalJMySqlTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJMySqlTableImplementationReference() {
		return( getTableBuff()->getOptionalJMySqlTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalJMySqlTableImplementationNull() {
		if( ! getTableBuff()->isOptionalJMySqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJMySqlTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalJMySqlTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJMySqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJMySqlTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalJMySqlTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalJMySqlTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJOracleTableImportNull() {
		return( getTableBuff()->isOptionalJOracleTableImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJOracleTableImportValue() {
		return( getTableBuff()->getOptionalJOracleTableImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJOracleTableImportReference() {
		return( getTableBuff()->getOptionalJOracleTableImportReference() );
	}

	void CFBamTableEditObj::setOptionalJOracleTableImportNull() {
		if( ! getTableBuff()->isOptionalJOracleTableImportNull() ) {
			getTableEditBuff()->setOptionalJOracleTableImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJOracleTableImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJOracleTableImportNull() ) {
			getTableEditBuff()->setOptionalJOracleTableImportValue( value );
		}
		else if( getTableBuff()->getOptionalJOracleTableImportValue() != value ) {
			getTableEditBuff()->setOptionalJOracleTableImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJOracleTableMembersNull() {
		return( getTableBuff()->isOptionalJOracleTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJOracleTableMembersValue() {
		return( getTableBuff()->getOptionalJOracleTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJOracleTableMembersReference() {
		return( getTableBuff()->getOptionalJOracleTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalJOracleTableMembersNull() {
		if( ! getTableBuff()->isOptionalJOracleTableMembersNull() ) {
			getTableEditBuff()->setOptionalJOracleTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalJOracleTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJOracleTableMembersNull() ) {
			getTableEditBuff()->setOptionalJOracleTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalJOracleTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalJOracleTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJOracleTableImplementationNull() {
		return( getTableBuff()->isOptionalJOracleTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJOracleTableImplementationValue() {
		return( getTableBuff()->getOptionalJOracleTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJOracleTableImplementationReference() {
		return( getTableBuff()->getOptionalJOracleTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalJOracleTableImplementationNull() {
		if( ! getTableBuff()->isOptionalJOracleTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJOracleTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalJOracleTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJOracleTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJOracleTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalJOracleTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalJOracleTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJPgSqlTableImportNull() {
		return( getTableBuff()->isOptionalJPgSqlTableImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJPgSqlTableImportValue() {
		return( getTableBuff()->getOptionalJPgSqlTableImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJPgSqlTableImportReference() {
		return( getTableBuff()->getOptionalJPgSqlTableImportReference() );
	}

	void CFBamTableEditObj::setOptionalJPgSqlTableImportNull() {
		if( ! getTableBuff()->isOptionalJPgSqlTableImportNull() ) {
			getTableEditBuff()->setOptionalJPgSqlTableImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJPgSqlTableImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJPgSqlTableImportNull() ) {
			getTableEditBuff()->setOptionalJPgSqlTableImportValue( value );
		}
		else if( getTableBuff()->getOptionalJPgSqlTableImportValue() != value ) {
			getTableEditBuff()->setOptionalJPgSqlTableImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJPgSqlTableMembersNull() {
		return( getTableBuff()->isOptionalJPgSqlTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJPgSqlTableMembersValue() {
		return( getTableBuff()->getOptionalJPgSqlTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJPgSqlTableMembersReference() {
		return( getTableBuff()->getOptionalJPgSqlTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalJPgSqlTableMembersNull() {
		if( ! getTableBuff()->isOptionalJPgSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalJPgSqlTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalJPgSqlTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJPgSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalJPgSqlTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalJPgSqlTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalJPgSqlTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJPgSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalJPgSqlTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJPgSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalJPgSqlTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJPgSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalJPgSqlTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalJPgSqlTableImplementationNull() {
		if( ! getTableBuff()->isOptionalJPgSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJPgSqlTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalJPgSqlTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJPgSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJPgSqlTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalJPgSqlTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalJPgSqlTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJRamTableImportNull() {
		return( getTableBuff()->isOptionalJRamTableImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJRamTableImportValue() {
		return( getTableBuff()->getOptionalJRamTableImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJRamTableImportReference() {
		return( getTableBuff()->getOptionalJRamTableImportReference() );
	}

	void CFBamTableEditObj::setOptionalJRamTableImportNull() {
		if( ! getTableBuff()->isOptionalJRamTableImportNull() ) {
			getTableEditBuff()->setOptionalJRamTableImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJRamTableImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJRamTableImportNull() ) {
			getTableEditBuff()->setOptionalJRamTableImportValue( value );
		}
		else if( getTableBuff()->getOptionalJRamTableImportValue() != value ) {
			getTableEditBuff()->setOptionalJRamTableImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJRamTableMembersNull() {
		return( getTableBuff()->isOptionalJRamTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJRamTableMembersValue() {
		return( getTableBuff()->getOptionalJRamTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJRamTableMembersReference() {
		return( getTableBuff()->getOptionalJRamTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalJRamTableMembersNull() {
		if( ! getTableBuff()->isOptionalJRamTableMembersNull() ) {
			getTableEditBuff()->setOptionalJRamTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalJRamTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJRamTableMembersNull() ) {
			getTableEditBuff()->setOptionalJRamTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalJRamTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalJRamTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJRamTableImplementationNull() {
		return( getTableBuff()->isOptionalJRamTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJRamTableImplementationValue() {
		return( getTableBuff()->getOptionalJRamTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJRamTableImplementationReference() {
		return( getTableBuff()->getOptionalJRamTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalJRamTableImplementationNull() {
		if( ! getTableBuff()->isOptionalJRamTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJRamTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalJRamTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJRamTableImplementationNull() ) {
			getTableEditBuff()->setOptionalJRamTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalJRamTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalJRamTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJSaxLoaderImportNull() {
		return( getTableBuff()->isOptionalJSaxLoaderImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJSaxLoaderImportValue() {
		return( getTableBuff()->getOptionalJSaxLoaderImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJSaxLoaderImportReference() {
		return( getTableBuff()->getOptionalJSaxLoaderImportReference() );
	}

	void CFBamTableEditObj::setOptionalJSaxLoaderImportNull() {
		if( ! getTableBuff()->isOptionalJSaxLoaderImportNull() ) {
			getTableEditBuff()->setOptionalJSaxLoaderImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJSaxLoaderImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJSaxLoaderImportNull() ) {
			getTableEditBuff()->setOptionalJSaxLoaderImportValue( value );
		}
		else if( getTableBuff()->getOptionalJSaxLoaderImportValue() != value ) {
			getTableEditBuff()->setOptionalJSaxLoaderImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJSaxLoaderStartElementNull() {
		return( getTableBuff()->isOptionalJSaxLoaderStartElementNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJSaxLoaderStartElementValue() {
		return( getTableBuff()->getOptionalJSaxLoaderStartElementValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJSaxLoaderStartElementReference() {
		return( getTableBuff()->getOptionalJSaxLoaderStartElementReference() );
	}

	void CFBamTableEditObj::setOptionalJSaxLoaderStartElementNull() {
		if( ! getTableBuff()->isOptionalJSaxLoaderStartElementNull() ) {
			getTableEditBuff()->setOptionalJSaxLoaderStartElementNull();
		}
	}

	void CFBamTableEditObj::setOptionalJSaxLoaderStartElementValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJSaxLoaderStartElementNull() ) {
			getTableEditBuff()->setOptionalJSaxLoaderStartElementValue( value );
		}
		else if( getTableBuff()->getOptionalJSaxLoaderStartElementValue() != value ) {
			getTableEditBuff()->setOptionalJSaxLoaderStartElementValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJSaxLoaderEndElementNull() {
		return( getTableBuff()->isOptionalJSaxLoaderEndElementNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJSaxLoaderEndElementValue() {
		return( getTableBuff()->getOptionalJSaxLoaderEndElementValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJSaxLoaderEndElementReference() {
		return( getTableBuff()->getOptionalJSaxLoaderEndElementReference() );
	}

	void CFBamTableEditObj::setOptionalJSaxLoaderEndElementNull() {
		if( ! getTableBuff()->isOptionalJSaxLoaderEndElementNull() ) {
			getTableEditBuff()->setOptionalJSaxLoaderEndElementNull();
		}
	}

	void CFBamTableEditObj::setOptionalJSaxLoaderEndElementValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJSaxLoaderEndElementNull() ) {
			getTableEditBuff()->setOptionalJSaxLoaderEndElementValue( value );
		}
		else if( getTableBuff()->getOptionalJSaxLoaderEndElementValue() != value ) {
			getTableEditBuff()->setOptionalJSaxLoaderEndElementValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJXMsgTableImportNull() {
		return( getTableBuff()->isOptionalJXMsgTableImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJXMsgTableImportValue() {
		return( getTableBuff()->getOptionalJXMsgTableImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJXMsgTableImportReference() {
		return( getTableBuff()->getOptionalJXMsgTableImportReference() );
	}

	void CFBamTableEditObj::setOptionalJXMsgTableImportNull() {
		if( ! getTableBuff()->isOptionalJXMsgTableImportNull() ) {
			getTableEditBuff()->setOptionalJXMsgTableImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJXMsgTableImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJXMsgTableImportNull() ) {
			getTableEditBuff()->setOptionalJXMsgTableImportValue( value );
		}
		else if( getTableBuff()->getOptionalJXMsgTableImportValue() != value ) {
			getTableEditBuff()->setOptionalJXMsgTableImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJXMsgTableFormattersNull() {
		return( getTableBuff()->isOptionalJXMsgTableFormattersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJXMsgTableFormattersValue() {
		return( getTableBuff()->getOptionalJXMsgTableFormattersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJXMsgTableFormattersReference() {
		return( getTableBuff()->getOptionalJXMsgTableFormattersReference() );
	}

	void CFBamTableEditObj::setOptionalJXMsgTableFormattersNull() {
		if( ! getTableBuff()->isOptionalJXMsgTableFormattersNull() ) {
			getTableEditBuff()->setOptionalJXMsgTableFormattersNull();
		}
	}

	void CFBamTableEditObj::setOptionalJXMsgTableFormattersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJXMsgTableFormattersNull() ) {
			getTableEditBuff()->setOptionalJXMsgTableFormattersValue( value );
		}
		else if( getTableBuff()->getOptionalJXMsgTableFormattersValue() != value ) {
			getTableEditBuff()->setOptionalJXMsgTableFormattersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJXMsgRqstTableImportNull() {
		return( getTableBuff()->isOptionalJXMsgRqstTableImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJXMsgRqstTableImportValue() {
		return( getTableBuff()->getOptionalJXMsgRqstTableImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJXMsgRqstTableImportReference() {
		return( getTableBuff()->getOptionalJXMsgRqstTableImportReference() );
	}

	void CFBamTableEditObj::setOptionalJXMsgRqstTableImportNull() {
		if( ! getTableBuff()->isOptionalJXMsgRqstTableImportNull() ) {
			getTableEditBuff()->setOptionalJXMsgRqstTableImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJXMsgRqstTableImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJXMsgRqstTableImportNull() ) {
			getTableEditBuff()->setOptionalJXMsgRqstTableImportValue( value );
		}
		else if( getTableBuff()->getOptionalJXMsgRqstTableImportValue() != value ) {
			getTableEditBuff()->setOptionalJXMsgRqstTableImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJXMsgRspnTableImportNull() {
		return( getTableBuff()->isOptionalJXMsgRspnTableImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJXMsgRspnTableImportValue() {
		return( getTableBuff()->getOptionalJXMsgRspnTableImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJXMsgRspnTableImportReference() {
		return( getTableBuff()->getOptionalJXMsgRspnTableImportReference() );
	}

	void CFBamTableEditObj::setOptionalJXMsgRspnTableImportNull() {
		if( ! getTableBuff()->isOptionalJXMsgRspnTableImportNull() ) {
			getTableEditBuff()->setOptionalJXMsgRspnTableImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJXMsgRspnTableImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJXMsgRspnTableImportNull() ) {
			getTableEditBuff()->setOptionalJXMsgRspnTableImportValue( value );
		}
		else if( getTableBuff()->getOptionalJXMsgRspnTableImportValue() != value ) {
			getTableEditBuff()->setOptionalJXMsgRspnTableImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJXMsgClientTableImportNull() {
		return( getTableBuff()->isOptionalJXMsgClientTableImportNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJXMsgClientTableImportValue() {
		return( getTableBuff()->getOptionalJXMsgClientTableImportValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJXMsgClientTableImportReference() {
		return( getTableBuff()->getOptionalJXMsgClientTableImportReference() );
	}

	void CFBamTableEditObj::setOptionalJXMsgClientTableImportNull() {
		if( ! getTableBuff()->isOptionalJXMsgClientTableImportNull() ) {
			getTableEditBuff()->setOptionalJXMsgClientTableImportNull();
		}
	}

	void CFBamTableEditObj::setOptionalJXMsgClientTableImportValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJXMsgClientTableImportNull() ) {
			getTableEditBuff()->setOptionalJXMsgClientTableImportValue( value );
		}
		else if( getTableBuff()->getOptionalJXMsgClientTableImportValue() != value ) {
			getTableEditBuff()->setOptionalJXMsgClientTableImportValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJXMsgRqstTableBodyNull() {
		return( getTableBuff()->isOptionalJXMsgRqstTableBodyNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJXMsgRqstTableBodyValue() {
		return( getTableBuff()->getOptionalJXMsgRqstTableBodyValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJXMsgRqstTableBodyReference() {
		return( getTableBuff()->getOptionalJXMsgRqstTableBodyReference() );
	}

	void CFBamTableEditObj::setOptionalJXMsgRqstTableBodyNull() {
		if( ! getTableBuff()->isOptionalJXMsgRqstTableBodyNull() ) {
			getTableEditBuff()->setOptionalJXMsgRqstTableBodyNull();
		}
	}

	void CFBamTableEditObj::setOptionalJXMsgRqstTableBodyValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJXMsgRqstTableBodyNull() ) {
			getTableEditBuff()->setOptionalJXMsgRqstTableBodyValue( value );
		}
		else if( getTableBuff()->getOptionalJXMsgRqstTableBodyValue() != value ) {
			getTableEditBuff()->setOptionalJXMsgRqstTableBodyValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJXMsgRspnTableBodyNull() {
		return( getTableBuff()->isOptionalJXMsgRspnTableBodyNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJXMsgRspnTableBodyValue() {
		return( getTableBuff()->getOptionalJXMsgRspnTableBodyValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJXMsgRspnTableBodyReference() {
		return( getTableBuff()->getOptionalJXMsgRspnTableBodyReference() );
	}

	void CFBamTableEditObj::setOptionalJXMsgRspnTableBodyNull() {
		if( ! getTableBuff()->isOptionalJXMsgRspnTableBodyNull() ) {
			getTableEditBuff()->setOptionalJXMsgRspnTableBodyNull();
		}
	}

	void CFBamTableEditObj::setOptionalJXMsgRspnTableBodyValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJXMsgRspnTableBodyNull() ) {
			getTableEditBuff()->setOptionalJXMsgRspnTableBodyValue( value );
		}
		else if( getTableBuff()->getOptionalJXMsgRspnTableBodyValue() != value ) {
			getTableEditBuff()->setOptionalJXMsgRspnTableBodyValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalJXMsgClientTableBodyNull() {
		return( getTableBuff()->isOptionalJXMsgClientTableBodyNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalJXMsgClientTableBodyValue() {
		return( getTableBuff()->getOptionalJXMsgClientTableBodyValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalJXMsgClientTableBodyReference() {
		return( getTableBuff()->getOptionalJXMsgClientTableBodyReference() );
	}

	void CFBamTableEditObj::setOptionalJXMsgClientTableBodyNull() {
		if( ! getTableBuff()->isOptionalJXMsgClientTableBodyNull() ) {
			getTableEditBuff()->setOptionalJXMsgClientTableBodyNull();
		}
	}

	void CFBamTableEditObj::setOptionalJXMsgClientTableBodyValue( const std::string& value ) {
		if( getTableBuff()->isOptionalJXMsgClientTableBodyNull() ) {
			getTableEditBuff()->setOptionalJXMsgClientTableBodyValue( value );
		}
		else if( getTableBuff()->getOptionalJXMsgClientTableBodyValue() != value ) {
			getTableEditBuff()->setOptionalJXMsgClientTableBodyValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppObjMembersNull() {
		return( getTableBuff()->isOptionalCppObjMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppObjMembersValue() {
		return( getTableBuff()->getOptionalCppObjMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppObjMembersReference() {
		return( getTableBuff()->getOptionalCppObjMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCppObjMembersNull() {
		if( ! getTableBuff()->isOptionalCppObjMembersNull() ) {
			getTableEditBuff()->setOptionalCppObjMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppObjMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppObjMembersNull() ) {
			getTableEditBuff()->setOptionalCppObjMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCppObjMembersValue() != value ) {
			getTableEditBuff()->setOptionalCppObjMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppObjInterfaceNull() {
		return( getTableBuff()->isOptionalCppObjInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppObjInterfaceValue() {
		return( getTableBuff()->getOptionalCppObjInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppObjInterfaceReference() {
		return( getTableBuff()->getOptionalCppObjInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalCppObjInterfaceNull() {
		if( ! getTableBuff()->isOptionalCppObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalCppObjInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppObjInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalCppObjInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalCppObjInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalCppObjInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppObjIncludeNull() {
		return( getTableBuff()->isOptionalCppObjIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppObjIncludeValue() {
		return( getTableBuff()->getOptionalCppObjIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppObjIncludeReference() {
		return( getTableBuff()->getOptionalCppObjIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppObjIncludeNull() {
		if( ! getTableBuff()->isOptionalCppObjIncludeNull() ) {
			getTableEditBuff()->setOptionalCppObjIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppObjIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppObjIncludeNull() ) {
			getTableEditBuff()->setOptionalCppObjIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppObjIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppObjIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppObjImplementationNull() {
		return( getTableBuff()->isOptionalCppObjImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppObjImplementationValue() {
		return( getTableBuff()->getOptionalCppObjImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppObjImplementationReference() {
		return( getTableBuff()->getOptionalCppObjImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCppObjImplementationNull() {
		if( ! getTableBuff()->isOptionalCppObjImplementationNull() ) {
			getTableEditBuff()->setOptionalCppObjImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppObjImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppObjImplementationNull() ) {
			getTableEditBuff()->setOptionalCppObjImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCppObjImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCppObjImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppEditObjMembersNull() {
		return( getTableBuff()->isOptionalCppEditObjMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppEditObjMembersValue() {
		return( getTableBuff()->getOptionalCppEditObjMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppEditObjMembersReference() {
		return( getTableBuff()->getOptionalCppEditObjMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCppEditObjMembersNull() {
		if( ! getTableBuff()->isOptionalCppEditObjMembersNull() ) {
			getTableEditBuff()->setOptionalCppEditObjMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppEditObjMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppEditObjMembersNull() ) {
			getTableEditBuff()->setOptionalCppEditObjMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCppEditObjMembersValue() != value ) {
			getTableEditBuff()->setOptionalCppEditObjMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppEditObjInterfaceNull() {
		return( getTableBuff()->isOptionalCppEditObjInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppEditObjInterfaceValue() {
		return( getTableBuff()->getOptionalCppEditObjInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppEditObjInterfaceReference() {
		return( getTableBuff()->getOptionalCppEditObjInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalCppEditObjInterfaceNull() {
		if( ! getTableBuff()->isOptionalCppEditObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalCppEditObjInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppEditObjInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppEditObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalCppEditObjInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalCppEditObjInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalCppEditObjInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppEditObjIncludeNull() {
		return( getTableBuff()->isOptionalCppEditObjIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppEditObjIncludeValue() {
		return( getTableBuff()->getOptionalCppEditObjIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppEditObjIncludeReference() {
		return( getTableBuff()->getOptionalCppEditObjIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppEditObjIncludeNull() {
		if( ! getTableBuff()->isOptionalCppEditObjIncludeNull() ) {
			getTableEditBuff()->setOptionalCppEditObjIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppEditObjIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppEditObjIncludeNull() ) {
			getTableEditBuff()->setOptionalCppEditObjIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppEditObjIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppEditObjIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppEditObjImplementationNull() {
		return( getTableBuff()->isOptionalCppEditObjImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppEditObjImplementationValue() {
		return( getTableBuff()->getOptionalCppEditObjImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppEditObjImplementationReference() {
		return( getTableBuff()->getOptionalCppEditObjImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCppEditObjImplementationNull() {
		if( ! getTableBuff()->isOptionalCppEditObjImplementationNull() ) {
			getTableEditBuff()->setOptionalCppEditObjImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppEditObjImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppEditObjImplementationNull() ) {
			getTableEditBuff()->setOptionalCppEditObjImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCppEditObjImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCppEditObjImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppTableIncludeNull() {
		return( getTableBuff()->isOptionalCppTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppTableIncludeValue() {
		return( getTableBuff()->getOptionalCppTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppTableIncludeReference() {
		return( getTableBuff()->getOptionalCppTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppTableIncludeNull() {
		if( ! getTableBuff()->isOptionalCppTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppTableMembersNull() {
		return( getTableBuff()->isOptionalCppTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppTableMembersValue() {
		return( getTableBuff()->getOptionalCppTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppTableMembersReference() {
		return( getTableBuff()->getOptionalCppTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCppTableMembersNull() {
		if( ! getTableBuff()->isOptionalCppTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCppTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCppTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppTableInterfaceNull() {
		return( getTableBuff()->isOptionalCppTableInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppTableInterfaceValue() {
		return( getTableBuff()->getOptionalCppTableInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppTableInterfaceReference() {
		return( getTableBuff()->getOptionalCppTableInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalCppTableInterfaceNull() {
		if( ! getTableBuff()->isOptionalCppTableInterfaceNull() ) {
			getTableEditBuff()->setOptionalCppTableInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppTableInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppTableInterfaceNull() ) {
			getTableEditBuff()->setOptionalCppTableInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalCppTableInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalCppTableInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppTableImplementationNull() {
		return( getTableBuff()->isOptionalCppTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppTableImplementationValue() {
		return( getTableBuff()->getOptionalCppTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppTableImplementationReference() {
		return( getTableBuff()->getOptionalCppTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCppTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCppTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCppTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCppTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppTableObjIncludeNull() {
		return( getTableBuff()->isOptionalCppTableObjIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppTableObjIncludeValue() {
		return( getTableBuff()->getOptionalCppTableObjIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppTableObjIncludeReference() {
		return( getTableBuff()->getOptionalCppTableObjIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppTableObjIncludeNull() {
		if( ! getTableBuff()->isOptionalCppTableObjIncludeNull() ) {
			getTableEditBuff()->setOptionalCppTableObjIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppTableObjIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppTableObjIncludeNull() ) {
			getTableEditBuff()->setOptionalCppTableObjIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppTableObjIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppTableObjIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppTableObjMembersNull() {
		return( getTableBuff()->isOptionalCppTableObjMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppTableObjMembersValue() {
		return( getTableBuff()->getOptionalCppTableObjMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppTableObjMembersReference() {
		return( getTableBuff()->getOptionalCppTableObjMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCppTableObjMembersNull() {
		if( ! getTableBuff()->isOptionalCppTableObjMembersNull() ) {
			getTableEditBuff()->setOptionalCppTableObjMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppTableObjMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppTableObjMembersNull() ) {
			getTableEditBuff()->setOptionalCppTableObjMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCppTableObjMembersValue() != value ) {
			getTableEditBuff()->setOptionalCppTableObjMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppTableObjInterfaceNull() {
		return( getTableBuff()->isOptionalCppTableObjInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppTableObjInterfaceValue() {
		return( getTableBuff()->getOptionalCppTableObjInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppTableObjInterfaceReference() {
		return( getTableBuff()->getOptionalCppTableObjInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalCppTableObjInterfaceNull() {
		if( ! getTableBuff()->isOptionalCppTableObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalCppTableObjInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppTableObjInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppTableObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalCppTableObjInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalCppTableObjInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalCppTableObjInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppTableObjImplementationNull() {
		return( getTableBuff()->isOptionalCppTableObjImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppTableObjImplementationValue() {
		return( getTableBuff()->getOptionalCppTableObjImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppTableObjImplementationReference() {
		return( getTableBuff()->getOptionalCppTableObjImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCppTableObjImplementationNull() {
		if( ! getTableBuff()->isOptionalCppTableObjImplementationNull() ) {
			getTableEditBuff()->setOptionalCppTableObjImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppTableObjImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppTableObjImplementationNull() ) {
			getTableEditBuff()->setOptionalCppTableObjImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCppTableObjImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCppTableObjImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppDb2LUWTableIncludeNull() {
		return( getTableBuff()->isOptionalCppDb2LUWTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppDb2LUWTableIncludeValue() {
		return( getTableBuff()->getOptionalCppDb2LUWTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppDb2LUWTableIncludeReference() {
		return( getTableBuff()->getOptionalCppDb2LUWTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppDb2LUWTableIncludeNull() {
		if( ! getTableBuff()->isOptionalCppDb2LUWTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppDb2LUWTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppDb2LUWTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppDb2LUWTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppDb2LUWTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppDb2LUWTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppDb2LUWTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppDb2LUWTableMembersNull() {
		return( getTableBuff()->isOptionalCppDb2LUWTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppDb2LUWTableMembersValue() {
		return( getTableBuff()->getOptionalCppDb2LUWTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppDb2LUWTableMembersReference() {
		return( getTableBuff()->getOptionalCppDb2LUWTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCppDb2LUWTableMembersNull() {
		if( ! getTableBuff()->isOptionalCppDb2LUWTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppDb2LUWTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppDb2LUWTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppDb2LUWTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppDb2LUWTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCppDb2LUWTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCppDb2LUWTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppDb2LUWTableImplementationNull() {
		return( getTableBuff()->isOptionalCppDb2LUWTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppDb2LUWTableImplementationValue() {
		return( getTableBuff()->getOptionalCppDb2LUWTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppDb2LUWTableImplementationReference() {
		return( getTableBuff()->getOptionalCppDb2LUWTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCppDb2LUWTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCppDb2LUWTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppDb2LUWTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppDb2LUWTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppDb2LUWTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppDb2LUWTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCppDb2LUWTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCppDb2LUWTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppMSSqlTableIncludeNull() {
		return( getTableBuff()->isOptionalCppMSSqlTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppMSSqlTableIncludeValue() {
		return( getTableBuff()->getOptionalCppMSSqlTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppMSSqlTableIncludeReference() {
		return( getTableBuff()->getOptionalCppMSSqlTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppMSSqlTableIncludeNull() {
		if( ! getTableBuff()->isOptionalCppMSSqlTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppMSSqlTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppMSSqlTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppMSSqlTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppMSSqlTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppMSSqlTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppMSSqlTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppMSSqlTableMembersNull() {
		return( getTableBuff()->isOptionalCppMSSqlTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppMSSqlTableMembersValue() {
		return( getTableBuff()->getOptionalCppMSSqlTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppMSSqlTableMembersReference() {
		return( getTableBuff()->getOptionalCppMSSqlTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCppMSSqlTableMembersNull() {
		if( ! getTableBuff()->isOptionalCppMSSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppMSSqlTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppMSSqlTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppMSSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppMSSqlTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCppMSSqlTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCppMSSqlTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppMSSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalCppMSSqlTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppMSSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalCppMSSqlTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppMSSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalCppMSSqlTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCppMSSqlTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCppMSSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppMSSqlTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppMSSqlTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppMSSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppMSSqlTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCppMSSqlTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCppMSSqlTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppMySqlTableIncludeNull() {
		return( getTableBuff()->isOptionalCppMySqlTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppMySqlTableIncludeValue() {
		return( getTableBuff()->getOptionalCppMySqlTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppMySqlTableIncludeReference() {
		return( getTableBuff()->getOptionalCppMySqlTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppMySqlTableIncludeNull() {
		if( ! getTableBuff()->isOptionalCppMySqlTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppMySqlTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppMySqlTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppMySqlTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppMySqlTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppMySqlTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppMySqlTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppMySqlTableMembersNull() {
		return( getTableBuff()->isOptionalCppMySqlTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppMySqlTableMembersValue() {
		return( getTableBuff()->getOptionalCppMySqlTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppMySqlTableMembersReference() {
		return( getTableBuff()->getOptionalCppMySqlTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCppMySqlTableMembersNull() {
		if( ! getTableBuff()->isOptionalCppMySqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppMySqlTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppMySqlTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppMySqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppMySqlTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCppMySqlTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCppMySqlTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppMySqlTableImplementationNull() {
		return( getTableBuff()->isOptionalCppMySqlTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppMySqlTableImplementationValue() {
		return( getTableBuff()->getOptionalCppMySqlTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppMySqlTableImplementationReference() {
		return( getTableBuff()->getOptionalCppMySqlTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCppMySqlTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCppMySqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppMySqlTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppMySqlTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppMySqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppMySqlTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCppMySqlTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCppMySqlTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppOracleTableIncludeNull() {
		return( getTableBuff()->isOptionalCppOracleTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppOracleTableIncludeValue() {
		return( getTableBuff()->getOptionalCppOracleTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppOracleTableIncludeReference() {
		return( getTableBuff()->getOptionalCppOracleTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppOracleTableIncludeNull() {
		if( ! getTableBuff()->isOptionalCppOracleTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppOracleTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppOracleTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppOracleTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppOracleTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppOracleTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppOracleTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppOracleTableMembersNull() {
		return( getTableBuff()->isOptionalCppOracleTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppOracleTableMembersValue() {
		return( getTableBuff()->getOptionalCppOracleTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppOracleTableMembersReference() {
		return( getTableBuff()->getOptionalCppOracleTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCppOracleTableMembersNull() {
		if( ! getTableBuff()->isOptionalCppOracleTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppOracleTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppOracleTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppOracleTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppOracleTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCppOracleTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCppOracleTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppOracleTableImplementationNull() {
		return( getTableBuff()->isOptionalCppOracleTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppOracleTableImplementationValue() {
		return( getTableBuff()->getOptionalCppOracleTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppOracleTableImplementationReference() {
		return( getTableBuff()->getOptionalCppOracleTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCppOracleTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCppOracleTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppOracleTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppOracleTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppOracleTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppOracleTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCppOracleTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCppOracleTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppPgSqlTableIncludeNull() {
		return( getTableBuff()->isOptionalCppPgSqlTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppPgSqlTableIncludeValue() {
		return( getTableBuff()->getOptionalCppPgSqlTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppPgSqlTableIncludeReference() {
		return( getTableBuff()->getOptionalCppPgSqlTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppPgSqlTableIncludeNull() {
		if( ! getTableBuff()->isOptionalCppPgSqlTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppPgSqlTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppPgSqlTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppPgSqlTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppPgSqlTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppPgSqlTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppPgSqlTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppPgSqlTableMembersNull() {
		return( getTableBuff()->isOptionalCppPgSqlTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppPgSqlTableMembersValue() {
		return( getTableBuff()->getOptionalCppPgSqlTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppPgSqlTableMembersReference() {
		return( getTableBuff()->getOptionalCppPgSqlTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCppPgSqlTableMembersNull() {
		if( ! getTableBuff()->isOptionalCppPgSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppPgSqlTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppPgSqlTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppPgSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppPgSqlTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCppPgSqlTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCppPgSqlTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppPgSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalCppPgSqlTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppPgSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalCppPgSqlTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppPgSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalCppPgSqlTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCppPgSqlTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCppPgSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppPgSqlTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppPgSqlTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppPgSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppPgSqlTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCppPgSqlTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCppPgSqlTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppRamTableIncludeNull() {
		return( getTableBuff()->isOptionalCppRamTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppRamTableIncludeValue() {
		return( getTableBuff()->getOptionalCppRamTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppRamTableIncludeReference() {
		return( getTableBuff()->getOptionalCppRamTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppRamTableIncludeNull() {
		if( ! getTableBuff()->isOptionalCppRamTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppRamTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppRamTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppRamTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppRamTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppRamTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppRamTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppRamTableMembersNull() {
		return( getTableBuff()->isOptionalCppRamTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppRamTableMembersValue() {
		return( getTableBuff()->getOptionalCppRamTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppRamTableMembersReference() {
		return( getTableBuff()->getOptionalCppRamTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCppRamTableMembersNull() {
		if( ! getTableBuff()->isOptionalCppRamTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppRamTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppRamTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppRamTableMembersNull() ) {
			getTableEditBuff()->setOptionalCppRamTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCppRamTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCppRamTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppRamTableImplementationNull() {
		return( getTableBuff()->isOptionalCppRamTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppRamTableImplementationValue() {
		return( getTableBuff()->getOptionalCppRamTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppRamTableImplementationReference() {
		return( getTableBuff()->getOptionalCppRamTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCppRamTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCppRamTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppRamTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppRamTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppRamTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCppRamTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCppRamTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCppRamTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppSaxLoaderIncludeNull() {
		return( getTableBuff()->isOptionalCppSaxLoaderIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppSaxLoaderIncludeValue() {
		return( getTableBuff()->getOptionalCppSaxLoaderIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppSaxLoaderIncludeReference() {
		return( getTableBuff()->getOptionalCppSaxLoaderIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppSaxLoaderIncludeNull() {
		if( ! getTableBuff()->isOptionalCppSaxLoaderIncludeNull() ) {
			getTableEditBuff()->setOptionalCppSaxLoaderIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppSaxLoaderIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppSaxLoaderIncludeNull() ) {
			getTableEditBuff()->setOptionalCppSaxLoaderIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppSaxLoaderIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppSaxLoaderIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppSaxLoaderStartElementNull() {
		return( getTableBuff()->isOptionalCppSaxLoaderStartElementNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppSaxLoaderStartElementValue() {
		return( getTableBuff()->getOptionalCppSaxLoaderStartElementValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppSaxLoaderStartElementReference() {
		return( getTableBuff()->getOptionalCppSaxLoaderStartElementReference() );
	}

	void CFBamTableEditObj::setOptionalCppSaxLoaderStartElementNull() {
		if( ! getTableBuff()->isOptionalCppSaxLoaderStartElementNull() ) {
			getTableEditBuff()->setOptionalCppSaxLoaderStartElementNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppSaxLoaderStartElementValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppSaxLoaderStartElementNull() ) {
			getTableEditBuff()->setOptionalCppSaxLoaderStartElementValue( value );
		}
		else if( getTableBuff()->getOptionalCppSaxLoaderStartElementValue() != value ) {
			getTableEditBuff()->setOptionalCppSaxLoaderStartElementValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppSaxLoaderEndElementNull() {
		return( getTableBuff()->isOptionalCppSaxLoaderEndElementNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppSaxLoaderEndElementValue() {
		return( getTableBuff()->getOptionalCppSaxLoaderEndElementValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppSaxLoaderEndElementReference() {
		return( getTableBuff()->getOptionalCppSaxLoaderEndElementReference() );
	}

	void CFBamTableEditObj::setOptionalCppSaxLoaderEndElementNull() {
		if( ! getTableBuff()->isOptionalCppSaxLoaderEndElementNull() ) {
			getTableEditBuff()->setOptionalCppSaxLoaderEndElementNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppSaxLoaderEndElementValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppSaxLoaderEndElementNull() ) {
			getTableEditBuff()->setOptionalCppSaxLoaderEndElementValue( value );
		}
		else if( getTableBuff()->getOptionalCppSaxLoaderEndElementValue() != value ) {
			getTableEditBuff()->setOptionalCppSaxLoaderEndElementValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppXMsgTableIncludeNull() {
		return( getTableBuff()->isOptionalCppXMsgTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppXMsgTableIncludeValue() {
		return( getTableBuff()->getOptionalCppXMsgTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppXMsgTableIncludeReference() {
		return( getTableBuff()->getOptionalCppXMsgTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppXMsgTableIncludeNull() {
		if( ! getTableBuff()->isOptionalCppXMsgTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppXMsgTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppXMsgTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppXMsgTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppXMsgTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppXMsgTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppXMsgTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppXMsgTableFormattersNull() {
		return( getTableBuff()->isOptionalCppXMsgTableFormattersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppXMsgTableFormattersValue() {
		return( getTableBuff()->getOptionalCppXMsgTableFormattersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppXMsgTableFormattersReference() {
		return( getTableBuff()->getOptionalCppXMsgTableFormattersReference() );
	}

	void CFBamTableEditObj::setOptionalCppXMsgTableFormattersNull() {
		if( ! getTableBuff()->isOptionalCppXMsgTableFormattersNull() ) {
			getTableEditBuff()->setOptionalCppXMsgTableFormattersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppXMsgTableFormattersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppXMsgTableFormattersNull() ) {
			getTableEditBuff()->setOptionalCppXMsgTableFormattersValue( value );
		}
		else if( getTableBuff()->getOptionalCppXMsgTableFormattersValue() != value ) {
			getTableEditBuff()->setOptionalCppXMsgTableFormattersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppXMsgRqstTableIncludeNull() {
		return( getTableBuff()->isOptionalCppXMsgRqstTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppXMsgRqstTableIncludeValue() {
		return( getTableBuff()->getOptionalCppXMsgRqstTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppXMsgRqstTableIncludeReference() {
		return( getTableBuff()->getOptionalCppXMsgRqstTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppXMsgRqstTableIncludeNull() {
		if( ! getTableBuff()->isOptionalCppXMsgRqstTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppXMsgRqstTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppXMsgRqstTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppXMsgRqstTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppXMsgRqstTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppXMsgRqstTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppXMsgRqstTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppXMsgRspnTableIncludeNull() {
		return( getTableBuff()->isOptionalCppXMsgRspnTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppXMsgRspnTableIncludeValue() {
		return( getTableBuff()->getOptionalCppXMsgRspnTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppXMsgRspnTableIncludeReference() {
		return( getTableBuff()->getOptionalCppXMsgRspnTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppXMsgRspnTableIncludeNull() {
		if( ! getTableBuff()->isOptionalCppXMsgRspnTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppXMsgRspnTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppXMsgRspnTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppXMsgRspnTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppXMsgRspnTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppXMsgRspnTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppXMsgRspnTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppXMsgClientTableIncludeNull() {
		return( getTableBuff()->isOptionalCppXMsgClientTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppXMsgClientTableIncludeValue() {
		return( getTableBuff()->getOptionalCppXMsgClientTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppXMsgClientTableIncludeReference() {
		return( getTableBuff()->getOptionalCppXMsgClientTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalCppXMsgClientTableIncludeNull() {
		if( ! getTableBuff()->isOptionalCppXMsgClientTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppXMsgClientTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppXMsgClientTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppXMsgClientTableIncludeNull() ) {
			getTableEditBuff()->setOptionalCppXMsgClientTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalCppXMsgClientTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalCppXMsgClientTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppXMsgRqstTableBodyNull() {
		return( getTableBuff()->isOptionalCppXMsgRqstTableBodyNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppXMsgRqstTableBodyValue() {
		return( getTableBuff()->getOptionalCppXMsgRqstTableBodyValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppXMsgRqstTableBodyReference() {
		return( getTableBuff()->getOptionalCppXMsgRqstTableBodyReference() );
	}

	void CFBamTableEditObj::setOptionalCppXMsgRqstTableBodyNull() {
		if( ! getTableBuff()->isOptionalCppXMsgRqstTableBodyNull() ) {
			getTableEditBuff()->setOptionalCppXMsgRqstTableBodyNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppXMsgRqstTableBodyValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppXMsgRqstTableBodyNull() ) {
			getTableEditBuff()->setOptionalCppXMsgRqstTableBodyValue( value );
		}
		else if( getTableBuff()->getOptionalCppXMsgRqstTableBodyValue() != value ) {
			getTableEditBuff()->setOptionalCppXMsgRqstTableBodyValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppXMsgRspnTableBodyNull() {
		return( getTableBuff()->isOptionalCppXMsgRspnTableBodyNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppXMsgRspnTableBodyValue() {
		return( getTableBuff()->getOptionalCppXMsgRspnTableBodyValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppXMsgRspnTableBodyReference() {
		return( getTableBuff()->getOptionalCppXMsgRspnTableBodyReference() );
	}

	void CFBamTableEditObj::setOptionalCppXMsgRspnTableBodyNull() {
		if( ! getTableBuff()->isOptionalCppXMsgRspnTableBodyNull() ) {
			getTableEditBuff()->setOptionalCppXMsgRspnTableBodyNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppXMsgRspnTableBodyValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppXMsgRspnTableBodyNull() ) {
			getTableEditBuff()->setOptionalCppXMsgRspnTableBodyValue( value );
		}
		else if( getTableBuff()->getOptionalCppXMsgRspnTableBodyValue() != value ) {
			getTableEditBuff()->setOptionalCppXMsgRspnTableBodyValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCppXMsgClientTableBodyNull() {
		return( getTableBuff()->isOptionalCppXMsgClientTableBodyNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCppXMsgClientTableBodyValue() {
		return( getTableBuff()->getOptionalCppXMsgClientTableBodyValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCppXMsgClientTableBodyReference() {
		return( getTableBuff()->getOptionalCppXMsgClientTableBodyReference() );
	}

	void CFBamTableEditObj::setOptionalCppXMsgClientTableBodyNull() {
		if( ! getTableBuff()->isOptionalCppXMsgClientTableBodyNull() ) {
			getTableEditBuff()->setOptionalCppXMsgClientTableBodyNull();
		}
	}

	void CFBamTableEditObj::setOptionalCppXMsgClientTableBodyValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCppXMsgClientTableBodyNull() ) {
			getTableEditBuff()->setOptionalCppXMsgClientTableBodyValue( value );
		}
		else if( getTableBuff()->getOptionalCppXMsgClientTableBodyValue() != value ) {
			getTableEditBuff()->setOptionalCppXMsgClientTableBodyValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppObjMembersNull() {
		return( getTableBuff()->isOptionalHppObjMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppObjMembersValue() {
		return( getTableBuff()->getOptionalHppObjMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppObjMembersReference() {
		return( getTableBuff()->getOptionalHppObjMembersReference() );
	}

	void CFBamTableEditObj::setOptionalHppObjMembersNull() {
		if( ! getTableBuff()->isOptionalHppObjMembersNull() ) {
			getTableEditBuff()->setOptionalHppObjMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppObjMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppObjMembersNull() ) {
			getTableEditBuff()->setOptionalHppObjMembersValue( value );
		}
		else if( getTableBuff()->getOptionalHppObjMembersValue() != value ) {
			getTableEditBuff()->setOptionalHppObjMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppObjInterfaceNull() {
		return( getTableBuff()->isOptionalHppObjInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppObjInterfaceValue() {
		return( getTableBuff()->getOptionalHppObjInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppObjInterfaceReference() {
		return( getTableBuff()->getOptionalHppObjInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalHppObjInterfaceNull() {
		if( ! getTableBuff()->isOptionalHppObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalHppObjInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppObjInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalHppObjInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalHppObjInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalHppObjInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppObjIncludeNull() {
		return( getTableBuff()->isOptionalHppObjIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppObjIncludeValue() {
		return( getTableBuff()->getOptionalHppObjIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppObjIncludeReference() {
		return( getTableBuff()->getOptionalHppObjIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppObjIncludeNull() {
		if( ! getTableBuff()->isOptionalHppObjIncludeNull() ) {
			getTableEditBuff()->setOptionalHppObjIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppObjIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppObjIncludeNull() ) {
			getTableEditBuff()->setOptionalHppObjIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppObjIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppObjIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppObjImplementationNull() {
		return( getTableBuff()->isOptionalHppObjImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppObjImplementationValue() {
		return( getTableBuff()->getOptionalHppObjImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppObjImplementationReference() {
		return( getTableBuff()->getOptionalHppObjImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalHppObjImplementationNull() {
		if( ! getTableBuff()->isOptionalHppObjImplementationNull() ) {
			getTableEditBuff()->setOptionalHppObjImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppObjImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppObjImplementationNull() ) {
			getTableEditBuff()->setOptionalHppObjImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalHppObjImplementationValue() != value ) {
			getTableEditBuff()->setOptionalHppObjImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppEditObjMembersNull() {
		return( getTableBuff()->isOptionalHppEditObjMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppEditObjMembersValue() {
		return( getTableBuff()->getOptionalHppEditObjMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppEditObjMembersReference() {
		return( getTableBuff()->getOptionalHppEditObjMembersReference() );
	}

	void CFBamTableEditObj::setOptionalHppEditObjMembersNull() {
		if( ! getTableBuff()->isOptionalHppEditObjMembersNull() ) {
			getTableEditBuff()->setOptionalHppEditObjMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppEditObjMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppEditObjMembersNull() ) {
			getTableEditBuff()->setOptionalHppEditObjMembersValue( value );
		}
		else if( getTableBuff()->getOptionalHppEditObjMembersValue() != value ) {
			getTableEditBuff()->setOptionalHppEditObjMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppEditObjInterfaceNull() {
		return( getTableBuff()->isOptionalHppEditObjInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppEditObjInterfaceValue() {
		return( getTableBuff()->getOptionalHppEditObjInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppEditObjInterfaceReference() {
		return( getTableBuff()->getOptionalHppEditObjInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalHppEditObjInterfaceNull() {
		if( ! getTableBuff()->isOptionalHppEditObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalHppEditObjInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppEditObjInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppEditObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalHppEditObjInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalHppEditObjInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalHppEditObjInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppEditObjIncludeNull() {
		return( getTableBuff()->isOptionalHppEditObjIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppEditObjIncludeValue() {
		return( getTableBuff()->getOptionalHppEditObjIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppEditObjIncludeReference() {
		return( getTableBuff()->getOptionalHppEditObjIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppEditObjIncludeNull() {
		if( ! getTableBuff()->isOptionalHppEditObjIncludeNull() ) {
			getTableEditBuff()->setOptionalHppEditObjIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppEditObjIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppEditObjIncludeNull() ) {
			getTableEditBuff()->setOptionalHppEditObjIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppEditObjIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppEditObjIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppEditObjImplementationNull() {
		return( getTableBuff()->isOptionalHppEditObjImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppEditObjImplementationValue() {
		return( getTableBuff()->getOptionalHppEditObjImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppEditObjImplementationReference() {
		return( getTableBuff()->getOptionalHppEditObjImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalHppEditObjImplementationNull() {
		if( ! getTableBuff()->isOptionalHppEditObjImplementationNull() ) {
			getTableEditBuff()->setOptionalHppEditObjImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppEditObjImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppEditObjImplementationNull() ) {
			getTableEditBuff()->setOptionalHppEditObjImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalHppEditObjImplementationValue() != value ) {
			getTableEditBuff()->setOptionalHppEditObjImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppTableIncludeNull() {
		return( getTableBuff()->isOptionalHppTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppTableIncludeValue() {
		return( getTableBuff()->getOptionalHppTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppTableIncludeReference() {
		return( getTableBuff()->getOptionalHppTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppTableIncludeNull() {
		if( ! getTableBuff()->isOptionalHppTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppTableMembersNull() {
		return( getTableBuff()->isOptionalHppTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppTableMembersValue() {
		return( getTableBuff()->getOptionalHppTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppTableMembersReference() {
		return( getTableBuff()->getOptionalHppTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalHppTableMembersNull() {
		if( ! getTableBuff()->isOptionalHppTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalHppTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalHppTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppTableInterfaceNull() {
		return( getTableBuff()->isOptionalHppTableInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppTableInterfaceValue() {
		return( getTableBuff()->getOptionalHppTableInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppTableInterfaceReference() {
		return( getTableBuff()->getOptionalHppTableInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalHppTableInterfaceNull() {
		if( ! getTableBuff()->isOptionalHppTableInterfaceNull() ) {
			getTableEditBuff()->setOptionalHppTableInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppTableInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppTableInterfaceNull() ) {
			getTableEditBuff()->setOptionalHppTableInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalHppTableInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalHppTableInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppTableImplementationNull() {
		return( getTableBuff()->isOptionalHppTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppTableImplementationValue() {
		return( getTableBuff()->getOptionalHppTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppTableImplementationReference() {
		return( getTableBuff()->getOptionalHppTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalHppTableImplementationNull() {
		if( ! getTableBuff()->isOptionalHppTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalHppTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalHppTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppTableObjIncludeNull() {
		return( getTableBuff()->isOptionalHppTableObjIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppTableObjIncludeValue() {
		return( getTableBuff()->getOptionalHppTableObjIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppTableObjIncludeReference() {
		return( getTableBuff()->getOptionalHppTableObjIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppTableObjIncludeNull() {
		if( ! getTableBuff()->isOptionalHppTableObjIncludeNull() ) {
			getTableEditBuff()->setOptionalHppTableObjIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppTableObjIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppTableObjIncludeNull() ) {
			getTableEditBuff()->setOptionalHppTableObjIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppTableObjIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppTableObjIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppTableObjMembersNull() {
		return( getTableBuff()->isOptionalHppTableObjMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppTableObjMembersValue() {
		return( getTableBuff()->getOptionalHppTableObjMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppTableObjMembersReference() {
		return( getTableBuff()->getOptionalHppTableObjMembersReference() );
	}

	void CFBamTableEditObj::setOptionalHppTableObjMembersNull() {
		if( ! getTableBuff()->isOptionalHppTableObjMembersNull() ) {
			getTableEditBuff()->setOptionalHppTableObjMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppTableObjMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppTableObjMembersNull() ) {
			getTableEditBuff()->setOptionalHppTableObjMembersValue( value );
		}
		else if( getTableBuff()->getOptionalHppTableObjMembersValue() != value ) {
			getTableEditBuff()->setOptionalHppTableObjMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppTableObjInterfaceNull() {
		return( getTableBuff()->isOptionalHppTableObjInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppTableObjInterfaceValue() {
		return( getTableBuff()->getOptionalHppTableObjInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppTableObjInterfaceReference() {
		return( getTableBuff()->getOptionalHppTableObjInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalHppTableObjInterfaceNull() {
		if( ! getTableBuff()->isOptionalHppTableObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalHppTableObjInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppTableObjInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppTableObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalHppTableObjInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalHppTableObjInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalHppTableObjInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppTableObjImplementationNull() {
		return( getTableBuff()->isOptionalHppTableObjImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppTableObjImplementationValue() {
		return( getTableBuff()->getOptionalHppTableObjImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppTableObjImplementationReference() {
		return( getTableBuff()->getOptionalHppTableObjImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalHppTableObjImplementationNull() {
		if( ! getTableBuff()->isOptionalHppTableObjImplementationNull() ) {
			getTableEditBuff()->setOptionalHppTableObjImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppTableObjImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppTableObjImplementationNull() ) {
			getTableEditBuff()->setOptionalHppTableObjImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalHppTableObjImplementationValue() != value ) {
			getTableEditBuff()->setOptionalHppTableObjImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppDb2LUWTableIncludeNull() {
		return( getTableBuff()->isOptionalHppDb2LUWTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppDb2LUWTableIncludeValue() {
		return( getTableBuff()->getOptionalHppDb2LUWTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppDb2LUWTableIncludeReference() {
		return( getTableBuff()->getOptionalHppDb2LUWTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppDb2LUWTableIncludeNull() {
		if( ! getTableBuff()->isOptionalHppDb2LUWTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppDb2LUWTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppDb2LUWTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppDb2LUWTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppDb2LUWTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppDb2LUWTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppDb2LUWTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppDb2LUWTableMembersNull() {
		return( getTableBuff()->isOptionalHppDb2LUWTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppDb2LUWTableMembersValue() {
		return( getTableBuff()->getOptionalHppDb2LUWTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppDb2LUWTableMembersReference() {
		return( getTableBuff()->getOptionalHppDb2LUWTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalHppDb2LUWTableMembersNull() {
		if( ! getTableBuff()->isOptionalHppDb2LUWTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppDb2LUWTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppDb2LUWTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppDb2LUWTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppDb2LUWTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalHppDb2LUWTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalHppDb2LUWTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppDb2LUWTableImplementationNull() {
		return( getTableBuff()->isOptionalHppDb2LUWTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppDb2LUWTableImplementationValue() {
		return( getTableBuff()->getOptionalHppDb2LUWTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppDb2LUWTableImplementationReference() {
		return( getTableBuff()->getOptionalHppDb2LUWTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalHppDb2LUWTableImplementationNull() {
		if( ! getTableBuff()->isOptionalHppDb2LUWTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppDb2LUWTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppDb2LUWTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppDb2LUWTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppDb2LUWTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalHppDb2LUWTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalHppDb2LUWTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppMSSqlTableIncludeNull() {
		return( getTableBuff()->isOptionalHppMSSqlTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppMSSqlTableIncludeValue() {
		return( getTableBuff()->getOptionalHppMSSqlTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppMSSqlTableIncludeReference() {
		return( getTableBuff()->getOptionalHppMSSqlTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppMSSqlTableIncludeNull() {
		if( ! getTableBuff()->isOptionalHppMSSqlTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppMSSqlTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppMSSqlTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppMSSqlTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppMSSqlTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppMSSqlTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppMSSqlTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppMSSqlTableMembersNull() {
		return( getTableBuff()->isOptionalHppMSSqlTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppMSSqlTableMembersValue() {
		return( getTableBuff()->getOptionalHppMSSqlTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppMSSqlTableMembersReference() {
		return( getTableBuff()->getOptionalHppMSSqlTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalHppMSSqlTableMembersNull() {
		if( ! getTableBuff()->isOptionalHppMSSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppMSSqlTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppMSSqlTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppMSSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppMSSqlTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalHppMSSqlTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalHppMSSqlTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppMSSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalHppMSSqlTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppMSSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalHppMSSqlTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppMSSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalHppMSSqlTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalHppMSSqlTableImplementationNull() {
		if( ! getTableBuff()->isOptionalHppMSSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppMSSqlTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppMSSqlTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppMSSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppMSSqlTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalHppMSSqlTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalHppMSSqlTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppMySqlTableIncludeNull() {
		return( getTableBuff()->isOptionalHppMySqlTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppMySqlTableIncludeValue() {
		return( getTableBuff()->getOptionalHppMySqlTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppMySqlTableIncludeReference() {
		return( getTableBuff()->getOptionalHppMySqlTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppMySqlTableIncludeNull() {
		if( ! getTableBuff()->isOptionalHppMySqlTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppMySqlTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppMySqlTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppMySqlTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppMySqlTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppMySqlTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppMySqlTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppMySqlTableMembersNull() {
		return( getTableBuff()->isOptionalHppMySqlTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppMySqlTableMembersValue() {
		return( getTableBuff()->getOptionalHppMySqlTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppMySqlTableMembersReference() {
		return( getTableBuff()->getOptionalHppMySqlTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalHppMySqlTableMembersNull() {
		if( ! getTableBuff()->isOptionalHppMySqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppMySqlTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppMySqlTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppMySqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppMySqlTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalHppMySqlTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalHppMySqlTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppMySqlTableImplementationNull() {
		return( getTableBuff()->isOptionalHppMySqlTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppMySqlTableImplementationValue() {
		return( getTableBuff()->getOptionalHppMySqlTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppMySqlTableImplementationReference() {
		return( getTableBuff()->getOptionalHppMySqlTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalHppMySqlTableImplementationNull() {
		if( ! getTableBuff()->isOptionalHppMySqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppMySqlTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppMySqlTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppMySqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppMySqlTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalHppMySqlTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalHppMySqlTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppOracleTableIncludeNull() {
		return( getTableBuff()->isOptionalHppOracleTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppOracleTableIncludeValue() {
		return( getTableBuff()->getOptionalHppOracleTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppOracleTableIncludeReference() {
		return( getTableBuff()->getOptionalHppOracleTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppOracleTableIncludeNull() {
		if( ! getTableBuff()->isOptionalHppOracleTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppOracleTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppOracleTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppOracleTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppOracleTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppOracleTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppOracleTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppOracleTableMembersNull() {
		return( getTableBuff()->isOptionalHppOracleTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppOracleTableMembersValue() {
		return( getTableBuff()->getOptionalHppOracleTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppOracleTableMembersReference() {
		return( getTableBuff()->getOptionalHppOracleTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalHppOracleTableMembersNull() {
		if( ! getTableBuff()->isOptionalHppOracleTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppOracleTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppOracleTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppOracleTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppOracleTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalHppOracleTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalHppOracleTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppOracleTableImplementationNull() {
		return( getTableBuff()->isOptionalHppOracleTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppOracleTableImplementationValue() {
		return( getTableBuff()->getOptionalHppOracleTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppOracleTableImplementationReference() {
		return( getTableBuff()->getOptionalHppOracleTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalHppOracleTableImplementationNull() {
		if( ! getTableBuff()->isOptionalHppOracleTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppOracleTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppOracleTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppOracleTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppOracleTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalHppOracleTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalHppOracleTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppPgSqlTableIncludeNull() {
		return( getTableBuff()->isOptionalHppPgSqlTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppPgSqlTableIncludeValue() {
		return( getTableBuff()->getOptionalHppPgSqlTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppPgSqlTableIncludeReference() {
		return( getTableBuff()->getOptionalHppPgSqlTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppPgSqlTableIncludeNull() {
		if( ! getTableBuff()->isOptionalHppPgSqlTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppPgSqlTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppPgSqlTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppPgSqlTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppPgSqlTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppPgSqlTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppPgSqlTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppPgSqlTableMembersNull() {
		return( getTableBuff()->isOptionalHppPgSqlTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppPgSqlTableMembersValue() {
		return( getTableBuff()->getOptionalHppPgSqlTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppPgSqlTableMembersReference() {
		return( getTableBuff()->getOptionalHppPgSqlTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalHppPgSqlTableMembersNull() {
		if( ! getTableBuff()->isOptionalHppPgSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppPgSqlTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppPgSqlTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppPgSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppPgSqlTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalHppPgSqlTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalHppPgSqlTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppPgSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalHppPgSqlTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppPgSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalHppPgSqlTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppPgSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalHppPgSqlTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalHppPgSqlTableImplementationNull() {
		if( ! getTableBuff()->isOptionalHppPgSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppPgSqlTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppPgSqlTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppPgSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppPgSqlTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalHppPgSqlTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalHppPgSqlTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppRamTableIncludeNull() {
		return( getTableBuff()->isOptionalHppRamTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppRamTableIncludeValue() {
		return( getTableBuff()->getOptionalHppRamTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppRamTableIncludeReference() {
		return( getTableBuff()->getOptionalHppRamTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppRamTableIncludeNull() {
		if( ! getTableBuff()->isOptionalHppRamTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppRamTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppRamTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppRamTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppRamTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppRamTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppRamTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppRamTableMembersNull() {
		return( getTableBuff()->isOptionalHppRamTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppRamTableMembersValue() {
		return( getTableBuff()->getOptionalHppRamTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppRamTableMembersReference() {
		return( getTableBuff()->getOptionalHppRamTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalHppRamTableMembersNull() {
		if( ! getTableBuff()->isOptionalHppRamTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppRamTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppRamTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppRamTableMembersNull() ) {
			getTableEditBuff()->setOptionalHppRamTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalHppRamTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalHppRamTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppRamTableImplementationNull() {
		return( getTableBuff()->isOptionalHppRamTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppRamTableImplementationValue() {
		return( getTableBuff()->getOptionalHppRamTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppRamTableImplementationReference() {
		return( getTableBuff()->getOptionalHppRamTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalHppRamTableImplementationNull() {
		if( ! getTableBuff()->isOptionalHppRamTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppRamTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppRamTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppRamTableImplementationNull() ) {
			getTableEditBuff()->setOptionalHppRamTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalHppRamTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalHppRamTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppSaxLoaderIncludeNull() {
		return( getTableBuff()->isOptionalHppSaxLoaderIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppSaxLoaderIncludeValue() {
		return( getTableBuff()->getOptionalHppSaxLoaderIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppSaxLoaderIncludeReference() {
		return( getTableBuff()->getOptionalHppSaxLoaderIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppSaxLoaderIncludeNull() {
		if( ! getTableBuff()->isOptionalHppSaxLoaderIncludeNull() ) {
			getTableEditBuff()->setOptionalHppSaxLoaderIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppSaxLoaderIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppSaxLoaderIncludeNull() ) {
			getTableEditBuff()->setOptionalHppSaxLoaderIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppSaxLoaderIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppSaxLoaderIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppSaxLoaderStartElementNull() {
		return( getTableBuff()->isOptionalHppSaxLoaderStartElementNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppSaxLoaderStartElementValue() {
		return( getTableBuff()->getOptionalHppSaxLoaderStartElementValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppSaxLoaderStartElementReference() {
		return( getTableBuff()->getOptionalHppSaxLoaderStartElementReference() );
	}

	void CFBamTableEditObj::setOptionalHppSaxLoaderStartElementNull() {
		if( ! getTableBuff()->isOptionalHppSaxLoaderStartElementNull() ) {
			getTableEditBuff()->setOptionalHppSaxLoaderStartElementNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppSaxLoaderStartElementValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppSaxLoaderStartElementNull() ) {
			getTableEditBuff()->setOptionalHppSaxLoaderStartElementValue( value );
		}
		else if( getTableBuff()->getOptionalHppSaxLoaderStartElementValue() != value ) {
			getTableEditBuff()->setOptionalHppSaxLoaderStartElementValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppSaxLoaderEndElementNull() {
		return( getTableBuff()->isOptionalHppSaxLoaderEndElementNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppSaxLoaderEndElementValue() {
		return( getTableBuff()->getOptionalHppSaxLoaderEndElementValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppSaxLoaderEndElementReference() {
		return( getTableBuff()->getOptionalHppSaxLoaderEndElementReference() );
	}

	void CFBamTableEditObj::setOptionalHppSaxLoaderEndElementNull() {
		if( ! getTableBuff()->isOptionalHppSaxLoaderEndElementNull() ) {
			getTableEditBuff()->setOptionalHppSaxLoaderEndElementNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppSaxLoaderEndElementValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppSaxLoaderEndElementNull() ) {
			getTableEditBuff()->setOptionalHppSaxLoaderEndElementValue( value );
		}
		else if( getTableBuff()->getOptionalHppSaxLoaderEndElementValue() != value ) {
			getTableEditBuff()->setOptionalHppSaxLoaderEndElementValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppXMsgTableIncludeNull() {
		return( getTableBuff()->isOptionalHppXMsgTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppXMsgTableIncludeValue() {
		return( getTableBuff()->getOptionalHppXMsgTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppXMsgTableIncludeReference() {
		return( getTableBuff()->getOptionalHppXMsgTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppXMsgTableIncludeNull() {
		if( ! getTableBuff()->isOptionalHppXMsgTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppXMsgTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppXMsgTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppXMsgTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppXMsgTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppXMsgTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppXMsgTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppXMsgTableFormattersNull() {
		return( getTableBuff()->isOptionalHppXMsgTableFormattersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppXMsgTableFormattersValue() {
		return( getTableBuff()->getOptionalHppXMsgTableFormattersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppXMsgTableFormattersReference() {
		return( getTableBuff()->getOptionalHppXMsgTableFormattersReference() );
	}

	void CFBamTableEditObj::setOptionalHppXMsgTableFormattersNull() {
		if( ! getTableBuff()->isOptionalHppXMsgTableFormattersNull() ) {
			getTableEditBuff()->setOptionalHppXMsgTableFormattersNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppXMsgTableFormattersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppXMsgTableFormattersNull() ) {
			getTableEditBuff()->setOptionalHppXMsgTableFormattersValue( value );
		}
		else if( getTableBuff()->getOptionalHppXMsgTableFormattersValue() != value ) {
			getTableEditBuff()->setOptionalHppXMsgTableFormattersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppXMsgRqstTableIncludeNull() {
		return( getTableBuff()->isOptionalHppXMsgRqstTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppXMsgRqstTableIncludeValue() {
		return( getTableBuff()->getOptionalHppXMsgRqstTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppXMsgRqstTableIncludeReference() {
		return( getTableBuff()->getOptionalHppXMsgRqstTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppXMsgRqstTableIncludeNull() {
		if( ! getTableBuff()->isOptionalHppXMsgRqstTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppXMsgRqstTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppXMsgRqstTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppXMsgRqstTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppXMsgRqstTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppXMsgRqstTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppXMsgRqstTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppXMsgRspnTableIncludeNull() {
		return( getTableBuff()->isOptionalHppXMsgRspnTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppXMsgRspnTableIncludeValue() {
		return( getTableBuff()->getOptionalHppXMsgRspnTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppXMsgRspnTableIncludeReference() {
		return( getTableBuff()->getOptionalHppXMsgRspnTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppXMsgRspnTableIncludeNull() {
		if( ! getTableBuff()->isOptionalHppXMsgRspnTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppXMsgRspnTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppXMsgRspnTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppXMsgRspnTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppXMsgRspnTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppXMsgRspnTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppXMsgRspnTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppXMsgClientTableIncludeNull() {
		return( getTableBuff()->isOptionalHppXMsgClientTableIncludeNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppXMsgClientTableIncludeValue() {
		return( getTableBuff()->getOptionalHppXMsgClientTableIncludeValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppXMsgClientTableIncludeReference() {
		return( getTableBuff()->getOptionalHppXMsgClientTableIncludeReference() );
	}

	void CFBamTableEditObj::setOptionalHppXMsgClientTableIncludeNull() {
		if( ! getTableBuff()->isOptionalHppXMsgClientTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppXMsgClientTableIncludeNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppXMsgClientTableIncludeValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppXMsgClientTableIncludeNull() ) {
			getTableEditBuff()->setOptionalHppXMsgClientTableIncludeValue( value );
		}
		else if( getTableBuff()->getOptionalHppXMsgClientTableIncludeValue() != value ) {
			getTableEditBuff()->setOptionalHppXMsgClientTableIncludeValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppXMsgRqstTableBodyNull() {
		return( getTableBuff()->isOptionalHppXMsgRqstTableBodyNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppXMsgRqstTableBodyValue() {
		return( getTableBuff()->getOptionalHppXMsgRqstTableBodyValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppXMsgRqstTableBodyReference() {
		return( getTableBuff()->getOptionalHppXMsgRqstTableBodyReference() );
	}

	void CFBamTableEditObj::setOptionalHppXMsgRqstTableBodyNull() {
		if( ! getTableBuff()->isOptionalHppXMsgRqstTableBodyNull() ) {
			getTableEditBuff()->setOptionalHppXMsgRqstTableBodyNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppXMsgRqstTableBodyValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppXMsgRqstTableBodyNull() ) {
			getTableEditBuff()->setOptionalHppXMsgRqstTableBodyValue( value );
		}
		else if( getTableBuff()->getOptionalHppXMsgRqstTableBodyValue() != value ) {
			getTableEditBuff()->setOptionalHppXMsgRqstTableBodyValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppXMsgRspnTableBodyNull() {
		return( getTableBuff()->isOptionalHppXMsgRspnTableBodyNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppXMsgRspnTableBodyValue() {
		return( getTableBuff()->getOptionalHppXMsgRspnTableBodyValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppXMsgRspnTableBodyReference() {
		return( getTableBuff()->getOptionalHppXMsgRspnTableBodyReference() );
	}

	void CFBamTableEditObj::setOptionalHppXMsgRspnTableBodyNull() {
		if( ! getTableBuff()->isOptionalHppXMsgRspnTableBodyNull() ) {
			getTableEditBuff()->setOptionalHppXMsgRspnTableBodyNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppXMsgRspnTableBodyValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppXMsgRspnTableBodyNull() ) {
			getTableEditBuff()->setOptionalHppXMsgRspnTableBodyValue( value );
		}
		else if( getTableBuff()->getOptionalHppXMsgRspnTableBodyValue() != value ) {
			getTableEditBuff()->setOptionalHppXMsgRspnTableBodyValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalHppXMsgClientTableBodyNull() {
		return( getTableBuff()->isOptionalHppXMsgClientTableBodyNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalHppXMsgClientTableBodyValue() {
		return( getTableBuff()->getOptionalHppXMsgClientTableBodyValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalHppXMsgClientTableBodyReference() {
		return( getTableBuff()->getOptionalHppXMsgClientTableBodyReference() );
	}

	void CFBamTableEditObj::setOptionalHppXMsgClientTableBodyNull() {
		if( ! getTableBuff()->isOptionalHppXMsgClientTableBodyNull() ) {
			getTableEditBuff()->setOptionalHppXMsgClientTableBodyNull();
		}
	}

	void CFBamTableEditObj::setOptionalHppXMsgClientTableBodyValue( const std::string& value ) {
		if( getTableBuff()->isOptionalHppXMsgClientTableBodyNull() ) {
			getTableEditBuff()->setOptionalHppXMsgClientTableBodyValue( value );
		}
		else if( getTableBuff()->getOptionalHppXMsgClientTableBodyValue() != value ) {
			getTableEditBuff()->setOptionalHppXMsgClientTableBodyValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsObjMembersNull() {
		return( getTableBuff()->isOptionalCsObjMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsObjMembersValue() {
		return( getTableBuff()->getOptionalCsObjMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsObjMembersReference() {
		return( getTableBuff()->getOptionalCsObjMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCsObjMembersNull() {
		if( ! getTableBuff()->isOptionalCsObjMembersNull() ) {
			getTableEditBuff()->setOptionalCsObjMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsObjMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsObjMembersNull() ) {
			getTableEditBuff()->setOptionalCsObjMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCsObjMembersValue() != value ) {
			getTableEditBuff()->setOptionalCsObjMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsObjInterfaceNull() {
		return( getTableBuff()->isOptionalCsObjInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsObjInterfaceValue() {
		return( getTableBuff()->getOptionalCsObjInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsObjInterfaceReference() {
		return( getTableBuff()->getOptionalCsObjInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalCsObjInterfaceNull() {
		if( ! getTableBuff()->isOptionalCsObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalCsObjInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsObjInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalCsObjInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalCsObjInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalCsObjInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsObjUsingNull() {
		return( getTableBuff()->isOptionalCsObjUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsObjUsingValue() {
		return( getTableBuff()->getOptionalCsObjUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsObjUsingReference() {
		return( getTableBuff()->getOptionalCsObjUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsObjUsingNull() {
		if( ! getTableBuff()->isOptionalCsObjUsingNull() ) {
			getTableEditBuff()->setOptionalCsObjUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsObjUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsObjUsingNull() ) {
			getTableEditBuff()->setOptionalCsObjUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsObjUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsObjUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsObjImplementationNull() {
		return( getTableBuff()->isOptionalCsObjImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsObjImplementationValue() {
		return( getTableBuff()->getOptionalCsObjImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsObjImplementationReference() {
		return( getTableBuff()->getOptionalCsObjImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCsObjImplementationNull() {
		if( ! getTableBuff()->isOptionalCsObjImplementationNull() ) {
			getTableEditBuff()->setOptionalCsObjImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsObjImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsObjImplementationNull() ) {
			getTableEditBuff()->setOptionalCsObjImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCsObjImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCsObjImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsEditObjMembersNull() {
		return( getTableBuff()->isOptionalCsEditObjMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsEditObjMembersValue() {
		return( getTableBuff()->getOptionalCsEditObjMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsEditObjMembersReference() {
		return( getTableBuff()->getOptionalCsEditObjMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCsEditObjMembersNull() {
		if( ! getTableBuff()->isOptionalCsEditObjMembersNull() ) {
			getTableEditBuff()->setOptionalCsEditObjMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsEditObjMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsEditObjMembersNull() ) {
			getTableEditBuff()->setOptionalCsEditObjMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCsEditObjMembersValue() != value ) {
			getTableEditBuff()->setOptionalCsEditObjMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsEditObjInterfaceNull() {
		return( getTableBuff()->isOptionalCsEditObjInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsEditObjInterfaceValue() {
		return( getTableBuff()->getOptionalCsEditObjInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsEditObjInterfaceReference() {
		return( getTableBuff()->getOptionalCsEditObjInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalCsEditObjInterfaceNull() {
		if( ! getTableBuff()->isOptionalCsEditObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalCsEditObjInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsEditObjInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsEditObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalCsEditObjInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalCsEditObjInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalCsEditObjInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsEditObjUsingNull() {
		return( getTableBuff()->isOptionalCsEditObjUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsEditObjUsingValue() {
		return( getTableBuff()->getOptionalCsEditObjUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsEditObjUsingReference() {
		return( getTableBuff()->getOptionalCsEditObjUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsEditObjUsingNull() {
		if( ! getTableBuff()->isOptionalCsEditObjUsingNull() ) {
			getTableEditBuff()->setOptionalCsEditObjUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsEditObjUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsEditObjUsingNull() ) {
			getTableEditBuff()->setOptionalCsEditObjUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsEditObjUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsEditObjUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsEditObjImplementationNull() {
		return( getTableBuff()->isOptionalCsEditObjImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsEditObjImplementationValue() {
		return( getTableBuff()->getOptionalCsEditObjImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsEditObjImplementationReference() {
		return( getTableBuff()->getOptionalCsEditObjImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCsEditObjImplementationNull() {
		if( ! getTableBuff()->isOptionalCsEditObjImplementationNull() ) {
			getTableEditBuff()->setOptionalCsEditObjImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsEditObjImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsEditObjImplementationNull() ) {
			getTableEditBuff()->setOptionalCsEditObjImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCsEditObjImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCsEditObjImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsTableUsingNull() {
		return( getTableBuff()->isOptionalCsTableUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsTableUsingValue() {
		return( getTableBuff()->getOptionalCsTableUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsTableUsingReference() {
		return( getTableBuff()->getOptionalCsTableUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsTableUsingNull() {
		if( ! getTableBuff()->isOptionalCsTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsTableUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsTableUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsTableUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsTableUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsTableUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsTableMembersNull() {
		return( getTableBuff()->isOptionalCsTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsTableMembersValue() {
		return( getTableBuff()->getOptionalCsTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsTableMembersReference() {
		return( getTableBuff()->getOptionalCsTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCsTableMembersNull() {
		if( ! getTableBuff()->isOptionalCsTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCsTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCsTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsTableInterfaceNull() {
		return( getTableBuff()->isOptionalCsTableInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsTableInterfaceValue() {
		return( getTableBuff()->getOptionalCsTableInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsTableInterfaceReference() {
		return( getTableBuff()->getOptionalCsTableInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalCsTableInterfaceNull() {
		if( ! getTableBuff()->isOptionalCsTableInterfaceNull() ) {
			getTableEditBuff()->setOptionalCsTableInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsTableInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsTableInterfaceNull() ) {
			getTableEditBuff()->setOptionalCsTableInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalCsTableInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalCsTableInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsTableImplementationNull() {
		return( getTableBuff()->isOptionalCsTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsTableImplementationValue() {
		return( getTableBuff()->getOptionalCsTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsTableImplementationReference() {
		return( getTableBuff()->getOptionalCsTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCsTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCsTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCsTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCsTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsTableObjUsingNull() {
		return( getTableBuff()->isOptionalCsTableObjUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsTableObjUsingValue() {
		return( getTableBuff()->getOptionalCsTableObjUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsTableObjUsingReference() {
		return( getTableBuff()->getOptionalCsTableObjUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsTableObjUsingNull() {
		if( ! getTableBuff()->isOptionalCsTableObjUsingNull() ) {
			getTableEditBuff()->setOptionalCsTableObjUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsTableObjUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsTableObjUsingNull() ) {
			getTableEditBuff()->setOptionalCsTableObjUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsTableObjUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsTableObjUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsTableObjMembersNull() {
		return( getTableBuff()->isOptionalCsTableObjMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsTableObjMembersValue() {
		return( getTableBuff()->getOptionalCsTableObjMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsTableObjMembersReference() {
		return( getTableBuff()->getOptionalCsTableObjMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCsTableObjMembersNull() {
		if( ! getTableBuff()->isOptionalCsTableObjMembersNull() ) {
			getTableEditBuff()->setOptionalCsTableObjMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsTableObjMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsTableObjMembersNull() ) {
			getTableEditBuff()->setOptionalCsTableObjMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCsTableObjMembersValue() != value ) {
			getTableEditBuff()->setOptionalCsTableObjMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsTableObjInterfaceNull() {
		return( getTableBuff()->isOptionalCsTableObjInterfaceNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsTableObjInterfaceValue() {
		return( getTableBuff()->getOptionalCsTableObjInterfaceValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsTableObjInterfaceReference() {
		return( getTableBuff()->getOptionalCsTableObjInterfaceReference() );
	}

	void CFBamTableEditObj::setOptionalCsTableObjInterfaceNull() {
		if( ! getTableBuff()->isOptionalCsTableObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalCsTableObjInterfaceNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsTableObjInterfaceValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsTableObjInterfaceNull() ) {
			getTableEditBuff()->setOptionalCsTableObjInterfaceValue( value );
		}
		else if( getTableBuff()->getOptionalCsTableObjInterfaceValue() != value ) {
			getTableEditBuff()->setOptionalCsTableObjInterfaceValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsTableObjImplementationNull() {
		return( getTableBuff()->isOptionalCsTableObjImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsTableObjImplementationValue() {
		return( getTableBuff()->getOptionalCsTableObjImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsTableObjImplementationReference() {
		return( getTableBuff()->getOptionalCsTableObjImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCsTableObjImplementationNull() {
		if( ! getTableBuff()->isOptionalCsTableObjImplementationNull() ) {
			getTableEditBuff()->setOptionalCsTableObjImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsTableObjImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsTableObjImplementationNull() ) {
			getTableEditBuff()->setOptionalCsTableObjImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCsTableObjImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCsTableObjImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsDb2LUWTableUsingNull() {
		return( getTableBuff()->isOptionalCsDb2LUWTableUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsDb2LUWTableUsingValue() {
		return( getTableBuff()->getOptionalCsDb2LUWTableUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsDb2LUWTableUsingReference() {
		return( getTableBuff()->getOptionalCsDb2LUWTableUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsDb2LUWTableUsingNull() {
		if( ! getTableBuff()->isOptionalCsDb2LUWTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsDb2LUWTableUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsDb2LUWTableUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsDb2LUWTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsDb2LUWTableUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsDb2LUWTableUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsDb2LUWTableUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsDb2LUWTableMembersNull() {
		return( getTableBuff()->isOptionalCsDb2LUWTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsDb2LUWTableMembersValue() {
		return( getTableBuff()->getOptionalCsDb2LUWTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsDb2LUWTableMembersReference() {
		return( getTableBuff()->getOptionalCsDb2LUWTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCsDb2LUWTableMembersNull() {
		if( ! getTableBuff()->isOptionalCsDb2LUWTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsDb2LUWTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsDb2LUWTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsDb2LUWTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsDb2LUWTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCsDb2LUWTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCsDb2LUWTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsDb2LUWTableImplementationNull() {
		return( getTableBuff()->isOptionalCsDb2LUWTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsDb2LUWTableImplementationValue() {
		return( getTableBuff()->getOptionalCsDb2LUWTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsDb2LUWTableImplementationReference() {
		return( getTableBuff()->getOptionalCsDb2LUWTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCsDb2LUWTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCsDb2LUWTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsDb2LUWTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsDb2LUWTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsDb2LUWTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsDb2LUWTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCsDb2LUWTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCsDb2LUWTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsMSSqlTableUsingNull() {
		return( getTableBuff()->isOptionalCsMSSqlTableUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsMSSqlTableUsingValue() {
		return( getTableBuff()->getOptionalCsMSSqlTableUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsMSSqlTableUsingReference() {
		return( getTableBuff()->getOptionalCsMSSqlTableUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsMSSqlTableUsingNull() {
		if( ! getTableBuff()->isOptionalCsMSSqlTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsMSSqlTableUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsMSSqlTableUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsMSSqlTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsMSSqlTableUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsMSSqlTableUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsMSSqlTableUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsMSSqlTableMembersNull() {
		return( getTableBuff()->isOptionalCsMSSqlTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsMSSqlTableMembersValue() {
		return( getTableBuff()->getOptionalCsMSSqlTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsMSSqlTableMembersReference() {
		return( getTableBuff()->getOptionalCsMSSqlTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCsMSSqlTableMembersNull() {
		if( ! getTableBuff()->isOptionalCsMSSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsMSSqlTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsMSSqlTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsMSSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsMSSqlTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCsMSSqlTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCsMSSqlTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsMSSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalCsMSSqlTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsMSSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalCsMSSqlTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsMSSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalCsMSSqlTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCsMSSqlTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCsMSSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsMSSqlTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsMSSqlTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsMSSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsMSSqlTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCsMSSqlTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCsMSSqlTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsMySqlTableUsingNull() {
		return( getTableBuff()->isOptionalCsMySqlTableUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsMySqlTableUsingValue() {
		return( getTableBuff()->getOptionalCsMySqlTableUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsMySqlTableUsingReference() {
		return( getTableBuff()->getOptionalCsMySqlTableUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsMySqlTableUsingNull() {
		if( ! getTableBuff()->isOptionalCsMySqlTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsMySqlTableUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsMySqlTableUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsMySqlTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsMySqlTableUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsMySqlTableUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsMySqlTableUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsMySqlTableMembersNull() {
		return( getTableBuff()->isOptionalCsMySqlTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsMySqlTableMembersValue() {
		return( getTableBuff()->getOptionalCsMySqlTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsMySqlTableMembersReference() {
		return( getTableBuff()->getOptionalCsMySqlTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCsMySqlTableMembersNull() {
		if( ! getTableBuff()->isOptionalCsMySqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsMySqlTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsMySqlTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsMySqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsMySqlTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCsMySqlTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCsMySqlTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsMySqlTableImplementationNull() {
		return( getTableBuff()->isOptionalCsMySqlTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsMySqlTableImplementationValue() {
		return( getTableBuff()->getOptionalCsMySqlTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsMySqlTableImplementationReference() {
		return( getTableBuff()->getOptionalCsMySqlTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCsMySqlTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCsMySqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsMySqlTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsMySqlTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsMySqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsMySqlTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCsMySqlTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCsMySqlTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsOracleTableUsingNull() {
		return( getTableBuff()->isOptionalCsOracleTableUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsOracleTableUsingValue() {
		return( getTableBuff()->getOptionalCsOracleTableUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsOracleTableUsingReference() {
		return( getTableBuff()->getOptionalCsOracleTableUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsOracleTableUsingNull() {
		if( ! getTableBuff()->isOptionalCsOracleTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsOracleTableUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsOracleTableUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsOracleTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsOracleTableUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsOracleTableUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsOracleTableUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsOracleTableMembersNull() {
		return( getTableBuff()->isOptionalCsOracleTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsOracleTableMembersValue() {
		return( getTableBuff()->getOptionalCsOracleTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsOracleTableMembersReference() {
		return( getTableBuff()->getOptionalCsOracleTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCsOracleTableMembersNull() {
		if( ! getTableBuff()->isOptionalCsOracleTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsOracleTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsOracleTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsOracleTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsOracleTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCsOracleTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCsOracleTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsOracleTableImplementationNull() {
		return( getTableBuff()->isOptionalCsOracleTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsOracleTableImplementationValue() {
		return( getTableBuff()->getOptionalCsOracleTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsOracleTableImplementationReference() {
		return( getTableBuff()->getOptionalCsOracleTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCsOracleTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCsOracleTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsOracleTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsOracleTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsOracleTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsOracleTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCsOracleTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCsOracleTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsPgSqlTableUsingNull() {
		return( getTableBuff()->isOptionalCsPgSqlTableUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsPgSqlTableUsingValue() {
		return( getTableBuff()->getOptionalCsPgSqlTableUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsPgSqlTableUsingReference() {
		return( getTableBuff()->getOptionalCsPgSqlTableUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsPgSqlTableUsingNull() {
		if( ! getTableBuff()->isOptionalCsPgSqlTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsPgSqlTableUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsPgSqlTableUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsPgSqlTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsPgSqlTableUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsPgSqlTableUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsPgSqlTableUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsPgSqlTableMembersNull() {
		return( getTableBuff()->isOptionalCsPgSqlTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsPgSqlTableMembersValue() {
		return( getTableBuff()->getOptionalCsPgSqlTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsPgSqlTableMembersReference() {
		return( getTableBuff()->getOptionalCsPgSqlTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCsPgSqlTableMembersNull() {
		if( ! getTableBuff()->isOptionalCsPgSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsPgSqlTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsPgSqlTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsPgSqlTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsPgSqlTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCsPgSqlTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCsPgSqlTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsPgSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalCsPgSqlTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsPgSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalCsPgSqlTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsPgSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalCsPgSqlTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCsPgSqlTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCsPgSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsPgSqlTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsPgSqlTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsPgSqlTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsPgSqlTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCsPgSqlTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCsPgSqlTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsRamTableUsingNull() {
		return( getTableBuff()->isOptionalCsRamTableUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsRamTableUsingValue() {
		return( getTableBuff()->getOptionalCsRamTableUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsRamTableUsingReference() {
		return( getTableBuff()->getOptionalCsRamTableUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsRamTableUsingNull() {
		if( ! getTableBuff()->isOptionalCsRamTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsRamTableUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsRamTableUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsRamTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsRamTableUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsRamTableUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsRamTableUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsRamTableMembersNull() {
		return( getTableBuff()->isOptionalCsRamTableMembersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsRamTableMembersValue() {
		return( getTableBuff()->getOptionalCsRamTableMembersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsRamTableMembersReference() {
		return( getTableBuff()->getOptionalCsRamTableMembersReference() );
	}

	void CFBamTableEditObj::setOptionalCsRamTableMembersNull() {
		if( ! getTableBuff()->isOptionalCsRamTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsRamTableMembersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsRamTableMembersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsRamTableMembersNull() ) {
			getTableEditBuff()->setOptionalCsRamTableMembersValue( value );
		}
		else if( getTableBuff()->getOptionalCsRamTableMembersValue() != value ) {
			getTableEditBuff()->setOptionalCsRamTableMembersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsRamTableImplementationNull() {
		return( getTableBuff()->isOptionalCsRamTableImplementationNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsRamTableImplementationValue() {
		return( getTableBuff()->getOptionalCsRamTableImplementationValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsRamTableImplementationReference() {
		return( getTableBuff()->getOptionalCsRamTableImplementationReference() );
	}

	void CFBamTableEditObj::setOptionalCsRamTableImplementationNull() {
		if( ! getTableBuff()->isOptionalCsRamTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsRamTableImplementationNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsRamTableImplementationValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsRamTableImplementationNull() ) {
			getTableEditBuff()->setOptionalCsRamTableImplementationValue( value );
		}
		else if( getTableBuff()->getOptionalCsRamTableImplementationValue() != value ) {
			getTableEditBuff()->setOptionalCsRamTableImplementationValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsSaxLoaderUsingNull() {
		return( getTableBuff()->isOptionalCsSaxLoaderUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsSaxLoaderUsingValue() {
		return( getTableBuff()->getOptionalCsSaxLoaderUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsSaxLoaderUsingReference() {
		return( getTableBuff()->getOptionalCsSaxLoaderUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsSaxLoaderUsingNull() {
		if( ! getTableBuff()->isOptionalCsSaxLoaderUsingNull() ) {
			getTableEditBuff()->setOptionalCsSaxLoaderUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsSaxLoaderUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsSaxLoaderUsingNull() ) {
			getTableEditBuff()->setOptionalCsSaxLoaderUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsSaxLoaderUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsSaxLoaderUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsSaxLoaderStartElementNull() {
		return( getTableBuff()->isOptionalCsSaxLoaderStartElementNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsSaxLoaderStartElementValue() {
		return( getTableBuff()->getOptionalCsSaxLoaderStartElementValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsSaxLoaderStartElementReference() {
		return( getTableBuff()->getOptionalCsSaxLoaderStartElementReference() );
	}

	void CFBamTableEditObj::setOptionalCsSaxLoaderStartElementNull() {
		if( ! getTableBuff()->isOptionalCsSaxLoaderStartElementNull() ) {
			getTableEditBuff()->setOptionalCsSaxLoaderStartElementNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsSaxLoaderStartElementValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsSaxLoaderStartElementNull() ) {
			getTableEditBuff()->setOptionalCsSaxLoaderStartElementValue( value );
		}
		else if( getTableBuff()->getOptionalCsSaxLoaderStartElementValue() != value ) {
			getTableEditBuff()->setOptionalCsSaxLoaderStartElementValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsSaxLoaderEndElementNull() {
		return( getTableBuff()->isOptionalCsSaxLoaderEndElementNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsSaxLoaderEndElementValue() {
		return( getTableBuff()->getOptionalCsSaxLoaderEndElementValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsSaxLoaderEndElementReference() {
		return( getTableBuff()->getOptionalCsSaxLoaderEndElementReference() );
	}

	void CFBamTableEditObj::setOptionalCsSaxLoaderEndElementNull() {
		if( ! getTableBuff()->isOptionalCsSaxLoaderEndElementNull() ) {
			getTableEditBuff()->setOptionalCsSaxLoaderEndElementNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsSaxLoaderEndElementValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsSaxLoaderEndElementNull() ) {
			getTableEditBuff()->setOptionalCsSaxLoaderEndElementValue( value );
		}
		else if( getTableBuff()->getOptionalCsSaxLoaderEndElementValue() != value ) {
			getTableEditBuff()->setOptionalCsSaxLoaderEndElementValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsXMsgTableUsingNull() {
		return( getTableBuff()->isOptionalCsXMsgTableUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsXMsgTableUsingValue() {
		return( getTableBuff()->getOptionalCsXMsgTableUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsXMsgTableUsingReference() {
		return( getTableBuff()->getOptionalCsXMsgTableUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsXMsgTableUsingNull() {
		if( ! getTableBuff()->isOptionalCsXMsgTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsXMsgTableUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsXMsgTableUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsXMsgTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsXMsgTableUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsXMsgTableUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsXMsgTableUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsXMsgTableFormattersNull() {
		return( getTableBuff()->isOptionalCsXMsgTableFormattersNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsXMsgTableFormattersValue() {
		return( getTableBuff()->getOptionalCsXMsgTableFormattersValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsXMsgTableFormattersReference() {
		return( getTableBuff()->getOptionalCsXMsgTableFormattersReference() );
	}

	void CFBamTableEditObj::setOptionalCsXMsgTableFormattersNull() {
		if( ! getTableBuff()->isOptionalCsXMsgTableFormattersNull() ) {
			getTableEditBuff()->setOptionalCsXMsgTableFormattersNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsXMsgTableFormattersValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsXMsgTableFormattersNull() ) {
			getTableEditBuff()->setOptionalCsXMsgTableFormattersValue( value );
		}
		else if( getTableBuff()->getOptionalCsXMsgTableFormattersValue() != value ) {
			getTableEditBuff()->setOptionalCsXMsgTableFormattersValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsXMsgRqstTableUsingNull() {
		return( getTableBuff()->isOptionalCsXMsgRqstTableUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsXMsgRqstTableUsingValue() {
		return( getTableBuff()->getOptionalCsXMsgRqstTableUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsXMsgRqstTableUsingReference() {
		return( getTableBuff()->getOptionalCsXMsgRqstTableUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsXMsgRqstTableUsingNull() {
		if( ! getTableBuff()->isOptionalCsXMsgRqstTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsXMsgRqstTableUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsXMsgRqstTableUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsXMsgRqstTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsXMsgRqstTableUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsXMsgRqstTableUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsXMsgRqstTableUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsXMsgRspnTableUsingNull() {
		return( getTableBuff()->isOptionalCsXMsgRspnTableUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsXMsgRspnTableUsingValue() {
		return( getTableBuff()->getOptionalCsXMsgRspnTableUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsXMsgRspnTableUsingReference() {
		return( getTableBuff()->getOptionalCsXMsgRspnTableUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsXMsgRspnTableUsingNull() {
		if( ! getTableBuff()->isOptionalCsXMsgRspnTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsXMsgRspnTableUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsXMsgRspnTableUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsXMsgRspnTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsXMsgRspnTableUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsXMsgRspnTableUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsXMsgRspnTableUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsXMsgClientTableUsingNull() {
		return( getTableBuff()->isOptionalCsXMsgClientTableUsingNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsXMsgClientTableUsingValue() {
		return( getTableBuff()->getOptionalCsXMsgClientTableUsingValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsXMsgClientTableUsingReference() {
		return( getTableBuff()->getOptionalCsXMsgClientTableUsingReference() );
	}

	void CFBamTableEditObj::setOptionalCsXMsgClientTableUsingNull() {
		if( ! getTableBuff()->isOptionalCsXMsgClientTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsXMsgClientTableUsingNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsXMsgClientTableUsingValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsXMsgClientTableUsingNull() ) {
			getTableEditBuff()->setOptionalCsXMsgClientTableUsingValue( value );
		}
		else if( getTableBuff()->getOptionalCsXMsgClientTableUsingValue() != value ) {
			getTableEditBuff()->setOptionalCsXMsgClientTableUsingValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsXMsgRqstTableBodyNull() {
		return( getTableBuff()->isOptionalCsXMsgRqstTableBodyNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsXMsgRqstTableBodyValue() {
		return( getTableBuff()->getOptionalCsXMsgRqstTableBodyValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsXMsgRqstTableBodyReference() {
		return( getTableBuff()->getOptionalCsXMsgRqstTableBodyReference() );
	}

	void CFBamTableEditObj::setOptionalCsXMsgRqstTableBodyNull() {
		if( ! getTableBuff()->isOptionalCsXMsgRqstTableBodyNull() ) {
			getTableEditBuff()->setOptionalCsXMsgRqstTableBodyNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsXMsgRqstTableBodyValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsXMsgRqstTableBodyNull() ) {
			getTableEditBuff()->setOptionalCsXMsgRqstTableBodyValue( value );
		}
		else if( getTableBuff()->getOptionalCsXMsgRqstTableBodyValue() != value ) {
			getTableEditBuff()->setOptionalCsXMsgRqstTableBodyValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsXMsgRspnTableBodyNull() {
		return( getTableBuff()->isOptionalCsXMsgRspnTableBodyNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsXMsgRspnTableBodyValue() {
		return( getTableBuff()->getOptionalCsXMsgRspnTableBodyValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsXMsgRspnTableBodyReference() {
		return( getTableBuff()->getOptionalCsXMsgRspnTableBodyReference() );
	}

	void CFBamTableEditObj::setOptionalCsXMsgRspnTableBodyNull() {
		if( ! getTableBuff()->isOptionalCsXMsgRspnTableBodyNull() ) {
			getTableEditBuff()->setOptionalCsXMsgRspnTableBodyNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsXMsgRspnTableBodyValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsXMsgRspnTableBodyNull() ) {
			getTableEditBuff()->setOptionalCsXMsgRspnTableBodyValue( value );
		}
		else if( getTableBuff()->getOptionalCsXMsgRspnTableBodyValue() != value ) {
			getTableEditBuff()->setOptionalCsXMsgRspnTableBodyValue( value );
		}
	}

	bool CFBamTableEditObj::isOptionalCsXMsgClientTableBodyNull() {
		return( getTableBuff()->isOptionalCsXMsgClientTableBodyNull() );
	}

	const std::string& CFBamTableEditObj::getOptionalCsXMsgClientTableBodyValue() {
		return( getTableBuff()->getOptionalCsXMsgClientTableBodyValue() );
	}

	const std::string* CFBamTableEditObj::getOptionalCsXMsgClientTableBodyReference() {
		return( getTableBuff()->getOptionalCsXMsgClientTableBodyReference() );
	}

	void CFBamTableEditObj::setOptionalCsXMsgClientTableBodyNull() {
		if( ! getTableBuff()->isOptionalCsXMsgClientTableBodyNull() ) {
			getTableEditBuff()->setOptionalCsXMsgClientTableBodyNull();
		}
	}

	void CFBamTableEditObj::setOptionalCsXMsgClientTableBodyValue( const std::string& value ) {
		if( getTableBuff()->isOptionalCsXMsgClientTableBodyNull() ) {
			getTableEditBuff()->setOptionalCsXMsgClientTableBodyValue( value );
		}
		else if( getTableBuff()->getOptionalCsXMsgClientTableBodyValue() != value ) {
			getTableEditBuff()->setOptionalCsXMsgClientTableBodyValue( value );
		}
	}

	cfbam::ICFBamSchemaDefObj* CFBamTableEditObj::getRequiredContainerSchemaDef( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getPKey()->getRequiredTenantId(),
					getTableBuff()->getRequiredSchemaDefId() );
		}
		return( retobj );
	}

	void CFBamTableEditObj::setRequiredContainerSchemaDef( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getTableEditBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getTableEditBuff()->setRequiredSchemaDefId( value->getRequiredId() );
			}
		}

	cfbam::ICFBamSchemaDefObj* CFBamTableEditObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;

			if( getTableBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getTableBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getTableBuff()->getOptionalDefSchemaTenantIdValue(),
					getTableBuff()->getOptionalDefSchemaIdValue() );
		}
		return( retobj );
	}

	void CFBamTableEditObj::setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value ) {
			
			if( value != NULL ) {
				getTableEditBuff()->setOptionalDefSchemaTenantIdValue( value->getRequiredTenantId() );
				getTableEditBuff()->setOptionalDefSchemaIdValue( value->getRequiredId() );
			}
			else {
				getTableEditBuff()->setOptionalDefSchemaTenantIdNull();
				getTableEditBuff()->setOptionalDefSchemaIdNull();
			}
		}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableEditObj::getOptionalComponentsRelation( bool forceRead ) {
		std::vector<cfbam::ICFBamRelationObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getRelationTableObj()->readRelationByRelTableIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfbam::ICFBamIndexObj* CFBamTableEditObj::getOptionalLookupLookupIndex( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = NULL;
		bool anyMissing = false;

			if( getTableBuff()->isOptionalLookupIndexTenantIdNull() ) {
				anyMissing = true;
			}
			if( getTableBuff()->isOptionalLookupIndexIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getIndexTableObj()->readIndexByIdIdx( getTableBuff()->getOptionalLookupIndexTenantIdValue(),
					getTableBuff()->getOptionalLookupIndexIdValue() );
		}
		return( retobj );
	}

	void CFBamTableEditObj::setOptionalLookupLookupIndex( cfbam::ICFBamIndexObj* value ) {
			
			if( value != NULL ) {
				getTableEditBuff()->setOptionalLookupIndexTenantIdValue( value->getRequiredTenantId() );
				getTableEditBuff()->setOptionalLookupIndexIdValue( value->getRequiredId() );
			}
			else {
				getTableEditBuff()->setOptionalLookupIndexTenantIdNull();
				getTableEditBuff()->setOptionalLookupIndexIdNull();
			}
		}

	cfbam::ICFBamIndexObj* CFBamTableEditObj::getOptionalLookupAltIndex( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = NULL;
		bool anyMissing = false;

			if( getTableBuff()->isOptionalAltIndexTenantIdNull() ) {
				anyMissing = true;
			}
			if( getTableBuff()->isOptionalAltIndexIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getIndexTableObj()->readIndexByIdIdx( getTableBuff()->getOptionalAltIndexTenantIdValue(),
					getTableBuff()->getOptionalAltIndexIdValue() );
		}
		return( retobj );
	}

	void CFBamTableEditObj::setOptionalLookupAltIndex( cfbam::ICFBamIndexObj* value ) {
			
			if( value != NULL ) {
				getTableEditBuff()->setOptionalAltIndexTenantIdValue( value->getRequiredTenantId() );
				getTableEditBuff()->setOptionalAltIndexIdValue( value->getRequiredId() );
			}
			else {
				getTableEditBuff()->setOptionalAltIndexTenantIdNull();
				getTableEditBuff()->setOptionalAltIndexIdNull();
			}
		}

	cfbam::ICFBamTableObj* CFBamTableEditObj::getOptionalLookupQualTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;

			if( getTableBuff()->isOptionalQualifyingTenantIdNull() ) {
				anyMissing = true;
			}
			if( getTableBuff()->isOptionalQualifyingTableIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getTableTableObj()->readTableByIdIdx( getTableBuff()->getOptionalQualifyingTenantIdValue(),
					getTableBuff()->getOptionalQualifyingTableIdValue() );
		}
		return( retobj );
	}

	void CFBamTableEditObj::setOptionalLookupQualTable( cfbam::ICFBamTableObj* value ) {
			
			if( value != NULL ) {
				getTableEditBuff()->setOptionalQualifyingTenantIdValue( value->getRequiredTenantId() );
				getTableEditBuff()->setOptionalQualifyingTableIdValue( value->getRequiredId() );
			}
			else {
				getTableEditBuff()->setOptionalQualifyingTenantIdNull();
				getTableEditBuff()->setOptionalQualifyingTableIdNull();
			}
		}

	std::vector<cfbam::ICFBamIndexObj*> CFBamTableEditObj::getOptionalComponentsIndex( bool forceRead ) {
		std::vector<cfbam::ICFBamIndexObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getIndexTableObj()->readIndexByIdxTableIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfbam::ICFBamIndexObj* CFBamTableEditObj::getOptionalLookupPrimaryIndex( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = NULL;
		bool anyMissing = false;

			if( getTableBuff()->isOptionalPrimaryIndexTenantIdNull() ) {
				anyMissing = true;
			}
			if( getTableBuff()->isOptionalPrimaryIndexIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getIndexTableObj()->readIndexByIdIdx( getTableBuff()->getOptionalPrimaryIndexTenantIdValue(),
					getTableBuff()->getOptionalPrimaryIndexIdValue() );
		}
		return( retobj );
	}

	void CFBamTableEditObj::setOptionalLookupPrimaryIndex( cfbam::ICFBamIndexObj* value ) {
			
			if( value != NULL ) {
				getTableEditBuff()->setOptionalPrimaryIndexTenantIdValue( value->getRequiredTenantId() );
				getTableEditBuff()->setOptionalPrimaryIndexIdValue( value->getRequiredId() );
			}
			else {
				getTableEditBuff()->setOptionalPrimaryIndexTenantIdNull();
				getTableEditBuff()->setOptionalPrimaryIndexIdNull();
			}
		}

	std::vector<cfbam::ICFBamValueObj*> CFBamTableEditObj::getOptionalComponentsColumns( bool forceRead ) {
		std::vector<cfbam::ICFBamValueObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getValueTableObj()->readValueByScopeIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableEditObj::getOptionalChildrenReverseRelations( bool forceRead ) {
		std::vector<cfbam::ICFBamRelationObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getRelationTableObj()->readRelationByToTblIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamTableEditObj::getOptionalComponentsChains( bool forceRead ) {
		std::vector<cfbam::ICFBamChainObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getChainTableObj()->readChainByChainTableIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamDelTopDepObj*> CFBamTableEditObj::getOptionalComponentsDelDep( bool forceRead ) {
		std::vector<cfbam::ICFBamDelTopDepObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getDelTopDepTableObj()->readDelTopDepByDelTopDepTblIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamClearTopDepObj*> CFBamTableEditObj::getOptionalComponentsClearDep( bool forceRead ) {
		std::vector<cfbam::ICFBamClearTopDepObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getClearTopDepTableObj()->readClearTopDepByClrTopDepTblIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamId16GenObj*> CFBamTableEditObj::getOptionalChildrenDispId16Gen( bool forceRead ) {
		std::vector<cfbam::ICFBamId16GenObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getId16GenTableObj()->readId16GenByDispIdx( getPKey()->getRequiredTenantIdReference(),
					getPKey()->getRequiredIdReference(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamId32GenObj*> CFBamTableEditObj::getOptionalChildrenDispId32Gen( bool forceRead ) {
		std::vector<cfbam::ICFBamId32GenObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getId32GenTableObj()->readId32GenByDispIdx( getPKey()->getRequiredTenantIdReference(),
					getPKey()->getRequiredIdReference(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamId64GenObj*> CFBamTableEditObj::getOptionalChildrenDispId64Gen( bool forceRead ) {
		std::vector<cfbam::ICFBamId64GenObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getId64GenTableObj()->readId64GenByDispIdx( getPKey()->getRequiredTenantIdReference(),
					getPKey()->getRequiredIdReference(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamServerMethodObj*> CFBamTableEditObj::getOptionalComponentsServerMethods( bool forceRead ) {
		std::vector<cfbam::ICFBamServerMethodObj*> retval;
		retval = dynamic_cast<cfbam::ICFBamSchemaObj*>( getOrigAsTable()->getSchema() )->getServerMethodTableObj()->readServerMethodByMethTableIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFBamTableEditObj::copyBuffToOrig() {
		cfbam::CFBamTableBuff* origBuff = getOrigAsTable()->getTableEditBuff();
		cfbam::CFBamTableBuff* myBuff = getTableBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFBamTableEditObj::copyOrigToBuff() {
		cfbam::CFBamTableBuff* origBuff = getOrigAsTable()->getTableBuff();
		cfbam::CFBamTableBuff* myBuff = getTableEditBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableEditObj::getOnlyOwnerRelations() {
		cfbam::ICFBamTableObj* tableDef;
		cfbam::ICFBamRelationObj* relationDef = NULL;
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
			relationDef = *iterChildrenRelations;
			if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) {
				list.push_back( relationDef );
			}
		}

		cfbam::ICFBamRelationObj* superClass = getSuperClassRelation();
		while( superClass != NULL ) {
			tableDef = superClass->getRequiredLookupToTable();
			childrenRelations = tableDef->getOptionalComponentsRelation();
			for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
				relationDef = *iterChildrenRelations;
				if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) {
					list.push_back( relationDef );
				}
			}
			superClass = tableDef->getSuperClassRelation();
		}

		childrenRelations = getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
			relationDef = *iterChildrenRelations;
			if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container ) {
				list.push_back( relationDef );
			}
		}

		superClass = getSuperClassRelation();
		while( superClass != NULL ) {
			tableDef = superClass->getRequiredLookupToTable();
			childrenRelations = tableDef->getOptionalComponentsRelation();
			for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
				relationDef = *iterChildrenRelations;
				if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container ) {
					list.push_back( relationDef );
				}
			}
			superClass = tableDef->getSuperClassRelation();
		}

		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableEditObj::getContainerOwnerRelations() {
		cfbam::ICFBamTableObj* tableDef;
		cfbam::ICFBamRelationObj* relationDef = NULL;
		cfbam::ICFBamSchema::RelationTypeEnum relType;
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
			relationDef = *iterChildrenRelations;
			relType = relationDef->getRequiredRelationType();
			if( ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Owner )
			 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Parent )
			 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Container ) )
			{
				list.push_back( relationDef );
			}
		}

		cfbam::ICFBamRelationObj* superClass = getSuperClassRelation();
		while( superClass != NULL ) {
			tableDef = superClass->getRequiredLookupToTable();
			childrenRelations = tableDef->getOptionalComponentsRelation();
			for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
				relationDef = *iterChildrenRelations;
				relType = relationDef->getRequiredRelationType();
				if( ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Owner )
				 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Parent )
				 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Container ) )
				{
					list.push_back( relationDef );
				}
			}
			superClass = tableDef->getSuperClassRelation();
		}

		return( list );
	}

	cfbam::ICFBamRelationObj* CFBamTableEditObj::getContainerRelation() {
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
			relationDef = *iterChildrenRelations;
			if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container ) {
				return( relationDef );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamRelationObj* CFBamTableEditObj::getInheritedContainerRelation() {
		cfbam::ICFBamRelationObj* inheritedContainerRelation = NULL;
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations;
		cfbam::ICFBamTableObj* tableDef = this;
		while( ( inheritedContainerRelation == NULL ) && ( tableDef != NULL ) ) {
			childrenRelations = tableDef->getOptionalComponentsRelation();
			for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
				relationDef = *iterChildrenRelations;
				if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Container ) {
					return( relationDef );
				}
			}
			relationDef = tableDef->getSuperClassRelation();
			if( relationDef == NULL ) {
				tableDef = NULL;
			}
			else {
				tableDef = relationDef->getRequiredLookupToTable();
			}
		}
		return( NULL );
	}

	cfbam::ICFBamRelationObj* CFBamTableEditObj::getOwnerRelation() {
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
			relationDef = *iterChildrenRelations;
			if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) {
				return( relationDef );
			}
		}
		return( NULL );
	}

	cfbam::ICFBamRelationObj* CFBamTableEditObj::getInheritedOwnerRelation() {
		cfbam::ICFBamTableObj* tableDef = this;
		cfbam::ICFBamRelationObj* inheritedOwnerRelation = NULL;
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations;
		while( ( inheritedOwnerRelation == NULL ) && ( tableDef != NULL ) ) {
			childrenRelations = tableDef->getOptionalComponentsRelation();
			for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
				relationDef = *iterChildrenRelations;
				if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) {
					return( relationDef );
				}
			}
			relationDef = tableDef->getSuperClassRelation();
			if( relationDef == NULL ) {
				tableDef = NULL;
			}
			else {
				tableDef = relationDef->getRequiredLookupToTable();
			}
		}
		return( NULL );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableEditObj::getOwnerLookupRelations() {
		cfbam::ICFBamSchema::RelationTypeEnum relType;
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
			relationDef = *iterChildrenRelations;
			relType = relationDef->getRequiredRelationType();
			if( ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Parent )
			 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Container )
			 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Lookup )
			 || ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) )
			{
				list.push_back( relationDef );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableEditObj::getOwnerContainerNamedLookupChainRelations() {
		cfbam::ICFBamSchema::RelationTypeEnum relType;
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamChainObj*> componentChains = getOptionalComponentsChains();
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = getOptionalComponentsRelation();
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
			relationDef = *iterChildrenRelations;
			relType = relationDef->getRequiredRelationType();
			if( relType == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
				;
			}
			else if( ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Container )
				|| ( relType == cfbam::ICFBamSchema::RelationTypeEnum::Owner ) )
			{
				list.push_back( relationDef );
			}
			else {
				if( ! relationDef->getRequiredIsXsdContainer() ) {
					cfbam::ICFBamIndexObj* toIndex = relationDef->getRequiredLookupToIndex();
					if( toIndex->getRequiredIsUnique() ) {
						bool referencedByChain = false;
						std::vector<cfbam::ICFBamChainObj*> myChains = componentChains;
						for( auto iterChain = myChains.begin(); ( ! referencedByChain ) && ( iterChain != myChains.end() ); iterChain ++ ) {
							cfbam::ICFBamChainObj* chain = *iterChain;
							if( chain->getRequiredLookupPrevRel() == relationDef ) {
								referencedByChain = true;
							}
							else if( chain->getRequiredLookupNextRel() == relationDef ) {
								referencedByChain = true;
							}
						}
						if( referencedByChain ) {
							list.push_back( relationDef );
						}
						else {
							cfbam::ICFBamTableObj* toTable = relationDef->getRequiredLookupToTable();
							cfbam::ICFBamIndexObj* lookupIndex = toTable->getOptionalLookupLookupIndex();
							while( ( lookupIndex == NULL ) && ( toTable != NULL ) ) {
								cfbam::ICFBamRelationObj* superRelation = toTable->getSuperClassRelation();
								if( superRelation != NULL ) {
									toTable = superRelation->getRequiredLookupToTable();
									if( toTable != NULL ) {
										lookupIndex = toTable->getOptionalLookupLookupIndex();
									}
								}
								else {
									toTable = NULL;
								}
							}
							if( lookupIndex != NULL ) {
								list.push_back( relationDef );
							}
						}
					}
				}
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamAtomObj*> CFBamTableEditObj::getChildrenAtoms() {
		std::vector<cfbam::ICFBamAtomObj*> list;
		std::vector<cfbam::ICFBamValueObj*> childrenColumns = getOptionalComponentsColumns();
		cfbam::ICFBamValueObj* colDef;
		for( auto iterChildrenColumns = childrenColumns.begin(); iterChildrenColumns != childrenColumns.end(); iterChildrenColumns ++ ) {
			colDef = *iterChildrenColumns;
			if( colDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				list.push_back( dynamic_cast<cfbam::ICFBamAtomObj*>( colDef ) );
			}
		}
		return( list );
	}

	cfbam::ICFBamRelationObj* CFBamTableEditObj::getSuperClassRelation() {
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations = getOptionalComponentsRelation();
		cfbam::ICFBamRelationObj* relationDef;
		for( auto iterChildrenRelations = childrenRelations.begin(); iterChildrenRelations != childrenRelations.end(); iterChildrenRelations ++ ) {
			relationDef = *iterChildrenRelations;
			if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
				return( relationDef );
			}
		}
		return( NULL );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableEditObj::getSubClassRelations() {
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> reverseRelations = getOptionalChildrenReverseRelations();
		cfbam::ICFBamRelationObj* reverseRelation;
		for( auto iterReverseRelations = reverseRelations.begin(); iterReverseRelations != reverseRelations.end(); iterReverseRelations ++ ) {
			reverseRelation = *iterReverseRelations;
			if( reverseRelation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
				list.push_back( reverseRelation );
			}
		}
		return( list );
	}

	cfbam::ICFBamIndexObj* CFBamTableEditObj::getPrimaryKeyIndex() {
		cfbam::ICFBamIndexObj* primaryIndex = getOptionalLookupPrimaryIndex();
		return( primaryIndex );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableEditObj::getFactoryOwnerRelations() {
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> ownerRelations = getContainerOwnerRelations();
		cfbam::ICFBamRelationObj* ownerRelation;
		for( auto iterOwnerRelations = ownerRelations.begin(); iterOwnerRelations != ownerRelations.end(); iterOwnerRelations ++ ) {
			// throw new NotImplementedException();
			ownerRelation = *iterOwnerRelations;
			if( ownerRelation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
				list.push_back( ownerRelation );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamIndexObj*> CFBamTableEditObj::getInheritedIndexes() {
		std::vector<cfbam::ICFBamIndexObj*> list;
		cfbam::ICFBamRelationObj* superClassRelation = getSuperClassRelation();
		if( superClassRelation != NULL ) {
			std::vector<cfbam::ICFBamIndexObj*> superClassInheritedIndexes = superClassRelation->getRequiredLookupToTable()->getInheritedIndexes();
			for( auto iterIndexes = superClassInheritedIndexes.begin(); iterIndexes != superClassInheritedIndexes.end(); iterIndexes ++ ) {
				list.push_back( *iterIndexes );
			}
			std::vector<cfbam::ICFBamIndexObj*> myIndexes = getChildrenIndexes();
			for( auto iterMyIndexes = myIndexes.begin(); iterMyIndexes != myIndexes.end(); iterMyIndexes ++ ) {
				list.push_back( *iterMyIndexes );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamIndexObj*> CFBamTableEditObj::getChildrenIndexes() {
		std::vector<cfbam::ICFBamIndexObj*> myIndexes = getOptionalComponentsIndex();
		std::vector<cfbam::ICFBamIndexObj*> list;
		for( auto iterMyIndexes = myIndexes.begin(); iterMyIndexes != myIndexes.end(); iterMyIndexes ++ ) {
			list.push_back( *iterMyIndexes );
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableEditObj::getInheritedRelations() {
		std::vector<cfbam::ICFBamRelationObj*> list;
		cfbam::ICFBamRelationObj* superClassRelation = getSuperClassRelation();
		if( superClassRelation != NULL ) {
			std::vector<cfbam::ICFBamRelationObj*> superClassInheritedRelations = superClassRelation->getRequiredLookupToTable()->getInheritedRelations();
			for( auto iterInherited = superClassInheritedRelations.begin(); iterInherited != superClassInheritedRelations.end(); iterInherited ++ ) {
				list.push_back( *iterInherited );
			}
			std::vector<cfbam::ICFBamRelationObj*> myRelations = getChildrenRelations();
			for( auto iterMyRelations = myRelations.begin(); iterMyRelations != myRelations.end(); iterMyRelations ++ ) {
				list.push_back( *iterMyRelations );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableEditObj::getChildrenRelations() {
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations;
		std::vector<cfbam::ICFBamRelationObj*> cltn = getOptionalComponentsRelation();
		for( auto iterCltn = cltn.begin(); iterCltn != cltn.end(); iterCltn ++ ) {
			childrenRelations.push_back( *iterCltn );
		}
		return( childrenRelations );
	}

}
