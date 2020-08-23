// Description: C++18 implementation for a TableCol by DataIdx index key object.

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

#include <cfbam/CFBamTableColByDataIdxKey.hpp>
#include <cfbam/CFBamTableColBuff.hpp>
#include <cfbam/CFBamTableColHBuff.hpp>

namespace cfbam {
	const std::string CFBamTableColByDataIdxKey::CLASS_NAME( "CFBamTableColByDataIdxKey" );
	const std::string CFBamTableColByDataIdxKey::S_VALUE( "value" );
	const std::string CFBamTableColByDataIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamTableColByDataIdxKey::CFBamTableColByDataIdxKey() {
		optionalDataTenantId.setNull();
		optionalDataId.setNull();
	}

	CFBamTableColByDataIdxKey::CFBamTableColByDataIdxKey( const CFBamTableColByDataIdxKey& src ) {
		optionalDataTenantId.setNull();
		optionalDataId.setNull();
		if( src.isOptionalDataTenantIdNull() ) {
			setOptionalDataTenantIdNull();
		}
		else {
			setOptionalDataTenantIdValue( src.getOptionalDataTenantIdValue() );
		}
		if( src.isOptionalDataIdNull() ) {
			setOptionalDataIdNull();
		}
		else {
			setOptionalDataIdValue( src.getOptionalDataIdValue() );
		}
	}

	CFBamTableColByDataIdxKey::~CFBamTableColByDataIdxKey() {
	}

	const int64_t CFBamTableColByDataIdxKey::getOptionalDataTenantIdValue() const {
		return( optionalDataTenantId.getValue() );
	}

	const int64_t* CFBamTableColByDataIdxKey::getOptionalDataTenantIdReference() const {
		return( optionalDataTenantId.getReference() );
	}

	const bool CFBamTableColByDataIdxKey::isOptionalDataTenantIdNull() const {
		return( optionalDataTenantId.isNull() );
	}

	void CFBamTableColByDataIdxKey::setOptionalDataTenantIdNull() {
		optionalDataTenantId.setNull();
	}

	void CFBamTableColByDataIdxKey::setOptionalDataTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDataTenantIdValue" );
		if( value < cfbam::CFBamTableColBuff::DATATENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTableColBuff::DATATENANTID_MIN_VALUE );
		}
		optionalDataTenantId.setValue( value );
	}

	const int64_t CFBamTableColByDataIdxKey::getOptionalDataIdValue() const {
		return( optionalDataId.getValue() );
	}

	const int64_t* CFBamTableColByDataIdxKey::getOptionalDataIdReference() const {
		return( optionalDataId.getReference() );
	}

	const bool CFBamTableColByDataIdxKey::isOptionalDataIdNull() const {
		return( optionalDataId.isNull() );
	}

	void CFBamTableColByDataIdxKey::setOptionalDataIdNull() {
		optionalDataId.setNull();
	}

	void CFBamTableColByDataIdxKey::setOptionalDataIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDataIdValue" );
		if( value < cfbam::CFBamTableColBuff::DATAID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTableColBuff::DATAID_MIN_VALUE );
		}
		optionalDataId.setValue( value );
	}

	size_t CFBamTableColByDataIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalDataTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalDataTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalDataIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalDataIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFBamTableColByDataIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTableColByDataIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_DataTenantId( "DataTenantId" );
		static const std::string S_DataId( "DataId" );
		std::string ret( S_Preamble );
		if( ! isOptionalDataTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DataTenantId, getOptionalDataTenantIdValue() ) );
		}
		if( ! isOptionalDataIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DataId, getOptionalDataIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamTableColByDataIdxKey::operator <( const CFBamTableColByDataIdxKey& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
			if( getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableColByDataIdxKey::operator <( const CFBamTableColHBuff& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
			if( getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableColByDataIdxKey::operator <( const CFBamTableColBuff& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
			if( getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableColByDataIdxKey::operator <=( const CFBamTableColByDataIdxKey& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
			if( getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableColByDataIdxKey::operator <=( const CFBamTableColHBuff& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
			if( getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableColByDataIdxKey::operator <=( const CFBamTableColBuff& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
			if( getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableColByDataIdxKey::operator ==( const CFBamTableColByDataIdxKey& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				if( getOptionalDataTenantIdValue() != rhs.getOptionalDataTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( ! rhs.isOptionalDataIdNull() ) {
				if( getOptionalDataIdValue() != rhs.getOptionalDataIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableColByDataIdxKey::operator ==( const CFBamTableColHBuff& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				if( getOptionalDataTenantIdValue() != rhs.getOptionalDataTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( ! rhs.isOptionalDataIdNull() ) {
				if( getOptionalDataIdValue() != rhs.getOptionalDataIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableColByDataIdxKey::operator ==( const CFBamTableColBuff& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				if( getOptionalDataTenantIdValue() != rhs.getOptionalDataTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( ! rhs.isOptionalDataIdNull() ) {
				if( getOptionalDataIdValue() != rhs.getOptionalDataIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableColByDataIdxKey::operator !=( const CFBamTableColByDataIdxKey& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDataTenantIdValue() != rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( getOptionalDataIdValue() != rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableColByDataIdxKey::operator !=( const CFBamTableColHBuff& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDataTenantIdValue() != rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( getOptionalDataIdValue() != rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableColByDataIdxKey::operator !=( const CFBamTableColBuff& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDataTenantIdValue() != rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( getOptionalDataIdValue() != rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableColByDataIdxKey::operator >=( const CFBamTableColByDataIdxKey& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableColByDataIdxKey::operator >=( const CFBamTableColHBuff& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableColByDataIdxKey::operator >=( const CFBamTableColBuff& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableColByDataIdxKey::operator >( const CFBamTableColByDataIdxKey& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamTableColByDataIdxKey::operator >( const CFBamTableColHBuff& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamTableColByDataIdxKey::operator >( const CFBamTableColBuff& rhs ) {
		if( ! isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFBamTableColByDataIdxKey CFBamTableColByDataIdxKey::operator =( cfbam::CFBamTableColByDataIdxKey& src ) {
		if( src.isOptionalDataTenantIdNull() ) {
			setOptionalDataTenantIdNull();
		}
		else {
			setOptionalDataTenantIdValue( src.getOptionalDataTenantIdValue() );
		}
		if( src.isOptionalDataIdNull() ) {
			setOptionalDataIdNull();
		}
		else {
			setOptionalDataIdValue( src.getOptionalDataIdValue() );
		}
		return( *this );
	}

	CFBamTableColByDataIdxKey CFBamTableColByDataIdxKey::operator =( cfbam::CFBamTableColBuff& src ) {
		if( src.isOptionalDataTenantIdNull() ) {
			setOptionalDataTenantIdNull();
		}
		else {
			setOptionalDataTenantIdValue( src.getOptionalDataTenantIdValue() );
		}
		if( src.isOptionalDataIdNull() ) {
			setOptionalDataIdNull();
		}
		else {
			setOptionalDataIdValue( src.getOptionalDataIdValue() );
		}
		return( *this );
	}

	CFBamTableColByDataIdxKey CFBamTableColByDataIdxKey::operator =( cfbam::CFBamTableColHBuff& src ) {
		if( src.isOptionalDataTenantIdNull() ) {
			setOptionalDataTenantIdNull();
		}
		else {
			setOptionalDataTenantIdValue( src.getOptionalDataTenantIdValue() );
		}
		if( src.isOptionalDataIdNull() ) {
			setOptionalDataIdNull();
		}
		else {
			setOptionalDataIdValue( src.getOptionalDataIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColHBuff& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColBuff& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColHBuff& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColBuff& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				if( lhs.getOptionalDataTenantIdValue() != rhs.getOptionalDataTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( ! rhs.isOptionalDataIdNull() ) {
				if( lhs.getOptionalDataIdValue() != rhs.getOptionalDataIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColHBuff& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				if( lhs.getOptionalDataTenantIdValue() != rhs.getOptionalDataTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( ! rhs.isOptionalDataIdNull() ) {
				if( lhs.getOptionalDataIdValue() != rhs.getOptionalDataIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColBuff& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				if( lhs.getOptionalDataTenantIdValue() != rhs.getOptionalDataTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( ! rhs.isOptionalDataIdNull() ) {
				if( lhs.getOptionalDataIdValue() != rhs.getOptionalDataIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataTenantIdValue() != rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataIdValue() != rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColHBuff& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataTenantIdValue() != rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataIdValue() != rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColBuff& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataTenantIdValue() != rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataIdValue() != rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColHBuff& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColBuff& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColHBuff& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableColByDataIdxKey& lhs, const cfbam::CFBamTableColBuff& rhs ) {
		if( ! lhs.isOptionalDataTenantIdNull() ) {
			if( rhs.isOptionalDataTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataTenantIdValue() < rhs.getOptionalDataTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataTenantIdValue() > rhs.getOptionalDataTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDataIdNull() ) {
			if( rhs.isOptionalDataIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDataIdValue() < rhs.getOptionalDataIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDataIdValue() > rhs.getOptionalDataIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDataIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

