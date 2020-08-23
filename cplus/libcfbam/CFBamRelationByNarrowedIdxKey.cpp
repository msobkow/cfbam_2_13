// Description: C++18 implementation for a Relation by NarrowedIdx index key object.

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

#include <cfbam/CFBamRelationByNarrowedIdxKey.hpp>
#include <cfbam/CFBamRelationBuff.hpp>
#include <cfbam/CFBamRelationHBuff.hpp>

namespace cfbam {
	const std::string CFBamRelationByNarrowedIdxKey::CLASS_NAME( "CFBamRelationByNarrowedIdxKey" );
	const std::string CFBamRelationByNarrowedIdxKey::S_VALUE( "value" );
	const std::string CFBamRelationByNarrowedIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamRelationByNarrowedIdxKey::CFBamRelationByNarrowedIdxKey() {
		optionalNarrowedTenantId.setNull();
		optionalNarrowedId.setNull();
	}

	CFBamRelationByNarrowedIdxKey::CFBamRelationByNarrowedIdxKey( const CFBamRelationByNarrowedIdxKey& src ) {
		optionalNarrowedTenantId.setNull();
		optionalNarrowedId.setNull();
		if( src.isOptionalNarrowedTenantIdNull() ) {
			setOptionalNarrowedTenantIdNull();
		}
		else {
			setOptionalNarrowedTenantIdValue( src.getOptionalNarrowedTenantIdValue() );
		}
		if( src.isOptionalNarrowedIdNull() ) {
			setOptionalNarrowedIdNull();
		}
		else {
			setOptionalNarrowedIdValue( src.getOptionalNarrowedIdValue() );
		}
	}

	CFBamRelationByNarrowedIdxKey::~CFBamRelationByNarrowedIdxKey() {
	}

	const int64_t CFBamRelationByNarrowedIdxKey::getOptionalNarrowedTenantIdValue() const {
		return( optionalNarrowedTenantId.getValue() );
	}

	const int64_t* CFBamRelationByNarrowedIdxKey::getOptionalNarrowedTenantIdReference() const {
		return( optionalNarrowedTenantId.getReference() );
	}

	const bool CFBamRelationByNarrowedIdxKey::isOptionalNarrowedTenantIdNull() const {
		return( optionalNarrowedTenantId.isNull() );
	}

	void CFBamRelationByNarrowedIdxKey::setOptionalNarrowedTenantIdNull() {
		optionalNarrowedTenantId.setNull();
	}

	void CFBamRelationByNarrowedIdxKey::setOptionalNarrowedTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNarrowedTenantIdValue" );
		if( value < cfbam::CFBamRelationBuff::NARROWEDTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::NARROWEDTENANTID_MIN_VALUE );
		}
		optionalNarrowedTenantId.setValue( value );
	}

	const int64_t CFBamRelationByNarrowedIdxKey::getOptionalNarrowedIdValue() const {
		return( optionalNarrowedId.getValue() );
	}

	const int64_t* CFBamRelationByNarrowedIdxKey::getOptionalNarrowedIdReference() const {
		return( optionalNarrowedId.getReference() );
	}

	const bool CFBamRelationByNarrowedIdxKey::isOptionalNarrowedIdNull() const {
		return( optionalNarrowedId.isNull() );
	}

	void CFBamRelationByNarrowedIdxKey::setOptionalNarrowedIdNull() {
		optionalNarrowedId.setNull();
	}

	void CFBamRelationByNarrowedIdxKey::setOptionalNarrowedIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNarrowedIdValue" );
		if( value < cfbam::CFBamRelationBuff::NARROWEDID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::NARROWEDID_MIN_VALUE );
		}
		optionalNarrowedId.setValue( value );
	}

	size_t CFBamRelationByNarrowedIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalNarrowedTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNarrowedTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalNarrowedIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNarrowedIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFBamRelationByNarrowedIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamRelationByNarrowedIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_NarrowedTenantId( "NarrowedTenantId" );
		static const std::string S_NarrowedId( "NarrowedId" );
		std::string ret( S_Preamble );
		if( ! isOptionalNarrowedTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NarrowedTenantId, getOptionalNarrowedTenantIdValue() ) );
		}
		if( ! isOptionalNarrowedIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NarrowedId, getOptionalNarrowedIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamRelationByNarrowedIdxKey::operator <( const CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationByNarrowedIdxKey::operator <( const CFBamRelationHBuff& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationByNarrowedIdxKey::operator <( const CFBamRelationBuff& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationByNarrowedIdxKey::operator <=( const CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamRelationByNarrowedIdxKey::operator <=( const CFBamRelationHBuff& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamRelationByNarrowedIdxKey::operator <=( const CFBamRelationBuff& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamRelationByNarrowedIdxKey::operator ==( const CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				if( getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				if( getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationByNarrowedIdxKey::operator ==( const CFBamRelationHBuff& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				if( getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				if( getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationByNarrowedIdxKey::operator ==( const CFBamRelationBuff& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				if( getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				if( getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationByNarrowedIdxKey::operator !=( const CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationByNarrowedIdxKey::operator !=( const CFBamRelationHBuff& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationByNarrowedIdxKey::operator !=( const CFBamRelationBuff& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationByNarrowedIdxKey::operator >=( const CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationByNarrowedIdxKey::operator >=( const CFBamRelationHBuff& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationByNarrowedIdxKey::operator >=( const CFBamRelationBuff& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationByNarrowedIdxKey::operator >( const CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamRelationByNarrowedIdxKey::operator >( const CFBamRelationHBuff& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamRelationByNarrowedIdxKey::operator >( const CFBamRelationBuff& rhs ) {
		if( ! isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFBamRelationByNarrowedIdxKey CFBamRelationByNarrowedIdxKey::operator =( cfbam::CFBamRelationByNarrowedIdxKey& src ) {
		if( src.isOptionalNarrowedTenantIdNull() ) {
			setOptionalNarrowedTenantIdNull();
		}
		else {
			setOptionalNarrowedTenantIdValue( src.getOptionalNarrowedTenantIdValue() );
		}
		if( src.isOptionalNarrowedIdNull() ) {
			setOptionalNarrowedIdNull();
		}
		else {
			setOptionalNarrowedIdValue( src.getOptionalNarrowedIdValue() );
		}
		return( *this );
	}

	CFBamRelationByNarrowedIdxKey CFBamRelationByNarrowedIdxKey::operator =( cfbam::CFBamRelationBuff& src ) {
		if( src.isOptionalNarrowedTenantIdNull() ) {
			setOptionalNarrowedTenantIdNull();
		}
		else {
			setOptionalNarrowedTenantIdValue( src.getOptionalNarrowedTenantIdValue() );
		}
		if( src.isOptionalNarrowedIdNull() ) {
			setOptionalNarrowedIdNull();
		}
		else {
			setOptionalNarrowedIdValue( src.getOptionalNarrowedIdValue() );
		}
		return( *this );
	}

	CFBamRelationByNarrowedIdxKey CFBamRelationByNarrowedIdxKey::operator =( cfbam::CFBamRelationHBuff& src ) {
		if( src.isOptionalNarrowedTenantIdNull() ) {
			setOptionalNarrowedTenantIdNull();
		}
		else {
			setOptionalNarrowedTenantIdValue( src.getOptionalNarrowedTenantIdValue() );
		}
		if( src.isOptionalNarrowedIdNull() ) {
			setOptionalNarrowedIdNull();
		}
		else {
			setOptionalNarrowedIdValue( src.getOptionalNarrowedIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				if( lhs.getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				if( lhs.getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				if( lhs.getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				if( lhs.getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				if( lhs.getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				if( lhs.getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() != rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() != rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationByNarrowedIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( ! lhs.isOptionalNarrowedTenantIdNull() ) {
			if( rhs.isOptionalNarrowedTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedTenantIdValue() < rhs.getOptionalNarrowedTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedTenantIdValue() > rhs.getOptionalNarrowedTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNarrowedIdNull() ) {
			if( rhs.isOptionalNarrowedIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNarrowedIdValue() < rhs.getOptionalNarrowedIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNarrowedIdValue() > rhs.getOptionalNarrowedIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNarrowedIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

