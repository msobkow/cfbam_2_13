// Description: C++18 implementation for a DelTopDep by DelTopDepTblIdx index key object.

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

#include <cfbam/CFBamDelTopDepByDelTopDepTblIdxKey.hpp>
#include <cfbam/CFBamDelTopDepBuff.hpp>
#include <cfbam/CFBamDelTopDepHBuff.hpp>

namespace cfbam {
	const std::string CFBamDelTopDepByDelTopDepTblIdxKey::CLASS_NAME( "CFBamDelTopDepByDelTopDepTblIdxKey" );
	const std::string CFBamDelTopDepByDelTopDepTblIdxKey::S_VALUE( "value" );
	const std::string CFBamDelTopDepByDelTopDepTblIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamDelTopDepByDelTopDepTblIdxKey::CFBamDelTopDepByDelTopDepTblIdxKey() {
		requiredTableTenantId = cfbam::CFBamDelTopDepBuff::TABLETENANTID_INIT_VALUE;
		requiredTableId = cfbam::CFBamDelTopDepBuff::TABLEID_INIT_VALUE;
	}

	CFBamDelTopDepByDelTopDepTblIdxKey::CFBamDelTopDepByDelTopDepTblIdxKey( const CFBamDelTopDepByDelTopDepTblIdxKey& src ) {
		requiredTableTenantId = cfbam::CFBamDelTopDepBuff::TABLETENANTID_INIT_VALUE;
		requiredTableId = cfbam::CFBamDelTopDepBuff::TABLEID_INIT_VALUE;
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
	}

	CFBamDelTopDepByDelTopDepTblIdxKey::~CFBamDelTopDepByDelTopDepTblIdxKey() {
	}

	const int64_t CFBamDelTopDepByDelTopDepTblIdxKey::getRequiredTableTenantId() const {
		return( requiredTableTenantId );
	}

	const int64_t* CFBamDelTopDepByDelTopDepTblIdxKey::getRequiredTableTenantIdReference() const {
		return( &requiredTableTenantId );
	}

	void CFBamDelTopDepByDelTopDepTblIdxKey::setRequiredTableTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTableTenantId" );
		if( value < cfbam::CFBamDelTopDepBuff::TABLETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelTopDepBuff::TABLETENANTID_MIN_VALUE );
		}
		requiredTableTenantId = value;
	}

	const int64_t CFBamDelTopDepByDelTopDepTblIdxKey::getRequiredTableId() const {
		return( requiredTableId );
	}

	const int64_t* CFBamDelTopDepByDelTopDepTblIdxKey::getRequiredTableIdReference() const {
		return( &requiredTableId );
	}

	void CFBamDelTopDepByDelTopDepTblIdxKey::setRequiredTableId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTableId" );
		if( value < cfbam::CFBamDelTopDepBuff::TABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelTopDepBuff::TABLEID_MIN_VALUE );
		}
		requiredTableId = value;
	}

	size_t CFBamDelTopDepByDelTopDepTblIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTableTenantId() );
		hashCode = hashCode + (int)( getRequiredTableId() );
		return( hashCode );
	}

	std::string CFBamDelTopDepByDelTopDepTblIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelTopDepByDelTopDepTblIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TableTenantId( "TableTenantId" );
		static const std::string S_TableId( "TableId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableTenantId, getRequiredTableTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, getRequiredTableId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator <( const CFBamDelTopDepByDelTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator <( const CFBamDelTopDepHBuff& rhs ) {
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator <( const CFBamDelTopDepBuff& rhs ) {
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator <=( const CFBamDelTopDepByDelTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator <=( const CFBamDelTopDepHBuff& rhs ) {
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator <=( const CFBamDelTopDepBuff& rhs ) {
		if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator ==( const CFBamDelTopDepByDelTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator ==( const CFBamDelTopDepHBuff& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator ==( const CFBamDelTopDepBuff& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator !=( const CFBamDelTopDepByDelTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator !=( const CFBamDelTopDepHBuff& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator !=( const CFBamDelTopDepBuff& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator >=( const CFBamDelTopDepByDelTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator >=( const CFBamDelTopDepHBuff& rhs ) {
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator >=( const CFBamDelTopDepBuff& rhs ) {
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator >( const CFBamDelTopDepByDelTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator >( const CFBamDelTopDepHBuff& rhs ) {
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelTopDepByDelTopDepTblIdxKey::operator >( const CFBamDelTopDepBuff& rhs ) {
		if( getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}
	CFBamDelTopDepByDelTopDepTblIdxKey CFBamDelTopDepByDelTopDepTblIdxKey::operator =( cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& src ) {
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		return( *this );
	}

	CFBamDelTopDepByDelTopDepTblIdxKey CFBamDelTopDepByDelTopDepTblIdxKey::operator =( cfbam::CFBamDelTopDepBuff& src ) {
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		return( *this );
	}

	CFBamDelTopDepByDelTopDepTblIdxKey CFBamDelTopDepByDelTopDepTblIdxKey::operator =( cfbam::CFBamDelTopDepHBuff& src ) {
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepHBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepHBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepHBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepHBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepHBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepHBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& lhs, const cfbam::CFBamDelTopDepBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() < rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableTenantId() > rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() < rhs.getRequiredTableId() ) {
			return( false );
		}
		else if( lhs.getRequiredTableId() > rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}
}

