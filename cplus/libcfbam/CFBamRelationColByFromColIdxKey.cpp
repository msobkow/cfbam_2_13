// Description: C++18 implementation for a RelationCol by FromColIdx index key object.

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

#include <cfbam/CFBamRelationColByFromColIdxKey.hpp>
#include <cfbam/CFBamRelationColBuff.hpp>
#include <cfbam/CFBamRelationColHBuff.hpp>

namespace cfbam {
	const std::string CFBamRelationColByFromColIdxKey::CLASS_NAME( "CFBamRelationColByFromColIdxKey" );
	const std::string CFBamRelationColByFromColIdxKey::S_VALUE( "value" );
	const std::string CFBamRelationColByFromColIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamRelationColByFromColIdxKey::CFBamRelationColByFromColIdxKey() {
		requiredTenantId = cfbam::CFBamRelationColBuff::TENANTID_INIT_VALUE;
		requiredFromColId = cfbam::CFBamRelationColBuff::FROMCOLID_INIT_VALUE;
	}

	CFBamRelationColByFromColIdxKey::CFBamRelationColByFromColIdxKey( const CFBamRelationColByFromColIdxKey& src ) {
		requiredTenantId = cfbam::CFBamRelationColBuff::TENANTID_INIT_VALUE;
		requiredFromColId = cfbam::CFBamRelationColBuff::FROMCOLID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredFromColId( src.getRequiredFromColId() );
	}

	CFBamRelationColByFromColIdxKey::~CFBamRelationColByFromColIdxKey() {
	}

	const int64_t CFBamRelationColByFromColIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamRelationColByFromColIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamRelationColByFromColIdxKey::setRequiredTenantId( const int64_t value ) {
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

	const int64_t CFBamRelationColByFromColIdxKey::getRequiredFromColId() const {
		return( requiredFromColId );
	}

	const int64_t* CFBamRelationColByFromColIdxKey::getRequiredFromColIdReference() const {
		return( &requiredFromColId );
	}

	void CFBamRelationColByFromColIdxKey::setRequiredFromColId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredFromColId" );
		if( value < cfbam::CFBamRelationColBuff::FROMCOLID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationColBuff::FROMCOLID_MIN_VALUE );
		}
		requiredFromColId = value;
	}

	size_t CFBamRelationColByFromColIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredFromColId() );
		return( hashCode );
	}

	std::string CFBamRelationColByFromColIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamRelationColByFromColIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_FromColId( "FromColId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FromColId, getRequiredFromColId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamRelationColByFromColIdxKey::operator <( const CFBamRelationColByFromColIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByFromColIdxKey::operator <( const CFBamRelationColHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByFromColIdxKey::operator <( const CFBamRelationColBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByFromColIdxKey::operator <=( const CFBamRelationColByFromColIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationColByFromColIdxKey::operator <=( const CFBamRelationColHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationColByFromColIdxKey::operator <=( const CFBamRelationColBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationColByFromColIdxKey::operator ==( const CFBamRelationColByFromColIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredFromColId() != rhs.getRequiredFromColId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationColByFromColIdxKey::operator ==( const CFBamRelationColHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredFromColId() != rhs.getRequiredFromColId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationColByFromColIdxKey::operator ==( const CFBamRelationColBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredFromColId() != rhs.getRequiredFromColId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationColByFromColIdxKey::operator !=( const CFBamRelationColByFromColIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() != rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByFromColIdxKey::operator !=( const CFBamRelationColHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() != rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByFromColIdxKey::operator !=( const CFBamRelationColBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() != rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByFromColIdxKey::operator >=( const CFBamRelationColByFromColIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationColByFromColIdxKey::operator >=( const CFBamRelationColHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationColByFromColIdxKey::operator >=( const CFBamRelationColBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationColByFromColIdxKey::operator >( const CFBamRelationColByFromColIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByFromColIdxKey::operator >( const CFBamRelationColHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationColByFromColIdxKey::operator >( const CFBamRelationColBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}
	CFBamRelationColByFromColIdxKey CFBamRelationColByFromColIdxKey::operator =( cfbam::CFBamRelationColByFromColIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredFromColId( src.getRequiredFromColId() );
		return( *this );
	}

	CFBamRelationColByFromColIdxKey CFBamRelationColByFromColIdxKey::operator =( cfbam::CFBamRelationColBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredFromColId( src.getRequiredFromColId() );
		return( *this );
	}

	CFBamRelationColByFromColIdxKey CFBamRelationColByFromColIdxKey::operator =( cfbam::CFBamRelationColHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredFromColId( src.getRequiredFromColId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColByFromColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColByFromColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColByFromColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredFromColId() != rhs.getRequiredFromColId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredFromColId() != rhs.getRequiredFromColId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredFromColId() != rhs.getRequiredFromColId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColByFromColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() != rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() != rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() != rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColByFromColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColByFromColIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationColByFromColIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromColId() < rhs.getRequiredFromColId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromColId() > rhs.getRequiredFromColId() ) {
			return( true );
		}
		return( false );
	}
}

