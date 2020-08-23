// Description: C++18 implementation for a TZDateType by SchemaIdx index key object.

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

#include <cfbam/CFBamTZDateTypeBySchemaIdxKey.hpp>
#include <cfbam/CFBamTZDateTypeBuff.hpp>
#include <cfbam/CFBamTZDateTypeHBuff.hpp>

namespace cfbam {
	const std::string CFBamTZDateTypeBySchemaIdxKey::CLASS_NAME( "CFBamTZDateTypeBySchemaIdxKey" );
	const std::string CFBamTZDateTypeBySchemaIdxKey::S_VALUE( "value" );
	const std::string CFBamTZDateTypeBySchemaIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamTZDateTypeBySchemaIdxKey::CFBamTZDateTypeBySchemaIdxKey() {
		requiredTenantId = cfbam::CFBamTZDateTypeBuff::TENANTID_INIT_VALUE;
		requiredSchemaDefId = cfbam::CFBamTZDateTypeBuff::SCHEMADEFID_INIT_VALUE;
	}

	CFBamTZDateTypeBySchemaIdxKey::CFBamTZDateTypeBySchemaIdxKey( const CFBamTZDateTypeBySchemaIdxKey& src ) {
		requiredTenantId = cfbam::CFBamTZDateTypeBuff::TENANTID_INIT_VALUE;
		requiredSchemaDefId = cfbam::CFBamTZDateTypeBuff::SCHEMADEFID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
	}

	CFBamTZDateTypeBySchemaIdxKey::~CFBamTZDateTypeBySchemaIdxKey() {
	}

	const int64_t CFBamTZDateTypeBySchemaIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamTZDateTypeBySchemaIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamTZDateTypeBySchemaIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamTZDateTypeBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTZDateTypeBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamTZDateTypeBySchemaIdxKey::getRequiredSchemaDefId() const {
		return( requiredSchemaDefId );
	}

	const int64_t* CFBamTZDateTypeBySchemaIdxKey::getRequiredSchemaDefIdReference() const {
		return( &requiredSchemaDefId );
	}

	void CFBamTZDateTypeBySchemaIdxKey::setRequiredSchemaDefId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredSchemaDefId" );
		if( value < cfbam::CFBamTZDateTypeBuff::SCHEMADEFID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTZDateTypeBuff::SCHEMADEFID_MIN_VALUE );
		}
		requiredSchemaDefId = value;
	}

	size_t CFBamTZDateTypeBySchemaIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredSchemaDefId() );
		return( hashCode );
	}

	std::string CFBamTZDateTypeBySchemaIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTZDateTypeBySchemaIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_SchemaDefId( "SchemaDefId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, getRequiredSchemaDefId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator <( const CFBamTZDateTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator <( const CFBamTZDateTypeHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator <( const CFBamTZDateTypeBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator <=( const CFBamTZDateTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator <=( const CFBamTZDateTypeHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator <=( const CFBamTZDateTypeBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator ==( const CFBamTZDateTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator ==( const CFBamTZDateTypeHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator ==( const CFBamTZDateTypeBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator !=( const CFBamTZDateTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator !=( const CFBamTZDateTypeHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator !=( const CFBamTZDateTypeBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator >=( const CFBamTZDateTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator >=( const CFBamTZDateTypeHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator >=( const CFBamTZDateTypeBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator >( const CFBamTZDateTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator >( const CFBamTZDateTypeHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTZDateTypeBySchemaIdxKey::operator >( const CFBamTZDateTypeBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}
	CFBamTZDateTypeBySchemaIdxKey CFBamTZDateTypeBySchemaIdxKey::operator =( cfbam::CFBamTZDateTypeBySchemaIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		return( *this );
	}

	CFBamTZDateTypeBySchemaIdxKey CFBamTZDateTypeBySchemaIdxKey::operator =( cfbam::CFBamTZDateTypeBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		return( *this );
	}

	CFBamTZDateTypeBySchemaIdxKey CFBamTZDateTypeBySchemaIdxKey::operator =( cfbam::CFBamTZDateTypeHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTZDateTypeBySchemaIdxKey& lhs, const cfbam::CFBamTZDateTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}
}

