// Description: C++18 implementation for a PopSubDep1 by PopTopDepIdx index key object.

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

#include <cfbam/CFBamPopSubDep1ByPopTopDepIdxKey.hpp>
#include <cfbam/CFBamPopSubDep1Buff.hpp>
#include <cfbam/CFBamPopSubDep1HBuff.hpp>

namespace cfbam {
	const std::string CFBamPopSubDep1ByPopTopDepIdxKey::CLASS_NAME( "CFBamPopSubDep1ByPopTopDepIdxKey" );
	const std::string CFBamPopSubDep1ByPopTopDepIdxKey::S_VALUE( "value" );
	const std::string CFBamPopSubDep1ByPopTopDepIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamPopSubDep1ByPopTopDepIdxKey::CFBamPopSubDep1ByPopTopDepIdxKey() {
		requiredPopTopDepTenantId = cfbam::CFBamPopSubDep1Buff::POPTOPDEPTENANTID_INIT_VALUE;
		requiredPopTopDepId = cfbam::CFBamPopSubDep1Buff::POPTOPDEPID_INIT_VALUE;
	}

	CFBamPopSubDep1ByPopTopDepIdxKey::CFBamPopSubDep1ByPopTopDepIdxKey( const CFBamPopSubDep1ByPopTopDepIdxKey& src ) {
		requiredPopTopDepTenantId = cfbam::CFBamPopSubDep1Buff::POPTOPDEPTENANTID_INIT_VALUE;
		requiredPopTopDepId = cfbam::CFBamPopSubDep1Buff::POPTOPDEPID_INIT_VALUE;
		setRequiredPopTopDepTenantId( src.getRequiredPopTopDepTenantId() );
		setRequiredPopTopDepId( src.getRequiredPopTopDepId() );
	}

	CFBamPopSubDep1ByPopTopDepIdxKey::~CFBamPopSubDep1ByPopTopDepIdxKey() {
	}

	const int64_t CFBamPopSubDep1ByPopTopDepIdxKey::getRequiredPopTopDepTenantId() const {
		return( requiredPopTopDepTenantId );
	}

	const int64_t* CFBamPopSubDep1ByPopTopDepIdxKey::getRequiredPopTopDepTenantIdReference() const {
		return( &requiredPopTopDepTenantId );
	}

	void CFBamPopSubDep1ByPopTopDepIdxKey::setRequiredPopTopDepTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPopTopDepTenantId" );
		if( value < cfbam::CFBamPopSubDep1Buff::POPTOPDEPTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopSubDep1Buff::POPTOPDEPTENANTID_MIN_VALUE );
		}
		requiredPopTopDepTenantId = value;
	}

	const int64_t CFBamPopSubDep1ByPopTopDepIdxKey::getRequiredPopTopDepId() const {
		return( requiredPopTopDepId );
	}

	const int64_t* CFBamPopSubDep1ByPopTopDepIdxKey::getRequiredPopTopDepIdReference() const {
		return( &requiredPopTopDepId );
	}

	void CFBamPopSubDep1ByPopTopDepIdxKey::setRequiredPopTopDepId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPopTopDepId" );
		if( value < cfbam::CFBamPopSubDep1Buff::POPTOPDEPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopSubDep1Buff::POPTOPDEPID_MIN_VALUE );
		}
		requiredPopTopDepId = value;
	}

	size_t CFBamPopSubDep1ByPopTopDepIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredPopTopDepTenantId() );
		hashCode = hashCode + (int)( getRequiredPopTopDepId() );
		return( hashCode );
	}

	std::string CFBamPopSubDep1ByPopTopDepIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopSubDep1ByPopTopDepIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_PopTopDepTenantId( "PopTopDepTenantId" );
		static const std::string S_PopTopDepId( "PopTopDepId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopTopDepTenantId, getRequiredPopTopDepTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopTopDepId, getRequiredPopTopDepId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator <( const CFBamPopSubDep1ByPopTopDepIdxKey& rhs ) {
		if( getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator <( const CFBamPopSubDep1HBuff& rhs ) {
		if( getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator <( const CFBamPopSubDep1Buff& rhs ) {
		if( getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator <=( const CFBamPopSubDep1ByPopTopDepIdxKey& rhs ) {
		if( getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator <=( const CFBamPopSubDep1HBuff& rhs ) {
		if( getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator <=( const CFBamPopSubDep1Buff& rhs ) {
		if( getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator ==( const CFBamPopSubDep1ByPopTopDepIdxKey& rhs ) {
		if( getRequiredPopTopDepTenantId() != rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredPopTopDepId() != rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator ==( const CFBamPopSubDep1HBuff& rhs ) {
		if( getRequiredPopTopDepTenantId() != rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredPopTopDepId() != rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator ==( const CFBamPopSubDep1Buff& rhs ) {
		if( getRequiredPopTopDepTenantId() != rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredPopTopDepId() != rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator !=( const CFBamPopSubDep1ByPopTopDepIdxKey& rhs ) {
		if( getRequiredPopTopDepTenantId() != rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() != rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator !=( const CFBamPopSubDep1HBuff& rhs ) {
		if( getRequiredPopTopDepTenantId() != rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() != rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator !=( const CFBamPopSubDep1Buff& rhs ) {
		if( getRequiredPopTopDepTenantId() != rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() != rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator >=( const CFBamPopSubDep1ByPopTopDepIdxKey& rhs ) {
		if( getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator >=( const CFBamPopSubDep1HBuff& rhs ) {
		if( getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator >=( const CFBamPopSubDep1Buff& rhs ) {
		if( getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator >( const CFBamPopSubDep1ByPopTopDepIdxKey& rhs ) {
		if( getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator >( const CFBamPopSubDep1HBuff& rhs ) {
		if( getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep1ByPopTopDepIdxKey::operator >( const CFBamPopSubDep1Buff& rhs ) {
		if( getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}
	CFBamPopSubDep1ByPopTopDepIdxKey CFBamPopSubDep1ByPopTopDepIdxKey::operator =( cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& src ) {
		setRequiredPopTopDepTenantId( src.getRequiredPopTopDepTenantId() );
		setRequiredPopTopDepId( src.getRequiredPopTopDepId() );
		return( *this );
	}

	CFBamPopSubDep1ByPopTopDepIdxKey CFBamPopSubDep1ByPopTopDepIdxKey::operator =( cfbam::CFBamPopSubDep1Buff& src ) {
		setRequiredPopTopDepTenantId( src.getRequiredPopTopDepTenantId() );
		setRequiredPopTopDepId( src.getRequiredPopTopDepId() );
		return( *this );
	}

	CFBamPopSubDep1ByPopTopDepIdxKey CFBamPopSubDep1ByPopTopDepIdxKey::operator =( cfbam::CFBamPopSubDep1HBuff& src ) {
		setRequiredPopTopDepTenantId( src.getRequiredPopTopDepTenantId() );
		setRequiredPopTopDepId( src.getRequiredPopTopDepId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1HBuff& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1Buff& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1HBuff& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1Buff& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() != rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopTopDepId() != rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1HBuff& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() != rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopTopDepId() != rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1Buff& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() != rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopTopDepId() != rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() != rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() != rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1HBuff& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() != rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() != rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1Buff& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() != rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() != rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1HBuff& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1Buff& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1HBuff& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamPopSubDep1ByPopTopDepIdxKey& lhs, const cfbam::CFBamPopSubDep1Buff& rhs ) {
		if( lhs.getRequiredPopTopDepTenantId() < rhs.getRequiredPopTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepTenantId() > rhs.getRequiredPopTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopTopDepId() < rhs.getRequiredPopTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopTopDepId() > rhs.getRequiredPopTopDepId() ) {
			return( true );
		}
		return( false );
	}
}

