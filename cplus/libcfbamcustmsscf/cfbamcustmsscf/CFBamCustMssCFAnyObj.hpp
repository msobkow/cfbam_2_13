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

#include <cfbamcustmsscf/CFBamCustMssCFAnyObj.hpp>

namespace cfbam {

	class CFBamCustMssCFAnyObj {

		public:
			static const std::string CLASS_NAME;
			static const std::string S_CurDef;

		public:
			CFBamCustMssCFAnyObj();
			virtual ~CFBamCustMssCFAnyObj();

			static cfbam::ICFBamSchemaDefObj* getDefSchema( cflib::ICFLibAnyObj* anyDef );
			static cflib::ICFLibAnyObj* getDefProject( cflib::ICFLibAnyObj* anyDef );
			static cflib::ICFLibAnyObj* getProject( cflib::ICFLibAnyObj* anyDef );
			static cfbam::ICFBamSchemaDefObj* getTopSchema( cflib::ICFLibAnyObj* anyDef );
			static cfbam::ICFBamTopDomainObj* getTopDomain( cflib::ICFLibAnyObj* anyDef );
			static cfbam::ICFBamSchemaDefObj* getSchema( cflib::ICFLibAnyObj* anyDef );
			static cflib::ICFLibAnyObj* getVersionLeaf( cflib::ICFLibAnyObj* anyDef );
			static std::string getVersionString( cflib::ICFLibAnyObj* anyDef );
			static std::string getPackedVersionString( cflib::ICFLibAnyObj* anyDef );
			static std::string getFullName( cflib::ICFLibAnyObj* anyDef );
			static std::string getPackageName( cflib::ICFLibAnyObj* anyDef );
			static std::string getModelName( cflib::ICFLibAnyObj* anyDef );
			static cflib::ICFLibAnyObj* getDefPackage( cflib::ICFLibAnyObj* anyDef );
			static cflib::ICFLibAnyObj* getPackage( cflib::ICFLibAnyObj* anyDef );

			static cflib::ICFLibAnyObj* getDefByModelName(
				cfbam::ICFBamScopeObj* modelScope,
				const std::string& modelName );
			static cflib::ICFLibAnyObj* getDefByGlobalName(
				cfbam::ICFBamScopeObj* modelScope,
				const std::string& globalName );
	};
}
