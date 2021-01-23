#pragma once

// Description: C++18 specification for a Id64Gen buffer object.

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

#include <cfbam/CFBamInt64TypeBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamValuePKey;
	class CFBamValueHPKey;
	class CFBamId64GenHBuff;
	class CFBamId64GenByDispIdxKey;

	class CFBamId64GenBuff : public CFBamInt64TypeBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_DISPENSERTENANTID;
		static const std::string COLNAME_DISPENSERID;
		static const std::string COLNAME_SLICE;
		static const std::string COLNAME_BLOCKSIZE;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t DISPENSERTENANTID_INIT_VALUE;
		static const int64_t DISPENSERID_INIT_VALUE;
		static const int16_t SLICE_INIT_VALUE;
		static const int64_t BLOCKSIZE_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t DISPENSERTENANTID_MIN_VALUE;
		static const int64_t DISPENSERID_MIN_VALUE;
		static const int16_t SLICE_MIN_VALUE;
		static const int64_t BLOCKSIZE_MIN_VALUE;
		static const int16_t SLICE_MAX_VALUE;
		static const int64_t BLOCKSIZE_MAX_VALUE;
	protected:
		cflib::CFLibNullableInt64 optionalDispenserTenantId;
		cflib::CFLibNullableInt64 optionalDispenserId;
		int16_t requiredSlice;
		int64_t requiredBlockSize;
	public:
		CFBamId64GenBuff();
		CFBamId64GenBuff( const CFBamId64GenBuff& src );
		virtual ~CFBamId64GenBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getOptionalDispenserTenantIdValue() const;
		virtual const int64_t* getOptionalDispenserTenantIdReference() const;
		virtual const bool isOptionalDispenserTenantIdNull() const;
		virtual void setOptionalDispenserTenantIdNull();
		virtual void setOptionalDispenserTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalDispenserIdValue() const;
		virtual const int64_t* getOptionalDispenserIdReference() const;
		virtual const bool isOptionalDispenserIdNull() const;
		virtual void setOptionalDispenserIdNull();
		virtual void setOptionalDispenserIdValue( const int64_t value );

		virtual const int16_t getRequiredSlice() const;
		virtual const int16_t* getRequiredSliceReference() const;
		virtual void setRequiredSlice( const int16_t value );

		virtual const int64_t getRequiredBlockSize() const;
		virtual const int64_t* getRequiredBlockSizeReference() const;
		virtual void setRequiredBlockSize( const int64_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamId64GenByDispIdxKey& rhs );
		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamId64GenHBuff& rhs );
		bool operator <( const CFBamId64GenBuff& rhs );

		bool operator <=( const CFBamId64GenByDispIdxKey& rhs );
		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamId64GenHBuff& rhs );
		bool operator <=( const CFBamId64GenBuff& rhs );

		bool operator ==( const CFBamId64GenByDispIdxKey& rhs );
		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamId64GenHBuff& rhs );
		bool operator ==( const CFBamId64GenBuff& rhs );

		bool operator !=( const CFBamId64GenByDispIdxKey& rhs );
		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamId64GenHBuff& rhs );
		bool operator !=( const CFBamId64GenBuff& rhs );

		bool operator >=( const CFBamId64GenByDispIdxKey& rhs );
		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamId64GenHBuff& rhs );
		bool operator >=( const CFBamId64GenBuff& rhs );

		bool operator >( const CFBamId64GenByDispIdxKey& rhs );
		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamId64GenHBuff& rhs );
		bool operator >( const CFBamId64GenBuff& rhs );
		cfbam::CFBamId64GenBuff operator =( cfbam::CFBamId64GenBuff& src );
		cfbam::CFBamId64GenBuff operator =( cfbam::CFBamId64GenHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenByDispIdxKey& rhs );
	bool operator <(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenHBuff& rhs );
	bool operator <(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenBuff& rhs );

	bool operator <=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenByDispIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenHBuff& rhs );
	bool operator <=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenBuff& rhs );

	bool operator ==(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenByDispIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenHBuff& rhs );
	bool operator ==(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenBuff& rhs );

	bool operator !=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenByDispIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenHBuff& rhs );
	bool operator !=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenBuff& rhs );

	bool operator >=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenByDispIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenHBuff& rhs );
	bool operator >=(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenBuff& rhs );

	bool operator >(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenByDispIdxKey& rhs );

	bool operator >(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenHBuff& rhs );
	bool operator >(const  cfbam::CFBamId64GenBuff& lhs, const cfbam::CFBamId64GenBuff& rhs );

	template<> struct hash<cfbam::CFBamId64GenBuff> {
		typedef cfbam::CFBamId64GenBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

