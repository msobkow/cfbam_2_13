#pragma once

// Description: C++18 specification for a ClearSubDep1 by ClearTopDepIdx index key object.

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
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamClearSubDep1Buff;
	class CFBamClearSubDep1HBuff;

	class CFBamClearSubDep1ByClearTopDepIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredClearTopDepTenantId;
		int64_t requiredClearTopDepId;
	public:
		CFBamClearSubDep1ByClearTopDepIdxKey();
		CFBamClearSubDep1ByClearTopDepIdxKey( const CFBamClearSubDep1ByClearTopDepIdxKey& src );
		virtual ~CFBamClearSubDep1ByClearTopDepIdxKey();

		virtual const int64_t getRequiredClearTopDepTenantId() const;
		virtual const int64_t* getRequiredClearTopDepTenantIdReference() const;
		virtual void setRequiredClearTopDepTenantId( const int64_t value );

		virtual const int64_t getRequiredClearTopDepId() const;
		virtual const int64_t* getRequiredClearTopDepIdReference() const;
		virtual void setRequiredClearTopDepId( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
		bool operator <( const CFBamClearSubDep1HBuff& rhs );
		bool operator <( const CFBamClearSubDep1Buff& rhs );

		bool operator <=( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
		bool operator <=( const CFBamClearSubDep1HBuff& rhs );
		bool operator <=( const CFBamClearSubDep1Buff& rhs );

		bool operator ==( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
		bool operator ==( const CFBamClearSubDep1HBuff& rhs );
		bool operator ==( const CFBamClearSubDep1Buff& rhs );

		bool operator !=( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
		bool operator !=( const CFBamClearSubDep1HBuff& rhs );
		bool operator !=( const CFBamClearSubDep1Buff& rhs );

		bool operator >=( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
		bool operator >=( const CFBamClearSubDep1HBuff& rhs );
		bool operator >=( const CFBamClearSubDep1Buff& rhs );

		bool operator >( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
		bool operator >( const CFBamClearSubDep1HBuff& rhs );
		bool operator >( const CFBamClearSubDep1Buff& rhs );
		cfbam::CFBamClearSubDep1ByClearTopDepIdxKey operator =( cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& src );
		cfbam::CFBamClearSubDep1ByClearTopDepIdxKey operator =( cfbam::CFBamClearSubDep1Buff& src );
		cfbam::CFBamClearSubDep1ByClearTopDepIdxKey operator =( cfbam::CFBamClearSubDep1HBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs );

	bool operator <=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs );

	bool operator ==(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs );

	bool operator !=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs );

	bool operator >=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs );

	bool operator >(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
	bool operator >(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs );
	bool operator >(const  cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& lhs, const cfbam::CFBamClearSubDep1Buff& rhs );

	template<> struct hash<cfbam::CFBamClearSubDep1ByClearTopDepIdxKey> {
		typedef cfbam::CFBamClearSubDep1ByClearTopDepIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

