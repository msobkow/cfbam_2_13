#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for Int64Def.

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

	class CFBamRamInt64DefTable
	: public virtual cfbam::ICFBamInt64DefTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamValuePKey,
			cfbam::CFBamInt64DefBuff*>* dictByPKey;
	public:
		static const std::string CLASS_NAME;
		CFBamRamInt64DefTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamInt64DefTable();

		virtual cfbam::CFBamInt64DefBuff* createInt64Def( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamInt64DefBuff* Buff );

		virtual cfbam::CFBamInt64DefBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey );

		virtual cfbam::CFBamInt64DefBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamInt64DefBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readDerivedByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readDerivedByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readDerivedByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readDerivedByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId );

		virtual cfbam::CFBamInt64DefBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamInt64DefBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey );

		virtual cfbam::CFBamInt64DefBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamInt64DefBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamInt64DefBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readBuffByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readBuffByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readBuffByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamInt64DefBuff*> readBuffByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId );

		virtual cfbam::CFBamInt64DefBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamInt64DefBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamInt64DefBuff* updateInt64Def( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamInt64DefBuff* Buff );

		virtual void deleteInt64Def( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamInt64DefBuff* Buff );
		virtual void deleteInt64DefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteInt64DefByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValuePKey* argKey );

		virtual void deleteInt64DefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const std::string& argName );

		virtual void deleteInt64DefByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByUNameIdxKey* argKey );

		virtual void deleteInt64DefByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteInt64DefByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByValTentIdxKey* argKey );

		virtual void deleteInt64DefByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId );

		virtual void deleteInt64DefByScopeIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByScopeIdxKey* argKey );

		virtual void deleteInt64DefByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteInt64DefByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByDefSchemaIdxKey* argKey );

		virtual void deleteInt64DefByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId );

		virtual void deleteInt64DefByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByPrevIdxKey* argKey );

		virtual void deleteInt64DefByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId );

		virtual void deleteInt64DefByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByNextIdxKey* argKey );

		virtual void deleteInt64DefByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const int64_t* argPrevId );

		virtual void deleteInt64DefByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByContPrevIdxKey* argKey );

		virtual void deleteInt64DefByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argScopeId,
			const int64_t* argNextId );

		virtual void deleteInt64DefByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamValueByContNextIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
