#pragma once

// Description: C++18 specification for a IndexCol buffer object.

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

	class CFBamIndexColPKey;
	class CFBamIndexColHPKey;
	class CFBamIndexColHBuff;
	class CFBamIndexColByUNameIdxKey;
	class CFBamIndexColByIdxColTenantIdxKey;
	class CFBamIndexColByIndexIdxKey;
	class CFBamIndexColByDefSchemaIdxKey;
	class CFBamIndexColByColIdxKey;
	class CFBamIndexColByPrevIdxKey;
	class CFBamIndexColByNextIdxKey;
	class CFBamIndexColByIdxPrevIdxKey;
	class CFBamIndexColByIdxNextIdxKey;

	class CFBamIndexColBuff : public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TENANTID;
		static const std::string COLNAME_INDEXID;
		static const std::string COLNAME_ID;
		static const std::string COLNAME_DEFSCHEMATENANTID;
		static const std::string COLNAME_DEFSCHEMAID;
		static const std::string COLNAME_NAME;
		static const std::string COLNAME_SHORTNAME;
		static const std::string COLNAME_LABEL;
		static const std::string COLNAME_SHORTDESCRIPTION;
		static const std::string COLNAME_DESCRIPTION;
		static const std::string COLNAME_COLUMNID;
		static const std::string COLNAME_ISASCENDING;
		static const std::string COLNAME_PREVTENANTID;
		static const std::string COLNAME_PREVID;
		static const std::string COLNAME_NEXTTENANTID;
		static const std::string COLNAME_NEXTID;
		static const char* S_INIT_CREATEDBY;
		static const char* S_INIT_UPDATEDBY;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t INDEXID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t DEFSCHEMATENANTID_INIT_VALUE;
		static const int64_t DEFSCHEMAID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const int64_t COLUMNID_INIT_VALUE;
		static const bool ISASCENDING_INIT_VALUE;
		static const int64_t PREVTENANTID_INIT_VALUE;
		static const int64_t PREVID_INIT_VALUE;
		static const int64_t NEXTTENANTID_INIT_VALUE;
		static const int64_t NEXTID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t INDEXID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t DEFSCHEMATENANTID_MIN_VALUE;
		static const int64_t DEFSCHEMAID_MIN_VALUE;
		static const int64_t COLUMNID_MIN_VALUE;
		static const int64_t PREVTENANTID_MIN_VALUE;
		static const int64_t PREVID_MIN_VALUE;
		static const int64_t NEXTTENANTID_MIN_VALUE;
		static const int64_t NEXTID_MIN_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
		static const std::string::size_type SHORTNAME_MAX_LEN;
		static const std::string::size_type LABEL_MAX_LEN;
		static const std::string::size_type SHORTDESCRIPTION_MAX_LEN;
		static const std::string::size_type DESCRIPTION_MAX_LEN;
	protected:
		uuid_t createdByUserId;
		std::chrono::system_clock::time_point createdAt;
		uuid_t updatedByUserId;
		std::chrono::system_clock::time_point updatedAt;
		int64_t requiredTenantId;
		int64_t requiredIndexId;
		int64_t requiredId;
		cflib::CFLibNullableInt64 optionalDefSchemaTenantId;
		cflib::CFLibNullableInt64 optionalDefSchemaId;
		std::string* requiredName;
		std::string* optionalShortName;
		std::string* optionalLabel;
		std::string* optionalShortDescription;
		std::string* optionalDescription;
		int64_t requiredColumnId;
		bool requiredIsAscending;
		cflib::CFLibNullableInt64 optionalPrevTenantId;
		cflib::CFLibNullableInt64 optionalPrevId;
		cflib::CFLibNullableInt64 optionalNextTenantId;
		cflib::CFLibNullableInt64 optionalNextId;
		int32_t requiredRevision;
	public:
		CFBamIndexColBuff();

		CFBamIndexColBuff( const CFBamIndexColBuff& src );

		virtual ~CFBamIndexColBuff();

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

		virtual const int64_t getRequiredIndexId() const;
		virtual const int64_t* getRequiredIndexIdReference() const;
		virtual void setRequiredIndexId( const int64_t value );

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

		virtual const int64_t getRequiredColumnId() const;
		virtual const int64_t* getRequiredColumnIdReference() const;
		virtual void setRequiredColumnId( const int64_t value );

		virtual const bool getRequiredIsAscending() const;
		virtual const bool* getRequiredIsAscendingReference() const;
		virtual void setRequiredIsAscending( const bool value );

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

		bool operator <( const CFBamIndexColByUNameIdxKey& rhs );
		bool operator <( const CFBamIndexColByIdxColTenantIdxKey& rhs );
		bool operator <( const CFBamIndexColByIndexIdxKey& rhs );
		bool operator <( const CFBamIndexColByDefSchemaIdxKey& rhs );
		bool operator <( const CFBamIndexColByColIdxKey& rhs );
		bool operator <( const CFBamIndexColByPrevIdxKey& rhs );
		bool operator <( const CFBamIndexColByNextIdxKey& rhs );
		bool operator <( const CFBamIndexColByIdxPrevIdxKey& rhs );
		bool operator <( const CFBamIndexColByIdxNextIdxKey& rhs );
		bool operator <( const CFBamIndexColPKey& rhs );
		bool operator <( const CFBamIndexColHPKey& rhs );
		bool operator <( const CFBamIndexColHBuff& rhs );
		bool operator <( const CFBamIndexColBuff& rhs );

		bool operator <=( const CFBamIndexColByUNameIdxKey& rhs );
		bool operator <=( const CFBamIndexColByIdxColTenantIdxKey& rhs );
		bool operator <=( const CFBamIndexColByIndexIdxKey& rhs );
		bool operator <=( const CFBamIndexColByDefSchemaIdxKey& rhs );
		bool operator <=( const CFBamIndexColByColIdxKey& rhs );
		bool operator <=( const CFBamIndexColByPrevIdxKey& rhs );
		bool operator <=( const CFBamIndexColByNextIdxKey& rhs );
		bool operator <=( const CFBamIndexColByIdxPrevIdxKey& rhs );
		bool operator <=( const CFBamIndexColByIdxNextIdxKey& rhs );
		bool operator <=( const CFBamIndexColPKey& rhs );
		bool operator <=( const CFBamIndexColHPKey& rhs );
		bool operator <=( const CFBamIndexColHBuff& rhs );
		bool operator <=( const CFBamIndexColBuff& rhs );

		bool operator ==( const CFBamIndexColByUNameIdxKey& rhs );
		bool operator ==( const CFBamIndexColByIdxColTenantIdxKey& rhs );
		bool operator ==( const CFBamIndexColByIndexIdxKey& rhs );
		bool operator ==( const CFBamIndexColByDefSchemaIdxKey& rhs );
		bool operator ==( const CFBamIndexColByColIdxKey& rhs );
		bool operator ==( const CFBamIndexColByPrevIdxKey& rhs );
		bool operator ==( const CFBamIndexColByNextIdxKey& rhs );
		bool operator ==( const CFBamIndexColByIdxPrevIdxKey& rhs );
		bool operator ==( const CFBamIndexColByIdxNextIdxKey& rhs );
		bool operator ==( const CFBamIndexColPKey& rhs );
		bool operator ==( const CFBamIndexColHPKey& rhs );
		bool operator ==( const CFBamIndexColHBuff& rhs );
		bool operator ==( const CFBamIndexColBuff& rhs );

		bool operator !=( const CFBamIndexColByUNameIdxKey& rhs );
		bool operator !=( const CFBamIndexColByIdxColTenantIdxKey& rhs );
		bool operator !=( const CFBamIndexColByIndexIdxKey& rhs );
		bool operator !=( const CFBamIndexColByDefSchemaIdxKey& rhs );
		bool operator !=( const CFBamIndexColByColIdxKey& rhs );
		bool operator !=( const CFBamIndexColByPrevIdxKey& rhs );
		bool operator !=( const CFBamIndexColByNextIdxKey& rhs );
		bool operator !=( const CFBamIndexColByIdxPrevIdxKey& rhs );
		bool operator !=( const CFBamIndexColByIdxNextIdxKey& rhs );
		bool operator !=( const CFBamIndexColPKey& rhs );
		bool operator !=( const CFBamIndexColHPKey& rhs );
		bool operator !=( const CFBamIndexColHBuff& rhs );
		bool operator !=( const CFBamIndexColBuff& rhs );

		bool operator >=( const CFBamIndexColByUNameIdxKey& rhs );
		bool operator >=( const CFBamIndexColByIdxColTenantIdxKey& rhs );
		bool operator >=( const CFBamIndexColByIndexIdxKey& rhs );
		bool operator >=( const CFBamIndexColByDefSchemaIdxKey& rhs );
		bool operator >=( const CFBamIndexColByColIdxKey& rhs );
		bool operator >=( const CFBamIndexColByPrevIdxKey& rhs );
		bool operator >=( const CFBamIndexColByNextIdxKey& rhs );
		bool operator >=( const CFBamIndexColByIdxPrevIdxKey& rhs );
		bool operator >=( const CFBamIndexColByIdxNextIdxKey& rhs );
		bool operator >=( const CFBamIndexColPKey& rhs );
		bool operator >=( const CFBamIndexColHPKey& rhs );
		bool operator >=( const CFBamIndexColHBuff& rhs );
		bool operator >=( const CFBamIndexColBuff& rhs );

		bool operator >( const CFBamIndexColByUNameIdxKey& rhs );
		bool operator >( const CFBamIndexColByIdxColTenantIdxKey& rhs );
		bool operator >( const CFBamIndexColByIndexIdxKey& rhs );
		bool operator >( const CFBamIndexColByDefSchemaIdxKey& rhs );
		bool operator >( const CFBamIndexColByColIdxKey& rhs );
		bool operator >( const CFBamIndexColByPrevIdxKey& rhs );
		bool operator >( const CFBamIndexColByNextIdxKey& rhs );
		bool operator >( const CFBamIndexColByIdxPrevIdxKey& rhs );
		bool operator >( const CFBamIndexColByIdxNextIdxKey& rhs );
		bool operator >( const CFBamIndexColPKey& rhs );
		bool operator >( const CFBamIndexColHPKey& rhs );
		bool operator >( const CFBamIndexColHBuff& rhs );
		bool operator >( const CFBamIndexColBuff& rhs );
		cfbam::CFBamIndexColBuff operator =( cfbam::CFBamIndexColBuff& src );
		cfbam::CFBamIndexColBuff operator =( cfbam::CFBamIndexColHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByNextIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxNextIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColPKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColHPKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator <(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByNextIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxNextIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColPKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColHPKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator <=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByNextIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxNextIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColPKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColHPKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator ==(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByNextIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxNextIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColPKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColHPKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator !=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByNextIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxNextIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColPKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColHPKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator >=(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByUNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByDefSchemaIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByPrevIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByNextIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxPrevIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColByIdxNextIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColPKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColHPKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator >(const  cfbam::CFBamIndexColBuff& lhs, const cfbam::CFBamIndexColBuff& rhs );

	template<> struct hash<cfbam::CFBamIndexColBuff> {
		typedef cfbam::CFBamIndexColBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

