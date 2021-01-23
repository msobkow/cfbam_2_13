// Description: C++18 implementation for a ClearSubDep3 by ClearSubDep2Idx index key object.

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

#include <cfbam/CFBamClearSubDep3ByClearSubDep2IdxKey.hpp>
#include <cfbam/CFBamClearSubDep3Buff.hpp>
#include <cfbam/CFBamClearSubDep3HBuff.hpp>

namespace cfbam {
	const std::string CFBamClearSubDep3ByClearSubDep2IdxKey::CLASS_NAME( "CFBamClearSubDep3ByClearSubDep2IdxKey" );
	const std::string CFBamClearSubDep3ByClearSubDep2IdxKey::S_VALUE( "value" );
	const std::string CFBamClearSubDep3ByClearSubDep2IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamClearSubDep3ByClearSubDep2IdxKey::CFBamClearSubDep3ByClearSubDep2IdxKey() {
		requiredClearSubDep2TenantId = cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2TENANTID_INIT_VALUE;
		requiredClearSubDep2Id = cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2ID_INIT_VALUE;
	}

	CFBamClearSubDep3ByClearSubDep2IdxKey::CFBamClearSubDep3ByClearSubDep2IdxKey( const CFBamClearSubDep3ByClearSubDep2IdxKey& src ) {
		requiredClearSubDep2TenantId = cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2TENANTID_INIT_VALUE;
		requiredClearSubDep2Id = cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2ID_INIT_VALUE;
		setRequiredClearSubDep2TenantId( src.getRequiredClearSubDep2TenantId() );
		setRequiredClearSubDep2Id( src.getRequiredClearSubDep2Id() );
	}

	CFBamClearSubDep3ByClearSubDep2IdxKey::~CFBamClearSubDep3ByClearSubDep2IdxKey() {
	}

	const int64_t CFBamClearSubDep3ByClearSubDep2IdxKey::getRequiredClearSubDep2TenantId() const {
		return( requiredClearSubDep2TenantId );
	}

	const int64_t* CFBamClearSubDep3ByClearSubDep2IdxKey::getRequiredClearSubDep2TenantIdReference() const {
		return( &requiredClearSubDep2TenantId );
	}

	void CFBamClearSubDep3ByClearSubDep2IdxKey::setRequiredClearSubDep2TenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearSubDep2TenantId" );
		if( value < cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2TENANTID_MIN_VALUE );
		}
		requiredClearSubDep2TenantId = value;
	}

	const int64_t CFBamClearSubDep3ByClearSubDep2IdxKey::getRequiredClearSubDep2Id() const {
		return( requiredClearSubDep2Id );
	}

	const int64_t* CFBamClearSubDep3ByClearSubDep2IdxKey::getRequiredClearSubDep2IdReference() const {
		return( &requiredClearSubDep2Id );
	}

	void CFBamClearSubDep3ByClearSubDep2IdxKey::setRequiredClearSubDep2Id( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearSubDep2Id" );
		if( value < cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2ID_MIN_VALUE );
		}
		requiredClearSubDep2Id = value;
	}

	size_t CFBamClearSubDep3ByClearSubDep2IdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClearSubDep2TenantId() );
		hashCode = hashCode + (int)( getRequiredClearSubDep2Id() );
		return( hashCode );
	}

	std::string CFBamClearSubDep3ByClearSubDep2IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearSubDep3ByClearSubDep2IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClearSubDep2TenantId( "ClearSubDep2TenantId" );
		static const std::string S_ClearSubDep2Id( "ClearSubDep2Id" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep2TenantId, getRequiredClearSubDep2TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep2Id, getRequiredClearSubDep2Id() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator <( const CFBamClearSubDep3ByClearSubDep2IdxKey& rhs ) {
		if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator <( const CFBamClearSubDep3HBuff& rhs ) {
		if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator <( const CFBamClearSubDep3Buff& rhs ) {
		if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator <=( const CFBamClearSubDep3ByClearSubDep2IdxKey& rhs ) {
		if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator <=( const CFBamClearSubDep3HBuff& rhs ) {
		if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator <=( const CFBamClearSubDep3Buff& rhs ) {
		if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator ==( const CFBamClearSubDep3ByClearSubDep2IdxKey& rhs ) {
		if( getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator ==( const CFBamClearSubDep3HBuff& rhs ) {
		if( getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator ==( const CFBamClearSubDep3Buff& rhs ) {
		if( getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator !=( const CFBamClearSubDep3ByClearSubDep2IdxKey& rhs ) {
		if( getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator !=( const CFBamClearSubDep3HBuff& rhs ) {
		if( getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator !=( const CFBamClearSubDep3Buff& rhs ) {
		if( getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator >=( const CFBamClearSubDep3ByClearSubDep2IdxKey& rhs ) {
		if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator >=( const CFBamClearSubDep3HBuff& rhs ) {
		if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator >=( const CFBamClearSubDep3Buff& rhs ) {
		if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator >( const CFBamClearSubDep3ByClearSubDep2IdxKey& rhs ) {
		if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator >( const CFBamClearSubDep3HBuff& rhs ) {
		if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep3ByClearSubDep2IdxKey::operator >( const CFBamClearSubDep3Buff& rhs ) {
		if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}
	CFBamClearSubDep3ByClearSubDep2IdxKey CFBamClearSubDep3ByClearSubDep2IdxKey::operator =( cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& src ) {
		setRequiredClearSubDep2TenantId( src.getRequiredClearSubDep2TenantId() );
		setRequiredClearSubDep2Id( src.getRequiredClearSubDep2Id() );
		return( *this );
	}

	CFBamClearSubDep3ByClearSubDep2IdxKey CFBamClearSubDep3ByClearSubDep2IdxKey::operator =( cfbam::CFBamClearSubDep3Buff& src ) {
		setRequiredClearSubDep2TenantId( src.getRequiredClearSubDep2TenantId() );
		setRequiredClearSubDep2Id( src.getRequiredClearSubDep2Id() );
		return( *this );
	}

	CFBamClearSubDep3ByClearSubDep2IdxKey CFBamClearSubDep3ByClearSubDep2IdxKey::operator =( cfbam::CFBamClearSubDep3HBuff& src ) {
		setRequiredClearSubDep2TenantId( src.getRequiredClearSubDep2TenantId() );
		setRequiredClearSubDep2Id( src.getRequiredClearSubDep2Id() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		return( false );
	}
}

