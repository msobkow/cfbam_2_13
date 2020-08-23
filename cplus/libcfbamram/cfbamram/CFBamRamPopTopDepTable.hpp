#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for PopTopDep.

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
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamsaxloader/CFBamSaxLoader.hpp>

namespace cfbam {

	class CFBamRamPopTopDepTable
	: public virtual cfbam::ICFBamPopTopDepTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamPopTopDepBuff*>* dictByPKey;
		std::map<cfbam::CFBamPopTopDepByContRelIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamPopTopDepBuff*>*>* dictByContRelIdx;
		std::map<cfbam::CFBamPopTopDepByUNameIdxKey,
			cfbam::CFBamPopTopDepBuff*>* dictByUNameIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamPopTopDepTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamPopTopDepTable();

		virtual cfbam::CFBamPopTopDepBuff* createPopTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopTopDepBuff* Buff );

		virtual cfbam::CFBamPopTopDepBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamPopTopDepBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readDerivedByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId );

		virtual cfbam::CFBamPopTopDepBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId,
			const std::string& Name );

		virtual cfbam::CFBamPopTopDepBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamPopTopDepBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamPopTopDepBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamPopTopDepBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> readBuffByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId );

		virtual cfbam::CFBamPopTopDepBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> pageBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamPopTopDepBuff*> pageBuffByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ContRelationTenantId,
			const int64_t ContRelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamPopTopDepBuff* updatePopTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopTopDepBuff* Buff );

		virtual void deletePopTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamPopTopDepBuff* Buff );
		virtual void deletePopTopDepByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argContRelationTenantId,
			const int64_t argContRelationId );

		virtual void deletePopTopDepByContRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopTopDepByContRelIdxKey* argKey );

		virtual void deletePopTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argContRelationTenantId,
			const int64_t argContRelationId,
			const std::string& argName );

		virtual void deletePopTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopTopDepByUNameIdxKey* argKey );

		virtual void deletePopTopDepByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId );

		virtual void deletePopTopDepByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByRelationIdxKey* argKey );

		virtual void deletePopTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deletePopTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamPopDepByDefSchemaIdxKey* argKey );

		virtual void deletePopTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deletePopTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deletePopTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deletePopTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
