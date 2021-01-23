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

#include <cfbammsscf/CFBamMssCFEngine.hpp>

namespace cfbam {

	class CFBamCustMssCFGelCompiler;

	class CFBamCustMssCFEngine : public cfbam::CFBamMssCFEngine
	{
		public:
			static const std::string CLASS_NAME;
			static const std::string ITEMNAME_TOP;
			static const std::string LinkName;
			static const std::string LinkVersion;
			static const std::string GeneratorName;
			static const std::string GeneratorVersion;
			static const std::string S_Object;
			static const std::string S_Any;

		protected:
			std::string rootGenDir;

		public:
			CFBamCustMssCFEngine();

			virtual ~CFBamCustMssCFEngine();

			virtual void generate( const std::string& generatingBuild,
				const std::string& rootGenDir,
				cflib::ICFLibAnyObj* anyDef,
				const std::vector<std::string>& toolsDesired,
				const std::string& initialRuleName );
	
			virtual const std::string& getRootGenDir();
			virtual cfcore::MssCFGelCompiler* getGelCompiler();
			virtual const std::string& getGeneratorName();
			virtual const std::string& getAnyClassName();
			virtual std::string fixGenDefName( const std::string& rawName );
			virtual void init( const std::string& generatingBuild,
				cfcore::ICFGenKbSchemaObj* argCFGenKbSchema,
				cfcore::ICFGenKbTenantObj* argTenant,
				cfbam::ICFBamSchemaObj* argBamSchema,
				const std::string& strRootGenDir );
			virtual void init( const std::string& generatingBuild,
				cfcore::ICFGenKbSchemaObj* argCFGenKbSchema,
				cfcore::ICFGenKbTenantObj* argTenant,
				const std::string& strRootGenDir );
			virtual cfcore::ICFGenKbGenFileTableObj* getGenFileTableObj();
			virtual cfcore::MssCFGenContextFactory* getGenContextFactory();
			virtual cfcore::ICFGenKbGenFileObj* defineFile(
				const std::string& definedNear,
				const std::string& toolsetName,
				const std::string& scopeDefClassName,
				const std::string& genDefClassName,
				const std::string& itemName,
				const std::string& expansionBody,
				const std::string& generateOnce,
				const std::string& sourceBundle,
				const std::string& moduleName,
				const std::string& basePackageName,
				const std::string& subPackageName,
				const std::string& expansionClassName,
				const std::string& expansionKeyName,
				const std::string& expansionFileName );
			virtual cfcore::ICFGenKbGenRuleObj* defineRule(
				const std::string& definedNear,
				const std::string& toolsetName,
				const std::string& scopeDefClassName,
				const std::string& genDefClassName,
				const std::string& itemName,
				const std::string& expansionBody );
			virtual cfcore::ICFGenKbGenTruncObj* defineTrunc(
				const std::string& definedNear,
				const std::string& toolsetName,
				const std::string& scopeDefClassName,
				const std::string& genDefClassName,
				const std::string& itemName,
				const std::string& expansionBody,
				int truncAt  );
			virtual void bootstrapFirst();
			virtual void bootstrapDefClasses();
			virtual void bootstrapIterators();
			virtual void bootstrapReferences();
			virtual void bootstrapBindings();
	};
}
