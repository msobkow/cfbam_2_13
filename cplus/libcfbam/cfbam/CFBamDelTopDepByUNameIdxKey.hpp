#pragma once

// Description: C++18 specification for a DelTopDep by UNameIdx index key object.

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

	class CFBamDelTopDepBuff;
	class CFBamDelTopDepHBuff;

	class CFBamDelTopDepByUNameIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredTableTenantId;
		int64_t requiredTableId;
		std::string* requiredName;
	public:
		CFBamDelTopDepByUNameIdxKey();
		CFBamDelTopDepByUNameIdxKey( const CFBamDelTopDepByUNameIdxKey& src );
		virtual ~CFBamDelTopDepByUNameIdxKey();

		virtual const int64_t getRequiredTableTenantId() const;
		virtual const int64_t* getRequiredTableTenantIdReference() const;
		virtual void setRequiredTableTenantId( const int64_t value );

		virtual const int64_t getRequiredTableId() const;
		virtual const int64_t* getRequiredTableIdReference() const;
		virtual void setRequiredTableId( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamDelTopDepByUNameIdxKey& rhs );
		bool operator <( const CFBamDelTopDepHBuff& rhs );
		bool operator <( const CFBamDelTopDepBuff& rhs );

		bool operator <=( const CFBamDelTopDepByUNameIdxKey& rhs );
		bool operator <=( const CFBamDelTopDepHBuff& rhs );
		bool operator <=( const CFBamDelTopDepBuff& rhs );

		bool operator ==( const CFBamDelTopDepByUNameIdxKey& rhs );
		bool operator ==( const CFBamDelTopDepHBuff& rhs );
		bool operator ==( const CFBamDelTopDepBuff& rhs );

		bool operator !=( const CFBamDelTopDepByUNameIdxKey& rhs );
		bool operator !=( const CFBamDelTopDepHBuff& rhs );
		bool operator !=( const CFBamDelTopDepBuff& rhs );

		bool operator >=( const CFBamDelTopDepByUNameIdxKey& rhs );
		bool operator >=( const CFBamDelTopDepHBuff& rhs );
		bool operator >=( const CFBamDelTopDepBuff& rhs );

		bool operator >( const CFBamDelTopDepByUNameIdxKey& rhs );
		bool operator >( const CFBamDelTopDepHBuff& rhs );
		bool operator >( const CFBamDelTopDepBuff& rhs );
		cfbam::CFBamDelTopDepByUNameIdxKey operator =( cfbam::CFBamDelTopDepByUNameIdxKey& src );
		cfbam::CFBamDelTopDepByUNameIdxKey operator =( cfbam::CFBamDelTopDepBuff& src );
		cfbam::CFBamDelTopDepByUNameIdxKey operator =( cfbam::CFBamDelTopDepHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepHBuff& rhs );
	bool operator <(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepBuff& rhs );

	bool operator <=(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepHBuff& rhs );
	bool operator <=(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepBuff& rhs );

	bool operator ==(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepHBuff& rhs );
	bool operator ==(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepBuff& rhs );

	bool operator !=(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepHBuff& rhs );
	bool operator !=(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepBuff& rhs );

	bool operator >=(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepHBuff& rhs );
	bool operator >=(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepBuff& rhs );

	bool operator >(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepHBuff& rhs );
	bool operator >(const  cfbam::CFBamDelTopDepByUNameIdxKey& lhs, const cfbam::CFBamDelTopDepBuff& rhs );

	template<> struct hash<cfbam::CFBamDelTopDepByUNameIdxKey> {
		typedef cfbam::CFBamDelTopDepByUNameIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

