
// Description: C++18 MssCF Iterator for DelSubDep2 Relationship DelDep.

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
#include <cfbammsscf/CFBamMssCFIterateDelSubDep2DelDep.hpp>

namespace cfbam {

	const std::string CFBamMssCFIterateDelSubDep2DelDep::CLASS_NAME( "CFBamMssCFIterateDelSubDep2DelDep" );

	CFBamMssCFIterateDelSubDep2DelDep::CFBamMssCFIterateDelSubDep2DelDep()
	: cfcore::MssCFGenIteratorObj()
	{
	}

	CFBamMssCFIterateDelSubDep2DelDep::CFBamMssCFIterateDelSubDep2DelDep( cfcore::MssCFEngine* argEngine )
	: cfcore::MssCFGenIteratorObj( argEngine, "any", NULL, "DelSubDep2", "DelDep", "DelSubDep3" )
	{
	}

	CFBamMssCFIterateDelSubDep2DelDep::~CFBamMssCFIterateDelSubDep2DelDep()
	{
	}

	std::vector<cflib::ICFLibAnyObj*>* CFBamMssCFIterateDelSubDep2DelDep::enumerateDetails( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "enumerateDetails" );
		static const std::string S_GenContext( "genContext" );
		static const std::string S_GenContextGenDef( "genContext.getGenDef()" );
		static const std::string S_Expected( "ICFBamDelSubDep2Obj" );

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

		if( genDef->implementsClassCode( cfbam::CFBamDelSubDep2Buff::CLASS_CODE ) ) {
			std::vector<cfbam::ICFBamDelSubDep3Obj*> elements = dynamic_cast<cfbam::ICFBamDelSubDep2Obj*>( genDef )->getOptionalComponentsDelDep();
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
