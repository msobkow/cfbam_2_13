#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for ServerListFunc.

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

	class CFBamRamServerListFuncTable
	: public virtual cfbam::ICFBamServerListFuncTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamScopePKey,
			cfbam::CFBamServerListFuncBuff*>* dictByPKey;
		std::map<cfbam::CFBamServerListFuncByRetTblIdxKey,
			std::map<cfbam::CFBamScopePKey,
				cfbam::CFBamServerListFuncBuff*>*>* dictByRetTblIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamServerListFuncTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamServerListFuncTable();

		virtual cfbam::CFBamServerListFuncBuff* createServerListFunc( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamServerListFuncBuff* Buff );

		virtual cfbam::CFBamServerListFuncBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamServerListFuncBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> readDerivedByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual cfbam::CFBamServerListFuncBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> readDerivedByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> readDerivedByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RetTenantId,
			const int64_t* RetTableId );

		virtual cfbam::CFBamServerListFuncBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamServerListFuncBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual cfbam::CFBamServerListFuncBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamServerListFuncBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> readBuffByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual cfbam::CFBamServerListFuncBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> readBuffByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> readBuffByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RetTenantId,
			const int64_t* RetTableId );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> pageBuffByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> pageBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamServerListFuncBuff*> pageBuffByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* RetTenantId,
			const int64_t* RetTableId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamServerListFuncBuff* updateServerListFunc( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamServerListFuncBuff* Buff );

		virtual void deleteServerListFunc( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamServerListFuncBuff* Buff );
		virtual void deleteServerListFuncByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argRetTenantId,
			const int64_t* argRetTableId );

		virtual void deleteServerListFuncByRetTblIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamServerListFuncByRetTblIdxKey* argKey );

		virtual void deleteServerListFuncByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId,
			const std::string& argName );

		virtual void deleteServerListFuncByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamServerMethodByUNameIdxKey* argKey );

		virtual void deleteServerListFuncByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId );

		virtual void deleteServerListFuncByMethTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamServerMethodByMethTableIdxKey* argKey );

		virtual void deleteServerListFuncByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteServerListFuncByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamServerMethodByDefSchemaIdxKey* argKey );

		virtual void deleteServerListFuncByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteServerListFuncByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopePKey* argKey );

		virtual void deleteServerListFuncByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteServerListFuncByTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamScopeByTenantIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
