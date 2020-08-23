#pragma once

// Description: C++18 specification of a CFBam schema.

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

#include <cfsec/ICFSecPublic.hpp>
#include <cfint/ICFIntPublic.hpp>
namespace cfbam {

	class CFBamChainPKey;
	class CFBamEnumTagPKey;
	class CFBamIndexColPKey;
	class CFBamParamPKey;
	class CFBamRelationColPKey;
	class CFBamScopePKey;
	class CFBamValuePKey;

	class CFBamAtomHPKey;
	class CFBamBlobColHPKey;
	class CFBamBlobDefHPKey;
	class CFBamBlobTypeHPKey;
	class CFBamBoolColHPKey;
	class CFBamBoolDefHPKey;
	class CFBamBoolTypeHPKey;
	class CFBamChainHPKey;
	class CFBamClearDepHPKey;
	class CFBamClearSubDep1HPKey;
	class CFBamClearSubDep2HPKey;
	class CFBamClearSubDep3HPKey;
	class CFBamClearTopDepHPKey;
	class CFBamDateColHPKey;
	class CFBamDateDefHPKey;
	class CFBamDateTypeHPKey;
	class CFBamDelDepHPKey;
	class CFBamDelSubDep1HPKey;
	class CFBamDelSubDep2HPKey;
	class CFBamDelSubDep3HPKey;
	class CFBamDelTopDepHPKey;
	class CFBamDoubleColHPKey;
	class CFBamDoubleDefHPKey;
	class CFBamDoubleTypeHPKey;
	class CFBamEnumDefHPKey;
	class CFBamEnumTagHPKey;
	class CFBamEnumTypeHPKey;
	class CFBamFloatColHPKey;
	class CFBamFloatDefHPKey;
	class CFBamFloatTypeHPKey;
	class CFBamId16GenHPKey;
	class CFBamId32GenHPKey;
	class CFBamId64GenHPKey;
	class CFBamIndexHPKey;
	class CFBamIndexColHPKey;
	class CFBamInt16ColHPKey;
	class CFBamInt16DefHPKey;
	class CFBamInt16TypeHPKey;
	class CFBamInt32ColHPKey;
	class CFBamInt32DefHPKey;
	class CFBamInt32TypeHPKey;
	class CFBamInt64ColHPKey;
	class CFBamInt64DefHPKey;
	class CFBamInt64TypeHPKey;
	class CFBamNmTokenColHPKey;
	class CFBamNmTokenDefHPKey;
	class CFBamNmTokenTypeHPKey;
	class CFBamNmTokensColHPKey;
	class CFBamNmTokensDefHPKey;
	class CFBamNmTokensTypeHPKey;
	class CFBamNumberColHPKey;
	class CFBamNumberDefHPKey;
	class CFBamNumberTypeHPKey;
	class CFBamParamHPKey;
	class CFBamPopDepHPKey;
	class CFBamPopSubDep1HPKey;
	class CFBamPopSubDep2HPKey;
	class CFBamPopSubDep3HPKey;
	class CFBamPopTopDepHPKey;
	class CFBamRelationHPKey;
	class CFBamRelationColHPKey;
	class CFBamSchemaDefHPKey;
	class CFBamSchemaRefHPKey;
	class CFBamScopeHPKey;
	class CFBamServerListFuncHPKey;
	class CFBamServerMethodHPKey;
	class CFBamServerObjFuncHPKey;
	class CFBamServerProcHPKey;
	class CFBamStringColHPKey;
	class CFBamStringDefHPKey;
	class CFBamStringTypeHPKey;
	class CFBamTZDateColHPKey;
	class CFBamTZDateDefHPKey;
	class CFBamTZDateTypeHPKey;
	class CFBamTZTimeColHPKey;
	class CFBamTZTimeDefHPKey;
	class CFBamTZTimeTypeHPKey;
	class CFBamTZTimestampColHPKey;
	class CFBamTZTimestampDefHPKey;
	class CFBamTZTimestampTypeHPKey;
	class CFBamTableHPKey;
	class CFBamTableColHPKey;
	class CFBamTextColHPKey;
	class CFBamTextDefHPKey;
	class CFBamTextTypeHPKey;
	class CFBamTimeColHPKey;
	class CFBamTimeDefHPKey;
	class CFBamTimeTypeHPKey;
	class CFBamTimestampColHPKey;
	class CFBamTimestampDefHPKey;
	class CFBamTimestampTypeHPKey;
	class CFBamTokenColHPKey;
	class CFBamTokenDefHPKey;
	class CFBamTokenTypeHPKey;
	class CFBamUInt16ColHPKey;
	class CFBamUInt16DefHPKey;
	class CFBamUInt16TypeHPKey;
	class CFBamUInt32ColHPKey;
	class CFBamUInt32DefHPKey;
	class CFBamUInt32TypeHPKey;
	class CFBamUInt64ColHPKey;
	class CFBamUInt64DefHPKey;
	class CFBamUInt64TypeHPKey;
	class CFBamUuidColHPKey;
	class CFBamUuidDefHPKey;
	class CFBamUuidGenHPKey;
	class CFBamUuidTypeHPKey;
	class CFBamValueHPKey;

	class CFBamAtomBuff;
	class CFBamBlobColBuff;
	class CFBamBlobDefBuff;
	class CFBamBlobTypeBuff;
	class CFBamBoolColBuff;
	class CFBamBoolDefBuff;
	class CFBamBoolTypeBuff;
	class CFBamChainBuff;
	class CFBamClearDepBuff;
	class CFBamClearSubDep1Buff;
	class CFBamClearSubDep2Buff;
	class CFBamClearSubDep3Buff;
	class CFBamClearTopDepBuff;
	class CFBamDateColBuff;
	class CFBamDateDefBuff;
	class CFBamDateTypeBuff;
	class CFBamDelDepBuff;
	class CFBamDelSubDep1Buff;
	class CFBamDelSubDep2Buff;
	class CFBamDelSubDep3Buff;
	class CFBamDelTopDepBuff;
	class CFBamDoubleColBuff;
	class CFBamDoubleDefBuff;
	class CFBamDoubleTypeBuff;
	class CFBamEnumDefBuff;
	class CFBamEnumTagBuff;
	class CFBamEnumTypeBuff;
	class CFBamFloatColBuff;
	class CFBamFloatDefBuff;
	class CFBamFloatTypeBuff;
	class CFBamId16GenBuff;
	class CFBamId32GenBuff;
	class CFBamId64GenBuff;
	class CFBamIndexBuff;
	class CFBamIndexColBuff;
	class CFBamInt16ColBuff;
	class CFBamInt16DefBuff;
	class CFBamInt16TypeBuff;
	class CFBamInt32ColBuff;
	class CFBamInt32DefBuff;
	class CFBamInt32TypeBuff;
	class CFBamInt64ColBuff;
	class CFBamInt64DefBuff;
	class CFBamInt64TypeBuff;
	class CFBamNmTokenColBuff;
	class CFBamNmTokenDefBuff;
	class CFBamNmTokenTypeBuff;
	class CFBamNmTokensColBuff;
	class CFBamNmTokensDefBuff;
	class CFBamNmTokensTypeBuff;
	class CFBamNumberColBuff;
	class CFBamNumberDefBuff;
	class CFBamNumberTypeBuff;
	class CFBamParamBuff;
	class CFBamPopDepBuff;
	class CFBamPopSubDep1Buff;
	class CFBamPopSubDep2Buff;
	class CFBamPopSubDep3Buff;
	class CFBamPopTopDepBuff;
	class CFBamRelationBuff;
	class CFBamRelationColBuff;
	class CFBamSchemaDefBuff;
	class CFBamSchemaRefBuff;
	class CFBamScopeBuff;
	class CFBamServerListFuncBuff;
	class CFBamServerMethodBuff;
	class CFBamServerObjFuncBuff;
	class CFBamServerProcBuff;
	class CFBamStringColBuff;
	class CFBamStringDefBuff;
	class CFBamStringTypeBuff;
	class CFBamTZDateColBuff;
	class CFBamTZDateDefBuff;
	class CFBamTZDateTypeBuff;
	class CFBamTZTimeColBuff;
	class CFBamTZTimeDefBuff;
	class CFBamTZTimeTypeBuff;
	class CFBamTZTimestampColBuff;
	class CFBamTZTimestampDefBuff;
	class CFBamTZTimestampTypeBuff;
	class CFBamTableBuff;
	class CFBamTableColBuff;
	class CFBamTextColBuff;
	class CFBamTextDefBuff;
	class CFBamTextTypeBuff;
	class CFBamTimeColBuff;
	class CFBamTimeDefBuff;
	class CFBamTimeTypeBuff;
	class CFBamTimestampColBuff;
	class CFBamTimestampDefBuff;
	class CFBamTimestampTypeBuff;
	class CFBamTokenColBuff;
	class CFBamTokenDefBuff;
	class CFBamTokenTypeBuff;
	class CFBamUInt16ColBuff;
	class CFBamUInt16DefBuff;
	class CFBamUInt16TypeBuff;
	class CFBamUInt32ColBuff;
	class CFBamUInt32DefBuff;
	class CFBamUInt32TypeBuff;
	class CFBamUInt64ColBuff;
	class CFBamUInt64DefBuff;
	class CFBamUInt64TypeBuff;
	class CFBamUuidColBuff;
	class CFBamUuidDefBuff;
	class CFBamUuidGenBuff;
	class CFBamUuidTypeBuff;
	class CFBamValueBuff;

	class CFBamAtomHBuff;
	class CFBamBlobColHBuff;
	class CFBamBlobDefHBuff;
	class CFBamBlobTypeHBuff;
	class CFBamBoolColHBuff;
	class CFBamBoolDefHBuff;
	class CFBamBoolTypeHBuff;
	class CFBamChainHBuff;
	class CFBamClearDepHBuff;
	class CFBamClearSubDep1HBuff;
	class CFBamClearSubDep2HBuff;
	class CFBamClearSubDep3HBuff;
	class CFBamClearTopDepHBuff;
	class CFBamDateColHBuff;
	class CFBamDateDefHBuff;
	class CFBamDateTypeHBuff;
	class CFBamDelDepHBuff;
	class CFBamDelSubDep1HBuff;
	class CFBamDelSubDep2HBuff;
	class CFBamDelSubDep3HBuff;
	class CFBamDelTopDepHBuff;
	class CFBamDoubleColHBuff;
	class CFBamDoubleDefHBuff;
	class CFBamDoubleTypeHBuff;
	class CFBamEnumDefHBuff;
	class CFBamEnumTagHBuff;
	class CFBamEnumTypeHBuff;
	class CFBamFloatColHBuff;
	class CFBamFloatDefHBuff;
	class CFBamFloatTypeHBuff;
	class CFBamId16GenHBuff;
	class CFBamId32GenHBuff;
	class CFBamId64GenHBuff;
	class CFBamIndexHBuff;
	class CFBamIndexColHBuff;
	class CFBamInt16ColHBuff;
	class CFBamInt16DefHBuff;
	class CFBamInt16TypeHBuff;
	class CFBamInt32ColHBuff;
	class CFBamInt32DefHBuff;
	class CFBamInt32TypeHBuff;
	class CFBamInt64ColHBuff;
	class CFBamInt64DefHBuff;
	class CFBamInt64TypeHBuff;
	class CFBamNmTokenColHBuff;
	class CFBamNmTokenDefHBuff;
	class CFBamNmTokenTypeHBuff;
	class CFBamNmTokensColHBuff;
	class CFBamNmTokensDefHBuff;
	class CFBamNmTokensTypeHBuff;
	class CFBamNumberColHBuff;
	class CFBamNumberDefHBuff;
	class CFBamNumberTypeHBuff;
	class CFBamParamHBuff;
	class CFBamPopDepHBuff;
	class CFBamPopSubDep1HBuff;
	class CFBamPopSubDep2HBuff;
	class CFBamPopSubDep3HBuff;
	class CFBamPopTopDepHBuff;
	class CFBamRelationHBuff;
	class CFBamRelationColHBuff;
	class CFBamSchemaDefHBuff;
	class CFBamSchemaRefHBuff;
	class CFBamScopeHBuff;
	class CFBamServerListFuncHBuff;
	class CFBamServerMethodHBuff;
	class CFBamServerObjFuncHBuff;
	class CFBamServerProcHBuff;
	class CFBamStringColHBuff;
	class CFBamStringDefHBuff;
	class CFBamStringTypeHBuff;
	class CFBamTZDateColHBuff;
	class CFBamTZDateDefHBuff;
	class CFBamTZDateTypeHBuff;
	class CFBamTZTimeColHBuff;
	class CFBamTZTimeDefHBuff;
	class CFBamTZTimeTypeHBuff;
	class CFBamTZTimestampColHBuff;
	class CFBamTZTimestampDefHBuff;
	class CFBamTZTimestampTypeHBuff;
	class CFBamTableHBuff;
	class CFBamTableColHBuff;
	class CFBamTextColHBuff;
	class CFBamTextDefHBuff;
	class CFBamTextTypeHBuff;
	class CFBamTimeColHBuff;
	class CFBamTimeDefHBuff;
	class CFBamTimeTypeHBuff;
	class CFBamTimestampColHBuff;
	class CFBamTimestampDefHBuff;
	class CFBamTimestampTypeHBuff;
	class CFBamTokenColHBuff;
	class CFBamTokenDefHBuff;
	class CFBamTokenTypeHBuff;
	class CFBamUInt16ColHBuff;
	class CFBamUInt16DefHBuff;
	class CFBamUInt16TypeHBuff;
	class CFBamUInt32ColHBuff;
	class CFBamUInt32DefHBuff;
	class CFBamUInt32TypeHBuff;
	class CFBamUInt64ColHBuff;
	class CFBamUInt64DefHBuff;
	class CFBamUInt64TypeHBuff;
	class CFBamUuidColHBuff;
	class CFBamUuidDefHBuff;
	class CFBamUuidGenHBuff;
	class CFBamUuidTypeHBuff;
	class CFBamValueHBuff;

	class CFBamBlobColByTableIdxKey;
	class CFBamBlobTypeBySchemaIdxKey;
	class CFBamBoolColByTableIdxKey;
	class CFBamBoolTypeBySchemaIdxKey;
	class CFBamChainByTenantIdxKey;
	class CFBamChainByChainTableIdxKey;
	class CFBamChainByDefSchemaIdxKey;
	class CFBamChainByUNameIdxKey;
	class CFBamChainByPrevRelIdxKey;
	class CFBamChainByNextRelIdxKey;
	class CFBamClearDepByClearDepIdxKey;
	class CFBamClearDepByDefSchemaIdxKey;
	class CFBamClearSubDep1ByClearTopDepIdxKey;
	class CFBamClearSubDep1ByUNameIdxKey;
	class CFBamClearSubDep2ByClearSubDep1IdxKey;
	class CFBamClearSubDep2ByUNameIdxKey;
	class CFBamClearSubDep3ByClearSubDep2IdxKey;
	class CFBamClearSubDep3ByUNameIdxKey;
	class CFBamClearTopDepByClrTopDepTblIdxKey;
	class CFBamClearTopDepByUNameIdxKey;
	class CFBamClearTopDepByPrevIdxKey;
	class CFBamClearTopDepByNextIdxKey;
	class CFBamDateColByTableIdxKey;
	class CFBamDateTypeBySchemaIdxKey;
	class CFBamDelDepByDefSchemaIdxKey;
	class CFBamDelDepByDelDepIdxKey;
	class CFBamDelSubDep1ByDelTopDepIdxKey;
	class CFBamDelSubDep1ByUNameIdxKey;
	class CFBamDelSubDep2ByContDelDep1IdxKey;
	class CFBamDelSubDep2ByUNameIdxKey;
	class CFBamDelSubDep3ByDelSubDep2IdxKey;
	class CFBamDelSubDep3ByUNameIdxKey;
	class CFBamDelTopDepByDelTopDepTblIdxKey;
	class CFBamDelTopDepByUNameIdxKey;
	class CFBamDelTopDepByPrevIdxKey;
	class CFBamDelTopDepByNextIdxKey;
	class CFBamDoubleColByTableIdxKey;
	class CFBamDoubleTypeBySchemaIdxKey;
	class CFBamEnumTagByEnumTagTenantIdxKey;
	class CFBamEnumTagByEnumIdxKey;
	class CFBamEnumTagByDefSchemaIdxKey;
	class CFBamEnumTagByEnumNameIdxKey;
	class CFBamEnumTagByPrevIdxKey;
	class CFBamEnumTagByNextIdxKey;
	class CFBamEnumTypeBySchemaIdxKey;
	class CFBamFloatColByTableIdxKey;
	class CFBamFloatTypeBySchemaIdxKey;
	class CFBamId16GenByDispIdxKey;
	class CFBamId32GenByDispIdxKey;
	class CFBamId64GenByDispIdxKey;
	class CFBamIndexByUNameIdxKey;
	class CFBamIndexByIndexTenantIdxKey;
	class CFBamIndexByIdxTableIdxKey;
	class CFBamIndexByDefSchemaIdxKey;
	class CFBamIndexColByUNameIdxKey;
	class CFBamIndexColByIdxColTenantIdxKey;
	class CFBamIndexColByIndexIdxKey;
	class CFBamIndexColByDefSchemaIdxKey;
	class CFBamIndexColByColIdxKey;
	class CFBamIndexColByPrevIdxKey;
	class CFBamIndexColByNextIdxKey;
	class CFBamIndexColByIdxPrevIdxKey;
	class CFBamIndexColByIdxNextIdxKey;
	class CFBamInt16ColByTableIdxKey;
	class CFBamInt16TypeBySchemaIdxKey;
	class CFBamInt32ColByTableIdxKey;
	class CFBamInt32TypeBySchemaIdxKey;
	class CFBamInt64ColByTableIdxKey;
	class CFBamInt64TypeBySchemaIdxKey;
	class CFBamNmTokenColByTableIdxKey;
	class CFBamNmTokenTypeBySchemaIdxKey;
	class CFBamNmTokensColByTableIdxKey;
	class CFBamNmTokensTypeBySchemaIdxKey;
	class CFBamNumberColByTableIdxKey;
	class CFBamNumberTypeBySchemaIdxKey;
	class CFBamParamByUNameIdxKey;
	class CFBamParamByValTentIdxKey;
	class CFBamParamByServerMethodIdxKey;
	class CFBamParamByDefSchemaIdxKey;
	class CFBamParamByServerTypeIdxKey;
	class CFBamParamByPrevIdxKey;
	class CFBamParamByNextIdxKey;
	class CFBamParamByContPrevIdxKey;
	class CFBamParamByContNextIdxKey;
	class CFBamPopDepByRelationIdxKey;
	class CFBamPopDepByDefSchemaIdxKey;
	class CFBamPopSubDep1ByPopTopDepIdxKey;
	class CFBamPopSubDep1ByUNameIdxKey;
	class CFBamPopSubDep2ByPopSubDep1IdxKey;
	class CFBamPopSubDep2ByUNameIdxKey;
	class CFBamPopSubDep3ByPopSubDep2IdxKey;
	class CFBamPopSubDep3ByUNameIdxKey;
	class CFBamPopTopDepByContRelIdxKey;
	class CFBamPopTopDepByUNameIdxKey;
	class CFBamRelationByUNameIdxKey;
	class CFBamRelationByRelnTenantIdxKey;
	class CFBamRelationByRelTableIdxKey;
	class CFBamRelationByDefSchemaIdxKey;
	class CFBamRelationByFromKeyIdxKey;
	class CFBamRelationByToTblIdxKey;
	class CFBamRelationByToKeyIdxKey;
	class CFBamRelationByNarrowedIdxKey;
	class CFBamRelationColByUNameIdxKey;
	class CFBamRelationColByRelColTenantIdxKey;
	class CFBamRelationColByRelationIdxKey;
	class CFBamRelationColByDefSchemaIdxKey;
	class CFBamRelationColByFromColIdxKey;
	class CFBamRelationColByToColIdxKey;
	class CFBamRelationColByPrevIdxKey;
	class CFBamRelationColByNextIdxKey;
	class CFBamRelationColByRelPrevIdxKey;
	class CFBamRelationColByRelNextIdxKey;
	class CFBamSchemaDefByCTenantIdxKey;
	class CFBamSchemaDefByMinorVersionIdxKey;
	class CFBamSchemaDefByUNameIdxKey;
	class CFBamSchemaDefByAuthEMailIdxKey;
	class CFBamSchemaDefByProjectURLIdxKey;
	class CFBamSchemaDefByPubURIIdxKey;
	class CFBamSchemaRefBySchemaIdxKey;
	class CFBamSchemaRefByUNameIdxKey;
	class CFBamSchemaRefByRefSchemaIdxKey;
	class CFBamSchemaRefByPrevIdxKey;
	class CFBamSchemaRefByNextIdxKey;
	class CFBamScopeByTenantIdxKey;
	class CFBamServerListFuncByRetTblIdxKey;
	class CFBamServerMethodByUNameIdxKey;
	class CFBamServerMethodByMethTableIdxKey;
	class CFBamServerMethodByDefSchemaIdxKey;
	class CFBamServerObjFuncByRetTblIdxKey;
	class CFBamStringColByTableIdxKey;
	class CFBamStringTypeBySchemaIdxKey;
	class CFBamTZDateColByTableIdxKey;
	class CFBamTZDateTypeBySchemaIdxKey;
	class CFBamTZTimeColByTableIdxKey;
	class CFBamTZTimeTypeBySchemaIdxKey;
	class CFBamTZTimestampColByTableIdxKey;
	class CFBamTZTimestampTypeBySchemaIdxKey;
	class CFBamTableBySchemaDefIdxKey;
	class CFBamTableByDefSchemaIdxKey;
	class CFBamTableByUNameIdxKey;
	class CFBamTableBySchemaCdIdxKey;
	class CFBamTableByPrimaryIndexIdxKey;
	class CFBamTableByLookupIndexIdxKey;
	class CFBamTableByAltIndexIdxKey;
	class CFBamTableByQualTableIdxKey;
	class CFBamTableColByTableIdxKey;
	class CFBamTableColByDataIdxKey;
	class CFBamTextColByTableIdxKey;
	class CFBamTextTypeBySchemaIdxKey;
	class CFBamTimeColByTableIdxKey;
	class CFBamTimeTypeBySchemaIdxKey;
	class CFBamTimestampColByTableIdxKey;
	class CFBamTimestampTypeBySchemaIdxKey;
	class CFBamTokenColByTableIdxKey;
	class CFBamTokenTypeBySchemaIdxKey;
	class CFBamUInt16ColByTableIdxKey;
	class CFBamUInt16TypeBySchemaIdxKey;
	class CFBamUInt32ColByTableIdxKey;
	class CFBamUInt32TypeBySchemaIdxKey;
	class CFBamUInt64ColByTableIdxKey;
	class CFBamUInt64TypeBySchemaIdxKey;
	class CFBamUuidColByTableIdxKey;
	class CFBamUuidTypeBySchemaIdxKey;
	class CFBamValueByUNameIdxKey;
	class CFBamValueByValTentIdxKey;
	class CFBamValueByScopeIdxKey;
	class CFBamValueByDefSchemaIdxKey;
	class CFBamValueByPrevIdxKey;
	class CFBamValueByNextIdxKey;
	class CFBamValueByContPrevIdxKey;
	class CFBamValueByContNextIdxKey;

	class ICFBamAtomTable;
	class ICFBamBlobColTable;
	class ICFBamBlobDefTable;
	class ICFBamBlobTypeTable;
	class ICFBamBoolColTable;
	class ICFBamBoolDefTable;
	class ICFBamBoolTypeTable;
	class ICFBamChainTable;
	class ICFBamClearDepTable;
	class ICFBamClearSubDep1Table;
	class ICFBamClearSubDep2Table;
	class ICFBamClearSubDep3Table;
	class ICFBamClearTopDepTable;
	class ICFBamClusterTable;
	class ICFBamDateColTable;
	class ICFBamDateDefTable;
	class ICFBamDateTypeTable;
	class ICFBamDelDepTable;
	class ICFBamDelSubDep1Table;
	class ICFBamDelSubDep2Table;
	class ICFBamDelSubDep3Table;
	class ICFBamDelTopDepTable;
	class ICFBamDoubleColTable;
	class ICFBamDoubleDefTable;
	class ICFBamDoubleTypeTable;
	class ICFBamEnumDefTable;
	class ICFBamEnumTagTable;
	class ICFBamEnumTypeTable;
	class ICFBamFloatColTable;
	class ICFBamFloatDefTable;
	class ICFBamFloatTypeTable;
	class ICFBamHostNodeTable;
	class ICFBamISOCcyTable;
	class ICFBamISOCtryTable;
	class ICFBamISOCtryCcyTable;
	class ICFBamISOCtryLangTable;
	class ICFBamISOLangTable;
	class ICFBamISOTZoneTable;
	class ICFBamId16GenTable;
	class ICFBamId32GenTable;
	class ICFBamId64GenTable;
	class ICFBamIndexTable;
	class ICFBamIndexColTable;
	class ICFBamInt16ColTable;
	class ICFBamInt16DefTable;
	class ICFBamInt16TypeTable;
	class ICFBamInt32ColTable;
	class ICFBamInt32DefTable;
	class ICFBamInt32TypeTable;
	class ICFBamInt64ColTable;
	class ICFBamInt64DefTable;
	class ICFBamInt64TypeTable;
	class ICFBamLicenseTable;
	class ICFBamMajorVersionTable;
	class ICFBamMimeTypeTable;
	class ICFBamMinorVersionTable;
	class ICFBamNmTokenColTable;
	class ICFBamNmTokenDefTable;
	class ICFBamNmTokenTypeTable;
	class ICFBamNmTokensColTable;
	class ICFBamNmTokensDefTable;
	class ICFBamNmTokensTypeTable;
	class ICFBamNumberColTable;
	class ICFBamNumberDefTable;
	class ICFBamNumberTypeTable;
	class ICFBamParamTable;
	class ICFBamPopDepTable;
	class ICFBamPopSubDep1Table;
	class ICFBamPopSubDep2Table;
	class ICFBamPopSubDep3Table;
	class ICFBamPopTopDepTable;
	class ICFBamRelationTable;
	class ICFBamRelationColTable;
	class ICFBamSchemaDefTable;
	class ICFBamSchemaRefTable;
	class ICFBamScopeTable;
	class ICFBamSecAppTable;
	class ICFBamSecDeviceTable;
	class ICFBamSecFormTable;
	class ICFBamSecGroupTable;
	class ICFBamSecGroupFormTable;
	class ICFBamSecGrpIncTable;
	class ICFBamSecGrpMembTable;
	class ICFBamSecSessionTable;
	class ICFBamSecUserTable;
	class ICFBamServerListFuncTable;
	class ICFBamServerMethodTable;
	class ICFBamServerObjFuncTable;
	class ICFBamServerProcTable;
	class ICFBamServiceTable;
	class ICFBamServiceTypeTable;
	class ICFBamStringColTable;
	class ICFBamStringDefTable;
	class ICFBamStringTypeTable;
	class ICFBamSubProjectTable;
	class ICFBamSysClusterTable;
	class ICFBamTSecGroupTable;
	class ICFBamTSecGrpIncTable;
	class ICFBamTSecGrpMembTable;
	class ICFBamTZDateColTable;
	class ICFBamTZDateDefTable;
	class ICFBamTZDateTypeTable;
	class ICFBamTZTimeColTable;
	class ICFBamTZTimeDefTable;
	class ICFBamTZTimeTypeTable;
	class ICFBamTZTimestampColTable;
	class ICFBamTZTimestampDefTable;
	class ICFBamTZTimestampTypeTable;
	class ICFBamTableTable;
	class ICFBamTableColTable;
	class ICFBamTenantTable;
	class ICFBamTextColTable;
	class ICFBamTextDefTable;
	class ICFBamTextTypeTable;
	class ICFBamTimeColTable;
	class ICFBamTimeDefTable;
	class ICFBamTimeTypeTable;
	class ICFBamTimestampColTable;
	class ICFBamTimestampDefTable;
	class ICFBamTimestampTypeTable;
	class ICFBamTldTable;
	class ICFBamTokenColTable;
	class ICFBamTokenDefTable;
	class ICFBamTokenTypeTable;
	class ICFBamTopDomainTable;
	class ICFBamTopProjectTable;
	class ICFBamUInt16ColTable;
	class ICFBamUInt16DefTable;
	class ICFBamUInt16TypeTable;
	class ICFBamUInt32ColTable;
	class ICFBamUInt32DefTable;
	class ICFBamUInt32TypeTable;
	class ICFBamUInt64ColTable;
	class ICFBamUInt64DefTable;
	class ICFBamUInt64TypeTable;
	class ICFBamURLProtocolTable;
	class ICFBamUuidColTable;
	class ICFBamUuidDefTable;
	class ICFBamUuidGenTable;
	class ICFBamUuidTypeTable;
	class ICFBamValueTable;
}

#include <cfbam/ICFBamSchema.hpp>

#include <cfsec/CFSecAuthorization.hpp>
#include <cfsec/CFSecConfigurationFile.hpp>
#include <cfsec/ICFSecTablePerms.hpp>

namespace cfbam {

	class CFBamSchema
	: public virtual cfbam::ICFBamSchema,
	  public virtual cfsec::ICFSecSchema,
	  public virtual cfint::ICFIntSchema
	{
	protected:
		cfsec::CFSecAuthorization* authorization;
cfsec::ICFSecTablePerms* tablePerms;
cfsec::CFSecConfigurationFile* configuration;
		std::string* jndiName;
		std::string* schemaDbName;
		std::string* lowerDbSchemaName;
		cfbam::ICFBamAtomTable* tableAtom;
		cfbam::ICFBamBlobColTable* tableBlobCol;
		cfbam::ICFBamBlobDefTable* tableBlobDef;
		cfbam::ICFBamBlobTypeTable* tableBlobType;
		cfbam::ICFBamBoolColTable* tableBoolCol;
		cfbam::ICFBamBoolDefTable* tableBoolDef;
		cfbam::ICFBamBoolTypeTable* tableBoolType;
		cfbam::ICFBamChainTable* tableChain;
		cfbam::ICFBamClearDepTable* tableClearDep;
		cfbam::ICFBamClearSubDep1Table* tableClearSubDep1;
		cfbam::ICFBamClearSubDep2Table* tableClearSubDep2;
		cfbam::ICFBamClearSubDep3Table* tableClearSubDep3;
		cfbam::ICFBamClearTopDepTable* tableClearTopDep;
		cfsec::ICFSecClusterTable* tableCluster;
		cfbam::ICFBamDateColTable* tableDateCol;
		cfbam::ICFBamDateDefTable* tableDateDef;
		cfbam::ICFBamDateTypeTable* tableDateType;
		cfbam::ICFBamDelDepTable* tableDelDep;
		cfbam::ICFBamDelSubDep1Table* tableDelSubDep1;
		cfbam::ICFBamDelSubDep2Table* tableDelSubDep2;
		cfbam::ICFBamDelSubDep3Table* tableDelSubDep3;
		cfbam::ICFBamDelTopDepTable* tableDelTopDep;
		cfbam::ICFBamDoubleColTable* tableDoubleCol;
		cfbam::ICFBamDoubleDefTable* tableDoubleDef;
		cfbam::ICFBamDoubleTypeTable* tableDoubleType;
		cfbam::ICFBamEnumDefTable* tableEnumDef;
		cfbam::ICFBamEnumTagTable* tableEnumTag;
		cfbam::ICFBamEnumTypeTable* tableEnumType;
		cfbam::ICFBamFloatColTable* tableFloatCol;
		cfbam::ICFBamFloatDefTable* tableFloatDef;
		cfbam::ICFBamFloatTypeTable* tableFloatType;
		cfsec::ICFSecHostNodeTable* tableHostNode;
		cfsec::ICFSecISOCcyTable* tableISOCcy;
		cfsec::ICFSecISOCtryTable* tableISOCtry;
		cfsec::ICFSecISOCtryCcyTable* tableISOCtryCcy;
		cfsec::ICFSecISOCtryLangTable* tableISOCtryLang;
		cfsec::ICFSecISOLangTable* tableISOLang;
		cfsec::ICFSecISOTZoneTable* tableISOTZone;
		cfbam::ICFBamId16GenTable* tableId16Gen;
		cfbam::ICFBamId32GenTable* tableId32Gen;
		cfbam::ICFBamId64GenTable* tableId64Gen;
		cfbam::ICFBamIndexTable* tableIndex;
		cfbam::ICFBamIndexColTable* tableIndexCol;
		cfbam::ICFBamInt16ColTable* tableInt16Col;
		cfbam::ICFBamInt16DefTable* tableInt16Def;
		cfbam::ICFBamInt16TypeTable* tableInt16Type;
		cfbam::ICFBamInt32ColTable* tableInt32Col;
		cfbam::ICFBamInt32DefTable* tableInt32Def;
		cfbam::ICFBamInt32TypeTable* tableInt32Type;
		cfbam::ICFBamInt64ColTable* tableInt64Col;
		cfbam::ICFBamInt64DefTable* tableInt64Def;
		cfbam::ICFBamInt64TypeTable* tableInt64Type;
		cfint::ICFIntLicenseTable* tableLicense;
		cfint::ICFIntMajorVersionTable* tableMajorVersion;
		cfint::ICFIntMimeTypeTable* tableMimeType;
		cfint::ICFIntMinorVersionTable* tableMinorVersion;
		cfbam::ICFBamNmTokenColTable* tableNmTokenCol;
		cfbam::ICFBamNmTokenDefTable* tableNmTokenDef;
		cfbam::ICFBamNmTokenTypeTable* tableNmTokenType;
		cfbam::ICFBamNmTokensColTable* tableNmTokensCol;
		cfbam::ICFBamNmTokensDefTable* tableNmTokensDef;
		cfbam::ICFBamNmTokensTypeTable* tableNmTokensType;
		cfbam::ICFBamNumberColTable* tableNumberCol;
		cfbam::ICFBamNumberDefTable* tableNumberDef;
		cfbam::ICFBamNumberTypeTable* tableNumberType;
		cfbam::ICFBamParamTable* tableParam;
		cfbam::ICFBamPopDepTable* tablePopDep;
		cfbam::ICFBamPopSubDep1Table* tablePopSubDep1;
		cfbam::ICFBamPopSubDep2Table* tablePopSubDep2;
		cfbam::ICFBamPopSubDep3Table* tablePopSubDep3;
		cfbam::ICFBamPopTopDepTable* tablePopTopDep;
		cfbam::ICFBamRelationTable* tableRelation;
		cfbam::ICFBamRelationColTable* tableRelationCol;
		cfbam::ICFBamSchemaDefTable* tableSchemaDef;
		cfbam::ICFBamSchemaRefTable* tableSchemaRef;
		cfbam::ICFBamScopeTable* tableScope;
		cfsec::ICFSecSecAppTable* tableSecApp;
		cfsec::ICFSecSecDeviceTable* tableSecDevice;
		cfsec::ICFSecSecFormTable* tableSecForm;
		cfsec::ICFSecSecGroupTable* tableSecGroup;
		cfsec::ICFSecSecGroupFormTable* tableSecGroupForm;
		cfsec::ICFSecSecGrpIncTable* tableSecGrpInc;
		cfsec::ICFSecSecGrpMembTable* tableSecGrpMemb;
		cfsec::ICFSecSecSessionTable* tableSecSession;
		cfsec::ICFSecSecUserTable* tableSecUser;
		cfbam::ICFBamServerListFuncTable* tableServerListFunc;
		cfbam::ICFBamServerMethodTable* tableServerMethod;
		cfbam::ICFBamServerObjFuncTable* tableServerObjFunc;
		cfbam::ICFBamServerProcTable* tableServerProc;
		cfsec::ICFSecServiceTable* tableService;
		cfsec::ICFSecServiceTypeTable* tableServiceType;
		cfbam::ICFBamStringColTable* tableStringCol;
		cfbam::ICFBamStringDefTable* tableStringDef;
		cfbam::ICFBamStringTypeTable* tableStringType;
		cfint::ICFIntSubProjectTable* tableSubProject;
		cfsec::ICFSecSysClusterTable* tableSysCluster;
		cfsec::ICFSecTSecGroupTable* tableTSecGroup;
		cfsec::ICFSecTSecGrpIncTable* tableTSecGrpInc;
		cfsec::ICFSecTSecGrpMembTable* tableTSecGrpMemb;
		cfbam::ICFBamTZDateColTable* tableTZDateCol;
		cfbam::ICFBamTZDateDefTable* tableTZDateDef;
		cfbam::ICFBamTZDateTypeTable* tableTZDateType;
		cfbam::ICFBamTZTimeColTable* tableTZTimeCol;
		cfbam::ICFBamTZTimeDefTable* tableTZTimeDef;
		cfbam::ICFBamTZTimeTypeTable* tableTZTimeType;
		cfbam::ICFBamTZTimestampColTable* tableTZTimestampCol;
		cfbam::ICFBamTZTimestampDefTable* tableTZTimestampDef;
		cfbam::ICFBamTZTimestampTypeTable* tableTZTimestampType;
		cfbam::ICFBamTableTable* tableTable;
		cfbam::ICFBamTableColTable* tableTableCol;
		cfsec::ICFSecTenantTable* tableTenant;
		cfbam::ICFBamTextColTable* tableTextCol;
		cfbam::ICFBamTextDefTable* tableTextDef;
		cfbam::ICFBamTextTypeTable* tableTextType;
		cfbam::ICFBamTimeColTable* tableTimeCol;
		cfbam::ICFBamTimeDefTable* tableTimeDef;
		cfbam::ICFBamTimeTypeTable* tableTimeType;
		cfbam::ICFBamTimestampColTable* tableTimestampCol;
		cfbam::ICFBamTimestampDefTable* tableTimestampDef;
		cfbam::ICFBamTimestampTypeTable* tableTimestampType;
		cfint::ICFIntTldTable* tableTld;
		cfbam::ICFBamTokenColTable* tableTokenCol;
		cfbam::ICFBamTokenDefTable* tableTokenDef;
		cfbam::ICFBamTokenTypeTable* tableTokenType;
		cfint::ICFIntTopDomainTable* tableTopDomain;
		cfint::ICFIntTopProjectTable* tableTopProject;
		cfbam::ICFBamUInt16ColTable* tableUInt16Col;
		cfbam::ICFBamUInt16DefTable* tableUInt16Def;
		cfbam::ICFBamUInt16TypeTable* tableUInt16Type;
		cfbam::ICFBamUInt32ColTable* tableUInt32Col;
		cfbam::ICFBamUInt32DefTable* tableUInt32Def;
		cfbam::ICFBamUInt32TypeTable* tableUInt32Type;
		cfbam::ICFBamUInt64ColTable* tableUInt64Col;
		cfbam::ICFBamUInt64DefTable* tableUInt64Def;
		cfbam::ICFBamUInt64TypeTable* tableUInt64Type;
		cfint::ICFIntURLProtocolTable* tableURLProtocol;
		cfbam::ICFBamUuidColTable* tableUuidCol;
		cfbam::ICFBamUuidDefTable* tableUuidDef;
		cfbam::ICFBamUuidGenTable* tableUuidGen;
		cfbam::ICFBamUuidTypeTable* tableUuidType;
		cfbam::ICFBamValueTable* tableValue;

	public:
		static const std::string CLASS_NAME;

		CFBamSchema();
		CFBamSchema( cfsec::CFSecConfigurationFile* conf );
		CFBamSchema( const std::string& argJndiName );
		virtual ~CFBamSchema();

		virtual cfsec::CFSecConfigurationFile* getConfigurationFile() const;
		virtual void setConfigurationFile( cfsec::CFSecConfigurationFile* value );

		virtual cfsec::CFSecAuthorization* getAuthorization() const;
		virtual void setAuthorization( cfsec::CFSecAuthorization* value );

		virtual const std::string* getJndiName() const;
		virtual void setJndiName( const std::string& value );

		virtual bool isConnected();
		virtual bool connect();
		virtual bool connect( const std::string& username, const std::string& password );
		virtual bool connect( const std::string& loginId, const std::string& password, const std::string& clusterName, const std::string& tenantName );
		virtual void disconnect( bool doCommit );
		virtual void logout( cfsec::CFSecAuthorization* auth );

		virtual cfbam::ICFBamSchema* newSchema();

		virtual std::string fileImport( const cfsec::CFSecAuthorization* auth, const std::string& fileName, const std::string& fileContent );

		virtual int16_t nextISOCcyIdGen();

		virtual int16_t nextISOCtryIdGen();

		virtual int16_t nextISOLangIdGen();

		virtual int16_t nextISOTZoneIdGen();

		virtual int32_t nextServiceTypeIdGen();

		virtual int32_t nextMimeTypeIdGen();

		virtual int32_t nextURLProtocolIdGen();

		virtual int64_t nextClusterIdGen();

		virtual int64_t nextTenantIdGen();

		virtual cfbam::ICFBamAtomTable* getTableAtom();
		virtual void setTableAtom( cfbam::ICFBamAtomTable* value );

		virtual cfbam::ICFBamBlobColTable* getTableBlobCol();
		virtual void setTableBlobCol( cfbam::ICFBamBlobColTable* value );

		virtual cfbam::ICFBamBlobDefTable* getTableBlobDef();
		virtual void setTableBlobDef( cfbam::ICFBamBlobDefTable* value );

		virtual cfbam::ICFBamBlobTypeTable* getTableBlobType();
		virtual void setTableBlobType( cfbam::ICFBamBlobTypeTable* value );

		virtual cfbam::ICFBamBoolColTable* getTableBoolCol();
		virtual void setTableBoolCol( cfbam::ICFBamBoolColTable* value );

		virtual cfbam::ICFBamBoolDefTable* getTableBoolDef();
		virtual void setTableBoolDef( cfbam::ICFBamBoolDefTable* value );

		virtual cfbam::ICFBamBoolTypeTable* getTableBoolType();
		virtual void setTableBoolType( cfbam::ICFBamBoolTypeTable* value );

		virtual cfbam::ICFBamChainTable* getTableChain();
		virtual void setTableChain( cfbam::ICFBamChainTable* value );

		virtual cfbam::ICFBamClearDepTable* getTableClearDep();
		virtual void setTableClearDep( cfbam::ICFBamClearDepTable* value );

		virtual cfbam::ICFBamClearSubDep1Table* getTableClearSubDep1();
		virtual void setTableClearSubDep1( cfbam::ICFBamClearSubDep1Table* value );

		virtual cfbam::ICFBamClearSubDep2Table* getTableClearSubDep2();
		virtual void setTableClearSubDep2( cfbam::ICFBamClearSubDep2Table* value );

		virtual cfbam::ICFBamClearSubDep3Table* getTableClearSubDep3();
		virtual void setTableClearSubDep3( cfbam::ICFBamClearSubDep3Table* value );

		virtual cfbam::ICFBamClearTopDepTable* getTableClearTopDep();
		virtual void setTableClearTopDep( cfbam::ICFBamClearTopDepTable* value );

		virtual cfsec::ICFSecClusterTable* getTableCluster();
		virtual void setTableCluster( cfsec::ICFSecClusterTable* value );

		virtual cfbam::ICFBamDateColTable* getTableDateCol();
		virtual void setTableDateCol( cfbam::ICFBamDateColTable* value );

		virtual cfbam::ICFBamDateDefTable* getTableDateDef();
		virtual void setTableDateDef( cfbam::ICFBamDateDefTable* value );

		virtual cfbam::ICFBamDateTypeTable* getTableDateType();
		virtual void setTableDateType( cfbam::ICFBamDateTypeTable* value );

		virtual cfbam::ICFBamDelDepTable* getTableDelDep();
		virtual void setTableDelDep( cfbam::ICFBamDelDepTable* value );

		virtual cfbam::ICFBamDelSubDep1Table* getTableDelSubDep1();
		virtual void setTableDelSubDep1( cfbam::ICFBamDelSubDep1Table* value );

		virtual cfbam::ICFBamDelSubDep2Table* getTableDelSubDep2();
		virtual void setTableDelSubDep2( cfbam::ICFBamDelSubDep2Table* value );

		virtual cfbam::ICFBamDelSubDep3Table* getTableDelSubDep3();
		virtual void setTableDelSubDep3( cfbam::ICFBamDelSubDep3Table* value );

		virtual cfbam::ICFBamDelTopDepTable* getTableDelTopDep();
		virtual void setTableDelTopDep( cfbam::ICFBamDelTopDepTable* value );

		virtual cfbam::ICFBamDoubleColTable* getTableDoubleCol();
		virtual void setTableDoubleCol( cfbam::ICFBamDoubleColTable* value );

		virtual cfbam::ICFBamDoubleDefTable* getTableDoubleDef();
		virtual void setTableDoubleDef( cfbam::ICFBamDoubleDefTable* value );

		virtual cfbam::ICFBamDoubleTypeTable* getTableDoubleType();
		virtual void setTableDoubleType( cfbam::ICFBamDoubleTypeTable* value );

		virtual cfbam::ICFBamEnumDefTable* getTableEnumDef();
		virtual void setTableEnumDef( cfbam::ICFBamEnumDefTable* value );

		virtual cfbam::ICFBamEnumTagTable* getTableEnumTag();
		virtual void setTableEnumTag( cfbam::ICFBamEnumTagTable* value );

		virtual cfbam::ICFBamEnumTypeTable* getTableEnumType();
		virtual void setTableEnumType( cfbam::ICFBamEnumTypeTable* value );

		virtual cfbam::ICFBamFloatColTable* getTableFloatCol();
		virtual void setTableFloatCol( cfbam::ICFBamFloatColTable* value );

		virtual cfbam::ICFBamFloatDefTable* getTableFloatDef();
		virtual void setTableFloatDef( cfbam::ICFBamFloatDefTable* value );

		virtual cfbam::ICFBamFloatTypeTable* getTableFloatType();
		virtual void setTableFloatType( cfbam::ICFBamFloatTypeTable* value );

		virtual cfsec::ICFSecHostNodeTable* getTableHostNode();
		virtual void setTableHostNode( cfsec::ICFSecHostNodeTable* value );

		virtual cfsec::ICFSecISOCcyTable* getTableISOCcy();
		virtual void setTableISOCcy( cfsec::ICFSecISOCcyTable* value );

		virtual cfsec::ICFSecISOCtryTable* getTableISOCtry();
		virtual void setTableISOCtry( cfsec::ICFSecISOCtryTable* value );

		virtual cfsec::ICFSecISOCtryCcyTable* getTableISOCtryCcy();
		virtual void setTableISOCtryCcy( cfsec::ICFSecISOCtryCcyTable* value );

		virtual cfsec::ICFSecISOCtryLangTable* getTableISOCtryLang();
		virtual void setTableISOCtryLang( cfsec::ICFSecISOCtryLangTable* value );

		virtual cfsec::ICFSecISOLangTable* getTableISOLang();
		virtual void setTableISOLang( cfsec::ICFSecISOLangTable* value );

		virtual cfsec::ICFSecISOTZoneTable* getTableISOTZone();
		virtual void setTableISOTZone( cfsec::ICFSecISOTZoneTable* value );

		virtual cfbam::ICFBamId16GenTable* getTableId16Gen();
		virtual void setTableId16Gen( cfbam::ICFBamId16GenTable* value );

		virtual cfbam::ICFBamId32GenTable* getTableId32Gen();
		virtual void setTableId32Gen( cfbam::ICFBamId32GenTable* value );

		virtual cfbam::ICFBamId64GenTable* getTableId64Gen();
		virtual void setTableId64Gen( cfbam::ICFBamId64GenTable* value );

		virtual cfbam::ICFBamIndexTable* getTableIndex();
		virtual void setTableIndex( cfbam::ICFBamIndexTable* value );

		virtual cfbam::ICFBamIndexColTable* getTableIndexCol();
		virtual void setTableIndexCol( cfbam::ICFBamIndexColTable* value );

		virtual cfbam::ICFBamInt16ColTable* getTableInt16Col();
		virtual void setTableInt16Col( cfbam::ICFBamInt16ColTable* value );

		virtual cfbam::ICFBamInt16DefTable* getTableInt16Def();
		virtual void setTableInt16Def( cfbam::ICFBamInt16DefTable* value );

		virtual cfbam::ICFBamInt16TypeTable* getTableInt16Type();
		virtual void setTableInt16Type( cfbam::ICFBamInt16TypeTable* value );

		virtual cfbam::ICFBamInt32ColTable* getTableInt32Col();
		virtual void setTableInt32Col( cfbam::ICFBamInt32ColTable* value );

		virtual cfbam::ICFBamInt32DefTable* getTableInt32Def();
		virtual void setTableInt32Def( cfbam::ICFBamInt32DefTable* value );

		virtual cfbam::ICFBamInt32TypeTable* getTableInt32Type();
		virtual void setTableInt32Type( cfbam::ICFBamInt32TypeTable* value );

		virtual cfbam::ICFBamInt64ColTable* getTableInt64Col();
		virtual void setTableInt64Col( cfbam::ICFBamInt64ColTable* value );

		virtual cfbam::ICFBamInt64DefTable* getTableInt64Def();
		virtual void setTableInt64Def( cfbam::ICFBamInt64DefTable* value );

		virtual cfbam::ICFBamInt64TypeTable* getTableInt64Type();
		virtual void setTableInt64Type( cfbam::ICFBamInt64TypeTable* value );

		virtual cfint::ICFIntLicenseTable* getTableLicense();
		virtual void setTableLicense( cfint::ICFIntLicenseTable* value );

		virtual cfint::ICFIntMajorVersionTable* getTableMajorVersion();
		virtual void setTableMajorVersion( cfint::ICFIntMajorVersionTable* value );

		virtual cfint::ICFIntMimeTypeTable* getTableMimeType();
		virtual void setTableMimeType( cfint::ICFIntMimeTypeTable* value );

		virtual cfint::ICFIntMinorVersionTable* getTableMinorVersion();
		virtual void setTableMinorVersion( cfint::ICFIntMinorVersionTable* value );

		virtual cfbam::ICFBamNmTokenColTable* getTableNmTokenCol();
		virtual void setTableNmTokenCol( cfbam::ICFBamNmTokenColTable* value );

		virtual cfbam::ICFBamNmTokenDefTable* getTableNmTokenDef();
		virtual void setTableNmTokenDef( cfbam::ICFBamNmTokenDefTable* value );

		virtual cfbam::ICFBamNmTokenTypeTable* getTableNmTokenType();
		virtual void setTableNmTokenType( cfbam::ICFBamNmTokenTypeTable* value );

		virtual cfbam::ICFBamNmTokensColTable* getTableNmTokensCol();
		virtual void setTableNmTokensCol( cfbam::ICFBamNmTokensColTable* value );

		virtual cfbam::ICFBamNmTokensDefTable* getTableNmTokensDef();
		virtual void setTableNmTokensDef( cfbam::ICFBamNmTokensDefTable* value );

		virtual cfbam::ICFBamNmTokensTypeTable* getTableNmTokensType();
		virtual void setTableNmTokensType( cfbam::ICFBamNmTokensTypeTable* value );

		virtual cfbam::ICFBamNumberColTable* getTableNumberCol();
		virtual void setTableNumberCol( cfbam::ICFBamNumberColTable* value );

		virtual cfbam::ICFBamNumberDefTable* getTableNumberDef();
		virtual void setTableNumberDef( cfbam::ICFBamNumberDefTable* value );

		virtual cfbam::ICFBamNumberTypeTable* getTableNumberType();
		virtual void setTableNumberType( cfbam::ICFBamNumberTypeTable* value );

		virtual cfbam::ICFBamParamTable* getTableParam();
		virtual void setTableParam( cfbam::ICFBamParamTable* value );

		virtual cfbam::ICFBamPopDepTable* getTablePopDep();
		virtual void setTablePopDep( cfbam::ICFBamPopDepTable* value );

		virtual cfbam::ICFBamPopSubDep1Table* getTablePopSubDep1();
		virtual void setTablePopSubDep1( cfbam::ICFBamPopSubDep1Table* value );

		virtual cfbam::ICFBamPopSubDep2Table* getTablePopSubDep2();
		virtual void setTablePopSubDep2( cfbam::ICFBamPopSubDep2Table* value );

		virtual cfbam::ICFBamPopSubDep3Table* getTablePopSubDep3();
		virtual void setTablePopSubDep3( cfbam::ICFBamPopSubDep3Table* value );

		virtual cfbam::ICFBamPopTopDepTable* getTablePopTopDep();
		virtual void setTablePopTopDep( cfbam::ICFBamPopTopDepTable* value );

		virtual cfbam::ICFBamRelationTable* getTableRelation();
		virtual void setTableRelation( cfbam::ICFBamRelationTable* value );

		virtual cfbam::ICFBamRelationColTable* getTableRelationCol();
		virtual void setTableRelationCol( cfbam::ICFBamRelationColTable* value );

		virtual cfbam::ICFBamSchemaDefTable* getTableSchemaDef();
		virtual void setTableSchemaDef( cfbam::ICFBamSchemaDefTable* value );

		virtual cfbam::ICFBamSchemaRefTable* getTableSchemaRef();
		virtual void setTableSchemaRef( cfbam::ICFBamSchemaRefTable* value );

		virtual cfbam::ICFBamScopeTable* getTableScope();
		virtual void setTableScope( cfbam::ICFBamScopeTable* value );

		virtual cfsec::ICFSecSecAppTable* getTableSecApp();
		virtual void setTableSecApp( cfsec::ICFSecSecAppTable* value );

		virtual cfsec::ICFSecSecDeviceTable* getTableSecDevice();
		virtual void setTableSecDevice( cfsec::ICFSecSecDeviceTable* value );

		virtual cfsec::ICFSecSecFormTable* getTableSecForm();
		virtual void setTableSecForm( cfsec::ICFSecSecFormTable* value );

		virtual cfsec::ICFSecSecGroupTable* getTableSecGroup();
		virtual void setTableSecGroup( cfsec::ICFSecSecGroupTable* value );

		virtual cfsec::ICFSecSecGroupFormTable* getTableSecGroupForm();
		virtual void setTableSecGroupForm( cfsec::ICFSecSecGroupFormTable* value );

		virtual cfsec::ICFSecSecGrpIncTable* getTableSecGrpInc();
		virtual void setTableSecGrpInc( cfsec::ICFSecSecGrpIncTable* value );

		virtual cfsec::ICFSecSecGrpMembTable* getTableSecGrpMemb();
		virtual void setTableSecGrpMemb( cfsec::ICFSecSecGrpMembTable* value );

		virtual cfsec::ICFSecSecSessionTable* getTableSecSession();
		virtual void setTableSecSession( cfsec::ICFSecSecSessionTable* value );

		virtual cfsec::ICFSecSecUserTable* getTableSecUser();
		virtual void setTableSecUser( cfsec::ICFSecSecUserTable* value );

		virtual cfbam::ICFBamServerListFuncTable* getTableServerListFunc();
		virtual void setTableServerListFunc( cfbam::ICFBamServerListFuncTable* value );

		virtual cfbam::ICFBamServerMethodTable* getTableServerMethod();
		virtual void setTableServerMethod( cfbam::ICFBamServerMethodTable* value );

		virtual cfbam::ICFBamServerObjFuncTable* getTableServerObjFunc();
		virtual void setTableServerObjFunc( cfbam::ICFBamServerObjFuncTable* value );

		virtual cfbam::ICFBamServerProcTable* getTableServerProc();
		virtual void setTableServerProc( cfbam::ICFBamServerProcTable* value );

		virtual cfsec::ICFSecServiceTable* getTableService();
		virtual void setTableService( cfsec::ICFSecServiceTable* value );

		virtual cfsec::ICFSecServiceTypeTable* getTableServiceType();
		virtual void setTableServiceType( cfsec::ICFSecServiceTypeTable* value );

		virtual cfbam::ICFBamStringColTable* getTableStringCol();
		virtual void setTableStringCol( cfbam::ICFBamStringColTable* value );

		virtual cfbam::ICFBamStringDefTable* getTableStringDef();
		virtual void setTableStringDef( cfbam::ICFBamStringDefTable* value );

		virtual cfbam::ICFBamStringTypeTable* getTableStringType();
		virtual void setTableStringType( cfbam::ICFBamStringTypeTable* value );

		virtual cfint::ICFIntSubProjectTable* getTableSubProject();
		virtual void setTableSubProject( cfint::ICFIntSubProjectTable* value );

		virtual cfsec::ICFSecSysClusterTable* getTableSysCluster();
		virtual void setTableSysCluster( cfsec::ICFSecSysClusterTable* value );

		virtual cfsec::ICFSecTSecGroupTable* getTableTSecGroup();
		virtual void setTableTSecGroup( cfsec::ICFSecTSecGroupTable* value );

		virtual cfsec::ICFSecTSecGrpIncTable* getTableTSecGrpInc();
		virtual void setTableTSecGrpInc( cfsec::ICFSecTSecGrpIncTable* value );

		virtual cfsec::ICFSecTSecGrpMembTable* getTableTSecGrpMemb();
		virtual void setTableTSecGrpMemb( cfsec::ICFSecTSecGrpMembTable* value );

		virtual cfbam::ICFBamTZDateColTable* getTableTZDateCol();
		virtual void setTableTZDateCol( cfbam::ICFBamTZDateColTable* value );

		virtual cfbam::ICFBamTZDateDefTable* getTableTZDateDef();
		virtual void setTableTZDateDef( cfbam::ICFBamTZDateDefTable* value );

		virtual cfbam::ICFBamTZDateTypeTable* getTableTZDateType();
		virtual void setTableTZDateType( cfbam::ICFBamTZDateTypeTable* value );

		virtual cfbam::ICFBamTZTimeColTable* getTableTZTimeCol();
		virtual void setTableTZTimeCol( cfbam::ICFBamTZTimeColTable* value );

		virtual cfbam::ICFBamTZTimeDefTable* getTableTZTimeDef();
		virtual void setTableTZTimeDef( cfbam::ICFBamTZTimeDefTable* value );

		virtual cfbam::ICFBamTZTimeTypeTable* getTableTZTimeType();
		virtual void setTableTZTimeType( cfbam::ICFBamTZTimeTypeTable* value );

		virtual cfbam::ICFBamTZTimestampColTable* getTableTZTimestampCol();
		virtual void setTableTZTimestampCol( cfbam::ICFBamTZTimestampColTable* value );

		virtual cfbam::ICFBamTZTimestampDefTable* getTableTZTimestampDef();
		virtual void setTableTZTimestampDef( cfbam::ICFBamTZTimestampDefTable* value );

		virtual cfbam::ICFBamTZTimestampTypeTable* getTableTZTimestampType();
		virtual void setTableTZTimestampType( cfbam::ICFBamTZTimestampTypeTable* value );

		virtual cfbam::ICFBamTableTable* getTableTable();
		virtual void setTableTable( cfbam::ICFBamTableTable* value );

		virtual cfbam::ICFBamTableColTable* getTableTableCol();
		virtual void setTableTableCol( cfbam::ICFBamTableColTable* value );

		virtual cfsec::ICFSecTenantTable* getTableTenant();
		virtual void setTableTenant( cfsec::ICFSecTenantTable* value );

		virtual cfbam::ICFBamTextColTable* getTableTextCol();
		virtual void setTableTextCol( cfbam::ICFBamTextColTable* value );

		virtual cfbam::ICFBamTextDefTable* getTableTextDef();
		virtual void setTableTextDef( cfbam::ICFBamTextDefTable* value );

		virtual cfbam::ICFBamTextTypeTable* getTableTextType();
		virtual void setTableTextType( cfbam::ICFBamTextTypeTable* value );

		virtual cfbam::ICFBamTimeColTable* getTableTimeCol();
		virtual void setTableTimeCol( cfbam::ICFBamTimeColTable* value );

		virtual cfbam::ICFBamTimeDefTable* getTableTimeDef();
		virtual void setTableTimeDef( cfbam::ICFBamTimeDefTable* value );

		virtual cfbam::ICFBamTimeTypeTable* getTableTimeType();
		virtual void setTableTimeType( cfbam::ICFBamTimeTypeTable* value );

		virtual cfbam::ICFBamTimestampColTable* getTableTimestampCol();
		virtual void setTableTimestampCol( cfbam::ICFBamTimestampColTable* value );

		virtual cfbam::ICFBamTimestampDefTable* getTableTimestampDef();
		virtual void setTableTimestampDef( cfbam::ICFBamTimestampDefTable* value );

		virtual cfbam::ICFBamTimestampTypeTable* getTableTimestampType();
		virtual void setTableTimestampType( cfbam::ICFBamTimestampTypeTable* value );

		virtual cfint::ICFIntTldTable* getTableTld();
		virtual void setTableTld( cfint::ICFIntTldTable* value );

		virtual cfbam::ICFBamTokenColTable* getTableTokenCol();
		virtual void setTableTokenCol( cfbam::ICFBamTokenColTable* value );

		virtual cfbam::ICFBamTokenDefTable* getTableTokenDef();
		virtual void setTableTokenDef( cfbam::ICFBamTokenDefTable* value );

		virtual cfbam::ICFBamTokenTypeTable* getTableTokenType();
		virtual void setTableTokenType( cfbam::ICFBamTokenTypeTable* value );

		virtual cfint::ICFIntTopDomainTable* getTableTopDomain();
		virtual void setTableTopDomain( cfint::ICFIntTopDomainTable* value );

		virtual cfint::ICFIntTopProjectTable* getTableTopProject();
		virtual void setTableTopProject( cfint::ICFIntTopProjectTable* value );

		virtual cfbam::ICFBamUInt16ColTable* getTableUInt16Col();
		virtual void setTableUInt16Col( cfbam::ICFBamUInt16ColTable* value );

		virtual cfbam::ICFBamUInt16DefTable* getTableUInt16Def();
		virtual void setTableUInt16Def( cfbam::ICFBamUInt16DefTable* value );

		virtual cfbam::ICFBamUInt16TypeTable* getTableUInt16Type();
		virtual void setTableUInt16Type( cfbam::ICFBamUInt16TypeTable* value );

		virtual cfbam::ICFBamUInt32ColTable* getTableUInt32Col();
		virtual void setTableUInt32Col( cfbam::ICFBamUInt32ColTable* value );

		virtual cfbam::ICFBamUInt32DefTable* getTableUInt32Def();
		virtual void setTableUInt32Def( cfbam::ICFBamUInt32DefTable* value );

		virtual cfbam::ICFBamUInt32TypeTable* getTableUInt32Type();
		virtual void setTableUInt32Type( cfbam::ICFBamUInt32TypeTable* value );

		virtual cfbam::ICFBamUInt64ColTable* getTableUInt64Col();
		virtual void setTableUInt64Col( cfbam::ICFBamUInt64ColTable* value );

		virtual cfbam::ICFBamUInt64DefTable* getTableUInt64Def();
		virtual void setTableUInt64Def( cfbam::ICFBamUInt64DefTable* value );

		virtual cfbam::ICFBamUInt64TypeTable* getTableUInt64Type();
		virtual void setTableUInt64Type( cfbam::ICFBamUInt64TypeTable* value );

		virtual cfint::ICFIntURLProtocolTable* getTableURLProtocol();
		virtual void setTableURLProtocol( cfint::ICFIntURLProtocolTable* value );

		virtual cfbam::ICFBamUuidColTable* getTableUuidCol();
		virtual void setTableUuidCol( cfbam::ICFBamUuidColTable* value );

		virtual cfbam::ICFBamUuidDefTable* getTableUuidDef();
		virtual void setTableUuidDef( cfbam::ICFBamUuidDefTable* value );

		virtual cfbam::ICFBamUuidGenTable* getTableUuidGen();
		virtual void setTableUuidGen( cfbam::ICFBamUuidGenTable* value );

		virtual cfbam::ICFBamUuidTypeTable* getTableUuidType();
		virtual void setTableUuidType( cfbam::ICFBamUuidTypeTable* value );

		virtual cfbam::ICFBamValueTable* getTableValue();
		virtual void setTableValue( cfbam::ICFBamValueTable* value );

		virtual bool isTransactionOpen() const;
		virtual bool beginTransaction();
		virtual void commit();
		virtual void rollback();

		virtual cfsec::ICFSecTablePerms* getTablePerms();
		virtual void setTablePerms( cfsec::ICFSecTablePerms* value );

		virtual void releasePreparedStatements();

		virtual const std::string* getDbSchemaName() const;
		virtual const std::string* getLowerDbSchemaName() const;
		virtual void setDbSchemaName( const std::string& argDbSchemaName );
	};
}
