// Description: C++18 implementation for a Relation buffer object.

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

#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamRelationByUNameIdxKey.hpp>
#include <cfbam/CFBamRelationByRelnTenantIdxKey.hpp>
#include <cfbam/CFBamRelationByRelTableIdxKey.hpp>
#include <cfbam/CFBamRelationByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamRelationByFromKeyIdxKey.hpp>
#include <cfbam/CFBamRelationByToTblIdxKey.hpp>
#include <cfbam/CFBamRelationByToKeyIdxKey.hpp>
#include <cfbam/CFBamRelationByNarrowedIdxKey.hpp>
#include <cfbam/CFBamSchema.hpp>

namespace cfbam {

	const std::string CFBamRelationBuff::GENDEFNAME( "Relation" );
	const classcode_t CFBamRelationBuff::CLASS_CODE = 0xa835L;
	const std::string CFBamRelationBuff::CLASS_NAME( "CFBamRelationBuff" );
		const std::string CFBamRelationBuff::COLNAME_TABLEID( "TableId" );
		const std::string CFBamRelationBuff::COLNAME_DEFSCHEMATENANTID( "DefSchemaTenantId" );
		const std::string CFBamRelationBuff::COLNAME_DEFSCHEMAID( "DefSchemaId" );
		const std::string CFBamRelationBuff::COLNAME_NAME( "Name" );
		const std::string CFBamRelationBuff::COLNAME_SHORTNAME( "ShortName" );
		const std::string CFBamRelationBuff::COLNAME_LABEL( "Label" );
		const std::string CFBamRelationBuff::COLNAME_SHORTDESCRIPTION( "ShortDescription" );
		const std::string CFBamRelationBuff::COLNAME_DESCRIPTION( "Description" );
		const std::string CFBamRelationBuff::COLNAME_RELATIONTYPE( "RelationType" );
		const std::string CFBamRelationBuff::COLNAME_DBNAME( "DbName" );
		const std::string CFBamRelationBuff::COLNAME_SUFFIX( "Suffix" );
		const std::string CFBamRelationBuff::COLNAME_FROMINDEXID( "FromIndexId" );
		const std::string CFBamRelationBuff::COLNAME_TOTABLEID( "ToTableId" );
		const std::string CFBamRelationBuff::COLNAME_TOINDEXID( "ToIndexId" );
		const std::string CFBamRelationBuff::COLNAME_ISREQUIRED( "IsRequired" );
		const std::string CFBamRelationBuff::COLNAME_ISXSDCONTAINER( "IsXsdContainer" );
		const std::string CFBamRelationBuff::COLNAME_ISLATERESOLVER( "IsLateResolver" );
		const std::string CFBamRelationBuff::COLNAME_ALLOWADDENDUM( "AllowAddendum" );
		const std::string CFBamRelationBuff::COLNAME_NARROWEDTENANTID( "NarrowedTenantId" );
		const std::string CFBamRelationBuff::COLNAME_NARROWEDID( "NarrowedId" );
	const int64_t CFBamRelationBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamRelationBuff::TABLEID_INIT_VALUE = 0LL;
	const int64_t CFBamRelationBuff::ID_INIT_VALUE = 0LL;
	const int64_t CFBamRelationBuff::DEFSCHEMATENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamRelationBuff::DEFSCHEMAID_INIT_VALUE = 0LL;
	const std::string CFBamRelationBuff::NAME_INIT_VALUE( "" );
	const cfbam::ICFBamSchema::RelationTypeEnum CFBamRelationBuff::RELATIONTYPE_INIT_VALUE = CFBamSchema::ordinalToRelationTypeEnum( 0 );
	const int64_t CFBamRelationBuff::FROMINDEXID_INIT_VALUE = 0LL;
	const int64_t CFBamRelationBuff::TOTABLEID_INIT_VALUE = 0LL;
	const int64_t CFBamRelationBuff::TOINDEXID_INIT_VALUE = 0LL;
	const bool CFBamRelationBuff::ISREQUIRED_INIT_VALUE = false;
	const bool CFBamRelationBuff::ISXSDCONTAINER_INIT_VALUE = false;
	const bool CFBamRelationBuff::ISLATERESOLVER_INIT_VALUE = false;
	const bool CFBamRelationBuff::ALLOWADDENDUM_INIT_VALUE = false;
	const int64_t CFBamRelationBuff::NARROWEDTENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamRelationBuff::NARROWEDID_INIT_VALUE = 0LL;
	const int64_t CFBamRelationBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamRelationBuff::TABLEID_MIN_VALUE = 0LL;
	const int64_t CFBamRelationBuff::ID_MIN_VALUE = 0LL;
	const int64_t CFBamRelationBuff::DEFSCHEMATENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamRelationBuff::DEFSCHEMAID_MIN_VALUE = 0LL;
	const cfbam::ICFBamSchema::RelationTypeEnum CFBamRelationBuff::RELATIONTYPE_MIN_VALUE = cfbam::ICFBamSchema::RelationTypeEnum::Unknown;
	const int64_t CFBamRelationBuff::FROMINDEXID_MIN_VALUE = 0LL;
	const int64_t CFBamRelationBuff::TOTABLEID_MIN_VALUE = 0LL;
	const int64_t CFBamRelationBuff::TOINDEXID_MIN_VALUE = 0LL;
	const int64_t CFBamRelationBuff::NARROWEDTENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamRelationBuff::NARROWEDID_MIN_VALUE = 0LL;
	const ICFBamSchema::RelationTypeEnum CFBamRelationBuff::RELATIONTYPE_MAX_VALUE = ICFBamSchema::RelationTypeEnum::Children;
	const std::string::size_type CFBamRelationBuff::NAME_MAX_LEN = 192;
	const std::string::size_type CFBamRelationBuff::SHORTNAME_MAX_LEN = 16;
	const std::string::size_type CFBamRelationBuff::LABEL_MAX_LEN = 64;
	const std::string::size_type CFBamRelationBuff::SHORTDESCRIPTION_MAX_LEN = 128;
	const std::string::size_type CFBamRelationBuff::DESCRIPTION_MAX_LEN = 1023;
	const std::string::size_type CFBamRelationBuff::DBNAME_MAX_LEN = 32;
	const std::string::size_type CFBamRelationBuff::SUFFIX_MAX_LEN = 16;

	CFBamRelationBuff::CFBamRelationBuff()
	: CFBamScopeBuff()
	{
		requiredTableId = cfbam::CFBamRelationBuff::TABLEID_INIT_VALUE;
		optionalDefSchemaTenantId.setNull();
		optionalDefSchemaId.setNull();
		requiredName = new std::string( cfbam::CFBamRelationBuff::NAME_INIT_VALUE );
		optionalShortName = NULL;
		optionalLabel = NULL;
		optionalShortDescription = NULL;
		optionalDescription = NULL;
		requiredRelationType = cfbam::CFBamRelationBuff::RELATIONTYPE_INIT_VALUE;
		optionalDbName = NULL;
		optionalSuffix = NULL;
		requiredFromIndexId = cfbam::CFBamRelationBuff::FROMINDEXID_INIT_VALUE;
		requiredToTableId = cfbam::CFBamRelationBuff::TOTABLEID_INIT_VALUE;
		requiredToIndexId = cfbam::CFBamRelationBuff::TOINDEXID_INIT_VALUE;
		requiredIsRequired = cfbam::CFBamRelationBuff::ISREQUIRED_INIT_VALUE;
		requiredIsXsdContainer = cfbam::CFBamRelationBuff::ISXSDCONTAINER_INIT_VALUE;
		requiredIsLateResolver = cfbam::CFBamRelationBuff::ISLATERESOLVER_INIT_VALUE;
		requiredAllowAddendum = cfbam::CFBamRelationBuff::ALLOWADDENDUM_INIT_VALUE;
		optionalNarrowedTenantId.setNull();
		optionalNarrowedId.setNull();
	}

	CFBamRelationBuff::CFBamRelationBuff( const CFBamRelationBuff& src )
	: CFBamScopeBuff()
	{
		requiredTableId = cfbam::CFBamRelationBuff::TABLEID_INIT_VALUE;
		optionalDefSchemaTenantId.setNull();
		optionalDefSchemaId.setNull();
		requiredName = new std::string( cfbam::CFBamRelationBuff::NAME_INIT_VALUE );
		optionalShortName = NULL;
		optionalLabel = NULL;
		optionalShortDescription = NULL;
		optionalDescription = NULL;
		requiredRelationType = cfbam::CFBamRelationBuff::RELATIONTYPE_INIT_VALUE;
		optionalDbName = NULL;
		optionalSuffix = NULL;
		requiredFromIndexId = cfbam::CFBamRelationBuff::FROMINDEXID_INIT_VALUE;
		requiredToTableId = cfbam::CFBamRelationBuff::TOTABLEID_INIT_VALUE;
		requiredToIndexId = cfbam::CFBamRelationBuff::TOINDEXID_INIT_VALUE;
		requiredIsRequired = cfbam::CFBamRelationBuff::ISREQUIRED_INIT_VALUE;
		requiredIsXsdContainer = cfbam::CFBamRelationBuff::ISXSDCONTAINER_INIT_VALUE;
		requiredIsLateResolver = cfbam::CFBamRelationBuff::ISLATERESOLVER_INIT_VALUE;
		requiredAllowAddendum = cfbam::CFBamRelationBuff::ALLOWADDENDUM_INIT_VALUE;
		optionalNarrowedTenantId.setNull();
		optionalNarrowedId.setNull();
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredTableId( src.getRequiredTableId() );
		if( src.isOptionalDefSchemaTenantIdNull() ) {
			setOptionalDefSchemaTenantIdNull();
		}
		else {
			setOptionalDefSchemaTenantIdValue( src.getOptionalDefSchemaTenantIdValue() );
		}
		if( src.isOptionalDefSchemaIdNull() ) {
			setOptionalDefSchemaIdNull();
		}
		else {
			setOptionalDefSchemaIdValue( src.getOptionalDefSchemaIdValue() );
		}
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalShortNameNull() ) {
			setOptionalShortNameNull();
		}
		else {
			setOptionalShortNameValue( src.getOptionalShortNameValue() );
		}
		if( src.isOptionalLabelNull() ) {
			setOptionalLabelNull();
		}
		else {
			setOptionalLabelValue( src.getOptionalLabelValue() );
		}
		if( src.isOptionalShortDescriptionNull() ) {
			setOptionalShortDescriptionNull();
		}
		else {
			setOptionalShortDescriptionValue( src.getOptionalShortDescriptionValue() );
		}
		if( src.isOptionalDescriptionNull() ) {
			setOptionalDescriptionNull();
		}
		else {
			setOptionalDescriptionValue( src.getOptionalDescriptionValue() );
		}
		setRequiredRelationType( src.getRequiredRelationType() );
		if( src.isOptionalDbNameNull() ) {
			setOptionalDbNameNull();
		}
		else {
			setOptionalDbNameValue( src.getOptionalDbNameValue() );
		}
		if( src.isOptionalSuffixNull() ) {
			setOptionalSuffixNull();
		}
		else {
			setOptionalSuffixValue( src.getOptionalSuffixValue() );
		}
		setRequiredFromIndexId( src.getRequiredFromIndexId() );
		setRequiredToTableId( src.getRequiredToTableId() );
		setRequiredToIndexId( src.getRequiredToIndexId() );
		setRequiredIsRequired( src.getRequiredIsRequired() );
		setRequiredIsXsdContainer( src.getRequiredIsXsdContainer() );
		setRequiredIsLateResolver( src.getRequiredIsLateResolver() );
		setRequiredAllowAddendum( src.getRequiredAllowAddendum() );
		if( src.isOptionalNarrowedTenantIdNull() ) {
			setOptionalNarrowedTenantIdNull();
		}
		else {
			setOptionalNarrowedTenantIdValue( src.getOptionalNarrowedTenantIdValue() );
		}
		if( src.isOptionalNarrowedIdNull() ) {
			setOptionalNarrowedIdNull();
		}
		else {
			setOptionalNarrowedIdValue( src.getOptionalNarrowedIdValue() );
		}
	}

	CFBamRelationBuff::~CFBamRelationBuff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		if( optionalShortName != NULL ) {
			delete optionalShortName;
			optionalShortName = NULL;
		}
		if( optionalLabel != NULL ) {
			delete optionalLabel;
			optionalLabel = NULL;
		}
		if( optionalShortDescription != NULL ) {
			delete optionalShortDescription;
			optionalShortDescription = NULL;
		}
		if( optionalDescription != NULL ) {
			delete optionalDescription;
			optionalDescription = NULL;
		}
		if( optionalDbName != NULL ) {
			delete optionalDbName;
			optionalDbName = NULL;
		}
		if( optionalSuffix != NULL ) {
			delete optionalSuffix;
			optionalSuffix = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFBamRelationBuff::clone() {
		CFBamRelationBuff* copy = new CFBamRelationBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFBamRelationBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamRelationBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamRelationBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfbam::CFBamScopeBuff::implementsClassCode( argClassCode ) );
		}
	}

	const int64_t CFBamRelationBuff::getRequiredTableId() const {
		return( requiredTableId );
	}

	const int64_t* CFBamRelationBuff::getRequiredTableIdReference() const {
		return( &requiredTableId );
	}

	void CFBamRelationBuff::setRequiredTableId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTableId" );
		if( value < cfbam::CFBamRelationBuff::TABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::TABLEID_MIN_VALUE );
		}
		requiredTableId = value;
	}

	const bool CFBamRelationBuff::isOptionalDefSchemaTenantIdNull() const {
		return( optionalDefSchemaTenantId.isNull() );
	}

	const int64_t CFBamRelationBuff::getOptionalDefSchemaTenantIdValue() const {
		return( optionalDefSchemaTenantId.getValue() );
	}

	const int64_t* CFBamRelationBuff::getOptionalDefSchemaTenantIdReference() const {
		return( optionalDefSchemaTenantId.getReference() );
	}

	void CFBamRelationBuff::setOptionalDefSchemaTenantIdNull() {
		optionalDefSchemaTenantId.setNull();
	}

	void CFBamRelationBuff::setOptionalDefSchemaTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDefSchemaTenantIdValue" );
		if( value < cfbam::CFBamRelationBuff::DEFSCHEMATENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::DEFSCHEMATENANTID_MIN_VALUE );
		}
		optionalDefSchemaTenantId.setValue( value );
	}

	const bool CFBamRelationBuff::isOptionalDefSchemaIdNull() const {
		return( optionalDefSchemaId.isNull() );
	}

	const int64_t CFBamRelationBuff::getOptionalDefSchemaIdValue() const {
		return( optionalDefSchemaId.getValue() );
	}

	const int64_t* CFBamRelationBuff::getOptionalDefSchemaIdReference() const {
		return( optionalDefSchemaId.getReference() );
	}

	void CFBamRelationBuff::setOptionalDefSchemaIdNull() {
		optionalDefSchemaId.setNull();
	}

	void CFBamRelationBuff::setOptionalDefSchemaIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDefSchemaIdValue" );
		if( value < cfbam::CFBamRelationBuff::DEFSCHEMAID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::DEFSCHEMAID_MIN_VALUE );
		}
		optionalDefSchemaId.setValue( value );
	}

	const std::string& CFBamRelationBuff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamRelationBuff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamRelationBuff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamRelationBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamRelationBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	const bool CFBamRelationBuff::isOptionalShortNameNull() const {
		return( optionalShortName == NULL );
	}

	const std::string& CFBamRelationBuff::getOptionalShortNameValue() const {
		static const std::string S_ProcName( "getOptionalShortNameValue" );
		if( optionalShortName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalShortName );
	}

	const std::string* CFBamRelationBuff::getOptionalShortNameReference() const {
		return( optionalShortName );
	}

	void CFBamRelationBuff::setOptionalShortNameNull() {
		if( optionalShortName != NULL ) {
			delete optionalShortName;
			optionalShortName = NULL;
		}
	}

	void CFBamRelationBuff::setOptionalShortNameValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalShortNameValue" );
		if( value.length() > CFBamRelationBuff::SHORTNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamRelationBuff::SHORTNAME_MAX_LEN );
		}
		if( optionalShortName != NULL ) {
			delete optionalShortName;
			optionalShortName = NULL;
		}
		optionalShortName = new std::string( value );
	}

	const bool CFBamRelationBuff::isOptionalLabelNull() const {
		return( optionalLabel == NULL );
	}

	const std::string& CFBamRelationBuff::getOptionalLabelValue() const {
		static const std::string S_ProcName( "getOptionalLabelValue" );
		if( optionalLabel == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalLabel );
	}

	const std::string* CFBamRelationBuff::getOptionalLabelReference() const {
		return( optionalLabel );
	}

	void CFBamRelationBuff::setOptionalLabelNull() {
		if( optionalLabel != NULL ) {
			delete optionalLabel;
			optionalLabel = NULL;
		}
	}

	void CFBamRelationBuff::setOptionalLabelValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalLabelValue" );
		if( value.length() > CFBamRelationBuff::LABEL_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamRelationBuff::LABEL_MAX_LEN );
		}
		if( optionalLabel != NULL ) {
			delete optionalLabel;
			optionalLabel = NULL;
		}
		optionalLabel = new std::string( value );
	}

	const bool CFBamRelationBuff::isOptionalShortDescriptionNull() const {
		return( optionalShortDescription == NULL );
	}

	const std::string& CFBamRelationBuff::getOptionalShortDescriptionValue() const {
		static const std::string S_ProcName( "getOptionalShortDescriptionValue" );
		if( optionalShortDescription == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalShortDescription );
	}

	const std::string* CFBamRelationBuff::getOptionalShortDescriptionReference() const {
		return( optionalShortDescription );
	}

	void CFBamRelationBuff::setOptionalShortDescriptionNull() {
		if( optionalShortDescription != NULL ) {
			delete optionalShortDescription;
			optionalShortDescription = NULL;
		}
	}

	void CFBamRelationBuff::setOptionalShortDescriptionValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalShortDescriptionValue" );
		if( value.length() > CFBamRelationBuff::SHORTDESCRIPTION_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamRelationBuff::SHORTDESCRIPTION_MAX_LEN );
		}
		if( optionalShortDescription != NULL ) {
			delete optionalShortDescription;
			optionalShortDescription = NULL;
		}
		optionalShortDescription = new std::string( value );
	}

	const bool CFBamRelationBuff::isOptionalDescriptionNull() const {
		return( optionalDescription == NULL );
	}

	const std::string& CFBamRelationBuff::getOptionalDescriptionValue() const {
		static const std::string S_ProcName( "getOptionalDescriptionValue" );
		if( optionalDescription == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalDescription );
	}

	const std::string* CFBamRelationBuff::getOptionalDescriptionReference() const {
		return( optionalDescription );
	}

	void CFBamRelationBuff::setOptionalDescriptionNull() {
		if( optionalDescription != NULL ) {
			delete optionalDescription;
			optionalDescription = NULL;
		}
	}

	void CFBamRelationBuff::setOptionalDescriptionValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalDescriptionValue" );
		if( value.length() > CFBamRelationBuff::DESCRIPTION_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamRelationBuff::DESCRIPTION_MAX_LEN );
		}
		if( optionalDescription != NULL ) {
			delete optionalDescription;
			optionalDescription = NULL;
		}
		optionalDescription = new std::string( value );
	}

	const cfbam::ICFBamSchema::RelationTypeEnum CFBamRelationBuff::getRequiredRelationType() const {
		return( requiredRelationType );
	}

	const cfbam::ICFBamSchema::RelationTypeEnum* CFBamRelationBuff::getRequiredRelationTypeReference() const {
		return( &requiredRelationType );
	}

	void CFBamRelationBuff::setRequiredRelationType( const cfbam::ICFBamSchema::RelationTypeEnum value ) {
		requiredRelationType = value;
	}

	const bool CFBamRelationBuff::isOptionalDbNameNull() const {
		return( optionalDbName == NULL );
	}

	const std::string& CFBamRelationBuff::getOptionalDbNameValue() const {
		static const std::string S_ProcName( "getOptionalDbNameValue" );
		if( optionalDbName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalDbName );
	}

	const std::string* CFBamRelationBuff::getOptionalDbNameReference() const {
		return( optionalDbName );
	}

	void CFBamRelationBuff::setOptionalDbNameNull() {
		if( optionalDbName != NULL ) {
			delete optionalDbName;
			optionalDbName = NULL;
		}
	}

	void CFBamRelationBuff::setOptionalDbNameValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalDbNameValue" );
		if( value.length() > CFBamRelationBuff::DBNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamRelationBuff::DBNAME_MAX_LEN );
		}
		if( optionalDbName != NULL ) {
			delete optionalDbName;
			optionalDbName = NULL;
		}
		optionalDbName = new std::string( value );
	}

	const bool CFBamRelationBuff::isOptionalSuffixNull() const {
		return( optionalSuffix == NULL );
	}

	const std::string& CFBamRelationBuff::getOptionalSuffixValue() const {
		static const std::string S_ProcName( "getOptionalSuffixValue" );
		if( optionalSuffix == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalSuffix );
	}

	const std::string* CFBamRelationBuff::getOptionalSuffixReference() const {
		return( optionalSuffix );
	}

	void CFBamRelationBuff::setOptionalSuffixNull() {
		if( optionalSuffix != NULL ) {
			delete optionalSuffix;
			optionalSuffix = NULL;
		}
	}

	void CFBamRelationBuff::setOptionalSuffixValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalSuffixValue" );
		if( value.length() > CFBamRelationBuff::SUFFIX_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamRelationBuff::SUFFIX_MAX_LEN );
		}
		if( optionalSuffix != NULL ) {
			delete optionalSuffix;
			optionalSuffix = NULL;
		}
		optionalSuffix = new std::string( value );
	}

	const int64_t CFBamRelationBuff::getRequiredFromIndexId() const {
		return( requiredFromIndexId );
	}

	const int64_t* CFBamRelationBuff::getRequiredFromIndexIdReference() const {
		return( &requiredFromIndexId );
	}

	void CFBamRelationBuff::setRequiredFromIndexId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredFromIndexId" );
		if( value < cfbam::CFBamRelationBuff::FROMINDEXID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::FROMINDEXID_MIN_VALUE );
		}
		requiredFromIndexId = value;
	}

	const int64_t CFBamRelationBuff::getRequiredToTableId() const {
		return( requiredToTableId );
	}

	const int64_t* CFBamRelationBuff::getRequiredToTableIdReference() const {
		return( &requiredToTableId );
	}

	void CFBamRelationBuff::setRequiredToTableId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredToTableId" );
		if( value < cfbam::CFBamRelationBuff::TOTABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::TOTABLEID_MIN_VALUE );
		}
		requiredToTableId = value;
	}

	const int64_t CFBamRelationBuff::getRequiredToIndexId() const {
		return( requiredToIndexId );
	}

	const int64_t* CFBamRelationBuff::getRequiredToIndexIdReference() const {
		return( &requiredToIndexId );
	}

	void CFBamRelationBuff::setRequiredToIndexId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredToIndexId" );
		if( value < cfbam::CFBamRelationBuff::TOINDEXID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::TOINDEXID_MIN_VALUE );
		}
		requiredToIndexId = value;
	}

	const bool CFBamRelationBuff::getRequiredIsRequired() const {
		return( requiredIsRequired );
	}

	const bool* CFBamRelationBuff::getRequiredIsRequiredReference() const {
		return( &requiredIsRequired );
	}

	void CFBamRelationBuff::setRequiredIsRequired( const bool value ) {
		requiredIsRequired = value;
	}

	const bool CFBamRelationBuff::getRequiredIsXsdContainer() const {
		return( requiredIsXsdContainer );
	}

	const bool* CFBamRelationBuff::getRequiredIsXsdContainerReference() const {
		return( &requiredIsXsdContainer );
	}

	void CFBamRelationBuff::setRequiredIsXsdContainer( const bool value ) {
		requiredIsXsdContainer = value;
	}

	const bool CFBamRelationBuff::getRequiredIsLateResolver() const {
		return( requiredIsLateResolver );
	}

	const bool* CFBamRelationBuff::getRequiredIsLateResolverReference() const {
		return( &requiredIsLateResolver );
	}

	void CFBamRelationBuff::setRequiredIsLateResolver( const bool value ) {
		requiredIsLateResolver = value;
	}

	const bool CFBamRelationBuff::getRequiredAllowAddendum() const {
		return( requiredAllowAddendum );
	}

	const bool* CFBamRelationBuff::getRequiredAllowAddendumReference() const {
		return( &requiredAllowAddendum );
	}

	void CFBamRelationBuff::setRequiredAllowAddendum( const bool value ) {
		requiredAllowAddendum = value;
	}

	const bool CFBamRelationBuff::isOptionalNarrowedTenantIdNull() const {
		return( optionalNarrowedTenantId.isNull() );
	}

	const int64_t CFBamRelationBuff::getOptionalNarrowedTenantIdValue() const {
		return( optionalNarrowedTenantId.getValue() );
	}

	const int64_t* CFBamRelationBuff::getOptionalNarrowedTenantIdReference() const {
		return( optionalNarrowedTenantId.getReference() );
	}

	void CFBamRelationBuff::setOptionalNarrowedTenantIdNull() {
		optionalNarrowedTenantId.setNull();
	}

	void CFBamRelationBuff::setOptionalNarrowedTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNarrowedTenantIdValue" );
		if( value < cfbam::CFBamRelationBuff::NARROWEDTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::NARROWEDTENANTID_MIN_VALUE );
		}
		optionalNarrowedTenantId.setValue( value );
	}

	const bool CFBamRelationBuff::isOptionalNarrowedIdNull() const {
		return( optionalNarrowedId.isNull() );
	}

	const int64_t CFBamRelationBuff::getOptionalNarrowedIdValue() const {
		return( optionalNarrowedId.getValue() );
	}

	const int64_t* CFBamRelationBuff::getOptionalNarrowedIdReference() const {
		return( optionalNarrowedId.getReference() );
	}

	void CFBamRelationBuff::setOptionalNarrowedIdNull() {
		optionalNarrowedId.setNull();
	}

	void CFBamRelationBuff::setOptionalNarrowedIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNarrowedIdValue" );
		if( value < cfbam::CFBamRelationBuff::NARROWEDID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::NARROWEDID_MIN_VALUE );
		}
		optionalNarrowedId.setValue( value );
	}

	size_t CFBamRelationBuff::hashCode() const {
		size_t hashCode = CFBamScopeBuff::hashCode();
		hashCode = hashCode + (int)( getRequiredTableId() );
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalDefSchemaTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalDefSchemaIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		if( ! isOptionalShortNameNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalShortNameValue() );
		}
		if( ! isOptionalLabelNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalLabelValue() );
		}
		if( ! isOptionalShortDescriptionNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalShortDescriptionValue() );
		}
		if( ! isOptionalDescriptionNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalDescriptionValue() );
		}
		hashCode = ( hashCode * 0x10000 ) + getRequiredRelationType();
		if( ! isOptionalDbNameNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalDbNameValue() );
		}
		if( ! isOptionalSuffixNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalSuffixValue() );
		}
		hashCode = hashCode + (int)( getRequiredFromIndexId() );
		hashCode = hashCode + (int)( getRequiredToTableId() );
		hashCode = hashCode + (int)( getRequiredToIndexId() );
		if( getRequiredIsRequired() ) {
			hashCode = ( hashCode * 2 ) + 1;
		}
		else {
			hashCode = hashCode * 2;
		}
		if( getRequiredIsXsdContainer() ) {
			hashCode = ( hashCode * 2 ) + 1;
		}
		else {
			hashCode = hashCode * 2;
		}
		if( getRequiredIsLateResolver() ) {
			hashCode = ( hashCode * 2 ) + 1;
		}
		else {
			hashCode = hashCode * 2;
		}
		if( getRequiredAllowAddendum() ) {
			hashCode = ( hashCode * 2 ) + 1;
		}
		else {
			hashCode = hashCode * 2;
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNarrowedTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalNarrowedIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNarrowedIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	CFBamRelationBuff CFBamRelationBuff::operator =( cfbam::CFBamRelationBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredTableId( src.getRequiredTableId() );
		if( src.isOptionalDefSchemaTenantIdNull() ) {
			setOptionalDefSchemaTenantIdNull();
		}
		else {
			setOptionalDefSchemaTenantIdValue( src.getOptionalDefSchemaTenantIdValue() );
		}
		if( src.isOptionalDefSchemaIdNull() ) {
			setOptionalDefSchemaIdNull();
		}
		else {
			setOptionalDefSchemaIdValue( src.getOptionalDefSchemaIdValue() );
		}
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalShortNameNull() ) {
			setOptionalShortNameNull();
		}
		else {
			setOptionalShortNameValue( src.getOptionalShortNameValue() );
		}
		if( src.isOptionalLabelNull() ) {
			setOptionalLabelNull();
		}
		else {
			setOptionalLabelValue( src.getOptionalLabelValue() );
		}
		if( src.isOptionalShortDescriptionNull() ) {
			setOptionalShortDescriptionNull();
		}
		else {
			setOptionalShortDescriptionValue( src.getOptionalShortDescriptionValue() );
		}
		if( src.isOptionalDescriptionNull() ) {
			setOptionalDescriptionNull();
		}
		else {
			setOptionalDescriptionValue( src.getOptionalDescriptionValue() );
		}
		setRequiredRelationType( src.getRequiredRelationType() );
		if( src.isOptionalDbNameNull() ) {
			setOptionalDbNameNull();
		}
		else {
			setOptionalDbNameValue( src.getOptionalDbNameValue() );
		}
		if( src.isOptionalSuffixNull() ) {
			setOptionalSuffixNull();
		}
		else {
			setOptionalSuffixValue( src.getOptionalSuffixValue() );
		}
		setRequiredFromIndexId( src.getRequiredFromIndexId() );
		setRequiredToTableId( src.getRequiredToTableId() );
		setRequiredToIndexId( src.getRequiredToIndexId() );
		setRequiredIsRequired( src.getRequiredIsRequired() );
		setRequiredIsXsdContainer( src.getRequiredIsXsdContainer() );
		setRequiredIsLateResolver( src.getRequiredIsLateResolver() );
		setRequiredAllowAddendum( src.getRequiredAllowAddendum() );
		if( src.isOptionalNarrowedTenantIdNull() ) {
			setOptionalNarrowedTenantIdNull();
		}
		else {
			setOptionalNarrowedTenantIdValue( src.getOptionalNarrowedTenantIdValue() );
		}
		if( src.isOptionalNarrowedIdNull() ) {
			setOptionalNarrowedIdNull();
		}
		else {
			setOptionalNarrowedIdValue( src.getOptionalNarrowedIdValue() );
		}
		return( *this );
	}

	CFBamRelationBuff CFBamRelationBuff::operator =( cfbam::CFBamRelationHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredTableId( src.getRequiredTableId() );
		if( src.isOptionalDefSchemaTenantIdNull() ) {
			setOptionalDefSchemaTenantIdNull();
		}
		else {
			setOptionalDefSchemaTenantIdValue( src.getOptionalDefSchemaTenantIdValue() );
		}
		if( src.isOptionalDefSchemaIdNull() ) {
			setOptionalDefSchemaIdNull();
		}
		else {
			setOptionalDefSchemaIdValue( src.getOptionalDefSchemaIdValue() );
		}
		setRequiredName( src.getRequiredName() );
		if( src.isOptionalShortNameNull() ) {
			setOptionalShortNameNull();
		}
		else {
			setOptionalShortNameValue( src.getOptionalShortNameValue() );
		}
		if( src.isOptionalLabelNull() ) {
			setOptionalLabelNull();
		}
		else {
			setOptionalLabelValue( src.getOptionalLabelValue() );
		}
		if( src.isOptionalShortDescriptionNull() ) {
			setOptionalShortDescriptionNull();
		}
		else {
			setOptionalShortDescriptionValue( src.getOptionalShortDescriptionValue() );
		}
		if( src.isOptionalDescriptionNull() ) {
			setOptionalDescriptionNull();
		}
		else {
			setOptionalDescriptionValue( src.getOptionalDescriptionValue() );
		}
		setRequiredRelationType( src.getRequiredRelationType() );
		if( src.isOptionalDbNameNull() ) {
			setOptionalDbNameNull();
		}
		else {
			setOptionalDbNameValue( src.getOptionalDbNameValue() );
		}
		if( src.isOptionalSuffixNull() ) {
			setOptionalSuffixNull();
		}
		else {
			setOptionalSuffixValue( src.getOptionalSuffixValue() );
		}
		setRequiredFromIndexId( src.getRequiredFromIndexId() );
		setRequiredToTableId( src.getRequiredToTableId() );
		setRequiredToIndexId( src.getRequiredToIndexId() );
		setRequiredIsRequired( src.getRequiredIsRequired() );
		setRequiredIsXsdContainer( src.getRequiredIsXsdContainer() );
		setRequiredIsLateResolver( src.getRequiredIsLateResolver() );
		setRequiredAllowAddendum( src.getRequiredAllowAddendum() );
		if( src.isOptionalNarrowedTenantIdNull() ) {
			setOptionalNarrowedTenantIdNull();
		}
		else {
			setOptionalNarrowedTenantIdValue( src.getOptionalNarrowedTenantIdValue() );
		}
		if( src.isOptionalNarrowedIdNull() ) {
			setOptionalNarrowedIdNull();
		}
		else {
			setOptionalNarrowedIdValue( src.getOptionalNarrowedIdValue() );
		}
		return( *this );
	}

	bool CFBamRelationBuff::operator <( const CFBamRelationByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator <( const CFBamRelationByRelnTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator <( const CFBamRelationByRelTableIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator <( const CFBamRelationByDefSchemaIdxKey& rhs ) {
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationBuff::operator <( const CFBamRelationByFromKeyIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator <( const CFBamRelationByToTblIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator <( const CFBamRelationByToKeyIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator <( const CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationBuff::operator <( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator <( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator <( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationBuff::operator <( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationBuff::operator <=( const CFBamRelationByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator <=( const CFBamRelationByRelnTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator <=( const CFBamRelationByRelTableIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator <=( const CFBamRelationByDefSchemaIdxKey& rhs ) {
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamRelationBuff::operator <=( const CFBamRelationByFromKeyIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator <=( const CFBamRelationByToTblIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator <=( const CFBamRelationByToKeyIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator <=( const CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamRelationBuff::operator <=( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator <=( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator <=( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamRelationBuff::operator <=( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamRelationBuff::operator ==( const CFBamRelationByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator ==( const CFBamRelationByRelnTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator ==( const CFBamRelationByRelTableIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator ==( const CFBamRelationByDefSchemaIdxKey& rhs ) {
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				if( getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				if( getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationBuff::operator ==( const CFBamRelationByFromKeyIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator ==( const CFBamRelationByToTblIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator ==( const CFBamRelationByToKeyIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator ==( const CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				if( getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				if( getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationBuff::operator ==( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator ==( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator ==( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				if( getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				if( getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! isOptionalShortNameNull() ) {
			if( ! rhs.isOptionalShortNameNull() ) {
				if( getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( ! rhs.isOptionalLabelNull() ) {
				if( getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				if( getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( ! rhs.isOptionalDescriptionNull() ) {
				if( getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( getRequiredRelationType() != rhs.getRequiredRelationType() ) {
			return( false );
		}
		if( ! isOptionalDbNameNull() ) {
			if( ! rhs.isOptionalDbNameNull() ) {
				if( getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSuffixNull() ) {
			if( ! rhs.isOptionalSuffixNull() ) {
				if( getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		if( getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( false );
		}
		if( getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( false );
		}
		if( getRequiredIsRequired() != rhs.getRequiredIsRequired() ) {
			return( false );
		}
		if( getRequiredIsXsdContainer() != rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		if( getRequiredIsLateResolver() != rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		if( getRequiredAllowAddendum() != rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				if( getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				if( getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationBuff::operator ==( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				if( getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				if( getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! isOptionalShortNameNull() ) {
			if( ! rhs.isOptionalShortNameNull() ) {
				if( getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( ! rhs.isOptionalLabelNull() ) {
				if( getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				if( getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( ! rhs.isOptionalDescriptionNull() ) {
				if( getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( getRequiredRelationType() != rhs.getRequiredRelationType() ) {
			return( false );
		}
		if( ! isOptionalDbNameNull() ) {
			if( ! rhs.isOptionalDbNameNull() ) {
				if( getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSuffixNull() ) {
			if( ! rhs.isOptionalSuffixNull() ) {
				if( getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		if( getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( false );
		}
		if( getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( false );
		}
		if( getRequiredIsRequired() != rhs.getRequiredIsRequired() ) {
			return( false );
		}
		if( getRequiredIsXsdContainer() != rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		if( getRequiredIsLateResolver() != rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		if( getRequiredAllowAddendum() != rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				if( getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				if( getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationBuff::operator !=( const CFBamRelationByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator !=( const CFBamRelationByRelnTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator !=( const CFBamRelationByRelTableIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator !=( const CFBamRelationByDefSchemaIdxKey& rhs ) {
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationBuff::operator !=( const CFBamRelationByFromKeyIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator !=( const CFBamRelationByToTblIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator !=( const CFBamRelationByToKeyIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator !=( const CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationBuff::operator !=( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator !=( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator !=( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( getRequiredRelationType() != rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( getRequiredIsRequired() != rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( getRequiredIsXsdContainer() != rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( getRequiredIsLateResolver() != rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( getRequiredAllowAddendum() != rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationBuff::operator !=( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( getRequiredRelationType() != rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( getRequiredIsRequired() != rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( getRequiredIsXsdContainer() != rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( getRequiredIsLateResolver() != rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( getRequiredAllowAddendum() != rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationBuff::operator >=( const CFBamRelationByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator >=( const CFBamRelationByRelnTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator >=( const CFBamRelationByRelTableIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator >=( const CFBamRelationByDefSchemaIdxKey& rhs ) {
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationBuff::operator >=( const CFBamRelationByFromKeyIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator >=( const CFBamRelationByToTblIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator >=( const CFBamRelationByToKeyIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator >=( const CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationBuff::operator >=( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator >=( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationBuff::operator >=( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationBuff::operator >=( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationBuff::operator >( const CFBamRelationByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator >( const CFBamRelationByRelnTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator >( const CFBamRelationByRelTableIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator >( const CFBamRelationByDefSchemaIdxKey& rhs ) {
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator >( const CFBamRelationByFromKeyIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator >( const CFBamRelationByToTblIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator >( const CFBamRelationByToKeyIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator >( const CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator >( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator >( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator >( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamRelationBuff::operator >( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFBamRelationBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamRelationBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_TableId( "TableId" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_RelationType( "RelationType" );
		static const std::string S_DbName( "DbName" );
		static const std::string S_Suffix( "Suffix" );
		static const std::string S_FromIndexId( "FromIndexId" );
		static const std::string S_ToTableId( "ToTableId" );
		static const std::string S_ToIndexId( "ToIndexId" );
		static const std::string S_IsRequired( "IsRequired" );
		static const std::string S_IsXsdContainer( "IsXsdContainer" );
		static const std::string S_IsLateResolver( "IsLateResolver" );
		static const std::string S_AllowAddendum( "AllowAddendum" );
		static const std::string S_NarrowedTenantId( "NarrowedTenantId" );
		static const std::string S_NarrowedId( "NarrowedId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, getRequiredTableId() ) );
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		if( ! isOptionalShortNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortName, getOptionalShortNameValue() ) );
		}
		if( ! isOptionalLabelNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Label, getOptionalLabelValue() ) );
		}
		if( ! isOptionalShortDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ShortDescription, getOptionalShortDescriptionValue() ) );
		}
		if( ! isOptionalDescriptionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, getOptionalDescriptionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_RelationType, getRequiredRelationType() ) );
		if( ! isOptionalDbNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DbName, getOptionalDbNameValue() ) );
		}
		if( ! isOptionalSuffixNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Suffix, getOptionalSuffixValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FromIndexId, getRequiredFromIndexId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ToTableId, getRequiredToTableId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ToIndexId, getRequiredToIndexId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsRequired, getRequiredIsRequired() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsXsdContainer, getRequiredIsXsdContainer() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsLateResolver, getRequiredIsLateResolver() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_AllowAddendum, getRequiredAllowAddendum() ) );
		if( ! isOptionalNarrowedTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NarrowedTenantId, getOptionalNarrowedTenantIdValue() ) );
		}
		if( ! isOptionalNarrowedIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NarrowedId, getOptionalNarrowedIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( lhs.getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( lhs.getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( lhs.getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( lhs.getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( lhs.getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( lhs.getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( lhs.getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( lhs.getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( lhs.getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( lhs.getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( lhs.getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( lhs.getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( lhs.getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( lhs.getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( lhs.getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( lhs.getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( lhs.getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( lhs.getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( lhs.getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( lhs.getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( lhs.getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( false );
			}
			if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
			if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( false );
			}
			if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( lhs.getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( lhs.getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( lhs.getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( lhs.getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( lhs.getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( lhs.getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( lhs.getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				if( lhs.getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				if( lhs.getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				if( lhs.getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				if( lhs.getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				if( lhs.getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				if( lhs.getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( ! rhs.isOptionalShortNameNull() ) {
				if( lhs.getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( ! rhs.isOptionalLabelNull() ) {
				if( lhs.getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				if( lhs.getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( ! rhs.isOptionalDescriptionNull() ) {
				if( lhs.getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRelationType() != rhs.getRequiredRelationType() ) {
			return( false );
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( ! rhs.isOptionalDbNameNull() ) {
				if( lhs.getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSuffixNull() ) {
			if( ! rhs.isOptionalSuffixNull() ) {
				if( lhs.getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		if( lhs.getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( false );
		}
		if( lhs.getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( false );
		}
		if( lhs.getRequiredIsRequired() != rhs.getRequiredIsRequired() ) {
			return( false );
		}
		if( lhs.getRequiredIsXsdContainer() != rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		if( lhs.getRequiredIsLateResolver() != rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		if( lhs.getRequiredAllowAddendum() != rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				if( lhs.getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				if( lhs.getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				if( lhs.getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				if( lhs.getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( ! rhs.isOptionalShortNameNull() ) {
				if( lhs.getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( ! rhs.isOptionalLabelNull() ) {
				if( lhs.getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				if( lhs.getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( ! rhs.isOptionalDescriptionNull() ) {
				if( lhs.getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRelationType() != rhs.getRequiredRelationType() ) {
			return( false );
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( ! rhs.isOptionalDbNameNull() ) {
				if( lhs.getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSuffixNull() ) {
			if( ! rhs.isOptionalSuffixNull() ) {
				if( lhs.getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		if( lhs.getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( false );
		}
		if( lhs.getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( false );
		}
		if( lhs.getRequiredIsRequired() != rhs.getRequiredIsRequired() ) {
			return( false );
		}
		if( lhs.getRequiredIsXsdContainer() != rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		if( lhs.getRequiredIsLateResolver() != rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		if( lhs.getRequiredAllowAddendum() != rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				if( lhs.getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				if( lhs.getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( lhs.getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRelationType() != rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( lhs.getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredIsRequired() != rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( lhs.getRequiredIsXsdContainer() != rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( lhs.getRequiredIsLateResolver() != rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( lhs.getRequiredAllowAddendum() != rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() != rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() != rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortNameValue() != rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( lhs.getOptionalLabelValue() != rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortDescriptionValue() != rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescriptionValue() != rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredRelationType() != rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDbNameValue() != rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( lhs.getOptionalSuffixValue() != rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredIsRequired() != rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( lhs.getRequiredIsXsdContainer() != rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( lhs.getRequiredIsLateResolver() != rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( lhs.getRequiredAllowAddendum() != rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( lhs.getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( lhs.getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( lhs.getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( lhs.getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( lhs.getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( lhs.getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( lhs.getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( lhs.getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( lhs.getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( lhs.getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( lhs.getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( lhs.getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( lhs.getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( lhs.getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( lhs.getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( lhs.getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( lhs.getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( lhs.getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( lhs.getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( lhs.getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( lhs.getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		if( ! lhs.isOptionalDefSchemaTenantIdNull() ) {
			if( rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaTenantIdValue() < rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaTenantIdValue() > rhs.getOptionalDefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefSchemaIdNull() ) {
			if( rhs.isOptionalDefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefSchemaIdValue() < rhs.getOptionalDefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefSchemaIdValue() > rhs.getOptionalDefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefSchemaIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( ! lhs.isOptionalShortNameNull() ) {
			if( rhs.isOptionalShortNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortNameValue() < rhs.getOptionalShortNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortNameValue() > rhs.getOptionalShortNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLabelNull() ) {
			if( rhs.isOptionalLabelNull() ) {
				return( true );
			}
			if( lhs.getOptionalLabelValue() < rhs.getOptionalLabelValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLabelValue() > rhs.getOptionalLabelValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLabelNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalShortDescriptionNull() ) {
			if( rhs.isOptionalShortDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalShortDescriptionValue() < rhs.getOptionalShortDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalShortDescriptionValue() > rhs.getOptionalShortDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalShortDescriptionNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDescriptionNull() ) {
			if( rhs.isOptionalDescriptionNull() ) {
				return( true );
			}
			if( lhs.getOptionalDescriptionValue() < rhs.getOptionalDescriptionValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDescriptionValue() > rhs.getOptionalDescriptionValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDescriptionNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredRelationType() < rhs.getRequiredRelationType() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationType() > rhs.getRequiredRelationType() ) {
			return( true );
		}
		if( ! lhs.isOptionalDbNameNull() ) {
			if( rhs.isOptionalDbNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDbNameValue() < rhs.getOptionalDbNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDbNameValue() > rhs.getOptionalDbNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDbNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSuffixNull() ) {
			if( rhs.isOptionalSuffixNull() ) {
				return( true );
			}
			if( lhs.getOptionalSuffixValue() < rhs.getOptionalSuffixValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSuffixValue() > rhs.getOptionalSuffixValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSuffixNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		if( lhs.getRequiredIsRequired() < rhs.getRequiredIsRequired() ) {
			return( false );
		}
		else if( lhs.getRequiredIsRequired() > rhs.getRequiredIsRequired() ) {
			return( true );
		}
		if( lhs.getRequiredIsXsdContainer() < rhs.getRequiredIsXsdContainer() ) {
			return( false );
		}
		else if( lhs.getRequiredIsXsdContainer() > rhs.getRequiredIsXsdContainer() ) {
			return( true );
		}
		if( lhs.getRequiredIsLateResolver() < rhs.getRequiredIsLateResolver() ) {
			return( false );
		}
		else if( lhs.getRequiredIsLateResolver() > rhs.getRequiredIsLateResolver() ) {
			return( true );
		}
		if( lhs.getRequiredAllowAddendum() < rhs.getRequiredAllowAddendum() ) {
			return( false );
		}
		else if( lhs.getRequiredAllowAddendum() > rhs.getRequiredAllowAddendum() ) {
			return( true );
		}
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

