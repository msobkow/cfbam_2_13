#pragma once

// Description: C++18 specification for a PopTopDep buffer object.

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

#include <cfbam/CFBamPopDepBuff.hpp>
#include <cfbam/ICFBamSchema.hpp>

namespace cfbam {

	class CFBamScopePKey;
	class CFBamScopeHPKey;
	class CFBamPopTopDepHBuff;
	class CFBamPopTopDepByContRelIdxKey;
	class CFBamPopTopDepByUNameIdxKey;

	class CFBamPopTopDepBuff : public CFBamPopDepBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_CONTRELATIONTENANTID;
		static const std::string COLNAME_CONTRELATIONID;
		static const std::string COLNAME_NAME;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t ID_INIT_VALUE;
		static const int64_t CONTRELATIONTENANTID_INIT_VALUE;
		static const int64_t CONTRELATIONID_INIT_VALUE;
		static const std::string NAME_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t ID_MIN_VALUE;
		static const int64_t CONTRELATIONTENANTID_MIN_VALUE;
		static const int64_t CONTRELATIONID_MIN_VALUE;
		static const std::string::size_type NAME_MAX_LEN;
	protected:
		int64_t requiredContRelationTenantId;
		int64_t requiredContRelationId;
		std::string* requiredName;
	public:
		CFBamPopTopDepBuff();
		CFBamPopTopDepBuff( const CFBamPopTopDepBuff& src );
		virtual ~CFBamPopTopDepBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const int64_t getRequiredContRelationTenantId() const;
		virtual const int64_t* getRequiredContRelationTenantIdReference() const;
		virtual void setRequiredContRelationTenantId( const int64_t value );

		virtual const int64_t getRequiredContRelationId() const;
		virtual const int64_t* getRequiredContRelationIdReference() const;
		virtual void setRequiredContRelationId( const int64_t value );

		virtual const std::string& getRequiredName() const;
		virtual const std::string* getRequiredNameReference() const;
		virtual void setRequiredName( const std::string& value );

		virtual size_t hashCode() const;

		bool operator <( const CFBamPopTopDepByContRelIdxKey& rhs );
		bool operator <( const CFBamPopTopDepByUNameIdxKey& rhs );
		bool operator <( const CFBamScopePKey& rhs );
		bool operator <( const CFBamScopeHPKey& rhs );
		bool operator <( const CFBamPopTopDepHBuff& rhs );
		bool operator <( const CFBamPopTopDepBuff& rhs );

		bool operator <=( const CFBamPopTopDepByContRelIdxKey& rhs );
		bool operator <=( const CFBamPopTopDepByUNameIdxKey& rhs );
		bool operator <=( const CFBamScopePKey& rhs );
		bool operator <=( const CFBamScopeHPKey& rhs );
		bool operator <=( const CFBamPopTopDepHBuff& rhs );
		bool operator <=( const CFBamPopTopDepBuff& rhs );

		bool operator ==( const CFBamPopTopDepByContRelIdxKey& rhs );
		bool operator ==( const CFBamPopTopDepByUNameIdxKey& rhs );
		bool operator ==( const CFBamScopePKey& rhs );
		bool operator ==( const CFBamScopeHPKey& rhs );
		bool operator ==( const CFBamPopTopDepHBuff& rhs );
		bool operator ==( const CFBamPopTopDepBuff& rhs );

		bool operator !=( const CFBamPopTopDepByContRelIdxKey& rhs );
		bool operator !=( const CFBamPopTopDepByUNameIdxKey& rhs );
		bool operator !=( const CFBamScopePKey& rhs );
		bool operator !=( const CFBamScopeHPKey& rhs );
		bool operator !=( const CFBamPopTopDepHBuff& rhs );
		bool operator !=( const CFBamPopTopDepBuff& rhs );

		bool operator >=( const CFBamPopTopDepByContRelIdxKey& rhs );
		bool operator >=( const CFBamPopTopDepByUNameIdxKey& rhs );
		bool operator >=( const CFBamScopePKey& rhs );
		bool operator >=( const CFBamScopeHPKey& rhs );
		bool operator >=( const CFBamPopTopDepHBuff& rhs );
		bool operator >=( const CFBamPopTopDepBuff& rhs );

		bool operator >( const CFBamPopTopDepByContRelIdxKey& rhs );
		bool operator >( const CFBamPopTopDepByUNameIdxKey& rhs );
		bool operator >( const CFBamScopePKey& rhs );
		bool operator >( const CFBamScopeHPKey& rhs );
		bool operator >( const CFBamPopTopDepHBuff& rhs );
		bool operator >( const CFBamPopTopDepBuff& rhs );
		cfbam::CFBamPopTopDepBuff operator =( cfbam::CFBamPopTopDepBuff& src );
		cfbam::CFBamPopTopDepBuff operator =( cfbam::CFBamPopTopDepHBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs );
	bool operator <(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs );
	bool operator <(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepHBuff& rhs );
	bool operator <(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepBuff& rhs );

	bool operator <=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs );
	bool operator <=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator <=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator <=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepHBuff& rhs );
	bool operator <=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepBuff& rhs );

	bool operator ==(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs );
	bool operator ==(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator ==(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator ==(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepHBuff& rhs );
	bool operator ==(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepBuff& rhs );

	bool operator !=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs );
	bool operator !=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator !=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator !=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepHBuff& rhs );
	bool operator !=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepBuff& rhs );

	bool operator >=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs );
	bool operator >=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepHBuff& rhs );
	bool operator >=(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepBuff& rhs );

	bool operator >(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByContRelIdxKey& rhs );

	bool operator >(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepByUNameIdxKey& rhs );

	bool operator >(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopePKey& rhs );
	bool operator >(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamScopeHPKey& rhs );
	bool operator >(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepHBuff& rhs );
	bool operator >(const  cfbam::CFBamPopTopDepBuff& lhs, const cfbam::CFBamPopTopDepBuff& rhs );

	template<> struct hash<cfbam::CFBamPopTopDepBuff> {
		typedef cfbam::CFBamPopTopDepBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

