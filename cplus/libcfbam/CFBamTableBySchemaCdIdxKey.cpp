// Description: C++18 implementation for a Table by SchemaCdIdx index key object.

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

#include <cfbam/CFBamTableBySchemaCdIdxKey.hpp>
#include <cfbam/CFBamTableBuff.hpp>
#include <cfbam/CFBamTableHBuff.hpp>

namespace cfbam {
	const std::string CFBamTableBySchemaCdIdxKey::CLASS_NAME( "CFBamTableBySchemaCdIdxKey" );
	const std::string CFBamTableBySchemaCdIdxKey::S_VALUE( "value" );
	const std::string CFBamTableBySchemaCdIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamTableBySchemaCdIdxKey::CFBamTableBySchemaCdIdxKey() {
		requiredTenantId = cfbam::CFBamTableBuff::TENANTID_INIT_VALUE;
		requiredSchemaDefId = cfbam::CFBamTableBuff::SCHEMADEFID_INIT_VALUE;
		requiredTableClassCode = new std::string( cfbam::CFBamTableBuff::TABLECLASSCODE_INIT_VALUE );
	}

	CFBamTableBySchemaCdIdxKey::CFBamTableBySchemaCdIdxKey( const CFBamTableBySchemaCdIdxKey& src ) {
		requiredTenantId = cfbam::CFBamTableBuff::TENANTID_INIT_VALUE;
		requiredSchemaDefId = cfbam::CFBamTableBuff::SCHEMADEFID_INIT_VALUE;
		requiredTableClassCode = new std::string( cfbam::CFBamTableBuff::TABLECLASSCODE_INIT_VALUE );
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		setRequiredTableClassCode( src.getRequiredTableClassCode() );
	}

	CFBamTableBySchemaCdIdxKey::~CFBamTableBySchemaCdIdxKey() {
		if( requiredTableClassCode != NULL ) {
			delete requiredTableClassCode;
			requiredTableClassCode = NULL;
		}
	}

	const int64_t CFBamTableBySchemaCdIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamTableBySchemaCdIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamTableBySchemaCdIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamTableBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTableBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamTableBySchemaCdIdxKey::getRequiredSchemaDefId() const {
		return( requiredSchemaDefId );
	}

	const int64_t* CFBamTableBySchemaCdIdxKey::getRequiredSchemaDefIdReference() const {
		return( &requiredSchemaDefId );
	}

	void CFBamTableBySchemaCdIdxKey::setRequiredSchemaDefId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredSchemaDefId" );
		if( value < cfbam::CFBamTableBuff::SCHEMADEFID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamTableBuff::SCHEMADEFID_MIN_VALUE );
		}
		requiredSchemaDefId = value;
	}

	const std::string& CFBamTableBySchemaCdIdxKey::getRequiredTableClassCode() const {
		return( *requiredTableClassCode );
	}

	const std::string* CFBamTableBySchemaCdIdxKey::getRequiredTableClassCodeReference() const {
		return( requiredTableClassCode );
	}

	void CFBamTableBySchemaCdIdxKey::setRequiredTableClassCode( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredTableClassCode" );
		if( value.length() > CFBamTableBuff::TABLECLASSCODE_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamTableBuff::TABLECLASSCODE_MAX_LEN );
		}
		if( requiredTableClassCode != NULL ) {
			delete requiredTableClassCode;
			requiredTableClassCode = NULL;
		}
		requiredTableClassCode = new std::string( value );
	}

	size_t CFBamTableBySchemaCdIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredSchemaDefId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredTableClassCode() );
		return( hashCode );
	}

	std::string CFBamTableBySchemaCdIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTableBySchemaCdIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_SchemaDefId( "SchemaDefId" );
		static const std::string S_TableClassCode( "TableClassCode" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, getRequiredSchemaDefId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_TableClassCode, getRequiredTableClassCode() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamTableBySchemaCdIdxKey::operator <( const CFBamTableBySchemaCdIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTableBySchemaCdIdxKey::operator <( const CFBamTableHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTableBySchemaCdIdxKey::operator <( const CFBamTableBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTableBySchemaCdIdxKey::operator <=( const CFBamTableBySchemaCdIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamTableBySchemaCdIdxKey::operator <=( const CFBamTableHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamTableBySchemaCdIdxKey::operator <=( const CFBamTableBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamTableBySchemaCdIdxKey::operator ==( const CFBamTableBySchemaCdIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		if( getRequiredTableClassCode() != rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamTableBySchemaCdIdxKey::operator ==( const CFBamTableHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		if( getRequiredTableClassCode() != rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamTableBySchemaCdIdxKey::operator ==( const CFBamTableBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		if( getRequiredTableClassCode() != rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamTableBySchemaCdIdxKey::operator !=( const CFBamTableBySchemaCdIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() != rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTableBySchemaCdIdxKey::operator !=( const CFBamTableHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() != rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTableBySchemaCdIdxKey::operator !=( const CFBamTableBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() != rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTableBySchemaCdIdxKey::operator >=( const CFBamTableBySchemaCdIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamTableBySchemaCdIdxKey::operator >=( const CFBamTableHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamTableBySchemaCdIdxKey::operator >=( const CFBamTableBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamTableBySchemaCdIdxKey::operator >( const CFBamTableBySchemaCdIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTableBySchemaCdIdxKey::operator >( const CFBamTableHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTableBySchemaCdIdxKey::operator >( const CFBamTableBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}
	CFBamTableBySchemaCdIdxKey CFBamTableBySchemaCdIdxKey::operator =( cfbam::CFBamTableBySchemaCdIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		setRequiredTableClassCode( src.getRequiredTableClassCode() );
		return( *this );
	}

	CFBamTableBySchemaCdIdxKey CFBamTableBySchemaCdIdxKey::operator =( cfbam::CFBamTableBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		setRequiredTableClassCode( src.getRequiredTableClassCode() );
		return( *this );
	}

	CFBamTableBySchemaCdIdxKey CFBamTableBySchemaCdIdxKey::operator =( cfbam::CFBamTableHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		setRequiredTableClassCode( src.getRequiredTableClassCode() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableBySchemaCdIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( lhs.getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( lhs.getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( lhs.getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableBySchemaCdIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( lhs.getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( lhs.getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( lhs.getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableBySchemaCdIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		if( lhs.getRequiredTableClassCode() != rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		if( lhs.getRequiredTableClassCode() != rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		if( lhs.getRequiredTableClassCode() != rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableBySchemaCdIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() != rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() != rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() != rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableBySchemaCdIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( lhs.getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( lhs.getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( lhs.getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableBySchemaCdIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( lhs.getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( lhs.getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableBySchemaCdIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() < rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredSchemaDefId() > rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		if( lhs.getRequiredTableClassCode() < rhs.getRequiredTableClassCode() ) {
			return( false );
		}
		else if( lhs.getRequiredTableClassCode() > rhs.getRequiredTableClassCode() ) {
			return( true );
		}
		return( false );
	}
}

