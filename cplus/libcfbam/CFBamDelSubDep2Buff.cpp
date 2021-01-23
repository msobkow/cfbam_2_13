// Description: C++18 implementation for a DelSubDep2 buffer object.

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
#include <cfbam/CFBamDelDepByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamDelDepByDelDepIdxKey.hpp>
#include <cfbam/CFBamDelSubDep2ByContDelDep1IdxKey.hpp>
#include <cfbam/CFBamDelSubDep2ByUNameIdxKey.hpp>
#include <cfbam/CFBamSchema.hpp>

namespace cfbam {

	const std::string CFBamDelSubDep2Buff::GENDEFNAME( "DelSubDep2" );
	const classcode_t CFBamDelSubDep2Buff::CLASS_CODE = 0xa819L;
	const std::string CFBamDelSubDep2Buff::CLASS_NAME( "CFBamDelSubDep2Buff" );
		const std::string CFBamDelSubDep2Buff::COLNAME_DELSUBDEP1TENANTID( "DelSubDep1TenantId" );
		const std::string CFBamDelSubDep2Buff::COLNAME_DELSUBDEP1ID( "DelSubDep1Id" );
		const std::string CFBamDelSubDep2Buff::COLNAME_NAME( "Name" );
	const int64_t CFBamDelSubDep2Buff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamDelSubDep2Buff::ID_INIT_VALUE = 0LL;
	const int64_t CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamDelSubDep2Buff::DELSUBDEP1ID_INIT_VALUE = 0LL;
	const std::string CFBamDelSubDep2Buff::NAME_INIT_VALUE( "" );
	const int64_t CFBamDelSubDep2Buff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamDelSubDep2Buff::ID_MIN_VALUE = 0LL;
	const int64_t CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamDelSubDep2Buff::DELSUBDEP1ID_MIN_VALUE = 0LL;
	const std::string::size_type CFBamDelSubDep2Buff::NAME_MAX_LEN = 192;

	CFBamDelSubDep2Buff::CFBamDelSubDep2Buff()
	: CFBamDelDepBuff()
	{
		requiredDelSubDep1TenantId = cfbam::CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_INIT_VALUE;
		requiredDelSubDep1Id = cfbam::CFBamDelSubDep2Buff::DELSUBDEP1ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamDelSubDep2Buff::NAME_INIT_VALUE );
	}

	CFBamDelSubDep2Buff::CFBamDelSubDep2Buff( const CFBamDelSubDep2Buff& src )
	: CFBamDelDepBuff()
	{
		requiredDelSubDep1TenantId = cfbam::CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_INIT_VALUE;
		requiredDelSubDep1Id = cfbam::CFBamDelSubDep2Buff::DELSUBDEP1ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamDelSubDep2Buff::NAME_INIT_VALUE );
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
		setRequiredDelSubDep1TenantId( src.getRequiredDelSubDep1TenantId() );
		setRequiredDelSubDep1Id( src.getRequiredDelSubDep1Id() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamDelSubDep2Buff::~CFBamDelSubDep2Buff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFBamDelSubDep2Buff::clone() {
		CFBamDelSubDep2Buff* copy = new CFBamDelSubDep2Buff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFBamDelSubDep2Buff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamDelSubDep2Buff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamDelSubDep2Buff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfbam::CFBamDelDepBuff::implementsClassCode( argClassCode ) );
		}
	}

	const int64_t CFBamDelSubDep2Buff::getRequiredDelSubDep1TenantId() const {
		return( requiredDelSubDep1TenantId );
	}

	const int64_t* CFBamDelSubDep2Buff::getRequiredDelSubDep1TenantIdReference() const {
		return( &requiredDelSubDep1TenantId );
	}

	void CFBamDelSubDep2Buff::setRequiredDelSubDep1TenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredDelSubDep1TenantId" );
		if( value < cfbam::CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_MIN_VALUE );
		}
		requiredDelSubDep1TenantId = value;
	}

	const int64_t CFBamDelSubDep2Buff::getRequiredDelSubDep1Id() const {
		return( requiredDelSubDep1Id );
	}

	const int64_t* CFBamDelSubDep2Buff::getRequiredDelSubDep1IdReference() const {
		return( &requiredDelSubDep1Id );
	}

	void CFBamDelSubDep2Buff::setRequiredDelSubDep1Id( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredDelSubDep1Id" );
		if( value < cfbam::CFBamDelSubDep2Buff::DELSUBDEP1ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelSubDep2Buff::DELSUBDEP1ID_MIN_VALUE );
		}
		requiredDelSubDep1Id = value;
	}

	const std::string& CFBamDelSubDep2Buff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamDelSubDep2Buff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamDelSubDep2Buff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamDelSubDep2Buff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamDelSubDep2Buff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamDelSubDep2Buff::hashCode() const {
		size_t hashCode = CFBamDelDepBuff::hashCode();
		hashCode = hashCode + (int)( getRequiredDelSubDep1TenantId() );
		hashCode = hashCode + (int)( getRequiredDelSubDep1Id() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	CFBamDelSubDep2Buff CFBamDelSubDep2Buff::operator =( cfbam::CFBamDelSubDep2Buff& src ) {
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
		setRequiredDelSubDep1TenantId( src.getRequiredDelSubDep1TenantId() );
		setRequiredDelSubDep1Id( src.getRequiredDelSubDep1Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamDelSubDep2Buff CFBamDelSubDep2Buff::operator =( cfbam::CFBamDelSubDep2HBuff& src ) {
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
		setRequiredDelSubDep1TenantId( src.getRequiredDelSubDep1TenantId() );
		setRequiredDelSubDep1Id( src.getRequiredDelSubDep1Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	bool CFBamDelSubDep2Buff::operator <( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2Buff::operator <( const CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2Buff::operator <( const CFBamScopePKey& rhs ) {
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

	bool CFBamDelSubDep2Buff::operator <( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamDelSubDep2Buff::operator <( const CFBamDelSubDep2HBuff& rhs ) {
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
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2Buff::operator <( const CFBamDelSubDep2Buff& rhs ) {
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
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2Buff::operator <=( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep2Buff::operator <=( const CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2Buff::operator <=( const CFBamScopePKey& rhs ) {
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

	bool CFBamDelSubDep2Buff::operator <=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamDelSubDep2Buff::operator <=( const CFBamDelSubDep2HBuff& rhs ) {
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
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2Buff::operator <=( const CFBamDelSubDep2Buff& rhs ) {
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
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2Buff::operator ==( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep2Buff::operator ==( const CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep2Buff::operator ==( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep2Buff::operator ==( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep2Buff::operator ==( const CFBamDelSubDep2HBuff& rhs ) {
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
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep2Buff::operator ==( const CFBamDelSubDep2Buff& rhs ) {
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
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep2Buff::operator !=( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2Buff::operator !=( const CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2Buff::operator !=( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2Buff::operator !=( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2Buff::operator !=( const CFBamDelSubDep2HBuff& rhs ) {
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
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2Buff::operator !=( const CFBamDelSubDep2Buff& rhs ) {
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
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2Buff::operator >=( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep2Buff::operator >=( const CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2Buff::operator >=( const CFBamScopePKey& rhs ) {
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

	bool CFBamDelSubDep2Buff::operator >=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamDelSubDep2Buff::operator >=( const CFBamDelSubDep2HBuff& rhs ) {
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
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2Buff::operator >=( const CFBamDelSubDep2Buff& rhs ) {
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
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2Buff::operator >( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2Buff::operator >( const CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2Buff::operator >( const CFBamScopePKey& rhs ) {
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

	bool CFBamDelSubDep2Buff::operator >( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamDelSubDep2Buff::operator >( const CFBamDelSubDep2HBuff& rhs ) {
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
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2Buff::operator >( const CFBamDelSubDep2Buff& rhs ) {
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
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	std::string CFBamDelSubDep2Buff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelSubDep2Buff" );
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
		static const std::string S_DelSubDep1TenantId( "DelSubDep1TenantId" );
		static const std::string S_DelSubDep1Id( "DelSubDep1Id" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep1TenantId, getRequiredDelSubDep1TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep1Id, getRequiredDelSubDep1Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator <(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
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
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator <(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
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
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator <=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator <=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
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
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator <=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
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
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator ==(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
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
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
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
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
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
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
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
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator >=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
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
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator >=(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
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
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator >(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator >(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
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
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator >(const  cfbam::CFBamDelSubDep2Buff& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
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
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

