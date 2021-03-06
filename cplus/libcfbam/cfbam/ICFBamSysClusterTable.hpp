#pragma once

// Description: C++18 DbIO interface for SysCluster.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
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
#include <cfsec/CFSecAuthorization.hpp>
#include <cfsec/CFSecHPKey.hpp>
#include <cfsec/CFSecSysClusterBuff.hpp>
#include <cfsec/CFSecSysClusterPKey.hpp>
#include <cfsec/CFSecSysClusterHBuff.hpp>
#include <cfsec/CFSecSysClusterHPKey.hpp>
#include <cfsec/CFSecSysClusterByClusterIdxKey.hpp>
#include <cfsec/ICFSecSysClusterTable.hpp>
#include <cfint/ICFIntSysClusterTable.hpp>

namespace cfsec {
	class ICFSecSchemaObj;
}

namespace cfbam {
	class ICFBamSysClusterObj;

	class ICFBamSysClusterTable
	: public virtual cfsec::ICFSecSysClusterTable,
	  public virtual cfint::ICFIntSysClusterTable
	{
	public:
		ICFBamSysClusterTable();
		virtual ~ICFBamSysClusterTable();

		virtual cfsec::CFSecSysClusterBuff* createSysCluster( const cfsec::CFSecAuthorization* Authorization,
			cfsec::CFSecSysClusterBuff* Buff ) = 0;

		virtual cfsec::CFSecSysClusterBuff* updateSysCluster( const cfsec::CFSecAuthorization* Authorization,
			cfsec::CFSecSysClusterBuff* Buff ) = 0;

		virtual void deleteSysCluster( const cfsec::CFSecAuthorization* Authorization,
			cfsec::CFSecSysClusterBuff* Buff ) = 0;
		virtual void deleteSysClusterByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int32_t argSingletonId ) = 0;

		virtual void deleteSysClusterByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecSysClusterPKey* argKey ) = 0;
		virtual void deleteSysClusterByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t argClusterId ) = 0;

		virtual void deleteSysClusterByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecSysClusterByClusterIdxKey* argKey ) = 0;

		virtual cfsec::CFSecSysClusterBuff* readDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecSysClusterPKey* PKey ) = 0;

		virtual cfsec::CFSecSysClusterBuff* lockDerived( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecSysClusterPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfsec::CFSecSysClusterBuff*> readAllDerived( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfsec::CFSecSysClusterBuff* readDerivedByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int32_t SingletonId ) = 0;

		virtual std::TCFLibOwningVector<cfsec::CFSecSysClusterBuff*> readDerivedByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual cfsec::CFSecSysClusterBuff* readBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecSysClusterPKey* PKey ) = 0;

		virtual cfsec::CFSecSysClusterBuff* lockBuff( const cfsec::CFSecAuthorization* Authorization,
			const cfsec::CFSecSysClusterPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfsec::CFSecSysClusterBuff*> readAllBuff( const cfsec::CFSecAuthorization* Authorization ) = 0;

		virtual cfsec::CFSecSysClusterBuff* readBuffByIdIdx( const cfsec::CFSecAuthorization* Authorization,
			const int32_t SingletonId ) = 0;

		virtual std::TCFLibOwningVector<cfsec::CFSecSysClusterBuff*> readBuffByClusterIdx( const cfsec::CFSecAuthorization* Authorization,
			const int64_t ClusterId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
