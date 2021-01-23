// Description: C++18 implementation for a Param by UNameIdx index key object.

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

#include <cfbam/CFBamParamByUNameIdxKey.hpp>
#include <cfbam/CFBamParamBuff.hpp>
#include <cfbam/CFBamParamHBuff.hpp>

namespace cfbam {
	const std::string CFBamParamByUNameIdxKey::CLASS_NAME( "CFBamParamByUNameIdxKey" );
	const std::string CFBamParamByUNameIdxKey::S_VALUE( "value" );
	const std::string CFBamParamByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamParamByUNameIdxKey::CFBamParamByUNameIdxKey() {
		requiredTenantId = cfbam::CFBamParamBuff::TENANTID_INIT_VALUE;
		requiredServerMethodId = cfbam::CFBamParamBuff::SERVERMETHODID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamParamBuff::NAME_INIT_VALUE );
	}

	CFBamParamByUNameIdxKey::CFBamParamByUNameIdxKey( const CFBamParamByUNameIdxKey& src ) {
		requiredTenantId = cfbam::CFBamParamBuff::TENANTID_INIT_VALUE;
		requiredServerMethodId = cfbam::CFBamParamBuff::SERVERMETHODID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamParamBuff::NAME_INIT_VALUE );
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredServerMethodId( src.getRequiredServerMethodId() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamParamByUNameIdxKey::~CFBamParamByUNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const int64_t CFBamParamByUNameIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFBamParamByUNameIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFBamParamByUNameIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfbam::CFBamParamBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamParamBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFBamParamByUNameIdxKey::getRequiredServerMethodId() const {
		return( requiredServerMethodId );
	}

	const int64_t* CFBamParamByUNameIdxKey::getRequiredServerMethodIdReference() const {
		return( &requiredServerMethodId );
	}

	void CFBamParamByUNameIdxKey::setRequiredServerMethodId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredServerMethodId" );
		if( value < cfbam::CFBamParamBuff::SERVERMETHODID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamParamBuff::SERVERMETHODID_MIN_VALUE );
		}
		requiredServerMethodId = value;
	}

	const std::string& CFBamParamByUNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamParamByUNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamParamByUNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamParamBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamParamBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamParamByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredServerMethodId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFBamParamByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamParamByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_ServerMethodId( "ServerMethodId" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ServerMethodId, getRequiredServerMethodId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamParamByUNameIdxKey::operator <( const CFBamParamByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
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

	bool CFBamParamByUNameIdxKey::operator <( const CFBamParamHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
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

	bool CFBamParamByUNameIdxKey::operator <( const CFBamParamBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
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

	bool CFBamParamByUNameIdxKey::operator <=( const CFBamParamByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
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

	bool CFBamParamByUNameIdxKey::operator <=( const CFBamParamHBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
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

	bool CFBamParamByUNameIdxKey::operator <=( const CFBamParamBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
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

	bool CFBamParamByUNameIdxKey::operator ==( const CFBamParamByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredServerMethodId() != rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamParamByUNameIdxKey::operator ==( const CFBamParamHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredServerMethodId() != rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamParamByUNameIdxKey::operator ==( const CFBamParamBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredServerMethodId() != rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamParamByUNameIdxKey::operator !=( const CFBamParamByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() != rhs.getRequiredServerMethodId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamParamByUNameIdxKey::operator !=( const CFBamParamHBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() != rhs.getRequiredServerMethodId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamParamByUNameIdxKey::operator !=( const CFBamParamBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() != rhs.getRequiredServerMethodId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamParamByUNameIdxKey::operator >=( const CFBamParamByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
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

	bool CFBamParamByUNameIdxKey::operator >=( const CFBamParamHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
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

	bool CFBamParamByUNameIdxKey::operator >=( const CFBamParamBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
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

	bool CFBamParamByUNameIdxKey::operator >( const CFBamParamByUNameIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
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

	bool CFBamParamByUNameIdxKey::operator >( const CFBamParamHBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
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

	bool CFBamParamByUNameIdxKey::operator >( const CFBamParamBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
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
	CFBamParamByUNameIdxKey CFBamParamByUNameIdxKey::operator =( cfbam::CFBamParamByUNameIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredServerMethodId( src.getRequiredServerMethodId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamParamByUNameIdxKey CFBamParamByUNameIdxKey::operator =( cfbam::CFBamParamBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredServerMethodId( src.getRequiredServerMethodId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamParamByUNameIdxKey CFBamParamByUNameIdxKey::operator =( cfbam::CFBamParamHBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredServerMethodId( src.getRequiredServerMethodId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( lhs.getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
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

	bool operator <(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( lhs.getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
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

	bool operator <(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( lhs.getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
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

	bool operator <=(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( lhs.getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
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

	bool operator <=(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( lhs.getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
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

	bool operator <=(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( lhs.getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
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

	bool operator ==(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredServerMethodId() != rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredServerMethodId() != rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredServerMethodId() != rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() != rhs.getRequiredServerMethodId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() != rhs.getRequiredServerMethodId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() != rhs.getRequiredServerMethodId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( lhs.getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
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

	bool operator >=(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( lhs.getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
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

	bool operator >=(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( lhs.getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
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

	bool operator >(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamByUNameIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( lhs.getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
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

	bool operator >(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( lhs.getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
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

	bool operator >(const  cfbam::CFBamParamByUNameIdxKey& lhs, const cfbam::CFBamParamBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredServerMethodId() < rhs.getRequiredServerMethodId() ) {
			return( false );
		}
		else if( lhs.getRequiredServerMethodId() > rhs.getRequiredServerMethodId() ) {
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

