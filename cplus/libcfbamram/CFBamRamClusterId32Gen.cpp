// Description: C++18 Implementation of a Cluster 32-bit in-memory RAM Id Generator object.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
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
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamram/CFBamRamClusterId32Gen.hpp>

using namespace std;

namespace cfbam {

	const std::string CFBamRamClusterId32Gen::CLASS_NAME( "CFBamRamClusterId32Gen" );
	const std::string CFBamRamClusterId32Gen::S_VALUE( "value" );

	CFBamRamClusterId32Gen::CFBamRamClusterId32Gen() {
		requiredId = cfsec::CFSecClusterBuff::ID_INIT_VALUE;
		sliceId = 0;
		nextId = 1;
	}

	CFBamRamClusterId32Gen::~CFBamRamClusterId32Gen() {
	}

	int32_t CFBamRamClusterId32Gen::getNextId() {
		int32_t retNext = nextId ++;
		return( retNext );
	}

	const int64_t CFBamRamClusterId32Gen::getRequiredId() const {
		return( requiredId );
	}

	const int64_t* CFBamRamClusterId32Gen::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFBamRamClusterId32Gen::setRequiredId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredId" );
		if( value < cfsec::CFSecClusterBuff::ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfsec::CFSecClusterBuff::ID_MIN_VALUE );
		}
		requiredId = value;
	}

	int16_t CFBamRamClusterId32Gen::getRequiredSliceId() const {
		return( sliceId );
	}

	void CFBamRamClusterId32Gen::setRequiredSliceId( int16_t value ) {
		sliceId = value;
	}

	size_t CFBamRamClusterId32Gen::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredId() );
		return( hashCode );
	}

	bool CFBamRamClusterId32Gen::operator <( const cfbam::CFBamRamClusterId32Gen& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRamClusterId32Gen::operator <=( const cfbam::CFBamRamClusterId32Gen& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRamClusterId32Gen::operator ==( const cfbam::CFBamRamClusterId32Gen& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFBamRamClusterId32Gen::operator !=( const cfbam::CFBamRamClusterId32Gen& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFBamRamClusterId32Gen::operator >=( const cfbam::CFBamRamClusterId32Gen& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFBamRamClusterId32Gen::operator >( const cfbam::CFBamRamClusterId32Gen& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	CFBamRamClusterId32Gen CFBamRamClusterId32Gen::operator =( CFBamRamClusterId32Gen& src ) {
		setRequiredId( src.getRequiredId() );
		// Don't bother copying the id generation value; only the map keys make copies of id generators, so they never use them
		return( *this );
	}

}

namespace std {

	bool operator <(const cfbam::CFBamRamClusterId32Gen& lhs, const cfbam::CFBamRamClusterId32Gen& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const cfbam::CFBamRamClusterId32Gen& lhs, const cfbam::CFBamRamClusterId32Gen& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const cfbam::CFBamRamClusterId32Gen& lhs, const cfbam::CFBamRamClusterId32Gen& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const cfbam::CFBamRamClusterId32Gen& lhs, const cfbam::CFBamRamClusterId32Gen& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const cfbam::CFBamRamClusterId32Gen& lhs, const cfbam::CFBamRamClusterId32Gen& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const cfbam::CFBamRamClusterId32Gen& lhs, const cfbam::CFBamRamClusterId32Gen& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}


}
