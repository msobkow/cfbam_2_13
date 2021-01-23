#pragma once

// Description: C++18 specification for a ServerListFunc buffer object.

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

#include <cfbam/CFBamServerMethodBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamServerListFuncHBuff;
	class CFBamServerListFuncByRetTblIdxKey;

	class CFBamServerListFuncBuff : public CFBamServerMethodBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_RETTENANTID;
		static const std::string COLNAME_RETTABLEID;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t RETTENANTID_INIT_VALUE;
		static const int64_t RETTABLEID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t RETTENANTID_MIN_VALUE;
		static const int64_t RETTABLEID_MIN_VALUE;
	protected:
		cflib::CFLibNullableInt64 optionalRetTenantId;
		cflib::CFLibNullableInt64 optionalRetTableId;
	public:
		CFBamServerListFuncBuff();
		CFBamServerListFuncBuff( const CFBamServerListFuncBuff& src );
		virtual ~CFBamServerListFuncBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
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

		bool operator <( const CFBamServerListFuncByRetTblIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamServerListFuncHBuff& rhs );
		bool operator <( const CFBamServerListFuncBuff& rhs );

		bool operator <=( const CFBamServerListFuncByRetTblIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamServerListFuncHBuff& rhs );
		bool operator <=( const CFBamServerListFuncBuff& rhs );

		bool operator ==( const CFBamServerListFuncByRetTblIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamServerListFuncHBuff& rhs );
		bool operator ==( const CFBamServerListFuncBuff& rhs );

		bool operator !=( const CFBamServerListFuncByRetTblIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamServerListFuncHBuff& rhs );
		bool operator !=( const CFBamServerListFuncBuff& rhs );

		bool operator >=( const CFBamServerListFuncByRetTblIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamServerListFuncHBuff& rhs );
		bool operator >=( const CFBamServerListFuncBuff& rhs );

		bool operator >( const CFBamServerListFuncByRetTblIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamServerListFuncHBuff& rhs );
		bool operator >( const CFBamServerListFuncBuff& rhs );
		cfbam::CFBamServerListFuncBuff operator =( cfbam::CFBamServerListFuncBuff& src );
		cfbam::CFBamServerListFuncBuff operator =( cfbam::CFBamServerListFuncHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs );
	bool operator <(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncHBuff& rhs );
	bool operator <(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncBuff& rhs );

	bool operator <=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncHBuff& rhs );
	bool operator <=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncBuff& rhs );

	bool operator ==(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncHBuff& rhs );
	bool operator ==(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncBuff& rhs );

	bool operator !=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncHBuff& rhs );
	bool operator !=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncBuff& rhs );

	bool operator >=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncHBuff& rhs );
	bool operator >=(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncBuff& rhs );

	bool operator >(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncByRetTblIdxKey& rhs );

	bool operator >(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncHBuff& rhs );
	bool operator >(const  cfbam::CFBamServerListFuncBuff& lhs, const cfbam::CFBamServerListFuncBuff& rhs );

	template<> struct hash<cfbam::CFBamServerListFuncBuff> {
		typedef cfbam::CFBamServerListFuncBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

