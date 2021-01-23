// Description: C++18 implementation for a SchemaDef by ProjectURLIdx index key object.

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

#include <cfbam/CFBamSchemaDefByProjectURLIdxKey.hpp>
#include <cfbam/CFBamSchemaDefBuff.hpp>
#include <cfbam/CFBamSchemaDefHBuff.hpp>

namespace cfbam {
	const std::string CFBamSchemaDefByProjectURLIdxKey::CLASS_NAME( "CFBamSchemaDefByProjectURLIdxKey" );
	const std::string CFBamSchemaDefByProjectURLIdxKey::S_VALUE( "value" );
	const std::string CFBamSchemaDefByProjectURLIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamSchemaDefByProjectURLIdxKey::CFBamSchemaDefByProjectURLIdxKey() {
		requiredTenantId = cfbam::CFBamSchemaDefBuff::TENANTID_INIT_VALUE;
		requiredProjectURL = new std::string( cfbam::CFBamSchemaDefBuff::PROJECTURL_INIT_VALUE );
	}

	CFBamSchemaDefByProjectURLIdxKey::CFBamSchemaDefByProjectURLIdxKey( const CFBamSchemaDefByProjectURLIdxKey& src ) {
		requiredTenantId = cfbam::CFBamSchemaDefBuff::TENANTID_INIT_VALUE;
		requiredProjectURL = new std::string( cfbam::CFBamSchemaDefBuff::PROJECTURL_INIT_VALUE );
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredProjectURL( src.getRequiredProjectURL() );
	}

	CFBamSchemaDefByProjectURLIdxKey::~CFBamSchemaDefByProjectURLIdxKey() {
		if( requiredProjectURL != NULL ) {
			delete requiredProjectURL;
			requiredProjectURL = NULL;
		}
	}

	const int64_t CFBamSchemaDefByProjectURLIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamSchemaDefByProjectURLIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamSchemaDefByProjectURLIdxKey::setRequiredTenantId( const int64_t value ) {
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

	const std::string& CFBamSchemaDefByProjectURLIdxKey::getRequiredProjectURL() const {
		return( *requiredProjectURL );
	}

	const std::string* CFBamSchemaDefByProjectURLIdxKey::getRequiredProjectURLReference() const {
		return( requiredProjectURL );
	}

	void CFBamSchemaDefByProjectURLIdxKey::setRequiredProjectURL( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredProjectURL" );
		if( value.length() > CFBamSchemaDefBuff::PROJECTURL_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamSchemaDefBuff::PROJECTURL_MAX_LEN );
		}
		if( requiredProjectURL != NULL ) {
			delete requiredProjectURL;
			requiredProjectURL = NULL;
		}
		requiredProjectURL = new std::string( value );
	}

	size_t CFBamSchemaDefByProjectURLIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredProjectURL() );
		return( hashCode );
	}

	std::string CFBamSchemaDefByProjectURLIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaDefByProjectURLIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_ProjectURL( "ProjectURL" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ProjectURL, getRequiredProjectURL() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator <( const CFBamSchemaDefByProjectURLIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator <( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator <( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator <=( const CFBamSchemaDefByProjectURLIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator <=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator <=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator ==( const CFBamSchemaDefByProjectURLIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredProjectURL() != rhs.getRequiredProjectURL() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator ==( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredProjectURL() != rhs.getRequiredProjectURL() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator ==( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredProjectURL() != rhs.getRequiredProjectURL() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator !=( const CFBamSchemaDefByProjectURLIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() != rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator !=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() != rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator !=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() != rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator >=( const CFBamSchemaDefByProjectURLIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator >=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator >=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator >( const CFBamSchemaDefByProjectURLIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator >( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByProjectURLIdxKey::operator >( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}
	CFBamSchemaDefByProjectURLIdxKey CFBamSchemaDefByProjectURLIdxKey::operator =( cfbam::CFBamSchemaDefByProjectURLIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredProjectURL( src.getRequiredProjectURL() );
		return( *this );
	}

	CFBamSchemaDefByProjectURLIdxKey CFBamSchemaDefByProjectURLIdxKey::operator =( cfbam::CFBamSchemaDefBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredProjectURL( src.getRequiredProjectURL() );
		return( *this );
	}

	CFBamSchemaDefByProjectURLIdxKey CFBamSchemaDefByProjectURLIdxKey::operator =( cfbam::CFBamSchemaDefHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredProjectURL( src.getRequiredProjectURL() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefByProjectURLIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( lhs.getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( lhs.getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( lhs.getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefByProjectURLIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( lhs.getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( lhs.getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( lhs.getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefByProjectURLIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredProjectURL() != rhs.getRequiredProjectURL() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredProjectURL() != rhs.getRequiredProjectURL() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredProjectURL() != rhs.getRequiredProjectURL() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefByProjectURLIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() != rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() != rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() != rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefByProjectURLIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( lhs.getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( lhs.getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( lhs.getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefByProjectURLIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( lhs.getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( lhs.getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByProjectURLIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredProjectURL() < rhs.getRequiredProjectURL() ) {
			return( false );
		}
		else if( lhs.getRequiredProjectURL() > rhs.getRequiredProjectURL() ) {
			return( true );
		}
		return( false );
	}
}

