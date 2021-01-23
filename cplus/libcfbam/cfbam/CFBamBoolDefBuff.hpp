#pragma once

// Description: C++18 specification for a BoolDef buffer object.

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
	class CFBamBoolDefHBuff;

	class CFBamBoolDefBuff : public CFBamAtomBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_INITVALUE;
		static const std::string COLNAME_FALSESTRING;
		static const std::string COLNAME_TRUESTRING;
		static const std::string COLNAME_NULLSTRING;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const std::string::size_type FALSESTRING_MAX_LEN;
		static const std::string::size_type TRUESTRING_MAX_LEN;
		static const std::string::size_type NULLSTRING_MAX_LEN;
	protected:
		cflib::CFLibNullableBool optionalInitValue;
		std::string* optionalFalseString;
		std::string* optionalTrueString;
		std::string* optionalNullString;
	public:
		CFBamBoolDefBuff();
		CFBamBoolDefBuff( const CFBamBoolDefBuff& src );
		virtual ~CFBamBoolDefBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
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
		cfbam::CFBamBoolDefBuff operator =( cfbam::CFBamBoolDefBuff& src );
		cfbam::CFBamBoolDefBuff operator =( cfbam::CFBamBoolDefHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamBoolDefHBuff& rhs );
	bool operator <(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamBoolDefBuff& rhs );

	bool operator <=(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamBoolDefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamBoolDefBuff& rhs );

	bool operator ==(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamBoolDefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamBoolDefBuff& rhs );

	bool operator !=(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamBoolDefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamBoolDefBuff& rhs );

	bool operator >=(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamBoolDefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamBoolDefBuff& rhs );

	bool operator >(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamBoolDefHBuff& rhs );
	bool operator >(const  cfbam::CFBamBoolDefBuff& lhs, const cfbam::CFBamBoolDefBuff& rhs );

	template<> struct hash<cfbam::CFBamBoolDefBuff> {
		typedef cfbam::CFBamBoolDefBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

