#pragma once

// Description: C++18 specification of a IndexCol history buffer object.

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

#include <cfbam/ICFBamSchema.hpp>
namespace cfbam {

	class CFBamIndexColBuff;
	class CFBamIndexColPKey;
	class CFBamIndexColHPKey;
	class CFBamIndexColByUNameIdxKey;
	class CFBamIndexColByIdxColTenantIdxKey;
	class CFBamIndexColByIndexIdxKey;
	class CFBamIndexColByDefSchemaIdxKey;
	class CFBamIndexColByColIdxKey;
	class CFBamIndexColByPrevIdxKey;
	class CFBamIndexColByNextIdxKey;
	class CFBamIndexColByIdxPrevIdxKey;
	class CFBamIndexColByIdxNextIdxKey;

	class CFBamIndexColHBuff : public CFBamHPKey, public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
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
		cflib::CFLibNullableInt64 optionalNextId;		classcode_t classCode;

	public:
		CFBamIndexColHBuff();
		CFBamIndexColHBuff( const CFBamIndexColHBuff& src );
		virtual ~CFBamIndexColHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
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
		cfbam::CFBamIndexColHBuff operator =( cfbam::CFBamIndexColBuff& src );
		cfbam::CFBamIndexColHBuff operator =( cfbam::CFBamIndexColHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByNextIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxNextIdxKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColPKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColHPKey& rhs );
	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator <(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByNextIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxNextIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColPKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColHPKey& rhs );
	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator <=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByNextIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxNextIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColPKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColHPKey& rhs );
	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator ==(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByNextIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxNextIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColPKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColHPKey& rhs );
	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator !=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByNextIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxNextIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColPKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColHPKey& rhs );
	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator >=(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColBuff& rhs );

	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByUNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxColTenantIdxKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIndexIdxKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByDefSchemaIdxKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByColIdxKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByPrevIdxKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByNextIdxKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxPrevIdxKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColByIdxNextIdxKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColPKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColHPKey& rhs );
	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColHBuff& rhs );
	bool operator >(const  cfbam::CFBamIndexColHBuff& lhs, const cfbam::CFBamIndexColBuff& rhs );

	template<> struct hash<cfbam::CFBamIndexColHBuff> {
		typedef cfbam::CFBamIndexColHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

