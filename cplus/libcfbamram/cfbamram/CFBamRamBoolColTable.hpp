#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for BoolCol.

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

	class CFBamRamBoolColTable
	: public virtual cfbam::ICFBamBoolColTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamBoolColBuff*>* dictByPKey;
		std::map<cfbam::CFBamBoolColByTableIdxKey,
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamBoolColBuff*>*>* dictByTableIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamBoolColTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamBoolColTable();

		virtual cfbam::CFBamBoolColBuff* createBoolCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamBoolColBuff* Buff );

		virtual cfbam::CFBamBoolColBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey );

		virtual cfbam::CFBamBoolColBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamBoolColBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readDerivedByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readDerivedByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readDerivedByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readDerivedByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readDerivedByTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId );

		virtual cfbam::CFBamBoolColBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamBoolColBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey );

		virtual cfbam::CFBamBoolColBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamBoolColBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamBoolColBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readBuffByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readBuffByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readBuffByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readBuffByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> readBuffByTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId );

		virtual std::TCFLibOwningVector<cfbam::CFBamBoolColBuff*> pageBuffByTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TableId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamBoolColBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamBoolColBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamBoolColBuff* updateBoolCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamBoolColBuff* Buff );

		virtual void deleteBoolCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamBoolColBuff* Buff );
		virtual void deleteBoolColByTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTableId );

		virtual void deleteBoolColByTableIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamBoolColByTableIdxKey* argKey );

		virtual void deleteBoolColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteBoolColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* argKey );

		virtual void deleteBoolColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const std::string& argName );

		virtual void deleteBoolColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByUNameIdxKey* argKey );

		virtual void deleteBoolColByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteBoolColByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByValTentIdxKey* argKey );

		virtual void deleteBoolColByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId );

		virtual void deleteBoolColByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByScopeIdxKey* argKey );

		virtual void deleteBoolColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteBoolColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByDefSchemaIdxKey* argKey );

		virtual void deleteBoolColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId );

		virtual void deleteBoolColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByPrevIdxKey* argKey );

		virtual void deleteBoolColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId );

		virtual void deleteBoolColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByNextIdxKey* argKey );

		virtual void deleteBoolColByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const int64_t* argPrevId );

		virtual void deleteBoolColByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByContPrevIdxKey* argKey );

		virtual void deleteBoolColByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const int64_t* argNextId );

		virtual void deleteBoolColByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByContNextIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
