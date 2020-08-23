// Description: C++18 implementation for a Value by ScopeIdx index key object.

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

#include <cfbam/CFBamValueByScopeIdxKey.hpp>
#include <cfbam/CFBamValueBuff.hpp>
#include <cfbam/CFBamValueHBuff.hpp>

namespace cfbam {
	const std::string CFBamValueByScopeIdxKey::CLASS_NAME( "CFBamValueByScopeIdxKey" );
	const std::string CFBamValueByScopeIdxKey::S_VALUE( "value" );
	const std::string CFBamValueByScopeIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamValueByScopeIdxKey::CFBamValueByScopeIdxKey() {
		requiredTenantId = cfbam::CFBamValueBuff::TENANTID_INIT_VALUE;
		requiredScopeId = cfbam::CFBamValueBuff::SCOPEID_INIT_VALUE;
	}

	CFBamValueByScopeIdxKey::CFBamValueByScopeIdxKey( const CFBamValueByScopeIdxKey& src ) {
		requiredTenantId = cfbam::CFBamValueBuff::TENANTID_INIT_VALUE;
		requiredScopeId = cfbam::CFBamValueBuff::SCOPEID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredScopeId( src.getRequiredScopeId() );
	}

	CFBamValueByScopeIdxKey::~CFBamValueByScopeIdxKey() {
	}

	const int64_t CFBamValueByScopeIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamValueByScopeIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamValueByScopeIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamValueBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamValueBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamValueByScopeIdxKey::getRequiredScopeId() const {
		return( requiredScopeId );
	}

	const int64_t* CFBamValueByScopeIdxKey::getRequiredScopeIdReference() const {
		return( &requiredScopeId );
	}

	void CFBamValueByScopeIdxKey::setRequiredScopeId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredScopeId" );
		if( value < cfbam::CFBamValueBuff::SCOPEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamValueBuff::SCOPEID_MIN_VALUE );
		}
		requiredScopeId = value;
	}

	size_t CFBamValueByScopeIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredScopeId() );
		return( hashCode );
	}

	std::string CFBamValueByScopeIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamValueByScopeIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_ScopeId( "ScopeId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ScopeId, getRequiredScopeId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamValueByScopeIdxKey::operator <( const CFBamValueByScopeIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamValueByScopeIdxKey::operator <( const CFBamValueHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamValueByScopeIdxKey::operator <( const CFBamValueBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamValueByScopeIdxKey::operator <=( const CFBamValueByScopeIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamValueByScopeIdxKey::operator <=( const CFBamValueHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamValueByScopeIdxKey::operator <=( const CFBamValueBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamValueByScopeIdxKey::operator ==( const CFBamValueByScopeIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamValueByScopeIdxKey::operator ==( const CFBamValueHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamValueByScopeIdxKey::operator ==( const CFBamValueBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamValueByScopeIdxKey::operator !=( const CFBamValueByScopeIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamValueByScopeIdxKey::operator !=( const CFBamValueHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamValueByScopeIdxKey::operator !=( const CFBamValueBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamValueByScopeIdxKey::operator >=( const CFBamValueByScopeIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamValueByScopeIdxKey::operator >=( const CFBamValueHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamValueByScopeIdxKey::operator >=( const CFBamValueBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamValueByScopeIdxKey::operator >( const CFBamValueByScopeIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamValueByScopeIdxKey::operator >( const CFBamValueHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamValueByScopeIdxKey::operator >( const CFBamValueBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}
	CFBamValueByScopeIdxKey CFBamValueByScopeIdxKey::operator =( cfbam::CFBamValueByScopeIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredScopeId( src.getRequiredScopeId() );
		return( *this );
	}

	CFBamValueByScopeIdxKey CFBamValueByScopeIdxKey::operator =( cfbam::CFBamValueBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredScopeId( src.getRequiredScopeId() );
		return( *this );
	}

	CFBamValueByScopeIdxKey CFBamValueByScopeIdxKey::operator =( cfbam::CFBamValueHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredScopeId( src.getRequiredScopeId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueByScopeIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueByScopeIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueByScopeIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueByScopeIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() != rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueByScopeIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueByScopeIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamValueByScopeIdxKey& lhs, const cfbam::CFBamValueBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredScopeId() < rhs.getRequiredScopeId() ) {
			return( false );
		}
		else if( lhs.getRequiredScopeId() > rhs.getRequiredScopeId() ) {
			return( true );
		}
		return( false );
	}
}

