
// Description: C++18 MssCF Binding for DelSubDep2 Column DelSubDep1TenantId.

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
#include <msscf/MssCFPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>

namespace cfbam {

	/**
	 *	CFBamMssCFBindDelSubDep2DelSubDep1TenantId binds DelSubDep2.DelSubDep1TenantId
	 *	as an instance of MssCFGenBindObj.
	 */
	class CFBamMssCFBindDelSubDep2DelSubDep1TenantId : public cfcore::MssCFGenBindObj
	{
		public:
			static const std::string CLASS_NAME;

			CFBamMssCFBindDelSubDep2DelSubDep1TenantId();
			CFBamMssCFBindDelSubDep2DelSubDep1TenantId( cfcore::MssCFEngine* argEngine );
			virtual ~CFBamMssCFBindDelSubDep2DelSubDep1TenantId();

			virtual std::string expandBody( cfcore::MssCFGenContext* genContext );
	};
}
