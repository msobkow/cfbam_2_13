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

	const std::string CFBamTokenTypeTableObj::CLASS_NAME( "CFBamTokenTypeTableObj" );
	const std::string CFBamTokenTypeTableObj::TABLE_NAME( "TokenType" );
	const std::string CFBamTokenTypeTableObj::TABLE_DBNAME( "tkntyp" );

	CFBamTokenTypeTableObj::CFBamTokenTypeTableObj() {
		schema = NULL;
		members = new std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>();
		allTokenType = NULL;
		indexByUNameIdx = new std::map< cfbam::CFBamValueByUNameIdxKey,
			cfbam::ICFBamTokenTypeObj*>();
		indexByValTentIdx = new std::map< cfbam::CFBamValueByValTentIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexByScopeIdx = new std::map< cfbam::CFBamValueByScopeIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamValueByDefSchemaIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexByPrevIdx = new std::map< cfbam::CFBamValueByPrevIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexByNextIdx = new std::map< cfbam::CFBamValueByNextIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexByContPrevIdx = new std::map< cfbam::CFBamValueByContPrevIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexByContNextIdx = new std::map< cfbam::CFBamValueByContNextIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexBySchemaIdx = new std::map< cfbam::CFBamTokenTypeBySchemaIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
	}

	CFBamTokenTypeTableObj::CFBamTokenTypeTableObj( cfbam::ICFBamSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>();
		allTokenType = NULL;
		indexByUNameIdx = new std::map< cfbam::CFBamValueByUNameIdxKey,
			cfbam::ICFBamTokenTypeObj*>();
		indexByValTentIdx = new std::map< cfbam::CFBamValueByValTentIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexByScopeIdx = new std::map< cfbam::CFBamValueByScopeIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexByDefSchemaIdx = new std::map< cfbam::CFBamValueByDefSchemaIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexByPrevIdx = new std::map< cfbam::CFBamValueByPrevIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexByNextIdx = new std::map< cfbam::CFBamValueByNextIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexByContPrevIdx = new std::map< cfbam::CFBamValueByContPrevIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexByContNextIdx = new std::map< cfbam::CFBamValueByContNextIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		indexBySchemaIdx = new std::map< cfbam::CFBamTokenTypeBySchemaIdxKey,
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
	}

	CFBamTokenTypeTableObj::~CFBamTokenTypeTableObj() {
		minimizeMemory();
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( indexByValTentIdx != NULL ) {
			delete indexByValTentIdx;
			indexByValTentIdx = NULL;
		}
		if( indexByScopeIdx != NULL ) {
			delete indexByScopeIdx;
			indexByScopeIdx = NULL;
		}
		if( indexByDefSchemaIdx != NULL ) {
			delete indexByDefSchemaIdx;
			indexByDefSchemaIdx = NULL;
		}
		if( indexByPrevIdx != NULL ) {
			delete indexByPrevIdx;
			indexByPrevIdx = NULL;
		}
		if( indexByNextIdx != NULL ) {
			delete indexByNextIdx;
			indexByNextIdx = NULL;
		}
		if( indexByContPrevIdx != NULL ) {
			delete indexByContPrevIdx;
			indexByContPrevIdx = NULL;
		}
		if( indexByContNextIdx != NULL ) {
			delete indexByContNextIdx;
			indexByContNextIdx = NULL;
		}
		if( indexBySchemaIdx != NULL ) {
			delete indexBySchemaIdx;
			indexBySchemaIdx = NULL;
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

	cfbam::ICFBamSchemaObj* CFBamTokenTypeTableObj::getSchema() {
		return( schema );
	}

	void CFBamTokenTypeTableObj::setSchema( cfbam::ICFBamSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamTokenTypeTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamTokenTypeTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamTokenTypeTableObj::getObjQualifyingClassCode() {
		return( &cfbam::CFBamSchemaDefBuff::CLASS_CODE );
	}


	void CFBamTokenTypeTableObj::minimizeMemory() {
		if( allTokenType != NULL ) {
			allTokenType->clear();
			delete allTokenType;
			allTokenType = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( indexByValTentIdx != NULL ) {
			std::map< cfbam::CFBamValueByValTentIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator iterByValTentIdx = indexByValTentIdx->begin();
			std::map< cfbam::CFBamValueByValTentIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator endByValTentIdx = indexByValTentIdx->end();
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* curByValTentIdx = NULL;
			while( iterByValTentIdx != endByValTentIdx ) {
				curByValTentIdx = iterByValTentIdx->second;
				if( curByValTentIdx != NULL ) {
					curByValTentIdx->clear();
					delete curByValTentIdx;
					curByValTentIdx = NULL;
					iterByValTentIdx->second = NULL;
				}
				iterByValTentIdx ++;
			}
			indexByValTentIdx->clear();
		}
		if( indexByScopeIdx != NULL ) {
			std::map< cfbam::CFBamValueByScopeIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator iterByScopeIdx = indexByScopeIdx->begin();
			std::map< cfbam::CFBamValueByScopeIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator endByScopeIdx = indexByScopeIdx->end();
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* curByScopeIdx = NULL;
			while( iterByScopeIdx != endByScopeIdx ) {
				curByScopeIdx = iterByScopeIdx->second;
				if( curByScopeIdx != NULL ) {
					curByScopeIdx->clear();
					delete curByScopeIdx;
					curByScopeIdx = NULL;
					iterByScopeIdx->second = NULL;
				}
				iterByScopeIdx ++;
			}
			indexByScopeIdx->clear();
		}
		if( indexByDefSchemaIdx != NULL ) {
			std::map< cfbam::CFBamValueByDefSchemaIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator iterByDefSchemaIdx = indexByDefSchemaIdx->begin();
			std::map< cfbam::CFBamValueByDefSchemaIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator endByDefSchemaIdx = indexByDefSchemaIdx->end();
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* curByDefSchemaIdx = NULL;
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
		if( indexByPrevIdx != NULL ) {
			std::map< cfbam::CFBamValueByPrevIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator iterByPrevIdx = indexByPrevIdx->begin();
			std::map< cfbam::CFBamValueByPrevIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator endByPrevIdx = indexByPrevIdx->end();
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* curByPrevIdx = NULL;
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
			std::map< cfbam::CFBamValueByNextIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator iterByNextIdx = indexByNextIdx->begin();
			std::map< cfbam::CFBamValueByNextIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator endByNextIdx = indexByNextIdx->end();
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* curByNextIdx = NULL;
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
		if( indexByContPrevIdx != NULL ) {
			std::map< cfbam::CFBamValueByContPrevIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator iterByContPrevIdx = indexByContPrevIdx->begin();
			std::map< cfbam::CFBamValueByContPrevIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator endByContPrevIdx = indexByContPrevIdx->end();
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* curByContPrevIdx = NULL;
			while( iterByContPrevIdx != endByContPrevIdx ) {
				curByContPrevIdx = iterByContPrevIdx->second;
				if( curByContPrevIdx != NULL ) {
					curByContPrevIdx->clear();
					delete curByContPrevIdx;
					curByContPrevIdx = NULL;
					iterByContPrevIdx->second = NULL;
				}
				iterByContPrevIdx ++;
			}
			indexByContPrevIdx->clear();
		}
		if( indexByContNextIdx != NULL ) {
			std::map< cfbam::CFBamValueByContNextIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator iterByContNextIdx = indexByContNextIdx->begin();
			std::map< cfbam::CFBamValueByContNextIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator endByContNextIdx = indexByContNextIdx->end();
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* curByContNextIdx = NULL;
			while( iterByContNextIdx != endByContNextIdx ) {
				curByContNextIdx = iterByContNextIdx->second;
				if( curByContNextIdx != NULL ) {
					curByContNextIdx->clear();
					delete curByContNextIdx;
					curByContNextIdx = NULL;
					iterByContNextIdx->second = NULL;
				}
				iterByContNextIdx ++;
			}
			indexByContNextIdx->clear();
		}
		if( indexBySchemaIdx != NULL ) {
			std::map< cfbam::CFBamTokenTypeBySchemaIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator iterBySchemaIdx = indexBySchemaIdx->begin();
			std::map< cfbam::CFBamTokenTypeBySchemaIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* >::iterator endBySchemaIdx = indexBySchemaIdx->end();
			std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* curBySchemaIdx = NULL;
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
		if( members != NULL ) {
			members->clear();
		}
	}

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::newInstance() {
		cfbam::ICFBamTokenTypeObj* inst = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( new CFBamTokenTypeObj( schema ) );
		return( inst );
	}

	cfbam::ICFBamTokenTypeEditObj* CFBamTokenTypeTableObj::newEditInstance( cfbam::ICFBamTokenTypeObj* orig ) {
		cfbam::ICFBamTokenTypeEditObj* edit = dynamic_cast<cfbam::ICFBamTokenTypeEditObj*>( new CFBamTokenTypeEditObj( orig ));
		return( edit );
	}

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::realizeTokenType( cfbam::ICFBamTokenTypeObj* Obj ) {
		static const std::string S_ProcName( "realizeTokenType" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamTokenTypeObj* obj = Obj;
		cfbam::ICFBamTokenTypeObj* existingObj = NULL;
		cfbam::CFBamValuePKey* pkey = obj->getPKey();
		cfbam::ICFBamTokenTypeObj* keepObj = NULL;
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
				cfbam::CFBamValueByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredScopeId( keepObj->getRequiredScopeId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByValTentIdx != NULL ) {
				cfbam::CFBamValueByValTentIdxKey keyValTentIdx;
				keyValTentIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchValTentIdx = indexByValTentIdx->find( keyValTentIdx );
				if( searchValTentIdx != indexByValTentIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapValTentIdx = searchValTentIdx->second;
					if( mapValTentIdx != NULL ) {
						auto removalProbe = mapValTentIdx->find( *pkey );
						if( removalProbe != mapValTentIdx->end() ) {
							mapValTentIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				cfbam::CFBamValueByScopeIdxKey keyScopeIdx;
				keyScopeIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyScopeIdx.setRequiredScopeId( keepObj->getRequiredScopeId() );
				auto searchScopeIdx = indexByScopeIdx->find( keyScopeIdx );
				if( searchScopeIdx != indexByScopeIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapScopeIdx = searchScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						auto removalProbe = mapScopeIdx->find( *pkey );
						if( removalProbe != mapScopeIdx->end() ) {
							mapScopeIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamValueByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						auto removalProbe = mapDefSchemaIdx->find( *pkey );
						if( removalProbe != mapDefSchemaIdx->end() ) {
							mapDefSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				cfbam::CFBamValueByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapPrevIdx = searchPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						auto removalProbe = mapPrevIdx->find( *pkey );
						if( removalProbe != mapPrevIdx->end() ) {
							mapPrevIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				cfbam::CFBamValueByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapNextIdx = searchNextIdx->second;
					if( mapNextIdx != NULL ) {
						auto removalProbe = mapNextIdx->find( *pkey );
						if( removalProbe != mapNextIdx->end() ) {
							mapNextIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByContPrevIdx != NULL ) {
				cfbam::CFBamValueByContPrevIdxKey keyContPrevIdx;
				keyContPrevIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyContPrevIdx.setRequiredScopeId( keepObj->getRequiredScopeId() );
				if( keepObj->isOptionalPrevIdNull() ) {
					keyContPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyContPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchContPrevIdx = indexByContPrevIdx->find( keyContPrevIdx );
				if( searchContPrevIdx != indexByContPrevIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapContPrevIdx = searchContPrevIdx->second;
					if( mapContPrevIdx != NULL ) {
						auto removalProbe = mapContPrevIdx->find( *pkey );
						if( removalProbe != mapContPrevIdx->end() ) {
							mapContPrevIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByContNextIdx != NULL ) {
				cfbam::CFBamValueByContNextIdxKey keyContNextIdx;
				keyContNextIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyContNextIdx.setRequiredScopeId( keepObj->getRequiredScopeId() );
				if( keepObj->isOptionalNextIdNull() ) {
					keyContNextIdx.setOptionalNextIdNull();
				}
				else {
					keyContNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchContNextIdx = indexByContNextIdx->find( keyContNextIdx );
				if( searchContNextIdx != indexByContNextIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapContNextIdx = searchContNextIdx->second;
					if( mapContNextIdx != NULL ) {
						auto removalProbe = mapContNextIdx->find( *pkey );
						if( removalProbe != mapContNextIdx->end() ) {
							mapContNextIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexBySchemaIdx != NULL ) {
				cfbam::CFBamTokenTypeBySchemaIdxKey keySchemaIdx;
				keySchemaIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySchemaIdx.setRequiredSchemaDefId( keepObj->getRequiredSchemaDefId() );
				auto searchSchemaIdx = indexBySchemaIdx->find( keySchemaIdx );
				if( searchSchemaIdx != indexBySchemaIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapSchemaIdx = searchSchemaIdx->second;
					if( mapSchemaIdx != NULL ) {
						auto removalProbe = mapSchemaIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapSchemaIdx->end() ) {
							mapSchemaIdx->erase( removalProbe );
						}
					}
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( dynamic_cast<cfbam::CFBamTokenDefTableObj*>( schema->getTokenDefTableObj() )->realizeTokenDef( Obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamTokenTypeObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamValueByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredScopeId( keepObj->getRequiredScopeId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamValueByUNameIdxKey, cfbam::ICFBamTokenTypeObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByValTentIdx != NULL ) {
				static const std::string S_AValTentIdxObj( "aValTentIdxObj" );
				cfbam::ICFBamTokenTypeObj* aValTentIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aValTentIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AValTentIdxObj );
				}
				cfbam::CFBamValueByValTentIdxKey keyValTentIdx;
				keyValTentIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByValTentIdx = indexByValTentIdx->find( keyValTentIdx );
				if( searchIndexByValTentIdx != indexByValTentIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapValTentIdx = searchIndexByValTentIdx->second;
					if( mapValTentIdx != NULL ) {
						mapValTentIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aValTentIdxObj ) );
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				static const std::string S_AScopeIdxObj( "aScopeIdxObj" );
				cfbam::ICFBamTokenTypeObj* aScopeIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aScopeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AScopeIdxObj );
				}
				cfbam::CFBamValueByScopeIdxKey keyScopeIdx;
				keyScopeIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyScopeIdx.setRequiredScopeId( keepObj->getRequiredScopeId() );
				auto searchIndexByScopeIdx = indexByScopeIdx->find( keyScopeIdx );
				if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapScopeIdx = searchIndexByScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						mapScopeIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aScopeIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamTokenTypeObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamValueByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				static const std::string S_APrevIdxObj( "aPrevIdxObj" );
				cfbam::ICFBamTokenTypeObj* aPrevIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevIdxObj );
				}
				cfbam::CFBamValueByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapPrevIdx = searchIndexByPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						mapPrevIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aPrevIdxObj ) );
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				static const std::string S_ANextIdxObj( "aNextIdxObj" );
				cfbam::ICFBamTokenTypeObj* aNextIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextIdxObj );
				}
				cfbam::CFBamValueByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapNextIdx = searchIndexByNextIdx->second;
					if( mapNextIdx != NULL ) {
						mapNextIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aNextIdxObj ) );
					}
				}
			}

			if( indexByContPrevIdx != NULL ) {
				static const std::string S_AContPrevIdxObj( "aContPrevIdxObj" );
				cfbam::ICFBamTokenTypeObj* aContPrevIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aContPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AContPrevIdxObj );
				}
				cfbam::CFBamValueByContPrevIdxKey keyContPrevIdx;
				keyContPrevIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyContPrevIdx.setRequiredScopeId( keepObj->getRequiredScopeId() );
				if( keepObj->isOptionalPrevIdNull() ) {
					keyContPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyContPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIndexByContPrevIdx = indexByContPrevIdx->find( keyContPrevIdx );
				if( searchIndexByContPrevIdx != indexByContPrevIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapContPrevIdx = searchIndexByContPrevIdx->second;
					if( mapContPrevIdx != NULL ) {
						mapContPrevIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aContPrevIdxObj ) );
					}
				}
			}

			if( indexByContNextIdx != NULL ) {
				static const std::string S_AContNextIdxObj( "aContNextIdxObj" );
				cfbam::ICFBamTokenTypeObj* aContNextIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aContNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AContNextIdxObj );
				}
				cfbam::CFBamValueByContNextIdxKey keyContNextIdx;
				keyContNextIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyContNextIdx.setRequiredScopeId( keepObj->getRequiredScopeId() );
				if( keepObj->isOptionalNextIdNull() ) {
					keyContNextIdx.setOptionalNextIdNull();
				}
				else {
					keyContNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIndexByContNextIdx = indexByContNextIdx->find( keyContNextIdx );
				if( searchIndexByContNextIdx != indexByContNextIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapContNextIdx = searchIndexByContNextIdx->second;
					if( mapContNextIdx != NULL ) {
						mapContNextIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aContNextIdxObj ) );
					}
				}
			}

			if( indexBySchemaIdx != NULL ) {
				static const std::string S_ASchemaIdxObj( "aSchemaIdxObj" );
				cfbam::ICFBamTokenTypeObj* aSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASchemaIdxObj );
				}
				cfbam::CFBamTokenTypeBySchemaIdxKey keySchemaIdx;
				keySchemaIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySchemaIdx.setRequiredSchemaDefId( keepObj->getRequiredSchemaDefId() );
				auto searchIndexBySchemaIdx = indexBySchemaIdx->find( keySchemaIdx );
				if( searchIndexBySchemaIdx != indexBySchemaIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapSchemaIdx = searchIndexBySchemaIdx->second;
					if( mapSchemaIdx != NULL ) {
						mapSchemaIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aSchemaIdxObj ) );
					}
				}
			}

			if( allTokenType != NULL ) {
				allTokenType->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( dynamic_cast<cfbam::CFBamTokenDefTableObj*>( schema->getTokenDefTableObj() )->realizeTokenDef( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfbam::ICFBamTokenTypeObj* aUNameIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfbam::CFBamValueByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredScopeId( keepObj->getRequiredScopeId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfbam::CFBamValueByUNameIdxKey, cfbam::ICFBamTokenTypeObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( indexByValTentIdx != NULL ) {
				static const std::string S_AValTentIdxObj( "aValTentIdxObj" );
				cfbam::ICFBamTokenTypeObj* aValTentIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aValTentIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AValTentIdxObj );
				}
				cfbam::CFBamValueByValTentIdxKey keyValTentIdx;
				keyValTentIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByValTentIdx = indexByValTentIdx->find( keyValTentIdx );
				if( searchIndexByValTentIdx != indexByValTentIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapValTentIdx = searchIndexByValTentIdx->second;
					if( mapValTentIdx != NULL ) {
						mapValTentIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aValTentIdxObj ) );
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				static const std::string S_AScopeIdxObj( "aScopeIdxObj" );
				cfbam::ICFBamTokenTypeObj* aScopeIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aScopeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AScopeIdxObj );
				}
				cfbam::CFBamValueByScopeIdxKey keyScopeIdx;
				keyScopeIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyScopeIdx.setRequiredScopeId( keepObj->getRequiredScopeId() );
				auto searchIndexByScopeIdx = indexByScopeIdx->find( keyScopeIdx );
				if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapScopeIdx = searchIndexByScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						mapScopeIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aScopeIdxObj ) );
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				static const std::string S_ADefSchemaIdxObj( "aDefSchemaIdxObj" );
				cfbam::ICFBamTokenTypeObj* aDefSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aDefSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefSchemaIdxObj );
				}
				cfbam::CFBamValueByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapDefSchemaIdx = searchIndexByDefSchemaIdx->second;
					if( mapDefSchemaIdx != NULL ) {
						mapDefSchemaIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aDefSchemaIdxObj ) );
					}
				}
			}

			if( indexByPrevIdx != NULL ) {
				static const std::string S_APrevIdxObj( "aPrevIdxObj" );
				cfbam::ICFBamTokenTypeObj* aPrevIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevIdxObj );
				}
				cfbam::CFBamValueByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapPrevIdx = searchIndexByPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						mapPrevIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aPrevIdxObj ) );
					}
				}
			}

			if( indexByNextIdx != NULL ) {
				static const std::string S_ANextIdxObj( "aNextIdxObj" );
				cfbam::ICFBamTokenTypeObj* aNextIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextIdxObj );
				}
				cfbam::CFBamValueByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapNextIdx = searchIndexByNextIdx->second;
					if( mapNextIdx != NULL ) {
						mapNextIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aNextIdxObj ) );
					}
				}
			}

			if( indexByContPrevIdx != NULL ) {
				static const std::string S_AContPrevIdxObj( "aContPrevIdxObj" );
				cfbam::ICFBamTokenTypeObj* aContPrevIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aContPrevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AContPrevIdxObj );
				}
				cfbam::CFBamValueByContPrevIdxKey keyContPrevIdx;
				keyContPrevIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyContPrevIdx.setRequiredScopeId( keepObj->getRequiredScopeId() );
				if( keepObj->isOptionalPrevIdNull() ) {
					keyContPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyContPrevIdx.setOptionalPrevIdValue( keepObj->getOptionalPrevIdValue() );
				}
				auto searchIndexByContPrevIdx = indexByContPrevIdx->find( keyContPrevIdx );
				if( searchIndexByContPrevIdx != indexByContPrevIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapContPrevIdx = searchIndexByContPrevIdx->second;
					if( mapContPrevIdx != NULL ) {
						mapContPrevIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aContPrevIdxObj ) );
					}
				}
			}

			if( indexByContNextIdx != NULL ) {
				static const std::string S_AContNextIdxObj( "aContNextIdxObj" );
				cfbam::ICFBamTokenTypeObj* aContNextIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aContNextIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AContNextIdxObj );
				}
				cfbam::CFBamValueByContNextIdxKey keyContNextIdx;
				keyContNextIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyContNextIdx.setRequiredScopeId( keepObj->getRequiredScopeId() );
				if( keepObj->isOptionalNextIdNull() ) {
					keyContNextIdx.setOptionalNextIdNull();
				}
				else {
					keyContNextIdx.setOptionalNextIdValue( keepObj->getOptionalNextIdValue() );
				}
				auto searchIndexByContNextIdx = indexByContNextIdx->find( keyContNextIdx );
				if( searchIndexByContNextIdx != indexByContNextIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapContNextIdx = searchIndexByContNextIdx->second;
					if( mapContNextIdx != NULL ) {
						mapContNextIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aContNextIdxObj ) );
					}
				}
			}

			if( indexBySchemaIdx != NULL ) {
				static const std::string S_ASchemaIdxObj( "aSchemaIdxObj" );
				cfbam::ICFBamTokenTypeObj* aSchemaIdxObj =
					dynamic_cast<cfbam::ICFBamTokenTypeObj*>( keepObj );
				if( aSchemaIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASchemaIdxObj );
				}
				cfbam::CFBamTokenTypeBySchemaIdxKey keySchemaIdx;
				keySchemaIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySchemaIdx.setRequiredSchemaDefId( keepObj->getRequiredSchemaDefId() );
				auto searchIndexBySchemaIdx = indexBySchemaIdx->find( keySchemaIdx );
				if( searchIndexBySchemaIdx != indexBySchemaIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapSchemaIdx = searchIndexBySchemaIdx->second;
					if( mapSchemaIdx != NULL ) {
						mapSchemaIdx->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), aSchemaIdxObj ) );
					}
				}
			}

			if( allTokenType != NULL ) {
				allTokenType->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFBamTokenTypeTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfbam::ICFBamTokenTypeObj*> list;
		cfbam::ICFBamTokenTypeObj* existingObj = readCachedTokenTypeByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamTokenTypeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->reallyDeepDisposeTokenType( dynamic_cast<cfbam::ICFBamTokenTypeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTokenTypeTableObj::deepDisposeByUNameIdx( const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfbam::ICFBamTokenTypeObj*> list;
		cfbam::ICFBamTokenTypeObj* existingObj = readCachedTokenTypeByUNameIdx( TenantId,
				ScopeId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfbam::ICFBamTokenTypeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->reallyDeepDisposeTokenType( dynamic_cast<cfbam::ICFBamTokenTypeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTokenTypeTableObj::deepDisposeByValTentIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByValTentIdx" );
		std::vector<cfbam::ICFBamTokenTypeObj*> list;
		std::vector<cfbam::ICFBamTokenTypeObj*> matchesFound = readCachedTokenTypeByValTentIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTokenTypeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->reallyDeepDisposeTokenType( dynamic_cast<cfbam::ICFBamTokenTypeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTokenTypeTableObj::deepDisposeByScopeIdx( const int64_t TenantId,
			const int64_t ScopeId ) {
		static const std::string S_ProcName( "deepDisposeByScopeIdx" );
		std::vector<cfbam::ICFBamTokenTypeObj*> list;
		std::vector<cfbam::ICFBamTokenTypeObj*> matchesFound = readCachedTokenTypeByScopeIdx( TenantId,
				ScopeId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTokenTypeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->reallyDeepDisposeTokenType( dynamic_cast<cfbam::ICFBamTokenTypeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTokenTypeTableObj::deepDisposeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId ) {
		static const std::string S_ProcName( "deepDisposeByDefSchemaIdx" );
		std::vector<cfbam::ICFBamTokenTypeObj*> list;
		std::vector<cfbam::ICFBamTokenTypeObj*> matchesFound = readCachedTokenTypeByDefSchemaIdx( DefSchemaTenantId,
				DefSchemaId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTokenTypeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->reallyDeepDisposeTokenType( dynamic_cast<cfbam::ICFBamTokenTypeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTokenTypeTableObj::deepDisposeByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId ) {
		static const std::string S_ProcName( "deepDisposeByPrevIdx" );
		std::vector<cfbam::ICFBamTokenTypeObj*> list;
		std::vector<cfbam::ICFBamTokenTypeObj*> matchesFound = readCachedTokenTypeByPrevIdx( PrevTenantId,
				PrevId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTokenTypeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->reallyDeepDisposeTokenType( dynamic_cast<cfbam::ICFBamTokenTypeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTokenTypeTableObj::deepDisposeByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId ) {
		static const std::string S_ProcName( "deepDisposeByNextIdx" );
		std::vector<cfbam::ICFBamTokenTypeObj*> list;
		std::vector<cfbam::ICFBamTokenTypeObj*> matchesFound = readCachedTokenTypeByNextIdx( NextTenantId,
				NextId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTokenTypeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->reallyDeepDisposeTokenType( dynamic_cast<cfbam::ICFBamTokenTypeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTokenTypeTableObj::deepDisposeByContPrevIdx( const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId ) {
		static const std::string S_ProcName( "deepDisposeByContPrevIdx" );
		std::vector<cfbam::ICFBamTokenTypeObj*> list;
		std::vector<cfbam::ICFBamTokenTypeObj*> matchesFound = readCachedTokenTypeByContPrevIdx( TenantId,
				ScopeId,
				PrevId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTokenTypeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->reallyDeepDisposeTokenType( dynamic_cast<cfbam::ICFBamTokenTypeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTokenTypeTableObj::deepDisposeByContNextIdx( const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId ) {
		static const std::string S_ProcName( "deepDisposeByContNextIdx" );
		std::vector<cfbam::ICFBamTokenTypeObj*> list;
		std::vector<cfbam::ICFBamTokenTypeObj*> matchesFound = readCachedTokenTypeByContNextIdx( TenantId,
				ScopeId,
				NextId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTokenTypeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->reallyDeepDisposeTokenType( dynamic_cast<cfbam::ICFBamTokenTypeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTokenTypeTableObj::reallyDeepDisposeTokenType( cfbam::ICFBamTokenTypeObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeTokenType" );

		if( Obj == NULL ) {
			return;
		}

		cfbam::ICFBamTokenTypeObj* obj = Obj;
		
		dynamic_cast<cfbam::CFBamTableColTableObj*>( schema->getTableColTableObj() )->deepDisposeByDataIdx( obj->getRequiredTenantIdReference(),
			obj->getRequiredIdReference() );
		dynamic_cast<cfbam::CFBamIndexColTableObj*>( schema->getIndexColTableObj() )->deepDisposeByColIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->reallyDetachFromIndexesTokenType( dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj ) );
		}

		dynamic_cast<cfbam::CFBamTokenDefTableObj*>( schema->getTokenDefTableObj() )->reallyDeepDisposeTokenDef( dynamic_cast<cfbam::ICFBamTokenDefObj*>( obj ) );
	}

	void CFBamTokenTypeTableObj::deepDisposeBySchemaIdx( const int64_t TenantId,
			const int64_t SchemaDefId ) {
		static const std::string S_ProcName( "deepDisposeBySchemaIdx" );
		std::vector<cfbam::ICFBamTokenTypeObj*> list;
		std::vector<cfbam::ICFBamTokenTypeObj*> matchesFound = readCachedTokenTypeBySchemaIdx( TenantId,
				SchemaDefId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfbam::ICFBamTokenTypeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfbam::CFBamTokenTypeBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->reallyDeepDisposeTokenType( dynamic_cast<cfbam::ICFBamTokenTypeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::createTokenType( cfbam::ICFBamTokenTypeEditObj* Obj ) {
		static const std::string S_ProcName( "createTokenType" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTokenTypeObj* obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamTokenTypeBuff* buff = dynamic_cast<cfbam::CFBamTokenTypeBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->createTokenType(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfbam::CFBamTokenTypeBuff*>( cloneable ) );
			obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
			if( obj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Obj );
			}
		cfbam::ICFBamValueObj* prev = obj->getOptionalLookupPrev();
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

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::readTokenType( cfbam::CFBamValuePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTokenType" );
		cfbam::ICFBamTokenTypeObj* obj = NULL;
		cfbam::ICFBamTokenTypeObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamTokenTypeBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
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

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::lockTokenType( cfbam::CFBamValuePKey* pkey ) {
		static const std::string S_ProcName( "lockTokenType" );
		cfbam::ICFBamTokenTypeObj* locked = NULL;
		cfbam::CFBamTokenTypeBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readAllTokenType( bool forceRead ) {
		static const std::string S_ProcName( "readAllTokenType" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTokenTypeObj* realized = NULL;
		if( forceRead || ( allTokenType == NULL ) ) {
			std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* map = new std::map<cfbam::CFBamValuePKey,cfbam::ICFBamTokenTypeObj*>();
			allTokenType = map;
			std::TCFLibOwningVector<cfbam::CFBamTokenTypeBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->readAllDerived( schema->getAuthorization() );
			cfbam::CFBamTokenTypeBuff* buff = NULL;
			cfbam::ICFBamTokenTypeObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allTokenType->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allTokenType->size();
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		auto valIter = allTokenType->begin();
		size_t idx = 0;
		while( valIter != allTokenType->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::readTokenTypeByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readTokenTypeByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamValuePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamTokenTypeObj* obj = readTokenType( &pkey, forceRead );
		return( obj );
	}

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::readTokenTypeByUNameIdx( const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readTokenTypeByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamValueByUNameIdxKey,
				cfbam::ICFBamTokenTypeObj*>();
		}
		cfbam::CFBamValueByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		key.setRequiredName( Name );
		cfbam::ICFBamTokenTypeObj* obj = NULL;
		cfbam::ICFBamTokenTypeObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfbam::CFBamValueBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableValue()->readDerivedByUNameIdx( schema->getAuthorization(),
				TenantId,
				ScopeId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfbam::CFBamValueByUNameIdxKey, cfbam::ICFBamTokenTypeObj*>::value_type( key, dynamic_cast<cfbam::ICFBamTokenTypeObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readTokenTypeByValTentIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTokenTypeByValTentIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamValueByValTentIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* oldDict;
		if( indexByValTentIdx == NULL ) {
			indexByValTentIdx = new std::map< cfbam::CFBamValueByValTentIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		}
		auto searchIndexByValTentIdx = indexByValTentIdx->find( key );
		if( searchIndexByValTentIdx != indexByValTentIdx->end() ) {
			oldDict = searchIndexByValTentIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>();
			cfbam::ICFBamValueObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableValue()->readDerivedByValTentIdx( schema->getAuthorization(),
				TenantId );
			cfbam::CFBamValueBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>(
					dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTokenTypeObj* realized = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByValTentIdx->erase( searchIndexByValTentIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByValTentIdx->insert( std::map< cfbam::CFBamValueByValTentIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readTokenTypeByScopeIdx( const int64_t TenantId,
			const int64_t ScopeId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTokenTypeByScopeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamValueByScopeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* oldDict;
		if( indexByScopeIdx == NULL ) {
			indexByScopeIdx = new std::map< cfbam::CFBamValueByScopeIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		}
		auto searchIndexByScopeIdx = indexByScopeIdx->find( key );
		if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
			oldDict = searchIndexByScopeIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>();
			cfbam::ICFBamValueObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableValue()->readDerivedByScopeIdx( schema->getAuthorization(),
				TenantId,
				ScopeId );
			cfbam::CFBamValueBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>(
					dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTokenTypeObj* realized = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByScopeIdx->erase( searchIndexByScopeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByScopeIdx->insert( std::map< cfbam::CFBamValueByScopeIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readTokenTypeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTokenTypeByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamValueByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* oldDict;
		if( indexByDefSchemaIdx == NULL ) {
			indexByDefSchemaIdx = new std::map< cfbam::CFBamValueByDefSchemaIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
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
			dict = new std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>();
			cfbam::ICFBamValueObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableValue()->readDerivedByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
			cfbam::CFBamValueBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>(
					dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTokenTypeObj* realized = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDefSchemaIdx->erase( searchIndexByDefSchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDefSchemaIdx->insert( std::map< cfbam::CFBamValueByDefSchemaIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readTokenTypeByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTokenTypeByPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamValueByPrevIdxKey key;
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
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* oldDict;
		if( indexByPrevIdx == NULL ) {
			indexByPrevIdx = new std::map< cfbam::CFBamValueByPrevIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
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
			dict = new std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>();
			cfbam::ICFBamValueObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableValue()->readDerivedByPrevIdx( schema->getAuthorization(),
				PrevTenantId,
				PrevId );
			cfbam::CFBamValueBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>(
					dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTokenTypeObj* realized = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByPrevIdx->erase( searchIndexByPrevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByPrevIdx->insert( std::map< cfbam::CFBamValueByPrevIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readTokenTypeByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTokenTypeByNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamValueByNextIdxKey key;
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
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* oldDict;
		if( indexByNextIdx == NULL ) {
			indexByNextIdx = new std::map< cfbam::CFBamValueByNextIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
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
			dict = new std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>();
			cfbam::ICFBamValueObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableValue()->readDerivedByNextIdx( schema->getAuthorization(),
				NextTenantId,
				NextId );
			cfbam::CFBamValueBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>(
					dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTokenTypeObj* realized = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByNextIdx->erase( searchIndexByNextIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByNextIdx->insert( std::map< cfbam::CFBamValueByNextIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readTokenTypeByContPrevIdx( const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTokenTypeByContPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamValueByContPrevIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* oldDict;
		if( indexByContPrevIdx == NULL ) {
			indexByContPrevIdx = new std::map< cfbam::CFBamValueByContPrevIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		}
		auto searchIndexByContPrevIdx = indexByContPrevIdx->find( key );
		if( searchIndexByContPrevIdx != indexByContPrevIdx->end() ) {
			oldDict = searchIndexByContPrevIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>();
			cfbam::ICFBamValueObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableValue()->readDerivedByContPrevIdx( schema->getAuthorization(),
				TenantId,
				ScopeId,
				PrevId );
			cfbam::CFBamValueBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>(
					dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTokenTypeObj* realized = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByContPrevIdx->erase( searchIndexByContPrevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByContPrevIdx->insert( std::map< cfbam::CFBamValueByContPrevIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readTokenTypeByContNextIdx( const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTokenTypeByContNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamValueByContNextIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* oldDict;
		if( indexByContNextIdx == NULL ) {
			indexByContNextIdx = new std::map< cfbam::CFBamValueByContNextIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
		}
		auto searchIndexByContNextIdx = indexByContNextIdx->find( key );
		if( searchIndexByContNextIdx != indexByContNextIdx->end() ) {
			oldDict = searchIndexByContNextIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>();
			cfbam::ICFBamValueObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamValueBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableValue()->readDerivedByContNextIdx( schema->getAuthorization(),
				TenantId,
				ScopeId,
				NextId );
			cfbam::CFBamValueBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>(
					dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTokenTypeObj* realized = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByContNextIdx->erase( searchIndexByContNextIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByContNextIdx->insert( std::map< cfbam::CFBamValueByContNextIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readTokenTypeBySchemaIdx( const int64_t TenantId,
			const int64_t SchemaDefId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTokenTypeBySchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamTokenTypeBySchemaIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* oldDict;
		if( indexBySchemaIdx == NULL ) {
			indexBySchemaIdx = new std::map< cfbam::CFBamTokenTypeBySchemaIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>*>();
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
			dict = new std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>();
			cfbam::ICFBamTokenTypeObj* obj;
			std::TCFLibOwningVector<cfbam::CFBamTokenTypeBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->readDerivedBySchemaIdx( schema->getAuthorization(),
				TenantId,
				SchemaDefId );
			cfbam::CFBamTokenTypeBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>(
					dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfbam::ICFBamTokenTypeObj* realized = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexBySchemaIdx->erase( searchIndexBySchemaIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexBySchemaIdx->insert( std::map< cfbam::CFBamTokenTypeBySchemaIdxKey,
				std::map< cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::readCachedTokenType( cfbam::CFBamValuePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTokenType" );
		cfbam::ICFBamTokenTypeObj* obj = NULL;
		cfbam::ICFBamTokenTypeObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::readCachedTokenTypeByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedTokenTypeByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfbam::CFBamValuePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamTokenTypeObj* obj = readCachedTokenType( &pkey );
		return( obj );
	}

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::readCachedTokenTypeByUNameIdx( const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedTokenTypeByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamValueByUNameIdxKey,
				cfbam::ICFBamTokenTypeObj*>();
		}
		cfbam::CFBamValueByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		key.setRequiredName( Name );
		cfbam::ICFBamTokenTypeObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamValueBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readCachedTokenTypeByValTentIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedTokenTypeByValTentIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		cfbam::CFBamValueByValTentIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		if( indexByValTentIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByValTentIdx = indexByValTentIdx->find( key );
		if( searchIndexByValTentIdx != indexByValTentIdx->end() ) {
			dict = searchIndexByValTentIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTokenTypeObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTokenTypeObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamValueBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readCachedTokenTypeByScopeIdx( const int64_t TenantId,
			const int64_t ScopeId )
	{
		static const std::string S_ProcName( "readCachedTokenTypeByScopeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		cfbam::CFBamValueByScopeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		if( indexByScopeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByScopeIdx = indexByScopeIdx->find( key );
		if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
			dict = searchIndexByScopeIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTokenTypeObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTokenTypeObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamValueBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readCachedTokenTypeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		static const std::string S_ProcName( "readCachedTokenTypeByDefSchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		cfbam::CFBamValueByDefSchemaIdxKey key;
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
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		if( indexByDefSchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDefSchemaIdx = indexByDefSchemaIdx->find( key );
		if( searchIndexByDefSchemaIdx != indexByDefSchemaIdx->end() ) {
			dict = searchIndexByDefSchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTokenTypeObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTokenTypeObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamValueBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readCachedTokenTypeByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readCachedTokenTypeByPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		cfbam::CFBamValueByPrevIdxKey key;
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
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		if( indexByPrevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByPrevIdx = indexByPrevIdx->find( key );
		if( searchIndexByPrevIdx != indexByPrevIdx->end() ) {
			dict = searchIndexByPrevIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTokenTypeObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTokenTypeObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamValueBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readCachedTokenTypeByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readCachedTokenTypeByNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		cfbam::CFBamValueByNextIdxKey key;
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
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		if( indexByNextIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByNextIdx = indexByNextIdx->find( key );
		if( searchIndexByNextIdx != indexByNextIdx->end() ) {
			dict = searchIndexByNextIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTokenTypeObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTokenTypeObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamValueBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readCachedTokenTypeByContPrevIdx( const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId )
	{
		static const std::string S_ProcName( "readCachedTokenTypeByContPrevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		cfbam::CFBamValueByContPrevIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		if( PrevId == NULL ) {
			key.setOptionalPrevIdNull();
		}
		else {
			key.setOptionalPrevIdValue( *PrevId );
		}
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		if( indexByContPrevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByContPrevIdx = indexByContPrevIdx->find( key );
		if( searchIndexByContPrevIdx != indexByContPrevIdx->end() ) {
			dict = searchIndexByContPrevIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTokenTypeObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTokenTypeObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamValueBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readCachedTokenTypeByContNextIdx( const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId )
	{
		static const std::string S_ProcName( "readCachedTokenTypeByContNextIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		cfbam::CFBamValueByContNextIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		if( NextId == NULL ) {
			key.setOptionalNextIdNull();
		}
		else {
			key.setOptionalNextIdValue( *NextId );
		}
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		if( indexByContNextIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByContNextIdx = indexByContNextIdx->find( key );
		if( searchIndexByContNextIdx != indexByContNextIdx->end() ) {
			dict = searchIndexByContNextIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTokenTypeObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTokenTypeObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamValueBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfbam::ICFBamTokenTypeObj*> CFBamTokenTypeTableObj::readCachedTokenTypeBySchemaIdx( const int64_t TenantId,
			const int64_t SchemaDefId )
	{
		static const std::string S_ProcName( "readCachedTokenTypeBySchemaIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfbam::ICFBamTokenTypeObj*> arr;
		cfbam::CFBamTokenTypeBySchemaIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredSchemaDefId( SchemaDefId );
		std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* dict;
		if( indexBySchemaIdx == NULL ) {
			return( arr );
		}
		auto searchIndexBySchemaIdx = indexBySchemaIdx->find( key );
		if( searchIndexBySchemaIdx != indexBySchemaIdx->end() ) {
			dict = searchIndexBySchemaIdx->second;
			size_t len = dict->size();
			std::vector<cfbam::ICFBamTokenTypeObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfbam::ICFBamTokenTypeObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfbam::CFBamTokenTypeBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::updateTokenType( cfbam::ICFBamTokenTypeEditObj* Obj ) {
		static const std::string S_ProcName( "updateTokenType" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfbam::ICFBamTokenTypeObj* obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( Obj->getOrig() );
		try {
			cfbam::CFBamTokenTypeBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->updateTokenType( schema->getAuthorization(),
				dynamic_cast<cfbam::CFBamTokenTypeBuff*>( Obj->getTokenTypeBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
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

	void CFBamTokenTypeTableObj::deleteTokenType( cfbam::ICFBamTokenTypeEditObj* Obj ) {
		cfbam::ICFBamTokenTypeObj* obj = Obj;
		cfbam::ICFBamValueObj* prev = obj->getOptionalLookupPrev();
		cfbam::ICFBamValueObj* next = obj->getOptionalLookupNext();
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->deleteTokenType( schema->getAuthorization(),
			obj->getTokenTypeBuff() );
		if( prev != NULL ) {
			prev->read( true );
		}
		if( next != NULL ) {
			next->read( true );
		}
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFBamTokenTypeTableObj::deleteTokenTypeByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfbam::CFBamValuePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfbam::ICFBamTokenTypeObj* obj = readTokenType( &pkey, true );
		if( obj != NULL ) {
			cfbam::ICFBamTokenTypeEditObj* editObj = dynamic_cast<cfbam::ICFBamTokenTypeEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfbam::ICFBamTokenTypeEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamTokenTypeTableObj::deleteTokenTypeByUNameIdx( const int64_t TenantId,
			const int64_t ScopeId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfbam::CFBamValueByUNameIdxKey,
				cfbam::ICFBamTokenTypeObj*>();
		}
		cfbam::CFBamValueByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredScopeId( ScopeId );
		key.setRequiredName( Name );
		cfbam::ICFBamTokenTypeObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->deleteTokenTypeByUNameIdx( schema->getAuthorization(),
				TenantId,
				ScopeId,
				Name );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->deleteTokenTypeByUNameIdx( schema->getAuthorization(),
				TenantId,
				ScopeId,
				Name );
		}
		deepDisposeByUNameIdx( TenantId,
			ScopeId,
			Name );
	}

	void CFBamTokenTypeTableObj::deleteTokenTypeByValTentIdx( const int64_t TenantId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->deleteTokenTypeByValTentIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByValTentIdx( TenantId );
	}

	void CFBamTokenTypeTableObj::deleteTokenTypeByScopeIdx( const int64_t TenantId,
			const int64_t ScopeId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->deleteTokenTypeByScopeIdx( schema->getAuthorization(),
				TenantId,
				ScopeId );
		deepDisposeByScopeIdx( TenantId,
			ScopeId );
	}

	void CFBamTokenTypeTableObj::deleteTokenTypeByDefSchemaIdx( const int64_t* DefSchemaTenantId,
			const int64_t* DefSchemaId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->deleteTokenTypeByDefSchemaIdx( schema->getAuthorization(),
				DefSchemaTenantId,
				DefSchemaId );
		deepDisposeByDefSchemaIdx( DefSchemaTenantId,
			DefSchemaId );
	}

	void CFBamTokenTypeTableObj::deleteTokenTypeByPrevIdx( const int64_t* PrevTenantId,
			const int64_t* PrevId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->deleteTokenTypeByPrevIdx( schema->getAuthorization(),
				PrevTenantId,
				PrevId );
		deepDisposeByPrevIdx( PrevTenantId,
			PrevId );
	}

	void CFBamTokenTypeTableObj::deleteTokenTypeByNextIdx( const int64_t* NextTenantId,
			const int64_t* NextId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->deleteTokenTypeByNextIdx( schema->getAuthorization(),
				NextTenantId,
				NextId );
		deepDisposeByNextIdx( NextTenantId,
			NextId );
	}

	void CFBamTokenTypeTableObj::deleteTokenTypeByContPrevIdx( const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* PrevId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->deleteTokenTypeByContPrevIdx( schema->getAuthorization(),
				TenantId,
				ScopeId,
				PrevId );
		deepDisposeByContPrevIdx( TenantId,
			ScopeId,
			PrevId );
	}

	void CFBamTokenTypeTableObj::deleteTokenTypeByContNextIdx( const int64_t TenantId,
			const int64_t ScopeId,
			const int64_t* NextId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->deleteTokenTypeByContNextIdx( schema->getAuthorization(),
				TenantId,
				ScopeId,
				NextId );
		deepDisposeByContNextIdx( TenantId,
			ScopeId,
			NextId );
	}

	void CFBamTokenTypeTableObj::deleteTokenTypeBySchemaIdx( const int64_t TenantId,
			const int64_t SchemaDefId )
	{
		dynamic_cast<cfbam::ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->deleteTokenTypeBySchemaIdx( schema->getAuthorization(),
				TenantId,
				SchemaDefId );
		deepDisposeBySchemaIdx( TenantId,
			SchemaDefId );
	}

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::moveUpTokenType( cfbam::ICFBamTokenTypeObj* Obj ) {
		static const std::string S_ProcName( "moveUpTokenType" );
		static const std::string S_CannotMoveEdition( "You cannot move an object that is being edited" );
		cfbam::ICFBamTokenTypeObj* obj = NULL;
		if( NULL != Obj->getEdit() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_CannotMoveEdition );
		}
		cfbam::CFBamTokenTypeBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->moveBuffUp( schema->getAuthorization(),
			Obj->getRequiredTenantId(),
			Obj->getRequiredId(),
			Obj->getTokenTypeBuff()->getRequiredRevision() );
		if( buff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->newInstance();
			obj->setBuff( buff );
			obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
			cfbam::ICFBamValueObj* prev = obj->getOptionalLookupPrev( true );
			cfbam::ICFBamValueObj* next = obj->getOptionalLookupNext( true );
			if( next != NULL ) {
				cfbam::ICFBamValueObj* gnext = next->getOptionalLookupNext( true );
			}
		}
		return( obj );
	}

	cfbam::ICFBamTokenTypeObj* CFBamTokenTypeTableObj::moveDownTokenType( cfbam::ICFBamTokenTypeObj* Obj ) {
		static const std::string S_ProcName( "moveDownTokenType" );
		static const std::string S_CannotMoveEdition( "You cannot move an object that is being edited" );
		cfbam::ICFBamTokenTypeObj* obj = NULL;
		if( NULL != Obj->getEdit() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_CannotMoveEdition );
		}
		cfbam::CFBamTokenTypeBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTokenType()->moveBuffDown( schema->getAuthorization(),
			Obj->getRequiredTenantId(),
			Obj->getRequiredId(),
			Obj->getTokenTypeBuff()->getRequiredRevision() );
		if( buff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamTokenTypeTableObj*>( schema->getTokenTypeTableObj() )->newInstance();
			obj->setBuff( buff );
			obj = dynamic_cast<cfbam::ICFBamTokenTypeObj*>( obj->realize() );
			cfbam::ICFBamValueObj* prev = obj->getOptionalLookupPrev( true );
			if( prev != NULL ) {
				cfbam::ICFBamValueObj* gprev = prev->getOptionalLookupPrev( true );
			}
			cfbam::ICFBamValueObj* next = obj->getOptionalLookupNext( true );
		}
		return( obj );
	}

	void CFBamTokenTypeTableObj::reallyDetachFromIndexesTokenType( cfbam::ICFBamTokenTypeObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesTokenType" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfbam::ICFBamTokenTypeObj* obj = Obj;
		cfbam::CFBamValuePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfbam::ICFBamTokenTypeObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByUNameIdx != NULL ) {
				cfbam::CFBamValueByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyUNameIdx.setRequiredScopeId( obj->getRequiredScopeId() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			if( indexByValTentIdx != NULL ) {
				cfbam::CFBamValueByValTentIdxKey keyValTentIdx;
				keyValTentIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchValTentIdx = indexByValTentIdx->find( keyValTentIdx );
				if( searchValTentIdx != indexByValTentIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapValTentIdx = searchValTentIdx->second;
					if( mapValTentIdx != NULL ) {
						auto removalProbe = mapValTentIdx->find( *pkey );
						if( removalProbe != mapValTentIdx->end() ) {
							mapValTentIdx->erase( removalProbe );
							if( mapValTentIdx->empty() ) {
								delete mapValTentIdx;
								mapValTentIdx = NULL;
								indexByValTentIdx->erase( searchValTentIdx );
							}
						}
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				cfbam::CFBamValueByScopeIdxKey keyScopeIdx;
				keyScopeIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyScopeIdx.setRequiredScopeId( obj->getRequiredScopeId() );
				auto searchScopeIdx = indexByScopeIdx->find( keyScopeIdx );
				if( searchScopeIdx != indexByScopeIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapScopeIdx = searchScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						auto removalProbe = mapScopeIdx->find( *pkey );
						if( removalProbe != mapScopeIdx->end() ) {
							mapScopeIdx->erase( removalProbe );
							if( mapScopeIdx->empty() ) {
								delete mapScopeIdx;
								mapScopeIdx = NULL;
								indexByScopeIdx->erase( searchScopeIdx );
							}
						}
					}
				}
			}

			if( indexByDefSchemaIdx != NULL ) {
				cfbam::CFBamValueByDefSchemaIdxKey keyDefSchemaIdx;
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
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapDefSchemaIdx = searchDefSchemaIdx->second;
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

			if( indexByPrevIdx != NULL ) {
				cfbam::CFBamValueByPrevIdxKey keyPrevIdx;
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
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapPrevIdx = searchPrevIdx->second;
					if( mapPrevIdx != NULL ) {
						auto removalProbe = mapPrevIdx->find( *pkey );
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
				cfbam::CFBamValueByNextIdxKey keyNextIdx;
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
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapNextIdx = searchNextIdx->second;
					if( mapNextIdx != NULL ) {
						auto removalProbe = mapNextIdx->find( *pkey );
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

			if( indexByContPrevIdx != NULL ) {
				cfbam::CFBamValueByContPrevIdxKey keyContPrevIdx;
				keyContPrevIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyContPrevIdx.setRequiredScopeId( obj->getRequiredScopeId() );
				if( obj->isOptionalPrevIdNull() ) {
					keyContPrevIdx.setOptionalPrevIdNull();
				}
				else {
					keyContPrevIdx.setOptionalPrevIdValue( obj->getOptionalPrevIdValue() );
				}
				auto searchContPrevIdx = indexByContPrevIdx->find( keyContPrevIdx );
				if( searchContPrevIdx != indexByContPrevIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapContPrevIdx = searchContPrevIdx->second;
					if( mapContPrevIdx != NULL ) {
						auto removalProbe = mapContPrevIdx->find( *pkey );
						if( removalProbe != mapContPrevIdx->end() ) {
							mapContPrevIdx->erase( removalProbe );
							if( mapContPrevIdx->empty() ) {
								delete mapContPrevIdx;
								mapContPrevIdx = NULL;
								indexByContPrevIdx->erase( searchContPrevIdx );
							}
						}
					}
				}
			}

			if( indexByContNextIdx != NULL ) {
				cfbam::CFBamValueByContNextIdxKey keyContNextIdx;
				keyContNextIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyContNextIdx.setRequiredScopeId( obj->getRequiredScopeId() );
				if( obj->isOptionalNextIdNull() ) {
					keyContNextIdx.setOptionalNextIdNull();
				}
				else {
					keyContNextIdx.setOptionalNextIdValue( obj->getOptionalNextIdValue() );
				}
				auto searchContNextIdx = indexByContNextIdx->find( keyContNextIdx );
				if( searchContNextIdx != indexByContNextIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapContNextIdx = searchContNextIdx->second;
					if( mapContNextIdx != NULL ) {
						auto removalProbe = mapContNextIdx->find( *pkey );
						if( removalProbe != mapContNextIdx->end() ) {
							mapContNextIdx->erase( removalProbe );
							if( mapContNextIdx->empty() ) {
								delete mapContNextIdx;
								mapContNextIdx = NULL;
								indexByContNextIdx->erase( searchContNextIdx );
							}
						}
					}
				}
			}

			if( indexBySchemaIdx != NULL ) {
				cfbam::CFBamTokenTypeBySchemaIdxKey keySchemaIdx;
				keySchemaIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keySchemaIdx.setRequiredSchemaDefId( obj->getRequiredSchemaDefId() );
				auto searchSchemaIdx = indexBySchemaIdx->find( keySchemaIdx );
				if( searchSchemaIdx != indexBySchemaIdx->end() ) {
					std::map<cfbam::CFBamValuePKey, cfbam::ICFBamTokenTypeObj*>* mapSchemaIdx = searchSchemaIdx->second;
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

			members->erase( searchMembers );
		}
			dynamic_cast<cfbam::CFBamTokenDefTableObj*>( schema->getTokenDefTableObj() )->reallyDetachFromIndexesTokenDef( Obj );
	}


}
