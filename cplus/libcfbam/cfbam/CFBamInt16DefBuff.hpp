#pragma once

// Description: C++18 specification for a Int16Def buffer object.

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
	class CFBamInt16DefHBuff;

	class CFBamInt16DefBuff : public CFBamAtomBuff
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
		static const int16_t INITVALUE_INIT_VALUE;
		static const int16_t MINVALUE_INIT_VALUE;
		static const int16_t MAXVALUE_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int16_t INITVALUE_MIN_VALUE;
		static const int16_t MINVALUE_MIN_VALUE;
		static const int16_t MAXVALUE_MIN_VALUE;
		static const int16_t INITVALUE_MAX_VALUE;
		static const int16_t MINVALUE_MAX_VALUE;
		static const int16_t MAXVALUE_MAX_VALUE;
	protected:
		cflib::CFLibNullableInt16 optionalInitValue;
		cflib::CFLibNullableInt16 optionalMinValue;
		cflib::CFLibNullableInt16 optionalMaxValue;
	public:
		CFBamInt16DefBuff();
		CFBamInt16DefBuff( const CFBamInt16DefBuff& src );
		virtual ~CFBamInt16DefBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int16_t getOptionalInitValueValue() const;
		virtual const int16_t* getOptionalInitValueReference() const;
		virtual const bool isOptionalInitValueNull() const;
		virtual void setOptionalInitValueNull();
		virtual void setOptionalInitValueValue( const int16_t value );

		virtual const int16_t getOptionalMinValueValue() const;
		virtual const int16_t* getOptionalMinValueReference() const;
		virtual const bool isOptionalMinValueNull() const;
		virtual void setOptionalMinValueNull();
		virtual void setOptionalMinValueValue( const int16_t value );

		virtual const int16_t getOptionalMaxValueValue() const;
		virtual const int16_t* getOptionalMaxValueReference() const;
		virtual const bool isOptionalMaxValueNull() const;
		virtual void setOptionalMaxValueNull();
		virtual void setOptionalMaxValueValue( const int16_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamInt16DefHBuff& rhs );
		bool operator <( const CFBamInt16DefBuff& rhs );

		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamInt16DefHBuff& rhs );
		bool operator <=( const CFBamInt16DefBuff& rhs );

		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamInt16DefHBuff& rhs );
		bool operator ==( const CFBamInt16DefBuff& rhs );

		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamInt16DefHBuff& rhs );
		bool operator !=( const CFBamInt16DefBuff& rhs );

		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamInt16DefHBuff& rhs );
		bool operator >=( const CFBamInt16DefBuff& rhs );

		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamInt16DefHBuff& rhs );
		bool operator >( const CFBamInt16DefBuff& rhs );
		cfbam::CFBamInt16DefBuff operator =( cfbam::CFBamInt16DefBuff& src );
		cfbam::CFBamInt16DefBuff operator =( cfbam::CFBamInt16DefHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamInt16DefHBuff& rhs );
	bool operator <(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamInt16DefBuff& rhs );

	bool operator <=(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamInt16DefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamInt16DefBuff& rhs );

	bool operator ==(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamInt16DefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamInt16DefBuff& rhs );

	bool operator !=(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamInt16DefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamInt16DefBuff& rhs );

	bool operator >=(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamInt16DefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamInt16DefBuff& rhs );

	bool operator >(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamInt16DefHBuff& rhs );
	bool operator >(const  cfbam::CFBamInt16DefBuff& lhs, const cfbam::CFBamInt16DefBuff& rhs );

	template<> struct hash<cfbam::CFBamInt16DefBuff> {
		typedef cfbam::CFBamInt16DefBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

