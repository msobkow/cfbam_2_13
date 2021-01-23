
// Description: C++18 MssCF CFEngine for CFBam

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

	class CFBamMssCFEngine : public cfcore::MssCFEngine
	{
		public:
			static const std::string CLASS_NAME;
			static const std::string ITEMNAME_TOP;

		protected:
			cfbam::ICFBamSchemaObj* cFBamSchema;

		public:
			CFBamMssCFEngine();
			virtual ~CFBamMssCFEngine();

			virtual std::string fixGenDefName( const std::string& rawName ) = 0;

			virtual cfbam::ICFBamSchemaObj* getCFBamSchema();
			virtual void setCFBamSchema( cfbam::ICFBamSchemaObj* value );

			virtual void init( const std::string& generatingBuild,
				cfcore::ICFGenKbSchemaObj* argCFGenKbSchema,
				cfcore::ICFGenKbTenantObj* argTenant,
				cfbam::ICFBamSchemaObj* argCFBamSchema,
				const std::string& strRootGenDir );

			virtual void init( const std::string& generatingBuild,
				cfcore::ICFGenKbSchemaObj* argCFGenKbSchema,
				cfcore::ICFGenKbTenantObj* argTenant,
				const std::string& strRootGenDir );

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
				int truncAt );

			virtual void bootstrapDefClasses();
			virtual void bootstrapBindings();
			virtual void bootstrapIterators();
			virtual void bootstrapReferences();
	};
}
