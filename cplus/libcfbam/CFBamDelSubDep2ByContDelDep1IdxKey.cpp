// Description: C++18 implementation for a DelSubDep2 by ContDelDep1Idx index key object.

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

#include <cfbam/CFBamDelSubDep2ByContDelDep1IdxKey.hpp>
#include <cfbam/CFBamDelSubDep2Buff.hpp>
#include <cfbam/CFBamDelSubDep2HBuff.hpp>

namespace cfbam {
	const std::string CFBamDelSubDep2ByContDelDep1IdxKey::CLASS_NAME( "CFBamDelSubDep2ByContDelDep1IdxKey" );
	const std::string CFBamDelSubDep2ByContDelDep1IdxKey::S_VALUE( "value" );
	const std::string CFBamDelSubDep2ByContDelDep1IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamDelSubDep2ByContDelDep1IdxKey::CFBamDelSubDep2ByContDelDep1IdxKey() {
		requiredDelSubDep1TenantId = cfbam::CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_INIT_VALUE;
		requiredDelSubDep1Id = cfbam::CFBamDelSubDep2Buff::DELSUBDEP1ID_INIT_VALUE;
	}

	CFBamDelSubDep2ByContDelDep1IdxKey::CFBamDelSubDep2ByContDelDep1IdxKey( const CFBamDelSubDep2ByContDelDep1IdxKey& src ) {
		requiredDelSubDep1TenantId = cfbam::CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_INIT_VALUE;
		requiredDelSubDep1Id = cfbam::CFBamDelSubDep2Buff::DELSUBDEP1ID_INIT_VALUE;
		setRequiredDelSubDep1TenantId( src.getRequiredDelSubDep1TenantId() );
		setRequiredDelSubDep1Id( src.getRequiredDelSubDep1Id() );
	}

	CFBamDelSubDep2ByContDelDep1IdxKey::~CFBamDelSubDep2ByContDelDep1IdxKey() {
	}

	const int64_t CFBamDelSubDep2ByContDelDep1IdxKey::getRequiredDelSubDep1TenantId() const {
		return( requiredDelSubDep1TenantId );
	}

	const int64_t* CFBamDelSubDep2ByContDelDep1IdxKey::getRequiredDelSubDep1TenantIdReference() const {
		return( &requiredDelSubDep1TenantId );
	}

	void CFBamDelSubDep2ByContDelDep1IdxKey::setRequiredDelSubDep1TenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredDelSubDep1TenantId" );
		if( value < cfbam::CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_MIN_VALUE );
		}
		requiredDelSubDep1TenantId = value;
	}

	const int64_t CFBamDelSubDep2ByContDelDep1IdxKey::getRequiredDelSubDep1Id() const {
		return( requiredDelSubDep1Id );
	}

	const int64_t* CFBamDelSubDep2ByContDelDep1IdxKey::getRequiredDelSubDep1IdReference() const {
		return( &requiredDelSubDep1Id );
	}

	void CFBamDelSubDep2ByContDelDep1IdxKey::setRequiredDelSubDep1Id( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredDelSubDep1Id" );
		if( value < cfbam::CFBamDelSubDep2Buff::DELSUBDEP1ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelSubDep2Buff::DELSUBDEP1ID_MIN_VALUE );
		}
		requiredDelSubDep1Id = value;
	}

	size_t CFBamDelSubDep2ByContDelDep1IdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredDelSubDep1TenantId() );
		hashCode = hashCode + (int)( getRequiredDelSubDep1Id() );
		return( hashCode );
	}

	std::string CFBamDelSubDep2ByContDelDep1IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelSubDep2ByContDelDep1IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_DelSubDep1TenantId( "DelSubDep1TenantId" );
		static const std::string S_DelSubDep1Id( "DelSubDep1Id" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep1TenantId, getRequiredDelSubDep1TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep1Id, getRequiredDelSubDep1Id() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator <( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator <( const CFBamDelSubDep2HBuff& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator <( const CFBamDelSubDep2Buff& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator <=( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator <=( const CFBamDelSubDep2HBuff& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator <=( const CFBamDelSubDep2Buff& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator ==( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator ==( const CFBamDelSubDep2HBuff& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator ==( const CFBamDelSubDep2Buff& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator !=( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator !=( const CFBamDelSubDep2HBuff& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator !=( const CFBamDelSubDep2Buff& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator >=( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator >=( const CFBamDelSubDep2HBuff& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator >=( const CFBamDelSubDep2Buff& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator >( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator >( const CFBamDelSubDep2HBuff& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2ByContDelDep1IdxKey::operator >( const CFBamDelSubDep2Buff& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}
	CFBamDelSubDep2ByContDelDep1IdxKey CFBamDelSubDep2ByContDelDep1IdxKey::operator =( cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& src ) {
		setRequiredDelSubDep1TenantId( src.getRequiredDelSubDep1TenantId() );
		setRequiredDelSubDep1Id( src.getRequiredDelSubDep1Id() );
		return( *this );
	}

	CFBamDelSubDep2ByContDelDep1IdxKey CFBamDelSubDep2ByContDelDep1IdxKey::operator =( cfbam::CFBamDelSubDep2Buff& src ) {
		setRequiredDelSubDep1TenantId( src.getRequiredDelSubDep1TenantId() );
		setRequiredDelSubDep1Id( src.getRequiredDelSubDep1Id() );
		return( *this );
	}

	CFBamDelSubDep2ByContDelDep1IdxKey CFBamDelSubDep2ByContDelDep1IdxKey::operator =( cfbam::CFBamDelSubDep2HBuff& src ) {
		setRequiredDelSubDep1TenantId( src.getRequiredDelSubDep1TenantId() );
		setRequiredDelSubDep1Id( src.getRequiredDelSubDep1Id() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		return( false );
	}
}

