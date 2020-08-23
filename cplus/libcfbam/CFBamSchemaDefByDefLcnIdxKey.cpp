// Description: C++18 implementation for a SchemaDef by DefLcnIdx index key object.

/*
 *	com.github.msobkow.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	This file is part of MSS Code Factory.
 *	
 *	MSS Code Factory is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *	
 *	MSS Code Factory is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *	
 *	You should have received a copy of the GNU General Public License
 *	along with MSS Code Factory.  If not, see https://www.gnu.org/licenses/.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>

using namespace std;

#include <cfbam/CFBamSchemaDefByDefLcnIdxKey.hpp>
#include <cfbam/CFBamSchemaDefBuff.hpp>
#include <cfbam/CFBamSchemaDefHBuff.hpp>

namespace cfbam {
	const std::string CFBamSchemaDefByDefLcnIdxKey::CLASS_NAME( "CFBamSchemaDefByDefLcnIdxKey" );
	const std::string CFBamSchemaDefByDefLcnIdxKey::S_VALUE( "value" );
	const std::string CFBamSchemaDefByDefLcnIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamSchemaDefByDefLcnIdxKey::CFBamSchemaDefByDefLcnIdxKey() {
		optionalDefaultLicenseTenantId.setNull();
		optionalDefaultLicenseId.setNull();
	}

	CFBamSchemaDefByDefLcnIdxKey::CFBamSchemaDefByDefLcnIdxKey( const CFBamSchemaDefByDefLcnIdxKey& src ) {
		optionalDefaultLicenseTenantId.setNull();
		optionalDefaultLicenseId.setNull();
		if( src.isOptionalDefaultLicenseTenantIdNull() ) {
			setOptionalDefaultLicenseTenantIdNull();
		}
		else {
			setOptionalDefaultLicenseTenantIdValue( src.getOptionalDefaultLicenseTenantIdValue() );
		}
		if( src.isOptionalDefaultLicenseIdNull() ) {
			setOptionalDefaultLicenseIdNull();
		}
		else {
			setOptionalDefaultLicenseIdValue( src.getOptionalDefaultLicenseIdValue() );
		}
	}

	CFBamSchemaDefByDefLcnIdxKey::~CFBamSchemaDefByDefLcnIdxKey() {
	}

	const int64_t CFBamSchemaDefByDefLcnIdxKey::getOptionalDefaultLicenseTenantIdValue() const {
		return( optionalDefaultLicenseTenantId.getValue() );
	}

	const int64_t* CFBamSchemaDefByDefLcnIdxKey::getOptionalDefaultLicenseTenantIdReference() const {
		return( optionalDefaultLicenseTenantId.getReference() );
	}

	const bool CFBamSchemaDefByDefLcnIdxKey::isOptionalDefaultLicenseTenantIdNull() const {
		return( optionalDefaultLicenseTenantId.isNull() );
	}

	void CFBamSchemaDefByDefLcnIdxKey::setOptionalDefaultLicenseTenantIdNull() {
		optionalDefaultLicenseTenantId.setNull();
	}

	void CFBamSchemaDefByDefLcnIdxKey::setOptionalDefaultLicenseTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDefaultLicenseTenantIdValue" );
		if( value < cfbam::CFBamSchemaDefBuff::DEFAULTLICENSETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaDefBuff::DEFAULTLICENSETENANTID_MIN_VALUE );
		}
		optionalDefaultLicenseTenantId.setValue( value );
	}

	const int64_t CFBamSchemaDefByDefLcnIdxKey::getOptionalDefaultLicenseIdValue() const {
		return( optionalDefaultLicenseId.getValue() );
	}

	const int64_t* CFBamSchemaDefByDefLcnIdxKey::getOptionalDefaultLicenseIdReference() const {
		return( optionalDefaultLicenseId.getReference() );
	}

	const bool CFBamSchemaDefByDefLcnIdxKey::isOptionalDefaultLicenseIdNull() const {
		return( optionalDefaultLicenseId.isNull() );
	}

	void CFBamSchemaDefByDefLcnIdxKey::setOptionalDefaultLicenseIdNull() {
		optionalDefaultLicenseId.setNull();
	}

	void CFBamSchemaDefByDefLcnIdxKey::setOptionalDefaultLicenseIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDefaultLicenseIdValue" );
		if( value < cfbam::CFBamSchemaDefBuff::DEFAULTLICENSEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaDefBuff::DEFAULTLICENSEID_MIN_VALUE );
		}
		optionalDefaultLicenseId.setValue( value );
	}

	size_t CFBamSchemaDefByDefLcnIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalDefaultLicenseTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalDefaultLicenseIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFBamSchemaDefByDefLcnIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaDefByDefLcnIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_DefaultLicenseTenantId( "DefaultLicenseTenantId" );
		static const std::string S_DefaultLicenseId( "DefaultLicenseId" );
		std::string ret( S_Preamble );
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefaultLicenseTenantId, getOptionalDefaultLicenseTenantIdValue() ) );
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DefaultLicenseId, getOptionalDefaultLicenseIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator <( const CFBamSchemaDefByDefLcnIdxKey& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
			if( getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator <( const CFBamSchemaDefHBuff& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
			if( getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator <( const CFBamSchemaDefBuff& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
			if( getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator <=( const CFBamSchemaDefByDefLcnIdxKey& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
			if( getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator <=( const CFBamSchemaDefHBuff& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
			if( getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator <=( const CFBamSchemaDefBuff& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
			if( getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator ==( const CFBamSchemaDefByDefLcnIdxKey& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				if( getOptionalDefaultLicenseTenantIdValue() != rhs.getOptionalDefaultLicenseTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				if( getOptionalDefaultLicenseIdValue() != rhs.getOptionalDefaultLicenseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator ==( const CFBamSchemaDefHBuff& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				if( getOptionalDefaultLicenseTenantIdValue() != rhs.getOptionalDefaultLicenseTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				if( getOptionalDefaultLicenseIdValue() != rhs.getOptionalDefaultLicenseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator ==( const CFBamSchemaDefBuff& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				if( getOptionalDefaultLicenseTenantIdValue() != rhs.getOptionalDefaultLicenseTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				if( getOptionalDefaultLicenseIdValue() != rhs.getOptionalDefaultLicenseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator !=( const CFBamSchemaDefByDefLcnIdxKey& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseTenantIdValue() != rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseIdValue() != rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator !=( const CFBamSchemaDefHBuff& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseTenantIdValue() != rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseIdValue() != rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator !=( const CFBamSchemaDefBuff& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseTenantIdValue() != rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseIdValue() != rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator >=( const CFBamSchemaDefByDefLcnIdxKey& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator >=( const CFBamSchemaDefHBuff& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator >=( const CFBamSchemaDefBuff& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator >( const CFBamSchemaDefByDefLcnIdxKey& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator >( const CFBamSchemaDefHBuff& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamSchemaDefByDefLcnIdxKey::operator >( const CFBamSchemaDefBuff& rhs ) {
		if( ! isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFBamSchemaDefByDefLcnIdxKey CFBamSchemaDefByDefLcnIdxKey::operator =( cfbam::CFBamSchemaDefByDefLcnIdxKey& src ) {
		if( src.isOptionalDefaultLicenseTenantIdNull() ) {
			setOptionalDefaultLicenseTenantIdNull();
		}
		else {
			setOptionalDefaultLicenseTenantIdValue( src.getOptionalDefaultLicenseTenantIdValue() );
		}
		if( src.isOptionalDefaultLicenseIdNull() ) {
			setOptionalDefaultLicenseIdNull();
		}
		else {
			setOptionalDefaultLicenseIdValue( src.getOptionalDefaultLicenseIdValue() );
		}
		return( *this );
	}

	CFBamSchemaDefByDefLcnIdxKey CFBamSchemaDefByDefLcnIdxKey::operator =( cfbam::CFBamSchemaDefBuff& src ) {
		if( src.isOptionalDefaultLicenseTenantIdNull() ) {
			setOptionalDefaultLicenseTenantIdNull();
		}
		else {
			setOptionalDefaultLicenseTenantIdValue( src.getOptionalDefaultLicenseTenantIdValue() );
		}
		if( src.isOptionalDefaultLicenseIdNull() ) {
			setOptionalDefaultLicenseIdNull();
		}
		else {
			setOptionalDefaultLicenseIdValue( src.getOptionalDefaultLicenseIdValue() );
		}
		return( *this );
	}

	CFBamSchemaDefByDefLcnIdxKey CFBamSchemaDefByDefLcnIdxKey::operator =( cfbam::CFBamSchemaDefHBuff& src ) {
		if( src.isOptionalDefaultLicenseTenantIdNull() ) {
			setOptionalDefaultLicenseTenantIdNull();
		}
		else {
			setOptionalDefaultLicenseTenantIdValue( src.getOptionalDefaultLicenseTenantIdValue() );
		}
		if( src.isOptionalDefaultLicenseIdNull() ) {
			setOptionalDefaultLicenseIdNull();
		}
		else {
			setOptionalDefaultLicenseIdValue( src.getOptionalDefaultLicenseIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefByDefLcnIdxKey& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefByDefLcnIdxKey& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefByDefLcnIdxKey& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				if( lhs.getOptionalDefaultLicenseTenantIdValue() != rhs.getOptionalDefaultLicenseTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				if( lhs.getOptionalDefaultLicenseIdValue() != rhs.getOptionalDefaultLicenseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				if( lhs.getOptionalDefaultLicenseTenantIdValue() != rhs.getOptionalDefaultLicenseTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				if( lhs.getOptionalDefaultLicenseIdValue() != rhs.getOptionalDefaultLicenseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				if( lhs.getOptionalDefaultLicenseTenantIdValue() != rhs.getOptionalDefaultLicenseTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				if( lhs.getOptionalDefaultLicenseIdValue() != rhs.getOptionalDefaultLicenseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefByDefLcnIdxKey& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() != rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() != rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() != rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() != rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() != rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() != rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefByDefLcnIdxKey& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefByDefLcnIdxKey& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( ! lhs.isOptionalDefaultLicenseTenantIdNull() ) {
			if( rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseTenantIdValue() < rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseTenantIdValue() > rhs.getOptionalDefaultLicenseTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDefaultLicenseIdNull() ) {
			if( rhs.isOptionalDefaultLicenseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDefaultLicenseIdValue() < rhs.getOptionalDefaultLicenseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDefaultLicenseIdValue() > rhs.getOptionalDefaultLicenseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDefaultLicenseIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

