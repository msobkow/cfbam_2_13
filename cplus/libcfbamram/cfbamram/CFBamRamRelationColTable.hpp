#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for RelationCol.

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

	class CFBamRamRelationColTable
	: public virtual cfbam::ICFBamRelationColTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamRelationColPKey,
			cfbam::CFBamRelationColBuff*>* dictByPKey;
		std::map<cfbam::CFBamRelationColByUNameIdxKey,
			cfbam::CFBamRelationColBuff*>* dictByUNameIdx;
		std::map<cfbam::CFBamRelationColByRelColTenantIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>* dictByRelColTenantIdx;
		std::map<cfbam::CFBamRelationColByRelationIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>* dictByRelationIdx;
		std::map<cfbam::CFBamRelationColByDefSchemaIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>* dictByDefSchemaIdx;
		std::map<cfbam::CFBamRelationColByFromColIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>* dictByFromColIdx;
		std::map<cfbam::CFBamRelationColByToColIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>* dictByToColIdx;
		std::map<cfbam::CFBamRelationColByPrevIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>* dictByPrevIdx;
		std::map<cfbam::CFBamRelationColByNextIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>* dictByNextIdx;
		std::map<cfbam::CFBamRelationColByRelPrevIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>* dictByRelPrevIdx;
		std::map<cfbam::CFBamRelationColByRelNextIdxKey,
			std::map<cfbam::CFBamRelationColPKey,
				cfbam::CFBamRelationColBuff*>*>* dictByRelNextIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamRelationColTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamRelationColTable();

		virtual cfbam::CFBamRelationColBuff* createRelationCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamRelationColBuff* Buff );

		virtual cfbam::CFBamRelationColBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColPKey* PKey );

		virtual cfbam::CFBamRelationColBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColPKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamRelationColBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByRelColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByFromColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromColId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByToColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToColId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByRelPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readDerivedByRelNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* NextId );

		virtual cfbam::CFBamRelationColBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamRelationColBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColPKey* PKey );

		virtual cfbam::CFBamRelationColBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColPKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamRelationColBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamRelationColBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByRelColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByFromColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromColId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByToColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToColId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByRelPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> readBuffByRelNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* NextId );

		virtual cfbam::CFBamRelationColBuff* readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId, const std::string& Name,
			bool forceRead = false );

		virtual cfbam::CFBamRelationColBuff* readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId, const std::string& Name,
			bool forceRead = false );

		virtual cfbam::CFBamRelationColBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamRelationColBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamRelationColBuff* updateRelationCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamRelationColBuff* Buff );

		virtual void deleteRelationCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamRelationColBuff* Buff );
		virtual void deleteRelationColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteRelationColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColPKey* argKey );

		virtual void deleteRelationColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId,
			const std::string& argName );

		virtual void deleteRelationColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByUNameIdxKey* argKey );

		virtual void deleteRelationColByRelColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteRelationColByRelColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByRelColTenantIdxKey* argKey );

		virtual void deleteRelationColByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId );

		virtual void deleteRelationColByRelationIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByRelationIdxKey* argKey );

		virtual void deleteRelationColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteRelationColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByDefSchemaIdxKey* argKey );

		virtual void deleteRelationColByFromColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argFromColId );

		virtual void deleteRelationColByFromColIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByFromColIdxKey* argKey );

		virtual void deleteRelationColByToColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argToColId );

		virtual void deleteRelationColByToColIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByToColIdxKey* argKey );

		virtual void deleteRelationColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId );

		virtual void deleteRelationColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByPrevIdxKey* argKey );

		virtual void deleteRelationColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId );

		virtual void deleteRelationColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByNextIdxKey* argKey );

		virtual void deleteRelationColByRelPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId,
			const int64_t* argPrevId );

		virtual void deleteRelationColByRelPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByRelPrevIdxKey* argKey );

		virtual void deleteRelationColByRelNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId,
			const int64_t* argNextId );

		virtual void deleteRelationColByRelNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationColByRelNextIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
