// Description: C++18 base object instance implementation for CFBam Table.

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

using namespace std;

#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamScopeObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamobj/CFBamTableObj.hpp>

namespace cfbam {

	const std::string CFBamTableObj::CLASS_NAME( "CFBamTableObj" );
	const classcode_t CFBamTableObj::CLASS_CODE = 0xa808L;

	const int64_t CFBamTableObj::getRequiredSchemaDefId() {
		return( getTableBuff()->getRequiredSchemaDefId() );
	}

	const int64_t* CFBamTableObj::getRequiredSchemaDefIdReference() {
		return( getTableBuff()->getRequiredSchemaDefIdReference() );
	}

	bool CFBamTableObj::isOptionalDefSchemaTenantIdNull() {
		return( getTableBuff()->isOptionalDefSchemaTenantIdNull() );
	}

	const int64_t CFBamTableObj::getOptionalDefSchemaTenantIdValue() {
		return( getTableBuff()->getOptionalDefSchemaTenantIdValue() );
	}

	const int64_t* CFBamTableObj::getOptionalDefSchemaTenantIdReference() {
		return( getTableBuff()->getOptionalDefSchemaTenantIdReference() );
	}

	bool CFBamTableObj::isOptionalDefSchemaIdNull() {
		return( getTableBuff()->isOptionalDefSchemaIdNull() );
	}

	const int64_t CFBamTableObj::getOptionalDefSchemaIdValue() {
		return( getTableBuff()->getOptionalDefSchemaIdValue() );
	}

	const int64_t* CFBamTableObj::getOptionalDefSchemaIdReference() {
		return( getTableBuff()->getOptionalDefSchemaIdReference() );
	}

	const std::string& CFBamTableObj::getRequiredName() {
		return( getTableBuff()->getRequiredName() );
	}

	const std::string* CFBamTableObj::getRequiredNameReference() {
		return( getTableBuff()->getRequiredNameReference() );
	}

	bool CFBamTableObj::isOptionalDbNameNull() {
		return( getTableBuff()->isOptionalDbNameNull() );
	}

	const std::string& CFBamTableObj::getOptionalDbNameValue() {
		return( getTableBuff()->getOptionalDbNameValue() );
	}

	const std::string* CFBamTableObj::getOptionalDbNameReference() {
		return( getTableBuff()->getOptionalDbNameReference() );
	}

	bool CFBamTableObj::isOptionalShortNameNull() {
		return( getTableBuff()->isOptionalShortNameNull() );
	}

	const std::string& CFBamTableObj::getOptionalShortNameValue() {
		return( getTableBuff()->getOptionalShortNameValue() );
	}

	const std::string* CFBamTableObj::getOptionalShortNameReference() {
		return( getTableBuff()->getOptionalShortNameReference() );
	}

	bool CFBamTableObj::isOptionalLabelNull() {
		return( getTableBuff()->isOptionalLabelNull() );
	}

	const std::string& CFBamTableObj::getOptionalLabelValue() {
		return( getTableBuff()->getOptionalLabelValue() );
	}

	const std::string* CFBamTableObj::getOptionalLabelReference() {
		return( getTableBuff()->getOptionalLabelReference() );
	}

	bool CFBamTableObj::isOptionalShortDescriptionNull() {
		return( getTableBuff()->isOptionalShortDescriptionNull() );
	}

	const std::string& CFBamTableObj::getOptionalShortDescriptionValue() {
		return( getTableBuff()->getOptionalShortDescriptionValue() );
	}

	const std::string* CFBamTableObj::getOptionalShortDescriptionReference() {
		return( getTableBuff()->getOptionalShortDescriptionReference() );
	}

	bool CFBamTableObj::isOptionalDescriptionNull() {
		return( getTableBuff()->isOptionalDescriptionNull() );
	}

	const std::string& CFBamTableObj::getOptionalDescriptionValue() {
		return( getTableBuff()->getOptionalDescriptionValue() );
	}

	const std::string* CFBamTableObj::getOptionalDescriptionReference() {
		return( getTableBuff()->getOptionalDescriptionReference() );
	}

	const bool CFBamTableObj::getRequiredPageData() {
		return( getTableBuff()->getRequiredPageData() );
	}

	const bool* CFBamTableObj::getRequiredPageDataReference() {
		return( getTableBuff()->getRequiredPageDataReference() );
	}

	bool CFBamTableObj::isOptionalPrimaryIndexTenantIdNull() {
		return( getTableBuff()->isOptionalPrimaryIndexTenantIdNull() );
	}

	const int64_t CFBamTableObj::getOptionalPrimaryIndexTenantIdValue() {
		return( getTableBuff()->getOptionalPrimaryIndexTenantIdValue() );
	}

	const int64_t* CFBamTableObj::getOptionalPrimaryIndexTenantIdReference() {
		return( getTableBuff()->getOptionalPrimaryIndexTenantIdReference() );
	}

	bool CFBamTableObj::isOptionalPrimaryIndexIdNull() {
		return( getTableBuff()->isOptionalPrimaryIndexIdNull() );
	}

	const int64_t CFBamTableObj::getOptionalPrimaryIndexIdValue() {
		return( getTableBuff()->getOptionalPrimaryIndexIdValue() );
	}

	const int64_t* CFBamTableObj::getOptionalPrimaryIndexIdReference() {
		return( getTableBuff()->getOptionalPrimaryIndexIdReference() );
	}

	const std::string& CFBamTableObj::getRequiredTableClassCode() {
		return( getTableBuff()->getRequiredTableClassCode() );
	}

	const std::string* CFBamTableObj::getRequiredTableClassCodeReference() {
		return( getTableBuff()->getRequiredTableClassCodeReference() );
	}

	bool CFBamTableObj::isOptionalLookupIndexTenantIdNull() {
		return( getTableBuff()->isOptionalLookupIndexTenantIdNull() );
	}

	const int64_t CFBamTableObj::getOptionalLookupIndexTenantIdValue() {
		return( getTableBuff()->getOptionalLookupIndexTenantIdValue() );
	}

	const int64_t* CFBamTableObj::getOptionalLookupIndexTenantIdReference() {
		return( getTableBuff()->getOptionalLookupIndexTenantIdReference() );
	}

	bool CFBamTableObj::isOptionalLookupIndexIdNull() {
		return( getTableBuff()->isOptionalLookupIndexIdNull() );
	}

	const int64_t CFBamTableObj::getOptionalLookupIndexIdValue() {
		return( getTableBuff()->getOptionalLookupIndexIdValue() );
	}

	const int64_t* CFBamTableObj::getOptionalLookupIndexIdReference() {
		return( getTableBuff()->getOptionalLookupIndexIdReference() );
	}

	bool CFBamTableObj::isOptionalAltIndexTenantIdNull() {
		return( getTableBuff()->isOptionalAltIndexTenantIdNull() );
	}

	const int64_t CFBamTableObj::getOptionalAltIndexTenantIdValue() {
		return( getTableBuff()->getOptionalAltIndexTenantIdValue() );
	}

	const int64_t* CFBamTableObj::getOptionalAltIndexTenantIdReference() {
		return( getTableBuff()->getOptionalAltIndexTenantIdReference() );
	}

	bool CFBamTableObj::isOptionalAltIndexIdNull() {
		return( getTableBuff()->isOptionalAltIndexIdNull() );
	}

	const int64_t CFBamTableObj::getOptionalAltIndexIdValue() {
		return( getTableBuff()->getOptionalAltIndexIdValue() );
	}

	const int64_t* CFBamTableObj::getOptionalAltIndexIdReference() {
		return( getTableBuff()->getOptionalAltIndexIdReference() );
	}

	bool CFBamTableObj::isOptionalQualifyingTenantIdNull() {
		return( getTableBuff()->isOptionalQualifyingTenantIdNull() );
	}

	const int64_t CFBamTableObj::getOptionalQualifyingTenantIdValue() {
		return( getTableBuff()->getOptionalQualifyingTenantIdValue() );
	}

	const int64_t* CFBamTableObj::getOptionalQualifyingTenantIdReference() {
		return( getTableBuff()->getOptionalQualifyingTenantIdReference() );
	}

	bool CFBamTableObj::isOptionalQualifyingTableIdNull() {
		return( getTableBuff()->isOptionalQualifyingTableIdNull() );
	}

	const int64_t CFBamTableObj::getOptionalQualifyingTableIdValue() {
		return( getTableBuff()->getOptionalQualifyingTableIdValue() );
	}

	const int64_t* CFBamTableObj::getOptionalQualifyingTableIdReference() {
		return( getTableBuff()->getOptionalQualifyingTableIdReference() );
	}

	const bool CFBamTableObj::getRequiredIsInstantiable() {
		return( getTableBuff()->getRequiredIsInstantiable() );
	}

	const bool* CFBamTableObj::getRequiredIsInstantiableReference() {
		return( getTableBuff()->getRequiredIsInstantiableReference() );
	}

	const bool CFBamTableObj::getRequiredHasHistory() {
		return( getTableBuff()->getRequiredHasHistory() );
	}

	const bool* CFBamTableObj::getRequiredHasHistoryReference() {
		return( getTableBuff()->getRequiredHasHistoryReference() );
	}

	const bool CFBamTableObj::getRequiredHasAuditColumns() {
		return( getTableBuff()->getRequiredHasAuditColumns() );
	}

	const bool* CFBamTableObj::getRequiredHasAuditColumnsReference() {
		return( getTableBuff()->getRequiredHasAuditColumnsReference() );
	}

	const bool CFBamTableObj::getRequiredIsMutable() {
		return( getTableBuff()->getRequiredIsMutable() );
	}

	const bool* CFBamTableObj::getRequiredIsMutableReference() {
		return( getTableBuff()->getRequiredIsMutableReference() );
	}

	const bool CFBamTableObj::getRequiredIsServerOnly() {
		return( getTableBuff()->getRequiredIsServerOnly() );
	}

	const bool* CFBamTableObj::getRequiredIsServerOnlyReference() {
		return( getTableBuff()->getRequiredIsServerOnlyReference() );
	}

	const cfbam::ICFBamSchema::LoaderBehaviourEnum CFBamTableObj::getRequiredLoaderBehaviour() {
		return( getTableBuff()->getRequiredLoaderBehaviour() );
	}

	const cfbam::ICFBamSchema::LoaderBehaviourEnum* CFBamTableObj::getRequiredLoaderBehaviourReference() {
		return( getTableBuff()->getRequiredLoaderBehaviourReference() );
	}

	const cfbam::ICFBamSchema::SecScopeEnum CFBamTableObj::getRequiredSecScope() {
		return( getTableBuff()->getRequiredSecScope() );
	}

	const cfbam::ICFBamSchema::SecScopeEnum* CFBamTableObj::getRequiredSecScopeReference() {
		return( getTableBuff()->getRequiredSecScopeReference() );
	}

	bool CFBamTableObj::isOptionalJObjMembersNull() {
		return( getTableBuff()->isOptionalJObjMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalJObjMembersValue() {
		return( getTableBuff()->getOptionalJObjMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalJObjMembersReference() {
		return( getTableBuff()->getOptionalJObjMembersReference() );
	}

	bool CFBamTableObj::isOptionalJObjInterfaceNull() {
		return( getTableBuff()->isOptionalJObjInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalJObjInterfaceValue() {
		return( getTableBuff()->getOptionalJObjInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalJObjInterfaceReference() {
		return( getTableBuff()->getOptionalJObjInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalJObjImportNull() {
		return( getTableBuff()->isOptionalJObjImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJObjImportValue() {
		return( getTableBuff()->getOptionalJObjImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJObjImportReference() {
		return( getTableBuff()->getOptionalJObjImportReference() );
	}

	bool CFBamTableObj::isOptionalJObjImplementationNull() {
		return( getTableBuff()->isOptionalJObjImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalJObjImplementationValue() {
		return( getTableBuff()->getOptionalJObjImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalJObjImplementationReference() {
		return( getTableBuff()->getOptionalJObjImplementationReference() );
	}

	bool CFBamTableObj::isOptionalJEditObjMembersNull() {
		return( getTableBuff()->isOptionalJEditObjMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalJEditObjMembersValue() {
		return( getTableBuff()->getOptionalJEditObjMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalJEditObjMembersReference() {
		return( getTableBuff()->getOptionalJEditObjMembersReference() );
	}

	bool CFBamTableObj::isOptionalJEditObjInterfaceNull() {
		return( getTableBuff()->isOptionalJEditObjInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalJEditObjInterfaceValue() {
		return( getTableBuff()->getOptionalJEditObjInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalJEditObjInterfaceReference() {
		return( getTableBuff()->getOptionalJEditObjInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalJEditObjImportNull() {
		return( getTableBuff()->isOptionalJEditObjImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJEditObjImportValue() {
		return( getTableBuff()->getOptionalJEditObjImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJEditObjImportReference() {
		return( getTableBuff()->getOptionalJEditObjImportReference() );
	}

	bool CFBamTableObj::isOptionalJEditObjImplementationNull() {
		return( getTableBuff()->isOptionalJEditObjImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalJEditObjImplementationValue() {
		return( getTableBuff()->getOptionalJEditObjImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalJEditObjImplementationReference() {
		return( getTableBuff()->getOptionalJEditObjImplementationReference() );
	}

	bool CFBamTableObj::isOptionalJTableImportNull() {
		return( getTableBuff()->isOptionalJTableImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJTableImportValue() {
		return( getTableBuff()->getOptionalJTableImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJTableImportReference() {
		return( getTableBuff()->getOptionalJTableImportReference() );
	}

	bool CFBamTableObj::isOptionalJTableMembersNull() {
		return( getTableBuff()->isOptionalJTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalJTableMembersValue() {
		return( getTableBuff()->getOptionalJTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalJTableMembersReference() {
		return( getTableBuff()->getOptionalJTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalJTableInterfaceNull() {
		return( getTableBuff()->isOptionalJTableInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalJTableInterfaceValue() {
		return( getTableBuff()->getOptionalJTableInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalJTableInterfaceReference() {
		return( getTableBuff()->getOptionalJTableInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalJTableImplementationNull() {
		return( getTableBuff()->isOptionalJTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalJTableImplementationValue() {
		return( getTableBuff()->getOptionalJTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalJTableImplementationReference() {
		return( getTableBuff()->getOptionalJTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalJTableObjImportNull() {
		return( getTableBuff()->isOptionalJTableObjImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJTableObjImportValue() {
		return( getTableBuff()->getOptionalJTableObjImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJTableObjImportReference() {
		return( getTableBuff()->getOptionalJTableObjImportReference() );
	}

	bool CFBamTableObj::isOptionalJTableObjMembersNull() {
		return( getTableBuff()->isOptionalJTableObjMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalJTableObjMembersValue() {
		return( getTableBuff()->getOptionalJTableObjMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalJTableObjMembersReference() {
		return( getTableBuff()->getOptionalJTableObjMembersReference() );
	}

	bool CFBamTableObj::isOptionalJTableObjInterfaceNull() {
		return( getTableBuff()->isOptionalJTableObjInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalJTableObjInterfaceValue() {
		return( getTableBuff()->getOptionalJTableObjInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalJTableObjInterfaceReference() {
		return( getTableBuff()->getOptionalJTableObjInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalJTableObjImplementationNull() {
		return( getTableBuff()->isOptionalJTableObjImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalJTableObjImplementationValue() {
		return( getTableBuff()->getOptionalJTableObjImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalJTableObjImplementationReference() {
		return( getTableBuff()->getOptionalJTableObjImplementationReference() );
	}

	bool CFBamTableObj::isOptionalJDb2LUWTableImportNull() {
		return( getTableBuff()->isOptionalJDb2LUWTableImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJDb2LUWTableImportValue() {
		return( getTableBuff()->getOptionalJDb2LUWTableImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJDb2LUWTableImportReference() {
		return( getTableBuff()->getOptionalJDb2LUWTableImportReference() );
	}

	bool CFBamTableObj::isOptionalJDb2LUWTableMembersNull() {
		return( getTableBuff()->isOptionalJDb2LUWTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalJDb2LUWTableMembersValue() {
		return( getTableBuff()->getOptionalJDb2LUWTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalJDb2LUWTableMembersReference() {
		return( getTableBuff()->getOptionalJDb2LUWTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalJDb2LUWTableImplementationNull() {
		return( getTableBuff()->isOptionalJDb2LUWTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalJDb2LUWTableImplementationValue() {
		return( getTableBuff()->getOptionalJDb2LUWTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalJDb2LUWTableImplementationReference() {
		return( getTableBuff()->getOptionalJDb2LUWTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalJMSSqlTableImportNull() {
		return( getTableBuff()->isOptionalJMSSqlTableImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJMSSqlTableImportValue() {
		return( getTableBuff()->getOptionalJMSSqlTableImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJMSSqlTableImportReference() {
		return( getTableBuff()->getOptionalJMSSqlTableImportReference() );
	}

	bool CFBamTableObj::isOptionalJMSSqlTableMembersNull() {
		return( getTableBuff()->isOptionalJMSSqlTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalJMSSqlTableMembersValue() {
		return( getTableBuff()->getOptionalJMSSqlTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalJMSSqlTableMembersReference() {
		return( getTableBuff()->getOptionalJMSSqlTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalJMSSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalJMSSqlTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalJMSSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalJMSSqlTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalJMSSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalJMSSqlTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalJMySqlTableImportNull() {
		return( getTableBuff()->isOptionalJMySqlTableImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJMySqlTableImportValue() {
		return( getTableBuff()->getOptionalJMySqlTableImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJMySqlTableImportReference() {
		return( getTableBuff()->getOptionalJMySqlTableImportReference() );
	}

	bool CFBamTableObj::isOptionalJMySqlTableMembersNull() {
		return( getTableBuff()->isOptionalJMySqlTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalJMySqlTableMembersValue() {
		return( getTableBuff()->getOptionalJMySqlTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalJMySqlTableMembersReference() {
		return( getTableBuff()->getOptionalJMySqlTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalJMySqlTableImplementationNull() {
		return( getTableBuff()->isOptionalJMySqlTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalJMySqlTableImplementationValue() {
		return( getTableBuff()->getOptionalJMySqlTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalJMySqlTableImplementationReference() {
		return( getTableBuff()->getOptionalJMySqlTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalJOracleTableImportNull() {
		return( getTableBuff()->isOptionalJOracleTableImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJOracleTableImportValue() {
		return( getTableBuff()->getOptionalJOracleTableImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJOracleTableImportReference() {
		return( getTableBuff()->getOptionalJOracleTableImportReference() );
	}

	bool CFBamTableObj::isOptionalJOracleTableMembersNull() {
		return( getTableBuff()->isOptionalJOracleTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalJOracleTableMembersValue() {
		return( getTableBuff()->getOptionalJOracleTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalJOracleTableMembersReference() {
		return( getTableBuff()->getOptionalJOracleTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalJOracleTableImplementationNull() {
		return( getTableBuff()->isOptionalJOracleTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalJOracleTableImplementationValue() {
		return( getTableBuff()->getOptionalJOracleTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalJOracleTableImplementationReference() {
		return( getTableBuff()->getOptionalJOracleTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalJPgSqlTableImportNull() {
		return( getTableBuff()->isOptionalJPgSqlTableImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJPgSqlTableImportValue() {
		return( getTableBuff()->getOptionalJPgSqlTableImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJPgSqlTableImportReference() {
		return( getTableBuff()->getOptionalJPgSqlTableImportReference() );
	}

	bool CFBamTableObj::isOptionalJPgSqlTableMembersNull() {
		return( getTableBuff()->isOptionalJPgSqlTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalJPgSqlTableMembersValue() {
		return( getTableBuff()->getOptionalJPgSqlTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalJPgSqlTableMembersReference() {
		return( getTableBuff()->getOptionalJPgSqlTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalJPgSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalJPgSqlTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalJPgSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalJPgSqlTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalJPgSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalJPgSqlTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalJRamTableImportNull() {
		return( getTableBuff()->isOptionalJRamTableImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJRamTableImportValue() {
		return( getTableBuff()->getOptionalJRamTableImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJRamTableImportReference() {
		return( getTableBuff()->getOptionalJRamTableImportReference() );
	}

	bool CFBamTableObj::isOptionalJRamTableMembersNull() {
		return( getTableBuff()->isOptionalJRamTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalJRamTableMembersValue() {
		return( getTableBuff()->getOptionalJRamTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalJRamTableMembersReference() {
		return( getTableBuff()->getOptionalJRamTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalJRamTableImplementationNull() {
		return( getTableBuff()->isOptionalJRamTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalJRamTableImplementationValue() {
		return( getTableBuff()->getOptionalJRamTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalJRamTableImplementationReference() {
		return( getTableBuff()->getOptionalJRamTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalJSaxLoaderImportNull() {
		return( getTableBuff()->isOptionalJSaxLoaderImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJSaxLoaderImportValue() {
		return( getTableBuff()->getOptionalJSaxLoaderImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJSaxLoaderImportReference() {
		return( getTableBuff()->getOptionalJSaxLoaderImportReference() );
	}

	bool CFBamTableObj::isOptionalJSaxLoaderStartElementNull() {
		return( getTableBuff()->isOptionalJSaxLoaderStartElementNull() );
	}

	const std::string& CFBamTableObj::getOptionalJSaxLoaderStartElementValue() {
		return( getTableBuff()->getOptionalJSaxLoaderStartElementValue() );
	}

	const std::string* CFBamTableObj::getOptionalJSaxLoaderStartElementReference() {
		return( getTableBuff()->getOptionalJSaxLoaderStartElementReference() );
	}

	bool CFBamTableObj::isOptionalJSaxLoaderEndElementNull() {
		return( getTableBuff()->isOptionalJSaxLoaderEndElementNull() );
	}

	const std::string& CFBamTableObj::getOptionalJSaxLoaderEndElementValue() {
		return( getTableBuff()->getOptionalJSaxLoaderEndElementValue() );
	}

	const std::string* CFBamTableObj::getOptionalJSaxLoaderEndElementReference() {
		return( getTableBuff()->getOptionalJSaxLoaderEndElementReference() );
	}

	bool CFBamTableObj::isOptionalJXMsgTableImportNull() {
		return( getTableBuff()->isOptionalJXMsgTableImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJXMsgTableImportValue() {
		return( getTableBuff()->getOptionalJXMsgTableImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJXMsgTableImportReference() {
		return( getTableBuff()->getOptionalJXMsgTableImportReference() );
	}

	bool CFBamTableObj::isOptionalJXMsgTableFormattersNull() {
		return( getTableBuff()->isOptionalJXMsgTableFormattersNull() );
	}

	const std::string& CFBamTableObj::getOptionalJXMsgTableFormattersValue() {
		return( getTableBuff()->getOptionalJXMsgTableFormattersValue() );
	}

	const std::string* CFBamTableObj::getOptionalJXMsgTableFormattersReference() {
		return( getTableBuff()->getOptionalJXMsgTableFormattersReference() );
	}

	bool CFBamTableObj::isOptionalJXMsgRqstTableImportNull() {
		return( getTableBuff()->isOptionalJXMsgRqstTableImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJXMsgRqstTableImportValue() {
		return( getTableBuff()->getOptionalJXMsgRqstTableImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJXMsgRqstTableImportReference() {
		return( getTableBuff()->getOptionalJXMsgRqstTableImportReference() );
	}

	bool CFBamTableObj::isOptionalJXMsgRspnTableImportNull() {
		return( getTableBuff()->isOptionalJXMsgRspnTableImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJXMsgRspnTableImportValue() {
		return( getTableBuff()->getOptionalJXMsgRspnTableImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJXMsgRspnTableImportReference() {
		return( getTableBuff()->getOptionalJXMsgRspnTableImportReference() );
	}

	bool CFBamTableObj::isOptionalJXMsgClientTableImportNull() {
		return( getTableBuff()->isOptionalJXMsgClientTableImportNull() );
	}

	const std::string& CFBamTableObj::getOptionalJXMsgClientTableImportValue() {
		return( getTableBuff()->getOptionalJXMsgClientTableImportValue() );
	}

	const std::string* CFBamTableObj::getOptionalJXMsgClientTableImportReference() {
		return( getTableBuff()->getOptionalJXMsgClientTableImportReference() );
	}

	bool CFBamTableObj::isOptionalJXMsgRqstTableBodyNull() {
		return( getTableBuff()->isOptionalJXMsgRqstTableBodyNull() );
	}

	const std::string& CFBamTableObj::getOptionalJXMsgRqstTableBodyValue() {
		return( getTableBuff()->getOptionalJXMsgRqstTableBodyValue() );
	}

	const std::string* CFBamTableObj::getOptionalJXMsgRqstTableBodyReference() {
		return( getTableBuff()->getOptionalJXMsgRqstTableBodyReference() );
	}

	bool CFBamTableObj::isOptionalJXMsgRspnTableBodyNull() {
		return( getTableBuff()->isOptionalJXMsgRspnTableBodyNull() );
	}

	const std::string& CFBamTableObj::getOptionalJXMsgRspnTableBodyValue() {
		return( getTableBuff()->getOptionalJXMsgRspnTableBodyValue() );
	}

	const std::string* CFBamTableObj::getOptionalJXMsgRspnTableBodyReference() {
		return( getTableBuff()->getOptionalJXMsgRspnTableBodyReference() );
	}

	bool CFBamTableObj::isOptionalJXMsgClientTableBodyNull() {
		return( getTableBuff()->isOptionalJXMsgClientTableBodyNull() );
	}

	const std::string& CFBamTableObj::getOptionalJXMsgClientTableBodyValue() {
		return( getTableBuff()->getOptionalJXMsgClientTableBodyValue() );
	}

	const std::string* CFBamTableObj::getOptionalJXMsgClientTableBodyReference() {
		return( getTableBuff()->getOptionalJXMsgClientTableBodyReference() );
	}

	bool CFBamTableObj::isOptionalCppObjMembersNull() {
		return( getTableBuff()->isOptionalCppObjMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppObjMembersValue() {
		return( getTableBuff()->getOptionalCppObjMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppObjMembersReference() {
		return( getTableBuff()->getOptionalCppObjMembersReference() );
	}

	bool CFBamTableObj::isOptionalCppObjInterfaceNull() {
		return( getTableBuff()->isOptionalCppObjInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppObjInterfaceValue() {
		return( getTableBuff()->getOptionalCppObjInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppObjInterfaceReference() {
		return( getTableBuff()->getOptionalCppObjInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalCppObjIncludeNull() {
		return( getTableBuff()->isOptionalCppObjIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppObjIncludeValue() {
		return( getTableBuff()->getOptionalCppObjIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppObjIncludeReference() {
		return( getTableBuff()->getOptionalCppObjIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppObjImplementationNull() {
		return( getTableBuff()->isOptionalCppObjImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppObjImplementationValue() {
		return( getTableBuff()->getOptionalCppObjImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppObjImplementationReference() {
		return( getTableBuff()->getOptionalCppObjImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCppEditObjMembersNull() {
		return( getTableBuff()->isOptionalCppEditObjMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppEditObjMembersValue() {
		return( getTableBuff()->getOptionalCppEditObjMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppEditObjMembersReference() {
		return( getTableBuff()->getOptionalCppEditObjMembersReference() );
	}

	bool CFBamTableObj::isOptionalCppEditObjInterfaceNull() {
		return( getTableBuff()->isOptionalCppEditObjInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppEditObjInterfaceValue() {
		return( getTableBuff()->getOptionalCppEditObjInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppEditObjInterfaceReference() {
		return( getTableBuff()->getOptionalCppEditObjInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalCppEditObjIncludeNull() {
		return( getTableBuff()->isOptionalCppEditObjIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppEditObjIncludeValue() {
		return( getTableBuff()->getOptionalCppEditObjIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppEditObjIncludeReference() {
		return( getTableBuff()->getOptionalCppEditObjIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppEditObjImplementationNull() {
		return( getTableBuff()->isOptionalCppEditObjImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppEditObjImplementationValue() {
		return( getTableBuff()->getOptionalCppEditObjImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppEditObjImplementationReference() {
		return( getTableBuff()->getOptionalCppEditObjImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCppTableIncludeNull() {
		return( getTableBuff()->isOptionalCppTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppTableIncludeValue() {
		return( getTableBuff()->getOptionalCppTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppTableIncludeReference() {
		return( getTableBuff()->getOptionalCppTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppTableMembersNull() {
		return( getTableBuff()->isOptionalCppTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppTableMembersValue() {
		return( getTableBuff()->getOptionalCppTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppTableMembersReference() {
		return( getTableBuff()->getOptionalCppTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCppTableInterfaceNull() {
		return( getTableBuff()->isOptionalCppTableInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppTableInterfaceValue() {
		return( getTableBuff()->getOptionalCppTableInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppTableInterfaceReference() {
		return( getTableBuff()->getOptionalCppTableInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalCppTableImplementationNull() {
		return( getTableBuff()->isOptionalCppTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppTableImplementationValue() {
		return( getTableBuff()->getOptionalCppTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppTableImplementationReference() {
		return( getTableBuff()->getOptionalCppTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCppTableObjIncludeNull() {
		return( getTableBuff()->isOptionalCppTableObjIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppTableObjIncludeValue() {
		return( getTableBuff()->getOptionalCppTableObjIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppTableObjIncludeReference() {
		return( getTableBuff()->getOptionalCppTableObjIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppTableObjMembersNull() {
		return( getTableBuff()->isOptionalCppTableObjMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppTableObjMembersValue() {
		return( getTableBuff()->getOptionalCppTableObjMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppTableObjMembersReference() {
		return( getTableBuff()->getOptionalCppTableObjMembersReference() );
	}

	bool CFBamTableObj::isOptionalCppTableObjInterfaceNull() {
		return( getTableBuff()->isOptionalCppTableObjInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppTableObjInterfaceValue() {
		return( getTableBuff()->getOptionalCppTableObjInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppTableObjInterfaceReference() {
		return( getTableBuff()->getOptionalCppTableObjInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalCppTableObjImplementationNull() {
		return( getTableBuff()->isOptionalCppTableObjImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppTableObjImplementationValue() {
		return( getTableBuff()->getOptionalCppTableObjImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppTableObjImplementationReference() {
		return( getTableBuff()->getOptionalCppTableObjImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCppDb2LUWTableIncludeNull() {
		return( getTableBuff()->isOptionalCppDb2LUWTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppDb2LUWTableIncludeValue() {
		return( getTableBuff()->getOptionalCppDb2LUWTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppDb2LUWTableIncludeReference() {
		return( getTableBuff()->getOptionalCppDb2LUWTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppDb2LUWTableMembersNull() {
		return( getTableBuff()->isOptionalCppDb2LUWTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppDb2LUWTableMembersValue() {
		return( getTableBuff()->getOptionalCppDb2LUWTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppDb2LUWTableMembersReference() {
		return( getTableBuff()->getOptionalCppDb2LUWTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCppDb2LUWTableImplementationNull() {
		return( getTableBuff()->isOptionalCppDb2LUWTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppDb2LUWTableImplementationValue() {
		return( getTableBuff()->getOptionalCppDb2LUWTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppDb2LUWTableImplementationReference() {
		return( getTableBuff()->getOptionalCppDb2LUWTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCppMSSqlTableIncludeNull() {
		return( getTableBuff()->isOptionalCppMSSqlTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppMSSqlTableIncludeValue() {
		return( getTableBuff()->getOptionalCppMSSqlTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppMSSqlTableIncludeReference() {
		return( getTableBuff()->getOptionalCppMSSqlTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppMSSqlTableMembersNull() {
		return( getTableBuff()->isOptionalCppMSSqlTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppMSSqlTableMembersValue() {
		return( getTableBuff()->getOptionalCppMSSqlTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppMSSqlTableMembersReference() {
		return( getTableBuff()->getOptionalCppMSSqlTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCppMSSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalCppMSSqlTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppMSSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalCppMSSqlTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppMSSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalCppMSSqlTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCppMySqlTableIncludeNull() {
		return( getTableBuff()->isOptionalCppMySqlTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppMySqlTableIncludeValue() {
		return( getTableBuff()->getOptionalCppMySqlTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppMySqlTableIncludeReference() {
		return( getTableBuff()->getOptionalCppMySqlTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppMySqlTableMembersNull() {
		return( getTableBuff()->isOptionalCppMySqlTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppMySqlTableMembersValue() {
		return( getTableBuff()->getOptionalCppMySqlTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppMySqlTableMembersReference() {
		return( getTableBuff()->getOptionalCppMySqlTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCppMySqlTableImplementationNull() {
		return( getTableBuff()->isOptionalCppMySqlTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppMySqlTableImplementationValue() {
		return( getTableBuff()->getOptionalCppMySqlTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppMySqlTableImplementationReference() {
		return( getTableBuff()->getOptionalCppMySqlTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCppOracleTableIncludeNull() {
		return( getTableBuff()->isOptionalCppOracleTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppOracleTableIncludeValue() {
		return( getTableBuff()->getOptionalCppOracleTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppOracleTableIncludeReference() {
		return( getTableBuff()->getOptionalCppOracleTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppOracleTableMembersNull() {
		return( getTableBuff()->isOptionalCppOracleTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppOracleTableMembersValue() {
		return( getTableBuff()->getOptionalCppOracleTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppOracleTableMembersReference() {
		return( getTableBuff()->getOptionalCppOracleTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCppOracleTableImplementationNull() {
		return( getTableBuff()->isOptionalCppOracleTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppOracleTableImplementationValue() {
		return( getTableBuff()->getOptionalCppOracleTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppOracleTableImplementationReference() {
		return( getTableBuff()->getOptionalCppOracleTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCppPgSqlTableIncludeNull() {
		return( getTableBuff()->isOptionalCppPgSqlTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppPgSqlTableIncludeValue() {
		return( getTableBuff()->getOptionalCppPgSqlTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppPgSqlTableIncludeReference() {
		return( getTableBuff()->getOptionalCppPgSqlTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppPgSqlTableMembersNull() {
		return( getTableBuff()->isOptionalCppPgSqlTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppPgSqlTableMembersValue() {
		return( getTableBuff()->getOptionalCppPgSqlTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppPgSqlTableMembersReference() {
		return( getTableBuff()->getOptionalCppPgSqlTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCppPgSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalCppPgSqlTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppPgSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalCppPgSqlTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppPgSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalCppPgSqlTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCppRamTableIncludeNull() {
		return( getTableBuff()->isOptionalCppRamTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppRamTableIncludeValue() {
		return( getTableBuff()->getOptionalCppRamTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppRamTableIncludeReference() {
		return( getTableBuff()->getOptionalCppRamTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppRamTableMembersNull() {
		return( getTableBuff()->isOptionalCppRamTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppRamTableMembersValue() {
		return( getTableBuff()->getOptionalCppRamTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppRamTableMembersReference() {
		return( getTableBuff()->getOptionalCppRamTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCppRamTableImplementationNull() {
		return( getTableBuff()->isOptionalCppRamTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppRamTableImplementationValue() {
		return( getTableBuff()->getOptionalCppRamTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppRamTableImplementationReference() {
		return( getTableBuff()->getOptionalCppRamTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCppSaxLoaderIncludeNull() {
		return( getTableBuff()->isOptionalCppSaxLoaderIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppSaxLoaderIncludeValue() {
		return( getTableBuff()->getOptionalCppSaxLoaderIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppSaxLoaderIncludeReference() {
		return( getTableBuff()->getOptionalCppSaxLoaderIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppSaxLoaderStartElementNull() {
		return( getTableBuff()->isOptionalCppSaxLoaderStartElementNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppSaxLoaderStartElementValue() {
		return( getTableBuff()->getOptionalCppSaxLoaderStartElementValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppSaxLoaderStartElementReference() {
		return( getTableBuff()->getOptionalCppSaxLoaderStartElementReference() );
	}

	bool CFBamTableObj::isOptionalCppSaxLoaderEndElementNull() {
		return( getTableBuff()->isOptionalCppSaxLoaderEndElementNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppSaxLoaderEndElementValue() {
		return( getTableBuff()->getOptionalCppSaxLoaderEndElementValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppSaxLoaderEndElementReference() {
		return( getTableBuff()->getOptionalCppSaxLoaderEndElementReference() );
	}

	bool CFBamTableObj::isOptionalCppXMsgTableIncludeNull() {
		return( getTableBuff()->isOptionalCppXMsgTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppXMsgTableIncludeValue() {
		return( getTableBuff()->getOptionalCppXMsgTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppXMsgTableIncludeReference() {
		return( getTableBuff()->getOptionalCppXMsgTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppXMsgTableFormattersNull() {
		return( getTableBuff()->isOptionalCppXMsgTableFormattersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppXMsgTableFormattersValue() {
		return( getTableBuff()->getOptionalCppXMsgTableFormattersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppXMsgTableFormattersReference() {
		return( getTableBuff()->getOptionalCppXMsgTableFormattersReference() );
	}

	bool CFBamTableObj::isOptionalCppXMsgRqstTableIncludeNull() {
		return( getTableBuff()->isOptionalCppXMsgRqstTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppXMsgRqstTableIncludeValue() {
		return( getTableBuff()->getOptionalCppXMsgRqstTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppXMsgRqstTableIncludeReference() {
		return( getTableBuff()->getOptionalCppXMsgRqstTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppXMsgRspnTableIncludeNull() {
		return( getTableBuff()->isOptionalCppXMsgRspnTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppXMsgRspnTableIncludeValue() {
		return( getTableBuff()->getOptionalCppXMsgRspnTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppXMsgRspnTableIncludeReference() {
		return( getTableBuff()->getOptionalCppXMsgRspnTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppXMsgClientTableIncludeNull() {
		return( getTableBuff()->isOptionalCppXMsgClientTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppXMsgClientTableIncludeValue() {
		return( getTableBuff()->getOptionalCppXMsgClientTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppXMsgClientTableIncludeReference() {
		return( getTableBuff()->getOptionalCppXMsgClientTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalCppXMsgRqstTableBodyNull() {
		return( getTableBuff()->isOptionalCppXMsgRqstTableBodyNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppXMsgRqstTableBodyValue() {
		return( getTableBuff()->getOptionalCppXMsgRqstTableBodyValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppXMsgRqstTableBodyReference() {
		return( getTableBuff()->getOptionalCppXMsgRqstTableBodyReference() );
	}

	bool CFBamTableObj::isOptionalCppXMsgRspnTableBodyNull() {
		return( getTableBuff()->isOptionalCppXMsgRspnTableBodyNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppXMsgRspnTableBodyValue() {
		return( getTableBuff()->getOptionalCppXMsgRspnTableBodyValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppXMsgRspnTableBodyReference() {
		return( getTableBuff()->getOptionalCppXMsgRspnTableBodyReference() );
	}

	bool CFBamTableObj::isOptionalCppXMsgClientTableBodyNull() {
		return( getTableBuff()->isOptionalCppXMsgClientTableBodyNull() );
	}

	const std::string& CFBamTableObj::getOptionalCppXMsgClientTableBodyValue() {
		return( getTableBuff()->getOptionalCppXMsgClientTableBodyValue() );
	}

	const std::string* CFBamTableObj::getOptionalCppXMsgClientTableBodyReference() {
		return( getTableBuff()->getOptionalCppXMsgClientTableBodyReference() );
	}

	bool CFBamTableObj::isOptionalHppObjMembersNull() {
		return( getTableBuff()->isOptionalHppObjMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppObjMembersValue() {
		return( getTableBuff()->getOptionalHppObjMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppObjMembersReference() {
		return( getTableBuff()->getOptionalHppObjMembersReference() );
	}

	bool CFBamTableObj::isOptionalHppObjInterfaceNull() {
		return( getTableBuff()->isOptionalHppObjInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppObjInterfaceValue() {
		return( getTableBuff()->getOptionalHppObjInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppObjInterfaceReference() {
		return( getTableBuff()->getOptionalHppObjInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalHppObjIncludeNull() {
		return( getTableBuff()->isOptionalHppObjIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppObjIncludeValue() {
		return( getTableBuff()->getOptionalHppObjIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppObjIncludeReference() {
		return( getTableBuff()->getOptionalHppObjIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppObjImplementationNull() {
		return( getTableBuff()->isOptionalHppObjImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppObjImplementationValue() {
		return( getTableBuff()->getOptionalHppObjImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppObjImplementationReference() {
		return( getTableBuff()->getOptionalHppObjImplementationReference() );
	}

	bool CFBamTableObj::isOptionalHppEditObjMembersNull() {
		return( getTableBuff()->isOptionalHppEditObjMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppEditObjMembersValue() {
		return( getTableBuff()->getOptionalHppEditObjMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppEditObjMembersReference() {
		return( getTableBuff()->getOptionalHppEditObjMembersReference() );
	}

	bool CFBamTableObj::isOptionalHppEditObjInterfaceNull() {
		return( getTableBuff()->isOptionalHppEditObjInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppEditObjInterfaceValue() {
		return( getTableBuff()->getOptionalHppEditObjInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppEditObjInterfaceReference() {
		return( getTableBuff()->getOptionalHppEditObjInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalHppEditObjIncludeNull() {
		return( getTableBuff()->isOptionalHppEditObjIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppEditObjIncludeValue() {
		return( getTableBuff()->getOptionalHppEditObjIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppEditObjIncludeReference() {
		return( getTableBuff()->getOptionalHppEditObjIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppEditObjImplementationNull() {
		return( getTableBuff()->isOptionalHppEditObjImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppEditObjImplementationValue() {
		return( getTableBuff()->getOptionalHppEditObjImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppEditObjImplementationReference() {
		return( getTableBuff()->getOptionalHppEditObjImplementationReference() );
	}

	bool CFBamTableObj::isOptionalHppTableIncludeNull() {
		return( getTableBuff()->isOptionalHppTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppTableIncludeValue() {
		return( getTableBuff()->getOptionalHppTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppTableIncludeReference() {
		return( getTableBuff()->getOptionalHppTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppTableMembersNull() {
		return( getTableBuff()->isOptionalHppTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppTableMembersValue() {
		return( getTableBuff()->getOptionalHppTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppTableMembersReference() {
		return( getTableBuff()->getOptionalHppTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalHppTableInterfaceNull() {
		return( getTableBuff()->isOptionalHppTableInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppTableInterfaceValue() {
		return( getTableBuff()->getOptionalHppTableInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppTableInterfaceReference() {
		return( getTableBuff()->getOptionalHppTableInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalHppTableImplementationNull() {
		return( getTableBuff()->isOptionalHppTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppTableImplementationValue() {
		return( getTableBuff()->getOptionalHppTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppTableImplementationReference() {
		return( getTableBuff()->getOptionalHppTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalHppTableObjIncludeNull() {
		return( getTableBuff()->isOptionalHppTableObjIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppTableObjIncludeValue() {
		return( getTableBuff()->getOptionalHppTableObjIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppTableObjIncludeReference() {
		return( getTableBuff()->getOptionalHppTableObjIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppTableObjMembersNull() {
		return( getTableBuff()->isOptionalHppTableObjMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppTableObjMembersValue() {
		return( getTableBuff()->getOptionalHppTableObjMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppTableObjMembersReference() {
		return( getTableBuff()->getOptionalHppTableObjMembersReference() );
	}

	bool CFBamTableObj::isOptionalHppTableObjInterfaceNull() {
		return( getTableBuff()->isOptionalHppTableObjInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppTableObjInterfaceValue() {
		return( getTableBuff()->getOptionalHppTableObjInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppTableObjInterfaceReference() {
		return( getTableBuff()->getOptionalHppTableObjInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalHppTableObjImplementationNull() {
		return( getTableBuff()->isOptionalHppTableObjImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppTableObjImplementationValue() {
		return( getTableBuff()->getOptionalHppTableObjImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppTableObjImplementationReference() {
		return( getTableBuff()->getOptionalHppTableObjImplementationReference() );
	}

	bool CFBamTableObj::isOptionalHppDb2LUWTableIncludeNull() {
		return( getTableBuff()->isOptionalHppDb2LUWTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppDb2LUWTableIncludeValue() {
		return( getTableBuff()->getOptionalHppDb2LUWTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppDb2LUWTableIncludeReference() {
		return( getTableBuff()->getOptionalHppDb2LUWTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppDb2LUWTableMembersNull() {
		return( getTableBuff()->isOptionalHppDb2LUWTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppDb2LUWTableMembersValue() {
		return( getTableBuff()->getOptionalHppDb2LUWTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppDb2LUWTableMembersReference() {
		return( getTableBuff()->getOptionalHppDb2LUWTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalHppDb2LUWTableImplementationNull() {
		return( getTableBuff()->isOptionalHppDb2LUWTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppDb2LUWTableImplementationValue() {
		return( getTableBuff()->getOptionalHppDb2LUWTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppDb2LUWTableImplementationReference() {
		return( getTableBuff()->getOptionalHppDb2LUWTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalHppMSSqlTableIncludeNull() {
		return( getTableBuff()->isOptionalHppMSSqlTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppMSSqlTableIncludeValue() {
		return( getTableBuff()->getOptionalHppMSSqlTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppMSSqlTableIncludeReference() {
		return( getTableBuff()->getOptionalHppMSSqlTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppMSSqlTableMembersNull() {
		return( getTableBuff()->isOptionalHppMSSqlTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppMSSqlTableMembersValue() {
		return( getTableBuff()->getOptionalHppMSSqlTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppMSSqlTableMembersReference() {
		return( getTableBuff()->getOptionalHppMSSqlTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalHppMSSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalHppMSSqlTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppMSSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalHppMSSqlTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppMSSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalHppMSSqlTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalHppMySqlTableIncludeNull() {
		return( getTableBuff()->isOptionalHppMySqlTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppMySqlTableIncludeValue() {
		return( getTableBuff()->getOptionalHppMySqlTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppMySqlTableIncludeReference() {
		return( getTableBuff()->getOptionalHppMySqlTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppMySqlTableMembersNull() {
		return( getTableBuff()->isOptionalHppMySqlTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppMySqlTableMembersValue() {
		return( getTableBuff()->getOptionalHppMySqlTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppMySqlTableMembersReference() {
		return( getTableBuff()->getOptionalHppMySqlTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalHppMySqlTableImplementationNull() {
		return( getTableBuff()->isOptionalHppMySqlTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppMySqlTableImplementationValue() {
		return( getTableBuff()->getOptionalHppMySqlTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppMySqlTableImplementationReference() {
		return( getTableBuff()->getOptionalHppMySqlTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalHppOracleTableIncludeNull() {
		return( getTableBuff()->isOptionalHppOracleTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppOracleTableIncludeValue() {
		return( getTableBuff()->getOptionalHppOracleTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppOracleTableIncludeReference() {
		return( getTableBuff()->getOptionalHppOracleTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppOracleTableMembersNull() {
		return( getTableBuff()->isOptionalHppOracleTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppOracleTableMembersValue() {
		return( getTableBuff()->getOptionalHppOracleTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppOracleTableMembersReference() {
		return( getTableBuff()->getOptionalHppOracleTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalHppOracleTableImplementationNull() {
		return( getTableBuff()->isOptionalHppOracleTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppOracleTableImplementationValue() {
		return( getTableBuff()->getOptionalHppOracleTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppOracleTableImplementationReference() {
		return( getTableBuff()->getOptionalHppOracleTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalHppPgSqlTableIncludeNull() {
		return( getTableBuff()->isOptionalHppPgSqlTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppPgSqlTableIncludeValue() {
		return( getTableBuff()->getOptionalHppPgSqlTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppPgSqlTableIncludeReference() {
		return( getTableBuff()->getOptionalHppPgSqlTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppPgSqlTableMembersNull() {
		return( getTableBuff()->isOptionalHppPgSqlTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppPgSqlTableMembersValue() {
		return( getTableBuff()->getOptionalHppPgSqlTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppPgSqlTableMembersReference() {
		return( getTableBuff()->getOptionalHppPgSqlTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalHppPgSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalHppPgSqlTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppPgSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalHppPgSqlTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppPgSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalHppPgSqlTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalHppRamTableIncludeNull() {
		return( getTableBuff()->isOptionalHppRamTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppRamTableIncludeValue() {
		return( getTableBuff()->getOptionalHppRamTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppRamTableIncludeReference() {
		return( getTableBuff()->getOptionalHppRamTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppRamTableMembersNull() {
		return( getTableBuff()->isOptionalHppRamTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppRamTableMembersValue() {
		return( getTableBuff()->getOptionalHppRamTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppRamTableMembersReference() {
		return( getTableBuff()->getOptionalHppRamTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalHppRamTableImplementationNull() {
		return( getTableBuff()->isOptionalHppRamTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppRamTableImplementationValue() {
		return( getTableBuff()->getOptionalHppRamTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppRamTableImplementationReference() {
		return( getTableBuff()->getOptionalHppRamTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalHppSaxLoaderIncludeNull() {
		return( getTableBuff()->isOptionalHppSaxLoaderIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppSaxLoaderIncludeValue() {
		return( getTableBuff()->getOptionalHppSaxLoaderIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppSaxLoaderIncludeReference() {
		return( getTableBuff()->getOptionalHppSaxLoaderIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppSaxLoaderStartElementNull() {
		return( getTableBuff()->isOptionalHppSaxLoaderStartElementNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppSaxLoaderStartElementValue() {
		return( getTableBuff()->getOptionalHppSaxLoaderStartElementValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppSaxLoaderStartElementReference() {
		return( getTableBuff()->getOptionalHppSaxLoaderStartElementReference() );
	}

	bool CFBamTableObj::isOptionalHppSaxLoaderEndElementNull() {
		return( getTableBuff()->isOptionalHppSaxLoaderEndElementNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppSaxLoaderEndElementValue() {
		return( getTableBuff()->getOptionalHppSaxLoaderEndElementValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppSaxLoaderEndElementReference() {
		return( getTableBuff()->getOptionalHppSaxLoaderEndElementReference() );
	}

	bool CFBamTableObj::isOptionalHppXMsgTableIncludeNull() {
		return( getTableBuff()->isOptionalHppXMsgTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppXMsgTableIncludeValue() {
		return( getTableBuff()->getOptionalHppXMsgTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppXMsgTableIncludeReference() {
		return( getTableBuff()->getOptionalHppXMsgTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppXMsgTableFormattersNull() {
		return( getTableBuff()->isOptionalHppXMsgTableFormattersNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppXMsgTableFormattersValue() {
		return( getTableBuff()->getOptionalHppXMsgTableFormattersValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppXMsgTableFormattersReference() {
		return( getTableBuff()->getOptionalHppXMsgTableFormattersReference() );
	}

	bool CFBamTableObj::isOptionalHppXMsgRqstTableIncludeNull() {
		return( getTableBuff()->isOptionalHppXMsgRqstTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppXMsgRqstTableIncludeValue() {
		return( getTableBuff()->getOptionalHppXMsgRqstTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppXMsgRqstTableIncludeReference() {
		return( getTableBuff()->getOptionalHppXMsgRqstTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppXMsgRspnTableIncludeNull() {
		return( getTableBuff()->isOptionalHppXMsgRspnTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppXMsgRspnTableIncludeValue() {
		return( getTableBuff()->getOptionalHppXMsgRspnTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppXMsgRspnTableIncludeReference() {
		return( getTableBuff()->getOptionalHppXMsgRspnTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppXMsgClientTableIncludeNull() {
		return( getTableBuff()->isOptionalHppXMsgClientTableIncludeNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppXMsgClientTableIncludeValue() {
		return( getTableBuff()->getOptionalHppXMsgClientTableIncludeValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppXMsgClientTableIncludeReference() {
		return( getTableBuff()->getOptionalHppXMsgClientTableIncludeReference() );
	}

	bool CFBamTableObj::isOptionalHppXMsgRqstTableBodyNull() {
		return( getTableBuff()->isOptionalHppXMsgRqstTableBodyNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppXMsgRqstTableBodyValue() {
		return( getTableBuff()->getOptionalHppXMsgRqstTableBodyValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppXMsgRqstTableBodyReference() {
		return( getTableBuff()->getOptionalHppXMsgRqstTableBodyReference() );
	}

	bool CFBamTableObj::isOptionalHppXMsgRspnTableBodyNull() {
		return( getTableBuff()->isOptionalHppXMsgRspnTableBodyNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppXMsgRspnTableBodyValue() {
		return( getTableBuff()->getOptionalHppXMsgRspnTableBodyValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppXMsgRspnTableBodyReference() {
		return( getTableBuff()->getOptionalHppXMsgRspnTableBodyReference() );
	}

	bool CFBamTableObj::isOptionalHppXMsgClientTableBodyNull() {
		return( getTableBuff()->isOptionalHppXMsgClientTableBodyNull() );
	}

	const std::string& CFBamTableObj::getOptionalHppXMsgClientTableBodyValue() {
		return( getTableBuff()->getOptionalHppXMsgClientTableBodyValue() );
	}

	const std::string* CFBamTableObj::getOptionalHppXMsgClientTableBodyReference() {
		return( getTableBuff()->getOptionalHppXMsgClientTableBodyReference() );
	}

	bool CFBamTableObj::isOptionalCsObjMembersNull() {
		return( getTableBuff()->isOptionalCsObjMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsObjMembersValue() {
		return( getTableBuff()->getOptionalCsObjMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsObjMembersReference() {
		return( getTableBuff()->getOptionalCsObjMembersReference() );
	}

	bool CFBamTableObj::isOptionalCsObjInterfaceNull() {
		return( getTableBuff()->isOptionalCsObjInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsObjInterfaceValue() {
		return( getTableBuff()->getOptionalCsObjInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsObjInterfaceReference() {
		return( getTableBuff()->getOptionalCsObjInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalCsObjUsingNull() {
		return( getTableBuff()->isOptionalCsObjUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsObjUsingValue() {
		return( getTableBuff()->getOptionalCsObjUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsObjUsingReference() {
		return( getTableBuff()->getOptionalCsObjUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsObjImplementationNull() {
		return( getTableBuff()->isOptionalCsObjImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsObjImplementationValue() {
		return( getTableBuff()->getOptionalCsObjImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsObjImplementationReference() {
		return( getTableBuff()->getOptionalCsObjImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCsEditObjMembersNull() {
		return( getTableBuff()->isOptionalCsEditObjMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsEditObjMembersValue() {
		return( getTableBuff()->getOptionalCsEditObjMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsEditObjMembersReference() {
		return( getTableBuff()->getOptionalCsEditObjMembersReference() );
	}

	bool CFBamTableObj::isOptionalCsEditObjInterfaceNull() {
		return( getTableBuff()->isOptionalCsEditObjInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsEditObjInterfaceValue() {
		return( getTableBuff()->getOptionalCsEditObjInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsEditObjInterfaceReference() {
		return( getTableBuff()->getOptionalCsEditObjInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalCsEditObjUsingNull() {
		return( getTableBuff()->isOptionalCsEditObjUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsEditObjUsingValue() {
		return( getTableBuff()->getOptionalCsEditObjUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsEditObjUsingReference() {
		return( getTableBuff()->getOptionalCsEditObjUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsEditObjImplementationNull() {
		return( getTableBuff()->isOptionalCsEditObjImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsEditObjImplementationValue() {
		return( getTableBuff()->getOptionalCsEditObjImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsEditObjImplementationReference() {
		return( getTableBuff()->getOptionalCsEditObjImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCsTableUsingNull() {
		return( getTableBuff()->isOptionalCsTableUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsTableUsingValue() {
		return( getTableBuff()->getOptionalCsTableUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsTableUsingReference() {
		return( getTableBuff()->getOptionalCsTableUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsTableMembersNull() {
		return( getTableBuff()->isOptionalCsTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsTableMembersValue() {
		return( getTableBuff()->getOptionalCsTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsTableMembersReference() {
		return( getTableBuff()->getOptionalCsTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCsTableInterfaceNull() {
		return( getTableBuff()->isOptionalCsTableInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsTableInterfaceValue() {
		return( getTableBuff()->getOptionalCsTableInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsTableInterfaceReference() {
		return( getTableBuff()->getOptionalCsTableInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalCsTableImplementationNull() {
		return( getTableBuff()->isOptionalCsTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsTableImplementationValue() {
		return( getTableBuff()->getOptionalCsTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsTableImplementationReference() {
		return( getTableBuff()->getOptionalCsTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCsTableObjUsingNull() {
		return( getTableBuff()->isOptionalCsTableObjUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsTableObjUsingValue() {
		return( getTableBuff()->getOptionalCsTableObjUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsTableObjUsingReference() {
		return( getTableBuff()->getOptionalCsTableObjUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsTableObjMembersNull() {
		return( getTableBuff()->isOptionalCsTableObjMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsTableObjMembersValue() {
		return( getTableBuff()->getOptionalCsTableObjMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsTableObjMembersReference() {
		return( getTableBuff()->getOptionalCsTableObjMembersReference() );
	}

	bool CFBamTableObj::isOptionalCsTableObjInterfaceNull() {
		return( getTableBuff()->isOptionalCsTableObjInterfaceNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsTableObjInterfaceValue() {
		return( getTableBuff()->getOptionalCsTableObjInterfaceValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsTableObjInterfaceReference() {
		return( getTableBuff()->getOptionalCsTableObjInterfaceReference() );
	}

	bool CFBamTableObj::isOptionalCsTableObjImplementationNull() {
		return( getTableBuff()->isOptionalCsTableObjImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsTableObjImplementationValue() {
		return( getTableBuff()->getOptionalCsTableObjImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsTableObjImplementationReference() {
		return( getTableBuff()->getOptionalCsTableObjImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCsDb2LUWTableUsingNull() {
		return( getTableBuff()->isOptionalCsDb2LUWTableUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsDb2LUWTableUsingValue() {
		return( getTableBuff()->getOptionalCsDb2LUWTableUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsDb2LUWTableUsingReference() {
		return( getTableBuff()->getOptionalCsDb2LUWTableUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsDb2LUWTableMembersNull() {
		return( getTableBuff()->isOptionalCsDb2LUWTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsDb2LUWTableMembersValue() {
		return( getTableBuff()->getOptionalCsDb2LUWTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsDb2LUWTableMembersReference() {
		return( getTableBuff()->getOptionalCsDb2LUWTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCsDb2LUWTableImplementationNull() {
		return( getTableBuff()->isOptionalCsDb2LUWTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsDb2LUWTableImplementationValue() {
		return( getTableBuff()->getOptionalCsDb2LUWTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsDb2LUWTableImplementationReference() {
		return( getTableBuff()->getOptionalCsDb2LUWTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCsMSSqlTableUsingNull() {
		return( getTableBuff()->isOptionalCsMSSqlTableUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsMSSqlTableUsingValue() {
		return( getTableBuff()->getOptionalCsMSSqlTableUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsMSSqlTableUsingReference() {
		return( getTableBuff()->getOptionalCsMSSqlTableUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsMSSqlTableMembersNull() {
		return( getTableBuff()->isOptionalCsMSSqlTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsMSSqlTableMembersValue() {
		return( getTableBuff()->getOptionalCsMSSqlTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsMSSqlTableMembersReference() {
		return( getTableBuff()->getOptionalCsMSSqlTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCsMSSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalCsMSSqlTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsMSSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalCsMSSqlTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsMSSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalCsMSSqlTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCsMySqlTableUsingNull() {
		return( getTableBuff()->isOptionalCsMySqlTableUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsMySqlTableUsingValue() {
		return( getTableBuff()->getOptionalCsMySqlTableUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsMySqlTableUsingReference() {
		return( getTableBuff()->getOptionalCsMySqlTableUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsMySqlTableMembersNull() {
		return( getTableBuff()->isOptionalCsMySqlTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsMySqlTableMembersValue() {
		return( getTableBuff()->getOptionalCsMySqlTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsMySqlTableMembersReference() {
		return( getTableBuff()->getOptionalCsMySqlTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCsMySqlTableImplementationNull() {
		return( getTableBuff()->isOptionalCsMySqlTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsMySqlTableImplementationValue() {
		return( getTableBuff()->getOptionalCsMySqlTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsMySqlTableImplementationReference() {
		return( getTableBuff()->getOptionalCsMySqlTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCsOracleTableUsingNull() {
		return( getTableBuff()->isOptionalCsOracleTableUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsOracleTableUsingValue() {
		return( getTableBuff()->getOptionalCsOracleTableUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsOracleTableUsingReference() {
		return( getTableBuff()->getOptionalCsOracleTableUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsOracleTableMembersNull() {
		return( getTableBuff()->isOptionalCsOracleTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsOracleTableMembersValue() {
		return( getTableBuff()->getOptionalCsOracleTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsOracleTableMembersReference() {
		return( getTableBuff()->getOptionalCsOracleTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCsOracleTableImplementationNull() {
		return( getTableBuff()->isOptionalCsOracleTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsOracleTableImplementationValue() {
		return( getTableBuff()->getOptionalCsOracleTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsOracleTableImplementationReference() {
		return( getTableBuff()->getOptionalCsOracleTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCsPgSqlTableUsingNull() {
		return( getTableBuff()->isOptionalCsPgSqlTableUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsPgSqlTableUsingValue() {
		return( getTableBuff()->getOptionalCsPgSqlTableUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsPgSqlTableUsingReference() {
		return( getTableBuff()->getOptionalCsPgSqlTableUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsPgSqlTableMembersNull() {
		return( getTableBuff()->isOptionalCsPgSqlTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsPgSqlTableMembersValue() {
		return( getTableBuff()->getOptionalCsPgSqlTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsPgSqlTableMembersReference() {
		return( getTableBuff()->getOptionalCsPgSqlTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCsPgSqlTableImplementationNull() {
		return( getTableBuff()->isOptionalCsPgSqlTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsPgSqlTableImplementationValue() {
		return( getTableBuff()->getOptionalCsPgSqlTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsPgSqlTableImplementationReference() {
		return( getTableBuff()->getOptionalCsPgSqlTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCsRamTableUsingNull() {
		return( getTableBuff()->isOptionalCsRamTableUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsRamTableUsingValue() {
		return( getTableBuff()->getOptionalCsRamTableUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsRamTableUsingReference() {
		return( getTableBuff()->getOptionalCsRamTableUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsRamTableMembersNull() {
		return( getTableBuff()->isOptionalCsRamTableMembersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsRamTableMembersValue() {
		return( getTableBuff()->getOptionalCsRamTableMembersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsRamTableMembersReference() {
		return( getTableBuff()->getOptionalCsRamTableMembersReference() );
	}

	bool CFBamTableObj::isOptionalCsRamTableImplementationNull() {
		return( getTableBuff()->isOptionalCsRamTableImplementationNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsRamTableImplementationValue() {
		return( getTableBuff()->getOptionalCsRamTableImplementationValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsRamTableImplementationReference() {
		return( getTableBuff()->getOptionalCsRamTableImplementationReference() );
	}

	bool CFBamTableObj::isOptionalCsSaxLoaderUsingNull() {
		return( getTableBuff()->isOptionalCsSaxLoaderUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsSaxLoaderUsingValue() {
		return( getTableBuff()->getOptionalCsSaxLoaderUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsSaxLoaderUsingReference() {
		return( getTableBuff()->getOptionalCsSaxLoaderUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsSaxLoaderStartElementNull() {
		return( getTableBuff()->isOptionalCsSaxLoaderStartElementNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsSaxLoaderStartElementValue() {
		return( getTableBuff()->getOptionalCsSaxLoaderStartElementValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsSaxLoaderStartElementReference() {
		return( getTableBuff()->getOptionalCsSaxLoaderStartElementReference() );
	}

	bool CFBamTableObj::isOptionalCsSaxLoaderEndElementNull() {
		return( getTableBuff()->isOptionalCsSaxLoaderEndElementNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsSaxLoaderEndElementValue() {
		return( getTableBuff()->getOptionalCsSaxLoaderEndElementValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsSaxLoaderEndElementReference() {
		return( getTableBuff()->getOptionalCsSaxLoaderEndElementReference() );
	}

	bool CFBamTableObj::isOptionalCsXMsgTableUsingNull() {
		return( getTableBuff()->isOptionalCsXMsgTableUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsXMsgTableUsingValue() {
		return( getTableBuff()->getOptionalCsXMsgTableUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsXMsgTableUsingReference() {
		return( getTableBuff()->getOptionalCsXMsgTableUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsXMsgTableFormattersNull() {
		return( getTableBuff()->isOptionalCsXMsgTableFormattersNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsXMsgTableFormattersValue() {
		return( getTableBuff()->getOptionalCsXMsgTableFormattersValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsXMsgTableFormattersReference() {
		return( getTableBuff()->getOptionalCsXMsgTableFormattersReference() );
	}

	bool CFBamTableObj::isOptionalCsXMsgRqstTableUsingNull() {
		return( getTableBuff()->isOptionalCsXMsgRqstTableUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsXMsgRqstTableUsingValue() {
		return( getTableBuff()->getOptionalCsXMsgRqstTableUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsXMsgRqstTableUsingReference() {
		return( getTableBuff()->getOptionalCsXMsgRqstTableUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsXMsgRspnTableUsingNull() {
		return( getTableBuff()->isOptionalCsXMsgRspnTableUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsXMsgRspnTableUsingValue() {
		return( getTableBuff()->getOptionalCsXMsgRspnTableUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsXMsgRspnTableUsingReference() {
		return( getTableBuff()->getOptionalCsXMsgRspnTableUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsXMsgClientTableUsingNull() {
		return( getTableBuff()->isOptionalCsXMsgClientTableUsingNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsXMsgClientTableUsingValue() {
		return( getTableBuff()->getOptionalCsXMsgClientTableUsingValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsXMsgClientTableUsingReference() {
		return( getTableBuff()->getOptionalCsXMsgClientTableUsingReference() );
	}

	bool CFBamTableObj::isOptionalCsXMsgRqstTableBodyNull() {
		return( getTableBuff()->isOptionalCsXMsgRqstTableBodyNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsXMsgRqstTableBodyValue() {
		return( getTableBuff()->getOptionalCsXMsgRqstTableBodyValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsXMsgRqstTableBodyReference() {
		return( getTableBuff()->getOptionalCsXMsgRqstTableBodyReference() );
	}

	bool CFBamTableObj::isOptionalCsXMsgRspnTableBodyNull() {
		return( getTableBuff()->isOptionalCsXMsgRspnTableBodyNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsXMsgRspnTableBodyValue() {
		return( getTableBuff()->getOptionalCsXMsgRspnTableBodyValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsXMsgRspnTableBodyReference() {
		return( getTableBuff()->getOptionalCsXMsgRspnTableBodyReference() );
	}

	bool CFBamTableObj::isOptionalCsXMsgClientTableBodyNull() {
		return( getTableBuff()->isOptionalCsXMsgClientTableBodyNull() );
	}

	const std::string& CFBamTableObj::getOptionalCsXMsgClientTableBodyValue() {
		return( getTableBuff()->getOptionalCsXMsgClientTableBodyValue() );
	}

	const std::string* CFBamTableObj::getOptionalCsXMsgClientTableBodyReference() {
		return( getTableBuff()->getOptionalCsXMsgClientTableBodyReference() );
	}


	cfbam::ICFBamSchemaDefObj* CFBamTableObj::getRequiredContainerSchemaDef( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getPKey()->getRequiredTenantId(),
					getTableBuff()->getRequiredSchemaDefId(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamSchemaDefObj* CFBamTableObj::getOptionalLookupDefSchema( bool forceRead ) {
		cfbam::ICFBamSchemaDefObj* retobj = NULL;
		bool anyMissing = false;
			if( getTableBuff()->isOptionalDefSchemaTenantIdNull() ) {
				anyMissing = true;
			}
			if( getTableBuff()->isOptionalDefSchemaIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getSchemaDefTableObj()->readSchemaDefByIdIdx( getTableBuff()->getOptionalDefSchemaTenantIdValue(),
					getTableBuff()->getOptionalDefSchemaIdValue(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableObj::getOptionalComponentsRelation( bool forceRead ) {
		std::vector<cfbam::ICFBamRelationObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->readRelationByRelTableIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfbam::ICFBamIndexObj* CFBamTableObj::getOptionalLookupLookupIndex( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = NULL;
		bool anyMissing = false;
			if( getTableBuff()->isOptionalLookupIndexTenantIdNull() ) {
				anyMissing = true;
			}
			if( getTableBuff()->isOptionalLookupIndexIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexTableObj()->readIndexByIdIdx( getTableBuff()->getOptionalLookupIndexTenantIdValue(),
					getTableBuff()->getOptionalLookupIndexIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamIndexObj* CFBamTableObj::getOptionalLookupAltIndex( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = NULL;
		bool anyMissing = false;
			if( getTableBuff()->isOptionalAltIndexTenantIdNull() ) {
				anyMissing = true;
			}
			if( getTableBuff()->isOptionalAltIndexIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexTableObj()->readIndexByIdIdx( getTableBuff()->getOptionalAltIndexTenantIdValue(),
					getTableBuff()->getOptionalAltIndexIdValue(), forceRead );
		}
		return( retobj );
	}

	cfbam::ICFBamTableObj* CFBamTableObj::getOptionalLookupQualTable( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = NULL;
		bool anyMissing = false;
			if( getTableBuff()->isOptionalQualifyingTenantIdNull() ) {
				anyMissing = true;
			}
			if( getTableBuff()->isOptionalQualifyingTableIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByIdIdx( getTableBuff()->getOptionalQualifyingTenantIdValue(),
					getTableBuff()->getOptionalQualifyingTableIdValue(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamIndexObj*> CFBamTableObj::getOptionalComponentsIndex( bool forceRead ) {
		std::vector<cfbam::ICFBamIndexObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexTableObj()->readIndexByIdxTableIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	cfbam::ICFBamIndexObj* CFBamTableObj::getOptionalLookupPrimaryIndex( bool forceRead ) {
		cfbam::ICFBamIndexObj* retobj = NULL;
		bool anyMissing = false;
			if( getTableBuff()->isOptionalPrimaryIndexTenantIdNull() ) {
				anyMissing = true;
			}
			if( getTableBuff()->isOptionalPrimaryIndexIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getIndexTableObj()->readIndexByIdIdx( getTableBuff()->getOptionalPrimaryIndexTenantIdValue(),
					getTableBuff()->getOptionalPrimaryIndexIdValue(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfbam::ICFBamValueObj*> CFBamTableObj::getOptionalComponentsColumns( bool forceRead ) {
		std::vector<cfbam::ICFBamValueObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getValueTableObj()->readValueByScopeIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableObj::getOptionalChildrenReverseRelations( bool forceRead ) {
		std::vector<cfbam::ICFBamRelationObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getRelationTableObj()->readRelationByToTblIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamTableObj::getOptionalComponentsChains( bool forceRead ) {
		std::vector<cfbam::ICFBamChainObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getChainTableObj()->readChainByChainTableIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamDelTopDepObj*> CFBamTableObj::getOptionalComponentsDelDep( bool forceRead ) {
		std::vector<cfbam::ICFBamDelTopDepObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getDelTopDepTableObj()->readDelTopDepByDelTopDepTblIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamClearTopDepObj*> CFBamTableObj::getOptionalComponentsClearDep( bool forceRead ) {
		std::vector<cfbam::ICFBamClearTopDepObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getClearTopDepTableObj()->readClearTopDepByClrTopDepTblIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamId16GenObj*> CFBamTableObj::getOptionalChildrenDispId16Gen( bool forceRead ) {
		std::vector<cfbam::ICFBamId16GenObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getId16GenTableObj()->readId16GenByDispIdx( getPKey()->getRequiredTenantIdReference(),
					getPKey()->getRequiredIdReference(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamId32GenObj*> CFBamTableObj::getOptionalChildrenDispId32Gen( bool forceRead ) {
		std::vector<cfbam::ICFBamId32GenObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getId32GenTableObj()->readId32GenByDispIdx( getPKey()->getRequiredTenantIdReference(),
					getPKey()->getRequiredIdReference(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamId64GenObj*> CFBamTableObj::getOptionalChildrenDispId64Gen( bool forceRead ) {
		std::vector<cfbam::ICFBamId64GenObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getId64GenTableObj()->readId64GenByDispIdx( getPKey()->getRequiredTenantIdReference(),
					getPKey()->getRequiredIdReference(),
			forceRead );
		return( retval );
	}

	std::vector<cfbam::ICFBamServerMethodObj*> CFBamTableObj::getOptionalComponentsServerMethods( bool forceRead ) {
		std::vector<cfbam::ICFBamServerMethodObj*> retval;
		retval = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getServerMethodTableObj()->readServerMethodByMethTableIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFBamTableObj::CFBamTableObj()
	: ICFBamTableObj(),
	  CFBamScopeObj()
	{
	}

	CFBamTableObj::CFBamTableObj( cfbam::ICFBamSchemaObj* argSchema )
	: ICFBamTableObj(),
	  CFBamScopeObj( argSchema )
	{
	}

	CFBamTableObj::~CFBamTableObj() {
	}

	cfbam::CFBamScopeBuff* CFBamTableObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfbam::CFBamTableBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->readDerivedByIdIdx( dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFBamTableObj::setBuff( cfbam::CFBamScopeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFBamTableObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamTableObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamTableObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfbam::CFBamTableBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFBamScopeObj::implementsClassCode( value ) );
		}
	}

	std::string CFBamTableObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTableObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFBamScopeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFBamScopeObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFBamScopeObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFBamScopeObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFBamScopeObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFBamScopeObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFBamScopeObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, CFBamTableObj::getRequiredSchemaDefId() ) );
		if( ! CFBamTableObj::isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, CFBamTableObj::getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! CFBamTableObj::isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, CFBamTableObj::getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFBamTableObj::getRequiredName() ) );
		if( ! CFBamTableObj::isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, CFBamTableObj::getOptionalDbNameValue() ) );
		}
		if( ! CFBamTableObj::isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, CFBamTableObj::getOptionalShortNameValue() ) );
		}
		if( ! CFBamTableObj::isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, CFBamTableObj::getOptionalLabelValue() ) );
		}
		if( ! CFBamTableObj::isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, CFBamTableObj::getOptionalShortDescriptionValue() ) );
		}
		if( ! CFBamTableObj::isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFBamTableObj::getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_PageData, CFBamTableObj::getRequiredPageData() ) );
		if( ! CFBamTableObj::isOptionalPrimaryIndexTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrimaryIndexTenantId, CFBamTableObj::getOptionalPrimaryIndexTenantIdValue() ) );
		}
		if( ! CFBamTableObj::isOptionalPrimaryIndexIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrimaryIndexId, CFBamTableObj::getOptionalPrimaryIndexIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_TableClassCode, CFBamTableObj::getRequiredTableClassCode() ) );
		if( ! CFBamTableObj::isOptionalLookupIndexTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LookupIndexTenantId, CFBamTableObj::getOptionalLookupIndexTenantIdValue() ) );
		}
		if( ! CFBamTableObj::isOptionalLookupIndexIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LookupIndexId, CFBamTableObj::getOptionalLookupIndexIdValue() ) );
		}
		if( ! CFBamTableObj::isOptionalAltIndexTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_AltIndexTenantId, CFBamTableObj::getOptionalAltIndexTenantIdValue() ) );
		}
		if( ! CFBamTableObj::isOptionalAltIndexIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_AltIndexId, CFBamTableObj::getOptionalAltIndexIdValue() ) );
		}
		if( ! CFBamTableObj::isOptionalQualifyingTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_QualifyingTenantId, CFBamTableObj::getOptionalQualifyingTenantIdValue() ) );
		}
		if( ! CFBamTableObj::isOptionalQualifyingTableIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_QualifyingTableId, CFBamTableObj::getOptionalQualifyingTableIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsInstantiable, CFBamTableObj::getRequiredIsInstantiable() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_HasHistory, CFBamTableObj::getRequiredHasHistory() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_HasAuditColumns, CFBamTableObj::getRequiredHasAuditColumns() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsMutable, CFBamTableObj::getRequiredIsMutable() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsServerOnly, CFBamTableObj::getRequiredIsServerOnly() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_LoaderBehaviour, CFBamTableObj::getRequiredLoaderBehaviour() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_SecScope, CFBamTableObj::getRequiredSecScope() ) );
		if( ! CFBamTableObj::isOptionalJObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JObjMembers, CFBamTableObj::getOptionalJObjMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JObjInterface, CFBamTableObj::getOptionalJObjInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JObjImport, CFBamTableObj::getOptionalJObjImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JObjImplementation, CFBamTableObj::getOptionalJObjImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJEditObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEditObjMembers, CFBamTableObj::getOptionalJEditObjMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJEditObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEditObjInterface, CFBamTableObj::getOptionalJEditObjInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJEditObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEditObjImport, CFBamTableObj::getOptionalJEditObjImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJEditObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEditObjImplementation, CFBamTableObj::getOptionalJEditObjImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableImport, CFBamTableObj::getOptionalJTableImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableMembers, CFBamTableObj::getOptionalJTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJTableInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableInterface, CFBamTableObj::getOptionalJTableInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableImplementation, CFBamTableObj::getOptionalJTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJTableObjImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableObjImport, CFBamTableObj::getOptionalJTableObjImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJTableObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableObjMembers, CFBamTableObj::getOptionalJTableObjMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJTableObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableObjInterface, CFBamTableObj::getOptionalJTableObjInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJTableObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JTableObjImplementation, CFBamTableObj::getOptionalJTableObjImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJDb2LUWTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JDb2LUWTableImport, CFBamTableObj::getOptionalJDb2LUWTableImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJDb2LUWTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JDb2LUWTableMembers, CFBamTableObj::getOptionalJDb2LUWTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJDb2LUWTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JDb2LUWTableImplementation, CFBamTableObj::getOptionalJDb2LUWTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJMSSqlTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMSSqlTableImport, CFBamTableObj::getOptionalJMSSqlTableImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJMSSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMSSqlTableMembers, CFBamTableObj::getOptionalJMSSqlTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJMSSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMSSqlTableImplementation, CFBamTableObj::getOptionalJMSSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJMySqlTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMySqlTableImport, CFBamTableObj::getOptionalJMySqlTableImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJMySqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMySqlTableMembers, CFBamTableObj::getOptionalJMySqlTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJMySqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JMySqlTableImplementation, CFBamTableObj::getOptionalJMySqlTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJOracleTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JOracleTableImport, CFBamTableObj::getOptionalJOracleTableImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJOracleTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JOracleTableMembers, CFBamTableObj::getOptionalJOracleTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJOracleTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JOracleTableImplementation, CFBamTableObj::getOptionalJOracleTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJPgSqlTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JPgSqlTableImport, CFBamTableObj::getOptionalJPgSqlTableImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJPgSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JPgSqlTableMembers, CFBamTableObj::getOptionalJPgSqlTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJPgSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JPgSqlTableImplementation, CFBamTableObj::getOptionalJPgSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJRamTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JRamTableImport, CFBamTableObj::getOptionalJRamTableImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJRamTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JRamTableMembers, CFBamTableObj::getOptionalJRamTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJRamTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JRamTableImplementation, CFBamTableObj::getOptionalJRamTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJSaxLoaderImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSaxLoaderImport, CFBamTableObj::getOptionalJSaxLoaderImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJSaxLoaderStartElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSaxLoaderStartElement, CFBamTableObj::getOptionalJSaxLoaderStartElementValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJSaxLoaderEndElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JSaxLoaderEndElement, CFBamTableObj::getOptionalJSaxLoaderEndElementValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJXMsgTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgTableImport, CFBamTableObj::getOptionalJXMsgTableImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJXMsgTableFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgTableFormatters, CFBamTableObj::getOptionalJXMsgTableFormattersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJXMsgRqstTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstTableImport, CFBamTableObj::getOptionalJXMsgRqstTableImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJXMsgRspnTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnTableImport, CFBamTableObj::getOptionalJXMsgRspnTableImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJXMsgClientTableImportNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgClientTableImport, CFBamTableObj::getOptionalJXMsgClientTableImportValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJXMsgRqstTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRqstTableBody, CFBamTableObj::getOptionalJXMsgRqstTableBodyValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJXMsgRspnTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgRspnTableBody, CFBamTableObj::getOptionalJXMsgRspnTableBodyValue() ) );
		}
		if( ! CFBamTableObj::isOptionalJXMsgClientTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JXMsgClientTableBody, CFBamTableObj::getOptionalJXMsgClientTableBodyValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppObjMembers, CFBamTableObj::getOptionalCppObjMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppObjInterface, CFBamTableObj::getOptionalCppObjInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppObjInclude, CFBamTableObj::getOptionalCppObjIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppObjImplementation, CFBamTableObj::getOptionalCppObjImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppEditObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppEditObjMembers, CFBamTableObj::getOptionalCppEditObjMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppEditObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppEditObjInterface, CFBamTableObj::getOptionalCppEditObjInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppEditObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppEditObjInclude, CFBamTableObj::getOptionalCppEditObjIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppEditObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppEditObjImplementation, CFBamTableObj::getOptionalCppEditObjImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableInclude, CFBamTableObj::getOptionalCppTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableMembers, CFBamTableObj::getOptionalCppTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppTableInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableInterface, CFBamTableObj::getOptionalCppTableInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableImplementation, CFBamTableObj::getOptionalCppTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppTableObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableObjInclude, CFBamTableObj::getOptionalCppTableObjIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppTableObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableObjMembers, CFBamTableObj::getOptionalCppTableObjMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppTableObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableObjInterface, CFBamTableObj::getOptionalCppTableObjInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppTableObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppTableObjImplementation, CFBamTableObj::getOptionalCppTableObjImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppDb2LUWTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppDb2LUWTableInclude, CFBamTableObj::getOptionalCppDb2LUWTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppDb2LUWTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppDb2LUWTableMembers, CFBamTableObj::getOptionalCppDb2LUWTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppDb2LUWTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppDb2LUWTableImplementation, CFBamTableObj::getOptionalCppDb2LUWTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppMSSqlTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMSSqlTableInclude, CFBamTableObj::getOptionalCppMSSqlTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppMSSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMSSqlTableMembers, CFBamTableObj::getOptionalCppMSSqlTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppMSSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMSSqlTableImplementation, CFBamTableObj::getOptionalCppMSSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppMySqlTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMySqlTableInclude, CFBamTableObj::getOptionalCppMySqlTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppMySqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMySqlTableMembers, CFBamTableObj::getOptionalCppMySqlTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppMySqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppMySqlTableImplementation, CFBamTableObj::getOptionalCppMySqlTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppOracleTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppOracleTableInclude, CFBamTableObj::getOptionalCppOracleTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppOracleTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppOracleTableMembers, CFBamTableObj::getOptionalCppOracleTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppOracleTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppOracleTableImplementation, CFBamTableObj::getOptionalCppOracleTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppPgSqlTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppPgSqlTableInclude, CFBamTableObj::getOptionalCppPgSqlTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppPgSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppPgSqlTableMembers, CFBamTableObj::getOptionalCppPgSqlTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppPgSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppPgSqlTableImplementation, CFBamTableObj::getOptionalCppPgSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppRamTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppRamTableInclude, CFBamTableObj::getOptionalCppRamTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppRamTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppRamTableMembers, CFBamTableObj::getOptionalCppRamTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppRamTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppRamTableImplementation, CFBamTableObj::getOptionalCppRamTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppSaxLoaderIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSaxLoaderInclude, CFBamTableObj::getOptionalCppSaxLoaderIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppSaxLoaderStartElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSaxLoaderStartElement, CFBamTableObj::getOptionalCppSaxLoaderStartElementValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppSaxLoaderEndElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppSaxLoaderEndElement, CFBamTableObj::getOptionalCppSaxLoaderEndElementValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppXMsgTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgTableInclude, CFBamTableObj::getOptionalCppXMsgTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppXMsgTableFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgTableFormatters, CFBamTableObj::getOptionalCppXMsgTableFormattersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppXMsgRqstTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstTableInclude, CFBamTableObj::getOptionalCppXMsgRqstTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppXMsgRspnTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnTableInclude, CFBamTableObj::getOptionalCppXMsgRspnTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppXMsgClientTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgClientTableInclude, CFBamTableObj::getOptionalCppXMsgClientTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppXMsgRqstTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRqstTableBody, CFBamTableObj::getOptionalCppXMsgRqstTableBodyValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppXMsgRspnTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgRspnTableBody, CFBamTableObj::getOptionalCppXMsgRspnTableBodyValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCppXMsgClientTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CppXMsgClientTableBody, CFBamTableObj::getOptionalCppXMsgClientTableBodyValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppObjMembers, CFBamTableObj::getOptionalHppObjMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppObjInterface, CFBamTableObj::getOptionalHppObjInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppObjInclude, CFBamTableObj::getOptionalHppObjIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppObjImplementation, CFBamTableObj::getOptionalHppObjImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppEditObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppEditObjMembers, CFBamTableObj::getOptionalHppEditObjMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppEditObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppEditObjInterface, CFBamTableObj::getOptionalHppEditObjInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppEditObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppEditObjInclude, CFBamTableObj::getOptionalHppEditObjIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppEditObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppEditObjImplementation, CFBamTableObj::getOptionalHppEditObjImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableInclude, CFBamTableObj::getOptionalHppTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableMembers, CFBamTableObj::getOptionalHppTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppTableInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableInterface, CFBamTableObj::getOptionalHppTableInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableImplementation, CFBamTableObj::getOptionalHppTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppTableObjIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableObjInclude, CFBamTableObj::getOptionalHppTableObjIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppTableObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableObjMembers, CFBamTableObj::getOptionalHppTableObjMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppTableObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableObjInterface, CFBamTableObj::getOptionalHppTableObjInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppTableObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppTableObjImplementation, CFBamTableObj::getOptionalHppTableObjImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppDb2LUWTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppDb2LUWTableInclude, CFBamTableObj::getOptionalHppDb2LUWTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppDb2LUWTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppDb2LUWTableMembers, CFBamTableObj::getOptionalHppDb2LUWTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppDb2LUWTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppDb2LUWTableImplementation, CFBamTableObj::getOptionalHppDb2LUWTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppMSSqlTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMSSqlTableInclude, CFBamTableObj::getOptionalHppMSSqlTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppMSSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMSSqlTableMembers, CFBamTableObj::getOptionalHppMSSqlTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppMSSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMSSqlTableImplementation, CFBamTableObj::getOptionalHppMSSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppMySqlTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMySqlTableInclude, CFBamTableObj::getOptionalHppMySqlTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppMySqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMySqlTableMembers, CFBamTableObj::getOptionalHppMySqlTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppMySqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppMySqlTableImplementation, CFBamTableObj::getOptionalHppMySqlTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppOracleTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppOracleTableInclude, CFBamTableObj::getOptionalHppOracleTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppOracleTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppOracleTableMembers, CFBamTableObj::getOptionalHppOracleTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppOracleTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppOracleTableImplementation, CFBamTableObj::getOptionalHppOracleTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppPgSqlTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppPgSqlTableInclude, CFBamTableObj::getOptionalHppPgSqlTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppPgSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppPgSqlTableMembers, CFBamTableObj::getOptionalHppPgSqlTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppPgSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppPgSqlTableImplementation, CFBamTableObj::getOptionalHppPgSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppRamTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppRamTableInclude, CFBamTableObj::getOptionalHppRamTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppRamTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppRamTableMembers, CFBamTableObj::getOptionalHppRamTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppRamTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppRamTableImplementation, CFBamTableObj::getOptionalHppRamTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppSaxLoaderIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSaxLoaderInclude, CFBamTableObj::getOptionalHppSaxLoaderIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppSaxLoaderStartElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSaxLoaderStartElement, CFBamTableObj::getOptionalHppSaxLoaderStartElementValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppSaxLoaderEndElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppSaxLoaderEndElement, CFBamTableObj::getOptionalHppSaxLoaderEndElementValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppXMsgTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgTableInclude, CFBamTableObj::getOptionalHppXMsgTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppXMsgTableFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgTableFormatters, CFBamTableObj::getOptionalHppXMsgTableFormattersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppXMsgRqstTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstTableInclude, CFBamTableObj::getOptionalHppXMsgRqstTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppXMsgRspnTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnTableInclude, CFBamTableObj::getOptionalHppXMsgRspnTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppXMsgClientTableIncludeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgClientTableInclude, CFBamTableObj::getOptionalHppXMsgClientTableIncludeValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppXMsgRqstTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRqstTableBody, CFBamTableObj::getOptionalHppXMsgRqstTableBodyValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppXMsgRspnTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgRspnTableBody, CFBamTableObj::getOptionalHppXMsgRspnTableBodyValue() ) );
		}
		if( ! CFBamTableObj::isOptionalHppXMsgClientTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HppXMsgClientTableBody, CFBamTableObj::getOptionalHppXMsgClientTableBodyValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsObjMembers, CFBamTableObj::getOptionalCsObjMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsObjInterface, CFBamTableObj::getOptionalCsObjInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsObjUsing, CFBamTableObj::getOptionalCsObjUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsObjImplementation, CFBamTableObj::getOptionalCsObjImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsEditObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsEditObjMembers, CFBamTableObj::getOptionalCsEditObjMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsEditObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsEditObjInterface, CFBamTableObj::getOptionalCsEditObjInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsEditObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsEditObjUsing, CFBamTableObj::getOptionalCsEditObjUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsEditObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsEditObjImplementation, CFBamTableObj::getOptionalCsEditObjImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableUsing, CFBamTableObj::getOptionalCsTableUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableMembers, CFBamTableObj::getOptionalCsTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsTableInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableInterface, CFBamTableObj::getOptionalCsTableInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableImplementation, CFBamTableObj::getOptionalCsTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsTableObjUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableObjUsing, CFBamTableObj::getOptionalCsTableObjUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsTableObjMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableObjMembers, CFBamTableObj::getOptionalCsTableObjMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsTableObjInterfaceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableObjInterface, CFBamTableObj::getOptionalCsTableObjInterfaceValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsTableObjImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsTableObjImplementation, CFBamTableObj::getOptionalCsTableObjImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsDb2LUWTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsDb2LUWTableUsing, CFBamTableObj::getOptionalCsDb2LUWTableUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsDb2LUWTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsDb2LUWTableMembers, CFBamTableObj::getOptionalCsDb2LUWTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsDb2LUWTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsDb2LUWTableImplementation, CFBamTableObj::getOptionalCsDb2LUWTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsMSSqlTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMSSqlTableUsing, CFBamTableObj::getOptionalCsMSSqlTableUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsMSSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMSSqlTableMembers, CFBamTableObj::getOptionalCsMSSqlTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsMSSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMSSqlTableImplementation, CFBamTableObj::getOptionalCsMSSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsMySqlTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMySqlTableUsing, CFBamTableObj::getOptionalCsMySqlTableUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsMySqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMySqlTableMembers, CFBamTableObj::getOptionalCsMySqlTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsMySqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsMySqlTableImplementation, CFBamTableObj::getOptionalCsMySqlTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsOracleTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsOracleTableUsing, CFBamTableObj::getOptionalCsOracleTableUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsOracleTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsOracleTableMembers, CFBamTableObj::getOptionalCsOracleTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsOracleTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsOracleTableImplementation, CFBamTableObj::getOptionalCsOracleTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsPgSqlTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsPgSqlTableUsing, CFBamTableObj::getOptionalCsPgSqlTableUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsPgSqlTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsPgSqlTableMembers, CFBamTableObj::getOptionalCsPgSqlTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsPgSqlTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsPgSqlTableImplementation, CFBamTableObj::getOptionalCsPgSqlTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsRamTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsRamTableUsing, CFBamTableObj::getOptionalCsRamTableUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsRamTableMembersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsRamTableMembers, CFBamTableObj::getOptionalCsRamTableMembersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsRamTableImplementationNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsRamTableImplementation, CFBamTableObj::getOptionalCsRamTableImplementationValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsSaxLoaderUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSaxLoaderUsing, CFBamTableObj::getOptionalCsSaxLoaderUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsSaxLoaderStartElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSaxLoaderStartElement, CFBamTableObj::getOptionalCsSaxLoaderStartElementValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsSaxLoaderEndElementNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsSaxLoaderEndElement, CFBamTableObj::getOptionalCsSaxLoaderEndElementValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsXMsgTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgTableUsing, CFBamTableObj::getOptionalCsXMsgTableUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsXMsgTableFormattersNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgTableFormatters, CFBamTableObj::getOptionalCsXMsgTableFormattersValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsXMsgRqstTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstTableUsing, CFBamTableObj::getOptionalCsXMsgRqstTableUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsXMsgRspnTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnTableUsing, CFBamTableObj::getOptionalCsXMsgRspnTableUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsXMsgClientTableUsingNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgClientTableUsing, CFBamTableObj::getOptionalCsXMsgClientTableUsingValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsXMsgRqstTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRqstTableBody, CFBamTableObj::getOptionalCsXMsgRqstTableBodyValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsXMsgRspnTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgRspnTableBody, CFBamTableObj::getOptionalCsXMsgRspnTableBodyValue() ) );
		}
		if( ! CFBamTableObj::isOptionalCsXMsgClientTableBodyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CsXMsgClientTableBody, CFBamTableObj::getOptionalCsXMsgClientTableBodyValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFBamTableObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFBamTableObj::getGenDefName() {
		return( cfbam::CFBamTableBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFBamTableObj::getScope() {
		cfbam::ICFBamSchemaDefObj* scope = getRequiredContainerSchemaDef();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTableObj::getObjScope() {
		cfbam::ICFBamSchemaDefObj* scope = getRequiredContainerSchemaDef();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFBamTableObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFBamTableObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFBamTableObj::getNamedObject( const std::string& objName ) {
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

	std::string CFBamTableObj::getObjQualifiedName() {
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

	std::string CFBamTableObj::getObjFullName() {
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

	cfbam::ICFBamScopeObj* CFBamTableObj::realize() {
		cfbam::ICFBamTableObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->realizeTable(
			(cfbam::ICFBamTableObj*)this );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeObj* CFBamTableObj::read( bool forceRead ) {
		cfbam::ICFBamTableObj* retobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->readTableByIdIdx( getTableBuff()->getRequiredTenantId(),
		getTableBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfbam::ICFBamScopeObj*>( retobj ) );
	}

	cfbam::ICFBamScopeEditObj* CFBamTableObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfbam::ICFBamTableObj* lockobj = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->lockTable( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFBamSchemaObj*>( getSchema() )->getTableTableObj()->newEditInstance( this );
		return( dynamic_cast<cfbam::ICFBamScopeEditObj*>( edit ) );
	}

	cfbam::ICFBamTableEditObj* CFBamTableObj::getTableEdit() {
		return( dynamic_cast<cfbam::ICFBamTableEditObj*>( edit ) );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableObj::getOnlyOwnerRelations() {
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

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableObj::getContainerOwnerRelations() {
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

	cfbam::ICFBamRelationObj* CFBamTableObj::getContainerRelation() {
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

	cfbam::ICFBamRelationObj* CFBamTableObj::getInheritedContainerRelation() {
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

	cfbam::ICFBamRelationObj* CFBamTableObj::getOwnerRelation() {
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

	cfbam::ICFBamRelationObj* CFBamTableObj::getInheritedOwnerRelation() {
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

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableObj::getOwnerLookupRelations() {
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

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableObj::getOwnerContainerNamedLookupChainRelations() {
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
						std::vector<cfbam::ICFBamChainObj*> workChain = componentChains;
						for( auto iterWorkChain = workChain.begin(); ( ! referencedByChain ) && ( iterWorkChain != workChain.end() ); iterWorkChain ++ ) {
							cfbam::ICFBamChainObj* chain = *iterWorkChain;
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

	std::vector<cfbam::ICFBamAtomObj*> CFBamTableObj::getChildrenAtoms() {
		std::vector<cfbam::ICFBamAtomObj*> list;
		cfbam::ICFBamValueObj* colDef;
		std::vector<cfbam::ICFBamValueObj*> childrenColumns = getOptionalComponentsColumns();
		for( auto iterChildrenColumns = childrenColumns.begin(); iterChildrenColumns != childrenColumns.end(); iterChildrenColumns ++ ) {
			colDef = *iterChildrenColumns;
			if( colDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				list.push_back( dynamic_cast<cfbam::ICFBamAtomObj*>( colDef ) );
			}
		}
		return( list );
	}

	cfbam::ICFBamRelationObj* CFBamTableObj::getSuperClassRelation() {
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

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableObj::getSubClassRelations() {
		std::vector<cfbam::ICFBamRelationObj*> list;
		cfbam::ICFBamRelationObj* relationDef;
		std::vector<cfbam::ICFBamRelationObj*> reverseRelations = getOptionalChildrenReverseRelations();
		for( auto iterChildrenRelations = reverseRelations.begin(); iterChildrenRelations != reverseRelations.end(); iterChildrenRelations ++ ) {
			relationDef = *iterChildrenRelations;
			if( relationDef->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
				list.push_back( relationDef );
			}
		}
		return( list );
	}

	cfbam::ICFBamIndexObj* CFBamTableObj::getPrimaryKeyIndex() {
		cfbam::ICFBamIndexObj* primaryIndex = getOptionalLookupPrimaryIndex();
		return( primaryIndex );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableObj::getFactoryOwnerRelations() {
		std::vector<cfbam::ICFBamRelationObj*> list;
		std::vector<cfbam::ICFBamRelationObj*> ownerRelations = getContainerOwnerRelations();
		cfbam::ICFBamRelationObj* ownerRelation;
		for( auto iterOwnerRelations = ownerRelations.begin(); iterOwnerRelations != ownerRelations.end(); iterOwnerRelations ++ ) {
			ownerRelation = *iterOwnerRelations;
			if( ownerRelation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
				list.push_back( ownerRelation );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamIndexObj*> CFBamTableObj::getInheritedIndexes() {
		std::vector<cfbam::ICFBamIndexObj*> list;
		cfbam::ICFBamRelationObj* superClassRelation = getSuperClassRelation();
		if( superClassRelation != NULL ) {
			std::vector<cfbam::ICFBamIndexObj*> superClassInheritedIndexes = superClassRelation->getRequiredLookupToTable()->getInheritedIndexes();
			for( auto iterInherited = superClassInheritedIndexes.begin(); iterInherited != superClassInheritedIndexes.end(); iterInherited ++ ) {
				list.push_back( *iterInherited );
			}
			std::vector<cfbam::ICFBamIndexObj*> myIndexes = getChildrenIndexes();
			for( auto iterMyIndexes = myIndexes.begin(); iterMyIndexes != myIndexes.end(); iterMyIndexes ++ ) {
				list.push_back( *iterMyIndexes );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamIndexObj*> CFBamTableObj::getChildrenIndexes() {
		std::vector<cfbam::ICFBamIndexObj*> myIndexes = getOptionalComponentsIndex();
		std::vector<cfbam::ICFBamIndexObj*> list;
		for( auto iterMyIndexes = myIndexes.begin(); iterMyIndexes != myIndexes.end(); iterMyIndexes ++ ) {
			list.push_back( *iterMyIndexes );
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableObj::getInheritedRelations() {
		std::vector<cfbam::ICFBamRelationObj*> list;
		cfbam::ICFBamRelationObj* superClassRelation = getSuperClassRelation();
		if( superClassRelation != NULL ) {
			std::vector<cfbam::ICFBamRelationObj*> superClassInheritedRelations = superClassRelation->getRequiredLookupToTable()->getInheritedRelations();
			for( auto iterRelations = superClassInheritedRelations.begin(); iterRelations != superClassInheritedRelations.end(); iterRelations ++ ) {
				list.push_back( *iterRelations );
			}
			std::vector<cfbam::ICFBamRelationObj*> myRelations = getChildrenRelations();
			for( auto iterMyRelations = myRelations.begin(); iterMyRelations != myRelations.end(); iterMyRelations ++ ) {
				list.push_back( *iterMyRelations );
			}
		}
		return( list );
	}

	std::vector<cfbam::ICFBamRelationObj*> CFBamTableObj::getChildrenRelations() {
		std::vector<cfbam::ICFBamRelationObj*> childrenRelations;
		std::vector<cfbam::ICFBamRelationObj*> cltn = getOptionalComponentsRelation();
		for( auto iterCltn = cltn.begin(); iterCltn != cltn.end(); iterCltn ++ ) {
			childrenRelations.push_back( *iterCltn );
		}
		return( childrenRelations );
	}

}
