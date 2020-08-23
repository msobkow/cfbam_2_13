#pragma once

// Description: C++18 specification for a IndexCol by IdxColTenantIdx index key object.

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
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamIndexColBuff;
	class CFBamIndexColHBuff;

	class CFBamIndexColByIdxColTenantIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredTenantId;
	public:
		CFBamIndexColByIdxColTenantIdxKey();
		CFBamIndexColByIdxColTenantIdxKey( const CFBamIndexColByIdxColTenantIdxKey& src );
		virtual ~CFBamIndexColByIdxColTenantIdxKey();

		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamIndexColByIdxColTenantIdxKey& rhs );
		bool operator <( const CFBamIndexColHBuff& rhs );
		bool operator <( const CFBamIndexColBuff& rhs );

		bool operator <=( const CFBamIndexColByIdxColTenantIdxKey& rhs );
		bool operator <=( const CFBamIndexColHBuff& rhs );
		bool operator <=( const CFBamIndexColBuff& rhs );

		bool operator ==( const CFBamIndexColByIdxColTenantIdxKey& rhs );
		bool operator ==( const CFBamIndexColHBuff& rhs );
		bool operator ==( const CFBamIndexColBuff& rhs );

		bool operator !=( const CFBamIndexColByIdxColTenantIdxKey& rhs );
		bool operator !=( const CFBamIndexColHBuff& rhs );
		bool operator !=( const CFBamIndexColBuff& rhs );

		bool operator >=( const CFBamIndexColByIdxColTenantIdxKey& rhs );
		bool operator >=( const CFBamIndexColHBuff& rhs );
		bool operator >=( const CFBamIndexColBuff& rhs );

		bool operator >( const CFBamIndexColByIdxColTenantIdxKey& rhs );
		bool operator >( const CFBamIndexColHBuff& rhs );
		bool operator >( const CFBamIndexColBuff& rhs );
		cfbam::CFBamIndexColByIdxColTenantIdxKey operator =( cfbam::CFBamIndexColByIdxColTenantIdxKey& src );
		cfbam::CFBamIndexColByIdxColTenantIdxKey operator =( cfbam::CFBamIndexColBuff& src );
		cfbam::CFBamIndexColByIdxColTenantIdxKey operator =( cfbam::CFBamIndexColHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator <(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator <=(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator <=(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator ==(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator ==(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator !=(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator !=(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator >=(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator >=(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator >(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator >(const  cfbam::CFBamIndexColByIdxColTenantIdxKey& lhs, const cfbam::CFBamIndexColBuff& rhs );

	template<> struct hash<cfbam::CFBamIndexColByIdxColTenantIdxKey> {
		typedef cfbam::CFBamIndexColByIdxColTenantIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

