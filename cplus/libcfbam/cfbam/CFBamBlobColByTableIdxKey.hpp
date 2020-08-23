#pragma once

// Description: C++18 specification for a BlobCol by TableIdx index key object.

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

	class CFBamBlobColBuff;
	class CFBamBlobColHBuff;

	class CFBamBlobColByTableIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		int64_t requiredTenantId;
		int64_t requiredTableId;
	public:
		CFBamBlobColByTableIdxKey();
		CFBamBlobColByTableIdxKey( const CFBamBlobColByTableIdxKey& src );
		virtual ~CFBamBlobColByTableIdxKey();

		virtual const int64_t getRequiredTenantId() const;
		virtual const int64_t* getRequiredTenantIdReference() const;
		virtual void setRequiredTenantId( const int64_t value );

		virtual const int64_t getRequiredTableId() const;
		virtual const int64_t* getRequiredTableIdReference() const;
		virtual void setRequiredTableId( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamBlobColByTableIdxKey& rhs );
		bool operator <( const CFBamBlobColHBuff& rhs );
		bool operator <( const CFBamBlobColBuff& rhs );

		bool operator <=( const CFBamBlobColByTableIdxKey& rhs );
		bool operator <=( const CFBamBlobColHBuff& rhs );
		bool operator <=( const CFBamBlobColBuff& rhs );

		bool operator ==( const CFBamBlobColByTableIdxKey& rhs );
		bool operator ==( const CFBamBlobColHBuff& rhs );
		bool operator ==( const CFBamBlobColBuff& rhs );

		bool operator !=( const CFBamBlobColByTableIdxKey& rhs );
		bool operator !=( const CFBamBlobColHBuff& rhs );
		bool operator !=( const CFBamBlobColBuff& rhs );

		bool operator >=( const CFBamBlobColByTableIdxKey& rhs );
		bool operator >=( const CFBamBlobColHBuff& rhs );
		bool operator >=( const CFBamBlobColBuff& rhs );

		bool operator >( const CFBamBlobColByTableIdxKey& rhs );
		bool operator >( const CFBamBlobColHBuff& rhs );
		bool operator >( const CFBamBlobColBuff& rhs );
		cfbam::CFBamBlobColByTableIdxKey operator =( cfbam::CFBamBlobColByTableIdxKey& src );
		cfbam::CFBamBlobColByTableIdxKey operator =( cfbam::CFBamBlobColBuff& src );
		cfbam::CFBamBlobColByTableIdxKey operator =( cfbam::CFBamBlobColHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColByTableIdxKey& rhs );
	bool operator <(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColHBuff& rhs );
	bool operator <(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColBuff& rhs );

	bool operator <=(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColByTableIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColHBuff& rhs );
	bool operator <=(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColBuff& rhs );

	bool operator ==(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColByTableIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColHBuff& rhs );
	bool operator ==(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColBuff& rhs );

	bool operator !=(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColByTableIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColHBuff& rhs );
	bool operator !=(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColBuff& rhs );

	bool operator >=(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColByTableIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColHBuff& rhs );
	bool operator >=(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColBuff& rhs );

	bool operator >(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColByTableIdxKey& rhs );
	bool operator >(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColHBuff& rhs );
	bool operator >(const  cfbam::CFBamBlobColByTableIdxKey& lhs, const cfbam::CFBamBlobColBuff& rhs );

	template<> struct hash<cfbam::CFBamBlobColByTableIdxKey> {
		typedef cfbam::CFBamBlobColByTableIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

