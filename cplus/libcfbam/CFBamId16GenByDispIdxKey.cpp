// Description: C++18 implementation for a Id16Gen by DispIdx index key object.

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

#include <cfbam/CFBamId16GenByDispIdxKey.hpp>
#include <cfbam/CFBamId16GenBuff.hpp>
#include <cfbam/CFBamId16GenHBuff.hpp>

namespace cfbam {
	const std::string CFBamId16GenByDispIdxKey::CLASS_NAME( "CFBamId16GenByDispIdxKey" );
	const std::string CFBamId16GenByDispIdxKey::S_VALUE( "value" );
	const std::string CFBamId16GenByDispIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamId16GenByDispIdxKey::CFBamId16GenByDispIdxKey() {
		optionalDispenserTenantId.setNull();
		optionalDispenserId.setNull();
	}

	CFBamId16GenByDispIdxKey::CFBamId16GenByDispIdxKey( const CFBamId16GenByDispIdxKey& src ) {
		optionalDispenserTenantId.setNull();
		optionalDispenserId.setNull();
		if( src.isOptionalDispenserTenantIdNull() ) {
			setOptionalDispenserTenantIdNull();
		}
		else {
			setOptionalDispenserTenantIdValue( src.getOptionalDispenserTenantIdValue() );
		}
		if( src.isOptionalDispenserIdNull() ) {
			setOptionalDispenserIdNull();
		}
		else {
			setOptionalDispenserIdValue( src.getOptionalDispenserIdValue() );
		}
	}

	CFBamId16GenByDispIdxKey::~CFBamId16GenByDispIdxKey() {
	}

	const int64_t CFBamId16GenByDispIdxKey::getOptionalDispenserTenantIdValue() const {
		return( optionalDispenserTenantId.getValue() );
	}

	const int64_t* CFBamId16GenByDispIdxKey::getOptionalDispenserTenantIdReference() const {
		return( optionalDispenserTenantId.getReference() );
	}

	const bool CFBamId16GenByDispIdxKey::isOptionalDispenserTenantIdNull() const {
		return( optionalDispenserTenantId.isNull() );
	}

	void CFBamId16GenByDispIdxKey::setOptionalDispenserTenantIdNull() {
		optionalDispenserTenantId.setNull();
	}

	void CFBamId16GenByDispIdxKey::setOptionalDispenserTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDispenserTenantIdValue" );
		if( value < cfbam::CFBamId16GenBuff::DISPENSERTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamId16GenBuff::DISPENSERTENANTID_MIN_VALUE );
		}
		optionalDispenserTenantId.setValue( value );
	}

	const int64_t CFBamId16GenByDispIdxKey::getOptionalDispenserIdValue() const {
		return( optionalDispenserId.getValue() );
	}

	const int64_t* CFBamId16GenByDispIdxKey::getOptionalDispenserIdReference() const {
		return( optionalDispenserId.getReference() );
	}

	const bool CFBamId16GenByDispIdxKey::isOptionalDispenserIdNull() const {
		return( optionalDispenserId.isNull() );
	}

	void CFBamId16GenByDispIdxKey::setOptionalDispenserIdNull() {
		optionalDispenserId.setNull();
	}

	void CFBamId16GenByDispIdxKey::setOptionalDispenserIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDispenserIdValue" );
		if( value < cfbam::CFBamId16GenBuff::DISPENSERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamId16GenBuff::DISPENSERID_MIN_VALUE );
		}
		optionalDispenserId.setValue( value );
	}

	size_t CFBamId16GenByDispIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalDispenserTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalDispenserTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalDispenserIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalDispenserIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFBamId16GenByDispIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamId16GenByDispIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_DispenserTenantId( "DispenserTenantId" );
		static const std::string S_DispenserId( "DispenserId" );
		std::string ret( S_Preamble );
		if( ! isOptionalDispenserTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DispenserTenantId, getOptionalDispenserTenantIdValue() ) );
		}
		if( ! isOptionalDispenserIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DispenserId, getOptionalDispenserIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamId16GenByDispIdxKey::operator <( const CFBamId16GenByDispIdxKey& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamId16GenByDispIdxKey::operator <( const CFBamId16GenHBuff& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamId16GenByDispIdxKey::operator <( const CFBamId16GenBuff& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamId16GenByDispIdxKey::operator <=( const CFBamId16GenByDispIdxKey& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamId16GenByDispIdxKey::operator <=( const CFBamId16GenHBuff& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamId16GenByDispIdxKey::operator <=( const CFBamId16GenBuff& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamId16GenByDispIdxKey::operator ==( const CFBamId16GenByDispIdxKey& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				if( getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				if( getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamId16GenByDispIdxKey::operator ==( const CFBamId16GenHBuff& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				if( getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				if( getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamId16GenByDispIdxKey::operator ==( const CFBamId16GenBuff& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				if( getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				if( getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamId16GenByDispIdxKey::operator !=( const CFBamId16GenByDispIdxKey& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamId16GenByDispIdxKey::operator !=( const CFBamId16GenHBuff& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamId16GenByDispIdxKey::operator !=( const CFBamId16GenBuff& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamId16GenByDispIdxKey::operator >=( const CFBamId16GenByDispIdxKey& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamId16GenByDispIdxKey::operator >=( const CFBamId16GenHBuff& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamId16GenByDispIdxKey::operator >=( const CFBamId16GenBuff& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamId16GenByDispIdxKey::operator >( const CFBamId16GenByDispIdxKey& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamId16GenByDispIdxKey::operator >( const CFBamId16GenHBuff& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamId16GenByDispIdxKey::operator >( const CFBamId16GenBuff& rhs ) {
		if( ! isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFBamId16GenByDispIdxKey CFBamId16GenByDispIdxKey::operator =( cfbam::CFBamId16GenByDispIdxKey& src ) {
		if( src.isOptionalDispenserTenantIdNull() ) {
			setOptionalDispenserTenantIdNull();
		}
		else {
			setOptionalDispenserTenantIdValue( src.getOptionalDispenserTenantIdValue() );
		}
		if( src.isOptionalDispenserIdNull() ) {
			setOptionalDispenserIdNull();
		}
		else {
			setOptionalDispenserIdValue( src.getOptionalDispenserIdValue() );
		}
		return( *this );
	}

	CFBamId16GenByDispIdxKey CFBamId16GenByDispIdxKey::operator =( cfbam::CFBamId16GenBuff& src ) {
		if( src.isOptionalDispenserTenantIdNull() ) {
			setOptionalDispenserTenantIdNull();
		}
		else {
			setOptionalDispenserTenantIdValue( src.getOptionalDispenserTenantIdValue() );
		}
		if( src.isOptionalDispenserIdNull() ) {
			setOptionalDispenserIdNull();
		}
		else {
			setOptionalDispenserIdValue( src.getOptionalDispenserIdValue() );
		}
		return( *this );
	}

	CFBamId16GenByDispIdxKey CFBamId16GenByDispIdxKey::operator =( cfbam::CFBamId16GenHBuff& src ) {
		if( src.isOptionalDispenserTenantIdNull() ) {
			setOptionalDispenserTenantIdNull();
		}
		else {
			setOptionalDispenserTenantIdValue( src.getOptionalDispenserTenantIdValue() );
		}
		if( src.isOptionalDispenserIdNull() ) {
			setOptionalDispenserIdNull();
		}
		else {
			setOptionalDispenserIdValue( src.getOptionalDispenserIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenHBuff& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenBuff& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenHBuff& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenBuff& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				if( lhs.getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				if( lhs.getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenHBuff& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				if( lhs.getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				if( lhs.getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenBuff& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				if( lhs.getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				if( lhs.getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenHBuff& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenBuff& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() != rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() != rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenHBuff& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenBuff& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenHBuff& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenBuff& rhs ) {
		if( ! lhs.isOptionalDispenserTenantIdNull() ) {
			if( rhs.isOptionalDispenserTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserTenantIdValue() < rhs.getOptionalDispenserTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserTenantIdValue() > rhs.getOptionalDispenserTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDispenserIdNull() ) {
			if( rhs.isOptionalDispenserIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalDispenserIdValue() < rhs.getOptionalDispenserIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDispenserIdValue() > rhs.getOptionalDispenserIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDispenserIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

