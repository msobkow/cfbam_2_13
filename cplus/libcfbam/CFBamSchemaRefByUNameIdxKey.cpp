// Description: C++18 implementation for a SchemaRef by UNameIdx index key object.

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

#include <cfbam/CFBamSchemaRefByUNameIdxKey.hpp>
#include <cfbam/CFBamSchemaRefBuff.hpp>
#include <cfbam/CFBamSchemaRefHBuff.hpp>

namespace cfbam {
	const std::string CFBamSchemaRefByUNameIdxKey::CLASS_NAME( "CFBamSchemaRefByUNameIdxKey" );
	const std::string CFBamSchemaRefByUNameIdxKey::S_VALUE( "value" );
	const std::string CFBamSchemaRefByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamSchemaRefByUNameIdxKey::CFBamSchemaRefByUNameIdxKey() {
		requiredTenantId = cfbam::CFBamSchemaRefBuff::TENANTID_INIT_VALUE;
		requiredSchemaId = cfbam::CFBamSchemaRefBuff::SCHEMAID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamSchemaRefBuff::NAME_INIT_VALUE );
	}

	CFBamSchemaRefByUNameIdxKey::CFBamSchemaRefByUNameIdxKey( const CFBamSchemaRefByUNameIdxKey& src ) {
		requiredTenantId = cfbam::CFBamSchemaRefBuff::TENANTID_INIT_VALUE;
		requiredSchemaId = cfbam::CFBamSchemaRefBuff::SCHEMAID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamSchemaRefBuff::NAME_INIT_VALUE );
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaId( src.getRequiredSchemaId() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamSchemaRefByUNameIdxKey::~CFBamSchemaRefByUNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const int64_t CFBamSchemaRefByUNameIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamSchemaRefByUNameIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamSchemaRefByUNameIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamSchemaRefBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaRefBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamSchemaRefByUNameIdxKey::getRequiredSchemaId() const {
		return( requiredSchemaId );
	}

	const int64_t* CFBamSchemaRefByUNameIdxKey::getRequiredSchemaIdReference() const {
		return( &requiredSchemaId );
	}

	void CFBamSchemaRefByUNameIdxKey::setRequiredSchemaId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredSchemaId" );
		if( value < cfbam::CFBamSchemaRefBuff::SCHEMAID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamSchemaRefBuff::SCHEMAID_MIN_VALUE );
		}
		requiredSchemaId = value;
	}

	const std::string& CFBamSchemaRefByUNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamSchemaRefByUNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamSchemaRefByUNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamSchemaRefBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamSchemaRefBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamSchemaRefByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredSchemaId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFBamSchemaRefByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamSchemaRefByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_SchemaId( "SchemaId" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaId, getRequiredSchemaId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamSchemaRefByUNameIdxKey::operator <( const CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefByUNameIdxKey::operator <( const CFBamSchemaRefHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefByUNameIdxKey::operator <( const CFBamSchemaRefBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefByUNameIdxKey::operator <=( const CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefByUNameIdxKey::operator <=( const CFBamSchemaRefHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefByUNameIdxKey::operator <=( const CFBamSchemaRefBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefByUNameIdxKey::operator ==( const CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaRefByUNameIdxKey::operator ==( const CFBamSchemaRefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaRefByUNameIdxKey::operator ==( const CFBamSchemaRefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamSchemaRefByUNameIdxKey::operator !=( const CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefByUNameIdxKey::operator !=( const CFBamSchemaRefHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefByUNameIdxKey::operator !=( const CFBamSchemaRefBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamSchemaRefByUNameIdxKey::operator >=( const CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefByUNameIdxKey::operator >=( const CFBamSchemaRefHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefByUNameIdxKey::operator >=( const CFBamSchemaRefBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefByUNameIdxKey::operator >( const CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefByUNameIdxKey::operator >( const CFBamSchemaRefHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool CFBamSchemaRefByUNameIdxKey::operator >( const CFBamSchemaRefBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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
	CFBamSchemaRefByUNameIdxKey CFBamSchemaRefByUNameIdxKey::operator =( cfbam::CFBamSchemaRefByUNameIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaId( src.getRequiredSchemaId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamSchemaRefByUNameIdxKey CFBamSchemaRefByUNameIdxKey::operator =( cfbam::CFBamSchemaRefBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaId( src.getRequiredSchemaId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamSchemaRefByUNameIdxKey CFBamSchemaRefByUNameIdxKey::operator =( cfbam::CFBamSchemaRefHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaId( src.getRequiredSchemaId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool operator <(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool operator <(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool operator <=(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
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

	bool operator ==(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() != rhs.getRequiredSchemaId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool operator >=(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

	bool operator >(const  cfbam::CFBamSchemaRefByUNameIdxKey& lhs, const cfbam::CFBamSchemaRefBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaId() < rhs.getRequiredSchemaId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaId() > rhs.getRequiredSchemaId() ) {
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

