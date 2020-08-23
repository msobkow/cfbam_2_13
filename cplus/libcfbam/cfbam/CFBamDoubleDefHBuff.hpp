#pragma once

// Description: C++18 specification of a DoubleDef history buffer object.

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

	class CFBamDoubleDefBuff;
	class CFBamValuePKey;
	class CFBamValueHPKey;

	class CFBamDoubleDefHBuff : public CFBamAtomHBuff

	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cflib::CFLibNullableDouble optionalInitValue;
		cflib::CFLibNullableDouble optionalMinValue;
		cflib::CFLibNullableDouble optionalMaxValue;
	public:
		CFBamDoubleDefHBuff();
		CFBamDoubleDefHBuff( const CFBamDoubleDefHBuff& src );
		virtual ~CFBamDoubleDefHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
		virtual const double getOptionalInitValueValue() const;
		virtual const double* getOptionalInitValueReference() const;
		virtual const bool isOptionalInitValueNull() const;
		virtual void setOptionalInitValueNull();
		virtual void setOptionalInitValueValue( const double value );

		virtual const double getOptionalMinValueValue() const;
		virtual const double* getOptionalMinValueReference() const;
		virtual const bool isOptionalMinValueNull() const;
		virtual void setOptionalMinValueNull();
		virtual void setOptionalMinValueValue( const double value );

		virtual const double getOptionalMaxValueValue() const;
		virtual const double* getOptionalMaxValueReference() const;
		virtual const bool isOptionalMaxValueNull() const;
		virtual void setOptionalMaxValueNull();
		virtual void setOptionalMaxValueValue( const double value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamDoubleDefHBuff& rhs );
		bool operator <( const CFBamDoubleDefBuff& rhs );

		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamDoubleDefHBuff& rhs );
		bool operator <=( const CFBamDoubleDefBuff& rhs );

		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamDoubleDefHBuff& rhs );
		bool operator ==( const CFBamDoubleDefBuff& rhs );

		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamDoubleDefHBuff& rhs );
		bool operator !=( const CFBamDoubleDefBuff& rhs );

		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamDoubleDefHBuff& rhs );
		bool operator >=( const CFBamDoubleDefBuff& rhs );

		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamDoubleDefHBuff& rhs );
		bool operator >( const CFBamDoubleDefBuff& rhs );
		cfbam::CFBamDoubleDefHBuff operator =( cfbam::CFBamDoubleDefBuff& src );
		cfbam::CFBamDoubleDefHBuff operator =( cfbam::CFBamDoubleDefHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamDoubleDefHBuff& rhs );
	bool operator <(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamDoubleDefBuff& rhs );

	bool operator <=(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamDoubleDefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamDoubleDefBuff& rhs );

	bool operator ==(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamDoubleDefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamDoubleDefBuff& rhs );

	bool operator !=(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamDoubleDefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamDoubleDefBuff& rhs );

	bool operator >=(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamDoubleDefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamDoubleDefBuff& rhs );

	bool operator >(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamDoubleDefHBuff& rhs );
	bool operator >(const  cfbam::CFBamDoubleDefHBuff& lhs, const cfbam::CFBamDoubleDefBuff& rhs );

	template<> struct hash<cfbam::CFBamDoubleDefHBuff> {
		typedef cfbam::CFBamDoubleDefHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

