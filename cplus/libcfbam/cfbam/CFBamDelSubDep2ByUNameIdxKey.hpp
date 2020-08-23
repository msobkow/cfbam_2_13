#pragma once

// Description: C++18 specification for a DelSubDep2 by UNameIdx index key object.

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

	class CFBamDelSubDep2Buff;
	class CFBamDelSubDep2HBuff;

	class CFBamDelSubDep2ByUNameIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredDelSubDep1TenantId;
		int64_t requiredDelSubDep1Id;
		std::string* requiredName;
	public:
		CFBamDelSubDep2ByUNameIdxKey();
		CFBamDelSubDep2ByUNameIdxKey( const CFBamDelSubDep2ByUNameIdxKey& src );
		virtual ~CFBamDelSubDep2ByUNameIdxKey();

		virtual const int64_t getRequiredDelSubDep1TenantId() const;
		virtual const int64_t* getRequiredDelSubDep1TenantIdReference() const;
		virtual void setRequiredDelSubDep1TenantId( const int64_t value );

		virtual const int64_t getRequiredDelSubDep1Id() const;
		virtual const int64_t* getRequiredDelSubDep1IdReference() const;
		virtual void setRequiredDelSubDep1Id( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamDelSubDep2ByUNameIdxKey& rhs );
		bool operator <( const CFBamDelSubDep2HBuff& rhs );
		bool operator <( const CFBamDelSubDep2Buff& rhs );

		bool operator <=( const CFBamDelSubDep2ByUNameIdxKey& rhs );
		bool operator <=( const CFBamDelSubDep2HBuff& rhs );
		bool operator <=( const CFBamDelSubDep2Buff& rhs );

		bool operator ==( const CFBamDelSubDep2ByUNameIdxKey& rhs );
		bool operator ==( const CFBamDelSubDep2HBuff& rhs );
		bool operator ==( const CFBamDelSubDep2Buff& rhs );

		bool operator !=( const CFBamDelSubDep2ByUNameIdxKey& rhs );
		bool operator !=( const CFBamDelSubDep2HBuff& rhs );
		bool operator !=( const CFBamDelSubDep2Buff& rhs );

		bool operator >=( const CFBamDelSubDep2ByUNameIdxKey& rhs );
		bool operator >=( const CFBamDelSubDep2HBuff& rhs );
		bool operator >=( const CFBamDelSubDep2Buff& rhs );

		bool operator >( const CFBamDelSubDep2ByUNameIdxKey& rhs );
		bool operator >( const CFBamDelSubDep2HBuff& rhs );
		bool operator >( const CFBamDelSubDep2Buff& rhs );
		cfbam::CFBamDelSubDep2ByUNameIdxKey operator =( cfbam::CFBamDelSubDep2ByUNameIdxKey& src );
		cfbam::CFBamDelSubDep2ByUNameIdxKey operator =( cfbam::CFBamDelSubDep2Buff& src );
		cfbam::CFBamDelSubDep2ByUNameIdxKey operator =( cfbam::CFBamDelSubDep2HBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs );

	bool operator <=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs );

	bool operator ==(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs );

	bool operator !=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs );

	bool operator >=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs );

	bool operator >(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep2ByUNameIdxKey& lhs, const cfbam::CFBamDelSubDep2Buff& rhs );

	template<> struct hash<cfbam::CFBamDelSubDep2ByUNameIdxKey> {
		typedef cfbam::CFBamDelSubDep2ByUNameIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

