// Description: C++18 implementation for a ClearSubDep2 by UNameIdx index key object.

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

#include <cfbam/CFBamClearSubDep2ByUNameIdxKey.hpp>
#include <cfbam/CFBamClearSubDep2Buff.hpp>
#include <cfbam/CFBamClearSubDep2HBuff.hpp>

namespace cfbam {
	const std::string CFBamClearSubDep2ByUNameIdxKey::CLASS_NAME( "CFBamClearSubDep2ByUNameIdxKey" );
	const std::string CFBamClearSubDep2ByUNameIdxKey::S_VALUE( "value" );
	const std::string CFBamClearSubDep2ByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamClearSubDep2ByUNameIdxKey::CFBamClearSubDep2ByUNameIdxKey() {
		requiredClearSubDep1TenantId = cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1TENANTID_INIT_VALUE;
		requiredClearSubDep1Id = cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamClearSubDep2Buff::NAME_INIT_VALUE );
	}

	CFBamClearSubDep2ByUNameIdxKey::CFBamClearSubDep2ByUNameIdxKey( const CFBamClearSubDep2ByUNameIdxKey& src ) {
		requiredClearSubDep1TenantId = cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1TENANTID_INIT_VALUE;
		requiredClearSubDep1Id = cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamClearSubDep2Buff::NAME_INIT_VALUE );
		setRequiredClearSubDep1TenantId( src.getRequiredClearSubDep1TenantId() );
		setRequiredClearSubDep1Id( src.getRequiredClearSubDep1Id() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamClearSubDep2ByUNameIdxKey::~CFBamClearSubDep2ByUNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const int64_t CFBamClearSubDep2ByUNameIdxKey::getRequiredClearSubDep1TenantId() const {
		return( requiredClearSubDep1TenantId );
	}

	const int64_t* CFBamClearSubDep2ByUNameIdxKey::getRequiredClearSubDep1TenantIdReference() const {
		return( &requiredClearSubDep1TenantId );
	}

	void CFBamClearSubDep2ByUNameIdxKey::setRequiredClearSubDep1TenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearSubDep1TenantId" );
		if( value < cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1TENANTID_MIN_VALUE );
		}
		requiredClearSubDep1TenantId = value;
	}

	const int64_t CFBamClearSubDep2ByUNameIdxKey::getRequiredClearSubDep1Id() const {
		return( requiredClearSubDep1Id );
	}

	const int64_t* CFBamClearSubDep2ByUNameIdxKey::getRequiredClearSubDep1IdReference() const {
		return( &requiredClearSubDep1Id );
	}

	void CFBamClearSubDep2ByUNameIdxKey::setRequiredClearSubDep1Id( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClearSubDep1Id" );
		if( value < cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamClearSubDep2Buff::CLEARSUBDEP1ID_MIN_VALUE );
		}
		requiredClearSubDep1Id = value;
	}

	const std::string& CFBamClearSubDep2ByUNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamClearSubDep2ByUNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamClearSubDep2ByUNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamClearSubDep2Buff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamClearSubDep2Buff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamClearSubDep2ByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClearSubDep1TenantId() );
		hashCode = hashCode + (int)( getRequiredClearSubDep1Id() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFBamClearSubDep2ByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamClearSubDep2ByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClearSubDep1TenantId( "ClearSubDep1TenantId" );
		static const std::string S_ClearSubDep1Id( "ClearSubDep1Id" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep1TenantId, getRequiredClearSubDep1TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClearSubDep1Id, getRequiredClearSubDep1Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamClearSubDep2ByUNameIdxKey::operator <( const CFBamClearSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
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

	bool CFBamClearSubDep2ByUNameIdxKey::operator <( const CFBamClearSubDep2HBuff& rhs ) {
		if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
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

	bool CFBamClearSubDep2ByUNameIdxKey::operator <( const CFBamClearSubDep2Buff& rhs ) {
		if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
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

	bool CFBamClearSubDep2ByUNameIdxKey::operator <=( const CFBamClearSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
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

	bool CFBamClearSubDep2ByUNameIdxKey::operator <=( const CFBamClearSubDep2HBuff& rhs ) {
		if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
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

	bool CFBamClearSubDep2ByUNameIdxKey::operator <=( const CFBamClearSubDep2Buff& rhs ) {
		if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
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

	bool CFBamClearSubDep2ByUNameIdxKey::operator ==( const CFBamClearSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep2ByUNameIdxKey::operator ==( const CFBamClearSubDep2HBuff& rhs ) {
		if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep2ByUNameIdxKey::operator ==( const CFBamClearSubDep2Buff& rhs ) {
		if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamClearSubDep2ByUNameIdxKey::operator !=( const CFBamClearSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep2ByUNameIdxKey::operator !=( const CFBamClearSubDep2HBuff& rhs ) {
		if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep2ByUNameIdxKey::operator !=( const CFBamClearSubDep2Buff& rhs ) {
		if( getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamClearSubDep2ByUNameIdxKey::operator >=( const CFBamClearSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
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

	bool CFBamClearSubDep2ByUNameIdxKey::operator >=( const CFBamClearSubDep2HBuff& rhs ) {
		if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
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

	bool CFBamClearSubDep2ByUNameIdxKey::operator >=( const CFBamClearSubDep2Buff& rhs ) {
		if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
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

	bool CFBamClearSubDep2ByUNameIdxKey::operator >( const CFBamClearSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
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

	bool CFBamClearSubDep2ByUNameIdxKey::operator >( const CFBamClearSubDep2HBuff& rhs ) {
		if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
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

	bool CFBamClearSubDep2ByUNameIdxKey::operator >( const CFBamClearSubDep2Buff& rhs ) {
		if( getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
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
	CFBamClearSubDep2ByUNameIdxKey CFBamClearSubDep2ByUNameIdxKey::operator =( cfbam::CFBamClearSubDep2ByUNameIdxKey& src ) {
		setRequiredClearSubDep1TenantId( src.getRequiredClearSubDep1TenantId() );
		setRequiredClearSubDep1Id( src.getRequiredClearSubDep1Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamClearSubDep2ByUNameIdxKey CFBamClearSubDep2ByUNameIdxKey::operator =( cfbam::CFBamClearSubDep2Buff& src ) {
		setRequiredClearSubDep1TenantId( src.getRequiredClearSubDep1TenantId() );
		setRequiredClearSubDep1Id( src.getRequiredClearSubDep1Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamClearSubDep2ByUNameIdxKey CFBamClearSubDep2ByUNameIdxKey::operator =( cfbam::CFBamClearSubDep2HBuff& src ) {
		setRequiredClearSubDep1TenantId( src.getRequiredClearSubDep1TenantId() );
		setRequiredClearSubDep1Id( src.getRequiredClearSubDep1Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
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

	bool operator <(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
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

	bool operator <(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2Buff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
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

	bool operator <=(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2Buff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
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

	bool operator ==(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2Buff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2Buff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() != rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() != rhs.getRequiredClearSubDep1Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
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

	bool operator >=(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
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

	bool operator >=(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2Buff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2HBuff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
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

	bool operator >(const  cfbam::CFBamClearSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep2Buff& rhs ) {
		if( lhs.getRequiredClearSubDep1TenantId() < rhs.getRequiredClearSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1TenantId() > rhs.getRequiredClearSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredClearSubDep1Id() < rhs.getRequiredClearSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredClearSubDep1Id() > rhs.getRequiredClearSubDep1Id() ) {
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

