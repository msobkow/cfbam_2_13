#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for Relation.

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

	class CFBamRamRelationTable
	: public virtual cfbam::ICFBamRelationTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamRelationBuff*>* dictByPKey;
		std::map<cfbam::CFBamRelationByUNameIdxKey,
			cfbam::CFBamRelationBuff*>* dictByUNameIdx;
		std::map<cfbam::CFBamRelationByRelnTenantIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>* dictByRelnTenantIdx;
		std::map<cfbam::CFBamRelationByRelTableIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>* dictByRelTableIdx;
		std::map<cfbam::CFBamRelationByDefSchemaIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>* dictByDefSchemaIdx;
		std::map<cfbam::CFBamRelationByFromKeyIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>* dictByFromKeyIdx;
		std::map<cfbam::CFBamRelationByToTblIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>* dictByToTblIdx;
		std::map<cfbam::CFBamRelationByToKeyIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>* dictByToKeyIdx;
		std::map<cfbam::CFBamRelationByNarrowedIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamRelationBuff*>*>* dictByNarrowedIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamRelationTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamRelationTable();

		virtual cfbam::CFBamRelationBuff* createRelation( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamRelationBuff* Buff );

		virtual cfbam::CFBamRelationBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamRelationBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual cfbam::CFBamRelationBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromIndexId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToTableId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToIndexId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readDerivedByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NarrowedTenantId,
			const int64_t* NarrowedId );

		virtual cfbam::CFBamRelationBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamRelationBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamRelationBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamRelationBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual cfbam::CFBamRelationBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromIndexId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToTableId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToIndexId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> readBuffByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NarrowedTenantId,
			const int64_t* NarrowedId );

		virtual cfbam::CFBamRelationBuff* readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
			bool forceRead = false );

		virtual cfbam::CFBamRelationBuff* readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId, const std::string& Name,
			bool forceRead = false );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> pageBuffByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> pageBuffByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> pageBuffByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t FromIndexId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> pageBuffByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToTableId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> pageBuffByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ToIndexId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamRelationBuff*> pageBuffByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NarrowedTenantId,
			const int64_t* NarrowedId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamRelationBuff* updateRelation( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamRelationBuff* Buff );

		virtual void deleteRelation( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamRelationBuff* Buff );
		virtual void deleteRelationByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId,
			const std::string& argName );

		virtual void deleteRelationByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByUNameIdxKey* argKey );

		virtual void deleteRelationByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteRelationByRelnTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByRelnTenantIdxKey* argKey );

		virtual void deleteRelationByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId );

		virtual void deleteRelationByRelTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByRelTableIdxKey* argKey );

		virtual void deleteRelationByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteRelationByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByDefSchemaIdxKey* argKey );

		virtual void deleteRelationByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argFromIndexId );

		virtual void deleteRelationByFromKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByFromKeyIdxKey* argKey );

		virtual void deleteRelationByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argToTableId );

		virtual void deleteRelationByToTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByToTblIdxKey* argKey );

		virtual void deleteRelationByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argToIndexId );

		virtual void deleteRelationByToKeyIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByToKeyIdxKey* argKey );

		virtual void deleteRelationByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNarrowedTenantId,
			const int64_t* argNarrowedId );

		virtual void deleteRelationByNarrowedIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamRelationByNarrowedIdxKey* argKey );

		virtual void deleteRelationByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteRelationByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteRelationByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteRelationByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
