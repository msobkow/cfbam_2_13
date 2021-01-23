// Description: C++18 implementation for a ClearSubDep2 by ClearSubDep1Idx index key object.

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

#include <cfbam/CFBamClearSubDep2ByClearSubDep1IdxKey.hpp>
#include <cfbam/CFBamClearSubDep2Buff.hpp>
#include <cfbam/CFBamClearSubDep2HBuff.hpp>

namespace cfbam {
	const std::string CFBamClearSubDep2ByClearSubDep1IdxKey::CLASS_NAME( "CFBamClearSubDep2ByClearSubDep1IdxKey" );
	const std::string CFBamClearSubDep2ByClearSubDep1IdxKey::S_VALUE( "value" );
	const std::string CFBamClearSubDep2ByClearSubDep1IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamClearSubDep2ByClearSubDep1IdxKey::CFBamClearSubDep2ByClearSubDep1IdxKey() {
		requiredClearSubDep1TenantId = cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1TENANTID_INIT_VALUE;
		requiredClearSubDep1Id = cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1ID_INIT_VALUE;
	}

	CFBamClearSubDep2ByClearSubDep1IdxKey::CFBamClearSubDep2ByClearSubDep1IdxKey( const CFBamClearSubDep2ByClearSubDep1IdxKey& src ) {
		requiredClearSubDep1TenantId = cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1TENANTID_INIT_VALUE;
		requiredClearSubDep1Id = cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1ID_INIT_VALUE;
		setRequiredClearSubDep1TenantId( src.getRequiredClearSubDep1TenantId() );
		setRequiredClearSubDep1Id( src.getRequiredClearSubDep1Id() );
	}

	CFBamClearSubDep2ByClearSubDep1IdxKey::~CFBamClearSubDep2ByClearSubDep1IdxKey() {
	}

	const int64_t CFBamClearSubDep2ByClearSubDep1IdxKey::getRequiredClearSubDep1TenantId() const {
		return( requiredClearSubDep1TenantId );
	}

	const int64_t* CFBamClearSubDep2ByClearSubDep1IdxKey::getRequiredClearSubDep1TenantIdReference() const {
		return( &requiredClearSubDep1TenantId );
	}

	void CFBamClearSubDep2ByClearSubDep1IdxKey::setRequiredClearSubDep1TenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearSubDep1TenantId" );
		if( value < cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1TENANTID_MIN_VALUE );
		}
		requiredClearSubDep1TenantId = value;
	}

	const int64_t CFBamClearSubDep2ByClearSubDep1IdxKey::getRequiredClearSubDep1Id() const {
		return( requiredClearSubDep1Id );
	}

	const int64_t* CFBamClearSubDep2ByClearSubDep1IdxKey::getRequiredClearSubDep1IdReference() const {
		return( &requiredClearSubDep1Id );
	}

	void CFBamClearSubDep2ByClearSubDep1IdxKey::setRequiredClearSubDep1Id( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearSubDep1Id" );
		if( value < cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1ID_MIN_VALUE );
		}
		requiredClearSubDep1Id = value;
	}

	size_t CFBamClearSubDep2ByClearSubDep1IdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClearSubDep1TenantId() );
		hashCode = hashCode + (int)( getRequiredClearSubDep1Id() );
		return( hashCode );
	}

	std::string CFBamClearSubDep2ByClearSubDep1IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearSubDep2ByClearSubDep1IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClearSubDep1TenantId( "ClearSubDep1TenantId" );
		static const std::string S_ClearSubDep1Id( "ClearSubDep1Id" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep1TenantId, getRequiredClearSubDep1TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep1Id, getRequiredClearSubDep1Id() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator <( const CFBamClearSubDep2ByClearSubDep1IdxKey& rhs ) {
		if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator <( const CFBamClearSubDep2HBuff& rhs ) {
		if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator <( const CFBamClearSubDep2Buff& rhs ) {
		if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator <=( const CFBamClearSubDep2ByClearSubDep1IdxKey& rhs ) {
		if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator <=( const CFBamClearSubDep2HBuff& rhs ) {
		if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator <=( const CFBamClearSubDep2Buff& rhs ) {
		if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator ==( const CFBamClearSubDep2ByClearSubDep1IdxKey& rhs ) {
		if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator ==( const CFBamClearSubDep2HBuff& rhs ) {
		if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator ==( const CFBamClearSubDep2Buff& rhs ) {
		if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator !=( const CFBamClearSubDep2ByClearSubDep1IdxKey& rhs ) {
		if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator !=( const CFBamClearSubDep2HBuff& rhs ) {
		if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator !=( const CFBamClearSubDep2Buff& rhs ) {
		if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator >=( const CFBamClearSubDep2ByClearSubDep1IdxKey& rhs ) {
		if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator >=( const CFBamClearSubDep2HBuff& rhs ) {
		if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator >=( const CFBamClearSubDep2Buff& rhs ) {
		if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator >( const CFBamClearSubDep2ByClearSubDep1IdxKey& rhs ) {
		if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator >( const CFBamClearSubDep2HBuff& rhs ) {
		if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep2ByClearSubDep1IdxKey::operator >( const CFBamClearSubDep2Buff& rhs ) {
		if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}
	CFBamClearSubDep2ByClearSubDep1IdxKey CFBamClearSubDep2ByClearSubDep1IdxKey::operator =( cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& src ) {
		setRequiredClearSubDep1TenantId( src.getRequiredClearSubDep1TenantId() );
		setRequiredClearSubDep1Id( src.getRequiredClearSubDep1Id() );
		return( *this );
	}

	CFBamClearSubDep2ByClearSubDep1IdxKey CFBamClearSubDep2ByClearSubDep1IdxKey::operator =( cfbam::CFBamClearSubDep2Buff& src ) {
		setRequiredClearSubDep1TenantId( src.getRequiredClearSubDep1TenantId() );
		setRequiredClearSubDep1Id( src.getRequiredClearSubDep1Id() );
		return( *this );
	}

	CFBamClearSubDep2ByClearSubDep1IdxKey CFBamClearSubDep2ByClearSubDep1IdxKey::operator =( cfbam::CFBamClearSubDep2HBuff& src ) {
		setRequiredClearSubDep1TenantId( src.getRequiredClearSubDep1TenantId() );
		setRequiredClearSubDep1Id( src.getRequiredClearSubDep1Id() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2Buff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2Buff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2Buff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2Buff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2Buff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey& lhs, const cfbam::CFBamClearSubDep2Buff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		return( false );
	}
}

