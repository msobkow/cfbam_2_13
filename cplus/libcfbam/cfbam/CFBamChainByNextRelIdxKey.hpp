#pragma once

// Description: C++18 specification for a Chain by NextRelIdx index key object.

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

	class CFBamChainBuff;
	class CFBamChainHBuff;

	class CFBamChainByNextRelIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredNextRelationTenantId;
		int64_t requiredNextRelationId;
	public:
		CFBamChainByNextRelIdxKey();
		CFBamChainByNextRelIdxKey( const CFBamChainByNextRelIdxKey& src );
		virtual ~CFBamChainByNextRelIdxKey();

		virtual const int64_t getRequiredNextRelationTenantId() const;
		virtual const int64_t* getRequiredNextRelationTenantIdReference() const;
		virtual void setRequiredNextRelationTenantId( const int64_t value );

		virtual const int64_t getRequiredNextRelationId() const;
		virtual const int64_t* getRequiredNextRelationIdReference() const;
		virtual void setRequiredNextRelationId( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamChainByNextRelIdxKey& rhs );
		bool operator <( const CFBamChainHBuff& rhs );
		bool operator <( const CFBamChainBuff& rhs );

		bool operator <=( const CFBamChainByNextRelIdxKey& rhs );
		bool operator <=( const CFBamChainHBuff& rhs );
		bool operator <=( const CFBamChainBuff& rhs );

		bool operator ==( const CFBamChainByNextRelIdxKey& rhs );
		bool operator ==( const CFBamChainHBuff& rhs );
		bool operator ==( const CFBamChainBuff& rhs );

		bool operator !=( const CFBamChainByNextRelIdxKey& rhs );
		bool operator !=( const CFBamChainHBuff& rhs );
		bool operator !=( const CFBamChainBuff& rhs );

		bool operator >=( const CFBamChainByNextRelIdxKey& rhs );
		bool operator >=( const CFBamChainHBuff& rhs );
		bool operator >=( const CFBamChainBuff& rhs );

		bool operator >( const CFBamChainByNextRelIdxKey& rhs );
		bool operator >( const CFBamChainHBuff& rhs );
		bool operator >( const CFBamChainBuff& rhs );
		cfbam::CFBamChainByNextRelIdxKey operator =( cfbam::CFBamChainByNextRelIdxKey& src );
		cfbam::CFBamChainByNextRelIdxKey operator =( cfbam::CFBamChainBuff& src );
		cfbam::CFBamChainByNextRelIdxKey operator =( cfbam::CFBamChainHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs );
	bool operator <(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs );
	bool operator <(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs );

	bool operator <=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs );
	bool operator <=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs );

	bool operator ==(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs );
	bool operator ==(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs );

	bool operator !=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs );
	bool operator !=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs );

	bool operator >=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs );
	bool operator >=(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs );

	bool operator >(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainByNextRelIdxKey& rhs );
	bool operator >(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainHBuff& rhs );
	bool operator >(const  cfbam::CFBamChainByNextRelIdxKey& lhs, const cfbam::CFBamChainBuff& rhs );

	template<> struct hash<cfbam::CFBamChainByNextRelIdxKey> {
		typedef cfbam::CFBamChainByNextRelIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

