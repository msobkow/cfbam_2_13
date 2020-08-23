#pragma once

// Description: C++18 specification for a DelSubDep3 by UNameIdx index key object.

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

	class CFBamDelSubDep3Buff;
	class CFBamDelSubDep3HBuff;

	class CFBamDelSubDep3ByUNameIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredDelSubDep2TenantId;
		int64_t requiredDelSubDep2Id;
		std::string* requiredName;
	public:
		CFBamDelSubDep3ByUNameIdxKey();
		CFBamDelSubDep3ByUNameIdxKey( const CFBamDelSubDep3ByUNameIdxKey& src );
		virtual ~CFBamDelSubDep3ByUNameIdxKey();

		virtual const int64_t getRequiredDelSubDep2TenantId() const;
		virtual const int64_t* getRequiredDelSubDep2TenantIdReference() const;
		virtual void setRequiredDelSubDep2TenantId( const int64_t value );

		virtual const int64_t getRequiredDelSubDep2Id() const;
		virtual const int64_t* getRequiredDelSubDep2IdReference() const;
		virtual void setRequiredDelSubDep2Id( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamDelSubDep3ByUNameIdxKey& rhs );
		bool operator <( const CFBamDelSubDep3HBuff& rhs );
		bool operator <( const CFBamDelSubDep3Buff& rhs );

		bool operator <=( const CFBamDelSubDep3ByUNameIdxKey& rhs );
		bool operator <=( const CFBamDelSubDep3HBuff& rhs );
		bool operator <=( const CFBamDelSubDep3Buff& rhs );

		bool operator ==( const CFBamDelSubDep3ByUNameIdxKey& rhs );
		bool operator ==( const CFBamDelSubDep3HBuff& rhs );
		bool operator ==( const CFBamDelSubDep3Buff& rhs );

		bool operator !=( const CFBamDelSubDep3ByUNameIdxKey& rhs );
		bool operator !=( const CFBamDelSubDep3HBuff& rhs );
		bool operator !=( const CFBamDelSubDep3Buff& rhs );

		bool operator >=( const CFBamDelSubDep3ByUNameIdxKey& rhs );
		bool operator >=( const CFBamDelSubDep3HBuff& rhs );
		bool operator >=( const CFBamDelSubDep3Buff& rhs );

		bool operator >( const CFBamDelSubDep3ByUNameIdxKey& rhs );
		bool operator >( const CFBamDelSubDep3HBuff& rhs );
		bool operator >( const CFBamDelSubDep3Buff& rhs );
		cfbam::CFBamDelSubDep3ByUNameIdxKey operator =( cfbam::CFBamDelSubDep3ByUNameIdxKey& src );
		cfbam::CFBamDelSubDep3ByUNameIdxKey operator =( cfbam::CFBamDelSubDep3Buff& src );
		cfbam::CFBamDelSubDep3ByUNameIdxKey operator =( cfbam::CFBamDelSubDep3HBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3ByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3HBuff& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3Buff& rhs );

	bool operator <=(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3ByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3HBuff& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3Buff& rhs );

	bool operator ==(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3ByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3HBuff& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3Buff& rhs );

	bool operator !=(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3ByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3HBuff& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3Buff& rhs );

	bool operator >=(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3ByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3HBuff& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3Buff& rhs );

	bool operator >(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3ByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3HBuff& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep3Buff& rhs );

	template<> struct hash<cfbam::CFBamDelSubDep3ByUNameIdxKey> {
		typedef cfbam::CFBamDelSubDep3ByUNameIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

