// Description: C++18 implementation for a SchemaDef by PubURIIdx index key object.

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

#include <cfbam/CFBamSchemaDefByPubURIIdxKey.hpp>
#include <cfbam/CFBamSchemaDefBuff.hpp>
#include <cfbam/CFBamSchemaDefHBuff.hpp>

namespace cfbam {
	const std::string CFBamSchemaDefByPubURIIdxKey::CLASS_NAME( "CFBamSchemaDefByPubURIIdxKey" );
	const std::string CFBamSchemaDefByPubURIIdxKey::S_VALUE( "value" );
	const std::string CFBamSchemaDefByPubURIIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamSchemaDefByPubURIIdxKey::CFBamSchemaDefByPubURIIdxKey() {
		requiredTenantId = cfbam::CFBamSchemaDefBuff::TENANTID_INIT_VALUE;
		requiredPublishURI = new std::string( cfbam::CFBamSchemaDefBuff::PUBLISHURI_INIT_VALUE );
	}

	CFBamSchemaDefByPubURIIdxKey::CFBamSchemaDefByPubURIIdxKey( const CFBamSchemaDefByPubURIIdxKey& src ) {
		requiredTenantId = cfbam::CFBamSchemaDefBuff::TENANTID_INIT_VALUE;
		requiredPublishURI = new std::string( cfbam::CFBamSchemaDefBuff::PUBLISHURI_INIT_VALUE );
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredPublishURI( src.getRequiredPublishURI() );
	}

	CFBamSchemaDefByPubURIIdxKey::~CFBamSchemaDefByPubURIIdxKey() {
		if( requiredPublishURI != NULL ) {
			delete requiredPublishURI;
			requiredPublishURI = NULL;
		}
	}

	const int64_t CFBamSchemaDefByPubURIIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamSchemaDefByPubURIIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamSchemaDefByPubURIIdxKey::setRequiredTenantId( const int64_t value ) {
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

	const std::string& CFBamSchemaDefByPubURIIdxKey::getRequiredPublishURI() const {
		return( *requiredPublishURI );
	}

	const std::string* CFBamSchemaDefByPubURIIdxKey::getRequiredPublishURIReference() const {
		return( requiredPublishURI );
	}

	void CFBamSchemaDefByPubURIIdxKey::setRequiredPublishURI( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredPublishURI" );
		if( value.length() > CFBamSchemaDefBuff::PUBLISHURI_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamSchemaDefBuff::PUBLISHURI_MAX_LEN );
		}
		if( requiredPublishURI != NULL ) {
			delete requiredPublishURI;
			requiredPublishURI = NULL;
		}
		requiredPublishURI = new std::string( value );
	}

	size_t CFBamSchemaDefByPubURIIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredPublishURI() );
		return( hashCode );
	}

	std::string CFBamSchemaDefByPubURIIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaDefByPubURIIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_PublishURI( "PublishURI" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_PublishURI, getRequiredPublishURI() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator <( const CFBamSchemaDefByPubURIIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator <( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator <( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator <=( const CFBamSchemaDefByPubURIIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator <=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator <=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator ==( const CFBamSchemaDefByPubURIIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredPublishURI() != rhs.getRequiredPublishURI() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator ==( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredPublishURI() != rhs.getRequiredPublishURI() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator ==( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredPublishURI() != rhs.getRequiredPublishURI() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator !=( const CFBamSchemaDefByPubURIIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() != rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator !=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() != rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator !=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() != rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator >=( const CFBamSchemaDefByPubURIIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator >=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator >=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator >( const CFBamSchemaDefByPubURIIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator >( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByPubURIIdxKey::operator >( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}
	CFBamSchemaDefByPubURIIdxKey CFBamSchemaDefByPubURIIdxKey::operator =( cfbam::CFBamSchemaDefByPubURIIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredPublishURI( src.getRequiredPublishURI() );
		return( *this );
	}

	CFBamSchemaDefByPubURIIdxKey CFBamSchemaDefByPubURIIdxKey::operator =( cfbam::CFBamSchemaDefBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredPublishURI( src.getRequiredPublishURI() );
		return( *this );
	}

	CFBamSchemaDefByPubURIIdxKey CFBamSchemaDefByPubURIIdxKey::operator =( cfbam::CFBamSchemaDefHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredPublishURI( src.getRequiredPublishURI() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefByPubURIIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( lhs.getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( lhs.getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( lhs.getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefByPubURIIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( lhs.getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( lhs.getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( lhs.getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefByPubURIIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPublishURI() != rhs.getRequiredPublishURI() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPublishURI() != rhs.getRequiredPublishURI() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPublishURI() != rhs.getRequiredPublishURI() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefByPubURIIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() != rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() != rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() != rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefByPubURIIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( lhs.getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( lhs.getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( lhs.getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefByPubURIIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( lhs.getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( lhs.getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByPubURIIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPublishURI() < rhs.getRequiredPublishURI() ) {
			return( false );
		}
		else if( lhs.getRequiredPublishURI() > rhs.getRequiredPublishURI() ) {
			return( true );
		}
		return( false );
	}
}

