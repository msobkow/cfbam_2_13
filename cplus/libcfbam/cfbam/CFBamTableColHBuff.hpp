#pragma once

// Description: C++18 specification of a TableCol history buffer object.

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

#include <cfbam/CFBamValueHBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>
namespace cfbam {

	class CFBamTableColBuff;
	class CFBamValuePKey;
	class CFBamValueHPKey;
	class CFBamTableColByTableIdxKey;
	class CFBamTableColByDataIdxKey;

	class CFBamTableColHBuff : public CFBamValueHBuff

	{
	public:
		static const std::string CLASS_NAME;
	protected:
		int64_t requiredTableId;
		std::string* optionalDbName;
		cflib::CFLibNullableInt64 optionalDataTenantId;
		cflib::CFLibNullableInt64 optionalDataId;
		std::string* optionalXmlElementName;
	public:
		CFBamTableColHBuff();
		CFBamTableColHBuff( const CFBamTableColHBuff& src );
		virtual ~CFBamTableColHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
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
		cfbam::CFBamTableColHBuff operator =( cfbam::CFBamTableColBuff& src );
		cfbam::CFBamTableColHBuff operator =( cfbam::CFBamTableColHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColByTableIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColHBuff& rhs );
	bool operator <(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColBuff& rhs );

	bool operator <=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColByTableIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColHBuff& rhs );
	bool operator <=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColBuff& rhs );

	bool operator ==(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColByTableIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColHBuff& rhs );
	bool operator ==(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColBuff& rhs );

	bool operator !=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColByTableIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColHBuff& rhs );
	bool operator !=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColBuff& rhs );

	bool operator >=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColByTableIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColHBuff& rhs );
	bool operator >=(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColBuff& rhs );

	bool operator >(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColByTableIdxKey& rhs );
	bool operator >(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColByDataIdxKey& rhs );
	bool operator >(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColHBuff& rhs );
	bool operator >(const  cfbam::CFBamTableColHBuff& lhs, const cfbam::CFBamTableColBuff& rhs );

	template<> struct hash<cfbam::CFBamTableColHBuff> {
		typedef cfbam::CFBamTableColHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

