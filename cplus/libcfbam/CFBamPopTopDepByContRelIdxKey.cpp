// Description: C++18 implementation for a PopTopDep by ContRelIdx index key object.

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

#include <cfbam/CFBamPopTopDepByContRelIdxKey.hpp>
#include <cfbam/CFBamPopTopDepBuff.hpp>
#include <cfbam/CFBamPopTopDepHBuff.hpp>

namespace cfbam {
	const std::string CFBamPopTopDepByContRelIdxKey::CLASS_NAME( "CFBamPopTopDepByContRelIdxKey" );
	const std::string CFBamPopTopDepByContRelIdxKey::S_VALUE( "value" );
	const std::string CFBamPopTopDepByContRelIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamPopTopDepByContRelIdxKey::CFBamPopTopDepByContRelIdxKey() {
		requiredContRelationTenantId = cfbam::CFBamPopTopDepBuff::CONTRELATIONTENANTID_INIT_VALUE;
		requiredContRelationId = cfbam::CFBamPopTopDepBuff::CONTRELATIONID_INIT_VALUE;
	}

	CFBamPopTopDepByContRelIdxKey::CFBamPopTopDepByContRelIdxKey( const CFBamPopTopDepByContRelIdxKey& src ) {
		requiredContRelationTenantId = cfbam::CFBamPopTopDepBuff::CONTRELATIONTENANTID_INIT_VALUE;
		requiredContRelationId = cfbam::CFBamPopTopDepBuff::CONTRELATIONID_INIT_VALUE;
		setRequiredContRelationTenantId( src.getRequiredContRelationTenantId() );
		setRequiredContRelationId( src.getRequiredContRelationId() );
	}

	CFBamPopTopDepByContRelIdxKey::~CFBamPopTopDepByContRelIdxKey() {
	}

	const int64_t CFBamPopTopDepByContRelIdxKey::getRequiredContRelationTenantId() const {
		return( requiredContRelationTenantId );
	}

	const int64_t* CFBamPopTopDepByContRelIdxKey::getRequiredContRelationTenantIdReference() const {
		return( &requiredContRelationTenantId );
	}

	void CFBamPopTopDepByContRelIdxKey::setRequiredContRelationTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredContRelationTenantId" );
		if( value < cfbam::CFBamPopTopDepBuff::CONTRELATIONTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopTopDepBuff::CONTRELATIONTENANTID_MIN_VALUE );
		}
		requiredContRelationTenantId = value;
	}

	const int64_t CFBamPopTopDepByContRelIdxKey::getRequiredContRelationId() const {
		return( requiredContRelationId );
	}

	const int64_t* CFBamPopTopDepByContRelIdxKey::getRequiredContRelationIdReference() const {
		return( &requiredContRelationId );
	}

	void CFBamPopTopDepByContRelIdxKey::setRequiredContRelationId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredContRelationId" );
		if( value < cfbam::CFBamPopTopDepBuff::CONTRELATIONID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopTopDepBuff::CONTRELATIONID_MIN_VALUE );
		}
		requiredContRelationId = value;
	}

	size_t CFBamPopTopDepByContRelIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredContRelationTenantId() );
		hashCode = hashCode + (int)( getRequiredContRelationId() );
		return( hashCode );
	}

	std::string CFBamPopTopDepByContRelIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopTopDepByContRelIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ContRelationTenantId( "ContRelationTenantId" );
		static const std::string S_ContRelationId( "ContRelationId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ContRelationTenantId, getRequiredContRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ContRelationId, getRequiredContRelationId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator <( const CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator <( const CFBamPopTopDepHBuff& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator <( const CFBamPopTopDepBuff& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator <=( const CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator <=( const CFBamPopTopDepHBuff& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator <=( const CFBamPopTopDepBuff& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator ==( const CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator ==( const CFBamPopTopDepHBuff& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator ==( const CFBamPopTopDepBuff& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator !=( const CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator !=( const CFBamPopTopDepHBuff& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator !=( const CFBamPopTopDepBuff& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator >=( const CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator >=( const CFBamPopTopDepHBuff& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator >=( const CFBamPopTopDepBuff& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator >( const CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator >( const CFBamPopTopDepHBuff& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepByContRelIdxKey::operator >( const CFBamPopTopDepBuff& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}
	CFBamPopTopDepByContRelIdxKey CFBamPopTopDepByContRelIdxKey::operator =( cfbam::CFBamPopTopDepByContRelIdxKey& src ) {
		setRequiredContRelationTenantId( src.getRequiredContRelationTenantId() );
		setRequiredContRelationId( src.getRequiredContRelationId() );
		return( *this );
	}

	CFBamPopTopDepByContRelIdxKey CFBamPopTopDepByContRelIdxKey::operator =( cfbam::CFBamPopTopDepBuff& src ) {
		setRequiredContRelationTenantId( src.getRequiredContRelationTenantId() );
		setRequiredContRelationId( src.getRequiredContRelationId() );
		return( *this );
	}

	CFBamPopTopDepByContRelIdxKey CFBamPopTopDepByContRelIdxKey::operator =( cfbam::CFBamPopTopDepHBuff& src ) {
		setRequiredContRelationTenantId( src.getRequiredContRelationTenantId() );
		setRequiredContRelationId( src.getRequiredContRelationId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( true );
		}
		return( false );
	}
}

