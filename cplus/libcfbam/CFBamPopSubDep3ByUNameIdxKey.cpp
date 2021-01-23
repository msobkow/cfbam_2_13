// Description: C++18 implementation for a PopSubDep3 by UNameIdx index key object.

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

#include <cfbam/CFBamPopSubDep3ByUNameIdxKey.hpp>
#include <cfbam/CFBamPopSubDep3Buff.hpp>
#include <cfbam/CFBamPopSubDep3HBuff.hpp>

namespace cfbam {
	const std::string CFBamPopSubDep3ByUNameIdxKey::CLASS_NAME( "CFBamPopSubDep3ByUNameIdxKey" );
	const std::string CFBamPopSubDep3ByUNameIdxKey::S_VALUE( "value" );
	const std::string CFBamPopSubDep3ByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamPopSubDep3ByUNameIdxKey::CFBamPopSubDep3ByUNameIdxKey() {
		requiredPopSubDep2TenantId = cfbam::CFBamPopSubDep3Buff::POPSUBDEP2TENANTID_INIT_VALUE;
		requiredPopSubDep2Id = cfbam::CFBamPopSubDep3Buff::POPSUBDEP2ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamPopSubDep3Buff::NAME_INIT_VALUE );
	}

	CFBamPopSubDep3ByUNameIdxKey::CFBamPopSubDep3ByUNameIdxKey( const CFBamPopSubDep3ByUNameIdxKey& src ) {
		requiredPopSubDep2TenantId = cfbam::CFBamPopSubDep3Buff::POPSUBDEP2TENANTID_INIT_VALUE;
		requiredPopSubDep2Id = cfbam::CFBamPopSubDep3Buff::POPSUBDEP2ID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamPopSubDep3Buff::NAME_INIT_VALUE );
		setRequiredPopSubDep2TenantId( src.getRequiredPopSubDep2TenantId() );
		setRequiredPopSubDep2Id( src.getRequiredPopSubDep2Id() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamPopSubDep3ByUNameIdxKey::~CFBamPopSubDep3ByUNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const int64_t CFBamPopSubDep3ByUNameIdxKey::getRequiredPopSubDep2TenantId() const {
		return( requiredPopSubDep2TenantId );
	}

	const int64_t* CFBamPopSubDep3ByUNameIdxKey::getRequiredPopSubDep2TenantIdReference() const {
		return( &requiredPopSubDep2TenantId );
	}

	void CFBamPopSubDep3ByUNameIdxKey::setRequiredPopSubDep2TenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPopSubDep2TenantId" );
		if( value < cfbam::CFBamPopSubDep3Buff::POPSUBDEP2TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopSubDep3Buff::POPSUBDEP2TENANTID_MIN_VALUE );
		}
		requiredPopSubDep2TenantId = value;
	}

	const int64_t CFBamPopSubDep3ByUNameIdxKey::getRequiredPopSubDep2Id() const {
		return( requiredPopSubDep2Id );
	}

	const int64_t* CFBamPopSubDep3ByUNameIdxKey::getRequiredPopSubDep2IdReference() const {
		return( &requiredPopSubDep2Id );
	}

	void CFBamPopSubDep3ByUNameIdxKey::setRequiredPopSubDep2Id( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredPopSubDep2Id" );
		if( value < cfbam::CFBamPopSubDep3Buff::POPSUBDEP2ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopSubDep3Buff::POPSUBDEP2ID_MIN_VALUE );
		}
		requiredPopSubDep2Id = value;
	}

	const std::string& CFBamPopSubDep3ByUNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamPopSubDep3ByUNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamPopSubDep3ByUNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamPopSubDep3Buff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamPopSubDep3Buff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamPopSubDep3ByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredPopSubDep2TenantId() );
		hashCode = hashCode + (int)( getRequiredPopSubDep2Id() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFBamPopSubDep3ByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopSubDep3ByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_PopSubDep2TenantId( "PopSubDep2TenantId" );
		static const std::string S_PopSubDep2Id( "PopSubDep2Id" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep2TenantId, getRequiredPopSubDep2TenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PopSubDep2Id, getRequiredPopSubDep2Id() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamPopSubDep3ByUNameIdxKey::operator <( const CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3ByUNameIdxKey::operator <( const CFBamPopSubDep3HBuff& rhs ) {
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3ByUNameIdxKey::operator <( const CFBamPopSubDep3Buff& rhs ) {
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3ByUNameIdxKey::operator <=( const CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3ByUNameIdxKey::operator <=( const CFBamPopSubDep3HBuff& rhs ) {
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3ByUNameIdxKey::operator <=( const CFBamPopSubDep3Buff& rhs ) {
		if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3ByUNameIdxKey::operator ==( const CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep3ByUNameIdxKey::operator ==( const CFBamPopSubDep3HBuff& rhs ) {
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep3ByUNameIdxKey::operator ==( const CFBamPopSubDep3Buff& rhs ) {
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopSubDep3ByUNameIdxKey::operator !=( const CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep3ByUNameIdxKey::operator !=( const CFBamPopSubDep3HBuff& rhs ) {
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep3ByUNameIdxKey::operator !=( const CFBamPopSubDep3Buff& rhs ) {
		if( getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopSubDep3ByUNameIdxKey::operator >=( const CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3ByUNameIdxKey::operator >=( const CFBamPopSubDep3HBuff& rhs ) {
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3ByUNameIdxKey::operator >=( const CFBamPopSubDep3Buff& rhs ) {
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3ByUNameIdxKey::operator >( const CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3ByUNameIdxKey::operator >( const CFBamPopSubDep3HBuff& rhs ) {
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool CFBamPopSubDep3ByUNameIdxKey::operator >( const CFBamPopSubDep3Buff& rhs ) {
		if( getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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
	CFBamPopSubDep3ByUNameIdxKey CFBamPopSubDep3ByUNameIdxKey::operator =( cfbam::CFBamPopSubDep3ByUNameIdxKey& src ) {
		setRequiredPopSubDep2TenantId( src.getRequiredPopSubDep2TenantId() );
		setRequiredPopSubDep2Id( src.getRequiredPopSubDep2Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamPopSubDep3ByUNameIdxKey CFBamPopSubDep3ByUNameIdxKey::operator =( cfbam::CFBamPopSubDep3Buff& src ) {
		setRequiredPopSubDep2TenantId( src.getRequiredPopSubDep2TenantId() );
		setRequiredPopSubDep2Id( src.getRequiredPopSubDep2Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamPopSubDep3ByUNameIdxKey CFBamPopSubDep3ByUNameIdxKey::operator =( cfbam::CFBamPopSubDep3HBuff& src ) {
		setRequiredPopSubDep2TenantId( src.getRequiredPopSubDep2TenantId() );
		setRequiredPopSubDep2Id( src.getRequiredPopSubDep2Id() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator <(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator <(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3Buff& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator <=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator <=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator <=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3Buff& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator ==(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3Buff& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3Buff& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() != rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() != rhs.getRequiredPopSubDep2Id() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator >=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator >=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3Buff& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator >(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator >(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

	bool operator >(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3Buff& rhs ) {
		if( lhs.getRequiredPopSubDep2TenantId() < rhs.getRequiredPopSubDep2TenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2TenantId() > rhs.getRequiredPopSubDep2TenantId() ) {
			return( true );
		}
		if( lhs.getRequiredPopSubDep2Id() < rhs.getRequiredPopSubDep2Id() ) {
			return( false );
		}
		else if( lhs.getRequiredPopSubDep2Id() > rhs.getRequiredPopSubDep2Id() ) {
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

