#pragma once

// Description: C++18 specification for a Relation buffer object.

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

#include <cfbam/CFBamScopeBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamRelationHBuff;
	class CFBamRelationByUNameIdxKey;
	class CFBamRelationByRelnTenantIdxKey;
	class CFBamRelationByRelTableIdxKey;
	class CFBamRelationByDefSchemaIdxKey;
	class CFBamRelationByFromKeyIdxKey;
	class CFBamRelationByToTblIdxKey;
	class CFBamRelationByToKeyIdxKey;
	class CFBamRelationByNarrowedIdxKey;

	class CFBamRelationBuff : public CFBamScopeBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TABLEID;
		static const std::string COLNAME_DEFSCHEMATENANTID;
		static const std::string COLNAME_DEFSCHEMAID;
		static const std::string COLNAME_NAME;
		static const std::string COLNAME_SHORTNAME;
		static const std::string COLNAME_LABEL;
		static const std::string COLNAME_SHORTDESCRIPTION;
		static const std::string COLNAME_DESCRIPTION;
		static const std::string COLNAME_RELATIONTYPE;
		static const std::string COLNAME_DBNAME;
		static const std::string COLNAME_SUFFIX;
		static const std::string COLNAME_FROMINDEXID;
		static const std::string COLNAME_TOTABLEID;
		static const std::string COLNAME_TOINDEXID;
		static const std::string COLNAME_ISREQUIRED;
		static const std::string COLNAME_ISXSDCONTAINER;
		static const std::string COLNAME_ISLATERESOLVER;
		static const std::string COLNAME_ALLOWADDENDUM;
		static const std::string COLNAME_NARROWEDTENANTID;
		static const std::string COLNAME_NARROWEDID;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t TABLEID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t DEFSCHEMATENANTID_INIT_VALUE;
		static const int64_t DEFSCHEMAID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const cfbam::ICFBamSchema::RelationTypeEnum RELATIONTYPE_INIT_VALUE;
		static const int64_t FROMINDEXID_INIT_VALUE;
		static const int64_t TOTABLEID_INIT_VALUE;
		static const int64_t TOINDEXID_INIT_VALUE;
		static const bool ISREQUIRED_INIT_VALUE;
		static const bool ISXSDCONTAINER_INIT_VALUE;
		static const bool ISLATERESOLVER_INIT_VALUE;
		static const bool ALLOWADDENDUM_INIT_VALUE;
		static const int64_t NARROWEDTENANTID_INIT_VALUE;
		static const int64_t NARROWEDID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t TABLEID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t DEFSCHEMATENANTID_MIN_VALUE;
		static const int64_t DEFSCHEMAID_MIN_VALUE;
		static const cfbam::ICFBamSchema::RelationTypeEnum RELATIONTYPE_MIN_VALUE;
		static const int64_t FROMINDEXID_MIN_VALUE;
		static const int64_t TOTABLEID_MIN_VALUE;
		static const int64_t TOINDEXID_MIN_VALUE;
		static const int64_t NARROWEDTENANTID_MIN_VALUE;
		static const int64_t NARROWEDID_MIN_VALUE;
		static const cfbam::ICFBamSchema::RelationTypeEnum RELATIONTYPE_MAX_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
		static const std::string::size_type SHORTNAME_MAX_LEN;
		static const std::string::size_type LABEL_MAX_LEN;
		static const std::string::size_type SHORTDESCRIPTION_MAX_LEN;
		static const std::string::size_type DESCRIPTION_MAX_LEN;
		static const std::string::size_type DBNAME_MAX_LEN;
		static const std::string::size_type SUFFIX_MAX_LEN;
	protected:
		int64_t requiredTableId;
		cflib::CFLibNullableInt64 optionalDefSchemaTenantId;
		cflib::CFLibNullableInt64 optionalDefSchemaId;
		std::string* requiredName;
		std::string* optionalShortName;
		std::string* optionalLabel;
		std::string* optionalShortDescription;
		std::string* optionalDescription;
		cfbam::ICFBamSchema::RelationTypeEnum requiredRelationType;
		std::string* optionalDbName;
		std::string* optionalSuffix;
		int64_t requiredFromIndexId;
		int64_t requiredToTableId;
		int64_t requiredToIndexId;
		bool requiredIsRequired;
		bool requiredIsXsdContainer;
		bool requiredIsLateResolver;
		bool requiredAllowAddendum;
		cflib::CFLibNullableInt64 optionalNarrowedTenantId;
		cflib::CFLibNullableInt64 optionalNarrowedId;
	public:
		CFBamRelationBuff();
		CFBamRelationBuff( const CFBamRelationBuff& src );
		virtual ~CFBamRelationBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredTableId() const;
		virtual const int64_t* getRequiredTableIdReference() const;
		virtual void setRequiredTableId( const int64_t value );

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

		virtual const cfbam::ICFBamSchema::RelationTypeEnum getRequiredRelationType() const;
		virtual const cfbam::ICFBamSchema::RelationTypeEnum* getRequiredRelationTypeReference() const;
		virtual void setRequiredRelationType( const cfbam::ICFBamSchema::RelationTypeEnum value );

		virtual const std::string& getOptionalDbNameValue() const;
		virtual const std::string* getOptionalDbNameReference() const;
		virtual const bool isOptionalDbNameNull() const;
		virtual void setOptionalDbNameNull();
		virtual void setOptionalDbNameValue( const std::string& value );

		virtual const std::string& getOptionalSuffixValue() const;
		virtual const std::string* getOptionalSuffixReference() const;
		virtual const bool isOptionalSuffixNull() const;
		virtual void setOptionalSuffixNull();
		virtual void setOptionalSuffixValue( const std::string& value );

		virtual const int64_t getRequiredFromIndexId() const;
		virtual const int64_t* getRequiredFromIndexIdReference() const;
		virtual void setRequiredFromIndexId( const int64_t value );

		virtual const int64_t getRequiredToTableId() const;
		virtual const int64_t* getRequiredToTableIdReference() const;
		virtual void setRequiredToTableId( const int64_t value );

		virtual const int64_t getRequiredToIndexId() const;
		virtual const int64_t* getRequiredToIndexIdReference() const;
		virtual void setRequiredToIndexId( const int64_t value );

		virtual const bool getRequiredIsRequired() const;
		virtual const bool* getRequiredIsRequiredReference() const;
		virtual void setRequiredIsRequired( const bool value );

		virtual const bool getRequiredIsXsdContainer() const;
		virtual const bool* getRequiredIsXsdContainerReference() const;
		virtual void setRequiredIsXsdContainer( const bool value );

		virtual const bool getRequiredIsLateResolver() const;
		virtual const bool* getRequiredIsLateResolverReference() const;
		virtual void setRequiredIsLateResolver( const bool value );

		virtual const bool getRequiredAllowAddendum() const;
		virtual const bool* getRequiredAllowAddendumReference() const;
		virtual void setRequiredAllowAddendum( const bool value );

		virtual const int64_t getOptionalNarrowedTenantIdValue() const;
		virtual const int64_t* getOptionalNarrowedTenantIdReference() const;
		virtual const bool isOptionalNarrowedTenantIdNull() const;
		virtual void setOptionalNarrowedTenantIdNull();
		virtual void setOptionalNarrowedTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalNarrowedIdValue() const;
		virtual const int64_t* getOptionalNarrowedIdReference() const;
		virtual const bool isOptionalNarrowedIdNull() const;
		virtual void setOptionalNarrowedIdNull();
		virtual void setOptionalNarrowedIdValue( const int64_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamRelationByUNameIdxKey& rhs );
		bool operator <( const CFBamRelationByRelnTenantIdxKey& rhs );
		bool operator <( const CFBamRelationByRelTableIdxKey& rhs );
		bool operator <( const CFBamRelationByDefSchemaIdxKey& rhs );
		bool operator <( const CFBamRelationByFromKeyIdxKey& rhs );
		bool operator <( const CFBamRelationByToTblIdxKey& rhs );
		bool operator <( const CFBamRelationByToKeyIdxKey& rhs );
		bool operator <( const CFBamRelationByNarrowedIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamRelationHBuff& rhs );
		bool operator <( const CFBamRelationBuff& rhs );

		bool operator <=( const CFBamRelationByUNameIdxKey& rhs );
		bool operator <=( const CFBamRelationByRelnTenantIdxKey& rhs );
		bool operator <=( const CFBamRelationByRelTableIdxKey& rhs );
		bool operator <=( const CFBamRelationByDefSchemaIdxKey& rhs );
		bool operator <=( const CFBamRelationByFromKeyIdxKey& rhs );
		bool operator <=( const CFBamRelationByToTblIdxKey& rhs );
		bool operator <=( const CFBamRelationByToKeyIdxKey& rhs );
		bool operator <=( const CFBamRelationByNarrowedIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamRelationHBuff& rhs );
		bool operator <=( const CFBamRelationBuff& rhs );

		bool operator ==( const CFBamRelationByUNameIdxKey& rhs );
		bool operator ==( const CFBamRelationByRelnTenantIdxKey& rhs );
		bool operator ==( const CFBamRelationByRelTableIdxKey& rhs );
		bool operator ==( const CFBamRelationByDefSchemaIdxKey& rhs );
		bool operator ==( const CFBamRelationByFromKeyIdxKey& rhs );
		bool operator ==( const CFBamRelationByToTblIdxKey& rhs );
		bool operator ==( const CFBamRelationByToKeyIdxKey& rhs );
		bool operator ==( const CFBamRelationByNarrowedIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamRelationHBuff& rhs );
		bool operator ==( const CFBamRelationBuff& rhs );

		bool operator !=( const CFBamRelationByUNameIdxKey& rhs );
		bool operator !=( const CFBamRelationByRelnTenantIdxKey& rhs );
		bool operator !=( const CFBamRelationByRelTableIdxKey& rhs );
		bool operator !=( const CFBamRelationByDefSchemaIdxKey& rhs );
		bool operator !=( const CFBamRelationByFromKeyIdxKey& rhs );
		bool operator !=( const CFBamRelationByToTblIdxKey& rhs );
		bool operator !=( const CFBamRelationByToKeyIdxKey& rhs );
		bool operator !=( const CFBamRelationByNarrowedIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamRelationHBuff& rhs );
		bool operator !=( const CFBamRelationBuff& rhs );

		bool operator >=( const CFBamRelationByUNameIdxKey& rhs );
		bool operator >=( const CFBamRelationByRelnTenantIdxKey& rhs );
		bool operator >=( const CFBamRelationByRelTableIdxKey& rhs );
		bool operator >=( const CFBamRelationByDefSchemaIdxKey& rhs );
		bool operator >=( const CFBamRelationByFromKeyIdxKey& rhs );
		bool operator >=( const CFBamRelationByToTblIdxKey& rhs );
		bool operator >=( const CFBamRelationByToKeyIdxKey& rhs );
		bool operator >=( const CFBamRelationByNarrowedIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamRelationHBuff& rhs );
		bool operator >=( const CFBamRelationBuff& rhs );

		bool operator >( const CFBamRelationByUNameIdxKey& rhs );
		bool operator >( const CFBamRelationByRelnTenantIdxKey& rhs );
		bool operator >( const CFBamRelationByRelTableIdxKey& rhs );
		bool operator >( const CFBamRelationByDefSchemaIdxKey& rhs );
		bool operator >( const CFBamRelationByFromKeyIdxKey& rhs );
		bool operator >( const CFBamRelationByToTblIdxKey& rhs );
		bool operator >( const CFBamRelationByToKeyIdxKey& rhs );
		bool operator >( const CFBamRelationByNarrowedIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamRelationHBuff& rhs );
		bool operator >( const CFBamRelationBuff& rhs );
		cfbam::CFBamRelationBuff operator =( cfbam::CFBamRelationBuff& src );
		cfbam::CFBamRelationBuff operator =( cfbam::CFBamRelationHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationHBuff& rhs );
	bool operator <(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationBuff& rhs );

	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationHBuff& rhs );
	bool operator <=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationBuff& rhs );

	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationHBuff& rhs );
	bool operator ==(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationBuff& rhs );

	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationHBuff& rhs );
	bool operator !=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationBuff& rhs );

	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationHBuff& rhs );
	bool operator >=(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationBuff& rhs );

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs );

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs );

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs );

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs );

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs );

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs );

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs );

	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationHBuff& rhs );
	bool operator >(const  cfbam::CFBamRelationBuff& lhs, const cfbam::CFBamRelationBuff& rhs );

	template<> struct hash<cfbam::CFBamRelationBuff> {
		typedef cfbam::CFBamRelationBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

