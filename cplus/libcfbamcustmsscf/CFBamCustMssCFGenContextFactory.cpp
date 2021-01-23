// Description: C++18 MSS Code Factory library implementation for CFBam Custom MssCF.

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

#include <cfbamcustmsscf/CFBamCustMssCFGenContext.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenContextFactory.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenContextFactory::CLASS_NAME( "CFBamCustMssCFGenContextFactory" );

	CFBamCustMssCFGenContextFactory::CFBamCustMssCFGenContextFactory()
	: cfcore::MssCFGenContextFactory()
	{
	}

	CFBamCustMssCFGenContextFactory::~CFBamCustMssCFGenContextFactory() {
	}

	cfcore::MssCFGenContext* CFBamCustMssCFGenContextFactory::newGenContext(
		const std::string& generatingBuild,
		cfcore::MssCFGenContext* genContext,
		const std::string& subClassGenDefName,
		cflib::ICFLibAnyObj* subObject )
	{
		return( new cfbam::CFBamCustMssCFGenContext( generatingBuild, genContext, subClassGenDefName, subObject ) );
	}

	cfcore::MssCFGenContext* CFBamCustMssCFGenContextFactory::newGenContext(
		const std::string& generatingBuild,
		cfcore::MssCFEngine* engine,
		const std::string& argRootGenDir,
		const std::string& toolset,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	{
		return( new cfbam::CFBamCustMssCFGenContext( generatingBuild,
			engine,
			argRootGenDir,
			toolset,
			scopeDefClassName,
			genDefClassName,
			itemName ) );
	}

	cfcore::MssCFGenContext* CFBamCustMssCFGenContextFactory::newGenContext(
		const std::string& generatingBuild,
		cfcore::MssCFEngine* engine,
		const std::string& argRootGenDir,
		const std::string& toolset,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName,
		cflib::ICFLibAnyObj* argGenDef,
		cflib::ICFLibAnyObj* argScopeDef )
	{
		return( new cfbam::CFBamCustMssCFGenContext( generatingBuild,
			engine,
			argRootGenDir,
			toolset,
			scopeDefClassName,
			genDefClassName,
			itemName,
			argGenDef,
			argScopeDef ) );
	}
}
