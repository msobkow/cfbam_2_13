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

	const std::string CFBamRelationColTableObj::CLASS_NAME( "CFBamRelationColTableObj" );
	const std::string CFBamRelationColTableObj::TABLE_NAME( "RelationCol" );
	const std::string CFBamRelationColTableObj::TABLE_DBNAME( "relcol" );

	CFBamRelationColTableObj::CFBamRelationColTableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>();
		allRelationCol = NULL;
		indexByUNameIdx = new std::map< cfbam::CFBamRelationColByUNameIdxKey,
			cfbam::ICFBamRelationColObj*>();
		indexByRelColTenantIdx = new std::map< cfbam::CFBamRelationColByRelColTenantIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByRelationIdx = new std::map< cfbam::CFBamRelationColByRelationIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamRelationColByDefSchemaIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByFromColIdx = new std::map< cfbam::CFBamRelationColByFromColIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByToColIdx = new std::map< cfbam::CFBamRelationColByToColIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByPrevIdx = new std::map< cfbam::CFBamRelationColByPrevIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByNextIdx = new std::map< cfbam::CFBamRelationColByNextIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByRelPrevIdx = new std::map< cfbam::CFBamRelationColByRelPrevIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByRelNextIdx = new std::map< cfbam::CFBamRelationColByRelNextIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
	}

	CFBamRelationColTableObj::CFBamRelationColTableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>();
		allRelationCol = NULL;
		indexByUNameIdx = new std::map< cfbam::CFBamRelationColByUNameIdxKey,
			cfbam::ICFBamRelationColObj*>();
		indexByRelColTenantIdx = new std::map< cfbam::CFBamRelationColByRelColTenantIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByRelationIdx = new std::map< cfbam::CFBamRelationColByRelationIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamRelationColByDefSchemaIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByFromColIdx = new std::map< cfbam::CFBamRelationColByFromColIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByToColIdx = new std::map< cfbam::CFBamRelationColByToColIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByPrevIdx = new std::map< cfbam::CFBamRelationColByPrevIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByNextIdx = new std::map< cfbam::CFBamRelationColByNextIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByRelPrevIdx = new std::map< cfbam::CFBamRelationColByRelPrevIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		indexByRelNextIdx = new std::map< cfbam::CFBamRelationColByRelNextIdxKey,
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
	}

	CFBamRelationColTableObj::~CFBamRelationColTableObj() {
		minimizeMemory();
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( indexByRelColTenantIdx != NULL ) {
			delete indexByRelColTenantIdx;
			indexByRelColTenantIdx = NULL;
		}
		if( indexByRelationIdx != NULL ) {
			delete indexByRelationIdx;
			indexByRelationIdx = NULL;
		}
		if( indexByDefSchemaIdx != NULL ) {
			delete indexByDefSchemaIdx;
			indexByDefSchemaIdx = NULL;
		}
		if( indexByFromColIdx != NULL ) {
			delete indexByFromColIdx;
			indexByFromColIdx = NULL;
		}
		if( indexByToColIdx != NULL ) {
			delete indexByToColIdx;
			indexByToColIdx = NULL;
		}
		if( indexByPrevIdx != NULL ) {
			delete indexByPrevIdx;
			indexByPrevIdx = NULL;
		}
		if( indexByNextIdx != NULL ) {
			delete indexByNextIdx;
			indexByNextIdx = NULL;
		}
		if( indexByRelPrevIdx != NULL ) {
			delete indexByRelPrevIdx;
			indexByRelPrevIdx = NULL;
		}
		if( indexByRelNextIdx != NULL ) {
			delete indexByRelNextIdx;
			indexByRelNextIdx = NULL;
		}
		if( members != NULL ) {
			cfbam::ICFBamRelationColObj* curMember;
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

	cfbam::ICFBamSchemaObj* CFBamRelationColTableObj::getSchema() {
		return( schema );
	}

	void CFBamRelationColTableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamRelationColTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamRelationColTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamRelationColTableObj::getObjQualifyingClassCode() {
		return( &cfbam::CFBamSchemaDefBuff::CLASS_CODE );
	}


	void CFBamRelationColTableObj::minimizeMemory() {
		if( allRelationCol != NULL ) {
			allRelationCol->clear();
			delete allRelationCol;
			allRelationCol = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( indexByRelColTenantIdx != NULL ) {
			std::map< cfbam::CFBamRelationColByRelColTenantIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator iterByRelColTenantIdx = indexByRelColTenantIdx->begin();
			std::map< cfbam::CFBamRelationColByRelColTenantIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator endByRelColTenantIdx = indexByRelColTenantIdx->end();
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* curByRelColTenantIdx = NULL;
			while( iterByRelColTenantIdx != endByRelColTenantIdx ) {
				curByRelColTenantIdx = iterByRelColTenantIdx->second;
				if( curByRelColTenantIdx != NULL ) {
					curByRelColTenantIdx->clear();
					delete curByRelColTenantIdx;
					curByRelColTenantIdx = NULL;
					iterByRelColTenantIdx->second = NULL;
				}
				iterByRelColTenantIdx ++;
			}
			indexByRelColTenantIdx->clear();
		}
		if( indexByRelationIdx != NULL ) {
			std::map< cfbam::CFBamRelationColByRelationIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator iterByRelationIdx = indexByRelationIdx->begin();
			std::map< cfbam::CFBamRelationColByRelationIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator endByRelationIdx = indexByRelationIdx->end();
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* curByRelationIdx = NULL;
			while( iterByRelationIdx != endByRelationIdx ) {
				curByRelationIdx = iterByRelationIdx->second;
				if( curByRelationIdx != NULL ) {
					curByRelationIdx->clear();
					delete curByRelationIdx;
					curByRelationIdx = NULL;
					iterByRelationIdx->second = NULL;
				}
				iterByRelationIdx ++;
			}
			indexByRelationIdx->clear();
		}
		if( indexByDefSchemaIdx != NULL ) {
			std::map< cfbam::CFBamRelationColByDefSchemaIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator iterByDefSchemaIdx = indexByDefSchemaIdx->begin();
			std::map< cfbam::CFBamRelationColByDefSchemaIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator endByDefSchemaIdx = indexByDefSchemaIdx->end();
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* curByDefSchemaIdx = NULL;
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
		if( indexByFromColIdx != NULL ) {
			std::map< cfbam::CFBamRelationColByFromColIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator iterByFromColIdx = indexByFromColIdx->begin();
			std::map< cfbam::CFBamRelationColByFromColIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator endByFromColIdx = indexByFromColIdx->end();
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* curByFromColIdx = NULL;
			while( iterByFromColIdx != endByFromColIdx ) {
				curByFromColIdx = iterByFromColIdx->second;
				if( curByFromColIdx != NULL ) {
					curByFromColIdx->clear();
					delete curByFromColIdx;
					curByFromColIdx = NULL;
					iterByFromColIdx->second = NULL;
				}
				iterByFromColIdx ++;
			}
			indexByFromColIdx->clear();
		}
		if( indexByToColIdx != NULL ) {
			std::map< cfbam::CFBamRelationColByToColIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator iterByToColIdx = indexByToColIdx->begin();
			std::map< cfbam::CFBamRelationColByToColIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator endByToColIdx = indexByToColIdx->end();
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* curByToColIdx = NULL;
			while( iterByToColIdx != endByToColIdx ) {
				curByToColIdx = iterByToColIdx->second;
				if( curByToColIdx != NULL ) {
					curByToColIdx->clear();
					delete curByToColIdx;
					curByToColIdx = NULL;
					iterByToColIdx->second = NULL;
				}
				iterByToColIdx ++;
			}
			indexByToColIdx->clear();
		}
		if( indexByPrevIdx != NULL ) {
			std::map< cfbam::CFBamRelationColByPrevIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator iterByPrevIdx = indexByPrevIdx->begin();
			std::map< cfbam::CFBamRelationColByPrevIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator endByPrevIdx = indexByPrevIdx->end();
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* curByPrevIdx = NULL;
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
			std::map< cfbam::CFBamRelationColByNextIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator iterByNextIdx = indexByNextIdx->begin();
			std::map< cfbam::CFBamRelationColByNextIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator endByNextIdx = indexByNextIdx->end();
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* curByNextIdx = NULL;
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
		if( indexByRelPrevIdx != NULL ) {
			std::map< cfbam::CFBamRelationColByRelPrevIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator iterByRelPrevIdx = indexByRelPrevIdx->begin();
			std::map< cfbam::CFBamRelationColByRelPrevIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator endByRelPrevIdx = indexByRelPrevIdx->end();
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* curByRelPrevIdx = NULL;
			while( iterByRelPrevIdx != endByRelPrevIdx ) {
				curByRelPrevIdx = iterByRelPrevIdx->second;
				if( curByRelPrevIdx != NULL ) {
					curByRelPrevIdx->clear();
					delete curByRelPrevIdx;
					curByRelPrevIdx = NULL;
					iterByRelPrevIdx->second = NULL;
				}
				iterByRelPrevIdx ++;
			}
			indexByRelPrevIdx->clear();
		}
		if( indexByRelNextIdx != NULL ) {
			std::map< cfbam::CFBamRelationColByRelNextIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator iterByRelNextIdx = indexByRelNextIdx->begin();
			std::map< cfbam::CFBamRelationColByRelNextIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* >::iterator endByRelNextIdx = indexByRelNextIdx->end();
			std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* curByRelNextIdx = NULL;
			while( iterByRelNextIdx != endByRelNextIdx ) {
				curByRelNextIdx = iterByRelNextIdx->second;
				if( curByRelNextIdx != NULL ) {
					curByRelNextIdx->clear();
					delete curByRelNextIdx;
					curByRelNextIdx = NULL;
					iterByRelNextIdx->second = NULL;
				}
				iterByRelNextIdx ++;
			}
			indexByRelNextIdx->clear();
		}
		if( members != NULL ) {
			cfbam::ICFBamRelationColObj* cur = NULL;
			cfbam::ICFBamRelationColEditObj* edit = NULL;
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

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::newInstance() {
		cfbam::ICFBamRelationColObj* inst = dynamic_cast<cfbam::ICFBamRelationColObj*>( new CFBamRelationColObj( schema ) );
		return( inst );
	}

	cfbam::ICFBamRelationColEditObj* CFBamRelationColTableObj::newEditInstance( cfbam::ICFBamRelationColObj* orig ) {
		cfbam::ICFBamRelationColEditObj* edit = dynamic_cast<cfbam::ICFBamRelationColEditObj*>( new CFBamRelationColEditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::realizeRelationCol( cfbam::ICFBamRelationColObj* Obj ) {
		static const std::string S_ProcName( "realizeRelationCol" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamRelationColObj* obj = Obj;
		cfbam::ICFBamRelationColObj* existingObj = NULL;
		cfbam::CFBamRelationColPKey* pkey = obj->getPKey();
		cfbam::ICFBamRelationColObj* keepObj = NULL;
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
				cfbam::CFBamRelationColByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByRelColTenantIdx != NULL ) {
				cfbam::CFBamRelationColByRelColTenantIdxKey keyRelColTenantIdx;
				keyRelColTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchRelColTenantIdx = indexByRelColTenantIdx->find( keyRelColTenantIdx );
				if( searchRelColTenantIdx != indexByRelColTenantIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelColTenantIdx = searchRelColTenantIdx->second;
					if( mapRelColTenantIdx != NULL ) {
						auto removalProbe = mapRelColTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapRelColTenantIdx->end() ) {
							mapRelColTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByRelationIdx != NULL ) {
				cfbam::CFBamRelationColByRelationIdxKey keyRelationIdx;
				keyRelationIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyRelationIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				auto searchRelationIdx = indexByRelationIdx->find( keyRelationIdx );
				if( searchRelationIdx != indexByRelationIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelationIdx = searchRelationIdx->second;
					if( mapRelationIdx != NULL ) {
						auto removalProbe = mapRelationIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapRelationIdx->end() ) {
							mapRelationIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamRelationColByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapDefSchemaIdx->end() ) {
							mapDefSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByFromColIdx != NULL ) {
				cfbam::CFBamRelationColByFromColIdxKey keyFromColIdx;
				keyFromColIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyFromColIdx.setRequiredFromColId( keepObj->getRequiredFromColId() );
				auto searchFromColIdx = indexByFromColIdx->find( keyFromColIdx );
				if( searchFromColIdx != indexByFromColIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapFromColIdx = searchFromColIdx->second;
					if( mapFromColIdx != NULL ) {
						auto removalProbe = mapFromColIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapFromColIdx->end() ) {
							mapFromColIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByToColIdx != NULL ) {
				cfbam::CFBamRelationColByToColIdxKey keyToColIdx;
				keyToColIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyToColIdx.setRequiredToColId( keepObj->getRequiredToColId() );
				auto searchToColIdx = indexByToColIdx->find( keyToColIdx );
				if( searchToColIdx != indexByToColIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapToColIdx = searchToColIdx->second;
					if( mapToColIdx != NULL ) {
						auto removalProbe = mapToColIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapToColIdx->end() ) {
							mapToColIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				cfbam::CFBamRelationColByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapPrevIdx = searchPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						auto removalProbe = mapPrevIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapPrevIdx->end() ) {
							mapPrevIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				cfbam::CFBamRelationColByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapNextIdx = searchNextIdx->second;
					if( mapNextIdx != NULL ) {
						auto removalProbe = mapNextIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapNextIdx->end() ) {
							mapNextIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByRelPrevIdx != NULL ) {
				cfbam::CFBamRelationColByRelPrevIdxKey keyRelPrevIdx;
				keyRelPrevIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyRelPrevIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				if( keepObj->isOptionalPrevIdNull() ) {
					keyRelPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyRelPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchRelPrevIdx = indexByRelPrevIdx->find( keyRelPrevIdx );
				if( searchRelPrevIdx != indexByRelPrevIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelPrevIdx = searchRelPrevIdx->second;
					if( mapRelPrevIdx != NULL ) {
						auto removalProbe = mapRelPrevIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapRelPrevIdx->end() ) {
							mapRelPrevIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByRelNextIdx != NULL ) {
				cfbam::CFBamRelationColByRelNextIdxKey keyRelNextIdx;
				keyRelNextIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyRelNextIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				if( keepObj->isOptionalNextIdNull() ) {
					keyRelNextIdx.setOptionalNextIdNull();
				}
				else {
					keyRelNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchRelNextIdx = indexByRelNextIdx->find( keyRelNextIdx );
				if( searchRelNextIdx != indexByRelNextIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelNextIdx = searchRelNextIdx->second;
					if( mapRelNextIdx != NULL ) {
						auto removalProbe = mapRelNextIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapRelNextIdx->end() ) {
							mapRelNextIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfbam::CFBamRelationColBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamRelationColObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamRelationColByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamRelationColByUNameIdxKey, cfbam::ICFBamRelationColObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByRelColTenantIdx != NULL ) {
				static const std::string S_ARelColTenantIdxObj( "aRelColTenantIdxObj" );
				cfbam::ICFBamRelationColObj* aRelColTenantIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aRelColTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARelColTenantIdxObj );
				}
				cfbam::CFBamRelationColByRelColTenantIdxKey keyRelColTenantIdx;
				keyRelColTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByRelColTenantIdx = indexByRelColTenantIdx->find( keyRelColTenantIdx );
				if( searchIndexByRelColTenantIdx != indexByRelColTenantIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelColTenantIdx = searchIndexByRelColTenantIdx->second;
					if( mapRelColTenantIdx != NULL ) {
						mapRelColTenantIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aRelColTenantIdxObj ) );
					}
				}
			}

			if( indexByRelationIdx != NULL ) {
				static const std::string S_ARelationIdxObj( "aRelationIdxObj" );
				cfbam::ICFBamRelationColObj* aRelationIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aRelationIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARelationIdxObj );
				}
				cfbam::CFBamRelationColByRelationIdxKey keyRelationIdx;
				keyRelationIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyRelationIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				auto searchIndexByRelationIdx = indexByRelationIdx->find( keyRelationIdx );
				if( searchIndexByRelationIdx != indexByRelationIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelationIdx = searchIndexByRelationIdx->second;
					if( mapRelationIdx != NULL ) {
						mapRelationIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aRelationIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamRelationColObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamRelationColByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByFromColIdx != NULL ) {
				static const std::string S_AFromColIdxObj( "aFromColIdxObj" );
				cfbam::ICFBamRelationColObj* aFromColIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aFromColIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFromColIdxObj );
				}
				cfbam::CFBamRelationColByFromColIdxKey keyFromColIdx;
				keyFromColIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyFromColIdx.setRequiredFromColId( keepObj->getRequiredFromColId() );
				auto searchIndexByFromColIdx = indexByFromColIdx->find( keyFromColIdx );
				if( searchIndexByFromColIdx != indexByFromColIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapFromColIdx = searchIndexByFromColIdx->second;
					if( mapFromColIdx != NULL ) {
						mapFromColIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aFromColIdxObj ) );
					}
				}
			}

			if( indexByToColIdx != NULL ) {
				static const std::string S_AToColIdxObj( "aToColIdxObj" );
				cfbam::ICFBamRelationColObj* aToColIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aToColIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AToColIdxObj );
				}
				cfbam::CFBamRelationColByToColIdxKey keyToColIdx;
				keyToColIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyToColIdx.setRequiredToColId( keepObj->getRequiredToColId() );
				auto searchIndexByToColIdx = indexByToColIdx->find( keyToColIdx );
				if( searchIndexByToColIdx != indexByToColIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapToColIdx = searchIndexByToColIdx->second;
					if( mapToColIdx != NULL ) {
						mapToColIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aToColIdxObj ) );
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				static const std::string S_APrevIdxObj( "aPrevIdxObj" );
				cfbam::ICFBamRelationColObj* aPrevIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevIdxObj );
				}
				cfbam::CFBamRelationColByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapPrevIdx = searchIndexByPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						mapPrevIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aPrevIdxObj ) );
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				static const std::string S_ANextIdxObj( "aNextIdxObj" );
				cfbam::ICFBamRelationColObj* aNextIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextIdxObj );
				}
				cfbam::CFBamRelationColByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapNextIdx = searchIndexByNextIdx->second;
					if( mapNextIdx != NULL ) {
						mapNextIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aNextIdxObj ) );
					}
				}
			}

			if( indexByRelPrevIdx != NULL ) {
				static const std::string S_ARelPrevIdxObj( "aRelPrevIdxObj" );
				cfbam::ICFBamRelationColObj* aRelPrevIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aRelPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARelPrevIdxObj );
				}
				cfbam::CFBamRelationColByRelPrevIdxKey keyRelPrevIdx;
				keyRelPrevIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyRelPrevIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				if( keepObj->isOptionalPrevIdNull() ) {
					keyRelPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyRelPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIndexByRelPrevIdx = indexByRelPrevIdx->find( keyRelPrevIdx );
				if( searchIndexByRelPrevIdx != indexByRelPrevIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelPrevIdx = searchIndexByRelPrevIdx->second;
					if( mapRelPrevIdx != NULL ) {
						mapRelPrevIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aRelPrevIdxObj ) );
					}
				}
			}

			if( indexByRelNextIdx != NULL ) {
				static const std::string S_ARelNextIdxObj( "aRelNextIdxObj" );
				cfbam::ICFBamRelationColObj* aRelNextIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aRelNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARelNextIdxObj );
				}
				cfbam::CFBamRelationColByRelNextIdxKey keyRelNextIdx;
				keyRelNextIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyRelNextIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				if( keepObj->isOptionalNextIdNull() ) {
					keyRelNextIdx.setOptionalNextIdNull();
				}
				else {
					keyRelNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIndexByRelNextIdx = indexByRelNextIdx->find( keyRelNextIdx );
				if( searchIndexByRelNextIdx != indexByRelNextIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelNextIdx = searchIndexByRelNextIdx->second;
					if( mapRelNextIdx != NULL ) {
						mapRelNextIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aRelNextIdxObj ) );
					}
				}
			}

			if( allRelationCol != NULL ) {
				allRelationCol->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamRelationColObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamRelationColByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamRelationColByUNameIdxKey, cfbam::ICFBamRelationColObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByRelColTenantIdx != NULL ) {
				static const std::string S_ARelColTenantIdxObj( "aRelColTenantIdxObj" );
				cfbam::ICFBamRelationColObj* aRelColTenantIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aRelColTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARelColTenantIdxObj );
				}
				cfbam::CFBamRelationColByRelColTenantIdxKey keyRelColTenantIdx;
				keyRelColTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByRelColTenantIdx = indexByRelColTenantIdx->find( keyRelColTenantIdx );
				if( searchIndexByRelColTenantIdx != indexByRelColTenantIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelColTenantIdx = searchIndexByRelColTenantIdx->second;
					if( mapRelColTenantIdx != NULL ) {
						mapRelColTenantIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aRelColTenantIdxObj ) );
					}
				}
			}

			if( indexByRelationIdx != NULL ) {
				static const std::string S_ARelationIdxObj( "aRelationIdxObj" );
				cfbam::ICFBamRelationColObj* aRelationIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aRelationIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARelationIdxObj );
				}
				cfbam::CFBamRelationColByRelationIdxKey keyRelationIdx;
				keyRelationIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyRelationIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				auto searchIndexByRelationIdx = indexByRelationIdx->find( keyRelationIdx );
				if( searchIndexByRelationIdx != indexByRelationIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelationIdx = searchIndexByRelationIdx->second;
					if( mapRelationIdx != NULL ) {
						mapRelationIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aRelationIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamRelationColObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamRelationColByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByFromColIdx != NULL ) {
				static const std::string S_AFromColIdxObj( "aFromColIdxObj" );
				cfbam::ICFBamRelationColObj* aFromColIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aFromColIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFromColIdxObj );
				}
				cfbam::CFBamRelationColByFromColIdxKey keyFromColIdx;
				keyFromColIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyFromColIdx.setRequiredFromColId( keepObj->getRequiredFromColId() );
				auto searchIndexByFromColIdx = indexByFromColIdx->find( keyFromColIdx );
				if( searchIndexByFromColIdx != indexByFromColIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapFromColIdx = searchIndexByFromColIdx->second;
					if( mapFromColIdx != NULL ) {
						mapFromColIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aFromColIdxObj ) );
					}
				}
			}

			if( indexByToColIdx != NULL ) {
				static const std::string S_AToColIdxObj( "aToColIdxObj" );
				cfbam::ICFBamRelationColObj* aToColIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aToColIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AToColIdxObj );
				}
				cfbam::CFBamRelationColByToColIdxKey keyToColIdx;
				keyToColIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyToColIdx.setRequiredToColId( keepObj->getRequiredToColId() );
				auto searchIndexByToColIdx = indexByToColIdx->find( keyToColIdx );
				if( searchIndexByToColIdx != indexByToColIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapToColIdx = searchIndexByToColIdx->second;
					if( mapToColIdx != NULL ) {
						mapToColIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aToColIdxObj ) );
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				static const std::string S_APrevIdxObj( "aPrevIdxObj" );
				cfbam::ICFBamRelationColObj* aPrevIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevIdxObj );
				}
				cfbam::CFBamRelationColByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapPrevIdx = searchIndexByPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						mapPrevIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aPrevIdxObj ) );
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				static const std::string S_ANextIdxObj( "aNextIdxObj" );
				cfbam::ICFBamRelationColObj* aNextIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextIdxObj );
				}
				cfbam::CFBamRelationColByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapNextIdx = searchIndexByNextIdx->second;
					if( mapNextIdx != NULL ) {
						mapNextIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aNextIdxObj ) );
					}
				}
			}

			if( indexByRelPrevIdx != NULL ) {
				static const std::string S_ARelPrevIdxObj( "aRelPrevIdxObj" );
				cfbam::ICFBamRelationColObj* aRelPrevIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aRelPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARelPrevIdxObj );
				}
				cfbam::CFBamRelationColByRelPrevIdxKey keyRelPrevIdx;
				keyRelPrevIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyRelPrevIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				if( keepObj->isOptionalPrevIdNull() ) {
					keyRelPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyRelPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIndexByRelPrevIdx = indexByRelPrevIdx->find( keyRelPrevIdx );
				if( searchIndexByRelPrevIdx != indexByRelPrevIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelPrevIdx = searchIndexByRelPrevIdx->second;
					if( mapRelPrevIdx != NULL ) {
						mapRelPrevIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aRelPrevIdxObj ) );
					}
				}
			}

			if( indexByRelNextIdx != NULL ) {
				static const std::string S_ARelNextIdxObj( "aRelNextIdxObj" );
				cfbam::ICFBamRelationColObj* aRelNextIdxObj =
					dynamic_cast<cfbam::ICFBamRelationColObj*>( keepObj );
				if( aRelNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARelNextIdxObj );
				}
				cfbam::CFBamRelationColByRelNextIdxKey keyRelNextIdx;
				keyRelNextIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyRelNextIdx.setRequiredRelationId( keepObj->getRequiredRelationId() );
				if( keepObj->isOptionalNextIdNull() ) {
					keyRelNextIdx.setOptionalNextIdNull();
				}
				else {
					keyRelNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIndexByRelNextIdx = indexByRelNextIdx->find( keyRelNextIdx );
				if( searchIndexByRelNextIdx != indexByRelNextIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelNextIdx = searchIndexByRelNextIdx->second;
					if( mapRelNextIdx != NULL ) {
						mapRelNextIdx->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), aRelNextIdxObj ) );
					}
				}
			}

			if( allRelationCol != NULL ) {
				allRelationCol->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamRelationColTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamRelationColObj*> list;
		cfbam::ICFBamRelationColObj* existingObj = readCachedRelationColByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamRelationColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->reallyDeepDisposeRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationColTableObj::deepDisposeByUNameIdx( const int64_t TenantId,
			const int64_t RelationId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfbam::ICFBamRelationColObj*> list;
		cfbam::ICFBamRelationColObj* existingObj = readCachedRelationColByUNameIdx( TenantId,
				RelationId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamRelationColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->reallyDeepDisposeRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationColTableObj::deepDisposeByRelColTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByRelColTenantIdx" );
		std::vector<cfbam::ICFBamRelationColObj*> list;
		std::vector<cfbam::ICFBamRelationColObj*> matchesFound = readCachedRelationColByRelColTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->reallyDeepDisposeRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationColTableObj::deepDisposeByRelationIdx( const int64_t TenantId,
			const int64_t RelationId ) {
		static const std::string S_ProcName( "deepDisposeByRelationIdx" );
		std::vector<cfbam::ICFBamRelationColObj*> list;
		std::vector<cfbam::ICFBamRelationColObj*> matchesFound = readCachedRelationColByRelationIdx( TenantId,
				RelationId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->reallyDeepDisposeRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationColTableObj::deepDisposeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) {
		static const std::string S_ProcName( "deepDisposeByDefSchemaIdx" );
		std::vector<cfbam::ICFBamRelationColObj*> list;
		std::vector<cfbam::ICFBamRelationColObj*> matchesFound = readCachedRelationColByDefSchemaIdx( DefSchemaTenantId,
				DefSchemaId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->reallyDeepDisposeRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationColTableObj::deepDisposeByFromColIdx( const int64_t TenantId,
			const int64_t FromColId ) {
		static const std::string S_ProcName( "deepDisposeByFromColIdx" );
		std::vector<cfbam::ICFBamRelationColObj*> list;
		std::vector<cfbam::ICFBamRelationColObj*> matchesFound = readCachedRelationColByFromColIdx( TenantId,
				FromColId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->reallyDeepDisposeRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationColTableObj::deepDisposeByToColIdx( const int64_t TenantId,
			const int64_t ToColId ) {
		static const std::string S_ProcName( "deepDisposeByToColIdx" );
		std::vector<cfbam::ICFBamRelationColObj*> list;
		std::vector<cfbam::ICFBamRelationColObj*> matchesFound = readCachedRelationColByToColIdx( TenantId,
				ToColId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->reallyDeepDisposeRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationColTableObj::deepDisposeByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId ) {
		static const std::string S_ProcName( "deepDisposeByPrevIdx" );
		std::vector<cfbam::ICFBamRelationColObj*> list;
		std::vector<cfbam::ICFBamRelationColObj*> matchesFound = readCachedRelationColByPrevIdx( PrevTenantId,
				PrevId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->reallyDeepDisposeRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationColTableObj::deepDisposeByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId ) {
		static const std::string S_ProcName( "deepDisposeByNextIdx" );
		std::vector<cfbam::ICFBamRelationColObj*> list;
		std::vector<cfbam::ICFBamRelationColObj*> matchesFound = readCachedRelationColByNextIdx( NextTenantId,
				NextId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->reallyDeepDisposeRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationColTableObj::deepDisposeByRelPrevIdx( const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* PrevId ) {
		static const std::string S_ProcName( "deepDisposeByRelPrevIdx" );
		std::vector<cfbam::ICFBamRelationColObj*> list;
		std::vector<cfbam::ICFBamRelationColObj*> matchesFound = readCachedRelationColByRelPrevIdx( TenantId,
				RelationId,
				PrevId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->reallyDeepDisposeRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationColTableObj::deepDisposeByRelNextIdx( const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* NextId ) {
		static const std::string S_ProcName( "deepDisposeByRelNextIdx" );
		std::vector<cfbam::ICFBamRelationColObj*> list;
		std::vector<cfbam::ICFBamRelationColObj*> matchesFound = readCachedRelationColByRelNextIdx( TenantId,
				RelationId,
				NextId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamRelationColObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->reallyDeepDisposeRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamRelationColTableObj::reallyDeepDisposeRelationCol( cfbam::ICFBamRelationColObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeRelationCol" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamRelationColObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamRelationColBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->reallyDetachFromIndexesRelationCol( dynamic_cast<cfbam::ICFBamRelationColObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::createRelationCol( cfbam::ICFBamRelationColEditObj* Obj ) {
		static const std::string S_ProcName( "createRelationCol" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamRelationColObj* obj = dynamic_cast<cfbam::ICFBamRelationColObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamRelationColBuff* buff = dynamic_cast<cfbam::CFBamRelationColBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->createRelationCol(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamRelationColBuff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
			if( obj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Obj );
			}
		cfbam::ICFBamRelationColObj* prev = obj->getOptionalLookupPrev();
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

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::readRelationCol( cfbam::CFBamRelationColPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readRelationCol" );
		cfbam::ICFBamRelationColObj* obj = NULL;
		cfbam::ICFBamRelationColObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamRelationColBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
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

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::lockRelationCol( cfbam::CFBamRelationColPKey* pkey ) {
		static const std::string S_ProcName( "lockRelationCol" );
		cfbam::ICFBamRelationColObj* locked = NULL;
		cfbam::CFBamRelationColBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamRelationColObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readAllRelationCol( bool forceRead ) {
		static const std::string S_ProcName( "readAllRelationCol" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamRelationColObj* realized = NULL;
		if( forceRead || ( allRelationCol == NULL ) ) {
			std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* map = new std::map<cfbam::CFBamRelationColPKey,cfbam::ICFBamRelationColObj*>();
			allRelationCol = map;
			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamRelationColBuff* buff = NULL;
			cfbam::ICFBamRelationColObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allRelationCol->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allRelationCol->size();
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		auto valIter = allRelationCol->begin();
		size_t idx = 0;
		while( valIter != allRelationCol->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::readRelationColByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readRelationColByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationColPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamRelationColObj* obj = readRelationCol( &pkey, forceRead );
		return( obj );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::readRelationColByUNameIdx( const int64_t TenantId,
			const int64_t RelationId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readRelationColByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamRelationColByUNameIdxKey,
				cfbam::ICFBamRelationColObj*>();
		}
		cfbam::CFBamRelationColByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		key.setRequiredName( Name );
		cfbam::ICFBamRelationColObj* obj = NULL;
		cfbam::ICFBamRelationColObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamRelationColBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByUNameIdx( schema->getAuthorization(),
				TenantId,
				RelationId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamRelationColByUNameIdxKey, cfbam::ICFBamRelationColObj*>::value_type( key, dynamic_cast<cfbam::ICFBamRelationColObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readRelationColByRelColTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationColByRelColTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationColByRelColTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* oldDict;
		if( indexByRelColTenantIdx == NULL ) {
			indexByRelColTenantIdx = new std::map< cfbam::CFBamRelationColByRelColTenantIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		}
		auto searchIndexByRelColTenantIdx = indexByRelColTenantIdx->find( key );
		if( searchIndexByRelColTenantIdx != indexByRelColTenantIdx->end() ) {
			oldDict = searchIndexByRelColTenantIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>();
			cfbam::ICFBamRelationColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByRelColTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamRelationColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationColObj* realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByRelColTenantIdx->erase( searchIndexByRelColTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByRelColTenantIdx->insert( std::map< cfbam::CFBamRelationColByRelColTenantIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readRelationColByRelationIdx( const int64_t TenantId,
			const int64_t RelationId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationColByRelationIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationColByRelationIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* oldDict;
		if( indexByRelationIdx == NULL ) {
			indexByRelationIdx = new std::map< cfbam::CFBamRelationColByRelationIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		}
		auto searchIndexByRelationIdx = indexByRelationIdx->find( key );
		if( searchIndexByRelationIdx != indexByRelationIdx->end() ) {
			oldDict = searchIndexByRelationIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>();
			cfbam::ICFBamRelationColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByRelationIdx( schema->getAuthorization(),
				TenantId,
				RelationId );
			cfbam::CFBamRelationColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationColObj* realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByRelationIdx->erase( searchIndexByRelationIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByRelationIdx->insert( std::map< cfbam::CFBamRelationColByRelationIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readRelationColByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationColByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationColByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* oldDict;
		if( indexByDefSchemaIdx == NULL ) {
			indexByDefSchemaIdx = new std::map< cfbam::CFBamRelationColByDefSchemaIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
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
			dict = new std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>();
			cfbam::ICFBamRelationColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
			cfbam::CFBamRelationColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationColObj* realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDefSchemaIdx->erase( searchIndexByDefSchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDefSchemaIdx->insert( std::map< cfbam::CFBamRelationColByDefSchemaIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readRelationColByFromColIdx( const int64_t TenantId,
			const int64_t FromColId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationColByFromColIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationColByFromColIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredFromColId( FromColId );
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* oldDict;
		if( indexByFromColIdx == NULL ) {
			indexByFromColIdx = new std::map< cfbam::CFBamRelationColByFromColIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		}
		auto searchIndexByFromColIdx = indexByFromColIdx->find( key );
		if( searchIndexByFromColIdx != indexByFromColIdx->end() ) {
			oldDict = searchIndexByFromColIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>();
			cfbam::ICFBamRelationColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByFromColIdx( schema->getAuthorization(),
				TenantId,
				FromColId );
			cfbam::CFBamRelationColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationColObj* realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByFromColIdx->erase( searchIndexByFromColIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByFromColIdx->insert( std::map< cfbam::CFBamRelationColByFromColIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readRelationColByToColIdx( const int64_t TenantId,
			const int64_t ToColId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationColByToColIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationColByToColIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredToColId( ToColId );
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* oldDict;
		if( indexByToColIdx == NULL ) {
			indexByToColIdx = new std::map< cfbam::CFBamRelationColByToColIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		}
		auto searchIndexByToColIdx = indexByToColIdx->find( key );
		if( searchIndexByToColIdx != indexByToColIdx->end() ) {
			oldDict = searchIndexByToColIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>();
			cfbam::ICFBamRelationColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByToColIdx( schema->getAuthorization(),
				TenantId,
				ToColId );
			cfbam::CFBamRelationColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationColObj* realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByToColIdx->erase( searchIndexByToColIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByToColIdx->insert( std::map< cfbam::CFBamRelationColByToColIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readRelationColByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationColByPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationColByPrevIdxKey key;
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
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* oldDict;
		if( indexByPrevIdx == NULL ) {
			indexByPrevIdx = new std::map< cfbam::CFBamRelationColByPrevIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
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
			dict = new std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>();
			cfbam::ICFBamRelationColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByPrevIdx( schema->getAuthorization(),
				PrevTenantId,
				PrevId );
			cfbam::CFBamRelationColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationColObj* realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByPrevIdx->erase( searchIndexByPrevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByPrevIdx->insert( std::map< cfbam::CFBamRelationColByPrevIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readRelationColByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationColByNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationColByNextIdxKey key;
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
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* oldDict;
		if( indexByNextIdx == NULL ) {
			indexByNextIdx = new std::map< cfbam::CFBamRelationColByNextIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
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
			dict = new std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>();
			cfbam::ICFBamRelationColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByNextIdx( schema->getAuthorization(),
				NextTenantId,
				NextId );
			cfbam::CFBamRelationColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationColObj* realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByNextIdx->erase( searchIndexByNextIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByNextIdx->insert( std::map< cfbam::CFBamRelationColByNextIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readRelationColByRelPrevIdx( const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* PrevId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationColByRelPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationColByRelPrevIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* oldDict;
		if( indexByRelPrevIdx == NULL ) {
			indexByRelPrevIdx = new std::map< cfbam::CFBamRelationColByRelPrevIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		}
		auto searchIndexByRelPrevIdx = indexByRelPrevIdx->find( key );
		if( searchIndexByRelPrevIdx != indexByRelPrevIdx->end() ) {
			oldDict = searchIndexByRelPrevIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>();
			cfbam::ICFBamRelationColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByRelPrevIdx( schema->getAuthorization(),
				TenantId,
				RelationId,
				PrevId );
			cfbam::CFBamRelationColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationColObj* realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByRelPrevIdx->erase( searchIndexByRelPrevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByRelPrevIdx->insert( std::map< cfbam::CFBamRelationColByRelPrevIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readRelationColByRelNextIdx( const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* NextId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRelationColByRelNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationColByRelNextIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* oldDict;
		if( indexByRelNextIdx == NULL ) {
			indexByRelNextIdx = new std::map< cfbam::CFBamRelationColByRelNextIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>*>();
		}
		auto searchIndexByRelNextIdx = indexByRelNextIdx->find( key );
		if( searchIndexByRelNextIdx != indexByRelNextIdx->end() ) {
			oldDict = searchIndexByRelNextIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>();
			cfbam::ICFBamRelationColObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamRelationColBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByRelNextIdx( schema->getAuthorization(),
				TenantId,
				RelationId,
				NextId );
			cfbam::CFBamRelationColBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamRelationColObj* realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByRelNextIdx->erase( searchIndexByRelNextIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByRelNextIdx->insert( std::map< cfbam::CFBamRelationColByRelNextIdxKey,
				std::map< cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::readRelationColByLookupUNameIdx( const int64_t TenantId,
			const int64_t RelationId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readRelationColByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamRelationColByUNameIdxKey,
				cfbam::ICFBamRelationColObj*>();
		}
		cfbam::CFBamRelationColByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		key.setRequiredName( Name );
		cfbam::ICFBamRelationColObj* obj = NULL;
		cfbam::ICFBamRelationColObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				obj = searchIndexByUNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamRelationColBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->readDerivedByLookupUNameIdx( schema->getAuthorization(),
				TenantId,
				RelationId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamRelationColObj*>( dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamRelationColByUNameIdxKey, cfbam::ICFBamRelationColObj*>::value_type( key, dynamic_cast<cfbam::ICFBamRelationColObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::readCachedRelationCol( cfbam::CFBamRelationColPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readRelationCol" );
		cfbam::ICFBamRelationColObj* obj = NULL;
		cfbam::ICFBamRelationColObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::readCachedRelationColByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedRelationColByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamRelationColPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamRelationColObj* obj = readCachedRelationCol( &pkey );
		return( obj );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::readCachedRelationColByUNameIdx( const int64_t TenantId,
			const int64_t RelationId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedRelationColByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamRelationColByUNameIdxKey,
				cfbam::ICFBamRelationColObj*>();
		}
		cfbam::CFBamRelationColByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		key.setRequiredName( Name );
		cfbam::ICFBamRelationColObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationColBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readCachedRelationColByRelColTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedRelationColByRelColTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		cfbam::CFBamRelationColByRelColTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		if( indexByRelColTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByRelColTenantIdx = indexByRelColTenantIdx->find( key );
		if( searchIndexByRelColTenantIdx != indexByRelColTenantIdx->end() ) {
			dict = searchIndexByRelColTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readCachedRelationColByRelationIdx( const int64_t TenantId,
			const int64_t RelationId )
	{
		static const std::string S_ProcName( "readCachedRelationColByRelationIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		cfbam::CFBamRelationColByRelationIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		if( indexByRelationIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByRelationIdx = indexByRelationIdx->find( key );
		if( searchIndexByRelationIdx != indexByRelationIdx->end() ) {
			dict = searchIndexByRelationIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readCachedRelationColByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readCachedRelationColByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		cfbam::CFBamRelationColByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		if( indexByDefSchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( key );
		if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
			dict = searchIndexByDefSchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readCachedRelationColByFromColIdx( const int64_t TenantId,
			const int64_t FromColId )
	{
		static const std::string S_ProcName( "readCachedRelationColByFromColIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		cfbam::CFBamRelationColByFromColIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredFromColId( FromColId );
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		if( indexByFromColIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByFromColIdx = indexByFromColIdx->find( key );
		if( searchIndexByFromColIdx != indexByFromColIdx->end() ) {
			dict = searchIndexByFromColIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readCachedRelationColByToColIdx( const int64_t TenantId,
			const int64_t ToColId )
	{
		static const std::string S_ProcName( "readCachedRelationColByToColIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		cfbam::CFBamRelationColByToColIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredToColId( ToColId );
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		if( indexByToColIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByToColIdx = indexByToColIdx->find( key );
		if( searchIndexByToColIdx != indexByToColIdx->end() ) {
			dict = searchIndexByToColIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readCachedRelationColByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readCachedRelationColByPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		cfbam::CFBamRelationColByPrevIdxKey key;
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
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		if( indexByPrevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByPrevIdx = indexByPrevIdx->find( key );
		if( searchIndexByPrevIdx != indexByPrevIdx->end() ) {
			dict = searchIndexByPrevIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readCachedRelationColByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readCachedRelationColByNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		cfbam::CFBamRelationColByNextIdxKey key;
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
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		if( indexByNextIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByNextIdx = indexByNextIdx->find( key );
		if( searchIndexByNextIdx != indexByNextIdx->end() ) {
			dict = searchIndexByNextIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readCachedRelationColByRelPrevIdx( const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readCachedRelationColByRelPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		cfbam::CFBamRelationColByRelPrevIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		if( indexByRelPrevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByRelPrevIdx = indexByRelPrevIdx->find( key );
		if( searchIndexByRelPrevIdx != indexByRelPrevIdx->end() ) {
			dict = searchIndexByRelPrevIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamRelationColObj*> CFBamRelationColTableObj::readCachedRelationColByRelNextIdx( const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readCachedRelationColByRelNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamRelationColObj*> arr;
		cfbam::CFBamRelationColByRelNextIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* dict;
		if( indexByRelNextIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByRelNextIdx = indexByRelNextIdx->find( key );
		if( searchIndexByRelNextIdx != indexByRelNextIdx->end() ) {
			dict = searchIndexByRelNextIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamRelationColObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamRelationColObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationColBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::readCachedRelationColByLookupUNameIdx( const int64_t TenantId,
			const int64_t RelationId,
			const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedRelationColByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamRelationColByUNameIdxKey,
				cfbam::ICFBamRelationColObj*>();
		}
		cfbam::CFBamRelationColByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		key.setRequiredName( Name );
		cfbam::ICFBamRelationColObj* obj = NULL;
		cfbam::ICFBamRelationColObj* realized = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamRelationColBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::updateRelationCol( cfbam::ICFBamRelationColEditObj* Obj ) {
		static const std::string S_ProcName( "updateRelationCol" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamRelationColObj* obj = dynamic_cast<cfbam::ICFBamRelationColObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamRelationColBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->updateRelationCol( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamRelationColBuff*>( Obj->getRelationColBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamRelationColObj*>( dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
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

	void CFBamRelationColTableObj::deleteRelationCol( cfbam::ICFBamRelationColEditObj* Obj ) {
		cfbam::ICFBamRelationColObj* obj = Obj;
		cfbam::ICFBamRelationColObj* prev = obj->getOptionalLookupPrev();
		cfbam::ICFBamRelationColObj* next = obj->getOptionalLookupNext();
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->deleteRelationCol( schema->getAuthorization(),
			obj->getRelationColBuff() );
		if( prev != NULL ) {
			prev->read( true );
		}
		if( next != NULL ) {
			next->read( true );
		}
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamRelationColTableObj::deleteRelationColByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamRelationColPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamRelationColObj* obj = readRelationCol( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamRelationColEditObj* editObj = dynamic_cast<cfbam::ICFBamRelationColEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamRelationColEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamRelationColTableObj::deleteRelationColByUNameIdx( const int64_t TenantId,
			const int64_t RelationId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamRelationColByUNameIdxKey,
				cfbam::ICFBamRelationColObj*>();
		}
		cfbam::CFBamRelationColByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredRelationId( RelationId );
		key.setRequiredName( Name );
		cfbam::ICFBamRelationColObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->deleteRelationColByUNameIdx( schema->getAuthorization(),
				TenantId,
				RelationId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->deleteRelationColByUNameIdx( schema->getAuthorization(),
				TenantId,
				RelationId,
				Name );
		}
		deepDisposeByUNameIdx( TenantId,
			RelationId,
			Name );
	}

	void CFBamRelationColTableObj::deleteRelationColByRelColTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->deleteRelationColByRelColTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByRelColTenantIdx( TenantId );
	}

	void CFBamRelationColTableObj::deleteRelationColByRelationIdx( const int64_t TenantId,
			const int64_t RelationId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->deleteRelationColByRelationIdx( schema->getAuthorization(),
				TenantId,
				RelationId );
		deepDisposeByRelationIdx( TenantId,
			RelationId );
	}

	void CFBamRelationColTableObj::deleteRelationColByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->deleteRelationColByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
		deepDisposeByDefSchemaIdx( DefSchemaTenantId,
			DefSchemaId );
	}

	void CFBamRelationColTableObj::deleteRelationColByFromColIdx( const int64_t TenantId,
			const int64_t FromColId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->deleteRelationColByFromColIdx( schema->getAuthorization(),
				TenantId,
				FromColId );
		deepDisposeByFromColIdx( TenantId,
			FromColId );
	}

	void CFBamRelationColTableObj::deleteRelationColByToColIdx( const int64_t TenantId,
			const int64_t ToColId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->deleteRelationColByToColIdx( schema->getAuthorization(),
				TenantId,
				ToColId );
		deepDisposeByToColIdx( TenantId,
			ToColId );
	}

	void CFBamRelationColTableObj::deleteRelationColByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->deleteRelationColByPrevIdx( schema->getAuthorization(),
				PrevTenantId,
				PrevId );
		deepDisposeByPrevIdx( PrevTenantId,
			PrevId );
	}

	void CFBamRelationColTableObj::deleteRelationColByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->deleteRelationColByNextIdx( schema->getAuthorization(),
				NextTenantId,
				NextId );
		deepDisposeByNextIdx( NextTenantId,
			NextId );
	}

	void CFBamRelationColTableObj::deleteRelationColByRelPrevIdx( const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* PrevId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->deleteRelationColByRelPrevIdx( schema->getAuthorization(),
				TenantId,
				RelationId,
				PrevId );
		deepDisposeByRelPrevIdx( TenantId,
			RelationId,
			PrevId );
	}

	void CFBamRelationColTableObj::deleteRelationColByRelNextIdx( const int64_t TenantId,
			const int64_t RelationId,
			const int64_t* NextId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->deleteRelationColByRelNextIdx( schema->getAuthorization(),
				TenantId,
				RelationId,
				NextId );
		deepDisposeByRelNextIdx( TenantId,
			RelationId,
			NextId );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::moveUpRelationCol( cfbam::ICFBamRelationColObj* Obj ) {
		static const std::string S_ProcName( "moveUpRelationCol" );
		static const std::string S_CannotMoveEdition( "You cannot move an object that is being edited" );
		cfbam::ICFBamRelationColObj* obj = NULL;
		if( NULL != Obj->getEdit() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_CannotMoveEdition );
		}
		cfbam::CFBamRelationColBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->moveBuffUp( schema->getAuthorization(),
			Obj->getRequiredTenantId(),
			Obj->getRequiredId(),
			Obj->getRelationColBuff()->getRequiredRevision() );
		if( buff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
			obj->setBuff( buff );
			obj = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
			cfbam::ICFBamRelationColObj* prev = obj->getOptionalLookupPrev( true );
			cfbam::ICFBamRelationColObj* next = obj->getOptionalLookupNext( true );
			if( next != NULL ) {
				cfbam::ICFBamRelationColObj* gnext = next->getOptionalLookupNext( true );
			}
		}
		return( obj );
	}

	cfbam::ICFBamRelationColObj* CFBamRelationColTableObj::moveDownRelationCol( cfbam::ICFBamRelationColObj* Obj ) {
		static const std::string S_ProcName( "moveDownRelationCol" );
		static const std::string S_CannotMoveEdition( "You cannot move an object that is being edited" );
		cfbam::ICFBamRelationColObj* obj = NULL;
		if( NULL != Obj->getEdit() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_CannotMoveEdition );
		}
		cfbam::CFBamRelationColBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableRelationCol()->moveBuffDown( schema->getAuthorization(),
			Obj->getRequiredTenantId(),
			Obj->getRequiredId(),
			Obj->getRelationColBuff()->getRequiredRevision() );
		if( buff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->newInstance();
			obj->setBuff( buff );
			obj = dynamic_cast<cfbam::ICFBamRelationColObj*>( obj->realize() );
			cfbam::ICFBamRelationColObj* prev = obj->getOptionalLookupPrev( true );
			if( prev != NULL ) {
				cfbam::ICFBamRelationColObj* gprev = prev->getOptionalLookupPrev( true );
			}
			cfbam::ICFBamRelationColObj* next = obj->getOptionalLookupNext( true );
		}
		return( obj );
	}

	void CFBamRelationColTableObj::reallyDetachFromIndexesRelationCol( cfbam::ICFBamRelationColObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesRelationCol" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamRelationColObj* obj = Obj;
		cfbam::CFBamRelationColPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamRelationColObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamRelationColByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyUNameIdx.setRequiredRelationId( obj->getRequiredRelationId() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByRelColTenantIdx != NULL ) {
				cfbam::CFBamRelationColByRelColTenantIdxKey keyRelColTenantIdx;
				keyRelColTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchRelColTenantIdx = indexByRelColTenantIdx->find( keyRelColTenantIdx );
				if( searchRelColTenantIdx != indexByRelColTenantIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelColTenantIdx = searchRelColTenantIdx->second;
					if( mapRelColTenantIdx != NULL ) {
						auto removalProbe = mapRelColTenantIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapRelColTenantIdx->end() ) {
							mapRelColTenantIdx->erase( removalProbe );
							if( mapRelColTenantIdx->empty() ) {
								delete mapRelColTenantIdx;
								mapRelColTenantIdx = NULL;
								indexByRelColTenantIdx->erase( searchRelColTenantIdx );
							}
						}
					}
				}
			}

			if( indexByRelationIdx != NULL ) {
				cfbam::CFBamRelationColByRelationIdxKey keyRelationIdx;
				keyRelationIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyRelationIdx.setRequiredRelationId( obj->getRequiredRelationId() );
				auto searchRelationIdx = indexByRelationIdx->find( keyRelationIdx );
				if( searchRelationIdx != indexByRelationIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelationIdx = searchRelationIdx->second;
					if( mapRelationIdx != NULL ) {
						auto removalProbe = mapRelationIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapRelationIdx->end() ) {
							mapRelationIdx->erase( removalProbe );
							if( mapRelationIdx->empty() ) {
								delete mapRelationIdx;
								mapRelationIdx = NULL;
								indexByRelationIdx->erase( searchRelationIdx );
							}
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamRelationColByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
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

			if( indexByFromColIdx != NULL ) {
				cfbam::CFBamRelationColByFromColIdxKey keyFromColIdx;
				keyFromColIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyFromColIdx.setRequiredFromColId( obj->getRequiredFromColId() );
				auto searchFromColIdx = indexByFromColIdx->find( keyFromColIdx );
				if( searchFromColIdx != indexByFromColIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapFromColIdx = searchFromColIdx->second;
					if( mapFromColIdx != NULL ) {
						auto removalProbe = mapFromColIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapFromColIdx->end() ) {
							mapFromColIdx->erase( removalProbe );
							if( mapFromColIdx->empty() ) {
								delete mapFromColIdx;
								mapFromColIdx = NULL;
								indexByFromColIdx->erase( searchFromColIdx );
							}
						}
					}
				}
			}

			if( indexByToColIdx != NULL ) {
				cfbam::CFBamRelationColByToColIdxKey keyToColIdx;
				keyToColIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyToColIdx.setRequiredToColId( obj->getRequiredToColId() );
				auto searchToColIdx = indexByToColIdx->find( keyToColIdx );
				if( searchToColIdx != indexByToColIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapToColIdx = searchToColIdx->second;
					if( mapToColIdx != NULL ) {
						auto removalProbe = mapToColIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapToColIdx->end() ) {
							mapToColIdx->erase( removalProbe );
							if( mapToColIdx->empty() ) {
								delete mapToColIdx;
								mapToColIdx = NULL;
								indexByToColIdx->erase( searchToColIdx );
							}
						}
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				cfbam::CFBamRelationColByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapPrevIdx = searchPrevIdx->second;
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
				cfbam::CFBamRelationColByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapNextIdx = searchNextIdx->second;
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

			if( indexByRelPrevIdx != NULL ) {
				cfbam::CFBamRelationColByRelPrevIdxKey keyRelPrevIdx;
				keyRelPrevIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyRelPrevIdx.setRequiredRelationId( obj->getRequiredRelationId() );
				if( obj->isOptionalPrevIdNull() ) {
					keyRelPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyRelPrevIdx.setOptionalPrevIdValue( obj->getOptionalPrevIdValue() );
				}
				auto searchRelPrevIdx = indexByRelPrevIdx->find( keyRelPrevIdx );
				if( searchRelPrevIdx != indexByRelPrevIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelPrevIdx = searchRelPrevIdx->second;
					if( mapRelPrevIdx != NULL ) {
						auto removalProbe = mapRelPrevIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapRelPrevIdx->end() ) {
							mapRelPrevIdx->erase( removalProbe );
							if( mapRelPrevIdx->empty() ) {
								delete mapRelPrevIdx;
								mapRelPrevIdx = NULL;
								indexByRelPrevIdx->erase( searchRelPrevIdx );
							}
						}
					}
				}
			}

			if( indexByRelNextIdx != NULL ) {
				cfbam::CFBamRelationColByRelNextIdxKey keyRelNextIdx;
				keyRelNextIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyRelNextIdx.setRequiredRelationId( obj->getRequiredRelationId() );
				if( obj->isOptionalNextIdNull() ) {
					keyRelNextIdx.setOptionalNextIdNull();
				}
				else {
					keyRelNextIdx.setOptionalNextIdValue( obj->getOptionalNextIdValue() );
				}
				auto searchRelNextIdx = indexByRelNextIdx->find( keyRelNextIdx );
				if( searchRelNextIdx != indexByRelNextIdx->end() ) {
					std::map<cfbam::CFBamRelationColPKey, cfbam::ICFBamRelationColObj*>* mapRelNextIdx = searchRelNextIdx->second;
					if( mapRelNextIdx != NULL ) {
						auto removalProbe = mapRelNextIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapRelNextIdx->end() ) {
							mapRelNextIdx->erase( removalProbe );
							if( mapRelNextIdx->empty() ) {
								delete mapRelNextIdx;
								mapRelNextIdx = NULL;
								indexByRelNextIdx->erase( searchRelNextIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
