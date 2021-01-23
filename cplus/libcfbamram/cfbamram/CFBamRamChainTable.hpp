#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for Chain.

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

	class CFBamRamChainTable
	: public virtual cfbam::ICFBamChainTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamChainPKey,
			cfbam::CFBamChainBuff*>* dictByPKey;
		std::map<cfbam::CFBamChainByTenantIdxKey,
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>*>* dictByTenantIdx;
		std::map<cfbam::CFBamChainByChainTableIdxKey,
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>*>* dictByChainTableIdx;
		std::map<cfbam::CFBamChainByDefSchemaIdxKey,
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>*>* dictByDefSchemaIdx;
		std::map<cfbam::CFBamChainByUNameIdxKey,
			cfbam::CFBamChainBuff*>* dictByUNameIdx;
		std::map<cfbam::CFBamChainByPrevRelIdxKey,
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>*>* dictByPrevRelIdx;
		std::map<cfbam::CFBamChainByNextRelIdxKey,
			std::map<cfbam::CFBamChainPKey,
				cfbam::CFBamChainBuff*>*>* dictByNextRelIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamChainTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamChainTable();

		virtual cfbam::CFBamChainBuff* createChain( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamChainBuff* Buff );

		virtual cfbam::CFBamChainBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainPKey* PKey );

		virtual cfbam::CFBamChainBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainPKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readDerivedByChainTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId );

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual cfbam::CFBamChainBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readDerivedByPrevRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PrevRelationTenantId,
			const int64_t PrevRelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readDerivedByNextRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t NextRelationTenantId,
			const int64_t NextRelationId );

		virtual cfbam::CFBamChainBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamChainBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainPKey* PKey );

		virtual cfbam::CFBamChainBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainPKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamChainBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readBuffByChainTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId );

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual cfbam::CFBamChainBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readBuffByPrevRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t PrevRelationTenantId,
			const int64_t PrevRelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamChainBuff*> readBuffByNextRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t NextRelationTenantId,
			const int64_t NextRelationId );

		virtual cfbam::CFBamChainBuff* readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
			bool forceRead = false );

		virtual cfbam::CFBamChainBuff* readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
			bool forceRead = false );

		virtual cfbam::CFBamChainBuff* updateChain( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamChainBuff* Buff );

		virtual void deleteChain( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamChainBuff* Buff );
		virtual void deleteChainByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteChainByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainPKey* argKey );

		virtual void deleteChainByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteChainByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainByTenantIdxKey* argKey );

		virtual void deleteChainByChainTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId );

		virtual void deleteChainByChainTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainByChainTableIdxKey* argKey );

		virtual void deleteChainByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteChainByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainByDefSchemaIdxKey* argKey );

		virtual void deleteChainByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId,
			const std::string& argName );

		virtual void deleteChainByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainByUNameIdxKey* argKey );

		virtual void deleteChainByPrevRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argPrevRelationTenantId,
			const int64_t argPrevRelationId );

		virtual void deleteChainByPrevRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainByPrevRelIdxKey* argKey );

		virtual void deleteChainByNextRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argNextRelationTenantId,
			const int64_t argNextRelationId );

		virtual void deleteChainByNextRelIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamChainByNextRelIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
