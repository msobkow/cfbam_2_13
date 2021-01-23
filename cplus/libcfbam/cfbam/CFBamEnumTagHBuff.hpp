#pragma once

// Description: C++18 specification of a EnumTag history buffer object.

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

	class CFBamEnumTagBuff;
	class CFBamEnumTagPKey;
	class CFBamEnumTagHPKey;
	class CFBamEnumTagByEnumTagTenantIdxKey;
	class CFBamEnumTagByEnumIdxKey;
	class CFBamEnumTagByDefSchemaIdxKey;
	class CFBamEnumTagByEnumNameIdxKey;
	class CFBamEnumTagByPrevIdxKey;
	class CFBamEnumTagByNextIdxKey;

	class CFBamEnumTagHBuff : public CFBamHPKey, public cflib::ICFLibCloneableObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
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
		cflib::CFLibNullableInt64 optionalNextId;		classcode_t classCode;

	public:
		CFBamEnumTagHBuff();
		CFBamEnumTagHBuff( const CFBamEnumTagHBuff& src );
		virtual ~CFBamEnumTagHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
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
		cfbam::CFBamEnumTagHBuff operator =( cfbam::CFBamEnumTagBuff& src );
		cfbam::CFBamEnumTagHBuff operator =( cfbam::CFBamEnumTagHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumTagTenantIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByDefSchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByNextIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagPKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagHPKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagHBuff& rhs );
	bool operator <(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagBuff& rhs );

	bool operator <=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumTagTenantIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByDefSchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByNextIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagPKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagHPKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagHBuff& rhs );
	bool operator <=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagBuff& rhs );

	bool operator ==(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumTagTenantIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByDefSchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByNextIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagPKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagHPKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagHBuff& rhs );
	bool operator ==(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagBuff& rhs );

	bool operator !=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumTagTenantIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByDefSchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByNextIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagPKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagHPKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagHBuff& rhs );
	bool operator !=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagBuff& rhs );

	bool operator >=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumTagTenantIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByDefSchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByNextIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagPKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagHPKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagHBuff& rhs );
	bool operator >=(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagBuff& rhs );

	bool operator >(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumTagTenantIdxKey& rhs );
	bool operator >(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumIdxKey& rhs );
	bool operator >(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByDefSchemaIdxKey& rhs );
	bool operator >(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByEnumNameIdxKey& rhs );
	bool operator >(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByPrevIdxKey& rhs );
	bool operator >(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagByNextIdxKey& rhs );
	bool operator >(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagPKey& rhs );
	bool operator >(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagHPKey& rhs );
	bool operator >(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagHBuff& rhs );
	bool operator >(const  cfbam::CFBamEnumTagHBuff& lhs, const cfbam::CFBamEnumTagBuff& rhs );

	template<> struct hash<cfbam::CFBamEnumTagHBuff> {
		typedef cfbam::CFBamEnumTagHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

