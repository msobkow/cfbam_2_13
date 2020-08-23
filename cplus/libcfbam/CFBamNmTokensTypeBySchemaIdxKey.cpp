// Description: C++18 implementation for a NmTokensType by SchemaIdx index key object.

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

#include <cfbam/CFBamNmTokensTypeBySchemaIdxKey.hpp>
#include <cfbam/CFBamNmTokensTypeBuff.hpp>
#include <cfbam/CFBamNmTokensTypeHBuff.hpp>

namespace cfbam {
	const std::string CFBamNmTokensTypeBySchemaIdxKey::CLASS_NAME( "CFBamNmTokensTypeBySchemaIdxKey" );
	const std::string CFBamNmTokensTypeBySchemaIdxKey::S_VALUE( "value" );
	const std::string CFBamNmTokensTypeBySchemaIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamNmTokensTypeBySchemaIdxKey::CFBamNmTokensTypeBySchemaIdxKey() {
		requiredTenantId = cfbam::CFBamNmTokensTypeBuff::TENANTID_INIT_VALUE;
		requiredSchemaDefId = cfbam::CFBamNmTokensTypeBuff::SCHEMADEFID_INIT_VALUE;
	}

	CFBamNmTokensTypeBySchemaIdxKey::CFBamNmTokensTypeBySchemaIdxKey( const CFBamNmTokensTypeBySchemaIdxKey& src ) {
		requiredTenantId = cfbam::CFBamNmTokensTypeBuff::TENANTID_INIT_VALUE;
		requiredSchemaDefId = cfbam::CFBamNmTokensTypeBuff::SCHEMADEFID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
	}

	CFBamNmTokensTypeBySchemaIdxKey::~CFBamNmTokensTypeBySchemaIdxKey() {
	}

	const int64_t CFBamNmTokensTypeBySchemaIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamNmTokensTypeBySchemaIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamNmTokensTypeBySchemaIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamNmTokensTypeBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamNmTokensTypeBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamNmTokensTypeBySchemaIdxKey::getRequiredSchemaDefId() const {
		return( requiredSchemaDefId );
	}

	const int64_t* CFBamNmTokensTypeBySchemaIdxKey::getRequiredSchemaDefIdReference() const {
		return( &requiredSchemaDefId );
	}

	void CFBamNmTokensTypeBySchemaIdxKey::setRequiredSchemaDefId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredSchemaDefId" );
		if( value < cfbam::CFBamNmTokensTypeBuff::SCHEMADEFID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamNmTokensTypeBuff::SCHEMADEFID_MIN_VALUE );
		}
		requiredSchemaDefId = value;
	}

	size_t CFBamNmTokensTypeBySchemaIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredSchemaDefId() );
		return( hashCode );
	}

	std::string CFBamNmTokensTypeBySchemaIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamNmTokensTypeBySchemaIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_SchemaDefId( "SchemaDefId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, getRequiredSchemaDefId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamNmTokensTypeBySchemaIdxKey::operator <( const CFBamNmTokensTypeBySchemaIdxKey& rhs ) {
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

	bool CFBamNmTokensTypeBySchemaIdxKey::operator <( const CFBamNmTokensTypeHBuff& rhs ) {
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

	bool CFBamNmTokensTypeBySchemaIdxKey::operator <( const CFBamNmTokensTypeBuff& rhs ) {
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

	bool CFBamNmTokensTypeBySchemaIdxKey::operator <=( const CFBamNmTokensTypeBySchemaIdxKey& rhs ) {
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

	bool CFBamNmTokensTypeBySchemaIdxKey::operator <=( const CFBamNmTokensTypeHBuff& rhs ) {
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

	bool CFBamNmTokensTypeBySchemaIdxKey::operator <=( const CFBamNmTokensTypeBuff& rhs ) {
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

	bool CFBamNmTokensTypeBySchemaIdxKey::operator ==( const CFBamNmTokensTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamNmTokensTypeBySchemaIdxKey::operator ==( const CFBamNmTokensTypeHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamNmTokensTypeBySchemaIdxKey::operator ==( const CFBamNmTokensTypeBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamNmTokensTypeBySchemaIdxKey::operator !=( const CFBamNmTokensTypeBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamNmTokensTypeBySchemaIdxKey::operator !=( const CFBamNmTokensTypeHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamNmTokensTypeBySchemaIdxKey::operator !=( const CFBamNmTokensTypeBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamNmTokensTypeBySchemaIdxKey::operator >=( const CFBamNmTokensTypeBySchemaIdxKey& rhs ) {
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

	bool CFBamNmTokensTypeBySchemaIdxKey::operator >=( const CFBamNmTokensTypeHBuff& rhs ) {
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

	bool CFBamNmTokensTypeBySchemaIdxKey::operator >=( const CFBamNmTokensTypeBuff& rhs ) {
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

	bool CFBamNmTokensTypeBySchemaIdxKey::operator >( const CFBamNmTokensTypeBySchemaIdxKey& rhs ) {
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

	bool CFBamNmTokensTypeBySchemaIdxKey::operator >( const CFBamNmTokensTypeHBuff& rhs ) {
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

	bool CFBamNmTokensTypeBySchemaIdxKey::operator >( const CFBamNmTokensTypeBuff& rhs ) {
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
	CFBamNmTokensTypeBySchemaIdxKey CFBamNmTokensTypeBySchemaIdxKey::operator =( cfbam::CFBamNmTokensTypeBySchemaIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		return( *this );
	}

	CFBamNmTokensTypeBySchemaIdxKey CFBamNmTokensTypeBySchemaIdxKey::operator =( cfbam::CFBamNmTokensTypeBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		return( *this );
	}

	CFBamNmTokensTypeBySchemaIdxKey CFBamNmTokensTypeBySchemaIdxKey::operator =( cfbam::CFBamNmTokensTypeHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeBySchemaIdxKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeHBuff& rhs ) {
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

	bool operator <(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeBuff& rhs ) {
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

	bool operator <=(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeBySchemaIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeHBuff& rhs ) {
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

	bool operator <=(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeBuff& rhs ) {
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

	bool operator ==(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeBySchemaIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeHBuff& rhs ) {
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

	bool operator >=(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeBuff& rhs ) {
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

	bool operator >(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeBySchemaIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeHBuff& rhs ) {
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

	bool operator >(const  cfbam::CFBamNmTokensTypeBySchemaIdxKey& lhs, const cfbam::CFBamNmTokensTypeBuff& rhs ) {
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

