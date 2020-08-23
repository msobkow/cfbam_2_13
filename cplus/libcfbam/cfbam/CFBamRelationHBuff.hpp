#pragma once

// Description: C++18 specification of a Relation history buffer object.

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

	class CFBamRelationBuff;
	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamRelationByUNameIdxKey;
	class CFBamRelationByRelnTenantIdxKey;
	class CFBamRelationByRelTableIdxKey;
	class CFBamRelationByDefSchemaIdxKey;
	class CFBamRelationByFromKeyIdxKey;
	class CFBamRelationByToTblIdxKey;
	class CFBamRelationByToKeyIdxKey;
	class CFBamRelationByNarrowedIdxKey;

	class CFBamRelationHBuff : public CFBamScopeHBuff

	{
	public:
		static const std::string CLASS_NAME;
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
		CFBamRelationHBuff();
		CFBamRelationHBuff( const CFBamRelationHBuff& src );
		virtual ~CFBamRelationHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
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
		cfbam::CFBamRelationHBuff operator =( cfbam::CFBamRelationBuff& src );
		cfbam::CFBamRelationHBuff operator =( cfbam::CFBamRelationHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationHBuff& rhs );
	bool operator <(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationBuff& rhs );

	bool operator <=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationHBuff& rhs );
	bool operator <=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationBuff& rhs );

	bool operator ==(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationHBuff& rhs );
	bool operator ==(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationBuff& rhs );

	bool operator !=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationHBuff& rhs );
	bool operator !=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationBuff& rhs );

	bool operator >=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationHBuff& rhs );
	bool operator >=(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationBuff& rhs );

	bool operator >(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByRelnTenantIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByRelTableIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByDefSchemaIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByFromKeyIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByToTblIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByToKeyIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationByNarrowedIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationHBuff& rhs );
	bool operator >(const  cfbam::CFBamRelationHBuff& lhs, const cfbam::CFBamRelationBuff& rhs );

	template<> struct hash<cfbam::CFBamRelationHBuff> {
		typedef cfbam::CFBamRelationHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

