// Description: C++18 implementation for a SchemaRef by RefSchemaIdx index key object.

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

#include <cfbam/CFBamSchemaRefByRefSchemaIdxKey.hpp>
#include <cfbam/CFBamSchemaRefBuff.hpp>
#include <cfbam/CFBamSchemaRefHBuff.hpp>

namespace cfbam {
	const std::string CFBamSchemaRefByRefSchemaIdxKey::CLASS_NAME( "CFBamSchemaRefByRefSchemaIdxKey" );
	const std::string CFBamSchemaRefByRefSchemaIdxKey::S_VALUE( "value" );
	const std::string CFBamSchemaRefByRefSchemaIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamSchemaRefByRefSchemaIdxKey::CFBamSchemaRefByRefSchemaIdxKey() {
		optionalRefSchemaTenantId.setNull();
		optionalRefSchemaId.setNull();
	}

	CFBamSchemaRefByRefSchemaIdxKey::CFBamSchemaRefByRefSchemaIdxKey( const CFBamSchemaRefByRefSchemaIdxKey& src ) {
		optionalRefSchemaTenantId.setNull();
		optionalRefSchemaId.setNull();
		if( src.isOptionalRefSchemaTenantIdNull() ) {
			setOptionalRefSchemaTenantIdNull();
		}
		else {
			setOptionalRefSchemaTenantIdValue( src.getOptionalRefSchemaTenantIdValue() );
		}
		if( src.isOptionalRefSchemaIdNull() ) {
			setOptionalRefSchemaIdNull();
		}
		else {
			setOptionalRefSchemaIdValue( src.getOptionalRefSchemaIdValue() );
		}
	}

	CFBamSchemaRefByRefSchemaIdxKey::~CFBamSchemaRefByRefSchemaIdxKey() {
	}

	const int64_t CFBamSchemaRefByRefSchemaIdxKey::getOptionalRefSchemaTenantIdValue() const {
		return( optionalRefSchemaTenantId.getValue() );
	}

	const int64_t* CFBamSchemaRefByRefSchemaIdxKey::getOptionalRefSchemaTenantIdReference() const {
		return( optionalRefSchemaTenantId.getReference() );
	}

	const bool CFBamSchemaRefByRefSchemaIdxKey::isOptionalRefSchemaTenantIdNull() const {
		return( optionalRefSchemaTenantId.isNull() );
	}

	void CFBamSchemaRefByRefSchemaIdxKey::setOptionalRefSchemaTenantIdNull() {
		optionalRefSchemaTenantId.setNull();
	}

	void CFBamSchemaRefByRefSchemaIdxKey::setOptionalRefSchemaTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRefSchemaTenantIdValue" );
		if( value < cfbam::CFBamSchemaRefBuff::REFSCHEMATENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaRefBuff::REFSCHEMATENANTID_MIN_VALUE );
		}
		optionalRefSchemaTenantId.setValue( value );
	}

	const int64_t CFBamSchemaRefByRefSchemaIdxKey::getOptionalRefSchemaIdValue() const {
		return( optionalRefSchemaId.getValue() );
	}

	const int64_t* CFBamSchemaRefByRefSchemaIdxKey::getOptionalRefSchemaIdReference() const {
		return( optionalRefSchemaId.getReference() );
	}

	const bool CFBamSchemaRefByRefSchemaIdxKey::isOptionalRefSchemaIdNull() const {
		return( optionalRefSchemaId.isNull() );
	}

	void CFBamSchemaRefByRefSchemaIdxKey::setOptionalRefSchemaIdNull() {
		optionalRefSchemaId.setNull();
	}

	void CFBamSchemaRefByRefSchemaIdxKey::setOptionalRefSchemaIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalRefSchemaIdValue" );
		if( value < cfbam::CFBamSchemaRefBuff::REFSCHEMAID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaRefBuff::REFSCHEMAID_MIN_VALUE );
		}
		optionalRefSchemaId.setValue( value );
	}

	size_t CFBamSchemaRefByRefSchemaIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalRefSchemaTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalRefSchemaIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFBamSchemaRefByRefSchemaIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaRefByRefSchemaIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_RefSchemaTenantId( "RefSchemaTenantId" );
		static const std::string S_RefSchemaId( "RefSchemaId" );
		std::string ret( S_Preamble );
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RefSchemaTenantId, getOptionalRefSchemaTenantIdValue() ) );
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RefSchemaId, getOptionalRefSchemaIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator <( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator <( const CFBamSchemaRefHBuff& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator <( const CFBamSchemaRefBuff& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator <=( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator <=( const CFBamSchemaRefHBuff& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator <=( const CFBamSchemaRefBuff& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator ==( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				if( getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				if( getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator ==( const CFBamSchemaRefHBuff& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				if( getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				if( getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator ==( const CFBamSchemaRefBuff& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				if( getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				if( getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator !=( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator !=( const CFBamSchemaRefHBuff& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator !=( const CFBamSchemaRefBuff& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator >=( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator >=( const CFBamSchemaRefHBuff& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator >=( const CFBamSchemaRefBuff& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator >( const CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator >( const CFBamSchemaRefHBuff& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFBamSchemaRefByRefSchemaIdxKey::operator >( const CFBamSchemaRefBuff& rhs ) {
		if( ! isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFBamSchemaRefByRefSchemaIdxKey CFBamSchemaRefByRefSchemaIdxKey::operator =( cfbam::CFBamSchemaRefByRefSchemaIdxKey& src ) {
		if( src.isOptionalRefSchemaTenantIdNull() ) {
			setOptionalRefSchemaTenantIdNull();
		}
		else {
			setOptionalRefSchemaTenantIdValue( src.getOptionalRefSchemaTenantIdValue() );
		}
		if( src.isOptionalRefSchemaIdNull() ) {
			setOptionalRefSchemaIdNull();
		}
		else {
			setOptionalRefSchemaIdValue( src.getOptionalRefSchemaIdValue() );
		}
		return( *this );
	}

	CFBamSchemaRefByRefSchemaIdxKey CFBamSchemaRefByRefSchemaIdxKey::operator =( cfbam::CFBamSchemaRefBuff& src ) {
		if( src.isOptionalRefSchemaTenantIdNull() ) {
			setOptionalRefSchemaTenantIdNull();
		}
		else {
			setOptionalRefSchemaTenantIdValue( src.getOptionalRefSchemaTenantIdValue() );
		}
		if( src.isOptionalRefSchemaIdNull() ) {
			setOptionalRefSchemaIdNull();
		}
		else {
			setOptionalRefSchemaIdValue( src.getOptionalRefSchemaIdValue() );
		}
		return( *this );
	}

	CFBamSchemaRefByRefSchemaIdxKey CFBamSchemaRefByRefSchemaIdxKey::operator =( cfbam::CFBamSchemaRefHBuff& src ) {
		if( src.isOptionalRefSchemaTenantIdNull() ) {
			setOptionalRefSchemaTenantIdNull();
		}
		else {
			setOptionalRefSchemaTenantIdValue( src.getOptionalRefSchemaTenantIdValue() );
		}
		if( src.isOptionalRefSchemaIdNull() ) {
			setOptionalRefSchemaIdNull();
		}
		else {
			setOptionalRefSchemaIdValue( src.getOptionalRefSchemaIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				if( lhs.getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				if( lhs.getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				if( lhs.getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				if( lhs.getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				if( lhs.getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				if( lhs.getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() != rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() != rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaRefByRefSchemaIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( ! lhs.isOptionalRefSchemaTenantIdNull() ) {
			if( rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaTenantIdValue() < rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaTenantIdValue() > rhs.getOptionalRefSchemaTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalRefSchemaIdNull() ) {
			if( rhs.isOptionalRefSchemaIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalRefSchemaIdValue() < rhs.getOptionalRefSchemaIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalRefSchemaIdValue() > rhs.getOptionalRefSchemaIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalRefSchemaIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

