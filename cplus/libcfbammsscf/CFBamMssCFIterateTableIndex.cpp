
// Description: C++18 MssCF Iterator for Table Relationship Index.

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
#include <cfbammsscf/CFBamMssCFIterateTableIndex.hpp>

namespace cfbam {

	const std::string CFBamMssCFIterateTableIndex::CLASS_NAME( "CFBamMssCFIterateTableIndex" );

	CFBamMssCFIterateTableIndex::CFBamMssCFIterateTableIndex()
	: cfcore::MssCFGenIteratorObj()
	{
	}

	CFBamMssCFIterateTableIndex::CFBamMssCFIterateTableIndex( cfcore::MssCFEngine* argEngine )
	: cfcore::MssCFGenIteratorObj( argEngine, "any", NULL, "Table", "Index", "Index" )
	{
	}

	CFBamMssCFIterateTableIndex::~CFBamMssCFIterateTableIndex()
	{
	}

	std::vector<cflib::ICFLibAnyObj*>* CFBamMssCFIterateTableIndex::enumerateDetails( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "enumerateDetails" );
		static const std::string S_GenContext( "genContext" );
		static const std::string S_GenContextGenDef( "genContext.getGenDef()" );
		static const std::string S_Expected( "ICFBamTableObj" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}

		cflib::ICFLibAnyObj* genDef = genContext->getGenDef();
		if( genDef == NULL ) {
			throw new cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContextGenDef );
		}

		std::vector<cflib::ICFLibAnyObj*>* list = new std::vector<cflib::ICFLibAnyObj*>();

		if( genDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			std::vector<cfbam::ICFBamIndexObj*> elements = dynamic_cast<cfbam::ICFBamTableObj*>( genDef )->getOptionalComponentsIndex();
			auto iter = elements.begin();
			auto end = elements.end();
			while( iter != end ) {
				list->push_back( dynamic_cast<cflib::ICFLibAnyObj*>( *iter ) );
				iter ++;
			}
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_Expected );
		}

		return( list );
	}
}
