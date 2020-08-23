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
#include <cfbamcustmsscf/CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::CLASS_NAME( "CFBamMssCFBindColumnInContainerOrNamedLookupRelation" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_GenContext( "genContext" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_GenContextGenDef( "genContext.GenDef" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_ICFBamTableObj( "ICFBamTableObj" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_SupportedClasses( "ICFBamValueObj, ICFBamIndexColObj" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_AtomOrTableColSupported( "ICFBamAtomObj, ICFBamTableColObj" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_GenContextGenDefIndexColLookupColumn( "GenContext.GenDef.IndexCol.LookupColumn" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_GenContextGenDefIndexColLookupColumnAtomScope( "GenContext.GenDef.IndexCol.LookupColumn.Atom.Scope" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_GenContextGenDefIndexColLookupColumnTableColScope( "GenContext.GenDef.IndexCol.LookupColumn.TableCol.Scope" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_GenContextGenDefRelationColFromCol( "GenContext.GenDef.RelationCol.FromCol" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_GenContextGenDefRelationColFromColAtomScope( "GenContext.GenDef.RelationCol.FromCol.Atom.Scope" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_GenContextGenDefRelationColFromColTableColScope( "GenContext.GenDef.RelationCol.FromCol.TableCol.Scope" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_GenContextGenDefTableColScope( "GenContext.GenDef.TableCol.Scope" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_GenContextSupportedClasses( "ICFBamAtomObj, ICFBamTableColObj, ICFBamIndexColObj, ICFBamRelationColObj" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_Yes( "yes" );
	const std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::S_No( "no" );

	CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation()
	: cfcore::MssCFGenBindObj()
	{
	}

	CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation(
		cfbam::CFBamCustMssCFEngine* argSchema,
		const std::string& toolset,
		const std::string* scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: cfcore::MssCFGenBindObj( argSchema, toolset, scopeDefClassName, genDefClassName, itemName )
	{
	}

	CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::~CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation()
	{
	}

	std::string CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::expandBody( cfcore::MssCFGenContext* genContext ) {
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

		std::string ret;

		if( isColumnInContainerOrNamedLookupRelation( genDef ) ) {
			ret = S_Yes;
		}
		else {
			ret = S_No;
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}


	/**
	 *	The core evaluation of ColumnInOwnerLookupRelation is also to determine
	 *	if an index definition is in an owner relation.
	 *	<P>
	 *	WORKING: Yes, I know.  This should be a business method instead
	 *	of copying the code in ICFBamIndexObj and MSIsaGenBindColumnInOwnerLookupRelation.
	 *
	 *	@param	genDef to be considered
	 *	@return	True if the column participates in an owner relation.
	 */
	bool CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation::isColumnInContainerOrNamedLookupRelation( cflib::ICFLibAnyObj* genDef ) {
		static const std::string S_ProcName( "isColumnInContainerOrNamedLookupRelation" );

		cflib::ICFLibAnyObj* focusDef = NULL;
		cfbam::ICFBamTableObj* tableDef = NULL;

		if( genDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
			cfbam::ICFBamAtomObj* atomDef = dynamic_cast<cfbam::ICFBamAtomObj*>( genDef );
			cflib::ICFLibAnyObj* atomScopeDef = atomDef->getObjScope();
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( atomScopeDef );
			focusDef = genDef;
		}
		else if( genDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamTableColObj* tableColDef = dynamic_cast<cfbam::ICFBamTableColObj*>( genDef );
			cflib::ICFLibAnyObj* tableColScopeDef = tableColDef->getObjScope();
			tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( tableColScopeDef );
			focusDef = genDef;
		}
		else if( genDef->implementsClassCode( cfbam::CFBamIndexColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamIndexColObj* indexColDef = dynamic_cast<cfbam::ICFBamIndexColObj*>( genDef );
			focusDef = indexColDef->getRequiredLookupColumn();
			if( focusDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				cfbam::ICFBamAtomObj* atomObj = dynamic_cast<cfbam::ICFBamAtomObj*>( focusDef );
				cflib::ICFLibAnyObj* scopeObj = atomObj->getObjScope();
				if( ( scopeObj != NULL ) && ( scopeObj->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) ) {
					tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( scopeObj );
				}
				else {
					throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
						S_ProcName,
						S_GenContextGenDefIndexColLookupColumnAtomScope,
						scopeObj,
						S_ICFBamTableObj );
				}
			}
			else if( focusDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				cfbam::ICFBamTableColObj* tableColDef = dynamic_cast<cfbam::ICFBamTableColObj*>( focusDef );
				cflib::ICFLibAnyObj* scopeObj = tableColDef->getObjScope();
				if( ( scopeObj != NULL ) && ( scopeObj->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) ) {
					tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( scopeObj );
				}
				else {
					throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
						S_ProcName,
						S_GenContextGenDefTableColScope,
						scopeObj,
						S_ICFBamTableObj );
				}
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_GenContextGenDefIndexColLookupColumn,
					focusDef,
					S_AtomOrTableColSupported );
			}
		}
		else if( genDef->implementsClassCode( cfbam::CFBamRelationColBuff::CLASS_CODE ) ) {
			cfbam::ICFBamRelationColObj* relColDef = dynamic_cast<cfbam::ICFBamRelationColObj*>( genDef );
			cflib::ICFLibAnyObj* columnDef = relColDef->getRequiredLookupFromCol();
			if( columnDef->implementsClassCode( cfbam::CFBamAtomBuff::CLASS_CODE ) ) {
				focusDef = columnDef;
				cflib::ICFLibAnyObj* scopeObj = columnDef->getObjScope();
				if( ( scopeObj != NULL ) && ( scopeObj->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) ) {
					tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( scopeObj );
				}
				else {
					throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
						S_ProcName,
						S_GenContextGenDefRelationColFromColAtomScope,
						scopeObj,
						S_ICFBamTableObj );
				}
			}
			else if( columnDef->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
				focusDef = columnDef;
				cflib::ICFLibAnyObj* scopeObj = columnDef->getObjScope();
				if( ( scopeObj != NULL ) && ( scopeObj->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) ) {
					tableDef = dynamic_cast<cfbam::ICFBamTableObj*>( scopeObj );
				}
				else {
					throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
						S_ProcName,
						S_GenContextGenDefRelationColFromColTableColScope,
						scopeObj,
						S_ICFBamTableObj );
				}
			}
			else {
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_GenContextGenDefRelationColFromCol,
					columnDef,
					S_AtomOrTableColSupported );
			}
		}
		else {
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_GenContextGenDef,
				genDef,
				S_GenContextSupportedClasses );
		}

		std::vector<cfbam::ICFBamRelationObj*> containerNamedLookupRelations = cfbam::CFBamCustMssCFTableObj::getOwnerContainerNamedLookupChainRelations( tableDef );
		if( containerNamedLookupRelations.empty() ) {
			return( false );
		}

		cfbam::ICFBamRelationObj* ownerRelation;
		cfbam::ICFBamRelationColObj* ownerRelationCol;
		cfbam::ICFBamIndexColObj* indexCol;
		std::vector<cfbam::ICFBamRelationColObj*> ownerRelationCols;

		for( auto ownerIterator = containerNamedLookupRelations.begin(); ownerIterator != containerNamedLookupRelations.end(); ownerIterator ++ ) {
			ownerRelation = *ownerIterator;
			ownerRelationCols = ownerRelation->getOptionalComponentsColumns();
			for( auto iterOwnerRelationCols = ownerRelationCols.begin(); iterOwnerRelationCols != ownerRelationCols.end(); iterOwnerRelationCols ++ ) {
				ownerRelationCol = *iterOwnerRelationCols;
				indexCol = ownerRelationCol->getRequiredLookupFromCol();
				if( indexCol->getRequiredLookupColumn() == focusDef ) {
					return( true );
				}
			}
		}

		return( false );
	}
}
