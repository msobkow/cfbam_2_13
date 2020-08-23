#pragma once

// Description: C++18 specification of a DateDef history buffer object.

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

	class CFBamDateDefBuff;
	class CFBamValuePKey;
	class CFBamValueHPKey;

	class CFBamDateDefHBuff : public CFBamAtomHBuff

	{
	public:
		static const std::string CLASS_NAME;
	protected:
		std::string* optionalDummy;
	public:
		CFBamDateDefHBuff();
		CFBamDateDefHBuff( const CFBamDateDefHBuff& src );
		virtual ~CFBamDateDefHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
		virtual const std::string& getOptionalDummyValue() const;
		virtual const std::string* getOptionalDummyReference() const;
		virtual const bool isOptionalDummyNull() const;
		virtual void setOptionalDummyNull();
		virtual void setOptionalDummyValue( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamDateDefHBuff& rhs );
		bool operator <( const CFBamDateDefBuff& rhs );

		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamDateDefHBuff& rhs );
		bool operator <=( const CFBamDateDefBuff& rhs );

		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamDateDefHBuff& rhs );
		bool operator ==( const CFBamDateDefBuff& rhs );

		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamDateDefHBuff& rhs );
		bool operator !=( const CFBamDateDefBuff& rhs );

		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamDateDefHBuff& rhs );
		bool operator >=( const CFBamDateDefBuff& rhs );

		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamDateDefHBuff& rhs );
		bool operator >( const CFBamDateDefBuff& rhs );
		cfbam::CFBamDateDefHBuff operator =( cfbam::CFBamDateDefBuff& src );
		cfbam::CFBamDateDefHBuff operator =( cfbam::CFBamDateDefHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamDateDefHBuff& rhs );
	bool operator <(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamDateDefBuff& rhs );

	bool operator <=(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamDateDefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamDateDefBuff& rhs );

	bool operator ==(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamDateDefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamDateDefBuff& rhs );

	bool operator !=(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamDateDefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamDateDefBuff& rhs );

	bool operator >=(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamDateDefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamDateDefBuff& rhs );

	bool operator >(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamDateDefHBuff& rhs );
	bool operator >(const  cfbam::CFBamDateDefHBuff& lhs, const cfbam::CFBamDateDefBuff& rhs );

	template<> struct hash<cfbam::CFBamDateDefHBuff> {
		typedef cfbam::CFBamDateDefHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

