// Description: C++18 implementation for a Relation by ToTblIdx index key object.

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

#include <cfbam/CFBamRelationByToTblIdxKey.hpp>
#include <cfbam/CFBamRelationBuff.hpp>
#include <cfbam/CFBamRelationHBuff.hpp>

namespace cfbam {
	const std::string CFBamRelationByToTblIdxKey::CLASS_NAME( "CFBamRelationByToTblIdxKey" );
	const std::string CFBamRelationByToTblIdxKey::S_VALUE( "value" );
	const std::string CFBamRelationByToTblIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamRelationByToTblIdxKey::CFBamRelationByToTblIdxKey() {
		requiredTenantId = cfbam::CFBamRelationBuff::TENANTID_INIT_VALUE;
		requiredToTableId = cfbam::CFBamRelationBuff::TOTABLEID_INIT_VALUE;
	}

	CFBamRelationByToTblIdxKey::CFBamRelationByToTblIdxKey( const CFBamRelationByToTblIdxKey& src ) {
		requiredTenantId = cfbam::CFBamRelationBuff::TENANTID_INIT_VALUE;
		requiredToTableId = cfbam::CFBamRelationBuff::TOTABLEID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredToTableId( src.getRequiredToTableId() );
	}

	CFBamRelationByToTblIdxKey::~CFBamRelationByToTblIdxKey() {
	}

	const int64_t CFBamRelationByToTblIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamRelationByToTblIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamRelationByToTblIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamRelationBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamRelationByToTblIdxKey::getRequiredToTableId() const {
		return( requiredToTableId );
	}

	const int64_t* CFBamRelationByToTblIdxKey::getRequiredToTableIdReference() const {
		return( &requiredToTableId );
	}

	void CFBamRelationByToTblIdxKey::setRequiredToTableId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredToTableId" );
		if( value < cfbam::CFBamRelationBuff::TOTABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamRelationBuff::TOTABLEID_MIN_VALUE );
		}
		requiredToTableId = value;
	}

	size_t CFBamRelationByToTblIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredToTableId() );
		return( hashCode );
	}

	std::string CFBamRelationByToTblIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamRelationByToTblIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_ToTableId( "ToTableId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ToTableId, getRequiredToTableId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamRelationByToTblIdxKey::operator <( const CFBamRelationByToTblIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToTblIdxKey::operator <( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToTblIdxKey::operator <( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToTblIdxKey::operator <=( const CFBamRelationByToTblIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByToTblIdxKey::operator <=( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByToTblIdxKey::operator <=( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByToTblIdxKey::operator ==( const CFBamRelationByToTblIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationByToTblIdxKey::operator ==( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationByToTblIdxKey::operator ==( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRelationByToTblIdxKey::operator !=( const CFBamRelationByToTblIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToTblIdxKey::operator !=( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToTblIdxKey::operator !=( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToTblIdxKey::operator >=( const CFBamRelationByToTblIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByToTblIdxKey::operator >=( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByToTblIdxKey::operator >=( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRelationByToTblIdxKey::operator >( const CFBamRelationByToTblIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToTblIdxKey::operator >( const CFBamRelationHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRelationByToTblIdxKey::operator >( const CFBamRelationBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}
	CFBamRelationByToTblIdxKey CFBamRelationByToTblIdxKey::operator =( cfbam::CFBamRelationByToTblIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredToTableId( src.getRequiredToTableId() );
		return( *this );
	}

	CFBamRelationByToTblIdxKey CFBamRelationByToTblIdxKey::operator =( cfbam::CFBamRelationBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredToTableId( src.getRequiredToTableId() );
		return( *this );
	}

	CFBamRelationByToTblIdxKey CFBamRelationByToTblIdxKey::operator =( cfbam::CFBamRelationHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredToTableId( src.getRequiredToTableId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() != rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamRelationByToTblIdxKey& lhs, const cfbam::CFBamRelationBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredToTableId() < rhs.getRequiredToTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredToTableId() > rhs.getRequiredToTableId() ) {
			return( true );
		}
		return( false );
	}
}

