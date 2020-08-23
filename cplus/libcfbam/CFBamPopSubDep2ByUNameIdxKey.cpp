// Description: C++18 implementation for a PopSubDep2 by UNameIdx index key object.

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

#include <cfbam/CFBamPopSubDep2ByUNameIdxKey.hpp>
#include <cfbam/CFBamPopSubDep2Buff.hpp>
#include <cfbam/CFBamPopSubDep2HBuff.hpp>

namespace cfbam {
	const std::string CFBamPopSubDep2ByUNameIdxKey::CLASS_NAME( "CFBamPopSubDep2ByUNameIdxKey" );
	const std::string CFBamPopSubDep2ByUNameIdxKey::S_VALUE( "value" );
	const std::string CFBamPopSubDep2ByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamPopSubDep2ByUNameIdxKey::CFBamPopSubDep2ByUNameIdxKey() {
		requiredPopSubDep1TenantId = cfbam::CFBamPopSubDep2Buff::POPSUBDEP1TENANTID_INIT_VALUE;
		requiredPopSubDep1Id = cfbam::CFBamPopSubDep2Buff::POPSUBDEP1ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamPopSubDep2Buff::NAME_INIT_VALUE );
	}

	CFBamPopSubDep2ByUNameIdxKey::CFBamPopSubDep2ByUNameIdxKey( const CFBamPopSubDep2ByUNameIdxKey& src ) {
		requiredPopSubDep1TenantId = cfbam::CFBamPopSubDep2Buff::POPSUBDEP1TENANTID_INIT_VALUE;
		requiredPopSubDep1Id = cfbam::CFBamPopSubDep2Buff::POPSUBDEP1ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamPopSubDep2Buff::NAME_INIT_VALUE );
		setRequiredPopSubDep1TenantId( src.getRequiredPopSubDep1TenantId() );
		setRequiredPopSubDep1Id( src.getRequiredPopSubDep1Id() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamPopSubDep2ByUNameIdxKey::~CFBamPopSubDep2ByUNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const int64_t CFBamPopSubDep2ByUNameIdxKey::getRequiredPopSubDep1TenantId() const {
		return( requiredPopSubDep1TenantId );
	}

	const int64_t* CFBamPopSubDep2ByUNameIdxKey::getRequiredPopSubDep1TenantIdReference() const {
		return( &requiredPopSubDep1TenantId );
	}

	void CFBamPopSubDep2ByUNameIdxKey::setRequiredPopSubDep1TenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPopSubDep1TenantId" );
		if( value < cfbam::CFBamPopSubDep2Buff::POPSUBDEP1TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopSubDep2Buff::POPSUBDEP1TENANTID_MIN_VALUE );
		}
		requiredPopSubDep1TenantId = value;
	}

	const int64_t CFBamPopSubDep2ByUNameIdxKey::getRequiredPopSubDep1Id() const {
		return( requiredPopSubDep1Id );
	}

	const int64_t* CFBamPopSubDep2ByUNameIdxKey::getRequiredPopSubDep1IdReference() const {
		return( &requiredPopSubDep1Id );
	}

	void CFBamPopSubDep2ByUNameIdxKey::setRequiredPopSubDep1Id( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPopSubDep1Id" );
		if( value < cfbam::CFBamPopSubDep2Buff::POPSUBDEP1ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopSubDep2Buff::POPSUBDEP1ID_MIN_VALUE );
		}
		requiredPopSubDep1Id = value;
	}

	const std::string& CFBamPopSubDep2ByUNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamPopSubDep2ByUNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamPopSubDep2ByUNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamPopSubDep2Buff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamPopSubDep2Buff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamPopSubDep2ByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredPopSubDep1TenantId() );
		hashCode = hashCode + (int)( getRequiredPopSubDep1Id() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFBamPopSubDep2ByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopSubDep2ByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_PopSubDep1TenantId( "PopSubDep1TenantId" );
		static const std::string S_PopSubDep1Id( "PopSubDep1Id" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep1TenantId, getRequiredPopSubDep1TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep1Id, getRequiredPopSubDep1Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamPopSubDep2ByUNameIdxKey::operator <( const CFBamPopSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
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

	bool CFBamPopSubDep2ByUNameIdxKey::operator <( const CFBamPopSubDep2HBuff& rhs ) {
		if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
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

	bool CFBamPopSubDep2ByUNameIdxKey::operator <( const CFBamPopSubDep2Buff& rhs ) {
		if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
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

	bool CFBamPopSubDep2ByUNameIdxKey::operator <=( const CFBamPopSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
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

	bool CFBamPopSubDep2ByUNameIdxKey::operator <=( const CFBamPopSubDep2HBuff& rhs ) {
		if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
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

	bool CFBamPopSubDep2ByUNameIdxKey::operator <=( const CFBamPopSubDep2Buff& rhs ) {
		if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
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

	bool CFBamPopSubDep2ByUNameIdxKey::operator ==( const CFBamPopSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep2ByUNameIdxKey::operator ==( const CFBamPopSubDep2HBuff& rhs ) {
		if( getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep2ByUNameIdxKey::operator ==( const CFBamPopSubDep2Buff& rhs ) {
		if( getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep2ByUNameIdxKey::operator !=( const CFBamPopSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep2ByUNameIdxKey::operator !=( const CFBamPopSubDep2HBuff& rhs ) {
		if( getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep2ByUNameIdxKey::operator !=( const CFBamPopSubDep2Buff& rhs ) {
		if( getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep2ByUNameIdxKey::operator >=( const CFBamPopSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
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

	bool CFBamPopSubDep2ByUNameIdxKey::operator >=( const CFBamPopSubDep2HBuff& rhs ) {
		if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
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

	bool CFBamPopSubDep2ByUNameIdxKey::operator >=( const CFBamPopSubDep2Buff& rhs ) {
		if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
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

	bool CFBamPopSubDep2ByUNameIdxKey::operator >( const CFBamPopSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
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

	bool CFBamPopSubDep2ByUNameIdxKey::operator >( const CFBamPopSubDep2HBuff& rhs ) {
		if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
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

	bool CFBamPopSubDep2ByUNameIdxKey::operator >( const CFBamPopSubDep2Buff& rhs ) {
		if( getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
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
	CFBamPopSubDep2ByUNameIdxKey CFBamPopSubDep2ByUNameIdxKey::operator =( cfbam::CFBamPopSubDep2ByUNameIdxKey& src ) {
		setRequiredPopSubDep1TenantId( src.getRequiredPopSubDep1TenantId() );
		setRequiredPopSubDep1Id( src.getRequiredPopSubDep1Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamPopSubDep2ByUNameIdxKey CFBamPopSubDep2ByUNameIdxKey::operator =( cfbam::CFBamPopSubDep2Buff& src ) {
		setRequiredPopSubDep1TenantId( src.getRequiredPopSubDep1TenantId() );
		setRequiredPopSubDep1Id( src.getRequiredPopSubDep1Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamPopSubDep2ByUNameIdxKey CFBamPopSubDep2ByUNameIdxKey::operator =( cfbam::CFBamPopSubDep2HBuff& src ) {
		setRequiredPopSubDep1TenantId( src.getRequiredPopSubDep1TenantId() );
		setRequiredPopSubDep1Id( src.getRequiredPopSubDep1Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
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

	bool operator <(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
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

	bool operator <(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2Buff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
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

	bool operator <=(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
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

	bool operator <=(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
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

	bool operator <=(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2Buff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
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

	bool operator ==(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2Buff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2Buff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() != rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() != rhs.getRequiredPopSubDep1Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
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

	bool operator >=(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
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

	bool operator >=(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2Buff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
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

	bool operator >(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
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

	bool operator >(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
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

	bool operator >(const  cfbam::CFBamPopSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep2Buff& rhs ) {
		if( lhs.getRequiredPopSubDep1TenantId() < rhs.getRequiredPopSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1TenantId() > rhs.getRequiredPopSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep1Id() < rhs.getRequiredPopSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep1Id() > rhs.getRequiredPopSubDep1Id() ) {
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

