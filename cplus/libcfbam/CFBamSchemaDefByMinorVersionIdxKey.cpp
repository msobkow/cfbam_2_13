// Description: C++18 implementation for a SchemaDef by MinorVersionIdx index key object.

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

#include <cfbam/CFBamSchemaDefByMinorVersionIdxKey.hpp>
#include <cfbam/CFBamSchemaDefBuff.hpp>
#include <cfbam/CFBamSchemaDefHBuff.hpp>

namespace cfbam {
	const std::string CFBamSchemaDefByMinorVersionIdxKey::CLASS_NAME( "CFBamSchemaDefByMinorVersionIdxKey" );
	const std::string CFBamSchemaDefByMinorVersionIdxKey::S_VALUE( "value" );
	const std::string CFBamSchemaDefByMinorVersionIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamSchemaDefByMinorVersionIdxKey::CFBamSchemaDefByMinorVersionIdxKey() {
		requiredTenantId = cfbam::CFBamSchemaDefBuff::TENANTID_INIT_VALUE;
		requiredMinorVersionId = cfbam::CFBamSchemaDefBuff::MINORVERSIONID_INIT_VALUE;
	}

	CFBamSchemaDefByMinorVersionIdxKey::CFBamSchemaDefByMinorVersionIdxKey( const CFBamSchemaDefByMinorVersionIdxKey& src ) {
		requiredTenantId = cfbam::CFBamSchemaDefBuff::TENANTID_INIT_VALUE;
		requiredMinorVersionId = cfbam::CFBamSchemaDefBuff::MINORVERSIONID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredMinorVersionId( src.getRequiredMinorVersionId() );
	}

	CFBamSchemaDefByMinorVersionIdxKey::~CFBamSchemaDefByMinorVersionIdxKey() {
	}

	const int64_t CFBamSchemaDefByMinorVersionIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamSchemaDefByMinorVersionIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamSchemaDefByMinorVersionIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamSchemaDefBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaDefBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamSchemaDefByMinorVersionIdxKey::getRequiredMinorVersionId() const {
		return( requiredMinorVersionId );
	}

	const int64_t* CFBamSchemaDefByMinorVersionIdxKey::getRequiredMinorVersionIdReference() const {
		return( &requiredMinorVersionId );
	}

	void CFBamSchemaDefByMinorVersionIdxKey::setRequiredMinorVersionId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredMinorVersionId" );
		if( value < cfbam::CFBamSchemaDefBuff::MINORVERSIONID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaDefBuff::MINORVERSIONID_MIN_VALUE );
		}
		requiredMinorVersionId = value;
	}

	size_t CFBamSchemaDefByMinorVersionIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredMinorVersionId() );
		return( hashCode );
	}

	std::string CFBamSchemaDefByMinorVersionIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaDefByMinorVersionIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_MinorVersionId( "MinorVersionId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_MinorVersionId, getRequiredMinorVersionId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator <( const CFBamSchemaDefByMinorVersionIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator <( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator <( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator <=( const CFBamSchemaDefByMinorVersionIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator <=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator <=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator ==( const CFBamSchemaDefByMinorVersionIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator ==( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator ==( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator !=( const CFBamSchemaDefByMinorVersionIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator !=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator !=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator >=( const CFBamSchemaDefByMinorVersionIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator >=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator >=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator >( const CFBamSchemaDefByMinorVersionIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator >( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByMinorVersionIdxKey::operator >( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}
	CFBamSchemaDefByMinorVersionIdxKey CFBamSchemaDefByMinorVersionIdxKey::operator =( cfbam::CFBamSchemaDefByMinorVersionIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredMinorVersionId( src.getRequiredMinorVersionId() );
		return( *this );
	}

	CFBamSchemaDefByMinorVersionIdxKey CFBamSchemaDefByMinorVersionIdxKey::operator =( cfbam::CFBamSchemaDefBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredMinorVersionId( src.getRequiredMinorVersionId() );
		return( *this );
	}

	CFBamSchemaDefByMinorVersionIdxKey CFBamSchemaDefByMinorVersionIdxKey::operator =( cfbam::CFBamSchemaDefHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredMinorVersionId( src.getRequiredMinorVersionId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefByMinorVersionIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( lhs.getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( lhs.getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( lhs.getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefByMinorVersionIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( lhs.getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( lhs.getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( lhs.getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefByMinorVersionIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefByMinorVersionIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefByMinorVersionIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( lhs.getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( lhs.getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( lhs.getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefByMinorVersionIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( lhs.getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( lhs.getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByMinorVersionIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() < rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		else if( lhs.getRequiredMinorVersionId() > rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		return( false );
	}
}

