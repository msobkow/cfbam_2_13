// Description: C++18 implementation for a BoolCol by TableIdx index key object.

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

#include <cfbam/CFBamBoolColByTableIdxKey.hpp>
#include <cfbam/CFBamBoolColBuff.hpp>
#include <cfbam/CFBamBoolColHBuff.hpp>

namespace cfbam {
	const std::string CFBamBoolColByTableIdxKey::CLASS_NAME( "CFBamBoolColByTableIdxKey" );
	const std::string CFBamBoolColByTableIdxKey::S_VALUE( "value" );
	const std::string CFBamBoolColByTableIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamBoolColByTableIdxKey::CFBamBoolColByTableIdxKey() {
		requiredTenantId = cfbam::CFBamBoolColBuff::TENANTID_INIT_VALUE;
		requiredTableId = cfbam::CFBamBoolColBuff::TABLEID_INIT_VALUE;
	}

	CFBamBoolColByTableIdxKey::CFBamBoolColByTableIdxKey( const CFBamBoolColByTableIdxKey& src ) {
		requiredTenantId = cfbam::CFBamBoolColBuff::TENANTID_INIT_VALUE;
		requiredTableId = cfbam::CFBamBoolColBuff::TABLEID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
	}

	CFBamBoolColByTableIdxKey::~CFBamBoolColByTableIdxKey() {
	}

	const int64_t CFBamBoolColByTableIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamBoolColByTableIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamBoolColByTableIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamBoolColBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamBoolColBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamBoolColByTableIdxKey::getRequiredTableId() const {
		return( requiredTableId );
	}

	const int64_t* CFBamBoolColByTableIdxKey::getRequiredTableIdReference() const {
		return( &requiredTableId );
	}

	void CFBamBoolColByTableIdxKey::setRequiredTableId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTableId" );
		if( value < cfbam::CFBamBoolColBuff::TABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamBoolColBuff::TABLEID_MIN_VALUE );
		}
		requiredTableId = value;
	}

	size_t CFBamBoolColByTableIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredTableId() );
		return( hashCode );
	}

	std::string CFBamBoolColByTableIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamBoolColByTableIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_TableId( "TableId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, getRequiredTableId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamBoolColByTableIdxKey::operator <( const CFBamBoolColByTableIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamBoolColByTableIdxKey::operator <( const CFBamBoolColHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamBoolColByTableIdxKey::operator <( const CFBamBoolColBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamBoolColByTableIdxKey::operator <=( const CFBamBoolColByTableIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamBoolColByTableIdxKey::operator <=( const CFBamBoolColHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamBoolColByTableIdxKey::operator <=( const CFBamBoolColBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamBoolColByTableIdxKey::operator ==( const CFBamBoolColByTableIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamBoolColByTableIdxKey::operator ==( const CFBamBoolColHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamBoolColByTableIdxKey::operator ==( const CFBamBoolColBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamBoolColByTableIdxKey::operator !=( const CFBamBoolColByTableIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamBoolColByTableIdxKey::operator !=( const CFBamBoolColHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamBoolColByTableIdxKey::operator !=( const CFBamBoolColBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamBoolColByTableIdxKey::operator >=( const CFBamBoolColByTableIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamBoolColByTableIdxKey::operator >=( const CFBamBoolColHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamBoolColByTableIdxKey::operator >=( const CFBamBoolColBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamBoolColByTableIdxKey::operator >( const CFBamBoolColByTableIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamBoolColByTableIdxKey::operator >( const CFBamBoolColHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamBoolColByTableIdxKey::operator >( const CFBamBoolColBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}
	CFBamBoolColByTableIdxKey CFBamBoolColByTableIdxKey::operator =( cfbam::CFBamBoolColByTableIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		return( *this );
	}

	CFBamBoolColByTableIdxKey CFBamBoolColByTableIdxKey::operator =( cfbam::CFBamBoolColBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		return( *this );
	}

	CFBamBoolColByTableIdxKey CFBamBoolColByTableIdxKey::operator =( cfbam::CFBamBoolColHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColByTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColByTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColByTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColByTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColByTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColByTableIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamBoolColByTableIdxKey& lhs, const cfbam::CFBamBoolColBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}
}

