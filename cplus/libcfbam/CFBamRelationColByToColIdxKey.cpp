// Description: C++18 implementation for a RelationCol by ToColIdx index key object.

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

#include <cfbam/CFBamRelationColByToColIdxKey.hpp>
#include <cfbam/CFBamRelationColBuff.hpp>
#include <cfbam/CFBamRelationColHBuff.hpp>

namespace cfbam {
	const std::string CFBamRelationColByToColIdxKey::CLASS_NAME( "CFBamRelationColByToColIdxKey" );
	const std::string CFBamRelationColByToColIdxKey::S_VALUE( "value" );
	const std::string CFBamRelationColByToColIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamRelationColByToColIdxKey::CFBamRelationColByToColIdxKey() {
		requiredTenantId = cfbam::CFBamRelationColBuff::TENANTID_INIT_VALUE;
		requiredToColId = cfbam::CFBamRelationColBuff::TOCOLID_INIT_VALUE;
	}

	CFBamRelationColByToColIdxKey::CFBamRelationColByToColIdxKey( const CFBamRelationColByToColIdxKey& src ) {
		requiredTenantId = cfbam::CFBamRelationColBuff::TENANTID_INIT_VALUE;
		requiredToColId = cfbam::CFBamRelationColBuff::TOCOLID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredToColId( src.getRequiredToColId() );
	}

	CFBamRelationColByToColIdxKey::~CFBamRelationColByToColIdxKey() {
	}

	const int64_t CFBamRelationColByToColIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamRelationColByToColIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamRelationColByToColIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamRelationColBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationColBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamRelationColByToColIdxKey::getRequiredToColId() const {
		return( requiredToColId );
	}

	const int64_t* CFBamRelationColByToColIdxKey::getRequiredToColIdReference() const {
		return( &requiredToColId );
	}

	void CFBamRelationColByToColIdxKey::setRequiredToColId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredToColId" );
		if( value < cfbam::CFBamRelationColBuff::TOCOLID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationColBuff::TOCOLID_MIN_VALUE );
		}
		requiredToColId = value;
	}

	size_t CFBamRelationColByToColIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredToColId() );
		return( hashCode );
	}

	std::string CFBamRelationColByToColIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamRelationColByToColIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_ToColId( "ToColId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ToColId, getRequiredToColId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamRelationColByToColIdxKey::operator <( const CFBamRelationColByToColIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByToColIdxKey::operator <( const CFBamRelationColHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByToColIdxKey::operator <( const CFBamRelationColBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByToColIdxKey::operator <=( const CFBamRelationColByToColIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationColByToColIdxKey::operator <=( const CFBamRelationColHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationColByToColIdxKey::operator <=( const CFBamRelationColBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationColByToColIdxKey::operator ==( const CFBamRelationColByToColIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredToColId() != rhs.getRequiredToColId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationColByToColIdxKey::operator ==( const CFBamRelationColHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredToColId() != rhs.getRequiredToColId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationColByToColIdxKey::operator ==( const CFBamRelationColBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredToColId() != rhs.getRequiredToColId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationColByToColIdxKey::operator !=( const CFBamRelationColByToColIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() != rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByToColIdxKey::operator !=( const CFBamRelationColHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() != rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByToColIdxKey::operator !=( const CFBamRelationColBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() != rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByToColIdxKey::operator >=( const CFBamRelationColByToColIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationColByToColIdxKey::operator >=( const CFBamRelationColHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationColByToColIdxKey::operator >=( const CFBamRelationColBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationColByToColIdxKey::operator >( const CFBamRelationColByToColIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByToColIdxKey::operator >( const CFBamRelationColHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByToColIdxKey::operator >( const CFBamRelationColBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}
	CFBamRelationColByToColIdxKey CFBamRelationColByToColIdxKey::operator =( cfbam::CFBamRelationColByToColIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredToColId( src.getRequiredToColId() );
		return( *this );
	}

	CFBamRelationColByToColIdxKey CFBamRelationColByToColIdxKey::operator =( cfbam::CFBamRelationColBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredToColId( src.getRequiredToColId() );
		return( *this );
	}

	CFBamRelationColByToColIdxKey CFBamRelationColByToColIdxKey::operator =( cfbam::CFBamRelationColHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredToColId( src.getRequiredToColId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColByToColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( lhs.getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( lhs.getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( lhs.getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColByToColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( lhs.getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( lhs.getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( lhs.getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColByToColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredToColId() != rhs.getRequiredToColId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredToColId() != rhs.getRequiredToColId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredToColId() != rhs.getRequiredToColId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColByToColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() != rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() != rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() != rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColByToColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( lhs.getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( lhs.getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( lhs.getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColByToColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( lhs.getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( lhs.getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationColByToColIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToColId() < rhs.getRequiredToColId() ) {
			return( false );
		}
		else if( lhs.getRequiredToColId() > rhs.getRequiredToColId() ) {
			return( true );
		}
		return( false );
	}
}

