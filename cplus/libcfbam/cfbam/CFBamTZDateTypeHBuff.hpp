#pragma once

// Description: C++18 specification of a TZDateType history buffer object.

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

#include <cfbam/CFBamTZDateDefHBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>
namespace cfbam {

	class CFBamTZDateTypeBuff;
	class CFBamValuePKey;
	class CFBamValueHPKey;
	class CFBamTZDateTypeBySchemaIdxKey;

	class CFBamTZDateTypeHBuff : public CFBamTZDateDefHBuff

	{
	public:
		static const std::string CLASS_NAME;
	protected:
		int64_t requiredSchemaDefId;
	public:
		CFBamTZDateTypeHBuff();
		CFBamTZDateTypeHBuff( const CFBamTZDateTypeHBuff& src );
		virtual ~CFBamTZDateTypeHBuff();

		virtual cflib::ICFLibCloneableObj* clone();
		virtual const int64_t getRequiredSchemaDefId() const;
		virtual const int64_t* getRequiredSchemaDefIdReference() const;
		virtual void setRequiredSchemaDefId( const int64_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamTZDateTypeBySchemaIdxKey& rhs );
		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamTZDateTypeHBuff& rhs );
		bool operator <( const CFBamTZDateTypeBuff& rhs );

		bool operator <=( const CFBamTZDateTypeBySchemaIdxKey& rhs );
		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamTZDateTypeHBuff& rhs );
		bool operator <=( const CFBamTZDateTypeBuff& rhs );

		bool operator ==( const CFBamTZDateTypeBySchemaIdxKey& rhs );
		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamTZDateTypeHBuff& rhs );
		bool operator ==( const CFBamTZDateTypeBuff& rhs );

		bool operator !=( const CFBamTZDateTypeBySchemaIdxKey& rhs );
		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamTZDateTypeHBuff& rhs );
		bool operator !=( const CFBamTZDateTypeBuff& rhs );

		bool operator >=( const CFBamTZDateTypeBySchemaIdxKey& rhs );
		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamTZDateTypeHBuff& rhs );
		bool operator >=( const CFBamTZDateTypeBuff& rhs );

		bool operator >( const CFBamTZDateTypeBySchemaIdxKey& rhs );
		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamTZDateTypeHBuff& rhs );
		bool operator >( const CFBamTZDateTypeBuff& rhs );
		cfbam::CFBamTZDateTypeHBuff operator =( cfbam::CFBamTZDateTypeBuff& src );
		cfbam::CFBamTZDateTypeHBuff operator =( cfbam::CFBamTZDateTypeHBuff& src );

		virtual std::string toString();

	};
}

namespace std {

	bool operator <(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeBySchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeHBuff& rhs );
	bool operator <(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeBuff& rhs );

	bool operator <=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeBySchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeHBuff& rhs );
	bool operator <=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeBuff& rhs );

	bool operator ==(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeBySchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeHBuff& rhs );
	bool operator ==(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeBuff& rhs );

	bool operator !=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeBySchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeHBuff& rhs );
	bool operator !=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeBuff& rhs );

	bool operator >=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeBySchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeHBuff& rhs );
	bool operator >=(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeBuff& rhs );

	bool operator >(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeBySchemaIdxKey& rhs );
	bool operator >(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeHBuff& rhs );
	bool operator >(const  cfbam::CFBamTZDateTypeHBuff& lhs, const cfbam::CFBamTZDateTypeBuff& rhs );

	template<> struct hash<cfbam::CFBamTZDateTypeHBuff> {
		typedef cfbam::CFBamTZDateTypeHBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

