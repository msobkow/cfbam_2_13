// Description: C++18 implementation for a PopTopDep buffer object.

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
#include <cfbam/CFBamPopTopDepByContRelIdxKey.hpp>
#include <cfbam/CFBamPopTopDepByUNameIdxKey.hpp>
#include <cfbam/CFBamSchema.hpp>

namespace cfbam {

	const std::string CFBamPopTopDepBuff::GENDEFNAME( "PopTopDep" );
	const classcode_t CFBamPopTopDepBuff::CLASS_CODE = 0xa834L;
	const std::string CFBamPopTopDepBuff::CLASS_NAME( "CFBamPopTopDepBuff" );
		const std::string CFBamPopTopDepBuff::COLNAME_CONTRELATIONTENANTID( "ContRelationTenantId" );
		const std::string CFBamPopTopDepBuff::COLNAME_CONTRELATIONID( "ContRelationId" );
		const std::string CFBamPopTopDepBuff::COLNAME_NAME( "Name" );
	const int64_t CFBamPopTopDepBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamPopTopDepBuff::ID_INIT_VALUE = 0LL;
	const int64_t CFBamPopTopDepBuff::CONTRELATIONTENANTID_INIT_VALUE = 0LL;
	const int64_t CFBamPopTopDepBuff::CONTRELATIONID_INIT_VALUE = 0LL;
	const std::string CFBamPopTopDepBuff::NAME_INIT_VALUE( "" );
	const int64_t CFBamPopTopDepBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamPopTopDepBuff::ID_MIN_VALUE = 0LL;
	const int64_t CFBamPopTopDepBuff::CONTRELATIONTENANTID_MIN_VALUE = 0LL;
	const int64_t CFBamPopTopDepBuff::CONTRELATIONID_MIN_VALUE = 0LL;
	const std::string::size_type CFBamPopTopDepBuff::NAME_MAX_LEN = 192;

	CFBamPopTopDepBuff::CFBamPopTopDepBuff()
	: CFBamPopDepBuff()
	{
		requiredContRelationTenantId = cfbam::CFBamPopTopDepBuff::CONTRELATIONTENANTID_INIT_VALUE;
		requiredContRelationId = cfbam::CFBamPopTopDepBuff::CONTRELATIONID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamPopTopDepBuff::NAME_INIT_VALUE );
	}

	CFBamPopTopDepBuff::CFBamPopTopDepBuff( const CFBamPopTopDepBuff& src )
	: CFBamPopDepBuff()
	{
		requiredContRelationTenantId = cfbam::CFBamPopTopDepBuff::CONTRELATIONTENANTID_INIT_VALUE;
		requiredContRelationId = cfbam::CFBamPopTopDepBuff::CONTRELATIONID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamPopTopDepBuff::NAME_INIT_VALUE );
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
		setRequiredContRelationTenantId( src.getRequiredContRelationTenantId() );
		setRequiredContRelationId( src.getRequiredContRelationId() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamPopTopDepBuff::~CFBamPopTopDepBuff() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFBamPopTopDepBuff::clone() {
		CFBamPopTopDepBuff* copy = new CFBamPopTopDepBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFBamPopTopDepBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFBamPopTopDepBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFBamPopTopDepBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfbam::CFBamPopDepBuff::implementsClassCode( argClassCode ) );
		}
	}

	const int64_t CFBamPopTopDepBuff::getRequiredContRelationTenantId() const {
		return( requiredContRelationTenantId );
	}

	const int64_t* CFBamPopTopDepBuff::getRequiredContRelationTenantIdReference() const {
		return( &requiredContRelationTenantId );
	}

	void CFBamPopTopDepBuff::setRequiredContRelationTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredContRelationTenantId" );
		if( value < cfbam::CFBamPopTopDepBuff::CONTRELATIONTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopTopDepBuff::CONTRELATIONTENANTID_MIN_VALUE );
		}
		requiredContRelationTenantId = value;
	}

	const int64_t CFBamPopTopDepBuff::getRequiredContRelationId() const {
		return( requiredContRelationId );
	}

	const int64_t* CFBamPopTopDepBuff::getRequiredContRelationIdReference() const {
		return( &requiredContRelationId );
	}

	void CFBamPopTopDepBuff::setRequiredContRelationId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredContRelationId" );
		if( value < cfbam::CFBamPopTopDepBuff::CONTRELATIONID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopTopDepBuff::CONTRELATIONID_MIN_VALUE );
		}
		requiredContRelationId = value;
	}

	const std::string& CFBamPopTopDepBuff::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamPopTopDepBuff::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamPopTopDepBuff::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamPopTopDepBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamPopTopDepBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamPopTopDepBuff::hashCode() const {
		size_t hashCode = CFBamPopDepBuff::hashCode();
		hashCode = hashCode + (int)( getRequiredContRelationTenantId() );
		hashCode = hashCode + (int)( getRequiredContRelationId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	CFBamPopTopDepBuff CFBamPopTopDepBuff::operator =( cfbam::CFBamPopTopDepBuff& src ) {
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
		setRequiredContRelationTenantId( src.getRequiredContRelationTenantId() );
		setRequiredContRelationId( src.getRequiredContRelationId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamPopTopDepBuff CFBamPopTopDepBuff::operator =( cfbam::CFBamPopTopDepHBuff& src ) {
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
		setRequiredContRelationTenantId( src.getRequiredContRelationTenantId() );
		setRequiredContRelationId( src.getRequiredContRelationId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	bool CFBamPopTopDepBuff::operator <( const CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepBuff::operator <( const CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepBuff::operator <( const CFBamScopePKey& rhs ) {
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

	bool CFBamPopTopDepBuff::operator <( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamPopTopDepBuff::operator <( const CFBamPopTopDepHBuff& rhs ) {
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
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepBuff::operator <( const CFBamPopTopDepBuff& rhs ) {
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
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepBuff::operator <=( const CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopTopDepBuff::operator <=( const CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepBuff::operator <=( const CFBamScopePKey& rhs ) {
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

	bool CFBamPopTopDepBuff::operator <=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamPopTopDepBuff::operator <=( const CFBamPopTopDepHBuff& rhs ) {
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
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepBuff::operator <=( const CFBamPopTopDepBuff& rhs ) {
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
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepBuff::operator ==( const CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopTopDepBuff::operator ==( const CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopTopDepBuff::operator ==( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopTopDepBuff::operator ==( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopTopDepBuff::operator ==( const CFBamPopTopDepHBuff& rhs ) {
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
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopTopDepBuff::operator ==( const CFBamPopTopDepBuff& rhs ) {
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
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopTopDepBuff::operator !=( const CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepBuff::operator !=( const CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepBuff::operator !=( const CFBamScopePKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepBuff::operator !=( const CFBamScopeHPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepBuff::operator !=( const CFBamPopTopDepHBuff& rhs ) {
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
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepBuff::operator !=( const CFBamPopTopDepBuff& rhs ) {
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
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepBuff::operator >=( const CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopTopDepBuff::operator >=( const CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepBuff::operator >=( const CFBamScopePKey& rhs ) {
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

	bool CFBamPopTopDepBuff::operator >=( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamPopTopDepBuff::operator >=( const CFBamPopTopDepHBuff& rhs ) {
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
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepBuff::operator >=( const CFBamPopTopDepBuff& rhs ) {
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
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepBuff::operator >( const CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepBuff::operator >( const CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepBuff::operator >( const CFBamScopePKey& rhs ) {
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

	bool CFBamPopTopDepBuff::operator >( const CFBamScopeHPKey& rhs ) {
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

	bool CFBamPopTopDepBuff::operator >( const CFBamPopTopDepHBuff& rhs ) {
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
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepBuff::operator >( const CFBamPopTopDepBuff& rhs ) {
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
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	std::string CFBamPopTopDepBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopTopDepBuff" );
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
		static const std::string S_ContRelationTenantId( "ContRelationTenantId" );
		static const std::string S_ContRelationId( "ContRelationId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ContRelationTenantId, getRequiredContRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ContRelationId, getRequiredContRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool operator <(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool operator <(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
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
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool operator <=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool operator <=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool operator <=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
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
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool operator ==(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
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
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
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
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool operator >=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool operator >=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
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
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool operator >(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool operator >(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool operator >(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
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
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

