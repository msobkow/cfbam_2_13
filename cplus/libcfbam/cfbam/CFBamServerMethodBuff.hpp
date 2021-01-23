#pragma once

// Description: C++18 specification for a ServerMethod buffer object.

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
	class CFBamServerMethodHBuff;
	class CFBamServerMethodByUNameIdxKey;
	class CFBamServerMethodByMethTableIdxKey;
	class CFBamServerMethodByDefSchemaIdxKey;

	class CFBamServerMethodBuff : public CFBamScopeBuff
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
		static const std::string COLNAME_SUFFIX;
		static const std::string COLNAME_ISINSTANCEMETHOD;
		static const std::string COLNAME_ISSERVERONLY;
		static const std::string COLNAME_JMETHODBODY;
		static const std::string COLNAME_CPPMETHODBODY;
		static const std::string COLNAME_CSMETHODBODY;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t TABLEID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t DEFSCHEMATENANTID_INIT_VALUE;
		static const int64_t DEFSCHEMAID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const bool ISINSTANCEMETHOD_INIT_VALUE;
		static const bool ISSERVERONLY_INIT_VALUE;
		static const std::string JMETHODBODY_INIT_VALUE;
		static const std::string CPPMETHODBODY_INIT_VALUE;
		static const std::string CSMETHODBODY_INIT_VALUE;
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
		static const std::string::size_type SUFFIX_MAX_LEN;
		static const std::string::size_type JMETHODBODY_MAX_LEN;
		static const std::string::size_type CPPMETHODBODY_MAX_LEN;
		static const std::string::size_type CSMETHODBODY_MAX_LEN;
	protected:
		int64_t requiredTableId;
		cflib::CFLibNullableInt64 optionalDefSchemaTenantId;
		cflib::CFLibNullableInt64 optionalDefSchemaId;
		std::string* requiredName;
		std::string* optionalShortName;
		std::string* optionalLabel;
		std::string* optionalShortDescription;
		std::string* optionalDescription;
		std::string* optionalSuffix;
		bool requiredIsInstanceMethod;
		bool requiredIsServerOnly;
		std::string* requiredJMethodBody;
		std::string* requiredCppMethodBody;
		std::string* requiredCsMethodBody;
	public:
		CFBamServerMethodBuff();
		CFBamServerMethodBuff( const CFBamServerMethodBuff& src );
		virtual ~CFBamServerMethodBuff();

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

		virtual const std::string& getOptionalSuffixValue() const;
		virtual const std::string* getOptionalSuffixReference() const;
		virtual const bool isOptionalSuffixNull() const;
		virtual void setOptionalSuffixNull();
		virtual void setOptionalSuffixValue( const std::string& value );

		virtual const bool getRequiredIsInstanceMethod() const;
		virtual const bool* getRequiredIsInstanceMethodReference() const;
		virtual void setRequiredIsInstanceMethod( const bool value );

		virtual const bool getRequiredIsServerOnly() const;
		virtual const bool* getRequiredIsServerOnlyReference() const;
		virtual void setRequiredIsServerOnly( const bool value );

		virtual const std::string& getRequiredJMethodBody() const;
		virtual const std::string* getRequiredJMethodBodyReference() const;
		virtual void setRequiredJMethodBody( const std::string& value );

		virtual const std::string& getRequiredCppMethodBody() const;
		virtual const std::string* getRequiredCppMethodBodyReference() const;
		virtual void setRequiredCppMethodBody( const std::string& value );

		virtual const std::string& getRequiredCsMethodBody() const;
		virtual const std::string* getRequiredCsMethodBodyReference() const;
		virtual void setRequiredCsMethodBody( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamServerMethodByUNameIdxKey& rhs );
		bool operator <( const CFBamServerMethodByMethTableIdxKey& rhs );
		bool operator <( const CFBamServerMethodByDefSchemaIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamServerMethodHBuff& rhs );
		bool operator <( const CFBamServerMethodBuff& rhs );

		bool operator <=( const CFBamServerMethodByUNameIdxKey& rhs );
		bool operator <=( const CFBamServerMethodByMethTableIdxKey& rhs );
		bool operator <=( const CFBamServerMethodByDefSchemaIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamServerMethodHBuff& rhs );
		bool operator <=( const CFBamServerMethodBuff& rhs );

		bool operator ==( const CFBamServerMethodByUNameIdxKey& rhs );
		bool operator ==( const CFBamServerMethodByMethTableIdxKey& rhs );
		bool operator ==( const CFBamServerMethodByDefSchemaIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamServerMethodHBuff& rhs );
		bool operator ==( const CFBamServerMethodBuff& rhs );

		bool operator !=( const CFBamServerMethodByUNameIdxKey& rhs );
		bool operator !=( const CFBamServerMethodByMethTableIdxKey& rhs );
		bool operator !=( const CFBamServerMethodByDefSchemaIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamServerMethodHBuff& rhs );
		bool operator !=( const CFBamServerMethodBuff& rhs );

		bool operator >=( const CFBamServerMethodByUNameIdxKey& rhs );
		bool operator >=( const CFBamServerMethodByMethTableIdxKey& rhs );
		bool operator >=( const CFBamServerMethodByDefSchemaIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamServerMethodHBuff& rhs );
		bool operator >=( const CFBamServerMethodBuff& rhs );

		bool operator >( const CFBamServerMethodByUNameIdxKey& rhs );
		bool operator >( const CFBamServerMethodByMethTableIdxKey& rhs );
		bool operator >( const CFBamServerMethodByDefSchemaIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamServerMethodHBuff& rhs );
		bool operator >( const CFBamServerMethodBuff& rhs );
		cfbam::CFBamServerMethodBuff operator =( cfbam::CFBamServerMethodBuff& src );
		cfbam::CFBamServerMethodBuff operator =( cfbam::CFBamServerMethodHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByMethTableIdxKey& rhs );
	bool operator <(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodHBuff& rhs );
	bool operator <(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodBuff& rhs );

	bool operator <=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByMethTableIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodHBuff& rhs );
	bool operator <=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodBuff& rhs );

	bool operator ==(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByMethTableIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodHBuff& rhs );
	bool operator ==(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodBuff& rhs );

	bool operator !=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByMethTableIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodHBuff& rhs );
	bool operator !=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodBuff& rhs );

	bool operator >=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByMethTableIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodHBuff& rhs );
	bool operator >=(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodBuff& rhs );

	bool operator >(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByUNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByMethTableIdxKey& rhs );

	bool operator >(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodByDefSchemaIdxKey& rhs );

	bool operator >(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodHBuff& rhs );
	bool operator >(const  cfbam::CFBamServerMethodBuff& lhs, const cfbam::CFBamServerMethodBuff& rhs );

	template<> struct hash<cfbam::CFBamServerMethodBuff> {
		typedef cfbam::CFBamServerMethodBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

