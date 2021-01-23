// Description: C++18 Table Object implementation for CFBam.

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

using namespace std;

#include <cfbam/ICFBamPublic.hpp>
#include <cfbamobj/ICFBamObjPublic.hpp>

#include <cfbamobj/CFBamChainObj.hpp>
#include <cfbamobj/CFBamClusterObj.hpp>
#include <cfbamobj/CFBamEnumTagObj.hpp>
#include <cfbamobj/CFBamHostNodeObj.hpp>
#include <cfbamobj/CFBamISOCcyObj.hpp>
#include <cfbamobj/CFBamISOCtryObj.hpp>
#include <cfbamobj/CFBamISOCtryCcyObj.hpp>
#include <cfbamobj/CFBamISOCtryLangObj.hpp>
#include <cfbamobj/CFBamISOLangObj.hpp>
#include <cfbamobj/CFBamISOTZoneObj.hpp>
#include <cfbamobj/CFBamIndexColObj.hpp>
#include <cfbamobj/CFBamLicenseObj.hpp>
#include <cfbamobj/CFBamMajorVersionObj.hpp>
#include <cfbamobj/CFBamMimeTypeObj.hpp>
#include <cfbamobj/CFBamMinorVersionObj.hpp>
#include <cfbamobj/CFBamParamObj.hpp>
#include <cfbamobj/CFBamRelationColObj.hpp>
#include <cfbamobj/CFBamScopeObj.hpp>
#include <cfbamobj/CFBamSchemaDefObj.hpp>
#include <cfbamobj/CFBamSchemaRefObj.hpp>
#include <cfbamobj/CFBamServerMethodObj.hpp>
#include <cfbamobj/CFBamServerObjFuncObj.hpp>
#include <cfbamobj/CFBamServerProcObj.hpp>
#include <cfbamobj/CFBamServerListFuncObj.hpp>
#include <cfbamobj/CFBamTableObj.hpp>
#include <cfbamobj/CFBamClearDepObj.hpp>
#include <cfbamobj/CFBamClearSubDep1Obj.hpp>
#include <cfbamobj/CFBamClearSubDep2Obj.hpp>
#include <cfbamobj/CFBamClearSubDep3Obj.hpp>
#include <cfbamobj/CFBamClearTopDepObj.hpp>
#include <cfbamobj/CFBamDelDepObj.hpp>
#include <cfbamobj/CFBamDelSubDep1Obj.hpp>
#include <cfbamobj/CFBamDelSubDep2Obj.hpp>
#include <cfbamobj/CFBamDelSubDep3Obj.hpp>
#include <cfbamobj/CFBamDelTopDepObj.hpp>
#include <cfbamobj/CFBamIndexObj.hpp>
#include <cfbamobj/CFBamPopDepObj.hpp>
#include <cfbamobj/CFBamPopSubDep1Obj.hpp>
#include <cfbamobj/CFBamPopSubDep2Obj.hpp>
#include <cfbamobj/CFBamPopSubDep3Obj.hpp>
#include <cfbamobj/CFBamPopTopDepObj.hpp>
#include <cfbamobj/CFBamRelationObj.hpp>
#include <cfbamobj/CFBamSecAppObj.hpp>
#include <cfbamobj/CFBamSecDeviceObj.hpp>
#include <cfbamobj/CFBamSecFormObj.hpp>
#include <cfbamobj/CFBamSecGroupObj.hpp>
#include <cfbamobj/CFBamSecGroupFormObj.hpp>
#include <cfbamobj/CFBamSecGrpIncObj.hpp>
#include <cfbamobj/CFBamSecGrpMembObj.hpp>
#include <cfbamobj/CFBamSecSessionObj.hpp>
#include <cfbamobj/CFBamSecUserObj.hpp>
#include <cfbamobj/CFBamServiceObj.hpp>
#include <cfbamobj/CFBamServiceTypeObj.hpp>
#include <cfbamobj/CFBamSubProjectObj.hpp>
#include <cfbamobj/CFBamSysClusterObj.hpp>
#include <cfbamobj/CFBamTSecGroupObj.hpp>
#include <cfbamobj/CFBamTSecGrpIncObj.hpp>
#include <cfbamobj/CFBamTSecGrpMembObj.hpp>
#include <cfbamobj/CFBamTenantObj.hpp>
#include <cfbamobj/CFBamTldObj.hpp>
#include <cfbamobj/CFBamTopDomainObj.hpp>
#include <cfbamobj/CFBamTopProjectObj.hpp>
#include <cfbamobj/CFBamURLProtocolObj.hpp>
#include <cfbamobj/CFBamValueObj.hpp>
#include <cfbamobj/CFBamAtomObj.hpp>
#include <cfbamobj/CFBamBlobDefObj.hpp>
#include <cfbamobj/CFBamBlobTypeObj.hpp>
#include <cfbamobj/CFBamBlobColObj.hpp>
#include <cfbamobj/CFBamBoolDefObj.hpp>
#include <cfbamobj/CFBamBoolTypeObj.hpp>
#include <cfbamobj/CFBamBoolColObj.hpp>
#include <cfbamobj/CFBamDateDefObj.hpp>
#include <cfbamobj/CFBamDateTypeObj.hpp>
#include <cfbamobj/CFBamDateColObj.hpp>
#include <cfbamobj/CFBamDoubleDefObj.hpp>
#include <cfbamobj/CFBamDoubleTypeObj.hpp>
#include <cfbamobj/CFBamDoubleColObj.hpp>
#include <cfbamobj/CFBamFloatDefObj.hpp>
#include <cfbamobj/CFBamFloatTypeObj.hpp>
#include <cfbamobj/CFBamFloatColObj.hpp>
#include <cfbamobj/CFBamInt16DefObj.hpp>
#include <cfbamobj/CFBamInt16TypeObj.hpp>
#include <cfbamobj/CFBamId16GenObj.hpp>
#include <cfbamobj/CFBamEnumDefObj.hpp>
#include <cfbamobj/CFBamEnumTypeObj.hpp>
#include <cfbamobj/CFBamInt16ColObj.hpp>
#include <cfbamobj/CFBamInt32DefObj.hpp>
#include <cfbamobj/CFBamInt32TypeObj.hpp>
#include <cfbamobj/CFBamId32GenObj.hpp>
#include <cfbamobj/CFBamInt32ColObj.hpp>
#include <cfbamobj/CFBamInt64DefObj.hpp>
#include <cfbamobj/CFBamInt64TypeObj.hpp>
#include <cfbamobj/CFBamId64GenObj.hpp>
#include <cfbamobj/CFBamInt64ColObj.hpp>
#include <cfbamobj/CFBamNmTokenDefObj.hpp>
#include <cfbamobj/CFBamNmTokenTypeObj.hpp>
#include <cfbamobj/CFBamNmTokenColObj.hpp>
#include <cfbamobj/CFBamNmTokensDefObj.hpp>
#include <cfbamobj/CFBamNmTokensTypeObj.hpp>
#include <cfbamobj/CFBamNmTokensColObj.hpp>
#include <cfbamobj/CFBamNumberDefObj.hpp>
#include <cfbamobj/CFBamNumberTypeObj.hpp>
#include <cfbamobj/CFBamNumberColObj.hpp>
#include <cfbamobj/CFBamStringDefObj.hpp>
#include <cfbamobj/CFBamStringTypeObj.hpp>
#include <cfbamobj/CFBamStringColObj.hpp>
#include <cfbamobj/CFBamTZDateDefObj.hpp>
#include <cfbamobj/CFBamTZDateTypeObj.hpp>
#include <cfbamobj/CFBamTZDateColObj.hpp>
#include <cfbamobj/CFBamTZTimeDefObj.hpp>
#include <cfbamobj/CFBamTZTimeTypeObj.hpp>
#include <cfbamobj/CFBamTZTimeColObj.hpp>
#include <cfbamobj/CFBamTZTimestampDefObj.hpp>
#include <cfbamobj/CFBamTZTimestampTypeObj.hpp>
#include <cfbamobj/CFBamTZTimestampColObj.hpp>
#include <cfbamobj/CFBamTextDefObj.hpp>
#include <cfbamobj/CFBamTextTypeObj.hpp>
#include <cfbamobj/CFBamTextColObj.hpp>
#include <cfbamobj/CFBamTimeDefObj.hpp>
#include <cfbamobj/CFBamTimeTypeObj.hpp>
#include <cfbamobj/CFBamTimeColObj.hpp>
#include <cfbamobj/CFBamTimestampDefObj.hpp>
#include <cfbamobj/CFBamTimestampTypeObj.hpp>
#include <cfbamobj/CFBamTimestampColObj.hpp>
#include <cfbamobj/CFBamTokenDefObj.hpp>
#include <cfbamobj/CFBamTokenTypeObj.hpp>
#include <cfbamobj/CFBamTokenColObj.hpp>
#include <cfbamobj/CFBamUInt16DefObj.hpp>
#include <cfbamobj/CFBamUInt16TypeObj.hpp>
#include <cfbamobj/CFBamUInt16ColObj.hpp>
#include <cfbamobj/CFBamUInt32DefObj.hpp>
#include <cfbamobj/CFBamUInt32TypeObj.hpp>
#include <cfbamobj/CFBamUInt32ColObj.hpp>
#include <cfbamobj/CFBamUInt64DefObj.hpp>
#include <cfbamobj/CFBamUInt64TypeObj.hpp>
#include <cfbamobj/CFBamUInt64ColObj.hpp>
#include <cfbamobj/CFBamUuidDefObj.hpp>
#include <cfbamobj/CFBamUuidTypeObj.hpp>
#include <cfbamobj/CFBamUuidGenObj.hpp>
#include <cfbamobj/CFBamUuidColObj.hpp>
#include <cfbamobj/CFBamTableColObj.hpp>

#include <cfbamobj/CFBamChainEditObj.hpp>
#include <cfbamobj/CFBamClusterEditObj.hpp>
#include <cfbamobj/CFBamEnumTagEditObj.hpp>
#include <cfbamobj/CFBamHostNodeEditObj.hpp>
#include <cfbamobj/CFBamISOCcyEditObj.hpp>
#include <cfbamobj/CFBamISOCtryEditObj.hpp>
#include <cfbamobj/CFBamISOCtryCcyEditObj.hpp>
#include <cfbamobj/CFBamISOCtryLangEditObj.hpp>
#include <cfbamobj/CFBamISOLangEditObj.hpp>
#include <cfbamobj/CFBamISOTZoneEditObj.hpp>
#include <cfbamobj/CFBamIndexColEditObj.hpp>
#include <cfbamobj/CFBamLicenseEditObj.hpp>
#include <cfbamobj/CFBamMajorVersionEditObj.hpp>
#include <cfbamobj/CFBamMimeTypeEditObj.hpp>
#include <cfbamobj/CFBamMinorVersionEditObj.hpp>
#include <cfbamobj/CFBamParamEditObj.hpp>
#include <cfbamobj/CFBamRelationColEditObj.hpp>
#include <cfbamobj/CFBamScopeEditObj.hpp>
#include <cfbamobj/CFBamSchemaDefEditObj.hpp>
#include <cfbamobj/CFBamSchemaRefEditObj.hpp>
#include <cfbamobj/CFBamServerMethodEditObj.hpp>
#include <cfbamobj/CFBamServerObjFuncEditObj.hpp>
#include <cfbamobj/CFBamServerProcEditObj.hpp>
#include <cfbamobj/CFBamServerListFuncEditObj.hpp>
#include <cfbamobj/CFBamTableEditObj.hpp>
#include <cfbamobj/CFBamClearDepEditObj.hpp>
#include <cfbamobj/CFBamClearSubDep1EditObj.hpp>
#include <cfbamobj/CFBamClearSubDep2EditObj.hpp>
#include <cfbamobj/CFBamClearSubDep3EditObj.hpp>
#include <cfbamobj/CFBamClearTopDepEditObj.hpp>
#include <cfbamobj/CFBamDelDepEditObj.hpp>
#include <cfbamobj/CFBamDelSubDep1EditObj.hpp>
#include <cfbamobj/CFBamDelSubDep2EditObj.hpp>
#include <cfbamobj/CFBamDelSubDep3EditObj.hpp>
#include <cfbamobj/CFBamDelTopDepEditObj.hpp>
#include <cfbamobj/CFBamIndexEditObj.hpp>
#include <cfbamobj/CFBamPopDepEditObj.hpp>
#include <cfbamobj/CFBamPopSubDep1EditObj.hpp>
#include <cfbamobj/CFBamPopSubDep2EditObj.hpp>
#include <cfbamobj/CFBamPopSubDep3EditObj.hpp>
#include <cfbamobj/CFBamPopTopDepEditObj.hpp>
#include <cfbamobj/CFBamRelationEditObj.hpp>
#include <cfbamobj/CFBamSecAppEditObj.hpp>
#include <cfbamobj/CFBamSecDeviceEditObj.hpp>
#include <cfbamobj/CFBamSecFormEditObj.hpp>
#include <cfbamobj/CFBamSecGroupEditObj.hpp>
#include <cfbamobj/CFBamSecGroupFormEditObj.hpp>
#include <cfbamobj/CFBamSecGrpIncEditObj.hpp>
#include <cfbamobj/CFBamSecGrpMembEditObj.hpp>
#include <cfbamobj/CFBamSecSessionEditObj.hpp>
#include <cfbamobj/CFBamSecUserEditObj.hpp>
#include <cfbamobj/CFBamServiceEditObj.hpp>
#include <cfbamobj/CFBamServiceTypeEditObj.hpp>
#include <cfbamobj/CFBamSubProjectEditObj.hpp>
#include <cfbamobj/CFBamSysClusterEditObj.hpp>
#include <cfbamobj/CFBamTSecGroupEditObj.hpp>
#include <cfbamobj/CFBamTSecGrpIncEditObj.hpp>
#include <cfbamobj/CFBamTSecGrpMembEditObj.hpp>
#include <cfbamobj/CFBamTenantEditObj.hpp>
#include <cfbamobj/CFBamTldEditObj.hpp>
#include <cfbamobj/CFBamTopDomainEditObj.hpp>
#include <cfbamobj/CFBamTopProjectEditObj.hpp>
#include <cfbamobj/CFBamURLProtocolEditObj.hpp>
#include <cfbamobj/CFBamValueEditObj.hpp>
#include <cfbamobj/CFBamAtomEditObj.hpp>
#include <cfbamobj/CFBamBlobDefEditObj.hpp>
#include <cfbamobj/CFBamBlobTypeEditObj.hpp>
#include <cfbamobj/CFBamBlobColEditObj.hpp>
#include <cfbamobj/CFBamBoolDefEditObj.hpp>
#include <cfbamobj/CFBamBoolTypeEditObj.hpp>
#include <cfbamobj/CFBamBoolColEditObj.hpp>
#include <cfbamobj/CFBamDateDefEditObj.hpp>
#include <cfbamobj/CFBamDateTypeEditObj.hpp>
#include <cfbamobj/CFBamDateColEditObj.hpp>
#include <cfbamobj/CFBamDoubleDefEditObj.hpp>
#include <cfbamobj/CFBamDoubleTypeEditObj.hpp>
#include <cfbamobj/CFBamDoubleColEditObj.hpp>
#include <cfbamobj/CFBamFloatDefEditObj.hpp>
#include <cfbamobj/CFBamFloatTypeEditObj.hpp>
#include <cfbamobj/CFBamFloatColEditObj.hpp>
#include <cfbamobj/CFBamInt16DefEditObj.hpp>
#include <cfbamobj/CFBamInt16TypeEditObj.hpp>
#include <cfbamobj/CFBamId16GenEditObj.hpp>
#include <cfbamobj/CFBamEnumDefEditObj.hpp>
#include <cfbamobj/CFBamEnumTypeEditObj.hpp>
#include <cfbamobj/CFBamInt16ColEditObj.hpp>
#include <cfbamobj/CFBamInt32DefEditObj.hpp>
#include <cfbamobj/CFBamInt32TypeEditObj.hpp>
#include <cfbamobj/CFBamId32GenEditObj.hpp>
#include <cfbamobj/CFBamInt32ColEditObj.hpp>
#include <cfbamobj/CFBamInt64DefEditObj.hpp>
#include <cfbamobj/CFBamInt64TypeEditObj.hpp>
#include <cfbamobj/CFBamId64GenEditObj.hpp>
#include <cfbamobj/CFBamInt64ColEditObj.hpp>
#include <cfbamobj/CFBamNmTokenDefEditObj.hpp>
#include <cfbamobj/CFBamNmTokenTypeEditObj.hpp>
#include <cfbamobj/CFBamNmTokenColEditObj.hpp>
#include <cfbamobj/CFBamNmTokensDefEditObj.hpp>
#include <cfbamobj/CFBamNmTokensTypeEditObj.hpp>
#include <cfbamobj/CFBamNmTokensColEditObj.hpp>
#include <cfbamobj/CFBamNumberDefEditObj.hpp>
#include <cfbamobj/CFBamNumberTypeEditObj.hpp>
#include <cfbamobj/CFBamNumberColEditObj.hpp>
#include <cfbamobj/CFBamStringDefEditObj.hpp>
#include <cfbamobj/CFBamStringTypeEditObj.hpp>
#include <cfbamobj/CFBamStringColEditObj.hpp>
#include <cfbamobj/CFBamTZDateDefEditObj.hpp>
#include <cfbamobj/CFBamTZDateTypeEditObj.hpp>
#include <cfbamobj/CFBamTZDateColEditObj.hpp>
#include <cfbamobj/CFBamTZTimeDefEditObj.hpp>
#include <cfbamobj/CFBamTZTimeTypeEditObj.hpp>
#include <cfbamobj/CFBamTZTimeColEditObj.hpp>
#include <cfbamobj/CFBamTZTimestampDefEditObj.hpp>
#include <cfbamobj/CFBamTZTimestampTypeEditObj.hpp>
#include <cfbamobj/CFBamTZTimestampColEditObj.hpp>
#include <cfbamobj/CFBamTextDefEditObj.hpp>
#include <cfbamobj/CFBamTextTypeEditObj.hpp>
#include <cfbamobj/CFBamTextColEditObj.hpp>
#include <cfbamobj/CFBamTimeDefEditObj.hpp>
#include <cfbamobj/CFBamTimeTypeEditObj.hpp>
#include <cfbamobj/CFBamTimeColEditObj.hpp>
#include <cfbamobj/CFBamTimestampDefEditObj.hpp>
#include <cfbamobj/CFBamTimestampTypeEditObj.hpp>
#include <cfbamobj/CFBamTimestampColEditObj.hpp>
#include <cfbamobj/CFBamTokenDefEditObj.hpp>
#include <cfbamobj/CFBamTokenTypeEditObj.hpp>
#include <cfbamobj/CFBamTokenColEditObj.hpp>
#include <cfbamobj/CFBamUInt16DefEditObj.hpp>
#include <cfbamobj/CFBamUInt16TypeEditObj.hpp>
#include <cfbamobj/CFBamUInt16ColEditObj.hpp>
#include <cfbamobj/CFBamUInt32DefEditObj.hpp>
#include <cfbamobj/CFBamUInt32TypeEditObj.hpp>
#include <cfbamobj/CFBamUInt32ColEditObj.hpp>
#include <cfbamobj/CFBamUInt64DefEditObj.hpp>
#include <cfbamobj/CFBamUInt64TypeEditObj.hpp>
#include <cfbamobj/CFBamUInt64ColEditObj.hpp>
#include <cfbamobj/CFBamUuidDefEditObj.hpp>
#include <cfbamobj/CFBamUuidTypeEditObj.hpp>
#include <cfbamobj/CFBamUuidGenEditObj.hpp>
#include <cfbamobj/CFBamUuidColEditObj.hpp>
#include <cfbamobj/CFBamTableColEditObj.hpp>

#include <cfbamobj/CFBamChainTableObj.hpp>
#include <cfbamobj/CFBamClusterTableObj.hpp>
#include <cfbamobj/CFBamEnumTagTableObj.hpp>
#include <cfbamobj/CFBamHostNodeTableObj.hpp>
#include <cfbamobj/CFBamISOCcyTableObj.hpp>
#include <cfbamobj/CFBamISOCtryTableObj.hpp>
#include <cfbamobj/CFBamISOCtryCcyTableObj.hpp>
#include <cfbamobj/CFBamISOCtryLangTableObj.hpp>
#include <cfbamobj/CFBamISOLangTableObj.hpp>
#include <cfbamobj/CFBamISOTZoneTableObj.hpp>
#include <cfbamobj/CFBamIndexColTableObj.hpp>
#include <cfbamobj/CFBamLicenseTableObj.hpp>
#include <cfbamobj/CFBamMajorVersionTableObj.hpp>
#include <cfbamobj/CFBamMimeTypeTableObj.hpp>
#include <cfbamobj/CFBamMinorVersionTableObj.hpp>
#include <cfbamobj/CFBamParamTableObj.hpp>
#include <cfbamobj/CFBamRelationColTableObj.hpp>
#include <cfbamobj/CFBamScopeTableObj.hpp>
#include <cfbamobj/CFBamSchemaDefTableObj.hpp>
#include <cfbamobj/CFBamSchemaRefTableObj.hpp>
#include <cfbamobj/CFBamServerMethodTableObj.hpp>
#include <cfbamobj/CFBamServerObjFuncTableObj.hpp>
#include <cfbamobj/CFBamServerProcTableObj.hpp>
#include <cfbamobj/CFBamServerListFuncTableObj.hpp>
#include <cfbamobj/CFBamTableTableObj.hpp>
#include <cfbamobj/CFBamClearDepTableObj.hpp>
#include <cfbamobj/CFBamClearSubDep1TableObj.hpp>
#include <cfbamobj/CFBamClearSubDep2TableObj.hpp>
#include <cfbamobj/CFBamClearSubDep3TableObj.hpp>
#include <cfbamobj/CFBamClearTopDepTableObj.hpp>
#include <cfbamobj/CFBamDelDepTableObj.hpp>
#include <cfbamobj/CFBamDelSubDep1TableObj.hpp>
#include <cfbamobj/CFBamDelSubDep2TableObj.hpp>
#include <cfbamobj/CFBamDelSubDep3TableObj.hpp>
#include <cfbamobj/CFBamDelTopDepTableObj.hpp>
#include <cfbamobj/CFBamIndexTableObj.hpp>
#include <cfbamobj/CFBamPopDepTableObj.hpp>
#include <cfbamobj/CFBamPopSubDep1TableObj.hpp>
#include <cfbamobj/CFBamPopSubDep2TableObj.hpp>
#include <cfbamobj/CFBamPopSubDep3TableObj.hpp>
#include <cfbamobj/CFBamPopTopDepTableObj.hpp>
#include <cfbamobj/CFBamRelationTableObj.hpp>
#include <cfbamobj/CFBamSecAppTableObj.hpp>
#include <cfbamobj/CFBamSecDeviceTableObj.hpp>
#include <cfbamobj/CFBamSecFormTableObj.hpp>
#include <cfbamobj/CFBamSecGroupTableObj.hpp>
#include <cfbamobj/CFBamSecGroupFormTableObj.hpp>
#include <cfbamobj/CFBamSecGrpIncTableObj.hpp>
#include <cfbamobj/CFBamSecGrpMembTableObj.hpp>
#include <cfbamobj/CFBamSecSessionTableObj.hpp>
#include <cfbamobj/CFBamSecUserTableObj.hpp>
#include <cfbamobj/CFBamServiceTableObj.hpp>
#include <cfbamobj/CFBamServiceTypeTableObj.hpp>
#include <cfbamobj/CFBamSubProjectTableObj.hpp>
#include <cfbamobj/CFBamSysClusterTableObj.hpp>
#include <cfbamobj/CFBamTSecGroupTableObj.hpp>
#include <cfbamobj/CFBamTSecGrpIncTableObj.hpp>
#include <cfbamobj/CFBamTSecGrpMembTableObj.hpp>
#include <cfbamobj/CFBamTenantTableObj.hpp>
#include <cfbamobj/CFBamTldTableObj.hpp>
#include <cfbamobj/CFBamTopDomainTableObj.hpp>
#include <cfbamobj/CFBamTopProjectTableObj.hpp>
#include <cfbamobj/CFBamURLProtocolTableObj.hpp>
#include <cfbamobj/CFBamValueTableObj.hpp>
#include <cfbamobj/CFBamAtomTableObj.hpp>
#include <cfbamobj/CFBamBlobDefTableObj.hpp>
#include <cfbamobj/CFBamBlobTypeTableObj.hpp>
#include <cfbamobj/CFBamBlobColTableObj.hpp>
#include <cfbamobj/CFBamBoolDefTableObj.hpp>
#include <cfbamobj/CFBamBoolTypeTableObj.hpp>
#include <cfbamobj/CFBamBoolColTableObj.hpp>
#include <cfbamobj/CFBamDateDefTableObj.hpp>
#include <cfbamobj/CFBamDateTypeTableObj.hpp>
#include <cfbamobj/CFBamDateColTableObj.hpp>
#include <cfbamobj/CFBamDoubleDefTableObj.hpp>
#include <cfbamobj/CFBamDoubleTypeTableObj.hpp>
#include <cfbamobj/CFBamDoubleColTableObj.hpp>
#include <cfbamobj/CFBamFloatDefTableObj.hpp>
#include <cfbamobj/CFBamFloatTypeTableObj.hpp>
#include <cfbamobj/CFBamFloatColTableObj.hpp>
#include <cfbamobj/CFBamInt16DefTableObj.hpp>
#include <cfbamobj/CFBamInt16TypeTableObj.hpp>
#include <cfbamobj/CFBamId16GenTableObj.hpp>
#include <cfbamobj/CFBamEnumDefTableObj.hpp>
#include <cfbamobj/CFBamEnumTypeTableObj.hpp>
#include <cfbamobj/CFBamInt16ColTableObj.hpp>
#include <cfbamobj/CFBamInt32DefTableObj.hpp>
#include <cfbamobj/CFBamInt32TypeTableObj.hpp>
#include <cfbamobj/CFBamId32GenTableObj.hpp>
#include <cfbamobj/CFBamInt32ColTableObj.hpp>
#include <cfbamobj/CFBamInt64DefTableObj.hpp>
#include <cfbamobj/CFBamInt64TypeTableObj.hpp>
#include <cfbamobj/CFBamId64GenTableObj.hpp>
#include <cfbamobj/CFBamInt64ColTableObj.hpp>
#include <cfbamobj/CFBamNmTokenDefTableObj.hpp>
#include <cfbamobj/CFBamNmTokenTypeTableObj.hpp>
#include <cfbamobj/CFBamNmTokenColTableObj.hpp>
#include <cfbamobj/CFBamNmTokensDefTableObj.hpp>
#include <cfbamobj/CFBamNmTokensTypeTableObj.hpp>
#include <cfbamobj/CFBamNmTokensColTableObj.hpp>
#include <cfbamobj/CFBamNumberDefTableObj.hpp>
#include <cfbamobj/CFBamNumberTypeTableObj.hpp>
#include <cfbamobj/CFBamNumberColTableObj.hpp>
#include <cfbamobj/CFBamStringDefTableObj.hpp>
#include <cfbamobj/CFBamStringTypeTableObj.hpp>
#include <cfbamobj/CFBamStringColTableObj.hpp>
#include <cfbamobj/CFBamTZDateDefTableObj.hpp>
#include <cfbamobj/CFBamTZDateTypeTableObj.hpp>
#include <cfbamobj/CFBamTZDateColTableObj.hpp>
#include <cfbamobj/CFBamTZTimeDefTableObj.hpp>
#include <cfbamobj/CFBamTZTimeTypeTableObj.hpp>
#include <cfbamobj/CFBamTZTimeColTableObj.hpp>
#include <cfbamobj/CFBamTZTimestampDefTableObj.hpp>
#include <cfbamobj/CFBamTZTimestampTypeTableObj.hpp>
#include <cfbamobj/CFBamTZTimestampColTableObj.hpp>
#include <cfbamobj/CFBamTextDefTableObj.hpp>
#include <cfbamobj/CFBamTextTypeTableObj.hpp>
#include <cfbamobj/CFBamTextColTableObj.hpp>
#include <cfbamobj/CFBamTimeDefTableObj.hpp>
#include <cfbamobj/CFBamTimeTypeTableObj.hpp>
#include <cfbamobj/CFBamTimeColTableObj.hpp>
#include <cfbamobj/CFBamTimestampDefTableObj.hpp>
#include <cfbamobj/CFBamTimestampTypeTableObj.hpp>
#include <cfbamobj/CFBamTimestampColTableObj.hpp>
#include <cfbamobj/CFBamTokenDefTableObj.hpp>
#include <cfbamobj/CFBamTokenTypeTableObj.hpp>
#include <cfbamobj/CFBamTokenColTableObj.hpp>
#include <cfbamobj/CFBamUInt16DefTableObj.hpp>
#include <cfbamobj/CFBamUInt16TypeTableObj.hpp>
#include <cfbamobj/CFBamUInt16ColTableObj.hpp>
#include <cfbamobj/CFBamUInt32DefTableObj.hpp>
#include <cfbamobj/CFBamUInt32TypeTableObj.hpp>
#include <cfbamobj/CFBamUInt32ColTableObj.hpp>
#include <cfbamobj/CFBamUInt64DefTableObj.hpp>
#include <cfbamobj/CFBamUInt64TypeTableObj.hpp>
#include <cfbamobj/CFBamUInt64ColTableObj.hpp>
#include <cfbamobj/CFBamUuidDefTableObj.hpp>
#include <cfbamobj/CFBamUuidTypeTableObj.hpp>
#include <cfbamobj/CFBamUuidGenTableObj.hpp>
#include <cfbamobj/CFBamUuidColTableObj.hpp>
#include <cfbamobj/CFBamTableColTableObj.hpp>

namespace cfbam {

	const std::string CFBamChainTableObj::CLASS_NAME( "CFBamChainTableObj" );
	const std::string CFBamChainTableObj::TABLE_NAME( "Chain" );
	const std::string CFBamChainTableObj::TABLE_DBNAME( "chain_def" );

	CFBamChainTableObj::CFBamChainTableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>();
		allChain = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamChainByTenantIdxKey,
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		indexByChainTableIdx = new std::map< cfbam::CFBamChainByChainTableIdxKey,
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamChainByDefSchemaIdxKey,
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamChainByUNameIdxKey,
			cfbam::ICFBamChainObj*>();
		indexByPrevRelIdx = new std::map< cfbam::CFBamChainByPrevRelIdxKey,
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		indexByNextRelIdx = new std::map< cfbam::CFBamChainByNextRelIdxKey,
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
	}

	CFBamChainTableObj::CFBamChainTableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>();
		allChain = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamChainByTenantIdxKey,
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		indexByChainTableIdx = new std::map< cfbam::CFBamChainByChainTableIdxKey,
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamChainByDefSchemaIdxKey,
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamChainByUNameIdxKey,
			cfbam::ICFBamChainObj*>();
		indexByPrevRelIdx = new std::map< cfbam::CFBamChainByPrevRelIdxKey,
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		indexByNextRelIdx = new std::map< cfbam::CFBamChainByNextRelIdxKey,
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
	}

	CFBamChainTableObj::~CFBamChainTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByChainTableIdx != NULL ) {
			delete indexByChainTableIdx;
			indexByChainTableIdx = NULL;
		}
		if( indexByDefSchemaIdx != NULL ) {
			delete indexByDefSchemaIdx;
			indexByDefSchemaIdx = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( indexByPrevRelIdx != NULL ) {
			delete indexByPrevRelIdx;
			indexByPrevRelIdx = NULL;
		}
		if( indexByNextRelIdx != NULL ) {
			delete indexByNextRelIdx;
			indexByNextRelIdx = NULL;
		}
		if( members != NULL ) {
			cfbam::ICFBamChainObj* curMember;
			auto membersIter = members->begin();
			while( membersIter != members->end() ) {
				curMember = membersIter->second;
				if( curMember != NULL ) {
					delete curMember;
				}
				members->erase( membersIter );
				membersIter = members->begin();
			}
			delete members;
			members = NULL;
		}
	}

	cfbam::ICFBamSchemaObj* CFBamChainTableObj::getSchema() {
		return( schema );
	}

	void CFBamChainTableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamChainTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamChainTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamChainTableObj::getObjQualifyingClassCode() {
		return( &cfbam::CFBamSchemaDefBuff::CLASS_CODE );
	}


	void CFBamChainTableObj::minimizeMemory() {
		if( allChain != NULL ) {
			allChain->clear();
			delete allChain;
			allChain = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfbam::CFBamChainByTenantIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfbam::CFBamChainByTenantIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* curByTenantIdx = NULL;
			while( iterByTenantIdx != endByTenantIdx ) {
				curByTenantIdx = iterByTenantIdx->second;
				if( curByTenantIdx != NULL ) {
					curByTenantIdx->clear();
					delete curByTenantIdx;
					curByTenantIdx = NULL;
					iterByTenantIdx->second = NULL;
				}
				iterByTenantIdx ++;
			}
			indexByTenantIdx->clear();
		}
		if( indexByChainTableIdx != NULL ) {
			std::map< cfbam::CFBamChainByChainTableIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* >::iterator iterByChainTableIdx = indexByChainTableIdx->begin();
			std::map< cfbam::CFBamChainByChainTableIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* >::iterator endByChainTableIdx = indexByChainTableIdx->end();
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* curByChainTableIdx = NULL;
			while( iterByChainTableIdx != endByChainTableIdx ) {
				curByChainTableIdx = iterByChainTableIdx->second;
				if( curByChainTableIdx != NULL ) {
					curByChainTableIdx->clear();
					delete curByChainTableIdx;
					curByChainTableIdx = NULL;
					iterByChainTableIdx->second = NULL;
				}
				iterByChainTableIdx ++;
			}
			indexByChainTableIdx->clear();
		}
		if( indexByDefSchemaIdx != NULL ) {
			std::map< cfbam::CFBamChainByDefSchemaIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* >::iterator iterByDefSchemaIdx = indexByDefSchemaIdx->begin();
			std::map< cfbam::CFBamChainByDefSchemaIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* >::iterator endByDefSchemaIdx = indexByDefSchemaIdx->end();
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* curByDefSchemaIdx = NULL;
			while( iterByDefSchemaIdx != endByDefSchemaIdx ) {
				curByDefSchemaIdx = iterByDefSchemaIdx->second;
				if( curByDefSchemaIdx != NULL ) {
					curByDefSchemaIdx->clear();
					delete curByDefSchemaIdx;
					curByDefSchemaIdx = NULL;
					iterByDefSchemaIdx->second = NULL;
				}
				iterByDefSchemaIdx ++;
			}
			indexByDefSchemaIdx->clear();
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( indexByPrevRelIdx != NULL ) {
			std::map< cfbam::CFBamChainByPrevRelIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* >::iterator iterByPrevRelIdx = indexByPrevRelIdx->begin();
			std::map< cfbam::CFBamChainByPrevRelIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* >::iterator endByPrevRelIdx = indexByPrevRelIdx->end();
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* curByPrevRelIdx = NULL;
			while( iterByPrevRelIdx != endByPrevRelIdx ) {
				curByPrevRelIdx = iterByPrevRelIdx->second;
				if( curByPrevRelIdx != NULL ) {
					curByPrevRelIdx->clear();
					delete curByPrevRelIdx;
					curByPrevRelIdx = NULL;
					iterByPrevRelIdx->second = NULL;
				}
				iterByPrevRelIdx ++;
			}
			indexByPrevRelIdx->clear();
		}
		if( indexByNextRelIdx != NULL ) {
			std::map< cfbam::CFBamChainByNextRelIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* >::iterator iterByNextRelIdx = indexByNextRelIdx->begin();
			std::map< cfbam::CFBamChainByNextRelIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* >::iterator endByNextRelIdx = indexByNextRelIdx->end();
			std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* curByNextRelIdx = NULL;
			while( iterByNextRelIdx != endByNextRelIdx ) {
				curByNextRelIdx = iterByNextRelIdx->second;
				if( curByNextRelIdx != NULL ) {
					curByNextRelIdx->clear();
					delete curByNextRelIdx;
					curByNextRelIdx = NULL;
					iterByNextRelIdx->second = NULL;
				}
				iterByNextRelIdx ++;
			}
			indexByNextRelIdx->clear();
		}
		if( members != NULL ) {
			cfbam::ICFBamChainObj* cur = NULL;
			cfbam::ICFBamChainEditObj* edit = NULL;
			auto iter = members->begin();
			auto end = members->end();
			while( iter != end ) {
				cur = iter->second;
				if( cur != NULL ) {
					iter->second = NULL;
					edit = cur->getEdit();
					if( edit != NULL ) {
						edit->endEdit();
						edit = NULL;
					}
					delete cur;
					cur = NULL;
				}
				iter ++;
			}
			members->clear();
		}
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::newInstance() {
		cfbam::ICFBamChainObj* inst = dynamic_cast<cfbam::ICFBamChainObj*>( new CFBamChainObj( schema ) );
		return( inst );
	}

	cfbam::ICFBamChainEditObj* CFBamChainTableObj::newEditInstance( cfbam::ICFBamChainObj* orig ) {
		cfbam::ICFBamChainEditObj* edit = dynamic_cast<cfbam::ICFBamChainEditObj*>( new CFBamChainEditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::realizeChain( cfbam::ICFBamChainObj* Obj ) {
		static const std::string S_ProcName( "realizeChain" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamChainObj* obj = Obj;
		cfbam::ICFBamChainObj* existingObj = NULL;
		cfbam::CFBamChainPKey* pkey = obj->getPKey();
		cfbam::ICFBamChainObj* keepObj = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			keepObj = existingObj;
			pkey = keepObj->getPKey();
			/*
			 *	We always rebind the data because if we're being called, some index may have been
			 *	updated and is refreshing it's data, which may require binding a different lookup key
			 */
			// Detach object from alternate and duplicate indexes, leave PKey alone
			if( indexByTenantIdx != NULL ) {
				cfbam::CFBamChainByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByChainTableIdx != NULL ) {
				cfbam::CFBamChainByChainTableIdxKey keyChainTableIdx;
				keyChainTableIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyChainTableIdx.setRequiredTableId( keepObj->getRequiredTableId() );
				auto searchChainTableIdx = indexByChainTableIdx->find( keyChainTableIdx );
				if( searchChainTableIdx != indexByChainTableIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapChainTableIdx = searchChainTableIdx->second;
					if( mapChainTableIdx != NULL ) {
						auto removalProbe = mapChainTableIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapChainTableIdx->end() ) {
							mapChainTableIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamChainByDefSchemaIdxKey keyDefSchemaIdx;
				if( keepObj->isOptionalDefSchemaTenantIdNull() ) {
					keyDefSchemaIdx.setOptionalDefSchemaTenantIdNull();
				}
				else {
					keyDefSchemaIdx.setOptionalDefSchemaTenantIdValue( keepObj->getOptionalDefSchemaTenantIdValue() );
				}
				if( keepObj->isOptionalDefSchemaIdNull() ) {
					keyDefSchemaIdx.setOptionalDefSchemaIdNull();
				}
				else {
					keyDefSchemaIdx.setOptionalDefSchemaIdValue( keepObj->getOptionalDefSchemaIdValue() );
				}
				auto searchDefSchemaIdx = indexByDefSchemaIdx->find( keyDefSchemaIdx );
				if( searchDefSchemaIdx != indexByDefSchemaIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapDefSchemaIdx->end() ) {
							mapDefSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamChainByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredTableId( keepObj->getRequiredTableId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByPrevRelIdx != NULL ) {
				cfbam::CFBamChainByPrevRelIdxKey keyPrevRelIdx;
				keyPrevRelIdx.setRequiredPrevRelationTenantId( keepObj->getRequiredPrevRelationTenantId() );
				keyPrevRelIdx.setRequiredPrevRelationId( keepObj->getRequiredPrevRelationId() );
				auto searchPrevRelIdx = indexByPrevRelIdx->find( keyPrevRelIdx );
				if( searchPrevRelIdx != indexByPrevRelIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapPrevRelIdx = searchPrevRelIdx->second;
					if( mapPrevRelIdx != NULL ) {
						auto removalProbe = mapPrevRelIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapPrevRelIdx->end() ) {
							mapPrevRelIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByNextRelIdx != NULL ) {
				cfbam::CFBamChainByNextRelIdxKey keyNextRelIdx;
				keyNextRelIdx.setRequiredNextRelationTenantId( keepObj->getRequiredNextRelationTenantId() );
				keyNextRelIdx.setRequiredNextRelationId( keepObj->getRequiredNextRelationId() );
				auto searchNextRelIdx = indexByNextRelIdx->find( keyNextRelIdx );
				if( searchNextRelIdx != indexByNextRelIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapNextRelIdx = searchNextRelIdx->second;
					if( mapNextRelIdx != NULL ) {
						auto removalProbe = mapNextRelIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapNextRelIdx->end() ) {
							mapNextRelIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfbam::CFBamChainBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfbam::ICFBamChainObj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamChainObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfbam::CFBamChainByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByChainTableIdx != NULL ) {
				static const std::string S_AChainTableIdxObj( "aChainTableIdxObj" );
				cfbam::ICFBamChainObj* aChainTableIdxObj =
					dynamic_cast<cfbam::ICFBamChainObj*>( keepObj );
				if( aChainTableIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AChainTableIdxObj );
				}
				cfbam::CFBamChainByChainTableIdxKey keyChainTableIdx;
				keyChainTableIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyChainTableIdx.setRequiredTableId( keepObj->getRequiredTableId() );
				auto searchIndexByChainTableIdx = indexByChainTableIdx->find( keyChainTableIdx );
				if( searchIndexByChainTableIdx != indexByChainTableIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapChainTableIdx = searchIndexByChainTableIdx->second;
					if( mapChainTableIdx != NULL ) {
						mapChainTableIdx->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), aChainTableIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamChainObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamChainObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamChainByDefSchemaIdxKey keyDefSchemaIdx;
				if( keepObj->isOptionalDefSchemaTenantIdNull() ) {
					keyDefSchemaIdx.setOptionalDefSchemaTenantIdNull();
				}
				else {
					keyDefSchemaIdx.setOptionalDefSchemaTenantIdValue( keepObj->getOptionalDefSchemaTenantIdValue() );
				}
				if( keepObj->isOptionalDefSchemaIdNull() ) {
					keyDefSchemaIdx.setOptionalDefSchemaIdNull();
				}
				else {
					keyDefSchemaIdx.setOptionalDefSchemaIdValue( keepObj->getOptionalDefSchemaIdValue() );
				}
				auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( keyDefSchemaIdx );
				if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamChainObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamChainObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamChainByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredTableId( keepObj->getRequiredTableId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamChainByUNameIdxKey, cfbam::ICFBamChainObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByPrevRelIdx != NULL ) {
				static const std::string S_APrevRelIdxObj( "aPrevRelIdxObj" );
				cfbam::ICFBamChainObj* aPrevRelIdxObj =
					dynamic_cast<cfbam::ICFBamChainObj*>( keepObj );
				if( aPrevRelIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevRelIdxObj );
				}
				cfbam::CFBamChainByPrevRelIdxKey keyPrevRelIdx;
				keyPrevRelIdx.setRequiredPrevRelationTenantId( keepObj->getRequiredPrevRelationTenantId() );
				keyPrevRelIdx.setRequiredPrevRelationId( keepObj->getRequiredPrevRelationId() );
				auto searchIndexByPrevRelIdx = indexByPrevRelIdx->find( keyPrevRelIdx );
				if( searchIndexByPrevRelIdx != indexByPrevRelIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapPrevRelIdx = searchIndexByPrevRelIdx->second;
					if( mapPrevRelIdx != NULL ) {
						mapPrevRelIdx->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), aPrevRelIdxObj ) );
					}
				}
			}

			if( indexByNextRelIdx != NULL ) {
				static const std::string S_ANextRelIdxObj( "aNextRelIdxObj" );
				cfbam::ICFBamChainObj* aNextRelIdxObj =
					dynamic_cast<cfbam::ICFBamChainObj*>( keepObj );
				if( aNextRelIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextRelIdxObj );
				}
				cfbam::CFBamChainByNextRelIdxKey keyNextRelIdx;
				keyNextRelIdx.setRequiredNextRelationTenantId( keepObj->getRequiredNextRelationTenantId() );
				keyNextRelIdx.setRequiredNextRelationId( keepObj->getRequiredNextRelationId() );
				auto searchIndexByNextRelIdx = indexByNextRelIdx->find( keyNextRelIdx );
				if( searchIndexByNextRelIdx != indexByNextRelIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapNextRelIdx = searchIndexByNextRelIdx->second;
					if( mapNextRelIdx != NULL ) {
						mapNextRelIdx->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), aNextRelIdxObj ) );
					}
				}
			}

			if( allChain != NULL ) {
				allChain->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfbam::ICFBamChainObj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamChainObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfbam::CFBamChainByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByChainTableIdx != NULL ) {
				static const std::string S_AChainTableIdxObj( "aChainTableIdxObj" );
				cfbam::ICFBamChainObj* aChainTableIdxObj =
					dynamic_cast<cfbam::ICFBamChainObj*>( keepObj );
				if( aChainTableIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AChainTableIdxObj );
				}
				cfbam::CFBamChainByChainTableIdxKey keyChainTableIdx;
				keyChainTableIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyChainTableIdx.setRequiredTableId( keepObj->getRequiredTableId() );
				auto searchIndexByChainTableIdx = indexByChainTableIdx->find( keyChainTableIdx );
				if( searchIndexByChainTableIdx != indexByChainTableIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapChainTableIdx = searchIndexByChainTableIdx->second;
					if( mapChainTableIdx != NULL ) {
						mapChainTableIdx->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), aChainTableIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamChainObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamChainObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamChainByDefSchemaIdxKey keyDefSchemaIdx;
				if( keepObj->isOptionalDefSchemaTenantIdNull() ) {
					keyDefSchemaIdx.setOptionalDefSchemaTenantIdNull();
				}
				else {
					keyDefSchemaIdx.setOptionalDefSchemaTenantIdValue( keepObj->getOptionalDefSchemaTenantIdValue() );
				}
				if( keepObj->isOptionalDefSchemaIdNull() ) {
					keyDefSchemaIdx.setOptionalDefSchemaIdNull();
				}
				else {
					keyDefSchemaIdx.setOptionalDefSchemaIdValue( keepObj->getOptionalDefSchemaIdValue() );
				}
				auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( keyDefSchemaIdx );
				if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamChainObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamChainObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamChainByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredTableId( keepObj->getRequiredTableId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamChainByUNameIdxKey, cfbam::ICFBamChainObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByPrevRelIdx != NULL ) {
				static const std::string S_APrevRelIdxObj( "aPrevRelIdxObj" );
				cfbam::ICFBamChainObj* aPrevRelIdxObj =
					dynamic_cast<cfbam::ICFBamChainObj*>( keepObj );
				if( aPrevRelIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevRelIdxObj );
				}
				cfbam::CFBamChainByPrevRelIdxKey keyPrevRelIdx;
				keyPrevRelIdx.setRequiredPrevRelationTenantId( keepObj->getRequiredPrevRelationTenantId() );
				keyPrevRelIdx.setRequiredPrevRelationId( keepObj->getRequiredPrevRelationId() );
				auto searchIndexByPrevRelIdx = indexByPrevRelIdx->find( keyPrevRelIdx );
				if( searchIndexByPrevRelIdx != indexByPrevRelIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapPrevRelIdx = searchIndexByPrevRelIdx->second;
					if( mapPrevRelIdx != NULL ) {
						mapPrevRelIdx->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), aPrevRelIdxObj ) );
					}
				}
			}

			if( indexByNextRelIdx != NULL ) {
				static const std::string S_ANextRelIdxObj( "aNextRelIdxObj" );
				cfbam::ICFBamChainObj* aNextRelIdxObj =
					dynamic_cast<cfbam::ICFBamChainObj*>( keepObj );
				if( aNextRelIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextRelIdxObj );
				}
				cfbam::CFBamChainByNextRelIdxKey keyNextRelIdx;
				keyNextRelIdx.setRequiredNextRelationTenantId( keepObj->getRequiredNextRelationTenantId() );
				keyNextRelIdx.setRequiredNextRelationId( keepObj->getRequiredNextRelationId() );
				auto searchIndexByNextRelIdx = indexByNextRelIdx->find( keyNextRelIdx );
				if( searchIndexByNextRelIdx != indexByNextRelIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapNextRelIdx = searchIndexByNextRelIdx->second;
					if( mapNextRelIdx != NULL ) {
						mapNextRelIdx->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), aNextRelIdxObj ) );
					}
				}
			}

			if( allChain != NULL ) {
				allChain->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		if( keepObj != obj ) {
			delete obj;
			obj = NULL;
		}
		// Something is leaking, so I've added this paranoid check
		if( ( keepObj != existingObj ) && ( existingObj != NULL ) ) {
			delete existingObj;
			existingObj = NULL;
		}
		return( keepObj );
	}

	void CFBamChainTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamChainObj*> list;
		cfbam::ICFBamChainObj* existingObj = readCachedChainByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamChainObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamChainBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->reallyDeepDisposeChain( dynamic_cast<cfbam::ICFBamChainObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamChainTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfbam::ICFBamChainObj*> list;
		std::vector<cfbam::ICFBamChainObj*> matchesFound = readCachedChainByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamChainObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamChainBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->reallyDeepDisposeChain( dynamic_cast<cfbam::ICFBamChainObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamChainTableObj::deepDisposeByChainTableIdx( const int64_t TenantId,
			const int64_t TableId ) {
		static const std::string S_ProcName( "deepDisposeByChainTableIdx" );
		std::vector<cfbam::ICFBamChainObj*> list;
		std::vector<cfbam::ICFBamChainObj*> matchesFound = readCachedChainByChainTableIdx( TenantId,
				TableId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamChainObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamChainBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->reallyDeepDisposeChain( dynamic_cast<cfbam::ICFBamChainObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamChainTableObj::deepDisposeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) {
		static const std::string S_ProcName( "deepDisposeByDefSchemaIdx" );
		std::vector<cfbam::ICFBamChainObj*> list;
		std::vector<cfbam::ICFBamChainObj*> matchesFound = readCachedChainByDefSchemaIdx( DefSchemaTenantId,
				DefSchemaId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamChainObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamChainBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->reallyDeepDisposeChain( dynamic_cast<cfbam::ICFBamChainObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamChainTableObj::deepDisposeByUNameIdx( const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfbam::ICFBamChainObj*> list;
		cfbam::ICFBamChainObj* existingObj = readCachedChainByUNameIdx( TenantId,
				TableId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamChainObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamChainBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->reallyDeepDisposeChain( dynamic_cast<cfbam::ICFBamChainObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamChainTableObj::deepDisposeByPrevRelIdx( const int64_t PrevRelationTenantId,
			const int64_t PrevRelationId ) {
		static const std::string S_ProcName( "deepDisposeByPrevRelIdx" );
		std::vector<cfbam::ICFBamChainObj*> list;
		std::vector<cfbam::ICFBamChainObj*> matchesFound = readCachedChainByPrevRelIdx( PrevRelationTenantId,
				PrevRelationId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamChainObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamChainBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->reallyDeepDisposeChain( dynamic_cast<cfbam::ICFBamChainObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamChainTableObj::deepDisposeByNextRelIdx( const int64_t NextRelationTenantId,
			const int64_t NextRelationId ) {
		static const std::string S_ProcName( "deepDisposeByNextRelIdx" );
		std::vector<cfbam::ICFBamChainObj*> list;
		std::vector<cfbam::ICFBamChainObj*> matchesFound = readCachedChainByNextRelIdx( NextRelationTenantId,
				NextRelationId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamChainObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamChainBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->reallyDeepDisposeChain( dynamic_cast<cfbam::ICFBamChainObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamChainTableObj::reallyDeepDisposeChain( cfbam::ICFBamChainObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeChain" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamChainObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamChainBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->reallyDetachFromIndexesChain( dynamic_cast<cfbam::ICFBamChainObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::createChain( cfbam::ICFBamChainEditObj* Obj ) {
		static const std::string S_ProcName( "createChain" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamChainObj* obj = dynamic_cast<cfbam::ICFBamChainObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamChainBuff* buff = dynamic_cast<cfbam::CFBamChainBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->createChain(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamChainBuff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamChainObj*>( obj->realize() );
			if( obj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Obj );
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH
		if( ! CFLIB_EXCEPTION_EMPTY ) {
			if( obj->getEdit() != NULL ) {
				obj->endEdit();
			}
			if( obj->getIsNew() ) {
				delete obj;
				obj = NULL;
			}
			CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
		}
		return( obj );
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::readChain( cfbam::CFBamChainPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readChain" );
		cfbam::ICFBamChainObj* obj = NULL;
		cfbam::ICFBamChainObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamChainBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamChainObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
		}
		return( realized );
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::lockChain( cfbam::CFBamChainPKey* pkey ) {
		static const std::string S_ProcName( "lockChain" );
		cfbam::ICFBamChainObj* locked = NULL;
		cfbam::CFBamChainBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamChainObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamChainTableObj::readAllChain( bool forceRead ) {
		static const std::string S_ProcName( "readAllChain" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamChainObj* realized = NULL;
		if( forceRead || ( allChain == NULL ) ) {
			std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* map = new std::map<cfbam::CFBamChainPKey,cfbam::ICFBamChainObj*>();
			allChain = map;
			std::TCFLibOwningVector<cfbam::CFBamChainBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamChainBuff* buff = NULL;
			cfbam::ICFBamChainObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamChainObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allChain->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(realized->getPKey()), realized ) );
					// No need to delete obj -- realize() auto-destructs the instance it decided to discard
					obj = NULL;
				}
			}
			CFLIB_EXCEPTION_CATCH_FALLTHROUGH

			if( ( obj != NULL ) && obj->getIsNew() ) {
				delete obj;
				obj = NULL;
			}

			CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		}
		size_t len = allChain->size();
		std::vector<cfbam::ICFBamChainObj*> arr;
		auto valIter = allChain->begin();
		size_t idx = 0;
		while( valIter != allChain->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::readChainByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readChainByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamChainPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamChainObj* obj = readChain( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamChainTableObj::readChainByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readChainByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamChainByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* dict;
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfbam::CFBamChainByTenantIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			oldDict = searchIndexByTenantIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>();
			cfbam::ICFBamChainObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamChainBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamChainBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamChainObj* realized = dynamic_cast<cfbam::ICFBamChainObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfbam::CFBamChainByTenantIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamChainObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamChainTableObj::readChainByChainTableIdx( const int64_t TenantId,
			const int64_t TableId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readChainByChainTableIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamChainByChainTableIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* dict;
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* oldDict;
		if( indexByChainTableIdx == NULL ) {
			indexByChainTableIdx = new std::map< cfbam::CFBamChainByChainTableIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		}
		auto searchIndexByChainTableIdx = indexByChainTableIdx->find( key );
		if( searchIndexByChainTableIdx != indexByChainTableIdx->end() ) {
			oldDict = searchIndexByChainTableIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>();
			cfbam::ICFBamChainObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamChainBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->readDerivedByChainTableIdx( schema->getAuthorization(),
				TenantId,
				TableId );
			cfbam::CFBamChainBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamChainObj* realized = dynamic_cast<cfbam::ICFBamChainObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByChainTableIdx->erase( searchIndexByChainTableIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByChainTableIdx->insert( std::map< cfbam::CFBamChainByChainTableIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamChainObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamChainTableObj::readChainByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readChainByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamChainByDefSchemaIdxKey key;
		if( DefSchemaTenantId == NULL ) {
			key.setOptionalDefSchemaTenantIdNull();
		}
		else {
			key.setOptionalDefSchemaTenantIdValue( *DefSchemaTenantId );
		}
		if( DefSchemaId == NULL ) {
			key.setOptionalDefSchemaIdNull();
		}
		else {
			key.setOptionalDefSchemaIdValue( *DefSchemaId );
		}
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* dict;
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* oldDict;
		if( indexByDefSchemaIdx == NULL ) {
			indexByDefSchemaIdx = new std::map< cfbam::CFBamChainByDefSchemaIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		}
		auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( key );
		if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
			oldDict = searchIndexByDefSchemaIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>();
			cfbam::ICFBamChainObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamChainBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->readDerivedByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
			cfbam::CFBamChainBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamChainObj* realized = dynamic_cast<cfbam::ICFBamChainObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDefSchemaIdx->erase( searchIndexByDefSchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDefSchemaIdx->insert( std::map< cfbam::CFBamChainByDefSchemaIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamChainObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::readChainByUNameIdx( const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readChainByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamChainByUNameIdxKey,
				cfbam::ICFBamChainObj*>();
		}
		cfbam::CFBamChainByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::ICFBamChainObj* obj = NULL;
		cfbam::ICFBamChainObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamChainBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->readDerivedByUNameIdx( schema->getAuthorization(),
				TenantId,
				TableId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamChainObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamChainByUNameIdxKey, cfbam::ICFBamChainObj*>::value_type( key, dynamic_cast<cfbam::ICFBamChainObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamChainTableObj::readChainByPrevRelIdx( const int64_t PrevRelationTenantId,
			const int64_t PrevRelationId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readChainByPrevRelIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamChainByPrevRelIdxKey key;
		key.setRequiredPrevRelationTenantId( PrevRelationTenantId );
		key.setRequiredPrevRelationId( PrevRelationId );
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* dict;
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* oldDict;
		if( indexByPrevRelIdx == NULL ) {
			indexByPrevRelIdx = new std::map< cfbam::CFBamChainByPrevRelIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		}
		auto searchIndexByPrevRelIdx = indexByPrevRelIdx->find( key );
		if( searchIndexByPrevRelIdx != indexByPrevRelIdx->end() ) {
			oldDict = searchIndexByPrevRelIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>();
			cfbam::ICFBamChainObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamChainBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->readDerivedByPrevRelIdx( schema->getAuthorization(),
				PrevRelationTenantId,
				PrevRelationId );
			cfbam::CFBamChainBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamChainObj* realized = dynamic_cast<cfbam::ICFBamChainObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByPrevRelIdx->erase( searchIndexByPrevRelIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByPrevRelIdx->insert( std::map< cfbam::CFBamChainByPrevRelIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamChainObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamChainTableObj::readChainByNextRelIdx( const int64_t NextRelationTenantId,
			const int64_t NextRelationId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readChainByNextRelIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamChainByNextRelIdxKey key;
		key.setRequiredNextRelationTenantId( NextRelationTenantId );
		key.setRequiredNextRelationId( NextRelationId );
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* dict;
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* oldDict;
		if( indexByNextRelIdx == NULL ) {
			indexByNextRelIdx = new std::map< cfbam::CFBamChainByNextRelIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>*>();
		}
		auto searchIndexByNextRelIdx = indexByNextRelIdx->find( key );
		if( searchIndexByNextRelIdx != indexByNextRelIdx->end() ) {
			oldDict = searchIndexByNextRelIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>();
			cfbam::ICFBamChainObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamChainBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->readDerivedByNextRelIdx( schema->getAuthorization(),
				NextRelationTenantId,
				NextRelationId );
			cfbam::CFBamChainBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamChainObj* realized = dynamic_cast<cfbam::ICFBamChainObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByNextRelIdx->erase( searchIndexByNextRelIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByNextRelIdx->insert( std::map< cfbam::CFBamChainByNextRelIdxKey,
				std::map< cfbam::CFBamChainPKey, cfbam::ICFBamChainObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamChainObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::readChainByLookupUNameIdx( const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readChainByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamChainByUNameIdxKey,
				cfbam::ICFBamChainObj*>();
		}
		cfbam::CFBamChainByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::ICFBamChainObj* obj = NULL;
		cfbam::ICFBamChainObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				obj = searchIndexByUNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamChainBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->readDerivedByLookupUNameIdx( schema->getAuthorization(),
				TenantId,
				TableId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamChainObj*>( dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamChainObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamChainByUNameIdxKey, cfbam::ICFBamChainObj*>::value_type( key, dynamic_cast<cfbam::ICFBamChainObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::readCachedChain( cfbam::CFBamChainPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readChain" );
		cfbam::ICFBamChainObj* obj = NULL;
		cfbam::ICFBamChainObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::readCachedChainByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedChainByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamChainPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamChainObj* obj = readCachedChain( &pkey );
		return( obj );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamChainTableObj::readCachedChainByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedChainByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamChainObj*> arr;
		cfbam::CFBamChainByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamChainObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamChainObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamChainBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamChainTableObj::readCachedChainByChainTableIdx( const int64_t TenantId,
			const int64_t TableId )
	{
		static const std::string S_ProcName( "readCachedChainByChainTableIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamChainObj*> arr;
		cfbam::CFBamChainByChainTableIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* dict;
		if( indexByChainTableIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByChainTableIdx = indexByChainTableIdx->find( key );
		if( searchIndexByChainTableIdx != indexByChainTableIdx->end() ) {
			dict = searchIndexByChainTableIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamChainObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamChainObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamChainBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamChainTableObj::readCachedChainByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readCachedChainByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamChainObj*> arr;
		cfbam::CFBamChainByDefSchemaIdxKey key;
		if( DefSchemaTenantId == NULL ) {
			key.setOptionalDefSchemaTenantIdNull();
		}
		else {
			key.setOptionalDefSchemaTenantIdValue( *DefSchemaTenantId );
		}
		if( DefSchemaId == NULL ) {
			key.setOptionalDefSchemaIdNull();
		}
		else {
			key.setOptionalDefSchemaIdValue( *DefSchemaId );
		}
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* dict;
		if( indexByDefSchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( key );
		if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
			dict = searchIndexByDefSchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamChainObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamChainObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamChainBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::readCachedChainByUNameIdx( const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedChainByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamChainByUNameIdxKey,
				cfbam::ICFBamChainObj*>();
		}
		cfbam::CFBamChainByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::ICFBamChainObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamChainBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamChainTableObj::readCachedChainByPrevRelIdx( const int64_t PrevRelationTenantId,
			const int64_t PrevRelationId )
	{
		static const std::string S_ProcName( "readCachedChainByPrevRelIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamChainObj*> arr;
		cfbam::CFBamChainByPrevRelIdxKey key;
		key.setRequiredPrevRelationTenantId( PrevRelationTenantId );
		key.setRequiredPrevRelationId( PrevRelationId );
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* dict;
		if( indexByPrevRelIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByPrevRelIdx = indexByPrevRelIdx->find( key );
		if( searchIndexByPrevRelIdx != indexByPrevRelIdx->end() ) {
			dict = searchIndexByPrevRelIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamChainObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamChainObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamChainBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamChainObj*> CFBamChainTableObj::readCachedChainByNextRelIdx( const int64_t NextRelationTenantId,
			const int64_t NextRelationId )
	{
		static const std::string S_ProcName( "readCachedChainByNextRelIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamChainObj*> arr;
		cfbam::CFBamChainByNextRelIdxKey key;
		key.setRequiredNextRelationTenantId( NextRelationTenantId );
		key.setRequiredNextRelationId( NextRelationId );
		std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* dict;
		if( indexByNextRelIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByNextRelIdx = indexByNextRelIdx->find( key );
		if( searchIndexByNextRelIdx != indexByNextRelIdx->end() ) {
			dict = searchIndexByNextRelIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamChainObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamChainObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamChainBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::readCachedChainByLookupUNameIdx( const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedChainByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamChainByUNameIdxKey,
				cfbam::ICFBamChainObj*>();
		}
		cfbam::CFBamChainByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::ICFBamChainObj* obj = NULL;
		cfbam::ICFBamChainObj* realized = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamChainBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfbam::ICFBamChainObj* CFBamChainTableObj::updateChain( cfbam::ICFBamChainEditObj* Obj ) {
		static const std::string S_ProcName( "updateChain" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamChainObj* obj = dynamic_cast<cfbam::ICFBamChainObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamChainBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->updateChain( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamChainBuff*>( Obj->getChainBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamChainObj*>( dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamChainObj*>( obj->realize() );
			if( obj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Obj );
			}
			if( obj->getEdit() != NULL ) {
				obj->endEdit();
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH
		if( ! CFLIB_EXCEPTION_EMPTY ) {
			if( obj->getEdit() != NULL ) {
				obj->endEdit();
			}
			CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
		}
		return( obj );
	}

	void CFBamChainTableObj::deleteChain( cfbam::ICFBamChainEditObj* Obj ) {
		cfbam::ICFBamChainObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->deleteChain( schema->getAuthorization(),
			obj->getChainBuff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamChainTableObj::deleteChainByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamChainPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamChainObj* obj = readChain( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamChainEditObj* editObj = dynamic_cast<cfbam::ICFBamChainEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamChainEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamChainTableObj::deleteChainByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->deleteChainByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFBamChainTableObj::deleteChainByChainTableIdx( const int64_t TenantId,
			const int64_t TableId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->deleteChainByChainTableIdx( schema->getAuthorization(),
				TenantId,
				TableId );
		deepDisposeByChainTableIdx( TenantId,
			TableId );
	}

	void CFBamChainTableObj::deleteChainByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->deleteChainByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
		deepDisposeByDefSchemaIdx( DefSchemaTenantId,
			DefSchemaId );
	}

	void CFBamChainTableObj::deleteChainByUNameIdx( const int64_t TenantId,
			const int64_t TableId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamChainByUNameIdxKey,
				cfbam::ICFBamChainObj*>();
		}
		cfbam::CFBamChainByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTableId( TableId );
		key.setRequiredName( Name );
		cfbam::ICFBamChainObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->deleteChainByUNameIdx( schema->getAuthorization(),
				TenantId,
				TableId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->deleteChainByUNameIdx( schema->getAuthorization(),
				TenantId,
				TableId,
				Name );
		}
		deepDisposeByUNameIdx( TenantId,
			TableId,
			Name );
	}

	void CFBamChainTableObj::deleteChainByPrevRelIdx( const int64_t PrevRelationTenantId,
			const int64_t PrevRelationId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->deleteChainByPrevRelIdx( schema->getAuthorization(),
				PrevRelationTenantId,
				PrevRelationId );
		deepDisposeByPrevRelIdx( PrevRelationTenantId,
			PrevRelationId );
	}

	void CFBamChainTableObj::deleteChainByNextRelIdx( const int64_t NextRelationTenantId,
			const int64_t NextRelationId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableChain()->deleteChainByNextRelIdx( schema->getAuthorization(),
				NextRelationTenantId,
				NextRelationId );
		deepDisposeByNextRelIdx( NextRelationTenantId,
			NextRelationId );
	}

	void CFBamChainTableObj::reallyDetachFromIndexesChain( cfbam::ICFBamChainObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesChain" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamChainObj* obj = Obj;
		cfbam::CFBamChainPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamChainObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfbam::CFBamChainByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
							if( mapTenantIdx->empty() ) {
								delete mapTenantIdx;
								mapTenantIdx = NULL;
								indexByTenantIdx->erase( searchTenantIdx );
							}
						}
					}
				}
			}

			if( indexByChainTableIdx != NULL ) {
				cfbam::CFBamChainByChainTableIdxKey keyChainTableIdx;
				keyChainTableIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyChainTableIdx.setRequiredTableId( obj->getRequiredTableId() );
				auto searchChainTableIdx = indexByChainTableIdx->find( keyChainTableIdx );
				if( searchChainTableIdx != indexByChainTableIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapChainTableIdx = searchChainTableIdx->second;
					if( mapChainTableIdx != NULL ) {
						auto removalProbe = mapChainTableIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapChainTableIdx->end() ) {
							mapChainTableIdx->erase( removalProbe );
							if( mapChainTableIdx->empty() ) {
								delete mapChainTableIdx;
								mapChainTableIdx = NULL;
								indexByChainTableIdx->erase( searchChainTableIdx );
							}
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamChainByDefSchemaIdxKey keyDefSchemaIdx;
				if( obj->isOptionalDefSchemaTenantIdNull() ) {
					keyDefSchemaIdx.setOptionalDefSchemaTenantIdNull();
				}
				else {
					keyDefSchemaIdx.setOptionalDefSchemaTenantIdValue( obj->getOptionalDefSchemaTenantIdValue() );
				}
				if( obj->isOptionalDefSchemaIdNull() ) {
					keyDefSchemaIdx.setOptionalDefSchemaIdNull();
				}
				else {
					keyDefSchemaIdx.setOptionalDefSchemaIdValue( obj->getOptionalDefSchemaIdValue() );
				}
				auto searchDefSchemaIdx = indexByDefSchemaIdx->find( keyDefSchemaIdx );
				if( searchDefSchemaIdx != indexByDefSchemaIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapDefSchemaIdx->end() ) {
							mapDefSchemaIdx->erase( removalProbe );
							if( mapDefSchemaIdx->empty() ) {
								delete mapDefSchemaIdx;
								mapDefSchemaIdx = NULL;
								indexByDefSchemaIdx->erase( searchDefSchemaIdx );
							}
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamChainByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyUNameIdx.setRequiredTableId( obj->getRequiredTableId() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByPrevRelIdx != NULL ) {
				cfbam::CFBamChainByPrevRelIdxKey keyPrevRelIdx;
				keyPrevRelIdx.setRequiredPrevRelationTenantId( obj->getRequiredPrevRelationTenantId() );
				keyPrevRelIdx.setRequiredPrevRelationId( obj->getRequiredPrevRelationId() );
				auto searchPrevRelIdx = indexByPrevRelIdx->find( keyPrevRelIdx );
				if( searchPrevRelIdx != indexByPrevRelIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapPrevRelIdx = searchPrevRelIdx->second;
					if( mapPrevRelIdx != NULL ) {
						auto removalProbe = mapPrevRelIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapPrevRelIdx->end() ) {
							mapPrevRelIdx->erase( removalProbe );
							if( mapPrevRelIdx->empty() ) {
								delete mapPrevRelIdx;
								mapPrevRelIdx = NULL;
								indexByPrevRelIdx->erase( searchPrevRelIdx );
							}
						}
					}
				}
			}

			if( indexByNextRelIdx != NULL ) {
				cfbam::CFBamChainByNextRelIdxKey keyNextRelIdx;
				keyNextRelIdx.setRequiredNextRelationTenantId( obj->getRequiredNextRelationTenantId() );
				keyNextRelIdx.setRequiredNextRelationId( obj->getRequiredNextRelationId() );
				auto searchNextRelIdx = indexByNextRelIdx->find( keyNextRelIdx );
				if( searchNextRelIdx != indexByNextRelIdx->end() ) {
					std::map<cfbam::CFBamChainPKey, cfbam::ICFBamChainObj*>* mapNextRelIdx = searchNextRelIdx->second;
					if( mapNextRelIdx != NULL ) {
						auto removalProbe = mapNextRelIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapNextRelIdx->end() ) {
							mapNextRelIdx->erase( removalProbe );
							if( mapNextRelIdx->empty() ) {
								delete mapNextRelIdx;
								mapNextRelIdx = NULL;
								indexByNextRelIdx->erase( searchNextRelIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
