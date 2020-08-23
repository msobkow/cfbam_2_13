#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for DelTopDep.

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

	class CFBamRamDelTopDepTable
	: public virtual cfbam::ICFBamDelTopDepTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamDelTopDepBuff*>* dictByPKey;
		std::map<cfbam::CFBamDelTopDepByDelTopDepTblIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelTopDepBuff*>*>* dictByDelTopDepTblIdx;
		std::map<cfbam::CFBamDelTopDepByUNameIdxKey,
			cfbam::CFBamDelTopDepBuff*>* dictByUNameIdx;
		std::map<cfbam::CFBamDelTopDepByPrevIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelTopDepBuff*>*>* dictByPrevIdx;
		std::map<cfbam::CFBamDelTopDepByNextIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamDelTopDepBuff*>*>* dictByNextIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamDelTopDepTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamDelTopDepTable();

		virtual cfbam::CFBamDelTopDepBuff* createDelTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelTopDepBuff* Buff );

		virtual cfbam::CFBamDelTopDepBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamDelTopDepBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readDerivedByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readDerivedByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId );

		virtual cfbam::CFBamDelTopDepBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual cfbam::CFBamDelTopDepBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamDelTopDepBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamDelTopDepBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamDelTopDepBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readBuffByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId );

		virtual cfbam::CFBamDelTopDepBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> pageBuffByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t RelationTenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> pageBuffByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> pageBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamDelTopDepBuff*> pageBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamDelTopDepBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamDelTopDepBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamDelTopDepBuff* updateDelTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelTopDepBuff* Buff );

		virtual void deleteDelTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamDelTopDepBuff* Buff );
		virtual void deleteDelTopDepByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTableTenantId,
			const int64_t argTableId );

		virtual void deleteDelTopDepByDelTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelTopDepByDelTopDepTblIdxKey* argKey );

		virtual void deleteDelTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTableTenantId,
			const int64_t argTableId,
			const std::string& argName );

		virtual void deleteDelTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelTopDepByUNameIdxKey* argKey );

		virtual void deleteDelTopDepByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId );

		virtual void deleteDelTopDepByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelTopDepByPrevIdxKey* argKey );

		virtual void deleteDelTopDepByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId );

		virtual void deleteDelTopDepByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelTopDepByNextIdxKey* argKey );

		virtual void deleteDelTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteDelTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelDepByDefSchemaIdxKey* argKey );

		virtual void deleteDelTopDepByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argRelationTenantId,
			const int64_t argRelationId );

		virtual void deleteDelTopDepByDelDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamDelDepByDelDepIdxKey* argKey );

		virtual void deleteDelTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteDelTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteDelTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteDelTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
