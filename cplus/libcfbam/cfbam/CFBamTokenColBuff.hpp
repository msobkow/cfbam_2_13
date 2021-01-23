#pragma once

// Description: C++18 specification for a TokenCol buffer object.

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

#include <cfbam/CFBamTokenDefBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamValuePKey;
	class CFBamValueHPKey;
	class CFBamTokenColHBuff;
	class CFBamTokenColByTableIdxKey;

	class CFBamTokenColBuff : public CFBamTokenDefBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_TABLEID;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t TABLEID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t TABLEID_MIN_VALUE;
	protected:
		int64_t requiredTableId;
	public:
		CFBamTokenColBuff();
		CFBamTokenColBuff( const CFBamTokenColBuff& src );
		virtual ~CFBamTokenColBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredTableId() const;
		virtual const int64_t* getRequiredTableIdReference() const;
		virtual void setRequiredTableId( const int64_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamTokenColByTableIdxKey& rhs );
		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamTokenColHBuff& rhs );
		bool operator <( const CFBamTokenColBuff& rhs );

		bool operator <=( const CFBamTokenColByTableIdxKey& rhs );
		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamTokenColHBuff& rhs );
		bool operator <=( const CFBamTokenColBuff& rhs );

		bool operator ==( const CFBamTokenColByTableIdxKey& rhs );
		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamTokenColHBuff& rhs );
		bool operator ==( const CFBamTokenColBuff& rhs );

		bool operator !=( const CFBamTokenColByTableIdxKey& rhs );
		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamTokenColHBuff& rhs );
		bool operator !=( const CFBamTokenColBuff& rhs );

		bool operator >=( const CFBamTokenColByTableIdxKey& rhs );
		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamTokenColHBuff& rhs );
		bool operator >=( const CFBamTokenColBuff& rhs );

		bool operator >( const CFBamTokenColByTableIdxKey& rhs );
		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamTokenColHBuff& rhs );
		bool operator >( const CFBamTokenColBuff& rhs );
		cfbam::CFBamTokenColBuff operator =( cfbam::CFBamTokenColBuff& src );
		cfbam::CFBamTokenColBuff operator =( cfbam::CFBamTokenColHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColByTableIdxKey& rhs );
	bool operator <(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColHBuff& rhs );
	bool operator <(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColBuff& rhs );

	bool operator <=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColByTableIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColHBuff& rhs );
	bool operator <=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColBuff& rhs );

	bool operator ==(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColByTableIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColHBuff& rhs );
	bool operator ==(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColBuff& rhs );

	bool operator !=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColByTableIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColHBuff& rhs );
	bool operator !=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColBuff& rhs );

	bool operator >=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColByTableIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColHBuff& rhs );
	bool operator >=(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColBuff& rhs );

	bool operator >(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColByTableIdxKey& rhs );

	bool operator >(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColHBuff& rhs );
	bool operator >(const  cfbam::CFBamTokenColBuff& lhs, const cfbam::CFBamTokenColBuff& rhs );

	template<> struct hash<cfbam::CFBamTokenColBuff> {
		typedef cfbam::CFBamTokenColBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

