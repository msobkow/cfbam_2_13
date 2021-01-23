#pragma once

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

#include <cflib/ICFLibPublic.hpp>
#include <msscf/MssCFPublic.hpp>
#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>

namespace cfbam {

	class CFBamCustMssCFModelValidator {

		public:
			static const std::string CLASS_NAME;
			static const std::string S_MsgErrorTable;
			static const std::string S_MsgErrorIndex;
			static const std::string S_MsgErrorRelation;
			static const std::string S_Error;
			static const std::string S_Column;
			static const std::string S_Index;
			static const std::string S_PrimaryIndex;
			static const std::string S_OfTheIndex;
			static const std::string S_IsNullable;
			static const std::string S_Relation;
			static const std::string S_DQuoteNewline;
			static const std::string S_Dot;
			static const std::string S_ValidatingSchemaDef;
			static const std::string S_DQuoteEllipsesNewline;
			static const std::string S_SchemaDefDQuote;
			static const std::string S_DQuoteIsValidNewline;
			static const std::string S_DQuoteIsNotValidNewline;
			static const std::string S_SpaceDQuote;
			static const std::string S_DQuoteSlice;
			static const std::string S_IsAlreadyInUseByThe;
			static const std::string S_IsAlreadyInUseByTheTable;
			static const std::string S_DoesNotSpecifyItsTable;
			static const std::string S_DoesNotSpecifyToTable;
			static const std::string S_DoesNotSpecifyFromIndex;
			static const std::string S_DoesNotSpecifyToIndex;
			static const std::string S_DoesNotSpecifyAnyColumns;
			static const std::string S_OfRelationship;
			static const std::string S_OverloadsNameOfRelationship;
			static const std::string S_OverloadsOneDefinedBy;
			static const std::string S_OverloadsTheShortName;
			static const std::string S_OverloadsTheDatabaseName;
			static const std::string S_OverloadsNameOfIndex;
			static const std::string S_OverloadsTheSuffix;
			static const std::string S_ClassCode;
			static const std::string S_Collides;
			static const std::string S_DatabaseName;
			static const std::string S_DefinedBy;
			static const std::string S_Col;
			static const std::string S_DefinitelyNot;
			static const std::string S_HasNoPrimaryIndex;
			static const std::string S_IsNotUnique;
			static const std::string S_IsASuperclassRelation;
			static const std::string S_AlreadySuperclassRelation;
			static const std::string S_DoesNotSpecifySameNumberOfColumnsAsFromIndex;
			static const std::string S_SpecifiesFromIndexColumn;
			static const std::string S_MoreThanOnce;
			static const std::string S_DoesNotReferenceFromIndexColumn;
			static const std::string S_SpecifiesToIndexColumn;
			static const std::string S_DoesNotReferenceToIndexColumn;
			static const std::string S_DefinesMoreThanOneChain;
			static const std::string S_OverloadsTheChainDefinitionFromTable;
			static const std::string S_OnlyOneChainCanBeDefined;
			static const std::string S_Chain;
			static const std::string S_Prev;
			static const std::string S_Next;
			static const std::string S_PreviousRelationMustBeNamedPrev;
			static const std::string S_NextRelationMustBeNamedNext;
			static const std::string S_PreviousRelationMustBeOptional;
			static const std::string S_NextRelationMustBeOptional;
			static const std::string S_ReferencesInheritedPreviousRelation;
			static const std::string S_ReferencesInheritedNextRelation;
			static const std::string S_ReferencesPreviousRelationOfInheritedFromIndex;
			static const std::string S_ReferencesPreviousRelationOfInheritedToIndex;
			static const std::string S_ReferencesNextRelationOfInheritedFromIndex;
			static const std::string S_ReferencesNextRelationOfInheritedToIndex;
			static const std::string S_ReferencesPreviousRelationTargetNotPrimaryIndex;
			static const std::string S_ReferencesNextRelationTargetNotPrimaryIndex;
			static const std::string S_PreviousRelationColumn;
			static const std::string S_NextRelationColumn;
			static const std::string S_PreviousReferencesRequiredFromColumn;
			static const std::string S_NextReferencesRequiredFromColumn;
			static const std::string S_FromColumnNameMustBePrependedByPrev;
			static const std::string S_FromColumnNameMustBePrependedByNext;
			static const std::string S_IdGeneratorSlicesAreValid;
			static const std::string S_TableClassCodesAreValid;
			static const std::string S_SchemaDatabaseNamesAreUnique;
			static const std::string S_TablesDoNotOverloadColumnNames;
			static const std::string S_TablesDoNotOverloadColumnShortNames;
			static const std::string S_TablesDoNotOverloadColumnDatabaseNames;
			static const std::string S_TablesHavePrimaryIndexes;
			static const std::string S_IndexesAllSpecifyColumns;
			static const std::string S_PrimaryIndexesAreUnique;
			static const std::string S_PrimaryIndexColumnsAreAllRequired;
			static const std::string S_TablesDoNotOverloadIndexNames;
			static const std::string S_TablesDoNotOverloadIndexSuffixes;
			static const std::string S_TablesDoNotOverloadIndexShortNames;
			static const std::string S_RelationsHaveProperLinkage;
			static const std::string S_TablesDoNotOverloadRelationNames;
			static const std::string S_TablesDoNotOverloadRelationSuffixes;
			static const std::string S_TablesHaveAtMostOneSuperclassRelation;
			static const std::string S_RelationsAllSpecifyColumns;
			static const std::string S_RelationsSpecifySameNumberOfColumnsAsIndexes;
			static const std::string S_RelationsBindAllFromIndexColumnsOnce;
			static const std::string S_RelationsBindAllToIndexColumnsOnce;
			static const std::string S_ChainsAreValid;

		protected:
			std::string log;
			bool modelIsValid = true;

		public:
			CFBamCustMssCFModelValidator();
			virtual ~CFBamCustMssCFModelValidator();
			virtual const std::string& getValidationResults();

			virtual bool validateSchemaDef( cfbam::ICFBamSchemaDefObj* schema );

		protected:
			virtual void propagateNameChanges( cfbam::ICFBamSchemaDefObj* schema );
			virtual void propagateTypesAreNotNull( cfbam::ICFBamSchemaDefObj* schema );
			virtual void propagateTableColumnNameChanges( cfbam::ICFBamSchemaDefObj* schema );
			virtual void propagateIndexColumnNameChanges( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateSlices( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateClassCodes( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateDbNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateColumnNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateColumnShortNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateColumnDbNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateTablesHavePrimaryIndexes( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateIndexesHaveColumns( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validatePrimaryIndexesAreUnique( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validatePrimaryIndexColumnsAreRequired( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateIndexNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateIndexSuffixesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateIndexShortNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateRelationsHaveLinkages( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateRelationNamesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateRelationSuffixesNotOverloaded( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateOnlyOneSuperclassPerTable( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateRelationsHaveColumns( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateRelationColumnCountsMatchIndexes( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateRelationsSpecifyAllFromColumns( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateRelationsSpecifyAllToColumns( cfbam::ICFBamSchemaDefObj* schema );
			virtual void validateChains( cfbam::ICFBamSchemaDefObj* schema );
	};
}
