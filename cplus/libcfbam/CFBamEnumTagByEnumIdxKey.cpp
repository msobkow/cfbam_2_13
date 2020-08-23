// Description: C++18 implementation for a EnumTag by EnumIdx index key object.

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

#include <cfbam/CFBamEnumTagByEnumIdxKey.hpp>
#include <cfbam/CFBamEnumTagBuff.hpp>
#include <cfbam/CFBamEnumTagHBuff.hpp>

namespace cfbam {
	const std::string CFBamEnumTagByEnumIdxKey::CLASS_NAME( "CFBamEnumTagByEnumIdxKey" );
	const std::string CFBamEnumTagByEnumIdxKey::S_VALUE( "value" );
	const std::string CFBamEnumTagByEnumIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamEnumTagByEnumIdxKey::CFBamEnumTagByEnumIdxKey() {
		requiredTenantId = cfbam::CFBamEnumTagBuff::TENANTID_INIT_VALUE;
		requiredEnumId = cfbam::CFBamEnumTagBuff::ENUMID_INIT_VALUE;
	}

	CFBamEnumTagByEnumIdxKey::CFBamEnumTagByEnumIdxKey( const CFBamEnumTagByEnumIdxKey& src ) {
		requiredTenantId = cfbam::CFBamEnumTagBuff::TENANTID_INIT_VALUE;
		requiredEnumId = cfbam::CFBamEnumTagBuff::ENUMID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredEnumId( src.getRequiredEnumId() );
	}

	CFBamEnumTagByEnumIdxKey::~CFBamEnumTagByEnumIdxKey() {
	}

	const int64_t CFBamEnumTagByEnumIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamEnumTagByEnumIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamEnumTagByEnumIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamEnumTagBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamEnumTagBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamEnumTagByEnumIdxKey::getRequiredEnumId() const {
		return( requiredEnumId );
	}

	const int64_t* CFBamEnumTagByEnumIdxKey::getRequiredEnumIdReference() const {
		return( &requiredEnumId );
	}

	void CFBamEnumTagByEnumIdxKey::setRequiredEnumId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredEnumId" );
		if( value < cfbam::CFBamEnumTagBuff::ENUMID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamEnumTagBuff::ENUMID_MIN_VALUE );
		}
		requiredEnumId = value;
	}

	size_t CFBamEnumTagByEnumIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredEnumId() );
		return( hashCode );
	}

	std::string CFBamEnumTagByEnumIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamEnumTagByEnumIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_EnumId( "EnumId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_EnumId, getRequiredEnumId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamEnumTagByEnumIdxKey::operator <( const CFBamEnumTagByEnumIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamEnumTagByEnumIdxKey::operator <( const CFBamEnumTagHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamEnumTagByEnumIdxKey::operator <( const CFBamEnumTagBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamEnumTagByEnumIdxKey::operator <=( const CFBamEnumTagByEnumIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamEnumTagByEnumIdxKey::operator <=( const CFBamEnumTagHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamEnumTagByEnumIdxKey::operator <=( const CFBamEnumTagBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamEnumTagByEnumIdxKey::operator ==( const CFBamEnumTagByEnumIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredEnumId() != rhs.getRequiredEnumId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamEnumTagByEnumIdxKey::operator ==( const CFBamEnumTagHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredEnumId() != rhs.getRequiredEnumId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamEnumTagByEnumIdxKey::operator ==( const CFBamEnumTagBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredEnumId() != rhs.getRequiredEnumId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamEnumTagByEnumIdxKey::operator !=( const CFBamEnumTagByEnumIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() != rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamEnumTagByEnumIdxKey::operator !=( const CFBamEnumTagHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() != rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamEnumTagByEnumIdxKey::operator !=( const CFBamEnumTagBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() != rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamEnumTagByEnumIdxKey::operator >=( const CFBamEnumTagByEnumIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamEnumTagByEnumIdxKey::operator >=( const CFBamEnumTagHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamEnumTagByEnumIdxKey::operator >=( const CFBamEnumTagBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamEnumTagByEnumIdxKey::operator >( const CFBamEnumTagByEnumIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamEnumTagByEnumIdxKey::operator >( const CFBamEnumTagHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamEnumTagByEnumIdxKey::operator >( const CFBamEnumTagBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}
	CFBamEnumTagByEnumIdxKey CFBamEnumTagByEnumIdxKey::operator =( cfbam::CFBamEnumTagByEnumIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredEnumId( src.getRequiredEnumId() );
		return( *this );
	}

	CFBamEnumTagByEnumIdxKey CFBamEnumTagByEnumIdxKey::operator =( cfbam::CFBamEnumTagBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredEnumId( src.getRequiredEnumId() );
		return( *this );
	}

	CFBamEnumTagByEnumIdxKey CFBamEnumTagByEnumIdxKey::operator =( cfbam::CFBamEnumTagHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredEnumId( src.getRequiredEnumId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( lhs.getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( lhs.getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( lhs.getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( lhs.getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( lhs.getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( lhs.getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredEnumId() != rhs.getRequiredEnumId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredEnumId() != rhs.getRequiredEnumId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredEnumId() != rhs.getRequiredEnumId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() != rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() != rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() != rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( lhs.getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( lhs.getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( lhs.getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( lhs.getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( lhs.getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamEnumTagByEnumIdxKey& lhs, const cfbam::CFBamEnumTagBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredEnumId() < rhs.getRequiredEnumId() ) {
			return( false );
		}
		else if( lhs.getRequiredEnumId() > rhs.getRequiredEnumId() ) {
			return( true );
		}
		return( false );
	}
}

