// Description: C++18 implementation for a Table by AltIndexIdx index key object.

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

#include <cfbam/CFBamTableByAltIndexIdxKey.hpp>
#include <cfbam/CFBamTableBuff.hpp>
#include <cfbam/CFBamTableHBuff.hpp>

namespace cfbam {
	const std::string CFBamTableByAltIndexIdxKey::CLASS_NAME( "CFBamTableByAltIndexIdxKey" );
	const std::string CFBamTableByAltIndexIdxKey::S_VALUE( "value" );
	const std::string CFBamTableByAltIndexIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamTableByAltIndexIdxKey::CFBamTableByAltIndexIdxKey() {
		optionalAltIndexTenantId.setNull();
		optionalAltIndexId.setNull();
	}

	CFBamTableByAltIndexIdxKey::CFBamTableByAltIndexIdxKey( const CFBamTableByAltIndexIdxKey& src ) {
		optionalAltIndexTenantId.setNull();
		optionalAltIndexId.setNull();
		if( src.isOptionalAltIndexTenantIdNull() ) {
			setOptionalAltIndexTenantIdNull();
		}
		else {
			setOptionalAltIndexTenantIdValue( src.getOptionalAltIndexTenantIdValue() );
		}
		if( src.isOptionalAltIndexIdNull() ) {
			setOptionalAltIndexIdNull();
		}
		else {
			setOptionalAltIndexIdValue( src.getOptionalAltIndexIdValue() );
		}
	}

	CFBamTableByAltIndexIdxKey::~CFBamTableByAltIndexIdxKey() {
	}

	const int64_t CFBamTableByAltIndexIdxKey::getOptionalAltIndexTenantIdValue() const {
		return( optionalAltIndexTenantId.getValue() );
	}

	const int64_t* CFBamTableByAltIndexIdxKey::getOptionalAltIndexTenantIdReference() const {
		return( optionalAltIndexTenantId.getReference() );
	}

	const bool CFBamTableByAltIndexIdxKey::isOptionalAltIndexTenantIdNull() const {
		return( optionalAltIndexTenantId.isNull() );
	}

	void CFBamTableByAltIndexIdxKey::setOptionalAltIndexTenantIdNull() {
		optionalAltIndexTenantId.setNull();
	}

	void CFBamTableByAltIndexIdxKey::setOptionalAltIndexTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalAltIndexTenantIdValue" );
		if( value < cfbam::CFBamTableBuff::ALTINDEXTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTableBuff::ALTINDEXTENANTID_MIN_VALUE );
		}
		optionalAltIndexTenantId.setValue( value );
	}

	const int64_t CFBamTableByAltIndexIdxKey::getOptionalAltIndexIdValue() const {
		return( optionalAltIndexId.getValue() );
	}

	const int64_t* CFBamTableByAltIndexIdxKey::getOptionalAltIndexIdReference() const {
		return( optionalAltIndexId.getReference() );
	}

	const bool CFBamTableByAltIndexIdxKey::isOptionalAltIndexIdNull() const {
		return( optionalAltIndexId.isNull() );
	}

	void CFBamTableByAltIndexIdxKey::setOptionalAltIndexIdNull() {
		optionalAltIndexId.setNull();
	}

	void CFBamTableByAltIndexIdxKey::setOptionalAltIndexIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalAltIndexIdValue" );
		if( value < cfbam::CFBamTableBuff::ALTINDEXID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTableBuff::ALTINDEXID_MIN_VALUE );
		}
		optionalAltIndexId.setValue( value );
	}

	size_t CFBamTableByAltIndexIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalAltIndexTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalAltIndexTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalAltIndexIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalAltIndexIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFBamTableByAltIndexIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTableByAltIndexIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_AltIndexTenantId( "AltIndexTenantId" );
		static const std::string S_AltIndexId( "AltIndexId" );
		std::string ret( S_Preamble );
		if( ! isOptionalAltIndexTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_AltIndexTenantId, getOptionalAltIndexTenantIdValue() ) );
		}
		if( ! isOptionalAltIndexIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_AltIndexId, getOptionalAltIndexIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamTableByAltIndexIdxKey::operator <( const CFBamTableByAltIndexIdxKey& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
			if( getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByAltIndexIdxKey::operator <( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
			if( getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByAltIndexIdxKey::operator <( const CFBamTableBuff& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
			if( getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByAltIndexIdxKey::operator <=( const CFBamTableByAltIndexIdxKey& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
			if( getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableByAltIndexIdxKey::operator <=( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
			if( getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableByAltIndexIdxKey::operator <=( const CFBamTableBuff& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
			if( getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableByAltIndexIdxKey::operator ==( const CFBamTableByAltIndexIdxKey& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				if( getOptionalAltIndexTenantIdValue() != rhs.getOptionalAltIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				if( getOptionalAltIndexIdValue() != rhs.getOptionalAltIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByAltIndexIdxKey::operator ==( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				if( getOptionalAltIndexTenantIdValue() != rhs.getOptionalAltIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				if( getOptionalAltIndexIdValue() != rhs.getOptionalAltIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByAltIndexIdxKey::operator ==( const CFBamTableBuff& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				if( getOptionalAltIndexTenantIdValue() != rhs.getOptionalAltIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				if( getOptionalAltIndexIdValue() != rhs.getOptionalAltIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByAltIndexIdxKey::operator !=( const CFBamTableByAltIndexIdxKey& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexTenantIdValue() != rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexIdValue() != rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByAltIndexIdxKey::operator !=( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexTenantIdValue() != rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexIdValue() != rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByAltIndexIdxKey::operator !=( const CFBamTableBuff& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexTenantIdValue() != rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexIdValue() != rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByAltIndexIdxKey::operator >=( const CFBamTableByAltIndexIdxKey& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByAltIndexIdxKey::operator >=( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByAltIndexIdxKey::operator >=( const CFBamTableBuff& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByAltIndexIdxKey::operator >( const CFBamTableByAltIndexIdxKey& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamTableByAltIndexIdxKey::operator >( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamTableByAltIndexIdxKey::operator >( const CFBamTableBuff& rhs ) {
		if( ! isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFBamTableByAltIndexIdxKey CFBamTableByAltIndexIdxKey::operator =( cfbam::CFBamTableByAltIndexIdxKey& src ) {
		if( src.isOptionalAltIndexTenantIdNull() ) {
			setOptionalAltIndexTenantIdNull();
		}
		else {
			setOptionalAltIndexTenantIdValue( src.getOptionalAltIndexTenantIdValue() );
		}
		if( src.isOptionalAltIndexIdNull() ) {
			setOptionalAltIndexIdNull();
		}
		else {
			setOptionalAltIndexIdValue( src.getOptionalAltIndexIdValue() );
		}
		return( *this );
	}

	CFBamTableByAltIndexIdxKey CFBamTableByAltIndexIdxKey::operator =( cfbam::CFBamTableBuff& src ) {
		if( src.isOptionalAltIndexTenantIdNull() ) {
			setOptionalAltIndexTenantIdNull();
		}
		else {
			setOptionalAltIndexTenantIdValue( src.getOptionalAltIndexTenantIdValue() );
		}
		if( src.isOptionalAltIndexIdNull() ) {
			setOptionalAltIndexIdNull();
		}
		else {
			setOptionalAltIndexIdValue( src.getOptionalAltIndexIdValue() );
		}
		return( *this );
	}

	CFBamTableByAltIndexIdxKey CFBamTableByAltIndexIdxKey::operator =( cfbam::CFBamTableHBuff& src ) {
		if( src.isOptionalAltIndexTenantIdNull() ) {
			setOptionalAltIndexTenantIdNull();
		}
		else {
			setOptionalAltIndexTenantIdValue( src.getOptionalAltIndexTenantIdValue() );
		}
		if( src.isOptionalAltIndexIdNull() ) {
			setOptionalAltIndexIdNull();
		}
		else {
			setOptionalAltIndexIdValue( src.getOptionalAltIndexIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableByAltIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableByAltIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableByAltIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				if( lhs.getOptionalAltIndexTenantIdValue() != rhs.getOptionalAltIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				if( lhs.getOptionalAltIndexIdValue() != rhs.getOptionalAltIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				if( lhs.getOptionalAltIndexTenantIdValue() != rhs.getOptionalAltIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				if( lhs.getOptionalAltIndexIdValue() != rhs.getOptionalAltIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				if( lhs.getOptionalAltIndexTenantIdValue() != rhs.getOptionalAltIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				if( lhs.getOptionalAltIndexIdValue() != rhs.getOptionalAltIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableByAltIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() != rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexIdValue() != rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() != rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexIdValue() != rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() != rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexIdValue() != rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableByAltIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableByAltIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableByAltIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalAltIndexTenantIdNull() ) {
			if( rhs.isOptionalAltIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexTenantIdValue() < rhs.getOptionalAltIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexTenantIdValue() > rhs.getOptionalAltIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalAltIndexIdNull() ) {
			if( rhs.isOptionalAltIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalAltIndexIdValue() < rhs.getOptionalAltIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalAltIndexIdValue() > rhs.getOptionalAltIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalAltIndexIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

