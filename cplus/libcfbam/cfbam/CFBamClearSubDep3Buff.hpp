#pragma once

// Description: C++18 specification for a ClearSubDep3 buffer object.

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
	class CFBamClearSubDep3HBuff;
	class CFBamClearSubDep3ByClearSubDep2IdxKey;
	class CFBamClearSubDep3ByUNameIdxKey;

	class CFBamClearSubDep3Buff : public CFBamClearDepBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_CLEARSUBDEP2TENANTID;
		static const std::string COLNAME_CLEARSUBDEP2ID;
		static const std::string COLNAME_NAME;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t CLEARSUBDEP2TENANTID_INIT_VALUE;
		static const int64_t CLEARSUBDEP2ID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t CLEARSUBDEP2TENANTID_MIN_VALUE;
		static const int64_t CLEARSUBDEP2ID_MIN_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
	protected:
		int64_t requiredClearSubDep2TenantId;
		int64_t requiredClearSubDep2Id;
		std::string* requiredName;
	public:
		CFBamClearSubDep3Buff();
		CFBamClearSubDep3Buff( const CFBamClearSubDep3Buff& src );
		virtual ~CFBamClearSubDep3Buff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredClearSubDep2TenantId() const;
		virtual const int64_t* getRequiredClearSubDep2TenantIdReference() const;
		virtual void setRequiredClearSubDep2TenantId( const int64_t value );

		virtual const int64_t getRequiredClearSubDep2Id() const;
		virtual const int64_t* getRequiredClearSubDep2IdReference() const;
		virtual void setRequiredClearSubDep2Id( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamClearSubDep3ByClearSubDep2IdxKey& rhs );
		bool operator <( const CFBamClearSubDep3ByUNameIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamClearSubDep3HBuff& rhs );
		bool operator <( const CFBamClearSubDep3Buff& rhs );

		bool operator <=( const CFBamClearSubDep3ByClearSubDep2IdxKey& rhs );
		bool operator <=( const CFBamClearSubDep3ByUNameIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamClearSubDep3HBuff& rhs );
		bool operator <=( const CFBamClearSubDep3Buff& rhs );

		bool operator ==( const CFBamClearSubDep3ByClearSubDep2IdxKey& rhs );
		bool operator ==( const CFBamClearSubDep3ByUNameIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamClearSubDep3HBuff& rhs );
		bool operator ==( const CFBamClearSubDep3Buff& rhs );

		bool operator !=( const CFBamClearSubDep3ByClearSubDep2IdxKey& rhs );
		bool operator !=( const CFBamClearSubDep3ByUNameIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamClearSubDep3HBuff& rhs );
		bool operator !=( const CFBamClearSubDep3Buff& rhs );

		bool operator >=( const CFBamClearSubDep3ByClearSubDep2IdxKey& rhs );
		bool operator >=( const CFBamClearSubDep3ByUNameIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamClearSubDep3HBuff& rhs );
		bool operator >=( const CFBamClearSubDep3Buff& rhs );

		bool operator >( const CFBamClearSubDep3ByClearSubDep2IdxKey& rhs );
		bool operator >( const CFBamClearSubDep3ByUNameIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamClearSubDep3HBuff& rhs );
		bool operator >( const CFBamClearSubDep3Buff& rhs );
		cfbam::CFBamClearSubDep3Buff operator =( cfbam::CFBamClearSubDep3Buff& src );
		cfbam::CFBamClearSubDep3Buff operator =( cfbam::CFBamClearSubDep3HBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs );
	bool operator <(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3Buff& rhs );

	bool operator <=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs );
	bool operator <=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3Buff& rhs );

	bool operator ==(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs );
	bool operator ==(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3Buff& rhs );

	bool operator !=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs );
	bool operator !=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3Buff& rhs );

	bool operator >=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs );
	bool operator >=(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3Buff& rhs );

	bool operator >(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3ByClearSubDep2IdxKey& rhs );

	bool operator >(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3ByUNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3HBuff& rhs );
	bool operator >(const  cfbam::CFBamClearSubDep3Buff& lhs, const cfbam::CFBamClearSubDep3Buff& rhs );

	template<> struct hash<cfbam::CFBamClearSubDep3Buff> {
		typedef cfbam::CFBamClearSubDep3Buff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

