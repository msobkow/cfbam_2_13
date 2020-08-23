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
 *	Contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
#include <cflib/ICFLibPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFTableObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasAlternateIndex.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindHasAlternateIndex::CLASS_NAME( "CFBamMssCFBindHasAlternateIndex" );
	const std::string CFBamCustMssCFGenBindHasAlternateIndex::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindHasAlternateIndex::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindHasAlternateIndex::S_GenContextGenDefColIndex( "genContext.GenDef.ColIndex" );
	const std::string CFBamCustMssCFGenBindHasAlternateIndex::S_ClassList( "ICFBamTableObj, ICFBamAtomObj, ICFBamTableColObj, ICFBamIndexObj, ICFBamIndexColObj" );
	const std::string CFBamCustMssCFGenBindHasAlternateIndex::S_CouldNotLocateTable( "Could not locate current table for genContext.getGenDef()<" );
	const std::string CFBamCustMssCFGenBindHasAlternateIndex::S_CloseGreater( ">" );
	const std::string CFBamCustMssCFGenBindHasAlternateIndex::S_CouldNotResolveSuperclass( "Could not resolve Superclass for TableDef " );
	const std::string CFBamCustMssCFGenBindHasAlternateIndex::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindHasAlternateIndex::S_No( "no" );

	CFBamCustMssCFGenBindHasAlternateIndex::CFBamCustMssCFGenBindHasAlternateIndex()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindHasAlternateIndex::CFBamCustMssCFGenBindHasAlternateIndex(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindHasAlternateIndex::~CFBamCustMssCFGenBindHasAlternateIndex()
	{
	}

	std::string CFBamCustMssCFGenBindHasAlternateIndex::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		genContext->setExpansionIsNull();

		cfbam::ICFBamTableObj* curTable = NULL;
		
		if( genDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			curTable = dynamic_cast<cfbam::ICFBamTableObj*>( genDef );
		}
		else if( genDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
			cflib::ICFLibAnyObj* atomScope = dynamic_cast<cfbam::ICFBamAtomObj*>( genDef )->getObjScope();
			if( ( atomScope != NULL) && atomScope->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
				curTable = dynamic_cast<cfbam::ICFBamTableObj*>( atomScope );
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
			curTable = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::ICFBamTableColObj*>( genDef )->getRequiredContainerTable() );
		}
		else if( genDef->implementsClassCode( cfbam::CFBamIndexBuff::CLASS_CODE ) ) {
			curTable = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::ICFBamIndexObj*>( genDef )->getRequiredContainerTable() );
		}
		else if( genDef->implementsClassCode( cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamIndexObj* colIndex = dynamic_cast<cfbam::ICFBamIndexColObj*>( genDef )->getRequiredContainerIndex();
			if( colIndex == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_GenContextGenDefColIndex );
			}
			curTable = dynamic_cast<cfbam::ICFBamTableObj*>( colIndex->getRequiredContainerTable() );
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ClassList );
		}

		if( curTable == NULL ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_CouldNotLocateTable + genDef->getClassName() + S_CloseGreater );
		}

		cfbam::ICFBamIndexObj* alternateIndex = NULL;

		cfbam::ICFBamRelationObj* superClassRelation;
		cfbam::ICFBamTableObj* superClassTable;

		while( ( alternateIndex == NULL ) && ( curTable != NULL ) ) {
			alternateIndex = curTable->getOptionalLookupAltIndex();
			if( alternateIndex == NULL ) {
				superClassRelation = cfbam::CFBamCustMssCFTableObj::getSuperClassRelation( curTable );
				if( superClassRelation != NULL ) {
					superClassTable = superClassRelation->getRequiredLookupToTable();
					if( superClassTable == NULL ) {
						throw cflib::CFLibRuntimeException( CLASS_NAME,
							S_ProcName,
							S_CouldNotResolveSuperclass + curTable->getObjFullName() );
					}
					curTable = superClassTable;
				}
				else {
					curTable = NULL;
				}
			}
		}

		std::string ret = S_No;
		if( alternateIndex != NULL ) {
			ret = S_Yes;
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}
}
