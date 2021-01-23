// Description: C++18 implementation for a Relation by ToKeyIdx index key object.

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

#include <cfbam/CFBamRelationByToKeyIdxKey.hpp>
#include <cfbam/CFBamRelationBuff.hpp>
#include <cfbam/CFBamRelationHBuff.hpp>

namespace cfbam {
	const std::string CFBamRelationByToKeyIdxKey::CLASS_NAME( "CFBamRelationByToKeyIdxKey" );
	const std::string CFBamRelationByToKeyIdxKey::S_VALUE( "value" );
	const std::string CFBamRelationByToKeyIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamRelationByToKeyIdxKey::CFBamRelationByToKeyIdxKey() {
		requiredTenantId = cfbam::CFBamRelationBuff::TENANTID_INIT_VALUE;
		requiredToIndexId = cfbam::CFBamRelationBuff::TOINDEXID_INIT_VALUE;
	}

	CFBamRelationByToKeyIdxKey::CFBamRelationByToKeyIdxKey( const CFBamRelationByToKeyIdxKey& src ) {
		requiredTenantId = cfbam::CFBamRelationBuff::TENANTID_INIT_VALUE;
		requiredToIndexId = cfbam::CFBamRelationBuff::TOINDEXID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredToIndexId( src.getRequiredToIndexId() );
	}

	CFBamRelationByToKeyIdxKey::~CFBamRelationByToKeyIdxKey() {
	}

	const int64_t CFBamRelationByToKeyIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamRelationByToKeyIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamRelationByToKeyIdxKey::setRequiredTenantId( const int64_t value ) {
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

	const int64_t CFBamRelationByToKeyIdxKey::getRequiredToIndexId() const {
		return( requiredToIndexId );
	}

	const int64_t* CFBamRelationByToKeyIdxKey::getRequiredToIndexIdReference() const {
		return( &requiredToIndexId );
	}

	void CFBamRelationByToKeyIdxKey::setRequiredToIndexId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredToIndexId" );
		if( value < cfbam::CFBamRelationBuff::TOINDEXID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::TOINDEXID_MIN_VALUE );
		}
		requiredToIndexId = value;
	}

	size_t CFBamRelationByToKeyIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredToIndexId() );
		return( hashCode );
	}

	std::string CFBamRelationByToKeyIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamRelationByToKeyIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_ToIndexId( "ToIndexId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ToIndexId, getRequiredToIndexId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamRelationByToKeyIdxKey::operator <( const CFBamRelationByToKeyIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToKeyIdxKey::operator <( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToKeyIdxKey::operator <( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToKeyIdxKey::operator <=( const CFBamRelationByToKeyIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByToKeyIdxKey::operator <=( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByToKeyIdxKey::operator <=( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByToKeyIdxKey::operator ==( const CFBamRelationByToKeyIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationByToKeyIdxKey::operator ==( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationByToKeyIdxKey::operator ==( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationByToKeyIdxKey::operator !=( const CFBamRelationByToKeyIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToKeyIdxKey::operator !=( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToKeyIdxKey::operator !=( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToKeyIdxKey::operator >=( const CFBamRelationByToKeyIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByToKeyIdxKey::operator >=( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByToKeyIdxKey::operator >=( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByToKeyIdxKey::operator >( const CFBamRelationByToKeyIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToKeyIdxKey::operator >( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToKeyIdxKey::operator >( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}
	CFBamRelationByToKeyIdxKey CFBamRelationByToKeyIdxKey::operator =( cfbam::CFBamRelationByToKeyIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredToIndexId( src.getRequiredToIndexId() );
		return( *this );
	}

	CFBamRelationByToKeyIdxKey CFBamRelationByToKeyIdxKey::operator =( cfbam::CFBamRelationBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredToIndexId( src.getRequiredToIndexId() );
		return( *this );
	}

	CFBamRelationByToKeyIdxKey CFBamRelationByToKeyIdxKey::operator =( cfbam::CFBamRelationHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredToIndexId( src.getRequiredToIndexId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() != rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationByToKeyIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToIndexId() < rhs.getRequiredToIndexId() ) {
			return( false );
		}
		else if( lhs.getRequiredToIndexId() > rhs.getRequiredToIndexId() ) {
			return( true );
		}
		return( false );
	}
}

