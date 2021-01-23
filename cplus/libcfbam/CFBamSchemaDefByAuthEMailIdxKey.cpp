// Description: C++18 implementation for a SchemaDef by AuthEMailIdx index key object.

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

#include <cfbam/CFBamSchemaDefByAuthEMailIdxKey.hpp>
#include <cfbam/CFBamSchemaDefBuff.hpp>
#include <cfbam/CFBamSchemaDefHBuff.hpp>

namespace cfbam {
	const std::string CFBamSchemaDefByAuthEMailIdxKey::CLASS_NAME( "CFBamSchemaDefByAuthEMailIdxKey" );
	const std::string CFBamSchemaDefByAuthEMailIdxKey::S_VALUE( "value" );
	const std::string CFBamSchemaDefByAuthEMailIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamSchemaDefByAuthEMailIdxKey::CFBamSchemaDefByAuthEMailIdxKey() {
		requiredTenantId = cfbam::CFBamSchemaDefBuff::TENANTID_INIT_VALUE;
		requiredAuthorEMail = new std::string( cfbam::CFBamSchemaDefBuff::AUTHOREMAIL_INIT_VALUE );
	}

	CFBamSchemaDefByAuthEMailIdxKey::CFBamSchemaDefByAuthEMailIdxKey( const CFBamSchemaDefByAuthEMailIdxKey& src ) {
		requiredTenantId = cfbam::CFBamSchemaDefBuff::TENANTID_INIT_VALUE;
		requiredAuthorEMail = new std::string( cfbam::CFBamSchemaDefBuff::AUTHOREMAIL_INIT_VALUE );
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredAuthorEMail( src.getRequiredAuthorEMail() );
	}

	CFBamSchemaDefByAuthEMailIdxKey::~CFBamSchemaDefByAuthEMailIdxKey() {
		if( requiredAuthorEMail != NULL ) {
			delete requiredAuthorEMail;
			requiredAuthorEMail = NULL;
		}
	}

	const int64_t CFBamSchemaDefByAuthEMailIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamSchemaDefByAuthEMailIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamSchemaDefByAuthEMailIdxKey::setRequiredTenantId( const int64_t value ) {
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

	const std::string& CFBamSchemaDefByAuthEMailIdxKey::getRequiredAuthorEMail() const {
		return( *requiredAuthorEMail );
	}

	const std::string* CFBamSchemaDefByAuthEMailIdxKey::getRequiredAuthorEMailReference() const {
		return( requiredAuthorEMail );
	}

	void CFBamSchemaDefByAuthEMailIdxKey::setRequiredAuthorEMail( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredAuthorEMail" );
		if( value.length() > CFBamSchemaDefBuff::AUTHOREMAIL_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamSchemaDefBuff::AUTHOREMAIL_MAX_LEN );
		}
		if( requiredAuthorEMail != NULL ) {
			delete requiredAuthorEMail;
			requiredAuthorEMail = NULL;
		}
		requiredAuthorEMail = new std::string( value );
	}

	size_t CFBamSchemaDefByAuthEMailIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredAuthorEMail() );
		return( hashCode );
	}

	std::string CFBamSchemaDefByAuthEMailIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaDefByAuthEMailIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_AuthorEMail( "AuthorEMail" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_AuthorEMail, getRequiredAuthorEMail() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator <( const CFBamSchemaDefByAuthEMailIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator <( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator <( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator <=( const CFBamSchemaDefByAuthEMailIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator <=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator <=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator ==( const CFBamSchemaDefByAuthEMailIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredAuthorEMail() != rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator ==( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredAuthorEMail() != rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator ==( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredAuthorEMail() != rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator !=( const CFBamSchemaDefByAuthEMailIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() != rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator !=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() != rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator !=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() != rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator >=( const CFBamSchemaDefByAuthEMailIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator >=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator >=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator >( const CFBamSchemaDefByAuthEMailIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator >( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByAuthEMailIdxKey::operator >( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}
	CFBamSchemaDefByAuthEMailIdxKey CFBamSchemaDefByAuthEMailIdxKey::operator =( cfbam::CFBamSchemaDefByAuthEMailIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredAuthorEMail( src.getRequiredAuthorEMail() );
		return( *this );
	}

	CFBamSchemaDefByAuthEMailIdxKey CFBamSchemaDefByAuthEMailIdxKey::operator =( cfbam::CFBamSchemaDefBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredAuthorEMail( src.getRequiredAuthorEMail() );
		return( *this );
	}

	CFBamSchemaDefByAuthEMailIdxKey CFBamSchemaDefByAuthEMailIdxKey::operator =( cfbam::CFBamSchemaDefHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredAuthorEMail( src.getRequiredAuthorEMail() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefByAuthEMailIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( lhs.getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( lhs.getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( lhs.getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefByAuthEMailIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( lhs.getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( lhs.getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( lhs.getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefByAuthEMailIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredAuthorEMail() != rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredAuthorEMail() != rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredAuthorEMail() != rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefByAuthEMailIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() != rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() != rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() != rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefByAuthEMailIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( lhs.getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( lhs.getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( lhs.getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefByAuthEMailIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( lhs.getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( lhs.getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByAuthEMailIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredAuthorEMail() < rhs.getRequiredAuthorEMail() ) {
			return( false );
		}
		else if( lhs.getRequiredAuthorEMail() > rhs.getRequiredAuthorEMail() ) {
			return( true );
		}
		return( false );
	}
}

