// Description: C++18 implementation for a IndexCol by ColIdx index key object.

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

#include <cfbam/CFBamIndexColByColIdxKey.hpp>
#include <cfbam/CFBamIndexColBuff.hpp>
#include <cfbam/CFBamIndexColHBuff.hpp>

namespace cfbam {
	const std::string CFBamIndexColByColIdxKey::CLASS_NAME( "CFBamIndexColByColIdxKey" );
	const std::string CFBamIndexColByColIdxKey::S_VALUE( "value" );
	const std::string CFBamIndexColByColIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamIndexColByColIdxKey::CFBamIndexColByColIdxKey() {
		requiredTenantId = cfbam::CFBamIndexColBuff::TENANTID_INIT_VALUE;
		requiredColumnId = cfbam::CFBamIndexColBuff::COLUMNID_INIT_VALUE;
	}

	CFBamIndexColByColIdxKey::CFBamIndexColByColIdxKey( const CFBamIndexColByColIdxKey& src ) {
		requiredTenantId = cfbam::CFBamIndexColBuff::TENANTID_INIT_VALUE;
		requiredColumnId = cfbam::CFBamIndexColBuff::COLUMNID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredColumnId( src.getRequiredColumnId() );
	}

	CFBamIndexColByColIdxKey::~CFBamIndexColByColIdxKey() {
	}

	const int64_t CFBamIndexColByColIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamIndexColByColIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamIndexColByColIdxKey::setRequiredTenantId( const int64_t value ) {
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

	const int64_t CFBamIndexColByColIdxKey::getRequiredColumnId() const {
		return( requiredColumnId );
	}

	const int64_t* CFBamIndexColByColIdxKey::getRequiredColumnIdReference() const {
		return( &requiredColumnId );
	}

	void CFBamIndexColByColIdxKey::setRequiredColumnId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredColumnId" );
		if( value < cfbam::CFBamIndexColBuff::COLUMNID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamIndexColBuff::COLUMNID_MIN_VALUE );
		}
		requiredColumnId = value;
	}

	size_t CFBamIndexColByColIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredColumnId() );
		return( hashCode );
	}

	std::string CFBamIndexColByColIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamIndexColByColIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_ColumnId( "ColumnId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ColumnId, getRequiredColumnId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamIndexColByColIdxKey::operator <( const CFBamIndexColByColIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByColIdxKey::operator <( const CFBamIndexColHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByColIdxKey::operator <( const CFBamIndexColBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByColIdxKey::operator <=( const CFBamIndexColByColIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamIndexColByColIdxKey::operator <=( const CFBamIndexColHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamIndexColByColIdxKey::operator <=( const CFBamIndexColBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamIndexColByColIdxKey::operator ==( const CFBamIndexColByColIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredColumnId() != rhs.getRequiredColumnId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamIndexColByColIdxKey::operator ==( const CFBamIndexColHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredColumnId() != rhs.getRequiredColumnId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamIndexColByColIdxKey::operator ==( const CFBamIndexColBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredColumnId() != rhs.getRequiredColumnId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamIndexColByColIdxKey::operator !=( const CFBamIndexColByColIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() != rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByColIdxKey::operator !=( const CFBamIndexColHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() != rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByColIdxKey::operator !=( const CFBamIndexColBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() != rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByColIdxKey::operator >=( const CFBamIndexColByColIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamIndexColByColIdxKey::operator >=( const CFBamIndexColHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamIndexColByColIdxKey::operator >=( const CFBamIndexColBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamIndexColByColIdxKey::operator >( const CFBamIndexColByColIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByColIdxKey::operator >( const CFBamIndexColHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamIndexColByColIdxKey::operator >( const CFBamIndexColBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}
	CFBamIndexColByColIdxKey CFBamIndexColByColIdxKey::operator =( cfbam::CFBamIndexColByColIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredColumnId( src.getRequiredColumnId() );
		return( *this );
	}

	CFBamIndexColByColIdxKey CFBamIndexColByColIdxKey::operator =( cfbam::CFBamIndexColBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredColumnId( src.getRequiredColumnId() );
		return( *this );
	}

	CFBamIndexColByColIdxKey CFBamIndexColByColIdxKey::operator =( cfbam::CFBamIndexColHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredColumnId( src.getRequiredColumnId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( lhs.getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( lhs.getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( lhs.getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( lhs.getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( lhs.getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( lhs.getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredColumnId() != rhs.getRequiredColumnId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredColumnId() != rhs.getRequiredColumnId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredColumnId() != rhs.getRequiredColumnId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() != rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() != rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() != rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( lhs.getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( lhs.getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( lhs.getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( lhs.getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( lhs.getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamIndexColByColIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredColumnId() < rhs.getRequiredColumnId() ) {
			return( false );
		}
		else if( lhs.getRequiredColumnId() > rhs.getRequiredColumnId() ) {
			return( true );
		}
		return( false );
	}
}

