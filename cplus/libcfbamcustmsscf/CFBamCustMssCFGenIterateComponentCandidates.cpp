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
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateComponentCandidates.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenIterateComponentCandidates::CLASS_NAME( "CFBamCustMssCFGenIterateComponentCandidates" );
	const std::string CFBamCustMssCFGenIterateComponentCandidates::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenIterateComponentCandidates::S_ICFBamRelationObj( "ICFBamRelationObj" );

	CFBamCustMssCFGenIterateComponentCandidates::CFBamCustMssCFGenIterateComponentCandidates()
	: cfcore::MssCFGenIteratorObj()
	{
	}

	CFBamCustMssCFGenIterateComponentCandidates::CFBamCustMssCFGenIterateComponentCandidates(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenIteratorObj( dynamic_cast<cfcore::MssCFEngine*>( argSchema ), toolset, scopeDefClassName, genDefClassName, itemName, "Table" )
	{
	}

	CFBamCustMssCFGenIterateComponentCandidates::~CFBamCustMssCFGenIterateComponentCandidates() {
	}

	bool CFBamCustMssCFGenIterateComponentCandidates::derivesFrom( cfbam::ICFBamTableObj* obj, cfbam::ICFBamTableObj* target ) {
		if( obj == target ) {
			return( true );
		}

		cfbam::ICFBamRelationObj* superClassRelation = cfbam::CFBamCustMssCFTableObj::getSuperClassRelation( obj );
		cfbam::ICFBamTableObj* cur;
		while( superClassRelation != NULL ) {
			cur = superClassRelation->getRequiredLookupToTable();
			if( cur == target ) {
				return( true );
			}
			superClassRelation = cfbam::CFBamCustMssCFTableObj::getSuperClassRelation( cur );
		}

		return( false );
	}

	bool CFBamCustMssCFGenIterateComponentCandidates::canBeContainedBy( cfbam::ICFBamTableObj* container, cfbam::ICFBamTableObj* component ) {
		if( ! component->getRequiredIsInstantiable() ) {
			return( false );
		}

		cfbam::ICFBamRelationObj* containerRelation = cfbam::CFBamCustMssCFTableObj::getInheritedContainerRelation( component );
		if( containerRelation == NULL ) {
			return( false );
		}

		cfbam::ICFBamTableObj* containedBy = containerRelation->getRequiredLookupToTable();

		bool ret = derivesFrom( container, containedBy );

		return( ret );
	}

	void CFBamCustMssCFGenIterateComponentCandidates::addAndWalkSubClasses( std::vector<cflib::ICFLibAnyObj*>& list,
		cfbam::ICFBamTableObj *startTable,
		cfbam::ICFBamTableObj *containedBy )
	{
		if( canBeContainedBy( containedBy, startTable ) ) {
			list.push_back( startTable );
		}

		cfbam::ICFBamRelationObj* subClassRelation = NULL;
		std::vector<cfbam::ICFBamRelationObj*> subClassRelations = CFBamCustMssCFTableObj::getSubClassRelations( startTable );
		for( auto iterSubClassRelations = subClassRelations.begin(); iterSubClassRelations != subClassRelations.end(); iterSubClassRelations ++ ) {
			subClassRelation = *iterSubClassRelations;
			// Note that the sub-class relations are reverse relations, so the meaning of
			// from and to are reversed.  The relation specifies from the subclass to the
			// superclass.
			addAndWalkSubClasses( list, subClassRelation->getRequiredContainerFromTable(), containedBy );
		}
	}

	std::vector<cflib::ICFLibAnyObj*>* CFBamCustMssCFGenIterateComponentCandidates::enumerateDetails( cfcore::MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "enumerateDetails" );

		cflib::ICFLibAnyObj* genDef;

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				"genContext" );
		}

		genDef = genContext->getGenDef();
		if( genDef == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_GenContextGenDef );
		}

		if( ! genDef->implementsClassCode( cfbam::CFBamRelationBuff::CLASS_CODE ) ) {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_ICFBamRelationObj );
		}

		cfbam::ICFBamRelationObj* relationDef = dynamic_cast<cfbam::ICFBamRelationObj*>( genDef );
		cfbam::ICFBamTableObj* containedBy = relationDef->getRequiredContainerFromTable();
		cfbam::ICFBamTableObj* startTable = relationDef->getRequiredLookupToTable();

		std::vector<cflib::ICFLibAnyObj*>* list = new std::vector<cflib::ICFLibAnyObj*>();

		addAndWalkSubClasses( *list, startTable, containedBy );

		return( list );
	}
}
