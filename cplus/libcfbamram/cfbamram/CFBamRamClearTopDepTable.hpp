#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for ClearTopDep.

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

	class CFBamRamClearTopDepTable
	: public virtual cfbam::ICFBamClearTopDepTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamClearTopDepBuff*>* dictByPKey;
		std::map<cfbam::CFBamClearTopDepByClrTopDepTblIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearTopDepBuff*>*>* dictByClrTopDepTblIdx;
		std::map<cfbam::CFBamClearTopDepByUNameIdxKey,
			cfbam::CFBamClearTopDepBuff*>* dictByUNameIdx;
		std::map<cfbam::CFBamClearTopDepByPrevIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearTopDepBuff*>*>* dictByPrevIdx;
		std::map<cfbam::CFBamClearTopDepByNextIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamClearTopDepBuff*>*>* dictByNextIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamClearTopDepTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamClearTopDepTable();

		virtual cfbam::CFBamClearTopDepBuff* createClearTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearTopDepBuff* Buff );

		virtual cfbam::CFBamClearTopDepBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamClearTopDepBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readDerivedByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readDerivedByClrTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId );

		virtual cfbam::CFBamClearTopDepBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual cfbam::CFBamClearTopDepBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamClearTopDepBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamClearTopDepBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamClearTopDepBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readBuffByClrTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId );

		virtual cfbam::CFBamClearTopDepBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> pageBuffByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> pageBuffByClrTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TableTenantId,
			const int64_t TableId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> pageBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamClearTopDepBuff*> pageBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamClearTopDepBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamClearTopDepBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamClearTopDepBuff* updateClearTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearTopDepBuff* Buff );

		virtual void deleteClearTopDep( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamClearTopDepBuff* Buff );
		virtual void deleteClearTopDepByClrTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTableTenantId,
			const int64_t argTableId );

		virtual void deleteClearTopDepByClrTopDepTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearTopDepByClrTopDepTblIdxKey* argKey );

		virtual void deleteClearTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTableTenantId,
			const int64_t argTableId,
			const std::string& argName );

		virtual void deleteClearTopDepByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearTopDepByUNameIdxKey* argKey );

		virtual void deleteClearTopDepByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId );

		virtual void deleteClearTopDepByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearTopDepByPrevIdxKey* argKey );

		virtual void deleteClearTopDepByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId );

		virtual void deleteClearTopDepByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearTopDepByNextIdxKey* argKey );

		virtual void deleteClearTopDepByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argRelationId );

		virtual void deleteClearTopDepByClearDepIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearDepByClearDepIdxKey* argKey );

		virtual void deleteClearTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteClearTopDepByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamClearDepByDefSchemaIdxKey* argKey );

		virtual void deleteClearTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteClearTopDepByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteClearTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteClearTopDepByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
