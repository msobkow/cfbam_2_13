#pragma once

// Description: C++18 specification of a DelDep history buffer object.

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

#include <cfbam/CFBamHPKey.hpp>

#include <cfbam/CFBamScopeHBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>
namespace cfbam {

	class CFBamDelDepBuff;
	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamDelDepByDefSchemaIdxKey;
	class CFBamDelDepByDelDepIdxKey;

	class CFBamDelDepHBuff : public CFBamScopeHBuff

	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cflib::CFLibNullableInt64 optionalDefSchemaTenantId;
		cflib::CFLibNullableInt64 optionalDefSchemaId;
		int64_t requiredRelationTenantId;
		int64_t requiredRelationId;
	public:
		CFBamDelDepHBuff();
		CFBamDelDepHBuff( const CFBamDelDepHBuff& src );
		virtual ~CFBamDelDepHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
		virtual const int64_t getOptionalDefSchemaTenantIdValue() const;
		virtual const int64_t* getOptionalDefSchemaTenantIdReference() const;
		virtual const bool isOptionalDefSchemaTenantIdNull() const;
		virtual void setOptionalDefSchemaTenantIdNull();
		virtual void setOptionalDefSchemaTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalDefSchemaIdValue() const;
		virtual const int64_t* getOptionalDefSchemaIdReference() const;
		virtual const bool isOptionalDefSchemaIdNull() const;
		virtual void setOptionalDefSchemaIdNull();
		virtual void setOptionalDefSchemaIdValue( const int64_t value );

		virtual const int64_t getRequiredRelationTenantId() const;
		virtual const int64_t* getRequiredRelationTenantIdReference() const;
		virtual void setRequiredRelationTenantId( const int64_t value );

		virtual const int64_t getRequiredRelationId() const;
		virtual const int64_t* getRequiredRelationIdReference() const;
		virtual void setRequiredRelationId( const int64_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamDelDepByDefSchemaIdxKey& rhs );
		bool operator <( const CFBamDelDepByDelDepIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamDelDepHBuff& rhs );
		bool operator <( const CFBamDelDepBuff& rhs );

		bool operator <=( const CFBamDelDepByDefSchemaIdxKey& rhs );
		bool operator <=( const CFBamDelDepByDelDepIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamDelDepHBuff& rhs );
		bool operator <=( const CFBamDelDepBuff& rhs );

		bool operator ==( const CFBamDelDepByDefSchemaIdxKey& rhs );
		bool operator ==( const CFBamDelDepByDelDepIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamDelDepHBuff& rhs );
		bool operator ==( const CFBamDelDepBuff& rhs );

		bool operator !=( const CFBamDelDepByDefSchemaIdxKey& rhs );
		bool operator !=( const CFBamDelDepByDelDepIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamDelDepHBuff& rhs );
		bool operator !=( const CFBamDelDepBuff& rhs );

		bool operator >=( const CFBamDelDepByDefSchemaIdxKey& rhs );
		bool operator >=( const CFBamDelDepByDelDepIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamDelDepHBuff& rhs );
		bool operator >=( const CFBamDelDepBuff& rhs );

		bool operator >( const CFBamDelDepByDefSchemaIdxKey& rhs );
		bool operator >( const CFBamDelDepByDelDepIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamDelDepHBuff& rhs );
		bool operator >( const CFBamDelDepBuff& rhs );
		cfbam::CFBamDelDepHBuff operator =( cfbam::CFBamDelDepBuff& src );
		cfbam::CFBamDelDepHBuff operator =( cfbam::CFBamDelDepHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepByDelDepIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepHBuff& rhs );
	bool operator <(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepBuff& rhs );

	bool operator <=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepByDelDepIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepHBuff& rhs );
	bool operator <=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepBuff& rhs );

	bool operator ==(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepByDelDepIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepHBuff& rhs );
	bool operator ==(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepBuff& rhs );

	bool operator !=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepByDelDepIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepHBuff& rhs );
	bool operator !=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepBuff& rhs );

	bool operator >=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepByDelDepIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepHBuff& rhs );
	bool operator >=(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepBuff& rhs );

	bool operator >(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepByDefSchemaIdxKey& rhs );
	bool operator >(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepByDelDepIdxKey& rhs );
	bool operator >(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepHBuff& rhs );
	bool operator >(const  cfbam::CFBamDelDepHBuff& lhs, const cfbam::CFBamDelDepBuff& rhs );

	template<> struct hash<cfbam::CFBamDelDepHBuff> {
		typedef cfbam::CFBamDelDepHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

