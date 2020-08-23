#pragma once

// Description: C++18 edit object instance specification for CFBam SchemaDef.

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

	class CFBamSchemaDefEditObj
	: public CFBamScopeEditObj,
	  public virtual ICFBamSchemaDefEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFBamSchemaDefEditObj( cfbam::ICFBamSchemaDefObj* argOrig );
		virtual ~CFBamSchemaDefEditObj();

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

		virtual cfbam::ICFBamSchemaDefTableObj* getSchemaDefTable();

		virtual cfbam::ICFBamSchemaDefEditObj* getSchemaDefEdit();

		virtual ICFBamScopeEditObj* beginEdit();

		virtual cfbam::ICFBamSchemaDefObj* getOrigAsSchemaDef();

		virtual cfbam::CFBamScopeBuff* getBuff();
		virtual void setBuff( cfbam::CFBamScopeBuff* value );

		inline cfbam::CFBamSchemaDefBuff* getSchemaDefBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfbam::CFBamSchemaDefBuff*>( buff ) );
		};

		inline cfbam::CFBamSchemaDefBuff* getSchemaDefEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfbam::CFBamSchemaDefBuff*>( buff ) );
		};

		virtual const int64_t getRequiredMinorVersionId();
		virtual const int64_t* getRequiredMinorVersionIdReference();

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

		virtual const std::string& getRequiredCopyrightPeriod();
		virtual const std::string* getRequiredCopyrightPeriodReference();
		virtual void setRequiredCopyrightPeriod( const std::string& value );

		virtual const std::string& getRequiredCopyrightHolder();
		virtual const std::string* getRequiredCopyrightHolderReference();
		virtual void setRequiredCopyrightHolder( const std::string& value );

		virtual const std::string& getRequiredAuthorEMail();
		virtual const std::string* getRequiredAuthorEMailReference();
		virtual void setRequiredAuthorEMail( const std::string& value );

		virtual const std::string& getRequiredProjectURL();
		virtual const std::string* getRequiredProjectURLReference();
		virtual void setRequiredProjectURL( const std::string& value );

		virtual const std::string& getRequiredPublishURI();
		virtual const std::string* getRequiredPublishURIReference();
		virtual void setRequiredPublishURI( const std::string& value );

		virtual const std::string& getRequiredCommonLicenseCode();
		virtual const std::string* getRequiredCommonLicenseCodeReference();
		virtual void setRequiredCommonLicenseCode( const std::string& value );

		virtual const std::string& getRequiredCommonLicenseName();
		virtual const std::string* getRequiredCommonLicenseNameReference();
		virtual void setRequiredCommonLicenseName( const std::string& value );

		virtual const std::string& getRequiredCommonLicenseText();
		virtual const std::string* getRequiredCommonLicenseTextReference();
		virtual void setRequiredCommonLicenseText( const std::string& value );

		virtual bool isOptionalClientXFaceLicenseCodeNull();
		virtual const std::string& getOptionalClientXFaceLicenseCodeValue();
		virtual const std::string* getOptionalClientXFaceLicenseCodeReference();
		virtual void setOptionalClientXFaceLicenseCodeNull();
		virtual void setOptionalClientXFaceLicenseCodeValue( const std::string& value );

		virtual bool isOptionalClientXFaceLicenseNameNull();
		virtual const std::string& getOptionalClientXFaceLicenseNameValue();
		virtual const std::string* getOptionalClientXFaceLicenseNameReference();
		virtual void setOptionalClientXFaceLicenseNameNull();
		virtual void setOptionalClientXFaceLicenseNameValue( const std::string& value );

		virtual bool isOptionalClientXFaceLicenseTextNull();
		virtual const std::string& getOptionalClientXFaceLicenseTextValue();
		virtual const std::string* getOptionalClientXFaceLicenseTextReference();
		virtual void setOptionalClientXFaceLicenseTextNull();
		virtual void setOptionalClientXFaceLicenseTextValue( const std::string& value );

		virtual bool isOptionalClientImplLicenseCodeNull();
		virtual const std::string& getOptionalClientImplLicenseCodeValue();
		virtual const std::string* getOptionalClientImplLicenseCodeReference();
		virtual void setOptionalClientImplLicenseCodeNull();
		virtual void setOptionalClientImplLicenseCodeValue( const std::string& value );

		virtual bool isOptionalClientImplLicenseNameNull();
		virtual const std::string& getOptionalClientImplLicenseNameValue();
		virtual const std::string* getOptionalClientImplLicenseNameReference();
		virtual void setOptionalClientImplLicenseNameNull();
		virtual void setOptionalClientImplLicenseNameValue( const std::string& value );

		virtual bool isOptionalClientImplLicenseTextNull();
		virtual const std::string& getOptionalClientImplLicenseTextValue();
		virtual const std::string* getOptionalClientImplLicenseTextReference();
		virtual void setOptionalClientImplLicenseTextNull();
		virtual void setOptionalClientImplLicenseTextValue( const std::string& value );

		virtual bool isOptionalServerXFaceLicenseCodeNull();
		virtual const std::string& getOptionalServerXFaceLicenseCodeValue();
		virtual const std::string* getOptionalServerXFaceLicenseCodeReference();
		virtual void setOptionalServerXFaceLicenseCodeNull();
		virtual void setOptionalServerXFaceLicenseCodeValue( const std::string& value );

		virtual bool isOptionalServerXFaceLicenseNameNull();
		virtual const std::string& getOptionalServerXFaceLicenseNameValue();
		virtual const std::string* getOptionalServerXFaceLicenseNameReference();
		virtual void setOptionalServerXFaceLicenseNameNull();
		virtual void setOptionalServerXFaceLicenseNameValue( const std::string& value );

		virtual bool isOptionalServerXFaceLicenseTextNull();
		virtual const std::string& getOptionalServerXFaceLicenseTextValue();
		virtual const std::string* getOptionalServerXFaceLicenseTextReference();
		virtual void setOptionalServerXFaceLicenseTextNull();
		virtual void setOptionalServerXFaceLicenseTextValue( const std::string& value );

		virtual bool isOptionalServerImplLicenseCodeNull();
		virtual const std::string& getOptionalServerImplLicenseCodeValue();
		virtual const std::string* getOptionalServerImplLicenseCodeReference();
		virtual void setOptionalServerImplLicenseCodeNull();
		virtual void setOptionalServerImplLicenseCodeValue( const std::string& value );

		virtual bool isOptionalServerImplLicenseNameNull();
		virtual const std::string& getOptionalServerImplLicenseNameValue();
		virtual const std::string* getOptionalServerImplLicenseNameReference();
		virtual void setOptionalServerImplLicenseNameNull();
		virtual void setOptionalServerImplLicenseNameValue( const std::string& value );

		virtual bool isOptionalServerImplLicenseTextNull();
		virtual const std::string& getOptionalServerImplLicenseTextValue();
		virtual const std::string* getOptionalServerImplLicenseTextReference();
		virtual void setOptionalServerImplLicenseTextNull();
		virtual void setOptionalServerImplLicenseTextValue( const std::string& value );

		virtual bool isOptionalJSchemaObjImportNull();
		virtual const std::string& getOptionalJSchemaObjImportValue();
		virtual const std::string* getOptionalJSchemaObjImportReference();
		virtual void setOptionalJSchemaObjImportNull();
		virtual void setOptionalJSchemaObjImportValue( const std::string& value );

		virtual bool isOptionalJSchemaObjInterfaceNull();
		virtual const std::string& getOptionalJSchemaObjInterfaceValue();
		virtual const std::string* getOptionalJSchemaObjInterfaceReference();
		virtual void setOptionalJSchemaObjInterfaceNull();
		virtual void setOptionalJSchemaObjInterfaceValue( const std::string& value );

		virtual bool isOptionalJSchemaObjMembersNull();
		virtual const std::string& getOptionalJSchemaObjMembersValue();
		virtual const std::string* getOptionalJSchemaObjMembersReference();
		virtual void setOptionalJSchemaObjMembersNull();
		virtual void setOptionalJSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalJSchemaObjImplementationNull();
		virtual const std::string& getOptionalJSchemaObjImplementationValue();
		virtual const std::string* getOptionalJSchemaObjImplementationReference();
		virtual void setOptionalJSchemaObjImplementationNull();
		virtual void setOptionalJSchemaObjImplementationValue( const std::string& value );

		virtual bool isOptionalJDb2LUWSchemaObjMembersNull();
		virtual const std::string& getOptionalJDb2LUWSchemaObjMembersValue();
		virtual const std::string* getOptionalJDb2LUWSchemaObjMembersReference();
		virtual void setOptionalJDb2LUWSchemaObjMembersNull();
		virtual void setOptionalJDb2LUWSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalJDb2LUWSchemaObjImplNull();
		virtual const std::string& getOptionalJDb2LUWSchemaObjImplValue();
		virtual const std::string* getOptionalJDb2LUWSchemaObjImplReference();
		virtual void setOptionalJDb2LUWSchemaObjImplNull();
		virtual void setOptionalJDb2LUWSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalJDb2LUWSchemaObjImportNull();
		virtual const std::string& getOptionalJDb2LUWSchemaObjImportValue();
		virtual const std::string* getOptionalJDb2LUWSchemaObjImportReference();
		virtual void setOptionalJDb2LUWSchemaObjImportNull();
		virtual void setOptionalJDb2LUWSchemaObjImportValue( const std::string& value );

		virtual bool isOptionalJMSSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalJMSSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalJMSSqlSchemaObjMembersReference();
		virtual void setOptionalJMSSqlSchemaObjMembersNull();
		virtual void setOptionalJMSSqlSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalJMSSqlSchemaObjImplNull();
		virtual const std::string& getOptionalJMSSqlSchemaObjImplValue();
		virtual const std::string* getOptionalJMSSqlSchemaObjImplReference();
		virtual void setOptionalJMSSqlSchemaObjImplNull();
		virtual void setOptionalJMSSqlSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalJMSSqlSchemaObjImportNull();
		virtual const std::string& getOptionalJMSSqlSchemaObjImportValue();
		virtual const std::string* getOptionalJMSSqlSchemaObjImportReference();
		virtual void setOptionalJMSSqlSchemaObjImportNull();
		virtual void setOptionalJMSSqlSchemaObjImportValue( const std::string& value );

		virtual bool isOptionalJMySqlSchemaObjMembersNull();
		virtual const std::string& getOptionalJMySqlSchemaObjMembersValue();
		virtual const std::string* getOptionalJMySqlSchemaObjMembersReference();
		virtual void setOptionalJMySqlSchemaObjMembersNull();
		virtual void setOptionalJMySqlSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalJMySqlSchemaObjImplNull();
		virtual const std::string& getOptionalJMySqlSchemaObjImplValue();
		virtual const std::string* getOptionalJMySqlSchemaObjImplReference();
		virtual void setOptionalJMySqlSchemaObjImplNull();
		virtual void setOptionalJMySqlSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalJMySqlSchemaObjImportNull();
		virtual const std::string& getOptionalJMySqlSchemaObjImportValue();
		virtual const std::string* getOptionalJMySqlSchemaObjImportReference();
		virtual void setOptionalJMySqlSchemaObjImportNull();
		virtual void setOptionalJMySqlSchemaObjImportValue( const std::string& value );

		virtual bool isOptionalJOracleSchemaObjMembersNull();
		virtual const std::string& getOptionalJOracleSchemaObjMembersValue();
		virtual const std::string* getOptionalJOracleSchemaObjMembersReference();
		virtual void setOptionalJOracleSchemaObjMembersNull();
		virtual void setOptionalJOracleSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalJOracleSchemaObjImplNull();
		virtual const std::string& getOptionalJOracleSchemaObjImplValue();
		virtual const std::string* getOptionalJOracleSchemaObjImplReference();
		virtual void setOptionalJOracleSchemaObjImplNull();
		virtual void setOptionalJOracleSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalJOracleSchemaObjImportNull();
		virtual const std::string& getOptionalJOracleSchemaObjImportValue();
		virtual const std::string* getOptionalJOracleSchemaObjImportReference();
		virtual void setOptionalJOracleSchemaObjImportNull();
		virtual void setOptionalJOracleSchemaObjImportValue( const std::string& value );

		virtual bool isOptionalJPgSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalJPgSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalJPgSqlSchemaObjMembersReference();
		virtual void setOptionalJPgSqlSchemaObjMembersNull();
		virtual void setOptionalJPgSqlSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalJPgSqlSchemaObjImplNull();
		virtual const std::string& getOptionalJPgSqlSchemaObjImplValue();
		virtual const std::string* getOptionalJPgSqlSchemaObjImplReference();
		virtual void setOptionalJPgSqlSchemaObjImplNull();
		virtual void setOptionalJPgSqlSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalJPgSqlSchemaObjImportNull();
		virtual const std::string& getOptionalJPgSqlSchemaObjImportValue();
		virtual const std::string* getOptionalJPgSqlSchemaObjImportReference();
		virtual void setOptionalJPgSqlSchemaObjImportNull();
		virtual void setOptionalJPgSqlSchemaObjImportValue( const std::string& value );

		virtual bool isOptionalJRamSchemaObjMembersNull();
		virtual const std::string& getOptionalJRamSchemaObjMembersValue();
		virtual const std::string* getOptionalJRamSchemaObjMembersReference();
		virtual void setOptionalJRamSchemaObjMembersNull();
		virtual void setOptionalJRamSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalJRamSchemaObjImplNull();
		virtual const std::string& getOptionalJRamSchemaObjImplValue();
		virtual const std::string* getOptionalJRamSchemaObjImplReference();
		virtual void setOptionalJRamSchemaObjImplNull();
		virtual void setOptionalJRamSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalJRamSchemaObjImportNull();
		virtual const std::string& getOptionalJRamSchemaObjImportValue();
		virtual const std::string* getOptionalJRamSchemaObjImportReference();
		virtual void setOptionalJRamSchemaObjImportNull();
		virtual void setOptionalJRamSchemaObjImportValue( const std::string& value );

		virtual bool isOptionalJXMsgSchemaImportNull();
		virtual const std::string& getOptionalJXMsgSchemaImportValue();
		virtual const std::string* getOptionalJXMsgSchemaImportReference();
		virtual void setOptionalJXMsgSchemaImportNull();
		virtual void setOptionalJXMsgSchemaImportValue( const std::string& value );

		virtual bool isOptionalJXMsgSchemaFormattersNull();
		virtual const std::string& getOptionalJXMsgSchemaFormattersValue();
		virtual const std::string* getOptionalJXMsgSchemaFormattersReference();
		virtual void setOptionalJXMsgSchemaFormattersNull();
		virtual void setOptionalJXMsgSchemaFormattersValue( const std::string& value );

		virtual bool isOptionalJXMsgClientSchemaImportNull();
		virtual const std::string& getOptionalJXMsgClientSchemaImportValue();
		virtual const std::string* getOptionalJXMsgClientSchemaImportReference();
		virtual void setOptionalJXMsgClientSchemaImportNull();
		virtual void setOptionalJXMsgClientSchemaImportValue( const std::string& value );

		virtual bool isOptionalJXMsgClientSchemaBodyNull();
		virtual const std::string& getOptionalJXMsgClientSchemaBodyValue();
		virtual const std::string* getOptionalJXMsgClientSchemaBodyReference();
		virtual void setOptionalJXMsgClientSchemaBodyNull();
		virtual void setOptionalJXMsgClientSchemaBodyValue( const std::string& value );

		virtual bool isOptionalJXMsgRqstSchemaBodyNull();
		virtual const std::string& getOptionalJXMsgRqstSchemaBodyValue();
		virtual const std::string* getOptionalJXMsgRqstSchemaBodyReference();
		virtual void setOptionalJXMsgRqstSchemaBodyNull();
		virtual void setOptionalJXMsgRqstSchemaBodyValue( const std::string& value );

		virtual bool isOptionalJXMsgRqstSchemaImportNull();
		virtual const std::string& getOptionalJXMsgRqstSchemaImportValue();
		virtual const std::string* getOptionalJXMsgRqstSchemaImportReference();
		virtual void setOptionalJXMsgRqstSchemaImportNull();
		virtual void setOptionalJXMsgRqstSchemaImportValue( const std::string& value );

		virtual bool isOptionalJXMsgRqstSchemaWireParsersNull();
		virtual const std::string& getOptionalJXMsgRqstSchemaWireParsersValue();
		virtual const std::string* getOptionalJXMsgRqstSchemaWireParsersReference();
		virtual void setOptionalJXMsgRqstSchemaWireParsersNull();
		virtual void setOptionalJXMsgRqstSchemaWireParsersValue( const std::string& value );

		virtual bool isOptionalJXMsgRqstSchemaXsdSpecNull();
		virtual const std::string& getOptionalJXMsgRqstSchemaXsdSpecValue();
		virtual const std::string* getOptionalJXMsgRqstSchemaXsdSpecReference();
		virtual void setOptionalJXMsgRqstSchemaXsdSpecNull();
		virtual void setOptionalJXMsgRqstSchemaXsdSpecValue( const std::string& value );

		virtual bool isOptionalJXMsgRqstSchemaXsdElementListNull();
		virtual const std::string& getOptionalJXMsgRqstSchemaXsdElementListValue();
		virtual const std::string* getOptionalJXMsgRqstSchemaXsdElementListReference();
		virtual void setOptionalJXMsgRqstSchemaXsdElementListNull();
		virtual void setOptionalJXMsgRqstSchemaXsdElementListValue( const std::string& value );

		virtual bool isOptionalJXMsgRspnSchemaBodyNull();
		virtual const std::string& getOptionalJXMsgRspnSchemaBodyValue();
		virtual const std::string* getOptionalJXMsgRspnSchemaBodyReference();
		virtual void setOptionalJXMsgRspnSchemaBodyNull();
		virtual void setOptionalJXMsgRspnSchemaBodyValue( const std::string& value );

		virtual bool isOptionalJXMsgRspnSchemaImportNull();
		virtual const std::string& getOptionalJXMsgRspnSchemaImportValue();
		virtual const std::string* getOptionalJXMsgRspnSchemaImportReference();
		virtual void setOptionalJXMsgRspnSchemaImportNull();
		virtual void setOptionalJXMsgRspnSchemaImportValue( const std::string& value );

		virtual bool isOptionalJXMsgRspnSchemaWireParsersNull();
		virtual const std::string& getOptionalJXMsgRspnSchemaWireParsersValue();
		virtual const std::string* getOptionalJXMsgRspnSchemaWireParsersReference();
		virtual void setOptionalJXMsgRspnSchemaWireParsersNull();
		virtual void setOptionalJXMsgRspnSchemaWireParsersValue( const std::string& value );

		virtual bool isOptionalJXMsgRspnSchemaXsdElementListNull();
		virtual const std::string& getOptionalJXMsgRspnSchemaXsdElementListValue();
		virtual const std::string* getOptionalJXMsgRspnSchemaXsdElementListReference();
		virtual void setOptionalJXMsgRspnSchemaXsdElementListNull();
		virtual void setOptionalJXMsgRspnSchemaXsdElementListValue( const std::string& value );

		virtual bool isOptionalJXMsgRspnSchemaXsdSpecNull();
		virtual const std::string& getOptionalJXMsgRspnSchemaXsdSpecValue();
		virtual const std::string* getOptionalJXMsgRspnSchemaXsdSpecReference();
		virtual void setOptionalJXMsgRspnSchemaXsdSpecNull();
		virtual void setOptionalJXMsgRspnSchemaXsdSpecValue( const std::string& value );

		virtual bool isOptionalCppSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppSchemaObjIncludeReference();
		virtual void setOptionalCppSchemaObjIncludeNull();
		virtual void setOptionalCppSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalCppSchemaObjInterfaceNull();
		virtual const std::string& getOptionalCppSchemaObjInterfaceValue();
		virtual const std::string* getOptionalCppSchemaObjInterfaceReference();
		virtual void setOptionalCppSchemaObjInterfaceNull();
		virtual void setOptionalCppSchemaObjInterfaceValue( const std::string& value );

		virtual bool isOptionalCppSchemaObjMembersNull();
		virtual const std::string& getOptionalCppSchemaObjMembersValue();
		virtual const std::string* getOptionalCppSchemaObjMembersReference();
		virtual void setOptionalCppSchemaObjMembersNull();
		virtual void setOptionalCppSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCppSchemaObjImplementationNull();
		virtual const std::string& getOptionalCppSchemaObjImplementationValue();
		virtual const std::string* getOptionalCppSchemaObjImplementationReference();
		virtual void setOptionalCppSchemaObjImplementationNull();
		virtual void setOptionalCppSchemaObjImplementationValue( const std::string& value );

		virtual bool isOptionalCppDb2LUWSchemaObjMembersNull();
		virtual const std::string& getOptionalCppDb2LUWSchemaObjMembersValue();
		virtual const std::string* getOptionalCppDb2LUWSchemaObjMembersReference();
		virtual void setOptionalCppDb2LUWSchemaObjMembersNull();
		virtual void setOptionalCppDb2LUWSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCppDb2LUWSchemaObjImplNull();
		virtual const std::string& getOptionalCppDb2LUWSchemaObjImplValue();
		virtual const std::string* getOptionalCppDb2LUWSchemaObjImplReference();
		virtual void setOptionalCppDb2LUWSchemaObjImplNull();
		virtual void setOptionalCppDb2LUWSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalCppDb2LUWSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppDb2LUWSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppDb2LUWSchemaObjIncludeReference();
		virtual void setOptionalCppDb2LUWSchemaObjIncludeNull();
		virtual void setOptionalCppDb2LUWSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalCppMSSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalCppMSSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalCppMSSqlSchemaObjMembersReference();
		virtual void setOptionalCppMSSqlSchemaObjMembersNull();
		virtual void setOptionalCppMSSqlSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCppMSSqlSchemaObjImplNull();
		virtual const std::string& getOptionalCppMSSqlSchemaObjImplValue();
		virtual const std::string* getOptionalCppMSSqlSchemaObjImplReference();
		virtual void setOptionalCppMSSqlSchemaObjImplNull();
		virtual void setOptionalCppMSSqlSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalCppMSSqlSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppMSSqlSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppMSSqlSchemaObjIncludeReference();
		virtual void setOptionalCppMSSqlSchemaObjIncludeNull();
		virtual void setOptionalCppMSSqlSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalCppMySqlSchemaObjMembersNull();
		virtual const std::string& getOptionalCppMySqlSchemaObjMembersValue();
		virtual const std::string* getOptionalCppMySqlSchemaObjMembersReference();
		virtual void setOptionalCppMySqlSchemaObjMembersNull();
		virtual void setOptionalCppMySqlSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCppMySqlSchemaObjImplNull();
		virtual const std::string& getOptionalCppMySqlSchemaObjImplValue();
		virtual const std::string* getOptionalCppMySqlSchemaObjImplReference();
		virtual void setOptionalCppMySqlSchemaObjImplNull();
		virtual void setOptionalCppMySqlSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalCppMySqlSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppMySqlSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppMySqlSchemaObjIncludeReference();
		virtual void setOptionalCppMySqlSchemaObjIncludeNull();
		virtual void setOptionalCppMySqlSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalCppOracleSchemaObjMembersNull();
		virtual const std::string& getOptionalCppOracleSchemaObjMembersValue();
		virtual const std::string* getOptionalCppOracleSchemaObjMembersReference();
		virtual void setOptionalCppOracleSchemaObjMembersNull();
		virtual void setOptionalCppOracleSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCppOracleSchemaObjImplNull();
		virtual const std::string& getOptionalCppOracleSchemaObjImplValue();
		virtual const std::string* getOptionalCppOracleSchemaObjImplReference();
		virtual void setOptionalCppOracleSchemaObjImplNull();
		virtual void setOptionalCppOracleSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalCppOracleSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppOracleSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppOracleSchemaObjIncludeReference();
		virtual void setOptionalCppOracleSchemaObjIncludeNull();
		virtual void setOptionalCppOracleSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalCppPgSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalCppPgSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalCppPgSqlSchemaObjMembersReference();
		virtual void setOptionalCppPgSqlSchemaObjMembersNull();
		virtual void setOptionalCppPgSqlSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCppPgSqlSchemaObjImplNull();
		virtual const std::string& getOptionalCppPgSqlSchemaObjImplValue();
		virtual const std::string* getOptionalCppPgSqlSchemaObjImplReference();
		virtual void setOptionalCppPgSqlSchemaObjImplNull();
		virtual void setOptionalCppPgSqlSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalCppPgSqlSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppPgSqlSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppPgSqlSchemaObjIncludeReference();
		virtual void setOptionalCppPgSqlSchemaObjIncludeNull();
		virtual void setOptionalCppPgSqlSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalCppRamSchemaObjMembersNull();
		virtual const std::string& getOptionalCppRamSchemaObjMembersValue();
		virtual const std::string* getOptionalCppRamSchemaObjMembersReference();
		virtual void setOptionalCppRamSchemaObjMembersNull();
		virtual void setOptionalCppRamSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCppRamSchemaObjImplNull();
		virtual const std::string& getOptionalCppRamSchemaObjImplValue();
		virtual const std::string* getOptionalCppRamSchemaObjImplReference();
		virtual void setOptionalCppRamSchemaObjImplNull();
		virtual void setOptionalCppRamSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalCppRamSchemaObjIncludeNull();
		virtual const std::string& getOptionalCppRamSchemaObjIncludeValue();
		virtual const std::string* getOptionalCppRamSchemaObjIncludeReference();
		virtual void setOptionalCppRamSchemaObjIncludeNull();
		virtual void setOptionalCppRamSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalCppXMsgSchemaIncludeNull();
		virtual const std::string& getOptionalCppXMsgSchemaIncludeValue();
		virtual const std::string* getOptionalCppXMsgSchemaIncludeReference();
		virtual void setOptionalCppXMsgSchemaIncludeNull();
		virtual void setOptionalCppXMsgSchemaIncludeValue( const std::string& value );

		virtual bool isOptionalCppXMsgSchemaFormattersNull();
		virtual const std::string& getOptionalCppXMsgSchemaFormattersValue();
		virtual const std::string* getOptionalCppXMsgSchemaFormattersReference();
		virtual void setOptionalCppXMsgSchemaFormattersNull();
		virtual void setOptionalCppXMsgSchemaFormattersValue( const std::string& value );

		virtual bool isOptionalCppXMsgClientSchemaIncludeNull();
		virtual const std::string& getOptionalCppXMsgClientSchemaIncludeValue();
		virtual const std::string* getOptionalCppXMsgClientSchemaIncludeReference();
		virtual void setOptionalCppXMsgClientSchemaIncludeNull();
		virtual void setOptionalCppXMsgClientSchemaIncludeValue( const std::string& value );

		virtual bool isOptionalCppXMsgClientSchemaBodyNull();
		virtual const std::string& getOptionalCppXMsgClientSchemaBodyValue();
		virtual const std::string* getOptionalCppXMsgClientSchemaBodyReference();
		virtual void setOptionalCppXMsgClientSchemaBodyNull();
		virtual void setOptionalCppXMsgClientSchemaBodyValue( const std::string& value );

		virtual bool isOptionalCppXMsgRqstSchemaBodyNull();
		virtual const std::string& getOptionalCppXMsgRqstSchemaBodyValue();
		virtual const std::string* getOptionalCppXMsgRqstSchemaBodyReference();
		virtual void setOptionalCppXMsgRqstSchemaBodyNull();
		virtual void setOptionalCppXMsgRqstSchemaBodyValue( const std::string& value );

		virtual bool isOptionalCppXMsgRqstSchemaIncludeNull();
		virtual const std::string& getOptionalCppXMsgRqstSchemaIncludeValue();
		virtual const std::string* getOptionalCppXMsgRqstSchemaIncludeReference();
		virtual void setOptionalCppXMsgRqstSchemaIncludeNull();
		virtual void setOptionalCppXMsgRqstSchemaIncludeValue( const std::string& value );

		virtual bool isOptionalCppXMsgRqstSchemaWireParsersNull();
		virtual const std::string& getOptionalCppXMsgRqstSchemaWireParsersValue();
		virtual const std::string* getOptionalCppXMsgRqstSchemaWireParsersReference();
		virtual void setOptionalCppXMsgRqstSchemaWireParsersNull();
		virtual void setOptionalCppXMsgRqstSchemaWireParsersValue( const std::string& value );

		virtual bool isOptionalCppXMsgRqstSchemaXsdSpecNull();
		virtual const std::string& getOptionalCppXMsgRqstSchemaXsdSpecValue();
		virtual const std::string* getOptionalCppXMsgRqstSchemaXsdSpecReference();
		virtual void setOptionalCppXMsgRqstSchemaXsdSpecNull();
		virtual void setOptionalCppXMsgRqstSchemaXsdSpecValue( const std::string& value );

		virtual bool isOptionalCppXMsgRqstSchemaXsdElementListNull();
		virtual const std::string& getOptionalCppXMsgRqstSchemaXsdElementListValue();
		virtual const std::string* getOptionalCppXMsgRqstSchemaXsdElementListReference();
		virtual void setOptionalCppXMsgRqstSchemaXsdElementListNull();
		virtual void setOptionalCppXMsgRqstSchemaXsdElementListValue( const std::string& value );

		virtual bool isOptionalCppXMsgRspnSchemaBodyNull();
		virtual const std::string& getOptionalCppXMsgRspnSchemaBodyValue();
		virtual const std::string* getOptionalCppXMsgRspnSchemaBodyReference();
		virtual void setOptionalCppXMsgRspnSchemaBodyNull();
		virtual void setOptionalCppXMsgRspnSchemaBodyValue( const std::string& value );

		virtual bool isOptionalCppXMsgRspnSchemaIncludeNull();
		virtual const std::string& getOptionalCppXMsgRspnSchemaIncludeValue();
		virtual const std::string* getOptionalCppXMsgRspnSchemaIncludeReference();
		virtual void setOptionalCppXMsgRspnSchemaIncludeNull();
		virtual void setOptionalCppXMsgRspnSchemaIncludeValue( const std::string& value );

		virtual bool isOptionalCppXMsgRspnSchemaWireParsersNull();
		virtual const std::string& getOptionalCppXMsgRspnSchemaWireParsersValue();
		virtual const std::string* getOptionalCppXMsgRspnSchemaWireParsersReference();
		virtual void setOptionalCppXMsgRspnSchemaWireParsersNull();
		virtual void setOptionalCppXMsgRspnSchemaWireParsersValue( const std::string& value );

		virtual bool isOptionalCppXMsgRspnSchemaXsdElementListNull();
		virtual const std::string& getOptionalCppXMsgRspnSchemaXsdElementListValue();
		virtual const std::string* getOptionalCppXMsgRspnSchemaXsdElementListReference();
		virtual void setOptionalCppXMsgRspnSchemaXsdElementListNull();
		virtual void setOptionalCppXMsgRspnSchemaXsdElementListValue( const std::string& value );

		virtual bool isOptionalCppXMsgRspnSchemaXsdSpecNull();
		virtual const std::string& getOptionalCppXMsgRspnSchemaXsdSpecValue();
		virtual const std::string* getOptionalCppXMsgRspnSchemaXsdSpecReference();
		virtual void setOptionalCppXMsgRspnSchemaXsdSpecNull();
		virtual void setOptionalCppXMsgRspnSchemaXsdSpecValue( const std::string& value );

		virtual bool isOptionalHppSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppSchemaObjIncludeReference();
		virtual void setOptionalHppSchemaObjIncludeNull();
		virtual void setOptionalHppSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalHppSchemaObjInterfaceNull();
		virtual const std::string& getOptionalHppSchemaObjInterfaceValue();
		virtual const std::string* getOptionalHppSchemaObjInterfaceReference();
		virtual void setOptionalHppSchemaObjInterfaceNull();
		virtual void setOptionalHppSchemaObjInterfaceValue( const std::string& value );

		virtual bool isOptionalHppSchemaObjMembersNull();
		virtual const std::string& getOptionalHppSchemaObjMembersValue();
		virtual const std::string* getOptionalHppSchemaObjMembersReference();
		virtual void setOptionalHppSchemaObjMembersNull();
		virtual void setOptionalHppSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalHppSchemaObjImplementationNull();
		virtual const std::string& getOptionalHppSchemaObjImplementationValue();
		virtual const std::string* getOptionalHppSchemaObjImplementationReference();
		virtual void setOptionalHppSchemaObjImplementationNull();
		virtual void setOptionalHppSchemaObjImplementationValue( const std::string& value );

		virtual bool isOptionalHppDb2LUWSchemaObjMembersNull();
		virtual const std::string& getOptionalHppDb2LUWSchemaObjMembersValue();
		virtual const std::string* getOptionalHppDb2LUWSchemaObjMembersReference();
		virtual void setOptionalHppDb2LUWSchemaObjMembersNull();
		virtual void setOptionalHppDb2LUWSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalHppDb2LUWSchemaObjImplNull();
		virtual const std::string& getOptionalHppDb2LUWSchemaObjImplValue();
		virtual const std::string* getOptionalHppDb2LUWSchemaObjImplReference();
		virtual void setOptionalHppDb2LUWSchemaObjImplNull();
		virtual void setOptionalHppDb2LUWSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalHppDb2LUWSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppDb2LUWSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppDb2LUWSchemaObjIncludeReference();
		virtual void setOptionalHppDb2LUWSchemaObjIncludeNull();
		virtual void setOptionalHppDb2LUWSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalHppMSSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalHppMSSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalHppMSSqlSchemaObjMembersReference();
		virtual void setOptionalHppMSSqlSchemaObjMembersNull();
		virtual void setOptionalHppMSSqlSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalHppMSSqlSchemaObjImplNull();
		virtual const std::string& getOptionalHppMSSqlSchemaObjImplValue();
		virtual const std::string* getOptionalHppMSSqlSchemaObjImplReference();
		virtual void setOptionalHppMSSqlSchemaObjImplNull();
		virtual void setOptionalHppMSSqlSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalHppMSSqlSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppMSSqlSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppMSSqlSchemaObjIncludeReference();
		virtual void setOptionalHppMSSqlSchemaObjIncludeNull();
		virtual void setOptionalHppMSSqlSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalHppMySqlSchemaObjMembersNull();
		virtual const std::string& getOptionalHppMySqlSchemaObjMembersValue();
		virtual const std::string* getOptionalHppMySqlSchemaObjMembersReference();
		virtual void setOptionalHppMySqlSchemaObjMembersNull();
		virtual void setOptionalHppMySqlSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalHppMySqlSchemaObjImplNull();
		virtual const std::string& getOptionalHppMySqlSchemaObjImplValue();
		virtual const std::string* getOptionalHppMySqlSchemaObjImplReference();
		virtual void setOptionalHppMySqlSchemaObjImplNull();
		virtual void setOptionalHppMySqlSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalHppMySqlSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppMySqlSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppMySqlSchemaObjIncludeReference();
		virtual void setOptionalHppMySqlSchemaObjIncludeNull();
		virtual void setOptionalHppMySqlSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalHppOracleSchemaObjMembersNull();
		virtual const std::string& getOptionalHppOracleSchemaObjMembersValue();
		virtual const std::string* getOptionalHppOracleSchemaObjMembersReference();
		virtual void setOptionalHppOracleSchemaObjMembersNull();
		virtual void setOptionalHppOracleSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalHppOracleSchemaObjImplNull();
		virtual const std::string& getOptionalHppOracleSchemaObjImplValue();
		virtual const std::string* getOptionalHppOracleSchemaObjImplReference();
		virtual void setOptionalHppOracleSchemaObjImplNull();
		virtual void setOptionalHppOracleSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalHppOracleSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppOracleSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppOracleSchemaObjIncludeReference();
		virtual void setOptionalHppOracleSchemaObjIncludeNull();
		virtual void setOptionalHppOracleSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalHppPgSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalHppPgSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalHppPgSqlSchemaObjMembersReference();
		virtual void setOptionalHppPgSqlSchemaObjMembersNull();
		virtual void setOptionalHppPgSqlSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalHppPgSqlSchemaObjImplNull();
		virtual const std::string& getOptionalHppPgSqlSchemaObjImplValue();
		virtual const std::string* getOptionalHppPgSqlSchemaObjImplReference();
		virtual void setOptionalHppPgSqlSchemaObjImplNull();
		virtual void setOptionalHppPgSqlSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalHppPgSqlSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppPgSqlSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppPgSqlSchemaObjIncludeReference();
		virtual void setOptionalHppPgSqlSchemaObjIncludeNull();
		virtual void setOptionalHppPgSqlSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalHppRamSchemaObjMembersNull();
		virtual const std::string& getOptionalHppRamSchemaObjMembersValue();
		virtual const std::string* getOptionalHppRamSchemaObjMembersReference();
		virtual void setOptionalHppRamSchemaObjMembersNull();
		virtual void setOptionalHppRamSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalHppRamSchemaObjImplNull();
		virtual const std::string& getOptionalHppRamSchemaObjImplValue();
		virtual const std::string* getOptionalHppRamSchemaObjImplReference();
		virtual void setOptionalHppRamSchemaObjImplNull();
		virtual void setOptionalHppRamSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalHppRamSchemaObjIncludeNull();
		virtual const std::string& getOptionalHppRamSchemaObjIncludeValue();
		virtual const std::string* getOptionalHppRamSchemaObjIncludeReference();
		virtual void setOptionalHppRamSchemaObjIncludeNull();
		virtual void setOptionalHppRamSchemaObjIncludeValue( const std::string& value );

		virtual bool isOptionalHppXMsgSchemaIncludeNull();
		virtual const std::string& getOptionalHppXMsgSchemaIncludeValue();
		virtual const std::string* getOptionalHppXMsgSchemaIncludeReference();
		virtual void setOptionalHppXMsgSchemaIncludeNull();
		virtual void setOptionalHppXMsgSchemaIncludeValue( const std::string& value );

		virtual bool isOptionalHppXMsgSchemaFormattersNull();
		virtual const std::string& getOptionalHppXMsgSchemaFormattersValue();
		virtual const std::string* getOptionalHppXMsgSchemaFormattersReference();
		virtual void setOptionalHppXMsgSchemaFormattersNull();
		virtual void setOptionalHppXMsgSchemaFormattersValue( const std::string& value );

		virtual bool isOptionalHppXMsgClientSchemaIncludeNull();
		virtual const std::string& getOptionalHppXMsgClientSchemaIncludeValue();
		virtual const std::string* getOptionalHppXMsgClientSchemaIncludeReference();
		virtual void setOptionalHppXMsgClientSchemaIncludeNull();
		virtual void setOptionalHppXMsgClientSchemaIncludeValue( const std::string& value );

		virtual bool isOptionalHppXMsgClientSchemaBodyNull();
		virtual const std::string& getOptionalHppXMsgClientSchemaBodyValue();
		virtual const std::string* getOptionalHppXMsgClientSchemaBodyReference();
		virtual void setOptionalHppXMsgClientSchemaBodyNull();
		virtual void setOptionalHppXMsgClientSchemaBodyValue( const std::string& value );

		virtual bool isOptionalHppXMsgRqstSchemaBodyNull();
		virtual const std::string& getOptionalHppXMsgRqstSchemaBodyValue();
		virtual const std::string* getOptionalHppXMsgRqstSchemaBodyReference();
		virtual void setOptionalHppXMsgRqstSchemaBodyNull();
		virtual void setOptionalHppXMsgRqstSchemaBodyValue( const std::string& value );

		virtual bool isOptionalHppXMsgRqstSchemaIncludeNull();
		virtual const std::string& getOptionalHppXMsgRqstSchemaIncludeValue();
		virtual const std::string* getOptionalHppXMsgRqstSchemaIncludeReference();
		virtual void setOptionalHppXMsgRqstSchemaIncludeNull();
		virtual void setOptionalHppXMsgRqstSchemaIncludeValue( const std::string& value );

		virtual bool isOptionalHppXMsgRqstSchemaWireParsersNull();
		virtual const std::string& getOptionalHppXMsgRqstSchemaWireParsersValue();
		virtual const std::string* getOptionalHppXMsgRqstSchemaWireParsersReference();
		virtual void setOptionalHppXMsgRqstSchemaWireParsersNull();
		virtual void setOptionalHppXMsgRqstSchemaWireParsersValue( const std::string& value );

		virtual bool isOptionalHppXMsgRqstSchemaXsdSpecNull();
		virtual const std::string& getOptionalHppXMsgRqstSchemaXsdSpecValue();
		virtual const std::string* getOptionalHppXMsgRqstSchemaXsdSpecReference();
		virtual void setOptionalHppXMsgRqstSchemaXsdSpecNull();
		virtual void setOptionalHppXMsgRqstSchemaXsdSpecValue( const std::string& value );

		virtual bool isOptionalHppXMsgRqstSchemaXsdElementListNull();
		virtual const std::string& getOptionalHppXMsgRqstSchemaXsdElementListValue();
		virtual const std::string* getOptionalHppXMsgRqstSchemaXsdElementListReference();
		virtual void setOptionalHppXMsgRqstSchemaXsdElementListNull();
		virtual void setOptionalHppXMsgRqstSchemaXsdElementListValue( const std::string& value );

		virtual bool isOptionalHppXMsgRspnSchemaBodyNull();
		virtual const std::string& getOptionalHppXMsgRspnSchemaBodyValue();
		virtual const std::string* getOptionalHppXMsgRspnSchemaBodyReference();
		virtual void setOptionalHppXMsgRspnSchemaBodyNull();
		virtual void setOptionalHppXMsgRspnSchemaBodyValue( const std::string& value );

		virtual bool isOptionalHppXMsgRspnSchemaIncludeNull();
		virtual const std::string& getOptionalHppXMsgRspnSchemaIncludeValue();
		virtual const std::string* getOptionalHppXMsgRspnSchemaIncludeReference();
		virtual void setOptionalHppXMsgRspnSchemaIncludeNull();
		virtual void setOptionalHppXMsgRspnSchemaIncludeValue( const std::string& value );

		virtual bool isOptionalHppXMsgRspnSchemaWireParsersNull();
		virtual const std::string& getOptionalHppXMsgRspnSchemaWireParsersValue();
		virtual const std::string* getOptionalHppXMsgRspnSchemaWireParsersReference();
		virtual void setOptionalHppXMsgRspnSchemaWireParsersNull();
		virtual void setOptionalHppXMsgRspnSchemaWireParsersValue( const std::string& value );

		virtual bool isOptionalHppXMsgRspnSchemaXsdElementListNull();
		virtual const std::string& getOptionalHppXMsgRspnSchemaXsdElementListValue();
		virtual const std::string* getOptionalHppXMsgRspnSchemaXsdElementListReference();
		virtual void setOptionalHppXMsgRspnSchemaXsdElementListNull();
		virtual void setOptionalHppXMsgRspnSchemaXsdElementListValue( const std::string& value );

		virtual bool isOptionalHppXMsgRspnSchemaXsdSpecNull();
		virtual const std::string& getOptionalHppXMsgRspnSchemaXsdSpecValue();
		virtual const std::string* getOptionalHppXMsgRspnSchemaXsdSpecReference();
		virtual void setOptionalHppXMsgRspnSchemaXsdSpecNull();
		virtual void setOptionalHppXMsgRspnSchemaXsdSpecValue( const std::string& value );

		virtual bool isOptionalCsSchemaObjUsingNull();
		virtual const std::string& getOptionalCsSchemaObjUsingValue();
		virtual const std::string* getOptionalCsSchemaObjUsingReference();
		virtual void setOptionalCsSchemaObjUsingNull();
		virtual void setOptionalCsSchemaObjUsingValue( const std::string& value );

		virtual bool isOptionalCsSchemaObjInterfaceNull();
		virtual const std::string& getOptionalCsSchemaObjInterfaceValue();
		virtual const std::string* getOptionalCsSchemaObjInterfaceReference();
		virtual void setOptionalCsSchemaObjInterfaceNull();
		virtual void setOptionalCsSchemaObjInterfaceValue( const std::string& value );

		virtual bool isOptionalCsSchemaObjMembersNull();
		virtual const std::string& getOptionalCsSchemaObjMembersValue();
		virtual const std::string* getOptionalCsSchemaObjMembersReference();
		virtual void setOptionalCsSchemaObjMembersNull();
		virtual void setOptionalCsSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCsSchemaObjImplementationNull();
		virtual const std::string& getOptionalCsSchemaObjImplementationValue();
		virtual const std::string* getOptionalCsSchemaObjImplementationReference();
		virtual void setOptionalCsSchemaObjImplementationNull();
		virtual void setOptionalCsSchemaObjImplementationValue( const std::string& value );

		virtual bool isOptionalCsDb2LUWSchemaObjMembersNull();
		virtual const std::string& getOptionalCsDb2LUWSchemaObjMembersValue();
		virtual const std::string* getOptionalCsDb2LUWSchemaObjMembersReference();
		virtual void setOptionalCsDb2LUWSchemaObjMembersNull();
		virtual void setOptionalCsDb2LUWSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCsDb2LUWSchemaObjImplNull();
		virtual const std::string& getOptionalCsDb2LUWSchemaObjImplValue();
		virtual const std::string* getOptionalCsDb2LUWSchemaObjImplReference();
		virtual void setOptionalCsDb2LUWSchemaObjImplNull();
		virtual void setOptionalCsDb2LUWSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalCsDb2LUWSchemaObjUsingNull();
		virtual const std::string& getOptionalCsDb2LUWSchemaObjUsingValue();
		virtual const std::string* getOptionalCsDb2LUWSchemaObjUsingReference();
		virtual void setOptionalCsDb2LUWSchemaObjUsingNull();
		virtual void setOptionalCsDb2LUWSchemaObjUsingValue( const std::string& value );

		virtual bool isOptionalCsMSSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalCsMSSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalCsMSSqlSchemaObjMembersReference();
		virtual void setOptionalCsMSSqlSchemaObjMembersNull();
		virtual void setOptionalCsMSSqlSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCsMSSqlSchemaObjImplNull();
		virtual const std::string& getOptionalCsMSSqlSchemaObjImplValue();
		virtual const std::string* getOptionalCsMSSqlSchemaObjImplReference();
		virtual void setOptionalCsMSSqlSchemaObjImplNull();
		virtual void setOptionalCsMSSqlSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalCsMSSqlSchemaObjUsingNull();
		virtual const std::string& getOptionalCsMSSqlSchemaObjUsingValue();
		virtual const std::string* getOptionalCsMSSqlSchemaObjUsingReference();
		virtual void setOptionalCsMSSqlSchemaObjUsingNull();
		virtual void setOptionalCsMSSqlSchemaObjUsingValue( const std::string& value );

		virtual bool isOptionalCsMySqlSchemaObjMembersNull();
		virtual const std::string& getOptionalCsMySqlSchemaObjMembersValue();
		virtual const std::string* getOptionalCsMySqlSchemaObjMembersReference();
		virtual void setOptionalCsMySqlSchemaObjMembersNull();
		virtual void setOptionalCsMySqlSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCsMySqlSchemaObjImplNull();
		virtual const std::string& getOptionalCsMySqlSchemaObjImplValue();
		virtual const std::string* getOptionalCsMySqlSchemaObjImplReference();
		virtual void setOptionalCsMySqlSchemaObjImplNull();
		virtual void setOptionalCsMySqlSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalCsMySqlSchemaObjUsingNull();
		virtual const std::string& getOptionalCsMySqlSchemaObjUsingValue();
		virtual const std::string* getOptionalCsMySqlSchemaObjUsingReference();
		virtual void setOptionalCsMySqlSchemaObjUsingNull();
		virtual void setOptionalCsMySqlSchemaObjUsingValue( const std::string& value );

		virtual bool isOptionalCsOracleSchemaObjMembersNull();
		virtual const std::string& getOptionalCsOracleSchemaObjMembersValue();
		virtual const std::string* getOptionalCsOracleSchemaObjMembersReference();
		virtual void setOptionalCsOracleSchemaObjMembersNull();
		virtual void setOptionalCsOracleSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCsOracleSchemaObjImplNull();
		virtual const std::string& getOptionalCsOracleSchemaObjImplValue();
		virtual const std::string* getOptionalCsOracleSchemaObjImplReference();
		virtual void setOptionalCsOracleSchemaObjImplNull();
		virtual void setOptionalCsOracleSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalCsOracleSchemaObjUsingNull();
		virtual const std::string& getOptionalCsOracleSchemaObjUsingValue();
		virtual const std::string* getOptionalCsOracleSchemaObjUsingReference();
		virtual void setOptionalCsOracleSchemaObjUsingNull();
		virtual void setOptionalCsOracleSchemaObjUsingValue( const std::string& value );

		virtual bool isOptionalCsPgSqlSchemaObjMembersNull();
		virtual const std::string& getOptionalCsPgSqlSchemaObjMembersValue();
		virtual const std::string* getOptionalCsPgSqlSchemaObjMembersReference();
		virtual void setOptionalCsPgSqlSchemaObjMembersNull();
		virtual void setOptionalCsPgSqlSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCsPgSqlSchemaObjImplNull();
		virtual const std::string& getOptionalCsPgSqlSchemaObjImplValue();
		virtual const std::string* getOptionalCsPgSqlSchemaObjImplReference();
		virtual void setOptionalCsPgSqlSchemaObjImplNull();
		virtual void setOptionalCsPgSqlSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalCsPgSqlSchemaObjUsingNull();
		virtual const std::string& getOptionalCsPgSqlSchemaObjUsingValue();
		virtual const std::string* getOptionalCsPgSqlSchemaObjUsingReference();
		virtual void setOptionalCsPgSqlSchemaObjUsingNull();
		virtual void setOptionalCsPgSqlSchemaObjUsingValue( const std::string& value );

		virtual bool isOptionalCsRamSchemaObjMembersNull();
		virtual const std::string& getOptionalCsRamSchemaObjMembersValue();
		virtual const std::string* getOptionalCsRamSchemaObjMembersReference();
		virtual void setOptionalCsRamSchemaObjMembersNull();
		virtual void setOptionalCsRamSchemaObjMembersValue( const std::string& value );

		virtual bool isOptionalCsRamSchemaObjImplNull();
		virtual const std::string& getOptionalCsRamSchemaObjImplValue();
		virtual const std::string* getOptionalCsRamSchemaObjImplReference();
		virtual void setOptionalCsRamSchemaObjImplNull();
		virtual void setOptionalCsRamSchemaObjImplValue( const std::string& value );

		virtual bool isOptionalCsRamSchemaObjUsingNull();
		virtual const std::string& getOptionalCsRamSchemaObjUsingValue();
		virtual const std::string* getOptionalCsRamSchemaObjUsingReference();
		virtual void setOptionalCsRamSchemaObjUsingNull();
		virtual void setOptionalCsRamSchemaObjUsingValue( const std::string& value );

		virtual bool isOptionalCsXMsgSchemaUsingNull();
		virtual const std::string& getOptionalCsXMsgSchemaUsingValue();
		virtual const std::string* getOptionalCsXMsgSchemaUsingReference();
		virtual void setOptionalCsXMsgSchemaUsingNull();
		virtual void setOptionalCsXMsgSchemaUsingValue( const std::string& value );

		virtual bool isOptionalCsXMsgSchemaFormattersNull();
		virtual const std::string& getOptionalCsXMsgSchemaFormattersValue();
		virtual const std::string* getOptionalCsXMsgSchemaFormattersReference();
		virtual void setOptionalCsXMsgSchemaFormattersNull();
		virtual void setOptionalCsXMsgSchemaFormattersValue( const std::string& value );

		virtual bool isOptionalCsXMsgClientSchemaUsingNull();
		virtual const std::string& getOptionalCsXMsgClientSchemaUsingValue();
		virtual const std::string* getOptionalCsXMsgClientSchemaUsingReference();
		virtual void setOptionalCsXMsgClientSchemaUsingNull();
		virtual void setOptionalCsXMsgClientSchemaUsingValue( const std::string& value );

		virtual bool isOptionalCsXMsgClientSchemaBodyNull();
		virtual const std::string& getOptionalCsXMsgClientSchemaBodyValue();
		virtual const std::string* getOptionalCsXMsgClientSchemaBodyReference();
		virtual void setOptionalCsXMsgClientSchemaBodyNull();
		virtual void setOptionalCsXMsgClientSchemaBodyValue( const std::string& value );

		virtual bool isOptionalCsXMsgRqstSchemaBodyNull();
		virtual const std::string& getOptionalCsXMsgRqstSchemaBodyValue();
		virtual const std::string* getOptionalCsXMsgRqstSchemaBodyReference();
		virtual void setOptionalCsXMsgRqstSchemaBodyNull();
		virtual void setOptionalCsXMsgRqstSchemaBodyValue( const std::string& value );

		virtual bool isOptionalCsXMsgRqstSchemaUsingNull();
		virtual const std::string& getOptionalCsXMsgRqstSchemaUsingValue();
		virtual const std::string* getOptionalCsXMsgRqstSchemaUsingReference();
		virtual void setOptionalCsXMsgRqstSchemaUsingNull();
		virtual void setOptionalCsXMsgRqstSchemaUsingValue( const std::string& value );

		virtual bool isOptionalCsXMsgRqstSchemaWireParsersNull();
		virtual const std::string& getOptionalCsXMsgRqstSchemaWireParsersValue();
		virtual const std::string* getOptionalCsXMsgRqstSchemaWireParsersReference();
		virtual void setOptionalCsXMsgRqstSchemaWireParsersNull();
		virtual void setOptionalCsXMsgRqstSchemaWireParsersValue( const std::string& value );

		virtual bool isOptionalCsXMsgRqstSchemaXsdSpecNull();
		virtual const std::string& getOptionalCsXMsgRqstSchemaXsdSpecValue();
		virtual const std::string* getOptionalCsXMsgRqstSchemaXsdSpecReference();
		virtual void setOptionalCsXMsgRqstSchemaXsdSpecNull();
		virtual void setOptionalCsXMsgRqstSchemaXsdSpecValue( const std::string& value );

		virtual bool isOptionalCsXMsgRqstSchemaXsdElementListNull();
		virtual const std::string& getOptionalCsXMsgRqstSchemaXsdElementListValue();
		virtual const std::string* getOptionalCsXMsgRqstSchemaXsdElementListReference();
		virtual void setOptionalCsXMsgRqstSchemaXsdElementListNull();
		virtual void setOptionalCsXMsgRqstSchemaXsdElementListValue( const std::string& value );

		virtual bool isOptionalCsXMsgRspnSchemaBodyNull();
		virtual const std::string& getOptionalCsXMsgRspnSchemaBodyValue();
		virtual const std::string* getOptionalCsXMsgRspnSchemaBodyReference();
		virtual void setOptionalCsXMsgRspnSchemaBodyNull();
		virtual void setOptionalCsXMsgRspnSchemaBodyValue( const std::string& value );

		virtual bool isOptionalCsXMsgRspnSchemaUsingNull();
		virtual const std::string& getOptionalCsXMsgRspnSchemaUsingValue();
		virtual const std::string* getOptionalCsXMsgRspnSchemaUsingReference();
		virtual void setOptionalCsXMsgRspnSchemaUsingNull();
		virtual void setOptionalCsXMsgRspnSchemaUsingValue( const std::string& value );

		virtual bool isOptionalCsXMsgRspnSchemaWireParsersNull();
		virtual const std::string& getOptionalCsXMsgRspnSchemaWireParsersValue();
		virtual const std::string* getOptionalCsXMsgRspnSchemaWireParsersReference();
		virtual void setOptionalCsXMsgRspnSchemaWireParsersNull();
		virtual void setOptionalCsXMsgRspnSchemaWireParsersValue( const std::string& value );

		virtual bool isOptionalCsXMsgRspnSchemaXsdElementListNull();
		virtual const std::string& getOptionalCsXMsgRspnSchemaXsdElementListValue();
		virtual const std::string* getOptionalCsXMsgRspnSchemaXsdElementListReference();
		virtual void setOptionalCsXMsgRspnSchemaXsdElementListNull();
		virtual void setOptionalCsXMsgRspnSchemaXsdElementListValue( const std::string& value );

		virtual bool isOptionalCsXMsgRspnSchemaXsdSpecNull();
		virtual const std::string& getOptionalCsXMsgRspnSchemaXsdSpecValue();
		virtual const std::string* getOptionalCsXMsgRspnSchemaXsdSpecReference();
		virtual void setOptionalCsXMsgRspnSchemaXsdSpecNull();
		virtual void setOptionalCsXMsgRspnSchemaXsdSpecValue( const std::string& value );

		virtual cfint::ICFIntMinorVersionObj* getRequiredContainerMinorVersion( bool forceRead = false );
		virtual void setRequiredContainerMinorVersion( cfint::ICFIntMinorVersionObj* value );

		virtual std::vector<cfbam::ICFBamTableObj*> getOptionalComponentsTables( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamValueObj*> getOptionalComponentsTypes( bool forceRead = false );

		virtual std::vector<cfbam::ICFBamSchemaRefObj*> getOptionalComponentsSchemaRefs( bool forceRead = false );

		virtual cfsec::ICFSecTenantObj* getRequiredOwnerCTenant( bool forceRead = false );
		virtual void setRequiredOwnerCTenant( cfsec::ICFSecTenantObj* value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
