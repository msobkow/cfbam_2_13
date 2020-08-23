// Description: C++18 implementation for a DelSubDep3 by DelSubDep2Idx index key object.

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

#include <cfbam/CFBamDelSubDep3ByDelSubDep2IdxKey.hpp>
#include <cfbam/CFBamDelSubDep3Buff.hpp>
#include <cfbam/CFBamDelSubDep3HBuff.hpp>

namespace cfbam {
	const std::string CFBamDelSubDep3ByDelSubDep2IdxKey::CLASS_NAME( "CFBamDelSubDep3ByDelSubDep2IdxKey" );
	const std::string CFBamDelSubDep3ByDelSubDep2IdxKey::S_VALUE( "value" );
	const std::string CFBamDelSubDep3ByDelSubDep2IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamDelSubDep3ByDelSubDep2IdxKey::CFBamDelSubDep3ByDelSubDep2IdxKey() {
		requiredDelSubDep2TenantId = cfbam::CFBamDelSubDep3Buff::DELSUBDEP2TENANTID_INIT_VALUE;
		requiredDelSubDep2Id = cfbam::CFBamDelSubDep3Buff::DELSUBDEP2ID_INIT_VALUE;
	}

	CFBamDelSubDep3ByDelSubDep2IdxKey::CFBamDelSubDep3ByDelSubDep2IdxKey( const CFBamDelSubDep3ByDelSubDep2IdxKey& src ) {
		requiredDelSubDep2TenantId = cfbam::CFBamDelSubDep3Buff::DELSUBDEP2TENANTID_INIT_VALUE;
		requiredDelSubDep2Id = cfbam::CFBamDelSubDep3Buff::DELSUBDEP2ID_INIT_VALUE;
		setRequiredDelSubDep2TenantId( src.getRequiredDelSubDep2TenantId() );
		setRequiredDelSubDep2Id( src.getRequiredDelSubDep2Id() );
	}

	CFBamDelSubDep3ByDelSubDep2IdxKey::~CFBamDelSubDep3ByDelSubDep2IdxKey() {
	}

	const int64_t CFBamDelSubDep3ByDelSubDep2IdxKey::getRequiredDelSubDep2TenantId() const {
		return( requiredDelSubDep2TenantId );
	}

	const int64_t* CFBamDelSubDep3ByDelSubDep2IdxKey::getRequiredDelSubDep2TenantIdReference() const {
		return( &requiredDelSubDep2TenantId );
	}

	void CFBamDelSubDep3ByDelSubDep2IdxKey::setRequiredDelSubDep2TenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredDelSubDep2TenantId" );
		if( value < cfbam::CFBamDelSubDep3Buff::DELSUBDEP2TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelSubDep3Buff::DELSUBDEP2TENANTID_MIN_VALUE );
		}
		requiredDelSubDep2TenantId = value;
	}

	const int64_t CFBamDelSubDep3ByDelSubDep2IdxKey::getRequiredDelSubDep2Id() const {
		return( requiredDelSubDep2Id );
	}

	const int64_t* CFBamDelSubDep3ByDelSubDep2IdxKey::getRequiredDelSubDep2IdReference() const {
		return( &requiredDelSubDep2Id );
	}

	void CFBamDelSubDep3ByDelSubDep2IdxKey::setRequiredDelSubDep2Id( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredDelSubDep2Id" );
		if( value < cfbam::CFBamDelSubDep3Buff::DELSUBDEP2ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelSubDep3Buff::DELSUBDEP2ID_MIN_VALUE );
		}
		requiredDelSubDep2Id = value;
	}

	size_t CFBamDelSubDep3ByDelSubDep2IdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredDelSubDep2TenantId() );
		hashCode = hashCode + (int)( getRequiredDelSubDep2Id() );
		return( hashCode );
	}

	std::string CFBamDelSubDep3ByDelSubDep2IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelSubDep3ByDelSubDep2IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_DelSubDep2TenantId( "DelSubDep2TenantId" );
		static const std::string S_DelSubDep2Id( "DelSubDep2Id" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep2TenantId, getRequiredDelSubDep2TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep2Id, getRequiredDelSubDep2Id() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator <( const CFBamDelSubDep3ByDelSubDep2IdxKey& rhs ) {
		if( getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator <( const CFBamDelSubDep3HBuff& rhs ) {
		if( getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator <( const CFBamDelSubDep3Buff& rhs ) {
		if( getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator <=( const CFBamDelSubDep3ByDelSubDep2IdxKey& rhs ) {
		if( getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator <=( const CFBamDelSubDep3HBuff& rhs ) {
		if( getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator <=( const CFBamDelSubDep3Buff& rhs ) {
		if( getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator ==( const CFBamDelSubDep3ByDelSubDep2IdxKey& rhs ) {
		if( getRequiredDelSubDep2TenantId() != rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep2Id() != rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator ==( const CFBamDelSubDep3HBuff& rhs ) {
		if( getRequiredDelSubDep2TenantId() != rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep2Id() != rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator ==( const CFBamDelSubDep3Buff& rhs ) {
		if( getRequiredDelSubDep2TenantId() != rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep2Id() != rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator !=( const CFBamDelSubDep3ByDelSubDep2IdxKey& rhs ) {
		if( getRequiredDelSubDep2TenantId() != rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() != rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator !=( const CFBamDelSubDep3HBuff& rhs ) {
		if( getRequiredDelSubDep2TenantId() != rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() != rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator !=( const CFBamDelSubDep3Buff& rhs ) {
		if( getRequiredDelSubDep2TenantId() != rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() != rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator >=( const CFBamDelSubDep3ByDelSubDep2IdxKey& rhs ) {
		if( getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator >=( const CFBamDelSubDep3HBuff& rhs ) {
		if( getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator >=( const CFBamDelSubDep3Buff& rhs ) {
		if( getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator >( const CFBamDelSubDep3ByDelSubDep2IdxKey& rhs ) {
		if( getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator >( const CFBamDelSubDep3HBuff& rhs ) {
		if( getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep3ByDelSubDep2IdxKey::operator >( const CFBamDelSubDep3Buff& rhs ) {
		if( getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}
	CFBamDelSubDep3ByDelSubDep2IdxKey CFBamDelSubDep3ByDelSubDep2IdxKey::operator =( cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& src ) {
		setRequiredDelSubDep2TenantId( src.getRequiredDelSubDep2TenantId() );
		setRequiredDelSubDep2Id( src.getRequiredDelSubDep2Id() );
		return( *this );
	}

	CFBamDelSubDep3ByDelSubDep2IdxKey CFBamDelSubDep3ByDelSubDep2IdxKey::operator =( cfbam::CFBamDelSubDep3Buff& src ) {
		setRequiredDelSubDep2TenantId( src.getRequiredDelSubDep2TenantId() );
		setRequiredDelSubDep2Id( src.getRequiredDelSubDep2Id() );
		return( *this );
	}

	CFBamDelSubDep3ByDelSubDep2IdxKey CFBamDelSubDep3ByDelSubDep2IdxKey::operator =( cfbam::CFBamDelSubDep3HBuff& src ) {
		setRequiredDelSubDep2TenantId( src.getRequiredDelSubDep2TenantId() );
		setRequiredDelSubDep2Id( src.getRequiredDelSubDep2Id() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3Buff& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3Buff& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() != rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep2Id() != rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() != rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep2Id() != rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3Buff& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() != rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep2Id() != rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() != rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() != rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() != rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() != rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3Buff& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() != rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() != rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3Buff& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDelSubDep3ByDelSubDep2IdxKey& lhs, const cfbam::CFBamDelSubDep3Buff& rhs ) {
		if( lhs.getRequiredDelSubDep2TenantId() < rhs.getRequiredDelSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2TenantId() > rhs.getRequiredDelSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep2Id() < rhs.getRequiredDelSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep2Id() > rhs.getRequiredDelSubDep2Id() ) {
			return( true );
		}
		return( false );
	}
}

