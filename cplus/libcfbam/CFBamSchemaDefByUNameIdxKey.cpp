// Description: C++18 implementation for a SchemaDef by UNameIdx index key object.

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

#include <cfbam/CFBamSchemaDefByUNameIdxKey.hpp>
#include <cfbam/CFBamSchemaDefBuff.hpp>
#include <cfbam/CFBamSchemaDefHBuff.hpp>

namespace cfbam {
	const std::string CFBamSchemaDefByUNameIdxKey::CLASS_NAME( "CFBamSchemaDefByUNameIdxKey" );
	const std::string CFBamSchemaDefByUNameIdxKey::S_VALUE( "value" );
	const std::string CFBamSchemaDefByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamSchemaDefByUNameIdxKey::CFBamSchemaDefByUNameIdxKey() {
		requiredTenantId = cfbam::CFBamSchemaDefBuff::TENANTID_INIT_VALUE;
		requiredMinorVersionId = cfbam::CFBamSchemaDefBuff::MINORVERSIONID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamSchemaDefBuff::NAME_INIT_VALUE );
	}

	CFBamSchemaDefByUNameIdxKey::CFBamSchemaDefByUNameIdxKey( const CFBamSchemaDefByUNameIdxKey& src ) {
		requiredTenantId = cfbam::CFBamSchemaDefBuff::TENANTID_INIT_VALUE;
		requiredMinorVersionId = cfbam::CFBamSchemaDefBuff::MINORVERSIONID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamSchemaDefBuff::NAME_INIT_VALUE );
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredMinorVersionId( src.getRequiredMinorVersionId() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamSchemaDefByUNameIdxKey::~CFBamSchemaDefByUNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const int64_t CFBamSchemaDefByUNameIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamSchemaDefByUNameIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamSchemaDefByUNameIdxKey::setRequiredTenantId( const int64_t value ) {
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

	const int64_t CFBamSchemaDefByUNameIdxKey::getRequiredMinorVersionId() const {
		return( requiredMinorVersionId );
	}

	const int64_t* CFBamSchemaDefByUNameIdxKey::getRequiredMinorVersionIdReference() const {
		return( &requiredMinorVersionId );
	}

	void CFBamSchemaDefByUNameIdxKey::setRequiredMinorVersionId( const int64_t value ) {
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

	const std::string& CFBamSchemaDefByUNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamSchemaDefByUNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamSchemaDefByUNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamSchemaDefBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamSchemaDefBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamSchemaDefByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredMinorVersionId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFBamSchemaDefByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaDefByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_MinorVersionId( "MinorVersionId" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_MinorVersionId, getRequiredMinorVersionId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator <( const CFBamSchemaDefByUNameIdxKey& rhs ) {
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
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator <( const CFBamSchemaDefHBuff& rhs ) {
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
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator <( const CFBamSchemaDefBuff& rhs ) {
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
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator <=( const CFBamSchemaDefByUNameIdxKey& rhs ) {
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
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator <=( const CFBamSchemaDefHBuff& rhs ) {
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
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator <=( const CFBamSchemaDefBuff& rhs ) {
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
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator ==( const CFBamSchemaDefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator ==( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator ==( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator !=( const CFBamSchemaDefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator !=( const CFBamSchemaDefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator !=( const CFBamSchemaDefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator >=( const CFBamSchemaDefByUNameIdxKey& rhs ) {
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
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator >=( const CFBamSchemaDefHBuff& rhs ) {
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
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator >=( const CFBamSchemaDefBuff& rhs ) {
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
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator >( const CFBamSchemaDefByUNameIdxKey& rhs ) {
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
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator >( const CFBamSchemaDefHBuff& rhs ) {
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
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaDefByUNameIdxKey::operator >( const CFBamSchemaDefBuff& rhs ) {
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
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}
	CFBamSchemaDefByUNameIdxKey CFBamSchemaDefByUNameIdxKey::operator =( cfbam::CFBamSchemaDefByUNameIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredMinorVersionId( src.getRequiredMinorVersionId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamSchemaDefByUNameIdxKey CFBamSchemaDefByUNameIdxKey::operator =( cfbam::CFBamSchemaDefBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredMinorVersionId( src.getRequiredMinorVersionId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamSchemaDefByUNameIdxKey CFBamSchemaDefByUNameIdxKey::operator =( cfbam::CFBamSchemaDefHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredMinorVersionId( src.getRequiredMinorVersionId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefByUNameIdxKey& rhs ) {
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
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
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
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
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
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefByUNameIdxKey& rhs ) {
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
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
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
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
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
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredMinorVersionId() != rhs.getRequiredMinorVersionId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefByUNameIdxKey& rhs ) {
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
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
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
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
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
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefByUNameIdxKey& rhs ) {
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
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs ) {
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
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamSchemaDefByUNameIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs ) {
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
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}
}

