#pragma once

// Description: C++18 specification for a ClearSubDep3 by UNameIdx index key object.

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

	class CFBamClearSubDep3Buff;
	class CFBamClearSubDep3HBuff;

	class CFBamClearSubDep3ByUNameIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredClearSubDep2TenantId;
		int64_t requiredClearSubDep2Id;
		std::string* requiredName;
	public:
		CFBamClearSubDep3ByUNameIdxKey();
		CFBamClearSubDep3ByUNameIdxKey( const CFBamClearSubDep3ByUNameIdxKey& src );
		virtual ~CFBamClearSubDep3ByUNameIdxKey();

		virtual const int64_t getRequiredClearSubDep2TenantId() const;
		virtual const int64_t* getRequiredClearSubDep2TenantIdReference() const;
		virtual void setRequiredClearSubDep2TenantId( const int64_t value );

		virtual const int64_t getRequiredClearSubDep2Id() const;
		virtual const int64_t* getRequiredClearSubDep2IdReference() const;
		virtual void setRequiredClearSubDep2Id( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamClearSubDep3ByUNameIdxKey& rhs );
		bool operator <( const CFBamClearSubDep3HBuff& rhs );
		bool operator <( const CFBamClearSubDep3Buff& rhs );

		bool operator <=( const CFBamClearSubDep3ByUNameIdxKey& rhs );
		bool operator <=( const CFBamClearSubDep3HBuff& rhs );
		bool operator <=( const CFBamClearSubDep3Buff& rhs );

		bool operator ==( const CFBamClearSubDep3ByUNameIdxKey& rhs );
		bool operator ==( const CFBamClearSubDep3HBuff& rhs );
		bool operator ==( const CFBamClearSubDep3Buff& rhs );

		bool operator !=( const CFBamClearSubDep3ByUNameIdxKey& rhs );
		bool operator !=( const CFBamClearSubDep3HBuff& rhs );
		bool operator !=( const CFBamClearSubDep3Buff& rhs );

		bool operator >=( const CFBamClearSubDep3ByUNameIdxKey& rhs );
		bool operator >=( const CFBamClearSubDep3HBuff& rhs );
		bool operator >=( const CFBamClearSubDep3Buff& rhs );

		bool operator >( const CFBamClearSubDep3ByUNameIdxKey& rhs );
		bool operator >( const CFBamClearSubDep3HBuff& rhs );
		bool operator >( const CFBamClearSubDep3Buff& rhs );
		cfbam::CFBamClearSubDep3ByUNameIdxKey operator =( cfbam::CFBamClearSubDep3ByUNameIdxKey& src );
		cfbam::CFBamClearSubDep3ByUNameIdxKey operator =( cfbam::CFBamClearSubDep3Buff& src );
		cfbam::CFBamClearSubDep3ByUNameIdxKey operator =( cfbam::CFBamClearSubDep3HBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs );

	bool operator <=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs );

	bool operator ==(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs );

	bool operator !=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs );

	bool operator >=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs );

	bool operator >(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs );
	bool operator >(const  cfbam::CFBamClearSubDep3ByUNameIdxKey& lhs, const cfbam::CFBamClearSubDep3Buff& rhs );

	template<> struct hash<cfbam::CFBamClearSubDep3ByUNameIdxKey> {
		typedef cfbam::CFBamClearSubDep3ByUNameIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

