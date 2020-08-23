#pragma once

// Description: C++18 specification for a DelSubDep1 by UNameIdx index key object.

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

	class CFBamDelSubDep1Buff;
	class CFBamDelSubDep1HBuff;

	class CFBamDelSubDep1ByUNameIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredDelTopDepTenantId;
		int64_t requiredDelTopDepId;
		std::string* requiredName;
	public:
		CFBamDelSubDep1ByUNameIdxKey();
		CFBamDelSubDep1ByUNameIdxKey( const CFBamDelSubDep1ByUNameIdxKey& src );
		virtual ~CFBamDelSubDep1ByUNameIdxKey();

		virtual const int64_t getRequiredDelTopDepTenantId() const;
		virtual const int64_t* getRequiredDelTopDepTenantIdReference() const;
		virtual void setRequiredDelTopDepTenantId( const int64_t value );

		virtual const int64_t getRequiredDelTopDepId() const;
		virtual const int64_t* getRequiredDelTopDepIdReference() const;
		virtual void setRequiredDelTopDepId( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamDelSubDep1ByUNameIdxKey& rhs );
		bool operator <( const CFBamDelSubDep1HBuff& rhs );
		bool operator <( const CFBamDelSubDep1Buff& rhs );

		bool operator <=( const CFBamDelSubDep1ByUNameIdxKey& rhs );
		bool operator <=( const CFBamDelSubDep1HBuff& rhs );
		bool operator <=( const CFBamDelSubDep1Buff& rhs );

		bool operator ==( const CFBamDelSubDep1ByUNameIdxKey& rhs );
		bool operator ==( const CFBamDelSubDep1HBuff& rhs );
		bool operator ==( const CFBamDelSubDep1Buff& rhs );

		bool operator !=( const CFBamDelSubDep1ByUNameIdxKey& rhs );
		bool operator !=( const CFBamDelSubDep1HBuff& rhs );
		bool operator !=( const CFBamDelSubDep1Buff& rhs );

		bool operator >=( const CFBamDelSubDep1ByUNameIdxKey& rhs );
		bool operator >=( const CFBamDelSubDep1HBuff& rhs );
		bool operator >=( const CFBamDelSubDep1Buff& rhs );

		bool operator >( const CFBamDelSubDep1ByUNameIdxKey& rhs );
		bool operator >( const CFBamDelSubDep1HBuff& rhs );
		bool operator >( const CFBamDelSubDep1Buff& rhs );
		cfbam::CFBamDelSubDep1ByUNameIdxKey operator =( cfbam::CFBamDelSubDep1ByUNameIdxKey& src );
		cfbam::CFBamDelSubDep1ByUNameIdxKey operator =( cfbam::CFBamDelSubDep1Buff& src );
		cfbam::CFBamDelSubDep1ByUNameIdxKey operator =( cfbam::CFBamDelSubDep1HBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs );

	bool operator <=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs );

	bool operator ==(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs );

	bool operator !=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs );

	bool operator >=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs );

	bool operator >(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep1ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep1Buff& rhs );

	template<> struct hash<cfbam::CFBamDelSubDep1ByUNameIdxKey> {
		typedef cfbam::CFBamDelSubDep1ByUNameIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

