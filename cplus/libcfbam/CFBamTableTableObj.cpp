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

	const std::string CFBamTableTableObj::CLASS_NAME( "CFBamTableTableObj" );
	const std::string CFBamTableTableObj::TABLE_NAME( "Table" );
	const std::string CFBamTableTableObj::TABLE_DBNAME( "tbldef" );

	CFBamTableTableObj::CFBamTableTableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>();
		allTable = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		indexBySchemaDefIdx = new std::map< cfbam::CFBamTableBySchemaDefIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamTableByDefSchemaIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamTableByUNameIdxKey,
			cfbam::ICFBamTableObj*>();
		indexBySchemaCdIdx = new std::map< cfbam::CFBamTableBySchemaCdIdxKey,
			cfbam::ICFBamTableObj*>();
		indexByPrimaryIndexIdx = new std::map< cfbam::CFBamTableByPrimaryIndexIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		indexByLookupIndexIdx = new std::map< cfbam::CFBamTableByLookupIndexIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		indexByAltIndexIdx = new std::map< cfbam::CFBamTableByAltIndexIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		indexByQualTableIdx = new std::map< cfbam::CFBamTableByQualTableIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
	}

	CFBamTableTableObj::CFBamTableTableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>();
		allTable = NULL;
		indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		indexBySchemaDefIdx = new std::map< cfbam::CFBamTableBySchemaDefIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamTableByDefSchemaIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		indexByUNameIdx = new std::map< cfbam::CFBamTableByUNameIdxKey,
			cfbam::ICFBamTableObj*>();
		indexBySchemaCdIdx = new std::map< cfbam::CFBamTableBySchemaCdIdxKey,
			cfbam::ICFBamTableObj*>();
		indexByPrimaryIndexIdx = new std::map< cfbam::CFBamTableByPrimaryIndexIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		indexByLookupIndexIdx = new std::map< cfbam::CFBamTableByLookupIndexIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		indexByAltIndexIdx = new std::map< cfbam::CFBamTableByAltIndexIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		indexByQualTableIdx = new std::map< cfbam::CFBamTableByQualTableIdxKey,
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
	}

	CFBamTableTableObj::~CFBamTableTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexBySchemaDefIdx != NULL ) {
			delete indexBySchemaDefIdx;
			indexBySchemaDefIdx = NULL;
		}
		if( indexByDefSchemaIdx != NULL ) {
			delete indexByDefSchemaIdx;
			indexByDefSchemaIdx = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( indexBySchemaCdIdx != NULL ) {
			delete indexBySchemaCdIdx;
			indexBySchemaCdIdx = NULL;
		}
		if( indexByPrimaryIndexIdx != NULL ) {
			delete indexByPrimaryIndexIdx;
			indexByPrimaryIndexIdx = NULL;
		}
		if( indexByLookupIndexIdx != NULL ) {
			delete indexByLookupIndexIdx;
			indexByLookupIndexIdx = NULL;
		}
		if( indexByAltIndexIdx != NULL ) {
			delete indexByAltIndexIdx;
			indexByAltIndexIdx = NULL;
		}
		if( indexByQualTableIdx != NULL ) {
			delete indexByQualTableIdx;
			indexByQualTableIdx = NULL;
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

	cfbam::ICFBamSchemaObj* CFBamTableTableObj::getSchema() {
		return( schema );
	}

	void CFBamTableTableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamTableTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamTableTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamTableTableObj::getObjQualifyingClassCode() {
		return( &cfbam::CFBamSchemaDefBuff::CLASS_CODE );
	}


	void CFBamTableTableObj::minimizeMemory() {
		if( allTable != NULL ) {
			allTable->clear();
			delete allTable;
			allTable = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* curByTenantIdx = NULL;
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
		if( indexBySchemaDefIdx != NULL ) {
			std::map< cfbam::CFBamTableBySchemaDefIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator iterBySchemaDefIdx = indexBySchemaDefIdx->begin();
			std::map< cfbam::CFBamTableBySchemaDefIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator endBySchemaDefIdx = indexBySchemaDefIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* curBySchemaDefIdx = NULL;
			while( iterBySchemaDefIdx != endBySchemaDefIdx ) {
				curBySchemaDefIdx = iterBySchemaDefIdx->second;
				if( curBySchemaDefIdx != NULL ) {
					curBySchemaDefIdx->clear();
					delete curBySchemaDefIdx;
					curBySchemaDefIdx = NULL;
					iterBySchemaDefIdx->second = NULL;
				}
				iterBySchemaDefIdx ++;
			}
			indexBySchemaDefIdx->clear();
		}
		if( indexByDefSchemaIdx != NULL ) {
			std::map< cfbam::CFBamTableByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator iterByDefSchemaIdx = indexByDefSchemaIdx->begin();
			std::map< cfbam::CFBamTableByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator endByDefSchemaIdx = indexByDefSchemaIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* curByDefSchemaIdx = NULL;
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
		if( indexBySchemaCdIdx != NULL ) {
			indexBySchemaCdIdx->clear();
		}
		if( indexByPrimaryIndexIdx != NULL ) {
			std::map< cfbam::CFBamTableByPrimaryIndexIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator iterByPrimaryIndexIdx = indexByPrimaryIndexIdx->begin();
			std::map< cfbam::CFBamTableByPrimaryIndexIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator endByPrimaryIndexIdx = indexByPrimaryIndexIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* curByPrimaryIndexIdx = NULL;
			while( iterByPrimaryIndexIdx != endByPrimaryIndexIdx ) {
				curByPrimaryIndexIdx = iterByPrimaryIndexIdx->second;
				if( curByPrimaryIndexIdx != NULL ) {
					curByPrimaryIndexIdx->clear();
					delete curByPrimaryIndexIdx;
					curByPrimaryIndexIdx = NULL;
					iterByPrimaryIndexIdx->second = NULL;
				}
				iterByPrimaryIndexIdx ++;
			}
			indexByPrimaryIndexIdx->clear();
		}
		if( indexByLookupIndexIdx != NULL ) {
			std::map< cfbam::CFBamTableByLookupIndexIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator iterByLookupIndexIdx = indexByLookupIndexIdx->begin();
			std::map< cfbam::CFBamTableByLookupIndexIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator endByLookupIndexIdx = indexByLookupIndexIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* curByLookupIndexIdx = NULL;
			while( iterByLookupIndexIdx != endByLookupIndexIdx ) {
				curByLookupIndexIdx = iterByLookupIndexIdx->second;
				if( curByLookupIndexIdx != NULL ) {
					curByLookupIndexIdx->clear();
					delete curByLookupIndexIdx;
					curByLookupIndexIdx = NULL;
					iterByLookupIndexIdx->second = NULL;
				}
				iterByLookupIndexIdx ++;
			}
			indexByLookupIndexIdx->clear();
		}
		if( indexByAltIndexIdx != NULL ) {
			std::map< cfbam::CFBamTableByAltIndexIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator iterByAltIndexIdx = indexByAltIndexIdx->begin();
			std::map< cfbam::CFBamTableByAltIndexIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator endByAltIndexIdx = indexByAltIndexIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* curByAltIndexIdx = NULL;
			while( iterByAltIndexIdx != endByAltIndexIdx ) {
				curByAltIndexIdx = iterByAltIndexIdx->second;
				if( curByAltIndexIdx != NULL ) {
					curByAltIndexIdx->clear();
					delete curByAltIndexIdx;
					curByAltIndexIdx = NULL;
					iterByAltIndexIdx->second = NULL;
				}
				iterByAltIndexIdx ++;
			}
			indexByAltIndexIdx->clear();
		}
		if( indexByQualTableIdx != NULL ) {
			std::map< cfbam::CFBamTableByQualTableIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator iterByQualTableIdx = indexByQualTableIdx->begin();
			std::map< cfbam::CFBamTableByQualTableIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* >::iterator endByQualTableIdx = indexByQualTableIdx->end();
			std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* curByQualTableIdx = NULL;
			while( iterByQualTableIdx != endByQualTableIdx ) {
				curByQualTableIdx = iterByQualTableIdx->second;
				if( curByQualTableIdx != NULL ) {
					curByQualTableIdx->clear();
					delete curByQualTableIdx;
					curByQualTableIdx = NULL;
					iterByQualTableIdx->second = NULL;
				}
				iterByQualTableIdx ++;
			}
			indexByQualTableIdx->clear();
		}
		if( members != NULL ) {
			members->clear();
		}
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::newInstance() {
		cfbam::ICFBamTableObj* inst = dynamic_cast<cfbam::ICFBamTableObj*>( new CFBamTableObj( schema ) );
		return( inst );
	}

	cfbam::ICFBamTableEditObj* CFBamTableTableObj::newEditInstance( cfbam::ICFBamTableObj* orig ) {
		cfbam::ICFBamTableEditObj* edit = dynamic_cast<cfbam::ICFBamTableEditObj*>( new CFBamTableEditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::realizeTable( cfbam::ICFBamTableObj* Obj ) {
		static const std::string S_ProcName( "realizeTable" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamTableObj* obj = Obj;
		cfbam::ICFBamTableObj* existingObj = NULL;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		cfbam::ICFBamTableObj* keepObj = NULL;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexBySchemaDefIdx != NULL ) {
				cfbam::CFBamTableBySchemaDefIdxKey keySchemaDefIdx;
				keySchemaDefIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySchemaDefIdx.setRequiredSchemaDefId( keepObj->getRequiredSchemaDefId() );
				auto searchSchemaDefIdx = indexBySchemaDefIdx->find( keySchemaDefIdx );
				if( searchSchemaDefIdx != indexBySchemaDefIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapSchemaDefIdx = searchSchemaDefIdx->second;
					if( mapSchemaDefIdx != NULL ) {
						auto removalProbe = mapSchemaDefIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapSchemaDefIdx->end() ) {
							mapSchemaDefIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamTableByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapDefSchemaIdx->end() ) {
							mapDefSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamTableByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredSchemaDefId( keepObj->getRequiredSchemaDefId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexBySchemaCdIdx != NULL ) {
				cfbam::CFBamTableBySchemaCdIdxKey keySchemaCdIdx;
				keySchemaCdIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySchemaCdIdx.setRequiredSchemaDefId( keepObj->getRequiredSchemaDefId() );
				keySchemaCdIdx.setRequiredTableClassCode( keepObj->getRequiredTableClassCode() );
				auto removalProbe = indexBySchemaCdIdx->find( keySchemaCdIdx );
				if( removalProbe != indexBySchemaCdIdx->end() ) {
					indexBySchemaCdIdx->erase( removalProbe );
				}
			}

			if( indexByPrimaryIndexIdx != NULL ) {
				cfbam::CFBamTableByPrimaryIndexIdxKey keyPrimaryIndexIdx;
				if( keepObj->isOptionalPrimaryIndexTenantIdNull() ) {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdNull();
				}
				else {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdValue( keepObj->getOptionalPrimaryIndexTenantIdValue() );
				}
				if( keepObj->isOptionalPrimaryIndexIdNull() ) {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexIdNull();
				}
				else {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexIdValue( keepObj->getOptionalPrimaryIndexIdValue() );
				}
				auto searchPrimaryIndexIdx = indexByPrimaryIndexIdx->find( keyPrimaryIndexIdx );
				if( searchPrimaryIndexIdx != indexByPrimaryIndexIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapPrimaryIndexIdx = searchPrimaryIndexIdx->second;
					if( mapPrimaryIndexIdx != NULL ) {
						auto removalProbe = mapPrimaryIndexIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapPrimaryIndexIdx->end() ) {
							mapPrimaryIndexIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByLookupIndexIdx != NULL ) {
				cfbam::CFBamTableByLookupIndexIdxKey keyLookupIndexIdx;
				if( keepObj->isOptionalLookupIndexTenantIdNull() ) {
					keyLookupIndexIdx.setOptionalLookupIndexTenantIdNull();
				}
				else {
					keyLookupIndexIdx.setOptionalLookupIndexTenantIdValue( keepObj->getOptionalLookupIndexTenantIdValue() );
				}
				if( keepObj->isOptionalLookupIndexIdNull() ) {
					keyLookupIndexIdx.setOptionalLookupIndexIdNull();
				}
				else {
					keyLookupIndexIdx.setOptionalLookupIndexIdValue( keepObj->getOptionalLookupIndexIdValue() );
				}
				auto searchLookupIndexIdx = indexByLookupIndexIdx->find( keyLookupIndexIdx );
				if( searchLookupIndexIdx != indexByLookupIndexIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapLookupIndexIdx = searchLookupIndexIdx->second;
					if( mapLookupIndexIdx != NULL ) {
						auto removalProbe = mapLookupIndexIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapLookupIndexIdx->end() ) {
							mapLookupIndexIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByAltIndexIdx != NULL ) {
				cfbam::CFBamTableByAltIndexIdxKey keyAltIndexIdx;
				if( keepObj->isOptionalAltIndexTenantIdNull() ) {
					keyAltIndexIdx.setOptionalAltIndexTenantIdNull();
				}
				else {
					keyAltIndexIdx.setOptionalAltIndexTenantIdValue( keepObj->getOptionalAltIndexTenantIdValue() );
				}
				if( keepObj->isOptionalAltIndexIdNull() ) {
					keyAltIndexIdx.setOptionalAltIndexIdNull();
				}
				else {
					keyAltIndexIdx.setOptionalAltIndexIdValue( keepObj->getOptionalAltIndexIdValue() );
				}
				auto searchAltIndexIdx = indexByAltIndexIdx->find( keyAltIndexIdx );
				if( searchAltIndexIdx != indexByAltIndexIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapAltIndexIdx = searchAltIndexIdx->second;
					if( mapAltIndexIdx != NULL ) {
						auto removalProbe = mapAltIndexIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapAltIndexIdx->end() ) {
							mapAltIndexIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByQualTableIdx != NULL ) {
				cfbam::CFBamTableByQualTableIdxKey keyQualTableIdx;
				if( keepObj->isOptionalQualifyingTenantIdNull() ) {
					keyQualTableIdx.setOptionalQualifyingTenantIdNull();
				}
				else {
					keyQualTableIdx.setOptionalQualifyingTenantIdValue( keepObj->getOptionalQualifyingTenantIdValue() );
				}
				if( keepObj->isOptionalQualifyingTableIdNull() ) {
					keyQualTableIdx.setOptionalQualifyingTableIdNull();
				}
				else {
					keyQualTableIdx.setOptionalQualifyingTableIdValue( keepObj->getOptionalQualifyingTableIdValue() );
				}
				auto searchQualTableIdx = indexByQualTableIdx->find( keyQualTableIdx );
				if( searchQualTableIdx != indexByQualTableIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapQualTableIdx = searchQualTableIdx->second;
					if( mapQualTableIdx != NULL ) {
						auto removalProbe = mapQualTableIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapQualTableIdx->end() ) {
							mapQualTableIdx->erase( removalProbe );
						}
					}
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->realizeScope( Obj ) );
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
				cfbam::ICFBamTableObj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexBySchemaDefIdx != NULL ) {
				static const std::string S_ASchemaDefIdxObj( "aSchemaDefIdxObj" );
				cfbam::ICFBamTableObj* aSchemaDefIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aSchemaDefIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASchemaDefIdxObj );
				}
				cfbam::CFBamTableBySchemaDefIdxKey keySchemaDefIdx;
				keySchemaDefIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySchemaDefIdx.setRequiredSchemaDefId( keepObj->getRequiredSchemaDefId() );
				auto searchIndexBySchemaDefIdx = indexBySchemaDefIdx->find( keySchemaDefIdx );
				if( searchIndexBySchemaDefIdx != indexBySchemaDefIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapSchemaDefIdx = searchIndexBySchemaDefIdx->second;
					if( mapSchemaDefIdx != NULL ) {
						mapSchemaDefIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aSchemaDefIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamTableObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamTableByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamTableObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamTableByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredSchemaDefId( keepObj->getRequiredSchemaDefId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamTableByUNameIdxKey, cfbam::ICFBamTableObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexBySchemaCdIdx != NULL ) {
				static const std::string S_ASchemaCdIdxObj( "aSchemaCdIdxObj" );
				cfbam::ICFBamTableObj* aSchemaCdIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aSchemaCdIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASchemaCdIdxObj );
				}
				cfbam::CFBamTableBySchemaCdIdxKey keySchemaCdIdx;
				keySchemaCdIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySchemaCdIdx.setRequiredSchemaDefId( keepObj->getRequiredSchemaDefId() );
				keySchemaCdIdx.setRequiredTableClassCode( keepObj->getRequiredTableClassCode() );
				indexBySchemaCdIdx->insert( std::map< cfbam::CFBamTableBySchemaCdIdxKey, cfbam::ICFBamTableObj* >::value_type( keySchemaCdIdx, aSchemaCdIdxObj ) );
			}

			if( indexByPrimaryIndexIdx != NULL ) {
				static const std::string S_APrimaryIndexIdxObj( "aPrimaryIndexIdxObj" );
				cfbam::ICFBamTableObj* aPrimaryIndexIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aPrimaryIndexIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrimaryIndexIdxObj );
				}
				cfbam::CFBamTableByPrimaryIndexIdxKey keyPrimaryIndexIdx;
				if( keepObj->isOptionalPrimaryIndexTenantIdNull() ) {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdNull();
				}
				else {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdValue( keepObj->getOptionalPrimaryIndexTenantIdValue() );
				}
				if( keepObj->isOptionalPrimaryIndexIdNull() ) {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexIdNull();
				}
				else {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexIdValue( keepObj->getOptionalPrimaryIndexIdValue() );
				}
				auto searchIndexByPrimaryIndexIdx = indexByPrimaryIndexIdx->find( keyPrimaryIndexIdx );
				if( searchIndexByPrimaryIndexIdx != indexByPrimaryIndexIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapPrimaryIndexIdx = searchIndexByPrimaryIndexIdx->second;
					if( mapPrimaryIndexIdx != NULL ) {
						mapPrimaryIndexIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aPrimaryIndexIdxObj ) );
					}
				}
			}

			if( indexByLookupIndexIdx != NULL ) {
				static const std::string S_ALookupIndexIdxObj( "aLookupIndexIdxObj" );
				cfbam::ICFBamTableObj* aLookupIndexIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aLookupIndexIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALookupIndexIdxObj );
				}
				cfbam::CFBamTableByLookupIndexIdxKey keyLookupIndexIdx;
				if( keepObj->isOptionalLookupIndexTenantIdNull() ) {
					keyLookupIndexIdx.setOptionalLookupIndexTenantIdNull();
				}
				else {
					keyLookupIndexIdx.setOptionalLookupIndexTenantIdValue( keepObj->getOptionalLookupIndexTenantIdValue() );
				}
				if( keepObj->isOptionalLookupIndexIdNull() ) {
					keyLookupIndexIdx.setOptionalLookupIndexIdNull();
				}
				else {
					keyLookupIndexIdx.setOptionalLookupIndexIdValue( keepObj->getOptionalLookupIndexIdValue() );
				}
				auto searchIndexByLookupIndexIdx = indexByLookupIndexIdx->find( keyLookupIndexIdx );
				if( searchIndexByLookupIndexIdx != indexByLookupIndexIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapLookupIndexIdx = searchIndexByLookupIndexIdx->second;
					if( mapLookupIndexIdx != NULL ) {
						mapLookupIndexIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aLookupIndexIdxObj ) );
					}
				}
			}

			if( indexByAltIndexIdx != NULL ) {
				static const std::string S_AAltIndexIdxObj( "aAltIndexIdxObj" );
				cfbam::ICFBamTableObj* aAltIndexIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aAltIndexIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AAltIndexIdxObj );
				}
				cfbam::CFBamTableByAltIndexIdxKey keyAltIndexIdx;
				if( keepObj->isOptionalAltIndexTenantIdNull() ) {
					keyAltIndexIdx.setOptionalAltIndexTenantIdNull();
				}
				else {
					keyAltIndexIdx.setOptionalAltIndexTenantIdValue( keepObj->getOptionalAltIndexTenantIdValue() );
				}
				if( keepObj->isOptionalAltIndexIdNull() ) {
					keyAltIndexIdx.setOptionalAltIndexIdNull();
				}
				else {
					keyAltIndexIdx.setOptionalAltIndexIdValue( keepObj->getOptionalAltIndexIdValue() );
				}
				auto searchIndexByAltIndexIdx = indexByAltIndexIdx->find( keyAltIndexIdx );
				if( searchIndexByAltIndexIdx != indexByAltIndexIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapAltIndexIdx = searchIndexByAltIndexIdx->second;
					if( mapAltIndexIdx != NULL ) {
						mapAltIndexIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aAltIndexIdxObj ) );
					}
				}
			}

			if( indexByQualTableIdx != NULL ) {
				static const std::string S_AQualTableIdxObj( "aQualTableIdxObj" );
				cfbam::ICFBamTableObj* aQualTableIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aQualTableIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AQualTableIdxObj );
				}
				cfbam::CFBamTableByQualTableIdxKey keyQualTableIdx;
				if( keepObj->isOptionalQualifyingTenantIdNull() ) {
					keyQualTableIdx.setOptionalQualifyingTenantIdNull();
				}
				else {
					keyQualTableIdx.setOptionalQualifyingTenantIdValue( keepObj->getOptionalQualifyingTenantIdValue() );
				}
				if( keepObj->isOptionalQualifyingTableIdNull() ) {
					keyQualTableIdx.setOptionalQualifyingTableIdNull();
				}
				else {
					keyQualTableIdx.setOptionalQualifyingTableIdValue( keepObj->getOptionalQualifyingTableIdValue() );
				}
				auto searchIndexByQualTableIdx = indexByQualTableIdx->find( keyQualTableIdx );
				if( searchIndexByQualTableIdx != indexByQualTableIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapQualTableIdx = searchIndexByQualTableIdx->second;
					if( mapQualTableIdx != NULL ) {
						mapQualTableIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aQualTableIdxObj ) );
					}
				}
			}

			if( allTable != NULL ) {
				allTable->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->realizeScope( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfbam::ICFBamTableObj* aTenantIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexBySchemaDefIdx != NULL ) {
				static const std::string S_ASchemaDefIdxObj( "aSchemaDefIdxObj" );
				cfbam::ICFBamTableObj* aSchemaDefIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aSchemaDefIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASchemaDefIdxObj );
				}
				cfbam::CFBamTableBySchemaDefIdxKey keySchemaDefIdx;
				keySchemaDefIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySchemaDefIdx.setRequiredSchemaDefId( keepObj->getRequiredSchemaDefId() );
				auto searchIndexBySchemaDefIdx = indexBySchemaDefIdx->find( keySchemaDefIdx );
				if( searchIndexBySchemaDefIdx != indexBySchemaDefIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapSchemaDefIdx = searchIndexBySchemaDefIdx->second;
					if( mapSchemaDefIdx != NULL ) {
						mapSchemaDefIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aSchemaDefIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamTableObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamTableByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamTableObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamTableByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredSchemaDefId( keepObj->getRequiredSchemaDefId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamTableByUNameIdxKey, cfbam::ICFBamTableObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexBySchemaCdIdx != NULL ) {
				static const std::string S_ASchemaCdIdxObj( "aSchemaCdIdxObj" );
				cfbam::ICFBamTableObj* aSchemaCdIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aSchemaCdIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASchemaCdIdxObj );
				}
				cfbam::CFBamTableBySchemaCdIdxKey keySchemaCdIdx;
				keySchemaCdIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySchemaCdIdx.setRequiredSchemaDefId( keepObj->getRequiredSchemaDefId() );
				keySchemaCdIdx.setRequiredTableClassCode( keepObj->getRequiredTableClassCode() );
				indexBySchemaCdIdx->insert( std::map< cfbam::CFBamTableBySchemaCdIdxKey, cfbam::ICFBamTableObj* >::value_type( keySchemaCdIdx, aSchemaCdIdxObj ) );
			}

			if( indexByPrimaryIndexIdx != NULL ) {
				static const std::string S_APrimaryIndexIdxObj( "aPrimaryIndexIdxObj" );
				cfbam::ICFBamTableObj* aPrimaryIndexIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aPrimaryIndexIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrimaryIndexIdxObj );
				}
				cfbam::CFBamTableByPrimaryIndexIdxKey keyPrimaryIndexIdx;
				if( keepObj->isOptionalPrimaryIndexTenantIdNull() ) {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdNull();
				}
				else {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdValue( keepObj->getOptionalPrimaryIndexTenantIdValue() );
				}
				if( keepObj->isOptionalPrimaryIndexIdNull() ) {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexIdNull();
				}
				else {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexIdValue( keepObj->getOptionalPrimaryIndexIdValue() );
				}
				auto searchIndexByPrimaryIndexIdx = indexByPrimaryIndexIdx->find( keyPrimaryIndexIdx );
				if( searchIndexByPrimaryIndexIdx != indexByPrimaryIndexIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapPrimaryIndexIdx = searchIndexByPrimaryIndexIdx->second;
					if( mapPrimaryIndexIdx != NULL ) {
						mapPrimaryIndexIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aPrimaryIndexIdxObj ) );
					}
				}
			}

			if( indexByLookupIndexIdx != NULL ) {
				static const std::string S_ALookupIndexIdxObj( "aLookupIndexIdxObj" );
				cfbam::ICFBamTableObj* aLookupIndexIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aLookupIndexIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALookupIndexIdxObj );
				}
				cfbam::CFBamTableByLookupIndexIdxKey keyLookupIndexIdx;
				if( keepObj->isOptionalLookupIndexTenantIdNull() ) {
					keyLookupIndexIdx.setOptionalLookupIndexTenantIdNull();
				}
				else {
					keyLookupIndexIdx.setOptionalLookupIndexTenantIdValue( keepObj->getOptionalLookupIndexTenantIdValue() );
				}
				if( keepObj->isOptionalLookupIndexIdNull() ) {
					keyLookupIndexIdx.setOptionalLookupIndexIdNull();
				}
				else {
					keyLookupIndexIdx.setOptionalLookupIndexIdValue( keepObj->getOptionalLookupIndexIdValue() );
				}
				auto searchIndexByLookupIndexIdx = indexByLookupIndexIdx->find( keyLookupIndexIdx );
				if( searchIndexByLookupIndexIdx != indexByLookupIndexIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapLookupIndexIdx = searchIndexByLookupIndexIdx->second;
					if( mapLookupIndexIdx != NULL ) {
						mapLookupIndexIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aLookupIndexIdxObj ) );
					}
				}
			}

			if( indexByAltIndexIdx != NULL ) {
				static const std::string S_AAltIndexIdxObj( "aAltIndexIdxObj" );
				cfbam::ICFBamTableObj* aAltIndexIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aAltIndexIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AAltIndexIdxObj );
				}
				cfbam::CFBamTableByAltIndexIdxKey keyAltIndexIdx;
				if( keepObj->isOptionalAltIndexTenantIdNull() ) {
					keyAltIndexIdx.setOptionalAltIndexTenantIdNull();
				}
				else {
					keyAltIndexIdx.setOptionalAltIndexTenantIdValue( keepObj->getOptionalAltIndexTenantIdValue() );
				}
				if( keepObj->isOptionalAltIndexIdNull() ) {
					keyAltIndexIdx.setOptionalAltIndexIdNull();
				}
				else {
					keyAltIndexIdx.setOptionalAltIndexIdValue( keepObj->getOptionalAltIndexIdValue() );
				}
				auto searchIndexByAltIndexIdx = indexByAltIndexIdx->find( keyAltIndexIdx );
				if( searchIndexByAltIndexIdx != indexByAltIndexIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapAltIndexIdx = searchIndexByAltIndexIdx->second;
					if( mapAltIndexIdx != NULL ) {
						mapAltIndexIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aAltIndexIdxObj ) );
					}
				}
			}

			if( indexByQualTableIdx != NULL ) {
				static const std::string S_AQualTableIdxObj( "aQualTableIdxObj" );
				cfbam::ICFBamTableObj* aQualTableIdxObj =
					dynamic_cast<cfbam::ICFBamTableObj*>( keepObj );
				if( aQualTableIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AQualTableIdxObj );
				}
				cfbam::CFBamTableByQualTableIdxKey keyQualTableIdx;
				if( keepObj->isOptionalQualifyingTenantIdNull() ) {
					keyQualTableIdx.setOptionalQualifyingTenantIdNull();
				}
				else {
					keyQualTableIdx.setOptionalQualifyingTenantIdValue( keepObj->getOptionalQualifyingTenantIdValue() );
				}
				if( keepObj->isOptionalQualifyingTableIdNull() ) {
					keyQualTableIdx.setOptionalQualifyingTableIdNull();
				}
				else {
					keyQualTableIdx.setOptionalQualifyingTableIdValue( keepObj->getOptionalQualifyingTableIdValue() );
				}
				auto searchIndexByQualTableIdx = indexByQualTableIdx->find( keyQualTableIdx );
				if( searchIndexByQualTableIdx != indexByQualTableIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapQualTableIdx = searchIndexByQualTableIdx->second;
					if( mapQualTableIdx != NULL ) {
						mapQualTableIdx->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), aQualTableIdxObj ) );
					}
				}
			}

			if( allTable != NULL ) {
				allTable->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFBamTableTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamTableObj*> list;
		cfbam::ICFBamTableObj* existingObj = readCachedTableByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamTableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDeepDisposeTable( dynamic_cast<cfbam::ICFBamTableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTableTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfbam::ICFBamTableObj*> list;
		std::vector<cfbam::ICFBamTableObj*> matchesFound = readCachedTableByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDeepDisposeTable( dynamic_cast<cfbam::ICFBamTableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTableTableObj::reallyDeepDisposeTable( cfbam::ICFBamTableObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeTable" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamTableObj* obj = Obj;
		
		dynamic_cast<cfbam::CFBamServerMethodTableObj*>( schema->getServerMethodTableObj() )->deepDisposeByMethTableIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		dynamic_cast<cfbam::CFBamDelTopDepTableObj*>( schema->getDelTopDepTableObj() )->deepDisposeByDelTopDepTblIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		dynamic_cast<cfbam::CFBamClearTopDepTableObj*>( schema->getClearTopDepTableObj() )->deepDisposeByClrTopDepTblIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->deepDisposeByChainTableIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		cfbam::ICFBamRelationObj* objDelTableRelationPopDep;
		std::vector<cfbam::ICFBamRelationObj*> arrDelTableRelationPopDep = dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->readCachedRelationByRelTableIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamRelationObj*>::iterator iterArrDelTableRelationPopDep = arrDelTableRelationPopDep.begin();
		std::vector<cfbam::ICFBamRelationObj*>::iterator endArrDelTableRelationPopDep = arrDelTableRelationPopDep.end();
		while( iterArrDelTableRelationPopDep != endArrDelTableRelationPopDep ) {
			objDelTableRelationPopDep = *iterArrDelTableRelationPopDep;
			iterArrDelTableRelationPopDep ++;
			dynamic_cast<cfbam::CFBamPopTopDepTableObj*>( schema->getPopTopDepTableObj() )->deepDisposeByContRelIdx( objDelTableRelationPopDep->getRequiredTenantId(),
				objDelTableRelationPopDep->getRequiredId() );
		}
		cfbam::ICFBamRelationObj* objDelTableRelationCol;
		std::vector<cfbam::ICFBamRelationObj*> arrDelTableRelationCol = dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->readCachedRelationByRelTableIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamRelationObj*>::iterator iterArrDelTableRelationCol = arrDelTableRelationCol.begin();
		std::vector<cfbam::ICFBamRelationObj*>::iterator endArrDelTableRelationCol = arrDelTableRelationCol.end();
		while( iterArrDelTableRelationCol != endArrDelTableRelationCol ) {
			objDelTableRelationCol = *iterArrDelTableRelationCol;
			iterArrDelTableRelationCol ++;
			dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->deepDisposeByRelationIdx( objDelTableRelationCol->getRequiredTenantId(),
				objDelTableRelationCol->getRequiredId() );
		}
		dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->deepDisposeByRelTableIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		cfbam::ICFBamIndexObj* objDelTableIndexRefRelFmCol;
		std::vector<cfbam::ICFBamIndexObj*> arrDelTableIndexRefRelFmCol = dynamic_cast<cfbam::CFBamIndexTableObj*>( schema->getIndexTableObj() )->readCachedIndexByIdxTableIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamIndexObj*>::iterator iterArrDelTableIndexRefRelFmCol = arrDelTableIndexRefRelFmCol.begin();
		std::vector<cfbam::ICFBamIndexObj*>::iterator endArrDelTableIndexRefRelFmCol = arrDelTableIndexRefRelFmCol.end();
		while( iterArrDelTableIndexRefRelFmCol != endArrDelTableIndexRefRelFmCol ) {
			objDelTableIndexRefRelFmCol = *iterArrDelTableIndexRefRelFmCol;
			iterArrDelTableIndexRefRelFmCol ++;
			cfbam::ICFBamIndexColObj* objColumns;
			std::vector<cfbam::ICFBamIndexColObj*> arrColumns = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->readCachedIndexColByIndexIdx( objDelTableIndexRefRelFmCol->getRequiredTenantId(),
				objDelTableIndexRefRelFmCol->getRequiredId() );
			std::vector<cfbam::ICFBamIndexColObj*>::iterator iterArrColumns = arrColumns.begin();
			std::vector<cfbam::ICFBamIndexColObj*>::iterator endArrColumns = arrColumns.end();
			while( iterArrColumns != endArrColumns ) {
				objColumns = *iterArrColumns;
				iterArrColumns ++;
			dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->deepDisposeByFromColIdx( objColumns->getRequiredTenantId(),
				objColumns->getRequiredId() );
			}
		}
		cfbam::ICFBamIndexObj* objDelTableIndexRefRelToCol;
		std::vector<cfbam::ICFBamIndexObj*> arrDelTableIndexRefRelToCol = dynamic_cast<cfbam::CFBamIndexTableObj*>( schema->getIndexTableObj() )->readCachedIndexByIdxTableIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamIndexObj*>::iterator iterArrDelTableIndexRefRelToCol = arrDelTableIndexRefRelToCol.begin();
		std::vector<cfbam::ICFBamIndexObj*>::iterator endArrDelTableIndexRefRelToCol = arrDelTableIndexRefRelToCol.end();
		while( iterArrDelTableIndexRefRelToCol != endArrDelTableIndexRefRelToCol ) {
			objDelTableIndexRefRelToCol = *iterArrDelTableIndexRefRelToCol;
			iterArrDelTableIndexRefRelToCol ++;
			cfbam::ICFBamIndexColObj* objColumns;
			std::vector<cfbam::ICFBamIndexColObj*> arrColumns = dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->readCachedIndexColByIndexIdx( objDelTableIndexRefRelToCol->getRequiredTenantId(),
				objDelTableIndexRefRelToCol->getRequiredId() );
			std::vector<cfbam::ICFBamIndexColObj*>::iterator iterArrColumns = arrColumns.begin();
			std::vector<cfbam::ICFBamIndexColObj*>::iterator endArrColumns = arrColumns.end();
			while( iterArrColumns != endArrColumns ) {
				objColumns = *iterArrColumns;
				iterArrColumns ++;
			dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->deepDisposeByToColIdx( objColumns->getRequiredTenantId(),
				objColumns->getRequiredId() );
			}
		}
		cfbam::ICFBamIndexObj* objDelTableIndexCol;
		std::vector<cfbam::ICFBamIndexObj*> arrDelTableIndexCol = dynamic_cast<cfbam::CFBamIndexTableObj*>( schema->getIndexTableObj() )->readCachedIndexByIdxTableIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamIndexObj*>::iterator iterArrDelTableIndexCol = arrDelTableIndexCol.begin();
		std::vector<cfbam::ICFBamIndexObj*>::iterator endArrDelTableIndexCol = arrDelTableIndexCol.end();
		while( iterArrDelTableIndexCol != endArrDelTableIndexCol ) {
			objDelTableIndexCol = *iterArrDelTableIndexCol;
			iterArrDelTableIndexCol ++;
			dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->deepDisposeByIndexIdx( objDelTableIndexCol->getRequiredTenantId(),
				objDelTableIndexCol->getRequiredId() );
		}
		dynamic_cast<cfbam::CFBamIndexTableObj*>( schema->getIndexTableObj() )->deepDisposeByIdxTableIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		cfbam::ICFBamValueObj* objDelTableRefIndexColumns;
		std::vector<cfbam::ICFBamValueObj*> arrDelTableRefIndexColumns = dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->readCachedValueByScopeIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		std::vector<cfbam::ICFBamValueObj*>::iterator iterArrDelTableRefIndexColumns = arrDelTableRefIndexColumns.begin();
		std::vector<cfbam::ICFBamValueObj*>::iterator endArrDelTableRefIndexColumns = arrDelTableRefIndexColumns.end();
		while( iterArrDelTableRefIndexColumns != endArrDelTableRefIndexColumns ) {
			objDelTableRefIndexColumns = *iterArrDelTableRefIndexColumns;
			iterArrDelTableRefIndexColumns ++;
			dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->deepDisposeByColIdx( objDelTableRefIndexColumns->getRequiredTenantId(),
				objDelTableRefIndexColumns->getRequiredId() );
		}
		dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->deepDisposeByScopeIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		dynamic_cast<cfbam::CFBamId64GenTableObj*>( schema->getId64GenTableObj() )->deepDisposeByDispIdx( obj->getRequiredTenantIdReference(),
			obj->getRequiredIdReference() );
		dynamic_cast<cfbam::CFBamId32GenTableObj*>( schema->getId32GenTableObj() )->deepDisposeByDispIdx( obj->getRequiredTenantIdReference(),
			obj->getRequiredIdReference() );
		dynamic_cast<cfbam::CFBamId16GenTableObj*>( schema->getId16GenTableObj() )->deepDisposeByDispIdx( obj->getRequiredTenantIdReference(),
			obj->getRequiredIdReference() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDetachFromIndexesTable( dynamic_cast<cfbam::ICFBamTableObj*>( obj ) );
		}

		dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->reallyDeepDisposeScope( dynamic_cast<cfbam::ICFBamScopeObj*>( obj ) );
	}

	void CFBamTableTableObj::deepDisposeBySchemaDefIdx( const int64_t TenantId,
			const int64_t SchemaDefId ) {
		static const std::string S_ProcName( "deepDisposeBySchemaDefIdx" );
		std::vector<cfbam::ICFBamTableObj*> list;
		std::vector<cfbam::ICFBamTableObj*> matchesFound = readCachedTableBySchemaDefIdx( TenantId,
				SchemaDefId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDeepDisposeTable( dynamic_cast<cfbam::ICFBamTableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTableTableObj::deepDisposeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) {
		static const std::string S_ProcName( "deepDisposeByDefSchemaIdx" );
		std::vector<cfbam::ICFBamTableObj*> list;
		std::vector<cfbam::ICFBamTableObj*> matchesFound = readCachedTableByDefSchemaIdx( DefSchemaTenantId,
				DefSchemaId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDeepDisposeTable( dynamic_cast<cfbam::ICFBamTableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTableTableObj::deepDisposeByUNameIdx( const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfbam::ICFBamTableObj*> list;
		cfbam::ICFBamTableObj* existingObj = readCachedTableByUNameIdx( TenantId,
				SchemaDefId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamTableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDeepDisposeTable( dynamic_cast<cfbam::ICFBamTableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTableTableObj::deepDisposeBySchemaCdIdx( const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& TableClassCode ) {
		static const std::string S_ProcName( "deepDisposeBySchemaCdIdx" );
		std::vector<cfbam::ICFBamTableObj*> list;
		cfbam::ICFBamTableObj* existingObj = readCachedTableBySchemaCdIdx( TenantId,
				SchemaDefId,
				TableClassCode );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamTableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDeepDisposeTable( dynamic_cast<cfbam::ICFBamTableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTableTableObj::deepDisposeByPrimaryIndexIdx( const int64_t* PrimaryIndexTenantId,
			const int64_t* PrimaryIndexId ) {
		static const std::string S_ProcName( "deepDisposeByPrimaryIndexIdx" );
		std::vector<cfbam::ICFBamTableObj*> list;
		std::vector<cfbam::ICFBamTableObj*> matchesFound = readCachedTableByPrimaryIndexIdx( PrimaryIndexTenantId,
				PrimaryIndexId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDeepDisposeTable( dynamic_cast<cfbam::ICFBamTableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTableTableObj::deepDisposeByLookupIndexIdx( const int64_t* LookupIndexTenantId,
			const int64_t* LookupIndexId ) {
		static const std::string S_ProcName( "deepDisposeByLookupIndexIdx" );
		std::vector<cfbam::ICFBamTableObj*> list;
		std::vector<cfbam::ICFBamTableObj*> matchesFound = readCachedTableByLookupIndexIdx( LookupIndexTenantId,
				LookupIndexId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDeepDisposeTable( dynamic_cast<cfbam::ICFBamTableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTableTableObj::deepDisposeByAltIndexIdx( const int64_t* AltIndexTenantId,
			const int64_t* AltIndexId ) {
		static const std::string S_ProcName( "deepDisposeByAltIndexIdx" );
		std::vector<cfbam::ICFBamTableObj*> list;
		std::vector<cfbam::ICFBamTableObj*> matchesFound = readCachedTableByAltIndexIdx( AltIndexTenantId,
				AltIndexId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDeepDisposeTable( dynamic_cast<cfbam::ICFBamTableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTableTableObj::deepDisposeByQualTableIdx( const int64_t* QualifyingTenantId,
			const int64_t* QualifyingTableId ) {
		static const std::string S_ProcName( "deepDisposeByQualTableIdx" );
		std::vector<cfbam::ICFBamTableObj*> list;
		std::vector<cfbam::ICFBamTableObj*> matchesFound = readCachedTableByQualTableIdx( QualifyingTenantId,
				QualifyingTableId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTableBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->reallyDeepDisposeTable( dynamic_cast<cfbam::ICFBamTableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::createTable( cfbam::ICFBamTableEditObj* Obj ) {
		static const std::string S_ProcName( "createTable" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTableObj* obj = dynamic_cast<cfbam::ICFBamTableObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamTableBuff* buff = dynamic_cast<cfbam::CFBamTableBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->createTable(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamTableBuff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
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

	cfbam::ICFBamTableObj* CFBamTableTableObj::readTable( cfbam::CFBamScopePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTable" );
		cfbam::ICFBamTableObj* obj = NULL;
		cfbam::ICFBamTableObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamTableBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
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

	cfbam::ICFBamTableObj* CFBamTableTableObj::lockTable( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_ProcName( "lockTable" );
		cfbam::ICFBamTableObj* locked = NULL;
		cfbam::CFBamTableBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamTableObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readAllTable( bool forceRead ) {
		static const std::string S_ProcName( "readAllTable" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTableObj* realized = NULL;
		if( forceRead || ( allTable == NULL ) ) {
			std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* map = new std::map<cfbam::CFBamScopePKey,cfbam::ICFBamTableObj*>();
			allTable = map;
			std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamTableBuff* buff = NULL;
			cfbam::ICFBamTableObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allTable->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allTable->size();
		std::vector<cfbam::ICFBamTableObj*> arr;
		auto valIter = allTable->begin();
		size_t idx = 0;
		while( valIter != allTable->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::readTableByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readTableByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamTableObj* obj = readTable( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readTableByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTableByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>();
			cfbam::ICFBamScopeObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamScopeBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableScope()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamScopeBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTableObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTableObj* realized = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfbam::CFBamScopeByTenantIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readTableBySchemaDefIdx( const int64_t TenantId,
			const int64_t SchemaDefId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTableBySchemaDefIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamTableBySchemaDefIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* oldDict;
		if( indexBySchemaDefIdx == NULL ) {
			indexBySchemaDefIdx = new std::map< cfbam::CFBamTableBySchemaDefIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		}
		auto searchIndexBySchemaDefIdx = indexBySchemaDefIdx->find( key );
		if( searchIndexBySchemaDefIdx != indexBySchemaDefIdx->end() ) {
			oldDict = searchIndexBySchemaDefIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>();
			cfbam::ICFBamTableObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->readDerivedBySchemaDefIdx( schema->getAuthorization(),
				TenantId,
				SchemaDefId );
			cfbam::CFBamTableBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTableObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTableObj* realized = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexBySchemaDefIdx->erase( searchIndexBySchemaDefIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexBySchemaDefIdx->insert( std::map< cfbam::CFBamTableBySchemaDefIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readTableByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTableByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamTableByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* oldDict;
		if( indexByDefSchemaIdx == NULL ) {
			indexByDefSchemaIdx = new std::map< cfbam::CFBamTableByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
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
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>();
			cfbam::ICFBamTableObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->readDerivedByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
			cfbam::CFBamTableBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTableObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTableObj* realized = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDefSchemaIdx->erase( searchIndexByDefSchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDefSchemaIdx->insert( std::map< cfbam::CFBamTableByDefSchemaIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::readTableByUNameIdx( const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readTableByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamTableByUNameIdxKey,
				cfbam::ICFBamTableObj*>();
		}
		cfbam::CFBamTableByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		key.setRequiredName( Name );
		cfbam::ICFBamTableObj* obj = NULL;
		cfbam::ICFBamTableObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamTableBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->readDerivedByUNameIdx( schema->getAuthorization(),
				TenantId,
				SchemaDefId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamTableByUNameIdxKey, cfbam::ICFBamTableObj*>::value_type( key, dynamic_cast<cfbam::ICFBamTableObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::readTableBySchemaCdIdx( const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& TableClassCode, bool forceRead )
	{
		static const std::string S_ProcName( "readTableBySchemaCdIdx" );
		static const std::string S_Realized( "realized" );
		if( indexBySchemaCdIdx == NULL ) {
			indexBySchemaCdIdx = new std::map< cfbam::CFBamTableBySchemaCdIdxKey,
				cfbam::ICFBamTableObj*>();
		}
		cfbam::CFBamTableBySchemaCdIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		key.setRequiredTableClassCode( TableClassCode );
		cfbam::ICFBamTableObj* obj = NULL;
		cfbam::ICFBamTableObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexBySchemaCdIdx = indexBySchemaCdIdx->find( key );
			if( searchIndexBySchemaCdIdx != indexBySchemaCdIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexBySchemaCdIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamTableBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->readDerivedBySchemaCdIdx( schema->getAuthorization(),
				TenantId,
				SchemaDefId,
				TableClassCode );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexBySchemaCdIdx->insert( std::map< cfbam::CFBamTableBySchemaCdIdxKey, cfbam::ICFBamTableObj*>::value_type( key, dynamic_cast<cfbam::ICFBamTableObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readTableByPrimaryIndexIdx( const int64_t* PrimaryIndexTenantId,
			const int64_t* PrimaryIndexId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTableByPrimaryIndexIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamTableByPrimaryIndexIdxKey key;
		if( PrimaryIndexTenantId == NULL ) {
			key.setOptionalPrimaryIndexTenantIdNull();
		}
		else {
			key.setOptionalPrimaryIndexTenantIdValue( *PrimaryIndexTenantId );
		}
		if( PrimaryIndexId == NULL ) {
			key.setOptionalPrimaryIndexIdNull();
		}
		else {
			key.setOptionalPrimaryIndexIdValue( *PrimaryIndexId );
		}
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* oldDict;
		if( indexByPrimaryIndexIdx == NULL ) {
			indexByPrimaryIndexIdx = new std::map< cfbam::CFBamTableByPrimaryIndexIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		}
		auto searchIndexByPrimaryIndexIdx = indexByPrimaryIndexIdx->find( key );
		if( searchIndexByPrimaryIndexIdx != indexByPrimaryIndexIdx->end() ) {
			oldDict = searchIndexByPrimaryIndexIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>();
			cfbam::ICFBamTableObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->readDerivedByPrimaryIndexIdx( schema->getAuthorization(),
				PrimaryIndexTenantId,
				PrimaryIndexId );
			cfbam::CFBamTableBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTableObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTableObj* realized = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByPrimaryIndexIdx->erase( searchIndexByPrimaryIndexIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByPrimaryIndexIdx->insert( std::map< cfbam::CFBamTableByPrimaryIndexIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readTableByLookupIndexIdx( const int64_t* LookupIndexTenantId,
			const int64_t* LookupIndexId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTableByLookupIndexIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamTableByLookupIndexIdxKey key;
		if( LookupIndexTenantId == NULL ) {
			key.setOptionalLookupIndexTenantIdNull();
		}
		else {
			key.setOptionalLookupIndexTenantIdValue( *LookupIndexTenantId );
		}
		if( LookupIndexId == NULL ) {
			key.setOptionalLookupIndexIdNull();
		}
		else {
			key.setOptionalLookupIndexIdValue( *LookupIndexId );
		}
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* oldDict;
		if( indexByLookupIndexIdx == NULL ) {
			indexByLookupIndexIdx = new std::map< cfbam::CFBamTableByLookupIndexIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		}
		auto searchIndexByLookupIndexIdx = indexByLookupIndexIdx->find( key );
		if( searchIndexByLookupIndexIdx != indexByLookupIndexIdx->end() ) {
			oldDict = searchIndexByLookupIndexIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>();
			cfbam::ICFBamTableObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->readDerivedByLookupIndexIdx( schema->getAuthorization(),
				LookupIndexTenantId,
				LookupIndexId );
			cfbam::CFBamTableBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTableObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTableObj* realized = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByLookupIndexIdx->erase( searchIndexByLookupIndexIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByLookupIndexIdx->insert( std::map< cfbam::CFBamTableByLookupIndexIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readTableByAltIndexIdx( const int64_t* AltIndexTenantId,
			const int64_t* AltIndexId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTableByAltIndexIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamTableByAltIndexIdxKey key;
		if( AltIndexTenantId == NULL ) {
			key.setOptionalAltIndexTenantIdNull();
		}
		else {
			key.setOptionalAltIndexTenantIdValue( *AltIndexTenantId );
		}
		if( AltIndexId == NULL ) {
			key.setOptionalAltIndexIdNull();
		}
		else {
			key.setOptionalAltIndexIdValue( *AltIndexId );
		}
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* oldDict;
		if( indexByAltIndexIdx == NULL ) {
			indexByAltIndexIdx = new std::map< cfbam::CFBamTableByAltIndexIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		}
		auto searchIndexByAltIndexIdx = indexByAltIndexIdx->find( key );
		if( searchIndexByAltIndexIdx != indexByAltIndexIdx->end() ) {
			oldDict = searchIndexByAltIndexIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>();
			cfbam::ICFBamTableObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->readDerivedByAltIndexIdx( schema->getAuthorization(),
				AltIndexTenantId,
				AltIndexId );
			cfbam::CFBamTableBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTableObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTableObj* realized = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByAltIndexIdx->erase( searchIndexByAltIndexIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByAltIndexIdx->insert( std::map< cfbam::CFBamTableByAltIndexIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readTableByQualTableIdx( const int64_t* QualifyingTenantId,
			const int64_t* QualifyingTableId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTableByQualTableIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamTableByQualTableIdxKey key;
		if( QualifyingTenantId == NULL ) {
			key.setOptionalQualifyingTenantIdNull();
		}
		else {
			key.setOptionalQualifyingTenantIdValue( *QualifyingTenantId );
		}
		if( QualifyingTableId == NULL ) {
			key.setOptionalQualifyingTableIdNull();
		}
		else {
			key.setOptionalQualifyingTableIdValue( *QualifyingTableId );
		}
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* oldDict;
		if( indexByQualTableIdx == NULL ) {
			indexByQualTableIdx = new std::map< cfbam::CFBamTableByQualTableIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>*>();
		}
		auto searchIndexByQualTableIdx = indexByQualTableIdx->find( key );
		if( searchIndexByQualTableIdx != indexByQualTableIdx->end() ) {
			oldDict = searchIndexByQualTableIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>();
			cfbam::ICFBamTableObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamTableBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->readDerivedByQualTableIdx( schema->getAuthorization(),
				QualifyingTenantId,
				QualifyingTableId );
			cfbam::CFBamTableBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTableObj*>(
					dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTableObj* realized = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByQualTableIdx->erase( searchIndexByQualTableIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByQualTableIdx->insert( std::map< cfbam::CFBamTableByQualTableIdxKey,
				std::map< cfbam::CFBamScopePKey, cfbam::ICFBamTableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::readTableByLookupUNameIdx( const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readTableByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamTableByUNameIdxKey,
				cfbam::ICFBamTableObj*>();
		}
		cfbam::CFBamTableByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		key.setRequiredName( Name );
		cfbam::ICFBamTableObj* obj = NULL;
		cfbam::ICFBamTableObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				obj = searchIndexByUNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamTableBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->readDerivedByLookupUNameIdx( schema->getAuthorization(),
				TenantId,
				SchemaDefId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::CFBamScopeTableObj*>( schema->getScopeTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamTableByUNameIdxKey, cfbam::ICFBamTableObj*>::value_type( key, dynamic_cast<cfbam::ICFBamTableObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::readCachedTable( cfbam::CFBamScopePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTable" );
		cfbam::ICFBamTableObj* obj = NULL;
		cfbam::ICFBamTableObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::readCachedTableByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedTableByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamTableObj* obj = readCachedTable( &pkey );
		return( obj );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readCachedTableByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedTableByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTableObj*> arr;
		cfbam::CFBamScopeByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTableObj* obj;
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

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readCachedTableBySchemaDefIdx( const int64_t TenantId,
			const int64_t SchemaDefId )
	{
		static const std::string S_ProcName( "readCachedTableBySchemaDefIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTableObj*> arr;
		cfbam::CFBamTableBySchemaDefIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		if( indexBySchemaDefIdx == NULL ) {
			return( arr );
		}
		auto searchIndexBySchemaDefIdx = indexBySchemaDefIdx->find( key );
		if( searchIndexBySchemaDefIdx != indexBySchemaDefIdx->end() ) {
			dict = searchIndexBySchemaDefIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTableObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamTableBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readCachedTableByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readCachedTableByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTableObj*> arr;
		cfbam::CFBamTableByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		if( indexByDefSchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( key );
		if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
			dict = searchIndexByDefSchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTableObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamTableBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::readCachedTableByUNameIdx( const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedTableByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamTableByUNameIdxKey,
				cfbam::ICFBamTableObj*>();
		}
		cfbam::CFBamTableByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		key.setRequiredName( Name );
		cfbam::ICFBamTableObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamTableBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::readCachedTableBySchemaCdIdx( const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& TableClassCode )
	{
		static const std::string S_ProcName( "readCachedTableBySchemaCdIdx" );
		static const std::string S_Realized( "realized" );
		if( indexBySchemaCdIdx == NULL ) {
			indexBySchemaCdIdx = new std::map< cfbam::CFBamTableBySchemaCdIdxKey,
				cfbam::ICFBamTableObj*>();
		}
		cfbam::CFBamTableBySchemaCdIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		key.setRequiredTableClassCode( TableClassCode );
		cfbam::ICFBamTableObj* obj = NULL;
		auto searchIndexBySchemaCdIdx = indexBySchemaCdIdx->find( key );
		if( searchIndexBySchemaCdIdx != indexBySchemaCdIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexBySchemaCdIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamTableBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readCachedTableByPrimaryIndexIdx( const int64_t* PrimaryIndexTenantId,
			const int64_t* PrimaryIndexId )
	{
		static const std::string S_ProcName( "readCachedTableByPrimaryIndexIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTableObj*> arr;
		cfbam::CFBamTableByPrimaryIndexIdxKey key;
		if( PrimaryIndexTenantId == NULL ) {
			key.setOptionalPrimaryIndexTenantIdNull();
		}
		else {
			key.setOptionalPrimaryIndexTenantIdValue( *PrimaryIndexTenantId );
		}
		if( PrimaryIndexId == NULL ) {
			key.setOptionalPrimaryIndexIdNull();
		}
		else {
			key.setOptionalPrimaryIndexIdValue( *PrimaryIndexId );
		}
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		if( indexByPrimaryIndexIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByPrimaryIndexIdx = indexByPrimaryIndexIdx->find( key );
		if( searchIndexByPrimaryIndexIdx != indexByPrimaryIndexIdx->end() ) {
			dict = searchIndexByPrimaryIndexIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTableObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamTableBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readCachedTableByLookupIndexIdx( const int64_t* LookupIndexTenantId,
			const int64_t* LookupIndexId )
	{
		static const std::string S_ProcName( "readCachedTableByLookupIndexIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTableObj*> arr;
		cfbam::CFBamTableByLookupIndexIdxKey key;
		if( LookupIndexTenantId == NULL ) {
			key.setOptionalLookupIndexTenantIdNull();
		}
		else {
			key.setOptionalLookupIndexTenantIdValue( *LookupIndexTenantId );
		}
		if( LookupIndexId == NULL ) {
			key.setOptionalLookupIndexIdNull();
		}
		else {
			key.setOptionalLookupIndexIdValue( *LookupIndexId );
		}
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		if( indexByLookupIndexIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByLookupIndexIdx = indexByLookupIndexIdx->find( key );
		if( searchIndexByLookupIndexIdx != indexByLookupIndexIdx->end() ) {
			dict = searchIndexByLookupIndexIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTableObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamTableBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readCachedTableByAltIndexIdx( const int64_t* AltIndexTenantId,
			const int64_t* AltIndexId )
	{
		static const std::string S_ProcName( "readCachedTableByAltIndexIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTableObj*> arr;
		cfbam::CFBamTableByAltIndexIdxKey key;
		if( AltIndexTenantId == NULL ) {
			key.setOptionalAltIndexTenantIdNull();
		}
		else {
			key.setOptionalAltIndexTenantIdValue( *AltIndexTenantId );
		}
		if( AltIndexId == NULL ) {
			key.setOptionalAltIndexIdNull();
		}
		else {
			key.setOptionalAltIndexIdValue( *AltIndexId );
		}
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		if( indexByAltIndexIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByAltIndexIdx = indexByAltIndexIdx->find( key );
		if( searchIndexByAltIndexIdx != indexByAltIndexIdx->end() ) {
			dict = searchIndexByAltIndexIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTableObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamTableBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTableObj*> CFBamTableTableObj::readCachedTableByQualTableIdx( const int64_t* QualifyingTenantId,
			const int64_t* QualifyingTableId )
	{
		static const std::string S_ProcName( "readCachedTableByQualTableIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTableObj*> arr;
		cfbam::CFBamTableByQualTableIdxKey key;
		if( QualifyingTenantId == NULL ) {
			key.setOptionalQualifyingTenantIdNull();
		}
		else {
			key.setOptionalQualifyingTenantIdValue( *QualifyingTenantId );
		}
		if( QualifyingTableId == NULL ) {
			key.setOptionalQualifyingTableIdNull();
		}
		else {
			key.setOptionalQualifyingTableIdValue( *QualifyingTableId );
		}
		std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* dict;
		if( indexByQualTableIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByQualTableIdx = indexByQualTableIdx->find( key );
		if( searchIndexByQualTableIdx != indexByQualTableIdx->end() ) {
			dict = searchIndexByQualTableIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTableObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamTableBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::readCachedTableByLookupUNameIdx( const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedTableByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamTableByUNameIdxKey,
				cfbam::ICFBamTableObj*>();
		}
		cfbam::CFBamTableByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		key.setRequiredName( Name );
		cfbam::ICFBamTableObj* obj = NULL;
		cfbam::ICFBamTableObj* realized = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamTableBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfbam::ICFBamTableObj* CFBamTableTableObj::updateTable( cfbam::ICFBamTableEditObj* Obj ) {
		static const std::string S_ProcName( "updateTable" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTableObj* obj = dynamic_cast<cfbam::ICFBamTableObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamTableBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->updateTable( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamTableBuff*>( Obj->getTableBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamTableObj*>( dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamTableObj*>( obj->realize() );
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

	void CFBamTableTableObj::deleteTable( cfbam::ICFBamTableEditObj* Obj ) {
		cfbam::ICFBamTableObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->deleteTable( schema->getAuthorization(),
			obj->getTableBuff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamTableTableObj::deleteTableByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamScopePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamTableObj* obj = readTable( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamTableEditObj* editObj = dynamic_cast<cfbam::ICFBamTableEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamTableEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamTableTableObj::deleteTableByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->deleteTableByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFBamTableTableObj::deleteTableBySchemaDefIdx( const int64_t TenantId,
			const int64_t SchemaDefId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->deleteTableBySchemaDefIdx( schema->getAuthorization(),
				TenantId,
				SchemaDefId );
		deepDisposeBySchemaDefIdx( TenantId,
			SchemaDefId );
	}

	void CFBamTableTableObj::deleteTableByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->deleteTableByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
		deepDisposeByDefSchemaIdx( DefSchemaTenantId,
			DefSchemaId );
	}

	void CFBamTableTableObj::deleteTableByUNameIdx( const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamTableByUNameIdxKey,
				cfbam::ICFBamTableObj*>();
		}
		cfbam::CFBamTableByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		key.setRequiredName( Name );
		cfbam::ICFBamTableObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->deleteTableByUNameIdx( schema->getAuthorization(),
				TenantId,
				SchemaDefId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->deleteTableByUNameIdx( schema->getAuthorization(),
				TenantId,
				SchemaDefId,
				Name );
		}
		deepDisposeByUNameIdx( TenantId,
			SchemaDefId,
			Name );
	}

	void CFBamTableTableObj::deleteTableBySchemaCdIdx( const int64_t TenantId,
			const int64_t SchemaDefId,
			const std::string& TableClassCode )
	{
		if( indexBySchemaCdIdx == NULL ) {
			indexBySchemaCdIdx = new std::map< cfbam::CFBamTableBySchemaCdIdxKey,
				cfbam::ICFBamTableObj*>();
		}
		cfbam::CFBamTableBySchemaCdIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		key.setRequiredTableClassCode( TableClassCode );
		cfbam::ICFBamTableObj* obj = NULL;
		auto searchIndexBySchemaCdIdx = indexBySchemaCdIdx->find( key );
		if( searchIndexBySchemaCdIdx != indexBySchemaCdIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->deleteTableBySchemaCdIdx( schema->getAuthorization(),
				TenantId,
				SchemaDefId,
				TableClassCode );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->deleteTableBySchemaCdIdx( schema->getAuthorization(),
				TenantId,
				SchemaDefId,
				TableClassCode );
		}
		deepDisposeBySchemaCdIdx( TenantId,
			SchemaDefId,
			TableClassCode );
	}

	void CFBamTableTableObj::deleteTableByPrimaryIndexIdx( const int64_t* PrimaryIndexTenantId,
			const int64_t* PrimaryIndexId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->deleteTableByPrimaryIndexIdx( schema->getAuthorization(),
				PrimaryIndexTenantId,
				PrimaryIndexId );
		deepDisposeByPrimaryIndexIdx( PrimaryIndexTenantId,
			PrimaryIndexId );
	}

	void CFBamTableTableObj::deleteTableByLookupIndexIdx( const int64_t* LookupIndexTenantId,
			const int64_t* LookupIndexId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->deleteTableByLookupIndexIdx( schema->getAuthorization(),
				LookupIndexTenantId,
				LookupIndexId );
		deepDisposeByLookupIndexIdx( LookupIndexTenantId,
			LookupIndexId );
	}

	void CFBamTableTableObj::deleteTableByAltIndexIdx( const int64_t* AltIndexTenantId,
			const int64_t* AltIndexId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->deleteTableByAltIndexIdx( schema->getAuthorization(),
				AltIndexTenantId,
				AltIndexId );
		deepDisposeByAltIndexIdx( AltIndexTenantId,
			AltIndexId );
	}

	void CFBamTableTableObj::deleteTableByQualTableIdx( const int64_t* QualifyingTenantId,
			const int64_t* QualifyingTableId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTable()->deleteTableByQualTableIdx( schema->getAuthorization(),
				QualifyingTenantId,
				QualifyingTableId );
		deepDisposeByQualTableIdx( QualifyingTenantId,
			QualifyingTableId );
	}

	void CFBamTableTableObj::reallyDetachFromIndexesTable( cfbam::ICFBamTableObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesTable" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamTableObj* obj = Obj;
		cfbam::CFBamScopePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamTableObj* existingObj = searchMembers->second;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexBySchemaDefIdx != NULL ) {
				cfbam::CFBamTableBySchemaDefIdxKey keySchemaDefIdx;
				keySchemaDefIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keySchemaDefIdx.setRequiredSchemaDefId( obj->getRequiredSchemaDefId() );
				auto searchSchemaDefIdx = indexBySchemaDefIdx->find( keySchemaDefIdx );
				if( searchSchemaDefIdx != indexBySchemaDefIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapSchemaDefIdx = searchSchemaDefIdx->second;
					if( mapSchemaDefIdx != NULL ) {
						auto removalProbe = mapSchemaDefIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapSchemaDefIdx->end() ) {
							mapSchemaDefIdx->erase( removalProbe );
							if( mapSchemaDefIdx->empty() ) {
								delete mapSchemaDefIdx;
								mapSchemaDefIdx = NULL;
								indexBySchemaDefIdx->erase( searchSchemaDefIdx );
							}
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamTableByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
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
				cfbam::CFBamTableByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyUNameIdx.setRequiredSchemaDefId( obj->getRequiredSchemaDefId() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexBySchemaCdIdx != NULL ) {
				cfbam::CFBamTableBySchemaCdIdxKey keySchemaCdIdx;
				keySchemaCdIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keySchemaCdIdx.setRequiredSchemaDefId( obj->getRequiredSchemaDefId() );
				keySchemaCdIdx.setRequiredTableClassCode( obj->getRequiredTableClassCode() );
				auto removalProbe = indexBySchemaCdIdx->find( keySchemaCdIdx );
				if( removalProbe != indexBySchemaCdIdx->end() ) {
					indexBySchemaCdIdx->erase( removalProbe );
				}
			}

			if( indexByPrimaryIndexIdx != NULL ) {
				cfbam::CFBamTableByPrimaryIndexIdxKey keyPrimaryIndexIdx;
				if( obj->isOptionalPrimaryIndexTenantIdNull() ) {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdNull();
				}
				else {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexTenantIdValue( obj->getOptionalPrimaryIndexTenantIdValue() );
				}
				if( obj->isOptionalPrimaryIndexIdNull() ) {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexIdNull();
				}
				else {
					keyPrimaryIndexIdx.setOptionalPrimaryIndexIdValue( obj->getOptionalPrimaryIndexIdValue() );
				}
				auto searchPrimaryIndexIdx = indexByPrimaryIndexIdx->find( keyPrimaryIndexIdx );
				if( searchPrimaryIndexIdx != indexByPrimaryIndexIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapPrimaryIndexIdx = searchPrimaryIndexIdx->second;
					if( mapPrimaryIndexIdx != NULL ) {
						auto removalProbe = mapPrimaryIndexIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapPrimaryIndexIdx->end() ) {
							mapPrimaryIndexIdx->erase( removalProbe );
							if( mapPrimaryIndexIdx->empty() ) {
								delete mapPrimaryIndexIdx;
								mapPrimaryIndexIdx = NULL;
								indexByPrimaryIndexIdx->erase( searchPrimaryIndexIdx );
							}
						}
					}
				}
			}

			if( indexByLookupIndexIdx != NULL ) {
				cfbam::CFBamTableByLookupIndexIdxKey keyLookupIndexIdx;
				if( obj->isOptionalLookupIndexTenantIdNull() ) {
					keyLookupIndexIdx.setOptionalLookupIndexTenantIdNull();
				}
				else {
					keyLookupIndexIdx.setOptionalLookupIndexTenantIdValue( obj->getOptionalLookupIndexTenantIdValue() );
				}
				if( obj->isOptionalLookupIndexIdNull() ) {
					keyLookupIndexIdx.setOptionalLookupIndexIdNull();
				}
				else {
					keyLookupIndexIdx.setOptionalLookupIndexIdValue( obj->getOptionalLookupIndexIdValue() );
				}
				auto searchLookupIndexIdx = indexByLookupIndexIdx->find( keyLookupIndexIdx );
				if( searchLookupIndexIdx != indexByLookupIndexIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapLookupIndexIdx = searchLookupIndexIdx->second;
					if( mapLookupIndexIdx != NULL ) {
						auto removalProbe = mapLookupIndexIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapLookupIndexIdx->end() ) {
							mapLookupIndexIdx->erase( removalProbe );
							if( mapLookupIndexIdx->empty() ) {
								delete mapLookupIndexIdx;
								mapLookupIndexIdx = NULL;
								indexByLookupIndexIdx->erase( searchLookupIndexIdx );
							}
						}
					}
				}
			}

			if( indexByAltIndexIdx != NULL ) {
				cfbam::CFBamTableByAltIndexIdxKey keyAltIndexIdx;
				if( obj->isOptionalAltIndexTenantIdNull() ) {
					keyAltIndexIdx.setOptionalAltIndexTenantIdNull();
				}
				else {
					keyAltIndexIdx.setOptionalAltIndexTenantIdValue( obj->getOptionalAltIndexTenantIdValue() );
				}
				if( obj->isOptionalAltIndexIdNull() ) {
					keyAltIndexIdx.setOptionalAltIndexIdNull();
				}
				else {
					keyAltIndexIdx.setOptionalAltIndexIdValue( obj->getOptionalAltIndexIdValue() );
				}
				auto searchAltIndexIdx = indexByAltIndexIdx->find( keyAltIndexIdx );
				if( searchAltIndexIdx != indexByAltIndexIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapAltIndexIdx = searchAltIndexIdx->second;
					if( mapAltIndexIdx != NULL ) {
						auto removalProbe = mapAltIndexIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapAltIndexIdx->end() ) {
							mapAltIndexIdx->erase( removalProbe );
							if( mapAltIndexIdx->empty() ) {
								delete mapAltIndexIdx;
								mapAltIndexIdx = NULL;
								indexByAltIndexIdx->erase( searchAltIndexIdx );
							}
						}
					}
				}
			}

			if( indexByQualTableIdx != NULL ) {
				cfbam::CFBamTableByQualTableIdxKey keyQualTableIdx;
				if( obj->isOptionalQualifyingTenantIdNull() ) {
					keyQualTableIdx.setOptionalQualifyingTenantIdNull();
				}
				else {
					keyQualTableIdx.setOptionalQualifyingTenantIdValue( obj->getOptionalQualifyingTenantIdValue() );
				}
				if( obj->isOptionalQualifyingTableIdNull() ) {
					keyQualTableIdx.setOptionalQualifyingTableIdNull();
				}
				else {
					keyQualTableIdx.setOptionalQualifyingTableIdValue( obj->getOptionalQualifyingTableIdValue() );
				}
				auto searchQualTableIdx = indexByQualTableIdx->find( keyQualTableIdx );
				if( searchQualTableIdx != indexByQualTableIdx->end() ) {
					std::map<cfbam::CFBamScopePKey, cfbam::ICFBamTableObj*>* mapQualTableIdx = searchQualTableIdx->second;
					if( mapQualTableIdx != NULL ) {
						auto removalProbe = mapQualTableIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapQualTableIdx->end() ) {
							mapQualTableIdx->erase( removalProbe );
							if( mapQualTableIdx->empty() ) {
								delete mapQualTableIdx;
								mapQualTableIdx = NULL;
								indexByQualTableIdx->erase( searchQualTableIdx );
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
