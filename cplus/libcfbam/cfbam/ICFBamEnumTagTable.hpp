#pragma once

// Description: C++18 DbIO interface for EnumTag.

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
#include <cfsec/CFSecAuthorization.hpp>
#include <cfbam/CFBamHPKey.hpp>
#include <cfbam/CFBamEnumTagBuff.hpp>
#include <cfbam/CFBamEnumTagPKey.hpp>
#include <cfbam/CFBamEnumTagHBuff.hpp>
#include <cfbam/CFBamEnumTagHPKey.hpp>
#include <cfbam/CFBamEnumTagByEnumTagTenantIdxKey.hpp>
#include <cfbam/CFBamEnumTagByEnumIdxKey.hpp>
#include <cfbam/CFBamEnumTagByDefSchemaIdxKey.hpp>
#include <cfbam/CFBamEnumTagByEnumNameIdxKey.hpp>
#include <cfbam/CFBamEnumTagByPrevIdxKey.hpp>
#include <cfbam/CFBamEnumTagByNextIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamEnumTagObj;

	class ICFBamEnumTagTable
	{
	public:
		ICFBamEnumTagTable();
		virtual ~ICFBamEnumTagTable();

		virtual cfbam::CFBamEnumTagBuff* createEnumTag( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamEnumTagBuff* Buff ) = 0;

		virtual cfbam::CFBamEnumTagBuff* updateEnumTag( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamEnumTagBuff* Buff ) = 0;

		virtual void deleteEnumTag( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamEnumTagBuff* Buff ) = 0;
		virtual void deleteEnumTagByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteEnumTagByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamEnumTagPKey* argKey ) = 0;
		virtual void deleteEnumTagByEnumTagTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteEnumTagByEnumTagTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamEnumTagByEnumTagTenantIdxKey* argKey ) = 0;
		virtual void deleteEnumTagByEnumIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argEnumId ) = 0;

		virtual void deleteEnumTagByEnumIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamEnumTagByEnumIdxKey* argKey ) = 0;
		virtual void deleteEnumTagByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId ) = 0;

		virtual void deleteEnumTagByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamEnumTagByDefSchemaIdxKey* argKey ) = 0;
		virtual void deleteEnumTagByEnumNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argEnumId,
			const std::string& argName ) = 0;

		virtual void deleteEnumTagByEnumNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamEnumTagByEnumNameIdxKey* argKey ) = 0;
		virtual void deleteEnumTagByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId ) = 0;

		virtual void deleteEnumTagByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamEnumTagByPrevIdxKey* argKey ) = 0;
		virtual void deleteEnumTagByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId ) = 0;

		virtual void deleteEnumTagByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamEnumTagByNextIdxKey* argKey ) = 0;

		virtual cfbam::CFBamEnumTagBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamEnumTagPKey* PKey ) = 0;

		virtual cfbam::CFBamEnumTagBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamEnumTagPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamEnumTagBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> readDerivedByEnumTagTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> readDerivedByEnumIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t EnumId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual cfbam::CFBamEnumTagBuff* readDerivedByEnumNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t EnumId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual cfbam::CFBamEnumTagBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamEnumTagPKey* PKey ) = 0;

		virtual cfbam::CFBamEnumTagBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamEnumTagPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamEnumTagBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> readBuffByEnumTagTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> readBuffByEnumIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t EnumId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) = 0;

		virtual cfbam::CFBamEnumTagBuff* readBuffByEnumNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t EnumId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamEnumTagBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId ) = 0;

		virtual cfbam::CFBamEnumTagBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual cfbam::CFBamEnumTagBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
