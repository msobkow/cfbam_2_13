#pragma once

// Description: C++18 specification for a SchemaDef by DefLcnIdx index key object.

/*
 *	com.github.msobkow.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	This file is part of MSS Code Factory.
 *	
 *	MSS Code Factory is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *	
 *	MSS Code Factory is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *	
 *	You should have received a copy of the GNU General Public License
 *	along with MSS Code Factory.  If not, see https://www.gnu.org/licenses/.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */
#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamSchemaDefBuff;
	class CFBamSchemaDefHBuff;

	class CFBamSchemaDefByDefLcnIdxKey
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string S_VALUE;
		static const std::string S_VALUE_LENGTH;
	protected:
		cflib::CFLibNullableInt64 optionalDefaultLicenseTenantId;
		cflib::CFLibNullableInt64 optionalDefaultLicenseId;
	public:
		CFBamSchemaDefByDefLcnIdxKey();
		CFBamSchemaDefByDefLcnIdxKey( const CFBamSchemaDefByDefLcnIdxKey& src );
		virtual ~CFBamSchemaDefByDefLcnIdxKey();

		virtual const int64_t getOptionalDefaultLicenseTenantIdValue() const;
		virtual const int64_t* getOptionalDefaultLicenseTenantIdReference() const;
		virtual const bool isOptionalDefaultLicenseTenantIdNull() const;
		virtual void setOptionalDefaultLicenseTenantIdNull();
		virtual void setOptionalDefaultLicenseTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalDefaultLicenseIdValue() const;
		virtual const int64_t* getOptionalDefaultLicenseIdReference() const;
		virtual const bool isOptionalDefaultLicenseIdNull() const;
		virtual void setOptionalDefaultLicenseIdNull();
		virtual void setOptionalDefaultLicenseIdValue( const int64_t value );

		virtual size_t hashCode() const;

		std::string toString();

		bool operator <( const CFBamSchemaDefByDefLcnIdxKey& rhs );
		bool operator <( const CFBamSchemaDefHBuff& rhs );
		bool operator <( const CFBamSchemaDefBuff& rhs );

		bool operator <=( const CFBamSchemaDefByDefLcnIdxKey& rhs );
		bool operator <=( const CFBamSchemaDefHBuff& rhs );
		bool operator <=( const CFBamSchemaDefBuff& rhs );

		bool operator ==( const CFBamSchemaDefByDefLcnIdxKey& rhs );
		bool operator ==( const CFBamSchemaDefHBuff& rhs );
		bool operator ==( const CFBamSchemaDefBuff& rhs );

		bool operator !=( const CFBamSchemaDefByDefLcnIdxKey& rhs );
		bool operator !=( const CFBamSchemaDefHBuff& rhs );
		bool operator !=( const CFBamSchemaDefBuff& rhs );

		bool operator >=( const CFBamSchemaDefByDefLcnIdxKey& rhs );
		bool operator >=( const CFBamSchemaDefHBuff& rhs );
		bool operator >=( const CFBamSchemaDefBuff& rhs );

		bool operator >( const CFBamSchemaDefByDefLcnIdxKey& rhs );
		bool operator >( const CFBamSchemaDefHBuff& rhs );
		bool operator >( const CFBamSchemaDefBuff& rhs );
		cfbam::CFBamSchemaDefByDefLcnIdxKey operator =( cfbam::CFBamSchemaDefByDefLcnIdxKey& src );
		cfbam::CFBamSchemaDefByDefLcnIdxKey operator =( cfbam::CFBamSchemaDefBuff& src );
		cfbam::CFBamSchemaDefByDefLcnIdxKey operator =( cfbam::CFBamSchemaDefHBuff& src );
};
}

namespace std {

	bool operator <(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefByDefLcnIdxKey& rhs );
	bool operator <(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs );
	bool operator <(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs );

	bool operator <=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefByDefLcnIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs );
	bool operator <=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs );

	bool operator ==(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefByDefLcnIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs );
	bool operator ==(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs );

	bool operator !=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefByDefLcnIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs );
	bool operator !=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs );

	bool operator >=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefByDefLcnIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs );
	bool operator >=(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs );

	bool operator >(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefByDefLcnIdxKey& rhs );
	bool operator >(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefHBuff& rhs );
	bool operator >(const  cfbam::CFBamSchemaDefByDefLcnIdxKey& lhs, const cfbam::CFBamSchemaDefBuff& rhs );

	template<> struct hash<cfbam::CFBamSchemaDefByDefLcnIdxKey> {
		typedef cfbam::CFBamSchemaDefByDefLcnIdxKey argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

