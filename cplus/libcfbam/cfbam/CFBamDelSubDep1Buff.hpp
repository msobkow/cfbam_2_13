#pragma once

// Description: C++18 specification for a DelSubDep1 buffer object.

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

#include <cfbam/CFBamDelDepBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamDelSubDep1HBuff;
	class CFBamDelSubDep1ByDelTopDepIdxKey;
	class CFBamDelSubDep1ByUNameIdxKey;

	class CFBamDelSubDep1Buff : public CFBamDelDepBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_DELTOPDEPTENANTID;
		static const std::string COLNAME_DELTOPDEPID;
		static const std::string COLNAME_NAME;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t DELTOPDEPTENANTID_INIT_VALUE;
		static const int64_t DELTOPDEPID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t DELTOPDEPTENANTID_MIN_VALUE;
		static const int64_t DELTOPDEPID_MIN_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
	protected:
		int64_t requiredDelTopDepTenantId;
		int64_t requiredDelTopDepId;
		std::string* requiredName;
	public:
		CFBamDelSubDep1Buff();
		CFBamDelSubDep1Buff( const CFBamDelSubDep1Buff& src );
		virtual ~CFBamDelSubDep1Buff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredDelTopDepTenantId() const;
		virtual const int64_t* getRequiredDelTopDepTenantIdReference() const;
		virtual void setRequiredDelTopDepTenantId( const int64_t value );

		virtual const int64_t getRequiredDelTopDepId() const;
		virtual const int64_t* getRequiredDelTopDepIdReference() const;
		virtual void setRequiredDelTopDepId( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamDelSubDep1ByDelTopDepIdxKey& rhs );
		bool operator <( const CFBamDelSubDep1ByUNameIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamDelSubDep1HBuff& rhs );
		bool operator <( const CFBamDelSubDep1Buff& rhs );

		bool operator <=( const CFBamDelSubDep1ByDelTopDepIdxKey& rhs );
		bool operator <=( const CFBamDelSubDep1ByUNameIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamDelSubDep1HBuff& rhs );
		bool operator <=( const CFBamDelSubDep1Buff& rhs );

		bool operator ==( const CFBamDelSubDep1ByDelTopDepIdxKey& rhs );
		bool operator ==( const CFBamDelSubDep1ByUNameIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamDelSubDep1HBuff& rhs );
		bool operator ==( const CFBamDelSubDep1Buff& rhs );

		bool operator !=( const CFBamDelSubDep1ByDelTopDepIdxKey& rhs );
		bool operator !=( const CFBamDelSubDep1ByUNameIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamDelSubDep1HBuff& rhs );
		bool operator !=( const CFBamDelSubDep1Buff& rhs );

		bool operator >=( const CFBamDelSubDep1ByDelTopDepIdxKey& rhs );
		bool operator >=( const CFBamDelSubDep1ByUNameIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamDelSubDep1HBuff& rhs );
		bool operator >=( const CFBamDelSubDep1Buff& rhs );

		bool operator >( const CFBamDelSubDep1ByDelTopDepIdxKey& rhs );
		bool operator >( const CFBamDelSubDep1ByUNameIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamDelSubDep1HBuff& rhs );
		bool operator >( const CFBamDelSubDep1Buff& rhs );
		cfbam::CFBamDelSubDep1Buff operator =( cfbam::CFBamDelSubDep1Buff& src );
		cfbam::CFBamDelSubDep1Buff operator =( cfbam::CFBamDelSubDep1HBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1Buff& rhs );

	bool operator <=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1Buff& rhs );

	bool operator ==(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1Buff& rhs );

	bool operator !=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1Buff& rhs );

	bool operator >=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1Buff& rhs );

	bool operator >(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1ByDelTopDepIdxKey& rhs );

	bool operator >(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1ByUNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1HBuff& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep1Buff& lhs, const cfbam::CFBamDelSubDep1Buff& rhs );

	template<> struct hash<cfbam::CFBamDelSubDep1Buff> {
		typedef cfbam::CFBamDelSubDep1Buff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

