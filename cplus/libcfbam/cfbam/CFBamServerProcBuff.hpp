#pragma once

// Description: C++18 specification for a ServerProc buffer object.

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

#include <cfbam/CFBamServerMethodBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamServerProcHBuff;

	class CFBamServerProcBuff : public CFBamServerMethodBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_DUMMY;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const std::string::size_type DUMMY_MAX_LEN;
	protected:
		std::string* optionalDummy;
	public:
		CFBamServerProcBuff();
		CFBamServerProcBuff( const CFBamServerProcBuff& src );
		virtual ~CFBamServerProcBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const std::string& getOptionalDummyValue() const;
		virtual const std::string* getOptionalDummyReference() const;
		virtual const bool isOptionalDummyNull() const;
		virtual void setOptionalDummyNull();
		virtual void setOptionalDummyValue( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamServerProcHBuff& rhs );
		bool operator <( const CFBamServerProcBuff& rhs );

		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamServerProcHBuff& rhs );
		bool operator <=( const CFBamServerProcBuff& rhs );

		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamServerProcHBuff& rhs );
		bool operator ==( const CFBamServerProcBuff& rhs );

		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamServerProcHBuff& rhs );
		bool operator !=( const CFBamServerProcBuff& rhs );

		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamServerProcHBuff& rhs );
		bool operator >=( const CFBamServerProcBuff& rhs );

		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamServerProcHBuff& rhs );
		bool operator >( const CFBamServerProcBuff& rhs );
		cfbam::CFBamServerProcBuff operator =( cfbam::CFBamServerProcBuff& src );
		cfbam::CFBamServerProcBuff operator =( cfbam::CFBamServerProcHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcHBuff& rhs );
	bool operator <(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcBuff& rhs );

	bool operator <=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcHBuff& rhs );
	bool operator <=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcBuff& rhs );

	bool operator ==(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcHBuff& rhs );
	bool operator ==(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcBuff& rhs );

	bool operator !=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcHBuff& rhs );
	bool operator !=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcBuff& rhs );

	bool operator >=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcHBuff& rhs );
	bool operator >=(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcBuff& rhs );

	bool operator >(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcHBuff& rhs );
	bool operator >(const  cfbam::CFBamServerProcBuff& lhs, const cfbam::CFBamServerProcBuff& rhs );

	template<> struct hash<cfbam::CFBamServerProcBuff> {
		typedef cfbam::CFBamServerProcBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

