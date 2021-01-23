#pragma once

// Description: C++18 specification of a SchemaDef history buffer object.

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

#include <cfbam/CFBamHPKey.hpp>

#include <cfbam/CFBamScopeHBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>
namespace cfbam {

	class CFBamSchemaDefBuff;
	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamSchemaDefByCTenantIdxKey;
	class CFBamSchemaDefByMinorVersionIdxKey;
	class CFBamSchemaDefByUNameIdxKey;
	class CFBamSchemaDefByAuthEMailIdxKey;
	class CFBamSchemaDefByProjectURLIdxKey;
	class CFBamSchemaDefByPubURIIdxKey;

	class CFBamSchemaDefHBuff : public CFBamScopeHBuff

	{
	public:
		static const std::string CLASS_NAME;
	protected:
		int64_t requiredMinorVersionId;
		std::string* requiredName;
		std::string* optionalDbName;
		std::string* optionalShortName;
		std::string* optionalLabel;
		std::string* optionalShortDescription;
		std::string* optionalDescription;
		std::string* requiredCopyrightPeriod;
		std::string* requiredCopyrightHolder;
		std::string* requiredAuthorEMail;
		std::string* requiredProjectURL;
		std::string* requiredPublishURI;
		std::string* requiredCommonLicenseCode;
		std::string* requiredCommonLicenseName;
		std::string* requiredCommonLicenseText;
		std::string* optionalClientXFaceLicenseCode;
		std::string* optionalClientXFaceLicenseName;
		std::string* optionalClientXFaceLicenseText;
		std::string* optionalClientImplLicenseCode;
		std::string* optionalClientImplLicenseName;
		std::string* optionalClientImplLicenseText;
		std::string* optionalServerXFaceLicenseCode;
		std::string* optionalServerXFaceLicenseName;
		std::string* optionalServerXFaceLicenseText;
		std::string* optionalServerImplLicenseCode;
		std::string* optionalServerImplLicenseName;
		std::string* optionalServerImplLicenseText;
		std::string* optionalJSchemaObjImport;
		std::string* optionalJSchemaObjInterface;
		std::string* optionalJSchemaObjMembers;
		std::string* optionalJSchemaObjImplementation;
		std::string* optionalJDb2LUWSchemaObjMembers;
		std::string* optionalJDb2LUWSchemaObjImpl;
		std::string* optionalJDb2LUWSchemaObjImport;
		std::string* optionalJMSSqlSchemaObjMembers;
		std::string* optionalJMSSqlSchemaObjImpl;
		std::string* optionalJMSSqlSchemaObjImport;
		std::string* optionalJMySqlSchemaObjMembers;
		std::string* optionalJMySqlSchemaObjImpl;
		std::string* optionalJMySqlSchemaObjImport;
		std::string* optionalJOracleSchemaObjMembers;
		std::string* optionalJOracleSchemaObjImpl;
		std::string* optionalJOracleSchemaObjImport;
		std::string* optionalJPgSqlSchemaObjMembers;
		std::string* optionalJPgSqlSchemaObjImpl;
		std::string* optionalJPgSqlSchemaObjImport;
		std::string* optionalJRamSchemaObjMembers;
		std::string* optionalJRamSchemaObjImpl;
		std::string* optionalJRamSchemaObjImport;
		std::string* optionalJXMsgSchemaImport;
		std::string* optionalJXMsgSchemaFormatters;
		std::string* optionalJXMsgClientSchemaImport;
		std::string* optionalJXMsgClientSchemaBody;
		std::string* optionalJXMsgRqstSchemaBody;
		std::string* optionalJXMsgRqstSchemaImport;
		std::string* optionalJXMsgRqstSchemaWireParsers;
		std::string* optionalJXMsgRqstSchemaXsdSpec;
		std::string* optionalJXMsgRqstSchemaXsdElementList;
		std::string* optionalJXMsgRspnSchemaBody;
		std::string* optionalJXMsgRspnSchemaImport;
		std::string* optionalJXMsgRspnSchemaWireParsers;
		std::string* optionalJXMsgRspnSchemaXsdElementList;
		std::string* optionalJXMsgRspnSchemaXsdSpec;
		std::string* optionalCppSchemaObjInclude;
		std::string* optionalCppSchemaObjInterface;
		std::string* optionalCppSchemaObjMembers;
		std::string* optionalCppSchemaObjImplementation;
		std::string* optionalCppDb2LUWSchemaObjMembers;
		std::string* optionalCppDb2LUWSchemaObjImpl;
		std::string* optionalCppDb2LUWSchemaObjInclude;
		std::string* optionalCppMSSqlSchemaObjMembers;
		std::string* optionalCppMSSqlSchemaObjImpl;
		std::string* optionalCppMSSqlSchemaObjInclude;
		std::string* optionalCppMySqlSchemaObjMembers;
		std::string* optionalCppMySqlSchemaObjImpl;
		std::string* optionalCppMySqlSchemaObjInclude;
		std::string* optionalCppOracleSchemaObjMembers;
		std::string* optionalCppOracleSchemaObjImpl;
		std::string* optionalCppOracleSchemaObjInclude;
		std::string* optionalCppPgSqlSchemaObjMembers;
		std::string* optionalCppPgSqlSchemaObjImpl;
		std::string* optionalCppPgSqlSchemaObjInclude;
		std::string* optionalCppRamSchemaObjMembers;
		std::string* optionalCppRamSchemaObjImpl;
		std::string* optionalCppRamSchemaObjInclude;
		std::string* optionalCppXMsgSchemaInclude;
		std::string* optionalCppXMsgSchemaFormatters;
		std::string* optionalCppXMsgClientSchemaInclude;
		std::string* optionalCppXMsgClientSchemaBody;
		std::string* optionalCppXMsgRqstSchemaBody;
		std::string* optionalCppXMsgRqstSchemaInclude;
		std::string* optionalCppXMsgRqstSchemaWireParsers;
		std::string* optionalCppXMsgRqstSchemaXsdSpec;
		std::string* optionalCppXMsgRqstSchemaXsdElementList;
		std::string* optionalCppXMsgRspnSchemaBody;
		std::string* optionalCppXMsgRspnSchemaInclude;
		std::string* optionalCppXMsgRspnSchemaWireParsers;
		std::string* optionalCppXMsgRspnSchemaXsdElementList;
		std::string* optionalCppXMsgRspnSchemaXsdSpec;
		std::string* optionalHppSchemaObjInclude;
		std::string* optionalHppSchemaObjInterface;
		std::string* optionalHppSchemaObjMembers;
		std::string* optionalHppSchemaObjImplementation;
		std::string* optionalHppDb2LUWSchemaObjMembers;
		std::string* optionalHppDb2LUWSchemaObjImpl;
		std::string* optionalHppDb2LUWSchemaObjInclude;
		std::string* optionalHppMSSqlSchemaObjMembers;
		std::string* optionalHppMSSqlSchemaObjImpl;
		std::string* optionalHppMSSqlSchemaObjInclude;
		std::string* optionalHppMySqlSchemaObjMembers;
		std::string* optionalHppMySqlSchemaObjImpl;
		std::string* optionalHppMySqlSchemaObjInclude;
		std::string* optionalHppOracleSchemaObjMembers;
		std::string* optionalHppOracleSchemaObjImpl;
		std::string* optionalHppOracleSchemaObjInclude;
		std::string* optionalHppPgSqlSchemaObjMembers;
		std::string* optionalHppPgSqlSchemaObjImpl;
		std::string* optionalHppPgSqlSchemaObjInclude;
		std::string* optionalHppRamSchemaObjMembers;
		std::string* optionalHppRamSchemaObjImpl;
		std::string* optionalHppRamSchemaObjInclude;
		std::string* optionalHppXMsgSchemaInclude;
		std::string* optionalHppXMsgSchemaFormatters;
		std::string* optionalHppXMsgClientSchemaInclude;
		std::string* optionalHppXMsgClientSchemaBody;
		std::string* optionalHppXMsgRqstSchemaBody;
		std::string* optionalHppXMsgRqstSchemaInclude;
		std::string* optionalHppXMsgRqstSchemaWireParsers;
		std::string* optionalHppXMsgRqstSchemaXsdSpec;
		std::string* optionalHppXMsgRqstSchemaXsdElementList;
		std::string* optionalHppXMsgRspnSchemaBody;
		std::string* optionalHppXMsgRspnSchemaInclude;
		std::string* optionalHppXMsgRspnSchemaWireParsers;
		std::string* optionalHppXMsgRspnSchemaXsdElementList;
		std::string* optionalHppXMsgRspnSchemaXsdSpec;
		std::string* optionalCsSchemaObjUsing;
		std::string* optionalCsSchemaObjInterface;
		std::string* optionalCsSchemaObjMembers;
		std::string* optionalCsSchemaObjImplementation;
		std::string* optionalCsDb2LUWSchemaObjMembers;
		std::string* optionalCsDb2LUWSchemaObjImpl;
		std::string* optionalCsDb2LUWSchemaObjUsing;
		std::string* optionalCsMSSqlSchemaObjMembers;
		std::string* optionalCsMSSqlSchemaObjImpl;
		std::string* optionalCsMSSqlSchemaObjUsing;
		std::string* optionalCsMySqlSchemaObjMembers;
		std::string* optionalCsMySqlSchemaObjImpl;
		std::string* optionalCsMySqlSchemaObjUsing;
		std::string* optionalCsOracleSchemaObjMembers;
		std::string* optionalCsOracleSchemaObjImpl;
		std::string* optionalCsOracleSchemaObjUsing;
		std::string* optionalCsPgSqlSchemaObjMembers;
		std::string* optionalCsPgSqlSchemaObjImpl;
		std::string* optionalCsPgSqlSchemaObjUsing;
		std::string* optionalCsRamSchemaObjMembers;
		std::string* optionalCsRamSchemaObjImpl;
		std::string* optionalCsRamSchemaObjUsing;
		std::string* optionalCsXMsgSchemaUsing;
		std::string* optionalCsXMsgSchemaFormatters;
		std::string* optionalCsXMsgClientSchemaUsing;
		std::string* optionalCsXMsgClientSchemaBody;
		std::string* optionalCsXMsgRqstSchemaBody;
		std::string* optionalCsXMsgRqstSchemaUsing;
		std::string* optionalCsXMsgRqstSchemaWireParsers;
		std::string* optionalCsXMsgRqstSchemaXsdSpec;
		std::string* optionalCsXMsgRqstSchemaXsdElementList;
		std::string* optionalCsXMsgRspnSchemaBody;
		std::string* optionalCsXMsgRspnSchemaUsing;
		std::string* optionalCsXMsgRspnSchemaWireParsers;
		std::string* optionalCsXMsgRspnSchemaXsdElementList;
		std::string* optionalCsXMsgRspnSchemaXsdSpec;
	public:
		CFBamSchemaDefHBuff();
		CFBamSchemaDefHBuff( const CFBamSchemaDefHBuff& src );
		virtual ~CFBamSchemaDefHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
		virtual const int64_t getRequiredMinorVersionId() const;
		virtual const int64_t* getRequiredMinorVersionIdReference() const;
		virtual void setRequiredMinorVersionId( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual const std::string& getOptionalDbNameValue() const;
		virtual const std::string* getOptionalDbNameReference() const;
		virtual const bool isOptionalDbNameNull() const;
		virtual void setOptionalDbNameNull();
		virtual void setOptionalDbNameValue( const std::string& value );

		virtual const std::string& getOptionalShortNameValue() const;
		virtual const std::string* getOptionalShortNameReference() const;
		virtual const bool isOptionalShortNameNull() const;
		virtual void setOptionalShortNameNull();
		virtual void setOptionalShortNameValue( const std::string& value );

		virtual const std::string& getOptionalLabelValue() const;
		virtual const std::string* getOptionalLabelReference() const;
		virtual const bool isOptionalLabelNull() const;
		virtual void setOptionalLabelNull();
		virtual void setOptionalLabelValue( const std::string& value );

		virtual const std::string& getOptionalShortDescriptionValue() const;
		virtual const std::string* getOptionalShortDescriptionReference() const;
		virtual const bool isOptionalShortDescriptionNull() const;
		virtual void setOptionalShortDescriptionNull();
		virtual void setOptionalShortDescriptionValue( const std::string& value );

		virtual const std::string& getOptionalDescriptionValue() const;
		virtual const std::string* getOptionalDescriptionReference() const;
		virtual const bool isOptionalDescriptionNull() const;
		virtual void setOptionalDescriptionNull();
		virtual void setOptionalDescriptionValue( const std::string& value );

		virtual const std::string& getRequiredCopyrightPeriod() const;
		virtual const std::string* getRequiredCopyrightPeriodReference() const;
		virtual void setRequiredCopyrightPeriod( const std::string& value );

		virtual const std::string& getRequiredCopyrightHolder() const;
		virtual const std::string* getRequiredCopyrightHolderReference() const;
		virtual void setRequiredCopyrightHolder( const std::string& value );

		virtual const std::string& getRequiredAuthorEMail() const;
		virtual const std::string* getRequiredAuthorEMailReference() const;
		virtual void setRequiredAuthorEMail( const std::string& value );

		virtual const std::string& getRequiredProjectURL() const;
		virtual const std::string* getRequiredProjectURLReference() const;
		virtual void setRequiredProjectURL( const std::string& value );

		virtual const std::string& getRequiredPublishURI() const;
		virtual const std::string* getRequiredPublishURIReference() const;
		virtual void setRequiredPublishURI( const std::string& value );

		virtual const std::string& getRequiredCommonLicenseCode() const;
		virtual const std::string* getRequiredCommonLicenseCodeReference() const;
		virtual void setRequiredCommonLicenseCode( const std::string& value );

		virtual const std::string& getRequiredCommonLicenseName() const;
		virtual const std::string* getRequiredCommonLicenseNameReference() const;
		virtual void setRequiredCommonLicenseName( const std::string& value );

		virtual const std::string& getRequiredCommonLicenseText() const;
		virtual const std::string* getRequiredCommonLicenseTextReference() const;
		virtual void setRequiredCommonLicenseText( const std::string& value );

		virtual const std::string& getOptionalClientXFaceLicenseCodeValue() const;
		virtual const std::string* getOptionalClientXFaceLicenseCodeReference() const;
		virtual const bool isOptionalClientXFaceLicenseCodeNull() const;
		virtual void setOptionalClientXFaceLicenseCodeNull();
		virtual void setOptionalClientXFaceLicenseCodeValue( const std::string& value );

		virtual const std::string& getOptionalClientXFaceLicenseNameValue() const;
		virtual const std::string* getOptionalClientXFaceLicenseNameReference() const;
		virtual const bool isOptionalClientXFaceLicenseNameNull() const;
		virtual void setOptionalClientXFaceLicenseNameNull();
		virtual void setOptionalClientXFaceLicenseNameValue( const std::string& value );

		virtual const std::string& getOptionalClientXFaceLicenseTextValue() const;
		virtual const std::string* getOptionalClientXFaceLicenseTextReference() const;
		virtual const bool isOptionalClientXFaceLicenseTextNull() const;
		virtual void setOptionalClientXFaceLicenseTextNull();
		virtual void setOptionalClientXFaceLicenseTextValue( const std::string& value );

		virtual const std::string& getOptionalClientImplLicenseCodeValue() const;
		virtual const std::string* getOptionalClientImplLicenseCodeReference() const;
		virtual const bool isOptionalClientImplLicenseCodeNull() const;
		virtual void setOptionalClientImplLicenseCodeNull();
		virtual void setOptionalClientImplLicenseCodeValue( const std::string& value );

		virtual const std::string& getOptionalClientImplLicenseNameValue() const;
		virtual const std::string* getOptionalClientImplLicenseNameReference() const;
		virtual const bool isOptionalClientImplLicenseNameNull() const;
		virtual void setOptionalClientImplLicenseNameNull();
		virtual void setOptionalClientImplLicenseNameValue( const std::string& value );

		virtual const std::string& getOptionalClientImplLicenseTextValue() const;
		virtual const std::string* getOptionalClientImplLicenseTextReference() const;
		virtual const bool isOptionalClientImplLicenseTextNull() const;
		virtual void setOptionalClientImplLicenseTextNull();
		virtual void setOptionalClientImplLicenseTextValue( const std::string& value );

		virtual const std::string& getOptionalServerXFaceLicenseCodeValue() const;
		virtual const std::string* getOptionalServerXFaceLicenseCodeReference() const;
		virtual const bool isOptionalServerXFaceLicenseCodeNull() const;
		virtual void setOptionalServerXFaceLicenseCodeNull();
		virtual void setOptionalServerXFaceLicenseCodeValue( const std::string& value );

		virtual const std::string& getOptionalServerXFaceLicenseNameValue() const;
		virtual const std::string* getOptionalServerXFaceLicenseNameReference() const;
		virtual const bool isOptionalServerXFaceLicenseNameNull() const;
		virtual void setOptionalServerXFaceLicenseNameNull();
		virtual void setOptionalServerXFaceLicenseNameValue( const std::string& value );

		virtual const std::string& getOptionalServerXFaceLicenseTextValue() const;
		virtual const std::string* getOptionalServerXFaceLicenseTextReference() const;
		virtual const bool isOptionalServerXFaceLicenseTextNull() const;
		virtual void setOptionalServerXFaceLicenseTextNull();
		virtual void setOptionalServerXFaceLicenseTextValue( const std::string& value );

		virtual const std::string& getOptionalServerImplLicenseCodeValue() const;
		virtual const std::string* getOptionalServerImplLicenseCodeReference() const;
		virtual const bool isOptionalServerImplLicenseCodeNull() const;
		virtual void setOptionalServerImplLicenseCodeNull();
		virtual void setOptionalServerImplLicenseCodeValue( const std::string& value );

		virtual const std::string& getOptionalServerImplLicenseNameValue() const;
		virtual const std::string* getOptionalServerImplLicenseNameReference() const;
		virtual const bool isOptionalServerImplLicenseNameNull() const;
		virtual void setOptionalServerImplLicenseNameNull();
		virtual void setOptionalServerImplLicenseNameValue( const std::string& value );

		virtual const std::string& getOptionalServerImplLicenseTextValue() const;
		virtual const std::string* getOptionalServerImplLicenseTextReference() const;
		virtual const bool isOptionalServerImplLicenseTextNull() const;
		virtual void setOptionalServerImplLicenseTextNull();
		virtual void setOptionalServerImplLicenseTextValue( const std::string& value );

		virtual const std::string& getOptionalJSchemaObjImportValue() const;
		virtual const std::string* getOptionalJSchemaObjImportReference() const;
		virtual const bool isOptionalJSchemaObjImportNull() const;
		virtual void setOptionalJSchemaObjImportNull();
		virtual void setOptionalJSchemaObjImportValue( const std::string& value );

		virtual const std::string& getOptionalJSchemaObjInterfaceValue() const;
		virtual const std::string* getOptionalJSchemaObjInterfaceReference() const;
		virtual const bool isOptionalJSchemaObjInterfaceNull() const;
		virtual void setOptionalJSchemaObjInterfaceNull();
		virtual void setOptionalJSchemaObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalJSchemaObjMembersValue() const;
		virtual const std::string* getOptionalJSchemaObjMembersReference() const;
		virtual const bool isOptionalJSchemaObjMembersNull() const;
		virtual void setOptionalJSchemaObjMembersNull();
		virtual void setOptionalJSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalJSchemaObjImplementationValue() const;
		virtual const std::string* getOptionalJSchemaObjImplementationReference() const;
		virtual const bool isOptionalJSchemaObjImplementationNull() const;
		virtual void setOptionalJSchemaObjImplementationNull();
		virtual void setOptionalJSchemaObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalJDb2LUWSchemaObjMembersValue() const;
		virtual const std::string* getOptionalJDb2LUWSchemaObjMembersReference() const;
		virtual const bool isOptionalJDb2LUWSchemaObjMembersNull() const;
		virtual void setOptionalJDb2LUWSchemaObjMembersNull();
		virtual void setOptionalJDb2LUWSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalJDb2LUWSchemaObjImplValue() const;
		virtual const std::string* getOptionalJDb2LUWSchemaObjImplReference() const;
		virtual const bool isOptionalJDb2LUWSchemaObjImplNull() const;
		virtual void setOptionalJDb2LUWSchemaObjImplNull();
		virtual void setOptionalJDb2LUWSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalJDb2LUWSchemaObjImportValue() const;
		virtual const std::string* getOptionalJDb2LUWSchemaObjImportReference() const;
		virtual const bool isOptionalJDb2LUWSchemaObjImportNull() const;
		virtual void setOptionalJDb2LUWSchemaObjImportNull();
		virtual void setOptionalJDb2LUWSchemaObjImportValue( const std::string& value );

		virtual const std::string& getOptionalJMSSqlSchemaObjMembersValue() const;
		virtual const std::string* getOptionalJMSSqlSchemaObjMembersReference() const;
		virtual const bool isOptionalJMSSqlSchemaObjMembersNull() const;
		virtual void setOptionalJMSSqlSchemaObjMembersNull();
		virtual void setOptionalJMSSqlSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalJMSSqlSchemaObjImplValue() const;
		virtual const std::string* getOptionalJMSSqlSchemaObjImplReference() const;
		virtual const bool isOptionalJMSSqlSchemaObjImplNull() const;
		virtual void setOptionalJMSSqlSchemaObjImplNull();
		virtual void setOptionalJMSSqlSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalJMSSqlSchemaObjImportValue() const;
		virtual const std::string* getOptionalJMSSqlSchemaObjImportReference() const;
		virtual const bool isOptionalJMSSqlSchemaObjImportNull() const;
		virtual void setOptionalJMSSqlSchemaObjImportNull();
		virtual void setOptionalJMSSqlSchemaObjImportValue( const std::string& value );

		virtual const std::string& getOptionalJMySqlSchemaObjMembersValue() const;
		virtual const std::string* getOptionalJMySqlSchemaObjMembersReference() const;
		virtual const bool isOptionalJMySqlSchemaObjMembersNull() const;
		virtual void setOptionalJMySqlSchemaObjMembersNull();
		virtual void setOptionalJMySqlSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalJMySqlSchemaObjImplValue() const;
		virtual const std::string* getOptionalJMySqlSchemaObjImplReference() const;
		virtual const bool isOptionalJMySqlSchemaObjImplNull() const;
		virtual void setOptionalJMySqlSchemaObjImplNull();
		virtual void setOptionalJMySqlSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalJMySqlSchemaObjImportValue() const;
		virtual const std::string* getOptionalJMySqlSchemaObjImportReference() const;
		virtual const bool isOptionalJMySqlSchemaObjImportNull() const;
		virtual void setOptionalJMySqlSchemaObjImportNull();
		virtual void setOptionalJMySqlSchemaObjImportValue( const std::string& value );

		virtual const std::string& getOptionalJOracleSchemaObjMembersValue() const;
		virtual const std::string* getOptionalJOracleSchemaObjMembersReference() const;
		virtual const bool isOptionalJOracleSchemaObjMembersNull() const;
		virtual void setOptionalJOracleSchemaObjMembersNull();
		virtual void setOptionalJOracleSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalJOracleSchemaObjImplValue() const;
		virtual const std::string* getOptionalJOracleSchemaObjImplReference() const;
		virtual const bool isOptionalJOracleSchemaObjImplNull() const;
		virtual void setOptionalJOracleSchemaObjImplNull();
		virtual void setOptionalJOracleSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalJOracleSchemaObjImportValue() const;
		virtual const std::string* getOptionalJOracleSchemaObjImportReference() const;
		virtual const bool isOptionalJOracleSchemaObjImportNull() const;
		virtual void setOptionalJOracleSchemaObjImportNull();
		virtual void setOptionalJOracleSchemaObjImportValue( const std::string& value );

		virtual const std::string& getOptionalJPgSqlSchemaObjMembersValue() const;
		virtual const std::string* getOptionalJPgSqlSchemaObjMembersReference() const;
		virtual const bool isOptionalJPgSqlSchemaObjMembersNull() const;
		virtual void setOptionalJPgSqlSchemaObjMembersNull();
		virtual void setOptionalJPgSqlSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalJPgSqlSchemaObjImplValue() const;
		virtual const std::string* getOptionalJPgSqlSchemaObjImplReference() const;
		virtual const bool isOptionalJPgSqlSchemaObjImplNull() const;
		virtual void setOptionalJPgSqlSchemaObjImplNull();
		virtual void setOptionalJPgSqlSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalJPgSqlSchemaObjImportValue() const;
		virtual const std::string* getOptionalJPgSqlSchemaObjImportReference() const;
		virtual const bool isOptionalJPgSqlSchemaObjImportNull() const;
		virtual void setOptionalJPgSqlSchemaObjImportNull();
		virtual void setOptionalJPgSqlSchemaObjImportValue( const std::string& value );

		virtual const std::string& getOptionalJRamSchemaObjMembersValue() const;
		virtual const std::string* getOptionalJRamSchemaObjMembersReference() const;
		virtual const bool isOptionalJRamSchemaObjMembersNull() const;
		virtual void setOptionalJRamSchemaObjMembersNull();
		virtual void setOptionalJRamSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalJRamSchemaObjImplValue() const;
		virtual const std::string* getOptionalJRamSchemaObjImplReference() const;
		virtual const bool isOptionalJRamSchemaObjImplNull() const;
		virtual void setOptionalJRamSchemaObjImplNull();
		virtual void setOptionalJRamSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalJRamSchemaObjImportValue() const;
		virtual const std::string* getOptionalJRamSchemaObjImportReference() const;
		virtual const bool isOptionalJRamSchemaObjImportNull() const;
		virtual void setOptionalJRamSchemaObjImportNull();
		virtual void setOptionalJRamSchemaObjImportValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgSchemaImportValue() const;
		virtual const std::string* getOptionalJXMsgSchemaImportReference() const;
		virtual const bool isOptionalJXMsgSchemaImportNull() const;
		virtual void setOptionalJXMsgSchemaImportNull();
		virtual void setOptionalJXMsgSchemaImportValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgSchemaFormattersValue() const;
		virtual const std::string* getOptionalJXMsgSchemaFormattersReference() const;
		virtual const bool isOptionalJXMsgSchemaFormattersNull() const;
		virtual void setOptionalJXMsgSchemaFormattersNull();
		virtual void setOptionalJXMsgSchemaFormattersValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgClientSchemaImportValue() const;
		virtual const std::string* getOptionalJXMsgClientSchemaImportReference() const;
		virtual const bool isOptionalJXMsgClientSchemaImportNull() const;
		virtual void setOptionalJXMsgClientSchemaImportNull();
		virtual void setOptionalJXMsgClientSchemaImportValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgClientSchemaBodyValue() const;
		virtual const std::string* getOptionalJXMsgClientSchemaBodyReference() const;
		virtual const bool isOptionalJXMsgClientSchemaBodyNull() const;
		virtual void setOptionalJXMsgClientSchemaBodyNull();
		virtual void setOptionalJXMsgClientSchemaBodyValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRqstSchemaBodyValue() const;
		virtual const std::string* getOptionalJXMsgRqstSchemaBodyReference() const;
		virtual const bool isOptionalJXMsgRqstSchemaBodyNull() const;
		virtual void setOptionalJXMsgRqstSchemaBodyNull();
		virtual void setOptionalJXMsgRqstSchemaBodyValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRqstSchemaImportValue() const;
		virtual const std::string* getOptionalJXMsgRqstSchemaImportReference() const;
		virtual const bool isOptionalJXMsgRqstSchemaImportNull() const;
		virtual void setOptionalJXMsgRqstSchemaImportNull();
		virtual void setOptionalJXMsgRqstSchemaImportValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRqstSchemaWireParsersValue() const;
		virtual const std::string* getOptionalJXMsgRqstSchemaWireParsersReference() const;
		virtual const bool isOptionalJXMsgRqstSchemaWireParsersNull() const;
		virtual void setOptionalJXMsgRqstSchemaWireParsersNull();
		virtual void setOptionalJXMsgRqstSchemaWireParsersValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRqstSchemaXsdSpecValue() const;
		virtual const std::string* getOptionalJXMsgRqstSchemaXsdSpecReference() const;
		virtual const bool isOptionalJXMsgRqstSchemaXsdSpecNull() const;
		virtual void setOptionalJXMsgRqstSchemaXsdSpecNull();
		virtual void setOptionalJXMsgRqstSchemaXsdSpecValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRqstSchemaXsdElementListValue() const;
		virtual const std::string* getOptionalJXMsgRqstSchemaXsdElementListReference() const;
		virtual const bool isOptionalJXMsgRqstSchemaXsdElementListNull() const;
		virtual void setOptionalJXMsgRqstSchemaXsdElementListNull();
		virtual void setOptionalJXMsgRqstSchemaXsdElementListValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRspnSchemaBodyValue() const;
		virtual const std::string* getOptionalJXMsgRspnSchemaBodyReference() const;
		virtual const bool isOptionalJXMsgRspnSchemaBodyNull() const;
		virtual void setOptionalJXMsgRspnSchemaBodyNull();
		virtual void setOptionalJXMsgRspnSchemaBodyValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRspnSchemaImportValue() const;
		virtual const std::string* getOptionalJXMsgRspnSchemaImportReference() const;
		virtual const bool isOptionalJXMsgRspnSchemaImportNull() const;
		virtual void setOptionalJXMsgRspnSchemaImportNull();
		virtual void setOptionalJXMsgRspnSchemaImportValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRspnSchemaWireParsersValue() const;
		virtual const std::string* getOptionalJXMsgRspnSchemaWireParsersReference() const;
		virtual const bool isOptionalJXMsgRspnSchemaWireParsersNull() const;
		virtual void setOptionalJXMsgRspnSchemaWireParsersNull();
		virtual void setOptionalJXMsgRspnSchemaWireParsersValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRspnSchemaXsdElementListValue() const;
		virtual const std::string* getOptionalJXMsgRspnSchemaXsdElementListReference() const;
		virtual const bool isOptionalJXMsgRspnSchemaXsdElementListNull() const;
		virtual void setOptionalJXMsgRspnSchemaXsdElementListNull();
		virtual void setOptionalJXMsgRspnSchemaXsdElementListValue( const std::string& value );

		virtual const std::string& getOptionalJXMsgRspnSchemaXsdSpecValue() const;
		virtual const std::string* getOptionalJXMsgRspnSchemaXsdSpecReference() const;
		virtual const bool isOptionalJXMsgRspnSchemaXsdSpecNull() const;
		virtual void setOptionalJXMsgRspnSchemaXsdSpecNull();
		virtual void setOptionalJXMsgRspnSchemaXsdSpecValue( const std::string& value );

		virtual const std::string& getOptionalCppSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalCppSchemaObjIncludeReference() const;
		virtual const bool isOptionalCppSchemaObjIncludeNull() const;
		virtual void setOptionalCppSchemaObjIncludeNull();
		virtual void setOptionalCppSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppSchemaObjInterfaceValue() const;
		virtual const std::string* getOptionalCppSchemaObjInterfaceReference() const;
		virtual const bool isOptionalCppSchemaObjInterfaceNull() const;
		virtual void setOptionalCppSchemaObjInterfaceNull();
		virtual void setOptionalCppSchemaObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalCppSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCppSchemaObjMembersReference() const;
		virtual const bool isOptionalCppSchemaObjMembersNull() const;
		virtual void setOptionalCppSchemaObjMembersNull();
		virtual void setOptionalCppSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppSchemaObjImplementationValue() const;
		virtual const std::string* getOptionalCppSchemaObjImplementationReference() const;
		virtual const bool isOptionalCppSchemaObjImplementationNull() const;
		virtual void setOptionalCppSchemaObjImplementationNull();
		virtual void setOptionalCppSchemaObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCppDb2LUWSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCppDb2LUWSchemaObjMembersReference() const;
		virtual const bool isOptionalCppDb2LUWSchemaObjMembersNull() const;
		virtual void setOptionalCppDb2LUWSchemaObjMembersNull();
		virtual void setOptionalCppDb2LUWSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppDb2LUWSchemaObjImplValue() const;
		virtual const std::string* getOptionalCppDb2LUWSchemaObjImplReference() const;
		virtual const bool isOptionalCppDb2LUWSchemaObjImplNull() const;
		virtual void setOptionalCppDb2LUWSchemaObjImplNull();
		virtual void setOptionalCppDb2LUWSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalCppDb2LUWSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalCppDb2LUWSchemaObjIncludeReference() const;
		virtual const bool isOptionalCppDb2LUWSchemaObjIncludeNull() const;
		virtual void setOptionalCppDb2LUWSchemaObjIncludeNull();
		virtual void setOptionalCppDb2LUWSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppMSSqlSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCppMSSqlSchemaObjMembersReference() const;
		virtual const bool isOptionalCppMSSqlSchemaObjMembersNull() const;
		virtual void setOptionalCppMSSqlSchemaObjMembersNull();
		virtual void setOptionalCppMSSqlSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppMSSqlSchemaObjImplValue() const;
		virtual const std::string* getOptionalCppMSSqlSchemaObjImplReference() const;
		virtual const bool isOptionalCppMSSqlSchemaObjImplNull() const;
		virtual void setOptionalCppMSSqlSchemaObjImplNull();
		virtual void setOptionalCppMSSqlSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalCppMSSqlSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalCppMSSqlSchemaObjIncludeReference() const;
		virtual const bool isOptionalCppMSSqlSchemaObjIncludeNull() const;
		virtual void setOptionalCppMSSqlSchemaObjIncludeNull();
		virtual void setOptionalCppMSSqlSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppMySqlSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCppMySqlSchemaObjMembersReference() const;
		virtual const bool isOptionalCppMySqlSchemaObjMembersNull() const;
		virtual void setOptionalCppMySqlSchemaObjMembersNull();
		virtual void setOptionalCppMySqlSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppMySqlSchemaObjImplValue() const;
		virtual const std::string* getOptionalCppMySqlSchemaObjImplReference() const;
		virtual const bool isOptionalCppMySqlSchemaObjImplNull() const;
		virtual void setOptionalCppMySqlSchemaObjImplNull();
		virtual void setOptionalCppMySqlSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalCppMySqlSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalCppMySqlSchemaObjIncludeReference() const;
		virtual const bool isOptionalCppMySqlSchemaObjIncludeNull() const;
		virtual void setOptionalCppMySqlSchemaObjIncludeNull();
		virtual void setOptionalCppMySqlSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppOracleSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCppOracleSchemaObjMembersReference() const;
		virtual const bool isOptionalCppOracleSchemaObjMembersNull() const;
		virtual void setOptionalCppOracleSchemaObjMembersNull();
		virtual void setOptionalCppOracleSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppOracleSchemaObjImplValue() const;
		virtual const std::string* getOptionalCppOracleSchemaObjImplReference() const;
		virtual const bool isOptionalCppOracleSchemaObjImplNull() const;
		virtual void setOptionalCppOracleSchemaObjImplNull();
		virtual void setOptionalCppOracleSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalCppOracleSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalCppOracleSchemaObjIncludeReference() const;
		virtual const bool isOptionalCppOracleSchemaObjIncludeNull() const;
		virtual void setOptionalCppOracleSchemaObjIncludeNull();
		virtual void setOptionalCppOracleSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppPgSqlSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCppPgSqlSchemaObjMembersReference() const;
		virtual const bool isOptionalCppPgSqlSchemaObjMembersNull() const;
		virtual void setOptionalCppPgSqlSchemaObjMembersNull();
		virtual void setOptionalCppPgSqlSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppPgSqlSchemaObjImplValue() const;
		virtual const std::string* getOptionalCppPgSqlSchemaObjImplReference() const;
		virtual const bool isOptionalCppPgSqlSchemaObjImplNull() const;
		virtual void setOptionalCppPgSqlSchemaObjImplNull();
		virtual void setOptionalCppPgSqlSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalCppPgSqlSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalCppPgSqlSchemaObjIncludeReference() const;
		virtual const bool isOptionalCppPgSqlSchemaObjIncludeNull() const;
		virtual void setOptionalCppPgSqlSchemaObjIncludeNull();
		virtual void setOptionalCppPgSqlSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppRamSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCppRamSchemaObjMembersReference() const;
		virtual const bool isOptionalCppRamSchemaObjMembersNull() const;
		virtual void setOptionalCppRamSchemaObjMembersNull();
		virtual void setOptionalCppRamSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCppRamSchemaObjImplValue() const;
		virtual const std::string* getOptionalCppRamSchemaObjImplReference() const;
		virtual const bool isOptionalCppRamSchemaObjImplNull() const;
		virtual void setOptionalCppRamSchemaObjImplNull();
		virtual void setOptionalCppRamSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalCppRamSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalCppRamSchemaObjIncludeReference() const;
		virtual const bool isOptionalCppRamSchemaObjIncludeNull() const;
		virtual void setOptionalCppRamSchemaObjIncludeNull();
		virtual void setOptionalCppRamSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgSchemaIncludeValue() const;
		virtual const std::string* getOptionalCppXMsgSchemaIncludeReference() const;
		virtual const bool isOptionalCppXMsgSchemaIncludeNull() const;
		virtual void setOptionalCppXMsgSchemaIncludeNull();
		virtual void setOptionalCppXMsgSchemaIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgSchemaFormattersValue() const;
		virtual const std::string* getOptionalCppXMsgSchemaFormattersReference() const;
		virtual const bool isOptionalCppXMsgSchemaFormattersNull() const;
		virtual void setOptionalCppXMsgSchemaFormattersNull();
		virtual void setOptionalCppXMsgSchemaFormattersValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgClientSchemaIncludeValue() const;
		virtual const std::string* getOptionalCppXMsgClientSchemaIncludeReference() const;
		virtual const bool isOptionalCppXMsgClientSchemaIncludeNull() const;
		virtual void setOptionalCppXMsgClientSchemaIncludeNull();
		virtual void setOptionalCppXMsgClientSchemaIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgClientSchemaBodyValue() const;
		virtual const std::string* getOptionalCppXMsgClientSchemaBodyReference() const;
		virtual const bool isOptionalCppXMsgClientSchemaBodyNull() const;
		virtual void setOptionalCppXMsgClientSchemaBodyNull();
		virtual void setOptionalCppXMsgClientSchemaBodyValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRqstSchemaBodyValue() const;
		virtual const std::string* getOptionalCppXMsgRqstSchemaBodyReference() const;
		virtual const bool isOptionalCppXMsgRqstSchemaBodyNull() const;
		virtual void setOptionalCppXMsgRqstSchemaBodyNull();
		virtual void setOptionalCppXMsgRqstSchemaBodyValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRqstSchemaIncludeValue() const;
		virtual const std::string* getOptionalCppXMsgRqstSchemaIncludeReference() const;
		virtual const bool isOptionalCppXMsgRqstSchemaIncludeNull() const;
		virtual void setOptionalCppXMsgRqstSchemaIncludeNull();
		virtual void setOptionalCppXMsgRqstSchemaIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRqstSchemaWireParsersValue() const;
		virtual const std::string* getOptionalCppXMsgRqstSchemaWireParsersReference() const;
		virtual const bool isOptionalCppXMsgRqstSchemaWireParsersNull() const;
		virtual void setOptionalCppXMsgRqstSchemaWireParsersNull();
		virtual void setOptionalCppXMsgRqstSchemaWireParsersValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRqstSchemaXsdSpecValue() const;
		virtual const std::string* getOptionalCppXMsgRqstSchemaXsdSpecReference() const;
		virtual const bool isOptionalCppXMsgRqstSchemaXsdSpecNull() const;
		virtual void setOptionalCppXMsgRqstSchemaXsdSpecNull();
		virtual void setOptionalCppXMsgRqstSchemaXsdSpecValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRqstSchemaXsdElementListValue() const;
		virtual const std::string* getOptionalCppXMsgRqstSchemaXsdElementListReference() const;
		virtual const bool isOptionalCppXMsgRqstSchemaXsdElementListNull() const;
		virtual void setOptionalCppXMsgRqstSchemaXsdElementListNull();
		virtual void setOptionalCppXMsgRqstSchemaXsdElementListValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRspnSchemaBodyValue() const;
		virtual const std::string* getOptionalCppXMsgRspnSchemaBodyReference() const;
		virtual const bool isOptionalCppXMsgRspnSchemaBodyNull() const;
		virtual void setOptionalCppXMsgRspnSchemaBodyNull();
		virtual void setOptionalCppXMsgRspnSchemaBodyValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRspnSchemaIncludeValue() const;
		virtual const std::string* getOptionalCppXMsgRspnSchemaIncludeReference() const;
		virtual const bool isOptionalCppXMsgRspnSchemaIncludeNull() const;
		virtual void setOptionalCppXMsgRspnSchemaIncludeNull();
		virtual void setOptionalCppXMsgRspnSchemaIncludeValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRspnSchemaWireParsersValue() const;
		virtual const std::string* getOptionalCppXMsgRspnSchemaWireParsersReference() const;
		virtual const bool isOptionalCppXMsgRspnSchemaWireParsersNull() const;
		virtual void setOptionalCppXMsgRspnSchemaWireParsersNull();
		virtual void setOptionalCppXMsgRspnSchemaWireParsersValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRspnSchemaXsdElementListValue() const;
		virtual const std::string* getOptionalCppXMsgRspnSchemaXsdElementListReference() const;
		virtual const bool isOptionalCppXMsgRspnSchemaXsdElementListNull() const;
		virtual void setOptionalCppXMsgRspnSchemaXsdElementListNull();
		virtual void setOptionalCppXMsgRspnSchemaXsdElementListValue( const std::string& value );

		virtual const std::string& getOptionalCppXMsgRspnSchemaXsdSpecValue() const;
		virtual const std::string* getOptionalCppXMsgRspnSchemaXsdSpecReference() const;
		virtual const bool isOptionalCppXMsgRspnSchemaXsdSpecNull() const;
		virtual void setOptionalCppXMsgRspnSchemaXsdSpecNull();
		virtual void setOptionalCppXMsgRspnSchemaXsdSpecValue( const std::string& value );

		virtual const std::string& getOptionalHppSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalHppSchemaObjIncludeReference() const;
		virtual const bool isOptionalHppSchemaObjIncludeNull() const;
		virtual void setOptionalHppSchemaObjIncludeNull();
		virtual void setOptionalHppSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppSchemaObjInterfaceValue() const;
		virtual const std::string* getOptionalHppSchemaObjInterfaceReference() const;
		virtual const bool isOptionalHppSchemaObjInterfaceNull() const;
		virtual void setOptionalHppSchemaObjInterfaceNull();
		virtual void setOptionalHppSchemaObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalHppSchemaObjMembersValue() const;
		virtual const std::string* getOptionalHppSchemaObjMembersReference() const;
		virtual const bool isOptionalHppSchemaObjMembersNull() const;
		virtual void setOptionalHppSchemaObjMembersNull();
		virtual void setOptionalHppSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppSchemaObjImplementationValue() const;
		virtual const std::string* getOptionalHppSchemaObjImplementationReference() const;
		virtual const bool isOptionalHppSchemaObjImplementationNull() const;
		virtual void setOptionalHppSchemaObjImplementationNull();
		virtual void setOptionalHppSchemaObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalHppDb2LUWSchemaObjMembersValue() const;
		virtual const std::string* getOptionalHppDb2LUWSchemaObjMembersReference() const;
		virtual const bool isOptionalHppDb2LUWSchemaObjMembersNull() const;
		virtual void setOptionalHppDb2LUWSchemaObjMembersNull();
		virtual void setOptionalHppDb2LUWSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppDb2LUWSchemaObjImplValue() const;
		virtual const std::string* getOptionalHppDb2LUWSchemaObjImplReference() const;
		virtual const bool isOptionalHppDb2LUWSchemaObjImplNull() const;
		virtual void setOptionalHppDb2LUWSchemaObjImplNull();
		virtual void setOptionalHppDb2LUWSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalHppDb2LUWSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalHppDb2LUWSchemaObjIncludeReference() const;
		virtual const bool isOptionalHppDb2LUWSchemaObjIncludeNull() const;
		virtual void setOptionalHppDb2LUWSchemaObjIncludeNull();
		virtual void setOptionalHppDb2LUWSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppMSSqlSchemaObjMembersValue() const;
		virtual const std::string* getOptionalHppMSSqlSchemaObjMembersReference() const;
		virtual const bool isOptionalHppMSSqlSchemaObjMembersNull() const;
		virtual void setOptionalHppMSSqlSchemaObjMembersNull();
		virtual void setOptionalHppMSSqlSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppMSSqlSchemaObjImplValue() const;
		virtual const std::string* getOptionalHppMSSqlSchemaObjImplReference() const;
		virtual const bool isOptionalHppMSSqlSchemaObjImplNull() const;
		virtual void setOptionalHppMSSqlSchemaObjImplNull();
		virtual void setOptionalHppMSSqlSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalHppMSSqlSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalHppMSSqlSchemaObjIncludeReference() const;
		virtual const bool isOptionalHppMSSqlSchemaObjIncludeNull() const;
		virtual void setOptionalHppMSSqlSchemaObjIncludeNull();
		virtual void setOptionalHppMSSqlSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppMySqlSchemaObjMembersValue() const;
		virtual const std::string* getOptionalHppMySqlSchemaObjMembersReference() const;
		virtual const bool isOptionalHppMySqlSchemaObjMembersNull() const;
		virtual void setOptionalHppMySqlSchemaObjMembersNull();
		virtual void setOptionalHppMySqlSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppMySqlSchemaObjImplValue() const;
		virtual const std::string* getOptionalHppMySqlSchemaObjImplReference() const;
		virtual const bool isOptionalHppMySqlSchemaObjImplNull() const;
		virtual void setOptionalHppMySqlSchemaObjImplNull();
		virtual void setOptionalHppMySqlSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalHppMySqlSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalHppMySqlSchemaObjIncludeReference() const;
		virtual const bool isOptionalHppMySqlSchemaObjIncludeNull() const;
		virtual void setOptionalHppMySqlSchemaObjIncludeNull();
		virtual void setOptionalHppMySqlSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppOracleSchemaObjMembersValue() const;
		virtual const std::string* getOptionalHppOracleSchemaObjMembersReference() const;
		virtual const bool isOptionalHppOracleSchemaObjMembersNull() const;
		virtual void setOptionalHppOracleSchemaObjMembersNull();
		virtual void setOptionalHppOracleSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppOracleSchemaObjImplValue() const;
		virtual const std::string* getOptionalHppOracleSchemaObjImplReference() const;
		virtual const bool isOptionalHppOracleSchemaObjImplNull() const;
		virtual void setOptionalHppOracleSchemaObjImplNull();
		virtual void setOptionalHppOracleSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalHppOracleSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalHppOracleSchemaObjIncludeReference() const;
		virtual const bool isOptionalHppOracleSchemaObjIncludeNull() const;
		virtual void setOptionalHppOracleSchemaObjIncludeNull();
		virtual void setOptionalHppOracleSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppPgSqlSchemaObjMembersValue() const;
		virtual const std::string* getOptionalHppPgSqlSchemaObjMembersReference() const;
		virtual const bool isOptionalHppPgSqlSchemaObjMembersNull() const;
		virtual void setOptionalHppPgSqlSchemaObjMembersNull();
		virtual void setOptionalHppPgSqlSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppPgSqlSchemaObjImplValue() const;
		virtual const std::string* getOptionalHppPgSqlSchemaObjImplReference() const;
		virtual const bool isOptionalHppPgSqlSchemaObjImplNull() const;
		virtual void setOptionalHppPgSqlSchemaObjImplNull();
		virtual void setOptionalHppPgSqlSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalHppPgSqlSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalHppPgSqlSchemaObjIncludeReference() const;
		virtual const bool isOptionalHppPgSqlSchemaObjIncludeNull() const;
		virtual void setOptionalHppPgSqlSchemaObjIncludeNull();
		virtual void setOptionalHppPgSqlSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppRamSchemaObjMembersValue() const;
		virtual const std::string* getOptionalHppRamSchemaObjMembersReference() const;
		virtual const bool isOptionalHppRamSchemaObjMembersNull() const;
		virtual void setOptionalHppRamSchemaObjMembersNull();
		virtual void setOptionalHppRamSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalHppRamSchemaObjImplValue() const;
		virtual const std::string* getOptionalHppRamSchemaObjImplReference() const;
		virtual const bool isOptionalHppRamSchemaObjImplNull() const;
		virtual void setOptionalHppRamSchemaObjImplNull();
		virtual void setOptionalHppRamSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalHppRamSchemaObjIncludeValue() const;
		virtual const std::string* getOptionalHppRamSchemaObjIncludeReference() const;
		virtual const bool isOptionalHppRamSchemaObjIncludeNull() const;
		virtual void setOptionalHppRamSchemaObjIncludeNull();
		virtual void setOptionalHppRamSchemaObjIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgSchemaIncludeValue() const;
		virtual const std::string* getOptionalHppXMsgSchemaIncludeReference() const;
		virtual const bool isOptionalHppXMsgSchemaIncludeNull() const;
		virtual void setOptionalHppXMsgSchemaIncludeNull();
		virtual void setOptionalHppXMsgSchemaIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgSchemaFormattersValue() const;
		virtual const std::string* getOptionalHppXMsgSchemaFormattersReference() const;
		virtual const bool isOptionalHppXMsgSchemaFormattersNull() const;
		virtual void setOptionalHppXMsgSchemaFormattersNull();
		virtual void setOptionalHppXMsgSchemaFormattersValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgClientSchemaIncludeValue() const;
		virtual const std::string* getOptionalHppXMsgClientSchemaIncludeReference() const;
		virtual const bool isOptionalHppXMsgClientSchemaIncludeNull() const;
		virtual void setOptionalHppXMsgClientSchemaIncludeNull();
		virtual void setOptionalHppXMsgClientSchemaIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgClientSchemaBodyValue() const;
		virtual const std::string* getOptionalHppXMsgClientSchemaBodyReference() const;
		virtual const bool isOptionalHppXMsgClientSchemaBodyNull() const;
		virtual void setOptionalHppXMsgClientSchemaBodyNull();
		virtual void setOptionalHppXMsgClientSchemaBodyValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRqstSchemaBodyValue() const;
		virtual const std::string* getOptionalHppXMsgRqstSchemaBodyReference() const;
		virtual const bool isOptionalHppXMsgRqstSchemaBodyNull() const;
		virtual void setOptionalHppXMsgRqstSchemaBodyNull();
		virtual void setOptionalHppXMsgRqstSchemaBodyValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRqstSchemaIncludeValue() const;
		virtual const std::string* getOptionalHppXMsgRqstSchemaIncludeReference() const;
		virtual const bool isOptionalHppXMsgRqstSchemaIncludeNull() const;
		virtual void setOptionalHppXMsgRqstSchemaIncludeNull();
		virtual void setOptionalHppXMsgRqstSchemaIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRqstSchemaWireParsersValue() const;
		virtual const std::string* getOptionalHppXMsgRqstSchemaWireParsersReference() const;
		virtual const bool isOptionalHppXMsgRqstSchemaWireParsersNull() const;
		virtual void setOptionalHppXMsgRqstSchemaWireParsersNull();
		virtual void setOptionalHppXMsgRqstSchemaWireParsersValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRqstSchemaXsdSpecValue() const;
		virtual const std::string* getOptionalHppXMsgRqstSchemaXsdSpecReference() const;
		virtual const bool isOptionalHppXMsgRqstSchemaXsdSpecNull() const;
		virtual void setOptionalHppXMsgRqstSchemaXsdSpecNull();
		virtual void setOptionalHppXMsgRqstSchemaXsdSpecValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRqstSchemaXsdElementListValue() const;
		virtual const std::string* getOptionalHppXMsgRqstSchemaXsdElementListReference() const;
		virtual const bool isOptionalHppXMsgRqstSchemaXsdElementListNull() const;
		virtual void setOptionalHppXMsgRqstSchemaXsdElementListNull();
		virtual void setOptionalHppXMsgRqstSchemaXsdElementListValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRspnSchemaBodyValue() const;
		virtual const std::string* getOptionalHppXMsgRspnSchemaBodyReference() const;
		virtual const bool isOptionalHppXMsgRspnSchemaBodyNull() const;
		virtual void setOptionalHppXMsgRspnSchemaBodyNull();
		virtual void setOptionalHppXMsgRspnSchemaBodyValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRspnSchemaIncludeValue() const;
		virtual const std::string* getOptionalHppXMsgRspnSchemaIncludeReference() const;
		virtual const bool isOptionalHppXMsgRspnSchemaIncludeNull() const;
		virtual void setOptionalHppXMsgRspnSchemaIncludeNull();
		virtual void setOptionalHppXMsgRspnSchemaIncludeValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRspnSchemaWireParsersValue() const;
		virtual const std::string* getOptionalHppXMsgRspnSchemaWireParsersReference() const;
		virtual const bool isOptionalHppXMsgRspnSchemaWireParsersNull() const;
		virtual void setOptionalHppXMsgRspnSchemaWireParsersNull();
		virtual void setOptionalHppXMsgRspnSchemaWireParsersValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRspnSchemaXsdElementListValue() const;
		virtual const std::string* getOptionalHppXMsgRspnSchemaXsdElementListReference() const;
		virtual const bool isOptionalHppXMsgRspnSchemaXsdElementListNull() const;
		virtual void setOptionalHppXMsgRspnSchemaXsdElementListNull();
		virtual void setOptionalHppXMsgRspnSchemaXsdElementListValue( const std::string& value );

		virtual const std::string& getOptionalHppXMsgRspnSchemaXsdSpecValue() const;
		virtual const std::string* getOptionalHppXMsgRspnSchemaXsdSpecReference() const;
		virtual const bool isOptionalHppXMsgRspnSchemaXsdSpecNull() const;
		virtual void setOptionalHppXMsgRspnSchemaXsdSpecNull();
		virtual void setOptionalHppXMsgRspnSchemaXsdSpecValue( const std::string& value );

		virtual const std::string& getOptionalCsSchemaObjUsingValue() const;
		virtual const std::string* getOptionalCsSchemaObjUsingReference() const;
		virtual const bool isOptionalCsSchemaObjUsingNull() const;
		virtual void setOptionalCsSchemaObjUsingNull();
		virtual void setOptionalCsSchemaObjUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsSchemaObjInterfaceValue() const;
		virtual const std::string* getOptionalCsSchemaObjInterfaceReference() const;
		virtual const bool isOptionalCsSchemaObjInterfaceNull() const;
		virtual void setOptionalCsSchemaObjInterfaceNull();
		virtual void setOptionalCsSchemaObjInterfaceValue( const std::string& value );

		virtual const std::string& getOptionalCsSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCsSchemaObjMembersReference() const;
		virtual const bool isOptionalCsSchemaObjMembersNull() const;
		virtual void setOptionalCsSchemaObjMembersNull();
		virtual void setOptionalCsSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsSchemaObjImplementationValue() const;
		virtual const std::string* getOptionalCsSchemaObjImplementationReference() const;
		virtual const bool isOptionalCsSchemaObjImplementationNull() const;
		virtual void setOptionalCsSchemaObjImplementationNull();
		virtual void setOptionalCsSchemaObjImplementationValue( const std::string& value );

		virtual const std::string& getOptionalCsDb2LUWSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCsDb2LUWSchemaObjMembersReference() const;
		virtual const bool isOptionalCsDb2LUWSchemaObjMembersNull() const;
		virtual void setOptionalCsDb2LUWSchemaObjMembersNull();
		virtual void setOptionalCsDb2LUWSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsDb2LUWSchemaObjImplValue() const;
		virtual const std::string* getOptionalCsDb2LUWSchemaObjImplReference() const;
		virtual const bool isOptionalCsDb2LUWSchemaObjImplNull() const;
		virtual void setOptionalCsDb2LUWSchemaObjImplNull();
		virtual void setOptionalCsDb2LUWSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalCsDb2LUWSchemaObjUsingValue() const;
		virtual const std::string* getOptionalCsDb2LUWSchemaObjUsingReference() const;
		virtual const bool isOptionalCsDb2LUWSchemaObjUsingNull() const;
		virtual void setOptionalCsDb2LUWSchemaObjUsingNull();
		virtual void setOptionalCsDb2LUWSchemaObjUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsMSSqlSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCsMSSqlSchemaObjMembersReference() const;
		virtual const bool isOptionalCsMSSqlSchemaObjMembersNull() const;
		virtual void setOptionalCsMSSqlSchemaObjMembersNull();
		virtual void setOptionalCsMSSqlSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsMSSqlSchemaObjImplValue() const;
		virtual const std::string* getOptionalCsMSSqlSchemaObjImplReference() const;
		virtual const bool isOptionalCsMSSqlSchemaObjImplNull() const;
		virtual void setOptionalCsMSSqlSchemaObjImplNull();
		virtual void setOptionalCsMSSqlSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalCsMSSqlSchemaObjUsingValue() const;
		virtual const std::string* getOptionalCsMSSqlSchemaObjUsingReference() const;
		virtual const bool isOptionalCsMSSqlSchemaObjUsingNull() const;
		virtual void setOptionalCsMSSqlSchemaObjUsingNull();
		virtual void setOptionalCsMSSqlSchemaObjUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsMySqlSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCsMySqlSchemaObjMembersReference() const;
		virtual const bool isOptionalCsMySqlSchemaObjMembersNull() const;
		virtual void setOptionalCsMySqlSchemaObjMembersNull();
		virtual void setOptionalCsMySqlSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsMySqlSchemaObjImplValue() const;
		virtual const std::string* getOptionalCsMySqlSchemaObjImplReference() const;
		virtual const bool isOptionalCsMySqlSchemaObjImplNull() const;
		virtual void setOptionalCsMySqlSchemaObjImplNull();
		virtual void setOptionalCsMySqlSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalCsMySqlSchemaObjUsingValue() const;
		virtual const std::string* getOptionalCsMySqlSchemaObjUsingReference() const;
		virtual const bool isOptionalCsMySqlSchemaObjUsingNull() const;
		virtual void setOptionalCsMySqlSchemaObjUsingNull();
		virtual void setOptionalCsMySqlSchemaObjUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsOracleSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCsOracleSchemaObjMembersReference() const;
		virtual const bool isOptionalCsOracleSchemaObjMembersNull() const;
		virtual void setOptionalCsOracleSchemaObjMembersNull();
		virtual void setOptionalCsOracleSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsOracleSchemaObjImplValue() const;
		virtual const std::string* getOptionalCsOracleSchemaObjImplReference() const;
		virtual const bool isOptionalCsOracleSchemaObjImplNull() const;
		virtual void setOptionalCsOracleSchemaObjImplNull();
		virtual void setOptionalCsOracleSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalCsOracleSchemaObjUsingValue() const;
		virtual const std::string* getOptionalCsOracleSchemaObjUsingReference() const;
		virtual const bool isOptionalCsOracleSchemaObjUsingNull() const;
		virtual void setOptionalCsOracleSchemaObjUsingNull();
		virtual void setOptionalCsOracleSchemaObjUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsPgSqlSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCsPgSqlSchemaObjMembersReference() const;
		virtual const bool isOptionalCsPgSqlSchemaObjMembersNull() const;
		virtual void setOptionalCsPgSqlSchemaObjMembersNull();
		virtual void setOptionalCsPgSqlSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsPgSqlSchemaObjImplValue() const;
		virtual const std::string* getOptionalCsPgSqlSchemaObjImplReference() const;
		virtual const bool isOptionalCsPgSqlSchemaObjImplNull() const;
		virtual void setOptionalCsPgSqlSchemaObjImplNull();
		virtual void setOptionalCsPgSqlSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalCsPgSqlSchemaObjUsingValue() const;
		virtual const std::string* getOptionalCsPgSqlSchemaObjUsingReference() const;
		virtual const bool isOptionalCsPgSqlSchemaObjUsingNull() const;
		virtual void setOptionalCsPgSqlSchemaObjUsingNull();
		virtual void setOptionalCsPgSqlSchemaObjUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsRamSchemaObjMembersValue() const;
		virtual const std::string* getOptionalCsRamSchemaObjMembersReference() const;
		virtual const bool isOptionalCsRamSchemaObjMembersNull() const;
		virtual void setOptionalCsRamSchemaObjMembersNull();
		virtual void setOptionalCsRamSchemaObjMembersValue( const std::string& value );

		virtual const std::string& getOptionalCsRamSchemaObjImplValue() const;
		virtual const std::string* getOptionalCsRamSchemaObjImplReference() const;
		virtual const bool isOptionalCsRamSchemaObjImplNull() const;
		virtual void setOptionalCsRamSchemaObjImplNull();
		virtual void setOptionalCsRamSchemaObjImplValue( const std::string& value );

		virtual const std::string& getOptionalCsRamSchemaObjUsingValue() const;
		virtual const std::string* getOptionalCsRamSchemaObjUsingReference() const;
		virtual const bool isOptionalCsRamSchemaObjUsingNull() const;
		virtual void setOptionalCsRamSchemaObjUsingNull();
		virtual void setOptionalCsRamSchemaObjUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgSchemaUsingValue() const;
		virtual const std::string* getOptionalCsXMsgSchemaUsingReference() const;
		virtual const bool isOptionalCsXMsgSchemaUsingNull() const;
		virtual void setOptionalCsXMsgSchemaUsingNull();
		virtual void setOptionalCsXMsgSchemaUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgSchemaFormattersValue() const;
		virtual const std::string* getOptionalCsXMsgSchemaFormattersReference() const;
		virtual const bool isOptionalCsXMsgSchemaFormattersNull() const;
		virtual void setOptionalCsXMsgSchemaFormattersNull();
		virtual void setOptionalCsXMsgSchemaFormattersValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgClientSchemaUsingValue() const;
		virtual const std::string* getOptionalCsXMsgClientSchemaUsingReference() const;
		virtual const bool isOptionalCsXMsgClientSchemaUsingNull() const;
		virtual void setOptionalCsXMsgClientSchemaUsingNull();
		virtual void setOptionalCsXMsgClientSchemaUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgClientSchemaBodyValue() const;
		virtual const std::string* getOptionalCsXMsgClientSchemaBodyReference() const;
		virtual const bool isOptionalCsXMsgClientSchemaBodyNull() const;
		virtual void setOptionalCsXMsgClientSchemaBodyNull();
		virtual void setOptionalCsXMsgClientSchemaBodyValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRqstSchemaBodyValue() const;
		virtual const std::string* getOptionalCsXMsgRqstSchemaBodyReference() const;
		virtual const bool isOptionalCsXMsgRqstSchemaBodyNull() const;
		virtual void setOptionalCsXMsgRqstSchemaBodyNull();
		virtual void setOptionalCsXMsgRqstSchemaBodyValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRqstSchemaUsingValue() const;
		virtual const std::string* getOptionalCsXMsgRqstSchemaUsingReference() const;
		virtual const bool isOptionalCsXMsgRqstSchemaUsingNull() const;
		virtual void setOptionalCsXMsgRqstSchemaUsingNull();
		virtual void setOptionalCsXMsgRqstSchemaUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRqstSchemaWireParsersValue() const;
		virtual const std::string* getOptionalCsXMsgRqstSchemaWireParsersReference() const;
		virtual const bool isOptionalCsXMsgRqstSchemaWireParsersNull() const;
		virtual void setOptionalCsXMsgRqstSchemaWireParsersNull();
		virtual void setOptionalCsXMsgRqstSchemaWireParsersValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRqstSchemaXsdSpecValue() const;
		virtual const std::string* getOptionalCsXMsgRqstSchemaXsdSpecReference() const;
		virtual const bool isOptionalCsXMsgRqstSchemaXsdSpecNull() const;
		virtual void setOptionalCsXMsgRqstSchemaXsdSpecNull();
		virtual void setOptionalCsXMsgRqstSchemaXsdSpecValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRqstSchemaXsdElementListValue() const;
		virtual const std::string* getOptionalCsXMsgRqstSchemaXsdElementListReference() const;
		virtual const bool isOptionalCsXMsgRqstSchemaXsdElementListNull() const;
		virtual void setOptionalCsXMsgRqstSchemaXsdElementListNull();
		virtual void setOptionalCsXMsgRqstSchemaXsdElementListValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRspnSchemaBodyValue() const;
		virtual const std::string* getOptionalCsXMsgRspnSchemaBodyReference() const;
		virtual const bool isOptionalCsXMsgRspnSchemaBodyNull() const;
		virtual void setOptionalCsXMsgRspnSchemaBodyNull();
		virtual void setOptionalCsXMsgRspnSchemaBodyValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRspnSchemaUsingValue() const;
		virtual const std::string* getOptionalCsXMsgRspnSchemaUsingReference() const;
		virtual const bool isOptionalCsXMsgRspnSchemaUsingNull() const;
		virtual void setOptionalCsXMsgRspnSchemaUsingNull();
		virtual void setOptionalCsXMsgRspnSchemaUsingValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRspnSchemaWireParsersValue() const;
		virtual const std::string* getOptionalCsXMsgRspnSchemaWireParsersReference() const;
		virtual const bool isOptionalCsXMsgRspnSchemaWireParsersNull() const;
		virtual void setOptionalCsXMsgRspnSchemaWireParsersNull();
		virtual void setOptionalCsXMsgRspnSchemaWireParsersValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRspnSchemaXsdElementListValue() const;
		virtual const std::string* getOptionalCsXMsgRspnSchemaXsdElementListReference() const;
		virtual const bool isOptionalCsXMsgRspnSchemaXsdElementListNull() const;
		virtual void setOptionalCsXMsgRspnSchemaXsdElementListNull();
		virtual void setOptionalCsXMsgRspnSchemaXsdElementListValue( const std::string& value );

		virtual const std::string& getOptionalCsXMsgRspnSchemaXsdSpecValue() const;
		virtual const std::string* getOptionalCsXMsgRspnSchemaXsdSpecReference() const;
		virtual const bool isOptionalCsXMsgRspnSchemaXsdSpecNull() const;
		virtual void setOptionalCsXMsgRspnSchemaXsdSpecNull();
		virtual void setOptionalCsXMsgRspnSchemaXsdSpecValue( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamSchemaDefByCTenantIdxKey& rhs );
		bool operator <( const CFBamSchemaDefByMinorVersionIdxKey& rhs );
		bool operator <( const CFBamSchemaDefByUNameIdxKey& rhs );
		bool operator <( const CFBamSchemaDefByAuthEMailIdxKey& rhs );
		bool operator <( const CFBamSchemaDefByProjectURLIdxKey& rhs );
		bool operator <( const CFBamSchemaDefByPubURIIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamSchemaDefHBuff& rhs );
		bool operator <( const CFBamSchemaDefBuff& rhs );

		bool operator <=( const CFBamSchemaDefByCTenantIdxKey& rhs );
		bool operator <=( const CFBamSchemaDefByMinorVersionIdxKey& rhs );
		bool operator <=( const CFBamSchemaDefByUNameIdxKey& rhs );
		bool operator <=( const CFBamSchemaDefByAuthEMailIdxKey& rhs );
		bool operator <=( const CFBamSchemaDefByProjectURLIdxKey& rhs );
		bool operator <=( const CFBamSchemaDefByPubURIIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamSchemaDefHBuff& rhs );
		bool operator <=( const CFBamSchemaDefBuff& rhs );

		bool operator ==( const CFBamSchemaDefByCTenantIdxKey& rhs );
		bool operator ==( const CFBamSchemaDefByMinorVersionIdxKey& rhs );
		bool operator ==( const CFBamSchemaDefByUNameIdxKey& rhs );
		bool operator ==( const CFBamSchemaDefByAuthEMailIdxKey& rhs );
		bool operator ==( const CFBamSchemaDefByProjectURLIdxKey& rhs );
		bool operator ==( const CFBamSchemaDefByPubURIIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamSchemaDefHBuff& rhs );
		bool operator ==( const CFBamSchemaDefBuff& rhs );

		bool operator !=( const CFBamSchemaDefByCTenantIdxKey& rhs );
		bool operator !=( const CFBamSchemaDefByMinorVersionIdxKey& rhs );
		bool operator !=( const CFBamSchemaDefByUNameIdxKey& rhs );
		bool operator !=( const CFBamSchemaDefByAuthEMailIdxKey& rhs );
		bool operator !=( const CFBamSchemaDefByProjectURLIdxKey& rhs );
		bool operator !=( const CFBamSchemaDefByPubURIIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamSchemaDefHBuff& rhs );
		bool operator !=( const CFBamSchemaDefBuff& rhs );

		bool operator >=( const CFBamSchemaDefByCTenantIdxKey& rhs );
		bool operator >=( const CFBamSchemaDefByMinorVersionIdxKey& rhs );
		bool operator >=( const CFBamSchemaDefByUNameIdxKey& rhs );
		bool operator >=( const CFBamSchemaDefByAuthEMailIdxKey& rhs );
		bool operator >=( const CFBamSchemaDefByProjectURLIdxKey& rhs );
		bool operator >=( const CFBamSchemaDefByPubURIIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamSchemaDefHBuff& rhs );
		bool operator >=( const CFBamSchemaDefBuff& rhs );

		bool operator >( const CFBamSchemaDefByCTenantIdxKey& rhs );
		bool operator >( const CFBamSchemaDefByMinorVersionIdxKey& rhs );
		bool operator >( const CFBamSchemaDefByUNameIdxKey& rhs );
		bool operator >( const CFBamSchemaDefByAuthEMailIdxKey& rhs );
		bool operator >( const CFBamSchemaDefByProjectURLIdxKey& rhs );
		bool operator >( const CFBamSchemaDefByPubURIIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamSchemaDefHBuff& rhs );
		bool operator >( const CFBamSchemaDefBuff& rhs );
		cfbam::CFBamSchemaDefHBuff operator =( cfbam::CFBamSchemaDefBuff& src );
		cfbam::CFBamSchemaDefHBuff operator =( cfbam::CFBamSchemaDefHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByCTenantIdxKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByMinorVersionIdxKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByAuthEMailIdxKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByProjectURLIdxKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByPubURIIdxKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefHBuff& rhs );
	bool operator <(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefBuff& rhs );

	bool operator <=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByCTenantIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByMinorVersionIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByAuthEMailIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByProjectURLIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByPubURIIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefBuff& rhs );

	bool operator ==(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByCTenantIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByMinorVersionIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByAuthEMailIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByProjectURLIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByPubURIIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefBuff& rhs );

	bool operator !=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByCTenantIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByMinorVersionIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByAuthEMailIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByProjectURLIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByPubURIIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefBuff& rhs );

	bool operator >=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByCTenantIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByMinorVersionIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByAuthEMailIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByProjectURLIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByPubURIIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefBuff& rhs );

	bool operator >(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByCTenantIdxKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByMinorVersionIdxKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByAuthEMailIdxKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByProjectURLIdxKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefByPubURIIdxKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefHBuff& rhs );
	bool operator >(const  cfbam::CFBamSchemaDefHBuff& lhs, const cfbam::CFBamSchemaDefBuff& rhs );

	template<> struct hash<cfbam::CFBamSchemaDefHBuff> {
		typedef cfbam::CFBamSchemaDefHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

