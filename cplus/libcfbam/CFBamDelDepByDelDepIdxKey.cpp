// Description: C++18 implementation for a DelDep by DelDepIdx index key object.

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

#include <cfbam/CFBamDelDepByDelDepIdxKey.hpp>
#include <cfbam/CFBamDelDepBuff.hpp>
#include <cfbam/CFBamDelDepHBuff.hpp>

namespace cfbam {
	const std::string CFBamDelDepByDelDepIdxKey::CLASS_NAME( "CFBamDelDepByDelDepIdxKey" );
	const std::string CFBamDelDepByDelDepIdxKey::S_VALUE( "value" );
	const std::string CFBamDelDepByDelDepIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFBamDelDepByDelDepIdxKey::CFBamDelDepByDelDepIdxKey() {
		requiredRelationTenantId = cfbam::CFBamDelDepBuff::RELATIONTENANTID_INIT_VALUE;
		requiredRelationId = cfbam::CFBamDelDepBuff::RELATIONID_INIT_VALUE;
	}

	CFBamDelDepByDelDepIdxKey::CFBamDelDepByDelDepIdxKey( const CFBamDelDepByDelDepIdxKey& src ) {
		requiredRelationTenantId = cfbam::CFBamDelDepBuff::RELATIONTENANTID_INIT_VALUE;
		requiredRelationId = cfbam::CFBamDelDepBuff::RELATIONID_INIT_VALUE;
		setRequiredRelationTenantId( src.getRequiredRelationTenantId() );
		setRequiredRelationId( src.getRequiredRelationId() );
	}

	CFBamDelDepByDelDepIdxKey::~CFBamDelDepByDelDepIdxKey() {
	}

	const int64_t CFBamDelDepByDelDepIdxKey::getRequiredRelationTenantId() const {
		return( requiredRelationTenantId );
	}

	const int64_t* CFBamDelDepByDelDepIdxKey::getRequiredRelationTenantIdReference() const {
		return( &requiredRelationTenantId );
	}

	void CFBamDelDepByDelDepIdxKey::setRequiredRelationTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredRelationTenantId" );
		if( value < cfbam::CFBamDelDepBuff::RELATIONTENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelDepBuff::RELATIONTENANTID_MIN_VALUE );
		}
		requiredRelationTenantId = value;
	}

	const int64_t CFBamDelDepByDelDepIdxKey::getRequiredRelationId() const {
		return( requiredRelationId );
	}

	const int64_t* CFBamDelDepByDelDepIdxKey::getRequiredRelationIdReference() const {
		return( &requiredRelationId );
	}

	void CFBamDelDepByDelDepIdxKey::setRequiredRelationId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredRelationId" );
		if( value < cfbam::CFBamDelDepBuff::RELATIONID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfbam::CFBamDelDepBuff::RELATIONID_MIN_VALUE );
		}
		requiredRelationId = value;
	}

	size_t CFBamDelDepByDelDepIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredRelationTenantId() );
		hashCode = hashCode + (int)( getRequiredRelationId() );
		return( hashCode );
	}

	std::string CFBamDelDepByDelDepIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFBamDelDepByDelDepIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_RelationTenantId( "RelationTenantId" );
		static const std::string S_RelationId( "RelationId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationTenantId, getRequiredRelationTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RelationId, getRequiredRelationId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFBamDelDepByDelDepIdxKey::operator <( const CFBamDelDepByDelDepIdxKey& rhs ) {
		if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelDepByDelDepIdxKey::operator <( const CFBamDelDepHBuff& rhs ) {
		if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelDepByDelDepIdxKey::operator <( const CFBamDelDepBuff& rhs ) {
		if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelDepByDelDepIdxKey::operator <=( const CFBamDelDepByDelDepIdxKey& rhs ) {
		if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelDepByDelDepIdxKey::operator <=( const CFBamDelDepHBuff& rhs ) {
		if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelDepByDelDepIdxKey::operator <=( const CFBamDelDepBuff& rhs ) {
		if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelDepByDelDepIdxKey::operator ==( const CFBamDelDepByDelDepIdxKey& rhs ) {
		if( getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelDepByDelDepIdxKey::operator ==( const CFBamDelDepHBuff& rhs ) {
		if( getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelDepByDelDepIdxKey::operator ==( const CFBamDelDepBuff& rhs ) {
		if( getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamDelDepByDelDepIdxKey::operator !=( const CFBamDelDepByDelDepIdxKey& rhs ) {
		if( getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelDepByDelDepIdxKey::operator !=( const CFBamDelDepHBuff& rhs ) {
		if( getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelDepByDelDepIdxKey::operator !=( const CFBamDelDepBuff& rhs ) {
		if( getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelDepByDelDepIdxKey::operator >=( const CFBamDelDepByDelDepIdxKey& rhs ) {
		if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelDepByDelDepIdxKey::operator >=( const CFBamDelDepHBuff& rhs ) {
		if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelDepByDelDepIdxKey::operator >=( const CFBamDelDepBuff& rhs ) {
		if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamDelDepByDelDepIdxKey::operator >( const CFBamDelDepByDelDepIdxKey& rhs ) {
		if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelDepByDelDepIdxKey::operator >( const CFBamDelDepHBuff& rhs ) {
		if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamDelDepByDelDepIdxKey::operator >( const CFBamDelDepBuff& rhs ) {
		if( getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}
	CFBamDelDepByDelDepIdxKey CFBamDelDepByDelDepIdxKey::operator =( cfbam::CFBamDelDepByDelDepIdxKey& src ) {
		setRequiredRelationTenantId( src.getRequiredRelationTenantId() );
		setRequiredRelationId( src.getRequiredRelationId() );
		return( *this );
	}

	CFBamDelDepByDelDepIdxKey CFBamDelDepByDelDepIdxKey::operator =( cfbam::CFBamDelDepBuff& src ) {
		setRequiredRelationTenantId( src.getRequiredRelationTenantId() );
		setRequiredRelationId( src.getRequiredRelationId() );
		return( *this );
	}

	CFBamDelDepByDelDepIdxKey CFBamDelDepByDelDepIdxKey::operator =( cfbam::CFBamDelDepHBuff& src ) {
		setRequiredRelationTenantId( src.getRequiredRelationTenantId() );
		setRequiredRelationId( src.getRequiredRelationId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepByDelDepIdxKey& rhs ) {
		if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepHBuff& rhs ) {
		if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepBuff& rhs ) {
		if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepByDelDepIdxKey& rhs ) {
		if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepHBuff& rhs ) {
		if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepBuff& rhs ) {
		if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepByDelDepIdxKey& rhs ) {
		if( lhs.getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepHBuff& rhs ) {
		if( lhs.getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepBuff& rhs ) {
		if( lhs.getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepByDelDepIdxKey& rhs ) {
		if( lhs.getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepHBuff& rhs ) {
		if( lhs.getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepBuff& rhs ) {
		if( lhs.getRequiredRelationTenantId() != rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() != rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepByDelDepIdxKey& rhs ) {
		if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepHBuff& rhs ) {
		if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepBuff& rhs ) {
		if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepByDelDepIdxKey& rhs ) {
		if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepHBuff& rhs ) {
		if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfbam::CFBamDelDepByDelDepIdxKey& lhs, const cfbam::CFBamDelDepBuff& rhs ) {
		if( lhs.getRequiredRelationTenantId() < rhs.getRequiredRelationTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationTenantId() > rhs.getRequiredRelationTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredRelationId() < rhs.getRequiredRelationId() ) {
			return( false );
		}
		else if( lhs.getRequiredRelationId() > rhs.getRequiredRelationId() ) {
			return( true );
		}
		return( false );
	}
}

