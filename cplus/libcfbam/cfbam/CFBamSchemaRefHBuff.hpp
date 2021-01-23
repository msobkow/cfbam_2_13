#pragma once

// Description: C++18 specification of a SchemaRef history buffer object.

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

#include <cfbam/CFBamScopeHBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>
namespace cfbam {

	class CFBamSchemaRefBuff;
	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamSchemaRefBySchemaIdxKey;
	class CFBamSchemaRefByUNameIdxKey;
	class CFBamSchemaRefByRefSchemaIdxKey;
	class CFBamSchemaRefByPrevIdxKey;
	class CFBamSchemaRefByNextIdxKey;

	class CFBamSchemaRefHBuff : public CFBamScopeHBuff

	{
	public:
		static const std::string CLASS_NAME;
	protected:
		int64_t requiredSchemaId;
		std::string* requiredName;
		std::string* requiredRefModelName;
		std::string* requiredIncludeRoot;
		cflib::CFLibNullableInt64 optionalRefSchemaTenantId;
		cflib::CFLibNullableInt64 optionalRefSchemaId;
		cflib::CFLibNullableInt64 optionalPrevTenantId;
		cflib::CFLibNullableInt64 optionalPrevId;
		cflib::CFLibNullableInt64 optionalNextTenantId;
		cflib::CFLibNullableInt64 optionalNextId;
	public:
		CFBamSchemaRefHBuff();
		CFBamSchemaRefHBuff( const CFBamSchemaRefHBuff& src );
		virtual ~CFBamSchemaRefHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
		virtual const int64_t getRequiredSchemaId() const;
		virtual const int64_t* getRequiredSchemaIdReference() const;
		virtual void setRequiredSchemaId( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual const std::string& getRequiredRefModelName() const;
		virtual const std::string* getRequiredRefModelNameReference() const;
		virtual void setRequiredRefModelName( const std::string& value );

		virtual const std::string& getRequiredIncludeRoot() const;
		virtual const std::string* getRequiredIncludeRootReference() const;
		virtual void setRequiredIncludeRoot( const std::string& value );

		virtual const int64_t getOptionalRefSchemaTenantIdValue() const;
		virtual const int64_t* getOptionalRefSchemaTenantIdReference() const;
		virtual const bool isOptionalRefSchemaTenantIdNull() const;
		virtual void setOptionalRefSchemaTenantIdNull();
		virtual void setOptionalRefSchemaTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalRefSchemaIdValue() const;
		virtual const int64_t* getOptionalRefSchemaIdReference() const;
		virtual const bool isOptionalRefSchemaIdNull() const;
		virtual void setOptionalRefSchemaIdNull();
		virtual void setOptionalRefSchemaIdValue( const int64_t value );

		virtual const int64_t getOptionalPrevTenantIdValue() const;
		virtual const int64_t* getOptionalPrevTenantIdReference() const;
		virtual const bool isOptionalPrevTenantIdNull() const;
		virtual void setOptionalPrevTenantIdNull();
		virtual void setOptionalPrevTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalPrevIdValue() const;
		virtual const int64_t* getOptionalPrevIdReference() const;
		virtual const bool isOptionalPrevIdNull() const;
		virtual void setOptionalPrevIdNull();
		virtual void setOptionalPrevIdValue( const int64_t value );

		virtual const int64_t getOptionalNextTenantIdValue() const;
		virtual const int64_t* getOptionalNextTenantIdReference() const;
		virtual const bool isOptionalNextTenantIdNull() const;
		virtual void setOptionalNextTenantIdNull();
		virtual void setOptionalNextTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalNextIdValue() const;
		virtual const int64_t* getOptionalNextIdReference() const;
		virtual const bool isOptionalNextIdNull() const;
		virtual void setOptionalNextIdNull();
		virtual void setOptionalNextIdValue( const int64_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamSchemaRefBySchemaIdxKey& rhs );
		bool operator <( const CFBamSchemaRefByUNameIdxKey& rhs );
		bool operator <( const CFBamSchemaRefByRefSchemaIdxKey& rhs );
		bool operator <( const CFBamSchemaRefByPrevIdxKey& rhs );
		bool operator <( const CFBamSchemaRefByNextIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamSchemaRefHBuff& rhs );
		bool operator <( const CFBamSchemaRefBuff& rhs );

		bool operator <=( const CFBamSchemaRefBySchemaIdxKey& rhs );
		bool operator <=( const CFBamSchemaRefByUNameIdxKey& rhs );
		bool operator <=( const CFBamSchemaRefByRefSchemaIdxKey& rhs );
		bool operator <=( const CFBamSchemaRefByPrevIdxKey& rhs );
		bool operator <=( const CFBamSchemaRefByNextIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamSchemaRefHBuff& rhs );
		bool operator <=( const CFBamSchemaRefBuff& rhs );

		bool operator ==( const CFBamSchemaRefBySchemaIdxKey& rhs );
		bool operator ==( const CFBamSchemaRefByUNameIdxKey& rhs );
		bool operator ==( const CFBamSchemaRefByRefSchemaIdxKey& rhs );
		bool operator ==( const CFBamSchemaRefByPrevIdxKey& rhs );
		bool operator ==( const CFBamSchemaRefByNextIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamSchemaRefHBuff& rhs );
		bool operator ==( const CFBamSchemaRefBuff& rhs );

		bool operator !=( const CFBamSchemaRefBySchemaIdxKey& rhs );
		bool operator !=( const CFBamSchemaRefByUNameIdxKey& rhs );
		bool operator !=( const CFBamSchemaRefByRefSchemaIdxKey& rhs );
		bool operator !=( const CFBamSchemaRefByPrevIdxKey& rhs );
		bool operator !=( const CFBamSchemaRefByNextIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamSchemaRefHBuff& rhs );
		bool operator !=( const CFBamSchemaRefBuff& rhs );

		bool operator >=( const CFBamSchemaRefBySchemaIdxKey& rhs );
		bool operator >=( const CFBamSchemaRefByUNameIdxKey& rhs );
		bool operator >=( const CFBamSchemaRefByRefSchemaIdxKey& rhs );
		bool operator >=( const CFBamSchemaRefByPrevIdxKey& rhs );
		bool operator >=( const CFBamSchemaRefByNextIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamSchemaRefHBuff& rhs );
		bool operator >=( const CFBamSchemaRefBuff& rhs );

		bool operator >( const CFBamSchemaRefBySchemaIdxKey& rhs );
		bool operator >( const CFBamSchemaRefByUNameIdxKey& rhs );
		bool operator >( const CFBamSchemaRefByRefSchemaIdxKey& rhs );
		bool operator >( const CFBamSchemaRefByPrevIdxKey& rhs );
		bool operator >( const CFBamSchemaRefByNextIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamSchemaRefHBuff& rhs );
		bool operator >( const CFBamSchemaRefBuff& rhs );
		cfbam::CFBamSchemaRefHBuff operator =( cfbam::CFBamSchemaRefBuff& src );
		cfbam::CFBamSchemaRefHBuff operator =( cfbam::CFBamSchemaRefHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs );
	bool operator <(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs );

	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs );

	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs );

	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs );

	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs );

	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBySchemaIdxKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByRefSchemaIdxKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByPrevIdxKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefByNextIdxKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefHBuff& rhs );
	bool operator >(const  cfbam::CFBamSchemaRefHBuff& lhs, const cfbam::CFBamSchemaRefBuff& rhs );

	template<> struct hash<cfbam::CFBamSchemaRefHBuff> {
		typedef cfbam::CFBamSchemaRefHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

