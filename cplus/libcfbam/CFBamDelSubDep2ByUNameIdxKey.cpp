// Description: C++18 implementation for a DelSubDep2 by UNameIdx index key object.

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

#include <cfbam/CFBamDelSubDep2ByUNameIdxKey.hpp>
#include <cfbam/CFBamDelSubDep2Buff.hpp>
#include <cfbam/CFBamDelSubDep2HBuff.hpp>

namespace cfbam {
	const std::string CFBamDelSubDep2ByUNameIdxKey::CLASS_NAME( "CFBamDelSubDep2ByUNameIdxKey" );
	const std::string CFBamDelSubDep2ByUNameIdxKey::S_VALUE( "value" );
	const std::string CFBamDelSubDep2ByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamDelSubDep2ByUNameIdxKey::CFBamDelSubDep2ByUNameIdxKey() {
		requiredDelSubDep1TenantId = cfbam::CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_INIT_VALUE;
		requiredDelSubDep1Id = cfbam::CFBamDelSubDep2Buff::DELSUBDEP1ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamDelSubDep2Buff::NAME_INIT_VALUE );
	}

	CFBamDelSubDep2ByUNameIdxKey::CFBamDelSubDep2ByUNameIdxKey( const CFBamDelSubDep2ByUNameIdxKey& src ) {
		requiredDelSubDep1TenantId = cfbam::CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_INIT_VALUE;
		requiredDelSubDep1Id = cfbam::CFBamDelSubDep2Buff::DELSUBDEP1ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamDelSubDep2Buff::NAME_INIT_VALUE );
		setRequiredDelSubDep1TenantId( src.getRequiredDelSubDep1TenantId() );
		setRequiredDelSubDep1Id( src.getRequiredDelSubDep1Id() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamDelSubDep2ByUNameIdxKey::~CFBamDelSubDep2ByUNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const int64_t CFBamDelSubDep2ByUNameIdxKey::getRequiredDelSubDep1TenantId() const {
		return( requiredDelSubDep1TenantId );
	}

	const int64_t* CFBamDelSubDep2ByUNameIdxKey::getRequiredDelSubDep1TenantIdReference() const {
		return( &requiredDelSubDep1TenantId );
	}

	void CFBamDelSubDep2ByUNameIdxKey::setRequiredDelSubDep1TenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredDelSubDep1TenantId" );
		if( value < cfbam::CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelSubDep2Buff::DELSUBDEP1TENANTID_MIN_VALUE );
		}
		requiredDelSubDep1TenantId = value;
	}

	const int64_t CFBamDelSubDep2ByUNameIdxKey::getRequiredDelSubDep1Id() const {
		return( requiredDelSubDep1Id );
	}

	const int64_t* CFBamDelSubDep2ByUNameIdxKey::getRequiredDelSubDep1IdReference() const {
		return( &requiredDelSubDep1Id );
	}

	void CFBamDelSubDep2ByUNameIdxKey::setRequiredDelSubDep1Id( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredDelSubDep1Id" );
		if( value < cfbam::CFBamDelSubDep2Buff::DELSUBDEP1ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelSubDep2Buff::DELSUBDEP1ID_MIN_VALUE );
		}
		requiredDelSubDep1Id = value;
	}

	const std::string& CFBamDelSubDep2ByUNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamDelSubDep2ByUNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamDelSubDep2ByUNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamDelSubDep2Buff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamDelSubDep2Buff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamDelSubDep2ByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredDelSubDep1TenantId() );
		hashCode = hashCode + (int)( getRequiredDelSubDep1Id() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFBamDelSubDep2ByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelSubDep2ByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_DelSubDep1TenantId( "DelSubDep1TenantId" );
		static const std::string S_DelSubDep1Id( "DelSubDep1Id" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep1TenantId, getRequiredDelSubDep1TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_DelSubDep1Id, getRequiredDelSubDep1Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamDelSubDep2ByUNameIdxKey::operator <( const CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2ByUNameIdxKey::operator <( const CFBamDelSubDep2HBuff& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2ByUNameIdxKey::operator <( const CFBamDelSubDep2Buff& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2ByUNameIdxKey::operator <=( const CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2ByUNameIdxKey::operator <=( const CFBamDelSubDep2HBuff& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2ByUNameIdxKey::operator <=( const CFBamDelSubDep2Buff& rhs ) {
		if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2ByUNameIdxKey::operator ==( const CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep2ByUNameIdxKey::operator ==( const CFBamDelSubDep2HBuff& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep2ByUNameIdxKey::operator ==( const CFBamDelSubDep2Buff& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelSubDep2ByUNameIdxKey::operator !=( const CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2ByUNameIdxKey::operator !=( const CFBamDelSubDep2HBuff& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2ByUNameIdxKey::operator !=( const CFBamDelSubDep2Buff& rhs ) {
		if( getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelSubDep2ByUNameIdxKey::operator >=( const CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2ByUNameIdxKey::operator >=( const CFBamDelSubDep2HBuff& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2ByUNameIdxKey::operator >=( const CFBamDelSubDep2Buff& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2ByUNameIdxKey::operator >( const CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2ByUNameIdxKey::operator >( const CFBamDelSubDep2HBuff& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool CFBamDelSubDep2ByUNameIdxKey::operator >( const CFBamDelSubDep2Buff& rhs ) {
		if( getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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
	CFBamDelSubDep2ByUNameIdxKey CFBamDelSubDep2ByUNameIdxKey::operator =( cfbam::CFBamDelSubDep2ByUNameIdxKey& src ) {
		setRequiredDelSubDep1TenantId( src.getRequiredDelSubDep1TenantId() );
		setRequiredDelSubDep1Id( src.getRequiredDelSubDep1Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamDelSubDep2ByUNameIdxKey CFBamDelSubDep2ByUNameIdxKey::operator =( cfbam::CFBamDelSubDep2Buff& src ) {
		setRequiredDelSubDep1TenantId( src.getRequiredDelSubDep1TenantId() );
		setRequiredDelSubDep1Id( src.getRequiredDelSubDep1Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamDelSubDep2ByUNameIdxKey CFBamDelSubDep2ByUNameIdxKey::operator =( cfbam::CFBamDelSubDep2HBuff& src ) {
		setRequiredDelSubDep1TenantId( src.getRequiredDelSubDep1TenantId() );
		setRequiredDelSubDep1Id( src.getRequiredDelSubDep1Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator <(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator <(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator <=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator <=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator <=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator ==(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() != rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() != rhs.getRequiredDelSubDep1Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator >=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator >=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator >(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator >(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

	bool operator >(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs ) {
		if( lhs.getRequiredDelSubDep1TenantId() < rhs.getRequiredDelSubDep1TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1TenantId() > rhs.getRequiredDelSubDep1TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredDelSubDep1Id() < rhs.getRequiredDelSubDep1Id() ) {
			return( false );
		}
		else if( lhs.getRequiredDelSubDep1Id() > rhs.getRequiredDelSubDep1Id() ) {
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

