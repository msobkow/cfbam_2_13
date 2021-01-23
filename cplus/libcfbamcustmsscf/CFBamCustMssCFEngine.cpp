// Description: C++18 MSS Code Factory library public interface implementation for CFBam Custom MssCF.

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

#include <cfbamcustmsscf/CFBamCustMssCFEngine.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFModelValidator.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGelCompiler.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenFileTableObj.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenContext.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenContextFactory.hpp>

#include <cfbamcustmsscf/CFBamCustMssCFGenIterateComponentCandidates.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateContainerRelations.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateDataColumns.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateDispensedId16Generators.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateDispensedId32Generators.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateDispensedId64Generators.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateGeneratedTableColumns.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateId16Generators.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateId32Generators.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateId64Generators.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateOnlyOwnerRelations.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateReverseClearDeps.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateReverseDelDeps.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateSchemaTables.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateSubTableRefs.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateTableDeepSubClasses.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateTableRefs.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateTableSubClasses.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenIterateUuidGenerators.hpp>

#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceAlternateIndex.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceBaseClass.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceChain.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceChainContainerComponents.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceClearSubDep.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceClusterIdColumn.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceContainerRelation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceDelSubDep.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceIdGenResolverRelation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceInheritedLookupIndex.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceManufacturingSchema.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceObjNameColumn.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceOwnerRelation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferencePopSubDep.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferencePopTopDep.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferencePrimaryKeyIndex.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceSatisfyWidestLookupColumn.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceScope.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceSuperClassRelation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenReferenceTenantIdColumn.hpp>

#include <cfbamcustmsscf/CFBamCustMssCFGenBindBaseModelAtomClass.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindColumnInAnyRelation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindColumnInChainNext.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindColumnInChainPrev.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindColumnInComponentsRelation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindColumnInPrimaryIndex.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindEffLicenseBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasAlternateIndex.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasChain.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasClearSubDep.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasContainer.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasDelSubDep.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasInheritedLookupIndex.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasNullableColumns.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasOwner.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasParam.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasPopDep.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasPopSubDep.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasPrimaryKey.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasScope.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasServerMethod.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasSubClasses.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasSubObjectLookup.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasSuperClassRelation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHasVersion.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindInheritsBlob.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindInheritsText.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindIsBaseTable.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindIsChainRelation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindIsPrimaryIndex.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindIsSelfReferencingRelation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindIsSubObjectLookup.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindPackageName.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindPackedVersion.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindPrimaryKeyIsConstEnum.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindProjectDescription.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindStripPrevNextColumnName.hpp>

#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaDb2LUWSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaDb2LUWSchemaObjImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaDb2LUWSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaDb2LUWTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaDb2LUWTableImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaDb2LUWTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaEditObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaEditObjImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaEditObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaEditObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMSSqlSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMSSqlSchemaObjImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMSSqlSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMSSqlTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMSSqlTableImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMSSqlTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMethodBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMySqlSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMySqlSchemaObjImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMySqlSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMySqlTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMySqlTableImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaMySqlTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaObjImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaOracleSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaOracleSchemaObjImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaOracleSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaOracleTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaOracleTableImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaOracleTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaPgSqlSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaPgSqlSchemaObjImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaPgSqlSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaPgSqlTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaPgSqlTableImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaPgSqlTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaRamSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaRamSchemaObjImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaRamSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaRamTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaRamTableImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaRamTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaSaxLoaderEndElement.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaSaxLoaderImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaSaxLoaderStartElement.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaSchemaObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaSchemaObjImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaSchemaObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaTableImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaTableInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaTableObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaTableObjImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaTableObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaTableObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgClientSchemaBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgClientSchemaImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgClientTableBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgClientTableImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRqstSchemaBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRqstSchemaImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRqstSchemaWireParsers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRqstSchemaXsdElementList.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRqstSchemaXsdSpec.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRqstTableBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRqstTableImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRspnSchemaBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRspnSchemaImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRspnSchemaWireParsers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRspnSchemaXsdElementList.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRspnSchemaXsdSpec.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRspnTableBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgRspnTableImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgSchemaFormatters.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgSchemaImport.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgTableFormatters.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindJavaXMsgTableImport.hpp>

#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusDb2LUWSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusDb2LUWSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusDb2LUWSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusDb2LUWTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusDb2LUWTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusDb2LUWTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusEditObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusEditObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusEditObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusEditObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMSSqlSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMSSqlSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMSSqlSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMSSqlTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMSSqlTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMSSqlTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMethodBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMySqlSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMySqlSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMySqlSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMySqlTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMySqlTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusMySqlTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusOracleSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusOracleSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusOracleSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusOracleTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusOracleTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusOracleTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusPgSqlSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusPgSqlSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusPgSqlSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusPgSqlTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusPgSqlTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusPgSqlTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusRamSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusRamSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusRamSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusRamTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusRamTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusRamTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusSaxLoaderEndElement.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusSaxLoaderInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusSaxLoaderStartElement.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusSchemaObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusSchemaObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusTableInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusTableObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusTableObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusTableObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusTableObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgClientSchemaBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgClientSchemaInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgClientTableBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgClientTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRqstSchemaBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRqstSchemaInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRqstSchemaWireParsers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRqstSchemaXsdElementList.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRqstSchemaXsdSpec.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRqstTableBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRqstTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRspnSchemaBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRspnSchemaInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRspnSchemaWireParsers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRspnSchemaXsdElementList.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRspnSchemaXsdSpec.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRspnTableBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgRspnTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgSchemaFormatters.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgSchemaInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgTableFormatters.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCPlusXMsgTableInclude.hpp>

#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusDb2LUWSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusDb2LUWSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusDb2LUWSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusDb2LUWTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusDb2LUWTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusDb2LUWTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusEditObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusEditObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusEditObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusEditObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusMSSqlSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusMSSqlSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusMSSqlSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusMSSqlTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusMSSqlTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusMSSqlTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusMySqlSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusMySqlSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusMySqlSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusMySqlTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusMySqlTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusMySqlTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusOracleSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusOracleSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusOracleSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusOracleTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusOracleTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusOracleTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusPgSqlSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusPgSqlSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusPgSqlSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusPgSqlTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusPgSqlTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusPgSqlTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusRamSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusRamSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusRamSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusRamTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusRamTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusRamTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusSaxLoaderEndElement.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusSaxLoaderInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusSaxLoaderStartElement.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusSchemaObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusSchemaObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusSchemaObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusTableInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusTableObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusTableObjInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusTableObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusTableObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgClientSchemaBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgClientSchemaInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgClientTableBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgClientTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRqstSchemaBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRqstSchemaInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRqstSchemaWireParsers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRqstSchemaXsdElementList.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRqstSchemaXsdSpec.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRqstTableBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRqstTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRspnSchemaBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRspnSchemaInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRspnSchemaWireParsers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRspnSchemaXsdElementList.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRspnSchemaXsdSpec.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRspnTableBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgRspnTableInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgSchemaFormatters.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgSchemaInclude.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgTableFormatters.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindHPlusXMsgTableInclude.hpp>

#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpDb2LUWSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpDb2LUWSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpDb2LUWSchemaObjUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpDb2LUWTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpDb2LUWTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpDb2LUWTableUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpEditObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpEditObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpEditObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpEditObjUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMSSqlSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMSSqlSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMSSqlSchemaObjUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMSSqlTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMSSqlTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMSSqlTableUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMethodBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMySqlSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMySqlSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMySqlSchemaObjUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMySqlTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMySqlTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpMySqlTableUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpObjUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpOracleSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpOracleSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpOracleSchemaObjUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpOracleTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpOracleTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpOracleTableUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpPgSqlSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpPgSqlSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpPgSqlSchemaObjUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpPgSqlTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpPgSqlTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpPgSqlTableUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpRamSchemaObjImpl.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpRamSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpRamSchemaObjUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpRamTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpRamTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpRamTableUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpSaxLoaderEndElement.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpSaxLoaderStartElement.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpSaxLoaderUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpSchemaObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpSchemaObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpSchemaObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpSchemaObjUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpTableImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpTableInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpTableMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpTableObjImplementation.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpTableObjInterface.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpTableObjMembers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpTableObjUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpTableUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgClientSchemaBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgClientSchemaUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgClientTableBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgClientTableUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRqstSchemaBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRqstSchemaUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRqstSchemaWireParsers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRqstSchemaXsdElementList.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRqstSchemaXsdSpec.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRqstTableBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRqstTableUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRspnSchemaBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRspnSchemaUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRspnSchemaWireParsers.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRspnSchemaXsdElementList.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRspnSchemaXsdSpec.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRspnTableBody.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgRspnTableUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgSchemaFormatters.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgSchemaUsing.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgTableFormatters.hpp>
#include <cfbamcustmsscf/CFBamCustMssCFGenBindCSharpXMsgTableUsing.hpp>

namespace cfbam {

	const std::string CFBamCustMssCFEngine::CLASS_NAME( "CFBamCustMssCFEngine" );
	const std::string CFBamCustMssCFEngine::ITEMNAME_TOP( "top" );
	const std::string CFBamCustMssCFEngine::LinkName( "CFBamCustMssCF" );
	const std::string CFBamCustMssCFEngine::LinkVersion( "2.13.11195" );
	const std::string CFBamCustMssCFEngine::GeneratorName( "MSS Code Factory" );
	const std::string CFBamCustMssCFEngine::GeneratorVersion = CFBamCustMssCFEngine::LinkVersion;
	const std::string CFBamCustMssCFEngine::S_Object( "Object" );
	const std::string CFBamCustMssCFEngine::S_Any( "any" );

	CFBamCustMssCFEngine::CFBamCustMssCFEngine()
	: cfbam::CFBamMssCFEngine()
	{
		setTargetRuleName( ITEMNAME_TOP );
	}

	CFBamCustMssCFEngine::~CFBamCustMssCFEngine() {
	}

	const std::string& CFBamCustMssCFEngine::getRootGenDir() {
		return( rootGenDir );
	}

	cfcore::MssCFGelCompiler* CFBamCustMssCFEngine::getGelCompiler() {
		if( gelCompiler == NULL ) {
			gelCompiler = new cfbam::CFBamCustMssCFGelCompiler( this );
		}
		return( gelCompiler );
	}

	const std::string& CFBamCustMssCFEngine::getGeneratorName() {
		return( GeneratorName );
	}

	const std::string& CFBamCustMssCFEngine::getAnyClassName() {
		return( S_Object );
	}

	std::string CFBamCustMssCFEngine::fixGenDefName( const std::string& rawName ) {
		std::string retname( rawName );
		if( retname.length() <= 0 ) {
			retname= S_Object;
		}
		return( retname );
	}

	void CFBamCustMssCFEngine::init( const std::string& generatingBuild,
		cfcore::ICFGenKbSchemaObj* argCFGenKbSchema,
		cfcore::ICFGenKbTenantObj* argTenant,
		cfbam::ICFBamSchemaObj* argBamSchema,
		const std::string& strRootGenDir )
	{
		setCFBamSchema( argBamSchema );
		init( generatingBuild, argCFGenKbSchema, argTenant, strRootGenDir );
	}

	void CFBamCustMssCFEngine::init( const std::string& generatingBuild,
		cfcore::ICFGenKbSchemaObj* argCFGenKbSchema,
		cfcore::ICFGenKbTenantObj* argTenant,
		const std::string& strRootGenDir )
	{
		cfbam::CFBamMssCFEngine::init( generatingBuild, argCFGenKbSchema, argTenant, strRootGenDir );
		setGenContext( getGenContextFactory()->newGenContext( generatingBuild,
			this,
			strRootGenDir,
			S_Any,
			S_Object,
			S_Object,
			getTargetRuleName() ) );
	}

	cfcore::ICFGenKbGenFileTableObj* CFBamCustMssCFEngine::getGenFileTableObj() {
		if( genFileTableObj == NULL ) {
			genFileTableObj = new cfbam::CFBamCustMssCFGenFileTableObj( this );
		}
		return( genFileTableObj );
	}

	cfcore::MssCFGenContextFactory* CFBamCustMssCFEngine::getGenContextFactory() {
		if( genContextFactory == NULL ) {
			genContextFactory = new cfbam::CFBamCustMssCFGenContextFactory();
		}
		return( genContextFactory );
	}

	cfcore::ICFGenKbGenFileObj* CFBamCustMssCFEngine::defineFile(
		const std::string& definedNear,
		const std::string& toolsetName,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName,
		const std::string& expansionBody,
		const std::string& generateOnce,
		const std::string& sourceBundle,
		const std::string& moduleName,
		const std::string& basePackageName,
		const std::string& subPackageName,
		const std::string& expansionClassName,
		const std::string& expansionKeyName,
		const std::string& expansionFileName )
	{
		return(
			cfbam::CFBamMssCFEngine::defineFile( definedNear,
				toolsetName,
				fixGenDefName( scopeDefClassName ),
				fixGenDefName( genDefClassName ),
				itemName,
				expansionBody,
				generateOnce,
				sourceBundle,
				moduleName,
				basePackageName,
				subPackageName,
				expansionClassName,
				expansionKeyName,
				expansionFileName ) );
	}

	cfcore::ICFGenKbGenRuleObj* CFBamCustMssCFEngine::defineRule(
		const std::string& definedNear,
		const std::string& toolsetName,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName,
		const std::string& expansionBody )
	{
		return(
			cfbam::CFBamMssCFEngine::defineRule( definedNear,
				toolsetName,
				fixGenDefName( scopeDefClassName ),
				fixGenDefName( genDefClassName ),
				itemName,
				expansionBody ) );
	}

	cfcore::ICFGenKbGenTruncObj* CFBamCustMssCFEngine::defineTrunc(
		const std::string& definedNear,
		const std::string& toolsetName,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName,
		const std::string& expansionBody,
		int truncAt  )
	{
		return(
			cfbam::CFBamMssCFEngine::defineTrunc( definedNear,
				toolsetName,
				fixGenDefName( scopeDefClassName ),
				fixGenDefName( genDefClassName ),
				itemName,
				expansionBody,
				truncAt ) );
	}

	/**
	 *	generate() is the primary entry point to the engine after it
	 *	has been loaded and initialized.
	 *
	 *	Currently there are static variables in the library's code
	 *	that force you to only have one engine instance per process,
	 *	but at some point in the future, I intend to move those static
	 *	variables to members of CFBamCustMssCFEngine, so that they
	 *	become per-engine-instance instead of per-process variables.
	 *
	 *	That is crititically necessary if I'm to run multiple engine
	 *	threads in a server process, with an engine pool accessed
	 *	by factory methods.
	 */
	void CFBamCustMssCFEngine::generate( const std::string& generatingBuild,
		const std::string& rootGenDir,
		cflib::ICFLibAnyObj* anyDef,
		const std::vector<std::string>& toolsDesired,
		const std::string& initialRuleName )
	{
		static const std::string S_ProcName( "generate" );

		std::vector<cfbam::ICFBamSchemaDefObj*> schemaList;
		CFBamCustMssCFModelValidator* validator = new cfbam::CFBamCustMssCFModelValidator();
		if( anyDef->implementsClassCode( cfint::CFIntMinorVersionBuff::CLASS_CODE ) ) {
			schemaList = dynamic_cast<ICFBamMinorVersionObj*>( anyDef )->getOptionalComponentsSchemaDef();
		}
		else if( anyDef->implementsClassCode( cfbam::CFBamSchemaDefBuff::CLASS_CODE ) ) {
			schemaList.push_back( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( anyDef ) );
		}
		else {
			getLog()->message( "Cannot expand \"" + anyDef->getGenDefName() + "\" named \"" + anyDef->getObjFullName() + "\" -- only minor versions or schema defs can be manufactured" );
			return;
		}

		static const std::string S_ValidatingSchemas( "Validating schemas..." );

		getLog()->message( S_ValidatingSchemas );

		std::string buff;
		bool allSchemasValid = true;
		bool schemaValid;
		cfbam::ICFBamSchemaDefObj* schemaDef;
			schemaList = dynamic_cast<ICFBamMinorVersionObj*>( anyDef )->getOptionalComponentsSchemaDef();
		for( auto iterSchema = schemaList.begin(); iterSchema != schemaList.end(); iterSchema ++ ) {
			schemaDef = *iterSchema;
			schemaValid = validator->validateSchemaDef( schemaDef );
			if( buff.length() > 0 ) {
				buff.append( "\n" );
				buff.append( validator->getValidationResults() );
			}
			else {
				buff.append( validator->getValidationResults() );
			}
			if( ! schemaValid ) {
				allSchemasValid = false;
			}
		}

		if( allSchemasValid ) {
			static const std::string S_MsgValidationSuccessful( "Schema validation was successful" );

			getLog()->message( S_MsgValidationSuccessful );

			cfbam::CFBamMssCFEngine::generate( generatingBuild, rootGenDir, anyDef, toolsDesired, initialRuleName );
		}
		else {
			static const std::string S_MsgSchemaValidationFailedNewline( "Schema validation FAILED\n" );
			static const std::string S_MsgErrorCannotGenerate( "ERROR: Cannot generate code -- schema validation FAILED" );

			getLog()->message( S_MsgSchemaValidationFailedNewline + buff );
			getLog()->message( S_MsgErrorCannotGenerate );

//			CFLib.beep();
		}

		delete validator;
		validator = NULL;
	}

	void CFBamCustMssCFEngine::bootstrapFirst() {
		defineToolSet( S_Any );
		getCFBamSchema()->getId16GenTableObj()->readId16GenByDispIdx( 0L, 0L );
		getCFBamSchema()->getId32GenTableObj()->readId32GenByDispIdx( 0L, 0L );
		getCFBamSchema()->getId64GenTableObj()->readId64GenByDispIdx( 0L, 0L );
	}

	void CFBamCustMssCFEngine::bootstrapDefClasses() {
		cfbam::CFBamMssCFEngine::bootstrapDefClasses();
	}

	void CFBamCustMssCFEngine::bootstrapIterators() {
		static const std::string S_Any( "any" );
		static const std::string S_Relation( "Relation" );
		static const std::string S_SchemaDef( "SchemaDef" );
		static const std::string S_Table( "Table" );

		cfbam::CFBamMssCFEngine::bootstrapIterators();

		cfcore::ICFGenKbGenIteratorObj* iterator = NULL;
		cfcore::ICFGenKbGenIteratorEditObj* editIterator = NULL;

		cfcore::ICFGenKbRuleCartObj* ruleCart = getInternalRuleCart();
		cfcore::ICFGenKbRuleTypeObj* ruleTypeIterator = getRuleTypeTableObj()->readRuleTypeByNameIdx( "Iterator" );

		iterator = new cfbam::CFBamCustMssCFGenIterateTableRefs( this,  S_Any, NULL, S_Table, "TableRefs" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateSubTableRefs( this,  S_Any, NULL, S_Table, "SubTableRefs" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateReverseClearDeps( this,  S_Any, NULL, S_Table, "ReverseClearDeps" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateReverseDelDeps( this,  S_Any, NULL, S_Table, "ReverseDelDeps" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateSchemaTables( this,  S_Any, NULL, S_SchemaDef, "SchemaTables" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateId16Generators( this,  S_Any, NULL, S_SchemaDef, "Id16Generators" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateId32Generators( this,  S_Any, NULL, S_SchemaDef, "Id32Generators" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateId64Generators( this,  S_Any, NULL, S_SchemaDef, "Id64Generators" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateUuidGenerators( this,  S_Any, NULL, S_SchemaDef, "UuidGenerators" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateContainerRelations( this,  S_Any, NULL, S_Table, "ContainerRelations" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateGeneratedTableColumns( this,  S_Any, NULL, S_Table, "GeneratedTableColumns" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateComponentCandidates( this,  S_Any, NULL, S_Relation, "ComponentCandidates" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateDispensedId16Generators( this,  S_Any, NULL, S_Table, "DispensedId16Generators" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateDispensedId32Generators( this,  S_Any, NULL, S_Table, "DispensedId32Generators" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateDispensedId64Generators( this,  S_Any, NULL, S_Table, "DispensedId64Generators" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateOnlyOwnerRelations( this,  S_Any, NULL, S_Table, "OnlyOwnerRelations" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateDataColumns( this,  S_Any, NULL, S_Table, "DataColumns" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateTableSubClasses( this,  S_Any, NULL, S_Table, "TableSubClasses" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new cfbam::CFBamCustMssCFGenIterateTableDeepSubClasses( this,  S_Any, NULL, S_Table, "TableDeepSubClasses" );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editIterator )->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();
	}

	void CFBamCustMssCFEngine::bootstrapReferences() {
		static const std::string S_Any( "any" );
		static const std::string S_ClearDep( "ClearDep" );
		static const std::string S_DelDep( "DelDep" );
		static const std::string S_Index( "Index" );
		static const std::string S_IndexCol( "IndexCol" );
		static const std::string S_Object( "Object" );
		static const std::string S_PopDep( "PopDep" );
		static const std::string S_Relation( "Relation" );
		static const std::string S_SchemaDef( "SchemaDef" );
		static const std::string S_Table( "Table" );
		static const std::string S_TableCol( "TableCol" );
		static const std::string S_Value( "Value" );

		cfbam::CFBamMssCFEngine::bootstrapReferences();

		cfcore::ICFGenKbGenReferenceObj* reference = NULL;
		cfcore::ICFGenKbGenReferenceEditObj* editReference = NULL;

		cfcore::ICFGenKbRuleCartObj* ruleCart = this->getInternalRuleCart();
		cfcore::ICFGenKbRuleTypeObj* ruleTypeReference = this->getRuleTypeTableObj()->readRuleTypeByNameIdx( "Reference" );

		reference = new cfbam::CFBamCustMssCFGenReferenceScope( this,  S_Any, NULL, S_Object, "Scope" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceChainContainerComponents( this,  S_Any, NULL, S_Table, "ChainContainerComponents" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferencePopTopDep( this,  S_Any, NULL, S_Relation, "PopTopDep" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceDelSubDep( this,  S_Any, NULL, S_DelDep, "DelSubDep" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceClearSubDep( this,  S_Any, NULL, S_ClearDep, "ClearSubDep" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferencePopSubDep( this,  S_Any, NULL, S_PopDep, "PopSubDep" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceIdGenResolverRelation( this,  S_Any, NULL, S_TableCol, "IdGenResolverRelation" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceSatisfyWidestLookupColumn( this,  S_Any, NULL, S_IndexCol, "SatisfyWidestLookupColumn" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceManufacturingSchema( this,  S_Any, NULL, S_Object, "ManufacturingSchema" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceClusterIdColumn( this,  S_Any, NULL, S_Table, "ClusterIdColumn" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceTenantIdColumn( this,  S_Any, NULL, S_Table, "TenantIdColumn" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceSuperClassRelation( this,  S_Any, NULL, S_Table, "SuperClassRelation" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceAlternateIndex( this,  S_Any, NULL, S_Table, "AlternateIndex" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceInheritedLookupIndex( this,  S_Any, NULL, S_Table, "InheritedLookupIndex" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceContainerRelation( this,  S_Any, NULL, S_Table, "ContainerRelation" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceOwnerRelation( this,  S_Any, NULL, S_Table, "OwnerRelation" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceBaseClass( this,  S_Any, NULL, S_Table, "BaseClass" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferencePrimaryKeyIndex( this,  S_Any, NULL, S_Table, "PrimaryKeyIndex" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceOwnerContainerOrNamedLookupRelationCol( this,  S_Any, NULL, S_Object, "OwnerContainerOrNamedLookupRelationCol" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceObjNameColumn( this,  S_Any, NULL, S_Value, "ObjNameColumn" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceObjNameColumn( this,  S_Any, NULL, S_Table, "ObjNameColumn" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceChain( this,  S_Any, NULL, S_Table, "Chain" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceObjNameColumn( this,  S_Any, NULL, S_Index, "ObjNameColumn" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();

		reference = new cfbam::CFBamCustMssCFGenReferenceObjNameColumn( this,  S_Any, NULL, S_IndexCol, "ObjNameColumn" );
		editReference = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( reference->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editReference )->setRequiredLookupRuleType( ruleTypeReference );
		editReference->create();
	}

	void CFBamCustMssCFEngine::bootstrapBindings() {
		static const std::string S_Any( "any" );
		static const std::string S_ClearDep( "ClearDep" );
		static const std::string S_DelDep( "DelDep" );
		static const std::string S_Index( "Index" );
		static const std::string S_License( "License" );
		static const std::string S_Object( "Object" );
		static const std::string S_PopDep( "PopDep" );
		static const std::string S_Relation( "Relation" );
		static const std::string S_SchemaDef( "SchemaDef" );
		static const std::string S_ServerMethod( "ServerMethod" );
		static const std::string S_Table( "Table" );
		static const std::string S_TableCol( "TableCol" );
		static const std::string S_Value( "Value" );

		cfbam::CFBamMssCFEngine::bootstrapBindings();

		cfcore::ICFGenKbGenBindObj* bind = NULL;
		cfcore::ICFGenKbGenBindEditObj* editBind = NULL;

		cfcore::ICFGenKbRuleCartObj* ruleCart = getInternalRuleCart();
		cfcore::ICFGenKbRuleTypeObj* ruleTypeBind = getRuleTypeTableObj()->readRuleTypeByNameIdx( "Bind" );

		// Bind distinct verbs

		bind = new cfbam::CFBamCustMssCFGenBindBaseModelAtomClass( this, 
			S_Any, NULL, S_Value, "BaseModelAtomClass" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindColumnInAnyRelation( this, 
			S_Any, NULL, S_Value, "ColumnInAnyRelation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindColumnInChainNext( this, 
			S_Any, NULL, S_Value, "ColumnInChainNext" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindColumnInChainPrev( this, 
			S_Any, NULL, S_Value, "ColumnInChainPrev" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindColumnInComponentsRelation( this, 
			S_Any, NULL, S_Value, "ColumnInComponentsRelation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindColumnInContainerOrNamedLookupRelation( this, 
			S_Any, NULL, S_Value, "ColumnInContainerOrNamedLookupRelation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindColumnInPrimaryIndex( this, 
			S_Any, NULL, S_Value, "ColumnInPrimaryIndex" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindEffLicenseBody( this, 
			S_Any, NULL, S_License, "EffLicenseBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasAlternateIndex( this, 
			S_Any, NULL, S_Table, "HasAlternateIndex" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasChain( this, 
			S_Any, NULL, S_Table, "HasChain" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasClearSubDep( this, 
			S_Any, NULL, S_ClearDep, "HasClearSubDep" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasContainer( this, 
			S_Any, NULL, S_Table, "HasContainer" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasDelSubDep( this, 
			S_Any, NULL, S_DelDep, "HasDelSubDep" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasInheritedLookupIndex( this, 
			S_Any, NULL, S_Table, "HasInheritedLookupIndex" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasNullableColumns( this, 
			S_Any, NULL, S_Index, "HasNullableColumns" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasOwner( this, 
			S_Any, NULL, S_Object, "HasOwner" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasParam( this, 
			S_Any, NULL, S_ServerMethod, "HasParam" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasPopDep( this, 
			S_Any, NULL, S_Relation, "HasPopDep" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasPopSubDep( this, 
			S_Any, NULL, S_PopDep, "HasPopSubDep" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasPrimaryKey( this, 
			S_Any, NULL, S_Table, "HasPrimaryKey" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasScope( this, 
			S_Any, NULL, S_Object, "HasScope" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasServerMethod( this, 
			S_Any, NULL, S_Table, "HasServerMethod" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasSubClasses( this, 
			S_Any, NULL, S_Table, "HasSubClasses" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasSubObjectLookup( this, 
			S_Any, NULL, S_Table, "HasSubObjectLookup" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasSuperClassRelation( this, 
			S_Any, NULL, S_Table, "HasSuperClassRelation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHasVersion( this, 
			S_Any, NULL, S_Object, "HasVersion" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindInheritsBlob( this, 
			S_Any, NULL, S_Table, "InheritsBlob" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindInheritsText( this, 
			S_Any, NULL, S_Table, "InheritsText" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindIsBaseTable( this, 
			S_Any, NULL, S_Table, "IsBaseTable" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindIsChainRelation( this, 
			S_Any, NULL, S_Relation, "IsChainRelation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindIsPrimaryIndex( this, 
			S_Any, NULL, S_Index, "IsPrimaryIndex" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindIsSelfReferencingRelation( this, 
			S_Any, NULL, S_Relation, "IsSelfReferencingRelation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindIsSubObjectLookup( this, 
			S_Any, NULL, S_Relation, "IsSubObjectLookup" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindPackageName( this, 
			S_Any, NULL, S_Object, "PackageName" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindPackedVersion( this, 
			S_Any, NULL, S_Object, "PackedVersion" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindPrimaryKeyIsConstEnum( this, 
			S_Any, NULL, S_Table, "PrimaryKeyIsConstEnum" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindProjectDescription( this, 
			S_Any, NULL, S_Object, "ProjectDescription" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindStripPrevNextColumnName( this, 
			S_Any, NULL, S_Value, "StripPrevNextColumnName" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMethodBody( this, 
			S_Any, NULL, S_ServerMethod, "JavaMethodBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaDb2LUWSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "JavaDb2LUWSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaDb2LUWSchemaObjImport( this, 
			S_Any, NULL, S_SchemaDef, "JavaDb2LUWSchemaObjImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaDb2LUWSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "JavaDb2LUWSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMSSqlSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "JavaMSSqlSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMSSqlSchemaObjImport( this, 
			S_Any, NULL, S_SchemaDef, "JavaMSSqlSchemaObjImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMSSqlSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "JavaMSSqlSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMySqlSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "JavaMySqlSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMySqlSchemaObjImport( this, 
			S_Any, NULL, S_SchemaDef, "JavaMySqlSchemaObjImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMySqlSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "JavaMySqlSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaOracleSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "JavaOracleSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaOracleSchemaObjImport( this, 
			S_Any, NULL, S_SchemaDef, "JavaOracleSchemaObjImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaOracleSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "JavaOracleSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaPgSqlSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "JavaPgSqlSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaPgSqlSchemaObjImport( this, 
			S_Any, NULL, S_SchemaDef, "JavaPgSqlSchemaObjImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaPgSqlSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "JavaPgSqlSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaRamSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "JavaRamSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaRamSchemaObjImport( this, 
			S_Any, NULL, S_SchemaDef, "JavaRamSchemaObjImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaRamSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "JavaRamSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaSchemaObjImplementation( this, 
			S_Any, NULL, S_SchemaDef, "JavaSchemaObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaSchemaObjImport( this, 
			S_Any, NULL, S_SchemaDef, "JavaSchemaObjImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaSchemaObjInterface( this, 
			S_Any, NULL, S_SchemaDef, "JavaSchemaObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "JavaSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgClientSchemaImport( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgClientSchemaImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgClientSchemaBody( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgClientSchemaBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRqstSchemaBody( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgRqstSchemaBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRqstSchemaImport( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgRqstSchemaImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRqstSchemaWireParsers( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgRqstSchemaWireParsers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRqstSchemaXsdElementList( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgRqstSchemaXsdElementList" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRqstSchemaXsdSpec( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgRqstSchemaXsdSpec" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRspnSchemaBody( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgRspnSchemaBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRspnSchemaImport( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgRspnSchemaImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRspnSchemaWireParsers( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgRspnSchemaWireParsers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRspnSchemaXsdElementList( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgRspnSchemaXsdElementList" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRspnSchemaXsdSpec( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgRspnSchemaXsdSpec" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgSchemaFormatters( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgSchemaFormatters" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgSchemaImport( this, 
			S_Any, NULL, S_SchemaDef, "JavaXMsgSchemaImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaDb2LUWTableImplementation( this, 
			S_Any, NULL, S_Table, "JavaDb2LUWTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaDb2LUWTableImport( this, 
			S_Any, NULL, S_Table, "JavaDb2LUWTableImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaDb2LUWTableMembers( this, 
			S_Any, NULL, S_Table, "JavaDb2LUWTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaEditObjImplementation( this, 
			S_Any, NULL, S_Table, "JavaEditObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaEditObjImport( this, 
			S_Any, NULL, S_Table, "JavaEditObjImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaEditObjInterface( this, 
			S_Any, NULL, S_Table, "JavaEditObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaEditObjMembers( this, 
			S_Any, NULL, S_Table, "JavaEditObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMSSqlTableImplementation( this, 
			S_Any, NULL, S_Table, "JavaMSSqlTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMSSqlTableImport( this, 
			S_Any, NULL, S_Table, "JavaMSSqlTableImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMSSqlTableMembers( this, 
			S_Any, NULL, S_Table, "JavaMSSqlTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMySqlTableImplementation( this, 
			S_Any, NULL, S_Table, "JavaMySqlTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMySqlTableImport( this, 
			S_Any, NULL, S_Table, "JavaMySqlTableImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaMySqlTableMembers( this, 
			S_Any, NULL, S_Table, "JavaMySqlTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaObjImplementation( this, 
			S_Any, NULL, S_Table, "JavaObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaObjImport( this, 
			S_Any, NULL, S_Table, "JavaObjImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaObjInterface( this, 
			S_Any, NULL, S_Table, "JavaObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaObjMembers( this, 
			S_Any, NULL, S_Table, "JavaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaOracleTableImplementation( this, 
			S_Any, NULL, S_Table, "JavaOracleTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaOracleTableImport( this, 
			S_Any, NULL, S_Table, "JavaOracleTableImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaOracleTableMembers( this, 
			S_Any, NULL, S_Table, "JavaOracleTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaPgSqlTableImplementation( this, 
			S_Any, NULL, S_Table, "JavaPgSqlTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaPgSqlTableImport( this, 
			S_Any, NULL, S_Table, "JavaPgSqlTableImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaPgSqlTableMembers( this, 
			S_Any, NULL, S_Table, "JavaPgSqlTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaRamTableImplementation( this, 
			S_Any, NULL, S_Table, "JavaRamTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaRamTableImport( this, 
			S_Any, NULL, S_Table, "JavaRamTableImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaRamTableMembers( this, 
			S_Any, NULL, S_Table, "JavaRamTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaSaxLoaderEndElement( this, 
			S_Any, NULL, S_Table, "JavaSaxLoaderEndElement" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaSaxLoaderImport( this, 
			S_Any, NULL, S_Table, "JavaSaxLoaderImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaSaxLoaderStartElement( this, 
			S_Any, NULL, S_Table, "JavaSaxLoaderStartElement" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaTableImplementation( this, 
			S_Any, NULL, S_Table, "JavaTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaTableImport( this, 
			S_Any, NULL, S_Table, "JavaTableImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaTableInterface( this, 
			S_Any, NULL, S_Table, "JavaTableInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaTableMembers( this, 
			S_Any, NULL, S_Table, "JavaTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaTableObjImplementation( this, 
			S_Any, NULL, S_Table, "JavaTableObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaTableObjImport( this, 
			S_Any, NULL, S_Table, "JavaTableObjImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaTableObjInterface( this, 
			S_Any, NULL, S_Table, "JavaTableObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaTableObjMembers( this, 
			S_Any, NULL, S_Table, "JavaTableObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgClientTableBody( this, 
			S_Any, NULL, S_Table, "JavaXMsgClientTableBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgClientTableImport( this, 
			S_Any, NULL, S_Table, "JavaXMsgClientTableImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRqstTableBody( this, 
			S_Any, NULL, S_Table, "JavaXMsgRqstTableBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRqstTableImport( this, 
			S_Any, NULL, S_Table, "JavaXMsgRqstTableImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRspnTableBody( this, 
			S_Any, NULL, S_Table, "JavaXMsgRspnTableBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgRspnTableImport( this, 
			S_Any, NULL, S_Table, "JavaXMsgRspnTableImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgTableFormatters( this, 
			S_Any, NULL, S_Table, "JavaXMsgTableFormatters" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindJavaXMsgTableImport( this, 
			S_Any, NULL, S_Table, "JavaXMsgTableImport" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMethodBody( this, 
			S_Any, NULL, S_ServerMethod, "CPlusMethodBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusDb2LUWSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "CPlusDb2LUWSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusDb2LUWSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "CPlusDb2LUWSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusDb2LUWSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CPlusDb2LUWSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMSSqlSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "CPlusMSSqlSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMSSqlSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "CPlusMSSqlSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMSSqlSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CPlusMSSqlSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMySqlSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "CPlusMySqlSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMySqlSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "CPlusMySqlSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMySqlSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CPlusMySqlSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusOracleSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "CPlusOracleSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusOracleSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "CPlusOracleSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusOracleSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CPlusOracleSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusPgSqlSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "CPlusPgSqlSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusPgSqlSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "CPlusPgSqlSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusPgSqlSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CPlusPgSqlSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusRamSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "CPlusRamSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusRamSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "CPlusRamSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusRamSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CPlusRamSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusSchemaObjImplementation( this, 
			S_Any, NULL, S_SchemaDef, "CPlusSchemaObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "CPlusSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusSchemaObjInterface( this, 
			S_Any, NULL, S_SchemaDef, "CPlusSchemaObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CPlusSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgClientSchemaInclude( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgClientSchemaInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgClientSchemaBody( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgClientSchemaBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRqstSchemaBody( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgRqstSchemaBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRqstSchemaInclude( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgRqstSchemaInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRqstSchemaWireParsers( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgRqstSchemaWireParsers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRqstSchemaXsdElementList( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgRqstSchemaXsdElementList" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRqstSchemaXsdSpec( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgRqstSchemaXsdSpec" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRspnSchemaBody( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgRspnSchemaBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRspnSchemaInclude( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgRspnSchemaInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRspnSchemaWireParsers( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgRspnSchemaWireParsers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRspnSchemaXsdElementList( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgRspnSchemaXsdElementList" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRspnSchemaXsdSpec( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgRspnSchemaXsdSpec" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgSchemaFormatters( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgSchemaFormatters" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgSchemaInclude( this, 
			S_Any, NULL, S_SchemaDef, "CPlusXMsgSchemaInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusDb2LUWTableImplementation( this, 
			S_Any, NULL, S_Table, "CPlusDb2LUWTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusDb2LUWTableInclude( this, 
			S_Any, NULL, S_Table, "CPlusDb2LUWTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusDb2LUWTableMembers( this, 
			S_Any, NULL, S_Table, "CPlusDb2LUWTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusEditObjImplementation( this, 
			S_Any, NULL, S_Table, "CPlusEditObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusEditObjInclude( this, 
			S_Any, NULL, S_Table, "CPlusEditObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusEditObjInterface( this, 
			S_Any, NULL, S_Table, "CPlusEditObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusEditObjMembers( this, 
			S_Any, NULL, S_Table, "CPlusEditObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMSSqlTableImplementation( this, 
			S_Any, NULL, S_Table, "CPlusMSSqlTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMSSqlTableInclude( this, 
			S_Any, NULL, S_Table, "CPlusMSSqlTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMSSqlTableMembers( this, 
			S_Any, NULL, S_Table, "CPlusMSSqlTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMySqlTableImplementation( this, 
			S_Any, NULL, S_Table, "CPlusMySqlTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMySqlTableInclude( this, 
			S_Any, NULL, S_Table, "CPlusMySqlTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusMySqlTableMembers( this, 
			S_Any, NULL, S_Table, "CPlusMySqlTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusObjImplementation( this, 
			S_Any, NULL, S_Table, "CPlusObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusObjInclude( this, 
			S_Any, NULL, S_Table, "CPlusObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusObjInterface( this, 
			S_Any, NULL, S_Table, "CPlusObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusObjMembers( this, 
			S_Any, NULL, S_Table, "CPlusObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusOracleTableImplementation( this, 
			S_Any, NULL, S_Table, "CPlusOracleTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusOracleTableInclude( this, 
			S_Any, NULL, S_Table, "CPlusOracleTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusOracleTableMembers( this, 
			S_Any, NULL, S_Table, "CPlusOracleTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusPgSqlTableImplementation( this, 
			S_Any, NULL, S_Table, "CPlusPgSqlTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusPgSqlTableInclude( this, 
			S_Any, NULL, S_Table, "CPlusPgSqlTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusPgSqlTableMembers( this, 
			S_Any, NULL, S_Table, "CPlusPgSqlTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusRamTableImplementation( this, 
			S_Any, NULL, S_Table, "CPlusRamTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusRamTableInclude( this, 
			S_Any, NULL, S_Table, "CPlusRamTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusRamTableMembers( this, 
			S_Any, NULL, S_Table, "CPlusRamTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusSaxLoaderEndElement( this, 
			S_Any, NULL, S_Table, "CPlusSaxLoaderEndElement" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusSaxLoaderInclude( this, 
			S_Any, NULL, S_Table, "CPlusSaxLoaderInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusSaxLoaderStartElement( this, 
			S_Any, NULL, S_Table, "CPlusSaxLoaderStartElement" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusTableImplementation( this, 
			S_Any, NULL, S_Table, "CPlusTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusTableInclude( this, 
			S_Any, NULL, S_Table, "CPlusTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusTableInterface( this, 
			S_Any, NULL, S_Table, "CPlusTableInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusTableMembers( this, 
			S_Any, NULL, S_Table, "CPlusTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusTableObjImplementation( this, 
			S_Any, NULL, S_Table, "CPlusTableObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusTableObjInclude( this, 
			S_Any, NULL, S_Table, "CPlusTableObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusTableObjInterface( this, 
			S_Any, NULL, S_Table, "CPlusTableObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusTableObjMembers( this, 
			S_Any, NULL, S_Table, "CPlusTableObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgClientTableBody( this, 
			S_Any, NULL, S_Table, "CPlusXMsgClientTableBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgClientTableInclude( this, 
			S_Any, NULL, S_Table, "CPlusXMsgClientTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRqstTableBody( this, 
			S_Any, NULL, S_Table, "CPlusXMsgRqstTableBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRqstTableInclude( this, 
			S_Any, NULL, S_Table, "CPlusXMsgRqstTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRspnTableBody( this, 
			S_Any, NULL, S_Table, "CPlusXMsgRspnTableBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgRspnTableInclude( this, 
			S_Any, NULL, S_Table, "CPlusXMsgRspnTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgTableFormatters( this, 
			S_Any, NULL, S_Table, "CPlusXMsgTableFormatters" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCPlusXMsgTableInclude( this, 
			S_Any, NULL, S_Table, "CPlusXMsgTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusDb2LUWSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "HPlusDb2LUWSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusDb2LUWSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "HPlusDb2LUWSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusDb2LUWSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "HPlusDb2LUWSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusMSSqlSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "HPlusMSSqlSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusMSSqlSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "HPlusMSSqlSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusMSSqlSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "HPlusMSSqlSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusMySqlSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "HPlusMySqlSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusMySqlSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "HPlusMySqlSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusMySqlSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "HPlusMySqlSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusOracleSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "HPlusOracleSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusOracleSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "HPlusOracleSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusOracleSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "HPlusOracleSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusPgSqlSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "HPlusPgSqlSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusPgSqlSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "HPlusPgSqlSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusPgSqlSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "HPlusPgSqlSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusRamSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "HPlusRamSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusRamSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "HPlusRamSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusRamSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "HPlusRamSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusSchemaObjImplementation( this, 
			S_Any, NULL, S_SchemaDef, "HPlusSchemaObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusSchemaObjInclude( this, 
			S_Any, NULL, S_SchemaDef, "HPlusSchemaObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusSchemaObjInterface( this, 
			S_Any, NULL, S_SchemaDef, "HPlusSchemaObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "HPlusSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgClientSchemaInclude( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgClientSchemaInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgClientSchemaBody( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgClientSchemaBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRqstSchemaBody( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgRqstSchemaBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRqstSchemaInclude( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgRqstSchemaInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRqstSchemaWireParsers( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgRqstSchemaWireParsers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRqstSchemaXsdElementList( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgRqstSchemaXsdElementList" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRqstSchemaXsdSpec( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgRqstSchemaXsdSpec" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRspnSchemaBody( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgRspnSchemaBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRspnSchemaInclude( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgRspnSchemaInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRspnSchemaWireParsers( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgRspnSchemaWireParsers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRspnSchemaXsdElementList( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgRspnSchemaXsdElementList" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRspnSchemaXsdSpec( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgRspnSchemaXsdSpec" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgSchemaFormatters( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgSchemaFormatters" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgSchemaInclude( this, 
			S_Any, NULL, S_SchemaDef, "HPlusXMsgSchemaInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusDb2LUWTableImplementation( this, 
			S_Any, NULL, S_Table, "HPlusDb2LUWTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusDb2LUWTableInclude( this, 
			S_Any, NULL, S_Table, "HPlusDb2LUWTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusDb2LUWTableMembers( this, 
			S_Any, NULL, S_Table, "HPlusDb2LUWTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusEditObjImplementation( this, 
			S_Any, NULL, S_Table, "HPlusEditObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusEditObjInclude( this, 
			S_Any, NULL, S_Table, "HPlusEditObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusEditObjInterface( this, 
			S_Any, NULL, S_Table, "HPlusEditObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusEditObjMembers( this, 
			S_Any, NULL, S_Table, "HPlusEditObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusMSSqlTableImplementation( this, 
			S_Any, NULL, S_Table, "HPlusMSSqlTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusMSSqlTableInclude( this, 
			S_Any, NULL, S_Table, "HPlusMSSqlTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusMSSqlTableMembers( this, 
			S_Any, NULL, S_Table, "HPlusMSSqlTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusMySqlTableImplementation( this, 
			S_Any, NULL, S_Table, "HPlusMySqlTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusMySqlTableInclude( this, 
			S_Any, NULL, S_Table, "HPlusMySqlTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusMySqlTableMembers( this, 
			S_Any, NULL, S_Table, "HPlusMySqlTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusObjImplementation( this, 
			S_Any, NULL, S_Table, "HPlusObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusObjInclude( this, 
			S_Any, NULL, S_Table, "HPlusObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusObjInterface( this, 
			S_Any, NULL, S_Table, "HPlusObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusObjMembers( this, 
			S_Any, NULL, S_Table, "HPlusObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusOracleTableImplementation( this, 
			S_Any, NULL, S_Table, "HPlusOracleTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusOracleTableInclude( this, 
			S_Any, NULL, S_Table, "HPlusOracleTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusOracleTableMembers( this, 
			S_Any, NULL, S_Table, "HPlusOracleTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusPgSqlTableImplementation( this, 
			S_Any, NULL, S_Table, "HPlusPgSqlTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusPgSqlTableInclude( this, 
			S_Any, NULL, S_Table, "HPlusPgSqlTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusPgSqlTableMembers( this, 
			S_Any, NULL, S_Table, "HPlusPgSqlTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusRamTableImplementation( this, 
			S_Any, NULL, S_Table, "HPlusRamTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusRamTableInclude( this, 
			S_Any, NULL, S_Table, "HPlusRamTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusRamTableMembers( this, 
			S_Any, NULL, S_Table, "HPlusRamTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusSaxLoaderEndElement( this, 
			S_Any, NULL, S_Table, "HPlusSaxLoaderEndElement" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusSaxLoaderInclude( this, 
			S_Any, NULL, S_Table, "HPlusSaxLoaderInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusSaxLoaderStartElement( this, 
			S_Any, NULL, S_Table, "HPlusSaxLoaderStartElement" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusTableImplementation( this, 
			S_Any, NULL, S_Table, "HPlusTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusTableInclude( this, 
			S_Any, NULL, S_Table, "HPlusTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusTableInterface( this, 
			S_Any, NULL, S_Table, "HPlusTableInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusTableMembers( this, 
			S_Any, NULL, S_Table, "HPlusTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusTableObjImplementation( this, 
			S_Any, NULL, S_Table, "HPlusTableObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusTableObjInclude( this, 
			S_Any, NULL, S_Table, "HPlusTableObjInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusTableObjInterface( this, 
			S_Any, NULL, S_Table, "HPlusTableObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusTableObjMembers( this, 
			S_Any, NULL, S_Table, "HPlusTableObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgClientTableBody( this, 
			S_Any, NULL, S_Table, "HPlusXMsgClientTableBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgClientTableInclude( this, 
			S_Any, NULL, S_Table, "HPlusXMsgClientTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRqstTableBody( this, 
			S_Any, NULL, S_Table, "HPlusXMsgRqstTableBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRqstTableInclude( this, 
			S_Any, NULL, S_Table, "HPlusXMsgRqstTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRspnTableBody( this, 
			S_Any, NULL, S_Table, "HPlusXMsgRspnTableBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgRspnTableInclude( this, 
			S_Any, NULL, S_Table, "HPlusXMsgRspnTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgTableFormatters( this, 
			S_Any, NULL, S_Table, "HPlusXMsgTableFormatters" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindHPlusXMsgTableInclude( this, 
			S_Any, NULL, S_Table, "HPlusXMsgTableInclude" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMethodBody( this, 
			S_Any, NULL, S_ServerMethod, "CSharpMethodBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpDb2LUWSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "CSharpDb2LUWSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpDb2LUWSchemaObjUsing( this, 
			S_Any, NULL, S_SchemaDef, "CSharpDb2LUWSchemaObjUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpDb2LUWSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CSharpDb2LUWSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMSSqlSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "CSharpMSSqlSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMSSqlSchemaObjUsing( this, 
			S_Any, NULL, S_SchemaDef, "CSharpMSSqlSchemaObjUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMSSqlSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CSharpMSSqlSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMySqlSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "CSharpMySqlSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMySqlSchemaObjUsing( this, 
			S_Any, NULL, S_SchemaDef, "CSharpMySqlSchemaObjUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMySqlSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CSharpMySqlSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpOracleSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "CSharpOracleSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpOracleSchemaObjUsing( this, 
			S_Any, NULL, S_SchemaDef, "CSharpOracleSchemaObjUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpOracleSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CSharpOracleSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpPgSqlSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "CSharpPgSqlSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpPgSqlSchemaObjUsing( this, 
			S_Any, NULL, S_SchemaDef, "CSharpPgSqlSchemaObjUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpPgSqlSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CSharpPgSqlSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpRamSchemaObjImpl( this, 
			S_Any, NULL, S_SchemaDef, "CSharpRamSchemaObjImpl" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpRamSchemaObjUsing( this, 
			S_Any, NULL, S_SchemaDef, "CSharpRamSchemaObjUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpRamSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CSharpRamSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpSchemaObjImplementation( this, 
			S_Any, NULL, S_SchemaDef, "CSharpSchemaObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpSchemaObjUsing( this, 
			S_Any, NULL, S_SchemaDef, "CSharpSchemaObjUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpSchemaObjInterface( this, 
			S_Any, NULL, S_SchemaDef, "CSharpSchemaObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpSchemaObjMembers( this, 
			S_Any, NULL, S_SchemaDef, "CSharpSchemaObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgClientSchemaUsing( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgClientSchemaUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgClientSchemaBody( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgClientSchemaBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRqstSchemaBody( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgRqstSchemaBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRqstSchemaUsing( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgRqstSchemaUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRqstSchemaWireParsers( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgRqstSchemaWireParsers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRqstSchemaXsdElementList( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgRqstSchemaXsdElementList" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRqstSchemaXsdSpec( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgRqstSchemaXsdSpec" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRspnSchemaBody( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgRspnSchemaBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRspnSchemaUsing( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgRspnSchemaUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRspnSchemaWireParsers( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgRspnSchemaWireParsers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRspnSchemaXsdElementList( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgRspnSchemaXsdElementList" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRspnSchemaXsdSpec( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgRspnSchemaXsdSpec" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgSchemaFormatters( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgSchemaFormatters" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgSchemaUsing( this, 
			S_Any, NULL, S_SchemaDef, "CSharpXMsgSchemaUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpDb2LUWTableImplementation( this, 
			S_Any, NULL, S_Table, "CSharpDb2LUWTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpDb2LUWTableUsing( this, 
			S_Any, NULL, S_Table, "CSharpDb2LUWTableUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpDb2LUWTableMembers( this, 
			S_Any, NULL, S_Table, "CSharpDb2LUWTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpEditObjImplementation( this, 
			S_Any, NULL, S_Table, "CSharpEditObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpEditObjUsing( this, 
			S_Any, NULL, S_Table, "CSharpEditObjUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpEditObjInterface( this, 
			S_Any, NULL, S_Table, "CSharpEditObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpEditObjMembers( this, 
			S_Any, NULL, S_Table, "CSharpEditObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMSSqlTableImplementation( this, 
			S_Any, NULL, S_Table, "CSharpMSSqlTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMSSqlTableUsing( this, 
			S_Any, NULL, S_Table, "CSharpMSSqlTableUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMSSqlTableMembers( this, 
			S_Any, NULL, S_Table, "CSharpMSSqlTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMySqlTableImplementation( this, 
			S_Any, NULL, S_Table, "CSharpMySqlTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMySqlTableUsing( this, 
			S_Any, NULL, S_Table, "CSharpMySqlTableUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpMySqlTableMembers( this, 
			S_Any, NULL, S_Table, "CSharpMySqlTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpObjImplementation( this, 
			S_Any, NULL, S_Table, "CSharpObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpObjUsing( this, 
			S_Any, NULL, S_Table, "CSharpObjUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpObjInterface( this, 
			S_Any, NULL, S_Table, "CSharpObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpObjMembers( this, 
			S_Any, NULL, S_Table, "CSharpObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpOracleTableImplementation( this, 
			S_Any, NULL, S_Table, "CSharpOracleTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpOracleTableUsing( this, 
			S_Any, NULL, S_Table, "CSharpOracleTableUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpOracleTableMembers( this, 
			S_Any, NULL, S_Table, "CSharpOracleTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpPgSqlTableImplementation( this, 
			S_Any, NULL, S_Table, "CSharpPgSqlTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpPgSqlTableUsing( this, 
			S_Any, NULL, S_Table, "CSharpPgSqlTableUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpPgSqlTableMembers( this, 
			S_Any, NULL, S_Table, "CSharpPgSqlTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpRamTableImplementation( this, 
			S_Any, NULL, S_Table, "CSharpRamTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpRamTableUsing( this, 
			S_Any, NULL, S_Table, "CSharpRamTableUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpRamTableMembers( this, 
			S_Any, NULL, S_Table, "CSharpRamTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpSaxLoaderEndElement( this, 
			S_Any, NULL, S_Table, "CSharpSaxLoaderEndElement" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpSaxLoaderUsing( this, 
			S_Any, NULL, S_Table, "CSharpSaxLoaderUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpSaxLoaderStartElement( this, 
			S_Any, NULL, S_Table, "CSharpSaxLoaderStartElement" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpTableImplementation( this, 
			S_Any, NULL, S_Table, "CSharpTableImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpTableUsing( this, 
			S_Any, NULL, S_Table, "CSharpTableUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpTableInterface( this, 
			S_Any, NULL, S_Table, "CSharpTableInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpTableMembers( this, 
			S_Any, NULL, S_Table, "CSharpTableMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpTableObjImplementation( this, 
			S_Any, NULL, S_Table, "CSharpTableObjImplementation" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpTableObjUsing( this, 
			S_Any, NULL, S_Table, "CSharpTableObjUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpTableObjInterface( this, 
			S_Any, NULL, S_Table, "CSharpTableObjInterface" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpTableObjMembers( this, 
			S_Any, NULL, S_Table, "CSharpTableObjMembers" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgClientTableBody( this, 
			S_Any, NULL, S_Table, "CSharpXMsgClientTableBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgClientTableUsing( this, 
			S_Any, NULL, S_Table, "CSharpXMsgClientTableUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRqstTableBody( this, 
			S_Any, NULL, S_Table, "CSharpXMsgRqstTableBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRqstTableUsing( this, 
			S_Any, NULL, S_Table, "CSharpXMsgRqstTableUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRspnTableBody( this, 
			S_Any, NULL, S_Table, "CSharpXMsgRspnTableBody" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgRspnTableUsing( this, 
			S_Any, NULL, S_Table, "CSharpXMsgRspnTableUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgTableFormatters( this, 
			S_Any, NULL, S_Table, "CSharpXMsgTableFormatters" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new cfbam::CFBamCustMssCFGenBindCSharpXMsgTableUsing( this, 
			S_Any, NULL, S_Table, "CSharpXMsgTableUsing" );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredContainerCartridge( ruleCart );
		dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( editBind )->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();
	}

}
