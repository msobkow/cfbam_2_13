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
#include <cfbamcustmsscf/CFBamCustMssCFEngine.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFTableObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceAlternateIndex.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenReferenceAlternateIndex::CLASS_NAME( "CFBamCustMssCFGenReferenceAlternateIndex" );
	const std::string CFBamCustMssCFGenReferenceAlternateIndex::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenReferenceAlternateIndex::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenReferenceAlternateIndex::S_ICFBamTableObj( "ICFBamTableObj" );

	CFBamCustMssCFGenReferenceAlternateIndex::CFBamCustMssCFGenReferenceAlternateIndex()
	: cfcore::MssCFGenReferenceObj()
	{
	}

	CFBamCustMssCFGenReferenceAlternateIndex::CFBamCustMssCFGenReferenceAlternateIndex(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenReferenceObj( dynamic_cast<cfcore::MssCFEngine*>( argSchema ), toolset, scopeDefClassName, genDefClassName, itemName, "Id16Gen" )
	{
	}

	CFBamCustMssCFGenReferenceAlternateIndex::~CFBamCustMssCFGenReferenceAlternateIndex() {
	}

	cflib::ICFLibAnyObj* CFBamCustMssCFGenReferenceAlternateIndex::dereference( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "dereference" );

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

		if( ! genDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ICFBamTableObj );
		}

		cfbam::ICFBamTableObj* curTable = dynamic_cast<cfbam::ICFBamTableObj*>( genDef );
		cfbam::ICFBamIndexObj* alternateIndex = NULL;
		cfbam::ICFBamRelationObj* superClassRelation;

		while( ( alternateIndex == NULL ) && ( curTable != NULL ) ) {
			alternateIndex = curTable->getOptionalLookupAltIndex();
			if( alternateIndex == NULL ) {
				superClassRelation = cfbam::CFBamCustMssCFTableObj::getSuperClassRelation( curTable );
				if( superClassRelation != NULL ) {
					curTable = superClassRelation->getRequiredLookupToTable();
				}
				else {
					curTable = NULL;
				}
			}
		}

		return( alternateIndex );
	}
}
