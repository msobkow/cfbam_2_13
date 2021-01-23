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
 *	Contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <msscf/MssCFPublic.hpp>

namespace cfbam {

	class CFBamCustMssCFGenContextFactory : public cfcore::MssCFGenContextFactory {

		public:
			static const std::string CLASS_NAME;

		public:
			CFBamCustMssCFGenContextFactory();
			virtual ~CFBamCustMssCFGenContextFactory();

			virtual cfcore::MssCFGenContext* newGenContext(
				const std::string& generatingBuild,
				cfcore::MssCFGenContext* genContext,
				const std::string& subClassGenDefName,
				cflib::ICFLibAnyObj* subObject );

			virtual cfcore::MssCFGenContext* newGenContext(
				const std::string& generatingBuild,
				cfcore::MssCFEngine* engine,
				const std::string& argRootGenDir,
				const std::string& toolset,
				const std::string& scopeDefClassName,
				const std::string& genDefClassName,
				const std::string& itemName );

			virtual cfcore::MssCFGenContext* newGenContext(
				const std::string& generatingBuild,
				cfcore::MssCFEngine* engine,
				const std::string& argRootGenDir,
				const std::string& toolset,
				const std::string& scopeDefClassName,
				const std::string& genDefClassName,
				const std::string& itemName,
				cflib::ICFLibAnyObj* argGenDef,
				cflib::ICFLibAnyObj* argScopeDef );
	};
}
