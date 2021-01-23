// Description: C++18 base object instance implementation for CFBam SchemaDef.

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
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamSchemaDefObj.hpp>

namespace cfbam {

	const std::string CFBamSchemaDefObj::CLASS_NAME( "CFBamSchemaDefObj" );
	const classcode_t CFBamSchemaDefObj::CLASS_CODE = 0xa802L;

	const int64_t CFBamSchemaDefObj::getRequiredMinorVersionId() {
		return( getSchemaDefBuff()->getRequiredMinorVersionId() );
	}

	const int64_t* CFBamSchemaDefObj::getRequiredMinorVersionIdReference() {
		return( getSchemaDefBuff()->getRequiredMinorVersionIdReference() );
	}

	const std::string& CFBamSchemaDefObj::getRequiredName() {
		return( getSchemaDefBuff()->getRequiredName() );
	}

	const std::string* CFBamSchemaDefObj::getRequiredNameReference() {
		return( getSchemaDefBuff()->getRequiredNameReference() );
	}

	bool CFBamSchemaDefObj::isOptionalDbNameNull() {
		return( getSchemaDefBuff()->isOptionalDbNameNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalDbNameValue() {
		return( getSchemaDefBuff()->getOptionalDbNameValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalDbNameReference() {
		return( getSchemaDefBuff()->getOptionalDbNameReference() );
	}

	bool CFBamSchemaDefObj::isOptionalShortNameNull() {
		return( getSchemaDefBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalShortNameValue() {
		return( getSchemaDefBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalShortNameReference() {
		return( getSchemaDefBuff()->getOptionalShortNameReference() );
	}

	bool CFBamSchemaDefObj::isOptionalLabelNull() {
		return( getSchemaDefBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalLabelValue() {
		return( getSchemaDefBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalLabelReference() {
		return( getSchemaDefBuff()->getOptionalLabelReference() );
	}

	bool CFBamSchemaDefObj::isOptionalShortDescriptionNull() {
		return( getSchemaDefBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalShortDescriptionValue() {
		return( getSchemaDefBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalShortDescriptionReference() {
		return( getSchemaDefBuff()->getOptionalShortDescriptionReference() );
	}

	bool CFBamSchemaDefObj::isOptionalDescriptionNull() {
		return( getSchemaDefBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalDescriptionValue() {
		return( getSchemaDefBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalDescriptionReference() {
		return( getSchemaDefBuff()->getOptionalDescriptionReference() );
	}

	const std::string& CFBamSchemaDefObj::getRequiredCopyrightPeriod() {
		return( getSchemaDefBuff()->getRequiredCopyrightPeriod() );
	}

	const std::string* CFBamSchemaDefObj::getRequiredCopyrightPeriodReference() {
		return( getSchemaDefBuff()->getRequiredCopyrightPeriodReference() );
	}

	const std::string& CFBamSchemaDefObj::getRequiredCopyrightHolder() {
		return( getSchemaDefBuff()->getRequiredCopyrightHolder() );
	}

	const std::string* CFBamSchemaDefObj::getRequiredCopyrightHolderReference() {
		return( getSchemaDefBuff()->getRequiredCopyrightHolderReference() );
	}

	const std::string& CFBamSchemaDefObj::getRequiredAuthorEMail() {
		return( getSchemaDefBuff()->getRequiredAuthorEMail() );
	}

	const std::string* CFBamSchemaDefObj::getRequiredAuthorEMailReference() {
		return( getSchemaDefBuff()->getRequiredAuthorEMailReference() );
	}

	const std::string& CFBamSchemaDefObj::getRequiredProjectURL() {
		return( getSchemaDefBuff()->getRequiredProjectURL() );
	}

	const std::string* CFBamSchemaDefObj::getRequiredProjectURLReference() {
		return( getSchemaDefBuff()->getRequiredProjectURLReference() );
	}

	const std::string& CFBamSchemaDefObj::getRequiredPublishURI() {
		return( getSchemaDefBuff()->getRequiredPublishURI() );
	}

	const std::string* CFBamSchemaDefObj::getRequiredPublishURIReference() {
		return( getSchemaDefBuff()->getRequiredPublishURIReference() );
	}

	const std::string& CFBamSchemaDefObj::getRequiredCommonLicenseCode() {
		return( getSchemaDefBuff()->getRequiredCommonLicenseCode() );
	}

	const std::string* CFBamSchemaDefObj::getRequiredCommonLicenseCodeReference() {
		return( getSchemaDefBuff()->getRequiredCommonLicenseCodeReference() );
	}

	const std::string& CFBamSchemaDefObj::getRequiredCommonLicenseName() {
		return( getSchemaDefBuff()->getRequiredCommonLicenseName() );
	}

	const std::string* CFBamSchemaDefObj::getRequiredCommonLicenseNameReference() {
		return( getSchemaDefBuff()->getRequiredCommonLicenseNameReference() );
	}

	const std::string& CFBamSchemaDefObj::getRequiredCommonLicenseText() {
		return( getSchemaDefBuff()->getRequiredCommonLicenseText() );
	}

	const std::string* CFBamSchemaDefObj::getRequiredCommonLicenseTextReference() {
		return( getSchemaDefBuff()->getRequiredCommonLicenseTextReference() );
	}

	bool CFBamSchemaDefObj::isOptionalClientXFaceLicenseCodeNull() {
		return( getSchemaDefBuff()->isOptionalClientXFaceLicenseCodeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalClientXFaceLicenseCodeValue() {
		return( getSchemaDefBuff()->getOptionalClientXFaceLicenseCodeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalClientXFaceLicenseCodeReference() {
		return( getSchemaDefBuff()->getOptionalClientXFaceLicenseCodeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalClientXFaceLicenseNameNull() {
		return( getSchemaDefBuff()->isOptionalClientXFaceLicenseNameNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalClientXFaceLicenseNameValue() {
		return( getSchemaDefBuff()->getOptionalClientXFaceLicenseNameValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalClientXFaceLicenseNameReference() {
		return( getSchemaDefBuff()->getOptionalClientXFaceLicenseNameReference() );
	}

	bool CFBamSchemaDefObj::isOptionalClientXFaceLicenseTextNull() {
		return( getSchemaDefBuff()->isOptionalClientXFaceLicenseTextNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalClientXFaceLicenseTextValue() {
		return( getSchemaDefBuff()->getOptionalClientXFaceLicenseTextValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalClientXFaceLicenseTextReference() {
		return( getSchemaDefBuff()->getOptionalClientXFaceLicenseTextReference() );
	}

	bool CFBamSchemaDefObj::isOptionalClientImplLicenseCodeNull() {
		return( getSchemaDefBuff()->isOptionalClientImplLicenseCodeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalClientImplLicenseCodeValue() {
		return( getSchemaDefBuff()->getOptionalClientImplLicenseCodeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalClientImplLicenseCodeReference() {
		return( getSchemaDefBuff()->getOptionalClientImplLicenseCodeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalClientImplLicenseNameNull() {
		return( getSchemaDefBuff()->isOptionalClientImplLicenseNameNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalClientImplLicenseNameValue() {
		return( getSchemaDefBuff()->getOptionalClientImplLicenseNameValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalClientImplLicenseNameReference() {
		return( getSchemaDefBuff()->getOptionalClientImplLicenseNameReference() );
	}

	bool CFBamSchemaDefObj::isOptionalClientImplLicenseTextNull() {
		return( getSchemaDefBuff()->isOptionalClientImplLicenseTextNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalClientImplLicenseTextValue() {
		return( getSchemaDefBuff()->getOptionalClientImplLicenseTextValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalClientImplLicenseTextReference() {
		return( getSchemaDefBuff()->getOptionalClientImplLicenseTextReference() );
	}

	bool CFBamSchemaDefObj::isOptionalServerXFaceLicenseCodeNull() {
		return( getSchemaDefBuff()->isOptionalServerXFaceLicenseCodeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalServerXFaceLicenseCodeValue() {
		return( getSchemaDefBuff()->getOptionalServerXFaceLicenseCodeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalServerXFaceLicenseCodeReference() {
		return( getSchemaDefBuff()->getOptionalServerXFaceLicenseCodeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalServerXFaceLicenseNameNull() {
		return( getSchemaDefBuff()->isOptionalServerXFaceLicenseNameNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalServerXFaceLicenseNameValue() {
		return( getSchemaDefBuff()->getOptionalServerXFaceLicenseNameValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalServerXFaceLicenseNameReference() {
		return( getSchemaDefBuff()->getOptionalServerXFaceLicenseNameReference() );
	}

	bool CFBamSchemaDefObj::isOptionalServerXFaceLicenseTextNull() {
		return( getSchemaDefBuff()->isOptionalServerXFaceLicenseTextNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalServerXFaceLicenseTextValue() {
		return( getSchemaDefBuff()->getOptionalServerXFaceLicenseTextValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalServerXFaceLicenseTextReference() {
		return( getSchemaDefBuff()->getOptionalServerXFaceLicenseTextReference() );
	}

	bool CFBamSchemaDefObj::isOptionalServerImplLicenseCodeNull() {
		return( getSchemaDefBuff()->isOptionalServerImplLicenseCodeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalServerImplLicenseCodeValue() {
		return( getSchemaDefBuff()->getOptionalServerImplLicenseCodeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalServerImplLicenseCodeReference() {
		return( getSchemaDefBuff()->getOptionalServerImplLicenseCodeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalServerImplLicenseNameNull() {
		return( getSchemaDefBuff()->isOptionalServerImplLicenseNameNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalServerImplLicenseNameValue() {
		return( getSchemaDefBuff()->getOptionalServerImplLicenseNameValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalServerImplLicenseNameReference() {
		return( getSchemaDefBuff()->getOptionalServerImplLicenseNameReference() );
	}

	bool CFBamSchemaDefObj::isOptionalServerImplLicenseTextNull() {
		return( getSchemaDefBuff()->isOptionalServerImplLicenseTextNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalServerImplLicenseTextValue() {
		return( getSchemaDefBuff()->getOptionalServerImplLicenseTextValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalServerImplLicenseTextReference() {
		return( getSchemaDefBuff()->getOptionalServerImplLicenseTextReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjImportReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJSchemaObjInterfaceNull() {
		return( getSchemaDefBuff()->isOptionalJSchemaObjInterfaceNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJSchemaObjInterfaceValue() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjInterfaceValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJSchemaObjInterfaceReference() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjInterfaceReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJSchemaObjImplementationNull() {
		return( getSchemaDefBuff()->isOptionalJSchemaObjImplementationNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJSchemaObjImplementationValue() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjImplementationValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJSchemaObjImplementationReference() {
		return( getSchemaDefBuff()->getOptionalJSchemaObjImplementationReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJDb2LUWSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJDb2LUWSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJDb2LUWSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJDb2LUWSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJDb2LUWSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalJDb2LUWSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJDb2LUWSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJDb2LUWSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJDb2LUWSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJDb2LUWSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJDb2LUWSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJDb2LUWSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJDb2LUWSchemaObjImportReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJMSSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJMSSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJMSSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJMSSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJMSSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalJMSSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJMSSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJMSSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJMSSqlSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJMSSqlSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJMSSqlSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJMSSqlSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJMSSqlSchemaObjImportReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJMySqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJMySqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJMySqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJMySqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJMySqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJMySqlSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJMySqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalJMySqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJMySqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalJMySqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJMySqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalJMySqlSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJMySqlSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJMySqlSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJMySqlSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJMySqlSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJMySqlSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJMySqlSchemaObjImportReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJOracleSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJOracleSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJOracleSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJOracleSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJOracleSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJOracleSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJOracleSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalJOracleSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJOracleSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalJOracleSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJOracleSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalJOracleSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJOracleSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJOracleSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJOracleSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJOracleSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJOracleSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJOracleSchemaObjImportReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJPgSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJPgSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJPgSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJPgSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJPgSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalJPgSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJPgSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJPgSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJPgSqlSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJPgSqlSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJPgSqlSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJPgSqlSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJPgSqlSchemaObjImportReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJRamSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalJRamSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJRamSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalJRamSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJRamSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalJRamSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJRamSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalJRamSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJRamSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalJRamSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJRamSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalJRamSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJRamSchemaObjImportNull() {
		return( getSchemaDefBuff()->isOptionalJRamSchemaObjImportNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJRamSchemaObjImportValue() {
		return( getSchemaDefBuff()->getOptionalJRamSchemaObjImportValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJRamSchemaObjImportReference() {
		return( getSchemaDefBuff()->getOptionalJRamSchemaObjImportReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgSchemaImportNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgSchemaImportNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgSchemaImportValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgSchemaImportValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgSchemaImportReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgSchemaImportReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgSchemaFormattersNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgSchemaFormattersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgSchemaFormattersValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgSchemaFormattersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgSchemaFormattersReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgSchemaFormattersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgClientSchemaImportNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgClientSchemaImportNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgClientSchemaImportValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgClientSchemaImportValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgClientSchemaImportReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgClientSchemaImportReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgClientSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgClientSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgClientSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgClientSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgClientSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgClientSchemaBodyReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgRqstSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaBodyReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgRqstSchemaImportNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaImportNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaImportValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaImportValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaImportReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaImportReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgRqstSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaWireParsersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgRqstSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaXsdSpecReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgRqstSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRqstSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRqstSchemaXsdElementListReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgRspnSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaBodyReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgRspnSchemaImportNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaImportNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaImportValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaImportValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaImportReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaImportReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgRspnSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaWireParsersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgRspnSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaXsdElementListReference() );
	}

	bool CFBamSchemaDefObj::isOptionalJXMsgRspnSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalJXMsgRspnSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalJXMsgRspnSchemaXsdSpecReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppSchemaObjInterfaceNull() {
		return( getSchemaDefBuff()->isOptionalCppSchemaObjInterfaceNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppSchemaObjInterfaceValue() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjInterfaceValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppSchemaObjInterfaceReference() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjInterfaceReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppSchemaObjImplementationNull() {
		return( getSchemaDefBuff()->isOptionalCppSchemaObjImplementationNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppSchemaObjImplementationValue() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjImplementationValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppSchemaObjImplementationReference() {
		return( getSchemaDefBuff()->getOptionalCppSchemaObjImplementationReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppDb2LUWSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppDb2LUWSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppDb2LUWSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppDb2LUWSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppDb2LUWSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCppDb2LUWSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppDb2LUWSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppDb2LUWSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppDb2LUWSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppDb2LUWSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppDb2LUWSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppDb2LUWSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppDb2LUWSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppMSSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppMSSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppMSSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppMSSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppMSSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCppMSSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppMSSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppMSSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppMSSqlSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppMSSqlSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppMSSqlSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppMSSqlSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppMSSqlSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppMySqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppMySqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppMySqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppMySqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppMySqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCppMySqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppMySqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppMySqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppMySqlSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppMySqlSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppMySqlSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppMySqlSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppMySqlSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppOracleSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppOracleSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppOracleSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppOracleSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppOracleSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppOracleSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppOracleSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCppOracleSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppOracleSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCppOracleSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppOracleSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCppOracleSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppOracleSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppOracleSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppOracleSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppOracleSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppOracleSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppOracleSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppPgSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppPgSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppPgSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppPgSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppPgSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCppPgSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppPgSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppPgSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppPgSqlSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppPgSqlSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppPgSqlSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppPgSqlSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppPgSqlSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppRamSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCppRamSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppRamSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCppRamSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppRamSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCppRamSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppRamSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCppRamSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppRamSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCppRamSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppRamSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCppRamSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppRamSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppRamSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppRamSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppRamSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppRamSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppRamSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgSchemaIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgSchemaFormattersNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgSchemaFormattersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgSchemaFormattersValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgSchemaFormattersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgSchemaFormattersReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgSchemaFormattersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgClientSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgClientSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgClientSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgClientSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgClientSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgClientSchemaIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgClientSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgClientSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgClientSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgClientSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgClientSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgClientSchemaBodyReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgRqstSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaBodyReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgRqstSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgRqstSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaWireParsersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgRqstSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaXsdSpecReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgRqstSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRqstSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRqstSchemaXsdElementListReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgRspnSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaBodyReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgRspnSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgRspnSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaWireParsersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgRspnSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaXsdElementListReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCppXMsgRspnSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalCppXMsgRspnSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalCppXMsgRspnSchemaXsdSpecReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppSchemaObjInterfaceNull() {
		return( getSchemaDefBuff()->isOptionalHppSchemaObjInterfaceNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppSchemaObjInterfaceValue() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjInterfaceValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppSchemaObjInterfaceReference() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjInterfaceReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppSchemaObjImplementationNull() {
		return( getSchemaDefBuff()->isOptionalHppSchemaObjImplementationNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppSchemaObjImplementationValue() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjImplementationValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppSchemaObjImplementationReference() {
		return( getSchemaDefBuff()->getOptionalHppSchemaObjImplementationReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppDb2LUWSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppDb2LUWSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppDb2LUWSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppDb2LUWSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppDb2LUWSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalHppDb2LUWSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppDb2LUWSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppDb2LUWSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppDb2LUWSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppDb2LUWSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppDb2LUWSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppDb2LUWSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppDb2LUWSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppMSSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppMSSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppMSSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppMSSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppMSSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalHppMSSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppMSSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppMSSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppMSSqlSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppMSSqlSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppMSSqlSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppMSSqlSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppMSSqlSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppMySqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppMySqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppMySqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppMySqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppMySqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalHppMySqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppMySqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppMySqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppMySqlSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppMySqlSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppMySqlSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppMySqlSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppMySqlSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppOracleSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppOracleSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppOracleSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppOracleSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppOracleSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppOracleSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppOracleSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalHppOracleSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppOracleSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalHppOracleSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppOracleSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalHppOracleSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppOracleSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppOracleSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppOracleSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppOracleSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppOracleSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppOracleSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppPgSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppPgSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppPgSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppPgSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppPgSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalHppPgSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppPgSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppPgSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppPgSqlSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppPgSqlSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppPgSqlSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppPgSqlSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppPgSqlSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppRamSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalHppRamSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppRamSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalHppRamSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppRamSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalHppRamSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppRamSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalHppRamSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppRamSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalHppRamSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppRamSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalHppRamSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppRamSchemaObjIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppRamSchemaObjIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppRamSchemaObjIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppRamSchemaObjIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppRamSchemaObjIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppRamSchemaObjIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgSchemaIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgSchemaFormattersNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgSchemaFormattersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgSchemaFormattersValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgSchemaFormattersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgSchemaFormattersReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgSchemaFormattersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgClientSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgClientSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgClientSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgClientSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgClientSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgClientSchemaIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgClientSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgClientSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgClientSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgClientSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgClientSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgClientSchemaBodyReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgRqstSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaBodyReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgRqstSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgRqstSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaWireParsersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgRqstSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaXsdSpecReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgRqstSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRqstSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRqstSchemaXsdElementListReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgRspnSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaBodyReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgRspnSchemaIncludeNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaIncludeNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaIncludeValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaIncludeValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaIncludeReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaIncludeReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgRspnSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaWireParsersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgRspnSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaXsdElementListReference() );
	}

	bool CFBamSchemaDefObj::isOptionalHppXMsgRspnSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalHppXMsgRspnSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalHppXMsgRspnSchemaXsdSpecReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjUsingReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsSchemaObjInterfaceNull() {
		return( getSchemaDefBuff()->isOptionalCsSchemaObjInterfaceNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsSchemaObjInterfaceValue() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjInterfaceValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsSchemaObjInterfaceReference() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjInterfaceReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsSchemaObjImplementationNull() {
		return( getSchemaDefBuff()->isOptionalCsSchemaObjImplementationNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsSchemaObjImplementationValue() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjImplementationValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsSchemaObjImplementationReference() {
		return( getSchemaDefBuff()->getOptionalCsSchemaObjImplementationReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsDb2LUWSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsDb2LUWSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsDb2LUWSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsDb2LUWSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsDb2LUWSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCsDb2LUWSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsDb2LUWSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsDb2LUWSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsDb2LUWSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsDb2LUWSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsDb2LUWSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsDb2LUWSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsDb2LUWSchemaObjUsingReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsMSSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsMSSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsMSSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsMSSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsMSSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCsMSSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsMSSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsMSSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsMSSqlSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsMSSqlSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsMSSqlSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsMSSqlSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsMSSqlSchemaObjUsingReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsMySqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsMySqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsMySqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsMySqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsMySqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCsMySqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsMySqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsMySqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsMySqlSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsMySqlSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsMySqlSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsMySqlSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsMySqlSchemaObjUsingReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsOracleSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsOracleSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsOracleSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsOracleSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsOracleSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsOracleSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsOracleSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCsOracleSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsOracleSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCsOracleSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsOracleSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCsOracleSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsOracleSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsOracleSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsOracleSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsOracleSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsOracleSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsOracleSchemaObjUsingReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsPgSqlSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsPgSqlSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsPgSqlSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsPgSqlSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsPgSqlSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCsPgSqlSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsPgSqlSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsPgSqlSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsPgSqlSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsPgSqlSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsPgSqlSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsPgSqlSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsPgSqlSchemaObjUsingReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsRamSchemaObjMembersNull() {
		return( getSchemaDefBuff()->isOptionalCsRamSchemaObjMembersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsRamSchemaObjMembersValue() {
		return( getSchemaDefBuff()->getOptionalCsRamSchemaObjMembersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsRamSchemaObjMembersReference() {
		return( getSchemaDefBuff()->getOptionalCsRamSchemaObjMembersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsRamSchemaObjImplNull() {
		return( getSchemaDefBuff()->isOptionalCsRamSchemaObjImplNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsRamSchemaObjImplValue() {
		return( getSchemaDefBuff()->getOptionalCsRamSchemaObjImplValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsRamSchemaObjImplReference() {
		return( getSchemaDefBuff()->getOptionalCsRamSchemaObjImplReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsRamSchemaObjUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsRamSchemaObjUsingNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsRamSchemaObjUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsRamSchemaObjUsingValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsRamSchemaObjUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsRamSchemaObjUsingReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgSchemaUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgSchemaUsingNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgSchemaUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgSchemaUsingValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgSchemaUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgSchemaUsingReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgSchemaFormattersNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgSchemaFormattersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgSchemaFormattersValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgSchemaFormattersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgSchemaFormattersReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgSchemaFormattersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgClientSchemaUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgClientSchemaUsingNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgClientSchemaUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgClientSchemaUsingValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgClientSchemaUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgClientSchemaUsingReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgClientSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgClientSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgClientSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgClientSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgClientSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgClientSchemaBodyReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgRqstSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaBodyReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgRqstSchemaUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaUsingNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaUsingValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaUsingReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgRqstSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaWireParsersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgRqstSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaXsdSpecReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgRqstSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRqstSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRqstSchemaXsdElementListReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgRspnSchemaBodyNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaBodyNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaBodyValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaBodyValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaBodyReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaBodyReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgRspnSchemaUsingNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaUsingNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaUsingValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaUsingValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaUsingReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaUsingReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgRspnSchemaWireParsersNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaWireParsersNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaWireParsersValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaWireParsersValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaWireParsersReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaWireParsersReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgRspnSchemaXsdElementListNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaXsdElementListNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaXsdElementListValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaXsdElementListValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaXsdElementListReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaXsdElementListReference() );
	}

	bool CFBamSchemaDefObj::isOptionalCsXMsgRspnSchemaXsdSpecNull() {
		return( getSchemaDefBuff()->isOptionalCsXMsgRspnSchemaXsdSpecNull() );
	}

	const std::string& CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaXsdSpecValue() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaXsdSpecValue() );
	}

	const std::string* CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaXsdSpecReference() {
		return( getSchemaDefBuff()->getOptionalCsXMsgRspnSchemaXsdSpecReference() );
	}


	cfint::ICFIntMinorVersionObj* CFBamSchemaDefObj::getRequiredContainerMinorVersion( bool forceRead ) {
		cfint::ICFIntMinorVersionObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getMinorVersionTableObj()->readMinorVersionByIdIdx( getPKey()->getRequiredTenantId(),
					getSchemaDefBuff()->getRequiredMinorVersionId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamSchemaDefObj::getOptionalComponentsTables( bool forceRead ) {
		std::vector<cfbam::ICFBamTableObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableBySchemaDefIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamValueObj*> CFBamSchemaDefObj::getOptionalComponentsTypes( bool forceRead ) {
		std::vector<cfbam::ICFBamValueObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->readValueByScopeIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaDefObj::getOptionalComponentsSchemaRefs( bool forceRead ) {
		std::vector<cfbam::ICFBamSchemaRefObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaRefTableObj()->readSchemaRefBySchemaIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfsec::ICFSecTenantObj* CFBamSchemaDefObj::getRequiredOwnerCTenant( bool forceRead ) {
		cfsec::ICFSecTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	CFBamSchemaDefObj::CFBamSchemaDefObj()
	: ICFBamSchemaDefObj(),
	  CFBamScopeObj()
	{
	}

	CFBamSchemaDefObj::CFBamSchemaDefObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamSchemaDefObj(),
	  CFBamScopeObj( argSchema )
	{
	}

	CFBamSchemaDefObj::~CFBamSchemaDefObj() {
	}

	cfbam::CFBamScopeBuff* CFBamSchemaDefObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamSchemaDefBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaDef()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamSchemaDefObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamSchemaDefObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamSchemaDefObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamSchemaDefObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamSchemaDefObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaDefObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_MinorVersionId, CFBamSchemaDefObj::getRequiredMinorVersionId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamSchemaDefObj::getRequiredName() ) );
		if( ! CFBamSchemaDefObj::isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, CFBamSchemaDefObj::getOptionalDbNameValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamSchemaDefObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamSchemaDefObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamSchemaDefObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamSchemaDefObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CopyrightPeriod, CFBamSchemaDefObj::getRequiredCopyrightPeriod() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CopyrightHolder, CFBamSchemaDefObj::getRequiredCopyrightHolder() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_AuthorEMail, CFBamSchemaDefObj::getRequiredAuthorEMail() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ProjectURL, CFBamSchemaDefObj::getRequiredProjectURL() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_PublishURI, CFBamSchemaDefObj::getRequiredPublishURI() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CommonLicenseCode, CFBamSchemaDefObj::getRequiredCommonLicenseCode() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CommonLicenseName, CFBamSchemaDefObj::getRequiredCommonLicenseName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CommonLicenseText, CFBamSchemaDefObj::getRequiredCommonLicenseText() ) );
		if( ! CFBamSchemaDefObj::isOptionalClientXFaceLicenseCodeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ClientXFaceLicenseCode, CFBamSchemaDefObj::getOptionalClientXFaceLicenseCodeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalClientXFaceLicenseNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ClientXFaceLicenseName, CFBamSchemaDefObj::getOptionalClientXFaceLicenseNameValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalClientXFaceLicenseTextNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ClientXFaceLicenseText, CFBamSchemaDefObj::getOptionalClientXFaceLicenseTextValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalClientImplLicenseCodeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ClientImplLicenseCode, CFBamSchemaDefObj::getOptionalClientImplLicenseCodeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalClientImplLicenseNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ClientImplLicenseName, CFBamSchemaDefObj::getOptionalClientImplLicenseNameValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalClientImplLicenseTextNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ClientImplLicenseText, CFBamSchemaDefObj::getOptionalClientImplLicenseTextValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalServerXFaceLicenseCodeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ServerXFaceLicenseCode, CFBamSchemaDefObj::getOptionalServerXFaceLicenseCodeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalServerXFaceLicenseNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ServerXFaceLicenseName, CFBamSchemaDefObj::getOptionalServerXFaceLicenseNameValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalServerXFaceLicenseTextNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ServerXFaceLicenseText, CFBamSchemaDefObj::getOptionalServerXFaceLicenseTextValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalServerImplLicenseCodeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ServerImplLicenseCode, CFBamSchemaDefObj::getOptionalServerImplLicenseCodeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalServerImplLicenseNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ServerImplLicenseName, CFBamSchemaDefObj::getOptionalServerImplLicenseNameValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalServerImplLicenseTextNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ServerImplLicenseText, CFBamSchemaDefObj::getOptionalServerImplLicenseTextValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSchemaObjImport, CFBamSchemaDefObj::getOptionalJSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJSchemaObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSchemaObjInterface, CFBamSchemaDefObj::getOptionalJSchemaObjInterfaceValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSchemaObjMembers, CFBamSchemaDefObj::getOptionalJSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJSchemaObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSchemaObjImplementation, CFBamSchemaDefObj::getOptionalJSchemaObjImplementationValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJDb2LUWSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JDb2LUWSchemaObjMembers, CFBamSchemaDefObj::getOptionalJDb2LUWSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJDb2LUWSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JDb2LUWSchemaObjImpl, CFBamSchemaDefObj::getOptionalJDb2LUWSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJDb2LUWSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JDb2LUWSchemaObjImport, CFBamSchemaDefObj::getOptionalJDb2LUWSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJMSSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMSSqlSchemaObjMembers, CFBamSchemaDefObj::getOptionalJMSSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJMSSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMSSqlSchemaObjImpl, CFBamSchemaDefObj::getOptionalJMSSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJMSSqlSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMSSqlSchemaObjImport, CFBamSchemaDefObj::getOptionalJMSSqlSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJMySqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMySqlSchemaObjMembers, CFBamSchemaDefObj::getOptionalJMySqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJMySqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMySqlSchemaObjImpl, CFBamSchemaDefObj::getOptionalJMySqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJMySqlSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMySqlSchemaObjImport, CFBamSchemaDefObj::getOptionalJMySqlSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJOracleSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JOracleSchemaObjMembers, CFBamSchemaDefObj::getOptionalJOracleSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJOracleSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JOracleSchemaObjImpl, CFBamSchemaDefObj::getOptionalJOracleSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJOracleSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JOracleSchemaObjImport, CFBamSchemaDefObj::getOptionalJOracleSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJPgSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JPgSqlSchemaObjMembers, CFBamSchemaDefObj::getOptionalJPgSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJPgSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JPgSqlSchemaObjImpl, CFBamSchemaDefObj::getOptionalJPgSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJPgSqlSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JPgSqlSchemaObjImport, CFBamSchemaDefObj::getOptionalJPgSqlSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJRamSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JRamSchemaObjMembers, CFBamSchemaDefObj::getOptionalJRamSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJRamSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JRamSchemaObjImpl, CFBamSchemaDefObj::getOptionalJRamSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJRamSchemaObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JRamSchemaObjImport, CFBamSchemaDefObj::getOptionalJRamSchemaObjImportValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgSchemaImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgSchemaImport, CFBamSchemaDefObj::getOptionalJXMsgSchemaImportValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgSchemaFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgSchemaFormatters, CFBamSchemaDefObj::getOptionalJXMsgSchemaFormattersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgClientSchemaImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgClientSchemaImport, CFBamSchemaDefObj::getOptionalJXMsgClientSchemaImportValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgClientSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgClientSchemaBody, CFBamSchemaDefObj::getOptionalJXMsgClientSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgRqstSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstSchemaBody, CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgRqstSchemaImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstSchemaImport, CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaImportValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgRqstSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstSchemaWireParsers, CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgRqstSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstSchemaXsdSpec, CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgRqstSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstSchemaXsdElementList, CFBamSchemaDefObj::getOptionalJXMsgRqstSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgRspnSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnSchemaBody, CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgRspnSchemaImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnSchemaImport, CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaImportValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgRspnSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnSchemaWireParsers, CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgRspnSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnSchemaXsdElementList, CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalJXMsgRspnSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnSchemaXsdSpec, CFBamSchemaDefObj::getOptionalJXMsgRspnSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSchemaObjInclude, CFBamSchemaDefObj::getOptionalCppSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppSchemaObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSchemaObjInterface, CFBamSchemaDefObj::getOptionalCppSchemaObjInterfaceValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSchemaObjMembers, CFBamSchemaDefObj::getOptionalCppSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppSchemaObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSchemaObjImplementation, CFBamSchemaDefObj::getOptionalCppSchemaObjImplementationValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppDb2LUWSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppDb2LUWSchemaObjMembers, CFBamSchemaDefObj::getOptionalCppDb2LUWSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppDb2LUWSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppDb2LUWSchemaObjImpl, CFBamSchemaDefObj::getOptionalCppDb2LUWSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppDb2LUWSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppDb2LUWSchemaObjInclude, CFBamSchemaDefObj::getOptionalCppDb2LUWSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppMSSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMSSqlSchemaObjMembers, CFBamSchemaDefObj::getOptionalCppMSSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppMSSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMSSqlSchemaObjImpl, CFBamSchemaDefObj::getOptionalCppMSSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppMSSqlSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMSSqlSchemaObjInclude, CFBamSchemaDefObj::getOptionalCppMSSqlSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppMySqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMySqlSchemaObjMembers, CFBamSchemaDefObj::getOptionalCppMySqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppMySqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMySqlSchemaObjImpl, CFBamSchemaDefObj::getOptionalCppMySqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppMySqlSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMySqlSchemaObjInclude, CFBamSchemaDefObj::getOptionalCppMySqlSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppOracleSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppOracleSchemaObjMembers, CFBamSchemaDefObj::getOptionalCppOracleSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppOracleSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppOracleSchemaObjImpl, CFBamSchemaDefObj::getOptionalCppOracleSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppOracleSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppOracleSchemaObjInclude, CFBamSchemaDefObj::getOptionalCppOracleSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppPgSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppPgSqlSchemaObjMembers, CFBamSchemaDefObj::getOptionalCppPgSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppPgSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppPgSqlSchemaObjImpl, CFBamSchemaDefObj::getOptionalCppPgSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppPgSqlSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppPgSqlSchemaObjInclude, CFBamSchemaDefObj::getOptionalCppPgSqlSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppRamSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppRamSchemaObjMembers, CFBamSchemaDefObj::getOptionalCppRamSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppRamSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppRamSchemaObjImpl, CFBamSchemaDefObj::getOptionalCppRamSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppRamSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppRamSchemaObjInclude, CFBamSchemaDefObj::getOptionalCppRamSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgSchemaInclude, CFBamSchemaDefObj::getOptionalCppXMsgSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgSchemaFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgSchemaFormatters, CFBamSchemaDefObj::getOptionalCppXMsgSchemaFormattersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgClientSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgClientSchemaInclude, CFBamSchemaDefObj::getOptionalCppXMsgClientSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgClientSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgClientSchemaBody, CFBamSchemaDefObj::getOptionalCppXMsgClientSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgRqstSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstSchemaBody, CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgRqstSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstSchemaInclude, CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgRqstSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstSchemaWireParsers, CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgRqstSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstSchemaXsdSpec, CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgRqstSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstSchemaXsdElementList, CFBamSchemaDefObj::getOptionalCppXMsgRqstSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgRspnSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnSchemaBody, CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgRspnSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnSchemaInclude, CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgRspnSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnSchemaWireParsers, CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgRspnSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnSchemaXsdElementList, CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCppXMsgRspnSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnSchemaXsdSpec, CFBamSchemaDefObj::getOptionalCppXMsgRspnSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSchemaObjInclude, CFBamSchemaDefObj::getOptionalHppSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppSchemaObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSchemaObjInterface, CFBamSchemaDefObj::getOptionalHppSchemaObjInterfaceValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSchemaObjMembers, CFBamSchemaDefObj::getOptionalHppSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppSchemaObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSchemaObjImplementation, CFBamSchemaDefObj::getOptionalHppSchemaObjImplementationValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppDb2LUWSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppDb2LUWSchemaObjMembers, CFBamSchemaDefObj::getOptionalHppDb2LUWSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppDb2LUWSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppDb2LUWSchemaObjImpl, CFBamSchemaDefObj::getOptionalHppDb2LUWSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppDb2LUWSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppDb2LUWSchemaObjInclude, CFBamSchemaDefObj::getOptionalHppDb2LUWSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppMSSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMSSqlSchemaObjMembers, CFBamSchemaDefObj::getOptionalHppMSSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppMSSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMSSqlSchemaObjImpl, CFBamSchemaDefObj::getOptionalHppMSSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppMSSqlSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMSSqlSchemaObjInclude, CFBamSchemaDefObj::getOptionalHppMSSqlSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppMySqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMySqlSchemaObjMembers, CFBamSchemaDefObj::getOptionalHppMySqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppMySqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMySqlSchemaObjImpl, CFBamSchemaDefObj::getOptionalHppMySqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppMySqlSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMySqlSchemaObjInclude, CFBamSchemaDefObj::getOptionalHppMySqlSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppOracleSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppOracleSchemaObjMembers, CFBamSchemaDefObj::getOptionalHppOracleSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppOracleSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppOracleSchemaObjImpl, CFBamSchemaDefObj::getOptionalHppOracleSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppOracleSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppOracleSchemaObjInclude, CFBamSchemaDefObj::getOptionalHppOracleSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppPgSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppPgSqlSchemaObjMembers, CFBamSchemaDefObj::getOptionalHppPgSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppPgSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppPgSqlSchemaObjImpl, CFBamSchemaDefObj::getOptionalHppPgSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppPgSqlSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppPgSqlSchemaObjInclude, CFBamSchemaDefObj::getOptionalHppPgSqlSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppRamSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppRamSchemaObjMembers, CFBamSchemaDefObj::getOptionalHppRamSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppRamSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppRamSchemaObjImpl, CFBamSchemaDefObj::getOptionalHppRamSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppRamSchemaObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppRamSchemaObjInclude, CFBamSchemaDefObj::getOptionalHppRamSchemaObjIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgSchemaInclude, CFBamSchemaDefObj::getOptionalHppXMsgSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgSchemaFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgSchemaFormatters, CFBamSchemaDefObj::getOptionalHppXMsgSchemaFormattersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgClientSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgClientSchemaInclude, CFBamSchemaDefObj::getOptionalHppXMsgClientSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgClientSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgClientSchemaBody, CFBamSchemaDefObj::getOptionalHppXMsgClientSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgRqstSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstSchemaBody, CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgRqstSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstSchemaInclude, CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgRqstSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstSchemaWireParsers, CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgRqstSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstSchemaXsdSpec, CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgRqstSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstSchemaXsdElementList, CFBamSchemaDefObj::getOptionalHppXMsgRqstSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgRspnSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnSchemaBody, CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgRspnSchemaIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnSchemaInclude, CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaIncludeValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgRspnSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnSchemaWireParsers, CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgRspnSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnSchemaXsdElementList, CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalHppXMsgRspnSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnSchemaXsdSpec, CFBamSchemaDefObj::getOptionalHppXMsgRspnSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSchemaObjUsing, CFBamSchemaDefObj::getOptionalCsSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsSchemaObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSchemaObjInterface, CFBamSchemaDefObj::getOptionalCsSchemaObjInterfaceValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSchemaObjMembers, CFBamSchemaDefObj::getOptionalCsSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsSchemaObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSchemaObjImplementation, CFBamSchemaDefObj::getOptionalCsSchemaObjImplementationValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsDb2LUWSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsDb2LUWSchemaObjMembers, CFBamSchemaDefObj::getOptionalCsDb2LUWSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsDb2LUWSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsDb2LUWSchemaObjImpl, CFBamSchemaDefObj::getOptionalCsDb2LUWSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsDb2LUWSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsDb2LUWSchemaObjUsing, CFBamSchemaDefObj::getOptionalCsDb2LUWSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsMSSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMSSqlSchemaObjMembers, CFBamSchemaDefObj::getOptionalCsMSSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsMSSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMSSqlSchemaObjImpl, CFBamSchemaDefObj::getOptionalCsMSSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsMSSqlSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMSSqlSchemaObjUsing, CFBamSchemaDefObj::getOptionalCsMSSqlSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsMySqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMySqlSchemaObjMembers, CFBamSchemaDefObj::getOptionalCsMySqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsMySqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMySqlSchemaObjImpl, CFBamSchemaDefObj::getOptionalCsMySqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsMySqlSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMySqlSchemaObjUsing, CFBamSchemaDefObj::getOptionalCsMySqlSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsOracleSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsOracleSchemaObjMembers, CFBamSchemaDefObj::getOptionalCsOracleSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsOracleSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsOracleSchemaObjImpl, CFBamSchemaDefObj::getOptionalCsOracleSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsOracleSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsOracleSchemaObjUsing, CFBamSchemaDefObj::getOptionalCsOracleSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsPgSqlSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsPgSqlSchemaObjMembers, CFBamSchemaDefObj::getOptionalCsPgSqlSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsPgSqlSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsPgSqlSchemaObjImpl, CFBamSchemaDefObj::getOptionalCsPgSqlSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsPgSqlSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsPgSqlSchemaObjUsing, CFBamSchemaDefObj::getOptionalCsPgSqlSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsRamSchemaObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsRamSchemaObjMembers, CFBamSchemaDefObj::getOptionalCsRamSchemaObjMembersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsRamSchemaObjImplNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsRamSchemaObjImpl, CFBamSchemaDefObj::getOptionalCsRamSchemaObjImplValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsRamSchemaObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsRamSchemaObjUsing, CFBamSchemaDefObj::getOptionalCsRamSchemaObjUsingValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgSchemaUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgSchemaUsing, CFBamSchemaDefObj::getOptionalCsXMsgSchemaUsingValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgSchemaFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgSchemaFormatters, CFBamSchemaDefObj::getOptionalCsXMsgSchemaFormattersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgClientSchemaUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgClientSchemaUsing, CFBamSchemaDefObj::getOptionalCsXMsgClientSchemaUsingValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgClientSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgClientSchemaBody, CFBamSchemaDefObj::getOptionalCsXMsgClientSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgRqstSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstSchemaBody, CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgRqstSchemaUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstSchemaUsing, CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaUsingValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgRqstSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstSchemaWireParsers, CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgRqstSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstSchemaXsdSpec, CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaXsdSpecValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgRqstSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstSchemaXsdElementList, CFBamSchemaDefObj::getOptionalCsXMsgRqstSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgRspnSchemaBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnSchemaBody, CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaBodyValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgRspnSchemaUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnSchemaUsing, CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaUsingValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgRspnSchemaWireParsersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnSchemaWireParsers, CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaWireParsersValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgRspnSchemaXsdElementListNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnSchemaXsdElementList, CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaXsdElementListValue() ) );
		}
		if( ! CFBamSchemaDefObj::isOptionalCsXMsgRspnSchemaXsdSpecNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnSchemaXsdSpec, CFBamSchemaDefObj::getOptionalCsXMsgRspnSchemaXsdSpecValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamSchemaDefObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamSchemaDefObj::getGenDefName() {
		return( cfbam::CFBamSchemaDefBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamSchemaDefObj::getScope() {
		cfint::ICFIntMinorVersionObj* scope = getRequiredContainerMinorVersion();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSchemaDefObj::getObjScope() {
		cfint::ICFIntMinorVersionObj* scope = getRequiredContainerMinorVersion();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamSchemaDefObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamSchemaDefObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamSchemaDefObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamSchemaDefObj::getObjQualifiedName() {
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

	std::string CFBamSchemaDefObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamSchemaDefObj::realize() {
		cfbam::ICFBamSchemaDefObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->realizeSchemaDef(
			(cfbam::ICFBamSchemaDefObj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamSchemaDefObj::read( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getSchemaDefBuff()->getRequiredTenantId(),
		getSchemaDefBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamSchemaDefObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamSchemaDefObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->lockSchemaDef( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamSchemaDefEditObj* CFBamSchemaDefObj::getSchemaDefEdit() {
		return( dynamic_cast<cfbam::ICFBamSchemaDefEditObj*>( edit ) );
	}

}
