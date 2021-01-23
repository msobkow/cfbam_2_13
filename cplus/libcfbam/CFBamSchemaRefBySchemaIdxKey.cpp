// Description: C++18 implementation for a SchemaRef by SchemaIdx index key object.

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

#include <cfbam/CFBamSchemaRefBySchemaIdxKey.hpp>
#include <cfbam/CFBamSchemaRefBuff.hpp>
#include <cfbam/CFBamSchemaRefHBuff.hpp>

namespace cfbam {
	const std::string CFBamSchemaRefBySchemaIdxKey::CLASS_NAME( "CFBamSchemaRefBySchemaIdxKey" );
	const std::string CFBamSchemaRefBySchemaIdxKey::S_VALUE( "value" );
	const std::string CFBamSchemaRefBySchemaIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamSchemaRefBySchemaIdxKey::CFBamSchemaRefBySchemaIdxKey() {
		requiredTenantId = cfbam::CFBamSchemaRefBuff::TENANTID_INIT_VALUE;
		requiredSchemaId = cfbam::CFBamSchemaRefBuff::SCHEMAID_INIT_VALUE;
	}

	CFBamSchemaRefBySchemaIdxKey::CFBamSchemaRefBySchemaIdxKey( const CFBamSchemaRefBySchemaIdxKey& src ) {
		requiredTenantId = cfbam::CFBamSchemaRefBuff::TENANTID_INIT_VALUE;
		requiredSchemaId = cfbam::CFBamSchemaRefBuff::SCHEMAID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaId( src.getRequiredSchemaId() );
	}

	CFBamSchemaRefBySchemaIdxKey::~CFBamSchemaRefBySchemaIdxKey() {
	}

	const int64_t CFBamSchemaRefBySchemaIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamSchemaRefBySchemaIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamSchemaRefBySchemaIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamSchemaRefBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaRefBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamSchemaRefBySchemaIdxKey::getRequiredSchemaId() const {
		return( requiredSchemaId );
	}

	const int64_t* CFBamSchemaRefBySchemaIdxKey::getRequiredSchemaIdReference() const {
		return( &requiredSchemaId );
	}

	void CFBamSchemaRefBySchemaIdxKey::setRequiredSchemaId( const int64_t value ) {
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

	size_t CFBamSchemaRefBySchemaIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredSchemaId() );
		return( hashCode );
	}

	std::string CFBamSchemaRefBySchemaIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaRefBySchemaIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_SchemaId( "SchemaId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaId, getRequiredSchemaId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamSchemaRefBySchemaIdxKey::operator <( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefBySchemaIdxKey::operator <( const CFBamSchemaRefHBuff& rhs ) {
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

	bool CFBamSchemaRefBySchemaIdxKey::operator <( const CFBamSchemaRefBuff& rhs ) {
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

	bool CFBamSchemaRefBySchemaIdxKey::operator <=( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefBySchemaIdxKey::operator <=( const CFBamSchemaRefHBuff& rhs ) {
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

	bool CFBamSchemaRefBySchemaIdxKey::operator <=( const CFBamSchemaRefBuff& rhs ) {
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

	bool CFBamSchemaRefBySchemaIdxKey::operator ==( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaRefBySchemaIdxKey::operator ==( const CFBamSchemaRefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaRefBySchemaIdxKey::operator ==( const CFBamSchemaRefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaRefBySchemaIdxKey::operator !=( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefBySchemaIdxKey::operator !=( const CFBamSchemaRefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefBySchemaIdxKey::operator !=( const CFBamSchemaRefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefBySchemaIdxKey::operator >=( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefBySchemaIdxKey::operator >=( const CFBamSchemaRefHBuff& rhs ) {
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

	bool CFBamSchemaRefBySchemaIdxKey::operator >=( const CFBamSchemaRefBuff& rhs ) {
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

	bool CFBamSchemaRefBySchemaIdxKey::operator >( const CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool CFBamSchemaRefBySchemaIdxKey::operator >( const CFBamSchemaRefHBuff& rhs ) {
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

	bool CFBamSchemaRefBySchemaIdxKey::operator >( const CFBamSchemaRefBuff& rhs ) {
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
	CFBamSchemaRefBySchemaIdxKey CFBamSchemaRefBySchemaIdxKey::operator =( cfbam::CFBamSchemaRefBySchemaIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaId( src.getRequiredSchemaId() );
		return( *this );
	}

	CFBamSchemaRefBySchemaIdxKey CFBamSchemaRefBySchemaIdxKey::operator =( cfbam::CFBamSchemaRefBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaId( src.getRequiredSchemaId() );
		return( *this );
	}

	CFBamSchemaRefBySchemaIdxKey CFBamSchemaRefBySchemaIdxKey::operator =( cfbam::CFBamSchemaRefHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaId( src.getRequiredSchemaId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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

	bool operator <(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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

	bool operator ==(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefBySchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
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
}

