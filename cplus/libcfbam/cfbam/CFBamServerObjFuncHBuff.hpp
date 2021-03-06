#pragma once

// Description: C++18 specification of a ServerObjFunc history buffer object.

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

#include <cfbam/CFBamHPKey.hpp>

#include <cfbam/CFBamServerMethodHBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>
namespace cfbam {

	class CFBamServerObjFuncBuff;
	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamServerObjFuncByRetTblIdxKey;

	class CFBamServerObjFuncHBuff : public CFBamServerMethodHBuff

	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cflib::CFLibNullableInt64 optionalRetTenantId;
		cflib::CFLibNullableInt64 optionalRetTableId;
	public:
		CFBamServerObjFuncHBuff();
		CFBamServerObjFuncHBuff( const CFBamServerObjFuncHBuff& src );
		virtual ~CFBamServerObjFuncHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
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

		bool operator <( const CFBamServerObjFuncByRetTblIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamServerObjFuncHBuff& rhs );
		bool operator <( const CFBamServerObjFuncBuff& rhs );

		bool operator <=( const CFBamServerObjFuncByRetTblIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamServerObjFuncHBuff& rhs );
		bool operator <=( const CFBamServerObjFuncBuff& rhs );

		bool operator ==( const CFBamServerObjFuncByRetTblIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamServerObjFuncHBuff& rhs );
		bool operator ==( const CFBamServerObjFuncBuff& rhs );

		bool operator !=( const CFBamServerObjFuncByRetTblIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamServerObjFuncHBuff& rhs );
		bool operator !=( const CFBamServerObjFuncBuff& rhs );

		bool operator >=( const CFBamServerObjFuncByRetTblIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamServerObjFuncHBuff& rhs );
		bool operator >=( const CFBamServerObjFuncBuff& rhs );

		bool operator >( const CFBamServerObjFuncByRetTblIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamServerObjFuncHBuff& rhs );
		bool operator >( const CFBamServerObjFuncBuff& rhs );
		cfbam::CFBamServerObjFuncHBuff operator =( cfbam::CFBamServerObjFuncBuff& src );
		cfbam::CFBamServerObjFuncHBuff operator =( cfbam::CFBamServerObjFuncHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncByRetTblIdxKey& rhs );
	bool operator <(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncHBuff& rhs );
	bool operator <(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncBuff& rhs );

	bool operator <=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncByRetTblIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncHBuff& rhs );
	bool operator <=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncBuff& rhs );

	bool operator ==(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncByRetTblIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncHBuff& rhs );
	bool operator ==(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncBuff& rhs );

	bool operator !=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncByRetTblIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncHBuff& rhs );
	bool operator !=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncBuff& rhs );

	bool operator >=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncByRetTblIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncHBuff& rhs );
	bool operator >=(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncBuff& rhs );

	bool operator >(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncByRetTblIdxKey& rhs );
	bool operator >(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncHBuff& rhs );
	bool operator >(const  cfbam::CFBamServerObjFuncHBuff& lhs, const cfbam::CFBamServerObjFuncBuff& rhs );

	template<> struct hash<cfbam::CFBamServerObjFuncHBuff> {
		typedef cfbam::CFBamServerObjFuncHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

