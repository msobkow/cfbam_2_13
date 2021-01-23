#pragma once

// Description: C++18 specification for a ClearSubDep1 buffer object.

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

#include <cfbam/CFBamClearDepBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamClearSubDep1HBuff;
	class CFBamClearSubDep1ByClearTopDepIdxKey;
	class CFBamClearSubDep1ByUNameIdxKey;

	class CFBamClearSubDep1Buff : public CFBamClearDepBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_CLEARTOPDEPTENANTID;
		static const std::string COLNAME_CLEARTOPDEPID;
		static const std::string COLNAME_NAME;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t CLEARTOPDEPTENANTID_INIT_VALUE;
		static const int64_t CLEARTOPDEPID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t CLEARTOPDEPTENANTID_MIN_VALUE;
		static const int64_t CLEARTOPDEPID_MIN_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
	protected:
		int64_t requiredClearTopDepTenantId;
		int64_t requiredClearTopDepId;
		std::string* requiredName;
	public:
		CFBamClearSubDep1Buff();
		CFBamClearSubDep1Buff( const CFBamClearSubDep1Buff& src );
		virtual ~CFBamClearSubDep1Buff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredClearTopDepTenantId() const;
		virtual const int64_t* getRequiredClearTopDepTenantIdReference() const;
		virtual void setRequiredClearTopDepTenantId( const int64_t value );

		virtual const int64_t getRequiredClearTopDepId() const;
		virtual const int64_t* getRequiredClearTopDepIdReference() const;
		virtual void setRequiredClearTopDepId( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
		bool operator <( const CFBamClearSubDep1ByUNameIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamClearSubDep1HBuff& rhs );
		bool operator <( const CFBamClearSubDep1Buff& rhs );

		bool operator <=( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
		bool operator <=( const CFBamClearSubDep1ByUNameIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamClearSubDep1HBuff& rhs );
		bool operator <=( const CFBamClearSubDep1Buff& rhs );

		bool operator ==( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
		bool operator ==( const CFBamClearSubDep1ByUNameIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamClearSubDep1HBuff& rhs );
		bool operator ==( const CFBamClearSubDep1Buff& rhs );

		bool operator !=( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
		bool operator !=( const CFBamClearSubDep1ByUNameIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamClearSubDep1HBuff& rhs );
		bool operator !=( const CFBamClearSubDep1Buff& rhs );

		bool operator >=( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
		bool operator >=( const CFBamClearSubDep1ByUNameIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamClearSubDep1HBuff& rhs );
		bool operator >=( const CFBamClearSubDep1Buff& rhs );

		bool operator >( const CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
		bool operator >( const CFBamClearSubDep1ByUNameIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamClearSubDep1HBuff& rhs );
		bool operator >( const CFBamClearSubDep1Buff& rhs );
		cfbam::CFBamClearSubDep1Buff operator =( cfbam::CFBamClearSubDep1Buff& src );
		cfbam::CFBamClearSubDep1Buff operator =( cfbam::CFBamClearSubDep1HBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1Buff& rhs );

	bool operator <=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1Buff& rhs );

	bool operator ==(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1Buff& rhs );

	bool operator !=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1Buff& rhs );

	bool operator >=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1Buff& rhs );

	bool operator >(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByClearTopDepIdxKey& rhs );

	bool operator >(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1ByUNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1HBuff& rhs );
	bool operator >(const  cfbam::CFBamClearSubDep1Buff& lhs, const cfbam::CFBamClearSubDep1Buff& rhs );

	template<> struct hash<cfbam::CFBamClearSubDep1Buff> {
		typedef cfbam::CFBamClearSubDep1Buff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

