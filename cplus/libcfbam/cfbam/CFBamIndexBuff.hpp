#pragma once

// Description: C++18 specification for a Index buffer object.

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
	class CFBamIndexHBuff;
	class CFBamIndexByUNameIdxKey;
	class CFBamIndexByIndexTenantIdxKey;
	class CFBamIndexByIdxTableIdxKey;
	class CFBamIndexByDefSchemaIdxKey;

	class CFBamIndexBuff : public CFBamScopeBuff
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
		static const std::string COLNAME_DBNAME;
		static const std::string COLNAME_SUFFIX;
		static const std::string COLNAME_ISUNIQUE;
		static const std::string COLNAME_ISDBMAPPED;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t TABLEID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t DEFSCHEMATENANTID_INIT_VALUE;
		static const int64_t DEFSCHEMAID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const bool ISUNIQUE_INIT_VALUE;
		static const bool ISDBMAPPED_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t TABLEID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t DEFSCHEMATENANTID_MIN_VALUE;
		static const int64_t DEFSCHEMAID_MIN_VALUE;
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
		std::string* optionalDbName;
		std::string* optionalSuffix;
		bool requiredIsUnique;
		bool requiredIsDbMapped;
	public:
		CFBamIndexBuff();
		CFBamIndexBuff( const CFBamIndexBuff& src );
		virtual ~CFBamIndexBuff();

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

		virtual const bool getRequiredIsUnique() const;
		virtual const bool* getRequiredIsUniqueReference() const;
		virtual void setRequiredIsUnique( const bool value );

		virtual const bool getRequiredIsDbMapped() const;
		virtual const bool* getRequiredIsDbMappedReference() const;
		virtual void setRequiredIsDbMapped( const bool value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamIndexByUNameIdxKey& rhs );
		bool operator <( const CFBamIndexByIndexTenantIdxKey& rhs );
		bool operator <( const CFBamIndexByIdxTableIdxKey& rhs );
		bool operator <( const CFBamIndexByDefSchemaIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamIndexHBuff& rhs );
		bool operator <( const CFBamIndexBuff& rhs );

		bool operator <=( const CFBamIndexByUNameIdxKey& rhs );
		bool operator <=( const CFBamIndexByIndexTenantIdxKey& rhs );
		bool operator <=( const CFBamIndexByIdxTableIdxKey& rhs );
		bool operator <=( const CFBamIndexByDefSchemaIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamIndexHBuff& rhs );
		bool operator <=( const CFBamIndexBuff& rhs );

		bool operator ==( const CFBamIndexByUNameIdxKey& rhs );
		bool operator ==( const CFBamIndexByIndexTenantIdxKey& rhs );
		bool operator ==( const CFBamIndexByIdxTableIdxKey& rhs );
		bool operator ==( const CFBamIndexByDefSchemaIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamIndexHBuff& rhs );
		bool operator ==( const CFBamIndexBuff& rhs );

		bool operator !=( const CFBamIndexByUNameIdxKey& rhs );
		bool operator !=( const CFBamIndexByIndexTenantIdxKey& rhs );
		bool operator !=( const CFBamIndexByIdxTableIdxKey& rhs );
		bool operator !=( const CFBamIndexByDefSchemaIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamIndexHBuff& rhs );
		bool operator !=( const CFBamIndexBuff& rhs );

		bool operator >=( const CFBamIndexByUNameIdxKey& rhs );
		bool operator >=( const CFBamIndexByIndexTenantIdxKey& rhs );
		bool operator >=( const CFBamIndexByIdxTableIdxKey& rhs );
		bool operator >=( const CFBamIndexByDefSchemaIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamIndexHBuff& rhs );
		bool operator >=( const CFBamIndexBuff& rhs );

		bool operator >( const CFBamIndexByUNameIdxKey& rhs );
		bool operator >( const CFBamIndexByIndexTenantIdxKey& rhs );
		bool operator >( const CFBamIndexByIdxTableIdxKey& rhs );
		bool operator >( const CFBamIndexByDefSchemaIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamIndexHBuff& rhs );
		bool operator >( const CFBamIndexBuff& rhs );
		cfbam::CFBamIndexBuff operator =( cfbam::CFBamIndexBuff& src );
		cfbam::CFBamIndexBuff operator =( cfbam::CFBamIndexHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByIndexTenantIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByIdxTableIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexHBuff& rhs );
	bool operator <(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexBuff& rhs );

	bool operator <=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByIndexTenantIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByIdxTableIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexHBuff& rhs );
	bool operator <=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexBuff& rhs );

	bool operator ==(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByIndexTenantIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByIdxTableIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexHBuff& rhs );
	bool operator ==(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexBuff& rhs );

	bool operator !=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByIndexTenantIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByIdxTableIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexHBuff& rhs );
	bool operator !=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexBuff& rhs );

	bool operator >=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByIndexTenantIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByIdxTableIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexHBuff& rhs );
	bool operator >=(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexBuff& rhs );

	bool operator >(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByUNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByIndexTenantIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByIdxTableIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexByDefSchemaIdxKey& rhs );

	bool operator >(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexHBuff& rhs );
	bool operator >(const  cfbam::CFBamIndexBuff& lhs, const cfbam::CFBamIndexBuff& rhs );

	template<> struct hash<cfbam::CFBamIndexBuff> {
		typedef cfbam::CFBamIndexBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

