#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for SchemaRef.

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

	class CFBamRamSchemaRefTable
	: public virtual cfbam::ICFBamSchemaRefTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamSchemaRefBuff*>* dictByPKey;
		std::map<cfbam::CFBamSchemaRefBySchemaIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>*>* dictBySchemaIdx;
		std::map<cfbam::CFBamSchemaRefByUNameIdxKey,
			cfbam::CFBamSchemaRefBuff*>* dictByUNameIdx;
		std::map<cfbam::CFBamSchemaRefByRefSchemaIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>*>* dictByRefSchemaIdx;
		std::map<cfbam::CFBamSchemaRefByPrevIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>*>* dictByPrevIdx;
		std::map<cfbam::CFBamSchemaRefByNextIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamSchemaRefBuff*>*>* dictByNextIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamSchemaRefTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamSchemaRefTable();

		virtual cfbam::CFBamSchemaRefBuff* createSchemaRef( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamSchemaRefBuff* Buff );

		virtual cfbam::CFBamSchemaRefBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamSchemaRefBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readDerivedBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId );

		virtual cfbam::CFBamSchemaRefBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readDerivedByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RefSchemaTenantId,
			const int64_t* RefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual cfbam::CFBamSchemaRefBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamSchemaRefBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamSchemaRefBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamSchemaRefBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readBuffBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId );

		virtual cfbam::CFBamSchemaRefBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readBuffByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RefSchemaTenantId,
			const int64_t* RefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> pageBuffBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> pageBuffByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RefSchemaTenantId,
			const int64_t* RefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> pageBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> pageBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamSchemaRefBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamSchemaRefBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamSchemaRefBuff* updateSchemaRef( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamSchemaRefBuff* Buff );

		virtual void deleteSchemaRef( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamSchemaRefBuff* Buff );
		virtual void deleteSchemaRefBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaId );

		virtual void deleteSchemaRefBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaRefBySchemaIdxKey* argKey );

		virtual void deleteSchemaRefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaId,
			const std::string& argName );

		virtual void deleteSchemaRefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaRefByUNameIdxKey* argKey );

		virtual void deleteSchemaRefByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argRefSchemaTenantId,
			const int64_t* argRefSchemaId );

		virtual void deleteSchemaRefByRefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaRefByRefSchemaIdxKey* argKey );

		virtual void deleteSchemaRefByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId );

		virtual void deleteSchemaRefByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaRefByPrevIdxKey* argKey );

		virtual void deleteSchemaRefByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId );

		virtual void deleteSchemaRefByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamSchemaRefByNextIdxKey* argKey );

		virtual void deleteSchemaRefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteSchemaRefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteSchemaRefByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteSchemaRefByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
