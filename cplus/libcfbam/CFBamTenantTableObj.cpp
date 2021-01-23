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

	const std::string CFBamTenantTableObj::CLASS_NAME( "CFBamTenantTableObj" );
	const std::string CFBamTenantTableObj::TABLE_NAME( "Tenant" );
	const std::string CFBamTenantTableObj::TABLE_DBNAME( "tenant" );

	CFBamTenantTableObj::CFBamTenantTableObj() {
		schema = NULL;
		members = new std::map<cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>();
		allTenant = NULL;
		indexByClusterIdx = new std::map< cfsec::CFSecTenantByClusterIdxKey,
			std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>*>();
		indexByUNameIdx = new std::map< cfsec::CFSecTenantByUNameIdxKey,
			cfsec::ICFSecTenantObj*>();
	}

	CFBamTenantTableObj::CFBamTenantTableObj( cfsec::ICFSecSchemaObj* argSchema ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( argSchema );
		members = new std::map<cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>();
		allTenant = NULL;
		indexByClusterIdx = new std::map< cfsec::CFSecTenantByClusterIdxKey,
			std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>*>();
		indexByUNameIdx = new std::map< cfsec::CFSecTenantByUNameIdxKey,
			cfsec::ICFSecTenantObj*>();
	}

	CFBamTenantTableObj::~CFBamTenantTableObj() {
		minimizeMemory();
		if( indexByClusterIdx != NULL ) {
			delete indexByClusterIdx;
			indexByClusterIdx = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( members != NULL ) {
			cfsec::ICFSecTenantObj* curMember;
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

	cfsec::ICFSecSchemaObj* CFBamTenantTableObj::getSchema() {
		return( schema );
	}

	void CFBamTenantTableObj::setSchema( cfsec::ICFSecSchemaObj* value ) {
		schema = dynamic_cast<cfbam::ICFBamSchemaObj*>( value );
	}

	const std::string CFBamTenantTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFBamTenantTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFBamTenantTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFBamTenantTableObj::minimizeMemory() {
		if( allTenant != NULL ) {
			allTenant->clear();
			delete allTenant;
			allTenant = NULL;
		}
		if( indexByClusterIdx != NULL ) {
			std::map< cfsec::CFSecTenantByClusterIdxKey,
				std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>* >::iterator iterByClusterIdx = indexByClusterIdx->begin();
			std::map< cfsec::CFSecTenantByClusterIdxKey,
				std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>* >::iterator endByClusterIdx = indexByClusterIdx->end();
			std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>* curByClusterIdx = NULL;
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
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( members != NULL ) {
			cfsec::ICFSecTenantObj* cur = NULL;
			cfsec::ICFSecTenantEditObj* edit = NULL;
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

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::newInstance() {
		cfsec::ICFSecTenantObj* inst = dynamic_cast<cfsec::ICFSecTenantObj*>( new CFBamTenantObj( schema ) );
		return( inst );
	}

	cfsec::ICFSecTenantEditObj* CFBamTenantTableObj::newEditInstance( cfsec::ICFSecTenantObj* orig ) {
		cfsec::ICFSecTenantEditObj* edit = dynamic_cast<cfsec::ICFSecTenantEditObj*>( new CFBamTenantEditObj( orig ));
		return( edit );
	}

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::realizeTenant( cfsec::ICFSecTenantObj* Obj ) {
		static const std::string S_ProcName( "realizeTenant" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfsec::ICFSecTenantObj* obj = Obj;
		cfsec::ICFSecTenantObj* existingObj = NULL;
		cfsec::CFSecTenantPKey* pkey = obj->getPKey();
		cfsec::ICFSecTenantObj* keepObj = NULL;
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
				cfsec::CFSecTenantByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfsec::CFSecTenantByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUNameIdx.setRequiredTenantName( keepObj->getRequiredTenantName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfsec::CFSecTenantBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfsec::ICFSecTenantObj* aClusterIdxObj =
					dynamic_cast<cfsec::ICFSecTenantObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfsec::CFSecTenantByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfsec::ICFSecTenantObj* aUNameIdxObj =
					dynamic_cast<cfsec::ICFSecTenantObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfsec::CFSecTenantByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUNameIdx.setRequiredTenantName( keepObj->getRequiredTenantName() );
				indexByUNameIdx->insert( std::map< cfsec::CFSecTenantByUNameIdxKey, cfsec::ICFSecTenantObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allTenant != NULL ) {
				allTenant->insert( std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfsec::ICFSecTenantObj* aClusterIdxObj =
					dynamic_cast<cfsec::ICFSecTenantObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfsec::CFSecTenantByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfsec::ICFSecTenantObj* aUNameIdxObj =
					dynamic_cast<cfsec::ICFSecTenantObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfsec::CFSecTenantByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUNameIdx.setRequiredTenantName( keepObj->getRequiredTenantName() );
				indexByUNameIdx->insert( std::map< cfsec::CFSecTenantByUNameIdxKey, cfsec::ICFSecTenantObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allTenant != NULL ) {
				allTenant->insert( std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFBamTenantTableObj::deepDisposeByIdIdx( const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfsec::ICFSecTenantObj*> list;
		cfsec::ICFSecTenantObj* existingObj = readCachedTenantByIdIdx( Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfsec::ICFSecTenantObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecTenantBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTenantTableObj*>( schema->getTenantTableObj() )->reallyDeepDisposeTenant( dynamic_cast<cfsec::ICFSecTenantObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTenantTableObj::deepDisposeByClusterIdx( const int64_t ClusterId ) {
		static const std::string S_ProcName( "deepDisposeByClusterIdx" );
		std::vector<cfsec::ICFSecTenantObj*> list;
		std::vector<cfsec::ICFSecTenantObj*> matchesFound = readCachedTenantByClusterIdx( ClusterId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfsec::ICFSecTenantObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecTenantBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTenantTableObj*>( schema->getTenantTableObj() )->reallyDeepDisposeTenant( dynamic_cast<cfsec::ICFSecTenantObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTenantTableObj::deepDisposeByUNameIdx( const int64_t ClusterId,
			const std::string& TenantName ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfsec::ICFSecTenantObj*> list;
		cfsec::ICFSecTenantObj* existingObj = readCachedTenantByUNameIdx( ClusterId,
				TenantName );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfsec::ICFSecTenantObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfsec::CFSecTenantBuff::CLASS_CODE ) {
					dynamic_cast<cfbam::CFBamTenantTableObj*>( schema->getTenantTableObj() )->reallyDeepDisposeTenant( dynamic_cast<cfsec::ICFSecTenantObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFBamTenantTableObj::reallyDeepDisposeTenant( cfsec::ICFSecTenantObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeTenant" );

		if( Obj == NULL ) {
			return;
		}

		cfsec::ICFSecTenantObj* obj = Obj;
		
		cfbam::ICFBamSchemaDefObj* objDelTableChain;
		std::vector<cfbam::ICFBamSchemaDefObj*> arrDelTableChain = dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->readCachedSchemaDefByCTenantIdx( obj->getRequiredId() );
		std::vector<cfbam::ICFBamSchemaDefObj*>::iterator iterArrDelTableChain = arrDelTableChain.begin();
		std::vector<cfbam::ICFBamSchemaDefObj*>::iterator endArrDelTableChain = arrDelTableChain.end();
		while( iterArrDelTableChain != endArrDelTableChain ) {
			objDelTableChain = *iterArrDelTableChain;
			iterArrDelTableChain ++;
			cfbam::ICFBamTableObj* objTables;
			std::vector<cfbam::ICFBamTableObj*> arrTables = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( objDelTableChain->getRequiredTenantId(),
				objDelTableChain->getRequiredId() );
			std::vector<cfbam::ICFBamTableObj*>::iterator iterArrTables = arrTables.begin();
			std::vector<cfbam::ICFBamTableObj*>::iterator endArrTables = arrTables.end();
			while( iterArrTables != endArrTables ) {
				objTables = *iterArrTables;
				iterArrTables ++;
			dynamic_cast<cfbam::CFBamChainTableObj*>( schema->getChainTableObj() )->deepDisposeByChainTableIdx( objTables->getRequiredTenantId(),
				objTables->getRequiredId() );
			}
		}
		cfbam::ICFBamSchemaDefObj* objDelTableRelationCol;
		std::vector<cfbam::ICFBamSchemaDefObj*> arrDelTableRelationCol = dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->readCachedSchemaDefByCTenantIdx( obj->getRequiredId() );
		std::vector<cfbam::ICFBamSchemaDefObj*>::iterator iterArrDelTableRelationCol = arrDelTableRelationCol.begin();
		std::vector<cfbam::ICFBamSchemaDefObj*>::iterator endArrDelTableRelationCol = arrDelTableRelationCol.end();
		while( iterArrDelTableRelationCol != endArrDelTableRelationCol ) {
			objDelTableRelationCol = *iterArrDelTableRelationCol;
			iterArrDelTableRelationCol ++;
			cfbam::ICFBamTableObj* objTables;
			std::vector<cfbam::ICFBamTableObj*> arrTables = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( objDelTableRelationCol->getRequiredTenantId(),
				objDelTableRelationCol->getRequiredId() );
			std::vector<cfbam::ICFBamTableObj*>::iterator iterArrTables = arrTables.begin();
			std::vector<cfbam::ICFBamTableObj*>::iterator endArrTables = arrTables.end();
			while( iterArrTables != endArrTables ) {
				objTables = *iterArrTables;
				iterArrTables ++;
			cfbam::ICFBamRelationObj* objTableRelation;
			std::vector<cfbam::ICFBamRelationObj*> arrTableRelation = dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->readCachedRelationByRelTableIdx( objTables->getRequiredTenantId(),
				objTables->getRequiredId() );
			std::vector<cfbam::ICFBamRelationObj*>::iterator iterTableRelation = arrTableRelation.begin();
			std::vector<cfbam::ICFBamRelationObj*>::iterator endTableRelation = arrTableRelation.end();
			while( iterTableRelation != endTableRelation ) {
				objTableRelation = *iterTableRelation;
				iterTableRelation ++;
			dynamic_cast<cfbam::CFBamRelationColTableObj*>( schema->getRelationColTableObj() )->deepDisposeByRelationIdx( objTableRelation->getRequiredTenantId(),
				objTableRelation->getRequiredId() );
			}
			}
		}
		cfbam::ICFBamSchemaDefObj* objDelTableRelation;
		std::vector<cfbam::ICFBamSchemaDefObj*> arrDelTableRelation = dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->readCachedSchemaDefByCTenantIdx( obj->getRequiredId() );
		std::vector<cfbam::ICFBamSchemaDefObj*>::iterator iterArrDelTableRelation = arrDelTableRelation.begin();
		std::vector<cfbam::ICFBamSchemaDefObj*>::iterator endArrDelTableRelation = arrDelTableRelation.end();
		while( iterArrDelTableRelation != endArrDelTableRelation ) {
			objDelTableRelation = *iterArrDelTableRelation;
			iterArrDelTableRelation ++;
			cfbam::ICFBamTableObj* objTables;
			std::vector<cfbam::ICFBamTableObj*> arrTables = dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->readCachedTableBySchemaDefIdx( objDelTableRelation->getRequiredTenantId(),
				objDelTableRelation->getRequiredId() );
			std::vector<cfbam::ICFBamTableObj*>::iterator iterArrTables = arrTables.begin();
			std::vector<cfbam::ICFBamTableObj*>::iterator endArrTables = arrTables.end();
			while( iterArrTables != endArrTables ) {
				objTables = *iterArrTables;
				iterArrTables ++;
			dynamic_cast<cfbam::CFBamRelationTableObj*>( schema->getRelationTableObj() )->deepDisposeByRelTableIdx( objTables->getRequiredTenantId(),
				objTables->getRequiredId() );
			}
		}
		cfbam::ICFBamSchemaDefObj* objDelTable;
		std::vector<cfbam::ICFBamSchemaDefObj*> arrDelTable = dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->readCachedSchemaDefByCTenantIdx( obj->getRequiredId() );
		std::vector<cfbam::ICFBamSchemaDefObj*>::iterator iterArrDelTable = arrDelTable.begin();
		std::vector<cfbam::ICFBamSchemaDefObj*>::iterator endArrDelTable = arrDelTable.end();
		while( iterArrDelTable != endArrDelTable ) {
			objDelTable = *iterArrDelTable;
			iterArrDelTable ++;
			dynamic_cast<cfbam::CFBamTableTableObj*>( schema->getTableTableObj() )->deepDisposeBySchemaDefIdx( objDelTable->getRequiredTenantId(),
				objDelTable->getRequiredId() );
		}
		cfbam::ICFBamSchemaDefObj* objDelTypeDef;
		std::vector<cfbam::ICFBamSchemaDefObj*> arrDelTypeDef = dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->readCachedSchemaDefByCTenantIdx( obj->getRequiredId() );
		std::vector<cfbam::ICFBamSchemaDefObj*>::iterator iterArrDelTypeDef = arrDelTypeDef.begin();
		std::vector<cfbam::ICFBamSchemaDefObj*>::iterator endArrDelTypeDef = arrDelTypeDef.end();
		while( iterArrDelTypeDef != endArrDelTypeDef ) {
			objDelTypeDef = *iterArrDelTypeDef;
			iterArrDelTypeDef ++;
			dynamic_cast<cfbam::CFBamValueTableObj*>( schema->getValueTableObj() )->deepDisposeByScopeIdx( objDelTypeDef->getRequiredTenantId(),
				objDelTypeDef->getRequiredId() );
		}
		dynamic_cast<cfbam::CFBamSchemaDefTableObj*>( schema->getSchemaDefTableObj() )->deepDisposeByCTenantIdx( obj->getRequiredId() );
		dynamic_cast<cfbam::CFBamTldTableObj*>( schema->getTldTableObj() )->deepDisposeByTenantIdx( obj->getRequiredId() );
		cfsec::ICFSecTSecGroupObj* objDelIncludedByGroup;
		std::vector<cfsec::ICFSecTSecGroupObj*> arrDelIncludedByGroup = dynamic_cast<cfbam::CFBamTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->readCachedTSecGroupByTenantIdx( obj->getRequiredId() );
		std::vector<cfsec::ICFSecTSecGroupObj*>::iterator iterArrDelIncludedByGroup = arrDelIncludedByGroup.begin();
		std::vector<cfsec::ICFSecTSecGroupObj*>::iterator endArrDelIncludedByGroup = arrDelIncludedByGroup.end();
		while( iterArrDelIncludedByGroup != endArrDelIncludedByGroup ) {
			objDelIncludedByGroup = *iterArrDelIncludedByGroup;
			iterArrDelIncludedByGroup ++;
			dynamic_cast<cfbam::CFBamTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->deepDisposeByIncludeIdx( objDelIncludedByGroup->getRequiredTenantId(),
				objDelIncludedByGroup->getRequiredTSecGroupId() );
		}
		cfsec::ICFSecTSecGroupObj* objDelGrpMembs;
		std::vector<cfsec::ICFSecTSecGroupObj*> arrDelGrpMembs = dynamic_cast<cfbam::CFBamTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->readCachedTSecGroupByTenantIdx( obj->getRequiredId() );
		std::vector<cfsec::ICFSecTSecGroupObj*>::iterator iterArrDelGrpMembs = arrDelGrpMembs.begin();
		std::vector<cfsec::ICFSecTSecGroupObj*>::iterator endArrDelGrpMembs = arrDelGrpMembs.end();
		while( iterArrDelGrpMembs != endArrDelGrpMembs ) {
			objDelGrpMembs = *iterArrDelGrpMembs;
			iterArrDelGrpMembs ++;
			dynamic_cast<cfbam::CFBamTSecGrpMembTableObj*>( schema->getTSecGrpMembTableObj() )->deepDisposeByGroupIdx( objDelGrpMembs->getRequiredTenantId(),
				objDelGrpMembs->getRequiredTSecGroupId() );
		}
		cfsec::ICFSecTSecGroupObj* objDelGrpIncs;
		std::vector<cfsec::ICFSecTSecGroupObj*> arrDelGrpIncs = dynamic_cast<cfbam::CFBamTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->readCachedTSecGroupByTenantIdx( obj->getRequiredId() );
		std::vector<cfsec::ICFSecTSecGroupObj*>::iterator iterArrDelGrpIncs = arrDelGrpIncs.begin();
		std::vector<cfsec::ICFSecTSecGroupObj*>::iterator endArrDelGrpIncs = arrDelGrpIncs.end();
		while( iterArrDelGrpIncs != endArrDelGrpIncs ) {
			objDelGrpIncs = *iterArrDelGrpIncs;
			iterArrDelGrpIncs ++;
			dynamic_cast<cfbam::CFBamTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->deepDisposeByGroupIdx( objDelGrpIncs->getRequiredTenantId(),
				objDelGrpIncs->getRequiredTSecGroupId() );
		}
		dynamic_cast<cfbam::CFBamTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->deepDisposeByTenantIdx( obj->getRequiredId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfsec::CFSecTenantBuff::CLASS_CODE ) {
			dynamic_cast<cfbam::CFBamTenantTableObj*>( schema->getTenantTableObj() )->reallyDetachFromIndexesTenant( dynamic_cast<cfsec::ICFSecTenantObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::createTenant( cfsec::ICFSecTenantEditObj* Obj ) {
		static const std::string S_ProcName( "createTenant" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecTenantObj* obj = dynamic_cast<cfsec::ICFSecTenantObj*>( Obj->getOrig() );
		try {
			cfsec::CFSecTenantBuff* buff = dynamic_cast<cfsec::CFSecTenantBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->createTenant(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfsec::CFSecTenantBuff*>( cloneable ) );
			obj = dynamic_cast<cfsec::ICFSecTenantObj*>( obj->realize() );
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

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::readTenant( cfsec::CFSecTenantPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTenant" );
		cfsec::ICFSecTenantObj* obj = NULL;
		cfsec::ICFSecTenantObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecTenantBuff* readBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfbam::CFBamTenantTableObj*>( schema->getTenantTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfsec::ICFSecTenantObj*>( obj->realize() );
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

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::lockTenant( cfsec::CFSecTenantPKey* pkey ) {
		static const std::string S_ProcName( "lockTenant" );
		cfsec::ICFSecTenantObj* locked = NULL;
		cfsec::CFSecTenantBuff* lockBuff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfbam::CFBamTenantTableObj*>( schema->getTenantTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfsec::ICFSecTenantObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfsec::ICFSecTenantObj*> CFBamTenantTableObj::readAllTenant( bool forceRead ) {
		static const std::string S_ProcName( "readAllTenant" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecTenantObj* realized = NULL;
		if( forceRead || ( allTenant == NULL ) ) {
			std::map<cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>* map = new std::map<cfsec::CFSecTenantPKey,cfsec::ICFSecTenantObj*>();
			allTenant = map;
			std::TCFLibOwningVector<cfsec::CFSecTenantBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->readAllDerived( schema->getAuthorization() );
			cfsec::CFSecTenantBuff* buff = NULL;
			cfsec::ICFSecTenantObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfsec::ICFSecTenantObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allTenant->insert( std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allTenant->size();
		std::vector<cfsec::ICFSecTenantObj*> arr;
		auto valIter = allTenant->begin();
		size_t idx = 0;
		while( valIter != allTenant->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfsec::ICFSecTenantObj*> CFBamTenantTableObj::pageAllTenant(const int64_t* priorId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllTenant" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>* map = NULL;
		cfsec::CFSecTenantBuff* buff = NULL;
		cfsec::ICFSecTenantObj* obj = NULL;
		cfsec::ICFSecTenantObj* realized = NULL;
		std::vector<cfsec::ICFSecTenantObj*> arrayList;
		try {
			map = new std::map<cfsec::CFSecTenantPKey,cfsec::ICFSecTenantObj*>();
			std::TCFLibOwningVector<cfsec::CFSecTenantBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->pageAllBuff( schema->getAuthorization(),
				priorId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecTenantObj*>( obj->realize() );
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

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::readTenantByIdIdx( const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readTenantByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecTenantPKey pkey;
		pkey.setRequiredId( Id );
		cfsec::ICFSecTenantObj* obj = readTenant( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfsec::ICFSecTenantObj*> CFBamTenantTableObj::readTenantByClusterIdx( const int64_t ClusterId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTenantByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecTenantByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>* dict;
		std::map<cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>* oldDict;
		if( indexByClusterIdx == NULL ) {
			indexByClusterIdx = new std::map< cfsec::CFSecTenantByClusterIdxKey,
				std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>*>();
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
			dict = new std::map<cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>();
			cfsec::ICFSecTenantObj* obj;
			std::TCFLibOwningVector<cfsec::CFSecTenantBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->readDerivedByClusterIdx( schema->getAuthorization(),
				ClusterId );
			cfsec::CFSecTenantBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamTenantTableObj*>( schema->getTenantTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfsec::ICFSecTenantObj* realized = dynamic_cast<cfsec::ICFSecTenantObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClusterIdx->erase( searchIndexByClusterIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClusterIdx->insert( std::map< cfsec::CFSecTenantByClusterIdxKey,
				std::map< cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfsec::ICFSecTenantObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::readTenantByUNameIdx( const int64_t ClusterId,
			const std::string& TenantName, bool forceRead )
	{
		static const std::string S_ProcName( "readTenantByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfsec::CFSecTenantByUNameIdxKey,
				cfsec::ICFSecTenantObj*>();
		}
		cfsec::CFSecTenantByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredTenantName( TenantName );
		cfsec::ICFSecTenantObj* obj = NULL;
		cfsec::ICFSecTenantObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecTenantBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->readDerivedByUNameIdx( schema->getAuthorization(),
				ClusterId,
				TenantName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfbam::CFBamTenantTableObj*>( schema->getTenantTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecTenantObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfsec::CFSecTenantByUNameIdxKey, cfsec::ICFSecTenantObj*>::value_type( key, dynamic_cast<cfsec::ICFSecTenantObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::readTenantByLookupUNameIdx( const int64_t ClusterId,
			const std::string& TenantName, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readTenantByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfsec::CFSecTenantByUNameIdxKey,
				cfsec::ICFSecTenantObj*>();
		}
		cfsec::CFSecTenantByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredTenantName( TenantName );
		cfsec::ICFSecTenantObj* obj = NULL;
		cfsec::ICFSecTenantObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				obj = searchIndexByUNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfsec::CFSecTenantBuff* buff = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->readDerivedByLookupUNameIdx( schema->getAuthorization(),
				ClusterId,
				TenantName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfsec::ICFSecTenantObj*>( dynamic_cast<cfbam::CFBamTenantTableObj*>( schema->getTenantTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfsec::ICFSecTenantObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfsec::CFSecTenantByUNameIdxKey, cfsec::ICFSecTenantObj*>::value_type( key, dynamic_cast<cfsec::ICFSecTenantObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::readCachedTenant( cfsec::CFSecTenantPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTenant" );
		cfsec::ICFSecTenantObj* obj = NULL;
		cfsec::ICFSecTenantObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::readCachedTenantByIdIdx( const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedTenantByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecTenantPKey pkey;
		pkey.setRequiredId( Id );
		cfsec::ICFSecTenantObj* obj = readCachedTenant( &pkey );
		return( obj );
	}

	std::vector<cfsec::ICFSecTenantObj*> CFBamTenantTableObj::readCachedTenantByClusterIdx( const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readCachedTenantByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfsec::ICFSecTenantObj*> arr;
		cfsec::CFSecTenantByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>* dict;
		if( indexByClusterIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			dict = searchIndexByClusterIdx->second;
			size_t len = dict->size();
			std::vector<cfsec::ICFSecTenantObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfsec::ICFSecTenantObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecTenantBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::readCachedTenantByUNameIdx( const int64_t ClusterId,
			const std::string& TenantName )
	{
		static const std::string S_ProcName( "readCachedTenantByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfsec::CFSecTenantByUNameIdxKey,
				cfsec::ICFSecTenantObj*>();
		}
		cfsec::CFSecTenantByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredTenantName( TenantName );
		cfsec::ICFSecTenantObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecTenantBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::readCachedTenantByLookupUNameIdx( const int64_t ClusterId,
			const std::string& TenantName )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedTenantByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfsec::CFSecTenantByUNameIdxKey,
				cfsec::ICFSecTenantObj*>();
		}
		cfsec::CFSecTenantByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredTenantName( TenantName );
		cfsec::ICFSecTenantObj* obj = NULL;
		cfsec::ICFSecTenantObj* realized = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfsec::CFSecTenantBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfsec::ICFSecTenantObj*> CFBamTenantTableObj::pageTenantByClusterIdx( const int64_t ClusterId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageTenantByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfsec::CFSecTenantByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		cfsec::ICFSecTenantObj* obj;
		std::TCFLibOwningVector<cfsec::CFSecTenantBuff*> buffList = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->pageBuffByClusterIdx( schema->getAuthorization(),
				ClusterId,
				priorId );
		std::vector<cfsec::ICFSecTenantObj*> retList;
		retList.reserve( buffList.size() );
		cfsec::CFSecTenantBuff* buff;
		cfsec::ICFSecTenantObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfbam::CFBamTenantTableObj*>( schema->getTenantTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfsec::ICFSecTenantObj*>( obj->realize() );
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

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::updateTenant( cfsec::ICFSecTenantEditObj* Obj ) {
		static const std::string S_ProcName( "updateTenant" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfsec::ICFSecTenantObj* obj = dynamic_cast<cfsec::ICFSecTenantObj*>( Obj->getOrig() );
		try {
			cfsec::CFSecTenantBuff* updated = dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->updateTenant( schema->getAuthorization(),
				dynamic_cast<cfsec::CFSecTenantBuff*>( Obj->getTenantBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfsec::ICFSecTenantObj*>( dynamic_cast<cfbam::CFBamTenantTableObj*>( schema->getTenantTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfsec::ICFSecTenantObj*>( obj->realize() );
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

	void CFBamTenantTableObj::deleteTenant( cfsec::ICFSecTenantEditObj* Obj ) {
		cfsec::ICFSecTenantObj* obj = Obj;
		dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->deleteTenant( schema->getAuthorization(),
			obj->getTenantBuff() );
		deepDisposeByIdIdx( obj->getRequiredId() );
	}

	void CFBamTenantTableObj::deleteTenantByIdIdx( const int64_t Id )
	{
		cfsec::CFSecTenantPKey pkey;
		pkey.setRequiredId( Id );
		cfsec::ICFSecTenantObj* obj = readTenant( &pkey, true );
		if( obj != NULL ) {
			cfsec::ICFSecTenantEditObj* editObj = dynamic_cast<cfsec::ICFSecTenantEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfsec::ICFSecTenantEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFBamTenantTableObj::deleteTenantByClusterIdx( const int64_t ClusterId )
	{
		dynamic_cast<cfsec::ICFSecSchema*>( schema->getBackingStore() )->getTableTenant()->deleteTenantByClusterIdx( schema->getAuthorization(),
				ClusterId );
		deepDisposeByClusterIdx( ClusterId );
	}

	void CFBamTenantTableObj::deleteTenantByUNameIdx( const int64_t ClusterId,
			const std::string& TenantName )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfsec::CFSecTenantByUNameIdxKey,
				cfsec::ICFSecTenantObj*>();
		}
		cfsec::CFSecTenantByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredTenantName( TenantName );
		cfsec::ICFSecTenantObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->deleteTenantByUNameIdx( schema->getAuthorization(),
				ClusterId,
				TenantName );
		}
		else {
			dynamic_cast<ICFBamSchema*>( schema->getBackingStore() )->getTableTenant()->deleteTenantByUNameIdx( schema->getAuthorization(),
				ClusterId,
				TenantName );
		}
		deepDisposeByUNameIdx( ClusterId,
			TenantName );
	}

	void CFBamTenantTableObj::reallyDetachFromIndexesTenant( cfsec::ICFSecTenantObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesTenant" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfsec::ICFSecTenantObj* obj = Obj;
		cfsec::CFSecTenantPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfsec::ICFSecTenantObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByClusterIdx != NULL ) {
				cfsec::CFSecTenantByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfsec::CFSecTenantPKey, cfsec::ICFSecTenantObj*>* mapClusterIdx = searchClusterIdx->second;
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

			if( indexByUNameIdx != NULL ) {
				cfsec::CFSecTenantByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyUNameIdx.setRequiredTenantName( obj->getRequiredTenantName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}

	cfsec::ICFSecTenantObj* CFBamTenantTableObj::getSystemTenant() {
		static const std::string S_System( "system" );
		bool transactionStarted = schema->beginTransaction();
		cfsec::ICFSecTenantObj* tenantObj;
		try {
			cfsec::ICFSecClusterObj* clusterObj = schema->getClusterTableObj()->getSystemCluster();
			tenantObj = readTenantByUNameIdx( clusterObj->getRequiredId(), S_System );
			if( tenantObj == NULL ) {
				tenantObj = readTenantByUNameIdx( clusterObj->getRequiredId(), S_System, true );
				if( tenantObj == NULL ) {
					tenantObj = newInstance();
					cfsec::ICFSecTenantEditObj* tenantEdit = tenantObj->beginEdit();
					tenantEdit->setRequiredContainerCluster( clusterObj );
					tenantEdit->setRequiredTenantName( S_System );
					tenantObj = tenantEdit->create();
				}
			}
			if( transactionStarted ) {
				schema->commit();
			}
		}
		catch( std::exception& e ) {
			if( transactionStarted ) {
				try {
					schema->rollback();
				}
				catch( ... ) {
				}
			}
			throw e;
		}
		return( tenantObj );
	}


}
