#pragma once

// Description: C++18 specification for a ClearDep buffer object.

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

#include <cfbam/CFBamScopeBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamClearDepHBuff;
	class CFBamClearDepByClearDepIdxKey;
	class CFBamClearDepByDefSchemaIdxKey;

	class CFBamClearDepBuff : public CFBamScopeBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_RELATIONID;
		static const std::string COLNAME_DEFSCHEMATENANTID;
		static const std::string COLNAME_DEFSCHEMAID;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t RELATIONID_INIT_VALUE;
		static const int64_t DEFSCHEMATENANTID_INIT_VALUE;
		static const int64_t DEFSCHEMAID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t RELATIONID_MIN_VALUE;
		static const int64_t DEFSCHEMATENANTID_MIN_VALUE;
		static const int64_t DEFSCHEMAID_MIN_VALUE;
	protected:
		int64_t requiredRelationId;
		cflib::CFLibNullableInt64 optionalDefSchemaTenantId;
		cflib::CFLibNullableInt64 optionalDefSchemaId;
	public:
		CFBamClearDepBuff();
		CFBamClearDepBuff( const CFBamClearDepBuff& src );
		virtual ~CFBamClearDepBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredRelationId() const;
		virtual const int64_t* getRequiredRelationIdReference() const;
		virtual void setRequiredRelationId( const int64_t value );

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

		virtual size_t hashCode() const;

		bool operator <( const CFBamClearDepByClearDepIdxKey& rhs );
		bool operator <( const CFBamClearDepByDefSchemaIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamClearDepHBuff& rhs );
		bool operator <( const CFBamClearDepBuff& rhs );

		bool operator <=( const CFBamClearDepByClearDepIdxKey& rhs );
		bool operator <=( const CFBamClearDepByDefSchemaIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamClearDepHBuff& rhs );
		bool operator <=( const CFBamClearDepBuff& rhs );

		bool operator ==( const CFBamClearDepByClearDepIdxKey& rhs );
		bool operator ==( const CFBamClearDepByDefSchemaIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamClearDepHBuff& rhs );
		bool operator ==( const CFBamClearDepBuff& rhs );

		bool operator !=( const CFBamClearDepByClearDepIdxKey& rhs );
		bool operator !=( const CFBamClearDepByDefSchemaIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamClearDepHBuff& rhs );
		bool operator !=( const CFBamClearDepBuff& rhs );

		bool operator >=( const CFBamClearDepByClearDepIdxKey& rhs );
		bool operator >=( const CFBamClearDepByDefSchemaIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamClearDepHBuff& rhs );
		bool operator >=( const CFBamClearDepBuff& rhs );

		bool operator >( const CFBamClearDepByClearDepIdxKey& rhs );
		bool operator >( const CFBamClearDepByDefSchemaIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamClearDepHBuff& rhs );
		bool operator >( const CFBamClearDepBuff& rhs );
		cfbam::CFBamClearDepBuff operator =( cfbam::CFBamClearDepBuff& src );
		cfbam::CFBamClearDepBuff operator =( cfbam::CFBamClearDepHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepByClearDepIdxKey& rhs );
	bool operator <(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepHBuff& rhs );
	bool operator <(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepBuff& rhs );

	bool operator <=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepByClearDepIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepHBuff& rhs );
	bool operator <=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepBuff& rhs );

	bool operator ==(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepByClearDepIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepHBuff& rhs );
	bool operator ==(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepBuff& rhs );

	bool operator !=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepByClearDepIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepHBuff& rhs );
	bool operator !=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepBuff& rhs );

	bool operator >=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepByClearDepIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepHBuff& rhs );
	bool operator >=(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepBuff& rhs );

	bool operator >(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepByClearDepIdxKey& rhs );

	bool operator >(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepByDefSchemaIdxKey& rhs );

	bool operator >(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepHBuff& rhs );
	bool operator >(const  cfbam::CFBamClearDepBuff& lhs, const cfbam::CFBamClearDepBuff& rhs );

	template<> struct hash<cfbam::CFBamClearDepBuff> {
		typedef cfbam::CFBamClearDepBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

