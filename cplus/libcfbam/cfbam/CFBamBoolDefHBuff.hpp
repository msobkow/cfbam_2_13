#pragma once

// Description: C++18 specification of a BoolDef history buffer object.

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

#include <cfbam/CFBamAtomHBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>
namespace cfbam {

	class CFBamBoolDefBuff;
	class CFBamValuePKey;
	class CFBamValueHPKey;

	class CFBamBoolDefHBuff : public CFBamAtomHBuff

	{
	public:
		static const std::string CLASS_NAME;
	protected:
		cflib::CFLibNullableBool optionalInitValue;
		std::string* optionalFalseString;
		std::string* optionalTrueString;
		std::string* optionalNullString;
	public:
		CFBamBoolDefHBuff();
		CFBamBoolDefHBuff( const CFBamBoolDefHBuff& src );
		virtual ~CFBamBoolDefHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
		virtual const bool getOptionalInitValueValue() const;
		virtual const bool* getOptionalInitValueReference() const;
		virtual const bool isOptionalInitValueNull() const;
		virtual void setOptionalInitValueNull();
		virtual void setOptionalInitValueValue( const bool value );

		virtual const std::string& getOptionalFalseStringValue() const;
		virtual const std::string* getOptionalFalseStringReference() const;
		virtual const bool isOptionalFalseStringNull() const;
		virtual void setOptionalFalseStringNull();
		virtual void setOptionalFalseStringValue( const std::string& value );

		virtual const std::string& getOptionalTrueStringValue() const;
		virtual const std::string* getOptionalTrueStringReference() const;
		virtual const bool isOptionalTrueStringNull() const;
		virtual void setOptionalTrueStringNull();
		virtual void setOptionalTrueStringValue( const std::string& value );

		virtual const std::string& getOptionalNullStringValue() const;
		virtual const std::string* getOptionalNullStringReference() const;
		virtual const bool isOptionalNullStringNull() const;
		virtual void setOptionalNullStringNull();
		virtual void setOptionalNullStringValue( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamBoolDefHBuff& rhs );
		bool operator <( const CFBamBoolDefBuff& rhs );

		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamBoolDefHBuff& rhs );
		bool operator <=( const CFBamBoolDefBuff& rhs );

		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamBoolDefHBuff& rhs );
		bool operator ==( const CFBamBoolDefBuff& rhs );

		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamBoolDefHBuff& rhs );
		bool operator !=( const CFBamBoolDefBuff& rhs );

		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamBoolDefHBuff& rhs );
		bool operator >=( const CFBamBoolDefBuff& rhs );

		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamBoolDefHBuff& rhs );
		bool operator >( const CFBamBoolDefBuff& rhs );
		cfbam::CFBamBoolDefHBuff operator =( cfbam::CFBamBoolDefBuff& src );
		cfbam::CFBamBoolDefHBuff operator =( cfbam::CFBamBoolDefHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamBoolDefHBuff& rhs );
	bool operator <(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamBoolDefBuff& rhs );

	bool operator <=(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamBoolDefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamBoolDefBuff& rhs );

	bool operator ==(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamBoolDefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamBoolDefBuff& rhs );

	bool operator !=(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamBoolDefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamBoolDefBuff& rhs );

	bool operator >=(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamBoolDefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamBoolDefBuff& rhs );

	bool operator >(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamBoolDefHBuff& rhs );
	bool operator >(const  cfbam::CFBamBoolDefHBuff& lhs, const cfbam::CFBamBoolDefBuff& rhs );

	template<> struct hash<cfbam::CFBamBoolDefHBuff> {
		typedef cfbam::CFBamBoolDefHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

