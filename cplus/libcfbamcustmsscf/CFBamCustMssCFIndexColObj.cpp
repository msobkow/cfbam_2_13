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
 *	Contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 */


#include <cfbamcustmsscf/CFBamCustMssCFIndexColObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFEngine.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenContext.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFTableObj.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFIndexColObj::CLASS_NAME( "CFBamCustMssCFIndexColObj" );

	CFBamCustMssCFIndexColObj::CFBamCustMssCFIndexColObj() {
	}

	CFBamCustMssCFIndexColObj::~CFBamCustMssCFIndexColObj() {
	}

	cfbam::ICFBamTableColObj* CFBamCustMssCFIndexColObj::probeForFromColumn( cfbam::ICFBamTableObj* searchTable,
		cfbam::ICFBamSchema::RelationTypeEnum relationType,
		bool isNullable,
		cfbam::ICFBamValueObj* typeSpec )
	{
		static const std::string S_ProcName( "probeForFromColumn-relationType" );
		static const std::string S_SearchTable( "searchTable" );
		static const std::string S_TypeSpec( "typeSpec" );

		if( searchTable == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_SearchTable );
		}
		if( typeSpec == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 4, S_TypeSpec );
		}

		cfbam::ICFBamRelationObj* searchSuperRelation = CFBamCustMssCFTableObj::getSuperClassRelation( searchTable );
		if( searchSuperRelation != NULL ) {
			cfbam::ICFBamTableColObj* superValue = probeForFromColumn( searchSuperRelation->getRequiredLookupToTable(),
				relationType,
				isNullable,
				typeSpec );
			if( superValue != NULL ) {
				return( superValue );
			}
		}

		cfbam::ICFBamRelationObj* relation;
		cfbam::ICFBamRelationColObj* relationCol;
		cfbam::ICFBamIndexColObj* fromCol;
		cfbam::ICFBamValueObj* dataCol;
		cfbam::ICFBamTableColObj* fromTableCol;
		std::vector<cfbam::ICFBamRelationColObj*> relationColumns;
		std::vector<cfbam::ICFBamRelationObj*> relations = searchTable->getOptionalComponentsRelation();
		for( auto iterRelations = relations.begin(); iterRelations != relations.end(); iterRelations++ ) {
			relation = *iterRelations;
			if( relation->getRequiredRelationType() == relationType ) {
				relationColumns = relation->getOptionalComponentsColumns();
				for( auto iterRelationColumns = relationColumns.begin(); iterRelationColumns != relationColumns.end(); iterRelationColumns ++ ) {
					relationCol = *iterRelationColumns;
					fromCol = relationCol->getRequiredLookupFromCol();
					dataCol = fromCol->getRequiredLookupColumn();
					if( dataCol->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
						fromTableCol = dynamic_cast<cfbam::ICFBamTableColObj*>( dataCol );
						if( fromTableCol->getRequiredIsNullable() == isNullable ) {
							if( fromTableCol->getRequiredParentDataType() == typeSpec ) {
								return( fromTableCol );
							}
						}
					}
				}
			}
		}

		return( NULL);
	}

	cfbam::ICFBamTableColObj* CFBamCustMssCFIndexColObj::probeForFromColumn( cfbam::ICFBamTableObj* searchTable,
		const std::string& relationTypeName,
		bool isNullable,
		cfbam::ICFBamValueObj* typeSpec )
	{
		static const std::string S_ProcName( "probeForFromColumn-relationTypeName" );
		static const std::string S_SearchTable( "searchTable" );
		static const std::string S_TypeSpec( "typeSpec" );

		if( searchTable == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_SearchTable );
		}
		if( typeSpec == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 4, S_TypeSpec );
		}

		cfbam::ICFBamSchema::RelationTypeEnum* relationType = cfbam::ICFBamSchema::parseRelationTypeEnum( &relationTypeName ); 
		if( relationType == NULL ) {
			static const std::string S_MsgResolutionOfTypeName( "Resolution of relationTypeName " );
			std::string S_Msg( S_MsgResolutionOfTypeName + relationTypeName );
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, S_Msg );
		}

		return( probeForFromColumn( searchTable, *relationType, isNullable, typeSpec ) );
	}

	cfbam::ICFBamValueObj* CFBamCustMssCFIndexColObj::getWidestLookupColumn( cfbam::ICFBamIndexColObj* targetIndexCol, cfbam::CFBamCustMssCFGenContext* genContext ) {
		static const std::string S_ProcName( "getWidestLookupColumn" );
		static const std::string S_TargetIndexCol( "targetIndexCol" );
		static const std::string S_GenContext( "genContext" );

		if( targetIndexCol == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_TargetIndexCol );
		}
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 2, S_GenContext );
		}

		cfcore::MssCFEngine* genEngine = genContext->getGenEngine();

		/*
		 *	In order to implement the named lookups, what I need
		 *	to do is iterate through the columns of the lookup,
		 *	then for each one, pop to the top tabledef and search for
		 *	a matching inherited mandatory column type and use that
		 *	to pass the argument.
		 *
		 *	If no mandatory column is found, then an optional one
		 *	will be searched for.
		 *
		 *	I think I'll call the GEL verb SatisfyWidestLookupColumn
		 *	for a scope of IndexColumn, on the assumption that you're
		 *	iterating through the columns of the LookupIndex when
		 *	invoking this specialized verb.  The widest specification
		 *	is the one closest to the base class, not the first one
		 *	encountered in the inheritance tree.  Thus this will need
		 *	to be a recursive function that only considers the current
		 *	table's columns if the superclass could not find a match.
		 *
		 *	The first pass should only consider columns which are in the
		 *	Owner relationships of the table hierarchy.  Then a second
		 *	pass which considers columns of the Container relationships
		 *	should be performed.  The required passes should be made before
		 *	any optional passes are made.
		 *
		 *	Only if we can't resolve the column using an Owner or Container
		 *	relationship should we widen the search to general columns.
		 */

		// Determine the target column type

		cfbam::ICFBamValueObj* targetColumn = targetIndexCol->getRequiredLookupColumn();

		cfbam::ICFBamValueObj* typeSpec;
		if( targetColumn->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
			typeSpec = dynamic_cast<cfbam::ICFBamTableColObj*>( targetColumn )->getRequiredParentDataType();
		}
		else {
			static const std::string S_MsgCanOnlyResolve( "Can only resolve TableCol columns, not " );
			static const std::string S_Space( " " );
			static const std::string S_Dot( "." );
			genEngine->getLog()->message( S_MsgCanOnlyResolve
				+ targetColumn->getClassName() + S_Space
				+ targetColumn->getRequiredContainerScope()->getObjName() + S_Dot
				+ targetColumn->getRequiredName() );
			return( NULL );
		}

		// Emulate a "poptop Table" to get the table to be searched

		std::string goalTypeName( "Table" );
		cfcore::ICFGenKbDefClassObj* goalType = genEngine->getDefClassTableObj()->readDefClassByNameIdx( goalTypeName );
		if( goalType == NULL ) {
			static const std::string S_MsgCouldNotFindGoalClass( "() Could not find goal class \"" );
			static const std::string S_MsgEnd( "\"" );
			genEngine->getLog()->message( S_ProcName + S_MsgCouldNotFindGoalClass + goalTypeName + S_MsgEnd );
			return( NULL );
		}

		cfcore::ICFGenKbDefClassObj* objectDefType = genEngine->getDefClassTableObj()->readDefClassByNameIdx( "Object" );
		if( objectDefType == NULL ) {
			static const std::string S_MsgCouldNotFindObjectClass( "() Could not find object class \"Object\"" );
			genEngine->getLog()->message( S_ProcName + S_MsgCouldNotFindObjectClass );
			return( NULL );
		}

		cfbam::CFBamCustMssCFGenContext* goalContext = genContext;
		cfbam::CFBamCustMssCFGenContext* prevContext;
		cfbam::CFBamCustMssCFGenContext* topContext = NULL;
		std::string searchTypeName;
		cfcore::ICFGenKbDefClassObj* searchType;

		while( goalContext != NULL ) {
			searchTypeName = goalContext->getRequiredLookupGenDef()->getRequiredName();
			searchType = genEngine->getDefClassTableObj()->readDefClassByNameIdx( searchTypeName );
			if( searchType == NULL ) {
				static const std::string S_MsgCouldNotFindSearchClass( "() Could not find search class \"" );
				static const std::string S_MsgEnd( "\"." );
				genEngine->getLog()->message( S_ProcName + S_MsgCouldNotFindSearchClass + searchTypeName + S_MsgEnd );
				return( NULL );
			}

			while( ( searchType != NULL ) && ( searchType != goalType ) ) {
				if( searchType != objectDefType ) {
					searchType = searchType->getOptionalParentBaseDefClass();
				}
				else {
					searchType = NULL;
				}
			}

			if( searchType != NULL ) {
				// The goal context definition derives from the target type
				topContext = goalContext;
			}

			prevContext = dynamic_cast<cfbam::CFBamCustMssCFGenContext*>( goalContext->getPrevContext() );
			if( prevContext != goalContext ) {
				goalContext = prevContext;
			}
			else {
				goalContext = NULL;
			}
		}

		if( topContext == NULL ) {
			static const std::string S_MsgCouldNotFindTopContext( "() Could not find top context with a definition derived from \"" );
			static const std::string S_MsgEnd( "\"" );
			genEngine->getLog()->message( S_ProcName + S_MsgCouldNotFindTopContext + goalTypeName + S_MsgEnd );
			return (NULL);
		}

		cfbam::ICFBamTableObj* searchTable;
		cflib::ICFLibAnyObj* refDef = topContext->getGenDef();
		if( refDef->implementsClassCode( cfbam::CFBamTableBuff::CLASS_CODE ) ) {
			searchTable = dynamic_cast<cfbam::ICFBamTableObj*>( refDef );
		}
		else {
			static const std::string S_MsgInconsistentTypes( "() Top context says it has a definition derived from \"" );
			static const std::string S_MsgContinues( "\", but returned an " );
			genEngine->getLog()->message( S_ProcName + S_MsgInconsistentTypes + goalTypeName + S_MsgContinues + refDef->getClassName() );
			return( NULL );
		}

		// Search for the shallowest required Owner attribute derived from the specified data type
		// If not found, search for the shallowest required Container attribute derived from the specified data type
		// If not found, search for the shallowest required Parent attribute derived from the specified data type
		// If not found, search for the shallowest required Lookup attribute derived from the specified data type
		// If not found, search for the shallowest optional Owner attribute derived from the specified data type
		// If not found, search for the shallowest optional Container attribute derived from the specified data type
		// If not found, search for the shallowest optional Parent attribute derived from the specified data type
		// If not found, search for the shallowest optional Lookup attribute derived from the specified data type
		// If not found, barf

		cfbam::ICFBamTableColObj* matchingTableCol = probeForFromColumn( searchTable, "Owner", false, typeSpec );
		if( matchingTableCol != NULL ) {
			return( matchingTableCol );
		}

		matchingTableCol = probeForFromColumn( searchTable, "Container", false, typeSpec );
		if( matchingTableCol != NULL ) {
			return( matchingTableCol );
		}

		matchingTableCol = probeForFromColumn( searchTable, "Parent", false, typeSpec );
		if( matchingTableCol != NULL ) {
			return( matchingTableCol );
		}

		matchingTableCol = probeForFromColumn( searchTable, "Lookup", false, typeSpec );
		if( matchingTableCol != NULL ) {
			return( matchingTableCol );
		}

		matchingTableCol = probeForFromColumn( searchTable, "Owner", true, typeSpec );
		if( matchingTableCol != NULL ) {
			return( matchingTableCol );
		}

		matchingTableCol = probeForFromColumn( searchTable, "Container", true, typeSpec );
		if( matchingTableCol != NULL ) {
			return( matchingTableCol );
		}

		matchingTableCol = probeForFromColumn( searchTable, "Parent", true, typeSpec );
		if( matchingTableCol != NULL ) {
			return( matchingTableCol );
		}

		matchingTableCol = probeForFromColumn( searchTable, "Lookup", true, typeSpec );
		if( matchingTableCol != NULL ) {
			return( matchingTableCol );
		}

		static const std::string S_MsgCouldNotFindMatching( "Could not find a matching " );
		static const std::string S_MsgColumnForTypeSpec( " column for type spec \"" );
		static const std::string S_MsgEnd( "\"" );
		genEngine->getLog()->message( S_ProcName + S_MsgCouldNotFindMatching + searchTable->getRequiredName() + S_MsgColumnForTypeSpec + typeSpec->getRequiredName() + S_MsgEnd );

		return( NULL );
	}
}
