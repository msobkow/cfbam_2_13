#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for SchemaDef.

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
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamsaxloader/CFBamSaxLoader.hpp>

namespace cfbam {

	class CFBamRamSchemaDefTable
	: public virtual cfbam::ICFBamSchemaDefTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaDefBuff*>* dictByPKey;
		std::map<cfbam::CFBamSchemaDefByCTenantIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>*>* dictByCTenantIdx;
		std::map<cfbam::CFBamSchemaDefByMinorVersionIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>*>* dictByMinorVersionIdx;
		std::map<cfbam::CFBamSchemaDefByUNameIdxKey,
			cfbam::CFBamSchemaDefBuff*>* dictByUNameIdx;
		std::map<cfbam::CFBamSchemaDefByAuthEMailIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>*>* dictByAuthEMailIdx;
		std::map<cfbam::CFBamSchemaDefByProjectURLIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaDefBuff*>*>* dictByProjectURLIdx;
		std::map<cfbam::CFBamSchemaDefByPubURIIdxKey,
			cfbam::CFBamSchemaDefBuff*>* dictByPubURIIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamSchemaDefTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamSchemaDefTable();

		virtual cfbam::CFBamSchemaDefBuff* createSchemaDef( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamSchemaDefBuff* Buff );

		virtual cfbam::CFBamSchemaDefBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamSchemaDefBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readDerivedByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readDerivedByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId );

		virtual cfbam::CFBamSchemaDefBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readDerivedByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& AuthorEMail );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readDerivedByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& ProjectURL );

		virtual cfbam::CFBamSchemaDefBuff* readDerivedByPubURIIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& PublishURI );

		virtual cfbam::CFBamSchemaDefBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamSchemaDefBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamSchemaDefBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamSchemaDefBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readBuffByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readBuffByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId );

		virtual cfbam::CFBamSchemaDefBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readBuffByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& AuthorEMail );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> readBuffByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& ProjectURL );

		virtual cfbam::CFBamSchemaDefBuff* readBuffByPubURIIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& PublishURI );

		virtual cfbam::CFBamSchemaDefBuff* readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId, const std::string& Name,
			bool forceRead = false );

		virtual cfbam::CFBamSchemaDefBuff* readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId, const std::string& Name,
			bool forceRead = false );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> pageBuffByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> pageBuffByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t MinorVersionId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> pageBuffByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& AuthorEMail,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaDefBuff*> pageBuffByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& ProjectURL,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamSchemaDefBuff* updateSchemaDef( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamSchemaDefBuff* Buff );

		virtual void deleteSchemaDef( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamSchemaDefBuff* Buff );
		virtual void deleteSchemaDefByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteSchemaDefByCTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaDefByCTenantIdxKey* argKey );

		virtual void deleteSchemaDefByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argMinorVersionId );

		virtual void deleteSchemaDefByMinorVersionIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaDefByMinorVersionIdxKey* argKey );

		virtual void deleteSchemaDefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argMinorVersionId,
			const std::string& argName );

		virtual void deleteSchemaDefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaDefByUNameIdxKey* argKey );

		virtual void deleteSchemaDefByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argAuthorEMail );

		virtual void deleteSchemaDefByAuthEMailIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaDefByAuthEMailIdxKey* argKey );

		virtual void deleteSchemaDefByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argProjectURL );

		virtual void deleteSchemaDefByProjectURLIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaDefByProjectURLIdxKey* argKey );

		virtual void deleteSchemaDefByPubURIIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argPublishURI );

		virtual void deleteSchemaDefByPubURIIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaDefByPubURIIdxKey* argKey );

		virtual void deleteSchemaDefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteSchemaDefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteSchemaDefByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteSchemaDefByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
