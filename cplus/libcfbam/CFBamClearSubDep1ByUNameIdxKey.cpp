// Description: C++18 implementation for a ClearSubDep1 by UNameIdx index key object.

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

#include <cfbam/CFBamClearSubDep1ByUNameIdxKey.hpp>
#include <cfbam/CFBamClearSubDep1Buff.hpp>
#include <cfbam/CFBamClearSubDep1HBuff.hpp>

namespace cfbam {
	const std::string CFBamClearSubDep1ByUNameIdxKey::CLASS_NAME( "CFBamClearSubDep1ByUNameIdxKey" );
	const std::string CFBamClearSubDep1ByUNameIdxKey::S_VALUE( "value" );
	const std::string CFBamClearSubDep1ByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamClearSubDep1ByUNameIdxKey::CFBamClearSubDep1ByUNameIdxKey() {
		requiredClearTopDepTenantId = cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_INIT_VALUE;
		requiredClearTopDepId = cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamClearSubDep1Buff::NAME_INIT_VALUE );
	}

	CFBamClearSubDep1ByUNameIdxKey::CFBamClearSubDep1ByUNameIdxKey( const CFBamClearSubDep1ByUNameIdxKey& src ) {
		requiredClearTopDepTenantId = cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_INIT_VALUE;
		requiredClearTopDepId = cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamClearSubDep1Buff::NAME_INIT_VALUE );
		setRequiredClearTopDepTenantId( src.getRequiredClearTopDepTenantId() );
		setRequiredClearTopDepId( src.getRequiredClearTopDepId() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamClearSubDep1ByUNameIdxKey::~CFBamClearSubDep1ByUNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const int64_t CFBamClearSubDep1ByUNameIdxKey::getRequiredClearTopDepTenantId() const {
		return( requiredClearTopDepTenantId );
	}

	const int64_t* CFBamClearSubDep1ByUNameIdxKey::getRequiredClearTopDepTenantIdReference() const {
		return( &requiredClearTopDepTenantId );
	}

	void CFBamClearSubDep1ByUNameIdxKey::setRequiredClearTopDepTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearTopDepTenantId" );
		if( value < cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPTENANTID_MIN_VALUE );
		}
		requiredClearTopDepTenantId = value;
	}

	const int64_t CFBamClearSubDep1ByUNameIdxKey::getRequiredClearTopDepId() const {
		return( requiredClearTopDepId );
	}

	const int64_t* CFBamClearSubDep1ByUNameIdxKey::getRequiredClearTopDepIdReference() const {
		return( &requiredClearTopDepId );
	}

	void CFBamClearSubDep1ByUNameIdxKey::setRequiredClearTopDepId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearTopDepId" );
		if( value < cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep1Buff::CLEARTOPDEPID_MIN_VALUE );
		}
		requiredClearTopDepId = value;
	}

	const std::string& CFBamClearSubDep1ByUNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamClearSubDep1ByUNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamClearSubDep1ByUNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamClearSubDep1Buff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamClearSubDep1Buff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamClearSubDep1ByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClearTopDepTenantId() );
		hashCode = hashCode + (int)( getRequiredClearTopDepId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFBamClearSubDep1ByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearSubDep1ByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClearTopDepTenantId( "ClearTopDepTenantId" );
		static const std::string S_ClearTopDepId( "ClearTopDepId" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearTopDepTenantId, getRequiredClearTopDepTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearTopDepId, getRequiredClearTopDepId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamClearSubDep1ByUNameIdxKey::operator <( const CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1ByUNameIdxKey::operator <( const CFBamClearSubDep1HBuff& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1ByUNameIdxKey::operator <( const CFBamClearSubDep1Buff& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1ByUNameIdxKey::operator <=( const CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1ByUNameIdxKey::operator <=( const CFBamClearSubDep1HBuff& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1ByUNameIdxKey::operator <=( const CFBamClearSubDep1Buff& rhs ) {
		if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1ByUNameIdxKey::operator ==( const CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep1ByUNameIdxKey::operator ==( const CFBamClearSubDep1HBuff& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep1ByUNameIdxKey::operator ==( const CFBamClearSubDep1Buff& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep1ByUNameIdxKey::operator !=( const CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1ByUNameIdxKey::operator !=( const CFBamClearSubDep1HBuff& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1ByUNameIdxKey::operator !=( const CFBamClearSubDep1Buff& rhs ) {
		if( getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep1ByUNameIdxKey::operator >=( const CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1ByUNameIdxKey::operator >=( const CFBamClearSubDep1HBuff& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1ByUNameIdxKey::operator >=( const CFBamClearSubDep1Buff& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1ByUNameIdxKey::operator >( const CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1ByUNameIdxKey::operator >( const CFBamClearSubDep1HBuff& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool CFBamClearSubDep1ByUNameIdxKey::operator >( const CFBamClearSubDep1Buff& rhs ) {
		if( getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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
	CFBamClearSubDep1ByUNameIdxKey CFBamClearSubDep1ByUNameIdxKey::operator =( cfbam::CFBamClearSubDep1ByUNameIdxKey& src ) {
		setRequiredClearTopDepTenantId( src.getRequiredClearTopDepTenantId() );
		setRequiredClearTopDepId( src.getRequiredClearTopDepId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamClearSubDep1ByUNameIdxKey CFBamClearSubDep1ByUNameIdxKey::operator =( cfbam::CFBamClearSubDep1Buff& src ) {
		setRequiredClearTopDepTenantId( src.getRequiredClearTopDepTenantId() );
		setRequiredClearTopDepId( src.getRequiredClearTopDepId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamClearSubDep1ByUNameIdxKey CFBamClearSubDep1ByUNameIdxKey::operator =( cfbam::CFBamClearSubDep1HBuff& src ) {
		setRequiredClearTopDepTenantId( src.getRequiredClearTopDepTenantId() );
		setRequiredClearTopDepId( src.getRequiredClearTopDepId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool operator <(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool operator <(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
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

	bool operator ==(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() != rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() != rhs.getRequiredClearTopDepId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool operator >=(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool operator >=(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs ) {
		if( lhs.getRequiredClearTopDepTenantId() < rhs.getRequiredClearTopDepTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepTenantId() > rhs.getRequiredClearTopDepTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearTopDepId() < rhs.getRequiredClearTopDepId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearTopDepId() > rhs.getRequiredClearTopDepId() ) {
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

