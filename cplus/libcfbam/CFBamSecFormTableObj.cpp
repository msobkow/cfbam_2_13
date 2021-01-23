// Description: C++18 Table Object implementation for CFBam.

/*
 *	org.msscf.msscf.CFBam
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFSec 2.13 Security Essentials
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

	const std::string CFBamSecFormTableObj::CLASS_NAME( "CFBamSecFormTableObj" );
	const std::string CFBamSecFormTableObj::TABLE_NAME( "SecForm" );
	const std::string CFBamSecFormTableObj::TABLE_DBNAME( "SecForm" );

	CFBamSecFormTableObj::CFBamSecFormTableObj() {
		schema = NULL;
		members = new std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>();
		allSecForm = NULL;
		indexByClusterIdx = new std::map< cfsec::CFSecSecFormByClusterIdxKey,
			std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>*>();
		indexBySecAppIdx = new std::map< cfsec::CFSecSecFormBySecAppIdxKey,
			std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>*>();
		indexByUJEEServletIdx = new std::map< cfsec::CFSecSecFormByUJEEServletIdxKey,
			cfsec::ICFSecSecFormObj*>();
	}

	CFBamSecFormTableObj::CFBamSecFormTableObj( cfsec::ICFSecSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>();
		allSecForm = NULL;
		indexByClusterIdx = new std::map< cfsec::CFSecSecFormByClusterIdxKey,
			std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>*>();
		indexBySecAppIdx = new std::map< cfsec::CFSecSecFormBySecAppIdxKey,
			std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>*>();
		indexByUJEEServletIdx = new std::map< cfsec::CFSecSecFormByUJEEServletIdxKey,
			cfsec::ICFSecSecFormObj*>();
	}

	CFBamSecFormTableObj::~CFBamSecFormTableObj() {
		minimizeMemory();
		if( indexByClusterIdx != NULL ) {
			delete indexByClusterIdx;
			indexByClusterIdx = NULL;
		}
		if( indexBySecAppIdx != NULL ) {
			delete indexBySecAppIdx;
			indexBySecAppIdx = NULL;
		}
		if( indexByUJEEServletIdx != NULL ) {
			delete indexByUJEEServletIdx;
			indexByUJEEServletIdx = NULL;
		}
		if( members != NULL ) {
			cfsec::ICFSecSecFormObj* curMember;
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

	cfsec::ICFSecSchemaObj* CFBamSecFormTableObj::getSchema() {
		return( schema );
	}

	void CFBamSecFormTableObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamSecFormTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamSecFormTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamSecFormTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFBamSecFormTableObj::minimizeMemory() {
		if( allSecForm != NULL ) {
			allSecForm->clear();
			delete allSecForm;
			allSecForm = NULL;
		}
		if( indexByClusterIdx != NULL ) {
			std::map< cfsec::CFSecSecFormByClusterIdxKey,
				std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* >::iterator iterByClusterIdx = indexByClusterIdx->begin();
			std::map< cfsec::CFSecSecFormByClusterIdxKey,
				std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* >::iterator endByClusterIdx = indexByClusterIdx->end();
			std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* curByClusterIdx = NULL;
			while( iterByClusterIdx != endByClusterIdx ) {
				curByClusterIdx = iterByClusterIdx->second;
				if( curByClusterIdx != NULL ) {
					curByClusterIdx->clear();
					delete curByClusterIdx;
					curByClusterIdx = NULL;
					iterByClusterIdx->second = NULL;
				}
				iterByClusterIdx ++;
			}
			indexByClusterIdx->clear();
		}
		if( indexBySecAppIdx != NULL ) {
			std::map< cfsec::CFSecSecFormBySecAppIdxKey,
				std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* >::iterator iterBySecAppIdx = indexBySecAppIdx->begin();
			std::map< cfsec::CFSecSecFormBySecAppIdxKey,
				std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* >::iterator endBySecAppIdx = indexBySecAppIdx->end();
			std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* curBySecAppIdx = NULL;
			while( iterBySecAppIdx != endBySecAppIdx ) {
				curBySecAppIdx = iterBySecAppIdx->second;
				if( curBySecAppIdx != NULL ) {
					curBySecAppIdx->clear();
					delete curBySecAppIdx;
					curBySecAppIdx = NULL;
					iterBySecAppIdx->second = NULL;
				}
				iterBySecAppIdx ++;
			}
			indexBySecAppIdx->clear();
		}
		if( indexByUJEEServletIdx != NULL ) {
			indexByUJEEServletIdx->clear();
		}
		if( members != NULL ) {
			cfsec::ICFSecSecFormObj* cur = NULL;
			cfsec::ICFSecSecFormEditObj* edit = NULL;
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

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::newInstance() {
		cfsec::ICFSecSecFormObj* inst = dynamic_cast<cfsec::ICFSecSecFormObj*>( new CFBamSecFormObj( schema ) );
		return( inst );
	}

	cfsec::ICFSecSecFormEditObj* CFBamSecFormTableObj::newEditInstance( cfsec::ICFSecSecFormObj* orig ) {
		cfsec::ICFSecSecFormEditObj* edit = dynamic_cast<cfsec::ICFSecSecFormEditObj*>( new CFBamSecFormEditObj( orig ));
		return( edit );
	}

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::realizeSecForm( cfsec::ICFSecSecFormObj* Obj ) {
		static const std::string S_ProcName( "realizeSecForm" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfsec::ICFSecSecFormObj* obj = Obj;
		cfsec::ICFSecSecFormObj* existingObj = NULL;
		cfsec::CFSecSecFormPKey* pkey = obj->getPKey();
		cfsec::ICFSecSecFormObj* keepObj = NULL;
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
			if( indexByClusterIdx != NULL ) {
				cfsec::CFSecSecFormByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexBySecAppIdx != NULL ) {
				cfsec::CFSecSecFormBySecAppIdxKey keySecAppIdx;
				keySecAppIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keySecAppIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				auto searchSecAppIdx = indexBySecAppIdx->find( keySecAppIdx );
				if( searchSecAppIdx != indexBySecAppIdx->end() ) {
					std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* mapSecAppIdx = searchSecAppIdx->second;
					if( mapSecAppIdx != NULL ) {
						auto removalProbe = mapSecAppIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapSecAppIdx->end() ) {
							mapSecAppIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUJEEServletIdx != NULL ) {
				cfsec::CFSecSecFormByUJEEServletIdxKey keyUJEEServletIdx;
				keyUJEEServletIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUJEEServletIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				keyUJEEServletIdx.setRequiredJEEServletMapName( keepObj->getRequiredJEEServletMapName() );
				auto removalProbe = indexByUJEEServletIdx->find( keyUJEEServletIdx );
				if( removalProbe != indexByUJEEServletIdx->end() ) {
					indexByUJEEServletIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfsec::CFSecSecFormBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfsec::ICFSecSecFormObj* aClusterIdxObj =
					dynamic_cast<cfsec::ICFSecSecFormObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfsec::CFSecSecFormByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexBySecAppIdx != NULL ) {
				static const std::string S_ASecAppIdxObj( "aSecAppIdxObj" );
				cfsec::ICFSecSecFormObj* aSecAppIdxObj =
					dynamic_cast<cfsec::ICFSecSecFormObj*>( keepObj );
				if( aSecAppIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASecAppIdxObj );
				}
				cfsec::CFSecSecFormBySecAppIdxKey keySecAppIdx;
				keySecAppIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keySecAppIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				auto searchIndexBySecAppIdx = indexBySecAppIdx->find( keySecAppIdx );
				if( searchIndexBySecAppIdx != indexBySecAppIdx->end() ) {
					std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* mapSecAppIdx = searchIndexBySecAppIdx->second;
					if( mapSecAppIdx != NULL ) {
						mapSecAppIdx->insert( std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj* >::value_type( *(keepObj->getPKey()), aSecAppIdxObj ) );
					}
				}
			}

			if( indexByUJEEServletIdx != NULL ) {
				static const std::string S_AUJEEServletIdxObj( "aUJEEServletIdxObj" );
				cfsec::ICFSecSecFormObj* aUJEEServletIdxObj =
					dynamic_cast<cfsec::ICFSecSecFormObj*>( keepObj );
				if( aUJEEServletIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUJEEServletIdxObj );
				}
				cfsec::CFSecSecFormByUJEEServletIdxKey keyUJEEServletIdx;
				keyUJEEServletIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUJEEServletIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				keyUJEEServletIdx.setRequiredJEEServletMapName( keepObj->getRequiredJEEServletMapName() );
				indexByUJEEServletIdx->insert( std::map< cfsec::CFSecSecFormByUJEEServletIdxKey, cfsec::ICFSecSecFormObj* >::value_type( keyUJEEServletIdx, aUJEEServletIdxObj ) );
			}

			if( allSecForm != NULL ) {
				allSecForm->insert( std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfsec::ICFSecSecFormObj* aClusterIdxObj =
					dynamic_cast<cfsec::ICFSecSecFormObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfsec::CFSecSecFormByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexBySecAppIdx != NULL ) {
				static const std::string S_ASecAppIdxObj( "aSecAppIdxObj" );
				cfsec::ICFSecSecFormObj* aSecAppIdxObj =
					dynamic_cast<cfsec::ICFSecSecFormObj*>( keepObj );
				if( aSecAppIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASecAppIdxObj );
				}
				cfsec::CFSecSecFormBySecAppIdxKey keySecAppIdx;
				keySecAppIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keySecAppIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				auto searchIndexBySecAppIdx = indexBySecAppIdx->find( keySecAppIdx );
				if( searchIndexBySecAppIdx != indexBySecAppIdx->end() ) {
					std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* mapSecAppIdx = searchIndexBySecAppIdx->second;
					if( mapSecAppIdx != NULL ) {
						mapSecAppIdx->insert( std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj* >::value_type( *(keepObj->getPKey()), aSecAppIdxObj ) );
					}
				}
			}

			if( indexByUJEEServletIdx != NULL ) {
				static const std::string S_AUJEEServletIdxObj( "aUJEEServletIdxObj" );
				cfsec::ICFSecSecFormObj* aUJEEServletIdxObj =
					dynamic_cast<cfsec::ICFSecSecFormObj*>( keepObj );
				if( aUJEEServletIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUJEEServletIdxObj );
				}
				cfsec::CFSecSecFormByUJEEServletIdxKey keyUJEEServletIdx;
				keyUJEEServletIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUJEEServletIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				keyUJEEServletIdx.setRequiredJEEServletMapName( keepObj->getRequiredJEEServletMapName() );
				indexByUJEEServletIdx->insert( std::map< cfsec::CFSecSecFormByUJEEServletIdxKey, cfsec::ICFSecSecFormObj* >::value_type( keyUJEEServletIdx, aUJEEServletIdxObj ) );
			}

			if( allSecForm != NULL ) {
				allSecForm->insert( std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamSecFormTableObj::deepDisposeByIdIdx( const int64_t ClusterId,
			const int32_t SecFormId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfsec::ICFSecSecFormObj*> list;
		cfsec::ICFSecSecFormObj* existingObj = readCachedSecFormByIdIdx( ClusterId,
				SecFormId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfsec::ICFSecSecFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecSecFormBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->reallyDeepDisposeSecForm( dynamic_cast<cfsec::ICFSecSecFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSecFormTableObj::deepDisposeByClusterIdx( const int64_t ClusterId ) {
		static const std::string S_ProcName( "deepDisposeByClusterIdx" );
		std::vector<cfsec::ICFSecSecFormObj*> list;
		std::vector<cfsec::ICFSecSecFormObj*> matchesFound = readCachedSecFormByClusterIdx( ClusterId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfsec::ICFSecSecFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecSecFormBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->reallyDeepDisposeSecForm( dynamic_cast<cfsec::ICFSecSecFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSecFormTableObj::deepDisposeBySecAppIdx( const int64_t ClusterId,
			const int32_t SecAppId ) {
		static const std::string S_ProcName( "deepDisposeBySecAppIdx" );
		std::vector<cfsec::ICFSecSecFormObj*> list;
		std::vector<cfsec::ICFSecSecFormObj*> matchesFound = readCachedSecFormBySecAppIdx( ClusterId,
				SecAppId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfsec::ICFSecSecFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecSecFormBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->reallyDeepDisposeSecForm( dynamic_cast<cfsec::ICFSecSecFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSecFormTableObj::deepDisposeByUJEEServletIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName ) {
		static const std::string S_ProcName( "deepDisposeByUJEEServletIdx" );
		std::vector<cfsec::ICFSecSecFormObj*> list;
		cfsec::ICFSecSecFormObj* existingObj = readCachedSecFormByUJEEServletIdx( ClusterId,
				SecAppId,
				JEEServletMapName );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfsec::ICFSecSecFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecSecFormBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->reallyDeepDisposeSecForm( dynamic_cast<cfsec::ICFSecSecFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamSecFormTableObj::reallyDeepDisposeSecForm( cfsec::ICFSecSecFormObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSecForm" );

		if( Obj == NULL ) {
			return;
		}

		cfsec::ICFSecSecFormObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfsec::CFSecSecFormBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->reallyDetachFromIndexesSecForm( dynamic_cast<cfsec::ICFSecSecFormObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::createSecForm( cfsec::ICFSecSecFormEditObj* Obj ) {
		static const std::string S_ProcName( "createSecForm" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecSecFormObj* obj = dynamic_cast<cfsec::ICFSecSecFormObj*>( Obj->getOrig() );
		try {
			cfsec::CFSecSecFormBuff* buff = dynamic_cast<cfsec::CFSecSecFormBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->createSecForm(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfsec::CFSecSecFormBuff*>( cloneable ) );
			obj = dynamic_cast<cfsec::ICFSecSecFormObj*>( obj->realize() );
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

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::readSecForm( cfsec::CFSecSecFormPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecForm" );
		cfsec::ICFSecSecFormObj* obj = NULL;
		cfsec::ICFSecSecFormObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecSecFormBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredClusterId(),
			pkey->getRequiredSecFormId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfsec::ICFSecSecFormObj*>( obj->realize() );
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

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::lockSecForm( cfsec::CFSecSecFormPKey* pkey ) {
		static const std::string S_ProcName( "lockSecForm" );
		cfsec::ICFSecSecFormObj* locked = NULL;
		cfsec::CFSecSecFormBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfsec::ICFSecSecFormObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfsec::ICFSecSecFormObj*> CFBamSecFormTableObj::readAllSecForm( bool forceRead ) {
		static const std::string S_ProcName( "readAllSecForm" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecSecFormObj* realized = NULL;
		if( forceRead || ( allSecForm == NULL ) ) {
			std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* map = new std::map<cfsec::CFSecSecFormPKey,cfsec::ICFSecSecFormObj*>();
			allSecForm = map;
			std::TCFLibOwningVector<cfsec::CFSecSecFormBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->readAllDerived( schema->getAuthorization() );
			cfsec::CFSecSecFormBuff* buff = NULL;
			cfsec::ICFSecSecFormObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfsec::ICFSecSecFormObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSecForm->insert( std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSecForm->size();
		std::vector<cfsec::ICFSecSecFormObj*> arr;
		auto valIter = allSecForm->begin();
		size_t idx = 0;
		while( valIter != allSecForm->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfsec::ICFSecSecFormObj*> CFBamSecFormTableObj::pageAllSecForm(const int64_t* priorClusterId,
			const int32_t* priorSecFormId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllSecForm" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* map = NULL;
		cfsec::CFSecSecFormBuff* buff = NULL;
		cfsec::ICFSecSecFormObj* obj = NULL;
		cfsec::ICFSecSecFormObj* realized = NULL;
		std::vector<cfsec::ICFSecSecFormObj*> arrayList;
		try {
			map = new std::map<cfsec::CFSecSecFormPKey,cfsec::ICFSecSecFormObj*>();
			std::TCFLibOwningVector<cfsec::CFSecSecFormBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->pageAllBuff( schema->getAuthorization(),
				priorClusterId,
				priorSecFormId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecSecFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
				arrayList.push_back( realized );
				realized = NULL;
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( ( obj != NULL ) && obj->getIsNew() ) {
			delete obj;
			obj = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( arrayList );
	}

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::readSecFormByIdIdx( const int64_t ClusterId,
			const int32_t SecFormId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecFormByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecFormPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecFormId( SecFormId );
		cfsec::ICFSecSecFormObj* obj = readSecForm( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfsec::ICFSecSecFormObj*> CFBamSecFormTableObj::readSecFormByClusterIdx( const int64_t ClusterId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecFormByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecFormByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* dict;
		std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* oldDict;
		if( indexByClusterIdx == NULL ) {
			indexByClusterIdx = new std::map< cfsec::CFSecSecFormByClusterIdxKey,
				std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>*>();
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			oldDict = searchIndexByClusterIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>();
			cfsec::ICFSecSecFormObj* obj;
			std::TCFLibOwningVector<cfsec::CFSecSecFormBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->readDerivedByClusterIdx( schema->getAuthorization(),
				ClusterId );
			cfsec::CFSecSecFormBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfsec::ICFSecSecFormObj* realized = dynamic_cast<cfsec::ICFSecSecFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClusterIdx->erase( searchIndexByClusterIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClusterIdx->insert( std::map< cfsec::CFSecSecFormByClusterIdxKey,
				std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfsec::ICFSecSecFormObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfsec::ICFSecSecFormObj*> CFBamSecFormTableObj::readSecFormBySecAppIdx( const int64_t ClusterId,
			const int32_t SecAppId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecFormBySecAppIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecFormBySecAppIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* dict;
		std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* oldDict;
		if( indexBySecAppIdx == NULL ) {
			indexBySecAppIdx = new std::map< cfsec::CFSecSecFormBySecAppIdxKey,
				std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>*>();
		}
		auto searchIndexBySecAppIdx = indexBySecAppIdx->find( key );
		if( searchIndexBySecAppIdx != indexBySecAppIdx->end() ) {
			oldDict = searchIndexBySecAppIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>();
			cfsec::ICFSecSecFormObj* obj;
			std::TCFLibOwningVector<cfsec::CFSecSecFormBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->readDerivedBySecAppIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId );
			cfsec::CFSecSecFormBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfsec::ICFSecSecFormObj* realized = dynamic_cast<cfsec::ICFSecSecFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexBySecAppIdx->erase( searchIndexBySecAppIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexBySecAppIdx->insert( std::map< cfsec::CFSecSecFormBySecAppIdxKey,
				std::map< cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfsec::ICFSecSecFormObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::readSecFormByUJEEServletIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName, bool forceRead )
	{
		static const std::string S_ProcName( "readSecFormByUJEEServletIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUJEEServletIdx == NULL ) {
			indexByUJEEServletIdx = new std::map< cfsec::CFSecSecFormByUJEEServletIdxKey,
				cfsec::ICFSecSecFormObj*>();
		}
		cfsec::CFSecSecFormByUJEEServletIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		key.setRequiredJEEServletMapName( JEEServletMapName );
		cfsec::ICFSecSecFormObj* obj = NULL;
		cfsec::ICFSecSecFormObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUJEEServletIdx = indexByUJEEServletIdx->find( key );
			if( searchIndexByUJEEServletIdx != indexByUJEEServletIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUJEEServletIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecSecFormBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->readDerivedByUJEEServletIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId,
				JEEServletMapName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecSecFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUJEEServletIdx->insert( std::map< cfsec::CFSecSecFormByUJEEServletIdxKey, cfsec::ICFSecSecFormObj*>::value_type( key, dynamic_cast<cfsec::ICFSecSecFormObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::readSecFormByLookupUJEEServletIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readSecFormByLookupUJEEServletIdx" );
		if( indexByUJEEServletIdx == NULL ) {
			indexByUJEEServletIdx = new std::map< cfsec::CFSecSecFormByUJEEServletIdxKey,
				cfsec::ICFSecSecFormObj*>();
		}
		cfsec::CFSecSecFormByUJEEServletIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		key.setRequiredJEEServletMapName( JEEServletMapName );
		cfsec::ICFSecSecFormObj* obj = NULL;
		cfsec::ICFSecSecFormObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUJEEServletIdx = indexByUJEEServletIdx->find( key );
			if( searchIndexByUJEEServletIdx != indexByUJEEServletIdx->end() ) {
				obj = searchIndexByUJEEServletIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecSecFormBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->readDerivedByLookupUJEEServletIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId,
				JEEServletMapName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfsec::ICFSecSecFormObj*>( dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecSecFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUJEEServletIdx->insert( std::map< cfsec::CFSecSecFormByUJEEServletIdxKey, cfsec::ICFSecSecFormObj*>::value_type( key, dynamic_cast<cfsec::ICFSecSecFormObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::readCachedSecForm( cfsec::CFSecSecFormPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecForm" );
		cfsec::ICFSecSecFormObj* obj = NULL;
		cfsec::ICFSecSecFormObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::readCachedSecFormByIdIdx( const int64_t ClusterId,
			const int32_t SecFormId )
	{
		static const std::string S_ProcName( "readCachedSecFormByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecFormPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecFormId( SecFormId );
		cfsec::ICFSecSecFormObj* obj = readCachedSecForm( &pkey );
		return( obj );
	}

	std::vector<cfsec::ICFSecSecFormObj*> CFBamSecFormTableObj::readCachedSecFormByClusterIdx( const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readCachedSecFormByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfsec::ICFSecSecFormObj*> arr;
		cfsec::CFSecSecFormByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* dict;
		if( indexByClusterIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			dict = searchIndexByClusterIdx->second;
			size_t len = dict->size();
			std::vector<cfsec::ICFSecSecFormObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfsec::ICFSecSecFormObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecSecFormBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfsec::ICFSecSecFormObj*> CFBamSecFormTableObj::readCachedSecFormBySecAppIdx( const int64_t ClusterId,
			const int32_t SecAppId )
	{
		static const std::string S_ProcName( "readCachedSecFormBySecAppIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfsec::ICFSecSecFormObj*> arr;
		cfsec::CFSecSecFormBySecAppIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* dict;
		if( indexBySecAppIdx == NULL ) {
			return( arr );
		}
		auto searchIndexBySecAppIdx = indexBySecAppIdx->find( key );
		if( searchIndexBySecAppIdx != indexBySecAppIdx->end() ) {
			dict = searchIndexBySecAppIdx->second;
			size_t len = dict->size();
			std::vector<cfsec::ICFSecSecFormObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfsec::ICFSecSecFormObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecSecFormBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::readCachedSecFormByUJEEServletIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName )
	{
		static const std::string S_ProcName( "readCachedSecFormByUJEEServletIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUJEEServletIdx == NULL ) {
			indexByUJEEServletIdx = new std::map< cfsec::CFSecSecFormByUJEEServletIdxKey,
				cfsec::ICFSecSecFormObj*>();
		}
		cfsec::CFSecSecFormByUJEEServletIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		key.setRequiredJEEServletMapName( JEEServletMapName );
		cfsec::ICFSecSecFormObj* obj = NULL;
		auto searchIndexByUJEEServletIdx = indexByUJEEServletIdx->find( key );
		if( searchIndexByUJEEServletIdx != indexByUJEEServletIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUJEEServletIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecSecFormBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::readCachedSecFormByLookupUJEEServletIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedSecFormByLookupUJEEServletIdx" );
		if( indexByUJEEServletIdx == NULL ) {
			indexByUJEEServletIdx = new std::map< cfsec::CFSecSecFormByUJEEServletIdxKey,
				cfsec::ICFSecSecFormObj*>();
		}
		cfsec::CFSecSecFormByUJEEServletIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		key.setRequiredJEEServletMapName( JEEServletMapName );
		cfsec::ICFSecSecFormObj* obj = NULL;
		cfsec::ICFSecSecFormObj* realized = NULL;
		auto searchIndexByUJEEServletIdx = indexByUJEEServletIdx->find( key );
		if( searchIndexByUJEEServletIdx != indexByUJEEServletIdx->end() ) {
			obj = searchIndexByUJEEServletIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecSecFormBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfsec::ICFSecSecFormObj*> CFBamSecFormTableObj::pageSecFormByClusterIdx( const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId )
	{
		static const std::string S_ProcName( "pageSecFormByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecFormByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		cfsec::ICFSecSecFormObj* obj;
		std::TCFLibOwningVector<cfsec::CFSecSecFormBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->pageBuffByClusterIdx( schema->getAuthorization(),
				ClusterId,
				priorClusterId,
				priorSecFormId );
		std::vector<cfsec::ICFSecSecFormObj*> retList;
		retList.reserve( buffList.size() );
		cfsec::CFSecSecFormBuff* buff;
		cfsec::ICFSecSecFormObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfsec::ICFSecSecFormObj*>( obj->realize() );
			if( realized == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Realized );
			}
			// No need to delete obj -- realize() auto-destructs the instance it decided to discard
			obj = NULL;
			retList.push_back( realized );
		}
		return( retList );
	}

	std::vector<cfsec::ICFSecSecFormObj*> CFBamSecFormTableObj::pageSecFormBySecAppIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId )
	{
		static const std::string S_ProcName( "pageSecFormBySecAppIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecSecFormBySecAppIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		cfsec::ICFSecSecFormObj* obj;
		std::TCFLibOwningVector<cfsec::CFSecSecFormBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->pageBuffBySecAppIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId,
				priorClusterId,
				priorSecFormId );
		std::vector<cfsec::ICFSecSecFormObj*> retList;
		retList.reserve( buffList.size() );
		cfsec::CFSecSecFormBuff* buff;
		cfsec::ICFSecSecFormObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfsec::ICFSecSecFormObj*>( obj->realize() );
			if( realized == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Realized );
			}
			// No need to delete obj -- realize() auto-destructs the instance it decided to discard
			obj = NULL;
			retList.push_back( realized );
		}
		return( retList );
	}

	cfsec::ICFSecSecFormObj* CFBamSecFormTableObj::updateSecForm( cfsec::ICFSecSecFormEditObj* Obj ) {
		static const std::string S_ProcName( "updateSecForm" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecSecFormObj* obj = dynamic_cast<cfsec::ICFSecSecFormObj*>( Obj->getOrig() );
		try {
			cfsec::CFSecSecFormBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->updateSecForm( schema->getAuthorization(),
				dynamic_cast<cfsec::CFSecSecFormBuff*>( Obj->getSecFormBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfsec::ICFSecSecFormObj*>( dynamic_cast<cfbam::CFBamSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfsec::ICFSecSecFormObj*>( obj->realize() );
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

	void CFBamSecFormTableObj::deleteSecForm( cfsec::ICFSecSecFormEditObj* Obj ) {
		cfsec::ICFSecSecFormObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->deleteSecForm( schema->getAuthorization(),
			obj->getSecFormBuff() );
		deepDisposeByIdIdx( obj->getRequiredClusterId(),
			obj->getRequiredSecFormId() );
	}

	void CFBamSecFormTableObj::deleteSecFormByIdIdx( const int64_t ClusterId,
			const int32_t SecFormId )
	{
		cfsec::CFSecSecFormPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecFormId( SecFormId );
		cfsec::ICFSecSecFormObj* obj = readSecForm( &pkey, true );
		if( obj != NULL ) {
			cfsec::ICFSecSecFormEditObj* editObj = dynamic_cast<cfsec::ICFSecSecFormEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfsec::ICFSecSecFormEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamSecFormTableObj::deleteSecFormByClusterIdx( const int64_t ClusterId )
	{
		dynamic_cast<cfsec::ICFSecSchema*>( schema->getBackingStore() )->getTableSecForm()->deleteSecFormByClusterIdx( schema->getAuthorization(),
				ClusterId );
		deepDisposeByClusterIdx( ClusterId );
	}

	void CFBamSecFormTableObj::deleteSecFormBySecAppIdx( const int64_t ClusterId,
			const int32_t SecAppId )
	{
		dynamic_cast<cfsec::ICFSecSchema*>( schema->getBackingStore() )->getTableSecForm()->deleteSecFormBySecAppIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId );
		deepDisposeBySecAppIdx( ClusterId,
			SecAppId );
	}

	void CFBamSecFormTableObj::deleteSecFormByUJEEServletIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName )
	{
		if( indexByUJEEServletIdx == NULL ) {
			indexByUJEEServletIdx = new std::map< cfsec::CFSecSecFormByUJEEServletIdxKey,
				cfsec::ICFSecSecFormObj*>();
		}
		cfsec::CFSecSecFormByUJEEServletIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		key.setRequiredJEEServletMapName( JEEServletMapName );
		cfsec::ICFSecSecFormObj* obj = NULL;
		auto searchIndexByUJEEServletIdx = indexByUJEEServletIdx->find( key );
		if( searchIndexByUJEEServletIdx != indexByUJEEServletIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->deleteSecFormByUJEEServletIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId,
				JEEServletMapName );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableSecForm()->deleteSecFormByUJEEServletIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId,
				JEEServletMapName );
		}
		deepDisposeByUJEEServletIdx( ClusterId,
			SecAppId,
			JEEServletMapName );
	}

	void CFBamSecFormTableObj::reallyDetachFromIndexesSecForm( cfsec::ICFSecSecFormObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSecForm" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfsec::ICFSecSecFormObj* obj = Obj;
		cfsec::CFSecSecFormPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfsec::ICFSecSecFormObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByClusterIdx != NULL ) {
				cfsec::CFSecSecFormByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
							if( mapClusterIdx->empty() ) {
								delete mapClusterIdx;
								mapClusterIdx = NULL;
								indexByClusterIdx->erase( searchClusterIdx );
							}
						}
					}
				}
			}

			if( indexBySecAppIdx != NULL ) {
				cfsec::CFSecSecFormBySecAppIdxKey keySecAppIdx;
				keySecAppIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keySecAppIdx.setRequiredSecAppId( obj->getRequiredSecAppId() );
				auto searchSecAppIdx = indexBySecAppIdx->find( keySecAppIdx );
				if( searchSecAppIdx != indexBySecAppIdx->end() ) {
					std::map<cfsec::CFSecSecFormPKey, cfsec::ICFSecSecFormObj*>* mapSecAppIdx = searchSecAppIdx->second;
					if( mapSecAppIdx != NULL ) {
						auto removalProbe = mapSecAppIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapSecAppIdx->end() ) {
							mapSecAppIdx->erase( removalProbe );
							if( mapSecAppIdx->empty() ) {
								delete mapSecAppIdx;
								mapSecAppIdx = NULL;
								indexBySecAppIdx->erase( searchSecAppIdx );
							}
						}
					}
				}
			}

			if( indexByUJEEServletIdx != NULL ) {
				cfsec::CFSecSecFormByUJEEServletIdxKey keyUJEEServletIdx;
				keyUJEEServletIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyUJEEServletIdx.setRequiredSecAppId( obj->getRequiredSecAppId() );
				keyUJEEServletIdx.setRequiredJEEServletMapName( obj->getRequiredJEEServletMapName() );
				auto removalProbe = indexByUJEEServletIdx->find( keyUJEEServletIdx );
				if( removalProbe != indexByUJEEServletIdx->end() ) {
					indexByUJEEServletIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
