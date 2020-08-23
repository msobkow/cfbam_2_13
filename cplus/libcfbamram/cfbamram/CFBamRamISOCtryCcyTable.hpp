#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for ISOCtryCcy.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
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

	class CFBamRamISOCtryCcyTable
	: public virtual cfsec::ICFSecISOCtryCcyTable
	{
	protected:
		cfbam::ICFBamSchema* schema;
		std::map<cfsec::CFSecISOCtryCcyPKey,
			cfsec::CFSecISOCtryCcyBuff*>* dictByPKey;
		std::map<cfsec::CFSecISOCtryCcyByCtryIdxKey,
			std::map<cfsec::CFSecISOCtryCcyPKey,
				cfsec::CFSecISOCtryCcyBuff*>*>* dictByCtryIdx;
		std::map<cfsec::CFSecISOCtryCcyByCcyIdxKey,
			std::map<cfsec::CFSecISOCtryCcyPKey,
				cfsec::CFSecISOCtryCcyBuff*>*>* dictByCcyIdx;
	public:
		static const std::string CLASS_NAME;
		CFBamRamISOCtryCcyTable( cfbam::ICFBamSchema* argSchema );

		virtual ~CFBamRamISOCtryCcyTable();

		virtual cfsec::CFSecISOCtryCcyBuff* createISOCtryCcy( const cfsec::CFSecAuthorization* Authorization,
			cfsec::CFSecISOCtryCcyBuff* Buff );

		virtual cfsec::CFSecISOCtryCcyBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecISOCtryCcyPKey* PKey );

		virtual cfsec::CFSecISOCtryCcyBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecISOCtryCcyPKey* PKey );

		virtual std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> readDerivedByCtryIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCtryId );

		virtual std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> readDerivedByCcyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCcyId );

		virtual cfsec::CFSecISOCtryCcyBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCtryId,
			const int16_t ISOCcyId );

		virtual cfsec::CFSecISOCtryCcyBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecISOCtryCcyPKey* PKey );

		virtual cfsec::CFSecISOCtryCcyBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecISOCtryCcyPKey* PKey );

		virtual std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization );

		virtual cfsec::CFSecISOCtryCcyBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCtryId,
			const int16_t ISOCcyId );

		virtual std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> readBuffByCtryIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCtryId );

		virtual std::TCFLibOwningVector<cfsec::CFSecISOCtryCcyBuff*> readBuffByCcyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t ISOCcyId );

		virtual cfsec::CFSecISOCtryCcyBuff* updateISOCtryCcy( const cfsec::CFSecAuthorization* Authorization,
			cfsec::CFSecISOCtryCcyBuff* Buff );

		virtual void deleteISOCtryCcy( const cfsec::CFSecAuthorization* Authorization,
			cfsec::CFSecISOCtryCcyBuff* Buff );
		virtual void deleteISOCtryCcyByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t argISOCtryId,
			const int16_t argISOCcyId );

		virtual void deleteISOCtryCcyByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecISOCtryCcyPKey* argKey );

		virtual void deleteISOCtryCcyByCtryIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t argISOCtryId );

		virtual void deleteISOCtryCcyByCtryIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecISOCtryCcyByCtryIdxKey* argKey );

		virtual void deleteISOCtryCcyByCcyIdx( const cfsec::CFSecAuthorization* Authorization,
			const int16_t argISOCcyId );

		virtual void deleteISOCtryCcyByCcyIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecISOCtryCcyByCcyIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
