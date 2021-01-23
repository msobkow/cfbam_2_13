#pragma once

// Description: C++18 specification of a DelSubDep2 history buffer object.

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

#include <cfbam/CFBamDelDepHBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>
namespace cfbam {

	class CFBamDelSubDep2Buff;
	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamDelSubDep2ByContDelDep1IdxKey;
	class CFBamDelSubDep2ByUNameIdxKey;

	class CFBamDelSubDep2HBuff : public CFBamDelDepHBuff

	{
	public:
		static const std::string CLASS_NAME;
	protected:
		int64_t requiredDelSubDep1TenantId;
		int64_t requiredDelSubDep1Id;
		std::string* requiredName;
	public:
		CFBamDelSubDep2HBuff();
		CFBamDelSubDep2HBuff( const CFBamDelSubDep2HBuff& src );
		virtual ~CFBamDelSubDep2HBuff();

		virtual cflib::ICFLibCloneableObj* clone();
		virtual const int64_t getRequiredDelSubDep1TenantId() const;
		virtual const int64_t* getRequiredDelSubDep1TenantIdReference() const;
		virtual void setRequiredDelSubDep1TenantId( const int64_t value );

		virtual const int64_t getRequiredDelSubDep1Id() const;
		virtual const int64_t* getRequiredDelSubDep1IdReference() const;
		virtual void setRequiredDelSubDep1Id( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs );
		bool operator <( const CFBamDelSubDep2ByUNameIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamDelSubDep2HBuff& rhs );
		bool operator <( const CFBamDelSubDep2Buff& rhs );

		bool operator <=( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs );
		bool operator <=( const CFBamDelSubDep2ByUNameIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamDelSubDep2HBuff& rhs );
		bool operator <=( const CFBamDelSubDep2Buff& rhs );

		bool operator ==( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs );
		bool operator ==( const CFBamDelSubDep2ByUNameIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamDelSubDep2HBuff& rhs );
		bool operator ==( const CFBamDelSubDep2Buff& rhs );

		bool operator !=( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs );
		bool operator !=( const CFBamDelSubDep2ByUNameIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamDelSubDep2HBuff& rhs );
		bool operator !=( const CFBamDelSubDep2Buff& rhs );

		bool operator >=( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs );
		bool operator >=( const CFBamDelSubDep2ByUNameIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamDelSubDep2HBuff& rhs );
		bool operator >=( const CFBamDelSubDep2Buff& rhs );

		bool operator >( const CFBamDelSubDep2ByContDelDep1IdxKey& rhs );
		bool operator >( const CFBamDelSubDep2ByUNameIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamDelSubDep2HBuff& rhs );
		bool operator >( const CFBamDelSubDep2Buff& rhs );
		cfbam::CFBamDelSubDep2HBuff operator =( cfbam::CFBamDelSubDep2Buff& src );
		cfbam::CFBamDelSubDep2HBuff operator =( cfbam::CFBamDelSubDep2HBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs );
	bool operator <(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2Buff& rhs );

	bool operator <=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs );
	bool operator <=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2Buff& rhs );

	bool operator ==(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs );
	bool operator ==(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2Buff& rhs );

	bool operator !=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs );
	bool operator !=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2Buff& rhs );

	bool operator >=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs );
	bool operator >=(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2Buff& rhs );

	bool operator >(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2ByContDelDep1IdxKey& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2ByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2HBuff& rhs );
	bool operator >(const  cfbam::CFBamDelSubDep2HBuff& lhs, const cfbam::CFBamDelSubDep2Buff& rhs );

	template<> struct hash<cfbam::CFBamDelSubDep2HBuff> {
		typedef cfbam::CFBamDelSubDep2HBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

