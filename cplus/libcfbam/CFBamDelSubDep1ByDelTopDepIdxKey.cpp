// Description: C++18 implementation for a DelSubDep1 by DelTopDepIdx index key object.

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

#include <cfbam/CFBamDelSubDep1ByDelTopDepIdxKey.hpp>
#include <cfbam/CFBamDelSubDep1Buff.hpp>
#include <cfbam/CFBamDelSubDep1HBuff.hpp>

namespace cfbam {
	const std::string CFBamDelSubDep1ByDelTopDepIdxKey::CLASS_NAME( "CFBamDelSubDep1ByDelTopDepIdxKey" );
	const std::string CFBamDelSubDep1ByDelTopDepIdxKey::S_VALUE( "value" );
	const std::string CFBamDelSubDep1ByDelTopDepIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamDelSubDep1ByDelTopDepIdxKey::CFBamDelSubDep1ByDelTopDepIdxKey() {
		requiredDelTopDepTenantId = cfbam::CFBamDelSubDep1Buff::DELTOPDEPTENANTID_INIT_VALUE;
		requiredDelTopDepId = cfbam::CFBamDelSubDep1Buff::DELTOPDEPID_INIT_VALUE;
	}

	CFBamDelSubDep1ByDelTopDepIdxKey::CFBamDelSubDep1ByDelTopDepIdxKey( const CFBamDelSubDep1ByDelTopDepIdxKey& src ) {
		requiredDelTopDepTenantId = cfbam::CFBamDelSubDep1Buff::DELTOPDEPTENANTID_INIT_VALUE;
		requiredDelTopDepId = cfbam::CFBamDelSubDep1Buff::DELTOPDEPID_INIT_VALUE;
		setRequiredDelTopDepTenantId( src.getRequiredDelTopDepTenantId() );
		setRequiredDelTopDepId( src.getRequiredDelTopDepId() );
	}

	CFBamDelSubDep1ByDelTopDepIdxKey::~CFBamDelSubDep1ByDelTopDepIdxKey() {
	}

	const int64_t CFBamDelSubDep1ByDelTopDepIdxKey::getRequiredDelTopDepTenantId() const {
		return( requiredDelTopDepTenantId );
	}

	const int64_t* CFBamDelSubDep1ByDelTopDepIdxKey::getRequiredDelTopDepTenantIdReference() const {
		return( &requiredDelTopDepTenantId );
	}

	void CFBamDelSubDep1ByDelTopDepIdxKey::setRequiredDelTopDepTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredDelTopDepTenantId" );
		if( value < cfbam::CFBamDelSubDep1Buff::DELTOPDEPTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelSubDep1Buff::DELTOPDEPTENANTID_MIN_VALUE );
		}
		requiredDelTopDepTenantId = value;
	}

	const int64_t CFBamDelSubDep1ByDelTopDepIdxKey::getRequiredDelTopDepId() const {
		return( requiredDelTopDepId );
	}

	const int64_t* CFBamDelSubDep1ByDelTopDepIdxKey::getRequiredDelTopDepIdReference() const {
		return( &requiredDelTopDepId );
	}

	void CFBamDelSubDep1ByDelTopDepIdxKey::setRequiredDelTopDepId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredDelTopDepId" );
		if( value < cfbam::CFBamDelSubDep1Buff::DELTOPDEPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelSubDep1Buff::DELTOPDEPID_MIN_VALUE );
		}
		requiredDelTopDepId = value;
	}

	size_t CFBamDelSubDep1ByDelTopDepIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredDelTopDepTenantId() );
		hashCode = hashCode + (int)( getRequiredDelTopDepId() );
		return( hashCode );
	}

	std::string CFBamDelSubDep1ByDelTopDepIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelSubDep1ByDelTopDepIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_DelTopDepTenantId( "DelTopDepTenantId" );
		static const std::string S_DelTopDepId( "DelTopDepId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelTopDepTenantId, getRequiredDelTopDepTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelTopDepId, getRequiredDelTopDepId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator <( const CFBamDelSubDep1ByDelTopDepIdxKey& rhs ) {
		if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator <( const CFBamDelSubDep1HBuff& rhs ) {
		if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator <( const CFBamDelSubDep1Buff& rhs ) {
		if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator <=( const CFBamDelSubDep1ByDelTopDepIdxKey& rhs ) {
		if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator <=( const CFBamDelSubDep1HBuff& rhs ) {
		if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator <=( const CFBamDelSubDep1Buff& rhs ) {
		if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator ==( const CFBamDelSubDep1ByDelTopDepIdxKey& rhs ) {
		if( getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator ==( const CFBamDelSubDep1HBuff& rhs ) {
		if( getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator ==( const CFBamDelSubDep1Buff& rhs ) {
		if( getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator !=( const CFBamDelSubDep1ByDelTopDepIdxKey& rhs ) {
		if( getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator !=( const CFBamDelSubDep1HBuff& rhs ) {
		if( getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator !=( const CFBamDelSubDep1Buff& rhs ) {
		if( getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator >=( const CFBamDelSubDep1ByDelTopDepIdxKey& rhs ) {
		if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator >=( const CFBamDelSubDep1HBuff& rhs ) {
		if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator >=( const CFBamDelSubDep1Buff& rhs ) {
		if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator >( const CFBamDelSubDep1ByDelTopDepIdxKey& rhs ) {
		if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator >( const CFBamDelSubDep1HBuff& rhs ) {
		if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep1ByDelTopDepIdxKey::operator >( const CFBamDelSubDep1Buff& rhs ) {
		if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}
	CFBamDelSubDep1ByDelTopDepIdxKey CFBamDelSubDep1ByDelTopDepIdxKey::operator =( cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& src ) {
		setRequiredDelTopDepTenantId( src.getRequiredDelTopDepTenantId() );
		setRequiredDelTopDepId( src.getRequiredDelTopDepId() );
		return( *this );
	}

	CFBamDelSubDep1ByDelTopDepIdxKey CFBamDelSubDep1ByDelTopDepIdxKey::operator =( cfbam::CFBamDelSubDep1Buff& src ) {
		setRequiredDelTopDepTenantId( src.getRequiredDelTopDepTenantId() );
		setRequiredDelTopDepId( src.getRequiredDelTopDepId() );
		return( *this );
	}

	CFBamDelSubDep1ByDelTopDepIdxKey CFBamDelSubDep1ByDelTopDepIdxKey::operator =( cfbam::CFBamDelSubDep1HBuff& src ) {
		setRequiredDelTopDepTenantId( src.getRequiredDelTopDepTenantId() );
		setRequiredDelTopDepId( src.getRequiredDelTopDepId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		return( false );
	}
}

