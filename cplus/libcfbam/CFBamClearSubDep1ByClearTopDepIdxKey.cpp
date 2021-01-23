// Description: C++18 implementation for a ClearSubDep1 by ClearTopDepIdx index key object.

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

#include <cfbam/CFBamClearSubDep1ByClearTopDepIdxKey.hpp>
#include <cfbam/CFBamClearSubDep1Buff.hpp>
#include <cfbam/CFBamClearSubDep1HBuff.hpp>

namespace cfbam {
	const std::string CFBamClearSubDep1ByClearTopDepIdxKey::CLASS_NAME( "CFBamClearSubDep1ByClearTopDepIdxKey" );
	const std::string CFBamClearSubDep1ByClearTopDepIdxKey::S_VALUE( "value" );
	const std::string CFBamClearSubDep1ByClearTopDepIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamClearSubDep1ByClearTopDepIdxKey::CFBamClearSubDep1ByClearTopDepIdxKey() {
		requiredClearTopDepTenantId = cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_INIT_VALUE;
		requiredClearTopDepId = cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPID_INIT_VALUE;
	}

	CFBamClearSubDep1ByClearTopDepIdxKey::CFBamClearSubDep1ByClearTopDepIdxKey( const CFBamClearSubDep1ByClearTopDepIdxKey& src ) {
		requiredClearTopDepTenantId = cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_INIT_VALUE;
		requiredClearTopDepId = cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPID_INIT_VALUE;
		setRequiredClearTopDepTenantId( src.getRequiredClearTopDepTenantId() );
		setRequiredClearTopDepId( src.getRequiredClearTopDepId() );
	}

	CFBamClearSubDep1ByClearTopDepIdxKey::~CFBamClearSubDep1ByClearTopDepIdxKey() {
	}

	const int64_t CFBamClearSubDep1ByClearTopDepIdxKey::getRequiredClearTopDepTenantId() const {
		return( requiredClearTopDepTenantId );
	}

	const int64_t* CFBamClearSubDep1ByClearTopDepIdxKey::getRequiredClearTopDepTenantIdReference() const {
		return( &requiredClearTopDepTenantId );
	}

	void CFBamClearSubDep1ByClearTopDepIdxKey::setRequiredClearTopDepTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearTopDepTenantId" );
		if( value < cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_MIN_VALUE );
		}
		requiredClearTopDepTenantId = value;
	}

	const int64_t CFBamClearSubDep1ByClearTopDepIdxKey::getRequiredClearTopDepId() const {
		return( requiredClearTopDepId );
	}

	const int64_t* CFBamClearSubDep1ByClearTopDepIdxKey::getRequiredClearTopDepIdReference() const {
		return( &requiredClearTopDepId );
	}

	void CFBamClearSubDep1ByClearTopDepIdxKey::setRequiredClearTopDepId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearTopDepId" );
		if( value < cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPID_MIN_VALUE );
		}
		requiredClearTopDepId = value;
	}

	size_t CFBamClearSubDep1ByClearTopDepIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClearTopDepTenantId() );
		hashCode = hashCode + (int)( getRequiredClearTopDepId() );
		return( hashCode );
	}

	std::string CFBamClearSubDep1ByClearTopDepIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearSubDep1ByClearTopDepIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClearTopDepTenantId( "ClearTopDepTenantId" );
		static const std::string S_ClearTopDepId( "ClearTopDepId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearTopDepTenantId, getRequiredClearTopDepTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearTopDepId, getRequiredClearTopDepId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator <( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator <( const CFBamClearSubDep1HBuff& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator <( const CFBamClearSubDep1Buff& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator <=( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator <=( const CFBamClearSubDep1HBuff& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator <=( const CFBamClearSubDep1Buff& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator ==( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator ==( const CFBamClearSubDep1HBuff& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator ==( const CFBamClearSubDep1Buff& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator !=( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator !=( const CFBamClearSubDep1HBuff& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator !=( const CFBamClearSubDep1Buff& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator >=( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator >=( const CFBamClearSubDep1HBuff& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator >=( const CFBamClearSubDep1Buff& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator >( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator >( const CFBamClearSubDep1HBuff& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1ByClearTopDepIdxKey::operator >( const CFBamClearSubDep1Buff& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}
	CFBamClearSubDep1ByClearTopDepIdxKey CFBamClearSubDep1ByClearTopDepIdxKey::operator =( cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& src ) {
		setRequiredClearTopDepTenantId( src.getRequiredClearTopDepTenantId() );
		setRequiredClearTopDepId( src.getRequiredClearTopDepId() );
		return( *this );
	}

	CFBamClearSubDep1ByClearTopDepIdxKey CFBamClearSubDep1ByClearTopDepIdxKey::operator =( cfbam::CFBamClearSubDep1Buff& src ) {
		setRequiredClearTopDepTenantId( src.getRequiredClearTopDepTenantId() );
		setRequiredClearTopDepId( src.getRequiredClearTopDepId() );
		return( *this );
	}

	CFBamClearSubDep1ByClearTopDepIdxKey CFBamClearSubDep1ByClearTopDepIdxKey::operator =( cfbam::CFBamClearSubDep1HBuff& src ) {
		setRequiredClearTopDepTenantId( src.getRequiredClearTopDepTenantId() );
		setRequiredClearTopDepId( src.getRequiredClearTopDepId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		return( false );
	}
}

