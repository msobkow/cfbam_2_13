// Description: C++18 implementation for a RelationCol by NextIdx index key object.

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

#include <cfbam/CFBamRelationColByNextIdxKey.hpp>
#include <cfbam/CFBamRelationColBuff.hpp>
#include <cfbam/CFBamRelationColHBuff.hpp>

namespace cfbam {
	const std::string CFBamRelationColByNextIdxKey::CLASS_NAME( "CFBamRelationColByNextIdxKey" );
	const std::string CFBamRelationColByNextIdxKey::S_VALUE( "value" );
	const std::string CFBamRelationColByNextIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamRelationColByNextIdxKey::CFBamRelationColByNextIdxKey() {
		optionalNextTenantId.setNull();
		optionalNextId.setNull();
	}

	CFBamRelationColByNextIdxKey::CFBamRelationColByNextIdxKey( const CFBamRelationColByNextIdxKey& src ) {
		optionalNextTenantId.setNull();
		optionalNextId.setNull();
		if( src.isOptionalNextTenantIdNull() ) {
			setOptionalNextTenantIdNull();
		}
		else {
			setOptionalNextTenantIdValue( src.getOptionalNextTenantIdValue() );
		}
		if( src.isOptionalNextIdNull() ) {
			setOptionalNextIdNull();
		}
		else {
			setOptionalNextIdValue( src.getOptionalNextIdValue() );
		}
	}

	CFBamRelationColByNextIdxKey::~CFBamRelationColByNextIdxKey() {
	}

	const int64_t CFBamRelationColByNextIdxKey::getOptionalNextTenantIdValue() const {
		return( optionalNextTenantId.getValue() );
	}

	const int64_t* CFBamRelationColByNextIdxKey::getOptionalNextTenantIdReference() const {
		return( optionalNextTenantId.getReference() );
	}

	const bool CFBamRelationColByNextIdxKey::isOptionalNextTenantIdNull() const {
		return( optionalNextTenantId.isNull() );
	}

	void CFBamRelationColByNextIdxKey::setOptionalNextTenantIdNull() {
		optionalNextTenantId.setNull();
	}

	void CFBamRelationColByNextIdxKey::setOptionalNextTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNextTenantIdValue" );
		if( value < cfbam::CFBamRelationColBuff::NEXTTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationColBuff::NEXTTENANTID_MIN_VALUE );
		}
		optionalNextTenantId.setValue( value );
	}

	const int64_t CFBamRelationColByNextIdxKey::getOptionalNextIdValue() const {
		return( optionalNextId.getValue() );
	}

	const int64_t* CFBamRelationColByNextIdxKey::getOptionalNextIdReference() const {
		return( optionalNextId.getReference() );
	}

	const bool CFBamRelationColByNextIdxKey::isOptionalNextIdNull() const {
		return( optionalNextId.isNull() );
	}

	void CFBamRelationColByNextIdxKey::setOptionalNextIdNull() {
		optionalNextId.setNull();
	}

	void CFBamRelationColByNextIdxKey::setOptionalNextIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalNextIdValue" );
		if( value < cfbam::CFBamRelationColBuff::NEXTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationColBuff::NEXTID_MIN_VALUE );
		}
		optionalNextId.setValue( value );
	}

	size_t CFBamRelationColByNextIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalNextTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNextTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalNextIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalNextIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFBamRelationColByNextIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamRelationColByNextIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_NextTenantId( "NextTenantId" );
		static const std::string S_NextId( "NextId" );
		std::string ret( S_Preamble );
		if( ! isOptionalNextTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextTenantId, getOptionalNextTenantIdValue() ) );
		}
		if( ! isOptionalNextIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextId, getOptionalNextIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamRelationColByNextIdxKey::operator <( const CFBamRelationColByNextIdxKey& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationColByNextIdxKey::operator <( const CFBamRelationColHBuff& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationColByNextIdxKey::operator <( const CFBamRelationColBuff& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationColByNextIdxKey::operator <=( const CFBamRelationColByNextIdxKey& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamRelationColByNextIdxKey::operator <=( const CFBamRelationColHBuff& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamRelationColByNextIdxKey::operator <=( const CFBamRelationColBuff& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamRelationColByNextIdxKey::operator ==( const CFBamRelationColByNextIdxKey& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationColByNextIdxKey::operator ==( const CFBamRelationColHBuff& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationColByNextIdxKey::operator ==( const CFBamRelationColBuff& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationColByNextIdxKey::operator !=( const CFBamRelationColByNextIdxKey& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationColByNextIdxKey::operator !=( const CFBamRelationColHBuff& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationColByNextIdxKey::operator !=( const CFBamRelationColBuff& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamRelationColByNextIdxKey::operator >=( const CFBamRelationColByNextIdxKey& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationColByNextIdxKey::operator >=( const CFBamRelationColHBuff& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationColByNextIdxKey::operator >=( const CFBamRelationColBuff& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamRelationColByNextIdxKey::operator >( const CFBamRelationColByNextIdxKey& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamRelationColByNextIdxKey::operator >( const CFBamRelationColHBuff& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamRelationColByNextIdxKey::operator >( const CFBamRelationColBuff& rhs ) {
		if( ! isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFBamRelationColByNextIdxKey CFBamRelationColByNextIdxKey::operator =( cfbam::CFBamRelationColByNextIdxKey& src ) {
		if( src.isOptionalNextTenantIdNull() ) {
			setOptionalNextTenantIdNull();
		}
		else {
			setOptionalNextTenantIdValue( src.getOptionalNextTenantIdValue() );
		}
		if( src.isOptionalNextIdNull() ) {
			setOptionalNextIdNull();
		}
		else {
			setOptionalNextIdValue( src.getOptionalNextIdValue() );
		}
		return( *this );
	}

	CFBamRelationColByNextIdxKey CFBamRelationColByNextIdxKey::operator =( cfbam::CFBamRelationColBuff& src ) {
		if( src.isOptionalNextTenantIdNull() ) {
			setOptionalNextTenantIdNull();
		}
		else {
			setOptionalNextTenantIdValue( src.getOptionalNextTenantIdValue() );
		}
		if( src.isOptionalNextIdNull() ) {
			setOptionalNextIdNull();
		}
		else {
			setOptionalNextIdValue( src.getOptionalNextIdValue() );
		}
		return( *this );
	}

	CFBamRelationColByNextIdxKey CFBamRelationColByNextIdxKey::operator =( cfbam::CFBamRelationColHBuff& src ) {
		if( src.isOptionalNextTenantIdNull() ) {
			setOptionalNextTenantIdNull();
		}
		else {
			setOptionalNextTenantIdValue( src.getOptionalNextTenantIdValue() );
		}
		if( src.isOptionalNextIdNull() ) {
			setOptionalNextIdNull();
		}
		else {
			setOptionalNextIdValue( src.getOptionalNextIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColByNextIdxKey& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColByNextIdxKey& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColByNextIdxKey& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( ! rhs.isOptionalNextIdNull() ) {
				if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColByNextIdxKey& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() != rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() != rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColByNextIdxKey& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColByNextIdxKey& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationColByNextIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs ) {
		if( ! lhs.isOptionalNextTenantIdNull() ) {
			if( rhs.isOptionalNextTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextTenantIdValue() < rhs.getOptionalNextTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextTenantIdValue() > rhs.getOptionalNextTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalNextIdNull() ) {
			if( rhs.isOptionalNextIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalNextIdValue() < rhs.getOptionalNextIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalNextIdValue() > rhs.getOptionalNextIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalNextIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

