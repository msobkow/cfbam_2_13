
// Description: C++18 MssCF Reference for PopSubDep2 Relationship PopSubDep1.

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
#include <msscf/MssCFPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>

namespace cfbam {

	/**
	 *	CFBamMssCFReferencePopSubDep2PopSubDep1 binds PopSubDep2.PopSubDep1
	 *	as an instance of MssCFGenReferenceObj.
	 */
	class CFBamMssCFReferencePopSubDep2PopSubDep1 : public cfcore::MssCFGenReferenceObj
	{
		public:
			static const std::string CLASS_NAME;

			CFBamMssCFReferencePopSubDep2PopSubDep1();
			CFBamMssCFReferencePopSubDep2PopSubDep1( cfcore::MssCFEngine* argEngine );
			virtual ~CFBamMssCFReferencePopSubDep2PopSubDep1();

			virtual cflib::ICFLibAnyObj* dereference( cfcore::MssCFGenContext* genContext );
	};
}
