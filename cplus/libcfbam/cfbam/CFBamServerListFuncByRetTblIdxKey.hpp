#pragma once

// Description: C++18 specification for a ServerListFunc by RetTblIdx index key object.

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

	class CFBamServerListFuncBuff;
	class CFBamServerListFuncHBuff;

	class CFBamServerListFuncByRetTblIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalRetTenantId;
		cflib::CFLibNullableInt64 optionalRetTableId;
	public:
		CFBamServerListFuncByRetTblIdxKey();
		CFBamServerListFuncByRetTblIdxKey( const CFBamServerListFuncByRetTblIdxKey& src );
		virtual ~CFBamServerListFuncByRetTblIdxKey();

		virtual const int64_t getOptionalRetTenantIdValue() const;
		virtual const int64_t* getOptionalRetTenantIdReference() const;
		virtual const bool isOptionalRetTenantIdNull() const;
		virtual void setOptionalRetTenantIdNull();
		virtual void setOptionalRetTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalRetTableIdValue() const;
		virtual const int64_t* getOptionalRetTableIdReference() const;
		virtual const bool isOptionalRetTableIdNull() const;
		virtual void setOptionalRetTableIdNull();
		virtual void setOptionalRetTableIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamServerListFuncByRetTblIdxKey& rhs );
		bool operator <( const CFBamServerListFuncHBuff& rhs );
		bool operator <( const CFBamServerListFuncBuff& rhs );

		bool operator <=( const CFBamServerListFuncByRetTblIdxKey& rhs );
		bool operator <=( const CFBamServerListFuncHBuff& rhs );
		bool operator <=( const CFBamServerListFuncBuff& rhs );

		bool operator ==( const CFBamServerListFuncByRetTblIdxKey& rhs );
		bool operator ==( const CFBamServerListFuncHBuff& rhs );
		bool operator ==( const CFBamServerListFuncBuff& rhs );

		bool operator !=( const CFBamServerListFuncByRetTblIdxKey& rhs );
		bool operator !=( const CFBamServerListFuncHBuff& rhs );
		bool operator !=( const CFBamServerListFuncBuff& rhs );

		bool operator >=( const CFBamServerListFuncByRetTblIdxKey& rhs );
		bool operator >=( const CFBamServerListFuncHBuff& rhs );
		bool operator >=( const CFBamServerListFuncBuff& rhs );

		bool operator >( const CFBamServerListFuncByRetTblIdxKey& rhs );
		bool operator >( const CFBamServerListFuncHBuff& rhs );
		bool operator >( const CFBamServerListFuncBuff& rhs );
		cfbam::CFBamServerListFuncByRetTblIdxKey operator =( cfbam::CFBamServerListFuncByRetTblIdxKey& src );
		cfbam::CFBamServerListFuncByRetTblIdxKey operator =( cfbam::CFBamServerListFuncBuff& src );
		cfbam::CFBamServerListFuncByRetTblIdxKey operator =( cfbam::CFBamServerListFuncHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs );
	bool operator <(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncHBuff& rhs );
	bool operator <(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncBuff& rhs );

	bool operator <=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncHBuff& rhs );
	bool operator <=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncBuff& rhs );

	bool operator ==(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncHBuff& rhs );
	bool operator ==(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncBuff& rhs );

	bool operator !=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncHBuff& rhs );
	bool operator !=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncBuff& rhs );

	bool operator >=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncHBuff& rhs );
	bool operator >=(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncBuff& rhs );

	bool operator >(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs );
	bool operator >(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncHBuff& rhs );
	bool operator >(const  cfbam::CFBamServerListFuncByRetTblIdxKey& lhs, const cfbam::CFBamServerListFuncBuff& rhs );

	template<> struct hash<cfbam::CFBamServerListFuncByRetTblIdxKey> {
		typedef cfbam::CFBamServerListFuncByRetTblIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

