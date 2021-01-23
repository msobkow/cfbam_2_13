
// Description: C++18 MssCF CFEngine for CFBam

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

#include <cfbammsscf/CFBamMssCFEngine.hpp>
#include <cfbammsscf/CFBamMssCFBindAtomDbName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasAtomDbName.hpp>
#include <cfbammsscf/CFBamMssCFBindBlobColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceBlobColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindBlobDefMaxLen.hpp>
#include <cfbammsscf/CFBamMssCFBindBlobDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasBlobDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindBlobTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceBlobTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindBoolColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceBoolColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindBoolDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasBoolDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindBoolDefFalseString.hpp>
#include <cfbammsscf/CFBamMssCFBindHasBoolDefFalseString.hpp>
#include <cfbammsscf/CFBamMssCFBindBoolDefTrueString.hpp>
#include <cfbammsscf/CFBamMssCFBindHasBoolDefTrueString.hpp>
#include <cfbammsscf/CFBamMssCFBindBoolDefNullString.hpp>
#include <cfbammsscf/CFBamMssCFBindHasBoolDefNullString.hpp>
#include <cfbammsscf/CFBamMssCFBindBoolTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceBoolTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindChainTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindChainId.hpp>
#include <cfbammsscf/CFBamMssCFBindChainDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasChainDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindChainDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasChainDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindChainName.hpp>
#include <cfbammsscf/CFBamMssCFBindChainShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasChainShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindChainLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindHasChainLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindChainShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasChainShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindChainDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasChainDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindChainTableId.hpp>
#include <cfbammsscf/CFBamMssCFBindChainSuffix.hpp>
#include <cfbammsscf/CFBamMssCFBindHasChainSuffix.hpp>
#include <cfbammsscf/CFBamMssCFBindChainPrevRelationTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindChainPrevRelationId.hpp>
#include <cfbammsscf/CFBamMssCFBindChainNextRelationTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindChainNextRelationId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceChainTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceChainTable.hpp>
#include <cfbammsscf/CFBamMssCFReferenceChainDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasChainDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFReferenceChainPrevRel.hpp>
#include <cfbammsscf/CFBamMssCFReferenceChainNextRel.hpp>
#include <cfbammsscf/CFBamMssCFBindClearDepRelationId.hpp>
#include <cfbammsscf/CFBamMssCFBindClearDepDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasClearDepDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindClearDepDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasClearDepDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceClearDepRelation.hpp>
#include <cfbammsscf/CFBamMssCFReferenceClearDepDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasClearDepDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindClearSubDep1ClearTopDepTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindClearSubDep1ClearTopDepId.hpp>
#include <cfbammsscf/CFBamMssCFBindClearSubDep1Name.hpp>
#include <cfbammsscf/CFBamMssCFReferenceClearSubDep1ClearTopDep.hpp>
#include <cfbammsscf/CFBamMssCFIterateClearSubDep1ClearDep.hpp>
#include <cfbammsscf/CFBamMssCFBindClearSubDep2ClearSubDep1TenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindClearSubDep2ClearSubDep1Id.hpp>
#include <cfbammsscf/CFBamMssCFBindClearSubDep2Name.hpp>
#include <cfbammsscf/CFBamMssCFReferenceClearSubDep2ClearSubDep1.hpp>
#include <cfbammsscf/CFBamMssCFIterateClearSubDep2ClearDep.hpp>
#include <cfbammsscf/CFBamMssCFBindClearSubDep3ClearSubDep2TenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindClearSubDep3ClearSubDep2Id.hpp>
#include <cfbammsscf/CFBamMssCFBindClearSubDep3Name.hpp>
#include <cfbammsscf/CFBamMssCFReferenceClearSubDep3ClearSubDep2.hpp>
#include <cfbammsscf/CFBamMssCFBindClearTopDepTableTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindClearTopDepTableId.hpp>
#include <cfbammsscf/CFBamMssCFBindClearTopDepName.hpp>
#include <cfbammsscf/CFBamMssCFBindClearTopDepPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasClearTopDepPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindClearTopDepPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasClearTopDepPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindClearTopDepNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasClearTopDepNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindClearTopDepNextId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasClearTopDepNextId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceClearTopDepTable.hpp>
#include <cfbammsscf/CFBamMssCFIterateClearTopDepClearDep.hpp>
#include <cfbammsscf/CFBamMssCFReferenceClearTopDepPrev.hpp>
#include <cfbammsscf/CFBamMssCFBindHasClearTopDepPrev.hpp>
#include <cfbammsscf/CFBamMssCFReferenceClearTopDepNext.hpp>
#include <cfbammsscf/CFBamMssCFBindHasClearTopDepNext.hpp>
#include <cfbammsscf/CFBamMssCFBindClusterId.hpp>
#include <cfbammsscf/CFBamMssCFBindClusterFullDomName.hpp>
#include <cfbammsscf/CFBamMssCFBindClusterDescription.hpp>
#include <cfbammsscf/CFBamMssCFIterateClusterHostNode.hpp>
#include <cfbammsscf/CFBamMssCFIterateClusterTenant.hpp>
#include <cfbammsscf/CFBamMssCFIterateClusterSecApp.hpp>
#include <cfbammsscf/CFBamMssCFIterateClusterSecGroup.hpp>
#include <cfbammsscf/CFBamMssCFIterateClusterSysCluster.hpp>
#include <cfbammsscf/CFBamMssCFBindDateColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceDateColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindDateDefDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDateDefDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindDateTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceDateTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindDelDepDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDelDepDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindDelDepDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDelDepDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindDelDepRelationTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindDelDepRelationId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceDelDepRelation.hpp>
#include <cfbammsscf/CFBamMssCFReferenceDelDepDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDelDepDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindDelSubDep1DelTopDepTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindDelSubDep1DelTopDepId.hpp>
#include <cfbammsscf/CFBamMssCFBindDelSubDep1Name.hpp>
#include <cfbammsscf/CFBamMssCFReferenceDelSubDep1DelTopDep.hpp>
#include <cfbammsscf/CFBamMssCFIterateDelSubDep1DelDep.hpp>
#include <cfbammsscf/CFBamMssCFBindDelSubDep2DelSubDep1TenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindDelSubDep2DelSubDep1Id.hpp>
#include <cfbammsscf/CFBamMssCFBindDelSubDep2Name.hpp>
#include <cfbammsscf/CFBamMssCFReferenceDelSubDep2DelSubDep1.hpp>
#include <cfbammsscf/CFBamMssCFIterateDelSubDep2DelDep.hpp>
#include <cfbammsscf/CFBamMssCFBindDelSubDep3DelSubDep2TenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindDelSubDep3DelSubDep2Id.hpp>
#include <cfbammsscf/CFBamMssCFBindDelSubDep3Name.hpp>
#include <cfbammsscf/CFBamMssCFReferenceDelSubDep3DelSubDep2.hpp>
#include <cfbammsscf/CFBamMssCFBindDelTopDepName.hpp>
#include <cfbammsscf/CFBamMssCFBindDelTopDepTableTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindDelTopDepTableId.hpp>
#include <cfbammsscf/CFBamMssCFBindDelTopDepPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDelTopDepPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindDelTopDepPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDelTopDepPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindDelTopDepNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDelTopDepNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindDelTopDepNextId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDelTopDepNextId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceDelTopDepTable.hpp>
#include <cfbammsscf/CFBamMssCFIterateDelTopDepDelDep.hpp>
#include <cfbammsscf/CFBamMssCFReferenceDelTopDepPrev.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDelTopDepPrev.hpp>
#include <cfbammsscf/CFBamMssCFReferenceDelTopDepNext.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDelTopDepNext.hpp>
#include <cfbammsscf/CFBamMssCFBindDoubleColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceDoubleColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindDoubleDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDoubleDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindDoubleDefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDoubleDefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindDoubleDefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasDoubleDefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindDoubleTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceDoubleTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFIterateEnumDefTag.hpp>
#include <cfbammsscf/CFBamMssCFBindEnumTagTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindEnumTagId.hpp>
#include <cfbammsscf/CFBamMssCFBindEnumTagDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasEnumTagDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindEnumTagDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasEnumTagDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindEnumTagEnumId.hpp>
#include <cfbammsscf/CFBamMssCFBindEnumTagEnumCode.hpp>
#include <cfbammsscf/CFBamMssCFBindHasEnumTagEnumCode.hpp>
#include <cfbammsscf/CFBamMssCFBindEnumTagName.hpp>
#include <cfbammsscf/CFBamMssCFBindEnumTagPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasEnumTagPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindEnumTagPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasEnumTagPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindEnumTagNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasEnumTagNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindEnumTagNextId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasEnumTagNextId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceEnumTagTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceEnumTagEnumDef.hpp>
#include <cfbammsscf/CFBamMssCFReferenceEnumTagDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasEnumTagDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFReferenceEnumTagPrev.hpp>
#include <cfbammsscf/CFBamMssCFBindHasEnumTagPrev.hpp>
#include <cfbammsscf/CFBamMssCFReferenceEnumTagNext.hpp>
#include <cfbammsscf/CFBamMssCFBindHasEnumTagNext.hpp>
#include <cfbammsscf/CFBamMssCFBindEnumTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceEnumTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindFloatColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceFloatColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindFloatDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasFloatDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindFloatDefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasFloatDefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindFloatDefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasFloatDefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindFloatTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceFloatTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindHostNodeClusterId.hpp>
#include <cfbammsscf/CFBamMssCFBindHostNodeHostNodeId.hpp>
#include <cfbammsscf/CFBamMssCFBindHostNodeDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHostNodeHostName.hpp>
#include <cfbammsscf/CFBamMssCFReferenceHostNodeCluster.hpp>
#include <cfbammsscf/CFBamMssCFIterateHostNodeService.hpp>
#include <cfbammsscf/CFBamMssCFBindISOCcyISOCcyId.hpp>
#include <cfbammsscf/CFBamMssCFBindISOCcyISOCode.hpp>
#include <cfbammsscf/CFBamMssCFBindISOCcyName.hpp>
#include <cfbammsscf/CFBamMssCFBindISOCcyUnitSymbol.hpp>
#include <cfbammsscf/CFBamMssCFBindHasISOCcyUnitSymbol.hpp>
#include <cfbammsscf/CFBamMssCFBindISOCcyPrecis.hpp>
#include <cfbammsscf/CFBamMssCFIterateISOCcyCtry.hpp>
#include <cfbammsscf/CFBamMssCFBindISOCtryISOCtryId.hpp>
#include <cfbammsscf/CFBamMssCFBindISOCtryISOCode.hpp>
#include <cfbammsscf/CFBamMssCFBindISOCtryName.hpp>
#include <cfbammsscf/CFBamMssCFIterateISOCtryCcy.hpp>
#include <cfbammsscf/CFBamMssCFIterateISOCtryLang.hpp>
#include <cfbammsscf/CFBamMssCFBindISOCtryCcyISOCtryId.hpp>
#include <cfbammsscf/CFBamMssCFBindISOCtryCcyISOCcyId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceISOCtryCcyCtry.hpp>
#include <cfbammsscf/CFBamMssCFReferenceISOCtryCcyCcy.hpp>
#include <cfbammsscf/CFBamMssCFBindISOCtryLangISOCtryId.hpp>
#include <cfbammsscf/CFBamMssCFBindISOCtryLangISOLangId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceISOCtryLangCtry.hpp>
#include <cfbammsscf/CFBamMssCFReferenceISOCtryLangLang.hpp>
#include <cfbammsscf/CFBamMssCFBindISOLangISOLangId.hpp>
#include <cfbammsscf/CFBamMssCFBindISOLangISO6392Code.hpp>
#include <cfbammsscf/CFBamMssCFBindISOLangISO6391Code.hpp>
#include <cfbammsscf/CFBamMssCFBindHasISOLangISO6391Code.hpp>
#include <cfbammsscf/CFBamMssCFBindISOLangEnglishName.hpp>
#include <cfbammsscf/CFBamMssCFIterateISOLangCtry.hpp>
#include <cfbammsscf/CFBamMssCFBindISOTZoneISOTZoneId.hpp>
#include <cfbammsscf/CFBamMssCFBindISOTZoneIso8601.hpp>
#include <cfbammsscf/CFBamMssCFBindISOTZoneTZName.hpp>
#include <cfbammsscf/CFBamMssCFBindISOTZoneTZHourOffset.hpp>
#include <cfbammsscf/CFBamMssCFBindISOTZoneTZMinOffset.hpp>
#include <cfbammsscf/CFBamMssCFBindISOTZoneDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindISOTZoneVisible.hpp>
#include <cfbammsscf/CFBamMssCFBindId16GenDispenserTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasId16GenDispenserTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindId16GenDispenserId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasId16GenDispenserId.hpp>
#include <cfbammsscf/CFBamMssCFBindId16GenSlice.hpp>
#include <cfbammsscf/CFBamMssCFBindId16GenBlockSize.hpp>
#include <cfbammsscf/CFBamMssCFReferenceId16GenDispenser.hpp>
#include <cfbammsscf/CFBamMssCFBindHasId16GenDispenser.hpp>
#include <cfbammsscf/CFBamMssCFBindId32GenDispenserTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasId32GenDispenserTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindId32GenDispenserId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasId32GenDispenserId.hpp>
#include <cfbammsscf/CFBamMssCFBindId32GenSlice.hpp>
#include <cfbammsscf/CFBamMssCFBindId32GenBlockSize.hpp>
#include <cfbammsscf/CFBamMssCFReferenceId32GenDispenser.hpp>
#include <cfbammsscf/CFBamMssCFBindHasId32GenDispenser.hpp>
#include <cfbammsscf/CFBamMssCFBindId64GenDispenserTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasId64GenDispenserTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindId64GenDispenserId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasId64GenDispenserId.hpp>
#include <cfbammsscf/CFBamMssCFBindId64GenSlice.hpp>
#include <cfbammsscf/CFBamMssCFBindId64GenBlockSize.hpp>
#include <cfbammsscf/CFBamMssCFReferenceId64GenDispenser.hpp>
#include <cfbammsscf/CFBamMssCFBindHasId64GenDispenser.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexTableId.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexName.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexDbName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexDbName.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexSuffix.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexSuffix.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexIsUnique.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexIsDbMapped.hpp>
#include <cfbammsscf/CFBamMssCFReferenceIndexTable.hpp>
#include <cfbammsscf/CFBamMssCFReferenceIndexDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFIterateIndexColumns.hpp>
#include <cfbammsscf/CFBamMssCFReferenceIndexIdxTenant.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColIndexId.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColId.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColName.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColColumnId.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColIsAscending.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindIndexColNextId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColNextId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceIndexColTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceIndexColIndex.hpp>
#include <cfbammsscf/CFBamMssCFReferenceIndexColDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFIterateIndexColRefRelFromCol.hpp>
#include <cfbammsscf/CFBamMssCFIterateIndexColRefRelToCol.hpp>
#include <cfbammsscf/CFBamMssCFReferenceIndexColPrev.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColPrev.hpp>
#include <cfbammsscf/CFBamMssCFReferenceIndexColNext.hpp>
#include <cfbammsscf/CFBamMssCFBindHasIndexColNext.hpp>
#include <cfbammsscf/CFBamMssCFReferenceIndexColColumn.hpp>
#include <cfbammsscf/CFBamMssCFBindInt16ColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceInt16ColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindInt16DefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasInt16DefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindInt16DefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasInt16DefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindInt16DefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasInt16DefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindInt16TypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceInt16TypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindInt32ColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceInt32ColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindInt32DefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasInt32DefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindInt32DefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasInt32DefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindInt32DefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasInt32DefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindInt32TypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceInt32TypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindInt64ColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceInt64ColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindInt64DefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasInt64DefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindInt64DefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasInt64DefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindInt64DefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasInt64DefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindInt64TypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceInt64TypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindLicenseTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindLicenseId.hpp>
#include <cfbammsscf/CFBamMssCFBindLicenseTopDomainId.hpp>
#include <cfbammsscf/CFBamMssCFBindLicenseName.hpp>
#include <cfbammsscf/CFBamMssCFBindLicenseDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasLicenseDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindLicenseEmbeddedText.hpp>
#include <cfbammsscf/CFBamMssCFBindHasLicenseEmbeddedText.hpp>
#include <cfbammsscf/CFBamMssCFBindLicenseFullText.hpp>
#include <cfbammsscf/CFBamMssCFBindHasLicenseFullText.hpp>
#include <cfbammsscf/CFBamMssCFReferenceLicenseTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceLicenseTopDomain.hpp>
#include <cfbammsscf/CFBamMssCFBindMajorVersionTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindMajorVersionId.hpp>
#include <cfbammsscf/CFBamMssCFBindMajorVersionSubProjectId.hpp>
#include <cfbammsscf/CFBamMssCFBindMajorVersionName.hpp>
#include <cfbammsscf/CFBamMssCFBindMajorVersionDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasMajorVersionDescription.hpp>
#include <cfbammsscf/CFBamMssCFReferenceMajorVersionTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceMajorVersionParentSPrj.hpp>
#include <cfbammsscf/CFBamMssCFIterateMajorVersionMinorVer.hpp>
#include <cfbammsscf/CFBamMssCFBindMimeTypeMimeTypeId.hpp>
#include <cfbammsscf/CFBamMssCFBindMimeTypeName.hpp>
#include <cfbammsscf/CFBamMssCFBindMimeTypeFileTypes.hpp>
#include <cfbammsscf/CFBamMssCFBindHasMimeTypeFileTypes.hpp>
#include <cfbammsscf/CFBamMssCFBindMinorVersionTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindMinorVersionId.hpp>
#include <cfbammsscf/CFBamMssCFBindMinorVersionMajorVersionId.hpp>
#include <cfbammsscf/CFBamMssCFBindMinorVersionName.hpp>
#include <cfbammsscf/CFBamMssCFBindMinorVersionDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasMinorVersionDescription.hpp>
#include <cfbammsscf/CFBamMssCFReferenceMinorVersionTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceMinorVersionParentMajVer.hpp>
#include <cfbammsscf/CFBamMssCFIterateMinorVersionSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindNmTokenColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceNmTokenColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindNmTokenDefMaxLen.hpp>
#include <cfbammsscf/CFBamMssCFBindNmTokenDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasNmTokenDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindNmTokenTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceNmTokenTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindNmTokensColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceNmTokensColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindNmTokensDefMaxLen.hpp>
#include <cfbammsscf/CFBamMssCFBindNmTokensDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasNmTokensDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindNmTokensTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceNmTokensTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindNumberColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceNumberColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindNumberDefDigits.hpp>
#include <cfbammsscf/CFBamMssCFBindNumberDefPrecis.hpp>
#include <cfbammsscf/CFBamMssCFBindNumberDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasNumberDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindNumberDefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasNumberDefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindNumberDefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasNumberDefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindNumberTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceNumberTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindParamTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindParamServerMethodId.hpp>
#include <cfbammsscf/CFBamMssCFBindParamId.hpp>
#include <cfbammsscf/CFBamMssCFBindParamDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindParamDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindParamName.hpp>
#include <cfbammsscf/CFBamMssCFBindParamShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindParamDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindParamIsNullable.hpp>
#include <cfbammsscf/CFBamMssCFBindParamTypeTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamTypeTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindParamTypeId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamTypeId.hpp>
#include <cfbammsscf/CFBamMssCFBindParamPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindParamPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindParamNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindParamNextId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamNextId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceParamServerMeth.hpp>
#include <cfbammsscf/CFBamMssCFReferenceParamTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceParamDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFReferenceParamPrev.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamPrev.hpp>
#include <cfbammsscf/CFBamMssCFReferenceParamNext.hpp>
#include <cfbammsscf/CFBamMssCFBindHasParamNext.hpp>
#include <cfbammsscf/CFBamMssCFReferenceParamType.hpp>
#include <cfbammsscf/CFBamMssCFBindPopDepDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasPopDepDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindPopDepDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasPopDepDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindPopDepRelationTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindPopDepRelationId.hpp>
#include <cfbammsscf/CFBamMssCFReferencePopDepRelation.hpp>
#include <cfbammsscf/CFBamMssCFReferencePopDepDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasPopDepDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindPopSubDep1PopTopDepTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindPopSubDep1PopTopDepId.hpp>
#include <cfbammsscf/CFBamMssCFBindPopSubDep1Name.hpp>
#include <cfbammsscf/CFBamMssCFReferencePopSubDep1ContPopTopDep.hpp>
#include <cfbammsscf/CFBamMssCFIteratePopSubDep1PopDep.hpp>
#include <cfbammsscf/CFBamMssCFBindPopSubDep2PopSubDep1TenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindPopSubDep2PopSubDep1Id.hpp>
#include <cfbammsscf/CFBamMssCFBindPopSubDep2Name.hpp>
#include <cfbammsscf/CFBamMssCFReferencePopSubDep2PopSubDep1.hpp>
#include <cfbammsscf/CFBamMssCFIteratePopSubDep2PopDep.hpp>
#include <cfbammsscf/CFBamMssCFBindPopSubDep3PopSubDep2TenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindPopSubDep3PopSubDep2Id.hpp>
#include <cfbammsscf/CFBamMssCFBindPopSubDep3Name.hpp>
#include <cfbammsscf/CFBamMssCFReferencePopSubDep3PopSubDep2.hpp>
#include <cfbammsscf/CFBamMssCFBindPopTopDepContRelationTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindPopTopDepContRelationId.hpp>
#include <cfbammsscf/CFBamMssCFBindPopTopDepName.hpp>
#include <cfbammsscf/CFBamMssCFReferencePopTopDepContRelation.hpp>
#include <cfbammsscf/CFBamMssCFIteratePopTopDepPopDep.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationTableId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationName.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationRelationType.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationDbName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationDbName.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationSuffix.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationSuffix.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationFromIndexId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationToTableId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationToIndexId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationIsRequired.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationIsXsdContainer.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationIsLateResolver.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationAllowAddendum.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationNarrowedTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationNarrowedTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationNarrowedId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationNarrowedId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationFromTable.hpp>
#include <cfbammsscf/CFBamMssCFIterateRelationColumns.hpp>
#include <cfbammsscf/CFBamMssCFIterateRelationPopDep.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationRelTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationFromIndex.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationToTable.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationToIndex.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationNarrowed.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationNarrowed.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColRelationId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColName.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColFromColId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColToColId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindRelationColNextId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColNextId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationColRelation.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationColTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationColDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationColPrev.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColPrev.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationColNext.hpp>
#include <cfbammsscf/CFBamMssCFBindHasRelationColNext.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationColFromCol.hpp>
#include <cfbammsscf/CFBamMssCFReferenceRelationColToCol.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefMinorVersionId.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefName.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefDbName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefDbName.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCopyrightPeriod.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCopyrightHolder.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefAuthorEMail.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefProjectURL.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefPublishURI.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCommonLicenseCode.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCommonLicenseName.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCommonLicenseText.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefClientXFaceLicenseCode.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefClientXFaceLicenseCode.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefClientXFaceLicenseName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefClientXFaceLicenseName.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefClientXFaceLicenseText.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefClientXFaceLicenseText.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefClientImplLicenseCode.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefClientImplLicenseCode.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefClientImplLicenseName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefClientImplLicenseName.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefClientImplLicenseText.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefClientImplLicenseText.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefServerXFaceLicenseCode.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefServerXFaceLicenseCode.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefServerXFaceLicenseName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefServerXFaceLicenseName.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefServerXFaceLicenseText.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefServerXFaceLicenseText.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefServerImplLicenseCode.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefServerImplLicenseCode.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefServerImplLicenseName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefServerImplLicenseName.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefServerImplLicenseText.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefServerImplLicenseText.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJSchemaObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJSchemaObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJSchemaObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJSchemaObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJDb2LUWSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJDb2LUWSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJDb2LUWSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJDb2LUWSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJDb2LUWSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJDb2LUWSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJMSSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJMSSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJMSSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJMSSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJMSSqlSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJMSSqlSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJMySqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJMySqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJMySqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJMySqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJMySqlSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJMySqlSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJOracleSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJOracleSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJOracleSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJOracleSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJOracleSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJOracleSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJPgSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJPgSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJPgSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJPgSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJPgSqlSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJPgSqlSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJRamSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJRamSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJRamSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJRamSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJRamSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJRamSchemaObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgSchemaImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgSchemaImport.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgSchemaFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgSchemaFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgClientSchemaImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgClientSchemaImport.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgClientSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgClientSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgRqstSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgRqstSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgRqstSchemaImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgRqstSchemaImport.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgRqstSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgRqstSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgRqstSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgRqstSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgRqstSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgRqstSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgRspnSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgRspnSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgRspnSchemaImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgRspnSchemaImport.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgRspnSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgRspnSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgRspnSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgRspnSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefJXMsgRspnSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefJXMsgRspnSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppSchemaObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppSchemaObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppSchemaObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppSchemaObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppDb2LUWSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppDb2LUWSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppDb2LUWSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppDb2LUWSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppDb2LUWSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppDb2LUWSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppMSSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppMSSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppMSSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppMSSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppMSSqlSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppMSSqlSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppMySqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppMySqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppMySqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppMySqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppMySqlSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppMySqlSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppOracleSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppOracleSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppOracleSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppOracleSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppOracleSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppOracleSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppPgSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppPgSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppPgSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppPgSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppPgSqlSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppPgSqlSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppRamSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppRamSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppRamSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppRamSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppRamSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppRamSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgSchemaFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgSchemaFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgClientSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgClientSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgClientSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgClientSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgRqstSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgRqstSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgRqstSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgRqstSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgRqstSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgRqstSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgRqstSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgRqstSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgRqstSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgRqstSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgRspnSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgRspnSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgRspnSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgRspnSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgRspnSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgRspnSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgRspnSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgRspnSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCppXMsgRspnSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCppXMsgRspnSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppSchemaObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppSchemaObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppSchemaObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppSchemaObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppDb2LUWSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppDb2LUWSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppDb2LUWSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppDb2LUWSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppDb2LUWSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppDb2LUWSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppMSSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppMSSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppMSSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppMSSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppMSSqlSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppMSSqlSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppMySqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppMySqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppMySqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppMySqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppMySqlSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppMySqlSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppOracleSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppOracleSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppOracleSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppOracleSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppOracleSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppOracleSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppPgSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppPgSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppPgSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppPgSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppPgSqlSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppPgSqlSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppRamSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppRamSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppRamSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppRamSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppRamSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppRamSchemaObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgSchemaFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgSchemaFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgClientSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgClientSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgClientSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgClientSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgRqstSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgRqstSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgRqstSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgRqstSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgRqstSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgRqstSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgRqstSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgRqstSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgRqstSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgRqstSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgRspnSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgRspnSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgRspnSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgRspnSchemaInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgRspnSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgRspnSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgRspnSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgRspnSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefHppXMsgRspnSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefHppXMsgRspnSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsSchemaObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsSchemaObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsSchemaObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsSchemaObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsDb2LUWSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsDb2LUWSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsDb2LUWSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsDb2LUWSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsDb2LUWSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsDb2LUWSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsMSSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsMSSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsMSSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsMSSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsMSSqlSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsMSSqlSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsMySqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsMySqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsMySqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsMySqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsMySqlSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsMySqlSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsOracleSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsOracleSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsOracleSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsOracleSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsOracleSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsOracleSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsPgSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsPgSqlSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsPgSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsPgSqlSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsPgSqlSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsPgSqlSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsRamSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsRamSchemaObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsRamSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsRamSchemaObjImpl.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsRamSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsRamSchemaObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgSchemaUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgSchemaUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgSchemaFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgSchemaFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgClientSchemaUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgClientSchemaUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgClientSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgClientSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgRqstSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgRqstSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgRqstSchemaUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgRqstSchemaUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgRqstSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgRqstSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgRqstSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgRqstSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgRqstSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgRqstSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgRspnSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgRspnSchemaBody.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgRspnSchemaUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgRspnSchemaUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgRspnSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgRspnSchemaWireParsers.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgRspnSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgRspnSchemaXsdElementList.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaDefCsXMsgRspnSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaDefCsXMsgRspnSchemaXsdSpec.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSchemaDefMinorVersion.hpp>
#include <cfbammsscf/CFBamMssCFIterateSchemaDefTables.hpp>
#include <cfbammsscf/CFBamMssCFIterateSchemaDefTypes.hpp>
#include <cfbammsscf/CFBamMssCFIterateSchemaDefSchemaRefs.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSchemaDefCTenant.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaRefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaRefName.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaRefRefModelName.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaRefIncludeRoot.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaRefRefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaRefRefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaRefRefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaRefRefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaRefPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaRefPrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaRefPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaRefPrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaRefNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaRefNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindSchemaRefNextId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaRefNextId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSchemaRefSchema.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSchemaRefRefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaRefRefSchema.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSchemaRefPrev.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaRefPrev.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSchemaRefNext.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSchemaRefNext.hpp>
#include <cfbammsscf/CFBamMssCFBindScopeTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindScopeId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceScopeTenant.hpp>
#include <cfbammsscf/CFBamMssCFBindSecAppClusterId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecAppSecAppId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecAppJEEMountName.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecAppCluster.hpp>
#include <cfbammsscf/CFBamMssCFIterateSecAppForm.hpp>
#include <cfbammsscf/CFBamMssCFBindSecDeviceSecUserId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecDeviceDevName.hpp>
#include <cfbammsscf/CFBamMssCFBindSecDevicePubKey.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSecDevicePubKey.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecDeviceSecUser.hpp>
#include <cfbammsscf/CFBamMssCFBindSecFormClusterId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecFormSecFormId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecFormSecAppId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecFormJEEServletMapName.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecFormCluster.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecFormApplication.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGroupClusterId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGroupSecGroupId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGroupName.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGroupIsVisible.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecGroupCluster.hpp>
#include <cfbammsscf/CFBamMssCFIterateSecGroupInclude.hpp>
#include <cfbammsscf/CFBamMssCFIterateSecGroupMember.hpp>
#include <cfbammsscf/CFBamMssCFIterateSecGroupIncByGroup.hpp>
#include <cfbammsscf/CFBamMssCFIterateSecGroupForm.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGroupFormClusterId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGroupFormSecGroupFormId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGroupFormSecGroupId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGroupFormSecAppId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGroupFormSecFormId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecGroupFormCluster.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecGroupFormGroup.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecGroupFormApp.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecGroupFormForm.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGrpIncClusterId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGrpIncSecGrpIncId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGrpIncSecGroupId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGrpIncIncludeGroupId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecGrpIncCluster.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecGrpIncGroup.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecGrpIncSubGroup.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGrpMembClusterId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGrpMembSecGrpMembId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGrpMembSecGroupId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecGrpMembSecUserId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecGrpMembCluster.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecGrpMembGroup.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecGrpMembUser.hpp>
#include <cfbammsscf/CFBamMssCFBindSecSessionSecSessionId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecSessionSecUserId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecSessionSecDevName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSecSessionSecDevName.hpp>
#include <cfbammsscf/CFBamMssCFBindSecSessionStart.hpp>
#include <cfbammsscf/CFBamMssCFBindSecSessionFinish.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSecSessionFinish.hpp>
#include <cfbammsscf/CFBamMssCFBindSecSessionSecProxyId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSecSessionSecProxyId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecSessionSecUser.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecSessionSecProxy.hpp>
#include <cfbammsscf/CFBamMssCFBindSecUserSecUserId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecUserLoginId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecUserEMailAddress.hpp>
#include <cfbammsscf/CFBamMssCFBindSecUserEMailConfirmUuid.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSecUserEMailConfirmUuid.hpp>
#include <cfbammsscf/CFBamMssCFBindSecUserDfltDevUserId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSecUserDfltDevUserId.hpp>
#include <cfbammsscf/CFBamMssCFBindSecUserDfltDevName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSecUserDfltDevName.hpp>
#include <cfbammsscf/CFBamMssCFBindSecUserPasswordHash.hpp>
#include <cfbammsscf/CFBamMssCFBindSecUserPasswordResetUuid.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSecUserPasswordResetUuid.hpp>
#include <cfbammsscf/CFBamMssCFIterateSecUserSecDev.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSecUserDefDev.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSecUserDefDev.hpp>
#include <cfbammsscf/CFBamMssCFIterateSecUserSecSess.hpp>
#include <cfbammsscf/CFBamMssCFIterateSecUserSecProxy.hpp>
#include <cfbammsscf/CFBamMssCFIterateSecUserSecGrpMemb.hpp>
#include <cfbammsscf/CFBamMssCFIterateSecUserTSecGrpMemb.hpp>
#include <cfbammsscf/CFBamMssCFBindServerListFuncRetTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerListFuncRetTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindServerListFuncRetTableId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerListFuncRetTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceServerListFuncRetTable.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerListFuncRetTable.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodTableId.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerMethodDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerMethodDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodName.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerMethodShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerMethodLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerMethodShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerMethodDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodSuffix.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerMethodSuffix.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodIsInstanceMethod.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodIsServerOnly.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodJMethodBody.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodCppMethodBody.hpp>
#include <cfbammsscf/CFBamMssCFBindServerMethodCsMethodBody.hpp>
#include <cfbammsscf/CFBamMssCFReferenceServerMethodDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerMethodDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFReferenceServerMethodForTable.hpp>
#include <cfbammsscf/CFBamMssCFIterateServerMethodParams.hpp>
#include <cfbammsscf/CFBamMssCFBindServerObjFuncRetTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerObjFuncRetTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindServerObjFuncRetTableId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerObjFuncRetTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceServerObjFuncRetTable.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerObjFuncRetTable.hpp>
#include <cfbammsscf/CFBamMssCFBindServerProcDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServerProcDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindServiceClusterId.hpp>
#include <cfbammsscf/CFBamMssCFBindServiceServiceId.hpp>
#include <cfbammsscf/CFBamMssCFBindServiceHostNodeId.hpp>
#include <cfbammsscf/CFBamMssCFBindServiceServiceTypeId.hpp>
#include <cfbammsscf/CFBamMssCFBindServiceHostPort.hpp>
#include <cfbammsscf/CFBamMssCFReferenceServiceCluster.hpp>
#include <cfbammsscf/CFBamMssCFReferenceServiceHost.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServiceHost.hpp>
#include <cfbammsscf/CFBamMssCFReferenceServiceServiceType.hpp>
#include <cfbammsscf/CFBamMssCFBindHasServiceServiceType.hpp>
#include <cfbammsscf/CFBamMssCFBindServiceTypeServiceTypeId.hpp>
#include <cfbammsscf/CFBamMssCFBindServiceTypeDescription.hpp>
#include <cfbammsscf/CFBamMssCFIterateServiceTypeDeployed.hpp>
#include <cfbammsscf/CFBamMssCFBindStringColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceStringColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindStringDefMaxLen.hpp>
#include <cfbammsscf/CFBamMssCFBindStringDefIsPolymorph.hpp>
#include <cfbammsscf/CFBamMssCFBindStringDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasStringDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindStringTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceStringTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindSubProjectTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindSubProjectId.hpp>
#include <cfbammsscf/CFBamMssCFBindSubProjectTopProjectId.hpp>
#include <cfbammsscf/CFBamMssCFBindSubProjectName.hpp>
#include <cfbammsscf/CFBamMssCFBindSubProjectDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasSubProjectDescription.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSubProjectTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSubProjectParentTPrj.hpp>
#include <cfbammsscf/CFBamMssCFIterateSubProjectMajorVer.hpp>
#include <cfbammsscf/CFBamMssCFBindSysClusterSingletonId.hpp>
#include <cfbammsscf/CFBamMssCFBindSysClusterClusterId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceSysClusterCluster.hpp>
#include <cfbammsscf/CFBamMssCFBindTSecGroupTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTSecGroupTSecGroupId.hpp>
#include <cfbammsscf/CFBamMssCFBindTSecGroupName.hpp>
#include <cfbammsscf/CFBamMssCFBindTSecGroupIsVisible.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTSecGroupTenant.hpp>
#include <cfbammsscf/CFBamMssCFIterateTSecGroupInclude.hpp>
#include <cfbammsscf/CFBamMssCFIterateTSecGroupMember.hpp>
#include <cfbammsscf/CFBamMssCFIterateTSecGroupIncByGroup.hpp>
#include <cfbammsscf/CFBamMssCFBindTSecGrpIncTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTSecGrpIncTSecGrpIncId.hpp>
#include <cfbammsscf/CFBamMssCFBindTSecGrpIncTSecGroupId.hpp>
#include <cfbammsscf/CFBamMssCFBindTSecGrpIncIncludeGroupId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTSecGrpIncTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTSecGrpIncGroup.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTSecGrpIncSubGroup.hpp>
#include <cfbammsscf/CFBamMssCFBindTSecGrpMembTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTSecGrpMembTSecGrpMembId.hpp>
#include <cfbammsscf/CFBamMssCFBindTSecGrpMembTSecGroupId.hpp>
#include <cfbammsscf/CFBamMssCFBindTSecGrpMembSecUserId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTSecGrpMembTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTSecGrpMembGroup.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTSecGrpMembUser.hpp>
#include <cfbammsscf/CFBamMssCFBindTZDateColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTZDateColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindTZDateDefDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTZDateDefDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindTZDateTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTZDateTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindTZTimeColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTZTimeColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindTZTimeDefDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTZTimeDefDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindTZTimeTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTZTimeTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindTZTimestampColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTZTimestampColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindTZTimestampDefDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTZTimestampDefDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindTZTimestampTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTZTimestampTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindTableSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableName.hpp>
#include <cfbammsscf/CFBamMssCFBindTableDbName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableDbName.hpp>
#include <cfbammsscf/CFBamMssCFBindTableShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindTableLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindTableShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindTableDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindTablePageData.hpp>
#include <cfbammsscf/CFBamMssCFBindTablePrimaryIndexTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTablePrimaryIndexTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTablePrimaryIndexId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTablePrimaryIndexId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableTableClassCode.hpp>
#include <cfbammsscf/CFBamMssCFBindTableLookupIndexTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableLookupIndexTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableLookupIndexId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableLookupIndexId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableAltIndexTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableAltIndexTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableAltIndexId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableAltIndexId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableQualifyingTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableQualifyingTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableQualifyingTableId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableQualifyingTableId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableIsInstantiable.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHasHistory.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHasAuditColumns.hpp>
#include <cfbammsscf/CFBamMssCFBindTableIsMutable.hpp>
#include <cfbammsscf/CFBamMssCFBindTableIsServerOnly.hpp>
#include <cfbammsscf/CFBamMssCFBindTableLoaderBehaviour.hpp>
#include <cfbammsscf/CFBamMssCFBindTableSecScope.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJEditObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJEditObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJEditObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJEditObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJEditObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJEditObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJEditObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJEditObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJTableInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJTableInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJTableObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJTableObjImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJTableObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJTableObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJTableObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJTableObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJTableObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJTableObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJDb2LUWTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJDb2LUWTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJDb2LUWTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJDb2LUWTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJDb2LUWTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJDb2LUWTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJMSSqlTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJMSSqlTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJMSSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJMSSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJMSSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJMSSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJMySqlTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJMySqlTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJMySqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJMySqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJMySqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJMySqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJOracleTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJOracleTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJOracleTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJOracleTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJOracleTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJOracleTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJPgSqlTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJPgSqlTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJPgSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJPgSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJPgSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJPgSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJRamTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJRamTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJRamTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJRamTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJRamTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJRamTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJSaxLoaderImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJSaxLoaderImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJSaxLoaderStartElement.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJSaxLoaderStartElement.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJSaxLoaderEndElement.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJSaxLoaderEndElement.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJXMsgTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJXMsgTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJXMsgTableFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJXMsgTableFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJXMsgRqstTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJXMsgRqstTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJXMsgRspnTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJXMsgRspnTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJXMsgClientTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJXMsgClientTableImport.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJXMsgRqstTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJXMsgRqstTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJXMsgRspnTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJXMsgRspnTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindTableJXMsgClientTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableJXMsgClientTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppEditObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppEditObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppEditObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppEditObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppEditObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppEditObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppEditObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppEditObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppTableInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppTableInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppTableObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppTableObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppTableObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppTableObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppTableObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppTableObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppTableObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppTableObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppDb2LUWTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppDb2LUWTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppDb2LUWTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppDb2LUWTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppDb2LUWTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppDb2LUWTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppMSSqlTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppMSSqlTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppMSSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppMSSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppMSSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppMSSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppMySqlTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppMySqlTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppMySqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppMySqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppMySqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppMySqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppOracleTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppOracleTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppOracleTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppOracleTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppOracleTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppOracleTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppPgSqlTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppPgSqlTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppPgSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppPgSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppPgSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppPgSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppRamTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppRamTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppRamTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppRamTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppRamTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppRamTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppSaxLoaderInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppSaxLoaderInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppSaxLoaderStartElement.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppSaxLoaderStartElement.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppSaxLoaderEndElement.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppSaxLoaderEndElement.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppXMsgTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppXMsgTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppXMsgTableFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppXMsgTableFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppXMsgRqstTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppXMsgRqstTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppXMsgRspnTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppXMsgRspnTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppXMsgClientTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppXMsgClientTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppXMsgRqstTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppXMsgRqstTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppXMsgRspnTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppXMsgRspnTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCppXMsgClientTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCppXMsgClientTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppEditObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppEditObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppEditObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppEditObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppEditObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppEditObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppEditObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppEditObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppTableInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppTableInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppTableObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppTableObjInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppTableObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppTableObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppTableObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppTableObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppTableObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppTableObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppDb2LUWTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppDb2LUWTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppDb2LUWTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppDb2LUWTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppDb2LUWTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppDb2LUWTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppMSSqlTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppMSSqlTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppMSSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppMSSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppMSSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppMSSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppMySqlTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppMySqlTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppMySqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppMySqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppMySqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppMySqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppOracleTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppOracleTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppOracleTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppOracleTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppOracleTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppOracleTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppPgSqlTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppPgSqlTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppPgSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppPgSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppPgSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppPgSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppRamTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppRamTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppRamTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppRamTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppRamTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppRamTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppSaxLoaderInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppSaxLoaderInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppSaxLoaderStartElement.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppSaxLoaderStartElement.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppSaxLoaderEndElement.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppSaxLoaderEndElement.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppXMsgTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppXMsgTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppXMsgTableFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppXMsgTableFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppXMsgRqstTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppXMsgRqstTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppXMsgRspnTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppXMsgRspnTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppXMsgClientTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppXMsgClientTableInclude.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppXMsgRqstTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppXMsgRqstTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppXMsgRspnTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppXMsgRspnTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindTableHppXMsgClientTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableHppXMsgClientTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsEditObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsEditObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsEditObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsEditObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsEditObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsEditObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsEditObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsEditObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsTableInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsTableInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsTableObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsTableObjUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsTableObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsTableObjMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsTableObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsTableObjInterface.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsTableObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsTableObjImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsDb2LUWTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsDb2LUWTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsDb2LUWTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsDb2LUWTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsDb2LUWTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsDb2LUWTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsMSSqlTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsMSSqlTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsMSSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsMSSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsMSSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsMSSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsMySqlTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsMySqlTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsMySqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsMySqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsMySqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsMySqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsOracleTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsOracleTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsOracleTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsOracleTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsOracleTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsOracleTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsPgSqlTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsPgSqlTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsPgSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsPgSqlTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsPgSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsPgSqlTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsRamTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsRamTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsRamTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsRamTableMembers.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsRamTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsRamTableImplementation.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsSaxLoaderUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsSaxLoaderUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsSaxLoaderStartElement.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsSaxLoaderStartElement.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsSaxLoaderEndElement.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsSaxLoaderEndElement.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsXMsgTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsXMsgTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsXMsgTableFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsXMsgTableFormatters.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsXMsgRqstTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsXMsgRqstTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsXMsgRspnTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsXMsgRspnTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsXMsgClientTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsXMsgClientTableUsing.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsXMsgRqstTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsXMsgRqstTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsXMsgRspnTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsXMsgRspnTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindTableCsXMsgClientTableBody.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableCsXMsgClientTableBody.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTableSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTableDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFIterateTableRelation.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTableLookupIndex.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableLookupIndex.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTableAltIndex.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableAltIndex.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTableQualTable.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableQualTable.hpp>
#include <cfbammsscf/CFBamMssCFIterateTableIndex.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTablePrimaryIndex.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTablePrimaryIndex.hpp>
#include <cfbammsscf/CFBamMssCFIterateTableColumns.hpp>
#include <cfbammsscf/CFBamMssCFIterateTableReverseRelations.hpp>
#include <cfbammsscf/CFBamMssCFIterateTableChains.hpp>
#include <cfbammsscf/CFBamMssCFIterateTableDelDep.hpp>
#include <cfbammsscf/CFBamMssCFIterateTableClearDep.hpp>
#include <cfbammsscf/CFBamMssCFIterateTableDispId16Gen.hpp>
#include <cfbammsscf/CFBamMssCFIterateTableDispId32Gen.hpp>
#include <cfbammsscf/CFBamMssCFIterateTableDispId64Gen.hpp>
#include <cfbammsscf/CFBamMssCFIterateTableServerMethods.hpp>
#include <cfbammsscf/CFBamMssCFBindTableColTableId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableColDbName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableColDbName.hpp>
#include <cfbammsscf/CFBamMssCFBindTableColDataTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableColDataTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableColDataId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableColDataId.hpp>
#include <cfbammsscf/CFBamMssCFBindTableColXmlElementName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTableColXmlElementName.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTableColTable.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTableColDataType.hpp>
#include <cfbammsscf/CFBamMssCFBindTenantClusterId.hpp>
#include <cfbammsscf/CFBamMssCFBindTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTenantTenantName.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTenantCluster.hpp>
#include <cfbammsscf/CFBamMssCFIterateTenantTSecGroup.hpp>
#include <cfbammsscf/CFBamMssCFIterateTenantTld.hpp>
#include <cfbammsscf/CFBamMssCFIterateTenantSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindTextColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTextColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindTextDefMaxLen.hpp>
#include <cfbammsscf/CFBamMssCFBindTextDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTextDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindTextDefXmlElementName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTextDefXmlElementName.hpp>
#include <cfbammsscf/CFBamMssCFBindTextTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTextTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindTimeColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTimeColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindTimeDefDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTimeDefDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindTimeTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTimeTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindTimestampColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTimestampColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindTimestampDefDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTimestampDefDummy.hpp>
#include <cfbammsscf/CFBamMssCFBindTimestampTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTimestampTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindTldTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTldId.hpp>
#include <cfbammsscf/CFBamMssCFBindTldName.hpp>
#include <cfbammsscf/CFBamMssCFBindTldDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTldDescription.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTldTenant.hpp>
#include <cfbammsscf/CFBamMssCFIterateTldTopDomain.hpp>
#include <cfbammsscf/CFBamMssCFBindTokenColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTokenColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindTokenDefMaxLen.hpp>
#include <cfbammsscf/CFBamMssCFBindTokenDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTokenDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindTokenTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTokenTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindTopDomainTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTopDomainId.hpp>
#include <cfbammsscf/CFBamMssCFBindTopDomainTldId.hpp>
#include <cfbammsscf/CFBamMssCFBindTopDomainName.hpp>
#include <cfbammsscf/CFBamMssCFBindTopDomainDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTopDomainDescription.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTopDomainTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTopDomainParentTld.hpp>
#include <cfbammsscf/CFBamMssCFIterateTopDomainLicense.hpp>
#include <cfbammsscf/CFBamMssCFIterateTopDomainTopProject.hpp>
#include <cfbammsscf/CFBamMssCFBindTopProjectTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindTopProjectId.hpp>
#include <cfbammsscf/CFBamMssCFBindTopProjectTopDomainId.hpp>
#include <cfbammsscf/CFBamMssCFBindTopProjectName.hpp>
#include <cfbammsscf/CFBamMssCFBindTopProjectDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasTopProjectDescription.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTopProjectTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceTopProjectParentSDom.hpp>
#include <cfbammsscf/CFBamMssCFIterateTopProjectSubProject.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt16ColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceUInt16ColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt16DefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasUInt16DefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt16DefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasUInt16DefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt16DefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasUInt16DefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt16TypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceUInt16TypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt32ColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceUInt32ColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt32DefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasUInt32DefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt32DefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasUInt32DefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt32DefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasUInt32DefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt32TypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceUInt32TypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt64ColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceUInt64ColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt64DefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasUInt64DefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt64DefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasUInt64DefMinValue.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt64DefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasUInt64DefMaxValue.hpp>
#include <cfbammsscf/CFBamMssCFBindUInt64TypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceUInt64TypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindURLProtocolURLProtocolId.hpp>
#include <cfbammsscf/CFBamMssCFBindURLProtocolName.hpp>
#include <cfbammsscf/CFBamMssCFBindURLProtocolDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindURLProtocolIsSecure.hpp>
#include <cfbammsscf/CFBamMssCFBindUuidColTableId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceUuidColTable.hpp>
#include <cfbammsscf/CFBamMssCFBindUuidDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasUuidDefInitValue.hpp>
#include <cfbammsscf/CFBamMssCFBindUuidGenSlice.hpp>
#include <cfbammsscf/CFBamMssCFBindUuidGenBlockSize.hpp>
#include <cfbammsscf/CFBamMssCFBindUuidTypeSchemaDefId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceUuidTypeSchemaDef.hpp>
#include <cfbammsscf/CFBamMssCFBindValueTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindValueScopeId.hpp>
#include <cfbammsscf/CFBamMssCFBindValueId.hpp>
#include <cfbammsscf/CFBamMssCFBindValueDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValueDefSchemaTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindValueDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValueDefSchemaId.hpp>
#include <cfbammsscf/CFBamMssCFBindValueName.hpp>
#include <cfbammsscf/CFBamMssCFBindValueShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValueShortName.hpp>
#include <cfbammsscf/CFBamMssCFBindValueLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValueLabel.hpp>
#include <cfbammsscf/CFBamMssCFBindValueShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValueShortDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindValueDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValueDescription.hpp>
#include <cfbammsscf/CFBamMssCFBindValueDefaultXmlValue.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValueDefaultXmlValue.hpp>
#include <cfbammsscf/CFBamMssCFBindValueIsNullable.hpp>
#include <cfbammsscf/CFBamMssCFBindValueGenerateId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValueGenerateId.hpp>
#include <cfbammsscf/CFBamMssCFBindValueImplementsPolymorph.hpp>
#include <cfbammsscf/CFBamMssCFBindValuePrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValuePrevTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindValuePrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValuePrevId.hpp>
#include <cfbammsscf/CFBamMssCFBindValueNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValueNextTenantId.hpp>
#include <cfbammsscf/CFBamMssCFBindValueNextId.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValueNextId.hpp>
#include <cfbammsscf/CFBamMssCFReferenceValueTenant.hpp>
#include <cfbammsscf/CFBamMssCFReferenceValueScope.hpp>
#include <cfbammsscf/CFBamMssCFReferenceValueDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValueDefSchema.hpp>
#include <cfbammsscf/CFBamMssCFIterateValueRefTableCol.hpp>
#include <cfbammsscf/CFBamMssCFIterateValueRefIndexCol.hpp>
#include <cfbammsscf/CFBamMssCFReferenceValuePrev.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValuePrev.hpp>
#include <cfbammsscf/CFBamMssCFReferenceValueNext.hpp>
#include <cfbammsscf/CFBamMssCFBindHasValueNext.hpp>
namespace cfbam {

	const std::string CFBamMssCFEngine::CLASS_NAME( "CFBamMssCFEngine" );
	const std::string CFBamMssCFEngine::ITEMNAME_TOP( "top" );

	CFBamMssCFEngine::CFBamMssCFEngine()
	: cfcore::MssCFEngine()
	{
		cFBamSchema = NULL;
	}

	CFBamMssCFEngine::~CFBamMssCFEngine() {
	}

	cfbam::ICFBamSchemaObj* CFBamMssCFEngine::getCFBamSchema() {
		return( cFBamSchema );
	}

	void CFBamMssCFEngine::setCFBamSchema( cfbam::ICFBamSchemaObj* value ) {
		cFBamSchema = value;
	}

	void CFBamMssCFEngine::init( const std::string& generatingBuild,
		cfcore::ICFGenKbSchemaObj* argCFGenKbSchema,
		cfcore::ICFGenKbTenantObj* argTenant,
		cfbam::ICFBamSchemaObj* argCFBamSchema,
		const std::string& strRootGenDir )
	{
		setCFBamSchema( argCFBamSchema );
		init( generatingBuild, argCFGenKbSchema, argTenant, strRootGenDir );
	}

	void CFBamMssCFEngine::init( const std::string& generatingBuild,
		cfcore::ICFGenKbSchemaObj* argCFGenKbSchema,
		cfcore::ICFGenKbTenantObj* argTenant,
		const std::string& strRootGenDir )
	{
		cfcore::MssCFEngine::init( generatingBuild, argCFGenKbSchema, argTenant, strRootGenDir );
		setGenContext( getGenContextFactory()->newGenContext( generatingBuild,
			this,
			strRootGenDir,
			"any",
			"Object",
			"Object",
			getTargetRuleName() ) );
	}

	cfcore::ICFGenKbGenFileObj* CFBamMssCFEngine::defineFile(
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
			cfcore::MssCFEngine::defineFile( definedNear,
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

	cfcore::ICFGenKbGenRuleObj* CFBamMssCFEngine::defineRule(
		const std::string& definedNear,
		const std::string& toolsetName,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName,
		const std::string& expansionBody )
	{
		return(
			cfcore::MssCFEngine::defineRule( definedNear,
				toolsetName,
				fixGenDefName( scopeDefClassName ),
				fixGenDefName( genDefClassName ),
				itemName,
				expansionBody ) );
		}

	cfcore::ICFGenKbGenTruncObj* CFBamMssCFEngine::defineTrunc(
		const std::string& definedNear,
		const std::string& toolsetName,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName,
		const std::string& expansionBody,
		int truncAt )
	{
		return(
			cfcore::MssCFEngine::defineTrunc( definedNear,
				toolsetName,
				fixGenDefName( scopeDefClassName ),
				fixGenDefName( genDefClassName ),
				itemName,
				expansionBody,
				truncAt ) );
	}

	void CFBamMssCFEngine::bootstrapDefClasses() {
		cfcore::ICFGenKbDefClassObj* defClassObject = bootstrapDefClass( "Object", NULL );
		cfcore::ICFGenKbDefClassObj* defClassChain = bootstrapDefClass( "Chain", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassCluster = bootstrapDefClass( "Cluster", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassEnumTag = bootstrapDefClass( "EnumTag", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassHostNode = bootstrapDefClass( "HostNode", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassISOCcy = bootstrapDefClass( "ISOCcy", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassISOCtry = bootstrapDefClass( "ISOCtry", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassISOCtryCcy = bootstrapDefClass( "ISOCtryCcy", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassISOCtryLang = bootstrapDefClass( "ISOCtryLang", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassISOLang = bootstrapDefClass( "ISOLang", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassISOTZone = bootstrapDefClass( "ISOTZone", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassIndexCol = bootstrapDefClass( "IndexCol", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassLicense = bootstrapDefClass( "License", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassMajorVersion = bootstrapDefClass( "MajorVersion", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassMimeType = bootstrapDefClass( "MimeType", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassMinorVersion = bootstrapDefClass( "MinorVersion", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassParam = bootstrapDefClass( "Param", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassRelationCol = bootstrapDefClass( "RelationCol", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassScope = bootstrapDefClass( "Scope", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassSchemaDef = bootstrapDefClass( "SchemaDef", defClassScope );
		cfcore::ICFGenKbDefClassObj* defClassSchemaRef = bootstrapDefClass( "SchemaRef", defClassScope );
		cfcore::ICFGenKbDefClassObj* defClassServerMethod = bootstrapDefClass( "ServerMethod", defClassScope );
		cfcore::ICFGenKbDefClassObj* defClassServerObjFunc = bootstrapDefClass( "ServerObjFunc", defClassServerMethod );
		cfcore::ICFGenKbDefClassObj* defClassServerProc = bootstrapDefClass( "ServerProc", defClassServerMethod );
		cfcore::ICFGenKbDefClassObj* defClassServerListFunc = bootstrapDefClass( "ServerListFunc", defClassServerMethod );
		cfcore::ICFGenKbDefClassObj* defClassTable = bootstrapDefClass( "Table", defClassScope );
		cfcore::ICFGenKbDefClassObj* defClassClearDep = bootstrapDefClass( "ClearDep", defClassScope );
		cfcore::ICFGenKbDefClassObj* defClassClearSubDep1 = bootstrapDefClass( "ClearSubDep1", defClassClearDep );
		cfcore::ICFGenKbDefClassObj* defClassClearSubDep2 = bootstrapDefClass( "ClearSubDep2", defClassClearDep );
		cfcore::ICFGenKbDefClassObj* defClassClearSubDep3 = bootstrapDefClass( "ClearSubDep3", defClassClearDep );
		cfcore::ICFGenKbDefClassObj* defClassClearTopDep = bootstrapDefClass( "ClearTopDep", defClassClearDep );
		cfcore::ICFGenKbDefClassObj* defClassDelDep = bootstrapDefClass( "DelDep", defClassScope );
		cfcore::ICFGenKbDefClassObj* defClassDelSubDep1 = bootstrapDefClass( "DelSubDep1", defClassDelDep );
		cfcore::ICFGenKbDefClassObj* defClassDelSubDep2 = bootstrapDefClass( "DelSubDep2", defClassDelDep );
		cfcore::ICFGenKbDefClassObj* defClassDelSubDep3 = bootstrapDefClass( "DelSubDep3", defClassDelDep );
		cfcore::ICFGenKbDefClassObj* defClassDelTopDep = bootstrapDefClass( "DelTopDep", defClassDelDep );
		cfcore::ICFGenKbDefClassObj* defClassIndex = bootstrapDefClass( "Index", defClassScope );
		cfcore::ICFGenKbDefClassObj* defClassPopDep = bootstrapDefClass( "PopDep", defClassScope );
		cfcore::ICFGenKbDefClassObj* defClassPopSubDep1 = bootstrapDefClass( "PopSubDep1", defClassPopDep );
		cfcore::ICFGenKbDefClassObj* defClassPopSubDep2 = bootstrapDefClass( "PopSubDep2", defClassPopDep );
		cfcore::ICFGenKbDefClassObj* defClassPopSubDep3 = bootstrapDefClass( "PopSubDep3", defClassPopDep );
		cfcore::ICFGenKbDefClassObj* defClassPopTopDep = bootstrapDefClass( "PopTopDep", defClassPopDep );
		cfcore::ICFGenKbDefClassObj* defClassRelation = bootstrapDefClass( "Relation", defClassScope );
		cfcore::ICFGenKbDefClassObj* defClassSecApp = bootstrapDefClass( "SecApp", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassSecDevice = bootstrapDefClass( "SecDevice", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassSecForm = bootstrapDefClass( "SecForm", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassSecGroup = bootstrapDefClass( "SecGroup", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassSecGroupForm = bootstrapDefClass( "SecGroupForm", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassSecGrpInc = bootstrapDefClass( "SecGrpInc", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassSecGrpMemb = bootstrapDefClass( "SecGrpMemb", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassSecSession = bootstrapDefClass( "SecSession", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassSecUser = bootstrapDefClass( "SecUser", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassService = bootstrapDefClass( "Service", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassServiceType = bootstrapDefClass( "ServiceType", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassSubProject = bootstrapDefClass( "SubProject", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassSysCluster = bootstrapDefClass( "SysCluster", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassTSecGroup = bootstrapDefClass( "TSecGroup", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassTSecGrpInc = bootstrapDefClass( "TSecGrpInc", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassTSecGrpMemb = bootstrapDefClass( "TSecGrpMemb", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassTenant = bootstrapDefClass( "Tenant", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassTld = bootstrapDefClass( "Tld", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassTopDomain = bootstrapDefClass( "TopDomain", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassTopProject = bootstrapDefClass( "TopProject", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassURLProtocol = bootstrapDefClass( "URLProtocol", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassValue = bootstrapDefClass( "Value", defClassObject );
		cfcore::ICFGenKbDefClassObj* defClassAtom = bootstrapDefClass( "Atom", defClassValue );
		cfcore::ICFGenKbDefClassObj* defClassBlobDef = bootstrapDefClass( "BlobDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassBlobType = bootstrapDefClass( "BlobType", defClassBlobDef );
		cfcore::ICFGenKbDefClassObj* defClassBlobCol = bootstrapDefClass( "BlobCol", defClassBlobDef );
		cfcore::ICFGenKbDefClassObj* defClassBoolDef = bootstrapDefClass( "BoolDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassBoolType = bootstrapDefClass( "BoolType", defClassBoolDef );
		cfcore::ICFGenKbDefClassObj* defClassBoolCol = bootstrapDefClass( "BoolCol", defClassBoolDef );
		cfcore::ICFGenKbDefClassObj* defClassDateDef = bootstrapDefClass( "DateDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassDateType = bootstrapDefClass( "DateType", defClassDateDef );
		cfcore::ICFGenKbDefClassObj* defClassDateCol = bootstrapDefClass( "DateCol", defClassDateDef );
		cfcore::ICFGenKbDefClassObj* defClassDoubleDef = bootstrapDefClass( "DoubleDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassDoubleType = bootstrapDefClass( "DoubleType", defClassDoubleDef );
		cfcore::ICFGenKbDefClassObj* defClassDoubleCol = bootstrapDefClass( "DoubleCol", defClassDoubleDef );
		cfcore::ICFGenKbDefClassObj* defClassFloatDef = bootstrapDefClass( "FloatDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassFloatType = bootstrapDefClass( "FloatType", defClassFloatDef );
		cfcore::ICFGenKbDefClassObj* defClassFloatCol = bootstrapDefClass( "FloatCol", defClassFloatDef );
		cfcore::ICFGenKbDefClassObj* defClassInt16Def = bootstrapDefClass( "Int16Def", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassInt16Type = bootstrapDefClass( "Int16Type", defClassInt16Def );
		cfcore::ICFGenKbDefClassObj* defClassId16Gen = bootstrapDefClass( "Id16Gen", defClassInt16Type );
		cfcore::ICFGenKbDefClassObj* defClassEnumDef = bootstrapDefClass( "EnumDef", defClassInt16Def );
		cfcore::ICFGenKbDefClassObj* defClassEnumType = bootstrapDefClass( "EnumType", defClassEnumDef );
		cfcore::ICFGenKbDefClassObj* defClassInt16Col = bootstrapDefClass( "Int16Col", defClassInt16Def );
		cfcore::ICFGenKbDefClassObj* defClassInt32Def = bootstrapDefClass( "Int32Def", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassInt32Type = bootstrapDefClass( "Int32Type", defClassInt32Def );
		cfcore::ICFGenKbDefClassObj* defClassId32Gen = bootstrapDefClass( "Id32Gen", defClassInt32Type );
		cfcore::ICFGenKbDefClassObj* defClassInt32Col = bootstrapDefClass( "Int32Col", defClassInt32Def );
		cfcore::ICFGenKbDefClassObj* defClassInt64Def = bootstrapDefClass( "Int64Def", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassInt64Type = bootstrapDefClass( "Int64Type", defClassInt64Def );
		cfcore::ICFGenKbDefClassObj* defClassId64Gen = bootstrapDefClass( "Id64Gen", defClassInt64Type );
		cfcore::ICFGenKbDefClassObj* defClassInt64Col = bootstrapDefClass( "Int64Col", defClassInt64Def );
		cfcore::ICFGenKbDefClassObj* defClassNmTokenDef = bootstrapDefClass( "NmTokenDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassNmTokenType = bootstrapDefClass( "NmTokenType", defClassNmTokenDef );
		cfcore::ICFGenKbDefClassObj* defClassNmTokenCol = bootstrapDefClass( "NmTokenCol", defClassNmTokenDef );
		cfcore::ICFGenKbDefClassObj* defClassNmTokensDef = bootstrapDefClass( "NmTokensDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassNmTokensType = bootstrapDefClass( "NmTokensType", defClassNmTokensDef );
		cfcore::ICFGenKbDefClassObj* defClassNmTokensCol = bootstrapDefClass( "NmTokensCol", defClassNmTokensDef );
		cfcore::ICFGenKbDefClassObj* defClassNumberDef = bootstrapDefClass( "NumberDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassNumberType = bootstrapDefClass( "NumberType", defClassNumberDef );
		cfcore::ICFGenKbDefClassObj* defClassNumberCol = bootstrapDefClass( "NumberCol", defClassNumberDef );
		cfcore::ICFGenKbDefClassObj* defClassStringDef = bootstrapDefClass( "StringDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassStringType = bootstrapDefClass( "StringType", defClassStringDef );
		cfcore::ICFGenKbDefClassObj* defClassStringCol = bootstrapDefClass( "StringCol", defClassStringDef );
		cfcore::ICFGenKbDefClassObj* defClassTZDateDef = bootstrapDefClass( "TZDateDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassTZDateType = bootstrapDefClass( "TZDateType", defClassTZDateDef );
		cfcore::ICFGenKbDefClassObj* defClassTZDateCol = bootstrapDefClass( "TZDateCol", defClassTZDateDef );
		cfcore::ICFGenKbDefClassObj* defClassTZTimeDef = bootstrapDefClass( "TZTimeDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassTZTimeType = bootstrapDefClass( "TZTimeType", defClassTZTimeDef );
		cfcore::ICFGenKbDefClassObj* defClassTZTimeCol = bootstrapDefClass( "TZTimeCol", defClassTZTimeDef );
		cfcore::ICFGenKbDefClassObj* defClassTZTimestampDef = bootstrapDefClass( "TZTimestampDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassTZTimestampType = bootstrapDefClass( "TZTimestampType", defClassTZTimestampDef );
		cfcore::ICFGenKbDefClassObj* defClassTZTimestampCol = bootstrapDefClass( "TZTimestampCol", defClassTZTimestampDef );
		cfcore::ICFGenKbDefClassObj* defClassTextDef = bootstrapDefClass( "TextDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassTextType = bootstrapDefClass( "TextType", defClassTextDef );
		cfcore::ICFGenKbDefClassObj* defClassTextCol = bootstrapDefClass( "TextCol", defClassTextDef );
		cfcore::ICFGenKbDefClassObj* defClassTimeDef = bootstrapDefClass( "TimeDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassTimeType = bootstrapDefClass( "TimeType", defClassTimeDef );
		cfcore::ICFGenKbDefClassObj* defClassTimeCol = bootstrapDefClass( "TimeCol", defClassTimeDef );
		cfcore::ICFGenKbDefClassObj* defClassTimestampDef = bootstrapDefClass( "TimestampDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassTimestampType = bootstrapDefClass( "TimestampType", defClassTimestampDef );
		cfcore::ICFGenKbDefClassObj* defClassTimestampCol = bootstrapDefClass( "TimestampCol", defClassTimestampDef );
		cfcore::ICFGenKbDefClassObj* defClassTokenDef = bootstrapDefClass( "TokenDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassTokenType = bootstrapDefClass( "TokenType", defClassTokenDef );
		cfcore::ICFGenKbDefClassObj* defClassTokenCol = bootstrapDefClass( "TokenCol", defClassTokenDef );
		cfcore::ICFGenKbDefClassObj* defClassUInt16Def = bootstrapDefClass( "UInt16Def", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassUInt16Type = bootstrapDefClass( "UInt16Type", defClassUInt16Def );
		cfcore::ICFGenKbDefClassObj* defClassUInt16Col = bootstrapDefClass( "UInt16Col", defClassUInt16Def );
		cfcore::ICFGenKbDefClassObj* defClassUInt32Def = bootstrapDefClass( "UInt32Def", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassUInt32Type = bootstrapDefClass( "UInt32Type", defClassUInt32Def );
		cfcore::ICFGenKbDefClassObj* defClassUInt32Col = bootstrapDefClass( "UInt32Col", defClassUInt32Def );
		cfcore::ICFGenKbDefClassObj* defClassUInt64Def = bootstrapDefClass( "UInt64Def", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassUInt64Type = bootstrapDefClass( "UInt64Type", defClassUInt64Def );
		cfcore::ICFGenKbDefClassObj* defClassUInt64Col = bootstrapDefClass( "UInt64Col", defClassUInt64Def );
		cfcore::ICFGenKbDefClassObj* defClassUuidDef = bootstrapDefClass( "UuidDef", defClassAtom );
		cfcore::ICFGenKbDefClassObj* defClassUuidType = bootstrapDefClass( "UuidType", defClassUuidDef );
		cfcore::ICFGenKbDefClassObj* defClassUuidGen = bootstrapDefClass( "UuidGen", defClassUuidType );
		cfcore::ICFGenKbDefClassObj* defClassUuidCol = bootstrapDefClass( "UuidCol", defClassUuidDef );
		cfcore::ICFGenKbDefClassObj* defClassTableCol = bootstrapDefClass( "TableCol", defClassValue );
	}

	void CFBamMssCFEngine::bootstrapBindings() {
		static const std::string S_Bind( "Bind" );

		cfcore::ICFGenKbGenBindObj* bind = NULL;
		cfcore::ICFGenKbGenBindEditObj* editBind = NULL;
		cfcore::ICFGenKbRuleCartObj* ruleCart = getInternalRuleCart();
		cfcore::ICFGenKbRuleTypeObj* ruleTypeBind = getRuleTypeTableObj()->readRuleTypeByNameIdx( S_Bind );

		bind = new CFBamMssCFBindAtomDbName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasAtomDbName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindBlobColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindBlobDefMaxLen( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindBlobDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasBlobDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindBlobTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindBoolColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindBoolDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasBoolDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindBoolDefFalseString( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasBoolDefFalseString( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindBoolDefTrueString( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasBoolDefTrueString( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindBoolDefNullString( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasBoolDefNullString( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindBoolTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasChainDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasChainDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasChainShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasChainLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasChainShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasChainDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainSuffix( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasChainSuffix( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainPrevRelationTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainPrevRelationId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainNextRelationTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindChainNextRelationId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasChainDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearDepRelationId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearDepDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasClearDepDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearDepDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasClearDepDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasClearDepDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearSubDep1ClearTopDepTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearSubDep1ClearTopDepId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearSubDep1Name( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearSubDep2ClearSubDep1TenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearSubDep2ClearSubDep1Id( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearSubDep2Name( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearSubDep3ClearSubDep2TenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearSubDep3ClearSubDep2Id( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearSubDep3Name( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearTopDepTableTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearTopDepTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearTopDepName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearTopDepPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasClearTopDepPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearTopDepPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasClearTopDepPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearTopDepNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasClearTopDepNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClearTopDepNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasClearTopDepNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasClearTopDepPrev( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasClearTopDepNext( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClusterId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClusterFullDomName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindClusterDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDateColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDateDefDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDateDefDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDateTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelDepDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDelDepDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelDepDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDelDepDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelDepRelationTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelDepRelationId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDelDepDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelSubDep1DelTopDepTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelSubDep1DelTopDepId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelSubDep1Name( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelSubDep2DelSubDep1TenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelSubDep2DelSubDep1Id( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelSubDep2Name( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelSubDep3DelSubDep2TenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelSubDep3DelSubDep2Id( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelSubDep3Name( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelTopDepName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelTopDepTableTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelTopDepTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelTopDepPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDelTopDepPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelTopDepPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDelTopDepPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelTopDepNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDelTopDepNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDelTopDepNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDelTopDepNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDelTopDepPrev( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDelTopDepNext( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDoubleColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDoubleDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDoubleDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDoubleDefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDoubleDefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDoubleDefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasDoubleDefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindDoubleTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindEnumTagTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindEnumTagId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindEnumTagDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasEnumTagDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindEnumTagDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasEnumTagDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindEnumTagEnumId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindEnumTagEnumCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasEnumTagEnumCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindEnumTagName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindEnumTagPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasEnumTagPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindEnumTagPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasEnumTagPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindEnumTagNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasEnumTagNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindEnumTagNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasEnumTagNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasEnumTagDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasEnumTagPrev( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasEnumTagNext( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindEnumTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindFloatColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindFloatDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasFloatDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindFloatDefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasFloatDefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindFloatDefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasFloatDefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindFloatTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHostNodeClusterId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHostNodeHostNodeId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHostNodeDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHostNodeHostName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOCcyISOCcyId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOCcyISOCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOCcyName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOCcyUnitSymbol( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasISOCcyUnitSymbol( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOCcyPrecis( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOCtryISOCtryId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOCtryISOCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOCtryName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOCtryCcyISOCtryId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOCtryCcyISOCcyId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOCtryLangISOCtryId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOCtryLangISOLangId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOLangISOLangId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOLangISO6392Code( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOLangISO6391Code( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasISOLangISO6391Code( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOLangEnglishName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOTZoneISOTZoneId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOTZoneIso8601( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOTZoneTZName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOTZoneTZHourOffset( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOTZoneTZMinOffset( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOTZoneDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindISOTZoneVisible( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindId16GenDispenserTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasId16GenDispenserTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindId16GenDispenserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasId16GenDispenserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindId16GenSlice( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindId16GenBlockSize( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasId16GenDispenser( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindId32GenDispenserTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasId32GenDispenserTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindId32GenDispenserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasId32GenDispenserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindId32GenSlice( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindId32GenBlockSize( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasId32GenDispenser( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindId64GenDispenserTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasId64GenDispenserTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindId64GenDispenserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasId64GenDispenserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindId64GenSlice( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindId64GenBlockSize( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasId64GenDispenser( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexDbName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexDbName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexSuffix( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexSuffix( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexIsUnique( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexIsDbMapped( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColIndexId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColColumnId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColIsAscending( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindIndexColNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColPrev( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasIndexColNext( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt16ColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt16DefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasInt16DefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt16DefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasInt16DefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt16DefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasInt16DefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt16TypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt32ColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt32DefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasInt32DefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt32DefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasInt32DefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt32DefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasInt32DefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt32TypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt64ColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt64DefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasInt64DefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt64DefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasInt64DefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt64DefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasInt64DefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindInt64TypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindLicenseTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindLicenseId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindLicenseTopDomainId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindLicenseName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindLicenseDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasLicenseDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindLicenseEmbeddedText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasLicenseEmbeddedText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindLicenseFullText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasLicenseFullText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMajorVersionTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMajorVersionId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMajorVersionSubProjectId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMajorVersionName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMajorVersionDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasMajorVersionDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMimeTypeMimeTypeId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMimeTypeName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMimeTypeFileTypes( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasMimeTypeFileTypes( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMinorVersionTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMinorVersionId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMinorVersionMajorVersionId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMinorVersionName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindMinorVersionDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasMinorVersionDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNmTokenColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNmTokenDefMaxLen( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNmTokenDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasNmTokenDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNmTokenTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNmTokensColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNmTokensDefMaxLen( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNmTokensDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasNmTokensDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNmTokensTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNumberColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNumberDefDigits( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNumberDefPrecis( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNumberDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasNumberDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNumberDefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasNumberDefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNumberDefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasNumberDefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindNumberTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamServerMethodId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamIsNullable( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamTypeTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamTypeTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamTypeId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamTypeId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindParamNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamPrev( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasParamNext( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopDepDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasPopDepDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopDepDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasPopDepDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopDepRelationTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopDepRelationId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasPopDepDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopSubDep1PopTopDepTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopSubDep1PopTopDepId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopSubDep1Name( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopSubDep2PopSubDep1TenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopSubDep2PopSubDep1Id( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopSubDep2Name( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopSubDep3PopSubDep2TenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopSubDep3PopSubDep2Id( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopSubDep3Name( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopTopDepContRelationTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopTopDepContRelationId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindPopTopDepName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationRelationType( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationDbName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationDbName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationSuffix( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationSuffix( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationFromIndexId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationToTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationToIndexId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationIsRequired( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationIsXsdContainer( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationIsLateResolver( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationAllowAddendum( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationNarrowedTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationNarrowedTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationNarrowedId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationNarrowedId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationNarrowed( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColRelationId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColFromColId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColToColId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindRelationColNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColPrev( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasRelationColNext( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefMinorVersionId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefDbName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefDbName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCopyrightPeriod( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCopyrightHolder( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefAuthorEMail( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefProjectURL( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefPublishURI( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCommonLicenseCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCommonLicenseName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCommonLicenseText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefClientXFaceLicenseCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefClientXFaceLicenseCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefClientXFaceLicenseName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefClientXFaceLicenseName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefClientXFaceLicenseText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefClientXFaceLicenseText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefClientImplLicenseCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefClientImplLicenseCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefClientImplLicenseName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefClientImplLicenseName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefClientImplLicenseText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefClientImplLicenseText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefServerXFaceLicenseCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefServerXFaceLicenseCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefServerXFaceLicenseName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefServerXFaceLicenseName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefServerXFaceLicenseText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefServerXFaceLicenseText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefServerImplLicenseCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefServerImplLicenseCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefServerImplLicenseName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefServerImplLicenseName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefServerImplLicenseText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefServerImplLicenseText( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJSchemaObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJSchemaObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJSchemaObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJSchemaObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJDb2LUWSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJDb2LUWSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJDb2LUWSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJDb2LUWSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJDb2LUWSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJDb2LUWSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJMSSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJMSSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJMSSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJMSSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJMSSqlSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJMSSqlSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJMySqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJMySqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJMySqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJMySqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJMySqlSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJMySqlSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJOracleSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJOracleSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJOracleSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJOracleSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJOracleSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJOracleSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJPgSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJPgSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJPgSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJPgSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJPgSqlSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJPgSqlSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJRamSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJRamSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJRamSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJRamSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJRamSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJRamSchemaObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgSchemaImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgSchemaImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgSchemaFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgSchemaFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgClientSchemaImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgClientSchemaImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgClientSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgClientSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgRqstSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgRqstSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgRqstSchemaImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgRqstSchemaImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgRqstSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgRqstSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgRqstSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgRqstSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgRqstSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgRqstSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgRspnSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgRspnSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgRspnSchemaImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgRspnSchemaImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgRspnSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgRspnSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgRspnSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgRspnSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefJXMsgRspnSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefJXMsgRspnSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppSchemaObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppSchemaObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppSchemaObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppSchemaObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppDb2LUWSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppDb2LUWSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppDb2LUWSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppDb2LUWSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppDb2LUWSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppDb2LUWSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppMSSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppMSSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppMSSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppMSSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppMSSqlSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppMSSqlSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppMySqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppMySqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppMySqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppMySqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppMySqlSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppMySqlSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppOracleSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppOracleSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppOracleSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppOracleSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppOracleSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppOracleSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppPgSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppPgSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppPgSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppPgSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppPgSqlSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppPgSqlSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppRamSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppRamSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppRamSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppRamSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppRamSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppRamSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgSchemaFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgSchemaFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgClientSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgClientSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgClientSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgClientSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgRqstSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgRqstSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgRqstSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgRqstSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgRqstSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgRqstSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgRqstSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgRqstSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgRqstSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgRqstSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgRspnSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgRspnSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgRspnSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgRspnSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgRspnSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgRspnSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgRspnSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgRspnSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCppXMsgRspnSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCppXMsgRspnSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppSchemaObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppSchemaObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppSchemaObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppSchemaObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppDb2LUWSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppDb2LUWSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppDb2LUWSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppDb2LUWSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppDb2LUWSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppDb2LUWSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppMSSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppMSSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppMSSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppMSSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppMSSqlSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppMSSqlSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppMySqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppMySqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppMySqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppMySqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppMySqlSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppMySqlSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppOracleSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppOracleSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppOracleSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppOracleSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppOracleSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppOracleSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppPgSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppPgSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppPgSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppPgSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppPgSqlSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppPgSqlSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppRamSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppRamSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppRamSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppRamSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppRamSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppRamSchemaObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgSchemaFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgSchemaFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgClientSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgClientSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgClientSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgClientSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgRqstSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgRqstSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgRqstSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgRqstSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgRqstSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgRqstSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgRqstSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgRqstSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgRqstSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgRqstSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgRspnSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgRspnSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgRspnSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgRspnSchemaInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgRspnSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgRspnSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgRspnSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgRspnSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefHppXMsgRspnSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefHppXMsgRspnSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsSchemaObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsSchemaObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsSchemaObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsSchemaObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsDb2LUWSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsDb2LUWSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsDb2LUWSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsDb2LUWSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsDb2LUWSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsDb2LUWSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsMSSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsMSSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsMSSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsMSSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsMSSqlSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsMSSqlSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsMySqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsMySqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsMySqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsMySqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsMySqlSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsMySqlSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsOracleSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsOracleSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsOracleSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsOracleSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsOracleSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsOracleSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsPgSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsPgSqlSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsPgSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsPgSqlSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsPgSqlSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsPgSqlSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsRamSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsRamSchemaObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsRamSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsRamSchemaObjImpl( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsRamSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsRamSchemaObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgSchemaUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgSchemaUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgSchemaFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgSchemaFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgClientSchemaUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgClientSchemaUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgClientSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgClientSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgRqstSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgRqstSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgRqstSchemaUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgRqstSchemaUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgRqstSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgRqstSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgRqstSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgRqstSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgRqstSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgRqstSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgRspnSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgRspnSchemaBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgRspnSchemaUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgRspnSchemaUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgRspnSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgRspnSchemaWireParsers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgRspnSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgRspnSchemaXsdElementList( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaDefCsXMsgRspnSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaDefCsXMsgRspnSchemaXsdSpec( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaRefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaRefName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaRefRefModelName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaRefIncludeRoot( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaRefRefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaRefRefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaRefRefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaRefRefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaRefPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaRefPrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaRefPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaRefPrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaRefNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaRefNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSchemaRefNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaRefNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaRefRefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaRefPrev( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSchemaRefNext( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindScopeTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindScopeId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecAppClusterId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecAppSecAppId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecAppJEEMountName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecDeviceSecUserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecDeviceDevName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecDevicePubKey( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSecDevicePubKey( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecFormClusterId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecFormSecFormId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecFormSecAppId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecFormJEEServletMapName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGroupClusterId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGroupSecGroupId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGroupName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGroupIsVisible( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGroupFormClusterId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGroupFormSecGroupFormId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGroupFormSecGroupId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGroupFormSecAppId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGroupFormSecFormId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGrpIncClusterId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGrpIncSecGrpIncId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGrpIncSecGroupId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGrpIncIncludeGroupId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGrpMembClusterId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGrpMembSecGrpMembId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGrpMembSecGroupId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecGrpMembSecUserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecSessionSecSessionId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecSessionSecUserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecSessionSecDevName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSecSessionSecDevName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecSessionStart( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecSessionFinish( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSecSessionFinish( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecSessionSecProxyId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSecSessionSecProxyId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecUserSecUserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecUserLoginId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecUserEMailAddress( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecUserEMailConfirmUuid( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSecUserEMailConfirmUuid( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecUserDfltDevUserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSecUserDfltDevUserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecUserDfltDevName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSecUserDfltDevName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecUserPasswordHash( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSecUserPasswordResetUuid( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSecUserPasswordResetUuid( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSecUserDefDev( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerListFuncRetTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerListFuncRetTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerListFuncRetTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerListFuncRetTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerListFuncRetTable( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerMethodDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerMethodDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerMethodShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerMethodLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerMethodShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerMethodDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodSuffix( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerMethodSuffix( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodIsInstanceMethod( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodIsServerOnly( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodJMethodBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodCppMethodBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerMethodCsMethodBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerMethodDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerObjFuncRetTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerObjFuncRetTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerObjFuncRetTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerObjFuncRetTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerObjFuncRetTable( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServerProcDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServerProcDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServiceClusterId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServiceServiceId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServiceHostNodeId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServiceServiceTypeId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServiceHostPort( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServiceHost( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasServiceServiceType( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServiceTypeServiceTypeId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindServiceTypeDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindStringColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindStringDefMaxLen( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindStringDefIsPolymorph( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindStringDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasStringDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindStringTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSubProjectTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSubProjectId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSubProjectTopProjectId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSubProjectName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSubProjectDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasSubProjectDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSysClusterSingletonId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindSysClusterClusterId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTSecGroupTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTSecGroupTSecGroupId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTSecGroupName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTSecGroupIsVisible( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTSecGrpIncTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTSecGrpIncTSecGrpIncId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTSecGrpIncTSecGroupId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTSecGrpIncIncludeGroupId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTSecGrpMembTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTSecGrpMembTSecGrpMembId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTSecGrpMembTSecGroupId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTSecGrpMembSecUserId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTZDateColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTZDateDefDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTZDateDefDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTZDateTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTZTimeColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTZTimeDefDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTZTimeDefDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTZTimeTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTZTimestampColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTZTimestampDefDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTZTimestampDefDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTZTimestampTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableDbName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableDbName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTablePageData( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTablePrimaryIndexTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTablePrimaryIndexTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTablePrimaryIndexId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTablePrimaryIndexId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableTableClassCode( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableLookupIndexTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableLookupIndexTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableLookupIndexId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableLookupIndexId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableAltIndexTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableAltIndexTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableAltIndexId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableAltIndexId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableQualifyingTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableQualifyingTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableQualifyingTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableQualifyingTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableIsInstantiable( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHasHistory( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHasAuditColumns( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableIsMutable( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableIsServerOnly( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableLoaderBehaviour( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableSecScope( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJEditObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJEditObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJEditObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJEditObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJEditObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJEditObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJEditObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJEditObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJTableInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJTableInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJTableObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJTableObjImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJTableObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJTableObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJTableObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJTableObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJTableObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJTableObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJDb2LUWTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJDb2LUWTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJDb2LUWTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJDb2LUWTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJDb2LUWTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJDb2LUWTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJMSSqlTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJMSSqlTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJMSSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJMSSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJMSSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJMSSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJMySqlTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJMySqlTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJMySqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJMySqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJMySqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJMySqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJOracleTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJOracleTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJOracleTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJOracleTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJOracleTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJOracleTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJPgSqlTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJPgSqlTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJPgSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJPgSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJPgSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJPgSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJRamTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJRamTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJRamTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJRamTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJRamTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJRamTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJSaxLoaderImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJSaxLoaderImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJSaxLoaderStartElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJSaxLoaderStartElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJSaxLoaderEndElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJSaxLoaderEndElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJXMsgTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJXMsgTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJXMsgTableFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJXMsgTableFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJXMsgRqstTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJXMsgRqstTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJXMsgRspnTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJXMsgRspnTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJXMsgClientTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJXMsgClientTableImport( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJXMsgRqstTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJXMsgRqstTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJXMsgRspnTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJXMsgRspnTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableJXMsgClientTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableJXMsgClientTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppEditObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppEditObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppEditObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppEditObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppEditObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppEditObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppEditObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppEditObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppTableInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppTableInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppTableObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppTableObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppTableObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppTableObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppTableObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppTableObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppTableObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppTableObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppDb2LUWTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppDb2LUWTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppDb2LUWTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppDb2LUWTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppDb2LUWTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppDb2LUWTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppMSSqlTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppMSSqlTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppMSSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppMSSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppMSSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppMSSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppMySqlTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppMySqlTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppMySqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppMySqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppMySqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppMySqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppOracleTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppOracleTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppOracleTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppOracleTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppOracleTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppOracleTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppPgSqlTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppPgSqlTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppPgSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppPgSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppPgSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppPgSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppRamTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppRamTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppRamTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppRamTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppRamTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppRamTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppSaxLoaderInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppSaxLoaderInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppSaxLoaderStartElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppSaxLoaderStartElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppSaxLoaderEndElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppSaxLoaderEndElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppXMsgTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppXMsgTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppXMsgTableFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppXMsgTableFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppXMsgRqstTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppXMsgRqstTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppXMsgRspnTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppXMsgRspnTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppXMsgClientTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppXMsgClientTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppXMsgRqstTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppXMsgRqstTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppXMsgRspnTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppXMsgRspnTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCppXMsgClientTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCppXMsgClientTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppEditObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppEditObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppEditObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppEditObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppEditObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppEditObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppEditObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppEditObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppTableInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppTableInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppTableObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppTableObjInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppTableObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppTableObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppTableObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppTableObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppTableObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppTableObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppDb2LUWTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppDb2LUWTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppDb2LUWTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppDb2LUWTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppDb2LUWTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppDb2LUWTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppMSSqlTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppMSSqlTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppMSSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppMSSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppMSSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppMSSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppMySqlTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppMySqlTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppMySqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppMySqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppMySqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppMySqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppOracleTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppOracleTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppOracleTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppOracleTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppOracleTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppOracleTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppPgSqlTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppPgSqlTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppPgSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppPgSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppPgSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppPgSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppRamTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppRamTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppRamTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppRamTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppRamTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppRamTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppSaxLoaderInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppSaxLoaderInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppSaxLoaderStartElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppSaxLoaderStartElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppSaxLoaderEndElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppSaxLoaderEndElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppXMsgTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppXMsgTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppXMsgTableFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppXMsgTableFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppXMsgRqstTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppXMsgRqstTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppXMsgRspnTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppXMsgRspnTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppXMsgClientTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppXMsgClientTableInclude( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppXMsgRqstTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppXMsgRqstTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppXMsgRspnTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppXMsgRspnTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableHppXMsgClientTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableHppXMsgClientTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsEditObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsEditObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsEditObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsEditObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsEditObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsEditObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsEditObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsEditObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsTableInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsTableInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsTableObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsTableObjUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsTableObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsTableObjMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsTableObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsTableObjInterface( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsTableObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsTableObjImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsDb2LUWTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsDb2LUWTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsDb2LUWTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsDb2LUWTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsDb2LUWTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsDb2LUWTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsMSSqlTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsMSSqlTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsMSSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsMSSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsMSSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsMSSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsMySqlTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsMySqlTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsMySqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsMySqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsMySqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsMySqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsOracleTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsOracleTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsOracleTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsOracleTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsOracleTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsOracleTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsPgSqlTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsPgSqlTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsPgSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsPgSqlTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsPgSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsPgSqlTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsRamTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsRamTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsRamTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsRamTableMembers( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsRamTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsRamTableImplementation( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsSaxLoaderUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsSaxLoaderUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsSaxLoaderStartElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsSaxLoaderStartElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsSaxLoaderEndElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsSaxLoaderEndElement( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsXMsgTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsXMsgTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsXMsgTableFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsXMsgTableFormatters( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsXMsgRqstTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsXMsgRqstTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsXMsgRspnTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsXMsgRspnTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsXMsgClientTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsXMsgClientTableUsing( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsXMsgRqstTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsXMsgRqstTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsXMsgRspnTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsXMsgRspnTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableCsXMsgClientTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableCsXMsgClientTableBody( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableLookupIndex( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableAltIndex( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableQualTable( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTablePrimaryIndex( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableColDbName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableColDbName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableColDataTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableColDataTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableColDataId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableColDataId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTableColXmlElementName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTableColXmlElementName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTenantClusterId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTenantTenantName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTextColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTextDefMaxLen( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTextDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTextDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTextDefXmlElementName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTextDefXmlElementName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTextTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTimeColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTimeDefDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTimeDefDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTimeTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTimestampColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTimestampDefDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTimestampDefDummy( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTimestampTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTldTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTldId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTldName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTldDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTldDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTokenColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTokenDefMaxLen( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTokenDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTokenDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTokenTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTopDomainTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTopDomainId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTopDomainTldId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTopDomainName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTopDomainDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTopDomainDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTopProjectTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTopProjectId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTopProjectTopDomainId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTopProjectName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindTopProjectDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasTopProjectDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt16ColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt16DefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasUInt16DefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt16DefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasUInt16DefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt16DefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasUInt16DefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt16TypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt32ColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt32DefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasUInt32DefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt32DefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasUInt32DefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt32DefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasUInt32DefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt32TypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt64ColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt64DefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasUInt64DefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt64DefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasUInt64DefMinValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt64DefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasUInt64DefMaxValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUInt64TypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindURLProtocolURLProtocolId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindURLProtocolName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindURLProtocolDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindURLProtocolIsSecure( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUuidColTableId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUuidDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasUuidDefInitValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUuidGenSlice( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUuidGenBlockSize( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindUuidTypeSchemaDefId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueScopeId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValueDefSchemaTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValueDefSchemaId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValueShortName( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValueLabel( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValueShortDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValueDescription( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueDefaultXmlValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValueDefaultXmlValue( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueIsNullable( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueGenerateId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValueGenerateId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueImplementsPolymorph( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValuePrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValuePrevTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValuePrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValuePrevId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValueNextTenantId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindValueNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValueNextId( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValueDefSchema( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValuePrev( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

		bind = new CFBamMssCFBindHasValueNext( this );
		editBind = dynamic_cast<cfcore::ICFGenKbGenBindEditObj*>( bind->beginEdit() );
		editBind->setRequiredContainerCartridge( ruleCart );
		editBind->setRequiredLookupRuleType( ruleTypeBind );
		editBind->create();

	}

	void CFBamMssCFEngine::bootstrapIterators() {
		static const std::string S_Iterator( "Iterator" );

		cfcore::ICFGenKbGenIteratorObj* iterator = NULL;
		cfcore::ICFGenKbGenIteratorEditObj* editIterator = NULL;
		cfcore::ICFGenKbRuleCartObj* ruleCart = getInternalRuleCart();
		cfcore::ICFGenKbRuleTypeObj* ruleTypeIterator = getRuleTypeTableObj()->readRuleTypeByNameIdx( S_Iterator );

		iterator = new CFBamMssCFIterateClearSubDep1ClearDep( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateClearSubDep2ClearDep( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateClearTopDepClearDep( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateClusterHostNode( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateClusterTenant( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateClusterSecApp( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateClusterSecGroup( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateClusterSysCluster( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateDelSubDep1DelDep( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateDelSubDep2DelDep( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateDelTopDepDelDep( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateEnumDefTag( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateHostNodeService( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateISOCcyCtry( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateISOCtryCcy( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateISOCtryLang( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateISOLangCtry( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateIndexColumns( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateIndexColRefRelFromCol( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateIndexColRefRelToCol( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateMajorVersionMinorVer( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateMinorVersionSchemaDef( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIteratePopSubDep1PopDep( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIteratePopSubDep2PopDep( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIteratePopTopDepPopDep( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateRelationColumns( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateRelationPopDep( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSchemaDefTables( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSchemaDefTypes( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSchemaDefSchemaRefs( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSecAppForm( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSecGroupInclude( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSecGroupMember( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSecGroupIncByGroup( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSecGroupForm( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSecUserSecDev( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSecUserSecSess( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSecUserSecProxy( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSecUserSecGrpMemb( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSecUserTSecGrpMemb( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateServerMethodParams( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateServiceTypeDeployed( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateSubProjectMajorVer( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTSecGroupInclude( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTSecGroupMember( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTSecGroupIncByGroup( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTableRelation( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTableIndex( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTableColumns( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTableReverseRelations( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTableChains( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTableDelDep( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTableClearDep( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTableDispId16Gen( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTableDispId32Gen( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTableDispId64Gen( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTableServerMethods( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTenantTSecGroup( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTenantTld( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTenantSchema( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTldTopDomain( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTopDomainLicense( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTopDomainTopProject( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateTopProjectSubProject( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateValueRefTableCol( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

		iterator = new CFBamMssCFIterateValueRefIndexCol( this );
		editIterator = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( iterator->beginEdit() );
		editIterator->setRequiredContainerCartridge( ruleCart );
		editIterator->setRequiredLookupRuleType( ruleTypeIterator );
		editIterator->create();

	}

	void CFBamMssCFEngine::bootstrapReferences() {
		static const std::string S_Reference( "Reference" );

		cfcore::ICFGenKbGenReferenceObj* refer = NULL;
		cfcore::ICFGenKbGenReferenceEditObj* editRefer = NULL;
		cfcore::ICFGenKbRuleCartObj* ruleCart = getInternalRuleCart();
		cfcore::ICFGenKbRuleTypeObj* ruleTypeReference = getRuleTypeTableObj()->readRuleTypeByNameIdx( S_Reference );

		refer = new CFBamMssCFReferenceBlobColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceBlobTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceBoolColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceBoolTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceChainTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceChainTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceChainDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceChainPrevRel( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceChainNextRel( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceClearDepRelation( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceClearDepDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceClearSubDep1ClearTopDep( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceClearSubDep2ClearSubDep1( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceClearSubDep3ClearSubDep2( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceClearTopDepTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceClearTopDepPrev( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceClearTopDepNext( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceDateColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceDateTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceDelDepRelation( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceDelDepDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceDelSubDep1DelTopDep( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceDelSubDep2DelSubDep1( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceDelSubDep3DelSubDep2( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceDelTopDepTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceDelTopDepPrev( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceDelTopDepNext( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceDoubleColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceDoubleTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceEnumTagTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceEnumTagEnumDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceEnumTagDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceEnumTagPrev( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceEnumTagNext( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceEnumTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceFloatColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceFloatTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceHostNodeCluster( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceISOCtryCcyCtry( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceISOCtryCcyCcy( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceISOCtryLangCtry( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceISOCtryLangLang( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceId16GenDispenser( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceId32GenDispenser( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceId64GenDispenser( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceIndexTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceIndexDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceIndexIdxTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceIndexColTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceIndexColIndex( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceIndexColDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceIndexColPrev( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceIndexColNext( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceIndexColColumn( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceInt16ColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceInt16TypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceInt32ColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceInt32TypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceInt64ColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceInt64TypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceLicenseTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceLicenseTopDomain( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceMajorVersionTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceMajorVersionParentSPrj( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceMinorVersionTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceMinorVersionParentMajVer( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceNmTokenColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceNmTokenTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceNmTokensColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceNmTokensTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceNumberColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceNumberTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceParamServerMeth( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceParamTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceParamDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceParamPrev( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceParamNext( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceParamType( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferencePopDepRelation( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferencePopDepDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferencePopSubDep1ContPopTopDep( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferencePopSubDep2PopSubDep1( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferencePopSubDep3PopSubDep2( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferencePopTopDepContRelation( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationFromTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationRelTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationFromIndex( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationToTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationToIndex( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationNarrowed( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationColRelation( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationColTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationColDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationColPrev( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationColNext( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationColFromCol( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceRelationColToCol( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSchemaDefMinorVersion( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSchemaDefCTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSchemaRefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSchemaRefRefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSchemaRefPrev( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSchemaRefNext( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceScopeTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecAppCluster( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecDeviceSecUser( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecFormCluster( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecFormApplication( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecGroupCluster( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecGroupFormCluster( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecGroupFormGroup( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecGroupFormApp( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecGroupFormForm( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecGrpIncCluster( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecGrpIncGroup( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecGrpIncSubGroup( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecGrpMembCluster( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecGrpMembGroup( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecGrpMembUser( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecSessionSecUser( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecSessionSecProxy( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSecUserDefDev( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceServerListFuncRetTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceServerMethodDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceServerMethodForTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceServerObjFuncRetTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceServiceCluster( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceServiceHost( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceServiceServiceType( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceStringColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceStringTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSubProjectTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSubProjectParentTPrj( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceSysClusterCluster( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTSecGroupTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTSecGrpIncTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTSecGrpIncGroup( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTSecGrpIncSubGroup( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTSecGrpMembTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTSecGrpMembGroup( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTSecGrpMembUser( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTZDateColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTZDateTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTZTimeColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTZTimeTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTZTimestampColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTZTimestampTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTableSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTableDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTableLookupIndex( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTableAltIndex( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTableQualTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTablePrimaryIndex( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTableColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTableColDataType( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTenantCluster( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTextColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTextTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTimeColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTimeTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTimestampColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTimestampTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTldTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTokenColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTokenTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTopDomainTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTopDomainParentTld( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTopProjectTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceTopProjectParentSDom( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceUInt16ColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceUInt16TypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceUInt32ColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceUInt32TypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceUInt64ColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceUInt64TypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceUuidColTable( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceUuidTypeSchemaDef( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceValueTenant( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceValueScope( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceValueDefSchema( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceValuePrev( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

		refer = new CFBamMssCFReferenceValueNext( this );
		editRefer = dynamic_cast<cfcore::ICFGenKbGenReferenceEditObj*>( refer->beginEdit() );
		editRefer->setRequiredContainerCartridge( ruleCart );
		editRefer->setRequiredLookupRuleType( ruleTypeReference );
		editRefer->create();

	}
}
