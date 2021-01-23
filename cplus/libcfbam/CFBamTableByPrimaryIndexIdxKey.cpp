// Description: C++18 implementation for a Table by PrimaryIndexIdx index key object.

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

#include <cfbam/CFBamTableByPrimaryIndexIdxKey.hpp>
#include <cfbam/CFBamTableBuff.hpp>
#include <cfbam/CFBamTableHBuff.hpp>

namespace cfbam {
	const std::string CFBamTableByPrimaryIndexIdxKey::CLASS_NAME( "CFBamTableByPrimaryIndexIdxKey" );
	const std::string CFBamTableByPrimaryIndexIdxKey::S_VALUE( "value" );
	const std::string CFBamTableByPrimaryIndexIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamTableByPrimaryIndexIdxKey::CFBamTableByPrimaryIndexIdxKey() {
		optionalPrimaryIndexTenantId.setNull();
		optionalPrimaryIndexId.setNull();
	}

	CFBamTableByPrimaryIndexIdxKey::CFBamTableByPrimaryIndexIdxKey( const CFBamTableByPrimaryIndexIdxKey& src ) {
		optionalPrimaryIndexTenantId.setNull();
		optionalPrimaryIndexId.setNull();
		if( src.isOptionalPrimaryIndexTenantIdNull() ) {
			setOptionalPrimaryIndexTenantIdNull();
		}
		else {
			setOptionalPrimaryIndexTenantIdValue( src.getOptionalPrimaryIndexTenantIdValue() );
		}
		if( src.isOptionalPrimaryIndexIdNull() ) {
			setOptionalPrimaryIndexIdNull();
		}
		else {
			setOptionalPrimaryIndexIdValue( src.getOptionalPrimaryIndexIdValue() );
		}
	}

	CFBamTableByPrimaryIndexIdxKey::~CFBamTableByPrimaryIndexIdxKey() {
	}

	const int64_t CFBamTableByPrimaryIndexIdxKey::getOptionalPrimaryIndexTenantIdValue() const {
		return( optionalPrimaryIndexTenantId.getValue() );
	}

	const int64_t* CFBamTableByPrimaryIndexIdxKey::getOptionalPrimaryIndexTenantIdReference() const {
		return( optionalPrimaryIndexTenantId.getReference() );
	}

	const bool CFBamTableByPrimaryIndexIdxKey::isOptionalPrimaryIndexTenantIdNull() const {
		return( optionalPrimaryIndexTenantId.isNull() );
	}

	void CFBamTableByPrimaryIndexIdxKey::setOptionalPrimaryIndexTenantIdNull() {
		optionalPrimaryIndexTenantId.setNull();
	}

	void CFBamTableByPrimaryIndexIdxKey::setOptionalPrimaryIndexTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalPrimaryIndexTenantIdValue" );
		if( value < cfbam::CFBamTableBuff::PRIMARYINDEXTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTableBuff::PRIMARYINDEXTENANTID_MIN_VALUE );
		}
		optionalPrimaryIndexTenantId.setValue( value );
	}

	const int64_t CFBamTableByPrimaryIndexIdxKey::getOptionalPrimaryIndexIdValue() const {
		return( optionalPrimaryIndexId.getValue() );
	}

	const int64_t* CFBamTableByPrimaryIndexIdxKey::getOptionalPrimaryIndexIdReference() const {
		return( optionalPrimaryIndexId.getReference() );
	}

	const bool CFBamTableByPrimaryIndexIdxKey::isOptionalPrimaryIndexIdNull() const {
		return( optionalPrimaryIndexId.isNull() );
	}

	void CFBamTableByPrimaryIndexIdxKey::setOptionalPrimaryIndexIdNull() {
		optionalPrimaryIndexId.setNull();
	}

	void CFBamTableByPrimaryIndexIdxKey::setOptionalPrimaryIndexIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalPrimaryIndexIdValue" );
		if( value < cfbam::CFBamTableBuff::PRIMARYINDEXID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTableBuff::PRIMARYINDEXID_MIN_VALUE );
		}
		optionalPrimaryIndexId.setValue( value );
	}

	size_t CFBamTableByPrimaryIndexIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalPrimaryIndexTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalPrimaryIndexIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFBamTableByPrimaryIndexIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTableByPrimaryIndexIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_PrimaryIndexTenantId( "PrimaryIndexTenantId" );
		static const std::string S_PrimaryIndexId( "PrimaryIndexId" );
		std::string ret( S_Preamble );
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrimaryIndexTenantId, getOptionalPrimaryIndexTenantIdValue() ) );
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrimaryIndexId, getOptionalPrimaryIndexIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator <( const CFBamTableByPrimaryIndexIdxKey& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
			if( getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator <( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
			if( getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator <( const CFBamTableBuff& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
			if( getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator <=( const CFBamTableByPrimaryIndexIdxKey& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
			if( getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator <=( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
			if( getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator <=( const CFBamTableBuff& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
			if( getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator ==( const CFBamTableByPrimaryIndexIdxKey& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				if( getOptionalPrimaryIndexTenantIdValue() != rhs.getOptionalPrimaryIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				if( getOptionalPrimaryIndexIdValue() != rhs.getOptionalPrimaryIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator ==( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				if( getOptionalPrimaryIndexTenantIdValue() != rhs.getOptionalPrimaryIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				if( getOptionalPrimaryIndexIdValue() != rhs.getOptionalPrimaryIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator ==( const CFBamTableBuff& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				if( getOptionalPrimaryIndexTenantIdValue() != rhs.getOptionalPrimaryIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				if( getOptionalPrimaryIndexIdValue() != rhs.getOptionalPrimaryIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator !=( const CFBamTableByPrimaryIndexIdxKey& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexTenantIdValue() != rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexIdValue() != rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator !=( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexTenantIdValue() != rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexIdValue() != rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator !=( const CFBamTableBuff& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexTenantIdValue() != rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexIdValue() != rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator >=( const CFBamTableByPrimaryIndexIdxKey& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator >=( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator >=( const CFBamTableBuff& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator >( const CFBamTableByPrimaryIndexIdxKey& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator >( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamTableByPrimaryIndexIdxKey::operator >( const CFBamTableBuff& rhs ) {
		if( ! isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFBamTableByPrimaryIndexIdxKey CFBamTableByPrimaryIndexIdxKey::operator =( cfbam::CFBamTableByPrimaryIndexIdxKey& src ) {
		if( src.isOptionalPrimaryIndexTenantIdNull() ) {
			setOptionalPrimaryIndexTenantIdNull();
		}
		else {
			setOptionalPrimaryIndexTenantIdValue( src.getOptionalPrimaryIndexTenantIdValue() );
		}
		if( src.isOptionalPrimaryIndexIdNull() ) {
			setOptionalPrimaryIndexIdNull();
		}
		else {
			setOptionalPrimaryIndexIdValue( src.getOptionalPrimaryIndexIdValue() );
		}
		return( *this );
	}

	CFBamTableByPrimaryIndexIdxKey CFBamTableByPrimaryIndexIdxKey::operator =( cfbam::CFBamTableBuff& src ) {
		if( src.isOptionalPrimaryIndexTenantIdNull() ) {
			setOptionalPrimaryIndexTenantIdNull();
		}
		else {
			setOptionalPrimaryIndexTenantIdValue( src.getOptionalPrimaryIndexTenantIdValue() );
		}
		if( src.isOptionalPrimaryIndexIdNull() ) {
			setOptionalPrimaryIndexIdNull();
		}
		else {
			setOptionalPrimaryIndexIdValue( src.getOptionalPrimaryIndexIdValue() );
		}
		return( *this );
	}

	CFBamTableByPrimaryIndexIdxKey CFBamTableByPrimaryIndexIdxKey::operator =( cfbam::CFBamTableHBuff& src ) {
		if( src.isOptionalPrimaryIndexTenantIdNull() ) {
			setOptionalPrimaryIndexTenantIdNull();
		}
		else {
			setOptionalPrimaryIndexTenantIdValue( src.getOptionalPrimaryIndexTenantIdValue() );
		}
		if( src.isOptionalPrimaryIndexIdNull() ) {
			setOptionalPrimaryIndexIdNull();
		}
		else {
			setOptionalPrimaryIndexIdValue( src.getOptionalPrimaryIndexIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				if( lhs.getOptionalPrimaryIndexTenantIdValue() != rhs.getOptionalPrimaryIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				if( lhs.getOptionalPrimaryIndexIdValue() != rhs.getOptionalPrimaryIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				if( lhs.getOptionalPrimaryIndexTenantIdValue() != rhs.getOptionalPrimaryIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				if( lhs.getOptionalPrimaryIndexIdValue() != rhs.getOptionalPrimaryIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				if( lhs.getOptionalPrimaryIndexTenantIdValue() != rhs.getOptionalPrimaryIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				if( lhs.getOptionalPrimaryIndexIdValue() != rhs.getOptionalPrimaryIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() != rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() != rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() != rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() != rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() != rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() != rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalPrimaryIndexTenantIdNull() ) {
			if( rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexTenantIdValue() < rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexTenantIdValue() > rhs.getOptionalPrimaryIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalPrimaryIndexIdNull() ) {
			if( rhs.isOptionalPrimaryIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalPrimaryIndexIdValue() < rhs.getOptionalPrimaryIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPrimaryIndexIdValue() > rhs.getOptionalPrimaryIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPrimaryIndexIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

