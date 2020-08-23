// Description: C++18 implementation for a Table by QualTableIdx index key object.

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

#include <cfbam/CFBamTableByQualTableIdxKey.hpp>
#include <cfbam/CFBamTableBuff.hpp>
#include <cfbam/CFBamTableHBuff.hpp>

namespace cfbam {
	const std::string CFBamTableByQualTableIdxKey::CLASS_NAME( "CFBamTableByQualTableIdxKey" );
	const std::string CFBamTableByQualTableIdxKey::S_VALUE( "value" );
	const std::string CFBamTableByQualTableIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamTableByQualTableIdxKey::CFBamTableByQualTableIdxKey() {
		optionalQualifyingTenantId.setNull();
		optionalQualifyingTableId.setNull();
	}

	CFBamTableByQualTableIdxKey::CFBamTableByQualTableIdxKey( const CFBamTableByQualTableIdxKey& src ) {
		optionalQualifyingTenantId.setNull();
		optionalQualifyingTableId.setNull();
		if( src.isOptionalQualifyingTenantIdNull() ) {
			setOptionalQualifyingTenantIdNull();
		}
		else {
			setOptionalQualifyingTenantIdValue( src.getOptionalQualifyingTenantIdValue() );
		}
		if( src.isOptionalQualifyingTableIdNull() ) {
			setOptionalQualifyingTableIdNull();
		}
		else {
			setOptionalQualifyingTableIdValue( src.getOptionalQualifyingTableIdValue() );
		}
	}

	CFBamTableByQualTableIdxKey::~CFBamTableByQualTableIdxKey() {
	}

	const int64_t CFBamTableByQualTableIdxKey::getOptionalQualifyingTenantIdValue() const {
		return( optionalQualifyingTenantId.getValue() );
	}

	const int64_t* CFBamTableByQualTableIdxKey::getOptionalQualifyingTenantIdReference() const {
		return( optionalQualifyingTenantId.getReference() );
	}

	const bool CFBamTableByQualTableIdxKey::isOptionalQualifyingTenantIdNull() const {
		return( optionalQualifyingTenantId.isNull() );
	}

	void CFBamTableByQualTableIdxKey::setOptionalQualifyingTenantIdNull() {
		optionalQualifyingTenantId.setNull();
	}

	void CFBamTableByQualTableIdxKey::setOptionalQualifyingTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalQualifyingTenantIdValue" );
		if( value < cfbam::CFBamTableBuff::QUALIFYINGTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTableBuff::QUALIFYINGTENANTID_MIN_VALUE );
		}
		optionalQualifyingTenantId.setValue( value );
	}

	const int64_t CFBamTableByQualTableIdxKey::getOptionalQualifyingTableIdValue() const {
		return( optionalQualifyingTableId.getValue() );
	}

	const int64_t* CFBamTableByQualTableIdxKey::getOptionalQualifyingTableIdReference() const {
		return( optionalQualifyingTableId.getReference() );
	}

	const bool CFBamTableByQualTableIdxKey::isOptionalQualifyingTableIdNull() const {
		return( optionalQualifyingTableId.isNull() );
	}

	void CFBamTableByQualTableIdxKey::setOptionalQualifyingTableIdNull() {
		optionalQualifyingTableId.setNull();
	}

	void CFBamTableByQualTableIdxKey::setOptionalQualifyingTableIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalQualifyingTableIdValue" );
		if( value < cfbam::CFBamTableBuff::QUALIFYINGTABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTableBuff::QUALIFYINGTABLEID_MIN_VALUE );
		}
		optionalQualifyingTableId.setValue( value );
	}

	size_t CFBamTableByQualTableIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalQualifyingTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalQualifyingTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalQualifyingTableIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFBamTableByQualTableIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTableByQualTableIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_QualifyingTenantId( "QualifyingTenantId" );
		static const std::string S_QualifyingTableId( "QualifyingTableId" );
		std::string ret( S_Preamble );
		if( ! isOptionalQualifyingTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_QualifyingTenantId, getOptionalQualifyingTenantIdValue() ) );
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_QualifyingTableId, getOptionalQualifyingTableIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamTableByQualTableIdxKey::operator <( const CFBamTableByQualTableIdxKey& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
			if( getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
			if( getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByQualTableIdxKey::operator <( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
			if( getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
			if( getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByQualTableIdxKey::operator <( const CFBamTableBuff& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
			if( getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
			if( getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByQualTableIdxKey::operator <=( const CFBamTableByQualTableIdxKey& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
			if( getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
			if( getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableByQualTableIdxKey::operator <=( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
			if( getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
			if( getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableByQualTableIdxKey::operator <=( const CFBamTableBuff& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
			if( getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
			if( getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamTableByQualTableIdxKey::operator ==( const CFBamTableByQualTableIdxKey& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				if( getOptionalQualifyingTenantIdValue() != rhs.getOptionalQualifyingTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				if( getOptionalQualifyingTableIdValue() != rhs.getOptionalQualifyingTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByQualTableIdxKey::operator ==( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				if( getOptionalQualifyingTenantIdValue() != rhs.getOptionalQualifyingTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				if( getOptionalQualifyingTableIdValue() != rhs.getOptionalQualifyingTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByQualTableIdxKey::operator ==( const CFBamTableBuff& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				if( getOptionalQualifyingTenantIdValue() != rhs.getOptionalQualifyingTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				if( getOptionalQualifyingTableIdValue() != rhs.getOptionalQualifyingTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByQualTableIdxKey::operator !=( const CFBamTableByQualTableIdxKey& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTenantIdValue() != rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTableIdValue() != rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByQualTableIdxKey::operator !=( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTenantIdValue() != rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTableIdValue() != rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByQualTableIdxKey::operator !=( const CFBamTableBuff& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTenantIdValue() != rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTableIdValue() != rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamTableByQualTableIdxKey::operator >=( const CFBamTableByQualTableIdxKey& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByQualTableIdxKey::operator >=( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByQualTableIdxKey::operator >=( const CFBamTableBuff& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamTableByQualTableIdxKey::operator >( const CFBamTableByQualTableIdxKey& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamTableByQualTableIdxKey::operator >( const CFBamTableHBuff& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamTableByQualTableIdxKey::operator >( const CFBamTableBuff& rhs ) {
		if( ! isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFBamTableByQualTableIdxKey CFBamTableByQualTableIdxKey::operator =( cfbam::CFBamTableByQualTableIdxKey& src ) {
		if( src.isOptionalQualifyingTenantIdNull() ) {
			setOptionalQualifyingTenantIdNull();
		}
		else {
			setOptionalQualifyingTenantIdValue( src.getOptionalQualifyingTenantIdValue() );
		}
		if( src.isOptionalQualifyingTableIdNull() ) {
			setOptionalQualifyingTableIdNull();
		}
		else {
			setOptionalQualifyingTableIdValue( src.getOptionalQualifyingTableIdValue() );
		}
		return( *this );
	}

	CFBamTableByQualTableIdxKey CFBamTableByQualTableIdxKey::operator =( cfbam::CFBamTableBuff& src ) {
		if( src.isOptionalQualifyingTenantIdNull() ) {
			setOptionalQualifyingTenantIdNull();
		}
		else {
			setOptionalQualifyingTenantIdValue( src.getOptionalQualifyingTenantIdValue() );
		}
		if( src.isOptionalQualifyingTableIdNull() ) {
			setOptionalQualifyingTableIdNull();
		}
		else {
			setOptionalQualifyingTableIdValue( src.getOptionalQualifyingTableIdValue() );
		}
		return( *this );
	}

	CFBamTableByQualTableIdxKey CFBamTableByQualTableIdxKey::operator =( cfbam::CFBamTableHBuff& src ) {
		if( src.isOptionalQualifyingTenantIdNull() ) {
			setOptionalQualifyingTenantIdNull();
		}
		else {
			setOptionalQualifyingTenantIdValue( src.getOptionalQualifyingTenantIdValue() );
		}
		if( src.isOptionalQualifyingTableIdNull() ) {
			setOptionalQualifyingTableIdNull();
		}
		else {
			setOptionalQualifyingTableIdValue( src.getOptionalQualifyingTableIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableByQualTableIdxKey& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableByQualTableIdxKey& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableByQualTableIdxKey& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				if( lhs.getOptionalQualifyingTenantIdValue() != rhs.getOptionalQualifyingTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				if( lhs.getOptionalQualifyingTableIdValue() != rhs.getOptionalQualifyingTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				if( lhs.getOptionalQualifyingTenantIdValue() != rhs.getOptionalQualifyingTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				if( lhs.getOptionalQualifyingTableIdValue() != rhs.getOptionalQualifyingTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				if( lhs.getOptionalQualifyingTenantIdValue() != rhs.getOptionalQualifyingTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				if( lhs.getOptionalQualifyingTableIdValue() != rhs.getOptionalQualifyingTableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableByQualTableIdxKey& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() != rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTableIdValue() != rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() != rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTableIdValue() != rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() != rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTableIdValue() != rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableByQualTableIdxKey& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableByQualTableIdxKey& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableByQualTableIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( ! lhs.isOptionalQualifyingTenantIdNull() ) {
			if( rhs.isOptionalQualifyingTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTenantIdValue() < rhs.getOptionalQualifyingTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTenantIdValue() > rhs.getOptionalQualifyingTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalQualifyingTableIdNull() ) {
			if( rhs.isOptionalQualifyingTableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalQualifyingTableIdValue() < rhs.getOptionalQualifyingTableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalQualifyingTableIdValue() > rhs.getOptionalQualifyingTableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalQualifyingTableIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

