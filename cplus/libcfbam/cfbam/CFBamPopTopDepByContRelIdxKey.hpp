#pragma once

// Description: C++18 specification for a PopTopDep by ContRelIdx index key object.

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

	class CFBamPopTopDepBuff;
	class CFBamPopTopDepHBuff;

	class CFBamPopTopDepByContRelIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredContRelationTenantId;
		int64_t requiredContRelationId;
	public:
		CFBamPopTopDepByContRelIdxKey();
		CFBamPopTopDepByContRelIdxKey( const CFBamPopTopDepByContRelIdxKey& src );
		virtual ~CFBamPopTopDepByContRelIdxKey();

		virtual const int64_t getRequiredContRelationTenantId() const;
		virtual const int64_t* getRequiredContRelationTenantIdReference() const;
		virtual void setRequiredContRelationTenantId( const int64_t value );

		virtual const int64_t getRequiredContRelationId() const;
		virtual const int64_t* getRequiredContRelationIdReference() const;
		virtual void setRequiredContRelationId( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamPopTopDepByContRelIdxKey& rhs );
		bool operator <( const CFBamPopTopDepHBuff& rhs );
		bool operator <( const CFBamPopTopDepBuff& rhs );

		bool operator <=( const CFBamPopTopDepByContRelIdxKey& rhs );
		bool operator <=( const CFBamPopTopDepHBuff& rhs );
		bool operator <=( const CFBamPopTopDepBuff& rhs );

		bool operator ==( const CFBamPopTopDepByContRelIdxKey& rhs );
		bool operator ==( const CFBamPopTopDepHBuff& rhs );
		bool operator ==( const CFBamPopTopDepBuff& rhs );

		bool operator !=( const CFBamPopTopDepByContRelIdxKey& rhs );
		bool operator !=( const CFBamPopTopDepHBuff& rhs );
		bool operator !=( const CFBamPopTopDepBuff& rhs );

		bool operator >=( const CFBamPopTopDepByContRelIdxKey& rhs );
		bool operator >=( const CFBamPopTopDepHBuff& rhs );
		bool operator >=( const CFBamPopTopDepBuff& rhs );

		bool operator >( const CFBamPopTopDepByContRelIdxKey& rhs );
		bool operator >( const CFBamPopTopDepHBuff& rhs );
		bool operator >( const CFBamPopTopDepBuff& rhs );
		cfbam::CFBamPopTopDepByContRelIdxKey operator =( cfbam::CFBamPopTopDepByContRelIdxKey& src );
		cfbam::CFBamPopTopDepByContRelIdxKey operator =( cfbam::CFBamPopTopDepBuff& src );
		cfbam::CFBamPopTopDepByContRelIdxKey operator =( cfbam::CFBamPopTopDepHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs );
	bool operator <(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs );
	bool operator <(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs );

	bool operator <=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs );
	bool operator <=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs );

	bool operator ==(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs );
	bool operator ==(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs );

	bool operator !=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs );
	bool operator !=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs );

	bool operator >=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs );
	bool operator >=(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs );

	bool operator >(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs );
	bool operator >(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepHBuff& rhs );
	bool operator >(const  cfbam::CFBamPopTopDepByContRelIdxKey& lhs, const cfbam::CFBamPopTopDepBuff& rhs );

	template<> struct hash<cfbam::CFBamPopTopDepByContRelIdxKey> {
		typedef cfbam::CFBamPopTopDepByContRelIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

