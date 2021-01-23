#pragma once

// Description: C++18 specification for a UInt16Def buffer object.

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
	class CFBamUInt16DefHBuff;

	class CFBamUInt16DefBuff : public CFBamAtomBuff
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
		static const uint16_t INITVALUE_INIT_VALUE;
		static const uint16_t MINVALUE_INIT_VALUE;
		static const uint16_t MAXVALUE_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const uint16_t INITVALUE_MIN_VALUE;
		static const uint16_t MINVALUE_MIN_VALUE;
		static const uint16_t MAXVALUE_MIN_VALUE;
	protected:
		cflib::CFLibNullableUInt16 optionalInitValue;
		cflib::CFLibNullableUInt16 optionalMinValue;
		cflib::CFLibNullableUInt16 optionalMaxValue;
	public:
		CFBamUInt16DefBuff();
		CFBamUInt16DefBuff( const CFBamUInt16DefBuff& src );
		virtual ~CFBamUInt16DefBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const uint16_t getOptionalInitValueValue() const;
		virtual const uint16_t* getOptionalInitValueReference() const;
		virtual const bool isOptionalInitValueNull() const;
		virtual void setOptionalInitValueNull();
		virtual void setOptionalInitValueValue( const uint16_t value );

		virtual const uint16_t getOptionalMinValueValue() const;
		virtual const uint16_t* getOptionalMinValueReference() const;
		virtual const bool isOptionalMinValueNull() const;
		virtual void setOptionalMinValueNull();
		virtual void setOptionalMinValueValue( const uint16_t value );

		virtual const uint16_t getOptionalMaxValueValue() const;
		virtual const uint16_t* getOptionalMaxValueReference() const;
		virtual const bool isOptionalMaxValueNull() const;
		virtual void setOptionalMaxValueNull();
		virtual void setOptionalMaxValueValue( const uint16_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamUInt16DefHBuff& rhs );
		bool operator <( const CFBamUInt16DefBuff& rhs );

		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamUInt16DefHBuff& rhs );
		bool operator <=( const CFBamUInt16DefBuff& rhs );

		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamUInt16DefHBuff& rhs );
		bool operator ==( const CFBamUInt16DefBuff& rhs );

		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamUInt16DefHBuff& rhs );
		bool operator !=( const CFBamUInt16DefBuff& rhs );

		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamUInt16DefHBuff& rhs );
		bool operator >=( const CFBamUInt16DefBuff& rhs );

		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamUInt16DefHBuff& rhs );
		bool operator >( const CFBamUInt16DefBuff& rhs );
		cfbam::CFBamUInt16DefBuff operator =( cfbam::CFBamUInt16DefBuff& src );
		cfbam::CFBamUInt16DefBuff operator =( cfbam::CFBamUInt16DefHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamUInt16DefHBuff& rhs );
	bool operator <(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamUInt16DefBuff& rhs );

	bool operator <=(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamUInt16DefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamUInt16DefBuff& rhs );

	bool operator ==(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamUInt16DefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamUInt16DefBuff& rhs );

	bool operator !=(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamUInt16DefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamUInt16DefBuff& rhs );

	bool operator >=(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamUInt16DefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamUInt16DefBuff& rhs );

	bool operator >(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamUInt16DefHBuff& rhs );
	bool operator >(const  cfbam::CFBamUInt16DefBuff& lhs, const cfbam::CFBamUInt16DefBuff& rhs );

	template<> struct hash<cfbam::CFBamUInt16DefBuff> {
		typedef cfbam::CFBamUInt16DefBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

