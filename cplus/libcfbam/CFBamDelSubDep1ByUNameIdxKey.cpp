// Description: C++18 implementation for a DelSubDep1 by UNameIdx index key object.

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

#include <cfbam/CFBamDelSubDep1ByUNameIdxKey.hpp>
#include <cfbam/CFBamDelSubDep1Buff.hpp>
#include <cfbam/CFBamDelSubDep1HBuff.hpp>

namespace cfbam {
	const std::string CFBamDelSubDep1ByUNameIdxKey::CLASS_NAME( "CFBamDelSubDep1ByUNameIdxKey" );
	const std::string CFBamDelSubDep1ByUNameIdxKey::S_VALUE( "value" );
	const std::string CFBamDelSubDep1ByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamDelSubDep1ByUNameIdxKey::CFBamDelSubDep1ByUNameIdxKey() {
		requiredDelTopDepTenantId = cfbam::CFBamDelSubDep1Buff::DELTOPDEPTENANTID_INIT_VALUE;
		requiredDelTopDepId = cfbam::CFBamDelSubDep1Buff::DELTOPDEPID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamDelSubDep1Buff::NAME_INIT_VALUE );
	}

	CFBamDelSubDep1ByUNameIdxKey::CFBamDelSubDep1ByUNameIdxKey( const CFBamDelSubDep1ByUNameIdxKey& src ) {
		requiredDelTopDepTenantId = cfbam::CFBamDelSubDep1Buff::DELTOPDEPTENANTID_INIT_VALUE;
		requiredDelTopDepId = cfbam::CFBamDelSubDep1Buff::DELTOPDEPID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamDelSubDep1Buff::NAME_INIT_VALUE );
		setRequiredDelTopDepTenantId( src.getRequiredDelTopDepTenantId() );
		setRequiredDelTopDepId( src.getRequiredDelTopDepId() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamDelSubDep1ByUNameIdxKey::~CFBamDelSubDep1ByUNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const int64_t CFBamDelSubDep1ByUNameIdxKey::getRequiredDelTopDepTenantId() const {
		return( requiredDelTopDepTenantId );
	}

	const int64_t* CFBamDelSubDep1ByUNameIdxKey::getRequiredDelTopDepTenantIdReference() const {
		return( &requiredDelTopDepTenantId );
	}

	void CFBamDelSubDep1ByUNameIdxKey::setRequiredDelTopDepTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredDelTopDepTenantId" );
		if( value < cfbam::CFBamDelSubDep1Buff::DELTOPDEPTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelSubDep1Buff::DELTOPDEPTENANTID_MIN_VALUE );
		}
		requiredDelTopDepTenantId = value;
	}

	const int64_t CFBamDelSubDep1ByUNameIdxKey::getRequiredDelTopDepId() const {
		return( requiredDelTopDepId );
	}

	const int64_t* CFBamDelSubDep1ByUNameIdxKey::getRequiredDelTopDepIdReference() const {
		return( &requiredDelTopDepId );
	}

	void CFBamDelSubDep1ByUNameIdxKey::setRequiredDelTopDepId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredDelTopDepId" );
		if( value < cfbam::CFBamDelSubDep1Buff::DELTOPDEPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelSubDep1Buff::DELTOPDEPID_MIN_VALUE );
		}
		requiredDelTopDepId = value;
	}

	const std::string& CFBamDelSubDep1ByUNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamDelSubDep1ByUNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamDelSubDep1ByUNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamDelSubDep1Buff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamDelSubDep1Buff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamDelSubDep1ByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredDelTopDepTenantId() );
		hashCode = hashCode + (int)( getRequiredDelTopDepId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFBamDelSubDep1ByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelSubDep1ByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_DelTopDepTenantId( "DelTopDepTenantId" );
		static const std::string S_DelTopDepId( "DelTopDepId" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelTopDepTenantId, getRequiredDelTopDepTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelTopDepId, getRequiredDelTopDepId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamDelSubDep1ByUNameIdxKey::operator <( const CFBamDelSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
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

	bool CFBamDelSubDep1ByUNameIdxKey::operator <( const CFBamDelSubDep1HBuff& rhs ) {
		if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
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

	bool CFBamDelSubDep1ByUNameIdxKey::operator <( const CFBamDelSubDep1Buff& rhs ) {
		if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
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

	bool CFBamDelSubDep1ByUNameIdxKey::operator <=( const CFBamDelSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
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

	bool CFBamDelSubDep1ByUNameIdxKey::operator <=( const CFBamDelSubDep1HBuff& rhs ) {
		if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
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

	bool CFBamDelSubDep1ByUNameIdxKey::operator <=( const CFBamDelSubDep1Buff& rhs ) {
		if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
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

	bool CFBamDelSubDep1ByUNameIdxKey::operator ==( const CFBamDelSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep1ByUNameIdxKey::operator ==( const CFBamDelSubDep1HBuff& rhs ) {
		if( getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep1ByUNameIdxKey::operator ==( const CFBamDelSubDep1Buff& rhs ) {
		if( getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep1ByUNameIdxKey::operator !=( const CFBamDelSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep1ByUNameIdxKey::operator !=( const CFBamDelSubDep1HBuff& rhs ) {
		if( getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep1ByUNameIdxKey::operator !=( const CFBamDelSubDep1Buff& rhs ) {
		if( getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep1ByUNameIdxKey::operator >=( const CFBamDelSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
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

	bool CFBamDelSubDep1ByUNameIdxKey::operator >=( const CFBamDelSubDep1HBuff& rhs ) {
		if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
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

	bool CFBamDelSubDep1ByUNameIdxKey::operator >=( const CFBamDelSubDep1Buff& rhs ) {
		if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
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

	bool CFBamDelSubDep1ByUNameIdxKey::operator >( const CFBamDelSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
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

	bool CFBamDelSubDep1ByUNameIdxKey::operator >( const CFBamDelSubDep1HBuff& rhs ) {
		if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
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

	bool CFBamDelSubDep1ByUNameIdxKey::operator >( const CFBamDelSubDep1Buff& rhs ) {
		if( getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
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
	CFBamDelSubDep1ByUNameIdxKey CFBamDelSubDep1ByUNameIdxKey::operator =( cfbam::CFBamDelSubDep1ByUNameIdxKey& src ) {
		setRequiredDelTopDepTenantId( src.getRequiredDelTopDepTenantId() );
		setRequiredDelTopDepId( src.getRequiredDelTopDepId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamDelSubDep1ByUNameIdxKey CFBamDelSubDep1ByUNameIdxKey::operator =( cfbam::CFBamDelSubDep1Buff& src ) {
		setRequiredDelTopDepTenantId( src.getRequiredDelTopDepTenantId() );
		setRequiredDelTopDepId( src.getRequiredDelTopDepId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamDelSubDep1ByUNameIdxKey CFBamDelSubDep1ByUNameIdxKey::operator =( cfbam::CFBamDelSubDep1HBuff& src ) {
		setRequiredDelTopDepTenantId( src.getRequiredDelTopDepTenantId() );
		setRequiredDelTopDepId( src.getRequiredDelTopDepId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
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

	bool operator <(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
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

	bool operator <(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
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

	bool operator <=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
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

	bool operator <=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
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

	bool operator <=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
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

	bool operator ==(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() != rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() != rhs.getRequiredDelTopDepId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
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

	bool operator >=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
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

	bool operator >=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
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

	bool operator >(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
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

	bool operator >(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
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

	bool operator >(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs ) {
		if( lhs.getRequiredDelTopDepTenantId() < rhs.getRequiredDelTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepTenantId() > rhs.getRequiredDelTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelTopDepId() < rhs.getRequiredDelTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelTopDepId() > rhs.getRequiredDelTopDepId() ) {
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

