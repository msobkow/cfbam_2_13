// Description: C++18 implementation for a Id32Gen by DispIdx index key object.

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

#include <cfbam/CFBamId32GenByDispIdxKey.hpp>
#include <cfbam/CFBamId32GenBuff.hpp>
#include <cfbam/CFBamId32GenHBuff.hpp>

namespace cfbam {
	const std::string CFBamId32GenByDispIdxKey::CLASS_NAME( "CFBamId32GenByDispIdxKey" );
	const std::string CFBamId32GenByDispIdxKey::S_VALUE( "value" );
	const std::string CFBamId32GenByDispIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamId32GenByDispIdxKey::CFBamId32GenByDispIdxKey() {
		optionalDispenserTenantId.setNull();
		optionalDispenserId.setNull();
	}

	CFBamId32GenByDispIdxKey::CFBamId32GenByDispIdxKey( const CFBamId32GenByDispIdxKey& src ) {
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

	CFBamId32GenByDispIdxKey::~CFBamId32GenByDispIdxKey() {
	}

	const int64_t CFBamId32GenByDispIdxKey::getOptionalDispenserTenantIdValue() const {
		return( optionalDispenserTenantId.getValue() );
	}

	const int64_t* CFBamId32GenByDispIdxKey::getOptionalDispenserTenantIdReference() const {
		return( optionalDispenserTenantId.getReference() );
	}

	const bool CFBamId32GenByDispIdxKey::isOptionalDispenserTenantIdNull() const {
		return( optionalDispenserTenantId.isNull() );
	}

	void CFBamId32GenByDispIdxKey::setOptionalDispenserTenantIdNull() {
		optionalDispenserTenantId.setNull();
	}

	void CFBamId32GenByDispIdxKey::setOptionalDispenserTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDispenserTenantIdValue" );
		if( value < cfbam::CFBamId32GenBuff::DISPENSERTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamId32GenBuff::DISPENSERTENANTID_MIN_VALUE );
		}
		optionalDispenserTenantId.setValue( value );
	}

	const int64_t CFBamId32GenByDispIdxKey::getOptionalDispenserIdValue() const {
		return( optionalDispenserId.getValue() );
	}

	const int64_t* CFBamId32GenByDispIdxKey::getOptionalDispenserIdReference() const {
		return( optionalDispenserId.getReference() );
	}

	const bool CFBamId32GenByDispIdxKey::isOptionalDispenserIdNull() const {
		return( optionalDispenserId.isNull() );
	}

	void CFBamId32GenByDispIdxKey::setOptionalDispenserIdNull() {
		optionalDispenserId.setNull();
	}

	void CFBamId32GenByDispIdxKey::setOptionalDispenserIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalDispenserIdValue" );
		if( value < cfbam::CFBamId32GenBuff::DISPENSERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamId32GenBuff::DISPENSERID_MIN_VALUE );
		}
		optionalDispenserId.setValue( value );
	}

	size_t CFBamId32GenByDispIdxKey::hashCode() const {
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

	std::string CFBamId32GenByDispIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamId32GenByDispIdxKey" );
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

	bool CFBamId32GenByDispIdxKey::operator <( const CFBamId32GenByDispIdxKey& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator <( const CFBamId32GenHBuff& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator <( const CFBamId32GenBuff& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator <=( const CFBamId32GenByDispIdxKey& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator <=( const CFBamId32GenHBuff& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator <=( const CFBamId32GenBuff& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator ==( const CFBamId32GenByDispIdxKey& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator ==( const CFBamId32GenHBuff& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator ==( const CFBamId32GenBuff& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator !=( const CFBamId32GenByDispIdxKey& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator !=( const CFBamId32GenHBuff& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator !=( const CFBamId32GenBuff& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator >=( const CFBamId32GenByDispIdxKey& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator >=( const CFBamId32GenHBuff& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator >=( const CFBamId32GenBuff& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator >( const CFBamId32GenByDispIdxKey& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator >( const CFBamId32GenHBuff& rhs ) {
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

	bool CFBamId32GenByDispIdxKey::operator >( const CFBamId32GenBuff& rhs ) {
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
	CFBamId32GenByDispIdxKey CFBamId32GenByDispIdxKey::operator =( cfbam::CFBamId32GenByDispIdxKey& src ) {
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

	CFBamId32GenByDispIdxKey CFBamId32GenByDispIdxKey::operator =( cfbam::CFBamId32GenBuff& src ) {
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

	CFBamId32GenByDispIdxKey CFBamId32GenByDispIdxKey::operator =( cfbam::CFBamId32GenHBuff& src ) {
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

	bool operator <(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenByDispIdxKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenHBuff& rhs ) {
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

	bool operator <(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenBuff& rhs ) {
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

	bool operator <=(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenByDispIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenHBuff& rhs ) {
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

	bool operator <=(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenBuff& rhs ) {
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

	bool operator ==(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenByDispIdxKey& rhs ) {
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

	bool operator ==(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenHBuff& rhs ) {
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

	bool operator ==(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenBuff& rhs ) {
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

	bool operator !=(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenByDispIdxKey& rhs ) {
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

	bool operator !=(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenHBuff& rhs ) {
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

	bool operator !=(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenBuff& rhs ) {
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

	bool operator >=(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenByDispIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenHBuff& rhs ) {
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

	bool operator >=(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenBuff& rhs ) {
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

	bool operator >(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenByDispIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenHBuff& rhs ) {
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

	bool operator >(const  cfbam::CFBamId32GenByDispIdxKey& lhs, const cfbam::CFBamId32GenBuff& rhs ) {
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

