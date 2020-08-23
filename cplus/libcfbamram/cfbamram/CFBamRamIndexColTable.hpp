#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for IndexCol.

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

	class CFBamRamIndexColTable
	: public virtual cfbam::ICFBamIndexColTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfbam::CFBamIndexColPKey,
			cfbam::CFBamIndexColBuff*>* dictByPKey;
		std::map<cfbam::CFBamIndexColByUNameIdxKey,
			cfbam::CFBamIndexColBuff*>* dictByUNameIdx;
		std::map<cfbam::CFBamIndexColByIdxColTenantIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>* dictByIdxColTenantIdx;
		std::map<cfbam::CFBamIndexColByIndexIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>* dictByIndexIdx;
		std::map<cfbam::CFBamIndexColByDefSchemaIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>* dictByDefSchemaIdx;
		std::map<cfbam::CFBamIndexColByColIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>* dictByColIdx;
		std::map<cfbam::CFBamIndexColByPrevIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>* dictByPrevIdx;
		std::map<cfbam::CFBamIndexColByNextIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>* dictByNextIdx;
		std::map<cfbam::CFBamIndexColByIdxPrevIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>* dictByIdxPrevIdx;
		std::map<cfbam::CFBamIndexColByIdxNextIdxKey,
			std::map<cfbam::CFBamIndexColPKey,
				cfbam::CFBamIndexColBuff*>*>* dictByIdxNextIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamIndexColTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamIndexColTable();

		virtual cfbam::CFBamIndexColBuff* createIndexCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamIndexColBuff* Buff );

		virtual cfbam::CFBamIndexColBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColPKey* PKey );

		virtual cfbam::CFBamIndexColBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColPKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamIndexColBuff* readDerivedByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByIdxColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ColumnId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByIdxPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readDerivedByIdxNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* NextId );

		virtual cfbam::CFBamIndexColBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamIndexColBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColPKey* PKey );

		virtual cfbam::CFBamIndexColBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColPKey* PKey );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfbam::CFBamIndexColBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id );

		virtual cfbam::CFBamIndexColBuff* readBuffByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const std::string& Name );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByIdxColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t ColumnId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* PrevTenantId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* NextTenantId,
			const int64_t* NextId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByIdxPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* PrevId );

		virtual std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> readBuffByIdxNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* NextId );

		virtual cfbam::CFBamIndexColBuff* readBuffByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId, const std::string& Name,
			bool forceRead = false );

		virtual cfbam::CFBamIndexColBuff* readDerivedByLookupUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t IndexId, const std::string& Name,
			bool forceRead = false );

		virtual cfbam::CFBamIndexColBuff* moveBuffUp( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamIndexColBuff* moveBuffDown( const cfsec::CFSecAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t Id,
			int32_t revision );

		virtual cfbam::CFBamIndexColBuff* updateIndexCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamIndexColBuff* Buff );

		virtual void deleteIndexCol( const cfsec::CFSecAuthorization* Authorization,
			cfbam::CFBamIndexColBuff* Buff );
		virtual void deleteIndexColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argId );

		virtual void deleteIndexColByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColPKey* argKey );

		virtual void deleteIndexColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argIndexId,
			const std::string& argName );

		virtual void deleteIndexColByUNameIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByUNameIdxKey* argKey );

		virtual void deleteIndexColByIdxColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteIndexColByIdxColTenantIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByIdxColTenantIdxKey* argKey );

		virtual void deleteIndexColByIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argIndexId );

		virtual void deleteIndexColByIndexIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByIndexIdxKey* argKey );

		virtual void deleteIndexColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argDefSchemaTenantId,
			const int64_t* argDefSchemaId );

		virtual void deleteIndexColByDefSchemaIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByDefSchemaIdxKey* argKey );

		virtual void deleteIndexColByColIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argColumnId );

		virtual void deleteIndexColByColIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByColIdxKey* argKey );

		virtual void deleteIndexColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argPrevTenantId,
			const int64_t* argPrevId );

		virtual void deleteIndexColByPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByPrevIdxKey* argKey );

		virtual void deleteIndexColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t* argNextTenantId,
			const int64_t* argNextId );

		virtual void deleteIndexColByNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByNextIdxKey* argKey );

		virtual void deleteIndexColByIdxPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argIndexId,
			const int64_t* argPrevId );

		virtual void deleteIndexColByIdxPrevIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByIdxPrevIdxKey* argKey );

		virtual void deleteIndexColByIdxNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argIndexId,
			const int64_t* argNextId );

		virtual void deleteIndexColByIdxNextIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfbam::CFBamIndexColByIdxNextIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
