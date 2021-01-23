// Description: C++18 implementation for a ClearTopDep buffer object.

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
#include <cfbam/CFBamClearDepByClearDepIdxKey.hpp>
#include <cfbam/CFBamClearDepByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamClearTopDepByClrTopDepTblIdxKey.hpp>
#include <cfbam/CFBamClearTopDepByUNameIdxKey.hpp>
#include <cfbam/CFBamClearTopDepByPrevIdxKey.hpp>
#include <cfbam/CFBamClearTopDepByNextIdxKey.hpp>
#include <cfbam/CFBamSchema.hpp>

namespace cfbam {

	const std::string CFBamClearTopDepBuff::GENDEFNAME( "ClearTopDep" );
	const classcode_t CFBamClearTopDepBuff::CLASS_CODE = 0xa814L;
	const std::string CFBamClearTopDepBuff::CLASS_NAME( "CFBamClearTopDepBuff" );
		const std::string CFBamClearTopDepBuff::COLNAME_TABLETENANTID( "TableTenantId" );
		const std::string CFBamClearTopDepBuff::COLNAME_TABLEID( "TableId" );
		const std::string CFBamClearTopDepBuff::COLNAME_NAME( "Name" );
		const std::string CFBamClearTopDepBuff::COLNAME_PREVTENANTID( "PrevTenantId" );
		const std::string CFBamClearTopDepBuff::COLNAME_PREVID( "PrevId" );
		const std::string CFBamClearTopDepBuff::COLNAME_NEXTTENANTID( "NextTenantId" );
		const std::string CFBamClearTopDepBuff::COLNAME_NEXTID( "NextId" );
	const int64_t CFBamClearTopDepBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::ID_INIT_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::TABLETENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::TABLEID_INIT_VALUE = 0LL;
	const std::string CFBamClearTopDepBuff::NAME_INIT_VALUE( "" );
	const int64_t CFBamClearTopDepBuff::PREVTENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::PREVID_INIT_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::NEXTTENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::NEXTID_INIT_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::ID_MIN_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::TABLETENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::TABLEID_MIN_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::PREVTENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::PREVID_MIN_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::NEXTTENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamClearTopDepBuff::NEXTID_MIN_VALUE = 0LL;
	const std::string::size_type CFBamClearTopDepBuff::NAME_MAX_LEN = 192;

	CFBamClearTopDepBuff::CFBamClearTopDepBuff()
	: CFBamClearDepBuff()
	{
		requiredTableTenantId = cfbam::CFBamClearTopDepBuff::TABLETENANTID_INIT_VALUE;
		requiredTableId = cfbam::CFBamClearTopDepBuff::TABLEID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamClearTopDepBuff::NAME_INIT_VALUE );
		optionalPrevTenantId.setNull();
		optionalPrevId.setNull();
		optionalNextTenantId.setNull();
		optionalNextId.setNull();
	}

	CFBamClearTopDepBuff::CFBamClearTopDepBuff( const CFBamClearTopDepBuff& src )
	: CFBamClearDepBuff()
	{
		requiredTableTenantId = cfbam::CFBamClearTopDepBuff::TABLETENANTID_INIT_VALUE;
		requiredTableId = cfbam::CFBamClearTopDepBuff::TABLEID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamClearTopDepBuff::NAME_INIT_VALUE );
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
		setRequiredRelationId( src.getRequiredRelationId() );
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
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		setRequiredName( src.getRequiredName() );
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

	CFBamClearTopDepBuff::~CFBamClearTopDepBuff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFBamClearTopDepBuff::clone() {
		CFBamClearTopDepBuff* copy = new CFBamClearTopDepBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFBamClearTopDepBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamClearTopDepBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamClearTopDepBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfbam::CFBamClearDepBuff::implementsClassCode( argClassCode ) );
		}
	}

	const int64_t CFBamClearTopDepBuff::getRequiredTableTenantId() const {
		return( requiredTableTenantId );
	}

	const int64_t* CFBamClearTopDepBuff::getRequiredTableTenantIdReference() const {
		return( &requiredTableTenantId );
	}

	void CFBamClearTopDepBuff::setRequiredTableTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTableTenantId" );
		if( value < cfbam::CFBamClearTopDepBuff::TABLETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearTopDepBuff::TABLETENANTID_MIN_VALUE );
		}
		requiredTableTenantId = value;
	}

	const int64_t CFBamClearTopDepBuff::getRequiredTableId() const {
		return( requiredTableId );
	}

	const int64_t* CFBamClearTopDepBuff::getRequiredTableIdReference() const {
		return( &requiredTableId );
	}

	void CFBamClearTopDepBuff::setRequiredTableId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTableId" );
		if( value < cfbam::CFBamClearTopDepBuff::TABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearTopDepBuff::TABLEID_MIN_VALUE );
		}
		requiredTableId = value;
	}

	const std::string& CFBamClearTopDepBuff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamClearTopDepBuff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamClearTopDepBuff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamClearTopDepBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamClearTopDepBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	const bool CFBamClearTopDepBuff::isOptionalPrevTenantIdNull() const {
		return( optionalPrevTenantId.isNull() );
	}

	const int64_t CFBamClearTopDepBuff::getOptionalPrevTenantIdValue() const {
		return( optionalPrevTenantId.getValue() );
	}

	const int64_t* CFBamClearTopDepBuff::getOptionalPrevTenantIdReference() const {
		return( optionalPrevTenantId.getReference() );
	}

	void CFBamClearTopDepBuff::setOptionalPrevTenantIdNull() {
		optionalPrevTenantId.setNull();
	}

	void CFBamClearTopDepBuff::setOptionalPrevTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalPrevTenantIdValue" );
		if( value < cfbam::CFBamClearTopDepBuff::PREVTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearTopDepBuff::PREVTENANTID_MIN_VALUE );
		}
		optionalPrevTenantId.setValue( value );
	}

	const bool CFBamClearTopDepBuff::isOptionalPrevIdNull() const {
		return( optionalPrevId.isNull() );
	}

	const int64_t CFBamClearTopDepBuff::getOptionalPrevIdValue() const {
		return( optionalPrevId.getValue() );
	}

	const int64_t* CFBamClearTopDepBuff::getOptionalPrevIdReference() const {
		return( optionalPrevId.getReference() );
	}

	void CFBamClearTopDepBuff::setOptionalPrevIdNull() {
		optionalPrevId.setNull();
	}

	void CFBamClearTopDepBuff::setOptionalPrevIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalPrevIdValue" );
		if( value < cfbam::CFBamClearTopDepBuff::PREVID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearTopDepBuff::PREVID_MIN_VALUE );
		}
		optionalPrevId.setValue( value );
	}

	const bool CFBamClearTopDepBuff::isOptionalNextTenantIdNull() const {
		return( optionalNextTenantId.isNull() );
	}

	const int64_t CFBamClearTopDepBuff::getOptionalNextTenantIdValue() const {
		return( optionalNextTenantId.getValue() );
	}

	const int64_t* CFBamClearTopDepBuff::getOptionalNextTenantIdReference() const {
		return( optionalNextTenantId.getReference() );
	}

	void CFBamClearTopDepBuff::setOptionalNextTenantIdNull() {
		optionalNextTenantId.setNull();
	}

	void CFBamClearTopDepBuff::setOptionalNextTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNextTenantIdValue" );
		if( value < cfbam::CFBamClearTopDepBuff::NEXTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearTopDepBuff::NEXTTENANTID_MIN_VALUE );
		}
		optionalNextTenantId.setValue( value );
	}

	const bool CFBamClearTopDepBuff::isOptionalNextIdNull() const {
		return( optionalNextId.isNull() );
	}

	const int64_t CFBamClearTopDepBuff::getOptionalNextIdValue() const {
		return( optionalNextId.getValue() );
	}

	const int64_t* CFBamClearTopDepBuff::getOptionalNextIdReference() const {
		return( optionalNextId.getReference() );
	}

	void CFBamClearTopDepBuff::setOptionalNextIdNull() {
		optionalNextId.setNull();
	}

	void CFBamClearTopDepBuff::setOptionalNextIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNextIdValue" );
		if( value < cfbam::CFBamClearTopDepBuff::NEXTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearTopDepBuff::NEXTID_MIN_VALUE );
		}
		optionalNextId.setValue( value );
	}

	size_t CFBamClearTopDepBuff::hashCode() const {
		size_t hashCode = CFBamClearDepBuff::hashCode();
		hashCode = hashCode + (int)( getRequiredTableTenantId() );
		hashCode = hashCode + (int)( getRequiredTableId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
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

	CFBamClearTopDepBuff CFBamClearTopDepBuff::operator =( cfbam::CFBamClearTopDepBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredRelationId( src.getRequiredRelationId() );
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
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		setRequiredName( src.getRequiredName() );
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

	CFBamClearTopDepBuff CFBamClearTopDepBuff::operator =( cfbam::CFBamClearTopDepHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredRelationId( src.getRequiredRelationId() );
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
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		setRequiredName( src.getRequiredName() );
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

	bool CFBamClearTopDepBuff::operator <( const CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator <( const CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator <( const CFBamClearTopDepByPrevIdxKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator <( const CFBamClearTopDepByNextIdxKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator <( const CFBamScopePKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator <( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator <( const CFBamClearTopDepHBuff& rhs ) {
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
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
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
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator <( const CFBamClearTopDepBuff& rhs ) {
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
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
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
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator <=( const CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator <=( const CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator <=( const CFBamClearTopDepByPrevIdxKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator <=( const CFBamClearTopDepByNextIdxKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator <=( const CFBamScopePKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator <=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator <=( const CFBamClearTopDepHBuff& rhs ) {
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
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
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
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator <=( const CFBamClearTopDepBuff& rhs ) {
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
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
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
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator ==( const CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearTopDepBuff::operator ==( const CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator ==( const CFBamClearTopDepByPrevIdxKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator ==( const CFBamClearTopDepByNextIdxKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator ==( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearTopDepBuff::operator ==( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearTopDepBuff::operator ==( const CFBamClearTopDepHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
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
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
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

	bool CFBamClearTopDepBuff::operator ==( const CFBamClearTopDepBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
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
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
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

	bool CFBamClearTopDepBuff::operator !=( const CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepBuff::operator !=( const CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator !=( const CFBamClearTopDepByPrevIdxKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator !=( const CFBamClearTopDepByNextIdxKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator !=( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepBuff::operator !=( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepBuff::operator !=( const CFBamClearTopDepHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
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
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
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

	bool CFBamClearTopDepBuff::operator !=( const CFBamClearTopDepBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
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
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
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

	bool CFBamClearTopDepBuff::operator >=( const CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator >=( const CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator >=( const CFBamClearTopDepByPrevIdxKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator >=( const CFBamClearTopDepByNextIdxKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator >=( const CFBamScopePKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator >=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator >=( const CFBamClearTopDepHBuff& rhs ) {
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
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
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
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator >=( const CFBamClearTopDepBuff& rhs ) {
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
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
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
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator >( const CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator >( const CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator >( const CFBamClearTopDepByPrevIdxKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator >( const CFBamClearTopDepByNextIdxKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator >( const CFBamScopePKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator >( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamClearTopDepBuff::operator >( const CFBamClearTopDepHBuff& rhs ) {
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
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
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
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool CFBamClearTopDepBuff::operator >( const CFBamClearTopDepBuff& rhs ) {
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
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
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
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	std::string CFBamClearTopDepBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearTopDepBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_RelationId( "RelationId" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_TableTenantId( "TableTenantId" );
		static const std::string S_TableId( "TableId" );
		static const std::string S_Name( "Name" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, getRequiredRelationId() ) );
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableTenantId, getRequiredTableTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, getRequiredTableId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
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

	bool operator <(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool operator <(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool operator <(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByPrevIdxKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByNextIdxKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
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
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool operator <(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
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
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
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
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool operator <=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool operator <=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool operator <=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByPrevIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByNextIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
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
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool operator <=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
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
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
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
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
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

	bool operator ==(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
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

	bool operator ==(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByPrevIdxKey& rhs ) {
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

	bool operator ==(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByNextIdxKey& rhs ) {
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

	bool operator ==(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
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
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
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

	bool operator ==(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
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
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
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

	bool operator !=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
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

	bool operator !=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByPrevIdxKey& rhs ) {
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

	bool operator !=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByNextIdxKey& rhs ) {
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

	bool operator !=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
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
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
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

	bool operator !=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
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
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
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

	bool operator >=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool operator >=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool operator >=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByPrevIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByNextIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
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
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool operator >=(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
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
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
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
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool operator >(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool operator >(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool operator >(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByPrevIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepByNextIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
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
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

	bool operator >(const  cfbam::CFBamClearTopDepBuff& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
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
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
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
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
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

