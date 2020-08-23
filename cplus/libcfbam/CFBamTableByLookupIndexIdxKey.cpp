// Description: C++18 implementation for a Table by LookupIndexIdx index key object.

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

#include <cfbam/CFBamTableByLookupIndexIdxKey.hpp>
#include <cfbam/CFBamTableBuff.hpp>
#include <cfbam/CFBamTableHBuff.hpp>

namespace cfbam {
	const std::string CFBamTableByLookupIndexIdxKey::CLASS_NAME( "CFBamTableByLookupIndexIdxKey" );
	const std::string CFBamTableByLookupIndexIdxKey::S_VALUE( "value" );
	const std::string CFBamTableByLookupIndexIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamTableByLookupIndexIdxKey::CFBamTableByLookupIndexIdxKey() {
		optionalLookupIndexTenantId.setNull();
		optionalLookupIndexId.setNull();
	}

	CFBamTableByLookupIndexIdxKey::CFBamTableByLookupIndexIdxKey( const CFBamTableByLookupIndexIdxKey& src ) {
		optionalLookupIndexTenantId.setNull();
		optionalLookupIndexId.setNull();
		if( src.isOptionalLookupIndexTenantIdNull() ) {
			setOptionalLookupIndexTenantIdNull();
		}
		else {
			setOptionalLookupIndexTenantIdValue( src.getOptionalLookupIndexTenantIdValue() );
		}
		if( src.isOptionalLookupIndexIdNull() ) {
			setOptionalLookupIndexIdNull();
		}
		else {
			setOptionalLookupIndexIdValue( src.getOptionalLookupIndexIdValue() );
		}
	}

	CFBamTableByLookupIndexIdxKey::~CFBamTableByLookupIndexIdxKey() {
	}

	const int64_t CFBamTableByLookupIndexIdxKey::getOptionalLookupIndexTenantIdValue() const {
		return( optionalLookupIndexTenantId.getValue() );
	}

	const int64_t* CFBamTableByLookupIndexIdxKey::getOptionalLookupIndexTenantIdReference() const {
		return( optionalLookupIndexTenantId.getReference() );
	}

	const bool CFBamTableByLookupIndexIdxKey::isOptionalLookupIndexTenantIdNull() const {
		return( optionalLookupIndexTenantId.isNull() );
	}

	void CFBamTableByLookupIndexIdxKey::setOptionalLookupIndexTenantIdNull() {
		optionalLookupIndexTenantId.setNull();
	}

	void CFBamTableByLookupIndexIdxKey::setOptionalLookupIndexTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalLookupIndexTenantIdValue" );
		if( value < cfbam::CFBamTableBuff::LOOKUPINDEXTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTableBuff::LOOKUPINDEXTENANTID_MIN_VALUE );
		}
		optionalLookupIndexTenantId.setValue( value );
	}

	const int64_t CFBamTableByLookupIndexIdxKey::getOptionalLookupIndexIdValue() const {
		return( optionalLookupIndexId.getValue() );
	}

	const int64_t* CFBamTableByLookupIndexIdxKey::getOptionalLookupIndexIdReference() const {
		return( optionalLookupIndexId.getReference() );
	}

	const bool CFBamTableByLookupIndexIdxKey::isOptionalLookupIndexIdNull() const {
		return( optionalLookupIndexId.isNull() );
	}

	void CFBamTableByLookupIndexIdxKey::setOptionalLookupIndexIdNull() {
		optionalLookupIndexId.setNull();
	}

	void CFBamTableByLookupIndexIdxKey::setOptionalLookupIndexIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalLookupIndexIdValue" );
		if( value < cfbam::CFBamTableBuff::LOOKUPINDEXID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTableBuff::LOOKUPINDEXID_MIN_VALUE );
		}
		optionalLookupIndexId.setValue( value );
	}

	size_t CFBamTableByLookupIndexIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalLookupIndexTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalLookupIndexIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFBamTableByLookupIndexIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTableByLookupIndexIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_LookupIndexTenantId( "LookupIndexTenantId" );
		static const std::string S_LookupIndexId( "LookupIndexId" );
		std::string ret( S_Preamble );
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LookupIndexTenantId, getOptionalLookupIndexTenantIdValue() ) );
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LookupIndexId, getOptionalLookupIndexIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamTableByLookupIndexIdxKey::operator <( const CFBamTableByLookupIndexIdxKey& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
			if( getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByLookupIndexIdxKey::operator <( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
			if( getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByLookupIndexIdxKey::operator <( const CFBamTableBuff& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
			if( getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByLookupIndexIdxKey::operator <=( const CFBamTableByLookupIndexIdxKey& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
			if( getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableByLookupIndexIdxKey::operator <=( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
			if( getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableByLookupIndexIdxKey::operator <=( const CFBamTableBuff& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
			if( getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
			if( getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableByLookupIndexIdxKey::operator ==( const CFBamTableByLookupIndexIdxKey& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				if( getOptionalLookupIndexTenantIdValue() != rhs.getOptionalLookupIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				if( getOptionalLookupIndexIdValue() != rhs.getOptionalLookupIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByLookupIndexIdxKey::operator ==( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				if( getOptionalLookupIndexTenantIdValue() != rhs.getOptionalLookupIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				if( getOptionalLookupIndexIdValue() != rhs.getOptionalLookupIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByLookupIndexIdxKey::operator ==( const CFBamTableBuff& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				if( getOptionalLookupIndexTenantIdValue() != rhs.getOptionalLookupIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				if( getOptionalLookupIndexIdValue() != rhs.getOptionalLookupIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByLookupIndexIdxKey::operator !=( const CFBamTableByLookupIndexIdxKey& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexTenantIdValue() != rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexIdValue() != rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByLookupIndexIdxKey::operator !=( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexTenantIdValue() != rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexIdValue() != rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByLookupIndexIdxKey::operator !=( const CFBamTableBuff& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexTenantIdValue() != rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexIdValue() != rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByLookupIndexIdxKey::operator >=( const CFBamTableByLookupIndexIdxKey& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByLookupIndexIdxKey::operator >=( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByLookupIndexIdxKey::operator >=( const CFBamTableBuff& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByLookupIndexIdxKey::operator >( const CFBamTableByLookupIndexIdxKey& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamTableByLookupIndexIdxKey::operator >( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamTableByLookupIndexIdxKey::operator >( const CFBamTableBuff& rhs ) {
		if( ! isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFBamTableByLookupIndexIdxKey CFBamTableByLookupIndexIdxKey::operator =( cfbam::CFBamTableByLookupIndexIdxKey& src ) {
		if( src.isOptionalLookupIndexTenantIdNull() ) {
			setOptionalLookupIndexTenantIdNull();
		}
		else {
			setOptionalLookupIndexTenantIdValue( src.getOptionalLookupIndexTenantIdValue() );
		}
		if( src.isOptionalLookupIndexIdNull() ) {
			setOptionalLookupIndexIdNull();
		}
		else {
			setOptionalLookupIndexIdValue( src.getOptionalLookupIndexIdValue() );
		}
		return( *this );
	}

	CFBamTableByLookupIndexIdxKey CFBamTableByLookupIndexIdxKey::operator =( cfbam::CFBamTableBuff& src ) {
		if( src.isOptionalLookupIndexTenantIdNull() ) {
			setOptionalLookupIndexTenantIdNull();
		}
		else {
			setOptionalLookupIndexTenantIdValue( src.getOptionalLookupIndexTenantIdValue() );
		}
		if( src.isOptionalLookupIndexIdNull() ) {
			setOptionalLookupIndexIdNull();
		}
		else {
			setOptionalLookupIndexIdValue( src.getOptionalLookupIndexIdValue() );
		}
		return( *this );
	}

	CFBamTableByLookupIndexIdxKey CFBamTableByLookupIndexIdxKey::operator =( cfbam::CFBamTableHBuff& src ) {
		if( src.isOptionalLookupIndexTenantIdNull() ) {
			setOptionalLookupIndexTenantIdNull();
		}
		else {
			setOptionalLookupIndexTenantIdValue( src.getOptionalLookupIndexTenantIdValue() );
		}
		if( src.isOptionalLookupIndexIdNull() ) {
			setOptionalLookupIndexIdNull();
		}
		else {
			setOptionalLookupIndexIdValue( src.getOptionalLookupIndexIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableByLookupIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableByLookupIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableByLookupIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				if( lhs.getOptionalLookupIndexTenantIdValue() != rhs.getOptionalLookupIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				if( lhs.getOptionalLookupIndexIdValue() != rhs.getOptionalLookupIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				if( lhs.getOptionalLookupIndexTenantIdValue() != rhs.getOptionalLookupIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				if( lhs.getOptionalLookupIndexIdValue() != rhs.getOptionalLookupIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				if( lhs.getOptionalLookupIndexTenantIdValue() != rhs.getOptionalLookupIndexTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				if( lhs.getOptionalLookupIndexIdValue() != rhs.getOptionalLookupIndexIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableByLookupIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() != rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexIdValue() != rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() != rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexIdValue() != rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() != rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexIdValue() != rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableByLookupIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableByLookupIndexIdxKey& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableByLookupIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalLookupIndexTenantIdNull() ) {
			if( rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexTenantIdValue() < rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexTenantIdValue() > rhs.getOptionalLookupIndexTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalLookupIndexIdNull() ) {
			if( rhs.isOptionalLookupIndexIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalLookupIndexIdValue() < rhs.getOptionalLookupIndexIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalLookupIndexIdValue() > rhs.getOptionalLookupIndexIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalLookupIndexIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

