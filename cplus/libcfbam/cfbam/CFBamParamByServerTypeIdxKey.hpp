#pragma once

// Description: C++18 specification for a Param by ServerTypeIdx index key object.

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

	class CFBamParamBuff;
	class CFBamParamHBuff;

	class CFBamParamByServerTypeIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalTypeTenantId;
		cflib::CFLibNullableInt64 optionalTypeId;
	public:
		CFBamParamByServerTypeIdxKey();
		CFBamParamByServerTypeIdxKey( const CFBamParamByServerTypeIdxKey& src );
		virtual ~CFBamParamByServerTypeIdxKey();

		virtual const int64_t getOptionalTypeTenantIdValue() const;
		virtual const int64_t* getOptionalTypeTenantIdReference() const;
		virtual const bool isOptionalTypeTenantIdNull() const;
		virtual void setOptionalTypeTenantIdNull();
		virtual void setOptionalTypeTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalTypeIdValue() const;
		virtual const int64_t* getOptionalTypeIdReference() const;
		virtual const bool isOptionalTypeIdNull() const;
		virtual void setOptionalTypeIdNull();
		virtual void setOptionalTypeIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamParamByServerTypeIdxKey& rhs );
		bool operator <( const CFBamParamHBuff& rhs );
		bool operator <( const CFBamParamBuff& rhs );

		bool operator <=( const CFBamParamByServerTypeIdxKey& rhs );
		bool operator <=( const CFBamParamHBuff& rhs );
		bool operator <=( const CFBamParamBuff& rhs );

		bool operator ==( const CFBamParamByServerTypeIdxKey& rhs );
		bool operator ==( const CFBamParamHBuff& rhs );
		bool operator ==( const CFBamParamBuff& rhs );

		bool operator !=( const CFBamParamByServerTypeIdxKey& rhs );
		bool operator !=( const CFBamParamHBuff& rhs );
		bool operator !=( const CFBamParamBuff& rhs );

		bool operator >=( const CFBamParamByServerTypeIdxKey& rhs );
		bool operator >=( const CFBamParamHBuff& rhs );
		bool operator >=( const CFBamParamBuff& rhs );

		bool operator >( const CFBamParamByServerTypeIdxKey& rhs );
		bool operator >( const CFBamParamHBuff& rhs );
		bool operator >( const CFBamParamBuff& rhs );
		cfbam::CFBamParamByServerTypeIdxKey operator =( cfbam::CFBamParamByServerTypeIdxKey& src );
		cfbam::CFBamParamByServerTypeIdxKey operator =( cfbam::CFBamParamBuff& src );
		cfbam::CFBamParamByServerTypeIdxKey operator =( cfbam::CFBamParamHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs );
	bool operator <(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs );
	bool operator <(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamBuff& rhs );

	bool operator <=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs );
	bool operator <=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamBuff& rhs );

	bool operator ==(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs );
	bool operator ==(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamBuff& rhs );

	bool operator !=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs );
	bool operator !=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamBuff& rhs );

	bool operator >=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs );
	bool operator >=(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamBuff& rhs );

	bool operator >(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs );
	bool operator >(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamHBuff& rhs );
	bool operator >(const  cfbam::CFBamParamByServerTypeIdxKey& lhs, const cfbam::CFBamParamBuff& rhs );

	template<> struct hash<cfbam::CFBamParamByServerTypeIdxKey> {
		typedef cfbam::CFBamParamByServerTypeIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

