#pragma once

// Description: C++18 specification of a RelationCol history buffer object.

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

#include <cfbam/ICFBamSchema.hpp>
namespace cfbam {

	class CFBamRelationColBuff;
	class CFBamRelationColPKey;
	class CFBamRelationColHPKey;
	class CFBamRelationColByUNameIdxKey;
	class CFBamRelationColByRelColTenantIdxKey;
	class CFBamRelationColByRelationIdxKey;
	class CFBamRelationColByDefSchemaIdxKey;
	class CFBamRelationColByFromColIdxKey;
	class CFBamRelationColByToColIdxKey;
	class CFBamRelationColByPrevIdxKey;
	class CFBamRelationColByNextIdxKey;
	class CFBamRelationColByRelPrevIdxKey;
	class CFBamRelationColByRelNextIdxKey;

	class CFBamRelationColHBuff : public CFBamHPKey, public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		int64_t requiredTenantId;
		int64_t requiredRelationId;
		int64_t requiredId;
		cflib::CFLibNullableInt64 optionalDefSchemaTenantId;
		cflib::CFLibNullableInt64 optionalDefSchemaId;
		std::string* requiredName;
		std::string* optionalShortName;
		std::string* optionalLabel;
		std::string* optionalShortDescription;
		std::string* optionalDescription;
		int64_t requiredFromColId;
		int64_t requiredToColId;
		cflib::CFLibNullableInt64 optionalPrevTenantId;
		cflib::CFLibNullableInt64 optionalPrevId;
		cflib::CFLibNullableInt64 optionalNextTenantId;
		cflib::CFLibNullableInt64 optionalNextId;		classcode_t classCode;

	public:
		CFBamRelationColHBuff();
		CFBamRelationColHBuff( const CFBamRelationColHBuff& src );
		virtual ~CFBamRelationColHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredRelationId() const;
		virtual const int64_t* getRequiredRelationIdReference() const;
		virtual void setRequiredRelationId( const int64_t value );

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

		virtual const int64_t getRequiredFromColId() const;
		virtual const int64_t* getRequiredFromColIdReference() const;
		virtual void setRequiredFromColId( const int64_t value );

		virtual const int64_t getRequiredToColId() const;
		virtual const int64_t* getRequiredToColIdReference() const;
		virtual void setRequiredToColId( const int64_t value );

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

		bool operator <( const CFBamRelationColByUNameIdxKey& rhs );
		bool operator <( const CFBamRelationColByRelColTenantIdxKey& rhs );
		bool operator <( const CFBamRelationColByRelationIdxKey& rhs );
		bool operator <( const CFBamRelationColByDefSchemaIdxKey& rhs );
		bool operator <( const CFBamRelationColByFromColIdxKey& rhs );
		bool operator <( const CFBamRelationColByToColIdxKey& rhs );
		bool operator <( const CFBamRelationColByPrevIdxKey& rhs );
		bool operator <( const CFBamRelationColByNextIdxKey& rhs );
		bool operator <( const CFBamRelationColByRelPrevIdxKey& rhs );
		bool operator <( const CFBamRelationColByRelNextIdxKey& rhs );
		bool operator <( const CFBamRelationColPKey& rhs );
		bool operator <( const CFBamRelationColHPKey& rhs );
		bool operator <( const CFBamRelationColHBuff& rhs );
		bool operator <( const CFBamRelationColBuff& rhs );

		bool operator <=( const CFBamRelationColByUNameIdxKey& rhs );
		bool operator <=( const CFBamRelationColByRelColTenantIdxKey& rhs );
		bool operator <=( const CFBamRelationColByRelationIdxKey& rhs );
		bool operator <=( const CFBamRelationColByDefSchemaIdxKey& rhs );
		bool operator <=( const CFBamRelationColByFromColIdxKey& rhs );
		bool operator <=( const CFBamRelationColByToColIdxKey& rhs );
		bool operator <=( const CFBamRelationColByPrevIdxKey& rhs );
		bool operator <=( const CFBamRelationColByNextIdxKey& rhs );
		bool operator <=( const CFBamRelationColByRelPrevIdxKey& rhs );
		bool operator <=( const CFBamRelationColByRelNextIdxKey& rhs );
		bool operator <=( const CFBamRelationColPKey& rhs );
		bool operator <=( const CFBamRelationColHPKey& rhs );
		bool operator <=( const CFBamRelationColHBuff& rhs );
		bool operator <=( const CFBamRelationColBuff& rhs );

		bool operator ==( const CFBamRelationColByUNameIdxKey& rhs );
		bool operator ==( const CFBamRelationColByRelColTenantIdxKey& rhs );
		bool operator ==( const CFBamRelationColByRelationIdxKey& rhs );
		bool operator ==( const CFBamRelationColByDefSchemaIdxKey& rhs );
		bool operator ==( const CFBamRelationColByFromColIdxKey& rhs );
		bool operator ==( const CFBamRelationColByToColIdxKey& rhs );
		bool operator ==( const CFBamRelationColByPrevIdxKey& rhs );
		bool operator ==( const CFBamRelationColByNextIdxKey& rhs );
		bool operator ==( const CFBamRelationColByRelPrevIdxKey& rhs );
		bool operator ==( const CFBamRelationColByRelNextIdxKey& rhs );
		bool operator ==( const CFBamRelationColPKey& rhs );
		bool operator ==( const CFBamRelationColHPKey& rhs );
		bool operator ==( const CFBamRelationColHBuff& rhs );
		bool operator ==( const CFBamRelationColBuff& rhs );

		bool operator !=( const CFBamRelationColByUNameIdxKey& rhs );
		bool operator !=( const CFBamRelationColByRelColTenantIdxKey& rhs );
		bool operator !=( const CFBamRelationColByRelationIdxKey& rhs );
		bool operator !=( const CFBamRelationColByDefSchemaIdxKey& rhs );
		bool operator !=( const CFBamRelationColByFromColIdxKey& rhs );
		bool operator !=( const CFBamRelationColByToColIdxKey& rhs );
		bool operator !=( const CFBamRelationColByPrevIdxKey& rhs );
		bool operator !=( const CFBamRelationColByNextIdxKey& rhs );
		bool operator !=( const CFBamRelationColByRelPrevIdxKey& rhs );
		bool operator !=( const CFBamRelationColByRelNextIdxKey& rhs );
		bool operator !=( const CFBamRelationColPKey& rhs );
		bool operator !=( const CFBamRelationColHPKey& rhs );
		bool operator !=( const CFBamRelationColHBuff& rhs );
		bool operator !=( const CFBamRelationColBuff& rhs );

		bool operator >=( const CFBamRelationColByUNameIdxKey& rhs );
		bool operator >=( const CFBamRelationColByRelColTenantIdxKey& rhs );
		bool operator >=( const CFBamRelationColByRelationIdxKey& rhs );
		bool operator >=( const CFBamRelationColByDefSchemaIdxKey& rhs );
		bool operator >=( const CFBamRelationColByFromColIdxKey& rhs );
		bool operator >=( const CFBamRelationColByToColIdxKey& rhs );
		bool operator >=( const CFBamRelationColByPrevIdxKey& rhs );
		bool operator >=( const CFBamRelationColByNextIdxKey& rhs );
		bool operator >=( const CFBamRelationColByRelPrevIdxKey& rhs );
		bool operator >=( const CFBamRelationColByRelNextIdxKey& rhs );
		bool operator >=( const CFBamRelationColPKey& rhs );
		bool operator >=( const CFBamRelationColHPKey& rhs );
		bool operator >=( const CFBamRelationColHBuff& rhs );
		bool operator >=( const CFBamRelationColBuff& rhs );

		bool operator >( const CFBamRelationColByUNameIdxKey& rhs );
		bool operator >( const CFBamRelationColByRelColTenantIdxKey& rhs );
		bool operator >( const CFBamRelationColByRelationIdxKey& rhs );
		bool operator >( const CFBamRelationColByDefSchemaIdxKey& rhs );
		bool operator >( const CFBamRelationColByFromColIdxKey& rhs );
		bool operator >( const CFBamRelationColByToColIdxKey& rhs );
		bool operator >( const CFBamRelationColByPrevIdxKey& rhs );
		bool operator >( const CFBamRelationColByNextIdxKey& rhs );
		bool operator >( const CFBamRelationColByRelPrevIdxKey& rhs );
		bool operator >( const CFBamRelationColByRelNextIdxKey& rhs );
		bool operator >( const CFBamRelationColPKey& rhs );
		bool operator >( const CFBamRelationColHPKey& rhs );
		bool operator >( const CFBamRelationColHBuff& rhs );
		bool operator >( const CFBamRelationColBuff& rhs );
		cfbam::CFBamRelationColHBuff operator =( cfbam::CFBamRelationColBuff& src );
		cfbam::CFBamRelationColHBuff operator =( cfbam::CFBamRelationColHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelColTenantIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelationIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByFromColIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByToColIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByNextIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelNextIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColPKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColHPKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColHBuff& rhs );
	bool operator <(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColBuff& rhs );

	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelColTenantIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelationIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByFromColIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByToColIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByNextIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelNextIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColPKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColHPKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColHBuff& rhs );
	bool operator <=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColBuff& rhs );

	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelColTenantIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelationIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByFromColIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByToColIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByNextIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelNextIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColPKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColHPKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColHBuff& rhs );
	bool operator ==(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColBuff& rhs );

	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelColTenantIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelationIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByFromColIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByToColIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByNextIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelNextIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColPKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColHPKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColHBuff& rhs );
	bool operator !=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColBuff& rhs );

	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelColTenantIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelationIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByFromColIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByToColIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByNextIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelNextIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColPKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColHPKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColHBuff& rhs );
	bool operator >=(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColBuff& rhs );

	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelColTenantIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelationIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByDefSchemaIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByFromColIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByToColIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByPrevIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByNextIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelPrevIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColByRelNextIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColPKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColHPKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColHBuff& rhs );
	bool operator >(const  cfbam::CFBamRelationColHBuff& lhs, const cfbam::CFBamRelationColBuff& rhs );

	template<> struct hash<cfbam::CFBamRelationColHBuff> {
		typedef cfbam::CFBamRelationColHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

