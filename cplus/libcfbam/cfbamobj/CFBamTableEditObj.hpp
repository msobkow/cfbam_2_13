#pragma once

// Description: C++18 edit object instance specification for CFBam Table.

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

namespace cfbam {

	class CFBamTableEditObj
	: public CFBamScopeEditObj,
	  public virtual ICFBamTableEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFBamTableEditObj( cfbam::ICFBamTableObj* argOrig );
		virtual ~CFBamTableEditObj();

		virtual const std::string& getClassName() const;

		virtual const classcode_t getClassCode() const;
		virtual bool implementsClassCode( const classcode_t value ) const;
		virtual std::string toString();

		virtual const std::string getGenDefName();

		virtual cflib::ICFLibAnyObj* getScope();
		virtual cflib::ICFLibAnyObj* getObjScope();

		virtual cflib::ICFLibAnyObj* getObjQualifier( const classcode_t* qualifyingClass );

		virtual cflib::ICFLibAnyObj* getNamedObject( const classcode_t* qualifyingClass, const std::string& objName );

		virtual cflib::ICFLibAnyObj* getNamedObject( const std::string& objName );

		virtual std::string getObjQualifiedName();

		virtual std::string getObjFullName();

		virtual ICFBamScopeObj* realize();

		virtual ICFBamScopeObj* create();

		virtual ICFBamScopeEditObj* update();

		virtual ICFBamScopeEditObj* deleteInstance();

		virtual cfbam::ICFBamTableTableObj* getTableTable();

		virtual cfbam::ICFBamTableEditObj* getTableEdit();

		virtual ICFBamScopeEditObj* beginEdit();

		virtual cfbam::ICFBamTableObj* getOrigAsTable();

		virtual cfbam::CFBamScopeBuff* getBuff();
		virtual void setBuff( cfbam::CFBamScopeBuff* value );

		inline cfbam::CFBamTableBuff* getTableBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfbam::CFBamTableBuff*>( buff ) );
		};

		inline cfbam::CFBamTableBuff* getTableEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfbam::CFBamTableBuff*>( buff ) );
		};

		virtual const int64_t getRequiredSchemaDefId();
		virtual const int64_t* getRequiredSchemaDefIdReference();

		virtual bool isOptionalDefSchemaTenantIdNull();
		virtual const int64_t getOptionalDefSchemaTenantIdValue();
		virtual const int64_t* getOptionalDefSchemaTenantIdReference();

		virtual bool isOptionalDefSchemaIdNull();
		virtual const int64_t getOptionalDefSchemaIdValue();
		virtual const int64_t* getOptionalDefSchemaIdReference();

		virtual const std::string& getRequiredName();
		virtual const std::string* getRequiredNameReference();
		virtual void setRequiredName( const std::string& value );

		virtual bool isOptionalDbNameNull();
		virtual const std::string& getOptionalDbNameValue();
		virtual const std::string* getOptionalDbNameReference();
		virtual void setOptionalDbNameNull();
		virtual void setOptionalDbNameValue( const std::string& value );

		virtual bool isOptionalShortNameNull();
		virtual const std::string& getOptionalShortNameValue();
		virtual const std::string* getOptionalShortNameReference();
		virtual void setOptionalShortNameNull();
		virtual void setOptionalShortNameValue( const std::string& value );

		virtual bool isOptionalLabelNull();
		virtual const std::string& getOptionalLabelValue();
		virtual const std::string* getOptionalLabelReference();
		virtual void setOptionalLabelNull();
		virtual void setOptionalLabelValue( const std::string& value );

		virtual bool isOptionalShortDescriptionNull();
		virtual const std::string& getOptionalShortDescriptionValue();
		virtual const std::string* getOptionalShortDescriptionReference();
		virtual void setOptionalShortDescriptionNull();
		virtual void setOptionalShortDescriptionValue( const std::string& value );

		virtual bool isOptionalDescriptionNull();
		virtual const std::string& getOptionalDescriptionValue();
		virtual const std::string* getOptionalDescriptionReference();
		virtual void setOptionalDescriptionNull();
		virtual void setOptionalDescriptionValue( const std::string& value );

		virtual const bool getRequiredPageData();
		virtual const bool* getRequiredPageDataReference();
		virtual void setRequiredPageData( const bool value );

		virtual bool isOptionalPrimaryIndexTenantIdNull();
		virtual const int64_t getOptionalPrimaryIndexTenantIdValue();
		virtual const int64_t* getOptionalPrimaryIndexTenantIdReference();

		virtual bool isOptionalPrimaryIndexIdNull();
		virtual const int64_t getOptionalPrimaryIndexIdValue();
		virtual const int64_t* getOptionalPrimaryIndexIdReference();

		virtual const std::string& getRequiredTableClassCode();
		virtual const std::string* getRequiredTableClassCodeReference();
		virtual void setRequiredTableClassCode( const std::string& value );

		virtual bool isOptionalLookupIndexTenantIdNull();
		virtual const int64_t getOptionalLookupIndexTenantIdValue();
		virtual const int64_t* getOptionalLookupIndexTenantIdReference();

		virtual bool isOptionalLookupIndexIdNull();
		virtual const int64_t getOptionalLookupIndexIdValue();
		virtual const int64_t* getOptionalLookupIndexIdReference();

		virtual bool isOptionalAltIndexTenantIdNull();
		virtual const int64_t getOptionalAltIndexTenantIdValue();
		virtual const int64_t* getOptionalAltIndexTenantIdReference();

		virtual bool isOptionalAltIndexIdNull();
		virtual const int64_t getOptionalAltIndexIdValue();
		virtual const int64_t* getOptionalAltIndexIdReference();

		virtual bool isOptionalQualifyingTenantIdNull();
		virtual const int64_t getOptionalQualifyingTenantIdValue();
		virtual const int64_t* getOptionalQualifyingTenantIdReference();

		virtual bool isOptionalQualifyingTableIdNull();
		virtual const int64_t getOptionalQualifyingTableIdValue();
		virtual const int64_t* getOptionalQualifyingTableIdReference();

		virtual const bool getRequiredIsInstantiable();
		virtual const bool* getRequiredIsInstantiableReference();
		virtual void setRequiredIsInstantiable( const bool value );

		virtual const bool getRequiredHasHistory();
		virtual const bool* getRequiredHasHistoryReference();
		virtual void setRequiredHasHistory( const bool value );

		virtual const bool getRequiredHasAuditColumns();
		virtual const bool* getRequiredHasAuditColumnsReference();
		virtual void setRequiredHasAuditColumns( const bool value );

		virtual const bool getRequiredIsMutable();
		virtual const bool* getRequiredIsMutableReference();
		virtual void setRequiredIsMutable( const bool value );

		virtual const bool getRequiredIsServerOnly();
		virtual const bool* getRequiredIsServerOnlyReference();
		virtual void setRequiredIsServerOnly( const bool value );

		virtual const cfbam::ICFBamSchema::LoaderBehaviourEnum getRequiredLoaderBehaviour();
		virtual const cfbam::ICFBamSchema::LoaderBehaviourEnum* getRequiredLoaderBehaviourReference();
		virtual void setRequiredLoaderBehaviour( const cfbam::ICFBamSchema::LoaderBehaviourEnum value );

		virtual const cfbam::ICFBamSchema::SecScopeEnum getRequiredSecScope();
		virtual const cfbam::ICFBamSchema::SecScopeEnum* getRequiredSecScopeReference();
		virtual void setRequiredSecScope( const cfbam::ICFBamSchema::SecScopeEnum value );

		virtual bool isOptionalJObjMembersNull();
		virtual const std::string& getOptionalJObjMembersValue();
		virtual const std::string* getOptionalJObjMembersReference();
		virtual void setOptionalJObjMembersNull();
		virtual void setOptionalJObjMembersValue( const std::string& value );

		virtual bool isOptionalJObjInterfaceNull();
		virtual const std::string& getOptionalJObjInterfaceValue();
		virtual const std::string* getOptionalJObjInterfaceReference();
		virtual void setOptionalJObjInterfaceNull();
		virtual void setOptionalJObjInterfaceValue( const std::string& value );

		virtual bool isOptionalJObjImportNull();
		virtual const std::string& getOptionalJObjImportValue();
		virtual const std::string* getOptionalJObjImportReference();
		virtual void setOptionalJObjImportNull();
		virtual void setOptionalJObjImportValue( const std::string& value );

		virtual bool isOptionalJObjImplementationNull();
		virtual const std::string& getOptionalJObjImplementationValue();
		virtual const std::string* getOptionalJObjImplementationReference();
		virtual void setOptionalJObjImplementationNull();
		virtual void setOptionalJObjImplementationValue( const std::string& value );

		virtual bool isOptionalJEditObjMembersNull();
		virtual const std::string& getOptionalJEditObjMembersValue();
		virtual const std::string* getOptionalJEditObjMembersReference();
		virtual void setOptionalJEditObjMembersNull();
		virtual void setOptionalJEditObjMembersValue( const std::string& value );

		virtual bool isOptionalJEditObjInterfaceNull();
		virtual const std::string& getOptionalJEditObjInterfaceValue();
		virtual const std::string* getOptionalJEditObjInterfaceReference();
		virtual void setOptionalJEditObjInterfaceNull();
		virtual void setOptionalJEditObjInterfaceValue( const std::string& value );

		virtual bool isOptionalJEditObjImportNull();
		virtual const std::string& getOptionalJEditObjImportValue();
		virtual const std::string* getOptionalJEditObjImportReference();
		virtual void setOptionalJEditObjImportNull();
		virtual void setOptionalJEditObjImportValue( const std::string& value );

		virtual bool isOptionalJEditObjImplementationNull();
		virtual const std::string& getOptionalJEditObjImplementationValue();
		virtual const std::string* getOptionalJEditObjImplementationReference();
		virtual void setOptionalJEditObjImplementationNull();
		virtual void setOptionalJEditObjImplementationValue( const std::string& value );

		virtual bool isOptionalJTableImportNull();
		virtual const std::string& getOptionalJTableImportValue();
		virtual const std::string* getOptionalJTableImportReference();
		virtual void setOptionalJTableImportNull();
		virtual void setOptionalJTableImportValue( const std::string& value );

		virtual bool isOptionalJTableMembersNull();
		virtual const std::string& getOptionalJTableMembersValue();
		virtual const std::string* getOptionalJTableMembersReference();
		virtual void setOptionalJTableMembersNull();
		virtual void setOptionalJTableMembersValue( const std::string& value );

		virtual bool isOptionalJTableInterfaceNull();
		virtual const std::string& getOptionalJTableInterfaceValue();
		virtual const std::string* getOptionalJTableInterfaceReference();
		virtual void setOptionalJTableInterfaceNull();
		virtual void setOptionalJTableInterfaceValue( const std::string& value );

		virtual bool isOptionalJTableImplementationNull();
		virtual const std::string& getOptionalJTableImplementationValue();
		virtual const std::string* getOptionalJTableImplementationReference();
		virtual void setOptionalJTableImplementationNull();
		virtual void setOptionalJTableImplementationValue( const std::string& value );

		virtual bool isOptionalJTableObjImportNull();
		virtual const std::string& getOptionalJTableObjImportValue();
		virtual const std::string* getOptionalJTableObjImportReference();
		virtual void setOptionalJTableObjImportNull();
		virtual void setOptionalJTableObjImportValue( const std::string& value );

		virtual bool isOptionalJTableObjMembersNull();
		virtual const std::string& getOptionalJTableObjMembersValue();
		virtual const std::string* getOptionalJTableObjMembersReference();
		virtual void setOptionalJTableObjMembersNull();
		virtual void setOptionalJTableObjMembersValue( const std::string& value );

		virtual bool isOptionalJTableObjInterfaceNull();
		virtual const std::string& getOptionalJTableObjInterfaceValue();
		virtual const std::string* getOptionalJTableObjInterfaceReference();
		virtual void setOptionalJTableObjInterfaceNull();
		virtual void setOptionalJTableObjInterfaceValue( const std::string& value );

		virtual bool isOptionalJTableObjImplementationNull();
		virtual const std::string& getOptionalJTableObjImplementationValue();
		virtual const std::string* getOptionalJTableObjImplementationReference();
		virtual void setOptionalJTableObjImplementationNull();
		virtual void setOptionalJTableObjImplementationValue( const std::string& value );

		virtual bool isOptionalJDb2LUWTableImportNull();
		virtual const std::string& getOptionalJDb2LUWTableImportValue();
		virtual const std::string* getOptionalJDb2LUWTableImportReference();
		virtual void setOptionalJDb2LUWTableImportNull();
		virtual void setOptionalJDb2LUWTableImportValue( const std::string& value );

		virtual bool isOptionalJDb2LUWTableMembersNull();
		virtual const std::string& getOptionalJDb2LUWTableMembersValue();
		virtual const std::string* getOptionalJDb2LUWTableMembersReference();
		virtual void setOptionalJDb2LUWTableMembersNull();
		virtual void setOptionalJDb2LUWTableMembersValue( const std::string& value );

		virtual bool isOptionalJDb2LUWTableImplementationNull();
		virtual const std::string& getOptionalJDb2LUWTableImplementationValue();
		virtual const std::string* getOptionalJDb2LUWTableImplementationReference();
		virtual void setOptionalJDb2LUWTableImplementationNull();
		virtual void setOptionalJDb2LUWTableImplementationValue( const std::string& value );

		virtual bool isOptionalJMSSqlTableImportNull();
		virtual const std::string& getOptionalJMSSqlTableImportValue();
		virtual const std::string* getOptionalJMSSqlTableImportReference();
		virtual void setOptionalJMSSqlTableImportNull();
		virtual void setOptionalJMSSqlTableImportValue( const std::string& value );

		virtual bool isOptionalJMSSqlTableMembersNull();
		virtual const std::string& getOptionalJMSSqlTableMembersValue();
		virtual const std::string* getOptionalJMSSqlTableMembersReference();
		virtual void setOptionalJMSSqlTableMembersNull();
		virtual void setOptionalJMSSqlTableMembersValue( const std::string& value );

		virtual bool isOptionalJMSSqlTableImplementationNull();
		virtual const std::string& getOptionalJMSSqlTableImplementationValue();
		virtual const std::string* getOptionalJMSSqlTableImplementationReference();
		virtual void setOptionalJMSSqlTableImplementationNull();
		virtual void setOptionalJMSSqlTableImplementationValue( const std::string& value );

		virtual bool isOptionalJMySqlTableImportNull();
		virtual const std::string& getOptionalJMySqlTableImportValue();
		virtual const std::string* getOptionalJMySqlTableImportReference();
		virtual void setOptionalJMySqlTableImportNull();
		virtual void setOptionalJMySqlTableImportValue( const std::string& value );

		virtual bool isOptionalJMySqlTableMembersNull();
		virtual const std::string& getOptionalJMySqlTableMembersValue();
		virtual const std::string* getOptionalJMySqlTableMembersReference();
		virtual void setOptionalJMySqlTableMembersNull();
		virtual void setOptionalJMySqlTableMembersValue( const std::string& value );

		virtual bool isOptionalJMySqlTableImplementationNull();
		virtual const std::string& getOptionalJMySqlTableImplementationValue();
		virtual const std::string* getOptionalJMySqlTableImplementationReference();
		virtual void setOptionalJMySqlTableImplementationNull();
		virtual void setOptionalJMySqlTableImplementationValue( const std::string& value );

		virtual bool isOptionalJOracleTableImportNull();
		virtual const std::string& getOptionalJOracleTableImportValue();
		virtual const std::string* getOptionalJOracleTableImportReference();
		virtual void setOptionalJOracleTableImportNull();
		virtual void setOptionalJOracleTableImportValue( const std::string& value );

		virtual bool isOptionalJOracleTableMembersNull();
		virtual const std::string& getOptionalJOracleTableMembersValue();
		virtual const std::string* getOptionalJOracleTableMembersReference();
		virtual void setOptionalJOracleTableMembersNull();
		virtual void setOptionalJOracleTableMembersValue( const std::string& value );

		virtual bool isOptionalJOracleTableImplementationNull();
		virtual const std::string& getOptionalJOracleTableImplementationValue();
		virtual const std::string* getOptionalJOracleTableImplementationReference();
		virtual void setOptionalJOracleTableImplementationNull();
		virtual void setOptionalJOracleTableImplementationValue( const std::string& value );

		virtual bool isOptionalJPgSqlTableImportNull();
		virtual const std::string& getOptionalJPgSqlTableImportValue();
		virtual const std::string* getOptionalJPgSqlTableImportReference();
		virtual void setOptionalJPgSqlTableImportNull();
		virtual void setOptionalJPgSqlTableImportValue( const std::string& value );

		virtual bool isOptionalJPgSqlTableMembersNull();
		virtual const std::string& getOptionalJPgSqlTableMembersValue();
		virtual const std::string* getOptionalJPgSqlTableMembersReference();
		virtual void setOptionalJPgSqlTableMembersNull();
		virtual void setOptionalJPgSqlTableMembersValue( const std::string& value );

		virtual bool isOptionalJPgSqlTableImplementationNull();
		virtual const std::string& getOptionalJPgSqlTableImplementationValue();
		virtual const std::string* getOptionalJPgSqlTableImplementationReference();
		virtual void setOptionalJPgSqlTableImplementationNull();
		virtual void setOptionalJPgSqlTableImplementationValue( const std::string& value );

		virtual bool isOptionalJRamTableImportNull();
		virtual const std::string& getOptionalJRamTableImportValue();
		virtual const std::string* getOptionalJRamTableImportReference();
		virtual void setOptionalJRamTableImportNull();
		virtual void setOptionalJRamTableImportValue( const std::string& value );

		virtual bool isOptionalJRamTableMembersNull();
		virtual const std::string& getOptionalJRamTableMembersValue();
		virtual const std::string* getOptionalJRamTableMembersReference();
		virtual void setOptionalJRamTableMembersNull();
		virtual void setOptionalJRamTableMembersValue( const std::string& value );

		virtual bool isOptionalJRamTableImplementationNull();
		virtual const std::string& getOptionalJRamTableImplementationValue();
		virtual const std::string* getOptionalJRamTableImplementationReference();
		virtual void setOptionalJRamTableImplementationNull();
		virtual void setOptionalJRamTableImplementationValue( const std::string& value );

		virtual bool isOptionalJSaxLoaderImportNull();
		virtual const std::string& getOptionalJSaxLoaderImportValue();
		virtual const std::string* getOptionalJSaxLoaderImportReference();
		virtual void setOptionalJSaxLoaderImportNull();
		virtual void setOptionalJSaxLoaderImportValue( const std::string& value );

		virtual bool isOptionalJSaxLoaderStartElementNull();
		virtual const std::string& getOptionalJSaxLoaderStartElementValue();
		virtual const std::string* getOptionalJSaxLoaderStartElementReference();
		virtual void setOptionalJSaxLoaderStartElementNull();
		virtual void setOptionalJSaxLoaderStartElementValue( const std::string& value );

		virtual bool isOptionalJSaxLoaderEndElementNull();
		virtual const std::string& getOptionalJSaxLoaderEndElementValue();
		virtual const std::string* getOptionalJSaxLoaderEndElementReference();
		virtual void setOptionalJSaxLoaderEndElementNull();
		virtual void setOptionalJSaxLoaderEndElementValue( const std::string& value );

		virtual bool isOptionalJXMsgTableImportNull();
		virtual const std::string& getOptionalJXMsgTableImportValue();
		virtual const std::string* getOptionalJXMsgTableImportReference();
		virtual void setOptionalJXMsgTableImportNull();
		virtual void setOptionalJXMsgTableImportValue( const std::string& value );

		virtual bool isOptionalJXMsgTableFormattersNull();
		virtual const std::string& getOptionalJXMsgTableFormattersValue();
		virtual const std::string* getOptionalJXMsgTableFormattersReference();
		virtual void setOptionalJXMsgTableFormattersNull();
		virtual void setOptionalJXMsgTableFormattersValue( const std::string& value );

		virtual bool isOptionalJXMsgRqstTableImportNull();
		virtual const std::string& getOptionalJXMsgRqstTableImportValue();
		virtual const std::string* getOptionalJXMsgRqstTableImportReference();
		virtual void setOptionalJXMsgRqstTableImportNull();
		virtual void setOptionalJXMsgRqstTableImportValue( const std::string& value );

		virtual bool isOptionalJXMsgRspnTableImportNull();
		virtual const std::string& getOptionalJXMsgRspnTableImportValue();
		virtual const std::string* getOptionalJXMsgRspnTableImportReference();
		virtual void setOptionalJXMsgRspnTableImportNull();
		virtual void setOptionalJXMsgRspnTableImportValue( const std::string& value );

		virtual bool isOptionalJXMsgClientTableImportNull();
		virtual const std::string& getOptionalJXMsgClientTableImportValue();
		virtual const std::string* getOptionalJXMsgClientTableImportReference();
		virtual void setOptionalJXMsgClientTableImportNull();
		virtual void setOptionalJXMsgClientTableImportValue( const std::string& value );

		virtual bool isOptionalJXMsgRqstTableBodyNull();
		virtual const std::string& getOptionalJXMsgRqstTableBodyValue();
		virtual const std::string* getOptionalJXMsgRqstTableBodyReference();
		virtual void setOptionalJXMsgRqstTableBodyNull();
		virtual void setOptionalJXMsgRqstTableBodyValue( const std::string& value );

		virtual bool isOptionalJXMsgRspnTableBodyNull();
		virtual const std::string& getOptionalJXMsgRspnTableBodyValue();
		virtual const std::string* getOptionalJXMsgRspnTableBodyReference();
		virtual void setOptionalJXMsgRspnTableBodyNull();
		virtual void setOptionalJXMsgRspnTableBodyValue( const std::string& value );

		virtual bool isOptionalJXMsgClientTableBodyNull();
		virtual const std::string& getOptionalJXMsgClientTableBodyValue();
		virtual const std::string* getOptionalJXMsgClientTableBodyReference();
		virtual void setOptionalJXMsgClientTableBodyNull();
		virtual void setOptionalJXMsgClientTableBodyValue( const std::string& value );

		virtual bool isOptionalCppObjMembersNull();
		virtual const std::string& getOptionalCppObjMembersValue();
		virtual const std::string* getOptionalCppObjMembersReference();
		virtual void setOptionalCppObjMembersNull();
		virtual void setOptionalCppObjMembersValue( const std::string& value );

		virtual bool isOptionalCppObjInterfaceNull();
		virtual const std::string& getOptionalCppObjInterfaceValue();
		virtual const std::string* getOptionalCppObjInterfaceReference();
		virtual void setOptionalCppObjInterfaceNull();
		virtual void setOptionalCppObjInterfaceValue( const std::string& value );

		virtual bool isOptionalCppObjIncludeNull();
		virtual const std::string& getOptionalCppObjIncludeValue();
		virtual const std::string* getOptionalCppObjIncludeReference();
		virtual void setOptionalCppObjIncludeNull();
		virtual void setOptionalCppObjIncludeValue( const std::string& value );

		virtual bool isOptionalCppObjImplementationNull();
		virtual const std::string& getOptionalCppObjImplementationValue();
		virtual const std::string* getOptionalCppObjImplementationReference();
		virtual void setOptionalCppObjImplementationNull();
		virtual void setOptionalCppObjImplementationValue( const std::string& value );

		virtual bool isOptionalCppEditObjMembersNull();
		virtual const std::string& getOptionalCppEditObjMembersValue();
		virtual const std::string* getOptionalCppEditObjMembersReference();
		virtual void setOptionalCppEditObjMembersNull();
		virtual void setOptionalCppEditObjMembersValue( const std::string& value );

		virtual bool isOptionalCppEditObjInterfaceNull();
		virtual const std::string& getOptionalCppEditObjInterfaceValue();
		virtual const std::string* getOptionalCppEditObjInterfaceReference();
		virtual void setOptionalCppEditObjInterfaceNull();
		virtual void setOptionalCppEditObjInterfaceValue( const std::string& value );

		virtual bool isOptionalCppEditObjIncludeNull();
		virtual const std::string& getOptionalCppEditObjIncludeValue();
		virtual const std::string* getOptionalCppEditObjIncludeReference();
		virtual void setOptionalCppEditObjIncludeNull();
		virtual void setOptionalCppEditObjIncludeValue( const std::string& value );

		virtual bool isOptionalCppEditObjImplementationNull();
		virtual const std::string& getOptionalCppEditObjImplementationValue();
		virtual const std::string* getOptionalCppEditObjImplementationReference();
		virtual void setOptionalCppEditObjImplementationNull();
		virtual void setOptionalCppEditObjImplementationValue( const std::string& value );

		virtual bool isOptionalCppTableIncludeNull();
		virtual const std::string& getOptionalCppTableIncludeValue();
		virtual const std::string* getOptionalCppTableIncludeReference();
		virtual void setOptionalCppTableIncludeNull();
		virtual void setOptionalCppTableIncludeValue( const std::string& value );

		virtual bool isOptionalCppTableMembersNull();
		virtual const std::string& getOptionalCppTableMembersValue();
		virtual const std::string* getOptionalCppTableMembersReference();
		virtual void setOptionalCppTableMembersNull();
		virtual void setOptionalCppTableMembersValue( const std::string& value );

		virtual bool isOptionalCppTableInterfaceNull();
		virtual const std::string& getOptionalCppTableInterfaceValue();
		virtual const std::string* getOptionalCppTableInterfaceReference();
		virtual void setOptionalCppTableInterfaceNull();
		virtual void setOptionalCppTableInterfaceValue( const std::string& value );

		virtual bool isOptionalCppTableImplementationNull();
		virtual const std::string& getOptionalCppTableImplementationValue();
		virtual const std::string* getOptionalCppTableImplementationReference();
		virtual void setOptionalCppTableImplementationNull();
		virtual void setOptionalCppTableImplementationValue( const std::string& value );

		virtual bool isOptionalCppTableObjIncludeNull();
		virtual const std::string& getOptionalCppTableObjIncludeValue();
		virtual const std::string* getOptionalCppTableObjIncludeReference();
		virtual void setOptionalCppTableObjIncludeNull();
		virtual void setOptionalCppTableObjIncludeValue( const std::string& value );

		virtual bool isOptionalCppTableObjMembersNull();
		virtual const std::string& getOptionalCppTableObjMembersValue();
		virtual const std::string* getOptionalCppTableObjMembersReference();
		virtual void setOptionalCppTableObjMembersNull();
		virtual void setOptionalCppTableObjMembersValue( const std::string& value );

		virtual bool isOptionalCppTableObjInterfaceNull();
		virtual const std::string& getOptionalCppTableObjInterfaceValue();
		virtual const std::string* getOptionalCppTableObjInterfaceReference();
		virtual void setOptionalCppTableObjInterfaceNull();
		virtual void setOptionalCppTableObjInterfaceValue( const std::string& value );

		virtual bool isOptionalCppTableObjImplementationNull();
		virtual const std::string& getOptionalCppTableObjImplementationValue();
		virtual const std::string* getOptionalCppTableObjImplementationReference();
		virtual void setOptionalCppTableObjImplementationNull();
		virtual void setOptionalCppTableObjImplementationValue( const std::string& value );

		virtual bool isOptionalCppDb2LUWTableIncludeNull();
		virtual const std::string& getOptionalCppDb2LUWTableIncludeValue();
		virtual const std::string* getOptionalCppDb2LUWTableIncludeReference();
		virtual void setOptionalCppDb2LUWTableIncludeNull();
		virtual void setOptionalCppDb2LUWTableIncludeValue( const std::string& value );

		virtual bool isOptionalCppDb2LUWTableMembersNull();
		virtual const std::string& getOptionalCppDb2LUWTableMembersValue();
		virtual const std::string* getOptionalCppDb2LUWTableMembersReference();
		virtual void setOptionalCppDb2LUWTableMembersNull();
		virtual void setOptionalCppDb2LUWTableMembersValue( const std::string& value );

		virtual bool isOptionalCppDb2LUWTableImplementationNull();
		virtual const std::string& getOptionalCppDb2LUWTableImplementationValue();
		virtual const std::string* getOptionalCppDb2LUWTableImplementationReference();
		virtual void setOptionalCppDb2LUWTableImplementationNull();
		virtual void setOptionalCppDb2LUWTableImplementationValue( const std::string& value );

		virtual bool isOptionalCppMSSqlTableIncludeNull();
		virtual const std::string& getOptionalCppMSSqlTableIncludeValue();
		virtual const std::string* getOptionalCppMSSqlTableIncludeReference();
		virtual void setOptionalCppMSSqlTableIncludeNull();
		virtual void setOptionalCppMSSqlTableIncludeValue( const std::string& value );

		virtual bool isOptionalCppMSSqlTableMembersNull();
		virtual const std::string& getOptionalCppMSSqlTableMembersValue();
		virtual const std::string* getOptionalCppMSSqlTableMembersReference();
		virtual void setOptionalCppMSSqlTableMembersNull();
		virtual void setOptionalCppMSSqlTableMembersValue( const std::string& value );

		virtual bool isOptionalCppMSSqlTableImplementationNull();
		virtual const std::string& getOptionalCppMSSqlTableImplementationValue();
		virtual const std::string* getOptionalCppMSSqlTableImplementationReference();
		virtual void setOptionalCppMSSqlTableImplementationNull();
		virtual void setOptionalCppMSSqlTableImplementationValue( const std::string& value );

		virtual bool isOptionalCppMySqlTableIncludeNull();
		virtual const std::string& getOptionalCppMySqlTableIncludeValue();
		virtual const std::string* getOptionalCppMySqlTableIncludeReference();
		virtual void setOptionalCppMySqlTableIncludeNull();
		virtual void setOptionalCppMySqlTableIncludeValue( const std::string& value );

		virtual bool isOptionalCppMySqlTableMembersNull();
		virtual const std::string& getOptionalCppMySqlTableMembersValue();
		virtual const std::string* getOptionalCppMySqlTableMembersReference();
		virtual void setOptionalCppMySqlTableMembersNull();
		virtual void setOptionalCppMySqlTableMembersValue( const std::string& value );

		virtual bool isOptionalCppMySqlTableImplementationNull();
		virtual const std::string& getOptionalCppMySqlTableImplementationValue();
		virtual const std::string* getOptionalCppMySqlTableImplementationReference();
		virtual void setOptionalCppMySqlTableImplementationNull();
		virtual void setOptionalCppMySqlTableImplementationValue( const std::string& value );

		virtual bool isOptionalCppOracleTableIncludeNull();
		virtual const std::string& getOptionalCppOracleTableIncludeValue();
		virtual const std::string* getOptionalCppOracleTableIncludeReference();
		virtual void setOptionalCppOracleTableIncludeNull();
		virtual void setOptionalCppOracleTableIncludeValue( const std::string& value );

		virtual bool isOptionalCppOracleTableMembersNull();
		virtual const std::string& getOptionalCppOracleTableMembersValue();
		virtual const std::string* getOptionalCppOracleTableMembersReference();
		virtual void setOptionalCppOracleTableMembersNull();
		virtual void setOptionalCppOracleTableMembersValue( const std::string& value );

		virtual bool isOptionalCppOracleTableImplementationNull();
		virtual const std::string& getOptionalCppOracleTableImplementationValue();
		virtual const std::string* getOptionalCppOracleTableImplementationReference();
		virtual void setOptionalCppOracleTableImplementationNull();
		virtual void setOptionalCppOracleTableImplementationValue( const std::string& value );

		virtual bool isOptionalCppPgSqlTableIncludeNull();
		virtual const std::string& getOptionalCppPgSqlTableIncludeValue();
		virtual const std::string* getOptionalCppPgSqlTableIncludeReference();
		virtual void setOptionalCppPgSqlTableIncludeNull();
		virtual void setOptionalCppPgSqlTableIncludeValue( const std::string& value );

		virtual bool isOptionalCppPgSqlTableMembersNull();
		virtual const std::string& getOptionalCppPgSqlTableMembersValue();
		virtual const std::string* getOptionalCppPgSqlTableMembersReference();
		virtual void setOptionalCppPgSqlTableMembersNull();
		virtual void setOptionalCppPgSqlTableMembersValue( const std::string& value );

		virtual bool isOptionalCppPgSqlTableImplementationNull();
		virtual const std::string& getOptionalCppPgSqlTableImplementationValue();
		virtual const std::string* getOptionalCppPgSqlTableImplementationReference();
		virtual void setOptionalCppPgSqlTableImplementationNull();
		virtual void setOptionalCppPgSqlTableImplementationValue( const std::string& value );

		virtual bool isOptionalCppRamTableIncludeNull();
		virtual const std::string& getOptionalCppRamTableIncludeValue();
		virtual const std::string* getOptionalCppRamTableIncludeReference();
		virtual void setOptionalCppRamTableIncludeNull();
		virtual void setOptionalCppRamTableIncludeValue( const std::string& value );

		virtual bool isOptionalCppRamTableMembersNull();
		virtual const std::string& getOptionalCppRamTableMembersValue();
		virtual const std::string* getOptionalCppRamTableMembersReference();
		virtual void setOptionalCppRamTableMembersNull();
		virtual void setOptionalCppRamTableMembersValue( const std::string& value );

		virtual bool isOptionalCppRamTableImplementationNull();
		virtual const std::string& getOptionalCppRamTableImplementationValue();
		virtual const std::string* getOptionalCppRamTableImplementationReference();
		virtual void setOptionalCppRamTableImplementationNull();
		virtual void setOptionalCppRamTableImplementationValue( const std::string& value );

		virtual bool isOptionalCppSaxLoaderIncludeNull();
		virtual const std::string& getOptionalCppSaxLoaderIncludeValue();
		virtual const std::string* getOptionalCppSaxLoaderIncludeReference();
		virtual void setOptionalCppSaxLoaderIncludeNull();
		virtual void setOptionalCppSaxLoaderIncludeValue( const std::string& value );

		virtual bool isOptionalCppSaxLoaderStartElementNull();
		virtual const std::string& getOptionalCppSaxLoaderStartElementValue();
		virtual const std::string* getOptionalCppSaxLoaderStartElementReference();
		virtual void setOptionalCppSaxLoaderStartElementNull();
		virtual void setOptionalCppSaxLoaderStartElementValue( const std::string& value );

		virtual bool isOptionalCppSaxLoaderEndElementNull();
		virtual const std::string& getOptionalCppSaxLoaderEndElementValue();
		virtual const std::string* getOptionalCppSaxLoaderEndElementReference();
		virtual void setOptionalCppSaxLoaderEndElementNull();
		virtual void setOptionalCppSaxLoaderEndElementValue( const std::string& value );

		virtual bool isOptionalCppXMsgTableIncludeNull();
		virtual const std::string& getOptionalCppXMsgTableIncludeValue();
		virtual const std::string* getOptionalCppXMsgTableIncludeReference();
		virtual void setOptionalCppXMsgTableIncludeNull();
		virtual void setOptionalCppXMsgTableIncludeValue( const std::string& value );

		virtual bool isOptionalCppXMsgTableFormattersNull();
		virtual const std::string& getOptionalCppXMsgTableFormattersValue();
		virtual const std::string* getOptionalCppXMsgTableFormattersReference();
		virtual void setOptionalCppXMsgTableFormattersNull();
		virtual void setOptionalCppXMsgTableFormattersValue( const std::string& value );

		virtual bool isOptionalCppXMsgRqstTableIncludeNull();
		virtual const std::string& getOptionalCppXMsgRqstTableIncludeValue();
		virtual const std::string* getOptionalCppXMsgRqstTableIncludeReference();
		virtual void setOptionalCppXMsgRqstTableIncludeNull();
		virtual void setOptionalCppXMsgRqstTableIncludeValue( const std::string& value );

		virtual bool isOptionalCppXMsgRspnTableIncludeNull();
		virtual const std::string& getOptionalCppXMsgRspnTableIncludeValue();
		virtual const std::string* getOptionalCppXMsgRspnTableIncludeReference();
		virtual void setOptionalCppXMsgRspnTableIncludeNull();
		virtual void setOptionalCppXMsgRspnTableIncludeValue( const std::string& value );

		virtual bool isOptionalCppXMsgClientTableIncludeNull();
		virtual const std::string& getOptionalCppXMsgClientTableIncludeValue();
		virtual const std::string* getOptionalCppXMsgClientTableIncludeReference();
		virtual void setOptionalCppXMsgClientTableIncludeNull();
		virtual void setOptionalCppXMsgClientTableIncludeValue( const std::string& value );

		virtual bool isOptionalCppXMsgRqstTableBodyNull();
		virtual const std::string& getOptionalCppXMsgRqstTableBodyValue();
		virtual const std::string* getOptionalCppXMsgRqstTableBodyReference();
		virtual void setOptionalCppXMsgRqstTableBodyNull();
		virtual void setOptionalCppXMsgRqstTableBodyValue( const std::string& value );

		virtual bool isOptionalCppXMsgRspnTableBodyNull();
		virtual const std::string& getOptionalCppXMsgRspnTableBodyValue();
		virtual const std::string* getOptionalCppXMsgRspnTableBodyReference();
		virtual void setOptionalCppXMsgRspnTableBodyNull();
		virtual void setOptionalCppXMsgRspnTableBodyValue( const std::string& value );

		virtual bool isOptionalCppXMsgClientTableBodyNull();
		virtual const std::string& getOptionalCppXMsgClientTableBodyValue();
		virtual const std::string* getOptionalCppXMsgClientTableBodyReference();
		virtual void setOptionalCppXMsgClientTableBodyNull();
		virtual void setOptionalCppXMsgClientTableBodyValue( const std::string& value );

		virtual bool isOptionalHppObjMembersNull();
		virtual const std::string& getOptionalHppObjMembersValue();
		virtual const std::string* getOptionalHppObjMembersReference();
		virtual void setOptionalHppObjMembersNull();
		virtual void setOptionalHppObjMembersValue( const std::string& value );

		virtual bool isOptionalHppObjInterfaceNull();
		virtual const std::string& getOptionalHppObjInterfaceValue();
		virtual const std::string* getOptionalHppObjInterfaceReference();
		virtual void setOptionalHppObjInterfaceNull();
		virtual void setOptionalHppObjInterfaceValue( const std::string& value );

		virtual bool isOptionalHppObjIncludeNull();
		virtual const std::string& getOptionalHppObjIncludeValue();
		virtual const std::string* getOptionalHppObjIncludeReference();
		virtual void setOptionalHppObjIncludeNull();
		virtual void setOptionalHppObjIncludeValue( const std::string& value );

		virtual bool isOptionalHppObjImplementationNull();
		virtual const std::string& getOptionalHppObjImplementationValue();
		virtual const std::string* getOptionalHppObjImplementationReference();
		virtual void setOptionalHppObjImplementationNull();
		virtual void setOptionalHppObjImplementationValue( const std::string& value );

		virtual bool isOptionalHppEditObjMembersNull();
		virtual const std::string& getOptionalHppEditObjMembersValue();
		virtual const std::string* getOptionalHppEditObjMembersReference();
		virtual void setOptionalHppEditObjMembersNull();
		virtual void setOptionalHppEditObjMembersValue( const std::string& value );

		virtual bool isOptionalHppEditObjInterfaceNull();
		virtual const std::string& getOptionalHppEditObjInterfaceValue();
		virtual const std::string* getOptionalHppEditObjInterfaceReference();
		virtual void setOptionalHppEditObjInterfaceNull();
		virtual void setOptionalHppEditObjInterfaceValue( const std::string& value );

		virtual bool isOptionalHppEditObjIncludeNull();
		virtual const std::string& getOptionalHppEditObjIncludeValue();
		virtual const std::string* getOptionalHppEditObjIncludeReference();
		virtual void setOptionalHppEditObjIncludeNull();
		virtual void setOptionalHppEditObjIncludeValue( const std::string& value );

		virtual bool isOptionalHppEditObjImplementationNull();
		virtual const std::string& getOptionalHppEditObjImplementationValue();
		virtual const std::string* getOptionalHppEditObjImplementationReference();
		virtual void setOptionalHppEditObjImplementationNull();
		virtual void setOptionalHppEditObjImplementationValue( const std::string& value );

		virtual bool isOptionalHppTableIncludeNull();
		virtual const std::string& getOptionalHppTableIncludeValue();
		virtual const std::string* getOptionalHppTableIncludeReference();
		virtual void setOptionalHppTableIncludeNull();
		virtual void setOptionalHppTableIncludeValue( const std::string& value );

		virtual bool isOptionalHppTableMembersNull();
		virtual const std::string& getOptionalHppTableMembersValue();
		virtual const std::string* getOptionalHppTableMembersReference();
		virtual void setOptionalHppTableMembersNull();
		virtual void setOptionalHppTableMembersValue( const std::string& value );

		virtual bool isOptionalHppTableInterfaceNull();
		virtual const std::string& getOptionalHppTableInterfaceValue();
		virtual const std::string* getOptionalHppTableInterfaceReference();
		virtual void setOptionalHppTableInterfaceNull();
		virtual void setOptionalHppTableInterfaceValue( const std::string& value );

		virtual bool isOptionalHppTableImplementationNull();
		virtual const std::string& getOptionalHppTableImplementationValue();
		virtual const std::string* getOptionalHppTableImplementationReference();
		virtual void setOptionalHppTableImplementationNull();
		virtual void setOptionalHppTableImplementationValue( const std::string& value );

		virtual bool isOptionalHppTableObjIncludeNull();
		virtual const std::string& getOptionalHppTableObjIncludeValue();
		virtual const std::string* getOptionalHppTableObjIncludeReference();
		virtual void setOptionalHppTableObjIncludeNull();
		virtual void setOptionalHppTableObjIncludeValue( const std::string& value );

		virtual bool isOptionalHppTableObjMembersNull();
		virtual const std::string& getOptionalHppTableObjMembersValue();
		virtual const std::string* getOptionalHppTableObjMembersReference();
		virtual void setOptionalHppTableObjMembersNull();
		virtual void setOptionalHppTableObjMembersValue( const std::string& value );

		virtual bool isOptionalHppTableObjInterfaceNull();
		virtual const std::string& getOptionalHppTableObjInterfaceValue();
		virtual const std::string* getOptionalHppTableObjInterfaceReference();
		virtual void setOptionalHppTableObjInterfaceNull();
		virtual void setOptionalHppTableObjInterfaceValue( const std::string& value );

		virtual bool isOptionalHppTableObjImplementationNull();
		virtual const std::string& getOptionalHppTableObjImplementationValue();
		virtual const std::string* getOptionalHppTableObjImplementationReference();
		virtual void setOptionalHppTableObjImplementationNull();
		virtual void setOptionalHppTableObjImplementationValue( const std::string& value );

		virtual bool isOptionalHppDb2LUWTableIncludeNull();
		virtual const std::string& getOptionalHppDb2LUWTableIncludeValue();
		virtual const std::string* getOptionalHppDb2LUWTableIncludeReference();
		virtual void setOptionalHppDb2LUWTableIncludeNull();
		virtual void setOptionalHppDb2LUWTableIncludeValue( const std::string& value );

		virtual bool isOptionalHppDb2LUWTableMembersNull();
		virtual const std::string& getOptionalHppDb2LUWTableMembersValue();
		virtual const std::string* getOptionalHppDb2LUWTableMembersReference();
		virtual void setOptionalHppDb2LUWTableMembersNull();
		virtual void setOptionalHppDb2LUWTableMembersValue( const std::string& value );

		virtual bool isOptionalHppDb2LUWTableImplementationNull();
		virtual const std::string& getOptionalHppDb2LUWTableImplementationValue();
		virtual const std::string* getOptionalHppDb2LUWTableImplementationReference();
		virtual void setOptionalHppDb2LUWTableImplementationNull();
		virtual void setOptionalHppDb2LUWTableImplementationValue( const std::string& value );

		virtual bool isOptionalHppMSSqlTableIncludeNull();
		virtual const std::string& getOptionalHppMSSqlTableIncludeValue();
		virtual const std::string* getOptionalHppMSSqlTableIncludeReference();
		virtual void setOptionalHppMSSqlTableIncludeNull();
		virtual void setOptionalHppMSSqlTableIncludeValue( const std::string& value );

		virtual bool isOptionalHppMSSqlTableMembersNull();
		virtual const std::string& getOptionalHppMSSqlTableMembersValue();
		virtual const std::string* getOptionalHppMSSqlTableMembersReference();
		virtual void setOptionalHppMSSqlTableMembersNull();
		virtual void setOptionalHppMSSqlTableMembersValue( const std::string& value );

		virtual bool isOptionalHppMSSqlTableImplementationNull();
		virtual const std::string& getOptionalHppMSSqlTableImplementationValue();
		virtual const std::string* getOptionalHppMSSqlTableImplementationReference();
		virtual void setOptionalHppMSSqlTableImplementationNull();
		virtual void setOptionalHppMSSqlTableImplementationValue( const std::string& value );

		virtual bool isOptionalHppMySqlTableIncludeNull();
		virtual const std::string& getOptionalHppMySqlTableIncludeValue();
		virtual const std::string* getOptionalHppMySqlTableIncludeReference();
		virtual void setOptionalHppMySqlTableIncludeNull();
		virtual void setOptionalHppMySqlTableIncludeValue( const std::string& value );

		virtual bool isOptionalHppMySqlTableMembersNull();
		virtual const std::string& getOptionalHppMySqlTableMembersValue();
		virtual const std::string* getOptionalHppMySqlTableMembersReference();
		virtual void setOptionalHppMySqlTableMembersNull();
		virtual void setOptionalHppMySqlTableMembersValue( const std::string& value );

		virtual bool isOptionalHppMySqlTableImplementationNull();
		virtual const std::string& getOptionalHppMySqlTableImplementationValue();
		virtual const std::string* getOptionalHppMySqlTableImplementationReference();
		virtual void setOptionalHppMySqlTableImplementationNull();
		virtual void setOptionalHppMySqlTableImplementationValue( const std::string& value );

		virtual bool isOptionalHppOracleTableIncludeNull();
		virtual const std::string& getOptionalHppOracleTableIncludeValue();
		virtual const std::string* getOptionalHppOracleTableIncludeReference();
		virtual void setOptionalHppOracleTableIncludeNull();
		virtual void setOptionalHppOracleTableIncludeValue( const std::string& value );

		virtual bool isOptionalHppOracleTableMembersNull();
		virtual const std::string& getOptionalHppOracleTableMembersValue();
		virtual const std::string* getOptionalHppOracleTableMembersReference();
		virtual void setOptionalHppOracleTableMembersNull();
		virtual void setOptionalHppOracleTableMembersValue( const std::string& value );

		virtual bool isOptionalHppOracleTableImplementationNull();
		virtual const std::string& getOptionalHppOracleTableImplementationValue();
		virtual const std::string* getOptionalHppOracleTableImplementationReference();
		virtual void setOptionalHppOracleTableImplementationNull();
		virtual void setOptionalHppOracleTableImplementationValue( const std::string& value );

		virtual bool isOptionalHppPgSqlTableIncludeNull();
		virtual const std::string& getOptionalHppPgSqlTableIncludeValue();
		virtual const std::string* getOptionalHppPgSqlTableIncludeReference();
		virtual void setOptionalHppPgSqlTableIncludeNull();
		virtual void setOptionalHppPgSqlTableIncludeValue( const std::string& value );

		virtual bool isOptionalHppPgSqlTableMembersNull();
		virtual const std::string& getOptionalHppPgSqlTableMembersValue();
		virtual const std::string* getOptionalHppPgSqlTableMembersReference();
		virtual void setOptionalHppPgSqlTableMembersNull();
		virtual void setOptionalHppPgSqlTableMembersValue( const std::string& value );

		virtual bool isOptionalHppPgSqlTableImplementationNull();
		virtual const std::string& getOptionalHppPgSqlTableImplementationValue();
		virtual const std::string* getOptionalHppPgSqlTableImplementationReference();
		virtual void setOptionalHppPgSqlTableImplementationNull();
		virtual void setOptionalHppPgSqlTableImplementationValue( const std::string& value );

		virtual bool isOptionalHppRamTableIncludeNull();
		virtual const std::string& getOptionalHppRamTableIncludeValue();
		virtual const std::string* getOptionalHppRamTableIncludeReference();
		virtual void setOptionalHppRamTableIncludeNull();
		virtual void setOptionalHppRamTableIncludeValue( const std::string& value );

		virtual bool isOptionalHppRamTableMembersNull();
		virtual const std::string& getOptionalHppRamTableMembersValue();
		virtual const std::string* getOptionalHppRamTableMembersReference();
		virtual void setOptionalHppRamTableMembersNull();
		virtual void setOptionalHppRamTableMembersValue( const std::string& value );

		virtual bool isOptionalHppRamTableImplementationNull();
		virtual const std::string& getOptionalHppRamTableImplementationValue();
		virtual const std::string* getOptionalHppRamTableImplementationReference();
		virtual void setOptionalHppRamTableImplementationNull();
		virtual void setOptionalHppRamTableImplementationValue( const std::string& value );

		virtual bool isOptionalHppSaxLoaderIncludeNull();
		virtual const std::string& getOptionalHppSaxLoaderIncludeValue();
		virtual const std::string* getOptionalHppSaxLoaderIncludeReference();
		virtual void setOptionalHppSaxLoaderIncludeNull();
		virtual void setOptionalHppSaxLoaderIncludeValue( const std::string& value );

		virtual bool isOptionalHppSaxLoaderStartElementNull();
		virtual const std::string& getOptionalHppSaxLoaderStartElementValue();
		virtual const std::string* getOptionalHppSaxLoaderStartElementReference();
		virtual void setOptionalHppSaxLoaderStartElementNull();
		virtual void setOptionalHppSaxLoaderStartElementValue( const std::string& value );

		virtual bool isOptionalHppSaxLoaderEndElementNull();
		virtual const std::string& getOptionalHppSaxLoaderEndElementValue();
		virtual const std::string* getOptionalHppSaxLoaderEndElementReference();
		virtual void setOptionalHppSaxLoaderEndElementNull();
		virtual void setOptionalHppSaxLoaderEndElementValue( const std::string& value );

		virtual bool isOptionalHppXMsgTableIncludeNull();
		virtual const std::string& getOptionalHppXMsgTableIncludeValue();
		virtual const std::string* getOptionalHppXMsgTableIncludeReference();
		virtual void setOptionalHppXMsgTableIncludeNull();
		virtual void setOptionalHppXMsgTableIncludeValue( const std::string& value );

		virtual bool isOptionalHppXMsgTableFormattersNull();
		virtual const std::string& getOptionalHppXMsgTableFormattersValue();
		virtual const std::string* getOptionalHppXMsgTableFormattersReference();
		virtual void setOptionalHppXMsgTableFormattersNull();
		virtual void setOptionalHppXMsgTableFormattersValue( const std::string& value );

		virtual bool isOptionalHppXMsgRqstTableIncludeNull();
		virtual const std::string& getOptionalHppXMsgRqstTableIncludeValue();
		virtual const std::string* getOptionalHppXMsgRqstTableIncludeReference();
		virtual void setOptionalHppXMsgRqstTableIncludeNull();
		virtual void setOptionalHppXMsgRqstTableIncludeValue( const std::string& value );

		virtual bool isOptionalHppXMsgRspnTableIncludeNull();
		virtual const std::string& getOptionalHppXMsgRspnTableIncludeValue();
		virtual const std::string* getOptionalHppXMsgRspnTableIncludeReference();
		virtual void setOptionalHppXMsgRspnTableIncludeNull();
		virtual void setOptionalHppXMsgRspnTableIncludeValue( const std::string& value );

		virtual bool isOptionalHppXMsgClientTableIncludeNull();
		virtual const std::string& getOptionalHppXMsgClientTableIncludeValue();
		virtual const std::string* getOptionalHppXMsgClientTableIncludeReference();
		virtual void setOptionalHppXMsgClientTableIncludeNull();
		virtual void setOptionalHppXMsgClientTableIncludeValue( const std::string& value );

		virtual bool isOptionalHppXMsgRqstTableBodyNull();
		virtual const std::string& getOptionalHppXMsgRqstTableBodyValue();
		virtual const std::string* getOptionalHppXMsgRqstTableBodyReference();
		virtual void setOptionalHppXMsgRqstTableBodyNull();
		virtual void setOptionalHppXMsgRqstTableBodyValue( const std::string& value );

		virtual bool isOptionalHppXMsgRspnTableBodyNull();
		virtual const std::string& getOptionalHppXMsgRspnTableBodyValue();
		virtual const std::string* getOptionalHppXMsgRspnTableBodyReference();
		virtual void setOptionalHppXMsgRspnTableBodyNull();
		virtual void setOptionalHppXMsgRspnTableBodyValue( const std::string& value );

		virtual bool isOptionalHppXMsgClientTableBodyNull();
		virtual const std::string& getOptionalHppXMsgClientTableBodyValue();
		virtual const std::string* getOptionalHppXMsgClientTableBodyReference();
		virtual void setOptionalHppXMsgClientTableBodyNull();
		virtual void setOptionalHppXMsgClientTableBodyValue( const std::string& value );

		virtual bool isOptionalCsObjMembersNull();
		virtual const std::string& getOptionalCsObjMembersValue();
		virtual const std::string* getOptionalCsObjMembersReference();
		virtual void setOptionalCsObjMembersNull();
		virtual void setOptionalCsObjMembersValue( const std::string& value );

		virtual bool isOptionalCsObjInterfaceNull();
		virtual const std::string& getOptionalCsObjInterfaceValue();
		virtual const std::string* getOptionalCsObjInterfaceReference();
		virtual void setOptionalCsObjInterfaceNull();
		virtual void setOptionalCsObjInterfaceValue( const std::string& value );

		virtual bool isOptionalCsObjUsingNull();
		virtual const std::string& getOptionalCsObjUsingValue();
		virtual const std::string* getOptionalCsObjUsingReference();
		virtual void setOptionalCsObjUsingNull();
		virtual void setOptionalCsObjUsingValue( const std::string& value );

		virtual bool isOptionalCsObjImplementationNull();
		virtual const std::string& getOptionalCsObjImplementationValue();
		virtual const std::string* getOptionalCsObjImplementationReference();
		virtual void setOptionalCsObjImplementationNull();
		virtual void setOptionalCsObjImplementationValue( const std::string& value );

		virtual bool isOptionalCsEditObjMembersNull();
		virtual const std::string& getOptionalCsEditObjMembersValue();
		virtual const std::string* getOptionalCsEditObjMembersReference();
		virtual void setOptionalCsEditObjMembersNull();
		virtual void setOptionalCsEditObjMembersValue( const std::string& value );

		virtual bool isOptionalCsEditObjInterfaceNull();
		virtual const std::string& getOptionalCsEditObjInterfaceValue();
		virtual const std::string* getOptionalCsEditObjInterfaceReference();
		virtual void setOptionalCsEditObjInterfaceNull();
		virtual void setOptionalCsEditObjInterfaceValue( const std::string& value );

		virtual bool isOptionalCsEditObjUsingNull();
		virtual const std::string& getOptionalCsEditObjUsingValue();
		virtual const std::string* getOptionalCsEditObjUsingReference();
		virtual void setOptionalCsEditObjUsingNull();
		virtual void setOptionalCsEditObjUsingValue( const std::string& value );

		virtual bool isOptionalCsEditObjImplementationNull();
		virtual const std::string& getOptionalCsEditObjImplementationValue();
		virtual const std::string* getOptionalCsEditObjImplementationReference();
		virtual void setOptionalCsEditObjImplementationNull();
		virtual void setOptionalCsEditObjImplementationValue( const std::string& value );

		virtual bool isOptionalCsTableUsingNull();
		virtual const std::string& getOptionalCsTableUsingValue();
		virtual const std::string* getOptionalCsTableUsingReference();
		virtual void setOptionalCsTableUsingNull();
		virtual void setOptionalCsTableUsingValue( const std::string& value );

		virtual bool isOptionalCsTableMembersNull();
		virtual const std::string& getOptionalCsTableMembersValue();
		virtual const std::string* getOptionalCsTableMembersReference();
		virtual void setOptionalCsTableMembersNull();
		virtual void setOptionalCsTableMembersValue( const std::string& value );

		virtual bool isOptionalCsTableInterfaceNull();
		virtual const std::string& getOptionalCsTableInterfaceValue();
		virtual const std::string* getOptionalCsTableInterfaceReference();
		virtual void setOptionalCsTableInterfaceNull();
		virtual void setOptionalCsTableInterfaceValue( const std::string& value );

		virtual bool isOptionalCsTableImplementationNull();
		virtual const std::string& getOptionalCsTableImplementationValue();
		virtual const std::string* getOptionalCsTableImplementationReference();
		virtual void setOptionalCsTableImplementationNull();
		virtual void setOptionalCsTableImplementationValue( const std::string& value );

		virtual bool isOptionalCsTableObjUsingNull();
		virtual const std::string& getOptionalCsTableObjUsingValue();
		virtual const std::string* getOptionalCsTableObjUsingReference();
		virtual void setOptionalCsTableObjUsingNull();
		virtual void setOptionalCsTableObjUsingValue( const std::string& value );

		virtual bool isOptionalCsTableObjMembersNull();
		virtual const std::string& getOptionalCsTableObjMembersValue();
		virtual const std::string* getOptionalCsTableObjMembersReference();
		virtual void setOptionalCsTableObjMembersNull();
		virtual void setOptionalCsTableObjMembersValue( const std::string& value );

		virtual bool isOptionalCsTableObjInterfaceNull();
		virtual const std::string& getOptionalCsTableObjInterfaceValue();
		virtual const std::string* getOptionalCsTableObjInterfaceReference();
		virtual void setOptionalCsTableObjInterfaceNull();
		virtual void setOptionalCsTableObjInterfaceValue( const std::string& value );

		virtual bool isOptionalCsTableObjImplementationNull();
		virtual const std::string& getOptionalCsTableObjImplementationValue();
		virtual const std::string* getOptionalCsTableObjImplementationReference();
		virtual void setOptionalCsTableObjImplementationNull();
		virtual void setOptionalCsTableObjImplementationValue( const std::string& value );

		virtual bool isOptionalCsDb2LUWTableUsingNull();
		virtual const std::string& getOptionalCsDb2LUWTableUsingValue();
		virtual const std::string* getOptionalCsDb2LUWTableUsingReference();
		virtual void setOptionalCsDb2LUWTableUsingNull();
		virtual void setOptionalCsDb2LUWTableUsingValue( const std::string& value );

		virtual bool isOptionalCsDb2LUWTableMembersNull();
		virtual const std::string& getOptionalCsDb2LUWTableMembersValue();
		virtual const std::string* getOptionalCsDb2LUWTableMembersReference();
		virtual void setOptionalCsDb2LUWTableMembersNull();
		virtual void setOptionalCsDb2LUWTableMembersValue( const std::string& value );

		virtual bool isOptionalCsDb2LUWTableImplementationNull();
		virtual const std::string& getOptionalCsDb2LUWTableImplementationValue();
		virtual const std::string* getOptionalCsDb2LUWTableImplementationReference();
		virtual void setOptionalCsDb2LUWTableImplementationNull();
		virtual void setOptionalCsDb2LUWTableImplementationValue( const std::string& value );

		virtual bool isOptionalCsMSSqlTableUsingNull();
		virtual const std::string& getOptionalCsMSSqlTableUsingValue();
		virtual const std::string* getOptionalCsMSSqlTableUsingReference();
		virtual void setOptionalCsMSSqlTableUsingNull();
		virtual void setOptionalCsMSSqlTableUsingValue( const std::string& value );

		virtual bool isOptionalCsMSSqlTableMembersNull();
		virtual const std::string& getOptionalCsMSSqlTableMembersValue();
		virtual const std::string* getOptionalCsMSSqlTableMembersReference();
		virtual void setOptionalCsMSSqlTableMembersNull();
		virtual void setOptionalCsMSSqlTableMembersValue( const std::string& value );

		virtual bool isOptionalCsMSSqlTableImplementationNull();
		virtual const std::string& getOptionalCsMSSqlTableImplementationValue();
		virtual const std::string* getOptionalCsMSSqlTableImplementationReference();
		virtual void setOptionalCsMSSqlTableImplementationNull();
		virtual void setOptionalCsMSSqlTableImplementationValue( const std::string& value );

		virtual bool isOptionalCsMySqlTableUsingNull();
		virtual const std::string& getOptionalCsMySqlTableUsingValue();
		virtual const std::string* getOptionalCsMySqlTableUsingReference();
		virtual void setOptionalCsMySqlTableUsingNull();
		virtual void setOptionalCsMySqlTableUsingValue( const std::string& value );

		virtual bool isOptionalCsMySqlTableMembersNull();
		virtual const std::string& getOptionalCsMySqlTableMembersValue();
		virtual const std::string* getOptionalCsMySqlTableMembersReference();
		virtual void setOptionalCsMySqlTableMembersNull();
		virtual void setOptionalCsMySqlTableMembersValue( const std::string& value );

		virtual bool isOptionalCsMySqlTableImplementationNull();
		virtual const std::string& getOptionalCsMySqlTableImplementationValue();
		virtual const std::string* getOptionalCsMySqlTableImplementationReference();
		virtual void setOptionalCsMySqlTableImplementationNull();
		virtual void setOptionalCsMySqlTableImplementationValue( const std::string& value );

		virtual bool isOptionalCsOracleTableUsingNull();
		virtual const std::string& getOptionalCsOracleTableUsingValue();
		virtual const std::string* getOptionalCsOracleTableUsingReference();
		virtual void setOptionalCsOracleTableUsingNull();
		virtual void setOptionalCsOracleTableUsingValue( const std::string& value );

		virtual bool isOptionalCsOracleTableMembersNull();
		virtual const std::string& getOptionalCsOracleTableMembersValue();
		virtual const std::string* getOptionalCsOracleTableMembersReference();
		virtual void setOptionalCsOracleTableMembersNull();
		virtual void setOptionalCsOracleTableMembersValue( const std::string& value );

		virtual bool isOptionalCsOracleTableImplementationNull();
		virtual const std::string& getOptionalCsOracleTableImplementationValue();
		virtual const std::string* getOptionalCsOracleTableImplementationReference();
		virtual void setOptionalCsOracleTableImplementationNull();
		virtual void setOptionalCsOracleTableImplementationValue( const std::string& value );

		virtual bool isOptionalCsPgSqlTableUsingNull();
		virtual const std::string& getOptionalCsPgSqlTableUsingValue();
		virtual const std::string* getOptionalCsPgSqlTableUsingReference();
		virtual void setOptionalCsPgSqlTableUsingNull();
		virtual void setOptionalCsPgSqlTableUsingValue( const std::string& value );

		virtual bool isOptionalCsPgSqlTableMembersNull();
		virtual const std::string& getOptionalCsPgSqlTableMembersValue();
		virtual const std::string* getOptionalCsPgSqlTableMembersReference();
		virtual void setOptionalCsPgSqlTableMembersNull();
		virtual void setOptionalCsPgSqlTableMembersValue( const std::string& value );

		virtual bool isOptionalCsPgSqlTableImplementationNull();
		virtual const std::string& getOptionalCsPgSqlTableImplementationValue();
		virtual const std::string* getOptionalCsPgSqlTableImplementationReference();
		virtual void setOptionalCsPgSqlTableImplementationNull();
		virtual void setOptionalCsPgSqlTableImplementationValue( const std::string& value );

		virtual bool isOptionalCsRamTableUsingNull();
		virtual const std::string& getOptionalCsRamTableUsingValue();
		virtual const std::string* getOptionalCsRamTableUsingReference();
		virtual void setOptionalCsRamTableUsingNull();
		virtual void setOptionalCsRamTableUsingValue( const std::string& value );

		virtual bool isOptionalCsRamTableMembersNull();
		virtual const std::string& getOptionalCsRamTableMembersValue();
		virtual const std::string* getOptionalCsRamTableMembersReference();
		virtual void setOptionalCsRamTableMembersNull();
		virtual void setOptionalCsRamTableMembersValue( const std::string& value );

		virtual bool isOptionalCsRamTableImplementationNull();
		virtual const std::string& getOptionalCsRamTableImplementationValue();
		virtual const std::string* getOptionalCsRamTableImplementationReference();
		virtual void setOptionalCsRamTableImplementationNull();
		virtual void setOptionalCsRamTableImplementationValue( const std::string& value );

		virtual bool isOptionalCsSaxLoaderUsingNull();
		virtual const std::string& getOptionalCsSaxLoaderUsingValue();
		virtual const std::string* getOptionalCsSaxLoaderUsingReference();
		virtual void setOptionalCsSaxLoaderUsingNull();
		virtual void setOptionalCsSaxLoaderUsingValue( const std::string& value );

		virtual bool isOptionalCsSaxLoaderStartElementNull();
		virtual const std::string& getOptionalCsSaxLoaderStartElementValue();
		virtual const std::string* getOptionalCsSaxLoaderStartElementReference();
		virtual void setOptionalCsSaxLoaderStartElementNull();
		virtual void setOptionalCsSaxLoaderStartElementValue( const std::string& value );

		virtual bool isOptionalCsSaxLoaderEndElementNull();
		virtual const std::string& getOptionalCsSaxLoaderEndElementValue();
		virtual const std::string* getOptionalCsSaxLoaderEndElementReference();
		virtual void setOptionalCsSaxLoaderEndElementNull();
		virtual void setOptionalCsSaxLoaderEndElementValue( const std::string& value );

		virtual bool isOptionalCsXMsgTableUsingNull();
		virtual const std::string& getOptionalCsXMsgTableUsingValue();
		virtual const std::string* getOptionalCsXMsgTableUsingReference();
		virtual void setOptionalCsXMsgTableUsingNull();
		virtual void setOptionalCsXMsgTableUsingValue( const std::string& value );

		virtual bool isOptionalCsXMsgTableFormattersNull();
		virtual const std::string& getOptionalCsXMsgTableFormattersValue();
		virtual const std::string* getOptionalCsXMsgTableFormattersReference();
		virtual void setOptionalCsXMsgTableFormattersNull();
		virtual void setOptionalCsXMsgTableFormattersValue( const std::string& value );

		virtual bool isOptionalCsXMsgRqstTableUsingNull();
		virtual const std::string& getOptionalCsXMsgRqstTableUsingValue();
		virtual const std::string* getOptionalCsXMsgRqstTableUsingReference();
		virtual void setOptionalCsXMsgRqstTableUsingNull();
		virtual void setOptionalCsXMsgRqstTableUsingValue( const std::string& value );

		virtual bool isOptionalCsXMsgRspnTableUsingNull();
		virtual const std::string& getOptionalCsXMsgRspnTableUsingValue();
		virtual const std::string* getOptionalCsXMsgRspnTableUsingReference();
		virtual void setOptionalCsXMsgRspnTableUsingNull();
		virtual void setOptionalCsXMsgRspnTableUsingValue( const std::string& value );

		virtual bool isOptionalCsXMsgClientTableUsingNull();
		virtual const std::string& getOptionalCsXMsgClientTableUsingValue();
		virtual const std::string* getOptionalCsXMsgClientTableUsingReference();
		virtual void setOptionalCsXMsgClientTableUsingNull();
		virtual void setOptionalCsXMsgClientTableUsingValue( const std::string& value );

		virtual bool isOptionalCsXMsgRqstTableBodyNull();
		virtual const std::string& getOptionalCsXMsgRqstTableBodyValue();
		virtual const std::string* getOptionalCsXMsgRqstTableBodyReference();
		virtual void setOptionalCsXMsgRqstTableBodyNull();
		virtual void setOptionalCsXMsgRqstTableBodyValue( const std::string& value );

		virtual bool isOptionalCsXMsgRspnTableBodyNull();
		virtual const std::string& getOptionalCsXMsgRspnTableBodyValue();
		virtual const std::string* getOptionalCsXMsgRspnTableBodyReference();
		virtual void setOptionalCsXMsgRspnTableBodyNull();
		virtual void setOptionalCsXMsgRspnTableBodyValue( const std::string& value );

		virtual bool isOptionalCsXMsgClientTableBodyNull();
		virtual const std::string& getOptionalCsXMsgClientTableBodyValue();
		virtual const std::string* getOptionalCsXMsgClientTableBodyReference();
		virtual void setOptionalCsXMsgClientTableBodyNull();
		virtual void setOptionalCsXMsgClientTableBodyValue( const std::string& value );

		virtual cfbam::ICFBamSchemaDefObj* getRequiredContainerSchemaDef( bool forceRead = false );
		virtual void setRequiredContainerSchemaDef( cfbam::ICFBamSchemaDefObj* value );

		virtual cfbam::ICFBamSchemaDefObj* getOptionalLookupDefSchema( bool forceRead = false );
		virtual void setOptionalLookupDefSchema( cfbam::ICFBamSchemaDefObj* value );

		virtual std::vector<cfbam::ICFBamRelationObj*> getOptionalComponentsRelation( bool forceRead = false );

		virtual cfbam::ICFBamIndexObj* getOptionalLookupLookupIndex( bool forceRead = false );
		virtual void setOptionalLookupLookupIndex( cfbam::ICFBamIndexObj* value );

		virtual cfbam::ICFBamIndexObj* getOptionalLookupAltIndex( bool forceRead = false );
		virtual void setOptionalLookupAltIndex( cfbam::ICFBamIndexObj* value );

		virtual cfbam::ICFBamTableObj* getOptionalLookupQualTable( bool forceRead = false );
		virtual void setOptionalLookupQualTable( cfbam::ICFBamTableObj* value );

		virtual std::vector<cfbam::ICFBamIndexObj*> getOptionalComponentsIndex( bool forceRead = false );

		virtual cfbam::ICFBamIndexObj* getOptionalLookupPrimaryIndex( bool forceRead = false );
		virtual void setOptionalLookupPrimaryIndex( cfbam::ICFBamIndexObj* value );

		virtual std::vector<cfbam::ICFBamValueObj*> getOptionalComponentsColumns( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamRelationObj*> getOptionalChildrenReverseRelations( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamChainObj*> getOptionalComponentsChains( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamDelTopDepObj*> getOptionalComponentsDelDep( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamClearTopDepObj*> getOptionalComponentsClearDep( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamId16GenObj*> getOptionalChildrenDispId16Gen( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamId32GenObj*> getOptionalChildrenDispId32Gen( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamId64GenObj*> getOptionalChildrenDispId64Gen( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamServerMethodObj*> getOptionalComponentsServerMethods( bool forceRead = false );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

		public:
			virtual std::vector<cfbam::ICFBamRelationObj*> getOnlyOwnerRelations();
			virtual std::vector<cfbam::ICFBamRelationObj*> getContainerOwnerRelations();
			virtual cfbam::ICFBamRelationObj* getContainerRelation();
			virtual cfbam::ICFBamRelationObj* getInheritedContainerRelation();
			virtual cfbam::ICFBamRelationObj* getOwnerRelation();
			virtual cfbam::ICFBamRelationObj* getInheritedOwnerRelation();
			virtual std::vector<cfbam::ICFBamRelationObj*> getOwnerLookupRelations();
			virtual std::vector<cfbam::ICFBamRelationObj*> getOwnerContainerNamedLookupChainRelations();
			virtual std::vector<cfbam::ICFBamAtomObj*> getChildrenAtoms();
			virtual cfbam::ICFBamRelationObj* getSuperClassRelation();
			virtual std::vector<cfbam::ICFBamRelationObj*> getSubClassRelations();
			virtual cfbam::ICFBamIndexObj* getPrimaryKeyIndex();
			virtual std::vector<cfbam::ICFBamRelationObj*> getFactoryOwnerRelations();
			virtual std::vector<cfbam::ICFBamIndexObj*> getInheritedIndexes();
			virtual std::vector<cfbam::ICFBamIndexObj*> getChildrenIndexes();
			virtual std::vector<cfbam::ICFBamRelationObj*> getInheritedRelations();
			virtual std::vector<cfbam::ICFBamRelationObj*> getChildrenRelations();

	};
}
