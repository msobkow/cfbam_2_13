#pragma once

// Description: C++18 specification for a TokenDef buffer object.

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
	class CFBamTokenDefHBuff;

	class CFBamTokenDefBuff : public CFBamAtomBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_MAXLEN;
		static const std::string COLNAME_INITVALUE;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int MAXLEN_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int MAXLEN_MIN_VALUE;
		static const int MAXLEN_MAX_VALUE;
		static const std::string::size_type INITVALUE_MAX_LEN;
	protected:
		int32_t requiredMaxLen;
		std::string* optionalInitValue;
	public:
		CFBamTokenDefBuff();
		CFBamTokenDefBuff( const CFBamTokenDefBuff& src );
		virtual ~CFBamTokenDefBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int32_t getRequiredMaxLen() const;
		virtual const int32_t* getRequiredMaxLenReference() const;
		virtual void setRequiredMaxLen( const int32_t value );

		virtual const std::string& getOptionalInitValueValue() const;
		virtual const std::string* getOptionalInitValueReference() const;
		virtual const bool isOptionalInitValueNull() const;
		virtual void setOptionalInitValueNull();
		virtual void setOptionalInitValueValue( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamTokenDefHBuff& rhs );
		bool operator <( const CFBamTokenDefBuff& rhs );

		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamTokenDefHBuff& rhs );
		bool operator <=( const CFBamTokenDefBuff& rhs );

		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamTokenDefHBuff& rhs );
		bool operator ==( const CFBamTokenDefBuff& rhs );

		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamTokenDefHBuff& rhs );
		bool operator !=( const CFBamTokenDefBuff& rhs );

		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamTokenDefHBuff& rhs );
		bool operator >=( const CFBamTokenDefBuff& rhs );

		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamTokenDefHBuff& rhs );
		bool operator >( const CFBamTokenDefBuff& rhs );
		cfbam::CFBamTokenDefBuff operator =( cfbam::CFBamTokenDefBuff& src );
		cfbam::CFBamTokenDefBuff operator =( cfbam::CFBamTokenDefHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamTokenDefHBuff& rhs );
	bool operator <(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamTokenDefBuff& rhs );

	bool operator <=(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamTokenDefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamTokenDefBuff& rhs );

	bool operator ==(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamTokenDefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamTokenDefBuff& rhs );

	bool operator !=(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamTokenDefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamTokenDefBuff& rhs );

	bool operator >=(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamTokenDefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamTokenDefBuff& rhs );

	bool operator >(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamTokenDefHBuff& rhs );
	bool operator >(const  cfbam::CFBamTokenDefBuff& lhs, const cfbam::CFBamTokenDefBuff& rhs );

	template<> struct hash<cfbam::CFBamTokenDefBuff> {
		typedef cfbam::CFBamTokenDefBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

