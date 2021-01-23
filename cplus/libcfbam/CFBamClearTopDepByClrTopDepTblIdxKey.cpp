// Description: C++18 implementation for a ClearTopDep by ClrTopDepTblIdx index key object.

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

#include <cfbam/CFBamClearTopDepByClrTopDepTblIdxKey.hpp>
#include <cfbam/CFBamClearTopDepBuff.hpp>
#include <cfbam/CFBamClearTopDepHBuff.hpp>

namespace cfbam {
	const std::string CFBamClearTopDepByClrTopDepTblIdxKey::CLASS_NAME( "CFBamClearTopDepByClrTopDepTblIdxKey" );
	const std::string CFBamClearTopDepByClrTopDepTblIdxKey::S_VALUE( "value" );
	const std::string CFBamClearTopDepByClrTopDepTblIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamClearTopDepByClrTopDepTblIdxKey::CFBamClearTopDepByClrTopDepTblIdxKey() {
		requiredTableTenantId = cfbam::CFBamClearTopDepBuff::TABLETENANTID_INIT_VALUE;
		requiredTableId = cfbam::CFBamClearTopDepBuff::TABLEID_INIT_VALUE;
	}

	CFBamClearTopDepByClrTopDepTblIdxKey::CFBamClearTopDepByClrTopDepTblIdxKey( const CFBamClearTopDepByClrTopDepTblIdxKey& src ) {
		requiredTableTenantId = cfbam::CFBamClearTopDepBuff::TABLETENANTID_INIT_VALUE;
		requiredTableId = cfbam::CFBamClearTopDepBuff::TABLEID_INIT_VALUE;
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
	}

	CFBamClearTopDepByClrTopDepTblIdxKey::~CFBamClearTopDepByClrTopDepTblIdxKey() {
	}

	const int64_t CFBamClearTopDepByClrTopDepTblIdxKey::getRequiredTableTenantId() const {
		return( requiredTableTenantId );
	}

	const int64_t* CFBamClearTopDepByClrTopDepTblIdxKey::getRequiredTableTenantIdReference() const {
		return( &requiredTableTenantId );
	}

	void CFBamClearTopDepByClrTopDepTblIdxKey::setRequiredTableTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTableTenantId" );
		if( value < cfbam::CFBamClearTopDepBuff::TABLETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearTopDepBuff::TABLETENANTID_MIN_VALUE );
		}
		requiredTableTenantId = value;
	}

	const int64_t CFBamClearTopDepByClrTopDepTblIdxKey::getRequiredTableId() const {
		return( requiredTableId );
	}

	const int64_t* CFBamClearTopDepByClrTopDepTblIdxKey::getRequiredTableIdReference() const {
		return( &requiredTableId );
	}

	void CFBamClearTopDepByClrTopDepTblIdxKey::setRequiredTableId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTableId" );
		if( value < cfbam::CFBamClearTopDepBuff::TABLEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearTopDepBuff::TABLEID_MIN_VALUE );
		}
		requiredTableId = value;
	}

	size_t CFBamClearTopDepByClrTopDepTblIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTableTenantId() );
		hashCode = hashCode + (int)( getRequiredTableId() );
		return( hashCode );
	}

	std::string CFBamClearTopDepByClrTopDepTblIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearTopDepByClrTopDepTblIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TableTenantId( "TableTenantId" );
		static const std::string S_TableId( "TableId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableTenantId, getRequiredTableTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, getRequiredTableId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator <( const CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
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

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator <( const CFBamClearTopDepHBuff& rhs ) {
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

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator <( const CFBamClearTopDepBuff& rhs ) {
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

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator <=( const CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
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

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator <=( const CFBamClearTopDepHBuff& rhs ) {
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

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator <=( const CFBamClearTopDepBuff& rhs ) {
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

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator ==( const CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator ==( const CFBamClearTopDepHBuff& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator ==( const CFBamClearTopDepBuff& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator !=( const CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator !=( const CFBamClearTopDepHBuff& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator !=( const CFBamClearTopDepBuff& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator >=( const CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
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

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator >=( const CFBamClearTopDepHBuff& rhs ) {
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

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator >=( const CFBamClearTopDepBuff& rhs ) {
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

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator >( const CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
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

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator >( const CFBamClearTopDepHBuff& rhs ) {
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

	bool CFBamClearTopDepByClrTopDepTblIdxKey::operator >( const CFBamClearTopDepBuff& rhs ) {
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
	CFBamClearTopDepByClrTopDepTblIdxKey CFBamClearTopDepByClrTopDepTblIdxKey::operator =( cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& src ) {
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		return( *this );
	}

	CFBamClearTopDepByClrTopDepTblIdxKey CFBamClearTopDepByClrTopDepTblIdxKey::operator =( cfbam::CFBamClearTopDepBuff& src ) {
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		return( *this );
	}

	CFBamClearTopDepByClrTopDepTblIdxKey CFBamClearTopDepByClrTopDepTblIdxKey::operator =( cfbam::CFBamClearTopDepHBuff& src ) {
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
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

	bool operator <(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
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

	bool operator <(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
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

	bool operator <=(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
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

	bool operator <=(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
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

	bool operator <=(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
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

	bool operator ==(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
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

	bool operator >=(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
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

	bool operator >=(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
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

	bool operator >(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& rhs ) {
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

	bool operator >(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
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

	bool operator >(const  cfbam::CFBamClearTopDepByClrTopDepTblIdxKey& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
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

