#pragma once

// Description: C++18 specification for a Chain buffer object.

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

	class CFBamChainPKey;
	class CFBamChainHPKey;
	class CFBamChainHBuff;
	class CFBamChainByTenantIdxKey;
	class CFBamChainByChainTableIdxKey;
	class CFBamChainByDefSchemaIdxKey;
	class CFBamChainByUNameIdxKey;
	class CFBamChainByPrevRelIdxKey;
	class CFBamChainByNextRelIdxKey;

	class CFBamChainBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TENANTID;
		static const std::string COLNAME_ID;
		static const std::string COLNAME_DEFSCHEMATENANTID;
		static const std::string COLNAME_DEFSCHEMAID;
		static const std::string COLNAME_NAME;
		static const std::string COLNAME_SHORTNAME;
		static const std::string COLNAME_LABEL;
		static const std::string COLNAME_SHORTDESCRIPTION;
		static const std::string COLNAME_DESCRIPTION;
		static const std::string COLNAME_TABLEID;
		static const std::string COLNAME_SUFFIX;
		static const std::string COLNAME_PREVRELATIONTENANTID;
		static const std::string COLNAME_PREVRELATIONID;
		static const std::string COLNAME_NEXTRELATIONTENANTID;
		static const std::string COLNAME_NEXTRELATIONID;
		static const char* S_INIT_CREATEDBY;
		static const char* S_INIT_UPDATEDBY;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t DEFSCHEMATENANTID_INIT_VALUE;
		static const int64_t DEFSCHEMAID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const int64_t TABLEID_INIT_VALUE;
		static const int64_t PREVRELATIONTENANTID_INIT_VALUE;
		static const int64_t PREVRELATIONID_INIT_VALUE;
		static const int64_t NEXTRELATIONTENANTID_INIT_VALUE;
		static const int64_t NEXTRELATIONID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t DEFSCHEMATENANTID_MIN_VALUE;
		static const int64_t DEFSCHEMAID_MIN_VALUE;
		static const int64_t TABLEID_MIN_VALUE;
		static const int64_t PREVRELATIONTENANTID_MIN_VALUE;
		static const int64_t PREVRELATIONID_MIN_VALUE;
		static const int64_t NEXTRELATIONTENANTID_MIN_VALUE;
		static const int64_t NEXTRELATIONID_MIN_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
		static const std::string::size_type SHORTNAME_MAX_LEN;
		static const std::string::size_type LABEL_MAX_LEN;
		static const std::string::size_type SHORTDESCRIPTION_MAX_LEN;
		static const std::string::size_type DESCRIPTION_MAX_LEN;
		static const std::string::size_type SUFFIX_MAX_LEN;
	protected:
		uuid_t createdByUserId;
		std::chrono::system_clock::time_point createdAt;
		uuid_t updatedByUserId;
		std::chrono::system_clock::time_point updatedAt;
		int64_t requiredTenantId;
		int64_t requiredId;
		cflib::CFLibNullableInt64 optionalDefSchemaTenantId;
		cflib::CFLibNullableInt64 optionalDefSchemaId;
		std::string* requiredName;
		std::string* optionalShortName;
		std::string* optionalLabel;
		std::string* optionalShortDescription;
		std::string* optionalDescription;
		int64_t requiredTableId;
		std::string* optionalSuffix;
		int64_t requiredPrevRelationTenantId;
		int64_t requiredPrevRelationId;
		int64_t requiredNextRelationTenantId;
		int64_t requiredNextRelationId;
		int32_t requiredRevision;
	public:
		CFBamChainBuff();

		CFBamChainBuff( const CFBamChainBuff& src );

		virtual ~CFBamChainBuff();

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

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual const std::string& getOptionalShortNameValue() const;
		virtual const std::string* getOptionalShortNameReference() const;
		virtual const bool isOptionalShortNameNull() const;
		virtual void setOptionalShortNameNull();
		virtual void setOptionalShortNameValue( const std::string& value );

		virtual const std::string& getOptionalLabelValue() const;
		virtual const std::string* getOptionalLabelReference() const;
		virtual const bool isOptionalLabelNull() const;
		virtual void setOptionalLabelNull();
		virtual void setOptionalLabelValue( const std::string& value );

		virtual const std::string& getOptionalShortDescriptionValue() const;
		virtual const std::string* getOptionalShortDescriptionReference() const;
		virtual const bool isOptionalShortDescriptionNull() const;
		virtual void setOptionalShortDescriptionNull();
		virtual void setOptionalShortDescriptionValue( const std::string& value );

		virtual const std::string& getOptionalDescriptionValue() const;
		virtual const std::string* getOptionalDescriptionReference() const;
		virtual const bool isOptionalDescriptionNull() const;
		virtual void setOptionalDescriptionNull();
		virtual void setOptionalDescriptionValue( const std::string& value );

		virtual const int64_t getRequiredTableId() const;
		virtual const int64_t* getRequiredTableIdReference() const;
		virtual void setRequiredTableId( const int64_t value );

		virtual const std::string& getOptionalSuffixValue() const;
		virtual const std::string* getOptionalSuffixReference() const;
		virtual const bool isOptionalSuffixNull() const;
		virtual void setOptionalSuffixNull();
		virtual void setOptionalSuffixValue( const std::string& value );

		virtual const int64_t getRequiredPrevRelationTenantId() const;
		virtual const int64_t* getRequiredPrevRelationTenantIdReference() const;
		virtual void setRequiredPrevRelationTenantId( const int64_t value );

		virtual const int64_t getRequiredPrevRelationId() const;
		virtual const int64_t* getRequiredPrevRelationIdReference() const;
		virtual void setRequiredPrevRelationId( const int64_t value );

		virtual const int64_t getRequiredNextRelationTenantId() const;
		virtual const int64_t* getRequiredNextRelationTenantIdReference() const;
		virtual void setRequiredNextRelationTenantId( const int64_t value );

		virtual const int64_t getRequiredNextRelationId() const;
		virtual const int64_t* getRequiredNextRelationIdReference() const;
		virtual void setRequiredNextRelationId( const int64_t value );

		virtual int32_t getRequiredRevision() const;
		virtual void setRequiredRevision( int32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamChainByTenantIdxKey& rhs );
		bool operator <( const CFBamChainByChainTableIdxKey& rhs );
		bool operator <( const CFBamChainByDefSchemaIdxKey& rhs );
		bool operator <( const CFBamChainByUNameIdxKey& rhs );
		bool operator <( const CFBamChainByPrevRelIdxKey& rhs );
		bool operator <( const CFBamChainByNextRelIdxKey& rhs );
		bool operator <( const CFBamChainPKey& rhs );
		bool operator <( const CFBamChainHPKey& rhs );
		bool operator <( const CFBamChainHBuff& rhs );
		bool operator <( const CFBamChainBuff& rhs );

		bool operator <=( const CFBamChainByTenantIdxKey& rhs );
		bool operator <=( const CFBamChainByChainTableIdxKey& rhs );
		bool operator <=( const CFBamChainByDefSchemaIdxKey& rhs );
		bool operator <=( const CFBamChainByUNameIdxKey& rhs );
		bool operator <=( const CFBamChainByPrevRelIdxKey& rhs );
		bool operator <=( const CFBamChainByNextRelIdxKey& rhs );
		bool operator <=( const CFBamChainPKey& rhs );
		bool operator <=( const CFBamChainHPKey& rhs );
		bool operator <=( const CFBamChainHBuff& rhs );
		bool operator <=( const CFBamChainBuff& rhs );

		bool operator ==( const CFBamChainByTenantIdxKey& rhs );
		bool operator ==( const CFBamChainByChainTableIdxKey& rhs );
		bool operator ==( const CFBamChainByDefSchemaIdxKey& rhs );
		bool operator ==( const CFBamChainByUNameIdxKey& rhs );
		bool operator ==( const CFBamChainByPrevRelIdxKey& rhs );
		bool operator ==( const CFBamChainByNextRelIdxKey& rhs );
		bool operator ==( const CFBamChainPKey& rhs );
		bool operator ==( const CFBamChainHPKey& rhs );
		bool operator ==( const CFBamChainHBuff& rhs );
		bool operator ==( const CFBamChainBuff& rhs );

		bool operator !=( const CFBamChainByTenantIdxKey& rhs );
		bool operator !=( const CFBamChainByChainTableIdxKey& rhs );
		bool operator !=( const CFBamChainByDefSchemaIdxKey& rhs );
		bool operator !=( const CFBamChainByUNameIdxKey& rhs );
		bool operator !=( const CFBamChainByPrevRelIdxKey& rhs );
		bool operator !=( const CFBamChainByNextRelIdxKey& rhs );
		bool operator !=( const CFBamChainPKey& rhs );
		bool operator !=( const CFBamChainHPKey& rhs );
		bool operator !=( const CFBamChainHBuff& rhs );
		bool operator !=( const CFBamChainBuff& rhs );

		bool operator >=( const CFBamChainByTenantIdxKey& rhs );
		bool operator >=( const CFBamChainByChainTableIdxKey& rhs );
		bool operator >=( const CFBamChainByDefSchemaIdxKey& rhs );
		bool operator >=( const CFBamChainByUNameIdxKey& rhs );
		bool operator >=( const CFBamChainByPrevRelIdxKey& rhs );
		bool operator >=( const CFBamChainByNextRelIdxKey& rhs );
		bool operator >=( const CFBamChainPKey& rhs );
		bool operator >=( const CFBamChainHPKey& rhs );
		bool operator >=( const CFBamChainHBuff& rhs );
		bool operator >=( const CFBamChainBuff& rhs );

		bool operator >( const CFBamChainByTenantIdxKey& rhs );
		bool operator >( const CFBamChainByChainTableIdxKey& rhs );
		bool operator >( const CFBamChainByDefSchemaIdxKey& rhs );
		bool operator >( const CFBamChainByUNameIdxKey& rhs );
		bool operator >( const CFBamChainByPrevRelIdxKey& rhs );
		bool operator >( const CFBamChainByNextRelIdxKey& rhs );
		bool operator >( const CFBamChainPKey& rhs );
		bool operator >( const CFBamChainHPKey& rhs );
		bool operator >( const CFBamChainHBuff& rhs );
		bool operator >( const CFBamChainBuff& rhs );
		cfbam::CFBamChainBuff operator =( cfbam::CFBamChainBuff& src );
		cfbam::CFBamChainBuff operator =( cfbam::CFBamChainHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByTenantIdxKey& rhs );
	bool operator <(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByChainTableIdxKey& rhs );
	bool operator <(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs );
	bool operator <(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs );
	bool operator <(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainPKey& rhs );
	bool operator <(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainHPKey& rhs );
	bool operator <(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainHBuff& rhs );
	bool operator <(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainBuff& rhs );

	bool operator <=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByTenantIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByChainTableIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainPKey& rhs );
	bool operator <=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainHPKey& rhs );
	bool operator <=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainHBuff& rhs );
	bool operator <=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainBuff& rhs );

	bool operator ==(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByTenantIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByChainTableIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainPKey& rhs );
	bool operator ==(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainHPKey& rhs );
	bool operator ==(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainHBuff& rhs );
	bool operator ==(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainBuff& rhs );

	bool operator !=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByTenantIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByChainTableIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainPKey& rhs );
	bool operator !=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainHPKey& rhs );
	bool operator !=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainHBuff& rhs );
	bool operator !=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainBuff& rhs );

	bool operator >=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByTenantIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByChainTableIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainPKey& rhs );
	bool operator >=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainHPKey& rhs );
	bool operator >=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainHBuff& rhs );
	bool operator >=(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainBuff& rhs );

	bool operator >(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByTenantIdxKey& rhs );

	bool operator >(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByChainTableIdxKey& rhs );

	bool operator >(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByDefSchemaIdxKey& rhs );

	bool operator >(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByUNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByPrevRelIdxKey& rhs );

	bool operator >(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs );

	bool operator >(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainPKey& rhs );
	bool operator >(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainHPKey& rhs );
	bool operator >(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainHBuff& rhs );
	bool operator >(const  cfbam::CFBamChainBuff& lhs, const cfbam::CFBamChainBuff& rhs );

	template<> struct hash<cfbam::CFBamChainBuff> {
		typedef cfbam::CFBamChainBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

