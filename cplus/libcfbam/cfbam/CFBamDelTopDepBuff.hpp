#pragma once

// Description: C++18 specification for a DelTopDep buffer object.

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
	class CFBamDelTopDepHBuff;
	class CFBamDelTopDepByDelTopDepTblIdxKey;
	class CFBamDelTopDepByUNameIdxKey;
	class CFBamDelTopDepByPrevIdxKey;
	class CFBamDelTopDepByNextIdxKey;

	class CFBamDelTopDepBuff : public CFBamDelDepBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_NAME;
		static const std::string COLNAME_TABLETENANTID;
		static const std::string COLNAME_TABLEID;
		static const std::string COLNAME_PREVTENANTID;
		static const std::string COLNAME_PREVID;
		static const std::string COLNAME_NEXTTENANTID;
		static const std::string COLNAME_NEXTID;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const int64_t TABLETENANTID_INIT_VALUE;
		static const int64_t TABLEID_INIT_VALUE;
		static const int64_t PREVTENANTID_INIT_VALUE;
		static const int64_t PREVID_INIT_VALUE;
		static const int64_t NEXTTENANTID_INIT_VALUE;
		static const int64_t NEXTID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t TABLETENANTID_MIN_VALUE;
		static const int64_t TABLEID_MIN_VALUE;
		static const int64_t PREVTENANTID_MIN_VALUE;
		static const int64_t PREVID_MIN_VALUE;
		static const int64_t NEXTTENANTID_MIN_VALUE;
		static const int64_t NEXTID_MIN_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
	protected:
		std::string* requiredName;
		int64_t requiredTableTenantId;
		int64_t requiredTableId;
		cflib::CFLibNullableInt64 optionalPrevTenantId;
		cflib::CFLibNullableInt64 optionalPrevId;
		cflib::CFLibNullableInt64 optionalNextTenantId;
		cflib::CFLibNullableInt64 optionalNextId;
	public:
		CFBamDelTopDepBuff();
		CFBamDelTopDepBuff( const CFBamDelTopDepBuff& src );
		virtual ~CFBamDelTopDepBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual const int64_t getRequiredTableTenantId() const;
		virtual const int64_t* getRequiredTableTenantIdReference() const;
		virtual void setRequiredTableTenantId( const int64_t value );

		virtual const int64_t getRequiredTableId() const;
		virtual const int64_t* getRequiredTableIdReference() const;
		virtual void setRequiredTableId( const int64_t value );

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

		bool operator <( const CFBamDelTopDepByDelTopDepTblIdxKey& rhs );
		bool operator <( const CFBamDelTopDepByUNameIdxKey& rhs );
		bool operator <( const CFBamDelTopDepByPrevIdxKey& rhs );
		bool operator <( const CFBamDelTopDepByNextIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamDelTopDepHBuff& rhs );
		bool operator <( const CFBamDelTopDepBuff& rhs );

		bool operator <=( const CFBamDelTopDepByDelTopDepTblIdxKey& rhs );
		bool operator <=( const CFBamDelTopDepByUNameIdxKey& rhs );
		bool operator <=( const CFBamDelTopDepByPrevIdxKey& rhs );
		bool operator <=( const CFBamDelTopDepByNextIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamDelTopDepHBuff& rhs );
		bool operator <=( const CFBamDelTopDepBuff& rhs );

		bool operator ==( const CFBamDelTopDepByDelTopDepTblIdxKey& rhs );
		bool operator ==( const CFBamDelTopDepByUNameIdxKey& rhs );
		bool operator ==( const CFBamDelTopDepByPrevIdxKey& rhs );
		bool operator ==( const CFBamDelTopDepByNextIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamDelTopDepHBuff& rhs );
		bool operator ==( const CFBamDelTopDepBuff& rhs );

		bool operator !=( const CFBamDelTopDepByDelTopDepTblIdxKey& rhs );
		bool operator !=( const CFBamDelTopDepByUNameIdxKey& rhs );
		bool operator !=( const CFBamDelTopDepByPrevIdxKey& rhs );
		bool operator !=( const CFBamDelTopDepByNextIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamDelTopDepHBuff& rhs );
		bool operator !=( const CFBamDelTopDepBuff& rhs );

		bool operator >=( const CFBamDelTopDepByDelTopDepTblIdxKey& rhs );
		bool operator >=( const CFBamDelTopDepByUNameIdxKey& rhs );
		bool operator >=( const CFBamDelTopDepByPrevIdxKey& rhs );
		bool operator >=( const CFBamDelTopDepByNextIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamDelTopDepHBuff& rhs );
		bool operator >=( const CFBamDelTopDepBuff& rhs );

		bool operator >( const CFBamDelTopDepByDelTopDepTblIdxKey& rhs );
		bool operator >( const CFBamDelTopDepByUNameIdxKey& rhs );
		bool operator >( const CFBamDelTopDepByPrevIdxKey& rhs );
		bool operator >( const CFBamDelTopDepByNextIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamDelTopDepHBuff& rhs );
		bool operator >( const CFBamDelTopDepBuff& rhs );
		cfbam::CFBamDelTopDepBuff operator =( cfbam::CFBamDelTopDepBuff& src );
		cfbam::CFBamDelTopDepBuff operator =( cfbam::CFBamDelTopDepHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByNextIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepHBuff& rhs );
	bool operator <(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepBuff& rhs );

	bool operator <=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByNextIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepHBuff& rhs );
	bool operator <=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepBuff& rhs );

	bool operator ==(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByNextIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepHBuff& rhs );
	bool operator ==(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepBuff& rhs );

	bool operator !=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByNextIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepHBuff& rhs );
	bool operator !=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepBuff& rhs );

	bool operator >=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByNextIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepHBuff& rhs );
	bool operator >=(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepBuff& rhs );

	bool operator >(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey& rhs );

	bool operator >(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByUNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByPrevIdxKey& rhs );

	bool operator >(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepByNextIdxKey& rhs );

	bool operator >(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepHBuff& rhs );
	bool operator >(const  cfbam::CFBamDelTopDepBuff& lhs, const cfbam::CFBamDelTopDepBuff& rhs );

	template<> struct hash<cfbam::CFBamDelTopDepBuff> {
		typedef cfbam::CFBamDelTopDepBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

