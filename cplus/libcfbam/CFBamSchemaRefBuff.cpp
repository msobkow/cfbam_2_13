// Description: C++18 implementation for a SchemaRef buffer object.

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

#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamSchemaRefBySchemaIdxKey.hpp>
#include <cfbam/CFBamSchemaRefByUNameIdxKey.hpp>
#include <cfbam/CFBamSchemaRefByRefSchemaIdxKey.hpp>
#include <cfbam/CFBamSchemaRefByPrevIdxKey.hpp>
#include <cfbam/CFBamSchemaRefByNextIdxKey.hpp>
#include <cfbam/CFBamSchema.hpp>

namespace cfbam {

	const std::string CFBamSchemaRefBuff::GENDEFNAME( "SchemaRef" );
	const classcode_t CFBamSchemaRefBuff::CLASS_CODE = 0xa804L;
	const std::string CFBamSchemaRefBuff::CLASS_NAME( "CFBamSchemaRefBuff" );
		const std::string CFBamSchemaRefBuff::COLNAME_SCHEMAID( "SchemaId" );
		const std::string CFBamSchemaRefBuff::COLNAME_NAME( "Name" );
		const std::string CFBamSchemaRefBuff::COLNAME_REFMODELNAME( "RefModelName" );
		const std::string CFBamSchemaRefBuff::COLNAME_INCLUDEROOT( "IncludeRoot" );
		const std::string CFBamSchemaRefBuff::COLNAME_REFSCHEMATENANTID( "RefSchemaTenantId" );
		const std::string CFBamSchemaRefBuff::COLNAME_REFSCHEMAID( "RefSchemaId" );
		const std::string CFBamSchemaRefBuff::COLNAME_PREVTENANTID( "PrevTenantId" );
		const std::string CFBamSchemaRefBuff::COLNAME_PREVID( "PrevId" );
		const std::string CFBamSchemaRefBuff::COLNAME_NEXTTENANTID( "NextTenantId" );
		const std::string CFBamSchemaRefBuff::COLNAME_NEXTID( "NextId" );
	const int64_t CFBamSchemaRefBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::ID_INIT_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::SCHEMAID_INIT_VALUE = 0LL;
	const std::string CFBamSchemaRefBuff::NAME_INIT_VALUE( "" );
	const std::string CFBamSchemaRefBuff::REFMODELNAME_INIT_VALUE( "" );
	const std::string CFBamSchemaRefBuff::INCLUDEROOT_INIT_VALUE( "" );
	const int64_t CFBamSchemaRefBuff::REFSCHEMATENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::REFSCHEMAID_INIT_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::PREVTENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::PREVID_INIT_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::NEXTTENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::NEXTID_INIT_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::ID_MIN_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::SCHEMAID_MIN_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::REFSCHEMATENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::REFSCHEMAID_MIN_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::PREVTENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::PREVID_MIN_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::NEXTTENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamSchemaRefBuff::NEXTID_MIN_VALUE = 0LL;
	const std::string::size_type CFBamSchemaRefBuff::NAME_MAX_LEN = 192;
	const std::string::size_type CFBamSchemaRefBuff::REFMODELNAME_MAX_LEN = 1024;
	const std::string::size_type CFBamSchemaRefBuff::INCLUDEROOT_MAX_LEN = 1024;

	CFBamSchemaRefBuff::CFBamSchemaRefBuff()
	: CFBamScopeBuff()
	{
		requiredSchemaId = cfbam::CFBamSchemaRefBuff::SCHEMAID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamSchemaRefBuff::NAME_INIT_VALUE );
		requiredRefModelName = new std::string( cfbam::CFBamSchemaRefBuff::REFMODELNAME_INIT_VALUE );
		requiredIncludeRoot = new std::string( cfbam::CFBamSchemaRefBuff::INCLUDEROOT_INIT_VALUE );
		optionalRefSchemaTenantId.setNull();
		optionalRefSchemaId.setNull();
		optionalPrevTenantId.setNull();
		optionalPrevId.setNull();
		optionalNextTenantId.setNull();
		optionalNextId.setNull();
	}

	CFBamSchemaRefBuff::CFBamSchemaRefBuff( const CFBamSchemaRefBuff& src )
	: CFBamScopeBuff()
	{
		requiredSchemaId = cfbam::CFBamSchemaRefBuff::SCHEMAID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamSchemaRefBuff::NAME_INIT_VALUE );
		requiredRefModelName = new std::string( cfbam::CFBamSchemaRefBuff::REFMODELNAME_INIT_VALUE );
		requiredIncludeRoot = new std::string( cfbam::CFBamSchemaRefBuff::INCLUDEROOT_INIT_VALUE );
		optionalRefSchemaTenantId.setNull();
		optionalRefSchemaId.setNull();
		optionalPrevTenantId.setNull();
		optionalPrevId.setNull();
		optionalNextTenantId.setNull();
		optionalNextId.setNull();
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredSchemaId( src.getRequiredSchemaId() );
		setRequiredName( src.getRequiredName() );
		setRequiredRefModelName( src.getRequiredRefModelName() );
		setRequiredIncludeRoot( src.getRequiredIncludeRoot() );
		if( src.isOptionalRefSchemaTenantIdNull() ) {
			setOptionalRefSchemaTenantIdNull();
		}
		else {
			setOptionalRefSchemaTenantIdValue( src.getOptionalRefSchemaTenantIdValue() );
		}
		if( src.isOptionalRefSchemaIdNull() ) {
			setOptionalRefSchemaIdNull();
		}
		else {
			setOptionalRefSchemaIdValue( src.getOptionalRefSchemaIdValue() );
		}
		if( src.isOptionalPrevTenantIdNull() ) {
			setOptionalPrevTenantIdNull();
		}
		else {
			setOptionalPrevTenantIdValue( src.getOptionalPrevTenantIdValue() );
		}
		if( src.isOptionalPrevIdNull() ) {
			setOptionalPrevIdNull();
		}
		else {
			setOptionalPrevIdValue( src.getOptionalPrevIdValue() );
		}
		if( src.isOptionalNextTenantIdNull() ) {
			setOptionalNextTenantIdNull();
		}
		else {
			setOptionalNextTenantIdValue( src.getOptionalNextTenantIdValue() );
		}
		if( src.isOptionalNextIdNull() ) {
			setOptionalNextIdNull();
		}
		else {
			setOptionalNextIdValue( src.getOptionalNextIdValue() );
		}
	}

	CFBamSchemaRefBuff::~CFBamSchemaRefBuff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		if( requiredRefModelName != NULL ) {
			delete requiredRefModelName;
			requiredRefModelName = NULL;
		}
		if( requiredIncludeRoot != NULL ) {
			delete requiredIncludeRoot;
			requiredIncludeRoot = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFBamSchemaRefBuff::clone() {
		CFBamSchemaRefBuff* copy = new CFBamSchemaRefBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFBamSchemaRefBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamSchemaRefBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamSchemaRefBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfbam::CFBamScopeBuff::implementsClassCode( argClassCode ) );
		}
	}

	const int64_t CFBamSchemaRefBuff::getRequiredSchemaId() const {
		return( requiredSchemaId );
	}

	const int64_t* CFBamSchemaRefBuff::getRequiredSchemaIdReference() const {
		return( &requiredSchemaId );
	}

	void CFBamSchemaRefBuff::setRequiredSchemaId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredSchemaId" );
		if( value < cfbam::CFBamSchemaRefBuff::SCHEMAID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaRefBuff::SCHEMAID_MIN_VALUE );
		}
		requiredSchemaId = value;
	}

	const std::string& CFBamSchemaRefBuff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamSchemaRefBuff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamSchemaRefBuff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamSchemaRefBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamSchemaRefBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	const std::string& CFBamSchemaRefBuff::getRequiredRefModelName() const {
		return( *requiredRefModelName );
	}

	const std::string* CFBamSchemaRefBuff::getRequiredRefModelNameReference() const {
		return( requiredRefModelName );
	}

	void CFBamSchemaRefBuff::setRequiredRefModelName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredRefModelName" );
		if( value.length() > CFBamSchemaRefBuff::REFMODELNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamSchemaRefBuff::REFMODELNAME_MAX_LEN );
		}
		if( requiredRefModelName != NULL ) {
			delete requiredRefModelName;
			requiredRefModelName = NULL;
		}
		requiredRefModelName = new std::string( value );
	}

	const std::string& CFBamSchemaRefBuff::getRequiredIncludeRoot() const {
		return( *requiredIncludeRoot );
	}

	const std::string* CFBamSchemaRefBuff::getRequiredIncludeRootReference() const {
		return( requiredIncludeRoot );
	}

	void CFBamSchemaRefBuff::setRequiredIncludeRoot( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredIncludeRoot" );
		if( value.length() > CFBamSchemaRefBuff::INCLUDEROOT_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamSchemaRefBuff::INCLUDEROOT_MAX_LEN );
		}
		if( requiredIncludeRoot != NULL ) {
			delete requiredIncludeRoot;
			requiredIncludeRoot = NULL;
		}
		requiredIncludeRoot = new std::string( value );
	}

	const bool CFBamSchemaRefBuff::isOptionalRefSchemaTenantIdNull() const {
		return( optionalRefSchemaTenantId.isNull() );
	}

	const int64_t CFBamSchemaRefBuff::getOptionalRefSchemaTenantIdValue() const {
		return( optionalRefSchemaTenantId.getValue() );
	}

	const int64_t* CFBamSchemaRefBuff::getOptionalRefSchemaTenantIdReference() const {
		return( optionalRefSchemaTenantId.getReference() );
	}

	void CFBamSchemaRefBuff::setOptionalRefSchemaTenantIdNull() {
		optionalRefSchemaTenantId.setNull();
	}

	void CFBamSchemaRefBuff::setOptionalRefSchemaTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRefSchemaTenantIdValue" );
		if( value < cfbam::CFBamSchemaRefBuff::REFSCHEMATENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaRefBuff::REFSCHEMATENANTID_MIN_VALUE );
		}
		optionalRefSchemaTenantId.setValue( value );
	}

	const bool CFBamSchemaRefBuff::isOptionalRefSchemaIdNull() const {
		return( optionalRefSchemaId.isNull() );
	}

	const int64_t CFBamSchemaRefBuff::getOptionalRefSchemaIdValue() const {
		return( optionalRefSchemaId.getValue() );
	}

	const int64_t* CFBamSchemaRefBuff::getOptionalRefSchemaIdReference() const {
		return( optionalRefSchemaId.getReference() );
	}

	void CFBamSchemaRefBuff::setOptionalRefSchemaIdNull() {
		optionalRefSchemaId.setNull();
	}

	void CFBamSchemaRefBuff::setOptionalRefSchemaIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRefSchemaIdValue" );
		if( value < cfbam::CFBamSchemaRefBuff::REFSCHEMAID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaRefBuff::REFSCHEMAID_MIN_VALUE );
		}
		optionalRefSchemaId.setValue( value );
	}

	const bool CFBamSchemaRefBuff::isOptionalPrevTenantIdNull() const {
		return( optionalPrevTenantId.isNull() );
	}

	const int64_t CFBamSchemaRefBuff::getOptionalPrevTenantIdValue() const {
		return( optionalPrevTenantId.getValue() );
	}

	const int64_t* CFBamSchemaRefBuff::getOptionalPrevTenantIdReference() const {
		return( optionalPrevTenantId.getReference() );
	}

	void CFBamSchemaRefBuff::setOptionalPrevTenantIdNull() {
		optionalPrevTenantId.setNull();
	}

	void CFBamSchemaRefBuff::setOptionalPrevTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalPrevTenantIdValue" );
		if( value < cfbam::CFBamSchemaRefBuff::PREVTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaRefBuff::PREVTENANTID_MIN_VALUE );
		}
		optionalPrevTenantId.setValue( value );
	}

	const bool CFBamSchemaRefBuff::isOptionalPrevIdNull() const {
		return( optionalPrevId.isNull() );
	}

	const int64_t CFBamSchemaRefBuff::getOptionalPrevIdValue() const {
		return( optionalPrevId.getValue() );
	}

	const int64_t* CFBamSchemaRefBuff::getOptionalPrevIdReference() const {
		return( optionalPrevId.getReference() );
	}

	void CFBamSchemaRefBuff::setOptionalPrevIdNull() {
		optionalPrevId.setNull();
	}

	void CFBamSchemaRefBuff::setOptionalPrevIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalPrevIdValue" );
		if( value < cfbam::CFBamSchemaRefBuff::PREVID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaRefBuff::PREVID_MIN_VALUE );
		}
		optionalPrevId.setValue( value );
	}

	const bool CFBamSchemaRefBuff::isOptionalNextTenantIdNull() const {
		return( optionalNextTenantId.isNull() );
	}

	const int64_t CFBamSchemaRefBuff::getOptionalNextTenantIdValue() const {
		return( optionalNextTenantId.getValue() );
	}

	const int64_t* CFBamSchemaRefBuff::getOptionalNextTenantIdReference() const {
		return( optionalNextTenantId.getReference() );
	}

	void CFBamSchemaRefBuff::setOptionalNextTenantIdNull() {
		optionalNextTenantId.setNull();
	}

	void CFBamSchemaRefBuff::setOptionalNextTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNextTenantIdValue" );
		if( value < cfbam::CFBamSchemaRefBuff::NEXTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaRefBuff::NEXTTENANTID_MIN_VALUE );
		}
		optionalNextTenantId.setValue( value );
	}

	const bool CFBamSchemaRefBuff::isOptionalNextIdNull() const {
		return( optionalNextId.isNull() );
	}

	const int64_t CFBamSchemaRefBuff::getOptionalNextIdValue() const {
		return( optionalNextId.getValue() );
	}

	const int64_t* CFBamSchemaRefBuff::getOptionalNextIdReference() const {
		return( optionalNextId.getReference() );
	}

	void CFBamSchemaRefBuff::setOptionalNextIdNull() {
		optionalNextId.setNull();
	}

	void CFBamSchemaRefBuff::setOptionalNextIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNextIdValue" );
		if( value < cfbam::CFBamSchemaRefBuff::NEXTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaRefBuff::NEXTID_MIN_VALUE );
		}
		optionalNextId.setValue( value );
	}

	size_t CFBamSchemaRefBuff::hashCode() const {
		size_t hashCode = CFBamScopeBuff::hashCode();
		hashCode = hashCode + (int)( getRequiredSchemaId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredRefModelName() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredIncludeRoot() );
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalRefSchemaTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalRefSchemaIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalPrevTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalPrevIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalPrevIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalNextTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNextTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalNextIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNextIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	CFBamSchemaRefBuff CFBamSchemaRefBuff::operator =( cfbam::CFBamSchemaRefBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredSchemaId( src.getRequiredSchemaId() );
		setRequiredName( src.getRequiredName() );
		setRequiredRefModelName( src.getRequiredRefModelName() );
		setRequiredIncludeRoot( src.getRequiredIncludeRoot() );
		if( src.isOptionalRefSchemaTenantIdNull() ) {
			setOptionalRefSchemaTenantIdNull();
		}
		else {
			setOptionalRefSchemaTenantIdValue( src.getOptionalRefSchemaTenantIdValue() );
		}
		if( src.isOptionalRefSchemaIdNull() ) {
			setOptionalRefSchemaIdNull();
		}
		else {
			setOptionalRefSchemaIdValue( src.getOptionalRefSchemaIdValue() );
		}
		if( src.isOptionalPrevTenantIdNull() ) {
			setOptionalPrevTenantIdNull();
		}
		else {
			setOptionalPrevTenantIdValue( src.getOptionalPrevTenantIdValue() );
		}
		if( src.isOptionalPrevIdNull() ) {
			setOptionalPrevIdNull();
		}
		else {
			setOptionalPrevIdValue( src.getOptionalPrevIdValue() );
		}
		if( src.isOptionalNextTenantIdNull() ) {
			setOptionalNextTenantIdNull();
		}
		else {
			setOptionalNextTenantIdValue( src.getOptionalNextTenantIdValue() );
		}
		if( src.isOptionalNextIdNull() ) {
			setOptionalNextIdNull();
		}
		else {
			setOptionalNextIdValue( src.getOptionalNextIdValue() );
		}
		return( *this );
	}

	CFBamSchemaRefBuff CFBamSchemaRefBuff::operator =( cfbam::CFBamSchemaRefHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredSchemaId( src.getRequiredSchemaId() );
		setRequiredName( src.getRequiredName() );
		setRequiredRefModelName( src.getRequiredRefModelName() );
		setRequiredIncludeRoot( src.getRequiredIncludeRoot() );
		if( src.isOptionalRefSchemaTenantIdNull() ) {
			setOptionalRefSchemaTenantIdNull();
		}
		else {
			setOptionalRefSchemaTenantIdValue( src.getOptionalRefSchemaTenantIdValue() );
		}
		if( src.isOptionalRefSchemaIdNull() ) {
			setOptionalRefSchemaIdNull();
		}
		else {
			setOptionalRefSchemaIdValue( src.getOptionalRefSchemaIdValue() );
		}
		if( src.isOptionalPrevTenantIdNull() ) {
			setOptionalPrevTenantIdNull();
		}
		else {
			setOptionalPrevTenantIdValue( src.getOptionalPrevTenantIdValue() );
		}
		if( src.isOptionalPrevIdNull() ) {
			setOptionalPrevIdNull();
		}
		else {
			setOptionalPrevIdValue( src.getOptionalPrevIdValue() );
		}
		if( src.isOptionalNextTenantIdNull() ) {
			setOptionalNextTenantIdNull();
		}
		else {
			setOptionalNextTenantIdValue( src.getOptionalNextTenantIdValue() );
		}
		if( src.isOptionalNextIdNull() ) {
			setOptionalNextIdNull();
		}
		else {
			setOptionalNextIdValue( src.getOptionalNextIdValue() );
		}
		return( *this );
	}

	bool CFBamSchemaRefBuff::operator <( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator <( const CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefBuff::operator <( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator <( const CFBamSchemaRefByPrevIdxKey& rhs ) {
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator <( const CFBamSchemaRefByNextIdxKey& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator <( const CFBamScopePKey& rhs ) {
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

	bool CFBamSchemaRefBuff::operator <( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamSchemaRefBuff::operator <( const CFBamSchemaRefHBuff& rhs ) {
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
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator <( const CFBamSchemaRefBuff& rhs ) {
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
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator <=( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator <=( const CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefBuff::operator <=( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator <=( const CFBamSchemaRefByPrevIdxKey& rhs ) {
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator <=( const CFBamSchemaRefByNextIdxKey& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator <=( const CFBamScopePKey& rhs ) {
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

	bool CFBamSchemaRefBuff::operator <=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamSchemaRefBuff::operator <=( const CFBamSchemaRefHBuff& rhs ) {
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
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator <=( const CFBamSchemaRefBuff& rhs ) {
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
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator ==( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator ==( const CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator ==( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				if( getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				if( getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator ==( const CFBamSchemaRefByPrevIdxKey& rhs ) {
		if( ! isOptionalPrevTenantIdNull() ) {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				if( getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( ! rhs.isOptionalPrevIdNull() ) {
				if( getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator ==( const CFBamSchemaRefByNextIdxKey& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator ==( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator ==( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator ==( const CFBamSchemaRefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( getRequiredRefModelName() != rhs.getRequiredRefModelName() ) {
			return( false );
		}
		if( getRequiredIncludeRoot() != rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				if( getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				if( getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				if( getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( ! rhs.isOptionalPrevIdNull() ) {
				if( getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator ==( const CFBamSchemaRefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( getRequiredRefModelName() != rhs.getRequiredRefModelName() ) {
			return( false );
		}
		if( getRequiredIncludeRoot() != rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				if( getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				if( getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				if( getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( ! rhs.isOptionalPrevIdNull() ) {
				if( getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator !=( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator !=( const CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator !=( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator !=( const CFBamSchemaRefByPrevIdxKey& rhs ) {
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator !=( const CFBamSchemaRefByNextIdxKey& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator !=( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator !=( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator !=( const CFBamSchemaRefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredRefModelName() != rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( getRequiredIncludeRoot() != rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator !=( const CFBamSchemaRefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredRefModelName() != rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( getRequiredIncludeRoot() != rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator >=( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator >=( const CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefBuff::operator >=( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator >=( const CFBamSchemaRefByPrevIdxKey& rhs ) {
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator >=( const CFBamSchemaRefByNextIdxKey& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator >=( const CFBamScopePKey& rhs ) {
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

	bool CFBamSchemaRefBuff::operator >=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamSchemaRefBuff::operator >=( const CFBamSchemaRefHBuff& rhs ) {
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
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator >=( const CFBamSchemaRefBuff& rhs ) {
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
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefBuff::operator >( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator >( const CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefBuff::operator >( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator >( const CFBamSchemaRefByPrevIdxKey& rhs ) {
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator >( const CFBamSchemaRefByNextIdxKey& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator >( const CFBamScopePKey& rhs ) {
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

	bool CFBamSchemaRefBuff::operator >( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamSchemaRefBuff::operator >( const CFBamSchemaRefHBuff& rhs ) {
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
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamSchemaRefBuff::operator >( const CFBamSchemaRefBuff& rhs ) {
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
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFBamSchemaRefBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaRefBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_SchemaId( "SchemaId" );
		static const std::string S_Name( "Name" );
		static const std::string S_RefModelName( "RefModelName" );
		static const std::string S_IncludeRoot( "IncludeRoot" );
		static const std::string S_RefSchemaTenantId( "RefSchemaTenantId" );
		static const std::string S_RefSchemaId( "RefSchemaId" );
		static const std::string S_PrevTenantId( "PrevTenantId" );
		static const std::string S_PrevId( "PrevId" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaId, getRequiredSchemaId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_RefModelName, getRequiredRefModelName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_IncludeRoot, getRequiredIncludeRoot() ) );
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RefSchemaTenantId, getOptionalRefSchemaTenantIdValue() ) );
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RefSchemaId, getOptionalRefSchemaIdValue() ) );
		}
		if( ! isOptionalPrevTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevTenantId, getOptionalPrevTenantIdValue() ) );
		}
		if( ! isOptionalPrevIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevId, getOptionalPrevIdValue() ) );
		}
		if( ! isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, getOptionalNextTenantIdValue() ) );
		}
		if( ! isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool operator <(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( lhs.getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( lhs.getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( lhs.getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( lhs.getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				if( lhs.getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				if( lhs.getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				if( lhs.getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( ! rhs.isOptionalPrevIdNull() ) {
				if( lhs.getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( lhs.getRequiredRefModelName() != rhs.getRequiredRefModelName() ) {
			return( false );
		}
		if( lhs.getRequiredIncludeRoot() != rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				if( lhs.getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				if( lhs.getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				if( lhs.getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( ! rhs.isOptionalPrevIdNull() ) {
				if( lhs.getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( lhs.getRequiredRefModelName() != rhs.getRequiredRefModelName() ) {
			return( false );
		}
		if( lhs.getRequiredIncludeRoot() != rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				if( lhs.getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				if( lhs.getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				if( lhs.getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( ! rhs.isOptionalPrevIdNull() ) {
				if( lhs.getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredRefModelName() != rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeRoot() != rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredRefModelName() != rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeRoot() != rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() != rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() != rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( lhs.getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( lhs.getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs ) {
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( lhs.getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaRefBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredRefModelName() < rhs.getRequiredRefModelName() ) {
			return( false );
		}
		else if( lhs.getRequiredRefModelName() > rhs.getRequiredRefModelName() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeRoot() < rhs.getRequiredIncludeRoot() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeRoot() > rhs.getRequiredIncludeRoot() ) {
			return( true );
		}
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevTenantIdNull() ) {
			if( rhs.isOptionalPrevTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevTenantIdValue() < rhs.getOptionalPrevTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevTenantIdValue() > rhs.getOptionalPrevTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrevIdNull() ) {
			if( rhs.isOptionalPrevIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrevIdValue() < rhs.getOptionalPrevIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrevIdValue() > rhs.getOptionalPrevIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrevIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

