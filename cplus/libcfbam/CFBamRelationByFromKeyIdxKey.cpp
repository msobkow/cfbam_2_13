// Description: C++18 implementation for a Relation by FromKeyIdx index key object.

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

#include <cfbam/CFBamRelationByFromKeyIdxKey.hpp>
#include <cfbam/CFBamRelationBuff.hpp>
#include <cfbam/CFBamRelationHBuff.hpp>

namespace cfbam {
	const std::string CFBamRelationByFromKeyIdxKey::CLASS_NAME( "CFBamRelationByFromKeyIdxKey" );
	const std::string CFBamRelationByFromKeyIdxKey::S_VALUE( "value" );
	const std::string CFBamRelationByFromKeyIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamRelationByFromKeyIdxKey::CFBamRelationByFromKeyIdxKey() {
		requiredTenantId = cfbam::CFBamRelationBuff::TENANTID_INIT_VALUE;
		requiredFromIndexId = cfbam::CFBamRelationBuff::FROMINDEXID_INIT_VALUE;
	}

	CFBamRelationByFromKeyIdxKey::CFBamRelationByFromKeyIdxKey( const CFBamRelationByFromKeyIdxKey& src ) {
		requiredTenantId = cfbam::CFBamRelationBuff::TENANTID_INIT_VALUE;
		requiredFromIndexId = cfbam::CFBamRelationBuff::FROMINDEXID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredFromIndexId( src.getRequiredFromIndexId() );
	}

	CFBamRelationByFromKeyIdxKey::~CFBamRelationByFromKeyIdxKey() {
	}

	const int64_t CFBamRelationByFromKeyIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamRelationByFromKeyIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamRelationByFromKeyIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamRelationBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamRelationByFromKeyIdxKey::getRequiredFromIndexId() const {
		return( requiredFromIndexId );
	}

	const int64_t* CFBamRelationByFromKeyIdxKey::getRequiredFromIndexIdReference() const {
		return( &requiredFromIndexId );
	}

	void CFBamRelationByFromKeyIdxKey::setRequiredFromIndexId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredFromIndexId" );
		if( value < cfbam::CFBamRelationBuff::FROMINDEXID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::FROMINDEXID_MIN_VALUE );
		}
		requiredFromIndexId = value;
	}

	size_t CFBamRelationByFromKeyIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredFromIndexId() );
		return( hashCode );
	}

	std::string CFBamRelationByFromKeyIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamRelationByFromKeyIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_FromIndexId( "FromIndexId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FromIndexId, getRequiredFromIndexId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamRelationByFromKeyIdxKey::operator <( const CFBamRelationByFromKeyIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByFromKeyIdxKey::operator <( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByFromKeyIdxKey::operator <( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByFromKeyIdxKey::operator <=( const CFBamRelationByFromKeyIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByFromKeyIdxKey::operator <=( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByFromKeyIdxKey::operator <=( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByFromKeyIdxKey::operator ==( const CFBamRelationByFromKeyIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationByFromKeyIdxKey::operator ==( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationByFromKeyIdxKey::operator ==( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationByFromKeyIdxKey::operator !=( const CFBamRelationByFromKeyIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByFromKeyIdxKey::operator !=( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByFromKeyIdxKey::operator !=( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByFromKeyIdxKey::operator >=( const CFBamRelationByFromKeyIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByFromKeyIdxKey::operator >=( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByFromKeyIdxKey::operator >=( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByFromKeyIdxKey::operator >( const CFBamRelationByFromKeyIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByFromKeyIdxKey::operator >( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByFromKeyIdxKey::operator >( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}
	CFBamRelationByFromKeyIdxKey CFBamRelationByFromKeyIdxKey::operator =( cfbam::CFBamRelationByFromKeyIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredFromIndexId( src.getRequiredFromIndexId() );
		return( *this );
	}

	CFBamRelationByFromKeyIdxKey CFBamRelationByFromKeyIdxKey::operator =( cfbam::CFBamRelationBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredFromIndexId( src.getRequiredFromIndexId() );
		return( *this );
	}

	CFBamRelationByFromKeyIdxKey CFBamRelationByFromKeyIdxKey::operator =( cfbam::CFBamRelationHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredFromIndexId( src.getRequiredFromIndexId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() != rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationByFromKeyIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredFromIndexId() < rhs.getRequiredFromIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredFromIndexId() > rhs.getRequiredFromIndexId() ) {
			return( true );
		}
		return( false );
	}
}

