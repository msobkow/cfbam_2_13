#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for Param.

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

	class CFBamRamParamTable
	: public virtual cfbam::ICFBamParamTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamParamPKey,
			cfbam::CFBamParamBuff*>* dictByPKey;
		std::map<cfbam::CFBamParamByUNameIdxKey,
			cfbam::CFBamParamBuff*>* dictByUNameIdx;
		std::map<cfbam::CFBamParamByValTentIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>* dictByValTentIdx;
		std::map<cfbam::CFBamParamByServerMethodIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>* dictByServerMethodIdx;
		std::map<cfbam::CFBamParamByDefSchemaIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>* dictByDefSchemaIdx;
		std::map<cfbam::CFBamParamByServerTypeIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>* dictByServerTypeIdx;
		std::map<cfbam::CFBamParamByPrevIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>* dictByPrevIdx;
		std::map<cfbam::CFBamParamByNextIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>* dictByNextIdx;
		std::map<cfbam::CFBamParamByContPrevIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>* dictByContPrevIdx;
		std::map<cfbam::CFBamParamByContNextIdxKey,
			std::map<cfbam::CFBamParamPKey,
				cfbam::CFBamParamBuff*>*>* dictByContNextIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamParamTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamParamTable();

		virtual cfbam::CFBamParamBuff* createParam( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamParamBuff* Buff );

		virtual cfbam::CFBamParamBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamPKey* PKey );

		virtual cfbam::CFBamParamBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamPKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamParamBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByServerMethodIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByServerTypeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* TypeTenantId,
			const int64_t* TypeId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readDerivedByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* NextId );

		virtual cfbam::CFBamParamBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamParamBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamPKey* PKey );

		virtual cfbam::CFBamParamBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamPKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamParamBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamParamBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByServerMethodIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByServerTypeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* TypeTenantId,
			const int64_t* TypeId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamParamBuff*> readBuffByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ServerMethodId,
			const int64_t* NextId );

		virtual cfbam::CFBamParamBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamParamBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamParamBuff* updateParam( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamParamBuff* Buff );

		virtual void deleteParam( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamParamBuff* Buff );
		virtual void deleteParamByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteParamByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamPKey* argKey );

		virtual void deleteParamByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argServerMethodId,
			const std::string& argName );

		virtual void deleteParamByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByUNameIdxKey* argKey );

		virtual void deleteParamByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteParamByValTentIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByValTentIdxKey* argKey );

		virtual void deleteParamByServerMethodIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argServerMethodId );

		virtual void deleteParamByServerMethodIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByServerMethodIdxKey* argKey );

		virtual void deleteParamByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteParamByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByDefSchemaIdxKey* argKey );

		virtual void deleteParamByServerTypeIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argTypeTenantId,
			const int64_t* argTypeId );

		virtual void deleteParamByServerTypeIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByServerTypeIdxKey* argKey );

		virtual void deleteParamByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId );

		virtual void deleteParamByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByPrevIdxKey* argKey );

		virtual void deleteParamByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId );

		virtual void deleteParamByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByNextIdxKey* argKey );

		virtual void deleteParamByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argServerMethodId,
			const int64_t* argPrevId );

		virtual void deleteParamByContPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByContPrevIdxKey* argKey );

		virtual void deleteParamByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argServerMethodId,
			const int64_t* argNextId );

		virtual void deleteParamByContNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamParamByContNextIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
