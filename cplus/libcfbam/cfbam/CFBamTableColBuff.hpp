#pragma once

// Description: C++18 specification for a TableCol buffer object.

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

#include <cfbam/CFBamValueBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamValuePKey;
	class CFBamValueHPKey;
	class CFBamTableColHBuff;
	class CFBamTableColByTableIdxKey;
	class CFBamTableColByDataIdxKey;

	class CFBamTableColBuff : public CFBamValueBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TABLEID;
		static const std::string COLNAME_DBNAME;
		static const std::string COLNAME_DATATENANTID;
		static const std::string COLNAME_DATAID;
		static const std::string COLNAME_XMLELEMENTNAME;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t TABLEID_INIT_VALUE;
		static const int64_t DATATENANTID_INIT_VALUE;
		static const int64_t DATAID_INIT_VALUE;
		static const std::string XMLELEMENTNAME_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t TABLEID_MIN_VALUE;
		static const int64_t DATATENANTID_MIN_VALUE;
		static const int64_t DATAID_MIN_VALUE;
		static const std::string::size_type DBNAME_MAX_LEN;
		static const std::string::size_type XMLELEMENTNAME_MAX_LEN;
	protected:
		int64_t requiredTableId;
		std::string* optionalDbName;
		cflib::CFLibNullableInt64 optionalDataTenantId;
		cflib::CFLibNullableInt64 optionalDataId;
		std::string* optionalXmlElementName;
	public:
		CFBamTableColBuff();
		CFBamTableColBuff( const CFBamTableColBuff& src );
		virtual ~CFBamTableColBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredTableId() const;
		virtual const int64_t* getRequiredTableIdReference() const;
		virtual void setRequiredTableId( const int64_t value );

		virtual const std::string& getOptionalDbNameValue() const;
		virtual const std::string* getOptionalDbNameReference() const;
		virtual const bool isOptionalDbNameNull() const;
		virtual void setOptionalDbNameNull();
		virtual void setOptionalDbNameValue( const std::string& value );

		virtual const int64_t getOptionalDataTenantIdValue() const;
		virtual const int64_t* getOptionalDataTenantIdReference() const;
		virtual const bool isOptionalDataTenantIdNull() const;
		virtual void setOptionalDataTenantIdNull();
		virtual void setOptionalDataTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalDataIdValue() const;
		virtual const int64_t* getOptionalDataIdReference() const;
		virtual const bool isOptionalDataIdNull() const;
		virtual void setOptionalDataIdNull();
		virtual void setOptionalDataIdValue( const int64_t value );

		virtual const std::string& getOptionalXmlElementNameValue() const;
		virtual const std::string* getOptionalXmlElementNameReference() const;
		virtual const bool isOptionalXmlElementNameNull() const;
		virtual void setOptionalXmlElementNameNull();
		virtual void setOptionalXmlElementNameValue( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamTableColByTableIdxKey& rhs );
		bool operator <( const CFBamTableColByDataIdxKey& rhs );
		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamTableColHBuff& rhs );
		bool operator <( const CFBamTableColBuff& rhs );

		bool operator <=( const CFBamTableColByTableIdxKey& rhs );
		bool operator <=( const CFBamTableColByDataIdxKey& rhs );
		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamTableColHBuff& rhs );
		bool operator <=( const CFBamTableColBuff& rhs );

		bool operator ==( const CFBamTableColByTableIdxKey& rhs );
		bool operator ==( const CFBamTableColByDataIdxKey& rhs );
		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamTableColHBuff& rhs );
		bool operator ==( const CFBamTableColBuff& rhs );

		bool operator !=( const CFBamTableColByTableIdxKey& rhs );
		bool operator !=( const CFBamTableColByDataIdxKey& rhs );
		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamTableColHBuff& rhs );
		bool operator !=( const CFBamTableColBuff& rhs );

		bool operator >=( const CFBamTableColByTableIdxKey& rhs );
		bool operator >=( const CFBamTableColByDataIdxKey& rhs );
		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamTableColHBuff& rhs );
		bool operator >=( const CFBamTableColBuff& rhs );

		bool operator >( const CFBamTableColByTableIdxKey& rhs );
		bool operator >( const CFBamTableColByDataIdxKey& rhs );
		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamTableColHBuff& rhs );
		bool operator >( const CFBamTableColBuff& rhs );
		cfbam::CFBamTableColBuff operator =( cfbam::CFBamTableColBuff& src );
		cfbam::CFBamTableColBuff operator =( cfbam::CFBamTableColHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColByTableIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColHBuff& rhs );
	bool operator <(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColBuff& rhs );

	bool operator <=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColByTableIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColHBuff& rhs );
	bool operator <=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColBuff& rhs );

	bool operator ==(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColByTableIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColHBuff& rhs );
	bool operator ==(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColBuff& rhs );

	bool operator !=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColByTableIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColHBuff& rhs );
	bool operator !=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColBuff& rhs );

	bool operator >=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColByTableIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColHBuff& rhs );
	bool operator >=(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColBuff& rhs );

	bool operator >(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColByTableIdxKey& rhs );

	bool operator >(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs );

	bool operator >(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColHBuff& rhs );
	bool operator >(const  cfbam::CFBamTableColBuff& lhs, const cfbam::CFBamTableColBuff& rhs );

	template<> struct hash<cfbam::CFBamTableColBuff> {
		typedef cfbam::CFBamTableColBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

