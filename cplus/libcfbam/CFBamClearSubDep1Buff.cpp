// Description: C++18 implementation for a ClearSubDep1 buffer object.

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
#include <cfbam/CFBamClearSubDep1ByClearTopDepIdxKey.hpp>
#include <cfbam/CFBamClearSubDep1ByUNameIdxKey.hpp>
#include <cfbam/CFBamSchema.hpp>

namespace cfbam {

	const std::string CFBamClearSubDep1Buff::GENDEFNAME( "ClearSubDep1" );
	const classcode_t CFBamClearSubDep1Buff::CLASS_CODE = 0xa811L;
	const std::string CFBamClearSubDep1Buff::CLASS_NAME( "CFBamClearSubDep1Buff" );
		const std::string CFBamClearSubDep1Buff::COLNAME_CLEARTOPDEPTENANTID( "ClearTopDepTenantId" );
		const std::string CFBamClearSubDep1Buff::COLNAME_CLEARTOPDEPID( "ClearTopDepId" );
		const std::string CFBamClearSubDep1Buff::COLNAME_NAME( "Name" );
	const int64_t CFBamClearSubDep1Buff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamClearSubDep1Buff::ID_INIT_VALUE = 0LL;
	const int64_t CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamClearSubDep1Buff::CLEARTOPDEPID_INIT_VALUE = 0LL;
	const std::string CFBamClearSubDep1Buff::NAME_INIT_VALUE( "" );
	const int64_t CFBamClearSubDep1Buff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamClearSubDep1Buff::ID_MIN_VALUE = 0LL;
	const int64_t CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamClearSubDep1Buff::CLEARTOPDEPID_MIN_VALUE = 0LL;
	const std::string::size_type CFBamClearSubDep1Buff::NAME_MAX_LEN = 192;

	CFBamClearSubDep1Buff::CFBamClearSubDep1Buff()
	: CFBamClearDepBuff()
	{
		requiredClearTopDepTenantId = cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_INIT_VALUE;
		requiredClearTopDepId = cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamClearSubDep1Buff::NAME_INIT_VALUE );
	}

	CFBamClearSubDep1Buff::CFBamClearSubDep1Buff( const CFBamClearSubDep1Buff& src )
	: CFBamClearDepBuff()
	{
		requiredClearTopDepTenantId = cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_INIT_VALUE;
		requiredClearTopDepId = cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamClearSubDep1Buff::NAME_INIT_VALUE );
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
		setRequiredClearTopDepTenantId( src.getRequiredClearTopDepTenantId() );
		setRequiredClearTopDepId( src.getRequiredClearTopDepId() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamClearSubDep1Buff::~CFBamClearSubDep1Buff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFBamClearSubDep1Buff::clone() {
		CFBamClearSubDep1Buff* copy = new CFBamClearSubDep1Buff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFBamClearSubDep1Buff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamClearSubDep1Buff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamClearSubDep1Buff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfbam::CFBamClearDepBuff::implementsClassCode( argClassCode ) );
		}
	}

	const int64_t CFBamClearSubDep1Buff::getRequiredClearTopDepTenantId() const {
		return( requiredClearTopDepTenantId );
	}

	const int64_t* CFBamClearSubDep1Buff::getRequiredClearTopDepTenantIdReference() const {
		return( &requiredClearTopDepTenantId );
	}

	void CFBamClearSubDep1Buff::setRequiredClearTopDepTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearTopDepTenantId" );
		if( value < cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_MIN_VALUE );
		}
		requiredClearTopDepTenantId = value;
	}

	const int64_t CFBamClearSubDep1Buff::getRequiredClearTopDepId() const {
		return( requiredClearTopDepId );
	}

	const int64_t* CFBamClearSubDep1Buff::getRequiredClearTopDepIdReference() const {
		return( &requiredClearTopDepId );
	}

	void CFBamClearSubDep1Buff::setRequiredClearTopDepId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearTopDepId" );
		if( value < cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPID_MIN_VALUE );
		}
		requiredClearTopDepId = value;
	}

	const std::string& CFBamClearSubDep1Buff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamClearSubDep1Buff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamClearSubDep1Buff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamClearSubDep1Buff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamClearSubDep1Buff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamClearSubDep1Buff::hashCode() const {
		size_t hashCode = CFBamClearDepBuff::hashCode();
		hashCode = hashCode + (int)( getRequiredClearTopDepTenantId() );
		hashCode = hashCode + (int)( getRequiredClearTopDepId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	CFBamClearSubDep1Buff CFBamClearSubDep1Buff::operator =( cfbam::CFBamClearSubDep1Buff& src ) {
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
		setRequiredClearTopDepTenantId( src.getRequiredClearTopDepTenantId() );
		setRequiredClearTopDepId( src.getRequiredClearTopDepId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamClearSubDep1Buff CFBamClearSubDep1Buff::operator =( cfbam::CFBamClearSubDep1HBuff& src ) {
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
		setRequiredClearTopDepTenantId( src.getRequiredClearTopDepTenantId() );
		setRequiredClearTopDepId( src.getRequiredClearTopDepId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	bool CFBamClearSubDep1Buff::operator <( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1Buff::operator <( const CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1Buff::operator <( const CFBamScopePKey& rhs ) {
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

	bool CFBamClearSubDep1Buff::operator <( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamClearSubDep1Buff::operator <( const CFBamClearSubDep1HBuff& rhs ) {
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
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1Buff::operator <( const CFBamClearSubDep1Buff& rhs ) {
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
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1Buff::operator <=( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep1Buff::operator <=( const CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1Buff::operator <=( const CFBamScopePKey& rhs ) {
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

	bool CFBamClearSubDep1Buff::operator <=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamClearSubDep1Buff::operator <=( const CFBamClearSubDep1HBuff& rhs ) {
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
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1Buff::operator <=( const CFBamClearSubDep1Buff& rhs ) {
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
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1Buff::operator ==( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep1Buff::operator ==( const CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep1Buff::operator ==( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep1Buff::operator ==( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep1Buff::operator ==( const CFBamClearSubDep1HBuff& rhs ) {
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
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep1Buff::operator ==( const CFBamClearSubDep1Buff& rhs ) {
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
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep1Buff::operator !=( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1Buff::operator !=( const CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1Buff::operator !=( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1Buff::operator !=( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1Buff::operator !=( const CFBamClearSubDep1HBuff& rhs ) {
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
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1Buff::operator !=( const CFBamClearSubDep1Buff& rhs ) {
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
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1Buff::operator >=( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep1Buff::operator >=( const CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1Buff::operator >=( const CFBamScopePKey& rhs ) {
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

	bool CFBamClearSubDep1Buff::operator >=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamClearSubDep1Buff::operator >=( const CFBamClearSubDep1HBuff& rhs ) {
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
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1Buff::operator >=( const CFBamClearSubDep1Buff& rhs ) {
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
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1Buff::operator >( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1Buff::operator >( const CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1Buff::operator >( const CFBamScopePKey& rhs ) {
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

	bool CFBamClearSubDep1Buff::operator >( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamClearSubDep1Buff::operator >( const CFBamClearSubDep1HBuff& rhs ) {
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
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1Buff::operator >( const CFBamClearSubDep1Buff& rhs ) {
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
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	std::string CFBamClearSubDep1Buff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearSubDep1Buff" );
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
		static const std::string S_ClearTopDepTenantId( "ClearTopDepTenantId" );
		static const std::string S_ClearTopDepId( "ClearTopDepId" );
		static const std::string S_Name( "Name" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearTopDepTenantId, getRequiredClearTopDepTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearTopDepId, getRequiredClearTopDepId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool operator <(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
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
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool operator <(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
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
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
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
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
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
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool operator ==(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
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
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
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
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
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
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
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
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool operator >=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
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
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool operator >=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
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
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
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
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
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
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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
}

