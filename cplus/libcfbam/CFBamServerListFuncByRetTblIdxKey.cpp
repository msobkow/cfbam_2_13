// Description: C++18 implementation for a ServerListFunc by RetTblIdx index key object.

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

#include <cfbam/CFBamServerListFuncByRetTblIdxKey.hpp>
#include <cfbam/CFBamServerListFuncBuff.hpp>
#include <cfbam/CFBamServerListFuncHBuff.hpp>

namespace cfbam {
	const std::string CFBamServerListFuncByRetTblIdxKey::CLASS_NAME( "CFBamServerListFuncByRetTblIdxKey" );
	const std::string CFBamServerListFuncByRetTblIdxKey::S_VALUE( "value" );
	const std::string CFBamServerListFuncByRetTblIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamServerListFuncByRetTblIdxKey::CFBamServerListFuncByRetTblIdxKey() {
		optionalRetTenantId.setNull();
		optionalRetTableId.setNull();
	}

	CFBamServerListFuncByRetTblIdxKey::CFBamServerListFuncByRetTblIdxKey( const CFBamServerListFuncByRetTblIdxKey& src ) {
		optionalRetTenantId.setNull();
		optionalRetTableId.setNull();
		if( src.isOptionalRetTenantIdNull() ) {
			setOptionalRetTenantIdNull();
		}
		else {
			setOptionalRetTenantIdValue( src.getOptionalRetTenantIdValue() );
		}
		if( src.isOptionalRetTableIdNull() ) {
			setOptionalRetTableIdNull();
		}
		else {
			setOptionalRetTableIdValue( src.getOptionalRetTableIdValue() );
		}
	}

	CFBamServerListFuncByRetTblIdxKey::~CFBamServerListFuncByRetTblIdxKey() {
	}

	const int64_t CFBamServerListFuncByRetTblIdxKey::getOptionalRetTenantIdValue() const {
		return( optionalRetTenantId.getValue() );
	}

	const int64_t* CFBamServerListFuncByRetTblIdxKey::getOptionalRetTenantIdReference() const {
		return( optionalRetTenantId.getReference() );
	}

	const bool CFBamServerListFuncByRetTblIdxKey::isOptionalRetTenantIdNull() const {
		return( optionalRetTenantId.isNull() );
	}

	void CFBamServerListFuncByRetTblIdxKey::setOptionalRetTenantIdNull() {
		optionalRetTenantId.setNull();
	}

	void CFBamServerListFuncByRetTblIdxKey::setOptionalRetTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRetTenantIdValue" );
		if( value < cfbam::CFBamServerListFuncBuff::RETTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamServerListFuncBuff::RETTENANTID_MIN_VALUE );
		}
		optionalRetTenantId.setValue( value );
	}

	const int64_t CFBamServerListFuncByRetTblIdxKey::getOptionalRetTableIdValue() const {
		return( optionalRetTableId.getValue() );
	}

	const int64_t* CFBamServerListFuncByRetTblIdxKey::getOptionalRetTableIdReference() const {
		return( optionalRetTableId.getReference() );
	}

	const bool CFBamServerListFuncByRetTblIdxKey::isOptionalRetTableIdNull() const {
		return( optionalRetTableId.isNull() );
	}

	void CFBamServerListFuncByRetTblIdxKey::setOptionalRetTableIdNull() {
		optionalRetTableId.setNull();
	}

	void CFBamServerListFuncByRetTblIdxKey::setOptionalRetTableIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRetTableIdValue" );
		if( value < cfbam::CFBamServerListFuncBuff::RETTABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamServerListFuncBuff::RETTABLEID_MIN_VALUE );
		}
		optionalRetTableId.setValue( value );
	}

	size_t CFBamServerListFuncByRetTblIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalRetTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalRetTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalRetTableIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalRetTableIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFBamServerListFuncByRetTblIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamServerListFuncByRetTblIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_RetTenantId( "RetTenantId" );
		static const std::string S_RetTableId( "RetTableId" );
		std::string ret( S_Preamble );
		if( ! isOptionalRetTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RetTenantId, getOptionalRetTenantIdValue() ) );
		}
		if( ! isOptionalRetTableIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RetTableId, getOptionalRetTableIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator <( const CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator <( const CFBamServerListFuncHBuff& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator <( const CFBamServerListFuncBuff& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator <=( const CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator <=( const CFBamServerListFuncHBuff& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator <=( const CFBamServerListFuncBuff& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator ==( const CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				if( getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				if( getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator ==( const CFBamServerListFuncHBuff& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				if( getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				if( getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator ==( const CFBamServerListFuncBuff& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				if( getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				if( getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator !=( const CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator !=( const CFBamServerListFuncHBuff& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator !=( const CFBamServerListFuncBuff& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator >=( const CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator >=( const CFBamServerListFuncHBuff& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator >=( const CFBamServerListFuncBuff& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator >( const CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator >( const CFBamServerListFuncHBuff& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamServerListFuncByRetTblIdxKey::operator >( const CFBamServerListFuncBuff& rhs ) {
		if( ! isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFBamServerListFuncByRetTblIdxKey CFBamServerListFuncByRetTblIdxKey::operator =( cfbam::CFBamServerListFuncByRetTblIdxKey& src ) {
		if( src.isOptionalRetTenantIdNull() ) {
			setOptionalRetTenantIdNull();
		}
		else {
			setOptionalRetTenantIdValue( src.getOptionalRetTenantIdValue() );
		}
		if( src.isOptionalRetTableIdNull() ) {
			setOptionalRetTableIdNull();
		}
		else {
			setOptionalRetTableIdValue( src.getOptionalRetTableIdValue() );
		}
		return( *this );
	}

	CFBamServerListFuncByRetTblIdxKey CFBamServerListFuncByRetTblIdxKey::operator =( cfbam::CFBamServerListFuncBuff& src ) {
		if( src.isOptionalRetTenantIdNull() ) {
			setOptionalRetTenantIdNull();
		}
		else {
			setOptionalRetTenantIdValue( src.getOptionalRetTenantIdValue() );
		}
		if( src.isOptionalRetTableIdNull() ) {
			setOptionalRetTableIdNull();
		}
		else {
			setOptionalRetTableIdValue( src.getOptionalRetTableIdValue() );
		}
		return( *this );
	}

	CFBamServerListFuncByRetTblIdxKey CFBamServerListFuncByRetTblIdxKey::operator =( cfbam::CFBamServerListFuncHBuff& src ) {
		if( src.isOptionalRetTenantIdNull() ) {
			setOptionalRetTenantIdNull();
		}
		else {
			setOptionalRetTenantIdValue( src.getOptionalRetTenantIdValue() );
		}
		if( src.isOptionalRetTableIdNull() ) {
			setOptionalRetTableIdNull();
		}
		else {
			setOptionalRetTableIdValue( src.getOptionalRetTableIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncHBuff& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncBuff& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncHBuff& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncBuff& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				if( lhs.getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				if( lhs.getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncHBuff& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				if( lhs.getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				if( lhs.getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncBuff& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				if( lhs.getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				if( lhs.getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncHBuff& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncBuff& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() != rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() != rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncHBuff& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncBuff& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncHBuff& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncBuff& rhs ) {
		if( ! lhs.isOptionalRetTenantIdNull() ) {
			if( rhs.isOptionalRetTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTenantIdValue() < rhs.getOptionalRetTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTenantIdValue() > rhs.getOptionalRetTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRetTableIdNull() ) {
			if( rhs.isOptionalRetTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRetTableIdValue() < rhs.getOptionalRetTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRetTableIdValue() > rhs.getOptionalRetTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRetTableIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

