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

	const std::string CFBamScopeTableObj::CLASS_NAME( "CFBamScopeTableObj" );
	const std::string CFBamScopeTableObj::TABLE_NAME( "Scope" );
	const std::string CFBamScopeTableObj::TABLE_DBNAME( "scopedef" );

	CFBamScopeTableObj::CFBamScopeTableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>();
		allScope = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>*>();
	}

	CFBamScopeTableObj::CFBamScopeTableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>();
		allScope = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>*>();
	}

	CFBamScopeTableObj::~CFBamScopeTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( members != NULL ) {
			cfbam::ICFBamScopeObj* curMember;
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

	cfbam::ICFBamSchemaObj* CFBamScopeTableObj::getSchema() {
		return( schema );
	}

	void CFBamScopeTableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamScopeTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamScopeTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamScopeTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFBamScopeTableObj::minimizeMemory() {
		if( allScope != NULL ) {
			allScope->clear();
			delete allScope;
			allScope = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>* curByTenantIdx = NULL;
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
		if( members != NULL ) {
			cfbam::ICFBamScopeObj* cur = NULL;
			cfbam::ICFBamScopeEditObj* edit = NULL;
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

	cfbam::ICFBamScopeObj* CFBamScopeTableObj::newInstance() {
		cfbam::ICFBamScopeObj* inst = dynamic_cast<cfbam::ICFBamScopeObj*>( new CFBamScopeObj( schema ) );
		return( inst );
	}

	cfbam::ICFBamScopeEditObj* CFBamScopeTableObj::newEditInstance( cfbam::ICFBamScopeObj* orig ) {
		cfbam::ICFBamScopeEditObj* edit = dynamic_cast<cfbam::ICFBamScopeEditObj*>( new CFBamScopeEditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamScopeObj* CFBamScopeTableObj::constructByClassCode( const classcode_t argClassCode ) {
		static const std::string S_ProcName( "constructByClassCode" );
		static const std::string S_Obj( "obj" );
		cfbam::ICFBamScopeObj* obj = NULL;
		if( argClassCode == cfbam::CFBamScopeBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamServerMethodTableObj*>( schema->getServerMethodTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamServerObjFuncTableObj*>( schema->getServerObjFuncTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamServerProcTableObj*>( schema->getServerProcTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamServerListFuncTableObj*>( schema->getServerListFuncTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamClearDepBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamClearDepTableObj*>( schema->getClearDepTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamClearSubDep1TableObj*>( schema->getClearSubDep1TableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamClearSubDep2TableObj*>( schema->getClearSubDep2TableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamClearSubDep3TableObj*>( schema->getClearSubDep3TableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamClearTopDepBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamClearTopDepTableObj*>( schema->getClearTopDepTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamDelDepTableObj*>( schema->getDelDepTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamDelSubDep1TableObj*>( schema->getDelSubDep1TableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamDelSubDep2Buff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamDelSubDep2TableObj*>( schema->getDelSubDep2TableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamDelSubDep3Buff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamDelSubDep3TableObj*>( schema->getDelSubDep3TableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamDelTopDepTableObj*>( schema->getDelTopDepTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamIndexBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamIndexTableObj*>( schema->getIndexTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamPopDepBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamPopDepTableObj*>( schema->getPopDepTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamPopSubDep1TableObj*>( schema->getPopSubDep1TableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamPopSubDep2Buff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamPopSubDep2TableObj*>( schema->getPopSubDep2TableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamPopSubDep3TableObj*>( schema->getPopSubDep3TableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamPopTopDepTableObj*>( schema->getPopTopDepTableObj() )->newInstance();
		}
		else if( argClassCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->newInstance();
		}
		if( obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_Obj );
		}
		return( obj );
	}

	cfbam::ICFBamScopeObj* CFBamScopeTableObj::realizeScope( cfbam::ICFBamScopeObj* Obj ) {
		static const std::string S_ProcName( "realizeScope" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamScopeObj* obj = Obj;
		cfbam::ICFBamScopeObj* existingObj = NULL;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		cfbam::ICFBamScopeObj* keepObj = NULL;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfbam::CFBamScopeBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfbam::ICFBamScopeObj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamScopeObj*>( keepObj );
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( allScope != NULL ) {
				allScope->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfbam::ICFBamScopeObj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamScopeObj*>( keepObj );
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( allScope != NULL ) {
				allScope->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamScopeTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamScopeObj*> list;
		cfbam::ICFBamScopeObj* existingObj = readCachedScopeByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamScopeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamScopeBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->reallyDeepDisposeScope( dynamic_cast<cfbam::ICFBamScopeObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->reallyDeepDisposeSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->reallyDeepDisposeSchemaRef( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamServerMethodTableObj*>( schema->getServerMethodTableObj() )->reallyDeepDisposeServerMethod( dynamic_cast<cfbam::ICFBamServerMethodObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamServerObjFuncTableObj*>( schema->getServerObjFuncTableObj() )->reallyDeepDisposeServerObjFunc( dynamic_cast<cfbam::ICFBamServerObjFuncObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamServerProcTableObj*>( schema->getServerProcTableObj() )->reallyDeepDisposeServerProc( dynamic_cast<cfbam::ICFBamServerProcObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamServerListFuncTableObj*>( schema->getServerListFuncTableObj() )->reallyDeepDisposeServerListFunc( dynamic_cast<cfbam::ICFBamServerListFuncObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDeepDisposeTable( dynamic_cast<cfbam::ICFBamTableObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamClearDepBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearDepTableObj*>( schema->getClearDepTableObj() )->reallyDeepDisposeClearDep( dynamic_cast<cfbam::ICFBamClearDepObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearSubDep1TableObj*>( schema->getClearSubDep1TableObj() )->reallyDeepDisposeClearSubDep1( dynamic_cast<cfbam::ICFBamClearSubDep1Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearSubDep2TableObj*>( schema->getClearSubDep2TableObj() )->reallyDeepDisposeClearSubDep2( dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearSubDep3TableObj*>( schema->getClearSubDep3TableObj() )->reallyDeepDisposeClearSubDep3( dynamic_cast<cfbam::ICFBamClearSubDep3Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamClearTopDepBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearTopDepTableObj*>( schema->getClearTopDepTableObj() )->reallyDeepDisposeClearTopDep( dynamic_cast<cfbam::ICFBamClearTopDepObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelDepTableObj*>( schema->getDelDepTableObj() )->reallyDeepDisposeDelDep( dynamic_cast<cfbam::ICFBamDelDepObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelSubDep1TableObj*>( schema->getDelSubDep1TableObj() )->reallyDeepDisposeDelSubDep1( dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamDelSubDep2Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelSubDep2TableObj*>( schema->getDelSubDep2TableObj() )->reallyDeepDisposeDelSubDep2( dynamic_cast<cfbam::ICFBamDelSubDep2Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamDelSubDep3Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelSubDep3TableObj*>( schema->getDelSubDep3TableObj() )->reallyDeepDisposeDelSubDep3( dynamic_cast<cfbam::ICFBamDelSubDep3Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelTopDepTableObj*>( schema->getDelTopDepTableObj() )->reallyDeepDisposeDelTopDep( dynamic_cast<cfbam::ICFBamDelTopDepObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamIndexBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamIndexTableObj*>( schema->getIndexTableObj() )->reallyDeepDisposeIndex( dynamic_cast<cfbam::ICFBamIndexObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamPopDepBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamPopDepTableObj*>( schema->getPopDepTableObj() )->reallyDeepDisposePopDep( dynamic_cast<cfbam::ICFBamPopDepObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamPopSubDep1TableObj*>( schema->getPopSubDep1TableObj() )->reallyDeepDisposePopSubDep1( dynamic_cast<cfbam::ICFBamPopSubDep1Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamPopSubDep2Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamPopSubDep2TableObj*>( schema->getPopSubDep2TableObj() )->reallyDeepDisposePopSubDep2( dynamic_cast<cfbam::ICFBamPopSubDep2Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamPopSubDep3TableObj*>( schema->getPopSubDep3TableObj() )->reallyDeepDisposePopSubDep3( dynamic_cast<cfbam::ICFBamPopSubDep3Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamPopTopDepTableObj*>( schema->getPopTopDepTableObj() )->reallyDeepDisposePopTopDep( dynamic_cast<cfbam::ICFBamPopTopDepObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDeepDisposeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamScopeTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfbam::ICFBamScopeObj*> list;
		std::vector<cfbam::ICFBamScopeObj*> matchesFound = readCachedScopeByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamScopeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamScopeBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->reallyDeepDisposeScope( dynamic_cast<cfbam::ICFBamScopeObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->reallyDeepDisposeSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->reallyDeepDisposeSchemaRef( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamServerMethodTableObj*>( schema->getServerMethodTableObj() )->reallyDeepDisposeServerMethod( dynamic_cast<cfbam::ICFBamServerMethodObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamServerObjFuncTableObj*>( schema->getServerObjFuncTableObj() )->reallyDeepDisposeServerObjFunc( dynamic_cast<cfbam::ICFBamServerObjFuncObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamServerProcTableObj*>( schema->getServerProcTableObj() )->reallyDeepDisposeServerProc( dynamic_cast<cfbam::ICFBamServerProcObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamServerListFuncTableObj*>( schema->getServerListFuncTableObj() )->reallyDeepDisposeServerListFunc( dynamic_cast<cfbam::ICFBamServerListFuncObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDeepDisposeTable( dynamic_cast<cfbam::ICFBamTableObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamClearDepBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearDepTableObj*>( schema->getClearDepTableObj() )->reallyDeepDisposeClearDep( dynamic_cast<cfbam::ICFBamClearDepObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearSubDep1TableObj*>( schema->getClearSubDep1TableObj() )->reallyDeepDisposeClearSubDep1( dynamic_cast<cfbam::ICFBamClearSubDep1Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearSubDep2TableObj*>( schema->getClearSubDep2TableObj() )->reallyDeepDisposeClearSubDep2( dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearSubDep3TableObj*>( schema->getClearSubDep3TableObj() )->reallyDeepDisposeClearSubDep3( dynamic_cast<cfbam::ICFBamClearSubDep3Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamClearTopDepBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamClearTopDepTableObj*>( schema->getClearTopDepTableObj() )->reallyDeepDisposeClearTopDep( dynamic_cast<cfbam::ICFBamClearTopDepObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelDepTableObj*>( schema->getDelDepTableObj() )->reallyDeepDisposeDelDep( dynamic_cast<cfbam::ICFBamDelDepObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelSubDep1TableObj*>( schema->getDelSubDep1TableObj() )->reallyDeepDisposeDelSubDep1( dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamDelSubDep2Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelSubDep2TableObj*>( schema->getDelSubDep2TableObj() )->reallyDeepDisposeDelSubDep2( dynamic_cast<cfbam::ICFBamDelSubDep2Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamDelSubDep3Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelSubDep3TableObj*>( schema->getDelSubDep3TableObj() )->reallyDeepDisposeDelSubDep3( dynamic_cast<cfbam::ICFBamDelSubDep3Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamDelTopDepTableObj*>( schema->getDelTopDepTableObj() )->reallyDeepDisposeDelTopDep( dynamic_cast<cfbam::ICFBamDelTopDepObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamIndexBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamIndexTableObj*>( schema->getIndexTableObj() )->reallyDeepDisposeIndex( dynamic_cast<cfbam::ICFBamIndexObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamPopDepBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamPopDepTableObj*>( schema->getPopDepTableObj() )->reallyDeepDisposePopDep( dynamic_cast<cfbam::ICFBamPopDepObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamPopSubDep1TableObj*>( schema->getPopSubDep1TableObj() )->reallyDeepDisposePopSubDep1( dynamic_cast<cfbam::ICFBamPopSubDep1Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamPopSubDep2Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamPopSubDep2TableObj*>( schema->getPopSubDep2TableObj() )->reallyDeepDisposePopSubDep2( dynamic_cast<cfbam::ICFBamPopSubDep2Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamPopSubDep3TableObj*>( schema->getPopSubDep3TableObj() )->reallyDeepDisposePopSubDep3( dynamic_cast<cfbam::ICFBamPopSubDep3Obj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamPopTopDepTableObj*>( schema->getPopTopDepTableObj() )->reallyDeepDisposePopTopDep( dynamic_cast<cfbam::ICFBamPopTopDepObj*>( cur ) );
				}
				else if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDeepDisposeRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamScopeTableObj::reallyDeepDisposeScope( cfbam::ICFBamScopeObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeScope" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamScopeObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamScopeBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->reallyDetachFromIndexesScope( dynamic_cast<cfbam::ICFBamScopeObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamSchemaDefBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->reallyDetachFromIndexesSchemaDef( dynamic_cast<cfbam::ICFBamSchemaDefObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamSchemaRefBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamSchemaRefTableObj*>( schema->getSchemaRefTableObj() )->reallyDetachFromIndexesSchemaRef( dynamic_cast<cfbam::ICFBamSchemaRefObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamServerMethodBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamServerMethodTableObj*>( schema->getServerMethodTableObj() )->reallyDetachFromIndexesServerMethod( dynamic_cast<cfbam::ICFBamServerMethodObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamServerObjFuncBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamServerObjFuncTableObj*>( schema->getServerObjFuncTableObj() )->reallyDetachFromIndexesServerObjFunc( dynamic_cast<cfbam::ICFBamServerObjFuncObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamServerProcBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamServerProcTableObj*>( schema->getServerProcTableObj() )->reallyDetachFromIndexesServerProc( dynamic_cast<cfbam::ICFBamServerProcObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamServerListFuncBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamServerListFuncTableObj*>( schema->getServerListFuncTableObj() )->reallyDetachFromIndexesServerListFunc( dynamic_cast<cfbam::ICFBamServerListFuncObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDetachFromIndexesTable( dynamic_cast<cfbam::ICFBamTableObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamClearDepBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamClearDepTableObj*>( schema->getClearDepTableObj() )->reallyDetachFromIndexesClearDep( dynamic_cast<cfbam::ICFBamClearDepObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamClearSubDep1Buff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamClearSubDep1TableObj*>( schema->getClearSubDep1TableObj() )->reallyDetachFromIndexesClearSubDep1( dynamic_cast<cfbam::ICFBamClearSubDep1Obj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamClearSubDep2Buff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamClearSubDep2TableObj*>( schema->getClearSubDep2TableObj() )->reallyDetachFromIndexesClearSubDep2( dynamic_cast<cfbam::ICFBamClearSubDep2Obj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamClearSubDep3Buff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamClearSubDep3TableObj*>( schema->getClearSubDep3TableObj() )->reallyDetachFromIndexesClearSubDep3( dynamic_cast<cfbam::ICFBamClearSubDep3Obj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamClearTopDepBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamClearTopDepTableObj*>( schema->getClearTopDepTableObj() )->reallyDetachFromIndexesClearTopDep( dynamic_cast<cfbam::ICFBamClearTopDepObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamDelDepBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamDelDepTableObj*>( schema->getDelDepTableObj() )->reallyDetachFromIndexesDelDep( dynamic_cast<cfbam::ICFBamDelDepObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamDelSubDep1Buff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamDelSubDep1TableObj*>( schema->getDelSubDep1TableObj() )->reallyDetachFromIndexesDelSubDep1( dynamic_cast<cfbam::ICFBamDelSubDep1Obj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamDelSubDep2Buff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamDelSubDep2TableObj*>( schema->getDelSubDep2TableObj() )->reallyDetachFromIndexesDelSubDep2( dynamic_cast<cfbam::ICFBamDelSubDep2Obj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamDelSubDep3Buff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamDelSubDep3TableObj*>( schema->getDelSubDep3TableObj() )->reallyDetachFromIndexesDelSubDep3( dynamic_cast<cfbam::ICFBamDelSubDep3Obj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamDelTopDepBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamDelTopDepTableObj*>( schema->getDelTopDepTableObj() )->reallyDetachFromIndexesDelTopDep( dynamic_cast<cfbam::ICFBamDelTopDepObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamIndexBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamIndexTableObj*>( schema->getIndexTableObj() )->reallyDetachFromIndexesIndex( dynamic_cast<cfbam::ICFBamIndexObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamPopDepBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamPopDepTableObj*>( schema->getPopDepTableObj() )->reallyDetachFromIndexesPopDep( dynamic_cast<cfbam::ICFBamPopDepObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamPopSubDep1Buff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamPopSubDep1TableObj*>( schema->getPopSubDep1TableObj() )->reallyDetachFromIndexesPopSubDep1( dynamic_cast<cfbam::ICFBamPopSubDep1Obj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamPopSubDep2Buff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamPopSubDep2TableObj*>( schema->getPopSubDep2TableObj() )->reallyDetachFromIndexesPopSubDep2( dynamic_cast<cfbam::ICFBamPopSubDep2Obj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamPopSubDep3Buff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamPopSubDep3TableObj*>( schema->getPopSubDep3TableObj() )->reallyDetachFromIndexesPopSubDep3( dynamic_cast<cfbam::ICFBamPopSubDep3Obj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamPopTopDepBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamPopTopDepTableObj*>( schema->getPopTopDepTableObj() )->reallyDetachFromIndexesPopTopDep( dynamic_cast<cfbam::ICFBamPopTopDepObj*>( obj ) );
		}
		else if( classCode == cfbam::CFBamRelationBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->reallyDetachFromIndexesRelation( dynamic_cast<cfbam::ICFBamRelationObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfbam::ICFBamScopeObj* CFBamScopeTableObj::createScope( cfbam::ICFBamScopeEditObj* Obj ) {
		static const std::string S_ProcName( "createScope" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamScopeObj* obj = dynamic_cast<cfbam::ICFBamScopeObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamScopeBuff* buff = dynamic_cast<cfbam::CFBamScopeBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->createScope(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamScopeBuff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamScopeObj*>( obj->realize() );
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

	cfbam::ICFBamScopeObj* CFBamScopeTableObj::readScope( cfbam::CFBamScopePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readScope" );
		cfbam::ICFBamScopeObj* obj = NULL;
		cfbam::ICFBamScopeObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamScopeBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::ICFBamScopeObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamScopeObj*>( obj->realize() );
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

	cfbam::ICFBamScopeObj* CFBamScopeTableObj::lockScope( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_ProcName( "lockScope" );
		cfbam::ICFBamScopeObj* locked = NULL;
		cfbam::CFBamScopeBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::ICFBamScopeObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamScopeObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamScopeObj*> CFBamScopeTableObj::readAllScope( bool forceRead ) {
		static const std::string S_ProcName( "readAllScope" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamScopeObj* realized = NULL;
		if( forceRead || ( allScope == NULL ) ) {
			std::map<cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>* map = new std::map<cfbam::CFBamScopePKey,cfbam::ICFBamScopeObj*>();
			allScope = map;
			std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamScopeBuff* buff = NULL;
			cfbam::ICFBamScopeObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamScopeObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamScopeObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allScope->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allScope->size();
		std::vector<cfbam::ICFBamScopeObj*> arr;
		auto valIter = allScope->begin();
		size_t idx = 0;
		while( valIter != allScope->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamScopeObj* CFBamScopeTableObj::readScopeByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readScopeByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamScopeObj* obj = readScope( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfbam::ICFBamScopeObj*> CFBamScopeTableObj::readScopeByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readScopeByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>();
			cfbam::ICFBamScopeObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamScopeBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamScopeObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamScopeObj* realized = dynamic_cast<cfbam::ICFBamScopeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamScopeObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamScopeObj* CFBamScopeTableObj::readCachedScope( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readScope" );
		cfbam::ICFBamScopeObj* obj = NULL;
		cfbam::ICFBamScopeObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamScopeObj* CFBamScopeTableObj::readCachedScopeByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedScopeByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamScopeObj* obj = readCachedScope( &pkey );
		return( obj );
	}

	std::vector<cfbam::ICFBamScopeObj*> CFBamScopeTableObj::readCachedScopeByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedScopeByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamScopeObj*> arr;
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamScopeObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamScopeObj* obj;
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

	cfbam::ICFBamScopeObj* CFBamScopeTableObj::updateScope( cfbam::ICFBamScopeEditObj* Obj ) {
		static const std::string S_ProcName( "updateScope" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamScopeObj* obj = dynamic_cast<cfbam::ICFBamScopeObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamScopeBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->updateScope( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamScopeBuff*>( Obj->getScopeBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamScopeObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamScopeObj*>( obj->realize() );
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

	void CFBamScopeTableObj::deleteScope( cfbam::ICFBamScopeEditObj* Obj ) {
		cfbam::ICFBamScopeObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->deleteScope( schema->getAuthorization(),
			obj->getScopeBuff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamScopeTableObj::deleteScopeByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamScopeObj* obj = readScope( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamScopeEditObj* editObj = dynamic_cast<cfbam::ICFBamScopeEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamScopeEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamScopeTableObj::deleteScopeByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->deleteScopeByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFBamScopeTableObj::reallyDetachFromIndexesScope( cfbam::ICFBamScopeObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesScope" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamScopeObj* obj = Obj;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamScopeObj* existingObj = searchMembers->second;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamScopeObj*>* mapTenantIdx = searchTenantIdx->second;
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

			members->erase( searchMembers );
		}
	}


}
