// Description: C++18 implementation of a Chain history buffer object.

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

#include <cfbam/CFBamHPKey.hpp>
#include <cfbam/CFBamChainPKey.hpp>
#include <cfbam/CFBamChainBuff.hpp>
#include <cfbam/CFBamChainHPKey.hpp>
#include <cfbam/CFBamChainHBuff.hpp>
#include <cfbam/CFBamChainByTenantIdxKey.hpp>
#include <cfbam/CFBamChainByChainTableIdxKey.hpp>
#include <cfbam/CFBamChainByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamChainByUNameIdxKey.hpp>
#include <cfbam/CFBamChainByPrevRelIdxKey.hpp>
#include <cfbam/CFBamChainByNextRelIdxKey.hpp>

namespace cfbam {

	const std::string CFBamChainHBuff::CLASS_NAME( "CFBamChainHBuff" );
	CFBamChainHBuff::CFBamChainHBuff()
	: CFBamHPKey(), cflib::ICFLibCloneableObj() {
		requiredTenantId = cfbam::CFBamChainBuff::TENANTID_INIT_VALUE;
		requiredId = cfbam::CFBamChainBuff::ID_INIT_VALUE;
		optionalDefSchemaTenantId.setNull();
		optionalDefSchemaId.setNull();
		requiredName = new std::string( cfbam::CFBamChainBuff::NAME_INIT_VALUE );
		optionalShortName = NULL;
		optionalLabel = NULL;
		optionalShortDescription = NULL;
		optionalDescription = NULL;
		requiredTableId = cfbam::CFBamChainBuff::TABLEID_INIT_VALUE;
		optionalSuffix = NULL;
		requiredPrevRelationTenantId = cfbam::CFBamChainBuff::PREVRELATIONTENANTID_INIT_VALUE;
		requiredPrevRelationId = cfbam::CFBamChainBuff::PREVRELATIONID_INIT_VALUE;
		requiredNextRelationTenantId = cfbam::CFBamChainBuff::NEXTRELATIONTENANTID_INIT_VALUE;
		requiredNextRelationId = cfbam::CFBamChainBuff::NEXTRELATIONID_INIT_VALUE;
	}

	CFBamChainHBuff::CFBamChainHBuff( const CFBamChainHBuff& src )
	: CFBamHPKey(), cflib::ICFLibCloneableObj() {
		requiredTenantId = cfbam::CFBamChainBuff::TENANTID_INIT_VALUE;
		requiredId = cfbam::CFBamChainBuff::ID_INIT_VALUE;
		optionalDefSchemaTenantId.setNull();
		optionalDefSchemaId.setNull();
		requiredName = new std::string( cfbam::CFBamChainBuff::NAME_INIT_VALUE );
		optionalShortName = NULL;
		optionalLabel = NULL;
		optionalShortDescription = NULL;
		optionalDescription = NULL;
		requiredTableId = cfbam::CFBamChainBuff::TABLEID_INIT_VALUE;
		optionalSuffix = NULL;
		requiredPrevRelationTenantId = cfbam::CFBamChainBuff::PREVRELATIONTENANTID_INIT_VALUE;
		requiredPrevRelationId = cfbam::CFBamChainBuff::PREVRELATIONID_INIT_VALUE;
		requiredNextRelationTenantId = cfbam::CFBamChainBuff::NEXTRELATIONTENANTID_INIT_VALUE;
		requiredNextRelationId = cfbam::CFBamChainBuff::NEXTRELATIONID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
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
		setRequiredTableId( src.getRequiredTableId() );
		if( src.isOptionalSuffixNull() ) {
			setOptionalSuffixNull();
		}
		else {
			setOptionalSuffixValue( src.getOptionalSuffixValue() );
		}
		setRequiredPrevRelationTenantId( src.getRequiredPrevRelationTenantId() );
		setRequiredPrevRelationId( src.getRequiredPrevRelationId() );
		setRequiredNextRelationTenantId( src.getRequiredNextRelationTenantId() );
		setRequiredNextRelationId( src.getRequiredNextRelationId() );
	}

	CFBamChainHBuff::~CFBamChainHBuff() {
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
		if( optionalSuffix != NULL ) {
			delete optionalSuffix;
			optionalSuffix = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFBamChainHBuff::clone() {
		CFBamChainHBuff* copy = new CFBamChainHBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const int64_t CFBamChainHBuff::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamChainHBuff::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamChainHBuff::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamChainBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamChainHBuff::getRequiredId() const {
		return( requiredId );
	}

	const int64_t* CFBamChainHBuff::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFBamChainHBuff::setRequiredId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredId" );
		if( value < cfbam::CFBamChainBuff::ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::ID_MIN_VALUE );
		}
		requiredId = value;
	}

	const int64_t CFBamChainHBuff::getOptionalDefSchemaTenantIdValue() const {
		return( optionalDefSchemaTenantId.getValue() );
	}

	const int64_t* CFBamChainHBuff::getOptionalDefSchemaTenantIdReference() const {
		return( optionalDefSchemaTenantId.getReference() );
	}

	const bool CFBamChainHBuff::isOptionalDefSchemaTenantIdNull() const {
		return( optionalDefSchemaTenantId.isNull() );
	}

	void CFBamChainHBuff::setOptionalDefSchemaTenantIdNull() {
		optionalDefSchemaTenantId.setNull();
	}

	void CFBamChainHBuff::setOptionalDefSchemaTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDefSchemaTenantIdValue" );
		if( value < cfbam::CFBamChainBuff::DEFSCHEMATENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::DEFSCHEMATENANTID_MIN_VALUE );
		}
		optionalDefSchemaTenantId.setValue( value );
	}

	const int64_t CFBamChainHBuff::getOptionalDefSchemaIdValue() const {
		return( optionalDefSchemaId.getValue() );
	}

	const int64_t* CFBamChainHBuff::getOptionalDefSchemaIdReference() const {
		return( optionalDefSchemaId.getReference() );
	}

	const bool CFBamChainHBuff::isOptionalDefSchemaIdNull() const {
		return( optionalDefSchemaId.isNull() );
	}

	void CFBamChainHBuff::setOptionalDefSchemaIdNull() {
		optionalDefSchemaId.setNull();
	}

	void CFBamChainHBuff::setOptionalDefSchemaIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDefSchemaIdValue" );
		if( value < cfbam::CFBamChainBuff::DEFSCHEMAID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::DEFSCHEMAID_MIN_VALUE );
		}
		optionalDefSchemaId.setValue( value );
	}

	const std::string& CFBamChainHBuff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamChainHBuff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamChainHBuff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamChainBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamChainBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	const std::string& CFBamChainHBuff::getOptionalShortNameValue() const {
		static const std::string S_ProcName( "getOptionalShortNameValue" );
		if( optionalShortName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalShortName );
	}

	const std::string* CFBamChainHBuff::getOptionalShortNameReference() const {
		return( optionalShortName );
	}

	const bool CFBamChainHBuff::isOptionalShortNameNull() const {
		return( optionalShortName == NULL );
	}

	void CFBamChainHBuff::setOptionalShortNameNull() {
		if( optionalShortName != NULL ) {
			delete optionalShortName;
			optionalShortName = NULL;
		}
	}

	void CFBamChainHBuff::setOptionalShortNameValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalShortNameValue" );
		if( value.length() > CFBamChainBuff::SHORTNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamChainBuff::SHORTNAME_MAX_LEN );
		}
		if( optionalShortName != NULL ) {
			delete optionalShortName;
			optionalShortName = NULL;
		}
		optionalShortName = new std::string( value );
	}

	const std::string& CFBamChainHBuff::getOptionalLabelValue() const {
		static const std::string S_ProcName( "getOptionalLabelValue" );
		if( optionalLabel == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalLabel );
	}

	const std::string* CFBamChainHBuff::getOptionalLabelReference() const {
		return( optionalLabel );
	}

	const bool CFBamChainHBuff::isOptionalLabelNull() const {
		return( optionalLabel == NULL );
	}

	void CFBamChainHBuff::setOptionalLabelNull() {
		if( optionalLabel != NULL ) {
			delete optionalLabel;
			optionalLabel = NULL;
		}
	}

	void CFBamChainHBuff::setOptionalLabelValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalLabelValue" );
		if( value.length() > CFBamChainBuff::LABEL_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamChainBuff::LABEL_MAX_LEN );
		}
		if( optionalLabel != NULL ) {
			delete optionalLabel;
			optionalLabel = NULL;
		}
		optionalLabel = new std::string( value );
	}

	const std::string& CFBamChainHBuff::getOptionalShortDescriptionValue() const {
		static const std::string S_ProcName( "getOptionalShortDescriptionValue" );
		if( optionalShortDescription == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalShortDescription );
	}

	const std::string* CFBamChainHBuff::getOptionalShortDescriptionReference() const {
		return( optionalShortDescription );
	}

	const bool CFBamChainHBuff::isOptionalShortDescriptionNull() const {
		return( optionalShortDescription == NULL );
	}

	void CFBamChainHBuff::setOptionalShortDescriptionNull() {
		if( optionalShortDescription != NULL ) {
			delete optionalShortDescription;
			optionalShortDescription = NULL;
		}
	}

	void CFBamChainHBuff::setOptionalShortDescriptionValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalShortDescriptionValue" );
		if( value.length() > CFBamChainBuff::SHORTDESCRIPTION_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamChainBuff::SHORTDESCRIPTION_MAX_LEN );
		}
		if( optionalShortDescription != NULL ) {
			delete optionalShortDescription;
			optionalShortDescription = NULL;
		}
		optionalShortDescription = new std::string( value );
	}

	const std::string& CFBamChainHBuff::getOptionalDescriptionValue() const {
		static const std::string S_ProcName( "getOptionalDescriptionValue" );
		if( optionalDescription == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalDescription );
	}

	const std::string* CFBamChainHBuff::getOptionalDescriptionReference() const {
		return( optionalDescription );
	}

	const bool CFBamChainHBuff::isOptionalDescriptionNull() const {
		return( optionalDescription == NULL );
	}

	void CFBamChainHBuff::setOptionalDescriptionNull() {
		if( optionalDescription != NULL ) {
			delete optionalDescription;
			optionalDescription = NULL;
		}
	}

	void CFBamChainHBuff::setOptionalDescriptionValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalDescriptionValue" );
		if( value.length() > CFBamChainBuff::DESCRIPTION_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamChainBuff::DESCRIPTION_MAX_LEN );
		}
		if( optionalDescription != NULL ) {
			delete optionalDescription;
			optionalDescription = NULL;
		}
		optionalDescription = new std::string( value );
	}

	const int64_t CFBamChainHBuff::getRequiredTableId() const {
		return( requiredTableId );
	}

	const int64_t* CFBamChainHBuff::getRequiredTableIdReference() const {
		return( &requiredTableId );
	}

	void CFBamChainHBuff::setRequiredTableId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTableId" );
		if( value < cfbam::CFBamChainBuff::TABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::TABLEID_MIN_VALUE );
		}
		requiredTableId = value;
	}

	const std::string& CFBamChainHBuff::getOptionalSuffixValue() const {
		static const std::string S_ProcName( "getOptionalSuffixValue" );
		if( optionalSuffix == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalSuffix );
	}

	const std::string* CFBamChainHBuff::getOptionalSuffixReference() const {
		return( optionalSuffix );
	}

	const bool CFBamChainHBuff::isOptionalSuffixNull() const {
		return( optionalSuffix == NULL );
	}

	void CFBamChainHBuff::setOptionalSuffixNull() {
		if( optionalSuffix != NULL ) {
			delete optionalSuffix;
			optionalSuffix = NULL;
		}
	}

	void CFBamChainHBuff::setOptionalSuffixValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalSuffixValue" );
		if( value.length() > CFBamChainBuff::SUFFIX_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamChainBuff::SUFFIX_MAX_LEN );
		}
		if( optionalSuffix != NULL ) {
			delete optionalSuffix;
			optionalSuffix = NULL;
		}
		optionalSuffix = new std::string( value );
	}

	const int64_t CFBamChainHBuff::getRequiredPrevRelationTenantId() const {
		return( requiredPrevRelationTenantId );
	}

	const int64_t* CFBamChainHBuff::getRequiredPrevRelationTenantIdReference() const {
		return( &requiredPrevRelationTenantId );
	}

	void CFBamChainHBuff::setRequiredPrevRelationTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPrevRelationTenantId" );
		if( value < cfbam::CFBamChainBuff::PREVRELATIONTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::PREVRELATIONTENANTID_MIN_VALUE );
		}
		requiredPrevRelationTenantId = value;
	}

	const int64_t CFBamChainHBuff::getRequiredPrevRelationId() const {
		return( requiredPrevRelationId );
	}

	const int64_t* CFBamChainHBuff::getRequiredPrevRelationIdReference() const {
		return( &requiredPrevRelationId );
	}

	void CFBamChainHBuff::setRequiredPrevRelationId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPrevRelationId" );
		if( value < cfbam::CFBamChainBuff::PREVRELATIONID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::PREVRELATIONID_MIN_VALUE );
		}
		requiredPrevRelationId = value;
	}

	const int64_t CFBamChainHBuff::getRequiredNextRelationTenantId() const {
		return( requiredNextRelationTenantId );
	}

	const int64_t* CFBamChainHBuff::getRequiredNextRelationTenantIdReference() const {
		return( &requiredNextRelationTenantId );
	}

	void CFBamChainHBuff::setRequiredNextRelationTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredNextRelationTenantId" );
		if( value < cfbam::CFBamChainBuff::NEXTRELATIONTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::NEXTRELATIONTENANTID_MIN_VALUE );
		}
		requiredNextRelationTenantId = value;
	}

	const int64_t CFBamChainHBuff::getRequiredNextRelationId() const {
		return( requiredNextRelationId );
	}

	const int64_t* CFBamChainHBuff::getRequiredNextRelationIdReference() const {
		return( &requiredNextRelationId );
	}

	void CFBamChainHBuff::setRequiredNextRelationId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredNextRelationId" );
		if( value < cfbam::CFBamChainBuff::NEXTRELATIONID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::NEXTRELATIONID_MIN_VALUE );
		}
		requiredNextRelationId = value;
	}

	size_t CFBamChainHBuff::hashCode() const {
		size_t hashCode = CFBamHPKey::hashCode();
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredId() );
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
		hashCode = hashCode + (int)( getRequiredTableId() );
		if( ! isOptionalSuffixNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalSuffixValue() );
		}
		hashCode = hashCode + (int)( getRequiredPrevRelationTenantId() );
		hashCode = hashCode + (int)( getRequiredPrevRelationId() );
		hashCode = hashCode + (int)( getRequiredNextRelationTenantId() );
		hashCode = hashCode + (int)( getRequiredNextRelationId() );
		return( hashCode );
	}

	CFBamChainHBuff CFBamChainHBuff::operator =( cfbam::CFBamChainBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
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
		setRequiredTableId( src.getRequiredTableId() );
		if( src.isOptionalSuffixNull() ) {
			setOptionalSuffixNull();
		}
		else {
			setOptionalSuffixValue( src.getOptionalSuffixValue() );
		}
		setRequiredPrevRelationTenantId( src.getRequiredPrevRelationTenantId() );
		setRequiredPrevRelationId( src.getRequiredPrevRelationId() );
		setRequiredNextRelationTenantId( src.getRequiredNextRelationTenantId() );
		setRequiredNextRelationId( src.getRequiredNextRelationId() );
		return( *this );
	}

	CFBamChainHBuff CFBamChainHBuff::operator =( cfbam::CFBamChainHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
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
		setRequiredTableId( src.getRequiredTableId() );
		if( src.isOptionalSuffixNull() ) {
			setOptionalSuffixNull();
		}
		else {
			setOptionalSuffixValue( src.getOptionalSuffixValue() );
		}
		setRequiredPrevRelationTenantId( src.getRequiredPrevRelationTenantId() );
		setRequiredPrevRelationId( src.getRequiredPrevRelationId() );
		setRequiredNextRelationTenantId( src.getRequiredNextRelationTenantId() );
		setRequiredNextRelationId( src.getRequiredNextRelationId() );
		return( *this );
	}

	bool CFBamChainHBuff::operator <( const CFBamChainByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator <( const CFBamChainByChainTableIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator <( const CFBamChainByDefSchemaIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator <( const CFBamChainByUNameIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator <( const CFBamChainByPrevRelIdxKey& rhs ) {
		if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator <( const CFBamChainByNextRelIdxKey& rhs ) {
		if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator <( const CFBamChainPKey& rhs ) {
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

	bool CFBamChainHBuff::operator <( const CFBamChainHPKey& rhs ) {
		if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() >= rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() <= rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() >= rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() <= rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool CFBamChainHBuff::operator <( const CFBamChainHBuff& rhs ) {
		if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() >= rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() <= rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() >= rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() <= rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
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
		if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator <( const CFBamChainBuff& rhs ) {
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
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
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
		if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator <=( const CFBamChainByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator <=( const CFBamChainByChainTableIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator <=( const CFBamChainByDefSchemaIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator <=( const CFBamChainByUNameIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator <=( const CFBamChainByPrevRelIdxKey& rhs ) {
		if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator <=( const CFBamChainByNextRelIdxKey& rhs ) {
		if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator <=( const CFBamChainPKey& rhs ) {
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

	bool CFBamChainHBuff::operator <=( const CFBamChainHPKey& rhs ) {
		if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() > rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() < rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool CFBamChainHBuff::operator <=( const CFBamChainHBuff& rhs ) {
		if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() > rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() < rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
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
		if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator <=( const CFBamChainBuff& rhs ) {
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
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
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
		if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator ==( const CFBamChainByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator ==( const CFBamChainByChainTableIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator ==( const CFBamChainByDefSchemaIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator ==( const CFBamChainByUNameIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator ==( const CFBamChainByPrevRelIdxKey& rhs ) {
		if( getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		if( getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator ==( const CFBamChainByNextRelIdxKey& rhs ) {
		if( getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		if( getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator ==( const CFBamChainPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator ==( const CFBamChainHPKey& rhs ) {
		if( getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( false );
		}
		if( getAuditStamp() != rhs.getAuditStamp() ) {
			return( false );
		}
		if( getAuditActionId() != rhs.getAuditActionId() ) {
			return( false );
		}
		if( getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( false );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( false );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator ==( const CFBamChainHBuff& rhs ) {
		if( getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( false );
		}
		if( getAuditStamp() != rhs.getAuditStamp() ) {
			return( false );
		}
		if( getAuditActionId() != rhs.getAuditActionId() ) {
			return( false );
		}
		if( getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( false );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( false );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
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
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
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
		if( getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		if( getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		if( getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		if( getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator ==( const CFBamChainBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
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
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
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
		if( getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		if( getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		if( getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		if( getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator !=( const CFBamChainByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator !=( const CFBamChainByChainTableIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator !=( const CFBamChainByDefSchemaIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator !=( const CFBamChainByUNameIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator !=( const CFBamChainByPrevRelIdxKey& rhs ) {
		if( getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator !=( const CFBamChainByNextRelIdxKey& rhs ) {
		if( getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator !=( const CFBamChainPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator !=( const CFBamChainHPKey& rhs ) {
		if( getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() != rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() != rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( true );
			}
		}
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator !=( const CFBamChainHBuff& rhs ) {
		if( getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() != rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() != rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( true );
			}
		}
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
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
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
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
		if( getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator !=( const CFBamChainBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
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
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
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
		if( getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator >=( const CFBamChainByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator >=( const CFBamChainByChainTableIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator >=( const CFBamChainByDefSchemaIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator >=( const CFBamChainByUNameIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator >=( const CFBamChainByPrevRelIdxKey& rhs ) {
		if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator >=( const CFBamChainByNextRelIdxKey& rhs ) {
		if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator >=( const CFBamChainPKey& rhs ) {
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

	bool CFBamChainHBuff::operator >=( const CFBamChainHPKey& rhs ) {
		if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool CFBamChainHBuff::operator >=( const CFBamChainHBuff& rhs ) {
		if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
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
		if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator >=( const CFBamChainBuff& rhs ) {
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
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
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
		if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainHBuff::operator >( const CFBamChainByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator >( const CFBamChainByChainTableIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator >( const CFBamChainByDefSchemaIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator >( const CFBamChainByUNameIdxKey& rhs ) {
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

	bool CFBamChainHBuff::operator >( const CFBamChainByPrevRelIdxKey& rhs ) {
		if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator >( const CFBamChainByNextRelIdxKey& rhs ) {
		if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator >( const CFBamChainPKey& rhs ) {
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

	bool CFBamChainHBuff::operator >( const CFBamChainHPKey& rhs ) {
		if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool CFBamChainHBuff::operator >( const CFBamChainHBuff& rhs ) {
		if( getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
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
		if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainHBuff::operator >( const CFBamChainBuff& rhs ) {
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
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
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
		if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	std::string CFBamChainHBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamChainHBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_AuditClusterId( "AuditClusterId" );
		static const std::string S_AuditStamp( "AuditStamp" );
		static const std::string S_AuditActionId( "AuditActionId" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_AuditSessionId( "AuditSessionId" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ShortName( "ShortName" );
		static const std::string S_Label( "Label" );
		static const std::string S_ShortDescription( "ShortDescription" );
		static const std::string S_Description( "Description" );
		static const std::string S_TableId( "TableId" );
		static const std::string S_Suffix( "Suffix" );
		static const std::string S_PrevRelationTenantId( "PrevRelationTenantId" );
		static const std::string S_PrevRelationId( "PrevRelationId" );
		static const std::string S_NextRelationTenantId( "NextRelationTenantId" );
		static const std::string S_NextRelationId( "NextRelationId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_AuditClusterId, auditClusterId ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_AuditClusterId, auditStamp ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_AuditActionId, auditActionId ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_AuditSessionId, auditSessionId ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, getRequiredTableId() ) );
		if( ! isOptionalSuffixNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Suffix, getOptionalSuffixValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevRelationTenantId, getRequiredPrevRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevRelationId, getRequiredPrevRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextRelationTenantId, getRequiredNextRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextRelationId, getRequiredNextRelationId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByChainTableIdxKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByDefSchemaIdxKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByUNameIdxKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainPKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainHPKey& rhs ) {
		if( lhs.getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( lhs.getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() > rhs.getAuditStamp() ) {
			return( false );
		}
		else if( lhs.getAuditStamp() < rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() > rhs.getAuditActionId() ) {
			return( false );
		}
		else if( lhs.getAuditActionId() < rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( lhs.getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool operator <(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( lhs.getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() > rhs.getAuditStamp() ) {
			return( false );
		}
		else if( lhs.getAuditStamp() < rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() > rhs.getAuditActionId() ) {
			return( false );
		}
		else if( lhs.getAuditActionId() < rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( lhs.getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
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
		if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainBuff& rhs ) {
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
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
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
		if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByChainTableIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByDefSchemaIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByUNameIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainPKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainHPKey& rhs ) {
		if( lhs.getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( false );
		}
		if( lhs.getAuditStamp() != rhs.getAuditStamp() ) {
			return( false );
		}
		if( lhs.getAuditActionId() != rhs.getAuditActionId() ) {
			return( false );
		}
		if( lhs.getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( false );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( false );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool operator <=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( false );
		}
		if( lhs.getAuditStamp() != rhs.getAuditStamp() ) {
			return( false );
		}
		if( lhs.getAuditActionId() != rhs.getAuditActionId() ) {
			return( false );
		}
		if( lhs.getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( false );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( false );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
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
		if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainBuff& rhs ) {
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
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
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
		if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByChainTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByDefSchemaIdxKey& rhs ) {
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

	bool operator ==(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByUNameIdxKey& rhs ) {
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

	bool operator ==(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainHPKey& rhs ) {
		if( lhs.getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( false );
		}
		if( lhs.getAuditStamp() != rhs.getAuditStamp() ) {
			return( false );
		}
		if( lhs.getAuditActionId() != rhs.getAuditActionId() ) {
			return( false );
		}
		if( lhs.getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( false );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( false );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( false );
		}
		if( lhs.getAuditStamp() != rhs.getAuditStamp() ) {
			return( false );
		}
		if( lhs.getAuditActionId() != rhs.getAuditActionId() ) {
			return( false );
		}
		if( lhs.getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( false );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( false );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( false );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
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
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
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
		if( lhs.getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		if( lhs.getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
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
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
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
		if( lhs.getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		if( lhs.getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByChainTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByDefSchemaIdxKey& rhs ) {
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

	bool operator !=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByUNameIdxKey& rhs ) {
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

	bool operator !=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainHPKey& rhs ) {
		if( lhs.getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() != rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() != rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( true );
			}
		}
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getAuditClusterId() != rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() != rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() != rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() != rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) != 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( true );
			}
		}
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
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
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
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
		if( lhs.getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
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
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
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
		if( lhs.getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByChainTableIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByDefSchemaIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByUNameIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainPKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainHPKey& rhs ) {
		if( lhs.getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( lhs.getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( lhs.getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( lhs.getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( lhs.getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool operator >=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( lhs.getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( lhs.getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( lhs.getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( lhs.getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
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
		if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainBuff& rhs ) {
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
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
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
		if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByChainTableIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByDefSchemaIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByUNameIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainPKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainHPKey& rhs ) {
		if( lhs.getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( lhs.getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( lhs.getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( lhs.getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( lhs.getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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

	bool operator >(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getAuditClusterId() < rhs.getAuditClusterId() ) {
			return( false );
		}
		else if( lhs.getAuditClusterId() > rhs.getAuditClusterId() ) {
			return( true );
		}
		if( lhs.getAuditStamp() < rhs.getAuditStamp() ) {
			return( false );
		}
		else if( lhs.getAuditStamp() > rhs.getAuditStamp() ) {
			return( true );
		}
		if( lhs.getAuditActionId() < rhs.getAuditActionId() ) {
			return( false );
		}
		else if( lhs.getAuditActionId() > rhs.getAuditActionId() ) {
			return( true );
		}
		if( lhs.getRequiredRevision() < rhs.getRequiredRevision() ) {
			return( false );
		}
		else if( lhs.getRequiredRevision() > rhs.getRequiredRevision() ) {
			return( true );
		}
		if( lhs.getAuditSessionId() != NULL ) {
			if( rhs.getAuditSessionId() == NULL ) {
				return( true );
			}
			const uuid_ptr_t lhuuid = lhs.getAuditSessionId();
			const uuid_ptr_t rhuuid = rhs.getAuditSessionId();
			if( uuid_compare( lhuuid, rhuuid ) < 0 ) {
				return( false );
			}
			else if( uuid_compare( lhuuid, rhuuid ) > 0 ) {
				return( true );
			}
		}
		else {
			if( rhs.getAuditSessionId() != NULL ) {
				return( false );
			}
		}
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
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
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
		if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamChainHBuff& lhs, const cfbam::CFBamChainBuff& rhs ) {
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
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
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
		if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}
}

