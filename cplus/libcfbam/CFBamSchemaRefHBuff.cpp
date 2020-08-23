// Description: C++18 implementation of a SchemaRef history buffer object.

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

#include <cfbam/CFBamHPKey.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamSchemaRefBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamSchemaRefHBuff.hpp>
#include <cfbam/CFBamSchemaRefBySchemaIdxKey.hpp>
#include <cfbam/CFBamSchemaRefByUNameIdxKey.hpp>
#include <cfbam/CFBamSchemaRefByRefSchemaIdxKey.hpp>
#include <cfbam/CFBamSchemaRefByPrevIdxKey.hpp>
#include <cfbam/CFBamSchemaRefByNextIdxKey.hpp>

namespace cfbam {

	const std::string CFBamSchemaRefHBuff::CLASS_NAME( "CFBamSchemaRefHBuff" );
	CFBamSchemaRefHBuff::CFBamSchemaRefHBuff()
	: cfbam::CFBamScopeHBuff() {
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

	CFBamSchemaRefHBuff::CFBamSchemaRefHBuff( const CFBamSchemaRefHBuff& src )
	: cfbam::CFBamScopeHBuff() {
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

	CFBamSchemaRefHBuff::~CFBamSchemaRefHBuff() {
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

	cflib::ICFLibCloneableObj* CFBamSchemaRefHBuff::clone() {
		CFBamSchemaRefHBuff* copy = new CFBamSchemaRefHBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const int64_t CFBamSchemaRefHBuff::getRequiredSchemaId() const {
		return( requiredSchemaId );
	}

	const int64_t* CFBamSchemaRefHBuff::getRequiredSchemaIdReference() const {
		return( &requiredSchemaId );
	}

	void CFBamSchemaRefHBuff::setRequiredSchemaId( const int64_t value ) {
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

	const std::string& CFBamSchemaRefHBuff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamSchemaRefHBuff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamSchemaRefHBuff::setRequiredName( const std::string& value ) {
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

	const std::string& CFBamSchemaRefHBuff::getRequiredRefModelName() const {
		return( *requiredRefModelName );
	}

	const std::string* CFBamSchemaRefHBuff::getRequiredRefModelNameReference() const {
		return( requiredRefModelName );
	}

	void CFBamSchemaRefHBuff::setRequiredRefModelName( const std::string& value ) {
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

	const std::string& CFBamSchemaRefHBuff::getRequiredIncludeRoot() const {
		return( *requiredIncludeRoot );
	}

	const std::string* CFBamSchemaRefHBuff::getRequiredIncludeRootReference() const {
		return( requiredIncludeRoot );
	}

	void CFBamSchemaRefHBuff::setRequiredIncludeRoot( const std::string& value ) {
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

	const int64_t CFBamSchemaRefHBuff::getOptionalRefSchemaTenantIdValue() const {
		return( optionalRefSchemaTenantId.getValue() );
	}

	const int64_t* CFBamSchemaRefHBuff::getOptionalRefSchemaTenantIdReference() const {
		return( optionalRefSchemaTenantId.getReference() );
	}

	const bool CFBamSchemaRefHBuff::isOptionalRefSchemaTenantIdNull() const {
		return( optionalRefSchemaTenantId.isNull() );
	}

	void CFBamSchemaRefHBuff::setOptionalRefSchemaTenantIdNull() {
		optionalRefSchemaTenantId.setNull();
	}

	void CFBamSchemaRefHBuff::setOptionalRefSchemaTenantIdValue( const int64_t value ) {
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

	const int64_t CFBamSchemaRefHBuff::getOptionalRefSchemaIdValue() const {
		return( optionalRefSchemaId.getValue() );
	}

	const int64_t* CFBamSchemaRefHBuff::getOptionalRefSchemaIdReference() const {
		return( optionalRefSchemaId.getReference() );
	}

	const bool CFBamSchemaRefHBuff::isOptionalRefSchemaIdNull() const {
		return( optionalRefSchemaId.isNull() );
	}

	void CFBamSchemaRefHBuff::setOptionalRefSchemaIdNull() {
		optionalRefSchemaId.setNull();
	}

	void CFBamSchemaRefHBuff::setOptionalRefSchemaIdValue( const int64_t value ) {
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

	const int64_t CFBamSchemaRefHBuff::getOptionalPrevTenantIdValue() const {
		return( optionalPrevTenantId.getValue() );
	}

	const int64_t* CFBamSchemaRefHBuff::getOptionalPrevTenantIdReference() const {
		return( optionalPrevTenantId.getReference() );
	}

	const bool CFBamSchemaRefHBuff::isOptionalPrevTenantIdNull() const {
		return( optionalPrevTenantId.isNull() );
	}

	void CFBamSchemaRefHBuff::setOptionalPrevTenantIdNull() {
		optionalPrevTenantId.setNull();
	}

	void CFBamSchemaRefHBuff::setOptionalPrevTenantIdValue( const int64_t value ) {
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

	const int64_t CFBamSchemaRefHBuff::getOptionalPrevIdValue() const {
		return( optionalPrevId.getValue() );
	}

	const int64_t* CFBamSchemaRefHBuff::getOptionalPrevIdReference() const {
		return( optionalPrevId.getReference() );
	}

	const bool CFBamSchemaRefHBuff::isOptionalPrevIdNull() const {
		return( optionalPrevId.isNull() );
	}

	void CFBamSchemaRefHBuff::setOptionalPrevIdNull() {
		optionalPrevId.setNull();
	}

	void CFBamSchemaRefHBuff::setOptionalPrevIdValue( const int64_t value ) {
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

	const int64_t CFBamSchemaRefHBuff::getOptionalNextTenantIdValue() const {
		return( optionalNextTenantId.getValue() );
	}

	const int64_t* CFBamSchemaRefHBuff::getOptionalNextTenantIdReference() const {
		return( optionalNextTenantId.getReference() );
	}

	const bool CFBamSchemaRefHBuff::isOptionalNextTenantIdNull() const {
		return( optionalNextTenantId.isNull() );
	}

	void CFBamSchemaRefHBuff::setOptionalNextTenantIdNull() {
		optionalNextTenantId.setNull();
	}

	void CFBamSchemaRefHBuff::setOptionalNextTenantIdValue( const int64_t value ) {
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

	const int64_t CFBamSchemaRefHBuff::getOptionalNextIdValue() const {
		return( optionalNextId.getValue() );
	}

	const int64_t* CFBamSchemaRefHBuff::getOptionalNextIdReference() const {
		return( optionalNextId.getReference() );
	}

	const bool CFBamSchemaRefHBuff::isOptionalNextIdNull() const {
		return( optionalNextId.isNull() );
	}

	void CFBamSchemaRefHBuff::setOptionalNextIdNull() {
		optionalNextId.setNull();
	}

	void CFBamSchemaRefHBuff::setOptionalNextIdValue( const int64_t value ) {
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

	size_t CFBamSchemaRefHBuff::hashCode() const {
		size_t hashCode = cfbam::CFBamSchemaRefHBuff::hashCode();
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

	CFBamSchemaRefHBuff CFBamSchemaRefHBuff::operator =( cfbam::CFBamSchemaRefBuff& src ) {
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

	CFBamSchemaRefHBuff CFBamSchemaRefHBuff::operator =( cfbam::CFBamSchemaRefHBuff& src ) {
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

	bool CFBamSchemaRefHBuff::operator <( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <( const CFBamSchemaRefByUNameIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <( const CFBamSchemaRefByPrevIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <( const CFBamSchemaRefByNextIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <( const CFBamScopePKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <( const CFBamSchemaRefHBuff& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <( const CFBamSchemaRefBuff& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <=( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <=( const CFBamSchemaRefByUNameIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <=( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <=( const CFBamSchemaRefByPrevIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <=( const CFBamSchemaRefByNextIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <=( const CFBamScopePKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <=( const CFBamSchemaRefHBuff& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator <=( const CFBamSchemaRefBuff& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator ==( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaRefHBuff::operator ==( const CFBamSchemaRefByUNameIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator ==( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator ==( const CFBamSchemaRefByPrevIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator ==( const CFBamSchemaRefByNextIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator ==( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaRefHBuff::operator ==( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator ==( const CFBamSchemaRefHBuff& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator ==( const CFBamSchemaRefBuff& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator !=( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefHBuff::operator !=( const CFBamSchemaRefByUNameIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator !=( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator !=( const CFBamSchemaRefByPrevIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator !=( const CFBamSchemaRefByNextIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator !=( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefHBuff::operator !=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator !=( const CFBamSchemaRefHBuff& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator !=( const CFBamSchemaRefBuff& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >=( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >=( const CFBamSchemaRefByUNameIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >=( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >=( const CFBamSchemaRefByPrevIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >=( const CFBamSchemaRefByNextIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >=( const CFBamScopePKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >=( const CFBamSchemaRefHBuff& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >=( const CFBamSchemaRefBuff& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >( const CFBamSchemaRefByUNameIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >( const CFBamSchemaRefByPrevIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >( const CFBamSchemaRefByNextIdxKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >( const CFBamScopePKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >( const CFBamSchemaRefHBuff& rhs ) {
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

	bool CFBamSchemaRefHBuff::operator >( const CFBamSchemaRefBuff& rhs ) {
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

	std::string CFBamSchemaRefHBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaRefHBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_AuditClusterId( "AuditClusterId" );
		static const std::string S_AuditStamp( "AuditStamp" );
		static const std::string S_AuditActionId( "AuditActionId" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_AuditSessionId( "AuditSessionId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_AuditClusterId, auditClusterId ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_AuditClusterId, auditStamp ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_AuditActionId, auditActionId ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_AuditSessionId, auditSessionId ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, getRequiredId() ) );
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

	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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

	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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

	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
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

	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
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

	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs ) {
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

	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs ) {
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

	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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

	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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

	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
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

	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
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

	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs ) {
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

	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs ) {
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

	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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

	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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

