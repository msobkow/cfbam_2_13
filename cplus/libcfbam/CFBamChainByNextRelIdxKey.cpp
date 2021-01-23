// Description: C++18 implementation for a Chain by NextRelIdx index key object.

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

#include <cfbam/CFBamChainByNextRelIdxKey.hpp>
#include <cfbam/CFBamChainBuff.hpp>
#include <cfbam/CFBamChainHBuff.hpp>

namespace cfbam {
	const std::string CFBamChainByNextRelIdxKey::CLASS_NAME( "CFBamChainByNextRelIdxKey" );
	const std::string CFBamChainByNextRelIdxKey::S_VALUE( "value" );
	const std::string CFBamChainByNextRelIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamChainByNextRelIdxKey::CFBamChainByNextRelIdxKey() {
		requiredNextRelationTenantId = cfbam::CFBamChainBuff::NEXTRELATIONTENANTID_INIT_VALUE;
		requiredNextRelationId = cfbam::CFBamChainBuff::NEXTRELATIONID_INIT_VALUE;
	}

	CFBamChainByNextRelIdxKey::CFBamChainByNextRelIdxKey( const CFBamChainByNextRelIdxKey& src ) {
		requiredNextRelationTenantId = cfbam::CFBamChainBuff::NEXTRELATIONTENANTID_INIT_VALUE;
		requiredNextRelationId = cfbam::CFBamChainBuff::NEXTRELATIONID_INIT_VALUE;
		setRequiredNextRelationTenantId( src.getRequiredNextRelationTenantId() );
		setRequiredNextRelationId( src.getRequiredNextRelationId() );
	}

	CFBamChainByNextRelIdxKey::~CFBamChainByNextRelIdxKey() {
	}

	const int64_t CFBamChainByNextRelIdxKey::getRequiredNextRelationTenantId() const {
		return( requiredNextRelationTenantId );
	}

	const int64_t* CFBamChainByNextRelIdxKey::getRequiredNextRelationTenantIdReference() const {
		return( &requiredNextRelationTenantId );
	}

	void CFBamChainByNextRelIdxKey::setRequiredNextRelationTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredNextRelationTenantId" );
		if( value < cfbam::CFBamChainBuff::NEXTRELATIONTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::NEXTRELATIONTENANTID_MIN_VALUE );
		}
		requiredNextRelationTenantId = value;
	}

	const int64_t CFBamChainByNextRelIdxKey::getRequiredNextRelationId() const {
		return( requiredNextRelationId );
	}

	const int64_t* CFBamChainByNextRelIdxKey::getRequiredNextRelationIdReference() const {
		return( &requiredNextRelationId );
	}

	void CFBamChainByNextRelIdxKey::setRequiredNextRelationId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredNextRelationId" );
		if( value < cfbam::CFBamChainBuff::NEXTRELATIONID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamChainBuff::NEXTRELATIONID_MIN_VALUE );
		}
		requiredNextRelationId = value;
	}

	size_t CFBamChainByNextRelIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredNextRelationTenantId() );
		hashCode = hashCode + (int)( getRequiredNextRelationId() );
		return( hashCode );
	}

	std::string CFBamChainByNextRelIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamChainByNextRelIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_NextRelationTenantId( "NextRelationTenantId" );
		static const std::string S_NextRelationId( "NextRelationId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextRelationTenantId, getRequiredNextRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextRelationId, getRequiredNextRelationId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamChainByNextRelIdxKey::operator <( const CFBamChainByNextRelIdxKey& rhs ) {
		if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByNextRelIdxKey::operator <( const CFBamChainHBuff& rhs ) {
		if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByNextRelIdxKey::operator <( const CFBamChainBuff& rhs ) {
		if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByNextRelIdxKey::operator <=( const CFBamChainByNextRelIdxKey& rhs ) {
		if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainByNextRelIdxKey::operator <=( const CFBamChainHBuff& rhs ) {
		if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainByNextRelIdxKey::operator <=( const CFBamChainBuff& rhs ) {
		if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainByNextRelIdxKey::operator ==( const CFBamChainByNextRelIdxKey& rhs ) {
		if( getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		if( getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainByNextRelIdxKey::operator ==( const CFBamChainHBuff& rhs ) {
		if( getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		if( getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainByNextRelIdxKey::operator ==( const CFBamChainBuff& rhs ) {
		if( getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		if( getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamChainByNextRelIdxKey::operator !=( const CFBamChainByNextRelIdxKey& rhs ) {
		if( getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByNextRelIdxKey::operator !=( const CFBamChainHBuff& rhs ) {
		if( getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByNextRelIdxKey::operator !=( const CFBamChainBuff& rhs ) {
		if( getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByNextRelIdxKey::operator >=( const CFBamChainByNextRelIdxKey& rhs ) {
		if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainByNextRelIdxKey::operator >=( const CFBamChainHBuff& rhs ) {
		if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainByNextRelIdxKey::operator >=( const CFBamChainBuff& rhs ) {
		if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamChainByNextRelIdxKey::operator >( const CFBamChainByNextRelIdxKey& rhs ) {
		if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByNextRelIdxKey::operator >( const CFBamChainHBuff& rhs ) {
		if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamChainByNextRelIdxKey::operator >( const CFBamChainBuff& rhs ) {
		if( getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}
	CFBamChainByNextRelIdxKey CFBamChainByNextRelIdxKey::operator =( cfbam::CFBamChainByNextRelIdxKey& src ) {
		setRequiredNextRelationTenantId( src.getRequiredNextRelationTenantId() );
		setRequiredNextRelationId( src.getRequiredNextRelationId() );
		return( *this );
	}

	CFBamChainByNextRelIdxKey CFBamChainByNextRelIdxKey::operator =( cfbam::CFBamChainBuff& src ) {
		setRequiredNextRelationTenantId( src.getRequiredNextRelationTenantId() );
		setRequiredNextRelationId( src.getRequiredNextRelationId() );
		return( *this );
	}

	CFBamChainByNextRelIdxKey CFBamChainByNextRelIdxKey::operator =( cfbam::CFBamChainHBuff& src ) {
		setRequiredNextRelationTenantId( src.getRequiredNextRelationTenantId() );
		setRequiredNextRelationId( src.getRequiredNextRelationId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() != rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() != rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs ) {
		if( lhs.getRequiredNextRelationTenantId() < rhs.getRequiredNextRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationTenantId() > rhs.getRequiredNextRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredNextRelationId() < rhs.getRequiredNextRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredNextRelationId() > rhs.getRequiredNextRelationId() ) {
			return( true );
		}
		return( false );
	}
}

