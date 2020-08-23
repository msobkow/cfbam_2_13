#pragma once

// Description: C++18 specification for a DoubleCol buffer object.

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

#include <cfbam/CFBamDoubleDefBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamValuePKey;
	class CFBamValueHPKey;
	class CFBamDoubleColHBuff;
	class CFBamDoubleColByTableIdxKey;

	class CFBamDoubleColBuff : public CFBamDoubleDefBuff
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
		CFBamDoubleColBuff();
		CFBamDoubleColBuff( const CFBamDoubleColBuff& src );
		virtual ~CFBamDoubleColBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredTableId() const;
		virtual const int64_t* getRequiredTableIdReference() const;
		virtual void setRequiredTableId( const int64_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamDoubleColByTableIdxKey& rhs );
		bool operator <( const CFBamValuePKey& rhs );
		bool operator <( const CFBamValueHPKey& rhs );
		bool operator <( const CFBamDoubleColHBuff& rhs );
		bool operator <( const CFBamDoubleColBuff& rhs );

		bool operator <=( const CFBamDoubleColByTableIdxKey& rhs );
		bool operator <=( const CFBamValuePKey& rhs );
		bool operator <=( const CFBamValueHPKey& rhs );
		bool operator <=( const CFBamDoubleColHBuff& rhs );
		bool operator <=( const CFBamDoubleColBuff& rhs );

		bool operator ==( const CFBamDoubleColByTableIdxKey& rhs );
		bool operator ==( const CFBamValuePKey& rhs );
		bool operator ==( const CFBamValueHPKey& rhs );
		bool operator ==( const CFBamDoubleColHBuff& rhs );
		bool operator ==( const CFBamDoubleColBuff& rhs );

		bool operator !=( const CFBamDoubleColByTableIdxKey& rhs );
		bool operator !=( const CFBamValuePKey& rhs );
		bool operator !=( const CFBamValueHPKey& rhs );
		bool operator !=( const CFBamDoubleColHBuff& rhs );
		bool operator !=( const CFBamDoubleColBuff& rhs );

		bool operator >=( const CFBamDoubleColByTableIdxKey& rhs );
		bool operator >=( const CFBamValuePKey& rhs );
		bool operator >=( const CFBamValueHPKey& rhs );
		bool operator >=( const CFBamDoubleColHBuff& rhs );
		bool operator >=( const CFBamDoubleColBuff& rhs );

		bool operator >( const CFBamDoubleColByTableIdxKey& rhs );
		bool operator >( const CFBamValuePKey& rhs );
		bool operator >( const CFBamValueHPKey& rhs );
		bool operator >( const CFBamDoubleColHBuff& rhs );
		bool operator >( const CFBamDoubleColBuff& rhs );
		cfbam::CFBamDoubleColBuff operator =( cfbam::CFBamDoubleColBuff& src );
		cfbam::CFBamDoubleColBuff operator =( cfbam::CFBamDoubleColHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColByTableIdxKey& rhs );
	bool operator <(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColHBuff& rhs );
	bool operator <(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColBuff& rhs );

	bool operator <=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColByTableIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator <=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator <=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColHBuff& rhs );
	bool operator <=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColBuff& rhs );

	bool operator ==(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColByTableIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator ==(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator ==(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColHBuff& rhs );
	bool operator ==(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColBuff& rhs );

	bool operator !=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColByTableIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator !=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator !=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColHBuff& rhs );
	bool operator !=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColBuff& rhs );

	bool operator >=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColByTableIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColHBuff& rhs );
	bool operator >=(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColBuff& rhs );

	bool operator >(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColByTableIdxKey& rhs );

	bool operator >(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamValuePKey& rhs );
	bool operator >(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamValueHPKey& rhs );
	bool operator >(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColHBuff& rhs );
	bool operator >(const  cfbam::CFBamDoubleColBuff& lhs, const cfbam::CFBamDoubleColBuff& rhs );

	template<> struct hash<cfbam::CFBamDoubleColBuff> {
		typedef cfbam::CFBamDoubleColBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

