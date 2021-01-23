#pragma once

// Description: C++18 specification for a UuidDef buffer object.

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
	class CFBamUuidDefHBuff;

	class CFBamUuidDefBuff : public CFBamAtomBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_INITVALUE;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
	protected:
		uuid_t optionalInitValue;
	public:
		CFBamUuidDefBuff();
		CFBamUuidDefBuff( const CFBamUuidDefBuff& src );
		virtual ~CFBamUuidDefBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const uuid_ptr_t getOptionalInitValueValue() const;
		virtual const uuid_ptr_t getOptionalInitValueReference() const;
		virtual const bool isOptionalInitValueNull() const;
		virtual void setOptionalInitValueNull();
		virtual void setOptionalInitValueValue( const uuid_ptr_t value );
		virtual void generateOptionalInitValue();

		virtual size_t hashCode() const;

		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamUuidDefHBuff& rhs );
		bool operator <( const CFBamUuidDefBuff& rhs );

		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamUuidDefHBuff& rhs );
		bool operator <=( const CFBamUuidDefBuff& rhs );

		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamUuidDefHBuff& rhs );
		bool operator ==( const CFBamUuidDefBuff& rhs );

		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamUuidDefHBuff& rhs );
		bool operator !=( const CFBamUuidDefBuff& rhs );

		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamUuidDefHBuff& rhs );
		bool operator >=( const CFBamUuidDefBuff& rhs );

		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamUuidDefHBuff& rhs );
		bool operator >( const CFBamUuidDefBuff& rhs );
		cfbam::CFBamUuidDefBuff operator =( cfbam::CFBamUuidDefBuff& src );
		cfbam::CFBamUuidDefBuff operator =( cfbam::CFBamUuidDefHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamUuidDefHBuff& rhs );
	bool operator <(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamUuidDefBuff& rhs );

	bool operator <=(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamUuidDefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamUuidDefBuff& rhs );

	bool operator ==(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamUuidDefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamUuidDefBuff& rhs );

	bool operator !=(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamUuidDefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamUuidDefBuff& rhs );

	bool operator >=(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamUuidDefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamUuidDefBuff& rhs );

	bool operator >(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamUuidDefHBuff& rhs );
	bool operator >(const  cfbam::CFBamUuidDefBuff& lhs, const cfbam::CFBamUuidDefBuff& rhs );

	template<> struct hash<cfbam::CFBamUuidDefBuff> {
		typedef cfbam::CFBamUuidDefBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

