#pragma once

// Description: C++18 DbIO interface for SchemaDef.

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
#include <cfsec/CFSecAuthorization.hpp>
#include <cfbam/CFBamHPKey.hpp>
#include <cfbam/CFBamSchemaDefBuff.hpp>
#include <cfbam/CFBamScopePKey.hpp>
#include <cfbam/CFBamSchemaDefHBuff.hpp>
#include <cfbam/CFBamScopeHPKey.hpp>
#include <cfbam/CFBamScopeByTenantIdxKey.hpp>
#include <cfbam/CFBamSchemaDefByCTenantIdxKey.hpp>
#include <cfbam/CFBamSchemaDefByMinorVersionIdxKey.hpp>
#include <cfbam/CFBamSchemaDefByUNameIdxKey.hpp>
#include <cfbam/CFBamSchemaDefByAuthEMailIdxKey.hpp>
#include <cfbam/CFBamSchemaDefByProjectURLIdxKey.hpp>
#include <cfbam/CFBamSchemaDefByPubURIIdxKey.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
}

namespace cfbam {
	class ICFBamSchemaDefObj;

	class ICFBamSchemaDefTable
	{
	public:
		ICFBamSchemaDefTable();
		virtual ~ICFBamSchemaDefTable();

		virtual cfbam::CFBamSchemaDefBuff* createSchemaDef( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamSchemaDefBuff* Buff ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* updateSchemaDef( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamSchemaDefBuff* Buff ) = 0;

		virtual void deleteSchemaDef( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamSchemaDefBuff* Buff ) = 0;
		virtual void deleteSchemaDefByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteSchemaDefByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaDefByCTenantIdxKey* argKey ) = 0;
		virtual void deleteSchemaDefByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argMinorVersionId ) = 0;

		virtual void deleteSchemaDefByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaDefByMinorVersionIdxKey* argKey ) = 0;
		virtual void deleteSchemaDefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argMinorVersionId,
			const std::string& argName ) = 0;

		virtual void deleteSchemaDefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaDefByUNameIdxKey* argKey ) = 0;
		virtual void deleteSchemaDefByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argAuthorEMail ) = 0;

		virtual void deleteSchemaDefByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaDefByAuthEMailIdxKey* argKey ) = 0;
		virtual void deleteSchemaDefByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argProjectURL ) = 0;

		virtual void deleteSchemaDefByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaDefByProjectURLIdxKey* argKey ) = 0;
		virtual void deleteSchemaDefByPubURIIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argPublishURI ) = 0;

		virtual void deleteSchemaDefByPubURIIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaDefByPubURIIdxKey* argKey ) = 0;
		virtual void deleteSchemaDefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId ) = 0;

		virtual void deleteSchemaDefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey ) = 0;
		virtual void deleteSchemaDefByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteSchemaDefByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readDerivedByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readDerivedByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readDerivedByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& AuthorEMail ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readDerivedByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& ProjectURL ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* readDerivedByPubURIIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& PublishURI ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readBuffByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readBuffByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId,
			const std::string& Name ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readBuffByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& AuthorEMail ) = 0;

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readBuffByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& ProjectURL ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* readBuffByPubURIIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& PublishURI ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfbam::CFBamSchemaDefBuff* readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId, const std::string& Name,
			bool forceRead = false ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
