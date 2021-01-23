/*
 *	CFBamCustMssCF
 *
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
#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindStripPrevNextColumnName.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindStripPrevNextColumnName::CLASS_NAME( "CFBamMssCFBindStripPrevNextColumnName" );
	const std::string CFBamCustMssCFGenBindStripPrevNextColumnName::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindStripPrevNextColumnName::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindStripPrevNextColumnName::S_SupportedClasses( "ICFBamAtomDefObj, ICFBamTableColObj" );

	CFBamCustMssCFGenBindStripPrevNextColumnName::CFBamCustMssCFGenBindStripPrevNextColumnName()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindStripPrevNextColumnName::CFBamCustMssCFGenBindStripPrevNextColumnName(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindStripPrevNextColumnName::~CFBamCustMssCFGenBindStripPrevNextColumnName()
	{
	}

	std::string CFBamCustMssCFGenBindStripPrevNextColumnName::expandBody( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expandBody" );
		cflib::ICFLibAnyObj* genDef;

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}

		genDef = genContext->getGenDef();
		if( genDef == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_GenContextGenDef );
		}

		std::string name;

		if( genDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamTableColObj* tableCol = dynamic_cast<cfbam::ICFBamTableColObj*>( genDef );
			name = tableCol->getRequiredName();
		}
		else if( genDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
			cfbam::ICFBamAtomObj* atom = dynamic_cast<cfbam::ICFBamAtomObj*>( genDef );
			name = atom->getRequiredName();
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_SupportedClasses );
		}

		std::string ret;

		if( name.length() > 0 ) {
			if( name.length() > 4 ) {
				if( ( ( name[0] == 'P' ) || ( name[0] == 'p' ) ) && ( name[1] == 'r' ) && ( name[2] == 'e' ) && ( name[3] == 'v' ) ) {
					ret = name.substr( 4, name.length() - 4 );
				}
				else if( ( ( name[0] == 'N' ) || ( name[0] == 'n' ) ) && ( name[1] == 'e' ) && ( name[2] == 'x' ) && ( name[3] == 't' ) ) {
					ret = name.substr( 4, name.length() - 4 );
				}
				else {
					ret = name;
				}
			}
			else {
				ret = name;
			}
			genContext->clearExpansionIsNull();
		}
		else {
			genContext->setExpansionIsNull();
		}

		return( ret );
	}
}
