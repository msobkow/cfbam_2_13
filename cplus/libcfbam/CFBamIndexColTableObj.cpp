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

	const std::string CFBamIndexColTableObj::CLASS_NAME( "CFBamIndexColTableObj" );
	const std::string CFBamIndexColTableObj::TABLE_NAME( "IndexCol" );
	const std::string CFBamIndexColTableObj::TABLE_DBNAME( "idxcol" );

	CFBamIndexColTableObj::CFBamIndexColTableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>();
		allIndexCol = NULL;
		indexByUNameIdx = new std::map< cfbam::CFBamIndexColByUNameIdxKey,
			cfbam::ICFBamIndexColObj*>();
		indexByIdxColTenantIdx = new std::map< cfbam::CFBamIndexColByIdxColTenantIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByIndexIdx = new std::map< cfbam::CFBamIndexColByIndexIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamIndexColByDefSchemaIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByColIdx = new std::map< cfbam::CFBamIndexColByColIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByPrevIdx = new std::map< cfbam::CFBamIndexColByPrevIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByNextIdx = new std::map< cfbam::CFBamIndexColByNextIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByIdxPrevIdx = new std::map< cfbam::CFBamIndexColByIdxPrevIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByIdxNextIdx = new std::map< cfbam::CFBamIndexColByIdxNextIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
	}

	CFBamIndexColTableObj::CFBamIndexColTableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>();
		allIndexCol = NULL;
		indexByUNameIdx = new std::map< cfbam::CFBamIndexColByUNameIdxKey,
			cfbam::ICFBamIndexColObj*>();
		indexByIdxColTenantIdx = new std::map< cfbam::CFBamIndexColByIdxColTenantIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByIndexIdx = new std::map< cfbam::CFBamIndexColByIndexIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamIndexColByDefSchemaIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByColIdx = new std::map< cfbam::CFBamIndexColByColIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByPrevIdx = new std::map< cfbam::CFBamIndexColByPrevIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByNextIdx = new std::map< cfbam::CFBamIndexColByNextIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByIdxPrevIdx = new std::map< cfbam::CFBamIndexColByIdxPrevIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		indexByIdxNextIdx = new std::map< cfbam::CFBamIndexColByIdxNextIdxKey,
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
	}

	CFBamIndexColTableObj::~CFBamIndexColTableObj() {
		minimizeMemory();
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( indexByIdxColTenantIdx != NULL ) {
			delete indexByIdxColTenantIdx;
			indexByIdxColTenantIdx = NULL;
		}
		if( indexByIndexIdx != NULL ) {
			delete indexByIndexIdx;
			indexByIndexIdx = NULL;
		}
		if( indexByDefSchemaIdx != NULL ) {
			delete indexByDefSchemaIdx;
			indexByDefSchemaIdx = NULL;
		}
		if( indexByColIdx != NULL ) {
			delete indexByColIdx;
			indexByColIdx = NULL;
		}
		if( indexByPrevIdx != NULL ) {
			delete indexByPrevIdx;
			indexByPrevIdx = NULL;
		}
		if( indexByNextIdx != NULL ) {
			delete indexByNextIdx;
			indexByNextIdx = NULL;
		}
		if( indexByIdxPrevIdx != NULL ) {
			delete indexByIdxPrevIdx;
			indexByIdxPrevIdx = NULL;
		}
		if( indexByIdxNextIdx != NULL ) {
			delete indexByIdxNextIdx;
			indexByIdxNextIdx = NULL;
		}
		if( members != NULL ) {
			cfbam::ICFBamIndexColObj* curMember;
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

	cfbam::ICFBamSchemaObj* CFBamIndexColTableObj::getSchema() {
		return( schema );
	}

	void CFBamIndexColTableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamIndexColTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamIndexColTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamIndexColTableObj::getObjQualifyingClassCode() {
		return( &cfbam::CFBamSchemaDefBuff::CLASS_CODE );
	}


	void CFBamIndexColTableObj::minimizeMemory() {
		if( allIndexCol != NULL ) {
			allIndexCol->clear();
			delete allIndexCol;
			allIndexCol = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( indexByIdxColTenantIdx != NULL ) {
			std::map< cfbam::CFBamIndexColByIdxColTenantIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator iterByIdxColTenantIdx = indexByIdxColTenantIdx->begin();
			std::map< cfbam::CFBamIndexColByIdxColTenantIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator endByIdxColTenantIdx = indexByIdxColTenantIdx->end();
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* curByIdxColTenantIdx = NULL;
			while( iterByIdxColTenantIdx != endByIdxColTenantIdx ) {
				curByIdxColTenantIdx = iterByIdxColTenantIdx->second;
				if( curByIdxColTenantIdx != NULL ) {
					curByIdxColTenantIdx->clear();
					delete curByIdxColTenantIdx;
					curByIdxColTenantIdx = NULL;
					iterByIdxColTenantIdx->second = NULL;
				}
				iterByIdxColTenantIdx ++;
			}
			indexByIdxColTenantIdx->clear();
		}
		if( indexByIndexIdx != NULL ) {
			std::map< cfbam::CFBamIndexColByIndexIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator iterByIndexIdx = indexByIndexIdx->begin();
			std::map< cfbam::CFBamIndexColByIndexIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator endByIndexIdx = indexByIndexIdx->end();
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* curByIndexIdx = NULL;
			while( iterByIndexIdx != endByIndexIdx ) {
				curByIndexIdx = iterByIndexIdx->second;
				if( curByIndexIdx != NULL ) {
					curByIndexIdx->clear();
					delete curByIndexIdx;
					curByIndexIdx = NULL;
					iterByIndexIdx->second = NULL;
				}
				iterByIndexIdx ++;
			}
			indexByIndexIdx->clear();
		}
		if( indexByDefSchemaIdx != NULL ) {
			std::map< cfbam::CFBamIndexColByDefSchemaIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator iterByDefSchemaIdx = indexByDefSchemaIdx->begin();
			std::map< cfbam::CFBamIndexColByDefSchemaIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator endByDefSchemaIdx = indexByDefSchemaIdx->end();
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* curByDefSchemaIdx = NULL;
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
		if( indexByColIdx != NULL ) {
			std::map< cfbam::CFBamIndexColByColIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator iterByColIdx = indexByColIdx->begin();
			std::map< cfbam::CFBamIndexColByColIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator endByColIdx = indexByColIdx->end();
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* curByColIdx = NULL;
			while( iterByColIdx != endByColIdx ) {
				curByColIdx = iterByColIdx->second;
				if( curByColIdx != NULL ) {
					curByColIdx->clear();
					delete curByColIdx;
					curByColIdx = NULL;
					iterByColIdx->second = NULL;
				}
				iterByColIdx ++;
			}
			indexByColIdx->clear();
		}
		if( indexByPrevIdx != NULL ) {
			std::map< cfbam::CFBamIndexColByPrevIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator iterByPrevIdx = indexByPrevIdx->begin();
			std::map< cfbam::CFBamIndexColByPrevIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator endByPrevIdx = indexByPrevIdx->end();
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* curByPrevIdx = NULL;
			while( iterByPrevIdx != endByPrevIdx ) {
				curByPrevIdx = iterByPrevIdx->second;
				if( curByPrevIdx != NULL ) {
					curByPrevIdx->clear();
					delete curByPrevIdx;
					curByPrevIdx = NULL;
					iterByPrevIdx->second = NULL;
				}
				iterByPrevIdx ++;
			}
			indexByPrevIdx->clear();
		}
		if( indexByNextIdx != NULL ) {
			std::map< cfbam::CFBamIndexColByNextIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator iterByNextIdx = indexByNextIdx->begin();
			std::map< cfbam::CFBamIndexColByNextIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator endByNextIdx = indexByNextIdx->end();
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* curByNextIdx = NULL;
			while( iterByNextIdx != endByNextIdx ) {
				curByNextIdx = iterByNextIdx->second;
				if( curByNextIdx != NULL ) {
					curByNextIdx->clear();
					delete curByNextIdx;
					curByNextIdx = NULL;
					iterByNextIdx->second = NULL;
				}
				iterByNextIdx ++;
			}
			indexByNextIdx->clear();
		}
		if( indexByIdxPrevIdx != NULL ) {
			std::map< cfbam::CFBamIndexColByIdxPrevIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator iterByIdxPrevIdx = indexByIdxPrevIdx->begin();
			std::map< cfbam::CFBamIndexColByIdxPrevIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator endByIdxPrevIdx = indexByIdxPrevIdx->end();
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* curByIdxPrevIdx = NULL;
			while( iterByIdxPrevIdx != endByIdxPrevIdx ) {
				curByIdxPrevIdx = iterByIdxPrevIdx->second;
				if( curByIdxPrevIdx != NULL ) {
					curByIdxPrevIdx->clear();
					delete curByIdxPrevIdx;
					curByIdxPrevIdx = NULL;
					iterByIdxPrevIdx->second = NULL;
				}
				iterByIdxPrevIdx ++;
			}
			indexByIdxPrevIdx->clear();
		}
		if( indexByIdxNextIdx != NULL ) {
			std::map< cfbam::CFBamIndexColByIdxNextIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator iterByIdxNextIdx = indexByIdxNextIdx->begin();
			std::map< cfbam::CFBamIndexColByIdxNextIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* >::iterator endByIdxNextIdx = indexByIdxNextIdx->end();
			std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* curByIdxNextIdx = NULL;
			while( iterByIdxNextIdx != endByIdxNextIdx ) {
				curByIdxNextIdx = iterByIdxNextIdx->second;
				if( curByIdxNextIdx != NULL ) {
					curByIdxNextIdx->clear();
					delete curByIdxNextIdx;
					curByIdxNextIdx = NULL;
					iterByIdxNextIdx->second = NULL;
				}
				iterByIdxNextIdx ++;
			}
			indexByIdxNextIdx->clear();
		}
		if( members != NULL ) {
			cfbam::ICFBamIndexColObj* cur = NULL;
			cfbam::ICFBamIndexColEditObj* edit = NULL;
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

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::newInstance() {
		cfbam::ICFBamIndexColObj* inst = dynamic_cast<cfbam::ICFBamIndexColObj*>( new CFBamIndexColObj( schema ) );
		return( inst );
	}

	cfbam::ICFBamIndexColEditObj* CFBamIndexColTableObj::newEditInstance( cfbam::ICFBamIndexColObj* orig ) {
		cfbam::ICFBamIndexColEditObj* edit = dynamic_cast<cfbam::ICFBamIndexColEditObj*>( new CFBamIndexColEditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::realizeIndexCol( cfbam::ICFBamIndexColObj* Obj ) {
		static const std::string S_ProcName( "realizeIndexCol" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamIndexColObj* obj = Obj;
		cfbam::ICFBamIndexColObj* existingObj = NULL;
		cfbam::CFBamIndexColPKey* pkey = obj->getPKey();
		cfbam::ICFBamIndexColObj* keepObj = NULL;
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
			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamIndexColByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredIndexId( keepObj->getRequiredIndexId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByIdxColTenantIdx != NULL ) {
				cfbam::CFBamIndexColByIdxColTenantIdxKey keyIdxColTenantIdx;
				keyIdxColTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIdxColTenantIdx = indexByIdxColTenantIdx->find( keyIdxColTenantIdx );
				if( searchIdxColTenantIdx != indexByIdxColTenantIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIdxColTenantIdx = searchIdxColTenantIdx->second;
					if( mapIdxColTenantIdx != NULL ) {
						auto removalProbe = mapIdxColTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapIdxColTenantIdx->end() ) {
							mapIdxColTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByIndexIdx != NULL ) {
				cfbam::CFBamIndexColByIndexIdxKey keyIndexIdx;
				keyIndexIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyIndexIdx.setRequiredIndexId( keepObj->getRequiredIndexId() );
				auto searchIndexIdx = indexByIndexIdx->find( keyIndexIdx );
				if( searchIndexIdx != indexByIndexIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIndexIdx = searchIndexIdx->second;
					if( mapIndexIdx != NULL ) {
						auto removalProbe = mapIndexIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapIndexIdx->end() ) {
							mapIndexIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamIndexColByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapDefSchemaIdx->end() ) {
							mapDefSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByColIdx != NULL ) {
				cfbam::CFBamIndexColByColIdxKey keyColIdx;
				keyColIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyColIdx.setRequiredColumnId( keepObj->getRequiredColumnId() );
				auto searchColIdx = indexByColIdx->find( keyColIdx );
				if( searchColIdx != indexByColIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapColIdx = searchColIdx->second;
					if( mapColIdx != NULL ) {
						auto removalProbe = mapColIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapColIdx->end() ) {
							mapColIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				cfbam::CFBamIndexColByPrevIdxKey keyPrevIdx;
				if( keepObj->isOptionalPrevTenantIdNull() ) {
					keyPrevIdx.setOptionalPrevTenantIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevTenantIdValue( keepObj->getOptionalPrevTenantIdValue() );
				}
				if( keepObj->isOptionalPrevIdNull() ) {
					keyPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchPrevIdx = indexByPrevIdx->find( keyPrevIdx );
				if( searchPrevIdx != indexByPrevIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapPrevIdx = searchPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						auto removalProbe = mapPrevIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapPrevIdx->end() ) {
							mapPrevIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				cfbam::CFBamIndexColByNextIdxKey keyNextIdx;
				if( keepObj->isOptionalNextTenantIdNull() ) {
					keyNextIdx.setOptionalNextTenantIdNull();
				}
				else {
					keyNextIdx.setOptionalNextTenantIdValue( keepObj->getOptionalNextTenantIdValue() );
				}
				if( keepObj->isOptionalNextIdNull() ) {
					keyNextIdx.setOptionalNextIdNull();
				}
				else {
					keyNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchNextIdx = indexByNextIdx->find( keyNextIdx );
				if( searchNextIdx != indexByNextIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapNextIdx = searchNextIdx->second;
					if( mapNextIdx != NULL ) {
						auto removalProbe = mapNextIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapNextIdx->end() ) {
							mapNextIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByIdxPrevIdx != NULL ) {
				cfbam::CFBamIndexColByIdxPrevIdxKey keyIdxPrevIdx;
				keyIdxPrevIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyIdxPrevIdx.setRequiredIndexId( keepObj->getRequiredIndexId() );
				if( keepObj->isOptionalPrevIdNull() ) {
					keyIdxPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyIdxPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIdxPrevIdx = indexByIdxPrevIdx->find( keyIdxPrevIdx );
				if( searchIdxPrevIdx != indexByIdxPrevIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIdxPrevIdx = searchIdxPrevIdx->second;
					if( mapIdxPrevIdx != NULL ) {
						auto removalProbe = mapIdxPrevIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapIdxPrevIdx->end() ) {
							mapIdxPrevIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByIdxNextIdx != NULL ) {
				cfbam::CFBamIndexColByIdxNextIdxKey keyIdxNextIdx;
				keyIdxNextIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyIdxNextIdx.setRequiredIndexId( keepObj->getRequiredIndexId() );
				if( keepObj->isOptionalNextIdNull() ) {
					keyIdxNextIdx.setOptionalNextIdNull();
				}
				else {
					keyIdxNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIdxNextIdx = indexByIdxNextIdx->find( keyIdxNextIdx );
				if( searchIdxNextIdx != indexByIdxNextIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIdxNextIdx = searchIdxNextIdx->second;
					if( mapIdxNextIdx != NULL ) {
						auto removalProbe = mapIdxNextIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapIdxNextIdx->end() ) {
							mapIdxNextIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfbam::CFBamIndexColBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamIndexColObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamIndexColByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredIndexId( keepObj->getRequiredIndexId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamIndexColByUNameIdxKey, cfbam::ICFBamIndexColObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByIdxColTenantIdx != NULL ) {
				static const std::string S_AIdxColTenantIdxObj( "aIdxColTenantIdxObj" );
				cfbam::ICFBamIndexColObj* aIdxColTenantIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aIdxColTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIdxColTenantIdxObj );
				}
				cfbam::CFBamIndexColByIdxColTenantIdxKey keyIdxColTenantIdx;
				keyIdxColTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByIdxColTenantIdx = indexByIdxColTenantIdx->find( keyIdxColTenantIdx );
				if( searchIndexByIdxColTenantIdx != indexByIdxColTenantIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIdxColTenantIdx = searchIndexByIdxColTenantIdx->second;
					if( mapIdxColTenantIdx != NULL ) {
						mapIdxColTenantIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aIdxColTenantIdxObj ) );
					}
				}
			}

			if( indexByIndexIdx != NULL ) {
				static const std::string S_AIndexIdxObj( "aIndexIdxObj" );
				cfbam::ICFBamIndexColObj* aIndexIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aIndexIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIndexIdxObj );
				}
				cfbam::CFBamIndexColByIndexIdxKey keyIndexIdx;
				keyIndexIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyIndexIdx.setRequiredIndexId( keepObj->getRequiredIndexId() );
				auto searchIndexByIndexIdx = indexByIndexIdx->find( keyIndexIdx );
				if( searchIndexByIndexIdx != indexByIndexIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIndexIdx = searchIndexByIndexIdx->second;
					if( mapIndexIdx != NULL ) {
						mapIndexIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aIndexIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamIndexColObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamIndexColByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByColIdx != NULL ) {
				static const std::string S_AColIdxObj( "aColIdxObj" );
				cfbam::ICFBamIndexColObj* aColIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aColIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AColIdxObj );
				}
				cfbam::CFBamIndexColByColIdxKey keyColIdx;
				keyColIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyColIdx.setRequiredColumnId( keepObj->getRequiredColumnId() );
				auto searchIndexByColIdx = indexByColIdx->find( keyColIdx );
				if( searchIndexByColIdx != indexByColIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapColIdx = searchIndexByColIdx->second;
					if( mapColIdx != NULL ) {
						mapColIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aColIdxObj ) );
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				static const std::string S_APrevIdxObj( "aPrevIdxObj" );
				cfbam::ICFBamIndexColObj* aPrevIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevIdxObj );
				}
				cfbam::CFBamIndexColByPrevIdxKey keyPrevIdx;
				if( keepObj->isOptionalPrevTenantIdNull() ) {
					keyPrevIdx.setOptionalPrevTenantIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevTenantIdValue( keepObj->getOptionalPrevTenantIdValue() );
				}
				if( keepObj->isOptionalPrevIdNull() ) {
					keyPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIndexByPrevIdx = indexByPrevIdx->find( keyPrevIdx );
				if( searchIndexByPrevIdx != indexByPrevIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapPrevIdx = searchIndexByPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						mapPrevIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aPrevIdxObj ) );
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				static const std::string S_ANextIdxObj( "aNextIdxObj" );
				cfbam::ICFBamIndexColObj* aNextIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextIdxObj );
				}
				cfbam::CFBamIndexColByNextIdxKey keyNextIdx;
				if( keepObj->isOptionalNextTenantIdNull() ) {
					keyNextIdx.setOptionalNextTenantIdNull();
				}
				else {
					keyNextIdx.setOptionalNextTenantIdValue( keepObj->getOptionalNextTenantIdValue() );
				}
				if( keepObj->isOptionalNextIdNull() ) {
					keyNextIdx.setOptionalNextIdNull();
				}
				else {
					keyNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIndexByNextIdx = indexByNextIdx->find( keyNextIdx );
				if( searchIndexByNextIdx != indexByNextIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapNextIdx = searchIndexByNextIdx->second;
					if( mapNextIdx != NULL ) {
						mapNextIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aNextIdxObj ) );
					}
				}
			}

			if( indexByIdxPrevIdx != NULL ) {
				static const std::string S_AIdxPrevIdxObj( "aIdxPrevIdxObj" );
				cfbam::ICFBamIndexColObj* aIdxPrevIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aIdxPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIdxPrevIdxObj );
				}
				cfbam::CFBamIndexColByIdxPrevIdxKey keyIdxPrevIdx;
				keyIdxPrevIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyIdxPrevIdx.setRequiredIndexId( keepObj->getRequiredIndexId() );
				if( keepObj->isOptionalPrevIdNull() ) {
					keyIdxPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyIdxPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIndexByIdxPrevIdx = indexByIdxPrevIdx->find( keyIdxPrevIdx );
				if( searchIndexByIdxPrevIdx != indexByIdxPrevIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIdxPrevIdx = searchIndexByIdxPrevIdx->second;
					if( mapIdxPrevIdx != NULL ) {
						mapIdxPrevIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aIdxPrevIdxObj ) );
					}
				}
			}

			if( indexByIdxNextIdx != NULL ) {
				static const std::string S_AIdxNextIdxObj( "aIdxNextIdxObj" );
				cfbam::ICFBamIndexColObj* aIdxNextIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aIdxNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIdxNextIdxObj );
				}
				cfbam::CFBamIndexColByIdxNextIdxKey keyIdxNextIdx;
				keyIdxNextIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyIdxNextIdx.setRequiredIndexId( keepObj->getRequiredIndexId() );
				if( keepObj->isOptionalNextIdNull() ) {
					keyIdxNextIdx.setOptionalNextIdNull();
				}
				else {
					keyIdxNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIndexByIdxNextIdx = indexByIdxNextIdx->find( keyIdxNextIdx );
				if( searchIndexByIdxNextIdx != indexByIdxNextIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIdxNextIdx = searchIndexByIdxNextIdx->second;
					if( mapIdxNextIdx != NULL ) {
						mapIdxNextIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aIdxNextIdxObj ) );
					}
				}
			}

			if( allIndexCol != NULL ) {
				allIndexCol->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamIndexColObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamIndexColByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredIndexId( keepObj->getRequiredIndexId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamIndexColByUNameIdxKey, cfbam::ICFBamIndexColObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByIdxColTenantIdx != NULL ) {
				static const std::string S_AIdxColTenantIdxObj( "aIdxColTenantIdxObj" );
				cfbam::ICFBamIndexColObj* aIdxColTenantIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aIdxColTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIdxColTenantIdxObj );
				}
				cfbam::CFBamIndexColByIdxColTenantIdxKey keyIdxColTenantIdx;
				keyIdxColTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByIdxColTenantIdx = indexByIdxColTenantIdx->find( keyIdxColTenantIdx );
				if( searchIndexByIdxColTenantIdx != indexByIdxColTenantIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIdxColTenantIdx = searchIndexByIdxColTenantIdx->second;
					if( mapIdxColTenantIdx != NULL ) {
						mapIdxColTenantIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aIdxColTenantIdxObj ) );
					}
				}
			}

			if( indexByIndexIdx != NULL ) {
				static const std::string S_AIndexIdxObj( "aIndexIdxObj" );
				cfbam::ICFBamIndexColObj* aIndexIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aIndexIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIndexIdxObj );
				}
				cfbam::CFBamIndexColByIndexIdxKey keyIndexIdx;
				keyIndexIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyIndexIdx.setRequiredIndexId( keepObj->getRequiredIndexId() );
				auto searchIndexByIndexIdx = indexByIndexIdx->find( keyIndexIdx );
				if( searchIndexByIndexIdx != indexByIndexIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIndexIdx = searchIndexByIndexIdx->second;
					if( mapIndexIdx != NULL ) {
						mapIndexIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aIndexIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamIndexColObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamIndexColByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByColIdx != NULL ) {
				static const std::string S_AColIdxObj( "aColIdxObj" );
				cfbam::ICFBamIndexColObj* aColIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aColIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AColIdxObj );
				}
				cfbam::CFBamIndexColByColIdxKey keyColIdx;
				keyColIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyColIdx.setRequiredColumnId( keepObj->getRequiredColumnId() );
				auto searchIndexByColIdx = indexByColIdx->find( keyColIdx );
				if( searchIndexByColIdx != indexByColIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapColIdx = searchIndexByColIdx->second;
					if( mapColIdx != NULL ) {
						mapColIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aColIdxObj ) );
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				static const std::string S_APrevIdxObj( "aPrevIdxObj" );
				cfbam::ICFBamIndexColObj* aPrevIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevIdxObj );
				}
				cfbam::CFBamIndexColByPrevIdxKey keyPrevIdx;
				if( keepObj->isOptionalPrevTenantIdNull() ) {
					keyPrevIdx.setOptionalPrevTenantIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevTenantIdValue( keepObj->getOptionalPrevTenantIdValue() );
				}
				if( keepObj->isOptionalPrevIdNull() ) {
					keyPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIndexByPrevIdx = indexByPrevIdx->find( keyPrevIdx );
				if( searchIndexByPrevIdx != indexByPrevIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapPrevIdx = searchIndexByPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						mapPrevIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aPrevIdxObj ) );
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				static const std::string S_ANextIdxObj( "aNextIdxObj" );
				cfbam::ICFBamIndexColObj* aNextIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextIdxObj );
				}
				cfbam::CFBamIndexColByNextIdxKey keyNextIdx;
				if( keepObj->isOptionalNextTenantIdNull() ) {
					keyNextIdx.setOptionalNextTenantIdNull();
				}
				else {
					keyNextIdx.setOptionalNextTenantIdValue( keepObj->getOptionalNextTenantIdValue() );
				}
				if( keepObj->isOptionalNextIdNull() ) {
					keyNextIdx.setOptionalNextIdNull();
				}
				else {
					keyNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIndexByNextIdx = indexByNextIdx->find( keyNextIdx );
				if( searchIndexByNextIdx != indexByNextIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapNextIdx = searchIndexByNextIdx->second;
					if( mapNextIdx != NULL ) {
						mapNextIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aNextIdxObj ) );
					}
				}
			}

			if( indexByIdxPrevIdx != NULL ) {
				static const std::string S_AIdxPrevIdxObj( "aIdxPrevIdxObj" );
				cfbam::ICFBamIndexColObj* aIdxPrevIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aIdxPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIdxPrevIdxObj );
				}
				cfbam::CFBamIndexColByIdxPrevIdxKey keyIdxPrevIdx;
				keyIdxPrevIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyIdxPrevIdx.setRequiredIndexId( keepObj->getRequiredIndexId() );
				if( keepObj->isOptionalPrevIdNull() ) {
					keyIdxPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyIdxPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIndexByIdxPrevIdx = indexByIdxPrevIdx->find( keyIdxPrevIdx );
				if( searchIndexByIdxPrevIdx != indexByIdxPrevIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIdxPrevIdx = searchIndexByIdxPrevIdx->second;
					if( mapIdxPrevIdx != NULL ) {
						mapIdxPrevIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aIdxPrevIdxObj ) );
					}
				}
			}

			if( indexByIdxNextIdx != NULL ) {
				static const std::string S_AIdxNextIdxObj( "aIdxNextIdxObj" );
				cfbam::ICFBamIndexColObj* aIdxNextIdxObj =
					dynamic_cast<cfbam::ICFBamIndexColObj*>( keepObj );
				if( aIdxNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIdxNextIdxObj );
				}
				cfbam::CFBamIndexColByIdxNextIdxKey keyIdxNextIdx;
				keyIdxNextIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyIdxNextIdx.setRequiredIndexId( keepObj->getRequiredIndexId() );
				if( keepObj->isOptionalNextIdNull() ) {
					keyIdxNextIdx.setOptionalNextIdNull();
				}
				else {
					keyIdxNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIndexByIdxNextIdx = indexByIdxNextIdx->find( keyIdxNextIdx );
				if( searchIndexByIdxNextIdx != indexByIdxNextIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIdxNextIdx = searchIndexByIdxNextIdx->second;
					if( mapIdxNextIdx != NULL ) {
						mapIdxNextIdx->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), aIdxNextIdxObj ) );
					}
				}
			}

			if( allIndexCol != NULL ) {
				allIndexCol->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamIndexColTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamIndexColObj*> list;
		cfbam::ICFBamIndexColObj* existingObj = readCachedIndexColByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamIndexColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->reallyDeepDisposeIndexCol( dynamic_cast<cfbam::ICFBamIndexColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamIndexColTableObj::deepDisposeByUNameIdx( const int64_t TenantId,
			const int64_t IndexId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfbam::ICFBamIndexColObj*> list;
		cfbam::ICFBamIndexColObj* existingObj = readCachedIndexColByUNameIdx( TenantId,
				IndexId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamIndexColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->reallyDeepDisposeIndexCol( dynamic_cast<cfbam::ICFBamIndexColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamIndexColTableObj::deepDisposeByIdxColTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByIdxColTenantIdx" );
		std::vector<cfbam::ICFBamIndexColObj*> list;
		std::vector<cfbam::ICFBamIndexColObj*> matchesFound = readCachedIndexColByIdxColTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamIndexColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->reallyDeepDisposeIndexCol( dynamic_cast<cfbam::ICFBamIndexColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamIndexColTableObj::deepDisposeByIndexIdx( const int64_t TenantId,
			const int64_t IndexId ) {
		static const std::string S_ProcName( "deepDisposeByIndexIdx" );
		std::vector<cfbam::ICFBamIndexColObj*> list;
		std::vector<cfbam::ICFBamIndexColObj*> matchesFound = readCachedIndexColByIndexIdx( TenantId,
				IndexId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamIndexColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->reallyDeepDisposeIndexCol( dynamic_cast<cfbam::ICFBamIndexColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamIndexColTableObj::deepDisposeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) {
		static const std::string S_ProcName( "deepDisposeByDefSchemaIdx" );
		std::vector<cfbam::ICFBamIndexColObj*> list;
		std::vector<cfbam::ICFBamIndexColObj*> matchesFound = readCachedIndexColByDefSchemaIdx( DefSchemaTenantId,
				DefSchemaId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamIndexColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->reallyDeepDisposeIndexCol( dynamic_cast<cfbam::ICFBamIndexColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamIndexColTableObj::deepDisposeByColIdx( const int64_t TenantId,
			const int64_t ColumnId ) {
		static const std::string S_ProcName( "deepDisposeByColIdx" );
		std::vector<cfbam::ICFBamIndexColObj*> list;
		std::vector<cfbam::ICFBamIndexColObj*> matchesFound = readCachedIndexColByColIdx( TenantId,
				ColumnId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamIndexColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->reallyDeepDisposeIndexCol( dynamic_cast<cfbam::ICFBamIndexColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamIndexColTableObj::deepDisposeByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId ) {
		static const std::string S_ProcName( "deepDisposeByPrevIdx" );
		std::vector<cfbam::ICFBamIndexColObj*> list;
		std::vector<cfbam::ICFBamIndexColObj*> matchesFound = readCachedIndexColByPrevIdx( PrevTenantId,
				PrevId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamIndexColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->reallyDeepDisposeIndexCol( dynamic_cast<cfbam::ICFBamIndexColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamIndexColTableObj::deepDisposeByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId ) {
		static const std::string S_ProcName( "deepDisposeByNextIdx" );
		std::vector<cfbam::ICFBamIndexColObj*> list;
		std::vector<cfbam::ICFBamIndexColObj*> matchesFound = readCachedIndexColByNextIdx( NextTenantId,
				NextId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamIndexColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->reallyDeepDisposeIndexCol( dynamic_cast<cfbam::ICFBamIndexColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamIndexColTableObj::deepDisposeByIdxPrevIdx( const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* PrevId ) {
		static const std::string S_ProcName( "deepDisposeByIdxPrevIdx" );
		std::vector<cfbam::ICFBamIndexColObj*> list;
		std::vector<cfbam::ICFBamIndexColObj*> matchesFound = readCachedIndexColByIdxPrevIdx( TenantId,
				IndexId,
				PrevId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamIndexColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->reallyDeepDisposeIndexCol( dynamic_cast<cfbam::ICFBamIndexColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamIndexColTableObj::deepDisposeByIdxNextIdx( const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* NextId ) {
		static const std::string S_ProcName( "deepDisposeByIdxNextIdx" );
		std::vector<cfbam::ICFBamIndexColObj*> list;
		std::vector<cfbam::ICFBamIndexColObj*> matchesFound = readCachedIndexColByIdxNextIdx( TenantId,
				IndexId,
				NextId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamIndexColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->reallyDeepDisposeIndexCol( dynamic_cast<cfbam::ICFBamIndexColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamIndexColTableObj::reallyDeepDisposeIndexCol( cfbam::ICFBamIndexColObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeIndexCol" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamIndexColObj* obj = Obj;
		
		dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->deepDisposeByFromColIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->deepDisposeByToColIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamIndexColBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->reallyDetachFromIndexesIndexCol( dynamic_cast<cfbam::ICFBamIndexColObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::createIndexCol( cfbam::ICFBamIndexColEditObj* Obj ) {
		static const std::string S_ProcName( "createIndexCol" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamIndexColObj* obj = dynamic_cast<cfbam::ICFBamIndexColObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamIndexColBuff* buff = dynamic_cast<cfbam::CFBamIndexColBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->createIndexCol(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamIndexColBuff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
			if( obj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Obj );
			}
		cfbam::ICFBamIndexColObj* prev = obj->getOptionalLookupPrev();
		if( prev != NULL ) {
			prev->read( true );
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

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::readIndexCol( cfbam::CFBamIndexColPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readIndexCol" );
		cfbam::ICFBamIndexColObj* obj = NULL;
		cfbam::ICFBamIndexColObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamIndexColBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
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

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::lockIndexCol( cfbam::CFBamIndexColPKey* pkey ) {
		static const std::string S_ProcName( "lockIndexCol" );
		cfbam::ICFBamIndexColObj* locked = NULL;
		cfbam::CFBamIndexColBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamIndexColObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readAllIndexCol( bool forceRead ) {
		static const std::string S_ProcName( "readAllIndexCol" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamIndexColObj* realized = NULL;
		if( forceRead || ( allIndexCol == NULL ) ) {
			std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* map = new std::map<cfbam::CFBamIndexColPKey,cfbam::ICFBamIndexColObj*>();
			allIndexCol = map;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamIndexColBuff* buff = NULL;
			cfbam::ICFBamIndexColObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allIndexCol->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allIndexCol->size();
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		auto valIter = allIndexCol->begin();
		size_t idx = 0;
		while( valIter != allIndexCol->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::readIndexColByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readIndexColByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamIndexColPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamIndexColObj* obj = readIndexCol( &pkey, forceRead );
		return( obj );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::readIndexColByUNameIdx( const int64_t TenantId,
			const int64_t IndexId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readIndexColByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamIndexColByUNameIdxKey,
				cfbam::ICFBamIndexColObj*>();
		}
		cfbam::CFBamIndexColByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		key.setRequiredName( Name );
		cfbam::ICFBamIndexColObj* obj = NULL;
		cfbam::ICFBamIndexColObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamIndexColBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readDerivedByUNameIdx( schema->getAuthorization(),
				TenantId,
				IndexId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamIndexColByUNameIdxKey, cfbam::ICFBamIndexColObj*>::value_type( key, dynamic_cast<cfbam::ICFBamIndexColObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readIndexColByIdxColTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readIndexColByIdxColTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamIndexColByIdxColTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* oldDict;
		if( indexByIdxColTenantIdx == NULL ) {
			indexByIdxColTenantIdx = new std::map< cfbam::CFBamIndexColByIdxColTenantIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		}
		auto searchIndexByIdxColTenantIdx = indexByIdxColTenantIdx->find( key );
		if( searchIndexByIdxColTenantIdx != indexByIdxColTenantIdx->end() ) {
			oldDict = searchIndexByIdxColTenantIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>();
			cfbam::ICFBamIndexColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readDerivedByIdxColTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamIndexColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamIndexColObj* realized = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByIdxColTenantIdx->erase( searchIndexByIdxColTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByIdxColTenantIdx->insert( std::map< cfbam::CFBamIndexColByIdxColTenantIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readIndexColByIndexIdx( const int64_t TenantId,
			const int64_t IndexId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readIndexColByIndexIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamIndexColByIndexIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* oldDict;
		if( indexByIndexIdx == NULL ) {
			indexByIndexIdx = new std::map< cfbam::CFBamIndexColByIndexIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		}
		auto searchIndexByIndexIdx = indexByIndexIdx->find( key );
		if( searchIndexByIndexIdx != indexByIndexIdx->end() ) {
			oldDict = searchIndexByIndexIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>();
			cfbam::ICFBamIndexColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readDerivedByIndexIdx( schema->getAuthorization(),
				TenantId,
				IndexId );
			cfbam::CFBamIndexColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamIndexColObj* realized = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByIndexIdx->erase( searchIndexByIndexIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByIndexIdx->insert( std::map< cfbam::CFBamIndexColByIndexIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readIndexColByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readIndexColByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamIndexColByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* oldDict;
		if( indexByDefSchemaIdx == NULL ) {
			indexByDefSchemaIdx = new std::map< cfbam::CFBamIndexColByDefSchemaIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
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
			dict = new std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>();
			cfbam::ICFBamIndexColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readDerivedByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
			cfbam::CFBamIndexColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamIndexColObj* realized = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDefSchemaIdx->erase( searchIndexByDefSchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDefSchemaIdx->insert( std::map< cfbam::CFBamIndexColByDefSchemaIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readIndexColByColIdx( const int64_t TenantId,
			const int64_t ColumnId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readIndexColByColIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamIndexColByColIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredColumnId( ColumnId );
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* oldDict;
		if( indexByColIdx == NULL ) {
			indexByColIdx = new std::map< cfbam::CFBamIndexColByColIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		}
		auto searchIndexByColIdx = indexByColIdx->find( key );
		if( searchIndexByColIdx != indexByColIdx->end() ) {
			oldDict = searchIndexByColIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>();
			cfbam::ICFBamIndexColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readDerivedByColIdx( schema->getAuthorization(),
				TenantId,
				ColumnId );
			cfbam::CFBamIndexColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamIndexColObj* realized = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByColIdx->erase( searchIndexByColIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByColIdx->insert( std::map< cfbam::CFBamIndexColByColIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readIndexColByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readIndexColByPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamIndexColByPrevIdxKey key;
		if( PrevTenantId == NULL ) {
			key.setOptionalPrevTenantIdNull();
		}
		else {
			key.setOptionalPrevTenantIdValue( *PrevTenantId );
		}
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* oldDict;
		if( indexByPrevIdx == NULL ) {
			indexByPrevIdx = new std::map< cfbam::CFBamIndexColByPrevIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		}
		auto searchIndexByPrevIdx = indexByPrevIdx->find( key );
		if( searchIndexByPrevIdx != indexByPrevIdx->end() ) {
			oldDict = searchIndexByPrevIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>();
			cfbam::ICFBamIndexColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readDerivedByPrevIdx( schema->getAuthorization(),
				PrevTenantId,
				PrevId );
			cfbam::CFBamIndexColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamIndexColObj* realized = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByPrevIdx->erase( searchIndexByPrevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByPrevIdx->insert( std::map< cfbam::CFBamIndexColByPrevIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readIndexColByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readIndexColByNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamIndexColByNextIdxKey key;
		if( NextTenantId == NULL ) {
			key.setOptionalNextTenantIdNull();
		}
		else {
			key.setOptionalNextTenantIdValue( *NextTenantId );
		}
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* oldDict;
		if( indexByNextIdx == NULL ) {
			indexByNextIdx = new std::map< cfbam::CFBamIndexColByNextIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		}
		auto searchIndexByNextIdx = indexByNextIdx->find( key );
		if( searchIndexByNextIdx != indexByNextIdx->end() ) {
			oldDict = searchIndexByNextIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>();
			cfbam::ICFBamIndexColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readDerivedByNextIdx( schema->getAuthorization(),
				NextTenantId,
				NextId );
			cfbam::CFBamIndexColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamIndexColObj* realized = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByNextIdx->erase( searchIndexByNextIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByNextIdx->insert( std::map< cfbam::CFBamIndexColByNextIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readIndexColByIdxPrevIdx( const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* PrevId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readIndexColByIdxPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamIndexColByIdxPrevIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* oldDict;
		if( indexByIdxPrevIdx == NULL ) {
			indexByIdxPrevIdx = new std::map< cfbam::CFBamIndexColByIdxPrevIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		}
		auto searchIndexByIdxPrevIdx = indexByIdxPrevIdx->find( key );
		if( searchIndexByIdxPrevIdx != indexByIdxPrevIdx->end() ) {
			oldDict = searchIndexByIdxPrevIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>();
			cfbam::ICFBamIndexColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readDerivedByIdxPrevIdx( schema->getAuthorization(),
				TenantId,
				IndexId,
				PrevId );
			cfbam::CFBamIndexColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamIndexColObj* realized = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByIdxPrevIdx->erase( searchIndexByIdxPrevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByIdxPrevIdx->insert( std::map< cfbam::CFBamIndexColByIdxPrevIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readIndexColByIdxNextIdx( const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* NextId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readIndexColByIdxNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamIndexColByIdxNextIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* oldDict;
		if( indexByIdxNextIdx == NULL ) {
			indexByIdxNextIdx = new std::map< cfbam::CFBamIndexColByIdxNextIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>*>();
		}
		auto searchIndexByIdxNextIdx = indexByIdxNextIdx->find( key );
		if( searchIndexByIdxNextIdx != indexByIdxNextIdx->end() ) {
			oldDict = searchIndexByIdxNextIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>();
			cfbam::ICFBamIndexColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamIndexColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readDerivedByIdxNextIdx( schema->getAuthorization(),
				TenantId,
				IndexId,
				NextId );
			cfbam::CFBamIndexColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamIndexColObj* realized = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByIdxNextIdx->erase( searchIndexByIdxNextIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByIdxNextIdx->insert( std::map< cfbam::CFBamIndexColByIdxNextIdxKey,
				std::map< cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::readIndexColByLookupUNameIdx( const int64_t TenantId,
			const int64_t IndexId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readIndexColByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamIndexColByUNameIdxKey,
				cfbam::ICFBamIndexColObj*>();
		}
		cfbam::CFBamIndexColByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		key.setRequiredName( Name );
		cfbam::ICFBamIndexColObj* obj = NULL;
		cfbam::ICFBamIndexColObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				obj = searchIndexByUNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamIndexColBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->readDerivedByLookupUNameIdx( schema->getAuthorization(),
				TenantId,
				IndexId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamIndexColObj*>( dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamIndexColByUNameIdxKey, cfbam::ICFBamIndexColObj*>::value_type( key, dynamic_cast<cfbam::ICFBamIndexColObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::readCachedIndexCol( cfbam::CFBamIndexColPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readIndexCol" );
		cfbam::ICFBamIndexColObj* obj = NULL;
		cfbam::ICFBamIndexColObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::readCachedIndexColByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedIndexColByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamIndexColPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamIndexColObj* obj = readCachedIndexCol( &pkey );
		return( obj );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::readCachedIndexColByUNameIdx( const int64_t TenantId,
			const int64_t IndexId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedIndexColByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamIndexColByUNameIdxKey,
				cfbam::ICFBamIndexColObj*>();
		}
		cfbam::CFBamIndexColByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		key.setRequiredName( Name );
		cfbam::ICFBamIndexColObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamIndexColBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readCachedIndexColByIdxColTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedIndexColByIdxColTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		cfbam::CFBamIndexColByIdxColTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		if( indexByIdxColTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByIdxColTenantIdx = indexByIdxColTenantIdx->find( key );
		if( searchIndexByIdxColTenantIdx != indexByIdxColTenantIdx->end() ) {
			dict = searchIndexByIdxColTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamIndexColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamIndexColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamIndexColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readCachedIndexColByIndexIdx( const int64_t TenantId,
			const int64_t IndexId )
	{
		static const std::string S_ProcName( "readCachedIndexColByIndexIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		cfbam::CFBamIndexColByIndexIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		if( indexByIndexIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByIndexIdx = indexByIndexIdx->find( key );
		if( searchIndexByIndexIdx != indexByIndexIdx->end() ) {
			dict = searchIndexByIndexIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamIndexColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamIndexColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamIndexColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readCachedIndexColByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readCachedIndexColByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		cfbam::CFBamIndexColByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		if( indexByDefSchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( key );
		if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
			dict = searchIndexByDefSchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamIndexColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamIndexColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamIndexColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readCachedIndexColByColIdx( const int64_t TenantId,
			const int64_t ColumnId )
	{
		static const std::string S_ProcName( "readCachedIndexColByColIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		cfbam::CFBamIndexColByColIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredColumnId( ColumnId );
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		if( indexByColIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByColIdx = indexByColIdx->find( key );
		if( searchIndexByColIdx != indexByColIdx->end() ) {
			dict = searchIndexByColIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamIndexColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamIndexColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamIndexColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readCachedIndexColByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readCachedIndexColByPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		cfbam::CFBamIndexColByPrevIdxKey key;
		if( PrevTenantId == NULL ) {
			key.setOptionalPrevTenantIdNull();
		}
		else {
			key.setOptionalPrevTenantIdValue( *PrevTenantId );
		}
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		if( indexByPrevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByPrevIdx = indexByPrevIdx->find( key );
		if( searchIndexByPrevIdx != indexByPrevIdx->end() ) {
			dict = searchIndexByPrevIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamIndexColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamIndexColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamIndexColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readCachedIndexColByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readCachedIndexColByNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		cfbam::CFBamIndexColByNextIdxKey key;
		if( NextTenantId == NULL ) {
			key.setOptionalNextTenantIdNull();
		}
		else {
			key.setOptionalNextTenantIdValue( *NextTenantId );
		}
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		if( indexByNextIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByNextIdx = indexByNextIdx->find( key );
		if( searchIndexByNextIdx != indexByNextIdx->end() ) {
			dict = searchIndexByNextIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamIndexColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamIndexColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamIndexColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readCachedIndexColByIdxPrevIdx( const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readCachedIndexColByIdxPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		cfbam::CFBamIndexColByIdxPrevIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		if( indexByIdxPrevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByIdxPrevIdx = indexByIdxPrevIdx->find( key );
		if( searchIndexByIdxPrevIdx != indexByIdxPrevIdx->end() ) {
			dict = searchIndexByIdxPrevIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamIndexColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamIndexColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamIndexColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamIndexColObj*> CFBamIndexColTableObj::readCachedIndexColByIdxNextIdx( const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readCachedIndexColByIdxNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamIndexColObj*> arr;
		cfbam::CFBamIndexColByIdxNextIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* dict;
		if( indexByIdxNextIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByIdxNextIdx = indexByIdxNextIdx->find( key );
		if( searchIndexByIdxNextIdx != indexByIdxNextIdx->end() ) {
			dict = searchIndexByIdxNextIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamIndexColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamIndexColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamIndexColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::readCachedIndexColByLookupUNameIdx( const int64_t TenantId,
			const int64_t IndexId,
			const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedIndexColByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamIndexColByUNameIdxKey,
				cfbam::ICFBamIndexColObj*>();
		}
		cfbam::CFBamIndexColByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		key.setRequiredName( Name );
		cfbam::ICFBamIndexColObj* obj = NULL;
		cfbam::ICFBamIndexColObj* realized = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamIndexColBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::updateIndexCol( cfbam::ICFBamIndexColEditObj* Obj ) {
		static const std::string S_ProcName( "updateIndexCol" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamIndexColObj* obj = dynamic_cast<cfbam::ICFBamIndexColObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamIndexColBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->updateIndexCol( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamIndexColBuff*>( Obj->getIndexColBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamIndexColObj*>( dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
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

	void CFBamIndexColTableObj::deleteIndexCol( cfbam::ICFBamIndexColEditObj* Obj ) {
		cfbam::ICFBamIndexColObj* obj = Obj;
		cfbam::ICFBamIndexColObj* prev = obj->getOptionalLookupPrev();
		cfbam::ICFBamIndexColObj* next = obj->getOptionalLookupNext();
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->deleteIndexCol( schema->getAuthorization(),
			obj->getIndexColBuff() );
		if( prev != NULL ) {
			prev->read( true );
		}
		if( next != NULL ) {
			next->read( true );
		}
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamIndexColTableObj::deleteIndexColByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamIndexColPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamIndexColObj* obj = readIndexCol( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamIndexColEditObj* editObj = dynamic_cast<cfbam::ICFBamIndexColEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamIndexColEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamIndexColTableObj::deleteIndexColByUNameIdx( const int64_t TenantId,
			const int64_t IndexId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamIndexColByUNameIdxKey,
				cfbam::ICFBamIndexColObj*>();
		}
		cfbam::CFBamIndexColByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIndexId( IndexId );
		key.setRequiredName( Name );
		cfbam::ICFBamIndexColObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->deleteIndexColByUNameIdx( schema->getAuthorization(),
				TenantId,
				IndexId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->deleteIndexColByUNameIdx( schema->getAuthorization(),
				TenantId,
				IndexId,
				Name );
		}
		deepDisposeByUNameIdx( TenantId,
			IndexId,
			Name );
	}

	void CFBamIndexColTableObj::deleteIndexColByIdxColTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->deleteIndexColByIdxColTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByIdxColTenantIdx( TenantId );
	}

	void CFBamIndexColTableObj::deleteIndexColByIndexIdx( const int64_t TenantId,
			const int64_t IndexId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->deleteIndexColByIndexIdx( schema->getAuthorization(),
				TenantId,
				IndexId );
		deepDisposeByIndexIdx( TenantId,
			IndexId );
	}

	void CFBamIndexColTableObj::deleteIndexColByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->deleteIndexColByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
		deepDisposeByDefSchemaIdx( DefSchemaTenantId,
			DefSchemaId );
	}

	void CFBamIndexColTableObj::deleteIndexColByColIdx( const int64_t TenantId,
			const int64_t ColumnId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->deleteIndexColByColIdx( schema->getAuthorization(),
				TenantId,
				ColumnId );
		deepDisposeByColIdx( TenantId,
			ColumnId );
	}

	void CFBamIndexColTableObj::deleteIndexColByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->deleteIndexColByPrevIdx( schema->getAuthorization(),
				PrevTenantId,
				PrevId );
		deepDisposeByPrevIdx( PrevTenantId,
			PrevId );
	}

	void CFBamIndexColTableObj::deleteIndexColByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->deleteIndexColByNextIdx( schema->getAuthorization(),
				NextTenantId,
				NextId );
		deepDisposeByNextIdx( NextTenantId,
			NextId );
	}

	void CFBamIndexColTableObj::deleteIndexColByIdxPrevIdx( const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* PrevId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->deleteIndexColByIdxPrevIdx( schema->getAuthorization(),
				TenantId,
				IndexId,
				PrevId );
		deepDisposeByIdxPrevIdx( TenantId,
			IndexId,
			PrevId );
	}

	void CFBamIndexColTableObj::deleteIndexColByIdxNextIdx( const int64_t TenantId,
			const int64_t IndexId,
			const int64_t* NextId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->deleteIndexColByIdxNextIdx( schema->getAuthorization(),
				TenantId,
				IndexId,
				NextId );
		deepDisposeByIdxNextIdx( TenantId,
			IndexId,
			NextId );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::moveUpIndexCol( cfbam::ICFBamIndexColObj* Obj ) {
		static const std::string S_ProcName( "moveUpIndexCol" );
		static const std::string S_CannotMoveEdition( "You cannot move an object that is being edited" );
		cfbam::ICFBamIndexColObj* obj = NULL;
		if( NULL != Obj->getEdit() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_CannotMoveEdition );
		}
		cfbam::CFBamIndexColBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->moveBuffUp( schema->getAuthorization(),
			Obj->getRequiredTenantId(),
			Obj->getRequiredId(),
			Obj->getIndexColBuff()->getRequiredRevision() );
		if( buff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
			obj->setBuff( buff );
			obj = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
			cfbam::ICFBamIndexColObj* prev = obj->getOptionalLookupPrev( true );
			cfbam::ICFBamIndexColObj* next = obj->getOptionalLookupNext( true );
			if( next != NULL ) {
				cfbam::ICFBamIndexColObj* gnext = next->getOptionalLookupNext( true );
			}
		}
		return( obj );
	}

	cfbam::ICFBamIndexColObj* CFBamIndexColTableObj::moveDownIndexCol( cfbam::ICFBamIndexColObj* Obj ) {
		static const std::string S_ProcName( "moveDownIndexCol" );
		static const std::string S_CannotMoveEdition( "You cannot move an object that is being edited" );
		cfbam::ICFBamIndexColObj* obj = NULL;
		if( NULL != Obj->getEdit() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_CannotMoveEdition );
		}
		cfbam::CFBamIndexColBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableIndexCol()->moveBuffDown( schema->getAuthorization(),
			Obj->getRequiredTenantId(),
			Obj->getRequiredId(),
			Obj->getIndexColBuff()->getRequiredRevision() );
		if( buff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->newInstance();
			obj->setBuff( buff );
			obj = dynamic_cast<cfbam::ICFBamIndexColObj*>( obj->realize() );
			cfbam::ICFBamIndexColObj* prev = obj->getOptionalLookupPrev( true );
			if( prev != NULL ) {
				cfbam::ICFBamIndexColObj* gprev = prev->getOptionalLookupPrev( true );
			}
			cfbam::ICFBamIndexColObj* next = obj->getOptionalLookupNext( true );
		}
		return( obj );
	}

	void CFBamIndexColTableObj::reallyDetachFromIndexesIndexCol( cfbam::ICFBamIndexColObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesIndexCol" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamIndexColObj* obj = Obj;
		cfbam::CFBamIndexColPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamIndexColObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamIndexColByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyUNameIdx.setRequiredIndexId( obj->getRequiredIndexId() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByIdxColTenantIdx != NULL ) {
				cfbam::CFBamIndexColByIdxColTenantIdxKey keyIdxColTenantIdx;
				keyIdxColTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchIdxColTenantIdx = indexByIdxColTenantIdx->find( keyIdxColTenantIdx );
				if( searchIdxColTenantIdx != indexByIdxColTenantIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIdxColTenantIdx = searchIdxColTenantIdx->second;
					if( mapIdxColTenantIdx != NULL ) {
						auto removalProbe = mapIdxColTenantIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapIdxColTenantIdx->end() ) {
							mapIdxColTenantIdx->erase( removalProbe );
							if( mapIdxColTenantIdx->empty() ) {
								delete mapIdxColTenantIdx;
								mapIdxColTenantIdx = NULL;
								indexByIdxColTenantIdx->erase( searchIdxColTenantIdx );
							}
						}
					}
				}
			}

			if( indexByIndexIdx != NULL ) {
				cfbam::CFBamIndexColByIndexIdxKey keyIndexIdx;
				keyIndexIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyIndexIdx.setRequiredIndexId( obj->getRequiredIndexId() );
				auto searchIndexIdx = indexByIndexIdx->find( keyIndexIdx );
				if( searchIndexIdx != indexByIndexIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIndexIdx = searchIndexIdx->second;
					if( mapIndexIdx != NULL ) {
						auto removalProbe = mapIndexIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapIndexIdx->end() ) {
							mapIndexIdx->erase( removalProbe );
							if( mapIndexIdx->empty() ) {
								delete mapIndexIdx;
								mapIndexIdx = NULL;
								indexByIndexIdx->erase( searchIndexIdx );
							}
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamIndexColByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
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

			if( indexByColIdx != NULL ) {
				cfbam::CFBamIndexColByColIdxKey keyColIdx;
				keyColIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyColIdx.setRequiredColumnId( obj->getRequiredColumnId() );
				auto searchColIdx = indexByColIdx->find( keyColIdx );
				if( searchColIdx != indexByColIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapColIdx = searchColIdx->second;
					if( mapColIdx != NULL ) {
						auto removalProbe = mapColIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapColIdx->end() ) {
							mapColIdx->erase( removalProbe );
							if( mapColIdx->empty() ) {
								delete mapColIdx;
								mapColIdx = NULL;
								indexByColIdx->erase( searchColIdx );
							}
						}
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				cfbam::CFBamIndexColByPrevIdxKey keyPrevIdx;
				if( obj->isOptionalPrevTenantIdNull() ) {
					keyPrevIdx.setOptionalPrevTenantIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevTenantIdValue( obj->getOptionalPrevTenantIdValue() );
				}
				if( obj->isOptionalPrevIdNull() ) {
					keyPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyPrevIdx.setOptionalPrevIdValue( obj->getOptionalPrevIdValue() );
				}
				auto searchPrevIdx = indexByPrevIdx->find( keyPrevIdx );
				if( searchPrevIdx != indexByPrevIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapPrevIdx = searchPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						auto removalProbe = mapPrevIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapPrevIdx->end() ) {
							mapPrevIdx->erase( removalProbe );
							if( mapPrevIdx->empty() ) {
								delete mapPrevIdx;
								mapPrevIdx = NULL;
								indexByPrevIdx->erase( searchPrevIdx );
							}
						}
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				cfbam::CFBamIndexColByNextIdxKey keyNextIdx;
				if( obj->isOptionalNextTenantIdNull() ) {
					keyNextIdx.setOptionalNextTenantIdNull();
				}
				else {
					keyNextIdx.setOptionalNextTenantIdValue( obj->getOptionalNextTenantIdValue() );
				}
				if( obj->isOptionalNextIdNull() ) {
					keyNextIdx.setOptionalNextIdNull();
				}
				else {
					keyNextIdx.setOptionalNextIdValue( obj->getOptionalNextIdValue() );
				}
				auto searchNextIdx = indexByNextIdx->find( keyNextIdx );
				if( searchNextIdx != indexByNextIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapNextIdx = searchNextIdx->second;
					if( mapNextIdx != NULL ) {
						auto removalProbe = mapNextIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapNextIdx->end() ) {
							mapNextIdx->erase( removalProbe );
							if( mapNextIdx->empty() ) {
								delete mapNextIdx;
								mapNextIdx = NULL;
								indexByNextIdx->erase( searchNextIdx );
							}
						}
					}
				}
			}

			if( indexByIdxPrevIdx != NULL ) {
				cfbam::CFBamIndexColByIdxPrevIdxKey keyIdxPrevIdx;
				keyIdxPrevIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyIdxPrevIdx.setRequiredIndexId( obj->getRequiredIndexId() );
				if( obj->isOptionalPrevIdNull() ) {
					keyIdxPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyIdxPrevIdx.setOptionalPrevIdValue( obj->getOptionalPrevIdValue() );
				}
				auto searchIdxPrevIdx = indexByIdxPrevIdx->find( keyIdxPrevIdx );
				if( searchIdxPrevIdx != indexByIdxPrevIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIdxPrevIdx = searchIdxPrevIdx->second;
					if( mapIdxPrevIdx != NULL ) {
						auto removalProbe = mapIdxPrevIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapIdxPrevIdx->end() ) {
							mapIdxPrevIdx->erase( removalProbe );
							if( mapIdxPrevIdx->empty() ) {
								delete mapIdxPrevIdx;
								mapIdxPrevIdx = NULL;
								indexByIdxPrevIdx->erase( searchIdxPrevIdx );
							}
						}
					}
				}
			}

			if( indexByIdxNextIdx != NULL ) {
				cfbam::CFBamIndexColByIdxNextIdxKey keyIdxNextIdx;
				keyIdxNextIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyIdxNextIdx.setRequiredIndexId( obj->getRequiredIndexId() );
				if( obj->isOptionalNextIdNull() ) {
					keyIdxNextIdx.setOptionalNextIdNull();
				}
				else {
					keyIdxNextIdx.setOptionalNextIdValue( obj->getOptionalNextIdValue() );
				}
				auto searchIdxNextIdx = indexByIdxNextIdx->find( keyIdxNextIdx );
				if( searchIdxNextIdx != indexByIdxNextIdx->end() ) {
					std::map<cfbam::CFBamIndexColPKey, cfbam::ICFBamIndexColObj*>* mapIdxNextIdx = searchIdxNextIdx->second;
					if( mapIdxNextIdx != NULL ) {
						auto removalProbe = mapIdxNextIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapIdxNextIdx->end() ) {
							mapIdxNextIdx->erase( removalProbe );
							if( mapIdxNextIdx->empty() ) {
								delete mapIdxNextIdx;
								mapIdxNextIdx = NULL;
								indexByIdxNextIdx->erase( searchIdxNextIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
