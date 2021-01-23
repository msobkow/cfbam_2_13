#pragma once

// Description: C++18 specification for a PopSubDep3 by UNameIdx index key object.

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

	class CFBamPopSubDep3Buff;
	class CFBamPopSubDep3HBuff;

	class CFBamPopSubDep3ByUNameIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredPopSubDep2TenantId;
		int64_t requiredPopSubDep2Id;
		std::string* requiredName;
	public:
		CFBamPopSubDep3ByUNameIdxKey();
		CFBamPopSubDep3ByUNameIdxKey( const CFBamPopSubDep3ByUNameIdxKey& src );
		virtual ~CFBamPopSubDep3ByUNameIdxKey();

		virtual const int64_t getRequiredPopSubDep2TenantId() const;
		virtual const int64_t* getRequiredPopSubDep2TenantIdReference() const;
		virtual void setRequiredPopSubDep2TenantId( const int64_t value );

		virtual const int64_t getRequiredPopSubDep2Id() const;
		virtual const int64_t* getRequiredPopSubDep2IdReference() const;
		virtual void setRequiredPopSubDep2Id( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamPopSubDep3ByUNameIdxKey& rhs );
		bool operator <( const CFBamPopSubDep3HBuff& rhs );
		bool operator <( const CFBamPopSubDep3Buff& rhs );

		bool operator <=( const CFBamPopSubDep3ByUNameIdxKey& rhs );
		bool operator <=( const CFBamPopSubDep3HBuff& rhs );
		bool operator <=( const CFBamPopSubDep3Buff& rhs );

		bool operator ==( const CFBamPopSubDep3ByUNameIdxKey& rhs );
		bool operator ==( const CFBamPopSubDep3HBuff& rhs );
		bool operator ==( const CFBamPopSubDep3Buff& rhs );

		bool operator !=( const CFBamPopSubDep3ByUNameIdxKey& rhs );
		bool operator !=( const CFBamPopSubDep3HBuff& rhs );
		bool operator !=( const CFBamPopSubDep3Buff& rhs );

		bool operator >=( const CFBamPopSubDep3ByUNameIdxKey& rhs );
		bool operator >=( const CFBamPopSubDep3HBuff& rhs );
		bool operator >=( const CFBamPopSubDep3Buff& rhs );

		bool operator >( const CFBamPopSubDep3ByUNameIdxKey& rhs );
		bool operator >( const CFBamPopSubDep3HBuff& rhs );
		bool operator >( const CFBamPopSubDep3Buff& rhs );
		cfbam::CFBamPopSubDep3ByUNameIdxKey operator =( cfbam::CFBamPopSubDep3ByUNameIdxKey& src );
		cfbam::CFBamPopSubDep3ByUNameIdxKey operator =( cfbam::CFBamPopSubDep3Buff& src );
		cfbam::CFBamPopSubDep3ByUNameIdxKey operator =( cfbam::CFBamPopSubDep3HBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs );
	bool operator <(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3Buff& rhs );

	bool operator <=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs );
	bool operator <=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3Buff& rhs );

	bool operator ==(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs );
	bool operator ==(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3Buff& rhs );

	bool operator !=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs );
	bool operator !=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3Buff& rhs );

	bool operator >=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs );
	bool operator >=(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3Buff& rhs );

	bool operator >(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3ByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3HBuff& rhs );
	bool operator >(const  cfbam::CFBamPopSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamPopSubDep3Buff& rhs );

	template<> struct hash<cfbam::CFBamPopSubDep3ByUNameIdxKey> {
		typedef cfbam::CFBamPopSubDep3ByUNameIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

