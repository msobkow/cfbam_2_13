// Description: C++18 implementation for a ClearSubDep3 by UNameIdx index key object.

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

#include <cfbam/CFBamClearSubDep3ByUNameIdxKey.hpp>
#include <cfbam/CFBamClearSubDep3Buff.hpp>
#include <cfbam/CFBamClearSubDep3HBuff.hpp>

namespace cfbam {
	const std::string CFBamClearSubDep3ByUNameIdxKey::CLASS_NAME( "CFBamClearSubDep3ByUNameIdxKey" );
	const std::string CFBamClearSubDep3ByUNameIdxKey::S_VALUE( "value" );
	const std::string CFBamClearSubDep3ByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamClearSubDep3ByUNameIdxKey::CFBamClearSubDep3ByUNameIdxKey() {
		requiredClearSubDep2TenantId = cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2TENANTID_INIT_VALUE;
		requiredClearSubDep2Id = cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamClearSubDep3Buff::NAME_INIT_VALUE );
	}

	CFBamClearSubDep3ByUNameIdxKey::CFBamClearSubDep3ByUNameIdxKey( const CFBamClearSubDep3ByUNameIdxKey& src ) {
		requiredClearSubDep2TenantId = cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2TENANTID_INIT_VALUE;
		requiredClearSubDep2Id = cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamClearSubDep3Buff::NAME_INIT_VALUE );
		setRequiredClearSubDep2TenantId( src.getRequiredClearSubDep2TenantId() );
		setRequiredClearSubDep2Id( src.getRequiredClearSubDep2Id() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamClearSubDep3ByUNameIdxKey::~CFBamClearSubDep3ByUNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const int64_t CFBamClearSubDep3ByUNameIdxKey::getRequiredClearSubDep2TenantId() const {
		return( requiredClearSubDep2TenantId );
	}

	const int64_t* CFBamClearSubDep3ByUNameIdxKey::getRequiredClearSubDep2TenantIdReference() const {
		return( &requiredClearSubDep2TenantId );
	}

	void CFBamClearSubDep3ByUNameIdxKey::setRequiredClearSubDep2TenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearSubDep2TenantId" );
		if( value < cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2TENANTID_MIN_VALUE );
		}
		requiredClearSubDep2TenantId = value;
	}

	const int64_t CFBamClearSubDep3ByUNameIdxKey::getRequiredClearSubDep2Id() const {
		return( requiredClearSubDep2Id );
	}

	const int64_t* CFBamClearSubDep3ByUNameIdxKey::getRequiredClearSubDep2IdReference() const {
		return( &requiredClearSubDep2Id );
	}

	void CFBamClearSubDep3ByUNameIdxKey::setRequiredClearSubDep2Id( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearSubDep2Id" );
		if( value < cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep3Buff::CLEARSUBDEP2ID_MIN_VALUE );
		}
		requiredClearSubDep2Id = value;
	}

	const std::string& CFBamClearSubDep3ByUNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamClearSubDep3ByUNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamClearSubDep3ByUNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamClearSubDep3Buff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamClearSubDep3Buff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamClearSubDep3ByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClearSubDep2TenantId() );
		hashCode = hashCode + (int)( getRequiredClearSubDep2Id() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFBamClearSubDep3ByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearSubDep3ByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClearSubDep2TenantId( "ClearSubDep2TenantId" );
		static const std::string S_ClearSubDep2Id( "ClearSubDep2Id" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep2TenantId, getRequiredClearSubDep2TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep2Id, getRequiredClearSubDep2Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamClearSubDep3ByUNameIdxKey::operator <( const CFBamClearSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
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

	bool CFBamClearSubDep3ByUNameIdxKey::operator <( const CFBamClearSubDep3HBuff& rhs ) {
		if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
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

	bool CFBamClearSubDep3ByUNameIdxKey::operator <( const CFBamClearSubDep3Buff& rhs ) {
		if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
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

	bool CFBamClearSubDep3ByUNameIdxKey::operator <=( const CFBamClearSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
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

	bool CFBamClearSubDep3ByUNameIdxKey::operator <=( const CFBamClearSubDep3HBuff& rhs ) {
		if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
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

	bool CFBamClearSubDep3ByUNameIdxKey::operator <=( const CFBamClearSubDep3Buff& rhs ) {
		if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
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

	bool CFBamClearSubDep3ByUNameIdxKey::operator ==( const CFBamClearSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep3ByUNameIdxKey::operator ==( const CFBamClearSubDep3HBuff& rhs ) {
		if( getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep3ByUNameIdxKey::operator ==( const CFBamClearSubDep3Buff& rhs ) {
		if( getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep3ByUNameIdxKey::operator !=( const CFBamClearSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep3ByUNameIdxKey::operator !=( const CFBamClearSubDep3HBuff& rhs ) {
		if( getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep3ByUNameIdxKey::operator !=( const CFBamClearSubDep3Buff& rhs ) {
		if( getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep3ByUNameIdxKey::operator >=( const CFBamClearSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
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

	bool CFBamClearSubDep3ByUNameIdxKey::operator >=( const CFBamClearSubDep3HBuff& rhs ) {
		if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
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

	bool CFBamClearSubDep3ByUNameIdxKey::operator >=( const CFBamClearSubDep3Buff& rhs ) {
		if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
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

	bool CFBamClearSubDep3ByUNameIdxKey::operator >( const CFBamClearSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
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

	bool CFBamClearSubDep3ByUNameIdxKey::operator >( const CFBamClearSubDep3HBuff& rhs ) {
		if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
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

	bool CFBamClearSubDep3ByUNameIdxKey::operator >( const CFBamClearSubDep3Buff& rhs ) {
		if( getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
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
	CFBamClearSubDep3ByUNameIdxKey CFBamClearSubDep3ByUNameIdxKey::operator =( cfbam::CFBamClearSubDep3ByUNameIdxKey& src ) {
		setRequiredClearSubDep2TenantId( src.getRequiredClearSubDep2TenantId() );
		setRequiredClearSubDep2Id( src.getRequiredClearSubDep2Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamClearSubDep3ByUNameIdxKey CFBamClearSubDep3ByUNameIdxKey::operator =( cfbam::CFBamClearSubDep3Buff& src ) {
		setRequiredClearSubDep2TenantId( src.getRequiredClearSubDep2TenantId() );
		setRequiredClearSubDep2Id( src.getRequiredClearSubDep2Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamClearSubDep3ByUNameIdxKey CFBamClearSubDep3ByUNameIdxKey::operator =( cfbam::CFBamClearSubDep3HBuff& src ) {
		setRequiredClearSubDep2TenantId( src.getRequiredClearSubDep2TenantId() );
		setRequiredClearSubDep2Id( src.getRequiredClearSubDep2Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
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

	bool operator <(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
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

	bool operator <(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
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

	bool operator ==(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() != rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() != rhs.getRequiredClearSubDep2Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
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

	bool operator >=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
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

	bool operator >=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs ) {
		if( lhs.getRequiredClearSubDep2TenantId() < rhs.getRequiredClearSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2TenantId() > rhs.getRequiredClearSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep2Id() < rhs.getRequiredClearSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep2Id() > rhs.getRequiredClearSubDep2Id() ) {
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

