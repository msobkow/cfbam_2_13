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

	const std::string CFBamClearSubDep2TableObj::CLASS_NAME( "CFBamClearSubDep2TableObj" );
	const std::string CFBamClearSubDep2TableObj::TABLE_NAME( "ClearSubDep2" );
	const std::string CFBamClearSubDep2TableObj::TABLE_DBNAME( "clrsubdep2" );

	CFBamClearSubDep2TableObj::CFBamClearSubDep2TableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>();
		allClearSubDep2 = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>*>();
		indexByClearDepIdx = new std::map< cfbam::CFBamClearDepByClearDepIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamClearDepByDefSchemaIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>*>();
		indexByClearSubDep1Idx = new std::map< cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamClearSubDep2ByUNameIdxKey,
			cfbam::ICFBamClearSubDep2Obj*>();
	}

	CFBamClearSubDep2TableObj::CFBamClearSubDep2TableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>();
		allClearSubDep2 = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>*>();
		indexByClearDepIdx = new std::map< cfbam::CFBamClearDepByClearDepIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamClearDepByDefSchemaIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>*>();
		indexByClearSubDep1Idx = new std::map< cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamClearSubDep2ByUNameIdxKey,
			cfbam::ICFBamClearSubDep2Obj*>();
	}

	CFBamClearSubDep2TableObj::~CFBamClearSubDep2TableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByClearDepIdx != NULL ) {
			delete indexByClearDepIdx;
			indexByClearDepIdx = NULL;
		}
		if( indexByDefSchemaIdx != NULL ) {
			delete indexByDefSchemaIdx;
			indexByDefSchemaIdx = NULL;
		}
		if( indexByClearSubDep1Idx != NULL ) {
			delete indexByClearSubDep1Idx;
			indexByClearSubDep1Idx = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( members != NULL ) {
			auto membersIter = members->begin();
			while( membersIter != members->end() ) {
				members->erase( membersIter );
				membersIter = members->begin();
			}
			delete members;
			members = NULL;
		}
	}

	cfbam::ICFBamSchemaObj* CFBamClearSubDep2TableObj::getSchema() {
		return( schema );
	}

	void CFBamClearSubDep2TableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamClearSubDep2TableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamClearSubDep2TableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamClearSubDep2TableObj::getObjQualifyingClassCode() {
		return( &cfbam::CFBamSchemaDefBuff::CLASS_CODE );
	}


	void CFBamClearSubDep2TableObj::minimizeMemory() {
		if( allClearSubDep2 != NULL ) {
			allClearSubDep2->clear();
			delete allClearSubDep2;
			allClearSubDep2 = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* curByTenantIdx = NULL;
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
		if( indexByClearDepIdx != NULL ) {
			std::map< cfbam::CFBamClearDepByClearDepIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* >::iterator iterByClearDepIdx = indexByClearDepIdx->begin();
			std::map< cfbam::CFBamClearDepByClearDepIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* >::iterator endByClearDepIdx = indexByClearDepIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* curByClearDepIdx = NULL;
			while( iterByClearDepIdx != endByClearDepIdx ) {
				curByClearDepIdx = iterByClearDepIdx->second;
				if( curByClearDepIdx != NULL ) {
					curByClearDepIdx->clear();
					delete curByClearDepIdx;
					curByClearDepIdx = NULL;
					iterByClearDepIdx->second = NULL;
				}
				iterByClearDepIdx ++;
			}
			indexByClearDepIdx->clear();
		}
		if( indexByDefSchemaIdx != NULL ) {
			std::map< cfbam::CFBamClearDepByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* >::iterator iterByDefSchemaIdx = indexByDefSchemaIdx->begin();
			std::map< cfbam::CFBamClearDepByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* >::iterator endByDefSchemaIdx = indexByDefSchemaIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* curByDefSchemaIdx = NULL;
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
		if( indexByClearSubDep1Idx != NULL ) {
			std::map< cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* >::iterator iterByClearSubDep1Idx = indexByClearSubDep1Idx->begin();
			std::map< cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* >::iterator endByClearSubDep1Idx = indexByClearSubDep1Idx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* curByClearSubDep1Idx = NULL;
			while( iterByClearSubDep1Idx != endByClearSubDep1Idx ) {
				curByClearSubDep1Idx = iterByClearSubDep1Idx->second;
				if( curByClearSubDep1Idx != NULL ) {
					curByClearSubDep1Idx->clear();
					delete curByClearSubDep1Idx;
					curByClearSubDep1Idx = NULL;
					iterByClearSubDep1Idx->second = NULL;
				}
				iterByClearSubDep1Idx ++;
			}
			indexByClearSubDep1Idx->clear();
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( members != NULL ) {
			members->clear();
		}
	}

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep2TableObj::newInstance() {
		cfbam::ICFBamClearSubDep2Obj* inst = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( new CFBamClearSubDep2Obj( schema ) );
		return( inst );
	}

	cfbam::ICFBamClearSubDep2EditObj* CFBamClearSubDep2TableObj::newEditInstance( cfbam::ICFBamClearSubDep2Obj* orig ) {
		cfbam::ICFBamClearSubDep2EditObj* edit = dynamic_cast<cfbam::ICFBamClearSubDep2EditObj*>( new CFBamClearSubDep2EditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep2TableObj::realizeClearSubDep2( cfbam::ICFBamClearSubDep2Obj* Obj ) {
		static const std::string S_ProcName( "realizeClearSubDep2" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamClearSubDep2Obj* obj = Obj;
		cfbam::ICFBamClearSubDep2Obj* existingObj = NULL;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		cfbam::ICFBamClearSubDep2Obj* keepObj = NULL;
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
				cfbam::CFBamScopeByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByClearDepIdx != NULL ) {
				cfbam::CFBamClearDepByClearDepIdxKey keyClearDepIdx;
				keyClearDepIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyClearDepIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				auto searchClearDepIdx = indexByClearDepIdx->find( keyClearDepIdx );
				if( searchClearDepIdx != indexByClearDepIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapClearDepIdx = searchClearDepIdx->second;
					if( mapClearDepIdx != NULL ) {
						auto removalProbe = mapClearDepIdx->find( *pkey );
						if( removalProbe != mapClearDepIdx->end() ) {
							mapClearDepIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamClearDepByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *pkey );
						if( removalProbe != mapDefSchemaIdx->end() ) {
							mapDefSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByClearSubDep1Idx != NULL ) {
				cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey keyClearSubDep1Idx;
				keyClearSubDep1Idx.setRequiredClearSubDep1TenantId( keepObj->getRequiredClearSubDep1TenantId() );
				keyClearSubDep1Idx.setRequiredClearSubDep1Id( keepObj->getRequiredClearSubDep1Id() );
				auto searchClearSubDep1Idx = indexByClearSubDep1Idx->find( keyClearSubDep1Idx );
				if( searchClearSubDep1Idx != indexByClearSubDep1Idx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapClearSubDep1Idx = searchClearSubDep1Idx->second;
					if( mapClearSubDep1Idx != NULL ) {
						auto removalProbe = mapClearSubDep1Idx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapClearSubDep1Idx->end() ) {
							mapClearSubDep1Idx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamClearSubDep2ByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClearSubDep1TenantId( keepObj->getRequiredClearSubDep1TenantId() );
				keyUNameIdx.setRequiredClearSubDep1Id( keepObj->getRequiredClearSubDep1Id() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( dynamic_cast<cfbam::CFBamClearDepTableObj*>( schema->getClearDepTableObj() )->realizeClearDep( Obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfbam::ICFBamClearSubDep2Obj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfbam::CFBamScopeByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByClearDepIdx != NULL ) {
				static const std::string S_AClearDepIdxObj( "aClearDepIdxObj" );
				cfbam::ICFBamClearSubDep2Obj* aClearDepIdxObj =
					dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( keepObj );
				if( aClearDepIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClearDepIdxObj );
				}
				cfbam::CFBamClearDepByClearDepIdxKey keyClearDepIdx;
				keyClearDepIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyClearDepIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				auto searchIndexByClearDepIdx = indexByClearDepIdx->find( keyClearDepIdx );
				if( searchIndexByClearDepIdx != indexByClearDepIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapClearDepIdx = searchIndexByClearDepIdx->second;
					if( mapClearDepIdx != NULL ) {
						mapClearDepIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(keepObj->getPKey()), aClearDepIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamClearSubDep2Obj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamClearDepByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByClearSubDep1Idx != NULL ) {
				static const std::string S_AClearSubDep1IdxObj( "aClearSubDep1IdxObj" );
				cfbam::ICFBamClearSubDep2Obj* aClearSubDep1IdxObj =
					dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( keepObj );
				if( aClearSubDep1IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClearSubDep1IdxObj );
				}
				cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey keyClearSubDep1Idx;
				keyClearSubDep1Idx.setRequiredClearSubDep1TenantId( keepObj->getRequiredClearSubDep1TenantId() );
				keyClearSubDep1Idx.setRequiredClearSubDep1Id( keepObj->getRequiredClearSubDep1Id() );
				auto searchIndexByClearSubDep1Idx = indexByClearSubDep1Idx->find( keyClearSubDep1Idx );
				if( searchIndexByClearSubDep1Idx != indexByClearSubDep1Idx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapClearSubDep1Idx = searchIndexByClearSubDep1Idx->second;
					if( mapClearSubDep1Idx != NULL ) {
						mapClearSubDep1Idx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(keepObj->getPKey()), aClearSubDep1IdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamClearSubDep2Obj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamClearSubDep2ByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClearSubDep1TenantId( keepObj->getRequiredClearSubDep1TenantId() );
				keyUNameIdx.setRequiredClearSubDep1Id( keepObj->getRequiredClearSubDep1Id() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamClearSubDep2ByUNameIdxKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allClearSubDep2 != NULL ) {
				allClearSubDep2->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( dynamic_cast<cfbam::CFBamClearDepTableObj*>( schema->getClearDepTableObj() )->realizeClearDep( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfbam::ICFBamClearSubDep2Obj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfbam::CFBamScopeByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByClearDepIdx != NULL ) {
				static const std::string S_AClearDepIdxObj( "aClearDepIdxObj" );
				cfbam::ICFBamClearSubDep2Obj* aClearDepIdxObj =
					dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( keepObj );
				if( aClearDepIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClearDepIdxObj );
				}
				cfbam::CFBamClearDepByClearDepIdxKey keyClearDepIdx;
				keyClearDepIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyClearDepIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				auto searchIndexByClearDepIdx = indexByClearDepIdx->find( keyClearDepIdx );
				if( searchIndexByClearDepIdx != indexByClearDepIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapClearDepIdx = searchIndexByClearDepIdx->second;
					if( mapClearDepIdx != NULL ) {
						mapClearDepIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(keepObj->getPKey()), aClearDepIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamClearSubDep2Obj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamClearDepByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByClearSubDep1Idx != NULL ) {
				static const std::string S_AClearSubDep1IdxObj( "aClearSubDep1IdxObj" );
				cfbam::ICFBamClearSubDep2Obj* aClearSubDep1IdxObj =
					dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( keepObj );
				if( aClearSubDep1IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClearSubDep1IdxObj );
				}
				cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey keyClearSubDep1Idx;
				keyClearSubDep1Idx.setRequiredClearSubDep1TenantId( keepObj->getRequiredClearSubDep1TenantId() );
				keyClearSubDep1Idx.setRequiredClearSubDep1Id( keepObj->getRequiredClearSubDep1Id() );
				auto searchIndexByClearSubDep1Idx = indexByClearSubDep1Idx->find( keyClearSubDep1Idx );
				if( searchIndexByClearSubDep1Idx != indexByClearSubDep1Idx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapClearSubDep1Idx = searchIndexByClearSubDep1Idx->second;
					if( mapClearSubDep1Idx != NULL ) {
						mapClearSubDep1Idx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(keepObj->getPKey()), aClearSubDep1IdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamClearSubDep2Obj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamClearSubDep2ByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClearSubDep1TenantId( keepObj->getRequiredClearSubDep1TenantId() );
				keyUNameIdx.setRequiredClearSubDep1Id( keepObj->getRequiredClearSubDep1Id() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamClearSubDep2ByUNameIdxKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allClearSubDep2 != NULL ) {
				allClearSubDep2->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFBamClearSubDep2TableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamClearSubDep2Obj*> list;
		cfbam::ICFBamClearSubDep2Obj* existingObj = readCachedClearSubDep2ByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamClearSubDep2Obj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearSubDep2TableObj*>( schema->getClearSubDep2TableObj() )->reallyDeepDisposeClearSubDep2( dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamClearSubDep2TableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfbam::ICFBamClearSubDep2Obj*> list;
		std::vector<cfbam::ICFBamClearSubDep2Obj*> matchesFound = readCachedClearSubDep2ByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamClearSubDep2Obj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearSubDep2TableObj*>( schema->getClearSubDep2TableObj() )->reallyDeepDisposeClearSubDep2( dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamClearSubDep2TableObj::reallyDeepDisposeClearSubDep2( cfbam::ICFBamClearSubDep2Obj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeClearSubDep2" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamClearSubDep2Obj* obj = Obj;
		
		dynamic_cast<cfbam::CFBamClearSubDep3TableObj*>( schema->getClearSubDep3TableObj() )->deepDisposeByClearSubDep2Idx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamClearSubDep2TableObj*>( schema->getClearSubDep2TableObj() )->reallyDetachFromIndexesClearSubDep2( dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( obj ) );
		}

		dynamic_cast<cfbam::CFBamClearDepTableObj*>( schema->getClearDepTableObj() )->reallyDeepDisposeClearDep( dynamic_cast<cfbam::ICFBamClearDepObj*>( obj ) );
	}

	void CFBamClearSubDep2TableObj::deepDisposeByClearDepIdx( const int64_t TenantId,
			const int64_t RelationId ) {
		static const std::string S_ProcName( "deepDisposeByClearDepIdx" );
		std::vector<cfbam::ICFBamClearSubDep2Obj*> list;
		std::vector<cfbam::ICFBamClearSubDep2Obj*> matchesFound = readCachedClearSubDep2ByClearDepIdx( TenantId,
				RelationId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamClearSubDep2Obj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearSubDep2TableObj*>( schema->getClearSubDep2TableObj() )->reallyDeepDisposeClearSubDep2( dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamClearSubDep2TableObj::deepDisposeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) {
		static const std::string S_ProcName( "deepDisposeByDefSchemaIdx" );
		std::vector<cfbam::ICFBamClearSubDep2Obj*> list;
		std::vector<cfbam::ICFBamClearSubDep2Obj*> matchesFound = readCachedClearSubDep2ByDefSchemaIdx( DefSchemaTenantId,
				DefSchemaId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamClearSubDep2Obj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearSubDep2TableObj*>( schema->getClearSubDep2TableObj() )->reallyDeepDisposeClearSubDep2( dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamClearSubDep2TableObj::deepDisposeByClearSubDep1Idx( const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id ) {
		static const std::string S_ProcName( "deepDisposeByClearSubDep1Idx" );
		std::vector<cfbam::ICFBamClearSubDep2Obj*> list;
		std::vector<cfbam::ICFBamClearSubDep2Obj*> matchesFound = readCachedClearSubDep2ByClearSubDep1Idx( ClearSubDep1TenantId,
				ClearSubDep1Id );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamClearSubDep2Obj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearSubDep2TableObj*>( schema->getClearSubDep2TableObj() )->reallyDeepDisposeClearSubDep2( dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamClearSubDep2TableObj::deepDisposeByUNameIdx( const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfbam::ICFBamClearSubDep2Obj*> list;
		cfbam::ICFBamClearSubDep2Obj* existingObj = readCachedClearSubDep2ByUNameIdx( ClearSubDep1TenantId,
				ClearSubDep1Id,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamClearSubDep2Obj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearSubDep2TableObj*>( schema->getClearSubDep2TableObj() )->reallyDeepDisposeClearSubDep2( dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep2TableObj::createClearSubDep2( cfbam::ICFBamClearSubDep2EditObj* Obj ) {
		static const std::string S_ProcName( "createClearSubDep2" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamClearSubDep2Obj* obj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( Obj->getOrig() );
		try {
			cfbam::CFBamClearSubDep2Buff* buff = dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->createClearSubDep2(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( obj->realize() );
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

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep2TableObj::readClearSubDep2( cfbam::CFBamScopePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readClearSubDep2" );
		cfbam::ICFBamClearSubDep2Obj* obj = NULL;
		cfbam::ICFBamClearSubDep2Obj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamClearSubDep2Buff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( obj->realize() );
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

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep2TableObj::lockClearSubDep2( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_ProcName( "lockClearSubDep2" );
		cfbam::ICFBamClearSubDep2Obj* locked = NULL;
		cfbam::CFBamClearSubDep2Buff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamClearSubDep2Obj*> CFBamClearSubDep2TableObj::readAllClearSubDep2( bool forceRead ) {
		static const std::string S_ProcName( "readAllClearSubDep2" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamClearSubDep2Obj* realized = NULL;
		if( forceRead || ( allClearSubDep2 == NULL ) ) {
			std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* map = new std::map<cfbam::CFBamScopePKey,cfbam::ICFBamClearSubDep2Obj*>();
			allClearSubDep2 = map;
			std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamClearSubDep2Buff* buff = NULL;
			cfbam::ICFBamClearSubDep2Obj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allClearSubDep2->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allClearSubDep2->size();
		std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
		auto valIter = allClearSubDep2->begin();
		size_t idx = 0;
		while( valIter != allClearSubDep2->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep2TableObj::readClearSubDep2ByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readClearSubDep2ByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamClearSubDep2Obj* obj = readClearSubDep2( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfbam::ICFBamClearSubDep2Obj*> CFBamClearSubDep2TableObj::readClearSubDep2ByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readClearSubDep2ByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>();
			cfbam::ICFBamScopeObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamScopeBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamClearSubDep2Obj* realized = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamClearSubDep2Obj*> CFBamClearSubDep2TableObj::readClearSubDep2ByClearDepIdx( const int64_t TenantId,
			const int64_t RelationId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readClearSubDep2ByClearDepIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamClearDepByClearDepIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* oldDict;
		if( indexByClearDepIdx == NULL ) {
			indexByClearDepIdx = new std::map< cfbam::CFBamClearDepByClearDepIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>*>();
		}
		auto searchIndexByClearDepIdx = indexByClearDepIdx->find( key );
		if( searchIndexByClearDepIdx != indexByClearDepIdx->end() ) {
			oldDict = searchIndexByClearDepIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>();
			cfbam::ICFBamClearDepObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearDep()->readDerivedByClearDepIdx( schema->getAuthorization(),
				TenantId,
				RelationId );
			cfbam::CFBamClearDepBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamClearSubDep2Obj* realized = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClearDepIdx->erase( searchIndexByClearDepIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClearDepIdx->insert( std::map< cfbam::CFBamClearDepByClearDepIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamClearSubDep2Obj*> CFBamClearSubDep2TableObj::readClearSubDep2ByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readClearSubDep2ByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamClearDepByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* oldDict;
		if( indexByDefSchemaIdx == NULL ) {
			indexByDefSchemaIdx = new std::map< cfbam::CFBamClearDepByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>();
			cfbam::ICFBamClearDepObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamClearDepBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearDep()->readDerivedByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
			cfbam::CFBamClearDepBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamClearSubDep2Obj* realized = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDefSchemaIdx->erase( searchIndexByDefSchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDefSchemaIdx->insert( std::map< cfbam::CFBamClearDepByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamClearSubDep2Obj*> CFBamClearSubDep2TableObj::readClearSubDep2ByClearSubDep1Idx( const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
		bool forceRead )
	{
		static const std::string S_ProcName( "readClearSubDep2ByClearSubDep1Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey key;
		key.setRequiredClearSubDep1TenantId( ClearSubDep1TenantId );
		key.setRequiredClearSubDep1Id( ClearSubDep1Id );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* oldDict;
		if( indexByClearSubDep1Idx == NULL ) {
			indexByClearSubDep1Idx = new std::map< cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>*>();
		}
		auto searchIndexByClearSubDep1Idx = indexByClearSubDep1Idx->find( key );
		if( searchIndexByClearSubDep1Idx != indexByClearSubDep1Idx->end() ) {
			oldDict = searchIndexByClearSubDep1Idx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>();
			cfbam::ICFBamClearSubDep2Obj* obj;
			std::TCFLibOwningVector<cfbam::CFBamClearSubDep2Buff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->readDerivedByClearSubDep1Idx( schema->getAuthorization(),
				ClearSubDep1TenantId,
				ClearSubDep1Id );
			cfbam::CFBamClearSubDep2Buff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamClearSubDep2Obj* realized = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClearSubDep1Idx->erase( searchIndexByClearSubDep1Idx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClearSubDep1Idx->insert( std::map< cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep2TableObj::readClearSubDep2ByUNameIdx( const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readClearSubDep2ByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamClearSubDep2ByUNameIdxKey,
				cfbam::ICFBamClearSubDep2Obj*>();
		}
		cfbam::CFBamClearSubDep2ByUNameIdxKey key;
		key.setRequiredClearSubDep1TenantId( ClearSubDep1TenantId );
		key.setRequiredClearSubDep1Id( ClearSubDep1Id );
		key.setRequiredName( Name );
		cfbam::ICFBamClearSubDep2Obj* obj = NULL;
		cfbam::ICFBamClearSubDep2Obj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamClearSubDep2Buff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->readDerivedByUNameIdx( schema->getAuthorization(),
				ClearSubDep1TenantId,
				ClearSubDep1Id,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamClearSubDep2ByUNameIdxKey, cfbam::ICFBamClearSubDep2Obj*>::value_type( key, dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep2TableObj::readCachedClearSubDep2( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readClearSubDep2" );
		cfbam::ICFBamClearSubDep2Obj* obj = NULL;
		cfbam::ICFBamClearSubDep2Obj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep2TableObj::readCachedClearSubDep2ByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedClearSubDep2ByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamClearSubDep2Obj* obj = readCachedClearSubDep2( &pkey );
		return( obj );
	}

	std::vector<cfbam::ICFBamClearSubDep2Obj*> CFBamClearSubDep2TableObj::readCachedClearSubDep2ByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedClearSubDep2ByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamClearSubDep2Obj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamScopeBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamClearSubDep2Obj*> CFBamClearSubDep2TableObj::readCachedClearSubDep2ByClearDepIdx( const int64_t TenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readCachedClearSubDep2ByClearDepIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
		cfbam::CFBamClearDepByClearDepIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* dict;
		if( indexByClearDepIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByClearDepIdx = indexByClearDepIdx->find( key );
		if( searchIndexByClearDepIdx != indexByClearDepIdx->end() ) {
			dict = searchIndexByClearDepIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamClearSubDep2Obj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamClearDepBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamClearSubDep2Obj*> CFBamClearSubDep2TableObj::readCachedClearSubDep2ByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readCachedClearSubDep2ByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
		cfbam::CFBamClearDepByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* dict;
		if( indexByDefSchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( key );
		if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
			dict = searchIndexByDefSchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamClearSubDep2Obj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamClearDepBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamClearSubDep2Obj*> CFBamClearSubDep2TableObj::readCachedClearSubDep2ByClearSubDep1Idx( const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id )
	{
		static const std::string S_ProcName( "readCachedClearSubDep2ByClearSubDep1Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
		cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey key;
		key.setRequiredClearSubDep1TenantId( ClearSubDep1TenantId );
		key.setRequiredClearSubDep1Id( ClearSubDep1Id );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* dict;
		if( indexByClearSubDep1Idx == NULL ) {
			return( arr );
		}
		auto searchIndexByClearSubDep1Idx = indexByClearSubDep1Idx->find( key );
		if( searchIndexByClearSubDep1Idx != indexByClearSubDep1Idx->end() ) {
			dict = searchIndexByClearSubDep1Idx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamClearSubDep2Obj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamClearSubDep2Obj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep2TableObj::readCachedClearSubDep2ByUNameIdx( const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedClearSubDep2ByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamClearSubDep2ByUNameIdxKey,
				cfbam::ICFBamClearSubDep2Obj*>();
		}
		cfbam::CFBamClearSubDep2ByUNameIdxKey key;
		key.setRequiredClearSubDep1TenantId( ClearSubDep1TenantId );
		key.setRequiredClearSubDep1Id( ClearSubDep1Id );
		key.setRequiredName( Name );
		cfbam::ICFBamClearSubDep2Obj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfbam::ICFBamClearSubDep2Obj* CFBamClearSubDep2TableObj::updateClearSubDep2( cfbam::ICFBamClearSubDep2EditObj* Obj ) {
		static const std::string S_ProcName( "updateClearSubDep2" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamClearSubDep2Obj* obj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( Obj->getOrig() );
		try {
			cfbam::CFBamClearSubDep2Buff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->updateClearSubDep2( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamClearSubDep2Buff*>( Obj->getClearSubDep2Buff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( dynamic_cast<cfbam::CFBamClearSubDep2TableObj*>( schema->getClearSubDep2TableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( obj->realize() );
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

	void CFBamClearSubDep2TableObj::deleteClearSubDep2( cfbam::ICFBamClearSubDep2EditObj* Obj ) {
		cfbam::ICFBamClearSubDep2Obj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->deleteClearSubDep2( schema->getAuthorization(),
			obj->getClearSubDep2Buff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamClearSubDep2TableObj::deleteClearSubDep2ByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamClearSubDep2Obj* obj = readClearSubDep2( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamClearSubDep2EditObj* editObj = dynamic_cast<cfbam::ICFBamClearSubDep2EditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamClearSubDep2EditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamClearSubDep2TableObj::deleteClearSubDep2ByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->deleteClearSubDep2ByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFBamClearSubDep2TableObj::deleteClearSubDep2ByClearDepIdx( const int64_t TenantId,
			const int64_t RelationId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->deleteClearSubDep2ByClearDepIdx( schema->getAuthorization(),
				TenantId,
				RelationId );
		deepDisposeByClearDepIdx( TenantId,
			RelationId );
	}

	void CFBamClearSubDep2TableObj::deleteClearSubDep2ByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->deleteClearSubDep2ByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
		deepDisposeByDefSchemaIdx( DefSchemaTenantId,
			DefSchemaId );
	}

	void CFBamClearSubDep2TableObj::deleteClearSubDep2ByClearSubDep1Idx( const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->deleteClearSubDep2ByClearSubDep1Idx( schema->getAuthorization(),
				ClearSubDep1TenantId,
				ClearSubDep1Id );
		deepDisposeByClearSubDep1Idx( ClearSubDep1TenantId,
			ClearSubDep1Id );
	}

	void CFBamClearSubDep2TableObj::deleteClearSubDep2ByUNameIdx( const int64_t ClearSubDep1TenantId,
			const int64_t ClearSubDep1Id,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamClearSubDep2ByUNameIdxKey,
				cfbam::ICFBamClearSubDep2Obj*>();
		}
		cfbam::CFBamClearSubDep2ByUNameIdxKey key;
		key.setRequiredClearSubDep1TenantId( ClearSubDep1TenantId );
		key.setRequiredClearSubDep1Id( ClearSubDep1Id );
		key.setRequiredName( Name );
		cfbam::ICFBamClearSubDep2Obj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->deleteClearSubDep2ByUNameIdx( schema->getAuthorization(),
				ClearSubDep1TenantId,
				ClearSubDep1Id,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableClearSubDep2()->deleteClearSubDep2ByUNameIdx( schema->getAuthorization(),
				ClearSubDep1TenantId,
				ClearSubDep1Id,
				Name );
		}
		deepDisposeByUNameIdx( ClearSubDep1TenantId,
			ClearSubDep1Id,
			Name );
	}

	void CFBamClearSubDep2TableObj::reallyDetachFromIndexesClearSubDep2( cfbam::ICFBamClearSubDep2Obj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesClearSubDep2" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamClearSubDep2Obj* obj = Obj;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamClearSubDep2Obj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfbam::CFBamScopeByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
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

			if( indexByClearDepIdx != NULL ) {
				cfbam::CFBamClearDepByClearDepIdxKey keyClearDepIdx;
				keyClearDepIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyClearDepIdx.setRequiredRelationId( obj->getRequiredRelationId() );
				auto searchClearDepIdx = indexByClearDepIdx->find( keyClearDepIdx );
				if( searchClearDepIdx != indexByClearDepIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapClearDepIdx = searchClearDepIdx->second;
					if( mapClearDepIdx != NULL ) {
						auto removalProbe = mapClearDepIdx->find( *pkey );
						if( removalProbe != mapClearDepIdx->end() ) {
							mapClearDepIdx->erase( removalProbe );
							if( mapClearDepIdx->empty() ) {
								delete mapClearDepIdx;
								mapClearDepIdx = NULL;
								indexByClearDepIdx->erase( searchClearDepIdx );
							}
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamClearDepByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *pkey );
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

			if( indexByClearSubDep1Idx != NULL ) {
				cfbam::CFBamClearSubDep2ByClearSubDep1IdxKey keyClearSubDep1Idx;
				keyClearSubDep1Idx.setRequiredClearSubDep1TenantId( obj->getRequiredClearSubDep1TenantId() );
				keyClearSubDep1Idx.setRequiredClearSubDep1Id( obj->getRequiredClearSubDep1Id() );
				auto searchClearSubDep1Idx = indexByClearSubDep1Idx->find( keyClearSubDep1Idx );
				if( searchClearSubDep1Idx != indexByClearSubDep1Idx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamClearSubDep2Obj*>* mapClearSubDep1Idx = searchClearSubDep1Idx->second;
					if( mapClearSubDep1Idx != NULL ) {
						auto removalProbe = mapClearSubDep1Idx->find( *(obj->getPKey()) );
						if( removalProbe != mapClearSubDep1Idx->end() ) {
							mapClearSubDep1Idx->erase( removalProbe );
							if( mapClearSubDep1Idx->empty() ) {
								delete mapClearSubDep1Idx;
								mapClearSubDep1Idx = NULL;
								indexByClearSubDep1Idx->erase( searchClearSubDep1Idx );
							}
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamClearSubDep2ByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClearSubDep1TenantId( obj->getRequiredClearSubDep1TenantId() );
				keyUNameIdx.setRequiredClearSubDep1Id( obj->getRequiredClearSubDep1Id() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
			dynamic_cast<cfbam::CFBamClearDepTableObj*>( schema->getClearDepTableObj() )->reallyDetachFromIndexesClearDep( Obj );
	}


}
