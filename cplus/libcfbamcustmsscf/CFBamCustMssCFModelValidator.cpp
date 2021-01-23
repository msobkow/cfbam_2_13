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

#include <cfbamcustmsscf/CFBamCustMssCFModelValidator.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFModelValidator::CLASS_NAME( "CFBamCustMssCFModelValidator" );
	const std::string CFBamCustMssCFModelValidator::S_MsgErrorTable( "ERROR: Table \"" );
	const std::string CFBamCustMssCFModelValidator::S_MsgErrorIndex( "ERROR: Index \"" );
	const std::string CFBamCustMssCFModelValidator::S_MsgErrorRelation( "ERROR: Relation \"" );
	const std::string CFBamCustMssCFModelValidator::S_Error( "ERROR: " );
	const std::string CFBamCustMssCFModelValidator::S_Column( "\" column \"" );
	const std::string CFBamCustMssCFModelValidator::S_Index( "\" index \"" );
	const std::string CFBamCustMssCFModelValidator::S_PrimaryIndex( "\" primary index \"" );
	const std::string CFBamCustMssCFModelValidator::S_OfTheIndex( "\" of the index \"" );
	const std::string CFBamCustMssCFModelValidator::S_IsNullable( "\" is Nullable\n" );
	const std::string CFBamCustMssCFModelValidator::S_Relation( "\" relation \"" );
	const std::string CFBamCustMssCFModelValidator::S_DQuoteNewline( "\"\n" );
	const std::string CFBamCustMssCFModelValidator::S_Dot( "." );
	const std::string CFBamCustMssCFModelValidator::S_ValidatingSchemaDef( "Validating SchemaDef \"" );
	const std::string CFBamCustMssCFModelValidator::S_DQuoteEllipsesNewline( "\"...\n" );
	const std::string CFBamCustMssCFModelValidator::S_SchemaDefDQuote( "SchemaDef \"" );
	const std::string CFBamCustMssCFModelValidator::S_DQuoteIsValidNewline( "\" is valid.\n" );
	const std::string CFBamCustMssCFModelValidator::S_DQuoteIsNotValidNewline( "\" is not valid.\n" );
	const std::string CFBamCustMssCFModelValidator::S_SpaceDQuote( " \"" );
	const std::string CFBamCustMssCFModelValidator::S_DQuoteSlice( "\" slice " );
	const std::string CFBamCustMssCFModelValidator::S_IsAlreadyInUseByThe( " is already in use by the " );
	const std::string CFBamCustMssCFModelValidator::S_IsAlreadyInUseByTheTable( "\" is already in use by the table \"" );
	const std::string CFBamCustMssCFModelValidator::S_DoesNotSpecifyItsTable( "\" does not specify its table\n" );
	const std::string CFBamCustMssCFModelValidator::S_DoesNotSpecifyToTable( "\" does not specify a to table\n" );
	const std::string CFBamCustMssCFModelValidator::S_DoesNotSpecifyFromIndex( "\" does not specify a from index\n" );
	const std::string CFBamCustMssCFModelValidator::S_DoesNotSpecifyToIndex( "\" does not specify a to index\n" );
	const std::string CFBamCustMssCFModelValidator::S_DoesNotSpecifyAnyColumns( "\" does not specify any columns\n" );
	const std::string CFBamCustMssCFModelValidator::S_OfRelationship( "\" of the relationship \"" );
	const std::string CFBamCustMssCFModelValidator::S_OverloadsNameOfRelationship( "\" overloads the name of the relationship \"" );
	const std::string CFBamCustMssCFModelValidator::S_OverloadsOneDefinedBy( "\" overloads the one defined by \"" );
	const std::string CFBamCustMssCFModelValidator::S_OverloadsTheShortName( "\" overloads the short name \"" );
	const std::string CFBamCustMssCFModelValidator::S_OverloadsTheDatabaseName( "\" overloads the database name \"" );
	const std::string CFBamCustMssCFModelValidator::S_OverloadsNameOfIndex( "\" overloads the name of the index \"" );
	const std::string CFBamCustMssCFModelValidator::S_OverloadsTheSuffix( "\" overloads the suffix \"" );
	const std::string CFBamCustMssCFModelValidator::S_ClassCode( "\" class code \"" );
	const std::string CFBamCustMssCFModelValidator::S_Collides( "\" collides with that of the " );
	const std::string CFBamCustMssCFModelValidator::S_DatabaseName( "\" database name \"" );
	const std::string CFBamCustMssCFModelValidator::S_DefinedBy( "\" defined by \"" );
	const std::string CFBamCustMssCFModelValidator::S_Col( "col" );
	const std::string CFBamCustMssCFModelValidator::S_DefinitelyNot( "definitely not " );
	const std::string CFBamCustMssCFModelValidator::S_HasNoPrimaryIndex( "\" has no primary index\n" );
	const std::string CFBamCustMssCFModelValidator::S_IsNotUnique( "\" is not unique\n" );
	const std::string CFBamCustMssCFModelValidator::S_IsASuperclassRelation( "\" is a Superclass relation, but \"" );
	const std::string CFBamCustMssCFModelValidator::S_AlreadySuperclassRelation( "\" has already been defined as the Superclass relation\n" );
	const std::string CFBamCustMssCFModelValidator::S_DoesNotSpecifySameNumberOfColumnsAsFromIndex( "\" does not specify the same number of columns as in the from index \"" );
	const std::string CFBamCustMssCFModelValidator::S_SpecifiesFromIndexColumn( "\" specifies the from index column \"" );
	const std::string CFBamCustMssCFModelValidator::S_MoreThanOnce( "\" more than once\n" );
	const std::string CFBamCustMssCFModelValidator::S_DoesNotReferenceFromIndexColumn( "\" does not reference the from index column \"" );
	const std::string CFBamCustMssCFModelValidator::S_SpecifiesToIndexColumn( "\" specifies the to index column \"" );
	const std::string CFBamCustMssCFModelValidator::S_DoesNotReferenceToIndexColumn( "\" does not reference the to index column \"" );
	const std::string CFBamCustMssCFModelValidator::S_DefinesMoreThanOneChain( "\" defines more than one chain\n" );
	const std::string CFBamCustMssCFModelValidator::S_OverloadsTheChainDefinitionFromTable( "\" overloads the chain definition from the table \"" );
	const std::string CFBamCustMssCFModelValidator::S_OnlyOneChainCanBeDefined( "\" -- only one chain can be defined by an object hierarchy\n" );
	const std::string CFBamCustMssCFModelValidator::S_Chain( "\" chain \"" );
	const std::string CFBamCustMssCFModelValidator::S_Prev( "Prev" );
	const std::string CFBamCustMssCFModelValidator::S_Next( "Next" );
	const std::string CFBamCustMssCFModelValidator::S_PreviousRelationMustBeNamedPrev( "\" previous relation must be named \"Prev\"\n" );
	const std::string CFBamCustMssCFModelValidator::S_NextRelationMustBeNamedNext( "\" next relation must be named \"Next\"\n" );
	const std::string CFBamCustMssCFModelValidator::S_PreviousRelationMustBeOptional( "\" previous relation must be optional\n" );
	const std::string CFBamCustMssCFModelValidator::S_NextRelationMustBeOptional( "\" next relation must be optional\n" );
	const std::string CFBamCustMssCFModelValidator::S_ReferencesInheritedPreviousRelation( "\" references a previous relation that is inherited by the table -- it must be defined by the table\n" );
	const std::string CFBamCustMssCFModelValidator::S_ReferencesInheritedNextRelation( "\" references a next relation that is inherited by the table -- it must be defined by the table\n" );
	const std::string CFBamCustMssCFModelValidator::S_ReferencesPreviousRelationOfInheritedFromIndex( "\" references a previous relation whose from index is not defined by the table -- inherited indexes can not be referenced\n" );
	const std::string CFBamCustMssCFModelValidator::S_ReferencesPreviousRelationOfInheritedToIndex( "\" references a previous relation that does not target an index defined by the table -- inherited indexes can not be referenced\n" );
	const std::string CFBamCustMssCFModelValidator::S_ReferencesNextRelationOfInheritedFromIndex( "\" references a next relation whose from index is not defined by the table -- inherited indexes can not be referenced\n" );
	const std::string CFBamCustMssCFModelValidator::S_ReferencesNextRelationOfInheritedToIndex( "\" references a next relation that does not target an index defined by the table -- inherited indexes can not be referenced\n" );
	const std::string CFBamCustMssCFModelValidator::S_ReferencesPreviousRelationTargetNotPrimaryIndex( "\" references a previous relation that does not target the primary index of the table\n" );
	const std::string CFBamCustMssCFModelValidator::S_ReferencesNextRelationTargetNotPrimaryIndex( "\" references a next relation that does not target the primary index of the table\n" );
	const std::string CFBamCustMssCFModelValidator::S_PreviousRelationColumn( "\" previous relation column \"" );
	const std::string CFBamCustMssCFModelValidator::S_NextRelationColumn( "\" next relation column \"" );
	const std::string CFBamCustMssCFModelValidator::S_PreviousReferencesRequiredFromColumn( " references a required from column -- all from columns of the referenced previous relationship must be Nullable\n" );
	const std::string CFBamCustMssCFModelValidator::S_NextReferencesRequiredFromColumn( " references a required from column -- all from columns of the referenced next relationship must be Nullable\n" );
	const std::string CFBamCustMssCFModelValidator::S_FromColumnNameMustBePrependedByPrev( " from column name must be the to column name prepended by \"Prev\"; the same restriction applies to the database names\n" );
	const std::string CFBamCustMssCFModelValidator::S_FromColumnNameMustBePrependedByNext( " from column name must be the to column name prepended by \"Next\"; the same restriction applies to the database names\n" );
	const std::string CFBamCustMssCFModelValidator::S_IdGeneratorSlicesAreValid( "Id generator slices are valid\n" );
	const std::string CFBamCustMssCFModelValidator::S_TableClassCodesAreValid( "Table class codes are valid\n" );
	const std::string CFBamCustMssCFModelValidator::S_SchemaDatabaseNamesAreUnique( "Schema database names are unique\n" );
	const std::string CFBamCustMssCFModelValidator::S_TablesDoNotOverloadColumnNames( "Tables do not overload column names\n" );
	const std::string CFBamCustMssCFModelValidator::S_TablesDoNotOverloadColumnShortNames( "Tables do not overload column short names\n" );
	const std::string CFBamCustMssCFModelValidator::S_TablesDoNotOverloadColumnDatabaseNames( "Tables do not overload column database names\n" );
	const std::string CFBamCustMssCFModelValidator::S_TablesHavePrimaryIndexes( "All tables have primary indexes\n" );
	const std::string CFBamCustMssCFModelValidator::S_IndexesAllSpecifyColumns( "Indexes all specify columns\n" );
	const std::string CFBamCustMssCFModelValidator::S_PrimaryIndexesAreUnique( "Primary indexes are unique\n" );
	const std::string CFBamCustMssCFModelValidator::S_PrimaryIndexColumnsAreAllRequired( "Primary index columns are all required/not-NULL\n" );
	const std::string CFBamCustMssCFModelValidator::S_TablesDoNotOverloadIndexNames( "Tables do not overload index names\n" );
	const std::string CFBamCustMssCFModelValidator::S_TablesDoNotOverloadIndexSuffixes( "Tables do not overload index suffixes\n" );
	const std::string CFBamCustMssCFModelValidator::S_TablesDoNotOverloadIndexShortNames( "Tables do not overload index short names\n" );
	const std::string CFBamCustMssCFModelValidator::S_RelationsHaveProperLinkage( "Relations have proper linkages\n" );
	const std::string CFBamCustMssCFModelValidator::S_TablesDoNotOverloadRelationNames( "Tables do not overload relation names\n" );
	const std::string CFBamCustMssCFModelValidator::S_TablesDoNotOverloadRelationSuffixes( "Tables do not overload relation suffixes\n" );
	const std::string CFBamCustMssCFModelValidator::S_TablesHaveAtMostOneSuperclassRelation( "Tables have at most one Superclass relation\n" );
	const std::string CFBamCustMssCFModelValidator::S_RelationsAllSpecifyColumns( "Relations all specify columns\n" );
	const std::string CFBamCustMssCFModelValidator::S_RelationsSpecifySameNumberOfColumnsAsIndexes( "Relations specify the same number of columns as their to/from indexes\n" );
	const std::string CFBamCustMssCFModelValidator::S_RelationsBindAllFromIndexColumnsOnce( "Relations bind all from index columns exactly once\n" );
	const std::string CFBamCustMssCFModelValidator::S_RelationsBindAllToIndexColumnsOnce( "Relations bind all to index columns exactly once\n" );
	const std::string CFBamCustMssCFModelValidator::S_ChainsAreValid( "Chains are valid\n" );

	CFBamCustMssCFModelValidator::CFBamCustMssCFModelValidator() {
	}

	CFBamCustMssCFModelValidator::~CFBamCustMssCFModelValidator() {
	}

	const std::string& CFBamCustMssCFModelValidator::getValidationResults() {
		return( log );
	}

	bool CFBamCustMssCFModelValidator::validateSchemaDef( cfbam::ICFBamSchemaDefObj* schema ) {
		static const std::string S_ProcName( "validateSchemaDef" );
		modelIsValid = true;
		log.clear();

		log.append( S_ValidatingSchemaDef + schema->getObjFullName() + S_DQuoteEllipsesNewline );

		propagateNameChanges( schema );
		validateSlices( schema );
		validateClassCodes( schema );
		validateDbNamesNotOverloaded( schema );
		validateColumnNamesNotOverloaded( schema );
		validateColumnShortNamesNotOverloaded( schema );
		validateColumnDbNamesNotOverloaded( schema );
		validateTablesHavePrimaryIndexes( schema );
		validateIndexesHaveColumns( schema );
		validatePrimaryIndexesAreUnique( schema );
		validatePrimaryIndexColumnsAreRequired( schema );
		validateIndexNamesNotOverloaded( schema );
		validateIndexSuffixesNotOverloaded( schema );
		validateIndexShortNamesNotOverloaded( schema );
		validateRelationsHaveLinkages( schema );
		validateRelationNamesNotOverloaded( schema );
		validateRelationSuffixesNotOverloaded( schema );
		validateOnlyOneSuperclassPerTable( schema );
		validateRelationsHaveColumns( schema );
		validateRelationColumnCountsMatchIndexes( schema );
		validateRelationsSpecifyAllFromColumns( schema );
		validateRelationsSpecifyAllToColumns( schema );
		validateChains( schema );

		if( modelIsValid ) {
			log.append( S_SchemaDefDQuote + schema->getObjFullName() + S_DQuoteIsValidNewline );
		}
		else {
			log.append( S_SchemaDefDQuote + schema->getObjFullName() + S_DQuoteIsNotValidNewline );
		}

		return( modelIsValid );
	}

	void CFBamCustMssCFModelValidator::propagateNameChanges( cfbam::ICFBamSchemaDefObj* schema ) {
		propagateTypesAreNotNull( schema );
		propagateTableColumnNameChanges( schema );
		propagateIndexColumnNameChanges( schema );
	}

	void CFBamCustMssCFModelValidator::propagateTypesAreNotNull( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamValueObj*> types = schema->getOptionalComponentsTypes();
		cfbam::ICFBamValueObj* type;
		cfbam::ICFBamValueEditObj* editType;
		for( auto typeIter = types.begin(); typeIter != types.end(); typeIter ++ ) {
			type = *typeIter;
			if( type->implementsClassCode( cfbam::CFBamBlobTypeBuff::CLASS_CODE ) ) {
				if( ! type->getRequiredIsNullable() ) {
					editType = type->beginEdit();
					editType->setRequiredIsNullable( true );
					editType = dynamic_cast<cfbam::ICFBamValueEditObj*>( editType->update() );
				}
			}
			else {
				if( type->getRequiredIsNullable() ) {
					editType = type->beginEdit();
					editType->setRequiredIsNullable( false );
					editType = dynamic_cast<cfbam::ICFBamValueEditObj*>( editType->update() );
				}
			}
		}
	}

	void CFBamCustMssCFModelValidator::propagateTableColumnNameChanges( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		std::vector<cfbam::ICFBamIndexObj*> indexes;
		cfbam::ICFBamIndexObj* index;
		std::vector<cfbam::ICFBamIndexColObj*> indexCols;
		cfbam::ICFBamIndexColObj* indexCol;
		cfbam::ICFBamIndexColEditObj* editIndexCol;
		cfbam::ICFBamValueObj* column;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter ++ ) {
			table = *tableIter;
			indexes = table->getOptionalComponentsIndex();
			for( auto indexIter = indexes.begin(); indexIter != indexes.end(); indexIter ++ ) {
				index = *indexIter;
				indexCols = index->getOptionalComponentsColumns();
				for( auto indexColIter = indexCols.begin(); indexColIter != indexCols.end(); indexColIter++ ) {
					indexCol = *indexColIter;
					column = indexCol->getRequiredLookupColumn();
					if( ( indexCol->getRequiredName() != column->getRequiredName() )
						|| ( indexCol->isOptionalShortNameNull()
								&& ( ! column->isOptionalShortNameNull() ) )
						|| ( ( ! indexCol->isOptionalShortNameNull() )
								&& column->isOptionalShortNameNull() )
						|| ( ( ! indexCol->isOptionalShortNameNull() )
								&& ( ! column->isOptionalShortNameNull() )
								&& ( indexCol->getOptionalShortNameValue() != column->getOptionalShortNameValue() ) ) 
						|| ( indexCol->isOptionalLabelNull()
								&& ( ! column->isOptionalLabelNull() ) )
						|| ( ( ! indexCol->isOptionalLabelNull() )
								&& column->isOptionalLabelNull() )
						|| ( ( ! indexCol->isOptionalLabelNull() )
								&& ( ! column->isOptionalLabelNull() )
								&& ( indexCol->getOptionalLabelValue() != column->getOptionalLabelValue() ) ) 
						|| ( indexCol->isOptionalDescriptionNull()
								&& ( ! column->isOptionalDescriptionNull() ) )
						|| ( ( ! indexCol->isOptionalDescriptionNull() )
								&& column->isOptionalDescriptionNull() )
						|| ( ( ! indexCol->isOptionalDescriptionNull() )
								&& ( ! column->isOptionalDescriptionNull() )
								&& ( indexCol->getOptionalDescriptionValue() != column->getOptionalDescriptionValue() ) ) 
						|| ( indexCol->isOptionalShortDescriptionNull()
								&& ( ! column->isOptionalShortDescriptionNull() ) )
						|| ( ( ! indexCol->isOptionalShortDescriptionNull() )
								&& column->isOptionalShortDescriptionNull() )
						|| ( ( ! indexCol->isOptionalShortDescriptionNull() )
								&& ( ! column->isOptionalShortDescriptionNull() )
								&& ( indexCol->getOptionalShortDescriptionValue() != column->getOptionalShortDescriptionValue() ) ) )
					{
						editIndexCol = indexCol->beginEdit();
						editIndexCol->setRequiredName( column->getRequiredName() );
						if( column->isOptionalShortNameNull() ) {
							editIndexCol->setOptionalShortNameNull();
						}
						else {
							editIndexCol->setOptionalShortNameValue( column->getOptionalShortNameValue() );
						}
						if( column->isOptionalDescriptionNull() ) {
							editIndexCol->setOptionalDescriptionNull();
						}
						else {
							editIndexCol->setOptionalDescriptionValue( column->getOptionalDescriptionValue() );
						}
						if( column->isOptionalLabelNull() ) {
							editIndexCol->setOptionalLabelNull();
						}
						else {
							editIndexCol->setOptionalLabelValue( column->getOptionalLabelValue() );
						}
						if( column->isOptionalShortDescriptionNull() ) {
							editIndexCol->setOptionalShortDescriptionNull();
						}
						else {
							editIndexCol->setOptionalShortDescriptionValue( column->getOptionalShortDescriptionValue() );
						}
						editIndexCol = dynamic_cast<cfbam::ICFBamIndexColEditObj*>( editIndexCol->update() );
					}
				}
			}
		}
	}

	void CFBamCustMssCFModelValidator::propagateIndexColumnNameChanges( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		cfbam::ICFBamRelationObj* relation;
		std::vector<cfbam::ICFBamRelationColObj*> relationCols;
		cfbam::ICFBamRelationColObj* relationCol;
		cfbam::ICFBamRelationColEditObj* editRelationCol;
		cfbam::ICFBamIndexColObj* fromColumn;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			relations = table->getOptionalComponentsRelation();
			for( auto relationIter = relations.begin(); relationIter != relations.end(); relationIter++ ) {
				relation = *relationIter;
				relationCols = relation->getOptionalComponentsColumns();
				for( auto relationColIter = relationCols.begin(); relationColIter != relationCols.end(); relationColIter++ ) {
					relationCol = *relationColIter;
					fromColumn = relationCol->getRequiredLookupFromCol();
					if( ( relationCol->getRequiredName() != fromColumn->getRequiredName() )
						|| ( relationCol->isOptionalLabelNull() 
								&& ( ! fromColumn->isOptionalLabelNull() ) )
						|| ( ( ! relationCol->isOptionalLabelNull() )
								&& fromColumn->isOptionalLabelNull() )
						|| ( ( ! relationCol->isOptionalLabelNull() )
								&& ( ! fromColumn->isOptionalLabelNull() )
								&& ( relationCol->getOptionalLabelValue() != fromColumn->getOptionalLabelValue() ) ) 
						|| ( relationCol->isOptionalDescriptionNull()
								&& ( ! fromColumn->isOptionalDescriptionNull() ) )
						|| ( ( ! relationCol->isOptionalDescriptionNull() )
								&& fromColumn->isOptionalDescriptionNull() )
						|| ( ( ! relationCol->isOptionalDescriptionNull() )
								&& ( ! fromColumn->isOptionalDescriptionNull() )
								&& ( relationCol->getOptionalDescriptionValue() != fromColumn->getOptionalDescriptionValue() ) ) 
						|| ( relationCol->isOptionalShortNameNull()
								&& ( ! fromColumn->isOptionalShortNameNull() ) )
						|| ( ( ! relationCol->isOptionalShortNameNull() )
								&& fromColumn->isOptionalShortNameNull() )
						|| ( ( ! relationCol->isOptionalShortNameNull() )
								&& ( ! fromColumn->isOptionalShortNameNull() )
								&& ( relationCol->getOptionalShortNameValue() != fromColumn->getOptionalShortNameValue() ) ) 
						|| ( relationCol->isOptionalShortDescriptionNull()
								&& ( ! fromColumn->isOptionalShortDescriptionNull() ) )
						|| ( ( ! relationCol->isOptionalShortDescriptionNull() )
								&& fromColumn->isOptionalShortDescriptionNull() )
						|| ( ( ! relationCol->isOptionalShortDescriptionNull() )
								&& ( ! fromColumn->isOptionalShortDescriptionNull() )
								&& ( relationCol->getOptionalShortDescriptionValue() != fromColumn->getOptionalShortDescriptionValue() ) ) )
					{
						editRelationCol = relationCol->beginEdit();
						editRelationCol->setRequiredName( fromColumn->getRequiredName() );
						if( fromColumn->isOptionalShortNameNull() ) {
							editRelationCol->setOptionalShortNameNull();
						}
						else {
							editRelationCol->setOptionalShortNameValue( fromColumn->getOptionalShortNameValue() );
						}
						if( fromColumn->isOptionalDescriptionNull() ) {
							editRelationCol->setOptionalDescriptionNull();
						}
						else {
							editRelationCol->setOptionalDescriptionValue( fromColumn->getOptionalDescriptionValue() );
						}
						if( fromColumn->isOptionalLabelNull() ) {
							editRelationCol->setOptionalLabelNull();
						}
						else {
							editRelationCol->setOptionalLabelValue( fromColumn->getOptionalLabelValue() );
						}
						if( fromColumn->isOptionalShortDescriptionNull() ) {
							editRelationCol->setOptionalShortDescriptionNull();
						}
						else {
							editRelationCol->setOptionalShortDescriptionValue( fromColumn->getOptionalShortDescriptionValue() );
						}
						editRelationCol = dynamic_cast<cfbam::ICFBamRelationColEditObj*>( editRelationCol->update() );
					}
				}
			}
		}
	}

	void CFBamCustMssCFModelValidator::validateSlices( cfbam::ICFBamSchemaDefObj* schema ) {
		std::map<short,cfbam::ICFBamValueObj*> map;
		bool valid = true;
		std::vector<cfbam::ICFBamValueObj*> types = schema->getOptionalComponentsTypes();
		cfbam::ICFBamValueObj* type;
		cfbam::ICFBamValueObj* dup;
		cfbam::ICFBamId16GenObj* id16gen;
		cfbam::ICFBamId32GenObj* id32gen;
		cfbam::ICFBamId64GenObj* id64gen;
		cfbam::ICFBamUuidGenObj* uuidgen;
		short slice;
		for( auto typeIter = types.begin(); typeIter != types.end(); typeIter++ ) {
			type = *typeIter;
			if( type->implementsClassCode( cfbam::CFBamId16GenBuff::CLASS_CODE ) ) {
				id16gen = dynamic_cast<cfbam::ICFBamId16GenObj*>( type );
				slice = id16gen->getRequiredSlice();
			}
			else if( type->implementsClassCode( cfbam::CFBamId32GenBuff::CLASS_CODE ) ) {
				id32gen = dynamic_cast<cfbam::ICFBamId32GenObj*>( type );
				slice = id32gen->getRequiredSlice();
			}
			else if( type->implementsClassCode( cfbam::CFBamId64GenBuff::CLASS_CODE ) ) {
				id64gen = dynamic_cast<cfbam::ICFBamId64GenObj*>( type );
				slice = id64gen->getRequiredSlice();
			}
			else if( type->implementsClassCode( cfbam::CFBamUuidGenBuff::CLASS_CODE ) ) {
				uuidgen = dynamic_cast<cfbam::ICFBamUuidGenObj*>( type );
				slice = uuidgen->getRequiredSlice();
			}
			else {
				slice = -1;
			}
			if( slice > 0 ) {
				auto match = map.find( slice );
				if( match != map.end() ) {
					dup = match->second;
					std::string Msg( S_Error + type->getGenDefName() + S_SpaceDQuote + type->getObjName() + S_DQuoteSlice + std::to_string( slice ) + S_IsAlreadyInUseByThe + dup->getGenDefName() + S_SpaceDQuote + dup->getObjName() + S_DQuoteNewline );
					log.append( Msg );
					valid = false;
				}
				else {
					map.insert( std::pair<short,cfbam::ICFBamValueObj*>( slice, type ) );
				}
			}
		}
		if( valid ) {
			log.append( S_IdGeneratorSlicesAreValid );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateClassCodes( cfbam::ICFBamSchemaDefObj* schema ) {
		std::map<std::string,cfbam::ICFBamTableObj*> map;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		cfbam::ICFBamTableObj* dup;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			auto match = map.find( table->getRequiredTableClassCode() );
			if( match != map.end() ) {
				dup = match->second;
				log.append( S_MsgErrorTable + table->getObjName() + S_ClassCode + table->getRequiredTableClassCode() + S_IsAlreadyInUseByTheTable + dup->getObjName() + S_DQuoteNewline );
				valid = false;
			}
			else {
				map.insert( std::pair<std::string,cfbam::ICFBamTableObj*>( table->getRequiredTableClassCode(), table ) );
			}
		}
		if( valid ) {
			log.append( S_TableClassCodesAreValid );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateDbNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema ) {
		std::map<std::string,cfbam::ICFBamScopeObj*> map;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		std::string name;
		cfbam::ICFBamScopeObj* dup;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			if( table->isOptionalDbNameNull() ) {
				name = table->getObjName();
			}
			else {
				name = table->getOptionalDbNameValue();
			}
			auto match = map.find( name );
			if( match != map.end() ) {
				dup = match->second;
				log.append( S_MsgErrorTable + table->getObjName() + S_DatabaseName + name + S_Collides + dup->getGenDefName() + S_SpaceDQuote + dup->getObjQualifiedName() + S_DQuoteNewline );
				valid = false;
			}
			else {
				map.insert( std::pair<std::string,cfbam::ICFBamScopeObj*>( name, dynamic_cast<cfbam::ICFBamScopeObj*>( table ) ) );
			}
		}
		std::vector<cfbam::ICFBamIndexObj*> indexes;
		cfbam::ICFBamIndexObj* index;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			indexes = table->getOptionalComponentsIndex();
			for( auto indexIter = indexes.begin(); indexIter != indexes.end(); indexIter++ ) {
				index = *indexIter;
				if( index->isOptionalDbNameNull() ) {
					name = index->getObjName();
				}
				else {
					name = index->getOptionalDbNameValue();
				}
				auto match = map.find( name );
				if( match != map.end() ) {
					dup = match->second;
					log.append( S_MsgErrorIndex + index->getObjQualifiedName() + S_DatabaseName + name + S_Collides + dup->getGenDefName() + S_SpaceDQuote + dup->getObjQualifiedName() + S_DQuoteNewline );
					valid = false;
				}
				else {
					map.insert( std::pair<std::string,cfbam::ICFBamScopeObj*>( name, dynamic_cast<cfbam::ICFBamScopeObj*>( index ) ) );
				}
			}
		}
		std::vector<cfbam::ICFBamRelationObj*> relations;
		cfbam::ICFBamRelationObj* relation;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			relations = table->getOptionalComponentsRelation();
			for( auto relationIter = relations.begin(); relationIter != relations.end(); relationIter++ ) {
				relation = *relationIter;
				if( relation->isOptionalDbNameNull() ) {
					name = relation->getObjName();
				}
				else {
					name = relation->getOptionalDbNameValue();
				}
				auto match = map.find( name );
				if( match != map.end() ) {
					dup = match->second;
					log.append( S_MsgErrorIndex + relation->getObjQualifiedName() + S_DatabaseName + name + S_Collides + dup->getGenDefName() + S_SpaceDQuote + dup->getObjQualifiedName() + S_DQuoteNewline );
					valid = false;
				}
				else {
					map.insert( std::pair<std::string,cfbam::ICFBamScopeObj*>( name, dynamic_cast<cfbam::ICFBamScopeObj*>( relation ) ) );
				}
			}
		}
		if( valid ) {
			log.append( S_SchemaDatabaseNamesAreUnique );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateColumnNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tableStack;
		cfbam::ICFBamTableObj* worktable;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		std::vector<cfbam::ICFBamIndexColObj*> indexCols;
		cfbam::ICFBamIndexColObj* indexCol;
		std::vector<cfbam::ICFBamValueObj*> cols;
		cfbam::ICFBamValueObj* col;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		cfbam::ICFBamRelationObj* relation;
		cfbam::ICFBamRelationObj* superRelation;
		std::map<std::string,cfbam::ICFBamValueObj*> map;
		cfbam::ICFBamValueObj* dup;
		bool notInPrimaryIndex;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			tableStack.clear();
			tableStack.push_back( table );
			worktable = table;
			while( worktable != NULL ) {
				superRelation = NULL;
				relations = worktable->getOptionalComponentsRelation();
				for( auto relationIter = relations.begin(); ( superRelation == NULL ) && ( relationIter != relations.end() ); relationIter++ ) {
					relation = *relationIter;
					if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
						superRelation = relation;
					}
				}
				if( superRelation != NULL ) {
					worktable = superRelation->getRequiredLookupToTable();
					tableStack.push_back( worktable );
				}
				else {
					worktable = NULL;
				}
			}
			map.clear();
			while( ! tableStack.empty() ) {
				worktable = tableStack.back();
				tableStack.pop_back();
				cols = worktable->getOptionalComponentsColumns();
				for( auto colIter = cols.begin(); colIter != cols.end(); colIter++ ) {
					col = *colIter;
					indexCols = worktable->getOptionalLookupPrimaryIndex()->getOptionalComponentsColumns();
					notInPrimaryIndex = true;
					for( auto indexColIter = indexCols.begin(); notInPrimaryIndex && ( indexColIter != indexCols.end() ); indexColIter++ ) {
						indexCol = *indexColIter;
						if( col == indexCol->getRequiredLookupColumn() ) {
							notInPrimaryIndex = false;
						}
					}
					if( notInPrimaryIndex ) {
						auto match = map.find( col->getObjName() );
						if( match != map.end() ) {
							dup = match->second;
							std::string S_Msg( S_MsgErrorTable + worktable->getObjName()
								+ S_Column + col->getObjName()
								+ S_OverloadsOneDefinedBy + dup->getRequiredContainerScope()->getObjName()
								+ S_Dot + dup->getObjName()
								+ S_DQuoteNewline );
							log.append( S_Msg );
							valid = false;
						}
						else {
							map.insert( std::pair<std::string,cfbam::ICFBamValueObj*>( col->getObjName(), col ) );
						}
					}
				}
			}
		}
		if( valid ) {
			log.append( S_TablesDoNotOverloadColumnNames );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateColumnShortNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tableStack;
		cfbam::ICFBamTableObj* worktable;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		std::vector<cfbam::ICFBamIndexColObj*> indexCols;
		std::vector<cfbam::ICFBamValueObj*> cols;
		cfbam::ICFBamValueObj* col;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		cfbam::ICFBamRelationObj* relation;
		cfbam::ICFBamRelationObj* superRelation;
		std::map<std::string,cfbam::ICFBamValueObj*> map;
		cfbam::ICFBamValueObj* dup;
		std::string colShortName;
		bool notInPrimaryIndex;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			tableStack.clear();
			tableStack.push_back( table );
			worktable = table;
			while( worktable != NULL ) {
				superRelation = NULL;
				relations = worktable->getOptionalComponentsRelation();
				for( auto relationIter = relations.begin(); ( superRelation == NULL ) && ( relationIter != relations.end() ); relationIter ++ ) {
					relation = *relationIter;
					if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
						superRelation = relation;
					}
				}
				if( superRelation != NULL ) {
					worktable = superRelation->getRequiredLookupToTable();
					tableStack.push_back( worktable );
				}
				else {
					worktable = NULL;
				}
			}
			map.clear();
			while( ! tableStack.empty() ) {
				worktable = tableStack.back();
				tableStack.pop_back();
				cols = worktable->getOptionalComponentsColumns();
				for( auto colIter = cols.begin(); colIter != cols.end(); colIter ++ ) {
					col = *colIter;
					if( col->isOptionalShortNameNull() ) {
						colShortName = col->getObjName();
					}
					else {
						colShortName = col->getOptionalShortNameValue();
					}
					indexCols = worktable->getOptionalLookupPrimaryIndex()->getOptionalComponentsColumns();
					notInPrimaryIndex = true;
					for( auto indexColIter = indexCols.begin(); notInPrimaryIndex && ( indexColIter != indexCols.end() ); indexColIter ++ ) {
						if( col == (*indexColIter)->getRequiredLookupColumn() ) {
							notInPrimaryIndex = false;
						}
					}
					if( notInPrimaryIndex ) {
						auto match = map.find( col->getObjName() );
						if( match != map.end() ) {
							dup = match->second;
							std::string S_Msg( S_MsgErrorTable + worktable->getObjName()
								+ S_Column + col->getObjName()
								+ S_OverloadsTheShortName + colShortName
								+ S_DefinedBy + dup->getRequiredContainerScope()->getObjName()
								+ S_Dot + dup->getObjName()
								+ S_DQuoteNewline );
							log.append( S_Msg );
							valid = false;
						}
						else {
							map.insert( std::pair<std::string,cfbam::ICFBamValueObj*>( colShortName, col ) );
						}
					}
				}
			}
		}
		if( valid ) {
			log.append( S_TablesDoNotOverloadColumnShortNames );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateColumnDbNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema ) {
		static const std::string S_ProcName( "validateColumnDbNamesNotOverloaded" );
		std::vector<cfbam::ICFBamTableObj*> tableStack;
		cfbam::ICFBamTableObj* worktable;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		std::vector<cfbam::ICFBamIndexColObj*> indexCols;
		std::vector<cfbam::ICFBamValueObj*> cols;
		cfbam::ICFBamValueObj* col;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		cfbam::ICFBamRelationObj* relation;
		cfbam::ICFBamRelationObj* superRelation;
		std::map<std::string,cfbam::ICFBamValueObj*> map;
		cfbam::ICFBamValueObj* dup;
		std::string colDbName;
		bool notInPrimaryIndex;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			tableStack.clear();
			tableStack.push_back( table );
			worktable = table;
			while( worktable != NULL ) {
				superRelation = NULL;
				relations = worktable->getOptionalComponentsRelation();
				for( auto relationIter = relations.begin(); ( superRelation == NULL ) && ( relationIter != relations.end() ); relationIter++ ) {
					relation = *relationIter;
					if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
						superRelation = relation;
					}
				}
				if( superRelation != NULL ) {
					worktable = superRelation->getRequiredLookupToTable();
					tableStack.push_back( worktable );
				}
				else {
					worktable = NULL;
				}
			}
			map.clear();
			while( ! tableStack.empty() ) {
				worktable = tableStack.back();
				tableStack.pop_back();
				cols = worktable->getOptionalComponentsColumns();
				for( auto colIter = cols.begin(); colIter != cols.end(); colIter++ ) {
					col = *colIter;
					if( col->implementsClassCode( cfbam::CFBamTableColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamTableColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamTableColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamBlobColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamBlobColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamBlobColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamBoolColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamBoolColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamBoolColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamInt16ColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamInt16ColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamInt16ColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamInt32ColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamInt32ColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamInt32ColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamInt64ColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamInt64ColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamInt64ColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamUInt16ColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamUInt16ColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamUInt16ColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamUInt32ColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamUInt32ColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamUInt32ColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamUInt64ColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamUInt64ColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamUInt64ColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamFloatColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamFloatColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamFloatColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamDoubleColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamDoubleColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamDoubleColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamNumberColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamNumberColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamNumberColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamStringColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamStringColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamStringColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamTextColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamTextColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamTextColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamTokenColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamTokenColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamTokenColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamNmTokenColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamNmTokenColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamNmTokenColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamNmTokensColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamNmTokensColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamNmTokensColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamDateColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamDateColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamDateColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamTimeColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamTimeColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamTimeColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamTimestampColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamTimestampColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamTimestampColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamTZDateColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamTZDateColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamTZDateColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamTZTimeColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamTZTimeColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamTZTimeColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamTZTimestampColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamTZTimestampColObj*>( col )->isOptionalDbNameNull() ) {
							colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamTZTimestampColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else if( col->implementsClassCode( cfbam::CFBamUuidColBuff::CLASS_CODE ) ) {
						if( dynamic_cast<cfbam::ICFBamUuidColObj*>( col )->isOptionalDbNameNull() ) {
						colDbName = col->getObjName();
						}
						else {
							colDbName = dynamic_cast<cfbam::ICFBamUuidColObj*>( col )->getOptionalDbNameValue();
						}
					}
					else {
						std::string S_Msg( S_DefinitelyNot + col->getGenDefName() );
						throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
							S_ProcName,
							S_Col,
							col,
							S_Msg );
					}
					indexCols = worktable->getOptionalLookupPrimaryIndex()->getOptionalComponentsColumns();
					notInPrimaryIndex = true;
					for( auto indexColIter = indexCols.begin(); notInPrimaryIndex && ( indexColIter != indexCols.end() ); indexColIter++ ) {
						if( col == (*indexColIter)->getRequiredLookupColumn() ) {
							notInPrimaryIndex = false;
						}
					}
					if( notInPrimaryIndex ) {
						auto match = map.find( colDbName );
						if( match != map.end() ) {
							dup = match->second;
							log.append( S_MsgErrorTable + worktable->getObjName() + S_Column + col->getObjName() + S_OverloadsTheDatabaseName + colDbName + S_DefinedBy + dup->getRequiredContainerScope()->getObjName() + S_Dot + dup->getObjName() + S_DQuoteNewline );
							valid = false;
						}
						else {
							map.insert( std::pair<std::string,cfbam::ICFBamValueObj*>( colDbName, col ) );
						}
					}
				}
			}
		}
		if( valid ) {
			log.append( S_TablesDoNotOverloadColumnDatabaseNames );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateTablesHavePrimaryIndexes( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			if( table->getOptionalLookupPrimaryIndex() == NULL ) {
				log.append( S_MsgErrorTable + table->getObjName() + S_HasNoPrimaryIndex );
				valid = false;
			}
		}
		if( valid ) {
			log.append( S_TablesHavePrimaryIndexes );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateIndexesHaveColumns( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		cfbam::ICFBamIndexObj* index;
		std::vector<cfbam::ICFBamIndexObj*> indexes;
		std::vector<cfbam::ICFBamIndexColObj*> cols;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			indexes = table->getOptionalComponentsIndex();
			for( auto indexIter = indexes.begin(); indexIter != indexes.end(); indexIter++ ) {
				index = *indexIter;
				cols = index->getOptionalComponentsColumns();
				if( cols.size() == 0 ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Index + index->getObjName() + S_DoesNotSpecifyAnyColumns );
					valid = false;
				}
			}
		}
		if( valid ) {
			log.append( S_IndexesAllSpecifyColumns );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validatePrimaryIndexesAreUnique( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		cfbam::ICFBamIndexObj* index;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			index = table->getOptionalLookupPrimaryIndex();
			if( index != NULL ) {
				if( ! index->getRequiredIsUnique() ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_PrimaryIndex + index->getObjName() + S_IsNotUnique );
					valid = false;
				}
			}
		}
		if( valid ) {
			log.append( S_PrimaryIndexesAreUnique );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validatePrimaryIndexColumnsAreRequired( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		cfbam::ICFBamIndexObj* index;
		std::vector<cfbam::ICFBamIndexColObj*> cols;
		cfbam::ICFBamIndexColObj* col;
		cfbam::ICFBamValueObj* tableCol;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			index = table->getOptionalLookupPrimaryIndex();
			if( index != NULL ) {
				cols = index->getOptionalComponentsColumns();
				for( auto colIter = cols.begin(); colIter != cols.end(); colIter++ ) {
					col = *colIter;
					tableCol = col->getRequiredLookupColumn();
					if( tableCol->getRequiredIsNullable() ) {
						log.append( S_MsgErrorTable + table->getObjName() + S_PrimaryIndex + index->getObjName() + S_Column + tableCol->getObjName() + S_IsNullable );
						valid = false;
					}
				}
			}
		}
		if( valid ) {
			log.append( S_PrimaryIndexColumnsAreAllRequired );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateIndexNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tableStack;
		cfbam::ICFBamTableObj* worktable;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		cfbam::ICFBamRelationObj* relation;
		cfbam::ICFBamRelationObj* superRelation;
		std::map<std::string,cfbam::ICFBamIndexObj*> map;
		cfbam::ICFBamIndexObj* dup;
		std::vector<cfbam::ICFBamIndexObj*> indexes;
		cfbam::ICFBamIndexObj* index;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			tableStack.clear();
			tableStack.push_back( table );
			worktable = table;
			while( worktable != NULL ) {
				superRelation = NULL;
				relations = worktable->getOptionalComponentsRelation();
				for( auto relationIter = relations.begin(); ( superRelation == NULL ) && ( relationIter != relations.end() ); relationIter++ ) {
					relation = *relationIter;
					if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
						superRelation = relation;
					}
				}
				if( superRelation != NULL ) {
					worktable = superRelation->getRequiredLookupToTable();
					tableStack.push_back( worktable );
				}
				else {
					worktable = NULL;
				}
			}
			map.clear();
			while( ! tableStack.empty() ) {
				worktable = tableStack.back();
				tableStack.pop_back();
				indexes = worktable->getOptionalComponentsIndex();
				for( auto indexIter = indexes.begin(); indexIter != indexes.end(); indexIter++ ) {
					index = *indexIter;
					auto match = map.find( index->getObjName() );
					if( match != map.end() ) {
						dup = match->second;
						log.append( S_MsgErrorTable + worktable->getObjName() + S_Index + index->getObjName() + S_OverloadsNameOfIndex + dup->getRequiredContainerTable()->getObjName() + S_Dot + dup->getObjName() + S_DQuoteNewline );
						valid = false;
					}
					else {
						map.insert( std::pair<std::string,cfbam::ICFBamIndexObj*>( index->getObjName(), index ) );
					}
				}
			}
		}
		if( valid ) {
			log.append( S_TablesDoNotOverloadIndexNames );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateIndexSuffixesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tableStack;
		cfbam::ICFBamTableObj* worktable;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		cfbam::ICFBamRelationObj* relation;
		cfbam::ICFBamRelationObj* superRelation;
		std::map<std::string,cfbam::ICFBamIndexObj*> map;
		cfbam::ICFBamIndexObj* dup;
		std::vector<cfbam::ICFBamIndexObj*> indexes;
		cfbam::ICFBamIndexObj* index;
		std::string suffix;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			tableStack.clear();
			tableStack.push_back( table );
			worktable = table;
			while( worktable != NULL ) {
				superRelation = NULL;
				relations = worktable->getOptionalComponentsRelation();
				for( auto relationIter = relations.begin(); ( superRelation == NULL ) && ( relationIter != relations.end() ); relationIter++ ) {
					relation = *relationIter;
					if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
						superRelation = relation;
					}
				}
				if( superRelation != NULL ) {
					worktable = superRelation->getRequiredLookupToTable();
					tableStack.push_back( worktable );
				}
				else {
					worktable = NULL;
				}
			}
			map.clear();
			while( ! tableStack.empty() ) {
				worktable = tableStack.back();
				tableStack.pop_back();
				indexes = worktable->getOptionalComponentsIndex();
				for( auto indexIter = indexes.begin(); indexIter != indexes.end(); indexIter++ ) {
					index = *indexIter;
					if( worktable->getOptionalLookupPrimaryIndex() != index ) {
						if( index->isOptionalSuffixNull() ) {
							suffix = index->getObjName();
						}
						else {
							suffix = index->getOptionalSuffixValue();
						}
						auto match = map.find( suffix );
						if( match != map.end() ) {
							dup = match->second;
							log.append( S_MsgErrorTable + worktable->getObjName() + S_Index + index->getObjName() + S_OverloadsTheSuffix + suffix + S_OfTheIndex + dup->getRequiredContainerTable()->getObjName() + S_Dot + dup->getObjName() + S_DQuoteNewline );
							valid = false;
						}
						else {
							map.insert( std::pair<std::string,cfbam::ICFBamIndexObj*>( suffix, index ) );
						}
					}
				}
			}
		}
		if( valid ) {
			log.append( S_TablesDoNotOverloadIndexSuffixes );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateIndexShortNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tableStack;
		cfbam::ICFBamTableObj* worktable;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		cfbam::ICFBamRelationObj* relation;
		cfbam::ICFBamRelationObj* superRelation;
		std::map<std::string,cfbam::ICFBamIndexObj*> map;
		cfbam::ICFBamIndexObj* dup;
		std::vector<cfbam::ICFBamIndexObj*> indexes;
		cfbam::ICFBamIndexObj* index;
		std::string shortName;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			tableStack.clear();
			tableStack.push_back( table );
			worktable = table;
			while( worktable != NULL ) {
				superRelation = NULL;
				relations = worktable->getOptionalComponentsRelation();
				for( auto relationIter = relations.begin(); ( superRelation == NULL ) && ( relationIter != relations.end() ); relationIter++ ) {
					relation = *relationIter;
					if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
						superRelation = relation;
					}
				}
				if( superRelation != NULL ) {
					worktable = superRelation->getRequiredLookupToTable();
					tableStack.push_back( worktable );
				}
				else {
					worktable = NULL;
				}
			}
			map.clear();
			while( ! tableStack.empty() ) {
				worktable = tableStack.back();
				tableStack.pop_back();
				indexes = worktable->getOptionalComponentsIndex();
				for( auto indexIter = indexes.begin(); indexIter != indexes.end(); indexIter++ ) {
					index = *indexIter;
					if( index->isOptionalShortNameNull() ) {
						shortName = index->getObjName();
					}
					else {
						shortName = index->getOptionalShortNameValue();
					}
					if( worktable->getOptionalLookupPrimaryIndex() != index ) {
						auto match = map.find( shortName );
						if( match != map.end() ) {
							dup = match->second;
							log.append( S_MsgErrorTable + worktable->getObjName() + S_Index + index->getObjName() + S_OverloadsTheShortName + shortName + S_OfTheIndex + dup->getRequiredContainerTable()->getObjName() + S_Dot + dup->getObjName() + S_DQuoteNewline );
							valid = false;
						}
						else {
							map.insert( std::pair<std::string,cfbam::ICFBamIndexObj*>( shortName, index ) );
						}
					}
				}
			}
		}
		if( valid ) {
			log.append( S_TablesDoNotOverloadIndexShortNames );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateRelationsHaveLinkages( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		cfbam::ICFBamRelationObj* relation;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			relations = table->getOptionalComponentsRelation();
			for( auto relationIter = relations.begin(); relationIter != relations.end(); relationIter++ ) {
				relation = *relationIter;
				if( relation->getRequiredContainerFromTable() == NULL ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_DoesNotSpecifyItsTable );
					valid = false;
				}
				if( relation->getRequiredLookupToTable() == NULL ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_DoesNotSpecifyToTable );
					valid = false;
				}
				if( relation->getRequiredLookupFromIndex() == NULL ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_DoesNotSpecifyFromIndex );
					valid = false;
				}
				if( relation->getRequiredLookupToIndex() == NULL ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_DoesNotSpecifyToIndex );
					valid = false;
				}
			}
		}
		if( valid ) {
			log.append( S_RelationsHaveProperLinkage );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateRelationNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tableStack;
		cfbam::ICFBamTableObj* worktable;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		cfbam::ICFBamRelationObj* relation;
		cfbam::ICFBamRelationObj* superRelation;
		std::map<std::string,cfbam::ICFBamRelationObj*> map;
		cfbam::ICFBamRelationObj* dup;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			tableStack.clear();
			tableStack.push_back( table );
			worktable = table;
			while( worktable != NULL ) {
				superRelation = NULL;
				relations = worktable->getOptionalComponentsRelation();
				for( auto relationIter = relations.begin(); ( superRelation == NULL ) && ( relationIter != relations.end() ); relationIter++ ) {
					relation = *relationIter;
					if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
						superRelation = relation;
					}
				}
				if( superRelation != NULL ) {
					worktable = superRelation->getRequiredLookupToTable();
					tableStack.push_back( worktable );
				}
				else {
					worktable = NULL;
				}
			}
			map.clear();
			while( ! tableStack.empty() ) {
				worktable = tableStack.back();
				tableStack.pop_back();
				relations = worktable->getOptionalComponentsRelation();
				for( auto relationIter = relations.begin(); relationIter != relations.end(); relationIter++ ) {
					relation = *relationIter;
					if( relation->getRequiredRelationType() != cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
						auto match = map.find( relation->getObjName() );
						if( match != map.end() ) {
							dup = match->second;
							log.append( S_MsgErrorTable + worktable->getObjName() + S_Relation + relation->getObjName() + S_OverloadsNameOfRelationship + dup->getRequiredContainerFromTable()->getObjName() + S_Dot + dup->getObjName() + S_DQuoteNewline );
							valid = false;
						}
						else {
							map.insert( std::pair<std::string,cfbam::ICFBamRelationObj*>( relation->getObjName(), relation ) );
						}
					}
				}
			}
		}
		if( valid ) {
			log.append( S_TablesDoNotOverloadRelationNames );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateRelationSuffixesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tableStack;
		cfbam::ICFBamTableObj* worktable;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		cfbam::ICFBamRelationObj* relation;
		cfbam::ICFBamRelationObj* superRelation;
		std::map<std::string,cfbam::ICFBamRelationObj*> map;
		cfbam::ICFBamRelationObj* dup;
		std::string suffix;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			tableStack.clear();
			tableStack.push_back( table );
			worktable = table;
			while( worktable != NULL ) {
				superRelation = NULL;
				relations = worktable->getOptionalComponentsRelation();
				for( auto relationIter = relations.begin(); ( superRelation == NULL ) && ( relationIter != relations.end() ); relationIter++ ) {
					relation = *relationIter;
					if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
						superRelation = relation;
					}
				}
				if( superRelation != NULL ) {
					worktable = superRelation->getRequiredLookupToTable();
					tableStack.push_back( worktable );
				}
				else {
					worktable = NULL;
				}
			}
			map.clear();
			while( ! tableStack.empty() ) {
				worktable = tableStack.back();
				tableStack.pop_back();
				relations = worktable->getOptionalComponentsRelation();
				for( auto relationIter = relations.begin(); relationIter != relations.end(); relationIter++ ) {
					relation = *relationIter;
					if( relation->getRequiredRelationType() != cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
						if( relation->isOptionalSuffixNull() ) {
							suffix = relation->getObjName();
						}
						else {
							suffix = relation->getOptionalSuffixValue();
						}
						auto match = map.find( suffix );
						if( match != map.end() ) {
							dup = match->second;
							log.append( S_MsgErrorTable + worktable->getObjName() + S_Relation + relation->getObjName() + S_OverloadsTheSuffix + suffix + S_OfRelationship + dup->getRequiredContainerFromTable()->getObjName() + S_Dot + dup->getObjName() + S_DQuoteNewline );
							valid = false;
						}
						else {
							map.insert( std::pair<std::string,cfbam::ICFBamRelationObj*>( suffix, relation ) );
						}
					}
				}
			}
		}
		if( valid ) {
			log.append( S_TablesDoNotOverloadRelationSuffixes );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateOnlyOneSuperclassPerTable( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		cfbam::ICFBamRelationObj* relation;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		cfbam::ICFBamRelationObj* superclassRelation = NULL;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			superclassRelation = NULL;
			relations = table->getOptionalComponentsRelation();
			for( auto relationIter = relations.begin(); relationIter != relations.end(); relationIter++ ) {
				relation = *relationIter;
				if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
					if( superclassRelation != NULL ) {
						log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_IsASuperclassRelation + superclassRelation->getObjName() + S_AlreadySuperclassRelation );
						valid = false;
					}
					else {
						superclassRelation = relation;
					}
				}
			}
		}
		if( valid ) {
			log.append( S_TablesHaveAtMostOneSuperclassRelation );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateRelationsHaveColumns( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		cfbam::ICFBamRelationObj* relation;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		std::vector<cfbam::ICFBamRelationColObj*> cols;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			relations = table->getOptionalComponentsRelation();
			for( auto relationIter = relations.begin(); relationIter != relations.end(); relationIter++ ) {
				relation = *relationIter;
				cols = relation->getOptionalComponentsColumns();
				if( cols.empty() ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_DoesNotSpecifyAnyColumns );
					valid = false;
				}
			}
		}
		if( valid ) {
			log.append( S_RelationsAllSpecifyColumns );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateRelationColumnCountsMatchIndexes( cfbam::ICFBamSchemaDefObj* schema ) {
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		cfbam::ICFBamRelationObj* relation;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			relations = table->getOptionalComponentsRelation();
			for( auto relationIter = relations.begin(); relationIter != relations.end(); relationIter++ ) {
				relation = *relationIter;
				if( relation->getRequiredLookupFromIndex()->getOptionalComponentsColumns().size() != relation->getOptionalComponentsColumns().size() ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_DoesNotSpecifySameNumberOfColumnsAsFromIndex + relation->getRequiredLookupFromIndex()->getObjName() + S_DQuoteNewline );
					valid = false;
				}
				if( relation->getRequiredLookupToIndex()->getOptionalComponentsColumns().size() != relation->getOptionalComponentsColumns().size() ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + "\" does not specify the same number of columns as in the to index \"" + relation->getRequiredLookupToTable()->getObjName() + S_Dot + relation->getRequiredLookupToIndex()->getObjName() + S_DQuoteNewline );
					valid = false;
				}
			}
		}
		if( valid ) {
			log.append( S_RelationsSpecifySameNumberOfColumnsAsIndexes );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateRelationsSpecifyAllFromColumns( cfbam::ICFBamSchemaDefObj* schema ) {
		std::map<std::string,cfbam::ICFBamIndexColObj*> map;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		cfbam::ICFBamRelationObj* relation;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		std::vector<cfbam::ICFBamRelationColObj*> cols;
		cfbam::ICFBamRelationColObj* relationCol;
		cfbam::ICFBamIndexColObj* indexCol;
		std::vector<cfbam::ICFBamIndexColObj*> indexCols;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			relations = table->getOptionalComponentsRelation();
			for( auto relationIter = relations.begin(); relationIter != relations.end(); relationIter++ ) {
				relation = *relationIter;
				map.clear();
				cols = relation->getOptionalComponentsColumns();
				for( auto colIter = cols.begin(); colIter != cols.end(); colIter++ ) {
					relationCol = *colIter;
					indexCol = relationCol->getRequiredLookupFromCol();
					auto match = map.find( indexCol->getObjName() );
					if( match != map.end() ) {
						log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_SpecifiesFromIndexColumn + indexCol->getObjName() + S_MoreThanOnce );
						valid = false;
					}
					else {
						map.insert( std::pair<std::string,cfbam::ICFBamIndexColObj*>( indexCol->getObjName(), indexCol ) );
					}
				}
				indexCols = relation->getRequiredLookupFromIndex()->getOptionalComponentsColumns();
				for( auto indexColIter = indexCols.begin(); indexColIter != indexCols.end(); indexColIter++ ) {
					indexCol = *indexColIter;
					auto match = map.find( indexCol->getObjName() );
					if( match == map.end() ) {
						log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_DoesNotReferenceFromIndexColumn + indexCol->getObjName() + S_DQuoteNewline );
						valid = false;
					}
					else if( indexCol != match->second ) {
						log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_DoesNotReferenceFromIndexColumn + indexCol->getObjName() + S_DQuoteNewline );
						valid = false;
					}
				}
			}
		}
		if( valid ) {
			log.append( S_RelationsBindAllFromIndexColumnsOnce );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateRelationsSpecifyAllToColumns( cfbam::ICFBamSchemaDefObj* schema ) {
		std::map<std::string,cfbam::ICFBamIndexColObj*> map;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		cfbam::ICFBamRelationObj* relation;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		std::vector<cfbam::ICFBamRelationColObj*> cols;
		cfbam::ICFBamRelationColObj* relationCol;
		cfbam::ICFBamIndexColObj* indexCol;
		std::vector<cfbam::ICFBamIndexColObj*> indexCols;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			relations = table->getOptionalComponentsRelation();
			for( auto relationIter = relations.begin(); relationIter != relations.end(); relationIter++ ) {
				relation = *relationIter;
				map.clear();
				cols = relation->getOptionalComponentsColumns();
				for( auto colIter = cols.begin(); colIter != cols.end(); colIter++ ) {
					relationCol = *colIter;
					indexCol = relationCol->getRequiredLookupToCol();
					auto match = map.find( indexCol->getObjName() );
					if( match != map.end() ) {
						log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_SpecifiesToIndexColumn + indexCol->getObjName() + S_MoreThanOnce );
						valid = false;
					}
					else {
						map.insert( std::pair<std::string,cfbam::ICFBamIndexColObj*>( indexCol->getObjName(), indexCol ) );
					}
				}
				indexCols = relation->getRequiredLookupToIndex()->getOptionalComponentsColumns();
				for( auto indexColIter = indexCols.begin(); indexColIter != indexCols.end(); indexColIter++ ) {
					indexCol = *indexColIter;
					auto match = map.find( indexCol->getObjName() );
					if( match == map.end() ) {
						log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_DoesNotReferenceToIndexColumn + indexCol->getObjName() + S_DQuoteNewline );
						valid = false;
					}
					else if( indexCol != match->second ) {
						log.append( S_MsgErrorTable + table->getObjName() + S_Relation + relation->getObjName() + S_DoesNotReferenceToIndexColumn + indexCol->getObjName() + S_DQuoteNewline );
						valid = false;
					}
				}
			}
		}
		if( valid ) {
			log.append( S_RelationsBindAllToIndexColumnsOnce );
		}
		else {
			modelIsValid = false;
		}
	}

	void CFBamCustMssCFModelValidator::validateChains( cfbam::ICFBamSchemaDefObj* schema ) {
		cfbam::ICFBamTableObj* worktable;
		std::vector<cfbam::ICFBamTableObj*> tables = schema->getOptionalComponentsTables();
		cfbam::ICFBamTableObj* table;
		std::vector<cfbam::ICFBamChainObj*> chains;
		cfbam::ICFBamChainObj* chain;
		std::vector<cfbam::ICFBamRelationObj*> relations;
		cfbam::ICFBamRelationObj* relation;
		cfbam::ICFBamRelationObj* superRelation;
		cfbam::ICFBamRelationObj* prevRelation;
		cfbam::ICFBamRelationObj* nextRelation;
		std::vector<cfbam::ICFBamRelationColObj*> relationCols;
		cfbam::ICFBamRelationColObj* relationCol;
		std::string fromColName;
		std::string toColName;
		bool valid = true;
		for( auto tableIter = tables.begin(); tableIter != tables.end(); tableIter++ ) {
			table = *tableIter;
			chains = table->getOptionalComponentsChains();
			auto iterChains = chains.begin();
			if( iterChains != chains.end() ) {
				chain = *iterChains;
				iterChains++;
				if( iterChains != chains.end() ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_DefinesMoreThanOneChain );
					valid = false;
				}
				worktable = table;
				while( worktable != NULL ) {
					superRelation = NULL;
					relations = worktable->getOptionalComponentsRelation();
					for( auto relationIter = relations.begin(); ( superRelation == NULL ) && ( relationIter != relations.end() ); relationIter++ ) {
						relation = *relationIter;
						if( relation->getRequiredRelationType() == cfbam::ICFBamSchema::RelationTypeEnum::Superclass ) {
							superRelation = relation;
						}
					}
					if( superRelation != NULL ) {
						worktable = superRelation->getRequiredLookupToTable();
						chains = worktable->getOptionalComponentsChains();
						if( ! chains.empty() ) {
							log.append( S_MsgErrorTable + table->getObjName() + S_OverloadsTheChainDefinitionFromTable + worktable->getObjName() + S_OnlyOneChainCanBeDefined );
							valid = false;
						}
					}
					else {
						worktable = NULL;
					}
				}
				prevRelation = chain->getRequiredLookupPrevRel();
				nextRelation = chain->getRequiredLookupNextRel();
				if( prevRelation->getObjName() != S_Prev ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_PreviousRelationMustBeNamedPrev );
					valid = false;
				}
				if( nextRelation->getObjName() != S_Next ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_NextRelationMustBeNamedNext );
					valid = false;
				}
				if( prevRelation->getRequiredIsRequired() ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_PreviousRelationMustBeOptional );
					valid = false;
				}
				if( nextRelation->getRequiredIsRequired() ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_NextRelationMustBeOptional );
					valid = false;
				}
				if( prevRelation->getRequiredContainerFromTable() != table ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_ReferencesInheritedPreviousRelation );
					valid = false;
				}
				if( nextRelation->getRequiredContainerFromTable() != table ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_ReferencesInheritedNextRelation );
					valid = false;
				}
				if( prevRelation->getRequiredLookupFromIndex()->getRequiredContainerTable() != table ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_ReferencesPreviousRelationOfInheritedFromIndex );
					valid = false;
				}
				if( prevRelation->getRequiredLookupToIndex()->getRequiredContainerTable() != table ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_ReferencesPreviousRelationOfInheritedToIndex );
					valid = false;
				}
				if( nextRelation->getRequiredLookupFromIndex()->getRequiredContainerTable() != table ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_ReferencesNextRelationOfInheritedFromIndex );
					valid = false;
				}
				if( nextRelation->getRequiredLookupToIndex()->getRequiredContainerTable() != table ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_ReferencesNextRelationOfInheritedToIndex );
					valid = false;
				}
				if( prevRelation->getRequiredLookupToIndex() != table->getOptionalLookupPrimaryIndex() ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_ReferencesPreviousRelationTargetNotPrimaryIndex );
					valid = false;
				}
				if( nextRelation->getRequiredLookupToIndex() != table->getOptionalLookupPrimaryIndex() ) {
					log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_ReferencesNextRelationTargetNotPrimaryIndex );
					valid = false;
				}
				relationCols = prevRelation->getOptionalComponentsColumns();
				for( auto relationColIter = relationCols.begin(); relationColIter != relationCols.end(); relationColIter++ ) {
					relationCol = *relationColIter;
					if( ! relationCol->getRequiredLookupFromCol()->getRequiredLookupColumn()->getRequiredIsNullable() ) {
						log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_PreviousRelationColumn + relationCol->getObjName() + S_PreviousReferencesRequiredFromColumn );
						valid = false;
					}
				}
				relationCols = nextRelation->getOptionalComponentsColumns();
				for( auto relationColIter = relationCols.begin(); relationColIter != relationCols.end(); relationColIter++ ) {
					relationCol = *relationColIter;
					if( ! relationCol->getRequiredLookupFromCol()->getRequiredLookupColumn()->getRequiredIsNullable() ) {
						log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_NextRelationColumn + relationCol->getObjName() + S_NextReferencesRequiredFromColumn );
						valid = false;
					}
				}
				relationCols = prevRelation->getOptionalComponentsColumns();
				for( auto relationColIter = relationCols.begin(); relationColIter != relationCols.end(); relationColIter++ ) {
					relationCol = *relationColIter;
					fromColName = relationCol->getRequiredLookupFromCol()->getObjName();
					toColName = relationCol->getRequiredLookupToCol()->getObjName();
					if( fromColName != ( S_Prev + toColName ) ) {
						log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_PreviousRelationColumn + relationCol->getObjName() + S_FromColumnNameMustBePrependedByPrev );
						valid = false;
					}
				}
				relationCols = nextRelation->getOptionalComponentsColumns();
				for( auto relationColIter = relationCols.begin(); relationColIter != relationCols.end(); relationColIter++ ) {
					relationCol = *relationColIter;
					fromColName = relationCol->getRequiredLookupFromCol()->getObjName();
					toColName = relationCol->getRequiredLookupToCol()->getObjName();
					if( fromColName != ( S_Next + toColName ) ) {
						log.append( S_MsgErrorTable + table->getObjName() + S_Chain + chain->getObjName() + S_NextRelationColumn + relationCol->getObjName() + S_FromColumnNameMustBePrependedByNext );
						valid = false;
					}
				}
			}
		}
		if( valid ) {
			log.append( S_ChainsAreValid );
		}
		else {
			modelIsValid = false;
		}
	}
}
