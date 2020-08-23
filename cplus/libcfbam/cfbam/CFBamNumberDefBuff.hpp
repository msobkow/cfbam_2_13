#pragma once

// Description: C++18 specification for a NumberDef buffer object.

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

#include <cfbam/CFBamAtomBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamValuePKey;
	class CFBamValueHPKey;
	class CFBamNumberDefHBuff;

	class CFBamNumberDefBuff : public CFBamAtomBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_DIGITS;
		static const std::string COLNAME_PRECIS;
		static const std::string COLNAME_INITVALUE;
		static const std::string COLNAME_MINVALUE;
		static const std::string COLNAME_MAXVALUE;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int16_t DIGITS_INIT_VALUE;
		static const int16_t PRECIS_INIT_VALUE;
		static const cflib::TCFLibBigDecimal<31,5>& INITVALUE_INIT_VALUE;
		static const cflib::TCFLibBigDecimal<31,5>& MINVALUE_INIT_VALUE;
		static const cflib::TCFLibBigDecimal<31,5>& MAXVALUE_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int16_t DIGITS_MIN_VALUE;
		static const int16_t PRECIS_MIN_VALUE;
		static const int16_t DIGITS_MAX_VALUE;
		static const int16_t PRECIS_MAX_VALUE;
	protected:
		int16_t requiredDigits;
		int16_t requiredPrecis;
		cflib::TCFLibBigDecimal<31,5>* optionalInitValue;
		cflib::TCFLibBigDecimal<31,5>* optionalMinValue;
		cflib::TCFLibBigDecimal<31,5>* optionalMaxValue;
	public:
		CFBamNumberDefBuff();
		CFBamNumberDefBuff( const CFBamNumberDefBuff& src );
		virtual ~CFBamNumberDefBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int16_t getRequiredDigits() const;
		virtual const int16_t* getRequiredDigitsReference() const;
		virtual void setRequiredDigits( const int16_t value );

		virtual const int16_t getRequiredPrecis() const;
		virtual const int16_t* getRequiredPrecisReference() const;
		virtual void setRequiredPrecis( const int16_t value );

		virtual const cflib::TCFLibBigDecimal<31,5>& getOptionalInitValueValue() const;
		virtual const cflib::TCFLibBigDecimal<31,5>* getOptionalInitValueReference() const;
		virtual const bool isOptionalInitValueNull() const;
		virtual void setOptionalInitValueNull();
		virtual void setOptionalInitValueValue( const cflib::CFLibGenericBigDecimal& value );

		virtual const cflib::TCFLibBigDecimal<31,5>& getOptionalMinValueValue() const;
		virtual const cflib::TCFLibBigDecimal<31,5>* getOptionalMinValueReference() const;
		virtual const bool isOptionalMinValueNull() const;
		virtual void setOptionalMinValueNull();
		virtual void setOptionalMinValueValue( const cflib::CFLibGenericBigDecimal& value );

		virtual const cflib::TCFLibBigDecimal<31,5>& getOptionalMaxValueValue() const;
		virtual const cflib::TCFLibBigDecimal<31,5>* getOptionalMaxValueReference() const;
		virtual const bool isOptionalMaxValueNull() const;
		virtual void setOptionalMaxValueNull();
		virtual void setOptionalMaxValueValue( const cflib::CFLibGenericBigDecimal& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamNumberDefHBuff& rhs );
		bool operator <( const CFBamNumberDefBuff& rhs );

		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamNumberDefHBuff& rhs );
		bool operator <=( const CFBamNumberDefBuff& rhs );

		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamNumberDefHBuff& rhs );
		bool operator ==( const CFBamNumberDefBuff& rhs );

		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamNumberDefHBuff& rhs );
		bool operator !=( const CFBamNumberDefBuff& rhs );

		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamNumberDefHBuff& rhs );
		bool operator >=( const CFBamNumberDefBuff& rhs );

		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamNumberDefHBuff& rhs );
		bool operator >( const CFBamNumberDefBuff& rhs );
		cfbam::CFBamNumberDefBuff operator =( cfbam::CFBamNumberDefBuff& src );
		cfbam::CFBamNumberDefBuff operator =( cfbam::CFBamNumberDefHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamNumberDefHBuff& rhs );
	bool operator <(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamNumberDefBuff& rhs );

	bool operator <=(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamNumberDefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamNumberDefBuff& rhs );

	bool operator ==(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamNumberDefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamNumberDefBuff& rhs );

	bool operator !=(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamNumberDefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamNumberDefBuff& rhs );

	bool operator >=(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamNumberDefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamNumberDefBuff& rhs );

	bool operator >(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamNumberDefHBuff& rhs );
	bool operator >(const  cfbam::CFBamNumberDefBuff& lhs, const cfbam::CFBamNumberDefBuff& rhs );

	template<> struct hash<cfbam::CFBamNumberDefBuff> {
		typedef cfbam::CFBamNumberDefBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

