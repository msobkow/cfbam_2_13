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

	const std::string CFBamSchemaRefTableObj::CLASS_NAME( "CFBamSchemaRefTableObj" );
	const std::string CFBamSchemaRefTableObj::TABLE_NAME( "SchemaRef" );
	const std::string CFBamSchemaRefTableObj::TABLE_DBNAME( "schema_ref" );

	CFBamSchemaRefTableObj::CFBamSchemaRefTableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>();
		allSchemaRef = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
		indexBySchemaIdx = new std::map< cfbam::CFBamSchemaRefBySchemaIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamSchemaRefByUNameIdxKey,
			cfbam::ICFBamSchemaRefObj*>();
		indexByRefSchemaIdx = new std::map< cfbam::CFBamSchemaRefByRefSchemaIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
		indexByPrevIdx = new std::map< cfbam::CFBamSchemaRefByPrevIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
		indexByNextIdx = new std::map< cfbam::CFBamSchemaRefByNextIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
	}

	CFBamSchemaRefTableObj::CFBamSchemaRefTableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>();
		allSchemaRef = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
		indexBySchemaIdx = new std::map< cfbam::CFBamSchemaRefBySchemaIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamSchemaRefByUNameIdxKey,
			cfbam::ICFBamSchemaRefObj*>();
		indexByRefSchemaIdx = new std::map< cfbam::CFBamSchemaRefByRefSchemaIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
		indexByPrevIdx = new std::map< cfbam::CFBamSchemaRefByPrevIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
		indexByNextIdx = new std::map< cfbam::CFBamSchemaRefByNextIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
	}

	CFBamSchemaRefTableObj::~CFBamSchemaRefTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexBySchemaIdx != NULL ) {
			delete indexBySchemaIdx;
			indexBySchemaIdx = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( indexByRefSchemaIdx != NULL ) {
			delete indexByRefSchemaIdx;
			indexByRefSchemaIdx = NULL;
		}
		if( indexByPrevIdx != NULL ) {
			delete indexByPrevIdx;
			indexByPrevIdx = NULL;
		}
		if( indexByNextIdx != NULL ) {
			delete indexByNextIdx;
			indexByNextIdx = NULL;
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

	cfbam::ICFBamSchemaObj* CFBamSchemaRefTableObj::getSchema() {
		return( schema );
	}

	void CFBamSchemaRefTableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamSchemaRefTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamSchemaRefTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamSchemaRefTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFBamSchemaRefTableObj::minimizeMemory() {
		if( allSchemaRef != NULL ) {
			allSchemaRef->clear();
			delete allSchemaRef;
			allSchemaRef = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* curByTenantIdx = NULL;
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
		if( indexBySchemaIdx != NULL ) {
			std::map< cfbam::CFBamSchemaRefBySchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* >::iterator iterBySchemaIdx = indexBySchemaIdx->begin();
			std::map< cfbam::CFBamSchemaRefBySchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* >::iterator endBySchemaIdx = indexBySchemaIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* curBySchemaIdx = NULL;
			while( iterBySchemaIdx != endBySchemaIdx ) {
				curBySchemaIdx = iterBySchemaIdx->second;
				if( curBySchemaIdx != NULL ) {
					curBySchemaIdx->clear();
					delete curBySchemaIdx;
					curBySchemaIdx = NULL;
					iterBySchemaIdx->second = NULL;
				}
				iterBySchemaIdx ++;
			}
			indexBySchemaIdx->clear();
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( indexByRefSchemaIdx != NULL ) {
			std::map< cfbam::CFBamSchemaRefByRefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* >::iterator iterByRefSchemaIdx = indexByRefSchemaIdx->begin();
			std::map< cfbam::CFBamSchemaRefByRefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* >::iterator endByRefSchemaIdx = indexByRefSchemaIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* curByRefSchemaIdx = NULL;
			while( iterByRefSchemaIdx != endByRefSchemaIdx ) {
				curByRefSchemaIdx = iterByRefSchemaIdx->second;
				if( curByRefSchemaIdx != NULL ) {
					curByRefSchemaIdx->clear();
					delete curByRefSchemaIdx;
					curByRefSchemaIdx = NULL;
					iterByRefSchemaIdx->second = NULL;
				}
				iterByRefSchemaIdx ++;
			}
			indexByRefSchemaIdx->clear();
		}
		if( indexByPrevIdx != NULL ) {
			std::map< cfbam::CFBamSchemaRefByPrevIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* >::iterator iterByPrevIdx = indexByPrevIdx->begin();
			std::map< cfbam::CFBamSchemaRefByPrevIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* >::iterator endByPrevIdx = indexByPrevIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* curByPrevIdx = NULL;
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
			std::map< cfbam::CFBamSchemaRefByNextIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* >::iterator iterByNextIdx = indexByNextIdx->begin();
			std::map< cfbam::CFBamSchemaRefByNextIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* >::iterator endByNextIdx = indexByNextIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* curByNextIdx = NULL;
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
		if( members != NULL ) {
			members->clear();
		}
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::newInstance() {
		cfbam::ICFBamSchemaRefObj* inst = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( new CFBamSchemaRefObj( schema ) );
		return( inst );
	}

	cfbam::ICFBamSchemaRefEditObj* CFBamSchemaRefTableObj::newEditInstance( cfbam::ICFBamSchemaRefObj* orig ) {
		cfbam::ICFBamSchemaRefEditObj* edit = dynamic_cast<cfbam::ICFBamSchemaRefEditObj*>( new CFBamSchemaRefEditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::realizeSchemaRef( cfbam::ICFBamSchemaRefObj* Obj ) {
		static const std::string S_ProcName( "realizeSchemaRef" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamSchemaRefObj* obj = Obj;
		cfbam::ICFBamSchemaRefObj* existingObj = NULL;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		cfbam::ICFBamSchemaRefObj* keepObj = NULL;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexBySchemaIdx != NULL ) {
				cfbam::CFBamSchemaRefBySchemaIdxKey keySchemaIdx;
				keySchemaIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySchemaIdx.setRequiredSchemaId( keepObj->getRequiredSchemaId() );
				auto searchSchemaIdx = indexBySchemaIdx->find( keySchemaIdx );
				if( searchSchemaIdx != indexBySchemaIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapSchemaIdx = searchSchemaIdx->second;
					if( mapSchemaIdx != NULL ) {
						auto removalProbe = mapSchemaIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapSchemaIdx->end() ) {
							mapSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamSchemaRefByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredSchemaId( keepObj->getRequiredSchemaId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByRefSchemaIdx != NULL ) {
				cfbam::CFBamSchemaRefByRefSchemaIdxKey keyRefSchemaIdx;
				if( keepObj->isOptionalRefSchemaTenantIdNull() ) {
					keyRefSchemaIdx.setOptionalRefSchemaTenantIdNull();
				}
				else {
					keyRefSchemaIdx.setOptionalRefSchemaTenantIdValue( keepObj->getOptionalRefSchemaTenantIdValue() );
				}
				if( keepObj->isOptionalRefSchemaIdNull() ) {
					keyRefSchemaIdx.setOptionalRefSchemaIdNull();
				}
				else {
					keyRefSchemaIdx.setOptionalRefSchemaIdValue( keepObj->getOptionalRefSchemaIdValue() );
				}
				auto searchRefSchemaIdx = indexByRefSchemaIdx->find( keyRefSchemaIdx );
				if( searchRefSchemaIdx != indexByRefSchemaIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapRefSchemaIdx = searchRefSchemaIdx->second;
					if( mapRefSchemaIdx != NULL ) {
						auto removalProbe = mapRefSchemaIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapRefSchemaIdx->end() ) {
							mapRefSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				cfbam::CFBamSchemaRefByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapPrevIdx = searchPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						auto removalProbe = mapPrevIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapPrevIdx->end() ) {
							mapPrevIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				cfbam::CFBamSchemaRefByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapNextIdx = searchNextIdx->second;
					if( mapNextIdx != NULL ) {
						auto removalProbe = mapNextIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapNextIdx->end() ) {
							mapNextIdx->erase( removalProbe );
						}
					}
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->realizeScope( Obj ) );
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
				cfbam::ICFBamSchemaRefObj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaRefObj*>( keepObj );
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexBySchemaIdx != NULL ) {
				static const std::string S_ASchemaIdxObj( "aSchemaIdxObj" );
				cfbam::ICFBamSchemaRefObj* aSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaRefObj*>( keepObj );
				if( aSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASchemaIdxObj );
				}
				cfbam::CFBamSchemaRefBySchemaIdxKey keySchemaIdx;
				keySchemaIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySchemaIdx.setRequiredSchemaId( keepObj->getRequiredSchemaId() );
				auto searchIndexBySchemaIdx = indexBySchemaIdx->find( keySchemaIdx );
				if( searchIndexBySchemaIdx != indexBySchemaIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapSchemaIdx = searchIndexBySchemaIdx->second;
					if( mapSchemaIdx != NULL ) {
						mapSchemaIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), aSchemaIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamSchemaRefObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaRefObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamSchemaRefByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredSchemaId( keepObj->getRequiredSchemaId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamSchemaRefByUNameIdxKey, cfbam::ICFBamSchemaRefObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByRefSchemaIdx != NULL ) {
				static const std::string S_ARefSchemaIdxObj( "aRefSchemaIdxObj" );
				cfbam::ICFBamSchemaRefObj* aRefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaRefObj*>( keepObj );
				if( aRefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARefSchemaIdxObj );
				}
				cfbam::CFBamSchemaRefByRefSchemaIdxKey keyRefSchemaIdx;
				if( keepObj->isOptionalRefSchemaTenantIdNull() ) {
					keyRefSchemaIdx.setOptionalRefSchemaTenantIdNull();
				}
				else {
					keyRefSchemaIdx.setOptionalRefSchemaTenantIdValue( keepObj->getOptionalRefSchemaTenantIdValue() );
				}
				if( keepObj->isOptionalRefSchemaIdNull() ) {
					keyRefSchemaIdx.setOptionalRefSchemaIdNull();
				}
				else {
					keyRefSchemaIdx.setOptionalRefSchemaIdValue( keepObj->getOptionalRefSchemaIdValue() );
				}
				auto searchIndexByRefSchemaIdx = indexByRefSchemaIdx->find( keyRefSchemaIdx );
				if( searchIndexByRefSchemaIdx != indexByRefSchemaIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapRefSchemaIdx = searchIndexByRefSchemaIdx->second;
					if( mapRefSchemaIdx != NULL ) {
						mapRefSchemaIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), aRefSchemaIdxObj ) );
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				static const std::string S_APrevIdxObj( "aPrevIdxObj" );
				cfbam::ICFBamSchemaRefObj* aPrevIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaRefObj*>( keepObj );
				if( aPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevIdxObj );
				}
				cfbam::CFBamSchemaRefByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapPrevIdx = searchIndexByPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						mapPrevIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), aPrevIdxObj ) );
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				static const std::string S_ANextIdxObj( "aNextIdxObj" );
				cfbam::ICFBamSchemaRefObj* aNextIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaRefObj*>( keepObj );
				if( aNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextIdxObj );
				}
				cfbam::CFBamSchemaRefByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapNextIdx = searchIndexByNextIdx->second;
					if( mapNextIdx != NULL ) {
						mapNextIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), aNextIdxObj ) );
					}
				}
			}

			if( allSchemaRef != NULL ) {
				allSchemaRef->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->realizeScope( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfbam::ICFBamSchemaRefObj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaRefObj*>( keepObj );
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexBySchemaIdx != NULL ) {
				static const std::string S_ASchemaIdxObj( "aSchemaIdxObj" );
				cfbam::ICFBamSchemaRefObj* aSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaRefObj*>( keepObj );
				if( aSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASchemaIdxObj );
				}
				cfbam::CFBamSchemaRefBySchemaIdxKey keySchemaIdx;
				keySchemaIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySchemaIdx.setRequiredSchemaId( keepObj->getRequiredSchemaId() );
				auto searchIndexBySchemaIdx = indexBySchemaIdx->find( keySchemaIdx );
				if( searchIndexBySchemaIdx != indexBySchemaIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapSchemaIdx = searchIndexBySchemaIdx->second;
					if( mapSchemaIdx != NULL ) {
						mapSchemaIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), aSchemaIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamSchemaRefObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaRefObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamSchemaRefByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredSchemaId( keepObj->getRequiredSchemaId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamSchemaRefByUNameIdxKey, cfbam::ICFBamSchemaRefObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByRefSchemaIdx != NULL ) {
				static const std::string S_ARefSchemaIdxObj( "aRefSchemaIdxObj" );
				cfbam::ICFBamSchemaRefObj* aRefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaRefObj*>( keepObj );
				if( aRefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARefSchemaIdxObj );
				}
				cfbam::CFBamSchemaRefByRefSchemaIdxKey keyRefSchemaIdx;
				if( keepObj->isOptionalRefSchemaTenantIdNull() ) {
					keyRefSchemaIdx.setOptionalRefSchemaTenantIdNull();
				}
				else {
					keyRefSchemaIdx.setOptionalRefSchemaTenantIdValue( keepObj->getOptionalRefSchemaTenantIdValue() );
				}
				if( keepObj->isOptionalRefSchemaIdNull() ) {
					keyRefSchemaIdx.setOptionalRefSchemaIdNull();
				}
				else {
					keyRefSchemaIdx.setOptionalRefSchemaIdValue( keepObj->getOptionalRefSchemaIdValue() );
				}
				auto searchIndexByRefSchemaIdx = indexByRefSchemaIdx->find( keyRefSchemaIdx );
				if( searchIndexByRefSchemaIdx != indexByRefSchemaIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapRefSchemaIdx = searchIndexByRefSchemaIdx->second;
					if( mapRefSchemaIdx != NULL ) {
						mapRefSchemaIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), aRefSchemaIdxObj ) );
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				static const std::string S_APrevIdxObj( "aPrevIdxObj" );
				cfbam::ICFBamSchemaRefObj* aPrevIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaRefObj*>( keepObj );
				if( aPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevIdxObj );
				}
				cfbam::CFBamSchemaRefByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapPrevIdx = searchIndexByPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						mapPrevIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), aPrevIdxObj ) );
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				static const std::string S_ANextIdxObj( "aNextIdxObj" );
				cfbam::ICFBamSchemaRefObj* aNextIdxObj =
					dynamic_cast<cfbam::ICFBamSchemaRefObj*>( keepObj );
				if( aNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextIdxObj );
				}
				cfbam::CFBamSchemaRefByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapNextIdx = searchIndexByNextIdx->second;
					if( mapNextIdx != NULL ) {
						mapNextIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), aNextIdxObj ) );
					}
				}
			}

			if( allSchemaRef != NULL ) {
				allSchemaRef->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFBamSchemaRefTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamSchemaRefObj*> list;
		cfbam::ICFBamSchemaRefObj* existingObj = readCachedSchemaRefByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamSchemaRefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->reallyDeepDisposeSchemaRef( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaRefTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfbam::ICFBamSchemaRefObj*> list;
		std::vector<cfbam::ICFBamSchemaRefObj*> matchesFound = readCachedSchemaRefByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamSchemaRefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->reallyDeepDisposeSchemaRef( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaRefTableObj::reallyDeepDisposeSchemaRef( cfbam::ICFBamSchemaRefObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSchemaRef" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamSchemaRefObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->reallyDetachFromIndexesSchemaRef( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj ) );
		}

		dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->reallyDeepDisposeScope( dynamic_cast<cfbam::ICFBamScopeObj*>( obj ) );
	}

	void CFBamSchemaRefTableObj::deepDisposeBySchemaIdx( const int64_t TenantId,
			const int64_t SchemaId ) {
		static const std::string S_ProcName( "deepDisposeBySchemaIdx" );
		std::vector<cfbam::ICFBamSchemaRefObj*> list;
		std::vector<cfbam::ICFBamSchemaRefObj*> matchesFound = readCachedSchemaRefBySchemaIdx( TenantId,
				SchemaId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamSchemaRefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->reallyDeepDisposeSchemaRef( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaRefTableObj::deepDisposeByUNameIdx( const int64_t TenantId,
			const int64_t SchemaId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfbam::ICFBamSchemaRefObj*> list;
		cfbam::ICFBamSchemaRefObj* existingObj = readCachedSchemaRefByUNameIdx( TenantId,
				SchemaId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamSchemaRefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->reallyDeepDisposeSchemaRef( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaRefTableObj::deepDisposeByRefSchemaIdx( const int64_t* RefSchemaTenantId,
			const int64_t* RefSchemaId ) {
		static const std::string S_ProcName( "deepDisposeByRefSchemaIdx" );
		std::vector<cfbam::ICFBamSchemaRefObj*> list;
		std::vector<cfbam::ICFBamSchemaRefObj*> matchesFound = readCachedSchemaRefByRefSchemaIdx( RefSchemaTenantId,
				RefSchemaId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamSchemaRefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->reallyDeepDisposeSchemaRef( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaRefTableObj::deepDisposeByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId ) {
		static const std::string S_ProcName( "deepDisposeByPrevIdx" );
		std::vector<cfbam::ICFBamSchemaRefObj*> list;
		std::vector<cfbam::ICFBamSchemaRefObj*> matchesFound = readCachedSchemaRefByPrevIdx( PrevTenantId,
				PrevId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamSchemaRefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->reallyDeepDisposeSchemaRef( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSchemaRefTableObj::deepDisposeByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId ) {
		static const std::string S_ProcName( "deepDisposeByNextIdx" );
		std::vector<cfbam::ICFBamSchemaRefObj*> list;
		std::vector<cfbam::ICFBamSchemaRefObj*> matchesFound = readCachedSchemaRefByNextIdx( NextTenantId,
				NextId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamSchemaRefObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->reallyDeepDisposeSchemaRef( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::createSchemaRef( cfbam::ICFBamSchemaRefEditObj* Obj ) {
		static const std::string S_ProcName( "createSchemaRef" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamSchemaRefObj* obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamSchemaRefBuff* buff = dynamic_cast<cfbam::CFBamSchemaRefBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->createSchemaRef(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamSchemaRefBuff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj->realize() );
			if( obj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Obj );
			}
		cfbam::ICFBamSchemaRefObj* prev = obj->getOptionalLookupPrev();
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

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::readSchemaRef( cfbam::CFBamScopePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSchemaRef" );
		cfbam::ICFBamSchemaRefObj* obj = NULL;
		cfbam::ICFBamSchemaRefObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamSchemaRefBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj->realize() );
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

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::lockSchemaRef( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_ProcName( "lockSchemaRef" );
		cfbam::ICFBamSchemaRefObj* locked = NULL;
		cfbam::CFBamSchemaRefBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaRefTableObj::readAllSchemaRef( bool forceRead ) {
		static const std::string S_ProcName( "readAllSchemaRef" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamSchemaRefObj* realized = NULL;
		if( forceRead || ( allSchemaRef == NULL ) ) {
			std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* map = new std::map<cfbam::CFBamScopePKey,cfbam::ICFBamSchemaRefObj*>();
			allSchemaRef = map;
			std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamSchemaRefBuff* buff = NULL;
			cfbam::ICFBamSchemaRefObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSchemaRef->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSchemaRef->size();
		std::vector<cfbam::ICFBamSchemaRefObj*> arr;
		auto valIter = allSchemaRef->begin();
		size_t idx = 0;
		while( valIter != allSchemaRef->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::readSchemaRefByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaRefByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamSchemaRefObj* obj = readSchemaRef( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaRefTableObj::readSchemaRefByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaRefByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>();
			cfbam::ICFBamScopeObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamScopeBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamSchemaRefObj* realized = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamSchemaRefObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaRefTableObj::readSchemaRefBySchemaIdx( const int64_t TenantId,
			const int64_t SchemaId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaRefBySchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamSchemaRefBySchemaIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaId( SchemaId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* oldDict;
		if( indexBySchemaIdx == NULL ) {
			indexBySchemaIdx = new std::map< cfbam::CFBamSchemaRefBySchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
		}
		auto searchIndexBySchemaIdx = indexBySchemaIdx->find( key );
		if( searchIndexBySchemaIdx != indexBySchemaIdx->end() ) {
			oldDict = searchIndexBySchemaIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>();
			cfbam::ICFBamSchemaRefObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->readDerivedBySchemaIdx( schema->getAuthorization(),
				TenantId,
				SchemaId );
			cfbam::CFBamSchemaRefBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamSchemaRefObj* realized = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexBySchemaIdx->erase( searchIndexBySchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexBySchemaIdx->insert( std::map< cfbam::CFBamSchemaRefBySchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamSchemaRefObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::readSchemaRefByUNameIdx( const int64_t TenantId,
			const int64_t SchemaId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaRefByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamSchemaRefByUNameIdxKey,
				cfbam::ICFBamSchemaRefObj*>();
		}
		cfbam::CFBamSchemaRefByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaId( SchemaId );
		key.setRequiredName( Name );
		cfbam::ICFBamSchemaRefObj* obj = NULL;
		cfbam::ICFBamSchemaRefObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamSchemaRefBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->readDerivedByUNameIdx( schema->getAuthorization(),
				TenantId,
				SchemaId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamSchemaRefByUNameIdxKey, cfbam::ICFBamSchemaRefObj*>::value_type( key, dynamic_cast<cfbam::ICFBamSchemaRefObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaRefTableObj::readSchemaRefByRefSchemaIdx( const int64_t* RefSchemaTenantId,
			const int64_t* RefSchemaId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaRefByRefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamSchemaRefByRefSchemaIdxKey key;
		if( RefSchemaTenantId == NULL ) {
			key.setOptionalRefSchemaTenantIdNull();
		}
		else {
			key.setOptionalRefSchemaTenantIdValue( *RefSchemaTenantId );
		}
		if( RefSchemaId == NULL ) {
			key.setOptionalRefSchemaIdNull();
		}
		else {
			key.setOptionalRefSchemaIdValue( *RefSchemaId );
		}
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* oldDict;
		if( indexByRefSchemaIdx == NULL ) {
			indexByRefSchemaIdx = new std::map< cfbam::CFBamSchemaRefByRefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
		}
		auto searchIndexByRefSchemaIdx = indexByRefSchemaIdx->find( key );
		if( searchIndexByRefSchemaIdx != indexByRefSchemaIdx->end() ) {
			oldDict = searchIndexByRefSchemaIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>();
			cfbam::ICFBamSchemaRefObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->readDerivedByRefSchemaIdx( schema->getAuthorization(),
				RefSchemaTenantId,
				RefSchemaId );
			cfbam::CFBamSchemaRefBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamSchemaRefObj* realized = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByRefSchemaIdx->erase( searchIndexByRefSchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByRefSchemaIdx->insert( std::map< cfbam::CFBamSchemaRefByRefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamSchemaRefObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaRefTableObj::readSchemaRefByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaRefByPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamSchemaRefByPrevIdxKey key;
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
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* oldDict;
		if( indexByPrevIdx == NULL ) {
			indexByPrevIdx = new std::map< cfbam::CFBamSchemaRefByPrevIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>();
			cfbam::ICFBamSchemaRefObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->readDerivedByPrevIdx( schema->getAuthorization(),
				PrevTenantId,
				PrevId );
			cfbam::CFBamSchemaRefBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamSchemaRefObj* realized = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByPrevIdx->erase( searchIndexByPrevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByPrevIdx->insert( std::map< cfbam::CFBamSchemaRefByPrevIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamSchemaRefObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaRefTableObj::readSchemaRefByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSchemaRefByNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamSchemaRefByNextIdxKey key;
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
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* oldDict;
		if( indexByNextIdx == NULL ) {
			indexByNextIdx = new std::map< cfbam::CFBamSchemaRefByNextIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>();
			cfbam::ICFBamSchemaRefObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamSchemaRefBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->readDerivedByNextIdx( schema->getAuthorization(),
				NextTenantId,
				NextId );
			cfbam::CFBamSchemaRefBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamSchemaRefObj* realized = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByNextIdx->erase( searchIndexByNextIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByNextIdx->insert( std::map< cfbam::CFBamSchemaRefByNextIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamSchemaRefObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::readCachedSchemaRef( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSchemaRef" );
		cfbam::ICFBamSchemaRefObj* obj = NULL;
		cfbam::ICFBamSchemaRefObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::readCachedSchemaRefByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedSchemaRefByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamSchemaRefObj* obj = readCachedSchemaRef( &pkey );
		return( obj );
	}

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaRefTableObj::readCachedSchemaRefByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedSchemaRefByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamSchemaRefObj*> arr;
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamSchemaRefObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamSchemaRefObj* obj;
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

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaRefTableObj::readCachedSchemaRefBySchemaIdx( const int64_t TenantId,
			const int64_t SchemaId )
	{
		static const std::string S_ProcName( "readCachedSchemaRefBySchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamSchemaRefObj*> arr;
		cfbam::CFBamSchemaRefBySchemaIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaId( SchemaId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* dict;
		if( indexBySchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexBySchemaIdx = indexBySchemaIdx->find( key );
		if( searchIndexBySchemaIdx != indexBySchemaIdx->end() ) {
			dict = searchIndexBySchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamSchemaRefObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamSchemaRefObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamSchemaRefBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::readCachedSchemaRefByUNameIdx( const int64_t TenantId,
			const int64_t SchemaId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedSchemaRefByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamSchemaRefByUNameIdxKey,
				cfbam::ICFBamSchemaRefObj*>();
		}
		cfbam::CFBamSchemaRefByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaId( SchemaId );
		key.setRequiredName( Name );
		cfbam::ICFBamSchemaRefObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamSchemaRefBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaRefTableObj::readCachedSchemaRefByRefSchemaIdx( const int64_t* RefSchemaTenantId,
			const int64_t* RefSchemaId )
	{
		static const std::string S_ProcName( "readCachedSchemaRefByRefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamSchemaRefObj*> arr;
		cfbam::CFBamSchemaRefByRefSchemaIdxKey key;
		if( RefSchemaTenantId == NULL ) {
			key.setOptionalRefSchemaTenantIdNull();
		}
		else {
			key.setOptionalRefSchemaTenantIdValue( *RefSchemaTenantId );
		}
		if( RefSchemaId == NULL ) {
			key.setOptionalRefSchemaIdNull();
		}
		else {
			key.setOptionalRefSchemaIdValue( *RefSchemaId );
		}
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* dict;
		if( indexByRefSchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByRefSchemaIdx = indexByRefSchemaIdx->find( key );
		if( searchIndexByRefSchemaIdx != indexByRefSchemaIdx->end() ) {
			dict = searchIndexByRefSchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamSchemaRefObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamSchemaRefObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamSchemaRefBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaRefTableObj::readCachedSchemaRefByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readCachedSchemaRefByPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamSchemaRefObj*> arr;
		cfbam::CFBamSchemaRefByPrevIdxKey key;
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
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* dict;
		if( indexByPrevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByPrevIdx = indexByPrevIdx->find( key );
		if( searchIndexByPrevIdx != indexByPrevIdx->end() ) {
			dict = searchIndexByPrevIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamSchemaRefObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamSchemaRefObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamSchemaRefBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamSchemaRefObj*> CFBamSchemaRefTableObj::readCachedSchemaRefByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readCachedSchemaRefByNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamSchemaRefObj*> arr;
		cfbam::CFBamSchemaRefByNextIdxKey key;
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
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* dict;
		if( indexByNextIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByNextIdx = indexByNextIdx->find( key );
		if( searchIndexByNextIdx != indexByNextIdx->end() ) {
			dict = searchIndexByNextIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamSchemaRefObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamSchemaRefObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamSchemaRefBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::updateSchemaRef( cfbam::ICFBamSchemaRefEditObj* Obj ) {
		static const std::string S_ProcName( "updateSchemaRef" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamSchemaRefObj* obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamSchemaRefBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->updateSchemaRef( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamSchemaRefBuff*>( Obj->getSchemaRefBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj->realize() );
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

	void CFBamSchemaRefTableObj::deleteSchemaRef( cfbam::ICFBamSchemaRefEditObj* Obj ) {
		cfbam::ICFBamSchemaRefObj* obj = Obj;
		cfbam::ICFBamSchemaRefObj* prev = obj->getOptionalLookupPrev();
		cfbam::ICFBamSchemaRefObj* next = obj->getOptionalLookupNext();
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->deleteSchemaRef( schema->getAuthorization(),
			obj->getSchemaRefBuff() );
		if( prev != NULL ) {
			prev->read( true );
		}
		if( next != NULL ) {
			next->read( true );
		}
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamSchemaRefTableObj::deleteSchemaRefByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamSchemaRefObj* obj = readSchemaRef( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamSchemaRefEditObj* editObj = dynamic_cast<cfbam::ICFBamSchemaRefEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamSchemaRefEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamSchemaRefTableObj::deleteSchemaRefByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->deleteSchemaRefByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFBamSchemaRefTableObj::deleteSchemaRefBySchemaIdx( const int64_t TenantId,
			const int64_t SchemaId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->deleteSchemaRefBySchemaIdx( schema->getAuthorization(),
				TenantId,
				SchemaId );
		deepDisposeBySchemaIdx( TenantId,
			SchemaId );
	}

	void CFBamSchemaRefTableObj::deleteSchemaRefByUNameIdx( const int64_t TenantId,
			const int64_t SchemaId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamSchemaRefByUNameIdxKey,
				cfbam::ICFBamSchemaRefObj*>();
		}
		cfbam::CFBamSchemaRefByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaId( SchemaId );
		key.setRequiredName( Name );
		cfbam::ICFBamSchemaRefObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->deleteSchemaRefByUNameIdx( schema->getAuthorization(),
				TenantId,
				SchemaId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->deleteSchemaRefByUNameIdx( schema->getAuthorization(),
				TenantId,
				SchemaId,
				Name );
		}
		deepDisposeByUNameIdx( TenantId,
			SchemaId,
			Name );
	}

	void CFBamSchemaRefTableObj::deleteSchemaRefByRefSchemaIdx( const int64_t* RefSchemaTenantId,
			const int64_t* RefSchemaId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->deleteSchemaRefByRefSchemaIdx( schema->getAuthorization(),
				RefSchemaTenantId,
				RefSchemaId );
		deepDisposeByRefSchemaIdx( RefSchemaTenantId,
			RefSchemaId );
	}

	void CFBamSchemaRefTableObj::deleteSchemaRefByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->deleteSchemaRefByPrevIdx( schema->getAuthorization(),
				PrevTenantId,
				PrevId );
		deepDisposeByPrevIdx( PrevTenantId,
			PrevId );
	}

	void CFBamSchemaRefTableObj::deleteSchemaRefByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->deleteSchemaRefByNextIdx( schema->getAuthorization(),
				NextTenantId,
				NextId );
		deepDisposeByNextIdx( NextTenantId,
			NextId );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::moveUpSchemaRef( cfbam::ICFBamSchemaRefObj* Obj ) {
		static const std::string S_ProcName( "moveUpSchemaRef" );
		static const std::string S_CannotMoveEdition( "You cannot move an object that is being edited" );
		cfbam::ICFBamSchemaRefObj* obj = NULL;
		if( NULL != Obj->getEdit() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_CannotMoveEdition );
		}
		cfbam::CFBamSchemaRefBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->moveBuffUp( schema->getAuthorization(),
			Obj->getRequiredTenantId(),
			Obj->getRequiredId(),
			Obj->getSchemaRefBuff()->getRequiredRevision() );
		if( buff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->newInstance();
			obj->setBuff( buff );
			obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj->realize() );
			cfbam::ICFBamSchemaRefObj* prev = obj->getOptionalLookupPrev( true );
			cfbam::ICFBamSchemaRefObj* next = obj->getOptionalLookupNext( true );
			if( next != NULL ) {
				cfbam::ICFBamSchemaRefObj* gnext = next->getOptionalLookupNext( true );
			}
		}
		return( obj );
	}

	cfbam::ICFBamSchemaRefObj* CFBamSchemaRefTableObj::moveDownSchemaRef( cfbam::ICFBamSchemaRefObj* Obj ) {
		static const std::string S_ProcName( "moveDownSchemaRef" );
		static const std::string S_CannotMoveEdition( "You cannot move an object that is being edited" );
		cfbam::ICFBamSchemaRefObj* obj = NULL;
		if( NULL != Obj->getEdit() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_CannotMoveEdition );
		}
		cfbam::CFBamSchemaRefBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSchemaRef()->moveBuffDown( schema->getAuthorization(),
			Obj->getRequiredTenantId(),
			Obj->getRequiredId(),
			Obj->getSchemaRefBuff()->getRequiredRevision() );
		if( buff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->newInstance();
			obj->setBuff( buff );
			obj = dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj->realize() );
			cfbam::ICFBamSchemaRefObj* prev = obj->getOptionalLookupPrev( true );
			if( prev != NULL ) {
				cfbam::ICFBamSchemaRefObj* gprev = prev->getOptionalLookupPrev( true );
			}
			cfbam::ICFBamSchemaRefObj* next = obj->getOptionalLookupNext( true );
		}
		return( obj );
	}

	void CFBamSchemaRefTableObj::reallyDetachFromIndexesSchemaRef( cfbam::ICFBamSchemaRefObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSchemaRef" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamSchemaRefObj* obj = Obj;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamSchemaRefObj* existingObj = searchMembers->second;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexBySchemaIdx != NULL ) {
				cfbam::CFBamSchemaRefBySchemaIdxKey keySchemaIdx;
				keySchemaIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keySchemaIdx.setRequiredSchemaId( obj->getRequiredSchemaId() );
				auto searchSchemaIdx = indexBySchemaIdx->find( keySchemaIdx );
				if( searchSchemaIdx != indexBySchemaIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapSchemaIdx = searchSchemaIdx->second;
					if( mapSchemaIdx != NULL ) {
						auto removalProbe = mapSchemaIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapSchemaIdx->end() ) {
							mapSchemaIdx->erase( removalProbe );
							if( mapSchemaIdx->empty() ) {
								delete mapSchemaIdx;
								mapSchemaIdx = NULL;
								indexBySchemaIdx->erase( searchSchemaIdx );
							}
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamSchemaRefByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyUNameIdx.setRequiredSchemaId( obj->getRequiredSchemaId() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByRefSchemaIdx != NULL ) {
				cfbam::CFBamSchemaRefByRefSchemaIdxKey keyRefSchemaIdx;
				if( obj->isOptionalRefSchemaTenantIdNull() ) {
					keyRefSchemaIdx.setOptionalRefSchemaTenantIdNull();
				}
				else {
					keyRefSchemaIdx.setOptionalRefSchemaTenantIdValue( obj->getOptionalRefSchemaTenantIdValue() );
				}
				if( obj->isOptionalRefSchemaIdNull() ) {
					keyRefSchemaIdx.setOptionalRefSchemaIdNull();
				}
				else {
					keyRefSchemaIdx.setOptionalRefSchemaIdValue( obj->getOptionalRefSchemaIdValue() );
				}
				auto searchRefSchemaIdx = indexByRefSchemaIdx->find( keyRefSchemaIdx );
				if( searchRefSchemaIdx != indexByRefSchemaIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapRefSchemaIdx = searchRefSchemaIdx->second;
					if( mapRefSchemaIdx != NULL ) {
						auto removalProbe = mapRefSchemaIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapRefSchemaIdx->end() ) {
							mapRefSchemaIdx->erase( removalProbe );
							if( mapRefSchemaIdx->empty() ) {
								delete mapRefSchemaIdx;
								mapRefSchemaIdx = NULL;
								indexByRefSchemaIdx->erase( searchRefSchemaIdx );
							}
						}
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				cfbam::CFBamSchemaRefByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapPrevIdx = searchPrevIdx->second;
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
				cfbam::CFBamSchemaRefByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamSchemaRefObj*>* mapNextIdx = searchNextIdx->second;
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

			members->erase( searchMembers );
		}
			dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->reallyDetachFromIndexesScope( Obj );
	}


}
