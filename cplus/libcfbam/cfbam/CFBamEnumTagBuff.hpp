#pragma once

// Description: C++18 specification for a EnumTag buffer object.

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

#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamEnumTagPKey;
	class CFBamEnumTagHPKey;
	class CFBamEnumTagHBuff;
	class CFBamEnumTagByEnumTagTenantIdxKey;
	class CFBamEnumTagByEnumIdxKey;
	class CFBamEnumTagByDefSchemaIdxKey;
	class CFBamEnumTagByEnumNameIdxKey;
	class CFBamEnumTagByPrevIdxKey;
	class CFBamEnumTagByNextIdxKey;

	class CFBamEnumTagBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TENANTID;
		static const std::string COLNAME_ID;
		static const std::string COLNAME_DEFSCHEMATENANTID;
		static const std::string COLNAME_DEFSCHEMAID;
		static const std::string COLNAME_ENUMID;
		static const std::string COLNAME_ENUMCODE;
		static const std::string COLNAME_NAME;
		static const std::string COLNAME_PREVTENANTID;
		static const std::string COLNAME_PREVID;
		static const std::string COLNAME_NEXTTENANTID;
		static const std::string COLNAME_NEXTID;
		static const char* S_INIT_CREATEDBY;
		static const char* S_INIT_UPDATEDBY;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t DEFSCHEMATENANTID_INIT_VALUE;
		static const int64_t DEFSCHEMAID_INIT_VALUE;
		static const int64_t ENUMID_INIT_VALUE;
		static const int16_t ENUMCODE_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const int64_t PREVTENANTID_INIT_VALUE;
		static const int64_t PREVID_INIT_VALUE;
		static const int64_t NEXTTENANTID_INIT_VALUE;
		static const int64_t NEXTID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t DEFSCHEMATENANTID_MIN_VALUE;
		static const int64_t DEFSCHEMAID_MIN_VALUE;
		static const int64_t ENUMID_MIN_VALUE;
		static const int16_t ENUMCODE_MIN_VALUE;
		static const int64_t PREVTENANTID_MIN_VALUE;
		static const int64_t PREVID_MIN_VALUE;
		static const int64_t NEXTTENANTID_MIN_VALUE;
		static const int64_t NEXTID_MIN_VALUE;
		static const int16_t ENUMCODE_MAX_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
	protected:
		uuid_t createdByUserId;
		std::chrono::system_clock::time_point createdAt;
		uuid_t updatedByUserId;
		std::chrono::system_clock::time_point updatedAt;
		int64_t requiredTenantId;
		int64_t requiredId;
		cflib::CFLibNullableInt64 optionalDefSchemaTenantId;
		cflib::CFLibNullableInt64 optionalDefSchemaId;
		int64_t requiredEnumId;
		cflib::CFLibNullableInt16 optionalEnumCode;
		std::string* requiredName;
		cflib::CFLibNullableInt64 optionalPrevTenantId;
		cflib::CFLibNullableInt64 optionalPrevId;
		cflib::CFLibNullableInt64 optionalNextTenantId;
		cflib::CFLibNullableInt64 optionalNextId;
		int32_t requiredRevision;
	public:
		CFBamEnumTagBuff();

		CFBamEnumTagBuff( const CFBamEnumTagBuff& src );

		virtual ~CFBamEnumTagBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const uuid_ptr_t getCreatedByUserId() const;
		virtual void setCreatedByUserId( const uuid_ptr_t value );
		virtual const std::chrono::system_clock::time_point& getCreatedAt() const;
		virtual void setCreatedAt( const std::chrono::system_clock::time_point& value );
		virtual const uuid_ptr_t getUpdatedByUserId() const;
		virtual void setUpdatedByUserId( const uuid_ptr_t value );
		virtual const std::chrono::system_clock::time_point& getUpdatedAt() const;
		virtual void setUpdatedAt( const std::chrono::system_clock::time_point& value );
		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredId() const;
		virtual const int64_t* getRequiredIdReference() const;
		virtual void setRequiredId( const int64_t value );

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

		virtual const int64_t getRequiredEnumId() const;
		virtual const int64_t* getRequiredEnumIdReference() const;
		virtual void setRequiredEnumId( const int64_t value );

		virtual const int16_t getOptionalEnumCodeValue() const;
		virtual const int16_t* getOptionalEnumCodeReference() const;
		virtual const bool isOptionalEnumCodeNull() const;
		virtual void setOptionalEnumCodeNull();
		virtual void setOptionalEnumCodeValue( const int16_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

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

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamEnumTagByEnumTagTenantIdxKey& rhs );
		bool operator <( const CFBamEnumTagByEnumIdxKey& rhs );
		bool operator <( const CFBamEnumTagByDefSchemaIdxKey& rhs );
		bool operator <( const CFBamEnumTagByEnumNameIdxKey& rhs );
		bool operator <( const CFBamEnumTagByPrevIdxKey& rhs );
		bool operator <( const CFBamEnumTagByNextIdxKey& rhs );
		bool operator <( const CFBamEnumTagPKey& rhs );
		bool operator <( const CFBamEnumTagHPKey& rhs );
		bool operator <( const CFBamEnumTagHBuff& rhs );
		bool operator <( const CFBamEnumTagBuff& rhs );

		bool operator <=( const CFBamEnumTagByEnumTagTenantIdxKey& rhs );
		bool operator <=( const CFBamEnumTagByEnumIdxKey& rhs );
		bool operator <=( const CFBamEnumTagByDefSchemaIdxKey& rhs );
		bool operator <=( const CFBamEnumTagByEnumNameIdxKey& rhs );
		bool operator <=( const CFBamEnumTagByPrevIdxKey& rhs );
		bool operator <=( const CFBamEnumTagByNextIdxKey& rhs );
		bool operator <=( const CFBamEnumTagPKey& rhs );
		bool operator <=( const CFBamEnumTagHPKey& rhs );
		bool operator <=( const CFBamEnumTagHBuff& rhs );
		bool operator <=( const CFBamEnumTagBuff& rhs );

		bool operator ==( const CFBamEnumTagByEnumTagTenantIdxKey& rhs );
		bool operator ==( const CFBamEnumTagByEnumIdxKey& rhs );
		bool operator ==( const CFBamEnumTagByDefSchemaIdxKey& rhs );
		bool operator ==( const CFBamEnumTagByEnumNameIdxKey& rhs );
		bool operator ==( const CFBamEnumTagByPrevIdxKey& rhs );
		bool operator ==( const CFBamEnumTagByNextIdxKey& rhs );
		bool operator ==( const CFBamEnumTagPKey& rhs );
		bool operator ==( const CFBamEnumTagHPKey& rhs );
		bool operator ==( const CFBamEnumTagHBuff& rhs );
		bool operator ==( const CFBamEnumTagBuff& rhs );

		bool operator !=( const CFBamEnumTagByEnumTagTenantIdxKey& rhs );
		bool operator !=( const CFBamEnumTagByEnumIdxKey& rhs );
		bool operator !=( const CFBamEnumTagByDefSchemaIdxKey& rhs );
		bool operator !=( const CFBamEnumTagByEnumNameIdxKey& rhs );
		bool operator !=( const CFBamEnumTagByPrevIdxKey& rhs );
		bool operator !=( const CFBamEnumTagByNextIdxKey& rhs );
		bool operator !=( const CFBamEnumTagPKey& rhs );
		bool operator !=( const CFBamEnumTagHPKey& rhs );
		bool operator !=( const CFBamEnumTagHBuff& rhs );
		bool operator !=( const CFBamEnumTagBuff& rhs );

		bool operator >=( const CFBamEnumTagByEnumTagTenantIdxKey& rhs );
		bool operator >=( const CFBamEnumTagByEnumIdxKey& rhs );
		bool operator >=( const CFBamEnumTagByDefSchemaIdxKey& rhs );
		bool operator >=( const CFBamEnumTagByEnumNameIdxKey& rhs );
		bool operator >=( const CFBamEnumTagByPrevIdxKey& rhs );
		bool operator >=( const CFBamEnumTagByNextIdxKey& rhs );
		bool operator >=( const CFBamEnumTagPKey& rhs );
		bool operator >=( const CFBamEnumTagHPKey& rhs );
		bool operator >=( const CFBamEnumTagHBuff& rhs );
		bool operator >=( const CFBamEnumTagBuff& rhs );

		bool operator >( const CFBamEnumTagByEnumTagTenantIdxKey& rhs );
		bool operator >( const CFBamEnumTagByEnumIdxKey& rhs );
		bool operator >( const CFBamEnumTagByDefSchemaIdxKey& rhs );
		bool operator >( const CFBamEnumTagByEnumNameIdxKey& rhs );
		bool operator >( const CFBamEnumTagByPrevIdxKey& rhs );
		bool operator >( const CFBamEnumTagByNextIdxKey& rhs );
		bool operator >( const CFBamEnumTagPKey& rhs );
		bool operator >( const CFBamEnumTagHPKey& rhs );
		bool operator >( const CFBamEnumTagHBuff& rhs );
		bool operator >( const CFBamEnumTagBuff& rhs );
		cfbam::CFBamEnumTagBuff operator =( cfbam::CFBamEnumTagBuff& src );
		cfbam::CFBamEnumTagBuff operator =( cfbam::CFBamEnumTagHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumTagTenantIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByNextIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagPKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagHPKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagHBuff& rhs );
	bool operator <(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagBuff& rhs );

	bool operator <=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumTagTenantIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByNextIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagPKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagHPKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagHBuff& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagBuff& rhs );

	bool operator ==(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumTagTenantIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByNextIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagPKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagHPKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagHBuff& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagBuff& rhs );

	bool operator !=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumTagTenantIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByNextIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagPKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagHPKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagHBuff& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagBuff& rhs );

	bool operator >=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumTagTenantIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByNextIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagPKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagHPKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagHBuff& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagBuff& rhs );

	bool operator >(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumTagTenantIdxKey& rhs );

	bool operator >(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs );

	bool operator >(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByDefSchemaIdxKey& rhs );

	bool operator >(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByEnumNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByPrevIdxKey& rhs );

	bool operator >(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagByNextIdxKey& rhs );

	bool operator >(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagPKey& rhs );
	bool operator >(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagHPKey& rhs );
	bool operator >(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagHBuff& rhs );
	bool operator >(const  cfbam::CFBamEnumTagBuff& lhs, const cfbam::CFBamEnumTagBuff& rhs );

	template<> struct hash<cfbam::CFBamEnumTagBuff> {
		typedef cfbam::CFBamEnumTagBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

