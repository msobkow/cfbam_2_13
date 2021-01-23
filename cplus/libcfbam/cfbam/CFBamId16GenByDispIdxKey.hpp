#pragma once

// Description: C++18 specification for a Id16Gen by DispIdx index key object.

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

	class CFBamId16GenBuff;
	class CFBamId16GenHBuff;

	class CFBamId16GenByDispIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalDispenserTenantId;
		cflib::CFLibNullableInt64 optionalDispenserId;
	public:
		CFBamId16GenByDispIdxKey();
		CFBamId16GenByDispIdxKey( const CFBamId16GenByDispIdxKey& src );
		virtual ~CFBamId16GenByDispIdxKey();

		virtual const int64_t getOptionalDispenserTenantIdValue() const;
		virtual const int64_t* getOptionalDispenserTenantIdReference() const;
		virtual const bool isOptionalDispenserTenantIdNull() const;
		virtual void setOptionalDispenserTenantIdNull();
		virtual void setOptionalDispenserTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalDispenserIdValue() const;
		virtual const int64_t* getOptionalDispenserIdReference() const;
		virtual const bool isOptionalDispenserIdNull() const;
		virtual void setOptionalDispenserIdNull();
		virtual void setOptionalDispenserIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamId16GenByDispIdxKey& rhs );
		bool operator <( const CFBamId16GenHBuff& rhs );
		bool operator <( const CFBamId16GenBuff& rhs );

		bool operator <=( const CFBamId16GenByDispIdxKey& rhs );
		bool operator <=( const CFBamId16GenHBuff& rhs );
		bool operator <=( const CFBamId16GenBuff& rhs );

		bool operator ==( const CFBamId16GenByDispIdxKey& rhs );
		bool operator ==( const CFBamId16GenHBuff& rhs );
		bool operator ==( const CFBamId16GenBuff& rhs );

		bool operator !=( const CFBamId16GenByDispIdxKey& rhs );
		bool operator !=( const CFBamId16GenHBuff& rhs );
		bool operator !=( const CFBamId16GenBuff& rhs );

		bool operator >=( const CFBamId16GenByDispIdxKey& rhs );
		bool operator >=( const CFBamId16GenHBuff& rhs );
		bool operator >=( const CFBamId16GenBuff& rhs );

		bool operator >( const CFBamId16GenByDispIdxKey& rhs );
		bool operator >( const CFBamId16GenHBuff& rhs );
		bool operator >( const CFBamId16GenBuff& rhs );
		cfbam::CFBamId16GenByDispIdxKey operator =( cfbam::CFBamId16GenByDispIdxKey& src );
		cfbam::CFBamId16GenByDispIdxKey operator =( cfbam::CFBamId16GenBuff& src );
		cfbam::CFBamId16GenByDispIdxKey operator =( cfbam::CFBamId16GenHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs );
	bool operator <(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenHBuff& rhs );
	bool operator <(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenBuff& rhs );

	bool operator <=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenHBuff& rhs );
	bool operator <=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenBuff& rhs );

	bool operator ==(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenHBuff& rhs );
	bool operator ==(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenBuff& rhs );

	bool operator !=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenHBuff& rhs );
	bool operator !=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenBuff& rhs );

	bool operator >=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenHBuff& rhs );
	bool operator >=(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenBuff& rhs );

	bool operator >(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenByDispIdxKey& rhs );
	bool operator >(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenHBuff& rhs );
	bool operator >(const  cfbam::CFBamId16GenByDispIdxKey& lhs, const cfbam::CFBamId16GenBuff& rhs );

	template<> struct hash<cfbam::CFBamId16GenByDispIdxKey> {
		typedef cfbam::CFBamId16GenByDispIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

