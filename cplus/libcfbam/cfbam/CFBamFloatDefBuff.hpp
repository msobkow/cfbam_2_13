#pragma once

// Description: C++18 specification for a FloatDef buffer object.

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

#include <cfbam/CFBamAtomBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamValuePKey;
	class CFBamValueHPKey;
	class CFBamFloatDefHBuff;

	class CFBamFloatDefBuff : public CFBamAtomBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_INITVALUE;
		static const std::string COLNAME_MINVALUE;
		static const std::string COLNAME_MAXVALUE;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const float INITVALUE_MIN_VALUE;
		static const float MINVALUE_MIN_VALUE;
		static const float MAXVALUE_MIN_VALUE;
		static const float INITVALUE_MAX_VALUE;
		static const float MINVALUE_MAX_VALUE;
		static const float MAXVALUE_MAX_VALUE;
	protected:
		cflib::CFLibNullableFloat optionalInitValue;
		cflib::CFLibNullableFloat optionalMinValue;
		cflib::CFLibNullableFloat optionalMaxValue;
	public:
		CFBamFloatDefBuff();
		CFBamFloatDefBuff( const CFBamFloatDefBuff& src );
		virtual ~CFBamFloatDefBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const float getOptionalInitValueValue() const;
		virtual const float* getOptionalInitValueReference() const;
		virtual const bool isOptionalInitValueNull() const;
		virtual void setOptionalInitValueNull();
		virtual void setOptionalInitValueValue( const float value );

		virtual const float getOptionalMinValueValue() const;
		virtual const float* getOptionalMinValueReference() const;
		virtual const bool isOptionalMinValueNull() const;
		virtual void setOptionalMinValueNull();
		virtual void setOptionalMinValueValue( const float value );

		virtual const float getOptionalMaxValueValue() const;
		virtual const float* getOptionalMaxValueReference() const;
		virtual const bool isOptionalMaxValueNull() const;
		virtual void setOptionalMaxValueNull();
		virtual void setOptionalMaxValueValue( const float value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamFloatDefHBuff& rhs );
		bool operator <( const CFBamFloatDefBuff& rhs );

		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamFloatDefHBuff& rhs );
		bool operator <=( const CFBamFloatDefBuff& rhs );

		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamFloatDefHBuff& rhs );
		bool operator ==( const CFBamFloatDefBuff& rhs );

		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamFloatDefHBuff& rhs );
		bool operator !=( const CFBamFloatDefBuff& rhs );

		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamFloatDefHBuff& rhs );
		bool operator >=( const CFBamFloatDefBuff& rhs );

		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamFloatDefHBuff& rhs );
		bool operator >( const CFBamFloatDefBuff& rhs );
		cfbam::CFBamFloatDefBuff operator =( cfbam::CFBamFloatDefBuff& src );
		cfbam::CFBamFloatDefBuff operator =( cfbam::CFBamFloatDefHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamFloatDefHBuff& rhs );
	bool operator <(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamFloatDefBuff& rhs );

	bool operator <=(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamFloatDefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamFloatDefBuff& rhs );

	bool operator ==(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamFloatDefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamFloatDefBuff& rhs );

	bool operator !=(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamFloatDefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamFloatDefBuff& rhs );

	bool operator >=(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamFloatDefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamFloatDefBuff& rhs );

	bool operator >(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamFloatDefHBuff& rhs );
	bool operator >(const  cfbam::CFBamFloatDefBuff& lhs, const cfbam::CFBamFloatDefBuff& rhs );

	template<> struct hash<cfbam::CFBamFloatDefBuff> {
		typedef cfbam::CFBamFloatDefBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

