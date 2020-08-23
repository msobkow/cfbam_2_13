#pragma once

// Description: C++18 specification for a EnumType by SchemaIdx index key object.

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
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamEnumTypeBuff;
	class CFBamEnumTypeHBuff;

	class CFBamEnumTypeBySchemaIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredTenantId;
		int64_t requiredSchemaDefId;
	public:
		CFBamEnumTypeBySchemaIdxKey();
		CFBamEnumTypeBySchemaIdxKey( const CFBamEnumTypeBySchemaIdxKey& src );
		virtual ~CFBamEnumTypeBySchemaIdxKey();

		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredSchemaDefId() const;
		virtual const int64_t* getRequiredSchemaDefIdReference() const;
		virtual void setRequiredSchemaDefId( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamEnumTypeBySchemaIdxKey& rhs );
		bool operator <( const CFBamEnumTypeHBuff& rhs );
		bool operator <( const CFBamEnumTypeBuff& rhs );

		bool operator <=( const CFBamEnumTypeBySchemaIdxKey& rhs );
		bool operator <=( const CFBamEnumTypeHBuff& rhs );
		bool operator <=( const CFBamEnumTypeBuff& rhs );

		bool operator ==( const CFBamEnumTypeBySchemaIdxKey& rhs );
		bool operator ==( const CFBamEnumTypeHBuff& rhs );
		bool operator ==( const CFBamEnumTypeBuff& rhs );

		bool operator !=( const CFBamEnumTypeBySchemaIdxKey& rhs );
		bool operator !=( const CFBamEnumTypeHBuff& rhs );
		bool operator !=( const CFBamEnumTypeBuff& rhs );

		bool operator >=( const CFBamEnumTypeBySchemaIdxKey& rhs );
		bool operator >=( const CFBamEnumTypeHBuff& rhs );
		bool operator >=( const CFBamEnumTypeBuff& rhs );

		bool operator >( const CFBamEnumTypeBySchemaIdxKey& rhs );
		bool operator >( const CFBamEnumTypeHBuff& rhs );
		bool operator >( const CFBamEnumTypeBuff& rhs );
		cfbam::CFBamEnumTypeBySchemaIdxKey operator =( cfbam::CFBamEnumTypeBySchemaIdxKey& src );
		cfbam::CFBamEnumTypeBySchemaIdxKey operator =( cfbam::CFBamEnumTypeBuff& src );
		cfbam::CFBamEnumTypeBySchemaIdxKey operator =( cfbam::CFBamEnumTypeHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeBySchemaIdxKey& rhs );
	bool operator <(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeHBuff& rhs );
	bool operator <(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeBuff& rhs );

	bool operator <=(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeBySchemaIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeHBuff& rhs );
	bool operator <=(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeBuff& rhs );

	bool operator ==(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeBySchemaIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeHBuff& rhs );
	bool operator ==(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeBuff& rhs );

	bool operator !=(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeBySchemaIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeHBuff& rhs );
	bool operator !=(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeBuff& rhs );

	bool operator >=(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeBySchemaIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeHBuff& rhs );
	bool operator >=(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeBuff& rhs );

	bool operator >(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeBySchemaIdxKey& rhs );
	bool operator >(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeHBuff& rhs );
	bool operator >(const  cfbam::CFBamEnumTypeBySchemaIdxKey& lhs, const cfbam::CFBamEnumTypeBuff& rhs );

	template<> struct hash<cfbam::CFBamEnumTypeBySchemaIdxKey> {
		typedef cfbam::CFBamEnumTypeBySchemaIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

