// Description: C++18 implementation for a PopSubDep2 by PopSubDep1Idx index key object.

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

#include <cfbam/CFBamPopSubDep2ByPopSubDep1IdxKey.hpp>
#include <cfbam/CFBamPopSubDep2Buff.hpp>
#include <cfbam/CFBamPopSubDep2HBuff.hpp>

namespace cfbam {
	const std::string CFBamPopSubDep2ByPopSubDep1IdxKey::CLASS_NAME( "CFBamPopSubDep2ByPopSubDep1IdxKey" );
	const std::string CFBamPopSubDep2ByPopSubDep1IdxKey::S_VALUE( "value" );
	const std::string CFBamPopSubDep2ByPopSubDep1IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamPopSubDep2ByPopSubDep1IdxKey::CFBamPopSubDep2ByPopSubDep1IdxKey() {
		requiredPopSubDep1TenantId = cfbam::CFBamPopSubDep2Buff::POPSUBDEP1TENANTID_INIT_VALUE;
		requiredPopSubDep1Id = cfbam::CFBamPopSubDep2Buff::POPSUBDEP1ID_INIT_VALUE;
	}

	CFBamPopSubDep2ByPopSubDep1IdxKey::CFBamPopSubDep2ByPopSubDep1IdxKey( const CFBamPopSubDep2ByPopSubDep1IdxKey& src ) {
		requiredPopSubDep1TenantId = cfbam::CFBamPopSubDep2Buff::POPSUBDEP1TENANTID_INIT_VALUE;
		requiredPopSubDep1Id = cfbam::CFBamPopSubDep2Buff::POPSUBDEP1ID_INIT_VALUE;
		setRequiredPopSubDep1TenantId( src.getRequiredPopSubDep1TenantId() );
		setRequiredPopSubDep1Id( src.getRequiredPopSubDep1Id() );
	}

	CFBamPopSubDep2ByPopSubDep1IdxKey::~CFBamPopSubDep2ByPopSubDep1IdxKey() {
	}

	const int64_t CFBamPopSubDep2ByPopSubDep1IdxKey::getRequiredPopSubDep1TenantId() const {
		return( requiredPopSubDep1TenantId );
	}

	const int64_t* CFBamPopSubDep2ByPopSubDep1IdxKey::getRequiredPopSubDep1TenantIdReference() const {
		return( &requiredPopSubDep1TenantId );
	}

	void CFBamPopSubDep2ByPopSubDep1IdxKey::setRequiredPopSubDep1TenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPopSubDep1TenantId" );
		if( value < cfbam::CFBamPopSubDep2Buff::POPSUBDEP1TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopSubDep2Buff::POPSUBDEP1TENANTID_MIN_VALUE );
		}
		requiredPopSubDep1TenantId = value;
	}

	const int64_t CFBamPopSubDep2ByPopSubDep1IdxKey::getRequiredPopSubDep1Id() const {
		return( requiredPopSubDep1Id );
	}

	const int64_t* CFBamPopSubDep2ByPopSubDep1IdxKey::getRequiredPopSubDep1IdReference() const {
		return( &requiredPopSubDep1Id );
	}

	void CFBamPopSubDep2ByPopSubDep1IdxKey::setRequiredPopSubDep1Id( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPopSubDep1Id" );
		if( value < cfbam::CFBamPopSubDep2Buff::POPSUBDEP1ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopSubDep2Buff::POPSUBDEP1ID_MIN_VALUE );
		}
		requiredPopSubDep1Id = value;
	}

	size_t CFBamPopSubDep2ByPopSubDep1IdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredPopSubDep1TenantId() );
		hashCode = hashCode + (int)( getRequiredPopSubDep1Id() );
		return( hashCode );
	}

	std::string CFBamPopSubDep2ByPopSubDep1IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopSubDep2ByPopSubDep1IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_PopSubDep1TenantId( "PopSubDep1TenantId" );
		static const std::string S_PopSubDep1Id( "PopSubDep1Id" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep1TenantId, getRequiredPopSubDep1TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep1Id, getRequiredPopSubDep1Id() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator <( const CFBamPopSubDep2ByPopSubDep1IdxKey& rhs ) {
		if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator <( const CFBamPopSubDep2HBuff& rhs ) {
		if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator <( const CFBamPopSubDep2Buff& rhs ) {
		if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator <=( const CFBamPopSubDep2ByPopSubDep1IdxKey& rhs ) {
		if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator <=( const CFBamPopSubDep2HBuff& rhs ) {
		if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator <=( const CFBamPopSubDep2Buff& rhs ) {
		if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator ==( const CFBamPopSubDep2ByPopSubDep1IdxKey& rhs ) {
		if( getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator ==( const CFBamPopSubDep2HBuff& rhs ) {
		if( getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator ==( const CFBamPopSubDep2Buff& rhs ) {
		if( getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator !=( const CFBamPopSubDep2ByPopSubDep1IdxKey& rhs ) {
		if( getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator !=( const CFBamPopSubDep2HBuff& rhs ) {
		if( getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator !=( const CFBamPopSubDep2Buff& rhs ) {
		if( getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator >=( const CFBamPopSubDep2ByPopSubDep1IdxKey& rhs ) {
		if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator >=( const CFBamPopSubDep2HBuff& rhs ) {
		if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator >=( const CFBamPopSubDep2Buff& rhs ) {
		if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator >( const CFBamPopSubDep2ByPopSubDep1IdxKey& rhs ) {
		if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator >( const CFBamPopSubDep2HBuff& rhs ) {
		if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep2ByPopSubDep1IdxKey::operator >( const CFBamPopSubDep2Buff& rhs ) {
		if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}
	CFBamPopSubDep2ByPopSubDep1IdxKey CFBamPopSubDep2ByPopSubDep1IdxKey::operator =( cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& src ) {
		setRequiredPopSubDep1TenantId( src.getRequiredPopSubDep1TenantId() );
		setRequiredPopSubDep1Id( src.getRequiredPopSubDep1Id() );
		return( *this );
	}

	CFBamPopSubDep2ByPopSubDep1IdxKey CFBamPopSubDep2ByPopSubDep1IdxKey::operator =( cfbam::CFBamPopSubDep2Buff& src ) {
		setRequiredPopSubDep1TenantId( src.getRequiredPopSubDep1TenantId() );
		setRequiredPopSubDep1Id( src.getRequiredPopSubDep1Id() );
		return( *this );
	}

	CFBamPopSubDep2ByPopSubDep1IdxKey CFBamPopSubDep2ByPopSubDep1IdxKey::operator =( cfbam::CFBamPopSubDep2HBuff& src ) {
		setRequiredPopSubDep1TenantId( src.getRequiredPopSubDep1TenantId() );
		setRequiredPopSubDep1Id( src.getRequiredPopSubDep1Id() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2Buff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2Buff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2Buff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2Buff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2Buff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& lhs, const cfbam::CFBamPopSubDep2Buff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		return( false );
	}
}

