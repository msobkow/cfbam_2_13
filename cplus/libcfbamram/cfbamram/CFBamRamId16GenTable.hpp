#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for Id16Gen.

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

	class CFBamRamId16GenTable
	: public virtual cfbam::ICFBamId16GenTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamId16GenBuff*>* dictByPKey;
		std::map<cfbam::CFBamId16GenByDispIdxKey,
			std::map<cfbam::CFBamValuePKey,
				cfbam::CFBamId16GenBuff*>*>* dictByDispIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamId16GenTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamId16GenTable();

		virtual cfbam::CFBamId16GenBuff* createId16Gen( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamId16GenBuff* Buff );

		virtual cfbam::CFBamId16GenBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey );

		virtual cfbam::CFBamId16GenBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamId16GenBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readDerivedByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readDerivedByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readDerivedByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readDerivedByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readDerivedBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readDerivedByDispIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DispenserTenantId,
			const int64_t* DispenserId );

		virtual cfbam::CFBamId16GenBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamId16GenBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey );

		virtual cfbam::CFBamId16GenBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamId16GenBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamId16GenBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readBuffByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readBuffByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readBuffByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readBuffByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readBuffBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> readBuffByDispIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DispenserTenantId,
			const int64_t* DispenserId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> pageBuffBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t SchemaDefId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual std::TCFLibOwningVector<cfbam::CFBamId16GenBuff*> pageBuffByDispIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DispenserTenantId,
			const int64_t* DispenserId,
			const int64_t* priorTenantId,
			const int64_t* priorId );

		virtual cfbam::CFBamId16GenBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamId16GenBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamId16GenBuff* updateId16Gen( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamId16GenBuff* Buff );

		virtual void deleteId16Gen( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamId16GenBuff* Buff );
		virtual void deleteId16GenByDispIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDispenserTenantId,
			const int64_t* argDispenserId );

		virtual void deleteId16GenByDispIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamId16GenByDispIdxKey* argKey );

		virtual void deleteId16GenBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argSchemaDefId );

		virtual void deleteId16GenBySchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamInt16TypeBySchemaIdxKey* argKey );

		virtual void deleteId16GenByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteId16GenByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* argKey );

		virtual void deleteId16GenByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const std::string& argName );

		virtual void deleteId16GenByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByUNameIdxKey* argKey );

		virtual void deleteId16GenByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteId16GenByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByValTentIdxKey* argKey );

		virtual void deleteId16GenByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId );

		virtual void deleteId16GenByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByScopeIdxKey* argKey );

		virtual void deleteId16GenByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteId16GenByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByDefSchemaIdxKey* argKey );

		virtual void deleteId16GenByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId );

		virtual void deleteId16GenByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByPrevIdxKey* argKey );

		virtual void deleteId16GenByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId );

		virtual void deleteId16GenByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByNextIdxKey* argKey );

		virtual void deleteId16GenByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const int64_t* argPrevId );

		virtual void deleteId16GenByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByContPrevIdxKey* argKey );

		virtual void deleteId16GenByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const int64_t* argNextId );

		virtual void deleteId16GenByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByContNextIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
