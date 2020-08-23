// Description: C++18 implementation for a IndexCol by IndexIdx index key object.

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

#include <cfbam/CFBamIndexColByIndexIdxKey.hpp>
#include <cfbam/CFBamIndexColBuff.hpp>
#include <cfbam/CFBamIndexColHBuff.hpp>

namespace cfbam {
	const std::string CFBamIndexColByIndexIdxKey::CLASS_NAME( "CFBamIndexColByIndexIdxKey" );
	const std::string CFBamIndexColByIndexIdxKey::S_VALUE( "value" );
	const std::string CFBamIndexColByIndexIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamIndexColByIndexIdxKey::CFBamIndexColByIndexIdxKey() {
		requiredTenantId = cfbam::CFBamIndexColBuff::TENANTID_INIT_VALUE;
		requiredIndexId = cfbam::CFBamIndexColBuff::INDEXID_INIT_VALUE;
	}

	CFBamIndexColByIndexIdxKey::CFBamIndexColByIndexIdxKey( const CFBamIndexColByIndexIdxKey& src ) {
		requiredTenantId = cfbam::CFBamIndexColBuff::TENANTID_INIT_VALUE;
		requiredIndexId = cfbam::CFBamIndexColBuff::INDEXID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredIndexId( src.getRequiredIndexId() );
	}

	CFBamIndexColByIndexIdxKey::~CFBamIndexColByIndexIdxKey() {
	}

	const int64_t CFBamIndexColByIndexIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamIndexColByIndexIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamIndexColByIndexIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamIndexColBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamIndexColBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamIndexColByIndexIdxKey::getRequiredIndexId() const {
		return( requiredIndexId );
	}

	const int64_t* CFBamIndexColByIndexIdxKey::getRequiredIndexIdReference() const {
		return( &requiredIndexId );
	}

	void CFBamIndexColByIndexIdxKey::setRequiredIndexId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredIndexId" );
		if( value < cfbam::CFBamIndexColBuff::INDEXID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamIndexColBuff::INDEXID_MIN_VALUE );
		}
		requiredIndexId = value;
	}

	size_t CFBamIndexColByIndexIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredIndexId() );
		return( hashCode );
	}

	std::string CFBamIndexColByIndexIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamIndexColByIndexIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_IndexId( "IndexId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_IndexId, getRequiredIndexId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamIndexColByIndexIdxKey::operator <( const CFBamIndexColByIndexIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByIndexIdxKey::operator <( const CFBamIndexColHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByIndexIdxKey::operator <( const CFBamIndexColBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByIndexIdxKey::operator <=( const CFBamIndexColByIndexIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamIndexColByIndexIdxKey::operator <=( const CFBamIndexColHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamIndexColByIndexIdxKey::operator <=( const CFBamIndexColBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamIndexColByIndexIdxKey::operator ==( const CFBamIndexColByIndexIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredIndexId() != rhs.getRequiredIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamIndexColByIndexIdxKey::operator ==( const CFBamIndexColHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredIndexId() != rhs.getRequiredIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamIndexColByIndexIdxKey::operator ==( const CFBamIndexColBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredIndexId() != rhs.getRequiredIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamIndexColByIndexIdxKey::operator !=( const CFBamIndexColByIndexIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() != rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByIndexIdxKey::operator !=( const CFBamIndexColHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() != rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByIndexIdxKey::operator !=( const CFBamIndexColBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() != rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByIndexIdxKey::operator >=( const CFBamIndexColByIndexIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamIndexColByIndexIdxKey::operator >=( const CFBamIndexColHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamIndexColByIndexIdxKey::operator >=( const CFBamIndexColBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamIndexColByIndexIdxKey::operator >( const CFBamIndexColByIndexIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByIndexIdxKey::operator >( const CFBamIndexColHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByIndexIdxKey::operator >( const CFBamIndexColBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}
	CFBamIndexColByIndexIdxKey CFBamIndexColByIndexIdxKey::operator =( cfbam::CFBamIndexColByIndexIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredIndexId( src.getRequiredIndexId() );
		return( *this );
	}

	CFBamIndexColByIndexIdxKey CFBamIndexColByIndexIdxKey::operator =( cfbam::CFBamIndexColBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredIndexId( src.getRequiredIndexId() );
		return( *this );
	}

	CFBamIndexColByIndexIdxKey CFBamIndexColByIndexIdxKey::operator =( cfbam::CFBamIndexColHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredIndexId( src.getRequiredIndexId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredIndexId() != rhs.getRequiredIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredIndexId() != rhs.getRequiredIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredIndexId() != rhs.getRequiredIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() != rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() != rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() != rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamIndexColByIndexIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredIndexId() < rhs.getRequiredIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredIndexId() > rhs.getRequiredIndexId() ) {
			return( true );
		}
		return( false );
	}
}

