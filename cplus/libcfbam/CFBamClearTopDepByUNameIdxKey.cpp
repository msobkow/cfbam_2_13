// Description: C++18 implementation for a ClearTopDep by UNameIdx index key object.

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

#include <cfbam/CFBamClearTopDepByUNameIdxKey.hpp>
#include <cfbam/CFBamClearTopDepBuff.hpp>
#include <cfbam/CFBamClearTopDepHBuff.hpp>

namespace cfbam {
	const std::string CFBamClearTopDepByUNameIdxKey::CLASS_NAME( "CFBamClearTopDepByUNameIdxKey" );
	const std::string CFBamClearTopDepByUNameIdxKey::S_VALUE( "value" );
	const std::string CFBamClearTopDepByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamClearTopDepByUNameIdxKey::CFBamClearTopDepByUNameIdxKey() {
		requiredTableTenantId = cfbam::CFBamClearTopDepBuff::TABLETENANTID_INIT_VALUE;
		requiredTableId = cfbam::CFBamClearTopDepBuff::TABLEID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamClearTopDepBuff::NAME_INIT_VALUE );
	}

	CFBamClearTopDepByUNameIdxKey::CFBamClearTopDepByUNameIdxKey( const CFBamClearTopDepByUNameIdxKey& src ) {
		requiredTableTenantId = cfbam::CFBamClearTopDepBuff::TABLETENANTID_INIT_VALUE;
		requiredTableId = cfbam::CFBamClearTopDepBuff::TABLEID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamClearTopDepBuff::NAME_INIT_VALUE );
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamClearTopDepByUNameIdxKey::~CFBamClearTopDepByUNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const int64_t CFBamClearTopDepByUNameIdxKey::getRequiredTableTenantId() const {
		return( requiredTableTenantId );
	}

	const int64_t* CFBamClearTopDepByUNameIdxKey::getRequiredTableTenantIdReference() const {
		return( &requiredTableTenantId );
	}

	void CFBamClearTopDepByUNameIdxKey::setRequiredTableTenantId( const int64_t value ) {
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

	const int64_t CFBamClearTopDepByUNameIdxKey::getRequiredTableId() const {
		return( requiredTableId );
	}

	const int64_t* CFBamClearTopDepByUNameIdxKey::getRequiredTableIdReference() const {
		return( &requiredTableId );
	}

	void CFBamClearTopDepByUNameIdxKey::setRequiredTableId( const int64_t value ) {
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

	const std::string& CFBamClearTopDepByUNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamClearTopDepByUNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamClearTopDepByUNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamClearTopDepBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamClearTopDepBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamClearTopDepByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTableTenantId() );
		hashCode = hashCode + (int)( getRequiredTableId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFBamClearTopDepByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearTopDepByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TableTenantId( "TableTenantId" );
		static const std::string S_TableId( "TableId" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableTenantId, getRequiredTableTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TableId, getRequiredTableId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator <( const CFBamClearTopDepByUNameIdxKey& rhs ) {
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
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator <( const CFBamClearTopDepHBuff& rhs ) {
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
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator <( const CFBamClearTopDepBuff& rhs ) {
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
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator <=( const CFBamClearTopDepByUNameIdxKey& rhs ) {
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
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator <=( const CFBamClearTopDepHBuff& rhs ) {
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
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator <=( const CFBamClearTopDepBuff& rhs ) {
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
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator ==( const CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator ==( const CFBamClearTopDepHBuff& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator ==( const CFBamClearTopDepBuff& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator !=( const CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator !=( const CFBamClearTopDepHBuff& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator !=( const CFBamClearTopDepBuff& rhs ) {
		if( getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator >=( const CFBamClearTopDepByUNameIdxKey& rhs ) {
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
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator >=( const CFBamClearTopDepHBuff& rhs ) {
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
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator >=( const CFBamClearTopDepBuff& rhs ) {
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
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator >( const CFBamClearTopDepByUNameIdxKey& rhs ) {
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
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator >( const CFBamClearTopDepHBuff& rhs ) {
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
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearTopDepByUNameIdxKey::operator >( const CFBamClearTopDepBuff& rhs ) {
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
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}
	CFBamClearTopDepByUNameIdxKey CFBamClearTopDepByUNameIdxKey::operator =( cfbam::CFBamClearTopDepByUNameIdxKey& src ) {
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamClearTopDepByUNameIdxKey CFBamClearTopDepByUNameIdxKey::operator =( cfbam::CFBamClearTopDepBuff& src ) {
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamClearTopDepByUNameIdxKey CFBamClearTopDepByUNameIdxKey::operator =( cfbam::CFBamClearTopDepHBuff& src ) {
		setRequiredTableTenantId( src.getRequiredTableTenantId() );
		setRequiredTableId( src.getRequiredTableId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepByUNameIdxKey& rhs ) {
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
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
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
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepByUNameIdxKey& rhs ) {
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
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
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
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
		if( lhs.getRequiredTableTenantId() != rhs.getRequiredTableTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTableId() != rhs.getRequiredTableId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepByUNameIdxKey& rhs ) {
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
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
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
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepByUNameIdxKey& rhs ) {
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
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepHBuff& rhs ) {
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
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamClearTopDepByUNameIdxKey& lhs, const cfbam::CFBamClearTopDepBuff& rhs ) {
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
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}
}

