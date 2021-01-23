// Description: C++18 implementation for a PopSubDep3 buffer object.

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
#include <cfbam/CFBamPopDepByRelationIdxKey.hpp>
#include <cfbam/CFBamPopDepByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamPopSubDep3ByPopSubDep2IdxKey.hpp>
#include <cfbam/CFBamPopSubDep3ByUNameIdxKey.hpp>
#include <cfbam/CFBamSchema.hpp>

namespace cfbam {

	const std::string CFBamPopSubDep3Buff::GENDEFNAME( "PopSubDep3" );
	const classcode_t CFBamPopSubDep3Buff::CLASS_CODE = 0xa833L;
	const std::string CFBamPopSubDep3Buff::CLASS_NAME( "CFBamPopSubDep3Buff" );
		const std::string CFBamPopSubDep3Buff::COLNAME_POPSUBDEP2TENANTID( "PopSubDep2TenantId" );
		const std::string CFBamPopSubDep3Buff::COLNAME_POPSUBDEP2ID( "PopSubDep2Id" );
		const std::string CFBamPopSubDep3Buff::COLNAME_NAME( "Name" );
	const int64_t CFBamPopSubDep3Buff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamPopSubDep3Buff::ID_INIT_VALUE = 0LL;
	const int64_t CFBamPopSubDep3Buff::POPSUBDEP2TENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamPopSubDep3Buff::POPSUBDEP2ID_INIT_VALUE = 0LL;
	const std::string CFBamPopSubDep3Buff::NAME_INIT_VALUE( "" );
	const int64_t CFBamPopSubDep3Buff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamPopSubDep3Buff::ID_MIN_VALUE = 0LL;
	const int64_t CFBamPopSubDep3Buff::POPSUBDEP2TENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamPopSubDep3Buff::POPSUBDEP2ID_MIN_VALUE = 0LL;
	const std::string::size_type CFBamPopSubDep3Buff::NAME_MAX_LEN = 192;

	CFBamPopSubDep3Buff::CFBamPopSubDep3Buff()
	: CFBamPopDepBuff()
	{
		requiredPopSubDep2TenantId = cfbam::CFBamPopSubDep3Buff::POPSUBDEP2TENANTID_INIT_VALUE;
		requiredPopSubDep2Id = cfbam::CFBamPopSubDep3Buff::POPSUBDEP2ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamPopSubDep3Buff::NAME_INIT_VALUE );
	}

	CFBamPopSubDep3Buff::CFBamPopSubDep3Buff( const CFBamPopSubDep3Buff& src )
	: CFBamPopDepBuff()
	{
		requiredPopSubDep2TenantId = cfbam::CFBamPopSubDep3Buff::POPSUBDEP2TENANTID_INIT_VALUE;
		requiredPopSubDep2Id = cfbam::CFBamPopSubDep3Buff::POPSUBDEP2ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamPopSubDep3Buff::NAME_INIT_VALUE );
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
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
		setRequiredRelationTenantId( src.getRequiredRelationTenantId() );
		setRequiredRelationId( src.getRequiredRelationId() );
		setRequiredPopSubDep2TenantId( src.getRequiredPopSubDep2TenantId() );
		setRequiredPopSubDep2Id( src.getRequiredPopSubDep2Id() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamPopSubDep3Buff::~CFBamPopSubDep3Buff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFBamPopSubDep3Buff::clone() {
		CFBamPopSubDep3Buff* copy = new CFBamPopSubDep3Buff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFBamPopSubDep3Buff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamPopSubDep3Buff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamPopSubDep3Buff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfbam::CFBamPopDepBuff::implementsClassCode( argClassCode ) );
		}
	}

	const int64_t CFBamPopSubDep3Buff::getRequiredPopSubDep2TenantId() const {
		return( requiredPopSubDep2TenantId );
	}

	const int64_t* CFBamPopSubDep3Buff::getRequiredPopSubDep2TenantIdReference() const {
		return( &requiredPopSubDep2TenantId );
	}

	void CFBamPopSubDep3Buff::setRequiredPopSubDep2TenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPopSubDep2TenantId" );
		if( value < cfbam::CFBamPopSubDep3Buff::POPSUBDEP2TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopSubDep3Buff::POPSUBDEP2TENANTID_MIN_VALUE );
		}
		requiredPopSubDep2TenantId = value;
	}

	const int64_t CFBamPopSubDep3Buff::getRequiredPopSubDep2Id() const {
		return( requiredPopSubDep2Id );
	}

	const int64_t* CFBamPopSubDep3Buff::getRequiredPopSubDep2IdReference() const {
		return( &requiredPopSubDep2Id );
	}

	void CFBamPopSubDep3Buff::setRequiredPopSubDep2Id( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPopSubDep2Id" );
		if( value < cfbam::CFBamPopSubDep3Buff::POPSUBDEP2ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopSubDep3Buff::POPSUBDEP2ID_MIN_VALUE );
		}
		requiredPopSubDep2Id = value;
	}

	const std::string& CFBamPopSubDep3Buff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamPopSubDep3Buff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamPopSubDep3Buff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamPopSubDep3Buff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamPopSubDep3Buff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamPopSubDep3Buff::hashCode() const {
		size_t hashCode = CFBamPopDepBuff::hashCode();
		hashCode = hashCode + (int)( getRequiredPopSubDep2TenantId() );
		hashCode = hashCode + (int)( getRequiredPopSubDep2Id() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	CFBamPopSubDep3Buff CFBamPopSubDep3Buff::operator =( cfbam::CFBamPopSubDep3Buff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredId( src.getRequiredId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
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
		setRequiredRelationTenantId( src.getRequiredRelationTenantId() );
		setRequiredRelationId( src.getRequiredRelationId() );
		setRequiredPopSubDep2TenantId( src.getRequiredPopSubDep2TenantId() );
		setRequiredPopSubDep2Id( src.getRequiredPopSubDep2Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamPopSubDep3Buff CFBamPopSubDep3Buff::operator =( cfbam::CFBamPopSubDep3HBuff& src ) {
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
		setRequiredRelationTenantId( src.getRequiredRelationTenantId() );
		setRequiredRelationId( src.getRequiredRelationId() );
		setRequiredPopSubDep2TenantId( src.getRequiredPopSubDep2TenantId() );
		setRequiredPopSubDep2Id( src.getRequiredPopSubDep2Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	bool CFBamPopSubDep3Buff::operator <( const CFBamPopSubDep3ByPopSubDep2IdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep3Buff::operator <( const CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3Buff::operator <( const CFBamScopePKey& rhs ) {
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

	bool CFBamPopSubDep3Buff::operator <( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamPopSubDep3Buff::operator <( const CFBamPopSubDep3HBuff& rhs ) {
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
		if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3Buff::operator <( const CFBamPopSubDep3Buff& rhs ) {
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
		if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3Buff::operator <=( const CFBamPopSubDep3ByPopSubDep2IdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep3Buff::operator <=( const CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3Buff::operator <=( const CFBamScopePKey& rhs ) {
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

	bool CFBamPopSubDep3Buff::operator <=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamPopSubDep3Buff::operator <=( const CFBamPopSubDep3HBuff& rhs ) {
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
		if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3Buff::operator <=( const CFBamPopSubDep3Buff& rhs ) {
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
		if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3Buff::operator ==( const CFBamPopSubDep3ByPopSubDep2IdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep3Buff::operator ==( const CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep3Buff::operator ==( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep3Buff::operator ==( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep3Buff::operator ==( const CFBamPopSubDep3HBuff& rhs ) {
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
		if( getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( false );
		}
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep3Buff::operator ==( const CFBamPopSubDep3Buff& rhs ) {
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
		if( getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( false );
		}
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep3Buff::operator !=( const CFBamPopSubDep3ByPopSubDep2IdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep3Buff::operator !=( const CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep3Buff::operator !=( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep3Buff::operator !=( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep3Buff::operator !=( const CFBamPopSubDep3HBuff& rhs ) {
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
		if( getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep3Buff::operator !=( const CFBamPopSubDep3Buff& rhs ) {
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
		if( getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep3Buff::operator >=( const CFBamPopSubDep3ByPopSubDep2IdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep3Buff::operator >=( const CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3Buff::operator >=( const CFBamScopePKey& rhs ) {
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

	bool CFBamPopSubDep3Buff::operator >=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamPopSubDep3Buff::operator >=( const CFBamPopSubDep3HBuff& rhs ) {
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
		if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3Buff::operator >=( const CFBamPopSubDep3Buff& rhs ) {
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
		if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3Buff::operator >( const CFBamPopSubDep3ByPopSubDep2IdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep3Buff::operator >( const CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3Buff::operator >( const CFBamScopePKey& rhs ) {
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

	bool CFBamPopSubDep3Buff::operator >( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamPopSubDep3Buff::operator >( const CFBamPopSubDep3HBuff& rhs ) {
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
		if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3Buff::operator >( const CFBamPopSubDep3Buff& rhs ) {
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
		if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	std::string CFBamPopSubDep3Buff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopSubDep3Buff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_DefSchemaTenantId( "DefSchemaTenantId" );
		static const std::string S_DefSchemaId( "DefSchemaId" );
		static const std::string S_RelationTenantId( "RelationTenantId" );
		static const std::string S_RelationId( "RelationId" );
		static const std::string S_PopSubDep2TenantId( "PopSubDep2TenantId" );
		static const std::string S_PopSubDep2Id( "PopSubDep2Id" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		if( ! isOptionalDefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaTenantId, getOptionalDefSchemaTenantIdValue() ) );
		}
		if( ! isOptionalDefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefSchemaId, getOptionalDefSchemaIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationTenantId, getRequiredRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, getRequiredRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep2TenantId, getRequiredPopSubDep2TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep2Id, getRequiredPopSubDep2Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator <(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs ) {
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
		if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator <(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3Buff& rhs ) {
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
		if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator <=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator <=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs ) {
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
		if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator <=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3Buff& rhs ) {
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
		if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator ==(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs ) {
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
		if( lhs.getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3Buff& rhs ) {
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
		if( lhs.getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs ) {
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
		if( lhs.getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3Buff& rhs ) {
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
		if( lhs.getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator >=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs ) {
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
		if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator >=(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3Buff& rhs ) {
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
		if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator >(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3ByPopSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator >(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs ) {
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
		if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator >(const  cfbam::CFBamPopSubDep3Buff& lhs, const cfbam::CFBamPopSubDep3Buff& rhs ) {
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
		if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

