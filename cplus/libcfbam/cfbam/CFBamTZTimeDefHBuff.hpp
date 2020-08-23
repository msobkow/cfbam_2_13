#pragma once

// Description: C++18 specification of a TZTimeDef history buffer object.

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

	class CFBamTZTimeDefBuff;
	class CFBamValuePKey;
	class CFBamValueHPKey;

	class CFBamTZTimeDefHBuff : public CFBamAtomHBuff

	{
	public:
		static const std::string CLASS_NAME;
	protected:
		std::string* optionalDummy;
	public:
		CFBamTZTimeDefHBuff();
		CFBamTZTimeDefHBuff( const CFBamTZTimeDefHBuff& src );
		virtual ~CFBamTZTimeDefHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
		virtual const std::string& getOptionalDummyValue() const;
		virtual const std::string* getOptionalDummyReference() const;
		virtual const bool isOptionalDummyNull() const;
		virtual void setOptionalDummyNull();
		virtual void setOptionalDummyValue( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamTZTimeDefHBuff& rhs );
		bool operator <( const CFBamTZTimeDefBuff& rhs );

		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamTZTimeDefHBuff& rhs );
		bool operator <=( const CFBamTZTimeDefBuff& rhs );

		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamTZTimeDefHBuff& rhs );
		bool operator ==( const CFBamTZTimeDefBuff& rhs );

		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamTZTimeDefHBuff& rhs );
		bool operator !=( const CFBamTZTimeDefBuff& rhs );

		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamTZTimeDefHBuff& rhs );
		bool operator >=( const CFBamTZTimeDefBuff& rhs );

		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamTZTimeDefHBuff& rhs );
		bool operator >( const CFBamTZTimeDefBuff& rhs );
		cfbam::CFBamTZTimeDefHBuff operator =( cfbam::CFBamTZTimeDefBuff& src );
		cfbam::CFBamTZTimeDefHBuff operator =( cfbam::CFBamTZTimeDefHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamTZTimeDefHBuff& rhs );
	bool operator <(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamTZTimeDefBuff& rhs );

	bool operator <=(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamTZTimeDefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamTZTimeDefBuff& rhs );

	bool operator ==(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamTZTimeDefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamTZTimeDefBuff& rhs );

	bool operator !=(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamTZTimeDefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamTZTimeDefBuff& rhs );

	bool operator >=(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamTZTimeDefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamTZTimeDefBuff& rhs );

	bool operator >(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamTZTimeDefHBuff& rhs );
	bool operator >(const  cfbam::CFBamTZTimeDefHBuff& lhs, const cfbam::CFBamTZTimeDefBuff& rhs );

	template<> struct hash<cfbam::CFBamTZTimeDefHBuff> {
		typedef cfbam::CFBamTZTimeDefHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

