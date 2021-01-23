#pragma once

// Description: C++18 specification of a Param history buffer object.

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

	class CFBamParamBuff;
	class CFBamParamPKey;
	class CFBamParamHPKey;
	class CFBamParamByUNameIdxKey;
	class CFBamParamByValTentIdxKey;
	class CFBamParamByServerMethodIdxKey;
	class CFBamParamByDefSchemaIdxKey;
	class CFBamParamByServerTypeIdxKey;
	class CFBamParamByPrevIdxKey;
	class CFBamParamByNextIdxKey;
	class CFBamParamByContPrevIdxKey;
	class CFBamParamByContNextIdxKey;

	class CFBamParamHBuff : public CFBamHPKey, public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
		int64_t requiredTenantId;
		int64_t requiredServerMethodId;
		int64_t requiredId;
		cflib::CFLibNullableInt64 optionalDefSchemaTenantId;
		cflib::CFLibNullableInt64 optionalDefSchemaId;
		std::string* requiredName;
		std::string* optionalShortDescription;
		std::string* optionalDescription;
		bool requiredIsNullable;
		cflib::CFLibNullableInt64 optionalTypeTenantId;
		cflib::CFLibNullableInt64 optionalTypeId;
		cflib::CFLibNullableInt64 optionalPrevTenantId;
		cflib::CFLibNullableInt64 optionalPrevId;
		cflib::CFLibNullableInt64 optionalNextTenantId;
		cflib::CFLibNullableInt64 optionalNextId;		classcode_t classCode;

	public:
		CFBamParamHBuff();
		CFBamParamHBuff( const CFBamParamHBuff& src );
		virtual ~CFBamParamHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredServerMethodId() const;
		virtual const int64_t* getRequiredServerMethodIdReference() const;
		virtual void setRequiredServerMethodId( const int64_t value );

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

		virtual const bool getRequiredIsNullable() const;
		virtual const bool* getRequiredIsNullableReference() const;
		virtual void setRequiredIsNullable( const bool value );

		virtual const int64_t getOptionalTypeTenantIdValue() const;
		virtual const int64_t* getOptionalTypeTenantIdReference() const;
		virtual const bool isOptionalTypeTenantIdNull() const;
		virtual void setOptionalTypeTenantIdNull();
		virtual void setOptionalTypeTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalTypeIdValue() const;
		virtual const int64_t* getOptionalTypeIdReference() const;
		virtual const bool isOptionalTypeIdNull() const;
		virtual void setOptionalTypeIdNull();
		virtual void setOptionalTypeIdValue( const int64_t value );

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

		bool operator <( const CFBamParamByUNameIdxKey& rhs );
		bool operator <( const CFBamParamByValTentIdxKey& rhs );
		bool operator <( const CFBamParamByServerMethodIdxKey& rhs );
		bool operator <( const CFBamParamByDefSchemaIdxKey& rhs );
		bool operator <( const CFBamParamByServerTypeIdxKey& rhs );
		bool operator <( const CFBamParamByPrevIdxKey& rhs );
		bool operator <( const CFBamParamByNextIdxKey& rhs );
		bool operator <( const CFBamParamByContPrevIdxKey& rhs );
		bool operator <( const CFBamParamByContNextIdxKey& rhs );
		bool operator <( const CFBamParamPKey& rhs );
		bool operator <( const CFBamParamHPKey& rhs );
		bool operator <( const CFBamParamHBuff& rhs );
		bool operator <( const CFBamParamBuff& rhs );

		bool operator <=( const CFBamParamByUNameIdxKey& rhs );
		bool operator <=( const CFBamParamByValTentIdxKey& rhs );
		bool operator <=( const CFBamParamByServerMethodIdxKey& rhs );
		bool operator <=( const CFBamParamByDefSchemaIdxKey& rhs );
		bool operator <=( const CFBamParamByServerTypeIdxKey& rhs );
		bool operator <=( const CFBamParamByPrevIdxKey& rhs );
		bool operator <=( const CFBamParamByNextIdxKey& rhs );
		bool operator <=( const CFBamParamByContPrevIdxKey& rhs );
		bool operator <=( const CFBamParamByContNextIdxKey& rhs );
		bool operator <=( const CFBamParamPKey& rhs );
		bool operator <=( const CFBamParamHPKey& rhs );
		bool operator <=( const CFBamParamHBuff& rhs );
		bool operator <=( const CFBamParamBuff& rhs );

		bool operator ==( const CFBamParamByUNameIdxKey& rhs );
		bool operator ==( const CFBamParamByValTentIdxKey& rhs );
		bool operator ==( const CFBamParamByServerMethodIdxKey& rhs );
		bool operator ==( const CFBamParamByDefSchemaIdxKey& rhs );
		bool operator ==( const CFBamParamByServerTypeIdxKey& rhs );
		bool operator ==( const CFBamParamByPrevIdxKey& rhs );
		bool operator ==( const CFBamParamByNextIdxKey& rhs );
		bool operator ==( const CFBamParamByContPrevIdxKey& rhs );
		bool operator ==( const CFBamParamByContNextIdxKey& rhs );
		bool operator ==( const CFBamParamPKey& rhs );
		bool operator ==( const CFBamParamHPKey& rhs );
		bool operator ==( const CFBamParamHBuff& rhs );
		bool operator ==( const CFBamParamBuff& rhs );

		bool operator !=( const CFBamParamByUNameIdxKey& rhs );
		bool operator !=( const CFBamParamByValTentIdxKey& rhs );
		bool operator !=( const CFBamParamByServerMethodIdxKey& rhs );
		bool operator !=( const CFBamParamByDefSchemaIdxKey& rhs );
		bool operator !=( const CFBamParamByServerTypeIdxKey& rhs );
		bool operator !=( const CFBamParamByPrevIdxKey& rhs );
		bool operator !=( const CFBamParamByNextIdxKey& rhs );
		bool operator !=( const CFBamParamByContPrevIdxKey& rhs );
		bool operator !=( const CFBamParamByContNextIdxKey& rhs );
		bool operator !=( const CFBamParamPKey& rhs );
		bool operator !=( const CFBamParamHPKey& rhs );
		bool operator !=( const CFBamParamHBuff& rhs );
		bool operator !=( const CFBamParamBuff& rhs );

		bool operator >=( const CFBamParamByUNameIdxKey& rhs );
		bool operator >=( const CFBamParamByValTentIdxKey& rhs );
		bool operator >=( const CFBamParamByServerMethodIdxKey& rhs );
		bool operator >=( const CFBamParamByDefSchemaIdxKey& rhs );
		bool operator >=( const CFBamParamByServerTypeIdxKey& rhs );
		bool operator >=( const CFBamParamByPrevIdxKey& rhs );
		bool operator >=( const CFBamParamByNextIdxKey& rhs );
		bool operator >=( const CFBamParamByContPrevIdxKey& rhs );
		bool operator >=( const CFBamParamByContNextIdxKey& rhs );
		bool operator >=( const CFBamParamPKey& rhs );
		bool operator >=( const CFBamParamHPKey& rhs );
		bool operator >=( const CFBamParamHBuff& rhs );
		bool operator >=( const CFBamParamBuff& rhs );

		bool operator >( const CFBamParamByUNameIdxKey& rhs );
		bool operator >( const CFBamParamByValTentIdxKey& rhs );
		bool operator >( const CFBamParamByServerMethodIdxKey& rhs );
		bool operator >( const CFBamParamByDefSchemaIdxKey& rhs );
		bool operator >( const CFBamParamByServerTypeIdxKey& rhs );
		bool operator >( const CFBamParamByPrevIdxKey& rhs );
		bool operator >( const CFBamParamByNextIdxKey& rhs );
		bool operator >( const CFBamParamByContPrevIdxKey& rhs );
		bool operator >( const CFBamParamByContNextIdxKey& rhs );
		bool operator >( const CFBamParamPKey& rhs );
		bool operator >( const CFBamParamHPKey& rhs );
		bool operator >( const CFBamParamHBuff& rhs );
		bool operator >( const CFBamParamBuff& rhs );
		cfbam::CFBamParamHBuff operator =( cfbam::CFBamParamBuff& src );
		cfbam::CFBamParamHBuff operator =( cfbam::CFBamParamHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByValTentIdxKey& rhs );
	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByServerMethodIdxKey& rhs );
	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs );
	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByNextIdxKey& rhs );
	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByContPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByContNextIdxKey& rhs );
	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamPKey& rhs );
	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamHPKey& rhs );
	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamHBuff& rhs );
	bool operator <(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamBuff& rhs );

	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByValTentIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByServerMethodIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByNextIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByContPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByContNextIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamPKey& rhs );
	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamHPKey& rhs );
	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamHBuff& rhs );
	bool operator <=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamBuff& rhs );

	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByValTentIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByServerMethodIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByNextIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByContPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByContNextIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamPKey& rhs );
	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamHPKey& rhs );
	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamHBuff& rhs );
	bool operator ==(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamBuff& rhs );

	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByValTentIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByServerMethodIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByNextIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByContPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByContNextIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamPKey& rhs );
	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamHPKey& rhs );
	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamHBuff& rhs );
	bool operator !=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamBuff& rhs );

	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByValTentIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByServerMethodIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByNextIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByContPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByContNextIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamPKey& rhs );
	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamHPKey& rhs );
	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamHBuff& rhs );
	bool operator >=(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamBuff& rhs );

	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByValTentIdxKey& rhs );
	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByServerMethodIdxKey& rhs );
	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByDefSchemaIdxKey& rhs );
	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByServerTypeIdxKey& rhs );
	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByPrevIdxKey& rhs );
	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByNextIdxKey& rhs );
	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByContPrevIdxKey& rhs );
	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamByContNextIdxKey& rhs );
	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamPKey& rhs );
	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamHPKey& rhs );
	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamHBuff& rhs );
	bool operator >(const  cfbam::CFBamParamHBuff& lhs, const cfbam::CFBamParamBuff& rhs );

	template<> struct hash<cfbam::CFBamParamHBuff> {
		typedef cfbam::CFBamParamHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

