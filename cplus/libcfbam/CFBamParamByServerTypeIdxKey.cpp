// Description: C++18 implementation for a Param by ServerTypeIdx index key object.

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

#include <cfbam/CFBamParamByServerTypeIdxKey.hpp>
#include <cfbam/CFBamParamBuff.hpp>
#include <cfbam/CFBamParamHBuff.hpp>

namespace cfbam {
	const std::string CFBamParamByServerTypeIdxKey::CLASS_NAME( "CFBamParamByServerTypeIdxKey" );
	const std::string CFBamParamByServerTypeIdxKey::S_VALUE( "value" );
	const std::string CFBamParamByServerTypeIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamParamByServerTypeIdxKey::CFBamParamByServerTypeIdxKey() {
		optionalTypeTenantId.setNull();
		optionalTypeId.setNull();
	}

	CFBamParamByServerTypeIdxKey::CFBamParamByServerTypeIdxKey( const CFBamParamByServerTypeIdxKey& src ) {
		optionalTypeTenantId.setNull();
		optionalTypeId.setNull();
		if( src.isOptionalTypeTenantIdNull() ) {
			setOptionalTypeTenantIdNull();
		}
		else {
			setOptionalTypeTenantIdValue( src.getOptionalTypeTenantIdValue() );
		}
		if( src.isOptionalTypeIdNull() ) {
			setOptionalTypeIdNull();
		}
		else {
			setOptionalTypeIdValue( src.getOptionalTypeIdValue() );
		}
	}

	CFBamParamByServerTypeIdxKey::~CFBamParamByServerTypeIdxKey() {
	}

	const int64_t CFBamParamByServerTypeIdxKey::getOptionalTypeTenantIdValue() const {
		return( optionalTypeTenantId.getValue() );
	}

	const int64_t* CFBamParamByServerTypeIdxKey::getOptionalTypeTenantIdReference() const {
		return( optionalTypeTenantId.getReference() );
	}

	const bool CFBamParamByServerTypeIdxKey::isOptionalTypeTenantIdNull() const {
		return( optionalTypeTenantId.isNull() );
	}

	void CFBamParamByServerTypeIdxKey::setOptionalTypeTenantIdNull() {
		optionalTypeTenantId.setNull();
	}

	void CFBamParamByServerTypeIdxKey::setOptionalTypeTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalTypeTenantIdValue" );
		if( value < cfbam::CFBamParamBuff::TYPETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamParamBuff::TYPETENANTID_MIN_VALUE );
		}
		optionalTypeTenantId.setValue( value );
	}

	const int64_t CFBamParamByServerTypeIdxKey::getOptionalTypeIdValue() const {
		return( optionalTypeId.getValue() );
	}

	const int64_t* CFBamParamByServerTypeIdxKey::getOptionalTypeIdReference() const {
		return( optionalTypeId.getReference() );
	}

	const bool CFBamParamByServerTypeIdxKey::isOptionalTypeIdNull() const {
		return( optionalTypeId.isNull() );
	}

	void CFBamParamByServerTypeIdxKey::setOptionalTypeIdNull() {
		optionalTypeId.setNull();
	}

	void CFBamParamByServerTypeIdxKey::setOptionalTypeIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalTypeIdValue" );
		if( value < cfbam::CFBamParamBuff::TYPEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamParamBuff::TYPEID_MIN_VALUE );
		}
		optionalTypeId.setValue( value );
	}

	size_t CFBamParamByServerTypeIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalTypeTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalTypeTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalTypeIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalTypeIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFBamParamByServerTypeIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamParamByServerTypeIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TypeTenantId( "TypeTenantId" );
		static const std::string S_TypeId( "TypeId" );
		std::string ret( S_Preamble );
		if( ! isOptionalTypeTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TypeTenantId, getOptionalTypeTenantIdValue() ) );
		}
		if( ! isOptionalTypeIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TypeId, getOptionalTypeIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamParamByServerTypeIdxKey::operator <( const CFBamParamByServerTypeIdxKey& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
			if( getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamParamByServerTypeIdxKey::operator <( const CFBamParamHBuff& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
			if( getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamParamByServerTypeIdxKey::operator <( const CFBamParamBuff& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
			if( getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamParamByServerTypeIdxKey::operator <=( const CFBamParamByServerTypeIdxKey& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
			if( getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamParamByServerTypeIdxKey::operator <=( const CFBamParamHBuff& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
			if( getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamParamByServerTypeIdxKey::operator <=( const CFBamParamBuff& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
			if( getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamParamByServerTypeIdxKey::operator ==( const CFBamParamByServerTypeIdxKey& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				if( getOptionalTypeTenantIdValue() != rhs.getOptionalTypeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( ! rhs.isOptionalTypeIdNull() ) {
				if( getOptionalTypeIdValue() != rhs.getOptionalTypeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamParamByServerTypeIdxKey::operator ==( const CFBamParamHBuff& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				if( getOptionalTypeTenantIdValue() != rhs.getOptionalTypeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( ! rhs.isOptionalTypeIdNull() ) {
				if( getOptionalTypeIdValue() != rhs.getOptionalTypeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamParamByServerTypeIdxKey::operator ==( const CFBamParamBuff& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				if( getOptionalTypeTenantIdValue() != rhs.getOptionalTypeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( ! rhs.isOptionalTypeIdNull() ) {
				if( getOptionalTypeIdValue() != rhs.getOptionalTypeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamParamByServerTypeIdxKey::operator !=( const CFBamParamByServerTypeIdxKey& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalTypeTenantIdValue() != rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( getOptionalTypeIdValue() != rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamParamByServerTypeIdxKey::operator !=( const CFBamParamHBuff& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalTypeTenantIdValue() != rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( getOptionalTypeIdValue() != rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamParamByServerTypeIdxKey::operator !=( const CFBamParamBuff& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalTypeTenantIdValue() != rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( getOptionalTypeIdValue() != rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamParamByServerTypeIdxKey::operator >=( const CFBamParamByServerTypeIdxKey& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamParamByServerTypeIdxKey::operator >=( const CFBamParamHBuff& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamParamByServerTypeIdxKey::operator >=( const CFBamParamBuff& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamParamByServerTypeIdxKey::operator >( const CFBamParamByServerTypeIdxKey& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamParamByServerTypeIdxKey::operator >( const CFBamParamHBuff& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamParamByServerTypeIdxKey::operator >( const CFBamParamBuff& rhs ) {
		if( ! isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFBamParamByServerTypeIdxKey CFBamParamByServerTypeIdxKey::operator =( cfbam::CFBamParamByServerTypeIdxKey& src ) {
		if( src.isOptionalTypeTenantIdNull() ) {
			setOptionalTypeTenantIdNull();
		}
		else {
			setOptionalTypeTenantIdValue( src.getOptionalTypeTenantIdValue() );
		}
		if( src.isOptionalTypeIdNull() ) {
			setOptionalTypeIdNull();
		}
		else {
			setOptionalTypeIdValue( src.getOptionalTypeIdValue() );
		}
		return( *this );
	}

	CFBamParamByServerTypeIdxKey CFBamParamByServerTypeIdxKey::operator =( cfbam::CFBamParamBuff& src ) {
		if( src.isOptionalTypeTenantIdNull() ) {
			setOptionalTypeTenantIdNull();
		}
		else {
			setOptionalTypeTenantIdValue( src.getOptionalTypeTenantIdValue() );
		}
		if( src.isOptionalTypeIdNull() ) {
			setOptionalTypeIdNull();
		}
		else {
			setOptionalTypeIdValue( src.getOptionalTypeIdValue() );
		}
		return( *this );
	}

	CFBamParamByServerTypeIdxKey CFBamParamByServerTypeIdxKey::operator =( cfbam::CFBamParamHBuff& src ) {
		if( src.isOptionalTypeTenantIdNull() ) {
			setOptionalTypeTenantIdNull();
		}
		else {
			setOptionalTypeTenantIdValue( src.getOptionalTypeTenantIdValue() );
		}
		if( src.isOptionalTypeIdNull() ) {
			setOptionalTypeIdNull();
		}
		else {
			setOptionalTypeIdValue( src.getOptionalTypeIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamBuff& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamBuff& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				if( lhs.getOptionalTypeTenantIdValue() != rhs.getOptionalTypeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( ! rhs.isOptionalTypeIdNull() ) {
				if( lhs.getOptionalTypeIdValue() != rhs.getOptionalTypeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				if( lhs.getOptionalTypeTenantIdValue() != rhs.getOptionalTypeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( ! rhs.isOptionalTypeIdNull() ) {
				if( lhs.getOptionalTypeIdValue() != rhs.getOptionalTypeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamBuff& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				if( lhs.getOptionalTypeTenantIdValue() != rhs.getOptionalTypeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( ! rhs.isOptionalTypeIdNull() ) {
				if( lhs.getOptionalTypeIdValue() != rhs.getOptionalTypeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeTenantIdValue() != rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeIdValue() != rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeTenantIdValue() != rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeIdValue() != rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamBuff& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeTenantIdValue() != rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeIdValue() != rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamBuff& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamBuff& rhs ) {
		if( ! lhs.isOptionalTypeTenantIdNull() ) {
			if( rhs.isOptionalTypeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeTenantIdValue() < rhs.getOptionalTypeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeTenantIdValue() > rhs.getOptionalTypeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalTypeIdNull() ) {
			if( rhs.isOptionalTypeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalTypeIdValue() < rhs.getOptionalTypeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalTypeIdValue() > rhs.getOptionalTypeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalTypeIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

