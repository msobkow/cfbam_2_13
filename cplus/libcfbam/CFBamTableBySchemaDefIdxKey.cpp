// Description: C++18 implementation for a Table by SchemaDefIdx index key object.

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

#include <cfbam/CFBamTableBySchemaDefIdxKey.hpp>
#include <cfbam/CFBamTableBuff.hpp>
#include <cfbam/CFBamTableHBuff.hpp>

namespace cfbam {
	const std::string CFBamTableBySchemaDefIdxKey::CLASS_NAME( "CFBamTableBySchemaDefIdxKey" );
	const std::string CFBamTableBySchemaDefIdxKey::S_VALUE( "value" );
	const std::string CFBamTableBySchemaDefIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamTableBySchemaDefIdxKey::CFBamTableBySchemaDefIdxKey() {
		requiredTenantId = cfbam::CFBamTableBuff::TENANTID_INIT_VALUE;
		requiredSchemaDefId = cfbam::CFBamTableBuff::SCHEMADEFID_INIT_VALUE;
	}

	CFBamTableBySchemaDefIdxKey::CFBamTableBySchemaDefIdxKey( const CFBamTableBySchemaDefIdxKey& src ) {
		requiredTenantId = cfbam::CFBamTableBuff::TENANTID_INIT_VALUE;
		requiredSchemaDefId = cfbam::CFBamTableBuff::SCHEMADEFID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
	}

	CFBamTableBySchemaDefIdxKey::~CFBamTableBySchemaDefIdxKey() {
	}

	const int64_t CFBamTableBySchemaDefIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamTableBySchemaDefIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamTableBySchemaDefIdxKey::setRequiredTenantId( const int64_t value ) {
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

	const int64_t CFBamTableBySchemaDefIdxKey::getRequiredSchemaDefId() const {
		return( requiredSchemaDefId );
	}

	const int64_t* CFBamTableBySchemaDefIdxKey::getRequiredSchemaDefIdReference() const {
		return( &requiredSchemaDefId );
	}

	void CFBamTableBySchemaDefIdxKey::setRequiredSchemaDefId( const int64_t value ) {
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

	size_t CFBamTableBySchemaDefIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredSchemaDefId() );
		return( hashCode );
	}

	std::string CFBamTableBySchemaDefIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamTableBySchemaDefIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_SchemaDefId( "SchemaDefId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SchemaDefId, getRequiredSchemaDefId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamTableBySchemaDefIdxKey::operator <( const CFBamTableBySchemaDefIdxKey& rhs ) {
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
		return( false );
	}

	bool CFBamTableBySchemaDefIdxKey::operator <( const CFBamTableHBuff& rhs ) {
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
		return( false );
	}

	bool CFBamTableBySchemaDefIdxKey::operator <( const CFBamTableBuff& rhs ) {
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
		return( false );
	}

	bool CFBamTableBySchemaDefIdxKey::operator <=( const CFBamTableBySchemaDefIdxKey& rhs ) {
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
		return( true );
	}

	bool CFBamTableBySchemaDefIdxKey::operator <=( const CFBamTableHBuff& rhs ) {
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
		return( true );
	}

	bool CFBamTableBySchemaDefIdxKey::operator <=( const CFBamTableBuff& rhs ) {
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
		return( true );
	}

	bool CFBamTableBySchemaDefIdxKey::operator ==( const CFBamTableBySchemaDefIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamTableBySchemaDefIdxKey::operator ==( const CFBamTableHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamTableBySchemaDefIdxKey::operator ==( const CFBamTableBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamTableBySchemaDefIdxKey::operator !=( const CFBamTableBySchemaDefIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTableBySchemaDefIdxKey::operator !=( const CFBamTableHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTableBySchemaDefIdxKey::operator !=( const CFBamTableBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamTableBySchemaDefIdxKey::operator >=( const CFBamTableBySchemaDefIdxKey& rhs ) {
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
		return( true );
	}

	bool CFBamTableBySchemaDefIdxKey::operator >=( const CFBamTableHBuff& rhs ) {
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
		return( true );
	}

	bool CFBamTableBySchemaDefIdxKey::operator >=( const CFBamTableBuff& rhs ) {
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
		return( true );
	}

	bool CFBamTableBySchemaDefIdxKey::operator >( const CFBamTableBySchemaDefIdxKey& rhs ) {
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
		return( false );
	}

	bool CFBamTableBySchemaDefIdxKey::operator >( const CFBamTableHBuff& rhs ) {
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
		return( false );
	}

	bool CFBamTableBySchemaDefIdxKey::operator >( const CFBamTableBuff& rhs ) {
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
		return( false );
	}
	CFBamTableBySchemaDefIdxKey CFBamTableBySchemaDefIdxKey::operator =( cfbam::CFBamTableBySchemaDefIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		return( *this );
	}

	CFBamTableBySchemaDefIdxKey CFBamTableBySchemaDefIdxKey::operator =( cfbam::CFBamTableBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		return( *this );
	}

	CFBamTableBySchemaDefIdxKey CFBamTableBySchemaDefIdxKey::operator =( cfbam::CFBamTableHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredSchemaDefId( src.getRequiredSchemaDefId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableBySchemaDefIdxKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
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
		return( false );
	}

	bool operator <=(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableBySchemaDefIdxKey& rhs ) {
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
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
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
		return( true );
	}

	bool operator <=(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
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
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableBySchemaDefIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableBySchemaDefIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredSchemaDefId() != rhs.getRequiredSchemaDefId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableBySchemaDefIdxKey& rhs ) {
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
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
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
		return( true );
	}

	bool operator >=(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
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
		return( true );
	}

	bool operator >(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableBySchemaDefIdxKey& rhs ) {
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
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs ) {
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
		return( false );
	}

	bool operator >(const  cfbam::CFBamTableBySchemaDefIdxKey& lhs, const cfbam::CFBamTableBuff& rhs ) {
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
		return( false );
	}
}

