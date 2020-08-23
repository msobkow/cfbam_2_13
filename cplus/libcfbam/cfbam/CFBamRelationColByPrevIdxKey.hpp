#pragma once

// Description: C++18 specification for a RelationCol by PrevIdx index key object.

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

	class CFBamRelationColBuff;
	class CFBamRelationColHBuff;

	class CFBamRelationColByPrevIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalPrevTenantId;
		cflib::CFLibNullableInt64 optionalPrevId;
	public:
		CFBamRelationColByPrevIdxKey();
		CFBamRelationColByPrevIdxKey( const CFBamRelationColByPrevIdxKey& src );
		virtual ~CFBamRelationColByPrevIdxKey();

		virtual const int64_t getOptionalPrevTenantIdValue() const;
		virtual const int64_t* getOptionalPrevTenantIdReference() const;
		virtual const bool isOptionalPrevTenantIdNull() const;
		virtual void setOptionalPrevTenantIdNull();
		virtual void setOptionalPrevTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalPrevIdValue() const;
		virtual const int64_t* getOptionalPrevIdReference() const;
		virtual const bool isOptionalPrevIdNull() const;
		virtual void setOptionalPrevIdNull();
		virtual void setOptionalPrevIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamRelationColByPrevIdxKey& rhs );
		bool operator <( const CFBamRelationColHBuff& rhs );
		bool operator <( const CFBamRelationColBuff& rhs );

		bool operator <=( const CFBamRelationColByPrevIdxKey& rhs );
		bool operator <=( const CFBamRelationColHBuff& rhs );
		bool operator <=( const CFBamRelationColBuff& rhs );

		bool operator ==( const CFBamRelationColByPrevIdxKey& rhs );
		bool operator ==( const CFBamRelationColHBuff& rhs );
		bool operator ==( const CFBamRelationColBuff& rhs );

		bool operator !=( const CFBamRelationColByPrevIdxKey& rhs );
		bool operator !=( const CFBamRelationColHBuff& rhs );
		bool operator !=( const CFBamRelationColBuff& rhs );

		bool operator >=( const CFBamRelationColByPrevIdxKey& rhs );
		bool operator >=( const CFBamRelationColHBuff& rhs );
		bool operator >=( const CFBamRelationColBuff& rhs );

		bool operator >( const CFBamRelationColByPrevIdxKey& rhs );
		bool operator >( const CFBamRelationColHBuff& rhs );
		bool operator >( const CFBamRelationColBuff& rhs );
		cfbam::CFBamRelationColByPrevIdxKey operator =( cfbam::CFBamRelationColByPrevIdxKey& src );
		cfbam::CFBamRelationColByPrevIdxKey operator =( cfbam::CFBamRelationColBuff& src );
		cfbam::CFBamRelationColByPrevIdxKey operator =( cfbam::CFBamRelationColHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColByPrevIdxKey& rhs );
	bool operator <(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs );
	bool operator <(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs );

	bool operator <=(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColByPrevIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs );
	bool operator <=(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs );

	bool operator ==(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColByPrevIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs );
	bool operator ==(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs );

	bool operator !=(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColByPrevIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs );
	bool operator !=(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs );

	bool operator >=(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColByPrevIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs );
	bool operator >=(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs );

	bool operator >(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColByPrevIdxKey& rhs );
	bool operator >(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColHBuff& rhs );
	bool operator >(const  cfbam::CFBamRelationColByPrevIdxKey& lhs, const cfbam::CFBamRelationColBuff& rhs );

	template<> struct hash<cfbam::CFBamRelationColByPrevIdxKey> {
		typedef cfbam::CFBamRelationColByPrevIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

