// Description: C++18 implementation for a PopTopDep by UNameIdx index key object.

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

#include <cfbam/CFBamPopTopDepByUNameIdxKey.hpp>
#include <cfbam/CFBamPopTopDepBuff.hpp>
#include <cfbam/CFBamPopTopDepHBuff.hpp>

namespace cfbam {
	const std::string CFBamPopTopDepByUNameIdxKey::CLASS_NAME( "CFBamPopTopDepByUNameIdxKey" );
	const std::string CFBamPopTopDepByUNameIdxKey::S_VALUE( "value" );
	const std::string CFBamPopTopDepByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamPopTopDepByUNameIdxKey::CFBamPopTopDepByUNameIdxKey() {
		requiredContRelationTenantId = cfbam::CFBamPopTopDepBuff::CONTRELATIONTENANTID_INIT_VALUE;
		requiredContRelationId = cfbam::CFBamPopTopDepBuff::CONTRELATIONID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamPopTopDepBuff::NAME_INIT_VALUE );
	}

	CFBamPopTopDepByUNameIdxKey::CFBamPopTopDepByUNameIdxKey( const CFBamPopTopDepByUNameIdxKey& src ) {
		requiredContRelationTenantId = cfbam::CFBamPopTopDepBuff::CONTRELATIONTENANTID_INIT_VALUE;
		requiredContRelationId = cfbam::CFBamPopTopDepBuff::CONTRELATIONID_INIT_VALUE;
		requiredName = new std::string( cfbam::CFBamPopTopDepBuff::NAME_INIT_VALUE );
		setRequiredContRelationTenantId( src.getRequiredContRelationTenantId() );
		setRequiredContRelationId( src.getRequiredContRelationId() );
		setRequiredName( src.getRequiredName() );
	}

	CFBamPopTopDepByUNameIdxKey::~CFBamPopTopDepByUNameIdxKey() {
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
	}

	const int64_t CFBamPopTopDepByUNameIdxKey::getRequiredContRelationTenantId() const {
		return( requiredContRelationTenantId );
	}

	const int64_t* CFBamPopTopDepByUNameIdxKey::getRequiredContRelationTenantIdReference() const {
		return( &requiredContRelationTenantId );
	}

	void CFBamPopTopDepByUNameIdxKey::setRequiredContRelationTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredContRelationTenantId" );
		if( value < cfbam::CFBamPopTopDepBuff::CONTRELATIONTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopTopDepBuff::CONTRELATIONTENANTID_MIN_VALUE );
		}
		requiredContRelationTenantId = value;
	}

	const int64_t CFBamPopTopDepByUNameIdxKey::getRequiredContRelationId() const {
		return( requiredContRelationId );
	}

	const int64_t* CFBamPopTopDepByUNameIdxKey::getRequiredContRelationIdReference() const {
		return( &requiredContRelationId );
	}

	void CFBamPopTopDepByUNameIdxKey::setRequiredContRelationId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredContRelationId" );
		if( value < cfbam::CFBamPopTopDepBuff::CONTRELATIONID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamPopTopDepBuff::CONTRELATIONID_MIN_VALUE );
		}
		requiredContRelationId = value;
	}

	const std::string& CFBamPopTopDepByUNameIdxKey::getRequiredName() const {
		return( *requiredName );
	}

	const std::string* CFBamPopTopDepByUNameIdxKey::getRequiredNameReference() const {
		return( requiredName );
	}

	void CFBamPopTopDepByUNameIdxKey::setRequiredName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredName" );
		if( value.length() > CFBamPopTopDepBuff::NAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFBamPopTopDepBuff::NAME_MAX_LEN );
		}
		if( requiredName != NULL ) {
			delete requiredName;
			requiredName = NULL;
		}
		requiredName = new std::string( value );
	}

	size_t CFBamPopTopDepByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredContRelationTenantId() );
		hashCode = hashCode + (int)( getRequiredContRelationId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredName() );
		return( hashCode );
	}

	std::string CFBamPopTopDepByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamPopTopDepByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ContRelationTenantId( "ContRelationTenantId" );
		static const std::string S_ContRelationId( "ContRelationId" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ContRelationTenantId, getRequiredContRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ContRelationId, getRequiredContRelationId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamPopTopDepByUNameIdxKey::operator <( const CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepByUNameIdxKey::operator <( const CFBamPopTopDepHBuff& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepByUNameIdxKey::operator <( const CFBamPopTopDepBuff& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepByUNameIdxKey::operator <=( const CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepByUNameIdxKey::operator <=( const CFBamPopTopDepHBuff& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepByUNameIdxKey::operator <=( const CFBamPopTopDepBuff& rhs ) {
		if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepByUNameIdxKey::operator ==( const CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopTopDepByUNameIdxKey::operator ==( const CFBamPopTopDepHBuff& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopTopDepByUNameIdxKey::operator ==( const CFBamPopTopDepBuff& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamPopTopDepByUNameIdxKey::operator !=( const CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepByUNameIdxKey::operator !=( const CFBamPopTopDepHBuff& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepByUNameIdxKey::operator !=( const CFBamPopTopDepBuff& rhs ) {
		if( getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamPopTopDepByUNameIdxKey::operator >=( const CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepByUNameIdxKey::operator >=( const CFBamPopTopDepHBuff& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepByUNameIdxKey::operator >=( const CFBamPopTopDepBuff& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepByUNameIdxKey::operator >( const CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepByUNameIdxKey::operator >( const CFBamPopTopDepHBuff& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool CFBamPopTopDepByUNameIdxKey::operator >( const CFBamPopTopDepBuff& rhs ) {
		if( getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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
	CFBamPopTopDepByUNameIdxKey CFBamPopTopDepByUNameIdxKey::operator =( cfbam::CFBamPopTopDepByUNameIdxKey& src ) {
		setRequiredContRelationTenantId( src.getRequiredContRelationTenantId() );
		setRequiredContRelationId( src.getRequiredContRelationId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamPopTopDepByUNameIdxKey CFBamPopTopDepByUNameIdxKey::operator =( cfbam::CFBamPopTopDepBuff& src ) {
		setRequiredContRelationTenantId( src.getRequiredContRelationTenantId() );
		setRequiredContRelationId( src.getRequiredContRelationId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

	CFBamPopTopDepByUNameIdxKey CFBamPopTopDepByUNameIdxKey::operator =( cfbam::CFBamPopTopDepHBuff& src ) {
		setRequiredContRelationTenantId( src.getRequiredContRelationTenantId() );
		setRequiredContRelationId( src.getRequiredContRelationId() );
		setRequiredName( src.getRequiredName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool operator <(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool operator <(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool operator <=(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool operator <=(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool operator <=(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
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

	bool operator ==(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() != rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() != rhs.getRequiredContRelationId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool operator >=(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool operator >=(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool operator >(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool operator >(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

	bool operator >(const  cfbam::CFBamPopTopDepByUNameIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs ) {
		if( lhs.getRequiredContRelationTenantId() < rhs.getRequiredContRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationTenantId() > rhs.getRequiredContRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredContRelationId() < rhs.getRequiredContRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredContRelationId() > rhs.getRequiredContRelationId() ) {
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

