#pragma once

// Description: C++18 specification for a Index by UNameIdx index key object.

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

	class CFBamIndexBuff;
	class CFBamIndexHBuff;

	class CFBamIndexByUNameIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredTenantId;
		int64_t requiredTableId;
		std::string* requiredName;
	public:
		CFBamIndexByUNameIdxKey();
		CFBamIndexByUNameIdxKey( const CFBamIndexByUNameIdxKey& src );
		virtual ~CFBamIndexByUNameIdxKey();

		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredTableId() const;
		virtual const int64_t* getRequiredTableIdReference() const;
		virtual void setRequiredTableId( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamIndexByUNameIdxKey& rhs );
		bool operator <( const CFBamIndexHBuff& rhs );
		bool operator <( const CFBamIndexBuff& rhs );

		bool operator <=( const CFBamIndexByUNameIdxKey& rhs );
		bool operator <=( const CFBamIndexHBuff& rhs );
		bool operator <=( const CFBamIndexBuff& rhs );

		bool operator ==( const CFBamIndexByUNameIdxKey& rhs );
		bool operator ==( const CFBamIndexHBuff& rhs );
		bool operator ==( const CFBamIndexBuff& rhs );

		bool operator !=( const CFBamIndexByUNameIdxKey& rhs );
		bool operator !=( const CFBamIndexHBuff& rhs );
		bool operator !=( const CFBamIndexBuff& rhs );

		bool operator >=( const CFBamIndexByUNameIdxKey& rhs );
		bool operator >=( const CFBamIndexHBuff& rhs );
		bool operator >=( const CFBamIndexBuff& rhs );

		bool operator >( const CFBamIndexByUNameIdxKey& rhs );
		bool operator >( const CFBamIndexHBuff& rhs );
		bool operator >( const CFBamIndexBuff& rhs );
		cfbam::CFBamIndexByUNameIdxKey operator =( cfbam::CFBamIndexByUNameIdxKey& src );
		cfbam::CFBamIndexByUNameIdxKey operator =( cfbam::CFBamIndexBuff& src );
		cfbam::CFBamIndexByUNameIdxKey operator =( cfbam::CFBamIndexHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexHBuff& rhs );
	bool operator <(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexBuff& rhs );

	bool operator <=(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexHBuff& rhs );
	bool operator <=(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexBuff& rhs );

	bool operator ==(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexHBuff& rhs );
	bool operator ==(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexBuff& rhs );

	bool operator !=(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexHBuff& rhs );
	bool operator !=(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexBuff& rhs );

	bool operator >=(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexHBuff& rhs );
	bool operator >=(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexBuff& rhs );

	bool operator >(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexHBuff& rhs );
	bool operator >(const  cfbam::CFBamIndexByUNameIdxKey& lhs, const cfbam::CFBamIndexBuff& rhs );

	template<> struct hash<cfbam::CFBamIndexByUNameIdxKey> {
		typedef cfbam::CFBamIndexByUNameIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

