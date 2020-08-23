#pragma once

// Description: C++18 specification of a UInt32Def history buffer object.

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

#include <cfbam/CFBamAtomHBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>
namespace cfbam {

	class CFBamUInt32DefBuff;
	class CFBamValuePKey;
	class CFBamValueHPKey;

	class CFBamUInt32DefHBuff : public CFBamAtomHBuff

	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cflib::CFLibNullableUInt32 optionalInitValue;
		cflib::CFLibNullableUInt32 optionalMinValue;
		cflib::CFLibNullableUInt32 optionalMaxValue;
	public:
		CFBamUInt32DefHBuff();
		CFBamUInt32DefHBuff( const CFBamUInt32DefHBuff& src );
		virtual ~CFBamUInt32DefHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
		virtual const uint32_t getOptionalInitValueValue() const;
		virtual const uint32_t* getOptionalInitValueReference() const;
		virtual const bool isOptionalInitValueNull() const;
		virtual void setOptionalInitValueNull();
		virtual void setOptionalInitValueValue( const uint32_t value );

		virtual const uint32_t getOptionalMinValueValue() const;
		virtual const uint32_t* getOptionalMinValueReference() const;
		virtual const bool isOptionalMinValueNull() const;
		virtual void setOptionalMinValueNull();
		virtual void setOptionalMinValueValue( const uint32_t value );

		virtual const uint32_t getOptionalMaxValueValue() const;
		virtual const uint32_t* getOptionalMaxValueReference() const;
		virtual const bool isOptionalMaxValueNull() const;
		virtual void setOptionalMaxValueNull();
		virtual void setOptionalMaxValueValue( const uint32_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamUInt32DefHBuff& rhs );
		bool operator <( const CFBamUInt32DefBuff& rhs );

		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamUInt32DefHBuff& rhs );
		bool operator <=( const CFBamUInt32DefBuff& rhs );

		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamUInt32DefHBuff& rhs );
		bool operator ==( const CFBamUInt32DefBuff& rhs );

		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamUInt32DefHBuff& rhs );
		bool operator !=( const CFBamUInt32DefBuff& rhs );

		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamUInt32DefHBuff& rhs );
		bool operator >=( const CFBamUInt32DefBuff& rhs );

		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamUInt32DefHBuff& rhs );
		bool operator >( const CFBamUInt32DefBuff& rhs );
		cfbam::CFBamUInt32DefHBuff operator =( cfbam::CFBamUInt32DefBuff& src );
		cfbam::CFBamUInt32DefHBuff operator =( cfbam::CFBamUInt32DefHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamUInt32DefHBuff& rhs );
	bool operator <(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamUInt32DefBuff& rhs );

	bool operator <=(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamUInt32DefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamUInt32DefBuff& rhs );

	bool operator ==(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamUInt32DefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamUInt32DefBuff& rhs );

	bool operator !=(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamUInt32DefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamUInt32DefBuff& rhs );

	bool operator >=(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamUInt32DefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamUInt32DefBuff& rhs );

	bool operator >(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamUInt32DefHBuff& rhs );
	bool operator >(const  cfbam::CFBamUInt32DefHBuff& lhs, const cfbam::CFBamUInt32DefBuff& rhs );

	template<> struct hash<cfbam::CFBamUInt32DefHBuff> {
		typedef cfbam::CFBamUInt32DefHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

