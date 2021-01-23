// Description: C++18 implementation for a Chain by PrevRelIdx index key object.

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

#include <cfbam/CFBamChainByPrevRelIdxKey.hpp>
#include <cfbam/CFBamChainBuff.hpp>
#include <cfbam/CFBamChainHBuff.hpp>

namespace cfbam {
	const std::string CFBamChainByPrevRelIdxKey::CLASS_NAME( "CFBamChainByPrevRelIdxKey" );
	const std::string CFBamChainByPrevRelIdxKey::S_VALUE( "value" );
	const std::string CFBamChainByPrevRelIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamChainByPrevRelIdxKey::CFBamChainByPrevRelIdxKey() {
		requiredPrevRelationTenantId = cfbam::CFBamChainBuff::PREVRELATIONTENANTID_INIT_VALUE;
		requiredPrevRelationId = cfbam::CFBamChainBuff::PREVRELATIONID_INIT_VALUE;
	}

	CFBamChainByPrevRelIdxKey::CFBamChainByPrevRelIdxKey( const CFBamChainByPrevRelIdxKey& src ) {
		requiredPrevRelationTenantId = cfbam::CFBamChainBuff::PREVRELATIONTENANTID_INIT_VALUE;
		requiredPrevRelationId = cfbam::CFBamChainBuff::PREVRELATIONID_INIT_VALUE;
		setRequiredPrevRelationTenantId( src.getRequiredPrevRelationTenantId() );
		setRequiredPrevRelationId( src.getRequiredPrevRelationId() );
	}

	CFBamChainByPrevRelIdxKey::~CFBamChainByPrevRelIdxKey() {
	}

	const int64_t CFBamChainByPrevRelIdxKey::getRequiredPrevRelationTenantId() const {
		return( requiredPrevRelationTenantId );
	}

	const int64_t* CFBamChainByPrevRelIdxKey::getRequiredPrevRelationTenantIdReference() const {
		return( &requiredPrevRelationTenantId );
	}

	void CFBamChainByPrevRelIdxKey::setRequiredPrevRelationTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPrevRelationTenantId" );
		if( value < cfbam::CFBamChainBuff::PREVRELATIONTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::PREVRELATIONTENANTID_MIN_VALUE );
		}
		requiredPrevRelationTenantId = value;
	}

	const int64_t CFBamChainByPrevRelIdxKey::getRequiredPrevRelationId() const {
		return( requiredPrevRelationId );
	}

	const int64_t* CFBamChainByPrevRelIdxKey::getRequiredPrevRelationIdReference() const {
		return( &requiredPrevRelationId );
	}

	void CFBamChainByPrevRelIdxKey::setRequiredPrevRelationId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPrevRelationId" );
		if( value < cfbam::CFBamChainBuff::PREVRELATIONID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::PREVRELATIONID_MIN_VALUE );
		}
		requiredPrevRelationId = value;
	}

	size_t CFBamChainByPrevRelIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredPrevRelationTenantId() );
		hashCode = hashCode + (int)( getRequiredPrevRelationId() );
		return( hashCode );
	}

	std::string CFBamChainByPrevRelIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamChainByPrevRelIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_PrevRelationTenantId( "PrevRelationTenantId" );
		static const std::string S_PrevRelationId( "PrevRelationId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevRelationTenantId, getRequiredPrevRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevRelationId, getRequiredPrevRelationId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamChainByPrevRelIdxKey::operator <( const CFBamChainByPrevRelIdxKey& rhs ) {
		if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByPrevRelIdxKey::operator <( const CFBamChainHBuff& rhs ) {
		if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByPrevRelIdxKey::operator <( const CFBamChainBuff& rhs ) {
		if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByPrevRelIdxKey::operator <=( const CFBamChainByPrevRelIdxKey& rhs ) {
		if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainByPrevRelIdxKey::operator <=( const CFBamChainHBuff& rhs ) {
		if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainByPrevRelIdxKey::operator <=( const CFBamChainBuff& rhs ) {
		if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainByPrevRelIdxKey::operator ==( const CFBamChainByPrevRelIdxKey& rhs ) {
		if( getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		if( getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainByPrevRelIdxKey::operator ==( const CFBamChainHBuff& rhs ) {
		if( getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		if( getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainByPrevRelIdxKey::operator ==( const CFBamChainBuff& rhs ) {
		if( getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		if( getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainByPrevRelIdxKey::operator !=( const CFBamChainByPrevRelIdxKey& rhs ) {
		if( getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByPrevRelIdxKey::operator !=( const CFBamChainHBuff& rhs ) {
		if( getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByPrevRelIdxKey::operator !=( const CFBamChainBuff& rhs ) {
		if( getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByPrevRelIdxKey::operator >=( const CFBamChainByPrevRelIdxKey& rhs ) {
		if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainByPrevRelIdxKey::operator >=( const CFBamChainHBuff& rhs ) {
		if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainByPrevRelIdxKey::operator >=( const CFBamChainBuff& rhs ) {
		if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainByPrevRelIdxKey::operator >( const CFBamChainByPrevRelIdxKey& rhs ) {
		if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByPrevRelIdxKey::operator >( const CFBamChainHBuff& rhs ) {
		if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByPrevRelIdxKey::operator >( const CFBamChainBuff& rhs ) {
		if( getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}
	CFBamChainByPrevRelIdxKey CFBamChainByPrevRelIdxKey::operator =( cfbam::CFBamChainByPrevRelIdxKey& src ) {
		setRequiredPrevRelationTenantId( src.getRequiredPrevRelationTenantId() );
		setRequiredPrevRelationId( src.getRequiredPrevRelationId() );
		return( *this );
	}

	CFBamChainByPrevRelIdxKey CFBamChainByPrevRelIdxKey::operator =( cfbam::CFBamChainBuff& src ) {
		setRequiredPrevRelationTenantId( src.getRequiredPrevRelationTenantId() );
		setRequiredPrevRelationId( src.getRequiredPrevRelationId() );
		return( *this );
	}

	CFBamChainByPrevRelIdxKey CFBamChainByPrevRelIdxKey::operator =( cfbam::CFBamChainHBuff& src ) {
		setRequiredPrevRelationTenantId( src.getRequiredPrevRelationTenantId() );
		setRequiredPrevRelationId( src.getRequiredPrevRelationId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() != rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() != rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamChainByPrevRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredPrevRelationTenantId() < rhs.getRequiredPrevRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationTenantId() > rhs.getRequiredPrevRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPrevRelationId() < rhs.getRequiredPrevRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredPrevRelationId() > rhs.getRequiredPrevRelationId() ) {
			return( true );
		}
		return( false );
	}
}

