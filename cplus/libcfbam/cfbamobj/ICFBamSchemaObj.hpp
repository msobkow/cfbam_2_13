#pragma once

// Description: C++18 Schema Object interface for CFBam.

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

#include <cfsec/CFSecAuthorization.hpp>
#include <cfsec/ICFSecSchema.hpp>
#include <cfint/ICFIntSchema.hpp>
#include <cfbam/ICFBamSchema.hpp>
#include <cfsecobj/ICFSecSchemaObj.hpp>
#include <cfintobj/ICFIntSchemaObj.hpp>

namespace cfbam {
	class ICFBamSchemaObj;
	class ICFBamAtomObj;
	class ICFBamAtomEditObj;
	class ICFBamAtomTableObj;
	class ICFBamBlobColObj;
	class ICFBamBlobColEditObj;
	class ICFBamBlobColTableObj;
	class ICFBamBlobDefObj;
	class ICFBamBlobDefEditObj;
	class ICFBamBlobDefTableObj;
	class ICFBamBlobTypeObj;
	class ICFBamBlobTypeEditObj;
	class ICFBamBlobTypeTableObj;
	class ICFBamBoolColObj;
	class ICFBamBoolColEditObj;
	class ICFBamBoolColTableObj;
	class ICFBamBoolDefObj;
	class ICFBamBoolDefEditObj;
	class ICFBamBoolDefTableObj;
	class ICFBamBoolTypeObj;
	class ICFBamBoolTypeEditObj;
	class ICFBamBoolTypeTableObj;
	class ICFBamChainObj;
	class ICFBamChainEditObj;
	class ICFBamChainTableObj;
	class ICFBamClearDepObj;
	class ICFBamClearDepEditObj;
	class ICFBamClearDepTableObj;
	class ICFBamClearSubDep1Obj;
	class ICFBamClearSubDep1EditObj;
	class ICFBamClearSubDep1TableObj;
	class ICFBamClearSubDep2Obj;
	class ICFBamClearSubDep2EditObj;
	class ICFBamClearSubDep2TableObj;
	class ICFBamClearSubDep3Obj;
	class ICFBamClearSubDep3EditObj;
	class ICFBamClearSubDep3TableObj;
	class ICFBamClearTopDepObj;
	class ICFBamClearTopDepEditObj;
	class ICFBamClearTopDepTableObj;
	class ICFBamClusterObj;
	class ICFBamClusterEditObj;
	class ICFBamClusterTableObj;
	class ICFBamDateColObj;
	class ICFBamDateColEditObj;
	class ICFBamDateColTableObj;
	class ICFBamDateDefObj;
	class ICFBamDateDefEditObj;
	class ICFBamDateDefTableObj;
	class ICFBamDateTypeObj;
	class ICFBamDateTypeEditObj;
	class ICFBamDateTypeTableObj;
	class ICFBamDelDepObj;
	class ICFBamDelDepEditObj;
	class ICFBamDelDepTableObj;
	class ICFBamDelSubDep1Obj;
	class ICFBamDelSubDep1EditObj;
	class ICFBamDelSubDep1TableObj;
	class ICFBamDelSubDep2Obj;
	class ICFBamDelSubDep2EditObj;
	class ICFBamDelSubDep2TableObj;
	class ICFBamDelSubDep3Obj;
	class ICFBamDelSubDep3EditObj;
	class ICFBamDelSubDep3TableObj;
	class ICFBamDelTopDepObj;
	class ICFBamDelTopDepEditObj;
	class ICFBamDelTopDepTableObj;
	class ICFBamDoubleColObj;
	class ICFBamDoubleColEditObj;
	class ICFBamDoubleColTableObj;
	class ICFBamDoubleDefObj;
	class ICFBamDoubleDefEditObj;
	class ICFBamDoubleDefTableObj;
	class ICFBamDoubleTypeObj;
	class ICFBamDoubleTypeEditObj;
	class ICFBamDoubleTypeTableObj;
	class ICFBamEnumDefObj;
	class ICFBamEnumDefEditObj;
	class ICFBamEnumDefTableObj;
	class ICFBamEnumTagObj;
	class ICFBamEnumTagEditObj;
	class ICFBamEnumTagTableObj;
	class ICFBamEnumTypeObj;
	class ICFBamEnumTypeEditObj;
	class ICFBamEnumTypeTableObj;
	class ICFBamFloatColObj;
	class ICFBamFloatColEditObj;
	class ICFBamFloatColTableObj;
	class ICFBamFloatDefObj;
	class ICFBamFloatDefEditObj;
	class ICFBamFloatDefTableObj;
	class ICFBamFloatTypeObj;
	class ICFBamFloatTypeEditObj;
	class ICFBamFloatTypeTableObj;
	class ICFBamHostNodeObj;
	class ICFBamHostNodeEditObj;
	class ICFBamHostNodeTableObj;
	class ICFBamISOCcyObj;
	class ICFBamISOCcyEditObj;
	class ICFBamISOCcyTableObj;
	class ICFBamISOCtryObj;
	class ICFBamISOCtryEditObj;
	class ICFBamISOCtryTableObj;
	class ICFBamISOCtryCcyObj;
	class ICFBamISOCtryCcyEditObj;
	class ICFBamISOCtryCcyTableObj;
	class ICFBamISOCtryLangObj;
	class ICFBamISOCtryLangEditObj;
	class ICFBamISOCtryLangTableObj;
	class ICFBamISOLangObj;
	class ICFBamISOLangEditObj;
	class ICFBamISOLangTableObj;
	class ICFBamISOTZoneObj;
	class ICFBamISOTZoneEditObj;
	class ICFBamISOTZoneTableObj;
	class ICFBamId16GenObj;
	class ICFBamId16GenEditObj;
	class ICFBamId16GenTableObj;
	class ICFBamId32GenObj;
	class ICFBamId32GenEditObj;
	class ICFBamId32GenTableObj;
	class ICFBamId64GenObj;
	class ICFBamId64GenEditObj;
	class ICFBamId64GenTableObj;
	class ICFBamIndexObj;
	class ICFBamIndexEditObj;
	class ICFBamIndexTableObj;
	class ICFBamIndexColObj;
	class ICFBamIndexColEditObj;
	class ICFBamIndexColTableObj;
	class ICFBamInt16ColObj;
	class ICFBamInt16ColEditObj;
	class ICFBamInt16ColTableObj;
	class ICFBamInt16DefObj;
	class ICFBamInt16DefEditObj;
	class ICFBamInt16DefTableObj;
	class ICFBamInt16TypeObj;
	class ICFBamInt16TypeEditObj;
	class ICFBamInt16TypeTableObj;
	class ICFBamInt32ColObj;
	class ICFBamInt32ColEditObj;
	class ICFBamInt32ColTableObj;
	class ICFBamInt32DefObj;
	class ICFBamInt32DefEditObj;
	class ICFBamInt32DefTableObj;
	class ICFBamInt32TypeObj;
	class ICFBamInt32TypeEditObj;
	class ICFBamInt32TypeTableObj;
	class ICFBamInt64ColObj;
	class ICFBamInt64ColEditObj;
	class ICFBamInt64ColTableObj;
	class ICFBamInt64DefObj;
	class ICFBamInt64DefEditObj;
	class ICFBamInt64DefTableObj;
	class ICFBamInt64TypeObj;
	class ICFBamInt64TypeEditObj;
	class ICFBamInt64TypeTableObj;
	class ICFBamLicenseObj;
	class ICFBamLicenseEditObj;
	class ICFBamLicenseTableObj;
	class ICFBamMajorVersionObj;
	class ICFBamMajorVersionEditObj;
	class ICFBamMajorVersionTableObj;
	class ICFBamMimeTypeObj;
	class ICFBamMimeTypeEditObj;
	class ICFBamMimeTypeTableObj;
	class ICFBamMinorVersionObj;
	class ICFBamMinorVersionEditObj;
	class ICFBamMinorVersionTableObj;
	class ICFBamNmTokenColObj;
	class ICFBamNmTokenColEditObj;
	class ICFBamNmTokenColTableObj;
	class ICFBamNmTokenDefObj;
	class ICFBamNmTokenDefEditObj;
	class ICFBamNmTokenDefTableObj;
	class ICFBamNmTokenTypeObj;
	class ICFBamNmTokenTypeEditObj;
	class ICFBamNmTokenTypeTableObj;
	class ICFBamNmTokensColObj;
	class ICFBamNmTokensColEditObj;
	class ICFBamNmTokensColTableObj;
	class ICFBamNmTokensDefObj;
	class ICFBamNmTokensDefEditObj;
	class ICFBamNmTokensDefTableObj;
	class ICFBamNmTokensTypeObj;
	class ICFBamNmTokensTypeEditObj;
	class ICFBamNmTokensTypeTableObj;
	class ICFBamNumberColObj;
	class ICFBamNumberColEditObj;
	class ICFBamNumberColTableObj;
	class ICFBamNumberDefObj;
	class ICFBamNumberDefEditObj;
	class ICFBamNumberDefTableObj;
	class ICFBamNumberTypeObj;
	class ICFBamNumberTypeEditObj;
	class ICFBamNumberTypeTableObj;
	class ICFBamParamObj;
	class ICFBamParamEditObj;
	class ICFBamParamTableObj;
	class ICFBamPopDepObj;
	class ICFBamPopDepEditObj;
	class ICFBamPopDepTableObj;
	class ICFBamPopSubDep1Obj;
	class ICFBamPopSubDep1EditObj;
	class ICFBamPopSubDep1TableObj;
	class ICFBamPopSubDep2Obj;
	class ICFBamPopSubDep2EditObj;
	class ICFBamPopSubDep2TableObj;
	class ICFBamPopSubDep3Obj;
	class ICFBamPopSubDep3EditObj;
	class ICFBamPopSubDep3TableObj;
	class ICFBamPopTopDepObj;
	class ICFBamPopTopDepEditObj;
	class ICFBamPopTopDepTableObj;
	class ICFBamRelationObj;
	class ICFBamRelationEditObj;
	class ICFBamRelationTableObj;
	class ICFBamRelationColObj;
	class ICFBamRelationColEditObj;
	class ICFBamRelationColTableObj;
	class ICFBamSchemaDefObj;
	class ICFBamSchemaDefEditObj;
	class ICFBamSchemaDefTableObj;
	class ICFBamSchemaRefObj;
	class ICFBamSchemaRefEditObj;
	class ICFBamSchemaRefTableObj;
	class ICFBamScopeObj;
	class ICFBamScopeEditObj;
	class ICFBamScopeTableObj;
	class ICFBamSecAppObj;
	class ICFBamSecAppEditObj;
	class ICFBamSecAppTableObj;
	class ICFBamSecDeviceObj;
	class ICFBamSecDeviceEditObj;
	class ICFBamSecDeviceTableObj;
	class ICFBamSecFormObj;
	class ICFBamSecFormEditObj;
	class ICFBamSecFormTableObj;
	class ICFBamSecGroupObj;
	class ICFBamSecGroupEditObj;
	class ICFBamSecGroupTableObj;
	class ICFBamSecGroupFormObj;
	class ICFBamSecGroupFormEditObj;
	class ICFBamSecGroupFormTableObj;
	class ICFBamSecGrpIncObj;
	class ICFBamSecGrpIncEditObj;
	class ICFBamSecGrpIncTableObj;
	class ICFBamSecGrpMembObj;
	class ICFBamSecGrpMembEditObj;
	class ICFBamSecGrpMembTableObj;
	class ICFBamSecSessionObj;
	class ICFBamSecSessionEditObj;
	class ICFBamSecSessionTableObj;
	class ICFBamSecUserObj;
	class ICFBamSecUserEditObj;
	class ICFBamSecUserTableObj;
	class ICFBamServerListFuncObj;
	class ICFBamServerListFuncEditObj;
	class ICFBamServerListFuncTableObj;
	class ICFBamServerMethodObj;
	class ICFBamServerMethodEditObj;
	class ICFBamServerMethodTableObj;
	class ICFBamServerObjFuncObj;
	class ICFBamServerObjFuncEditObj;
	class ICFBamServerObjFuncTableObj;
	class ICFBamServerProcObj;
	class ICFBamServerProcEditObj;
	class ICFBamServerProcTableObj;
	class ICFBamServiceObj;
	class ICFBamServiceEditObj;
	class ICFBamServiceTableObj;
	class ICFBamServiceTypeObj;
	class ICFBamServiceTypeEditObj;
	class ICFBamServiceTypeTableObj;
	class ICFBamStringColObj;
	class ICFBamStringColEditObj;
	class ICFBamStringColTableObj;
	class ICFBamStringDefObj;
	class ICFBamStringDefEditObj;
	class ICFBamStringDefTableObj;
	class ICFBamStringTypeObj;
	class ICFBamStringTypeEditObj;
	class ICFBamStringTypeTableObj;
	class ICFBamSubProjectObj;
	class ICFBamSubProjectEditObj;
	class ICFBamSubProjectTableObj;
	class ICFBamSysClusterObj;
	class ICFBamSysClusterEditObj;
	class ICFBamSysClusterTableObj;
	class ICFBamTSecGroupObj;
	class ICFBamTSecGroupEditObj;
	class ICFBamTSecGroupTableObj;
	class ICFBamTSecGrpIncObj;
	class ICFBamTSecGrpIncEditObj;
	class ICFBamTSecGrpIncTableObj;
	class ICFBamTSecGrpMembObj;
	class ICFBamTSecGrpMembEditObj;
	class ICFBamTSecGrpMembTableObj;
	class ICFBamTZDateColObj;
	class ICFBamTZDateColEditObj;
	class ICFBamTZDateColTableObj;
	class ICFBamTZDateDefObj;
	class ICFBamTZDateDefEditObj;
	class ICFBamTZDateDefTableObj;
	class ICFBamTZDateTypeObj;
	class ICFBamTZDateTypeEditObj;
	class ICFBamTZDateTypeTableObj;
	class ICFBamTZTimeColObj;
	class ICFBamTZTimeColEditObj;
	class ICFBamTZTimeColTableObj;
	class ICFBamTZTimeDefObj;
	class ICFBamTZTimeDefEditObj;
	class ICFBamTZTimeDefTableObj;
	class ICFBamTZTimeTypeObj;
	class ICFBamTZTimeTypeEditObj;
	class ICFBamTZTimeTypeTableObj;
	class ICFBamTZTimestampColObj;
	class ICFBamTZTimestampColEditObj;
	class ICFBamTZTimestampColTableObj;
	class ICFBamTZTimestampDefObj;
	class ICFBamTZTimestampDefEditObj;
	class ICFBamTZTimestampDefTableObj;
	class ICFBamTZTimestampTypeObj;
	class ICFBamTZTimestampTypeEditObj;
	class ICFBamTZTimestampTypeTableObj;
	class ICFBamTableObj;
	class ICFBamTableEditObj;
	class ICFBamTableTableObj;
	class ICFBamTableColObj;
	class ICFBamTableColEditObj;
	class ICFBamTableColTableObj;
	class ICFBamTenantObj;
	class ICFBamTenantEditObj;
	class ICFBamTenantTableObj;
	class ICFBamTextColObj;
	class ICFBamTextColEditObj;
	class ICFBamTextColTableObj;
	class ICFBamTextDefObj;
	class ICFBamTextDefEditObj;
	class ICFBamTextDefTableObj;
	class ICFBamTextTypeObj;
	class ICFBamTextTypeEditObj;
	class ICFBamTextTypeTableObj;
	class ICFBamTimeColObj;
	class ICFBamTimeColEditObj;
	class ICFBamTimeColTableObj;
	class ICFBamTimeDefObj;
	class ICFBamTimeDefEditObj;
	class ICFBamTimeDefTableObj;
	class ICFBamTimeTypeObj;
	class ICFBamTimeTypeEditObj;
	class ICFBamTimeTypeTableObj;
	class ICFBamTimestampColObj;
	class ICFBamTimestampColEditObj;
	class ICFBamTimestampColTableObj;
	class ICFBamTimestampDefObj;
	class ICFBamTimestampDefEditObj;
	class ICFBamTimestampDefTableObj;
	class ICFBamTimestampTypeObj;
	class ICFBamTimestampTypeEditObj;
	class ICFBamTimestampTypeTableObj;
	class ICFBamTldObj;
	class ICFBamTldEditObj;
	class ICFBamTldTableObj;
	class ICFBamTokenColObj;
	class ICFBamTokenColEditObj;
	class ICFBamTokenColTableObj;
	class ICFBamTokenDefObj;
	class ICFBamTokenDefEditObj;
	class ICFBamTokenDefTableObj;
	class ICFBamTokenTypeObj;
	class ICFBamTokenTypeEditObj;
	class ICFBamTokenTypeTableObj;
	class ICFBamTopDomainObj;
	class ICFBamTopDomainEditObj;
	class ICFBamTopDomainTableObj;
	class ICFBamTopProjectObj;
	class ICFBamTopProjectEditObj;
	class ICFBamTopProjectTableObj;
	class ICFBamUInt16ColObj;
	class ICFBamUInt16ColEditObj;
	class ICFBamUInt16ColTableObj;
	class ICFBamUInt16DefObj;
	class ICFBamUInt16DefEditObj;
	class ICFBamUInt16DefTableObj;
	class ICFBamUInt16TypeObj;
	class ICFBamUInt16TypeEditObj;
	class ICFBamUInt16TypeTableObj;
	class ICFBamUInt32ColObj;
	class ICFBamUInt32ColEditObj;
	class ICFBamUInt32ColTableObj;
	class ICFBamUInt32DefObj;
	class ICFBamUInt32DefEditObj;
	class ICFBamUInt32DefTableObj;
	class ICFBamUInt32TypeObj;
	class ICFBamUInt32TypeEditObj;
	class ICFBamUInt32TypeTableObj;
	class ICFBamUInt64ColObj;
	class ICFBamUInt64ColEditObj;
	class ICFBamUInt64ColTableObj;
	class ICFBamUInt64DefObj;
	class ICFBamUInt64DefEditObj;
	class ICFBamUInt64DefTableObj;
	class ICFBamUInt64TypeObj;
	class ICFBamUInt64TypeEditObj;
	class ICFBamUInt64TypeTableObj;
	class ICFBamURLProtocolObj;
	class ICFBamURLProtocolEditObj;
	class ICFBamURLProtocolTableObj;
	class ICFBamUuidColObj;
	class ICFBamUuidColEditObj;
	class ICFBamUuidColTableObj;
	class ICFBamUuidDefObj;
	class ICFBamUuidDefEditObj;
	class ICFBamUuidDefTableObj;
	class ICFBamUuidGenObj;
	class ICFBamUuidGenEditObj;
	class ICFBamUuidGenTableObj;
	class ICFBamUuidTypeObj;
	class ICFBamUuidTypeEditObj;
	class ICFBamUuidTypeTableObj;
	class ICFBamValueObj;
	class ICFBamValueEditObj;
	class ICFBamValueTableObj;
}

namespace cfbam {
	class ICFBamSchemaObj
	: public virtual cfsec::ICFSecSchemaObj,
	  public virtual cfint::ICFIntSchemaObj
	{
	public:
		ICFBamSchemaObj();
		virtual ~ICFBamSchemaObj();

		virtual cfbam::ICFBamAtomTableObj* getAtomTableObj() = 0;
		virtual cfbam::ICFBamBlobColTableObj* getBlobColTableObj() = 0;
		virtual cfbam::ICFBamBlobDefTableObj* getBlobDefTableObj() = 0;
		virtual cfbam::ICFBamBlobTypeTableObj* getBlobTypeTableObj() = 0;
		virtual cfbam::ICFBamBoolColTableObj* getBoolColTableObj() = 0;
		virtual cfbam::ICFBamBoolDefTableObj* getBoolDefTableObj() = 0;
		virtual cfbam::ICFBamBoolTypeTableObj* getBoolTypeTableObj() = 0;
		virtual cfbam::ICFBamChainTableObj* getChainTableObj() = 0;
		virtual cfbam::ICFBamClearDepTableObj* getClearDepTableObj() = 0;
		virtual cfbam::ICFBamClearSubDep1TableObj* getClearSubDep1TableObj() = 0;
		virtual cfbam::ICFBamClearSubDep2TableObj* getClearSubDep2TableObj() = 0;
		virtual cfbam::ICFBamClearSubDep3TableObj* getClearSubDep3TableObj() = 0;
		virtual cfbam::ICFBamClearTopDepTableObj* getClearTopDepTableObj() = 0;
		virtual cfbam::ICFBamDateColTableObj* getDateColTableObj() = 0;
		virtual cfbam::ICFBamDateDefTableObj* getDateDefTableObj() = 0;
		virtual cfbam::ICFBamDateTypeTableObj* getDateTypeTableObj() = 0;
		virtual cfbam::ICFBamDelDepTableObj* getDelDepTableObj() = 0;
		virtual cfbam::ICFBamDelSubDep1TableObj* getDelSubDep1TableObj() = 0;
		virtual cfbam::ICFBamDelSubDep2TableObj* getDelSubDep2TableObj() = 0;
		virtual cfbam::ICFBamDelSubDep3TableObj* getDelSubDep3TableObj() = 0;
		virtual cfbam::ICFBamDelTopDepTableObj* getDelTopDepTableObj() = 0;
		virtual cfbam::ICFBamDoubleColTableObj* getDoubleColTableObj() = 0;
		virtual cfbam::ICFBamDoubleDefTableObj* getDoubleDefTableObj() = 0;
		virtual cfbam::ICFBamDoubleTypeTableObj* getDoubleTypeTableObj() = 0;
		virtual cfbam::ICFBamEnumDefTableObj* getEnumDefTableObj() = 0;
		virtual cfbam::ICFBamEnumTagTableObj* getEnumTagTableObj() = 0;
		virtual cfbam::ICFBamEnumTypeTableObj* getEnumTypeTableObj() = 0;
		virtual cfbam::ICFBamFloatColTableObj* getFloatColTableObj() = 0;
		virtual cfbam::ICFBamFloatDefTableObj* getFloatDefTableObj() = 0;
		virtual cfbam::ICFBamFloatTypeTableObj* getFloatTypeTableObj() = 0;
		virtual cfbam::ICFBamId16GenTableObj* getId16GenTableObj() = 0;
		virtual cfbam::ICFBamId32GenTableObj* getId32GenTableObj() = 0;
		virtual cfbam::ICFBamId64GenTableObj* getId64GenTableObj() = 0;
		virtual cfbam::ICFBamIndexTableObj* getIndexTableObj() = 0;
		virtual cfbam::ICFBamIndexColTableObj* getIndexColTableObj() = 0;
		virtual cfbam::ICFBamInt16ColTableObj* getInt16ColTableObj() = 0;
		virtual cfbam::ICFBamInt16DefTableObj* getInt16DefTableObj() = 0;
		virtual cfbam::ICFBamInt16TypeTableObj* getInt16TypeTableObj() = 0;
		virtual cfbam::ICFBamInt32ColTableObj* getInt32ColTableObj() = 0;
		virtual cfbam::ICFBamInt32DefTableObj* getInt32DefTableObj() = 0;
		virtual cfbam::ICFBamInt32TypeTableObj* getInt32TypeTableObj() = 0;
		virtual cfbam::ICFBamInt64ColTableObj* getInt64ColTableObj() = 0;
		virtual cfbam::ICFBamInt64DefTableObj* getInt64DefTableObj() = 0;
		virtual cfbam::ICFBamInt64TypeTableObj* getInt64TypeTableObj() = 0;
		virtual cfbam::ICFBamNmTokenColTableObj* getNmTokenColTableObj() = 0;
		virtual cfbam::ICFBamNmTokenDefTableObj* getNmTokenDefTableObj() = 0;
		virtual cfbam::ICFBamNmTokenTypeTableObj* getNmTokenTypeTableObj() = 0;
		virtual cfbam::ICFBamNmTokensColTableObj* getNmTokensColTableObj() = 0;
		virtual cfbam::ICFBamNmTokensDefTableObj* getNmTokensDefTableObj() = 0;
		virtual cfbam::ICFBamNmTokensTypeTableObj* getNmTokensTypeTableObj() = 0;
		virtual cfbam::ICFBamNumberColTableObj* getNumberColTableObj() = 0;
		virtual cfbam::ICFBamNumberDefTableObj* getNumberDefTableObj() = 0;
		virtual cfbam::ICFBamNumberTypeTableObj* getNumberTypeTableObj() = 0;
		virtual cfbam::ICFBamParamTableObj* getParamTableObj() = 0;
		virtual cfbam::ICFBamPopDepTableObj* getPopDepTableObj() = 0;
		virtual cfbam::ICFBamPopSubDep1TableObj* getPopSubDep1TableObj() = 0;
		virtual cfbam::ICFBamPopSubDep2TableObj* getPopSubDep2TableObj() = 0;
		virtual cfbam::ICFBamPopSubDep3TableObj* getPopSubDep3TableObj() = 0;
		virtual cfbam::ICFBamPopTopDepTableObj* getPopTopDepTableObj() = 0;
		virtual cfbam::ICFBamRelationTableObj* getRelationTableObj() = 0;
		virtual cfbam::ICFBamRelationColTableObj* getRelationColTableObj() = 0;
		virtual cfbam::ICFBamSchemaDefTableObj* getSchemaDefTableObj() = 0;
		virtual cfbam::ICFBamSchemaRefTableObj* getSchemaRefTableObj() = 0;
		virtual cfbam::ICFBamScopeTableObj* getScopeTableObj() = 0;
		virtual cfbam::ICFBamServerListFuncTableObj* getServerListFuncTableObj() = 0;
		virtual cfbam::ICFBamServerMethodTableObj* getServerMethodTableObj() = 0;
		virtual cfbam::ICFBamServerObjFuncTableObj* getServerObjFuncTableObj() = 0;
		virtual cfbam::ICFBamServerProcTableObj* getServerProcTableObj() = 0;
		virtual cfbam::ICFBamStringColTableObj* getStringColTableObj() = 0;
		virtual cfbam::ICFBamStringDefTableObj* getStringDefTableObj() = 0;
		virtual cfbam::ICFBamStringTypeTableObj* getStringTypeTableObj() = 0;
		virtual cfbam::ICFBamTZDateColTableObj* getTZDateColTableObj() = 0;
		virtual cfbam::ICFBamTZDateDefTableObj* getTZDateDefTableObj() = 0;
		virtual cfbam::ICFBamTZDateTypeTableObj* getTZDateTypeTableObj() = 0;
		virtual cfbam::ICFBamTZTimeColTableObj* getTZTimeColTableObj() = 0;
		virtual cfbam::ICFBamTZTimeDefTableObj* getTZTimeDefTableObj() = 0;
		virtual cfbam::ICFBamTZTimeTypeTableObj* getTZTimeTypeTableObj() = 0;
		virtual cfbam::ICFBamTZTimestampColTableObj* getTZTimestampColTableObj() = 0;
		virtual cfbam::ICFBamTZTimestampDefTableObj* getTZTimestampDefTableObj() = 0;
		virtual cfbam::ICFBamTZTimestampTypeTableObj* getTZTimestampTypeTableObj() = 0;
		virtual cfbam::ICFBamTableTableObj* getTableTableObj() = 0;
		virtual cfbam::ICFBamTableColTableObj* getTableColTableObj() = 0;
		virtual cfbam::ICFBamTextColTableObj* getTextColTableObj() = 0;
		virtual cfbam::ICFBamTextDefTableObj* getTextDefTableObj() = 0;
		virtual cfbam::ICFBamTextTypeTableObj* getTextTypeTableObj() = 0;
		virtual cfbam::ICFBamTimeColTableObj* getTimeColTableObj() = 0;
		virtual cfbam::ICFBamTimeDefTableObj* getTimeDefTableObj() = 0;
		virtual cfbam::ICFBamTimeTypeTableObj* getTimeTypeTableObj() = 0;
		virtual cfbam::ICFBamTimestampColTableObj* getTimestampColTableObj() = 0;
		virtual cfbam::ICFBamTimestampDefTableObj* getTimestampDefTableObj() = 0;
		virtual cfbam::ICFBamTimestampTypeTableObj* getTimestampTypeTableObj() = 0;
		virtual cfbam::ICFBamTokenColTableObj* getTokenColTableObj() = 0;
		virtual cfbam::ICFBamTokenDefTableObj* getTokenDefTableObj() = 0;
		virtual cfbam::ICFBamTokenTypeTableObj* getTokenTypeTableObj() = 0;
		virtual cfbam::ICFBamUInt16ColTableObj* getUInt16ColTableObj() = 0;
		virtual cfbam::ICFBamUInt16DefTableObj* getUInt16DefTableObj() = 0;
		virtual cfbam::ICFBamUInt16TypeTableObj* getUInt16TypeTableObj() = 0;
		virtual cfbam::ICFBamUInt32ColTableObj* getUInt32ColTableObj() = 0;
		virtual cfbam::ICFBamUInt32DefTableObj* getUInt32DefTableObj() = 0;
		virtual cfbam::ICFBamUInt32TypeTableObj* getUInt32TypeTableObj() = 0;
		virtual cfbam::ICFBamUInt64ColTableObj* getUInt64ColTableObj() = 0;
		virtual cfbam::ICFBamUInt64DefTableObj* getUInt64DefTableObj() = 0;
		virtual cfbam::ICFBamUInt64TypeTableObj* getUInt64TypeTableObj() = 0;
		virtual cfbam::ICFBamUuidColTableObj* getUuidColTableObj() = 0;
		virtual cfbam::ICFBamUuidDefTableObj* getUuidDefTableObj() = 0;
		virtual cfbam::ICFBamUuidGenTableObj* getUuidGenTableObj() = 0;
		virtual cfbam::ICFBamUuidTypeTableObj* getUuidTypeTableObj() = 0;
		virtual cfbam::ICFBamValueTableObj* getValueTableObj() = 0;
	};
}
