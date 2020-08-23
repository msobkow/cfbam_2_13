#pragma once

// Description: C++18 specification for a Table by PrimaryIndexIdx index key object.

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

	class CFBamTableBuff;
	class CFBamTableHBuff;

	class CFBamTableByPrimaryIndexIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalPrimaryIndexTenantId;
		cflib::CFLibNullableInt64 optionalPrimaryIndexId;
	public:
		CFBamTableByPrimaryIndexIdxKey();
		CFBamTableByPrimaryIndexIdxKey( const CFBamTableByPrimaryIndexIdxKey& src );
		virtual ~CFBamTableByPrimaryIndexIdxKey();

		virtual const int64_t getOptionalPrimaryIndexTenantIdValue() const;
		virtual const int64_t* getOptionalPrimaryIndexTenantIdReference() const;
		virtual const bool isOptionalPrimaryIndexTenantIdNull() const;
		virtual void setOptionalPrimaryIndexTenantIdNull();
		virtual void setOptionalPrimaryIndexTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalPrimaryIndexIdValue() const;
		virtual const int64_t* getOptionalPrimaryIndexIdReference() const;
		virtual const bool isOptionalPrimaryIndexIdNull() const;
		virtual void setOptionalPrimaryIndexIdNull();
		virtual void setOptionalPrimaryIndexIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamTableByPrimaryIndexIdxKey& rhs );
		bool operator <( const CFBamTableHBuff& rhs );
		bool operator <( const CFBamTableBuff& rhs );

		bool operator <=( const CFBamTableByPrimaryIndexIdxKey& rhs );
		bool operator <=( const CFBamTableHBuff& rhs );
		bool operator <=( const CFBamTableBuff& rhs );

		bool operator ==( const CFBamTableByPrimaryIndexIdxKey& rhs );
		bool operator ==( const CFBamTableHBuff& rhs );
		bool operator ==( const CFBamTableBuff& rhs );

		bool operator !=( const CFBamTableByPrimaryIndexIdxKey& rhs );
		bool operator !=( const CFBamTableHBuff& rhs );
		bool operator !=( const CFBamTableBuff& rhs );

		bool operator >=( const CFBamTableByPrimaryIndexIdxKey& rhs );
		bool operator >=( const CFBamTableHBuff& rhs );
		bool operator >=( const CFBamTableBuff& rhs );

		bool operator >( const CFBamTableByPrimaryIndexIdxKey& rhs );
		bool operator >( const CFBamTableHBuff& rhs );
		bool operator >( const CFBamTableBuff& rhs );
		cfbam::CFBamTableByPrimaryIndexIdxKey operator =( cfbam::CFBamTableByPrimaryIndexIdxKey& src );
		cfbam::CFBamTableByPrimaryIndexIdxKey operator =( cfbam::CFBamTableBuff& src );
		cfbam::CFBamTableByPrimaryIndexIdxKey operator =( cfbam::CFBamTableHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs );
	bool operator <(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs );

	bool operator <=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs );
	bool operator <=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs );

	bool operator ==(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs );
	bool operator ==(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs );

	bool operator !=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs );
	bool operator !=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs );

	bool operator >=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs );
	bool operator >=(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs );

	bool operator >(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableByPrimaryIndexIdxKey& rhs );
	bool operator >(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableHBuff& rhs );
	bool operator >(const  cfbam::CFBamTableByPrimaryIndexIdxKey& lhs, const cfbam::CFBamTableBuff& rhs );

	template<> struct hash<cfbam::CFBamTableByPrimaryIndexIdxKey> {
		typedef cfbam::CFBamTableByPrimaryIndexIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

