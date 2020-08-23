#pragma once

/*
 *	MSS Code Factory CFBam 2.13 CustMssCF
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	This file is part of MSS Code Factory.
 *	
 *	MSS Code Factory is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *	
 *	MSS Code Factory is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *	
 *	You should have received a copy of the GNU General Public License
 *	along with MSS Code Factory.  If not, see https://www.gnu.org/licenses/.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <msscf/MssCFPublic.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFEngine.hpp>

namespace cfbam {

	class CFBamCustMssCFGenReferenceSuperClassRelation
	: public cfcore::MssCFGenReferenceObj
	{
		public:
			static const std::string CLASS_NAME;
			static const std::string S_GenContext;
			static const std::string S_GenContextGenDef;
			static const std::string S_ICFBamTableObj;

			CFBamCustMssCFGenReferenceSuperClassRelation();

			CFBamCustMssCFGenReferenceSuperClassRelation(
				cfbam::CFBamCustMssCFEngine* argSchema,
				const std::string& toolset,
				const std::string* scopeDefClassName,
				const std::string& genDefClassName,
				const std::string& itemName );

			virtual ~CFBamCustMssCFGenReferenceSuperClassRelation();

			virtual cflib::ICFLibAnyObj* dereference( cfcore::MssCFGenContext* genContext );
	};
}
