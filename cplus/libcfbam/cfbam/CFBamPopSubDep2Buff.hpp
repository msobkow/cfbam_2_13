#pragma once

// Description: C++18 specification for a PopSubDep2 buffer object.

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

#include <cfbam/CFBamPopDepBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamPopSubDep2HBuff;
	class CFBamPopSubDep2ByPopSubDep1IdxKey;
	class CFBamPopSubDep2ByUNameIdxKey;

	class CFBamPopSubDep2Buff : public CFBamPopDepBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_POPSUBDEP1TENANTID;
		static const std::string COLNAME_POPSUBDEP1ID;
		static const std::string COLNAME_NAME;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t POPSUBDEP1TENANTID_INIT_VALUE;
		static const int64_t POPSUBDEP1ID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t POPSUBDEP1TENANTID_MIN_VALUE;
		static const int64_t POPSUBDEP1ID_MIN_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
	protected:
		int64_t requiredPopSubDep1TenantId;
		int64_t requiredPopSubDep1Id;
		std::string* requiredName;
	public:
		CFBamPopSubDep2Buff();
		CFBamPopSubDep2Buff( const CFBamPopSubDep2Buff& src );
		virtual ~CFBamPopSubDep2Buff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredPopSubDep1TenantId() const;
		virtual const int64_t* getRequiredPopSubDep1TenantIdReference() const;
		virtual void setRequiredPopSubDep1TenantId( const int64_t value );

		virtual const int64_t getRequiredPopSubDep1Id() const;
		virtual const int64_t* getRequiredPopSubDep1IdReference() const;
		virtual void setRequiredPopSubDep1Id( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamPopSubDep2ByPopSubDep1IdxKey& rhs );
		bool operator <( const CFBamPopSubDep2ByUNameIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamPopSubDep2HBuff& rhs );
		bool operator <( const CFBamPopSubDep2Buff& rhs );

		bool operator <=( const CFBamPopSubDep2ByPopSubDep1IdxKey& rhs );
		bool operator <=( const CFBamPopSubDep2ByUNameIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamPopSubDep2HBuff& rhs );
		bool operator <=( const CFBamPopSubDep2Buff& rhs );

		bool operator ==( const CFBamPopSubDep2ByPopSubDep1IdxKey& rhs );
		bool operator ==( const CFBamPopSubDep2ByUNameIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamPopSubDep2HBuff& rhs );
		bool operator ==( const CFBamPopSubDep2Buff& rhs );

		bool operator !=( const CFBamPopSubDep2ByPopSubDep1IdxKey& rhs );
		bool operator !=( const CFBamPopSubDep2ByUNameIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamPopSubDep2HBuff& rhs );
		bool operator !=( const CFBamPopSubDep2Buff& rhs );

		bool operator >=( const CFBamPopSubDep2ByPopSubDep1IdxKey& rhs );
		bool operator >=( const CFBamPopSubDep2ByUNameIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamPopSubDep2HBuff& rhs );
		bool operator >=( const CFBamPopSubDep2Buff& rhs );

		bool operator >( const CFBamPopSubDep2ByPopSubDep1IdxKey& rhs );
		bool operator >( const CFBamPopSubDep2ByUNameIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamPopSubDep2HBuff& rhs );
		bool operator >( const CFBamPopSubDep2Buff& rhs );
		cfbam::CFBamPopSubDep2Buff operator =( cfbam::CFBamPopSubDep2Buff& src );
		cfbam::CFBamPopSubDep2Buff operator =( cfbam::CFBamPopSubDep2HBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& rhs );
	bool operator <(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2ByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs );
	bool operator <(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2Buff& rhs );

	bool operator <=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& rhs );
	bool operator <=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2ByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs );
	bool operator <=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2Buff& rhs );

	bool operator ==(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& rhs );
	bool operator ==(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2ByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs );
	bool operator ==(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2Buff& rhs );

	bool operator !=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& rhs );
	bool operator !=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2ByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs );
	bool operator !=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2Buff& rhs );

	bool operator >=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& rhs );
	bool operator >=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2ByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs );
	bool operator >=(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2Buff& rhs );

	bool operator >(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2ByPopSubDep1IdxKey& rhs );

	bool operator >(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2ByUNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2HBuff& rhs );
	bool operator >(const  cfbam::CFBamPopSubDep2Buff& lhs, const cfbam::CFBamPopSubDep2Buff& rhs );

	template<> struct hash<cfbam::CFBamPopSubDep2Buff> {
		typedef cfbam::CFBamPopSubDep2Buff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

